// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143467a20 FUN_143467a20 body=133 status=ok
// SIG undefined FUN_143467a20(void)

void FUN_143467a20(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x54);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000074;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(iVar2 + -0x76c);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467ab0 FUN_143467ab0 body=425 status=ok
// SIG undefined FUN_143467ab0(void)

void FUN_143467ab0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x23)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                  &DAT_145b09d8c);
    return;
  }
  uVar7 = 0;
  iVar5 = 0;
  uVar6 = *(longlong *)(param_1 + 0x10) - 0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar6 = uVar7;
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar9 = uVar7;
    if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      uVar9 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    dVar11 = (double)FUN_143411a90(uVar9);
    uVar1 = *(uint *)(uVar6 + 0x74);
    iVar2 = *(int *)(uVar6 + 0x78);
    uVar8 = uVar1 & 0x80000003;
    uVar9 = uVar7;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    do {
      iVar10 = (int)uVar9;
      if ((uVar8 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      if (iVar2 < *(int *)(&DAT_145b08a40 + (uVar7 + (ulonglong)bVar4 * 0xc) * 4)) {
        if (iVar10 != 0) {
          bVar4 = FDateTime::IsLeapYear(uVar1);
          iVar5 = *(int *)(&DAT_145b08a40 + ((longlong)(iVar10 + -1) + (ulonglong)bVar4 * 0xc) * 4);
        }
        iVar5 = (int)dVar11 + -1 + (iVar5 - iVar2);
        *(int *)(uVar6 + 0x78) = iVar2 + iVar5;
        *(longlong *)(uVar6 + 0x68) = *(longlong *)(uVar6 + 0x68) + (longlong)iVar5 * 86400000;
        FUN_143465600(uVar6);
        return;
      }
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)(iVar10 + 1);
    } while ((longlong)uVar7 < 0xc);
  }
  return;
}



// FUNCTION 143467c60 FUN_143467c60 body=347 status=ok
// SIG undefined FUN_143467c60(void)

void FUN_143467c60(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  double dVar8;
  ulonglong uVar7;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar8 = (double)FUN_143411a90(lVar5);
        iVar3 = *(int *)(lVar4 + 0x78);
        uVar6 = (uint)dVar8;
        uVar7 = (ulonglong)uVar6;
        if (0x3b < iVar3) {
          bVar2 = FDateTime::IsLeapYear(*(undefined4 *)(lVar4 + 0x74));
          uVar6 = (uint)uVar7;
          iVar3 = iVar3 - (uint)bVar2;
          bVar2 = FDateTime::IsLeapYear(uVar7 & 0xffffffff);
          *(uint *)(lVar4 + 0x78) = iVar3 + (uint)bVar2;
        }
        *(uint *)(lVar4 + 0x74) = uVar6;
        *(longlong *)(lVar4 + 0x68) =
             (longlong)
             (int)((uVar6 - 0x7b2) * 0x16d +
                   ((int)(uVar6 - 0x641) / 400 - (int)(uVar6 - 0x76d) / 100) +
                   ((int)((uVar6 - 0x7b1) + ((int)(uVar6 - 0x7b1) >> 0x1f & 3U)) >> 2) +
                  *(int *)(lVar4 + 0x78)) * 86400000 + (longlong)*(int *)(lVar4 + 0x70);
        FUN_143465600(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467dd0 FUN_143467dd0 body=231 status=ok
// SIG undefined FUN_143467dd0(void)

void FUN_143467dd0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = ((int)dVar6 - *(int *)(lVar4 + 0x70) / 3600000) * 3600000;
        *(longlong *)(lVar4 + 0x68) = *(longlong *)(lVar4 + 0x68) + (longlong)iVar3;
        *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + iVar3;
        FUN_143465600(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467ec0 FUN_143467ec0 body=239 status=ok
// SIG undefined FUN_143467ec0(void)

void FUN_143467ec0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = (int)dVar6 - *(int *)(lVar4 + 0x70) % 1000;
        *(longlong *)(lVar4 + 0x68) = *(longlong *)(lVar4 + 0x68) + (longlong)iVar3;
        *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + iVar3;
        FUN_143465600(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467fc0 FUN_143467fc0 body=263 status=ok
// SIG undefined FUN_143467fc0(void)

void FUN_143467fc0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = ((int)dVar6 - (*(int *)(lVar4 + 0x70) % 3600000) / 60000) * 60000;
        *(longlong *)(lVar4 + 0x68) = *(longlong *)(lVar4 + 0x68) + (longlong)iVar3;
        *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + iVar3;
        FUN_143465600(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 1434680d0 FUN_1434680d0 body=599 status=ok
// SIG undefined FUN_1434680d0(void)

void FUN_1434680d0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x23)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                  &DAT_145b09d8c);
    return;
  }
  uVar11 = 0;
  uVar7 = *(longlong *)(param_1 + 0x10) - 0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar7 = uVar11;
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar8 = uVar11;
    if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      uVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    dVar12 = (double)FUN_143411a90(uVar8);
    uVar1 = *(uint *)(uVar7 + 0x74);
    uVar9 = uVar1 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    uVar8 = uVar11;
    uVar10 = uVar11;
    do {
      if ((uVar9 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      if (*(int *)(uVar7 + 0x78) < *(int *)(&DAT_145b08a40 + (uVar8 + (ulonglong)bVar4 * 0xc) * 4))
      {
        uVar9 = uVar1 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        uVar8 = uVar11;
        if ((uVar9 == 0) &&
           ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
          uVar8 = 1;
        }
        uVar9 = uVar1 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar9 != 0) ||
           ((uVar6 = 1, uVar1 == ((int)uVar1 / 100) * 100 && (uVar1 != ((int)uVar1 / 400) * 400))))
        {
          uVar6 = uVar11;
        }
        iVar5 = *(int *)(&DAT_145b08a40 + ((longlong)(int)dVar12 + uVar8 * 0xc) * 4);
        iVar2 = *(int *)(&DAT_145b08a40 + ((longlong)(int)uVar10 + uVar6 * 0xc) * 4);
        *(int *)(uVar7 + 0x78) = *(int *)(uVar7 + 0x78) + (iVar5 - iVar2);
        *(longlong *)(uVar7 + 0x68) =
             *(longlong *)(uVar7 + 0x68) + (longlong)(iVar5 - iVar2) * 86400000;
        FUN_143465600(uVar7);
        return;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 0xc);
  }
  return;
}



// FUNCTION 143468330 FUN_143468330 body=263 status=ok
// SIG undefined FUN_143468330(void)

void FUN_143468330(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = ((int)dVar6 - (*(int *)(lVar4 + 0x70) % 60000) / 1000) * 1000;
        *(longlong *)(lVar4 + 0x68) = *(longlong *)(lVar4 + 0x68) + (longlong)iVar3;
        *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + iVar3;
        FUN_143465600(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143468440 FUN_143468440 body=360 status=ok
// SIG undefined FUN_143468440(void)

void FUN_143468440(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  double dVar8;
  ulonglong uVar7;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar8 = (double)FUN_143411a90(lVar5);
        uVar6 = (uint)dVar8;
        if (uVar6 < 100) {
          uVar6 = uVar6 + 0x76c;
        }
        uVar7 = (ulonglong)uVar6;
        iVar3 = *(int *)(lVar4 + 0x78);
        if (0x3b < iVar3) {
          bVar2 = FDateTime::IsLeapYear(*(undefined4 *)(lVar4 + 0x74));
          uVar6 = (uint)uVar7;
          iVar3 = iVar3 - (uint)bVar2;
          bVar2 = FDateTime::IsLeapYear(uVar7 & 0xffffffff);
          *(uint *)(lVar4 + 0x78) = iVar3 + (uint)bVar2;
        }
        *(uint *)(lVar4 + 0x74) = uVar6;
        *(longlong *)(lVar4 + 0x68) =
             (longlong)
             (int)((uVar6 - 0x7b2) * 0x16d +
                   ((int)(uVar6 - 0x641) / 400 - (int)(uVar6 - 0x76d) / 100) +
                   ((int)((uVar6 - 0x7b1) + ((int)(uVar6 - 0x7b1) >> 0x1f & 3U)) >> 2) +
                  *(int *)(lVar4 + 0x78)) * 86400000 + (longlong)*(int *)(lVar4 + 0x70);
        FUN_143465600(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 1434685b0 FUN_1434685b0 body=2579 status=ok
// SIG undefined FUN_1434685b0(void)

void FUN_1434685b0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 local_4e8 [2];
  undefined1 *local_4e0;
  undefined8 local_4d8;
  undefined1 local_4c8 [9];
  char local_4bf;
  longlong *local_2e8 [65];
  longlong local_e0;
  ulonglong local_d8;
  undefined1 local_c8 [136];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar7 != 0x23)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                  &DAT_145b09d8c);
  }
  else {
    uVar10 = 0;
    uVar14 = *(longlong *)(param_1 + 0x10) - 0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar14 = uVar10;
    }
    iVar7 = 0;
    uVar1 = *(uint *)(uVar14 + 0x8c);
    uVar16 = uVar1 & 0x80000003;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
    }
    uVar15 = uVar10;
    uVar18 = uVar10;
    do {
      if ((uVar16 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      iVar17 = (int)uVar18;
      if (*(int *)(uVar14 + 0x90) < *(int *)(&DAT_145b08a40 + (uVar15 + (ulonglong)bVar5 * 0xc) * 4)
         ) {
        if (iVar17 != 0) {
          uVar16 = uVar1 & 0x80000003;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
          }
          if ((uVar16 != 0) ||
             ((uVar15 = 1, uVar1 == ((int)uVar1 / 100) * 100 && (uVar1 != ((int)uVar1 / 400) * 400))
             )) {
            uVar15 = uVar10;
          }
          iVar7 = *(int *)(&DAT_145b08a40 + ((longlong)(iVar17 + -1) + uVar15 * 0xc) * 4);
        }
        iVar13 = *(int *)(uVar14 + 0x90) - iVar7;
        iVar7 = iVar17;
        iVar17 = iVar13 + 1;
        break;
      }
      uVar18 = (ulonglong)(iVar17 + 1);
      uVar15 = uVar15 + 1;
      iVar17 = iVar7;
    } while ((longlong)uVar15 < 0xc);
    uVar10 = *(ulonglong *)(uVar14 + 0x80);
    if ((longlong)uVar10 < 0) {
      lVar12 = (3 - (longlong)((uVar10 ^ (longlong)uVar10 >> 0x3f) - ((longlong)uVar10 >> 0x3f)) /
                    86400000) % 7 + 7;
    }
    else {
      lVar12 = (longlong)uVar10 / 86400000 + 4;
    }
    iVar13 = *(int *)(uVar14 + 0x88);
    local_4e8[0] = 2;
    local_4d8 = 0x80;
    puVar3 = (&PTR_DAT_1467cf6a8)[lVar12 % 7];
    iVar2 = *(int *)(uVar14 + 0x94);
    local_4e0 = local_c8;
    FUN_1433561d0(local_4c8,local_4e8);
    FUN_1433563e0(local_4c8,"{0} {1} {2:2} {3:02}:{4:02}:{5:02} GMT{6:+03}{7:02} {8}");
    cVar6 = FUN_143356fb0(local_4c8);
    if (cVar6 != '\0') {
      do {
        if (local_d8 < 0x70) {
          plVar11 = local_2e8[0];
          if (local_2e8[0] == (longlong *)0x0) {
            plVar11 = DAT_146b62f28;
          }
          lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x70,8);
          lVar9 = local_e0;
        }
        else {
          lVar9 = (local_e0 + 0x6fU & 0xfffffffffffffff8) + 8;
          uVar10 = (lVar9 - (longlong)local_2e8) - 8;
          lVar12 = local_e0;
          local_d8 = 0x200 - uVar10;
          if (0x1ff < uVar10) {
            local_d8 = 0;
          }
        }
        local_e0 = lVar9;
        uVar10 = 0;
        if (lVar12 != 0) {
          uVar10 = FUN_143353cf0(lVar12,local_4c8,puVar3);
        }
        FUN_143357040(local_4c8,uVar10,1);
        cVar6 = FUN_143356fb0(local_4c8);
      } while (cVar6 != '\0');
    }
    local_4bf = local_4bf + '\x01';
    FUN_143386e30(local_4c8,&PTR_DAT_1467ce860 + iVar7);
    cVar6 = FUN_143356fb0(local_4c8);
    if (cVar6 != '\0') {
      do {
        if (local_d8 < 0x60) {
          plVar11 = local_2e8[0];
          if (local_2e8[0] == (longlong *)0x0) {
            plVar11 = DAT_146b62f28;
          }
          lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x60,8);
          lVar9 = local_e0;
        }
        else {
          lVar9 = (local_e0 + 0x5fU & 0xfffffffffffffff8) + 8;
          uVar10 = (lVar9 - (longlong)local_2e8) - 8;
          lVar12 = local_e0;
          local_d8 = 0x200 - uVar10;
          if (0x1ff < uVar10) {
            local_d8 = 0;
          }
        }
        local_e0 = lVar9;
        uVar10 = 0;
        if (lVar12 != 0) {
          uVar10 = FUN_143354cd0(lVar12,local_4c8,iVar17);
        }
        FUN_143357040(local_4c8,uVar10,1);
        cVar6 = FUN_143356fb0(local_4c8);
      } while (cVar6 != '\0');
    }
    local_4bf = local_4bf + '\x01';
    cVar6 = FUN_143356fb0(local_4c8);
    if (cVar6 != '\0') {
      do {
        if (local_d8 < 0x60) {
          plVar11 = local_2e8[0];
          if (local_2e8[0] == (longlong *)0x0) {
            plVar11 = DAT_146b62f28;
          }
          lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x60,8);
          lVar9 = local_e0;
        }
        else {
          lVar9 = (local_e0 + 0x5fU & 0xfffffffffffffff8) + 8;
          uVar10 = (lVar9 - (longlong)local_2e8) - 8;
          lVar12 = local_e0;
          local_d8 = 0x200 - uVar10;
          if (0x1ff < uVar10) {
            local_d8 = 0;
          }
        }
        local_e0 = lVar9;
        uVar10 = 0;
        if (lVar12 != 0) {
          uVar10 = FUN_143354cd0(lVar12,local_4c8,iVar13 / 3600000);
        }
        FUN_143357040(local_4c8,uVar10,1);
        cVar6 = FUN_143356fb0(local_4c8);
      } while (cVar6 != '\0');
    }
    local_4bf = local_4bf + '\x01';
    cVar6 = FUN_143356fb0(local_4c8);
    if (cVar6 != '\0') {
      do {
        if (local_d8 < 0x60) {
          plVar11 = local_2e8[0];
          if (local_2e8[0] == (longlong *)0x0) {
            plVar11 = DAT_146b62f28;
          }
          lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x60,8);
          lVar9 = local_e0;
        }
        else {
          lVar9 = (local_e0 + 0x5fU & 0xfffffffffffffff8) + 8;
          uVar10 = (lVar9 - (longlong)local_2e8) - 8;
          lVar12 = local_e0;
          local_d8 = 0x200 - uVar10;
          if (0x1ff < uVar10) {
            local_d8 = 0;
          }
        }
        local_e0 = lVar9;
        uVar10 = 0;
        if (lVar12 != 0) {
          uVar10 = FUN_143354cd0(lVar12,local_4c8,(iVar13 % 3600000) / 60000);
        }
        FUN_143357040(local_4c8,uVar10,1);
        cVar6 = FUN_143356fb0(local_4c8);
      } while (cVar6 != '\0');
    }
    local_4bf = local_4bf + '\x01';
    cVar6 = FUN_143356fb0(local_4c8);
    if (cVar6 != '\0') {
      do {
        if (local_d8 < 0x60) {
          plVar11 = local_2e8[0];
          if (local_2e8[0] == (longlong *)0x0) {
            plVar11 = DAT_146b62f28;
          }
          lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x60,8);
          lVar9 = local_e0;
        }
        else {
          lVar9 = (local_e0 + 0x5fU & 0xfffffffffffffff8) + 8;
          uVar10 = (lVar9 - (longlong)local_2e8) - 8;
          lVar12 = local_e0;
          local_d8 = 0x200 - uVar10;
          if (0x1ff < uVar10) {
            local_d8 = 0;
          }
        }
        local_e0 = lVar9;
        uVar10 = 0;
        if (lVar12 != 0) {
          uVar10 = FUN_143354cd0(lVar12,local_4c8,(iVar13 % 60000) / 1000);
        }
        FUN_143357040(local_4c8,uVar10,1);
        cVar6 = FUN_143356fb0(local_4c8);
      } while (cVar6 != '\0');
    }
    local_4bf = local_4bf + '\x01';
    cVar6 = FUN_143356fb0(local_4c8);
    lVar12 = local_e0;
    while (local_e0 = lVar12, cVar6 != '\0') {
      if (local_d8 < 0x60) {
        plVar11 = local_2e8[0];
        if (local_2e8[0] == (longlong *)0x0) {
          plVar11 = DAT_146b62f28;
        }
        lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x60,8);
      }
      else {
        local_e0 = (lVar12 + 0x5fU & 0xfffffffffffffff8) + 8;
        uVar10 = (local_e0 - (longlong)local_2e8) - 8;
        local_d8 = 0x200 - uVar10;
        if (0x1ff < uVar10) {
          local_d8 = 0;
        }
      }
      uVar8 = 0;
      if (lVar12 != 0) {
        uVar8 = FUN_143354cd0(lVar12,local_4c8,iVar2 / 3600000);
      }
      FUN_143357040(local_4c8,uVar8,1);
      cVar6 = FUN_143356fb0(local_4c8);
      lVar12 = local_e0;
    }
    local_4bf = local_4bf + '\x01';
    cVar6 = FUN_143356fb0(local_4c8);
    lVar12 = local_e0;
    while (local_e0 = lVar12, cVar6 != '\0') {
      if (local_d8 < 0x60) {
        plVar11 = local_2e8[0];
        if (local_2e8[0] == (longlong *)0x0) {
          plVar11 = DAT_146b62f28;
        }
        lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,0x60,8);
      }
      else {
        local_e0 = (lVar12 + 0x5fU & 0xfffffffffffffff8) + 8;
        uVar10 = (local_e0 - (longlong)local_2e8) - 8;
        local_d8 = 0x200 - uVar10;
        if (0x1ff < uVar10) {
          local_d8 = 0;
        }
      }
      uVar8 = 0;
      if (lVar12 != 0) {
        uVar8 = FUN_143354cd0(lVar12,local_4c8,(iVar2 % 3600000) / 60000);
      }
      FUN_143357040(local_4c8,uVar8,1);
      cVar6 = FUN_143356fb0(local_4c8);
      lVar12 = local_e0;
    }
    local_4bf = local_4bf + '\x01';
    FUN_1432e0b40(local_4c8,(uint *)(uVar14 + 0x8c));
    Scaleform::MsgFormat::FinishFormatD(local_4c8);
    FUN_1433562f0(local_4c8);
    lVar12 = FUN_143360a60(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                            + 0x618),local_c8);
    *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
    pbVar4 = *(byte **)(param_1 + 8);
    if (4 < *pbVar4) {
      FUN_143411150(pbVar4);
    }
    *pbVar4 = 5;
    *(longlong *)(pbVar4 + 8) = lVar12;
    iVar7 = *(int *)(lVar12 + 0x18);
    *(int *)(lVar12 + 0x18) = iVar7;
    if (iVar7 == 0) {
      FUN_14335f920(lVar12);
      return;
    }
  }
  return;
}



// FUNCTION 143468fd0 FUN_143468fd0 body=126 status=ok
// SIG undefined FUN_143468fd0(void)

void FUN_143468fd0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)&DAT_00000068;
      }
      lVar2 = *plVar4;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)lVar2;
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143469060 FUN_143469060 body=909 status=ok
// SIG undefined FUN_143469060(void)

void FUN_143469060(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    uVar5 = *(uint *)(param_1 + 0x3c);
    lVar4 = lVar6;
    if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    dVar9 = (double)FUN_143411a90(lVar4,lVar1);
    uVar5 = (uint)dVar9;
    if (uVar5 < 100) {
      uVar5 = uVar5 + 0x76c;
    }
    dVar9 = 0.0;
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    dVar11 = (double)(int)(((int)(uVar5 - 0x641) / 400 - (int)(uVar5 - 0x76d) / 100) +
                           ((int)((uVar5 - 0x7b1) + ((int)(uVar5 - 0x7b1) >> 0x1f & 3U)) >> 2) +
                          (uVar5 - 0x7b2) * 0x16d);
    lVar4 = lVar6;
    if (uVar7 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    dVar10 = (double)FUN_143411a90(lVar4);
    iVar8 = (int)dVar10;
    if (iVar8 != 0) {
      bVar3 = FDateTime::IsLeapYear(uVar5);
      dVar11 = dVar11 + (double)*(int *)(&DAT_145b08a40 +
                                        ((longlong)(iVar8 + -1) + (ulonglong)bVar3 * 0xc) * 4);
    }
    if (2 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 2;
      lVar4 = lVar6;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar10 = (double)FUN_143411a90(lVar4);
      dVar11 = dVar11 + (double)((int)dVar10 + -1);
    }
    if (3 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 3;
      lVar4 = lVar6;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar9 = (double)FUN_143411a90(lVar4);
      dVar9 = dVar9 * 3600000.0 + 0.0;
    }
    if (4 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 4;
      lVar4 = lVar6;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar10 = (double)FUN_143411a90(lVar4);
      dVar9 = dVar9 + dVar10 * 60000.0;
    }
    if (5 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 5;
      lVar4 = lVar6;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar10 = (double)FUN_143411a90(lVar4);
      dVar9 = dVar9 + dVar10 * 1000.0;
    }
    if (6 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 6;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar10 = (double)FUN_143411a90(lVar6);
      dVar9 = dVar9 + dVar10;
    }
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(double *)(pbVar2 + 8) = dVar11 * 86400000.0 + dVar9;
    *pbVar2 = 3;
    return;
  }
  pbVar2 = *(byte **)(param_1 + 8);
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  pbVar2[8] = 0;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  *pbVar2 = 3;
  return;
}



// FUNCTION 143469400 FUN_143469400 body=157 status=ok
// SIG undefined FUN_143469400(void)

undefined8 * FUN_143469400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_1434694b0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0f4e8;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_DAT_145b07960,7);
  return param_1;
}



// FUNCTION 1434694b0 FUN_1434694b0 body=1418 status=ok
// SIG undefined FUN_1434694b0(void)

void FUN_1434694b0(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  longlong local_res8;
  longlong local_e8;
  ushort local_e0;
  _TIME_ZONE_INFORMATION local_d8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0x23)) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = FUN_143465940(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
    }
  }
  uVar8 = 0;
  _ftime64(&local_e8);
  DVar5 = GetTimeZoneInformation(&local_d8);
  if (DVar5 == 1) {
    local_d8.Bias = local_d8.Bias + local_d8.StandardBias;
  }
  else if (DVar5 == 2) {
    local_d8.Bias = local_d8.Bias + local_d8.DaylightBias;
  }
  *(LONG *)(lVar7 + 0x94) = local_d8.Bias * -60000;
  FUN_143465a90(lVar7,local_e8 * 1000 + (ulonglong)local_e0);
  if (*(int *)(param_1 + 0x38) == 1) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(uint *)(param_1 + 0x3c);
    if (uVar12 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      uVar8 = (ulonglong)(uVar12 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar12 >> 5) * 8);
    }
    dVar13 = (double)FUN_143411a90(uVar8);
    FUN_143465a90(lVar7,(longlong)dVar13);
  }
  else if (1 < *(int *)(param_1 + 0x38)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(uint *)(param_1 + 0x3c);
    uVar10 = uVar8;
    if (uVar12 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      uVar10 = (ulonglong)(uVar12 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar12 >> 5) * 8);
    }
    dVar13 = (double)FUN_143411a90(uVar10);
    uVar12 = (uint)dVar13;
    if (uVar12 < 100) {
      uVar12 = uVar12 + 0x76c;
    }
    uVar9 = *(int *)(param_1 + 0x3c) - 1;
    lVar6 = *(longlong *)(param_1 + 0x30);
    iVar4 = ((int)(uVar12 - 0x641) / 400 - (int)(uVar12 - 0x76d) / 100) +
            ((int)((uVar12 - 0x7b1) + ((int)(uVar12 - 0x7b1) >> 0x1f & 3U)) >> 2) +
            (uVar12 - 0x7b2) * 0x16d;
    uVar10 = uVar8;
    if (uVar9 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    dVar13 = (double)FUN_143411a90(uVar10);
    iVar11 = (int)dVar13;
    if (iVar11 != 0) {
      bVar3 = FDateTime::IsLeapYear(uVar12);
      iVar4 = iVar4 + *(int *)(&DAT_145b08a40 +
                              ((longlong)(iVar11 + -1) + (ulonglong)bVar3 * 0xc) * 4);
    }
    if (2 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 2;
      uVar10 = uVar8;
      if (uVar9 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(uVar10);
      iVar4 = iVar4 + -1 + (int)dVar13;
    }
    uVar10 = uVar8;
    if (3 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 3;
      if (uVar9 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(uVar10);
      uVar10 = (ulonglong)(uint)((int)dVar13 * 3600000);
    }
    iVar11 = (int)uVar10;
    if (4 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 4;
      uVar10 = uVar8;
      if (uVar9 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(uVar10);
      iVar11 = iVar11 + (int)dVar13 * 60000;
    }
    if (5 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 5;
      uVar10 = uVar8;
      if (uVar9 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(uVar10);
      iVar11 = iVar11 + (int)dVar13 * 1000;
    }
    if (6 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 6;
      if (uVar9 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        uVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(uVar8);
      iVar11 = iVar11 + (int)dVar13;
    }
    *(uint *)(lVar7 + 0x8c) = uVar12;
    *(int *)(lVar7 + 0x88) = iVar11;
    *(uint *)(lVar7 + 0x90) =
         (((int)(uVar12 - 0x76d) / 100 - (int)(uVar12 - 0x641) / 400) -
         ((int)((uVar12 - 0x7b1) + ((int)(uVar12 - 0x7b1) >> 0x1f & 3U)) >> 2)) +
         (uVar12 - 0x7b2) * -0x16d + iVar4;
    *(longlong *)(lVar7 + 0x80) = (longlong)iVar4 * 86400000 + (longlong)iVar11;
    FUN_1434657b0(lVar7);
    FUN_143465a90(lVar7,*(undefined8 *)(lVar7 + 0x68));
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
  FUN_143411540(*(undefined8 *)(param_1 + 8),&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                0);
  pbVar2 = *(byte **)(param_1 + 8);
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *pbVar2 = 5;
  *(longlong *)(pbVar2 + 8) = local_res8;
  iVar4 = *(int *)(local_res8 + 0x18);
  *(int *)(local_res8 + 0x18) = iVar4;
  if (iVar4 == 0) {
    FUN_14335f920();
  }
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  return;
}



// FUNCTION 143469a40 FUN_143469a40 body=61 status=ok
// SIG undefined FUN_143469a40(void)

void FUN_143469a40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  if (lVar2 != 0) {
    FUN_143465940(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143469a90 FUN_143469a90 body=812 status=ok
// SIG undefined FUN_143469a90(void)

longlong * FUN_143469a90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_1434694b0;
    lVar3 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0f4e8;
    puVar2[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar2 + 4,&local_58,&PTR_DAT_145b07960,7);
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xd8,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = FUN_14341b750(param_2,1);
    FUN_143495000(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0f3f0;
    puVar4[4] = &PTR_LAB_145b0f438;
    puVar4[0x13] = &PTR_LAB_145b0f4e0;
    FUN_143422ee0(puVar4 + 0x13,puVar4,&local_58,&PTR_s_getDate_145b07a00,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar6 = puVar4;
  }
  local_res8 = puVar6;
  FUN_1434a4b90(param_2,0x14,&local_res8);
  local_40[0] = *param_1;
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1d8,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) - 1;
    FUN_1434a2b80(puVar6);
  }
  return param_1;
}



// FUNCTION 143469dd0 FUN_143469dd0 body=103 status=ok
// SIG undefined FUN_143469dd0(void)

undefined8 * FUN_143469dd0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495280();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0f618;
  param_1[4] = &PTR_LAB_145b0f660;
  param_1[0xd] = &PTR_LAB_145b0f708;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addListener_145b088f0,local_res8);
  return param_1;
}



// FUNCTION 143469e40 Update body=91 status=ok
// SIG undefined Update(void)

void Scaleform::GFx::AS2::KeyCtorFunction::Update(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 8 + (longlong)*(char *)(param_2 + 0x11) * 0xc) =
       *(undefined4 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\0') {
    cVar1 = FUN_14338a8c0(param_2);
  }
  *(char *)(param_1 + ((longlong)*(char *)(param_2 + 0x11) + 1) * 0xc) = cVar1;
  *(undefined4 *)(param_1 + 0x10 + (longlong)*(char *)(param_2 + 0x11) * 0xc) =
       *(undefined4 *)(param_2 + 4);
  return;
}



// FUNCTION 143469eb0 GlobalCtor body=27 status=ok
// SIG undefined GlobalCtor(void)

void Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 143469ee0 FUN_143469ee0 body=2386 status=ok
// SIG undefined FUN_143469ee0(void)

undefined8 * FUN_143469ee0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_48 [8];
  undefined4 local_40;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  plVar1 = param_1 + 4;
  *plVar1 = (longlong)&PTR_LAB_145b0aef8;
  param_1[0xd] = Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor;
  uVar3 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(plVar1,param_2,uVar3);
  lVar5 = 0x10;
  *param_1 = &PTR_LAB_145b0f710;
  *plVar1 = (longlong)&PTR_LAB_145b0f798;
  param_1[0xe] = &PTR_LAB_145b0f840;
  puVar4 = param_1 + 0xf;
  do {
    *(undefined4 *)puVar4 = 0;
    *(undefined1 *)((longlong)puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x27] = param_3;
  if (plVar1 != (longlong *)0x0) {
    FUN_14340b610(plVar1,param_2,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(param_2,plVar1);
  local_48[0] = 4;
  local_40 = 8;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "BACKSPACE",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x14;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "CAPSLOCK",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x11;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "CONTROL",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x2e;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "DELETEKEY",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x28;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13064,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x23;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b1306c,3);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0xd;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "ENTER",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x1b;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "ESCAPE",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x24;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13080,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x2d;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "INSERT",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x25;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b06854,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x22;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13090,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x21;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13098,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x27;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "RIGHT",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "SHIFT",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x20;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "SPACE",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 9;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b06df8,3);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 4;
  local_40 = 0x26;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b130b0,2);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_48,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  FUN_14340b610(plVar1,param_2,&PTR_s_getAscii_145b07ef0,0);
  FUN_1432e2000(param_3,param_1 + 0xe);
  return param_1;
}



// FUNCTION 14346a840 FUN_14346a840 body=461 status=ok
// SIG undefined FUN_14346a840(void)

void FUN_14346a840(longlong param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  longlong local_res8;
  undefined **local_18;
  uint local_10;
  int local_c;
  
  pbVar1 = param_3 + 0x11;
  *(undefined4 *)(param_1 + ((longlong)(char)param_3[0x11] + 10) * 0xc) =
       *(undefined4 *)(param_3 + 8);
  bVar4 = param_3[0xc];
  if (bVar4 == 0) {
    bVar4 = FUN_14338a8c0(param_3);
  }
  *(byte *)(param_1 + 0x7c + (longlong)(char)*pbVar1 * 0xc) = bVar4;
  *(undefined4 *)(param_1 + 0x80 + (longlong)(char)*pbVar1 * 0xc) = *(undefined4 *)(param_3 + 4);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18);
  if (*param_3 < 0x800001) {
    bVar4 = Scaleform::Alg::BitCount32();
    uVar8 = (uint)bVar4;
  }
  else {
    uVar8 = *param_3 - 0xffffe7;
  }
  if (uVar8 - 1 < 0x22) {
    iVar7 = *(int *)(&DAT_145b13550 + (ulonglong)uVar8 * 4);
  }
  else {
    iVar7 = 0x2e;
  }
  local_res8 = *(longlong *)(lVar6 + 0x138 + (longlong)iVar7 * 8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    uVar8 = 0;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) + 0x10);
    uVar3 = *(ulonglong *)(lVar6 + 0x68);
    if (uVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x60);
      uVar5 = 0;
      do {
        if (*(int *)(lVar6 + uVar5 * 0x10) == 0) {
          lVar6 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar8 * 0x10);
          if ((lVar6 != 0) &&
             (lVar6 = (**(code **)(*(longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4) +
                                  0xf0))(), lVar6 != 0)) {
            bVar9 = *(char *)(*(longlong *)(lVar6 + 0xe8) + 0x68) == '\x01';
            if (bVar9) {
              FUN_14348fe40(lVar6,pbVar1);
            }
            if (param_1 + 0x20 != 0) {
              local_18 = &PTR_FUN_145b11e98;
              local_c = *(int *)(lVar6 + 0x30) * 0x20 +
                        (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5) + -0x20;
              local_10 = (uint)bVar9;
              FUN_1434649e0(lVar6,param_1 + 0x20,&local_res8,&local_18);
            }
            if (bVar9) {
              FUN_14349eb00(lVar6,1);
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        uVar5 = (ulonglong)uVar8;
      } while (uVar5 < uVar3);
    }
  }
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14346aa80 FUN_14346aa80 body=176 status=ok
// SIG undefined FUN_14346aa80(void)

void FUN_14346aa80(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar6 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) == '\x01') && (0 < *(int *)(param_1 + 0x38))) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    if (uVar4 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      uVar6 = (ulonglong)(uVar4 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar4 >> 5) * 8);
    }
    uVar4 = FUN_143411f00(uVar6);
    uVar6 = (ulonglong)uVar4;
  }
  pbVar3 = *(byte **)(param_1 + 8);
  lVar5 = lVar2 + -0x20 + uVar6 * 0xc;
  if (lVar2 == 0) {
    lVar5 = uVar6 * 0xc;
  }
  bVar1 = *(byte *)(lVar5 + 0x7c);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(uint *)(pbVar3 + 8) = (uint)bVar1;
  *pbVar3 = 4;
  return;
}



// FUNCTION 14346ab40 FUN_14346ab40 body=178 status=ok
// SIG undefined FUN_14346ab40(void)

void FUN_14346ab40(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar8 = 0;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(*(longlong *)(lVar3 + 0xe8) + 0x68) == '\x01') && (0 < *(int *)(param_1 + 0x38))) {
    uVar6 = *(uint *)(param_1 + 0x3c);
    if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      uVar8 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    uVar6 = FUN_143411f00(uVar8);
    uVar8 = (ulonglong)uVar6;
  }
  pbVar5 = *(byte **)(param_1 + 8);
  puVar1 = (undefined4 *)((uVar8 + 10) * 0xc);
  puVar7 = (undefined4 *)(lVar4 + -0x20 + (longlong)puVar1);
  if (lVar4 == 0) {
    puVar7 = puVar1;
  }
  uVar2 = *puVar7;
  if (4 < *pbVar5) {
    FUN_143411150(pbVar5);
  }
  *(undefined4 *)(pbVar5 + 8) = uVar2;
  *pbVar5 = 4;
  return;
}



// FUNCTION 14346ac00 FUN_14346ac00 body=311 status=ok
// SIG undefined FUN_14346ac00(void)

void FUN_14346ac00(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),"KeyIsDown needs one Argument (the key code)");
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar7 = *(uint *)(param_1 + 0x3c);
  uVar6 = 0;
  uVar8 = uVar6;
  if (uVar7 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    uVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
  }
  uVar3 = FUN_143411e30(uVar8);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if ((*(char *)(*(longlong *)(lVar4 + 0xe8) + 0x68) == '\x01') && (1 < *(int *)(param_1 + 0x38))) {
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar7 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      uVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    uVar7 = FUN_143411f00(uVar6);
    uVar6 = (ulonglong)uVar7;
  }
  if ((uint)uVar6 < 6) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x118);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar5 = (longlong *)&DAT_00000138;
    }
    lVar4 = uVar6 * 0x688 + *plVar5 + 0x2400;
    if (lVar4 != 0) {
      uVar2 = Scaleform::GFx::KeyboardState::IsKeyDown(lVar4,uVar3);
      goto LAB_14346ad14;
    }
  }
  uVar2 = 0;
LAB_14346ad14:
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  puVar1[8] = uVar2;
  *puVar1 = 2;
  return;
}



// FUNCTION 14346ad40 FUN_14346ad40 body=311 status=ok
// SIG undefined FUN_14346ad40(void)

void FUN_14346ad40(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),"KeyIsToggled needs one Argument (the key code)");
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar7 = *(uint *)(param_1 + 0x3c);
  uVar6 = 0;
  uVar8 = uVar6;
  if (uVar7 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    uVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
  }
  uVar3 = FUN_143411e30(uVar8);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if ((*(char *)(*(longlong *)(lVar4 + 0xe8) + 0x68) == '\x01') && (1 < *(int *)(param_1 + 0x38))) {
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar7 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      uVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    uVar7 = FUN_143411f00(uVar6);
    uVar6 = (ulonglong)uVar7;
  }
  if ((uint)uVar6 < 6) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x118);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar5 = (longlong *)&DAT_00000138;
    }
    lVar4 = uVar6 * 0x688 + *plVar5 + 0x2400;
    if (lVar4 != 0) {
      uVar2 = FUN_14335f5a0(lVar4,uVar3);
      goto LAB_14346ae54;
    }
  }
  uVar2 = 0;
LAB_14346ae54:
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  puVar1[8] = uVar2;
  *puVar1 = 2;
  return;
}



// FUNCTION 14346ae80 FUN_14346ae80 body=61 status=ok
// SIG undefined FUN_14346ae80(void)

void FUN_14346ae80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x1b);
                    /* WARNING: Could not recover jumptable at 0x00014346aeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 14346aed0 FUN_14346aed0 body=105 status=ok
// SIG undefined FUN_14346aed0(void)

undefined8 * FUN_14346aed0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x1b);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 14346af40 FUN_14346af40 body=103 status=ok
// SIG undefined FUN_14346af40(void)

undefined8 * FUN_14346af40(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495410();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addListener_145b074a0,local_res8);
  return param_1;
}



// FUNCTION 14346afb0 FUN_14346afb0 body=1078 status=ok
// SIG undefined FUN_14346afb0(void)

ulonglong FUN_14346afb0(longlong param_1,uint param_2,int param_3,char *param_4,longlong *param_5,
                       uint param_6,undefined4 param_7,char param_8)

{
  int *piVar1;
  float fVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  byte bVar12;
  longlong *local_78;
  ulonglong uStack_70;
  byte local_68;
  
  bVar11 = *(char *)(*(longlong *)(param_1 + 0xe8) + 0x68) != '\x01';
  uVar10 = 0;
  if (((*(char *)(*(longlong *)(param_1 + 0xe8) + 0x68) == '\x01') && (param_6 != 0)) &&
     (param_3 - 0x67U < 2)) {
    if (*param_4 == '\b') {
      plVar9 = *(longlong **)(param_4 + 8);
      bVar12 = 0;
      if (plVar9 != (longlong *)0x0) {
        *(uint *)(plVar9 + 3) = (int)plVar9[3] + 1U & 0x8fffffff;
      }
      uVar3 = *(ulonglong *)(param_4 + 0x10);
      uVar8 = uVar10;
      if ((uVar3 != 0) && (bVar12 = (param_4[0x18] & 1U) != 0, uVar8 = uVar3, !(bool)bVar12)) {
        *(uint *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1U & 0x8fffffff;
      }
    }
    else {
      if (*param_4 != '\v') {
        bVar12 = 0;
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        uVar8 = 0;
        plVar9 = (longlong *)0x0;
        goto LAB_14346b030;
      }
      FUN_143413f20(param_4,&local_78,param_1);
      plVar9 = local_78;
      uVar8 = uStack_70;
      bVar12 = local_68;
    }
    if (plVar9 == (longlong *)0x0) {
LAB_14346b030:
      if ((((bVar12 & 2) == 0) && (plVar9 != (longlong *)0x0)) &&
         ((*(uint *)(plVar9 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) - 1;
        FUN_1434a2b80(plVar9);
      }
      if ((((bVar12 & 1) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
        FUN_1434a2b80(uVar8);
      }
      return 0xffffffff;
    }
    iVar7 = (**(code **)(*plVar9 + 0x80))(plVar9);
    if (iVar7 < 1) {
      if (1 < param_6) goto LAB_14346b030;
      bVar11 = true;
    }
    if (((bVar12 & 2) == 0) && ((*(uint *)(plVar9 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) - 1;
      FUN_1434a2b80(plVar9);
    }
    if ((((bVar12 & 1) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
      FUN_1434a2b80(uVar8);
    }
  }
  iVar7 = 0;
  uVar8 = uVar10;
  if ((*(char *)(*(longlong *)(param_1 + 0xe8) + 0x68) == '\x01') && (uVar8 = 0, !bVar11)) {
    if ((param_3 == 0x67) && (param_8 != '\0')) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
        FUN_1434a29d0(param_1 + 8);
      }
      puVar4 = *(undefined1 **)(param_1 + 8);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 2;
        puVar4[8] = param_8;
      }
      iVar7 = 1;
    }
    if (param_2 < 6) {
      uVar10 = ((ulonglong)param_2 + 0x6d) * 0x50 +
               *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10);
    }
    fVar2 = *(float *)(uVar10 + 0x38);
    dVar6 = _guard_xfg_dispatch_icall_nop((double)*(float *)(uVar10 + 0x3c) + 0.5);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
      FUN_1434a29d0(param_1 + 8);
    }
    puVar4 = *(undefined1 **)(param_1 + 8);
    if (puVar4 != (undefined1 *)0x0) {
      *(double *)(puVar4 + 8) = dVar6 * 0.05;
      *puVar4 = 3;
    }
    dVar6 = _guard_xfg_dispatch_icall_nop((double)fVar2 + 0.5);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
      FUN_1434a29d0(param_1 + 8);
    }
    puVar4 = *(undefined1 **)(param_1 + 8);
    if (puVar4 != (undefined1 *)0x0) {
      *(double *)(puVar4 + 8) = dVar6 * 0.05;
      *puVar4 = 3;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
      FUN_1434a29d0(param_1 + 8);
    }
    puVar4 = *(undefined1 **)(param_1 + 8);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 4;
      *(uint *)(puVar4 + 8) = param_2;
    }
    uVar8 = (ulonglong)(iVar7 + 3);
  }
  if (param_3 != 0x69) {
    if ((param_5 == (longlong *)0x0) || ((param_3 != 0x6a && (bVar11)))) {
      if ((int)uVar8 == 0) goto LAB_14346b316;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
        FUN_1434a29d0(param_1 + 8);
      }
      if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
        **(undefined1 **)(param_1 + 8) = 1;
      }
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
        FUN_1434a29d0(param_1 + 8);
      }
      puVar4 = *(undefined1 **)(param_1 + 8);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 5;
        lVar5 = *param_5;
        *(longlong *)(puVar4 + 8) = lVar5;
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
  }
LAB_14346b316:
  if (0x66 < param_3) {
    if (param_3 < 0x69) {
      if ((param_6 == 0) || (bVar11)) {
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
        if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
          FUN_1434a29d0(param_1 + 8);
        }
        if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 8) = 1;
        }
      }
      else {
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
        if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
          FUN_1434a29d0(param_1 + 8);
        }
        puVar4 = *(undefined1 **)(param_1 + 8);
        if (puVar4 != (undefined1 *)0x0) {
          *(double *)(puVar4 + 8) = (double)param_6;
          *puVar4 = 3;
        }
      }
    }
    else {
      if (param_3 != 0x6a) {
        return uVar8;
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
        FUN_1434a29d0(param_1 + 8);
      }
      puVar4 = *(undefined1 **)(param_1 + 8);
      if (puVar4 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar4 + 8) = param_7;
        *puVar4 = 4;
      }
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
  }
  return uVar8;
}



// FUNCTION 14346b3f0 FUN_14346b3f0 body=136 status=ok
// SIG undefined FUN_14346b3f0(void)

void FUN_14346b3f0(longlong param_1,longlong param_2,undefined4 param_3,int param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined **local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  local_38 = &PTR_FUN_145b0f860;
  local_28 = param_5;
  local_20 = param_6;
  local_1c = param_7;
  local_18 = param_8;
  lVar1 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  local_30 = param_3;
  local_2c = param_4;
  FUN_1434649e0(param_2,lVar1,
                *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                ((longlong)param_4 + 0x27) * 8,&local_38);
  return;
}



// FUNCTION 14346b4c0 FUN_14346b4c0 body=174 status=ok
// SIG undefined FUN_14346b4c0(void)

void FUN_14346b4c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte local_28 [32];
  
  local_28[0] = 0;
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x58))
                    ((longlong *)(param_1 + 0x20),param_2,
                     *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3c0,local_28);
  if (cVar1 != '\0') {
    lVar3 = FUN_143412120(local_28,param_3);
    if (lVar3 != 0) {
      iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))(lVar3 + 0x20);
      if (iVar2 == 7) {
        FUN_143499df0(param_1 + 0x78,lVar3);
        goto LAB_14346b552;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x78);
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
LAB_14346b552:
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 14346b580 FUN_14346b580 body=105 status=ok
// SIG undefined FUN_14346b580(void)

void FUN_14346b580(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_2c = 0x69;
  local_28 = 0;
  local_20 = 0;
  local_38 = &PTR_FUN_145b0f860;
  local_18 = 0;
  lVar1 = param_1 + -0x50;
  if (param_1 == 0x70) {
    lVar1 = 0;
  }
  local_30 = param_3;
  FUN_1434649e0(param_2,lVar1,
                *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x480,
                &local_38);
  return;
}



// FUNCTION 14346b5f0 FUN_14346b5f0 body=498 status=ok
// SIG undefined FUN_14346b5f0(void)

void FUN_14346b5f0(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined **local_48;
  uint local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  uVar8 = 0;
  lVar10 = 0;
  if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
    uVar3 = Scaleform::Timer::GetTicks();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    lVar7 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
    lVar4 = lVar10;
    if (param_3 < 6) {
      lVar4 = ((ulonglong)param_3 + 0x6d) * 0x50 +
              *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
    }
    iVar5 = (int)(*(float *)(lVar4 + 0x38) * 0.05);
    iVar6 = (int)(*(float *)(lVar4 + 0x3c) * 0.05);
    uVar9 = (uint)((uVar3 - lVar7 >> 1) + lVar7 >> 9);
    if ((uVar9 <= *(int *)(param_1 + 0x18) + 300U) && (*(int *)(param_1 + 0x10) == iVar5)) {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x14) == iVar6) {
        uVar8 = 1;
      }
    }
    *(int *)(param_1 + 0x10) = iVar5;
    *(int *)(param_1 + 0x14) = iVar6;
    *(uint *)(param_1 + 0x18) = uVar9;
  }
  local_40 = param_3;
  local_30 = param_4;
  local_28 = uVar8;
  if (param_5 == 0) {
    local_3c = 0x67;
    local_38 = (undefined8 *)0x0;
    local_48 = &PTR_FUN_145b0f860;
    local_2c = 0;
    lVar4 = param_1 + -0x50;
    if (param_1 == 0x70) {
      lVar4 = lVar10;
    }
    FUN_1434649e0(param_2,lVar4,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x470,
                  &local_48);
  }
  else {
    lVar4 = *(longlong *)(param_5 + 0x70);
    if (lVar4 == 0) {
      lVar4 = FUN_14336c170();
    }
    param_5 = *(longlong *)(lVar4 + 0x18);
    local_3c = 0x67;
    *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + 1;
    local_48 = &PTR_FUN_145b0f860;
    local_38 = &param_5;
    local_2c = 0;
    lVar4 = param_1 + -0x50;
    if (param_1 == 0x70) {
      lVar4 = lVar10;
    }
    FUN_1434649e0(param_2,lVar4,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x470,
                  &local_48);
    piVar1 = (int *)(param_5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 14346b7f0 FUN_14346b7f0 body=320 status=ok
// SIG undefined FUN_14346b7f0(void)

void FUN_14346b7f0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  local_30 = param_3;
  local_20 = param_4;
  if (param_5 == 0) {
    local_2c = 0x68;
    local_28 = (undefined8 *)0x0;
    local_38 = &PTR_FUN_145b0f860;
    local_1c = 0;
    local_18 = 0;
    lVar2 = param_1 + -0x50;
    if (param_1 == 0x70) {
      lVar2 = 0;
    }
    FUN_1434649e0(param_2,lVar2,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x478,
                  &local_38);
  }
  else {
    lVar2 = *(longlong *)(param_5 + 0x70);
    if (lVar2 == 0) {
      lVar2 = FUN_14336c170();
    }
    param_5 = *(longlong *)(lVar2 + 0x18);
    local_2c = 0x68;
    *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + 1;
    local_38 = &PTR_FUN_145b0f860;
    local_28 = &param_5;
    local_1c = 0;
    local_18 = 0;
    lVar2 = param_1 + -0x50;
    if (param_1 == 0x70) {
      lVar2 = 0;
    }
    FUN_1434649e0(param_2,lVar2,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x478,
                  &local_38);
    piVar1 = (int *)(param_5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 14346b940 FUN_14346b940 body=320 status=ok
// SIG undefined FUN_14346b940(void)

void FUN_14346b940(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  local_30 = param_3;
  local_1c = param_4;
  if (param_5 == 0) {
    local_2c = 0x6a;
    local_28 = (undefined8 *)0x0;
    local_38 = &PTR_FUN_145b0f860;
    local_20 = 0;
    local_18 = 0;
    lVar2 = param_1 + -0x50;
    if (param_1 == 0x70) {
      lVar2 = 0;
    }
    FUN_1434649e0(param_2,lVar2,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x488,
                  &local_38);
  }
  else {
    lVar2 = *(longlong *)(param_5 + 0x70);
    if (lVar2 == 0) {
      lVar2 = FUN_14336c170();
    }
    param_5 = *(longlong *)(lVar2 + 0x18);
    local_2c = 0x6a;
    *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + 1;
    local_38 = &PTR_FUN_145b0f860;
    local_28 = &param_5;
    local_20 = 0;
    local_18 = 0;
    lVar2 = param_1 + -0x50;
    if (param_1 == 0x70) {
      lVar2 = 0;
    }
    FUN_1434649e0(param_2,lVar2,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x488,
                  &local_38);
    piVar1 = (int *)(param_5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 14346bab0 FUN_14346bab0 body=222 status=ok
// SIG undefined FUN_14346bab0(void)

void FUN_14346bab0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10);
  if (*(longlong *)(lVar4 + 0x238) != 0) {
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = 0;
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      local_c = FUN_143411f00(lVar5,lVar3);
    }
    local_14 = 0;
    local_18 = 0x16;
    local_10 = 0;
    (**(code **)(**(longlong **)(lVar4 + 0x238) + 8))(*(longlong **)(lVar4 + 0x238),lVar4,&local_18)
    ;
    return;
  }
  FUN_143417260(lVar3,"No user event handler interface is installed; Mouse.hide failed.");
  return;
}



// FUNCTION 14346bba0 FUN_14346bba0 body=222 status=ok
// SIG undefined FUN_14346bba0(void)

void FUN_14346bba0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10);
  if (*(longlong *)(lVar4 + 0x238) != 0) {
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = 0;
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      local_c = FUN_143411f00(lVar5,lVar3);
    }
    local_14 = 0;
    local_18 = 0x15;
    local_10 = 0;
    (**(code **)(**(longlong **)(lVar4 + 0x238) + 8))(*(longlong **)(lVar4 + 0x238),lVar4,&local_18)
    ;
    return;
  }
  FUN_143417260(lVar3,"No user event handler interface is installed; Mouse.show failed.");
  return;
}



// FUNCTION 14346bc90 FUN_14346bc90 body=308 status=ok
// SIG undefined FUN_14346bc90(void)

void FUN_14346bc90(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  lVar5 = 0;
  local_c = 0;
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
  uVar6 = local_c;
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar7 = *(uint *)(param_1 + 0x3c);
    lVar8 = lVar5;
    if (uVar7 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    dVar9 = (double)FUN_143411a90(lVar8,lVar2);
    uVar6 = (undefined4)(longlong)dVar9;
  }
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar7 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    dVar9 = (double)FUN_143411a90(lVar5);
    local_c = (undefined4)(longlong)dVar9;
  }
  plVar4 = *(longlong **)(lVar3 + 0x238);
  if (plVar4 == (longlong *)0x0) {
    FUN_143417260(*(undefined8 *)(param_1 + 0x30),
                  "No user event handler interface is installed; Mouse.setCursorType failed.");
  }
  else {
    local_14 = 0;
    local_18 = 0x17;
    local_10 = uVar6;
    (**(code **)(*plVar4 + 8))(plVar4,lVar3,&local_18);
  }
  return;
}



// FUNCTION 14346bdd0 FUN_14346bdd0 body=944 status=ok
// SIG undefined FUN_14346bdd0(void)

void FUN_14346bdd0(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  float local_res8;
  float local_resc;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  uVar4 = 1;
  lVar7 = *(longlong *)(param_1 + 0x30);
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar7 + 0xe0) + 0x20) + 0x10);
  uVar9 = uVar5;
  if (0 < iVar1) {
    pcVar8 = (char *)0x0;
    uVar11 = *(uint *)(param_1 + 0x3c);
    if (uVar11 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
      pcVar8 = (char *)((ulonglong)(uVar11 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar11 >> 5) * 8));
    }
    uVar9 = 0;
    if (*pcVar8 == '\x02') {
      lVar10 = 0;
      if (uVar11 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
      }
      uVar4 = FUN_143411fd0(lVar10,lVar7);
      if (1 < *(int *)(param_1 + 0x38)) {
        lVar7 = *(longlong *)(param_1 + 0x30);
        lVar10 = 0;
        uVar9 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar9 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        goto LAB_14346befe;
      }
    }
    else if (iVar1 == 1) {
      lVar10 = 0;
      if (uVar11 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
      }
LAB_14346befe:
      dVar12 = (double)FUN_143411a90(lVar10,lVar7);
      uVar9 = (int)dVar12;
    }
    else if (1 < iVar1) {
      if (2 < iVar1) {
        uVar11 = uVar11 - 2;
        lVar10 = 0;
        if (uVar11 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
        }
        uVar4 = FUN_143411fd0(lVar10,lVar7);
      }
      lVar7 = *(longlong *)(param_1 + 0x30);
      lVar10 = 0;
      uVar9 = *(uint *)(param_1 + 0x3c);
      if (uVar9 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar12 = (double)FUN_143411a90(lVar10);
      lVar7 = *(longlong *)(param_1 + 0x30);
      lVar10 = 0;
      uVar9 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar9 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(lVar10);
      plVar6 = (longlong *)plVar3[0xb];
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      local_48 = 1.0;
      fStack_44 = 0.0;
      uStack_40 = 0;
      fStack_3c = 0.0;
      local_38 = 0.0;
      fStack_34 = 1.0;
      uStack_30 = 0;
      fStack_2c = 0.0;
      (**(code **)(*plVar6 + 0x1e8))(plVar6,&local_48);
      local_res8 = fStack_44 * (float)(dVar13 * 20.0) + local_48 * (float)(dVar12 * 20.0) +
                   fStack_3c;
      local_resc = fStack_34 * (float)(dVar13 * 20.0) + local_38 * (float)(dVar12 * 20.0) +
                   fStack_2c;
      goto LAB_14346c12f;
    }
  }
  uVar5 = (**(code **)(*plVar3 + 0x160))(plVar3);
  if (uVar5 <= uVar9) {
    return;
  }
  if (uVar9 < 6) {
    plVar6 = plVar3 + ((ulonglong)uVar9 + 0x6d) * 10;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  local_resc = *(float *)((longlong)plVar6 + 0x3c);
  local_res8 = *(float *)(plVar6 + 7);
  uVar5 = uVar9;
LAB_14346c12f:
  lVar7 = FUN_1432e79b0(plVar3,&local_res8,uVar5,uVar4,0);
  if (lVar7 != 0) {
    Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),lVar7);
  }
  return;
}



// FUNCTION 14346c190 FUN_14346c190 body=410 status=ok
// SIG undefined FUN_14346c190(void)

void FUN_14346c190(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  double dVar10;
  double local_38;
  double local_30;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  plVar7 = (longlong *)0x0;
  uVar8 = 0;
  lVar6 = *(longlong *)(param_1 + 0x30);
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(lVar6 + 0xe0) + 0x20) + 0x10);
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar8 = *(uint *)(param_1 + 0x3c);
    plVar9 = plVar7;
    if (uVar8 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      plVar9 = (longlong *)
               ((ulonglong)(uVar8 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
    }
    dVar10 = (double)FUN_143411a90(plVar9,lVar6);
    uVar8 = (uint)dVar10;
  }
  uVar5 = (**(code **)(*plVar4 + 0x160))(plVar4);
  if (uVar8 < uVar5) {
    plVar9 = plVar7;
    if (uVar8 < 6) {
      plVar9 = plVar4 + ((ulonglong)uVar8 + 0x6d) * 10;
    }
    fVar1 = *(float *)(plVar9 + 7);
    fVar2 = *(float *)((longlong)plVar9 + 0x3c);
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,0x68);
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_143457200(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
    local_38 = _guard_xfg_dispatch_icall_nop((double)fVar1 + 0.5);
    local_38 = local_38 * 0.05;
    local_30 = _guard_xfg_dispatch_icall_nop((double)fVar2 + 0.5);
    local_30 = local_30 * 0.05;
    FUN_143457670(plVar7,*(undefined8 *)(param_1 + 0x30),&local_38);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),plVar7);
    if ((plVar7 != (longlong *)0x0) && ((*(uint *)(plVar7 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar7 + 3) = *(uint *)(plVar7 + 3) - 1;
      FUN_1434a2b80(plVar7);
    }
  }
  return;
}



// FUNCTION 14346c330 FUN_14346c330 body=238 status=ok
// SIG undefined FUN_14346c330(void)

void FUN_14346c330(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  double dVar9;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  plVar6 = (longlong *)0x0;
  uVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x30);
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar7 = *(uint *)(param_1 + 0x3c);
    plVar8 = plVar6;
    if (uVar7 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      plVar8 = (longlong *)
               ((ulonglong)(uVar7 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
    }
    dVar9 = (double)FUN_143411a90(plVar8,lVar2);
    uVar7 = (uint)dVar9;
  }
  uVar5 = (**(code **)(*plVar3 + 0x160))(plVar3);
  if (uVar7 < uVar5) {
    if (uVar7 < 6) {
      plVar6 = plVar3 + ((ulonglong)uVar7 + 0x6d) * 10;
    }
    uVar7 = *(uint *)(plVar6 + 6);
    pbVar4 = *(byte **)(param_1 + 8);
    if (4 < *pbVar4) {
      FUN_143411150(pbVar4);
    }
    *pbVar4 = 3;
    *(double *)(pbVar4 + 8) = (double)uVar7;
  }
  return;
}



// FUNCTION 14346c430 GlobalCtor body=27 status=ok
// SIG undefined GlobalCtor(void)

void Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 14346c460 FUN_14346c460 body=479 status=ok
// SIG undefined FUN_14346c460(void)

undefined8 * FUN_14346c460(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  FUN_143414770();
  param_1[0xd] = Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor;
  puVar2 = param_1 + 4;
  *param_1 = &PTR_LAB_145b0ae70;
  *puVar2 = &PTR_LAB_145b0aef8;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  puVar3 = (undefined8 *)0x0;
  *param_1 = &PTR_LAB_145b0f870;
  *puVar2 = &PTR_LAB_145b0f8f8;
  param_1[0xe] = &PTR_LAB_145b0f9a0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 **)(param_3 + 0x48) = param_1 + 0xe;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14340b610(puVar2,param_2,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(param_2,puVar2);
  FUN_14346b4c0(param_1,param_2,0);
  FUN_14340b610(puVar2,param_2,&PTR_DAT_145b08610,7);
  local_50[0] = 8;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                     (*(longlong **)(*param_2 + 0x30),0x70);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_143414770(puVar2,param_2);
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[0xd] = FUN_14346bc90;
    puVar2[4] = &PTR_LAB_145b0aef8;
    uVar1 = FUN_14341b750(*param_2,7);
    FUN_1434a4d00(puVar2 + 4,param_2,uVar1);
    puVar3 = puVar2;
  }
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  }
  local_60 = 0;
  local_68 = puVar3;
  local_48 = puVar3;
  FUN_143410a60(param_1 + 0x12,&local_68);
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
  }
  FUN_143411150(local_50);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 14346c650 FUN_14346c650 body=715 status=ok
// SIG undefined FUN_14346c650(void)

undefined8 FUN_14346c650(longlong *param_1,longlong param_2,longlong *param_3,byte *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *_Str1;
  int iVar4;
  undefined8 uVar5;
  byte local_28 [8];
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  plVar1 = (longlong *)(param_2 + 0xe8);
  if (*(char *)(*plVar1 + 0x68) != '\x01') goto LAB_14346c6f3;
  lVar2 = *(longlong *)(*(longlong *)(*plVar1 + 0x28) + 0x18);
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 == *(undefined8 **)(lVar2 + 0x578)) {
    Scaleform::GFx::AS2::Value::SetAsFunction(param_4,param_1 + 0xe);
    return 1;
  }
  if (puVar3 == *(undefined8 **)(lVar2 + 0x580)) {
    if (4 < *param_4) {
      FUN_143411150(param_4);
    }
    *param_4 = 3;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0xf0;
    param_4[0xf] = 0x3f;
    goto LAB_14346c6f3;
  }
  if (puVar3 == *(undefined8 **)(lVar2 + 0x588)) {
LAB_14346c74a:
    uVar5 = 0x4000000000000000;
  }
  else if (puVar3 == *(undefined8 **)(lVar2 + 0x590)) {
    uVar5 = 0x4008000000000000;
  }
  else if (puVar3 == *(undefined8 **)(lVar2 + 0x598)) {
    uVar5 = 0;
  }
  else {
    if (puVar3 != *(undefined8 **)(lVar2 + 0x5a0)) {
      if (puVar3 != *(undefined8 **)(lVar2 + 0x5a8)) {
        _Str1 = (char *)*puVar3;
        iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"getTopMostEntity");
        if (iVar4 == 0) {
          local_28[0] = 8;
          local_20 = (undefined8 *)
                     (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                               (*(longlong **)(*plVar1 + 0x30),0x70);
          if (local_20 != (undefined8 *)0x0) {
            FUN_143414770(local_20,plVar1);
            *local_20 = &PTR_LAB_145b0ae70;
            local_20[4] = &PTR_LAB_145b0aef8;
            local_20[0xd] = FUN_14346bdd0;
            uVar5 = FUN_14341b750(*plVar1,7);
            FUN_1434a4d00(local_20 + 4,plVar1,uVar5);
            goto LAB_14346c7db;
          }
        }
        else {
          iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"getPosition");
          if (iVar4 == 0) {
            local_28[0] = 8;
            local_20 = (undefined8 *)
                       (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                 (*(longlong **)(*plVar1 + 0x30),0x70);
            if (local_20 != (undefined8 *)0x0) {
              FUN_143414770(local_20,plVar1);
              *local_20 = &PTR_LAB_145b0ae70;
              local_20[4] = &PTR_LAB_145b0aef8;
              local_20[0xd] = FUN_14346c190;
              uVar5 = FUN_14341b750(*plVar1,7);
              FUN_1434a4d00(local_20 + 4,plVar1,uVar5);
              goto LAB_14346c7db;
            }
          }
          else {
            iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"getButtonsState");
            if (iVar4 != 0) goto LAB_14346c6f3;
            local_28[0] = 8;
            local_20 = (undefined8 *)
                       (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                 (*(longlong **)(*plVar1 + 0x30),0x70);
            if (local_20 != (undefined8 *)0x0) {
              FUN_143414770(local_20,plVar1);
              *local_20 = &PTR_LAB_145b0ae70;
              local_20[4] = &PTR_LAB_145b0aef8;
              local_20[0xd] = FUN_14346c330;
              uVar5 = FUN_14341b750(*plVar1,7);
              FUN_1434a4d00(local_20 + 4,plVar1,uVar5);
              goto LAB_14346c7db;
            }
          }
        }
        local_20 = (undefined8 *)0x0;
LAB_14346c7db:
        local_10 = 0;
        local_18 = 0;
        FUN_143411240(param_4,local_28);
        if (4 < local_28[0]) {
          FUN_143411150(local_28);
        }
        return 1;
      }
      goto LAB_14346c74a;
    }
    uVar5 = 0x3ff0000000000000;
  }
  FUN_1434a4b40(param_4,uVar5);
LAB_14346c6f3:
  uVar5 = (**(code **)(*param_1 + 0x58))(param_1,plVar1,param_3,param_4);
  return uVar5;
}



// FUNCTION 14346c930 FUN_14346c930 body=512 status=ok
// SIG undefined FUN_14346c930(void)

ulonglong FUN_14346c930(longlong param_1,longlong param_2,longlong *param_3,char *param_4,
                       undefined8 param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong local_48;
  longlong lStack_40;
  byte local_38;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
  if (*param_3 == *(longlong *)(lVar2 + 0x578)) {
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      if (*param_4 == '\b') {
        local_48 = *(longlong *)(param_4 + 8);
        local_38 = 0;
        if (local_48 != 0) {
          *(uint *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1U & 0x8fffffff;
        }
        lVar2 = *(longlong *)(param_4 + 0x10);
        lStack_40 = 0;
        if ((lVar2 != 0) &&
           (local_38 = (param_4[0x18] & 1U) != 0, lStack_40 = lVar2, !(bool)local_38)) {
          *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
        }
      }
      else if (*param_4 == '\v') {
        FUN_143413f20(param_4,&local_48,param_2);
      }
      else {
        local_38 = 0;
        local_48 = 0;
        lStack_40 = 0;
      }
      bVar5 = local_38;
      lVar3 = lStack_40;
      lVar2 = local_48;
      FUN_143410a60(param_1 + 0x70,&local_48);
      if ((((bVar5 & 2) == 0) && (lVar2 != 0)) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
      if ((((bVar5 & 1) == 0) && (lVar3 != 0)) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
      cVar4 = FUN_14346cb90(param_1 + -0x20,param_2 + 0xe8);
      if (cVar4 == '\0') {
        puVar1 = (uint *)(lVar2 + 0x52f0);
        *puVar1 = *puVar1 & 0xffffefff;
      }
      else {
        puVar1 = (uint *)(lVar2 + 0x52f0);
        *puVar1 = *puVar1 | 0x1000;
      }
    }
  }
  else if (*param_3 == *(longlong *)(lVar2 + 0x3c0)) {
    bVar5 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
    FUN_14346b4c0(param_1 + -0x20,param_2 + 0xe8,param_2);
    return (ulonglong)bVar5;
  }
  uVar6 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
  return uVar6;
}



// FUNCTION 14346cb40 FUN_14346cb40 body=68 status=ok
// SIG undefined FUN_14346cb40(void)

undefined8 FUN_14346cb40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x238);
  if (plVar1 != (longlong *)0x0) {
    local_14 = 0;
    local_18 = 0x17;
    local_10 = param_3;
    local_c = param_2;
    (**(code **)(*plVar1 + 8))(plVar1,param_1,&local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 14346cb90 FUN_14346cb90 body=246 status=ok
// SIG undefined FUN_14346cb90(void)

bool FUN_14346cb90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_28[0] = 8;
  local_20 = (undefined8 *)
             (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                       (*(longlong **)(*param_2 + 0x30),0x70);
  if (local_20 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    FUN_143414770(local_20,param_2);
    *local_20 = &PTR_LAB_145b0ae70;
    local_20[4] = &PTR_LAB_145b0aef8;
    local_20[0xd] = FUN_14346bc90;
    uVar1 = FUN_14341b750(*param_2,7);
    FUN_1434a4d00(local_20 + 4,param_2,uVar1);
  }
  local_10 = 0;
  local_18 = 0;
  if (local_20 != (undefined8 *)0x0) {
    *(uint *)(local_20 + 3) = *(int *)(local_20 + 3) + 1U & 0x8fffffff;
  }
  bVar2 = *(undefined8 **)(param_1 + 0x90) != local_20;
  if ((local_20 != (undefined8 *)0x0) && ((*(uint *)(local_20 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_20 + 3) = *(uint *)(local_20 + 3) - 1;
    FUN_1434a2b80(local_20);
  }
  FUN_143411150(local_28);
  return bVar2;
}



// FUNCTION 14346cc90 FUN_14346cc90 body=461 status=ok
// SIG undefined FUN_14346cc90(void)

longlong * FUN_14346cc90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_res8;
  longlong local_38;
  undefined1 local_30;
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_30 = 8;
  local_38 = param_2;
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xb0,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_14346c460(lVar1,&local_38,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar2;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = FUN_14341b750(param_2,1);
    FUN_143495410(puVar3,&local_38,uVar4,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar3 = &PTR_LAB_145b0b588;
    puVar3[4] = &PTR_LAB_145b0b5d0;
    puVar3[0xd] = &PTR_LAB_145b0b678;
    FUN_143422ee0(puVar3 + 0xd,puVar3,&local_38,&PTR_s_addListener_145b074a0,&local_res8);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  }
  local_res8 = puVar3;
  FUN_1434a4b90(param_2,0x1b,&local_res8);
  local_20[0] = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_20,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            (lVar2 + 0x20,&local_38,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x210,
             local_28,&local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
  }
  return param_1;
}



// FUNCTION 14346ce70 FUN_14346ce70 body=102 status=ok
// SIG undefined FUN_14346ce70(void)

undefined8 * FUN_14346ce70(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0e400;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x1c);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 14346cee0 FUN_14346cee0 body=103 status=ok
// SIG undefined FUN_14346cee0(void)

undefined8 * FUN_14346cee0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495140();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0e4a8;
  param_1[4] = &PTR_LAB_145b0e4f0;
  param_1[0xd] = &PTR_LAB_145b0e598;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&DAT_145b088b0,local_res8);
  return param_1;
}



// FUNCTION 14346cf50 FUN_14346cf50 body=270 status=ok
// SIG undefined FUN_14346cf50(void)

undefined8 * FUN_14346cf50(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_28 [32];
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_14346d820;
  uVar2 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar2);
  local_28[0] = 10;
  *param_1 = &PTR_LAB_145b0f9d0;
  local_res8[0] = 0;
  param_1[4] = &PTR_LAB_145b0fa58;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "available",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_28,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  FUN_14340b610(param_1 + 4,param_2,&PTR_s_addCallback_145b088c0,7);
  return param_1;
}



// FUNCTION 14346d070 FUN_14346d070 body=159 status=ok
// SIG undefined FUN_14346d070(void)

undefined8 FUN_14346d070(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_14349e5e0(param_2 + 0xe8,param_3,"available");
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10) + 0x248);
    FUN_143411150(param_4);
    *param_4 = 2;
    param_4[8] = lVar1 != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14346d120 FUN_14346d120 body=984 status=ok
// SIG undefined FUN_14346d120(void)

void FUN_14346d120(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  RefCountNTSImpl *pRVar9;
  uint uVar10;
  RefCountNTSImpl *pRVar11;
  RefCountNTSImpl *pRVar12;
  RefCountNTSImpl *pRVar13;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar14;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffff98;
  longlong local_58;
  longlong lStack_50;
  byte local_48;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  if (2 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    this = (RefCountNTSImpl *)0x0;
    pRVar12 = (RefCountNTSImpl *)0x0;
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10);
    uVar10 = *(uint *)(param_1 + 0x3c);
    pRVar14 = this;
    if (uVar10 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar14 = (RefCountNTSImpl *)
                ((ulonglong)(uVar10 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
    }
    FUN_143411540(pRVar14,&local_res10,lVar3,0xffffffff,
                  in_stack_ffffffffffffff98 & 0xffffffffffffff00);
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(int *)(param_1 + 0x3c) - 2;
    pRVar14 = this;
    if (uVar10 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar14 = (RefCountNTSImpl *)
                ((ulonglong)(uVar10 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
    }
    if (*pRVar14 == (RefCountNTSImpl)0x8) {
      local_58 = *(longlong *)(pRVar14 + 8);
      local_48 = 0;
      if (local_58 != 0) {
        *(uint *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1U & 0x8fffffff;
      }
      lVar3 = *(longlong *)(pRVar14 + 0x10);
      lStack_50 = 0;
      if ((lVar3 != 0) &&
         (local_48 = ((byte)pRVar14[0x18] & 1) != 0, lStack_50 = lVar3, !(bool)local_48)) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
    }
    else if (*pRVar14 == (RefCountNTSImpl)0xb) {
      FUN_143413f20(pRVar14,&local_58);
    }
    else {
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0;
    }
    bVar7 = local_48;
    lVar6 = lStack_50;
    lVar5 = local_58;
    lVar3 = *(longlong *)(param_1 + 0x30);
    pRVar13 = (RefCountNTSImpl *)0x0;
    uVar10 = *(int *)(param_1 + 0x3c) - 1;
    pRVar14 = this;
    if (uVar10 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar14 = (RefCountNTSImpl *)
                ((ulonglong)(uVar10 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
    }
    uVar8 = *(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
            (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5);
    pRVar9 = pRVar12;
    if (*pRVar14 == (RefCountNTSImpl)0x7) {
      pRVar11 = this;
      if (uVar10 <= uVar8) {
        pRVar11 = (RefCountNTSImpl *)
                  ((ulonglong)(uVar10 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
      }
      pRVar9 = this;
      pRVar14 = this;
      if ((((*pRVar11 == (RefCountNTSImpl)0x7) && (lVar3 != 0)) &&
          (pRVar14 = pRVar13, *(longlong *)(pRVar11 + 8) != 0)) &&
         (pRVar13 = (RefCountNTSImpl *)
                    Scaleform::GFx::CharacterHandle::ResolveCharacter
                              (*(longlong *)(pRVar11 + 8),
                               *(undefined8 *)
                                (*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10)),
         pRVar9 = pRVar12, pRVar13 != (RefCountNTSImpl *)0x0)) {
        if ((char)pRVar13[0x6a] < '\0') {
          this = pRVar13;
        }
        if (this != (RefCountNTSImpl *)0x0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          pRVar9 = *(RefCountNTSImpl **)(this + 0x70);
          if ((pRVar9 != (RefCountNTSImpl *)0x0) ||
             (pRVar9 = (RefCountNTSImpl *)FUN_14336c170(this), pRVar9 != (RefCountNTSImpl *)0x0)) {
            *(int *)pRVar9 = *(int *)pRVar9 + 1;
          }
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
    }
    else {
      if (uVar10 <= uVar8) {
        this = (RefCountNTSImpl *)
               ((ulonglong)(uVar10 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
      }
      pRVar14 = (RefCountNTSImpl *)FUN_143412120(this,lVar3);
      if (pRVar14 != (RefCountNTSImpl *)0x0) {
        *(uint *)(pRVar14 + 0x18) = *(int *)(pRVar14 + 0x18) + 1U & 0x8fffffff;
      }
    }
    FUN_14343f450(*(undefined8 *)(lVar4 + 0x18),&local_res10,pRVar9,pRVar14,&local_58);
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 2;
    puVar2[8] = 1;
    if ((pRVar14 != (RefCountNTSImpl *)0x0) && ((*(uint *)(pRVar14 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(pRVar14 + 0x18) = *(uint *)(pRVar14 + 0x18) - 1;
      FUN_1434a2b80(pRVar14);
    }
    if ((pRVar9 != (RefCountNTSImpl *)0x0) &&
       (*(int *)pRVar9 = *(int *)pRVar9 + -1, *(int *)pRVar9 < 1)) {
      FUN_14336bed0(pRVar9);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pRVar9);
    }
    if ((((bVar7 & 2) == 0) && (lVar5 != 0)) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
    if ((((bVar7 & 1) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
      FUN_1434a2b80(lVar6);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    return;
  }
  return;
}



// FUNCTION 14346d500 FUN_14346d500 body=709 status=ok
// SIG undefined FUN_14346d500(void)

void FUN_14346d500(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_res8;
  uint in_stack_fffffffffffffde8;
  undefined8 local_208 [60];
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
  if (*(longlong *)(lVar2 + 0x248) == 0) {
    FUN_1434a15f0(param_1,"ExternalInterface.call - handler is not installed.");
    puVar5 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar5);
    *puVar5 = 0;
    return;
  }
  puVar11 = (undefined8 *)0x0;
  uVar8 = 0;
  puVar7 = *(undefined8 **)
            (*(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
            0x138);
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(uint *)(param_1 + 0x3c);
    puVar14 = puVar11;
    if (uVar8 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      puVar14 = (undefined8 *)
                ((ulonglong)(uVar8 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
    }
    FUN_143411540(puVar14,&local_res8,lVar3,0xffffffff,in_stack_fffffffffffffde8 & 0xffffff00);
    *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
    piVar1 = (int *)(puVar7 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar7);
    }
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res8);
    }
    uVar8 = *(int *)(param_1 + 0x38) - 1;
    puVar7 = local_res8;
    if (10 < uVar8) {
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
      puVar14 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,(ulonglong)uVar8 * 0x30,0);
      goto LAB_14346d62b;
    }
  }
  puVar14 = local_208;
LAB_14346d62b:
  puVar10 = puVar14;
  puVar15 = puVar11;
  if (uVar8 != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar6 = (*(int *)(param_1 + 0x3c) - (int)puVar15) - 1;
      puVar12 = puVar11;
      if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        puVar12 = (undefined8 *)
                  ((ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8));
      }
      puVar13 = puVar11;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0xffffffffffffffff;
        puVar10[1] = 0xffffffffffffffff;
        puVar10[2] = 0;
        *(undefined4 *)(puVar10 + 3) = 0;
        puVar13 = puVar10;
      }
      FUN_14343bb60(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(param_1 + 0x30),puVar12,puVar13);
      uVar6 = (int)puVar15 + 1;
      puVar10 = puVar10 + 6;
      puVar15 = (undefined8 *)(ulonglong)uVar6;
    } while (uVar6 < uVar8);
  }
  lVar3 = *(longlong *)(lVar2 + 0x18);
  FUN_143411150(lVar3 + 0x58);
  *(undefined1 *)(lVar3 + 0x58) = 0;
  if (*(int *)(puVar7 + 4) != 0) {
    puVar11 = (undefined8 *)*puVar7;
  }
  (**(code **)(**(longlong **)(lVar2 + 0x248) + 8))
            (*(longlong **)(lVar2 + 0x248),lVar2,puVar11,puVar14,uVar8);
  FUN_143411240(*(undefined8 *)(param_1 + 8),*(longlong *)(lVar2 + 0x18) + 0x58);
  if (uVar8 != 0) {
    puVar11 = puVar14 + 2;
    uVar9 = (ulonglong)uVar8;
    do {
      if ((*(uint *)(puVar11 + 1) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,puVar11 + -2,puVar11[2]);
        *puVar11 = 0;
      }
      *(undefined4 *)(puVar11 + 1) = 0;
      puVar11 = puVar11 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (0x3c < uVar8) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar14);
  }
  piVar1 = (int *)(puVar7 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920(puVar7);
  return;
}



// FUNCTION 14346d7d0 FUN_14346d7d0 body=60 status=ok
// SIG undefined FUN_14346d7d0(void)

void FUN_14346d7d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_14346ce70(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14346d820 FUN_14346d820 body=27 status=ok
// SIG undefined FUN_14346d820(void)

void FUN_14346d820(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 14346d850 FUN_14346d850 body=441 status=ok
// SIG undefined FUN_14346d850(void)

longlong * FUN_14346d850(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *local_res8;
  longlong local_38;
  undefined1 local_30;
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_30 = 8;
  local_38 = param_2;
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x70)
  ;
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_14346cf50(lVar1,&local_38);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar2;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = FUN_14341b750(param_2,1);
    FUN_143495140(puVar3,&local_38,uVar4,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar3 = &PTR_LAB_145b0e4a8;
    puVar3[4] = &PTR_LAB_145b0e4f0;
    puVar3[0xd] = &PTR_LAB_145b0e598;
    FUN_143422ee0(puVar3 + 0xd,puVar3,&local_38,&DAT_145b088b0,&local_res8);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  }
  local_res8 = puVar3;
  FUN_1434a4b90(param_2,0x1c,&local_res8);
  local_20[0] = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_20,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar5 = (longlong *)(*(longlong *)(param_2 + 0x48) + 0x20);
  (**(code **)(*plVar5 + 0x50))
            (plVar5,&local_38,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x218,local_28,
             &local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
  }
  return param_1;
}



// FUNCTION 14346da10 FUN_14346da10 body=61 status=ok
// SIG undefined FUN_14346da10(void)

void FUN_14346da10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x15);
                    /* WARNING: Could not recover jumptable at 0x00014346da49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 14346da60 FUN_14346da60 body=371 status=ok
// SIG undefined FUN_14346da60(void)

void FUN_14346da60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  double dVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  pcVar5 = (char *)0x0;
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xe0) + 0x20) + 0x10);
  uVar4 = *(int *)(param_1 + 0x3c) - 1;
  pcVar6 = pcVar5;
  if (uVar4 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    pcVar6 = (char *)((ulonglong)(uVar4 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar4 >> 5) * 8));
  }
  dVar7 = (double)FUN_143411a90(pcVar6,lVar1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar4 = *(int *)(param_1 + 0x3c) - 2;
  pcVar6 = pcVar5;
  if (uVar4 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    pcVar6 = (char *)((ulonglong)(uVar4 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar4 >> 5) * 8));
  }
  uVar3 = FUN_143411f00(pcVar6);
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x3c);
  pcVar6 = pcVar5;
  if (uVar4 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    pcVar6 = (char *)((ulonglong)(uVar4 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar4 >> 5) * 8));
  }
  if (((*pcVar6 == '\a') && (lVar1 != 0)) && (*(longlong *)(pcVar6 + 8) != 0)) {
    pcVar6 = (char *)Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (*(longlong *)(pcVar6 + 8),
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(lVar1 + 0xe0) + 0x20) + 0x10));
    pcVar5 = (char *)0x0;
    if ((pcVar6 != (char *)0x0) && (pcVar6[0x6a] < '\0')) {
      pcVar5 = pcVar6;
    }
  }
  FUN_1432eb060(uVar2,pcVar5,uVar3,(int)dVar7);
  return;
}



// FUNCTION 14346dbe0 FUN_14346dbe0 body=105 status=ok
// SIG undefined FUN_14346dbe0(void)

undefined8 * FUN_14346dbe0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x15);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 14346dc50 FUN_14346dc50 body=570 status=ok
// SIG undefined FUN_14346dc50(void)

void FUN_14346dc50(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  byte local_40 [8];
  int *local_38;
  
  uVar5 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    local_40[0] = 1;
    FUN_1434a3be0(&local_58,&local_58,1);
    lVar2 = local_50 * 0x20 + local_58 + -0x20;
    lVar3 = local_50;
    if (lVar2 == 0) goto LAB_14346dd1c;
LAB_14346dd04:
    lVar3 = local_50;
    FUN_143410ec0(lVar2,local_40);
    if (local_40[0] < 5) goto LAB_14346dd1c;
  }
  else {
    local_38 = *(int **)(param_2 + 0x70);
    local_40[0] = 7;
    if (local_38 == (int *)0x0) {
      local_38 = (int *)FUN_14336c170(param_2);
    }
    if (local_38 != (int *)0x0) {
      *local_38 = *local_38 + 1;
    }
    FUN_1434a3be0(&local_58,&local_58,1);
    lVar2 = local_50 * 0x20 + local_58 + -0x20;
    lVar3 = local_50;
    if (lVar2 != 0) goto LAB_14346dd04;
  }
  FUN_143411150(local_40);
LAB_14346dd1c:
  local_40[0] = 4;
  local_38 = (int *)CONCAT44(local_38._4_4_,param_4);
  FUN_1434a3be0(&local_58,&local_58,lVar3 + 1);
  lVar3 = local_50;
  lVar2 = local_50 * 0x20 + local_58 + -0x20;
  if ((lVar2 != 0) && (FUN_143410ec0(lVar2,local_40), 4 < local_40[0])) {
    FUN_143411150(local_40);
  }
  local_40[0] = 3;
  local_38 = (int *)(double)param_3;
  FUN_1434a3be0(&local_58,&local_58,lVar3 + 1);
  lVar3 = local_50 * 0x20 + local_58 + -0x20;
  if ((lVar3 != 0) && (FUN_143410ec0(lVar3,local_40), 4 < local_40[0])) {
    FUN_143411150(local_40);
  }
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10) + 0x18);
  lVar2 = *(longlong *)(lVar3 + 0x10);
  uVar1 = *(ulonglong *)(lVar2 + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x60);
    uVar4 = uVar5;
    do {
      if (*(int *)(lVar2 + uVar4 * 0x10) == 0) {
        uVar5 = *(ulonglong *)(lVar2 + 8 + uVar4 * 0x10);
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < uVar1);
  }
  lVar3 = FUN_1434372c0(lVar3 + 0x80,4);
  *(undefined4 *)(lVar3 + 8) = 4;
  if (uVar5 != 0) {
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(lVar3 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x10));
  }
  *(ulonglong *)(lVar3 + 0x10) = uVar5;
  if (*(RefCountNTSImpl **)(lVar3 + 0x18) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x18));
  }
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(code **)(lVar3 + 0x50) = FUN_14346da60;
  FUN_143499890(lVar3 + 0x58,&local_58);
  FUN_1434976a0(&local_58);
  return;
}



// FUNCTION 14346de90 FUN_14346de90 body=754 status=ok
// SIG undefined FUN_14346de90(void)

void FUN_14346de90(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong local_res8;
  undefined **local_78;
  undefined8 local_70;
  byte local_58 [48];
  
  local_58[0] = 0;
  plVar8 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x60) + 0x20);
  cVar5 = (**(code **)(*plVar8 + 0x58))
                    (plVar8,param_1 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                     0x1e0,local_58);
  if (((cVar5 == '\0') || (lVar6 = FUN_143412120(local_58,param_1), lVar6 == 0)) ||
     (lVar6 + 0x20 == 0)) goto LAB_14346e147;
  iVar9 = 2;
  if (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x68) == '\x01') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
      FUN_1434a29d0(param_1 + 8);
    }
    puVar2 = *(undefined1 **)(param_1 + 8);
    if (puVar2 != (undefined1 *)0x0) {
      *(double *)(puVar2 + 8) = (double)param_4;
      *puVar2 = 3;
    }
    iVar9 = 3;
  }
  if (param_3 == 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    puVar10 = (ulonglong *)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x18) <= *puVar10) {
      FUN_1434a29d0(puVar10);
    }
    if ((undefined1 *)*puVar10 != (undefined1 *)0x0) {
      *(undefined1 *)*puVar10 = 1;
    }
  }
  else {
    local_70 = *(int **)(param_3 + 0x70);
    local_78 = (undefined **)CONCAT71(local_78._1_7_,7);
    if (local_70 == (int *)0x0) {
      local_70 = (int *)FUN_14336c170(param_3);
    }
    if (local_70 != (int *)0x0) {
      *local_70 = *local_70 + 1;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    puVar10 = (ulonglong *)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x18) <= *puVar10) {
      FUN_1434a29d0(puVar10);
    }
    if (*puVar10 != 0) {
      FUN_143410ec0(*puVar10,&local_78);
      if ((byte)local_78 < 5) goto LAB_14346e006;
    }
    FUN_143411150(&local_78);
  }
LAB_14346e006:
  puVar10 = (ulonglong *)(param_1 + 8);
  if (param_2 == 0) {
    *puVar10 = *puVar10 + 0x20;
    if (*(ulonglong *)(param_1 + 0x18) <= *puVar10) {
      FUN_1434a29d0(puVar10);
    }
    if ((undefined1 *)*puVar10 != (undefined1 *)0x0) {
      *(undefined1 *)*puVar10 = 1;
    }
  }
  else {
    piVar7 = *(int **)(param_2 + 0x70);
    local_78 = (undefined **)CONCAT71(local_78._1_7_,7);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)FUN_14336c170(param_2);
    }
    if (piVar7 != (int *)0x0) {
      *piVar7 = *piVar7 + 1;
    }
    *puVar10 = *puVar10 + 0x20;
    local_70 = piVar7;
    if (*(ulonglong *)(param_1 + 0x18) <= *puVar10) {
      FUN_1434a29d0(puVar10);
    }
    if (*puVar10 != 0) {
      FUN_143410ec0(*puVar10,&local_78);
      if ((byte)local_78 < 5) goto LAB_14346e087;
    }
    FUN_143411150(&local_78);
  }
LAB_14346e087:
  uVar3 = *puVar10;
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x30);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onSetFocus",10);
  local_70 = (int *)CONCAT44(iVar1 * 0x20 + (int)((longlong)(uVar3 - lVar4) >> 5) + -0x20,iVar9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  local_78 = &PTR_FUN_145b11e98;
  FUN_1434649e0(param_1,lVar6 + 0x20,&local_res8,&local_78);
  piVar7 = (int *)(local_res8 + 0x18);
  *piVar7 = *piVar7 + -1;
  if (*piVar7 == 0) {
    FUN_14335f920();
  }
  do {
    if (4 < *(byte *)*puVar10) {
      FUN_143411150();
    }
    *puVar10 = *puVar10 - 0x20;
    if (*puVar10 < *(ulonglong *)(param_1 + 0x10)) {
      FUN_1434a25c0(puVar10);
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
LAB_14346e147:
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  return;
}



// FUNCTION 14346e190 FUN_14346e190 body=103 status=ok
// SIG undefined FUN_14346e190(void)

undefined8 * FUN_14346e190(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495410();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addListener_145b086d0,local_res8);
  return param_1;
}



// FUNCTION 14346e200 FUN_14346e200 body=345 status=ok
// SIG undefined FUN_14346e200(void)

void FUN_14346e200(longlong param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar6 = 0;
    if ((*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) == '\x01') && (0 < *(int *)(param_1 + 0x38)))
    {
      lVar7 = 0;
      uVar4 = *(uint *)(param_1 + 0x3c);
      if (uVar4 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar4 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar4 >> 5) * 8);
      }
      uVar4 = FUN_143411f00(lVar7);
      uVar6 = (ulonglong)uVar4;
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
    lVar5 = (ulonglong)*(byte *)(uVar6 + 0x52c4 + lVar5) * 0x60 + lVar5;
    piVar2 = *(int **)(lVar5 + 0x4ce8);
    if (piVar2 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar2 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar5 + 0x4ce8) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        lVar5 = *(longlong *)(this + 0x70);
        if (lVar5 == 0) {
          lVar5 = FUN_14336c170(this);
        }
        pbVar3 = *(byte **)(param_1 + 8);
        if (4 < *pbVar3) {
          FUN_143411150(pbVar3);
        }
        *pbVar3 = 5;
        lVar5 = *(longlong *)(lVar5 + 0x18);
        *(longlong *)(pbVar3 + 8) = lVar5;
        piVar2 = (int *)(lVar5 + 0x18);
        *piVar2 = *piVar2 + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14346e360 FUN_14346e360 body=723 status=ok
// SIG undefined FUN_14346e360(void)

void FUN_14346e360(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  RefCountNTSImpl *pRVar7;
  RefCountNTSImpl *pRVar8;
  RefCountNTSImpl *pRVar9;
  longlong local_res8;
  byte local_58 [8];
  longlong local_50;
  longlong *local_38;
  byte *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = 0;
  if ((0 < *(int *)(param_1 + 0x38)) && (lVar3 = *(longlong *)(param_1 + 0x30), lVar3 != 0)) {
    uVar5 = *(uint *)(param_1 + 0x3c);
    pRVar9 = (RefCountNTSImpl *)0x0;
    pRVar8 = (RefCountNTSImpl *)0x0;
    pRVar7 = pRVar9;
    if (uVar5 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar7 = (RefCountNTSImpl *)
               ((ulonglong)(uVar5 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar5 >> 5) * 8));
    }
    if (*pRVar7 == (RefCountNTSImpl)0x5) {
      local_58[0] = 0;
      pRVar7 = pRVar9;
      if (uVar5 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        pRVar7 = (RefCountNTSImpl *)
                 ((ulonglong)(uVar5 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar5 >> 5) * 8));
      }
      FUN_143411540(pRVar7,&local_res8,lVar3,0xffffffff,0);
      local_38 = &local_res8;
      local_30 = local_58;
      local_18 = 0;
      local_10 = 0;
      local_28 = 0;
      uStack_20 = 0;
      cVar4 = FUN_143418920(*(undefined8 *)(param_1 + 0x30),&local_38,0,0);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      pRVar7 = pRVar9;
      if ((((cVar4 != '\0') && (pRVar7 = pRVar8, local_58[0] == 7)) &&
          (*(longlong *)(param_1 + 0x30) != 0)) &&
         ((local_50 != 0 &&
          (pRVar8 = (RefCountNTSImpl *)
                    Scaleform::GFx::CharacterHandle::ResolveCharacter
                              (local_50,*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) +
                                           0x20) + 0x10)), pRVar8 != (RefCountNTSImpl *)0x0)))) {
        pRVar7 = pRVar9;
        if ((char)pRVar8[0x6a] < '\0') {
          pRVar7 = pRVar8;
        }
        if (pRVar7 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
        }
      }
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    else {
      pRVar7 = pRVar9;
      if (uVar5 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        pRVar7 = (RefCountNTSImpl *)
                 ((ulonglong)(uVar5 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar5 >> 5) * 8));
      }
      pRVar7 = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter(pRVar7,lVar3);
      if (pRVar7 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    if ((*(char *)(*(longlong *)(lVar3 + 0xe8) + 0x68) == '\x01') && (1 < *(int *)(param_1 + 0x38)))
    {
      uVar6 = FUN_1434141c0(param_1,1);
      uVar5 = FUN_143411f00(uVar6,lVar3);
      pRVar9 = (RefCountNTSImpl *)(ulonglong)uVar5;
    }
    if (pRVar7 == (RefCountNTSImpl *)0x0) {
      FUN_1432eb210(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                     0x10),0,pRVar9,2);
      puVar2 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar2);
      *puVar2 = 2;
      puVar2[8] = 1;
    }
    else {
      cVar4 = (**(code **)(*(longlong *)pRVar7 + 0x2d0))(pRVar7,2);
      if (cVar4 != '\0') {
        FUN_1432eb210(*(undefined8 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                       0x10),pRVar7,pRVar9,2);
        puVar2 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar2);
        *puVar2 = 2;
        puVar2[8] = 1;
      }
      Scaleform::RefCountNTSImpl::Release(pRVar7);
    }
  }
  return;
}



// FUNCTION 14346e640 FUN_14346e640 body=398 status=ok
// SIG undefined FUN_14346e640(void)

void FUN_14346e640(longlong param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (lVar8 != 0) {
    uVar5 = 0;
    uVar7 = uVar5;
    if ((*(char *)(*(longlong *)(lVar8 + 0xe8) + 0x68) == '\x01') &&
       (uVar7 = 0, 2 < *(int *)(param_1 + 0x38))) {
      uVar6 = *(int *)(param_1 + 0x3c) - 2;
      uVar7 = uVar5;
      if (uVar6 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
        uVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      uVar6 = FUN_143411f00(uVar7);
      uVar7 = (ulonglong)uVar6;
    }
    lVar8 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
    lVar8 = (ulonglong)*(byte *)(uVar7 + 0x52c4 + lVar8) * 0x60 + lVar8;
    piVar2 = *(int **)(lVar8 + 0x4ce8);
    if (piVar2 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar2 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar8 + 0x4ce8) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        iVar3 = (**(code **)(*(longlong *)this + 0x290))(this);
        if (iVar3 == 4) {
          lVar8 = 0x7fffffffffffffff;
          if (1 < *(int *)(param_1 + 0x38)) {
            uVar4 = FUN_1434141c0(param_1,0,0x7fffffffffffffff);
            iVar3 = FUN_143411e30(uVar4,*(undefined8 *)(param_1 + 0x30));
            uVar5 = (ulonglong)iVar3;
            uVar4 = FUN_1434141c0(param_1,1);
            iVar3 = FUN_143411e30(uVar4,*(undefined8 *)(param_1 + 0x30));
            lVar8 = (longlong)iVar3;
          }
          FUN_143deb930(this,uVar5,lVar8);
        }
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
  }
  return;
}



// FUNCTION 14346e7e0 FUN_14346e7e0 body=377 status=ok
// SIG undefined FUN_14346e7e0(void)

void FUN_14346e7e0(longlong param_1)

{
  byte *pbVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  pbVar1 = *(byte **)(param_1 + 8);
  if (4 < *pbVar1) {
    FUN_143411150(pbVar1);
  }
  *pbVar1 = 3;
  pbVar1[8] = 0;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0xf0;
  pbVar1[0xf] = 0xbf;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar6 = 0;
    if ((*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) == '\x01') && (0 < *(int *)(param_1 + 0x38)))
    {
      lVar7 = 0;
      uVar3 = *(uint *)(param_1 + 0x3c);
      if (uVar3 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar3 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar3 >> 5) * 8);
      }
      uVar3 = FUN_143411f00(lVar7);
      uVar6 = (ulonglong)uVar3;
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
    lVar7 = (ulonglong)*(byte *)(uVar6 + 0x52c4 + lVar5) * 0x60;
    piVar2 = *(int **)(lVar7 + 0x4ce8 + lVar5);
    if (piVar2 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar2 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar7 + 0x4ce8 + lVar5) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        iVar4 = (**(code **)(*(longlong *)this + 0x290))(this);
        if (iVar4 == 4) {
          lVar5 = FUN_143de9c70(this);
          pbVar1 = *(byte **)(param_1 + 8);
          if (4 < *pbVar1) {
            FUN_143411150(pbVar1);
          }
          *(double *)(pbVar1 + 8) = (double)lVar5;
          *pbVar1 = 3;
        }
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
  }
  return;
}



// FUNCTION 14346e960 FUN_14346e960 body=398 status=ok
// SIG undefined FUN_14346e960(void)

void FUN_14346e960(longlong param_1)

{
  byte *pbVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  double dVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  pbVar1 = *(byte **)(param_1 + 8);
  if (4 < *pbVar1) {
    FUN_143411150(pbVar1);
  }
  *pbVar1 = 3;
  pbVar1[8] = 0;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0xf0;
  pbVar1[0xf] = 0xbf;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar7 = 0;
    if ((*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) == '\x01') && (2 < *(int *)(param_1 + 0x38)))
    {
      lVar8 = 0;
      uVar6 = *(int *)(param_1 + 0x3c) - 2;
      if (uVar6 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      uVar6 = FUN_143411f00(lVar8);
      uVar7 = (ulonglong)uVar6;
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
    lVar8 = (ulonglong)*(byte *)(uVar7 + 0x52c4 + lVar5) * 0x60;
    piVar2 = *(int **)(lVar8 + 0x4ce8 + lVar5);
    if (piVar2 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar2 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar8 + 0x4ce8 + lVar5) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        iVar4 = (**(code **)(*(longlong *)this + 0x290))(this);
        if (iVar4 == 4) {
          lVar5 = Scaleform::GFx::TextField::GetBeginIndex(this);
          dVar3 = (double)lVar5;
          if (lVar5 < 0) {
            dVar3 = dVar3 + 1.8446744073709552e+19;
          }
          pbVar1 = *(byte **)(param_1 + 8);
          if (4 < *pbVar1) {
            FUN_143411150(pbVar1);
          }
          *(double *)(pbVar1 + 8) = dVar3;
          *pbVar1 = 3;
        }
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
  }
  return;
}



// FUNCTION 14346eb00 FUN_14346eb00 body=398 status=ok
// SIG undefined FUN_14346eb00(void)

void FUN_14346eb00(longlong param_1)

{
  byte *pbVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  double dVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  pbVar1 = *(byte **)(param_1 + 8);
  if (4 < *pbVar1) {
    FUN_143411150(pbVar1);
  }
  *pbVar1 = 3;
  pbVar1[8] = 0;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0xf0;
  pbVar1[0xf] = 0xbf;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar7 = 0;
    if ((*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) == '\x01') && (2 < *(int *)(param_1 + 0x38)))
    {
      lVar8 = 0;
      uVar6 = *(int *)(param_1 + 0x3c) - 2;
      if (uVar6 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      uVar6 = FUN_143411f00(lVar8);
      uVar7 = (ulonglong)uVar6;
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
    lVar8 = (ulonglong)*(byte *)(uVar7 + 0x52c4 + lVar5) * 0x60;
    piVar2 = *(int **)(lVar8 + 0x4ce8 + lVar5);
    if (piVar2 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar2 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar8 + 0x4ce8 + lVar5) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        iVar4 = (**(code **)(*(longlong *)this + 0x290))(this);
        if (iVar4 == 4) {
          lVar5 = Scaleform::GFx::TextField::GetEndIndex(this);
          dVar3 = (double)lVar5;
          if (lVar5 < 0) {
            dVar3 = dVar3 + 1.8446744073709552e+19;
          }
          pbVar1 = *(byte **)(param_1 + 8);
          if (4 < *pbVar1) {
            FUN_143411150(pbVar1);
          }
          *(double *)(pbVar1 + 8) = dVar3;
          *pbVar1 = 3;
        }
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
  }
  return;
}



// FUNCTION 14346eca0 FUN_14346eca0 body=617 status=ok
// SIG undefined FUN_14346eca0(void)

void FUN_14346eca0(longlong param_1)

{
  undefined1 *puVar1;
  RefCountNTSImpl *this;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  RefCountNTSImpl *this_00;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x38) < 1) {
    cVar3 = '\x01';
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    uVar5 = *(uint *)(param_1 + 0x3c);
    if (uVar5 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    cVar3 = FUN_143411fd0(lVar6);
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  uVar5 = 0;
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0xe0) + 0x20) + 0x10);
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar7 = 0;
    uVar5 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar5 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    uVar5 = FUN_143411f00(lVar7);
  }
  lVar8 = (ulonglong)*(byte *)((ulonglong)uVar5 + 0x52c4 + lVar6) * 0x60;
  piVar4 = *(int **)(lVar8 + 0x4ce8 + lVar6);
  this_00 = (RefCountNTSImpl *)0x0;
  if (piVar4 != (int *)0x0) {
    this_00 = *(RefCountNTSImpl **)(piVar4 + 2);
    if (this_00 == (RefCountNTSImpl *)0x0) {
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar8 + 0x4ce8 + lVar6) = 0;
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this_00 + 8) == 0) {
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
  }
  if (this_00 == (RefCountNTSImpl *)0x0) {
    FUN_1432eb450(lVar6,uVar5);
    lVar8 = (ulonglong)*(byte *)((ulonglong)uVar5 + 0x52c4 + lVar6) * 0x60;
    piVar4 = *(int **)(lVar8 + 0x4ce8 + lVar6);
    if (piVar4 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar4 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar8 + 0x4ce8 + lVar6) = 0;
      }
      else if (*(int *)(this + 8) == 0) {
        this_00 = (RefCountNTSImpl *)0x0;
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        this_00 = this;
      }
    }
    if (this_00 == (RefCountNTSImpl *)0x0) goto LAB_14346ee65;
  }
  Scaleform::RefCountNTSImpl::Release(this_00);
LAB_14346ee65:
  if (cVar3 == '\0') {
    FUN_1432eaa50(lVar6,uVar5);
  }
  else {
    if (this_00 == (RefCountNTSImpl *)0x0) {
      return;
    }
    cVar3 = (**(code **)(*(longlong *)this_00 + 0x2d0))(this_00,2);
    if (cVar3 != '\0') {
      FUN_1432eb210(lVar6,this_00,uVar5,2);
    }
  }
  if (this_00 != (RefCountNTSImpl *)0x0) {
    piVar4 = *(int **)(this_00 + 0x70);
    pcVar2 = *(char **)(param_1 + 8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_14336c170(this_00);
    }
    if ((*pcVar2 != '\a') || (*(int **)(pcVar2 + 8) != piVar4)) {
      FUN_143411150(pcVar2);
      *pcVar2 = '\a';
      *(int **)(pcVar2 + 8) = piVar4;
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
    }
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  return;
}



// FUNCTION 14346ef10 FUN_14346ef10 body=1294 status=ok
// SIG undefined FUN_14346ef10(void)

void FUN_14346ef10(longlong param_1)

{
  RefCountNTSImpl RVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  RefCountNTSImpl *pRVar10;
  longlong lVar11;
  undefined8 uVar12;
  RefCountNTSImpl *pRVar13;
  RefCountNTSImpl *pRVar14;
  uint uVar15;
  RefCountNTSImpl *pRVar16;
  RefCountNTSImpl *pRVar17;
  undefined8 *local_res8;
  ulonglong in_stack_ffffffffffffff78;
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined8 local_68;
  RefCountNTSImpl *pRStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  pRVar10 = (RefCountNTSImpl *)0x0;
  pRVar16 = pRVar10;
  if (3 < *(int *)(param_1 + 0x38)) {
    lVar11 = *(longlong *)(param_1 + 0x30);
    uVar15 = *(int *)(param_1 + 0x3c) - 3;
    if (uVar15 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      pRVar16 = (RefCountNTSImpl *)
                ((ulonglong)(uVar15 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar15 >> 5) * 8));
    }
    uVar15 = FUN_143411f00(pRVar16);
    pRVar16 = (RefCountNTSImpl *)(ulonglong)uVar15;
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe0) + 0x20) + 0x10);
  if (*(int *)(param_1 + 0x38) < 2) {
LAB_14346f080:
    RVar1 = pRVar16[lVar3 + 0x52c4];
    piVar4 = *(int **)((ulonglong)(byte)RVar1 * 0x60 + 0x4ce8 + lVar3);
    pRVar13 = pRVar10;
    if (piVar4 != (int *)0x0) {
      pRVar17 = *(RefCountNTSImpl **)(piVar4 + 2);
      if (pRVar17 == (RefCountNTSImpl *)0x0) {
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)((ulonglong)(byte)RVar1 * 0x60 + 0x4ce8 + lVar3) = 0;
        pRVar13 = (RefCountNTSImpl *)0x0;
      }
      else if (*(int *)(pRVar17 + 8) != 0) {
        *(int *)(pRVar17 + 8) = *(int *)(pRVar17 + 8) + 1;
        *(int *)(pRVar17 + 8) = *(int *)(pRVar17 + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(pRVar17);
        *(int *)(pRVar17 + 8) = *(int *)(pRVar17 + 8) + 1;
        pRVar13 = pRVar17;
      }
    }
    if (pRVar13 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar13);
    }
  }
  else {
    uVar15 = *(int *)(param_1 + 0x3c) - 1;
    pRVar13 = pRVar10;
    if (uVar15 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      pRVar13 = (RefCountNTSImpl *)
                ((ulonglong)(uVar15 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar15 >> 5) * 8));
    }
    if ((*pRVar13 == (RefCountNTSImpl)0x0) || (*pRVar13 == (RefCountNTSImpl)0xa))
    goto LAB_14346f080;
    pRVar13 = pRVar10;
    if (uVar15 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      pRVar13 = (RefCountNTSImpl *)
                ((ulonglong)(uVar15 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar15 >> 5) * 8));
    }
    if (*pRVar13 == (RefCountNTSImpl)0x1) goto LAB_14346f080;
    uVar9 = FUN_1434141c0(param_1,1);
    pRVar13 = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter(uVar9,lVar11);
    if (pRVar13 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
    }
  }
  if (*(int *)(param_1 + 0x38) < 3) {
    uVar6 = 0;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x30);
    uVar15 = *(int *)(param_1 + 0x3c) - 2;
    pRVar17 = pRVar10;
    if (uVar15 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      pRVar17 = (RefCountNTSImpl *)
                ((ulonglong)(uVar15 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar15 >> 5) * 8));
    }
    uVar6 = FUN_143411fd0(pRVar17);
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  uVar15 = *(uint *)(param_1 + 0x3c);
  pRVar17 = pRVar10;
  if (uVar15 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
    pRVar17 = (RefCountNTSImpl *)
              ((ulonglong)(uVar15 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar15 >> 5) * 8));
  }
  FUN_143411540(pRVar17,&local_res8,lVar11,0xffffffff,in_stack_ffffffffffffff78 & 0xffffffffffffff00
               );
  uVar7 = 0;
  pcVar5 = (char *)*local_res8;
  pRVar17 = pRVar10;
  if (((*pcVar5 == 'u') && (pcVar5[1] == 'p')) && (pcVar5[2] == '\0')) {
    local_74 = 0x26;
  }
  else {
    do {
      pRVar14 = pRVar17;
      pRVar17 = pRVar10;
      if (*(RefCountNTSImpl *)(pcVar5 + (longlong)pRVar14) != pRVar14[0x145b136b8])
      goto LAB_14346f220;
      pRVar17 = pRVar14 + 1;
    } while (pRVar14 + 1 != (RefCountNTSImpl *)0x5);
    local_74 = (int)pRVar14 + 0x24;
  }
  goto LAB_14346f2b5;
  while (pRVar17 = pRVar14 + 1, pRVar14 + 1 != (RefCountNTSImpl *)0x5) {
LAB_14346f220:
    pRVar14 = pRVar17;
    pRVar17 = pRVar10;
    if (*(RefCountNTSImpl *)(pcVar5 + (longlong)pRVar14) != pRVar14[0x145b068ec])
    goto LAB_14346f250;
  }
  local_74 = (int)pRVar14 + 0x21;
  goto LAB_14346f2b5;
  while (pRVar17 = pRVar14 + 1, pRVar14 + 1 != (RefCountNTSImpl *)&DAT_00000006) {
LAB_14346f250:
    pRVar14 = pRVar17;
    pRVar17 = pRVar10;
    if (*(RefCountNTSImpl *)(pcVar5 + (longlong)pRVar14) != pRVar14[0x145b068f4])
    goto LAB_14346f280;
  }
  local_74 = (int)pRVar14 + 0x22;
  goto LAB_14346f2b5;
  while (pRVar17 = pRVar14, uVar7 = 0, pRVar14 != (RefCountNTSImpl *)&DAT_00000004) {
LAB_14346f280:
    pRVar14 = pRVar17 + 1;
    if (*(RefCountNTSImpl *)(pcVar5 + (longlong)pRVar17) != pRVar17[0x145b136c0]) {
      iVar8 = _guard_xfg_dispatch_icall_nop(pcVar5,"shifttab");
      if (iVar8 != 0) {
        lVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
        if (lVar11 != 0) {
          uVar9 = *local_res8;
          uVar12 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
          FUN_14337ae30(uVar12,"moveFocus - invalid string id for key: \'%s\'",uVar9);
        }
        goto LAB_14346f3cf;
      }
      uVar7 = 1;
      break;
    }
  }
  local_74 = 9;
LAB_14346f2b5:
  local_68 = 0;
  pRStack_60 = (RefCountNTSImpl *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_6e = SUB81(pRVar16,0);
  local_6f = uVar7;
  FUN_1432e8520(lVar3,&local_68,local_78,uVar6,0);
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
  }
  if (pRStack_60 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_60);
  }
  local_30._0_3_ = CONCAT12(1,(undefined2)local_30);
  pRStack_60 = pRVar13;
  FUN_1432e8680(lVar3,5,local_78,&local_68);
  FUN_1432e9400(lVar3,&local_68);
  pcVar5 = *(char **)(param_1 + 8);
  if ((pRStack_60 != (RefCountNTSImpl *)0x0) &&
     (pRVar10 = *(RefCountNTSImpl **)(pRStack_60 + 0x70), pRVar10 == (RefCountNTSImpl *)0x0)) {
    pRVar10 = (RefCountNTSImpl *)FUN_14336c170();
  }
  if ((*pcVar5 != '\a') || (*(RefCountNTSImpl **)(pcVar5 + 8) != pRVar10)) {
    FUN_143411150(pcVar5);
    *pcVar5 = '\a';
    *(RefCountNTSImpl **)(pcVar5 + 8) = pRVar10;
    if (pRVar10 != (RefCountNTSImpl *)0x0) {
      *(int *)pRVar10 = *(int *)pRVar10 + 1;
    }
  }
  if (pRStack_60 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_60);
  }
LAB_14346f3cf:
  piVar4 = (int *)(local_res8 + 3);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    FUN_14335f920(local_res8);
  }
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar13);
  }
  return;
}



// FUNCTION 14346f430 FUN_14346f430 body=2339 status=ok
// SIG undefined FUN_14346f430(void)

void FUN_14346f430(longlong param_1)

{
  RefCountNTSImpl RVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char *_Str1;
  RefCountNTSImpl *this;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  Rect<float> *pRVar9;
  RefCountNTSImpl *pRVar10;
  uint uVar11;
  uint uVar12;
  RefCountNTSImpl *pRVar13;
  RefCountNTSImpl *pRVar14;
  undefined8 *puVar15;
  RefCountNTSImpl *pRVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res10;
  char local_res18;
  short local_res20;
  ulonglong in_stack_fffffffffffffe68;
  uint local_188;
  RefCountNTSImpl *local_180;
  undefined8 local_178;
  float local_170;
  float local_16c;
  undefined1 local_168 [4];
  uint local_164;
  char local_15f;
  undefined1 local_15e;
  undefined8 *local_158 [2];
  undefined8 local_148;
  undefined8 *local_140;
  RefCountNTSImpl *local_138;
  undefined8 local_130;
  longlong local_128;
  int *local_120;
  RefCountNTSImpl *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined8 local_e8;
  RefCountNTSImpl *pRStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  byte local_a8 [8];
  longlong local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  pRVar14 = (RefCountNTSImpl *)0x0;
  local_188 = 0;
  pRVar13 = pRVar14;
  if (5 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar11 = *(int *)(param_1 + 0x3c) - 5;
    if (uVar11 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar13 = (RefCountNTSImpl *)
                ((ulonglong)(uVar11 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar11 >> 5) * 8));
    }
    local_188 = FUN_143411f00(pRVar13);
    pRVar13 = (RefCountNTSImpl *)(ulonglong)local_188;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10);
  local_178 = lVar4;
  if (*(int *)(param_1 + 0x38) < 4) {
LAB_14346f5c0:
    local_180 = (RefCountNTSImpl *)0x0;
    RVar1 = pRVar13[lVar4 + 0x52c4];
    piVar8 = *(int **)((ulonglong)(byte)RVar1 * 0x60 + 0x4ce8 + lVar4);
    if (piVar8 != (int *)0x0) {
      pRVar13 = *(RefCountNTSImpl **)(piVar8 + 2);
      if (pRVar13 == (RefCountNTSImpl *)0x0) {
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)((ulonglong)(byte)RVar1 * 0x60 + 0x4ce8 + lVar4) = 0;
      }
      else if (*(int *)(pRVar13 + 8) == 0) {
        local_180 = (RefCountNTSImpl *)0x0;
      }
      else {
        *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
        *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(pRVar13);
        *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
        local_180 = pRVar13;
      }
    }
    if (local_180 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_180);
    }
  }
  else {
    uVar11 = *(int *)(param_1 + 0x3c) - 3;
    pRVar10 = pRVar14;
    if (uVar11 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar11 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar11 >> 5) * 8));
    }
    if ((*pRVar10 == (RefCountNTSImpl)0x0) || (*pRVar10 == (RefCountNTSImpl)0xa))
    goto LAB_14346f5c0;
    pRVar10 = pRVar14;
    if (uVar11 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar11 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar11 >> 5) * 8));
    }
    if (*pRVar10 == (RefCountNTSImpl)0x1) goto LAB_14346f5c0;
    uVar7 = FUN_1434141c0(param_1,3);
    local_180 = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter(uVar7,lVar3);
    if (local_180 != (RefCountNTSImpl *)0x0) {
      *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
    }
  }
  if (*(int *)(param_1 + 0x38) < 5) {
    local_res10 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar11 = *(int *)(param_1 + 0x3c) - 4;
    pRVar13 = pRVar14;
    if (uVar11 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar13 = (RefCountNTSImpl *)
                ((ulonglong)(uVar11 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar11 >> 5) * 8));
    }
    local_res10 = FUN_143411fd0(pRVar13);
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar11 = *(uint *)(param_1 + 0x3c);
  pRVar13 = pRVar14;
  if (uVar11 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    pRVar13 = (RefCountNTSImpl *)
              ((ulonglong)(uVar11 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar11 >> 5) * 8));
  }
  FUN_143411540(pRVar13,local_158,lVar3,0xffffffff,in_stack_fffffffffffffe68 & 0xffffffffffffff00);
  puVar15 = local_158[0];
  cVar5 = '\0';
  _Str1 = (char *)*local_158[0];
  pRVar13 = pRVar14;
  if (((*_Str1 == 'u') && (_Str1[1] == 'p')) && (_Str1[2] == '\0')) {
    uVar11 = 0x26;
  }
  else {
    do {
      pRVar10 = pRVar13;
      pRVar13 = pRVar14;
      if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar10) != pRVar10[0x145b136b8])
      goto LAB_14346f780;
      pRVar13 = pRVar10 + 1;
    } while (pRVar10 + 1 != (RefCountNTSImpl *)0x5);
    uVar11 = (int)pRVar10 + 0x24;
  }
  goto LAB_14346f815;
  while (pRVar13 = pRVar10 + 1, pRVar10 + 1 != (RefCountNTSImpl *)0x5) {
LAB_14346f780:
    pRVar10 = pRVar13;
    pRVar13 = pRVar14;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar10) != pRVar10[0x145b068ec]) goto LAB_14346f7b0;
  }
  uVar11 = (int)pRVar10 + 0x21;
  goto LAB_14346f815;
  while (pRVar13 = pRVar10 + 1, pRVar10 + 1 != (RefCountNTSImpl *)&DAT_00000006) {
LAB_14346f7b0:
    pRVar10 = pRVar13;
    pRVar13 = pRVar14;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar10) != pRVar10[0x145b068f4]) goto LAB_14346f7e0;
  }
  uVar11 = (int)pRVar10 + 0x22;
  goto LAB_14346f815;
  while (pRVar13 = pRVar10, cVar5 = '\0', pRVar10 != (RefCountNTSImpl *)&DAT_00000004) {
LAB_14346f7e0:
    pRVar10 = pRVar13 + 1;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar13) != pRVar13[0x145b136c0]) {
      iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"shifttab");
      if (iVar6 != 0) goto LAB_14346fd03;
      cVar5 = '\x01';
      break;
    }
  }
  uVar11 = 9;
LAB_14346f815:
  pRVar13 = pRVar14;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(int *)(param_1 + 0x3c) - 1;
    pRVar10 = pRVar14;
    if (uVar12 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar12 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar12 >> 5) * 8));
    }
    FUN_143410ec0(local_a8,pRVar10);
    if ((local_a8[0] < 2) || (local_a8[0] == 10)) {
      pRVar13 = (RefCountNTSImpl *)Scaleform::GFx::MovieImpl::GetModalClip(local_178,local_188);
      if (pRVar13 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
      }
    }
    else if (((local_a8[0] == 7) && (*(longlong *)(param_1 + 0x30) != 0)) &&
            ((pRVar13 = (RefCountNTSImpl *)0x0, local_a0 != 0 &&
             (pRVar10 = (RefCountNTSImpl *)
                        Scaleform::GFx::CharacterHandle::ResolveCharacter
                                  (local_a0,*(undefined8 *)
                                             (*(longlong *)
                                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0)
                                               + 0x20) + 0x10)), pRVar10 != (RefCountNTSImpl *)0x0))
            )) {
      pRVar13 = pRVar14;
      if ((char)pRVar10[0x6a] < '\0') {
        pRVar13 = pRVar10;
      }
      if (pRVar13 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar13 + 8) = *(int *)(pRVar13 + 8) + 1;
      }
    }
    if (4 < local_a8[0]) {
      FUN_143411150(local_a8);
    }
  }
  if (*(int *)(param_1 + 0x38) < 3) {
    local_res18 = '\0';
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(int *)(param_1 + 0x3c) - 2;
    pRVar10 = pRVar14;
    if (uVar12 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar12 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar12 >> 5) * 8));
    }
    local_res18 = FUN_143411fd0(pRVar10);
  }
  local_15e = (undefined1)local_188;
  uVar12 = uVar11 & 0xffff;
  local_e8 = 0;
  pRStack_e0 = (RefCountNTSImpl *)0x0;
  local_d8 = 0xffffffff;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_128 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  local_148 = 0;
  local_164 = uVar12;
  local_15f = cVar5;
  if (local_128 == 0) {
    local_128 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,&local_148);
  }
  local_140 = (undefined8 *)0x0;
  local_120 = (int *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_138 = (RefCountNTSImpl *)0x0;
  local_130 = 0;
  local_118 = (RefCountNTSImpl *)0x0;
  local_110 = 0;
  pRVar10 = pRVar14;
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    pRVar10 = *(RefCountNTSImpl **)(pRVar13 + 0x70);
    if ((pRVar10 != (RefCountNTSImpl *)0x0) ||
       (pRVar10 = (RefCountNTSImpl *)FUN_14336c170(pRVar13), pRVar10 != (RefCountNTSImpl *)0x0)) {
      *(int *)pRVar10 = *(int *)pRVar10 + 1;
    }
    pRVar16 = local_118;
    if ((local_118 != (RefCountNTSImpl *)0x0) &&
       (*(int *)local_118 = *(int *)local_118 + -1, *(int *)local_118 < 1)) {
      FUN_14336bed0(local_118);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pRVar16);
    }
  }
  local_118 = pRVar10;
  if (local_180 == (RefCountNTSImpl *)0x0) {
    if ((local_120 != (int *)0x0) && (*local_120 = *local_120 + -1, *local_120 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    local_120 = (int *)0x0;
    piVar8 = local_120;
  }
  else {
    piVar8 = (int *)FUN_1432be180(local_180);
    if ((local_120 != (int *)0x0) && (*local_120 = *local_120 + -1, *local_120 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  local_120 = piVar8;
  FUN_1432e8520(local_178,&local_e8,local_168,local_res10,&local_148);
  local_b0._0_3_ = CONCAT12(1,(undefined2)local_b0);
  FUN_1432e8680(local_178,5,local_168,&local_e8);
  pRVar10 = local_138;
  lVar3 = local_178;
  if ((pRStack_e0 == (RefCountNTSImpl *)0x0) || (pRStack_e0 == local_180)) {
    if ((local_res18 == '\0') || (local_138 == (RefCountNTSImpl *)0x0)) {
      puVar2 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar2);
      *puVar2 = 1;
    }
    else {
      local_res20 = (short)uVar11;
      if (local_res20 == 9) {
        if (cVar5 == '\0') {
          Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),*local_140);
        }
        else {
          Scaleform::GFx::AS2::Value::SetAsCharacter
                    (*(undefined8 *)(param_1 + 8),local_140[(longlong)(local_138 + -1)]);
        }
      }
      else {
        fVar19 = 1.1754944e-38;
        pRVar16 = pRVar14;
        if (local_138 != (RefCountNTSImpl *)0x0) {
          do {
            if (local_140[(longlong)pRVar16] != 0) {
              piVar8 = (int *)(local_140[(longlong)pRVar16] + 8);
              *piVar8 = *piVar8 + 1;
            }
            this = (RefCountNTSImpl *)local_140[(longlong)pRVar16];
            if ((local_b0._3_1_ != '\0') ||
               (cVar5 = (**(code **)(*(longlong *)this + 0x2c0))(this), cVar5 != '\0')) {
              cVar5 = (**(code **)(*(longlong *)this + 0x2b0))(this,lVar3,(undefined1)local_b0);
              if (cVar5 != '\0') {
                local_88 = 0x3f800000;
                uStack_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                local_78 = 0;
                uStack_74 = 0x3f800000;
                uStack_70 = 0;
                uStack_6c = 0;
                FUN_14336a6d0(this,&local_88);
                pRVar9 = (Rect<float> *)(**(code **)(*(longlong *)this + 0x2f0))(this,local_a8);
                Scaleform::Render::Matrix2x4<float>::EncloseTransform
                          ((Matrix2x4<float> *)&local_88,(Rect<float> *)&local_178,pRVar9);
                fVar18 = local_170;
                if ((uVar12 == 0x25) || (fVar18 = local_16c, uVar12 == 0x26)) {
                  if (fVar19 != 1.1754944e-38) {
                    bVar17 = fVar18 < fVar19;
                    goto LAB_14346fc77;
                  }
                }
                else {
                  if (uVar12 == 0x27) {
                    fVar18 = (float)local_178;
                  }
                  else {
                    if (uVar12 != 0x28) goto LAB_14346fc7f;
                    fVar18 = local_178._4_4_;
                  }
                  if (fVar19 != 1.1754944e-38) {
                    bVar17 = fVar19 < fVar18;
LAB_14346fc77:
                    if (bVar17 || fVar19 == fVar18) goto LAB_14346fc7f;
                  }
                }
                pRVar14 = pRVar16;
                fVar19 = fVar18;
              }
            }
LAB_14346fc7f:
            Scaleform::RefCountNTSImpl::Release(this);
            pRVar16 = pRVar16 + 1;
            puVar15 = local_158[0];
          } while (pRVar16 < pRVar10);
        }
        Scaleform::GFx::AS2::Value::SetAsCharacter
                  (*(undefined8 *)(param_1 + 8),local_140[(longlong)pRVar14]);
      }
    }
  }
  else {
    Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8));
  }
  FUN_1432efa70(&local_148);
  if (pRStack_e0 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_e0);
  }
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar13);
  }
LAB_14346fd03:
  piVar8 = (int *)(puVar15 + 3);
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    FUN_14335f920(puVar15);
  }
  if (local_180 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_180);
  }
  return;
}



// FUNCTION 14346fd60 FUN_14346fd60 body=349 status=ok
// SIG undefined FUN_14346fd60(void)

void FUN_14346fd60(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  RefCountNTSImpl *pRVar5;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar6;
  uint uVar7;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(uint *)(param_1 + 0x3c);
    pRVar6 = (RefCountNTSImpl *)0x0;
    uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
    uVar4 = 0;
    pRVar5 = pRVar6;
    if (uVar7 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      pRVar5 = (RefCountNTSImpl *)
               ((ulonglong)(uVar7 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
    }
    this = pRVar6;
    if ((((*pRVar5 == (RefCountNTSImpl)0x7) && (lVar2 != 0)) && (*(longlong *)(pRVar5 + 8) != 0)) &&
       (pRVar5 = (RefCountNTSImpl *)
                 Scaleform::GFx::CharacterHandle::ResolveCharacter
                           (*(longlong *)(pRVar5 + 8),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10)),
       pRVar5 != (RefCountNTSImpl *)0x0)) {
      if ((char)pRVar5[0x6a] < '\0') {
        this = pRVar5;
      }
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
    }
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar7 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar7 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        pRVar6 = (RefCountNTSImpl *)
                 ((ulonglong)(uVar7 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
      }
      uVar4 = FUN_143411f00(pRVar6);
    }
    if ((this == (RefCountNTSImpl *)0x0) ||
       (pRVar5 = this, (*(ushort *)(this + 0x6a) >> 10 & 1) == 0)) {
      pRVar5 = (RefCountNTSImpl *)0x0;
    }
    FUN_1432eb4d0(uVar3,pRVar5,uVar4);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14346fed0 FUN_14346fed0 body=223 status=ok
// SIG undefined FUN_14346fed0(void)

void FUN_14346fed0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  piVar7 = (int *)0x0;
  lVar6 = *(longlong *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0xe0) + 0x20) + 0x10);
  if (*(int *)(param_1 + 0x38) < 1) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    piVar8 = piVar7;
    if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      piVar8 = (int *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
    }
    uVar5 = FUN_143411f00(piVar8,lVar6);
  }
  lVar6 = Scaleform::GFx::MovieImpl::GetModalClip(uVar3,uVar5);
  pcVar4 = *(char **)(param_1 + 8);
  if ((lVar6 != 0) && (piVar7 = *(int **)(lVar6 + 0x70), piVar7 == (int *)0x0)) {
    piVar7 = (int *)FUN_14336c170(lVar6);
  }
  if ((*pcVar4 != '\a') || (*(int **)(pcVar4 + 8) != piVar7)) {
    FUN_143411150(pcVar4);
    *pcVar4 = '\a';
    *(int **)(pcVar4 + 8) = piVar7;
    if (piVar7 != (int *)0x0) {
      *piVar7 = *piVar7 + 1;
    }
  }
  return;
}



// FUNCTION 14346ffc0 FUN_14346ffc0 body=276 status=ok
// SIG undefined FUN_14346ffc0(void)

void FUN_14346ffc0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
    uVar8 = *(uint *)(param_1 + 0x3c);
    lVar9 = lVar7;
    if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
    }
    uVar5 = FUN_143411f00(lVar9,lVar2);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
    }
    uVar6 = FUN_143411f00(lVar7,lVar2);
    uVar4 = (**(code **)(*plVar3 + 0x1c0))(plVar3,uVar5,uVar6);
    puVar1 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar1);
    puVar1[8] = uVar4;
    *puVar1 = 2;
  }
  return;
}



// FUNCTION 1434700e0 FUN_1434700e0 body=198 status=ok
// SIG undefined FUN_1434700e0(void)

void FUN_1434700e0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  uVar6 = 0;
  lVar2 = *(longlong *)(param_1 + 0x30);
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar5 = *(uint *)(param_1 + 0x3c);
    if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      uVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    uVar5 = FUN_143411f00(uVar6,lVar2);
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar6);
  pbVar4 = *(byte **)(param_1 + 8);
  if (4 < *pbVar4) {
    FUN_143411150(pbVar4);
  }
  *(double *)(pbVar4 + 8) = (double)uVar5;
  *pbVar4 = 3;
  return;
}



// FUNCTION 1434701b0 FUN_1434701b0 body=627 status=ok
// SIG undefined FUN_1434701b0(void)

void FUN_1434701b0(longlong param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  undefined8 uVar4;
  RefCountNTSImpl *pRVar5;
  uint uVar6;
  RefCountNTSImpl *pRVar7;
  RefCountNTSImpl *this_00;
  RefCountNTSImpl *pRVar8;
  RefCountNTSImpl *pRVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  byte local_48 [8];
  int local_40;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (((lVar3 != 0) && (*(char *)(*(longlong *)(lVar3 + 0xe8) + 0x68) == '\x01')) &&
     (0 < *(int *)(param_1 + 0x38))) {
    uVar6 = *(uint *)(param_1 + 0x3c);
    pRVar9 = (RefCountNTSImpl *)0x0;
    pRVar8 = pRVar9;
    if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar8 = (RefCountNTSImpl *)
               ((ulonglong)(uVar6 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8));
    }
    pRVar8 = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter(pRVar8);
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x60),
                          *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x148,0,0xffffffff);
    pRVar5 = pRVar9;
    pRVar7 = pRVar9;
    if (*(ulonglong *)(lVar3 + 0x80) < 6) {
      if (*(longlong *)(lVar3 + 0x70) == 0) {
        local_res8[0] = 2;
        uVar4 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar3 + 0x70,0x40,local_res8);
      }
      else {
        uVar4 = (**(code **)(*DAT_146b62f28 + 0x58))();
      }
      *(undefined8 *)(lVar3 + 0x70) = uVar4;
      *(undefined8 *)(lVar3 + 0x80) = 8;
    }
    do {
      lVar10 = *(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
      lVar10 = (ulonglong)(byte)pRVar5[lVar10 + 0x52c4] * 0x60 + lVar10;
      piVar2 = *(int **)(lVar10 + 0x4ce8);
      this_00 = pRVar9;
      if (piVar2 != (int *)0x0) {
        this = *(RefCountNTSImpl **)(piVar2 + 2);
        if (this == (RefCountNTSImpl *)0x0) {
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)(lVar10 + 0x4ce8) = 0;
          this_00 = (RefCountNTSImpl *)0x0;
        }
        else if (*(int *)(this + 8) != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(this);
          this_00 = this;
        }
      }
      if (this_00 == pRVar8) {
        local_48[0] = 4;
        local_40 = (int)pRVar7;
        FUN_14345e390(lVar3,local_48);
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
      }
      if (this_00 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this_00);
      }
      uVar6 = (int)pRVar7 + 1;
      pRVar5 = pRVar5 + 1;
      pRVar7 = (RefCountNTSImpl *)(ulonglong)uVar6;
    } while (uVar6 < 6);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar8);
    }
  }
  return;
}



// FUNCTION 143470430 FUN_143470430 body=441 status=ok
// SIG undefined FUN_143470430(void)

void FUN_143470430(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int *piVar4;
  byte *pbVar5;
  RefCountNTSImpl *this;
  RefCountNTSImpl *this_00;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  ushort uVar9;
  longlong lVar10;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 1;
  lVar10 = *(longlong *)(param_1 + 0x30);
  if (((lVar10 != 0) && (*(char *)(*(longlong *)(lVar10 + 0xe8) + 0x68) == '\x01')) &&
     (0 < *(int *)(param_1 + 0x38))) {
    lVar8 = 0;
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar1 <= (uint)(*(int *)(lVar10 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar10 + 8) - *(longlong *)(lVar10 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar10 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    this = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter(lVar8);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    uVar9 = 0;
    lVar8 = 0;
    uVar7 = 1;
    lVar10 = 6;
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
      lVar6 = (ulonglong)*(byte *)(lVar8 + 0x52c4 + lVar3) * 0x60;
      piVar4 = *(int **)(lVar6 + 0x4ce8 + lVar3);
      this_00 = (RefCountNTSImpl *)0x0;
      if (piVar4 != (int *)0x0) {
        this_00 = *(RefCountNTSImpl **)(piVar4 + 2);
        if (this_00 == (RefCountNTSImpl *)0x0) {
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)(lVar6 + 0x4ce8 + lVar3) = 0;
          this_00 = (RefCountNTSImpl *)0x0;
        }
        else if (*(int *)(this_00 + 8) == 0) {
          this_00 = (RefCountNTSImpl *)0x0;
        }
        else {
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(this_00);
        }
      }
      if (this_00 == this) {
        uVar9 = uVar9 | uVar7;
      }
      if (this_00 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this_00);
      }
      lVar8 = lVar8 + 1;
      uVar7 = uVar7 * 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    pbVar5 = *(byte **)(param_1 + 8);
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
    *pbVar5 = 3;
    *(double *)(pbVar5 + 8) = (double)uVar9;
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1434705f0 FUN_1434705f0 body=192 status=ok
// SIG undefined FUN_1434705f0(void)

void FUN_1434705f0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  uVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar5 = *(uint *)(param_1 + 0x3c);
    if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      uVar7 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    uVar5 = FUN_143411f00(uVar7,lVar2);
    uVar7 = (ulonglong)uVar5;
  }
  iVar6 = FUN_1432ea9c0(uVar3,uVar7);
  pbVar4 = *(byte **)(param_1 + 8);
  if (4 < *pbVar4) {
    FUN_143411150(pbVar4);
  }
  *(double *)(pbVar4 + 8) = (double)iVar6;
  *pbVar4 = 3;
  return;
}



// FUNCTION 1434706c0 FUN_1434706c0 body=185 status=ok
// SIG undefined FUN_1434706c0(void)

undefined8 * FUN_1434706c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar1 = param_1 + 4;
  *puVar1 = &PTR_LAB_145b0aef8;
  param_1[0xd] = Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor;
  uVar2 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar1,param_2,uVar2);
  *param_1 = &PTR_LAB_145b0ae70;
  *puVar1 = &PTR_LAB_145b0fb00;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14340b610(puVar1,param_2,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(param_2,puVar1);
  FUN_14340b610(puVar1,param_2,&PTR_s_getBeginIndex_145b075f0,7);
  return param_1;
}



// FUNCTION 143470780 GlobalCtor body=27 status=ok
// SIG undefined GlobalCtor(void)

void Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 1434707b0 FUN_1434707b0 body=1798 status=ok
// SIG undefined FUN_1434707b0(void)

undefined8 FUN_1434707b0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte local_38 [8];
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  plVar1 = (longlong *)(param_2 + 0xe8);
  if (*(char *)(*plVar1 + 0x68) != '\x01') {
LAB_143470e86:
    uVar5 = (**(code **)(*param_1 + 0x58))(param_1,plVar1,param_3,param_4);
    return uVar5;
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
  _Str1 = *(char **)*param_3;
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"captureFocus");
  if (iVar3 == 0) {
    local_38[0] = 8;
    local_30 = (undefined8 *)
               (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                         (*(longlong **)(*plVar1 + 0x30),0x70);
    if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
    FUN_143414770(local_30,plVar1);
    *local_30 = &PTR_LAB_145b0ae70;
    local_30[0xd] = FUN_14346eca0;
    local_30[4] = &PTR_LAB_145b0aef8;
    uVar5 = FUN_14341b750(*plVar1,7);
    FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
    goto LAB_143470885;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"disableFocusAutoRelease");
  if (iVar3 == 0) {
    uVar6 = *(uint *)(lVar2 + 0x52f0) >> 0x16;
  }
  else {
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alwaysEnableArrowKeys");
    if (iVar3 == 0) {
      uVar6 = (uint)*(byte *)(lVar2 + 0x52f3);
    }
    else {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alwaysEnableKeyboardPress");
      if (iVar3 == 0) {
        uVar6 = *(uint *)(lVar2 + 0x52f0) >> 0x1a;
      }
      else {
        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"disableFocusRolloverEvent");
        if (iVar3 != 0) {
          iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"disableFocusKeys");
          if (iVar3 == 0) {
            uVar6 = *(uint *)(lVar2 + 0x52f0) >> 0x1e;
            goto LAB_1434708d7;
          }
          iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"modalClip");
          if (iVar3 == 0) {
            uVar5 = Scaleform::GFx::MovieImpl::GetModalClip(lVar2,0);
            Scaleform::GFx::AS2::Value::SetAsCharacter(param_4,uVar5);
            return 1;
          }
          iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"moveFocus");
          if (iVar3 == 0) {
            local_38[0] = 8;
            local_30 = (undefined8 *)
                       (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                 (*(longlong **)(*plVar1 + 0x30),0x70);
            if (local_30 == (undefined8 *)0x0) {
LAB_143470882:
              local_30 = (undefined8 *)0x0;
            }
            else {
              FUN_143414770(local_30,plVar1);
              *local_30 = &PTR_LAB_145b0ae70;
              local_30[0xd] = FUN_14346ef10;
              local_30[4] = &PTR_LAB_145b0aef8;
              uVar5 = FUN_14341b750(*plVar1,7);
              FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
            }
          }
          else {
            iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"findFocus");
            if (iVar3 == 0) {
              local_38[0] = 8;
              local_30 = (undefined8 *)
                         (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                   (*(longlong **)(*plVar1 + 0x30),0x70);
              if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
              FUN_143414770(local_30,plVar1);
              *local_30 = &PTR_LAB_145b0ae70;
              local_30[0xd] = FUN_14346f430;
              local_30[4] = &PTR_LAB_145b0aef8;
              uVar5 = FUN_14341b750(*plVar1,7);
              FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
            }
            else {
              iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"setModalClip");
              if (iVar3 == 0) {
                local_38[0] = 8;
                local_30 = (undefined8 *)
                           (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                     (*(longlong **)(*plVar1 + 0x30),0x70);
                if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                FUN_143414770(local_30,plVar1);
                *local_30 = &PTR_LAB_145b0ae70;
                local_30[0xd] = FUN_14346fd60;
                local_30[4] = &PTR_LAB_145b0aef8;
                uVar5 = FUN_14341b750(*plVar1,7);
                FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
              }
              else {
                iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"getModalClip");
                if (iVar3 == 0) {
                  local_38[0] = 8;
                  local_30 = (undefined8 *)
                             (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                       (*(longlong **)(*plVar1 + 0x30),0x70);
                  if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                  FUN_143414770(local_30,plVar1);
                  *local_30 = &PTR_LAB_145b0ae70;
                  local_30[0xd] = FUN_14346fed0;
                  local_30[4] = &PTR_LAB_145b0aef8;
                  uVar5 = FUN_14341b750(*plVar1,7);
                  FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
                }
                else {
                  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"setControllerFocusGroup");
                  if (iVar3 == 0) {
                    local_38[0] = 8;
                    local_30 = (undefined8 *)
                               (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                         (*(longlong **)(*plVar1 + 0x30),0x70);
                    if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                    FUN_143414770(local_30,plVar1);
                    *local_30 = &PTR_LAB_145b0ae70;
                    local_30[0xd] = FUN_14346ffc0;
                    local_30[4] = &PTR_LAB_145b0aef8;
                    uVar5 = FUN_14341b750(*plVar1,7);
                    FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
                  }
                  else {
                    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"getControllerFocusGroup");
                    if (iVar3 == 0) {
                      local_38[0] = 8;
                      local_30 = (undefined8 *)
                                 (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                           (*(longlong **)(*plVar1 + 0x30),0x70);
                      if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                      FUN_143414770(local_30,plVar1);
                      *local_30 = &PTR_LAB_145b0ae70;
                      local_30[0xd] = FUN_1434700e0;
                      local_30[4] = &PTR_LAB_145b0aef8;
                      uVar5 = FUN_14341b750(*plVar1,7);
                      FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
                    }
                    else {
                      iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"getFocusBitmask");
                      if (iVar3 == 0) {
                        local_38[0] = 8;
                        local_30 = (undefined8 *)
                                   (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                             (*(longlong **)(*plVar1 + 0x30),0x70);
                        if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                        FUN_143414770(local_30,plVar1);
                        *local_30 = &PTR_LAB_145b0ae70;
                        local_30[0xd] = FUN_143470430;
                        local_30[4] = &PTR_LAB_145b0aef8;
                        uVar5 = FUN_14341b750(*plVar1,7);
                        FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
                      }
                      else {
                        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"numFocusGroups");
                        if (iVar3 == 0) {
                          local_30 = (undefined8 *)
                                     CONCAT44(local_30._4_4_,*(undefined4 *)(lVar2 + 0x52c0));
                          local_38[0] = 4;
                          goto LAB_143470895;
                        }
                        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"getControllerMaskByFocusGroup")
                        ;
                        if (iVar3 == 0) {
                          local_38[0] = 8;
                          local_30 = (undefined8 *)
                                     (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                               (*(longlong **)(*plVar1 + 0x30),0x70);
                          if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                          FUN_143414770(local_30,plVar1);
                          *local_30 = &PTR_LAB_145b0ae70;
                          local_30[0xd] = FUN_1434705f0;
                          local_30[4] = &PTR_LAB_145b0aef8;
                          uVar5 = FUN_14341b750(*plVar1,7);
                          FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
                        }
                        else {
                          iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"getFocusArray");
                          if (iVar3 != 0) goto LAB_143470e86;
                          local_38[0] = 8;
                          local_30 = (undefined8 *)
                                     (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))
                                               (*(longlong **)(*plVar1 + 0x30),0x70);
                          if (local_30 == (undefined8 *)0x0) goto LAB_143470882;
                          FUN_143414770(local_30,plVar1);
                          *local_30 = &PTR_LAB_145b0ae70;
                          local_30[0xd] = FUN_1434701b0;
                          local_30[4] = &PTR_LAB_145b0aef8;
                          uVar5 = FUN_14341b750(*plVar1,7);
                          FUN_1434a4d00(local_30 + 4,plVar1,uVar5);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_143470885:
          local_20 = 0;
          local_28 = 0;
LAB_143470895:
          FUN_143411240(param_4,local_38);
          if (4 < local_38[0]) {
            FUN_143411150(local_38);
          }
          return 1;
        }
        uVar6 = *(uint *)(lVar2 + 0x52f0) >> 0x1c;
      }
    }
  }
  uVar6 = uVar6 & 3;
LAB_1434708d7:
  uVar4 = uVar6;
  if (uVar6 == 3) {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0) {
    FUN_143411150(param_4);
    *param_4 = 0;
  }
  else {
    FUN_143411150(param_4);
    *param_4 = 2;
    if (uVar6 == 3) {
      uVar6 = 0xffffffff;
    }
    param_4[8] = uVar6 == 1;
  }
  return 1;
}



// FUNCTION 143470ec0 FUN_143470ec0 body=520 status=ok
// SIG undefined FUN_143470ec0(void)

undefined8
FUN_143470ec0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  char *_Str1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
    _Str1 = *(char **)*param_3;
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"disableFocusAutoRelease");
    if (iVar3 == 0) {
      uVar4 = FUN_143411fd0(param_4,param_2);
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) & 0xff3fffff;
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) | (uVar4 & 3) << 0x16;
      return 1;
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alwaysEnableArrowKeys");
    if (iVar3 == 0) {
      uVar4 = FUN_143411fd0(param_4,param_2);
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) & 0xfcffffff;
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) | (uVar4 & 3) << 0x18;
      return 1;
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alwaysEnableKeyboardPress");
    if (iVar3 == 0) {
      uVar4 = FUN_143411fd0(param_4,param_2);
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) & 0xf3ffffff;
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) | (uVar4 & 3) << 0x1a;
      return 1;
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"disableFocusRolloverEvent");
    if (iVar3 == 0) {
      uVar4 = FUN_143411fd0(param_4,param_2);
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) & 0xcfffffff;
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) | (uVar4 & 3) << 0x1c;
      return 1;
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"disableFocusKeys");
    if (iVar3 == 0) {
      bVar2 = FUN_143411fd0(param_4,param_2);
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) & 0x3fffffff;
      *(uint *)(lVar1 + 0x52f0) = *(uint *)(lVar1 + 0x52f0) | (uint)bVar2 << 0x1e;
      return 1;
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"modalClip");
    if (iVar3 == 0) {
      plVar5 = (longlong *)Scaleform::GFx::AS2::Value::ToCharacter(param_4,param_2);
      if ((plVar5 != (longlong *)0x0) &&
         (iVar3 = (**(code **)(*plVar5 + 0x290))(plVar5), iVar3 == 3)) {
        FUN_1432eb4d0(lVar1,plVar5,0);
        return 1;
      }
      FUN_1432eb4d0(lVar1,0,0);
      return 1;
    }
  }
  uVar6 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
  return uVar6;
}



// FUNCTION 1434710d0 FUN_1434710d0 body=452 status=ok
// SIG undefined FUN_1434710d0(void)

longlong * FUN_1434710d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_res8;
  longlong local_38;
  undefined1 local_30;
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_30 = 8;
  local_38 = param_2;
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x70)
  ;
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_1434706c0(lVar1,&local_38);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar2;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = FUN_14341b750(param_2,1);
    FUN_143495410(puVar3,&local_38,uVar4,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar3 = &PTR_LAB_145b0b588;
    puVar3[4] = &PTR_LAB_145b0b5d0;
    puVar3[0xd] = &PTR_LAB_145b0b678;
    FUN_143422ee0(puVar3 + 0xd,puVar3,&local_38,&PTR_s_addListener_145b086d0,&local_res8);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  }
  local_res8 = puVar3;
  FUN_1434a4b90(param_2,0x15,&local_res8);
  local_20[0] = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_20,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            (lVar2 + 0x20,&local_38,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1e0,
             local_28,&local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
  }
  return param_1;
}



// FUNCTION 1434712a0 FUN_1434712a0 body=2332 status=ok
// SIG undefined FUN_1434712a0(void)

undefined8 * FUN_1434712a0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [32];
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0fba8;
  plVar2 = (longlong *)(param_2 + 0xe8);
  param_1[4] = &PTR_LAB_145b0fbf0;
  FUN_1433dd540(param_1 + 0xd,*(undefined8 *)(*plVar2 + 0x30));
  *(undefined4 *)(param_1 + 0x18) = 1;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  uVar3 = FUN_14341b750(*plVar2,0x20);
  FUN_1434a4d00(param_1 + 4,plVar2,uVar3);
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),"align"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "blockIndent",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b139e4,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "bullet",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),"color"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13b5c,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "indent",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "italic",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "leading",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "leftMargin",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "rightMargin",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b1368c,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "tabStops",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "target",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "underline",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13b9c,3);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if (7 < *(byte *)(param_2 + 0xf0)) {
    local_res8[0] = 2;
    local_38[0] = 1;
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                                "kerning",7);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    local_res8[0] = 2;
    local_38[0] = 1;
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                                "letterSpacing",0xd);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
  }
  if (*(char *)(*plVar2 + 0x68) == '\x01') {
    local_res8[0] = 2;
    local_38[0] = 1;
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                                "alpha",5);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(param_1[4] + 0x50))(param_1 + 4,plVar2,&local_res10,local_38,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
  }
  return param_1;
}



// FUNCTION 143471bd0 FUN_143471bd0 body=3189 status=ok
// SIG undefined FUN_143471bd0(void)

undefined1
FUN_143471bd0(longlong param_1,longlong param_2,longlong *param_3,byte *param_4,undefined8 param_5)

{
  longlong *plVar1;
  byte bVar2;
  char *_Str1;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  longlong *local_res18;
  ulonglong in_stack_ffffffffffffff78;
  byte local_78 [8];
  longlong *local_70;
  byte local_58 [8];
  double local_50;
  
  local_res18 = param_3;
  FUN_143410ec0(local_78,param_4);
  uVar14 = 0;
  _Str1 = *(char **)*param_3;
  uVar15 = uVar14;
  do {
    uVar11 = uVar15 + 1;
    if (_Str1[uVar15] != "align"[uVar15]) {
      iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"blockIndent");
      uVar15 = uVar14;
      if (iVar6 != 0) goto LAB_143471e10;
      if ((*param_4 < 2) || (*param_4 == 10)) {
        *(undefined2 *)(param_1 + 0xb0) = 0;
        *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xfffd;
        goto LAB_1434727dc;
      }
      uVar7 = FUN_143411e30(param_4,param_2);
      if (4 < local_78[0]) {
        FUN_143411150(local_78);
      }
      local_78[0] = 3;
      local_70 = (longlong *)(double)(int)uVar7;
      if (-1 < (int)uVar7) {
        if (0x2d0 < (int)uVar7) {
          uVar7 = 0x2d0;
        }
        uVar14 = (ulonglong)uVar7;
      }
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 2;
      *(short *)(param_1 + 0xb0) = (short)uVar14;
      goto LAB_1434727e9;
    }
    uVar15 = uVar11;
  } while (uVar11 != 6);
  FUN_143411540(param_4,&local_res18,param_2,0xffffffff,
                in_stack_ffffffffffffff78 & 0xffffffffffffff00);
  plVar13 = local_res18;
  lVar8 = *local_res18;
  uVar15 = uVar14;
  do {
    uVar12 = uVar15 + 1;
    uVar11 = uVar14;
    if (*(char *)(lVar8 + uVar15) != (&DAT_145b068ec)[uVar15]) goto LAB_143471cb0;
    uVar15 = uVar12;
  } while (uVar12 != 5);
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 63999;
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 1;
  goto LAB_143471d66;
  while (uVar15 = uVar12, uVar12 != 5) {
LAB_143471e10:
    uVar12 = uVar15 + 1;
    uVar11 = uVar14;
    if (_Str1[uVar15] != (&DAT_145b139e4)[uVar15]) goto LAB_143471e80;
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    uVar4 = FUN_143411fd0(param_4,param_2);
    FUN_143411150(local_78);
    local_78[0] = 2;
    local_70 = (longlong *)CONCAT71(local_70._1_7_,uVar4);
    FUN_1433dd860(param_1 + 0x48,uVar4);
    goto LAB_1434727e9;
  }
  *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xfe;
  uVar5 = 0xffef;
  goto LAB_1434727d5;
  while (uVar11 = uVar12, uVar12 != 7) {
LAB_143471e80:
    uVar12 = uVar11 + 1;
    uVar15 = uVar14;
    if (_Str1[uVar11] != "bullet"[uVar11]) goto LAB_143471f20;
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    cVar3 = FUN_143411fd0(param_4,param_2);
    FUN_143411150(local_78);
    local_78[0] = 2;
    local_70 = (longlong *)CONCAT71(local_70._1_7_,cVar3);
    if (cVar3 == '\0') {
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0x7fff;
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x80;
    }
    else {
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x8000;
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x80;
    }
    goto LAB_1434727e9;
  }
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0x7f7f;
  goto LAB_1434727dc;
  while (uVar15 = uVar12, uVar12 != 6) {
LAB_143471f20:
    uVar12 = uVar15 + 1;
    uVar11 = uVar14;
    if (_Str1[uVar15] != "color"[uVar15]) goto LAB_143471fb0;
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    uVar7 = FUN_143411e30(param_4,param_2);
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xff000000;
    local_70 = (longlong *)(double)uVar7;
    local_78[0] = 3;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | uVar7 & 0xffffff;
    *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x94) | 1;
    goto LAB_1434727e9;
  }
  *(undefined4 *)(param_1 + 0x88) = 0xff000000;
  uVar5 = 0xfffe;
  goto LAB_1434727d5;
  while (uVar11 = uVar12, uVar12 != 5) {
LAB_143471fb0:
    uVar12 = uVar11 + 1;
    uVar15 = uVar14;
    if (_Str1[uVar11] != (&DAT_145b13b5c)[uVar11]) goto LAB_143472030;
  }
  if ((*param_4 < 2) || (*param_4 == 10)) {
    uVar5 = 0xeffb;
    goto LAB_1434727d5;
  }
  FUN_143411540(param_4,&local_res18,param_2,0xffffffff,
                in_stack_ffffffffffffff78 & 0xffffffffffffff00);
  if (4 < local_78[0]) {
    FUN_143411150(local_78);
  }
  plVar13 = local_res18;
  local_78[0] = 5;
  local_70 = local_res18;
  *(int *)(local_res18 + 3) = (int)local_res18[3] + 1;
  FUN_1433ddb10(param_1 + 0x48,*local_res18,0xffffffffffffffff);
  goto LAB_143471d66;
  while (uVar15 = uVar12, uVar12 != 7) {
LAB_143472030:
    uVar12 = uVar15 + 1;
    uVar11 = uVar14;
    if (_Str1[uVar15] != "indent"[uVar15]) goto LAB_1434720d0;
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    iVar6 = FUN_143411e30(param_4,param_2);
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    local_78[0] = 3;
    local_70 = (longlong *)(double)iVar6;
    iVar10 = -0x2d0;
    if ((-0x2d1 < iVar6) && (iVar10 = iVar6, 0x2d0 < iVar6)) {
      iVar10 = 0x2d0;
    }
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 4;
    *(short *)(param_1 + 0xb2) = (short)iVar10;
    goto LAB_1434727e9;
  }
  *(undefined2 *)(param_1 + 0xb2) = 0;
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xfffb;
  goto LAB_1434727dc;
  while (uVar11 = uVar12, uVar12 != 7) {
LAB_1434720d0:
    uVar12 = uVar11 + 1;
    uVar15 = uVar14;
    if (_Str1[uVar11] != "italic"[uVar11]) goto LAB_143472140;
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    uVar4 = FUN_143411fd0(param_4,param_2);
    FUN_143411150(local_78);
    local_78[0] = 2;
    local_70 = (longlong *)CONCAT71(local_70._1_7_,uVar4);
    FUN_1433dd8e0(param_1 + 0x48,uVar4);
    goto LAB_1434727e9;
  }
  *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xfd;
  uVar5 = 0xffdf;
  goto LAB_1434727d5;
  while (uVar15 = uVar11, uVar11 != 8) {
LAB_143472140:
    uVar11 = uVar15 + 1;
    if (_Str1[uVar15] != "leading"[uVar15]) {
      iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"leftMargin");
      if (iVar6 == 0) {
        if ((*param_4 < 2) || (*param_4 == 10)) {
          *(undefined2 *)(param_1 + 0xb6) = 0;
          *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xffef;
          goto LAB_1434727dc;
        }
        uVar7 = FUN_143411e30(param_4,param_2);
        if (4 < local_78[0]) {
          FUN_143411150(local_78);
        }
        local_78[0] = 3;
        local_70 = (longlong *)(double)(int)uVar7;
        if (-1 < (int)uVar7) {
          if (0x2d0 < (int)uVar7) {
            uVar7 = 0x2d0;
          }
          uVar14 = (ulonglong)uVar7;
        }
        *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x10;
        *(short *)(param_1 + 0xb6) = (short)uVar14;
      }
      else {
        iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"rightMargin");
        uVar15 = uVar14;
        if (iVar6 != 0) goto LAB_1434722f0;
        if ((*param_4 < 2) || (*param_4 == 10)) {
          *(undefined2 *)(param_1 + 0xb8) = 0;
          *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xffdf;
          goto LAB_1434727dc;
        }
        uVar7 = FUN_143411e30(param_4,param_2);
        if (4 < local_78[0]) {
          FUN_143411150(local_78);
        }
        local_78[0] = 3;
        local_70 = (longlong *)(double)(int)uVar7;
        if (-1 < (int)uVar7) {
          if (0x2d0 < (int)uVar7) {
            uVar7 = 0x2d0;
          }
          uVar14 = (ulonglong)uVar7;
        }
        *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x20;
        *(short *)(param_1 + 0xb8) = (short)uVar14;
      }
      goto LAB_1434727e9;
    }
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    iVar6 = FUN_143411e30(param_4,param_2);
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    local_78[0] = 3;
    local_70 = (longlong *)(double)iVar6;
    iVar10 = -0x2d0;
    if ((-0x2d1 < iVar6) && (iVar10 = iVar6, 0x2d0 < iVar6)) {
      iVar10 = 0x2d0;
    }
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 8;
    *(short *)(param_1 + 0xb4) = (short)iVar10;
    goto LAB_1434727e9;
  }
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xfff7;
  goto LAB_1434727dc;
  while (uVar15 = uVar11, uVar11 != 5) {
LAB_1434722f0:
    uVar11 = uVar15 + 1;
    if (_Str1[uVar15] != (&DAT_145b1368c)[uVar15]) {
      iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"tabStops");
      if (iVar6 == 0) {
        bVar2 = *param_4;
        if ((bVar2 < 2) || (bVar2 == 10)) {
          Scaleform::Render::Text::ParagraphFormat::FreeTabStops(param_1 + 0x98);
          *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xffbf;
          goto LAB_1434727dc;
        }
        if (bVar2 == 6) {
          lVar8 = FUN_143412120(param_4,param_2);
          iVar6 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x10))(lVar8 + 0x20);
          if (iVar6 == 7) {
            lVar8 = FUN_143412120(param_4,param_2);
            FUN_1433df6f0(param_1 + 0x98,*(undefined4 *)(lVar8 + 0x78));
            *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x40;
            iVar6 = *(int *)(lVar8 + 0x78);
            uVar15 = uVar14;
            if (0 < (longlong)iVar6) {
              do {
                dVar16 = (double)FUN_143411a90(*(undefined8 *)
                                                (*(longlong *)(lVar8 + 0x70) + uVar14 * 8),param_2);
                local_58[0] = 3;
                local_50 = (double)((longlong)dVar16 & 0xffffffff);
                FUN_14345e250(lVar8,uVar15,local_58);
                if (4 < local_58[0]) {
                  FUN_143411150(local_58);
                }
                Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement
                          (param_1 + 0x98,uVar15,(longlong)dVar16 & 0xffffffff);
                uVar14 = uVar14 + 1;
                uVar15 = (ulonglong)((int)uVar15 + 1);
              } while ((longlong)uVar14 < (longlong)iVar6);
            }
            uVar9 = FUN_143410c00(local_58,lVar8);
            uVar4 = FUN_143414a10(param_1,param_2,local_res18,uVar9,param_5);
            if (4 < local_58[0]) {
              FUN_143411150(local_58);
            }
            goto LAB_143472807;
          }
        }
        goto LAB_1434727e9;
      }
      iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"underline");
      uVar15 = uVar14;
      if (iVar6 != 0) goto LAB_143472562;
      if ((*param_4 < 2) || (*param_4 == 10)) {
        *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xfb;
        uVar5 = 0xffbf;
        goto LAB_1434727d5;
      }
      uVar4 = FUN_143411fd0(param_4,param_2);
      FUN_143411150(local_78);
      local_78[0] = 2;
      local_70 = (longlong *)CONCAT71(local_70._1_7_,uVar4);
      Scaleform::Render::Text::TextFormat::SetUnderline(param_1 + 0x48,uVar4);
      goto LAB_1434727e9;
    }
  }
  if ((1 < *param_4) && (*param_4 != 10)) {
    uVar7 = FUN_143411e30(param_4,param_2);
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    local_78[0] = 3;
    local_70 = (longlong *)(double)(int)uVar7;
    if (-1 < (int)uVar7) {
      if ((int)uVar7 < 0x80) {
        Scaleform::Render::Text::TextFormat::SetFontSize(param_1 + 0x48,(float)uVar7);
      }
      else {
        *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x94) | 8;
        *(undefined2 *)(param_1 + 0x90) = 0x9ec;
      }
    }
    goto LAB_1434727e9;
  }
  *(undefined2 *)(param_1 + 0x90) = 0;
  uVar5 = 0xfff7;
  goto LAB_1434727d5;
  while (uVar15 = uVar11, uVar11 != 4) {
LAB_143472562:
    uVar11 = uVar15 + 1;
    if (_Str1[uVar15] != (&DAT_145b13b9c)[uVar15]) {
      if (*(byte *)(param_2 + 0xf0) < 8) goto LAB_1434726fb;
      iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"letterSpacing");
      uVar15 = uVar14;
      if (iVar6 != 0) goto LAB_143472690;
      if ((*param_4 < 2) || (*param_4 == 10)) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        uVar5 = 0xfffd;
        goto LAB_1434726e7;
      }
      iVar6 = FUN_143411e30(param_4,param_2);
      if (4 < local_78[0]) {
        FUN_143411150(local_78);
      }
      local_78[0] = 3;
      local_70 = (longlong *)(double)iVar6;
      iVar10 = -0x2d0;
      if ((-0x2d1 < iVar6) && (iVar10 = iVar6, 0x2d0 < iVar6)) {
        iVar10 = 0x2d0;
      }
      *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x94) | 2;
      *(float *)(param_1 + 0x8c) = (float)iVar10 * 20.0;
      goto LAB_1434726fb;
    }
  }
  if ((*param_4 < 2) || (*param_4 == 10)) {
    FUN_1432c3510(param_1 + 0x68);
    uVar5 = 0xfeff;
    goto LAB_1434727d5;
  }
  FUN_143411540(param_4,&local_res18,param_2,0xffffffff,
                in_stack_ffffffffffffff78 & 0xffffffffffffff00);
  if (4 < local_78[0]) {
    FUN_143411150(local_78);
  }
  plVar13 = local_res18;
  local_78[0] = 5;
  local_70 = local_res18;
  *(int *)(local_res18 + 3) = (int)local_res18[3] + 1;
  FUN_1433dde10(param_1 + 0x48,*local_res18,0xffffffffffffffff);
  goto LAB_143471d66;
  while (uVar15 = uVar11, uVar11 != 8) {
LAB_143472690:
    uVar11 = uVar15 + 1;
    if (_Str1[uVar15] != "kerning"[uVar15]) goto LAB_1434726fb;
  }
  if ((*param_4 < 2) || (*param_4 == 10)) {
    *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xf7;
    uVar5 = 0xff7f;
LAB_1434726e7:
    *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x94) & uVar5;
    FUN_143411150(local_78);
    local_78[0] = 1;
  }
  else {
    uVar4 = FUN_143411fd0(param_4,param_2);
    FUN_143411150(local_78);
    local_78[0] = 2;
    local_70 = (longlong *)CONCAT71(local_70._1_7_,uVar4);
    Scaleform::Render::Text::TextFormat::SetKerning(param_1 + 0x48,uVar4);
  }
LAB_1434726fb:
  if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto LAB_1434727e9;
  do {
    uVar15 = uVar14 + 1;
    if (*(char *)(*(longlong *)*param_3 + uVar14) != "alpha"[uVar14]) goto LAB_1434727e9;
    uVar14 = uVar15;
  } while (uVar15 != 6);
  if ((1 < *param_4) && (*param_4 != 10)) {
    iVar6 = FUN_143411e30(param_4,param_2);
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    local_78[0] = 3;
    local_70 = (longlong *)(double)iVar6;
    iVar10 = 0;
    if ((-1 < iVar6) && (iVar10 = iVar6, 100 < iVar6)) {
      iVar10 = 100;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffff;
    *(uint *)(param_1 + 0x88) =
         *(uint *)(param_1 + 0x88) | (int)(longlong)(((double)iVar10 * 255.0) / 100.0) << 0x18;
    *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x94) | 0x400;
    goto LAB_1434727e9;
  }
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0xff000000;
  uVar5 = 0xfbff;
LAB_1434727d5:
  *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x94) & uVar5;
LAB_1434727dc:
  FUN_143411150(local_78);
  local_78[0] = 1;
  goto LAB_1434727e9;
  while (uVar11 = uVar12, uVar12 != 6) {
LAB_143471cb0:
    uVar12 = uVar11 + 1;
    uVar15 = uVar14;
    if (*(char *)(lVar8 + uVar11) != "right"[uVar11]) goto LAB_143471cf0;
  }
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xfbff;
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x201;
  goto LAB_143471d66;
  while (uVar15 = uVar11, uVar11 != 7) {
LAB_143471cf0:
    uVar11 = uVar15 + 1;
    if (*(char *)(lVar8 + uVar15) != "center"[uVar15]) goto LAB_143471d20;
  }
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x601;
  goto LAB_143471d66;
  while (uVar14 = uVar15, uVar15 != 8) {
LAB_143471d20:
    uVar15 = uVar14 + 1;
    if (*(char *)(lVar8 + uVar14) != "justify"[uVar14]) {
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xf9fe;
      FUN_143411150(local_78);
      local_78[0] = 1;
      goto LAB_143471d66;
    }
  }
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) & 0xfdff;
  *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x401;
LAB_143471d66:
  plVar1 = plVar13 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920(plVar13);
  }
LAB_1434727e9:
  uVar4 = FUN_143414a10(param_1,param_2,param_3,local_78,param_5);
LAB_143472807:
  if (4 < local_78[0]) {
    FUN_143411150(local_78);
  }
  return uVar4;
}



// FUNCTION 143472850 FUN_143472850 body=1627 status=ok
// SIG undefined FUN_143472850(void)

/* WARNING: Removing unreachable block (ram,0x000143472a64) */
/* WARNING: Removing unreachable block (ram,0x000143472a6e) */

void FUN_143472850(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  ulonglong *puVar4;
  double dVar5;
  longlong lVar6;
  byte *pbVar7;
  bool bVar8;
  uint uStackX_c;
  byte local_88 [32];
  byte local_68 [8];
  double local_60;
  byte local_48 [32];
  
  FUN_1433dd7b0(param_1 + 0x68,param_3);
  local_88[0] = 1;
  bVar8 = (*(byte *)(param_3 + 0x4c) >> 4 & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    local_68[0] = 2;
    local_60 = (double)(CONCAT71(local_60._1_7_,*(undefined1 *)(param_3 + 0x4a)) &
                       0xffffffffffffff01);
    pbVar7 = local_68;
  }
  param_1 = param_1 + 0x20;
  FUN_1434a4640(param_1,param_2,&DAT_145b139e4,pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar8 = (*(byte *)(param_3 + 0x4c) >> 5 & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    local_68[0] = 2;
    local_60 = (double)(CONCAT71(local_60._1_7_,*(byte *)(param_3 + 0x4a) >> 1) & 0xffffffffffffff01
                       );
    pbVar7 = local_68;
  }
  FUN_1434a4640(param_1,param_2,"italic",pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar8 = (*(byte *)(param_3 + 0x4c) >> 6 & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    local_68[0] = 2;
    local_60 = (double)(CONCAT71(local_60._1_7_,*(byte *)(param_3 + 0x4a) >> 2) & 0xffffffffffffff01
                       );
    pbVar7 = local_68;
  }
  FUN_1434a4640(param_1,param_2,"underline",pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar8 = (*(byte *)(param_3 + 0x4c) >> 3 & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    local_68[0] = 3;
    pbVar7 = local_68;
    local_60 = (double)((float)*(ushort *)(param_3 + 0x48) * 0.05);
  }
  FUN_1434a4640(param_1,param_2,&DAT_145b1368c,pbVar7);
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar8 = (*(byte *)(param_3 + 0x4c) >> 2 & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
    dVar5 = (double)((ulonglong)uStackX_c << 0x20);
  }
  else {
    puVar4 = (ulonglong *)FUN_1433ddd30(param_3);
    dVar5 = (double)FUN_143360a90(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                  (longlong)(*puVar4 & 0xfffffffffffffffc) + 0xc,
                                  *(ulonglong *)(*puVar4 & 0xfffffffffffffffc) & 0x7fffffffffffffff)
    ;
    *(int *)((longlong)dVar5 + 0x18) = *(int *)((longlong)dVar5 + 0x18) + 1;
    local_68[0] = 5;
    *(int *)((longlong)dVar5 + 0x18) = *(int *)((longlong)dVar5 + 0x18) + 1;
    pbVar7 = local_68;
    local_60 = dVar5;
  }
  FUN_1434a4640(param_1,param_2,&DAT_145b13b5c,pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  if (!bVar8) {
    piVar1 = (int *)((longlong)dVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(dVar5);
    }
  }
  bVar8 = (*(byte *)(param_3 + 0x4c) & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    local_68[0] = 3;
    local_60 = (double)(*(uint *)(param_3 + 0x40) & 0xffffff);
    pbVar7 = local_68;
  }
  FUN_1434a4640(param_1,param_2,"color",pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar8 = (*(byte *)(param_3 + 0x4c) >> 1 & 1) == 0;
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    pbVar7 = local_68;
    local_68[0] = 3;
    local_60 = (double)(*(float *)(param_3 + 0x44) * 0.05);
  }
  FUN_1434a4640(param_1,param_2,"letterSpacing",pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar8 = -1 < *(char *)(param_3 + 0x4c);
  if (bVar8) {
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
  }
  else {
    local_68[0] = 2;
    local_60 = (double)(CONCAT71(local_60._1_7_,*(byte *)(param_3 + 0x4a) >> 3) & 0xffffffffffffff01
                       );
    pbVar7 = local_68;
  }
  FUN_1434a4640(param_1,param_2,"kerning",pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar8) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  bVar3 = false;
  bVar2 = false;
  bVar8 = false;
  if (((*(ushort *)(param_3 + 0x4c) & 0x100) == 0) ||
     (lVar6 = FUN_1432c3580(param_3 + 0x20), lVar6 == 0)) {
    bVar8 = true;
    pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
    dVar5 = (double)((ulonglong)uStackX_c << 0x20);
  }
  else {
    bVar3 = true;
    bVar2 = true;
    puVar4 = (ulonglong *)(*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffffc);
    dVar5 = (double)FUN_143360a90(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                  (longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff);
    *(int *)((longlong)dVar5 + 0x18) = *(int *)((longlong)dVar5 + 0x18) + 1;
    local_68[0] = 5;
    *(int *)((longlong)dVar5 + 0x18) = *(int *)((longlong)dVar5 + 0x18) + 1;
    pbVar7 = local_68;
    local_60 = dVar5;
  }
  FUN_1434a4640(param_1,param_2,&DAT_145b13b9c,pbVar7);
  if ((bVar8) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((bVar2) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  if (bVar3) {
    piVar1 = (int *)((longlong)dVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(dVar5);
    }
  }
  if (*(char *)(*param_2 + 0x68) == '\x01') {
    bVar8 = (*(byte *)(param_3 + 0x4c) & 1) == 0;
    if (bVar8) {
      pbVar7 = (byte *)FUN_143410ec0(local_48,local_88);
    }
    else {
      local_68[0] = 3;
      pbVar7 = local_68;
      local_60 = ((double)*(byte *)(param_3 + 0x43) * 100.0) / 255.0;
    }
    FUN_1434a4640(param_1,param_2,"alpha",pbVar7);
    if ((bVar8) && (4 < local_48[0])) {
      FUN_143411150(local_48);
    }
    if ((!bVar8) && (4 < local_68[0])) {
      FUN_143411150(local_68);
    }
  }
  if (4 < local_88[0]) {
    FUN_143411150(local_88);
  }
  return;
}



// FUNCTION 143472ec0 FUN_143472ec0 body=1745 status=ok
// SIG undefined FUN_143472ec0(void)

/* WARNING: Removing unreachable block (ram,0x000143473214) */
/* WARNING: Removing unreachable block (ram,0x00014347321e) */

void FUN_143472ec0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  uint local_res8 [4];
  double local_res18;
  longlong local_res20;
  byte local_98 [32];
  byte local_78 [8];
  double local_70;
  byte local_58 [32];
  
  local_res8[0] = 0;
  Scaleform::Render::Text::ParagraphFormat::operator=(param_1 + 0xb8,param_3);
  local_98[0] = 1;
  if ((*(byte *)(param_3 + 0x22) & 1) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_res18 = (double)FUN_143360950(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) +
                                         0x618),"align",5);
    *(int *)((longlong)local_res18 + 0x18) = *(int *)((longlong)local_res18 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x50))
              ((longlong *)(param_1 + 0x20),param_2,&local_res18,local_98,local_res8);
    piVar1 = (int *)((longlong)local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
    dVar2 = local_res18;
  }
  else {
    pcVar9 = "left";
    uVar8 = *(ushort *)(param_3 + 0x22) >> 9 & 3;
    if (uVar8 == 1) {
      pcVar9 = "right";
    }
    else if (uVar8 == 2) {
      pcVar9 = "justify";
    }
    else if (uVar8 == 3) {
      pcVar9 = "center";
    }
    dVar2 = (double)FUN_143360a60(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                  pcVar9);
    local_res8[0] = local_res8[0] & 0xffffff00;
    *(int *)((longlong)dVar2 + 0x18) = *(int *)((longlong)dVar2 + 0x18) + 1;
    local_78[0] = 5;
    *(int *)((longlong)dVar2 + 0x18) = *(int *)((longlong)dVar2 + 0x18) + 1;
    local_70 = dVar2;
    local_res18 = (double)FUN_143360950(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) +
                                         0x618),"align",5);
    *(int *)((longlong)local_res18 + 0x18) = *(int *)((longlong)local_res18 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x50))
              ((longlong *)(param_1 + 0x20),param_2,&local_res18,local_78,local_res8);
    piVar1 = (int *)((longlong)local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    piVar1 = (int *)((longlong)dVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
  }
  if (iVar10 == 0) {
    FUN_14335f920(dVar2);
  }
  plVar13 = (longlong *)(param_1 + 0x20);
  bVar14 = -1 < (char)*(ushort *)(param_3 + 0x22);
  if (bVar14) {
    pbVar3 = (byte *)FUN_143410ec0(local_58,local_98);
  }
  else {
    local_78[0] = 2;
    local_70 = (double)CONCAT71(local_70._1_7_,(*(ushort *)(param_3 + 0x22) & 0x8080) == 0x8080);
    pbVar3 = local_78;
  }
  FUN_1434a4640(plVar13,param_2,"bullet",pbVar3);
  if ((bVar14) && (4 < local_58[0])) {
    FUN_143411150(local_58);
  }
  if ((!bVar14) && (4 < local_78[0])) {
    FUN_143411150(local_78);
  }
  bVar14 = (*(byte *)(param_3 + 0x22) >> 1 & 1) == 0;
  if (bVar14) {
    pbVar3 = (byte *)FUN_143410ec0(local_58,local_98);
  }
  else {
    local_78[0] = 3;
    pbVar3 = local_78;
    local_70 = (double)*(ushort *)(param_3 + 0x18);
  }
  FUN_1434a4640(plVar13,param_2,"blockIndent",pbVar3);
  if ((bVar14) && (4 < local_58[0])) {
    FUN_143411150(local_58);
  }
  if ((!bVar14) && (4 < local_78[0])) {
    FUN_143411150(local_78);
  }
  bVar14 = (*(byte *)(param_3 + 0x22) >> 2 & 1) == 0;
  if (bVar14) {
    pbVar3 = (byte *)FUN_143410ec0(local_58,local_98);
  }
  else {
    local_78[0] = 3;
    pbVar3 = local_78;
    local_70 = (double)(int)*(short *)(param_3 + 0x1a);
  }
  FUN_1434a4640(plVar13,param_2,"indent",pbVar3);
  if ((bVar14) && (4 < local_58[0])) {
    FUN_143411150(local_58);
  }
  if ((!bVar14) && (4 < local_78[0])) {
    FUN_143411150(local_78);
  }
  bVar14 = (*(byte *)(param_3 + 0x22) >> 3 & 1) == 0;
  if (bVar14) {
    pbVar3 = (byte *)FUN_143410ec0(local_58,local_98);
  }
  else {
    local_78[0] = 3;
    pbVar3 = local_78;
    local_70 = (double)(int)*(short *)(param_3 + 0x1c);
  }
  FUN_1434a4640(plVar13,param_2,"leading",pbVar3);
  if ((!bVar14) && (4 < local_78[0])) {
    FUN_143411150(local_78);
  }
  bVar14 = (*(byte *)(param_3 + 0x22) >> 4 & 1) == 0;
  if (bVar14) {
    pbVar3 = (byte *)FUN_143410ec0(local_58,local_98);
  }
  else {
    local_78[0] = 3;
    pbVar3 = local_78;
    local_70 = (double)*(ushort *)(param_3 + 0x1e);
  }
  FUN_1434a4640(plVar13,param_2,"leftMargin",pbVar3);
  if ((bVar14) && (4 < local_58[0])) {
    FUN_143411150(local_58);
  }
  if ((!bVar14) && (4 < local_78[0])) {
    FUN_143411150(local_78);
  }
  bVar14 = (*(byte *)(param_3 + 0x22) >> 5 & 1) == 0;
  if (bVar14) {
    pbVar3 = (byte *)FUN_143410ec0(local_58,local_98);
  }
  else {
    local_78[0] = 3;
    pbVar3 = local_78;
    local_70 = (double)*(ushort *)(param_3 + 0x20);
  }
  FUN_1434a4640(plVar13,param_2,"rightMargin",pbVar3);
  if ((bVar14) && (4 < local_58[0])) {
    FUN_143411150(local_58);
  }
  if ((!bVar14) && (4 < local_78[0])) {
    FUN_143411150(local_78);
  }
  if ((*(byte *)(param_3 + 0x22) >> 6 & 1) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_res18 = (double)FUN_143360950(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) +
                                         0x618),"tabStops",8);
    *(int *)((longlong)local_res18 + 0x18U) = *(int *)((longlong)local_res18 + 0x18U) + 1;
    (**(code **)(*plVar13 + 0x50))(plVar13,param_2,&local_res18,local_98,local_res8);
    piVar1 = (int *)((longlong)local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_res18 = (double)((ulonglong)local_res18 & 0xffffffff00000000);
    lVar4 = Scaleform::Render::Text::ParagraphFormat::GetTabStops(param_3,&local_res18);
    lVar5 = (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                      (*(longlong **)(*param_2 + 0x30),0x98,0);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_14345d990(lVar5,param_2);
    }
    FUN_14345e160(lVar5,(ulonglong)local_res18 & 0xffffffff);
    uVar11 = 0;
    if (local_res18._0_4_ != 0) {
      do {
        local_78[0] = 3;
        local_70 = (double)*(uint *)(lVar4 + uVar11 * 4);
        iVar10 = (int)uVar11;
        if ((-1 < iVar10) && (iVar10 < *(int *)(lVar5 + 0x78))) {
          lVar12 = (longlong)iVar10;
          *(undefined1 *)(lVar5 + 0x94) = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x70) + lVar12 * 8) == 0) {
            local_res8[0] = 0x143;
            puVar6 = (undefined1 *)
                     (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar5,0x20,local_res8);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = (undefined1 *)0x0;
            }
            else {
              *puVar6 = 0;
            }
            *(undefined1 **)(*(longlong *)(lVar5 + 0x70) + lVar12 * 8) = puVar6;
          }
          FUN_143411240(*(undefined8 *)(*(longlong *)(lVar5 + 0x70) + lVar12 * 8),local_78);
          if (4 < local_78[0]) {
            FUN_143411150(local_78);
          }
        }
        uVar11 = (ulonglong)(iVar10 + 1U);
      } while (iVar10 + 1U < local_res18._0_4_);
    }
    uVar7 = FUN_143410c00(local_58,lVar5);
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_res20 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                "tabStops",8);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    (**(code **)(*plVar13 + 0x50))(plVar13,param_2,&local_res20,uVar7,local_res8);
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
  }
  if (4 < local_98[0]) {
    FUN_143411150(local_98);
  }
  return;
}



// FUNCTION 1434735a0 FUN_1434735a0 body=106 status=ok
// SIG undefined FUN_1434735a0(void)

undefined8 * FUN_1434735a0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495ce0();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0fc98;
  param_1[4] = &PTR_LAB_145b0fce0;
  param_1[0x1c] = &PTR_LAB_145b0fd88;
  FUN_143422ee0(param_1 + 0x1c,param_1,param_2,&PTR_s_getTextExtent_145b07e80,local_res8);
  return param_1;
}



// FUNCTION 143473610 FUN_143473610 body=2162 status=ok
// SIG undefined FUN_143473610(void)

void FUN_143473610(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  RefCountNTSImpl *this;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  RefCountImpl *this_00;
  ulonglong *puVar10;
  RefCountImpl *this_01;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_res8;
  undefined7 uStackX_9;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong in_stack_fffffffffffffec8;
  undefined8 local_128;
  double local_120;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [72];
  ushort local_60;
  byte local_5e;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 != 0x1e)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextFormat"
                 );
    return;
  }
  lVar13 = 0;
  lVar11 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar11 = lVar13;
  }
  this = *(RefCountNTSImpl **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  if (this == (RefCountNTSImpl *)0x0) {
    return;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x68,0);
  lVar8 = lVar13;
  if (lVar7 != 0) {
    lVar8 = FUN_1434148b0(lVar7,*(undefined8 *)(param_1 + 0x30));
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (uVar2 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
    lVar13 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
  }
  FUN_143411540(lVar13,&local_res8,lVar7,0xffffffff,in_stack_fffffffffffffec8 & 0xffffffffffffff00);
  lVar13 = (**(code **)(*(longlong *)this + 0x220))(this);
  if (lVar13 == 0) {
    FUN_1432ec340(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(this + 0x20) + 0x10) + 0x18) + 0x10),0
                 );
  }
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x160,0);
  if (lVar7 == 0) {
    this_00 = (RefCountImpl *)0x0;
  }
  else {
    uVar9 = FUN_1432ebb30(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10));
    this_00 = (RefCountImpl *)FUN_1433fbc20(lVar7,uVar9,lVar13,0);
  }
  *(byte *)(*(longlong *)(this_00 + 0x10) + 0x40) =
       *(byte *)(*(longlong *)(this_00 + 0x10) + 0x40) | 2;
  Scaleform::Render::Text::DocView::SetAutoSizeX(this_00);
  Scaleform::Render::Text::DocView::SetAutoSizeY(this_00);
  lVar13 = *(longlong *)(param_1 + 0x30);
  if ((6 < *(byte *)(lVar13 + 0xf0)) && (1 < *(int *)(param_1 + 0x38))) {
    uVar9 = FUN_1434141c0(param_1,1);
    dVar15 = (double)FUN_143411a90(uVar9,lVar13);
    this_00[0x158] = (RefCountImpl)((byte)this_00[0x158] & 0xfe);
    Scaleform::Render::Text::DocView::SetWordWrap(this_00);
    local_128 = 0;
    local_120 = (double)(ulonglong)(uint)((float)dVar15 * 20.0 + 0.0);
    FUN_1433fb830(this_00,&local_128,1);
  }
  this_00[0x158] = (RefCountImpl)((byte)this_00[0x158] | 4);
  FUN_1433dd540(local_a8,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30)
               );
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_1433debc0(local_a8);
  FUN_1433df690(&local_d8);
  uVar9 = FUN_1433ddf20(local_a8,&local_128,lVar11 + 0x68);
  FUN_1433dd7b0(local_a8,uVar9);
  FUN_1433dd700(&local_128);
  uVar9 = FUN_1433deff0(&local_d8,&local_128,lVar11 + 0xb8);
  Scaleform::Render::Text::ParagraphFormat::operator=(&local_d8,uVar9);
  FUN_1433dedf0(&local_128);
  FUN_1433e69f0(*(undefined8 *)(this_00 + 0x10),local_a8);
  FUN_1433e6ac0(*(undefined8 *)(this_00 + 0x10),&local_d8);
  puVar5 = (undefined8 *)CONCAT71(uStackX_9,local_res8);
  Scaleform::Render::Text::DocView::SetText(this_00,*puVar5,0xffffffffffffffff);
  FUN_1433fcba0(this_00);
  fVar14 = (float)Scaleform::Render::Text::DocView::GetTextWidth(this_00);
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_128 = CONCAT71(local_128._1_7_,3);
  local_res8 = 0;
  local_120 = ((double)fVar14 + 80.0) * 0.05;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18) + 0x618
                               ),"textFieldWidth",0xe);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x50))
            (lVar8 + 0x20,lVar11 + 0xe8,&local_res10,&local_128,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < (byte)local_128) {
    FUN_143411150(&local_128);
  }
  fVar14 = (float)Scaleform::Render::Text::DocView::GetTextHeight(this_00);
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_128 = CONCAT71(local_128._1_7_,3);
  local_res8 = 0;
  local_120 = ((double)fVar14 + 80.0) * 0.05;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18) + 0x618
                               ),"textFieldHeight",0xf);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x50))
            (lVar8 + 0x20,lVar11 + 0xe8,&local_res10,&local_128,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < (byte)local_128) {
    FUN_143411150(&local_128);
  }
  fVar14 = (float)Scaleform::Render::Text::DocView::GetTextWidth(this_00);
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_128 = CONCAT71(local_128._1_7_,3);
  local_res8 = 0;
  local_120 = (double)fVar14 * 0.05;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18) + 0x618
                               ),"width",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x50))
            (lVar8 + 0x20,lVar11 + 0xe8,&local_res10,&local_128,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < (byte)local_128) {
    FUN_143411150(&local_128);
  }
  fVar14 = (float)Scaleform::Render::Text::DocView::GetTextHeight(this_00);
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_128 = CONCAT71(local_128._1_7_,3);
  local_res8 = 0;
  local_120 = (double)fVar14 * 0.05;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18) + 0x618
                               ),"height",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x50))
            (lVar8 + 0x20,lVar11 + 0xe8,&local_res10,&local_128,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < (byte)local_128) {
    FUN_143411150(&local_128);
  }
  puVar10 = (ulonglong *)FUN_1433ddd30(local_a8);
  bVar12 = 0x10;
  if ((local_5e & 1) != 0) {
    bVar12 = 0x12;
  }
  this_01 = (RefCountImpl *)
            (**(code **)(**(longlong **)(this_00 + 0x18) + 8))
                      (*(longlong **)(this_00 + 0x18),(*puVar10 & 0xfffffffffffffffc) + 0xc,
                       bVar12 | local_5e >> 1 & 1,1,0);
  dVar15 = 0.0;
  if (this_01 != (RefCountImpl *)0x0) {
    dVar17 = (double)*(float *)(*(longlong *)(this_01 + 0x30) + 0x10);
    dVar15 = (double)*(float *)(*(longlong *)(this_01 + 0x30) + 0x14);
    if (dVar17 != 0.0) goto LAB_143473c41;
  }
  dVar17 = 960.0;
LAB_143473c41:
  if (dVar15 == 0.0) {
    dVar15 = 1024.0 - dVar17;
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_128 = CONCAT71(local_128._1_7_,3);
  local_res8 = 0;
  dVar16 = (double)((float)local_60 * 0.05) * 20.0 * 0.0009765625;
  local_res18 = (ulonglong)(dVar16 * dVar15 * 0.05);
  local_120 = (double)((longlong)(dVar16 * dVar17 * 0.05) & 0xffffffff);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18) + 0x618
                               ),"ascent",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x50))
            ((longlong *)(lVar8 + 0x20),lVar11 + 0xe8,&local_res10,&local_128,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < (byte)local_128) {
    FUN_143411150(&local_128);
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_128 = CONCAT71(local_128._1_7_,3);
  local_res8 = 0;
  local_120 = (double)(local_res18 & 0xffffffff);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18) + 0x618
                               ),"descent",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x50))
            ((longlong *)(lVar8 + 0x20),lVar11 + 0xe8,&local_res10,&local_128,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < (byte)local_128) {
    FUN_143411150(&local_128);
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar8);
  if (this_01 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_01);
  }
  FUN_1433dedf0(&local_d8);
  FUN_1433dd700(local_a8);
  Scaleform::RefCountImpl::Release(this_00);
  piVar1 = (int *)(puVar5 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar5);
  }
  if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
    FUN_1434a2b80(lVar8);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 143473e90 FUN_143473e90 body=126 status=ok
// SIG undefined FUN_143473e90(void)

undefined8 * FUN_143473e90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143473f20;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0fd90;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143473f20 FUN_143473f20 body=1966 status=ok
// SIG undefined FUN_143473f20(void)

void FUN_143473f20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x1e)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar4 != '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,0xe0,0);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = FUN_1434712a0(lVar8,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar8 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar9 = *(uint *)(param_1 + 0x3c);
    local_res8[0] = 0;
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar10 = lVar8;
    if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                                 0x618),&DAT_145b13b5c,4);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x18))
              (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,lVar10,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar10 = *(longlong *)(param_1 + 0x30);
      local_res8[0] = 0;
      uVar9 = *(int *)(param_1 + 0x3c) - 1;
      lVar11 = lVar8;
      if (uVar9 <= (uint)(*(int *)(lVar10 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar10 + 8) - *(longlong *)(lVar10 + 0x10) >> 5))) {
        lVar11 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar10 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      local_res10 = FUN_143360950(*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                                   0x618),&DAT_145b1368c,4);
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x18))
                (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,lVar11,local_res8);
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar10 = *(longlong *)(param_1 + 0x30);
        local_res8[0] = 0;
        uVar9 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar9 <= (uint)(*(int *)(lVar10 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar10 + 8) - *(longlong *)(lVar10 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar10 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                                     0x618),"color",5);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x18))
                  (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,lVar8,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (3 < *(int *)(param_1 + 0x38)) {
          local_res8[0] = 0;
          local_res10 = FUN_143360950(*(undefined8 *)
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18)
                                       + 0x618),&DAT_145b139e4,4);
          *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
          lVar8 = *(longlong *)(lVar6 + 0x20);
          uVar7 = FUN_1434141c0(param_1,3);
          (**(code **)(lVar8 + 0x18))
                    (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,local_res8);
          piVar1 = (int *)(local_res10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (4 < *(int *)(param_1 + 0x38)) {
            local_res8[0] = 0;
            local_res10 = FUN_143360950(*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18
                                           ) + 0x618),"italic",6);
            *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
            lVar8 = *(longlong *)(lVar6 + 0x20);
            uVar7 = FUN_1434141c0(param_1,4);
            (**(code **)(lVar8 + 0x18))
                      (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,local_res8);
            piVar1 = (int *)(local_res10 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (5 < *(int *)(param_1 + 0x38)) {
              local_res8[0] = 0;
              local_res10 = FUN_143360950(*(undefined8 *)
                                           (*(longlong *)
                                             (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) +
                                             0x18) + 0x618),"underline",9);
              *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
              lVar8 = *(longlong *)(lVar6 + 0x20);
              uVar7 = FUN_1434141c0(param_1,5);
              (**(code **)(lVar8 + 0x18))
                        (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,local_res8)
              ;
              piVar1 = (int *)(local_res10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
              if (6 < *(int *)(param_1 + 0x38)) {
                local_res8[0] = 0;
                local_res10 = FUN_143360950(*(undefined8 *)
                                             (*(longlong *)
                                               (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) +
                                               0x18) + 0x618),&DAT_145b13b9c,3);
                *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                lVar8 = *(longlong *)(lVar6 + 0x20);
                uVar7 = FUN_1434141c0(param_1,6);
                (**(code **)(lVar8 + 0x18))
                          (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,
                           local_res8);
                piVar1 = (int *)(local_res10 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
                if (7 < *(int *)(param_1 + 0x38)) {
                  local_res8[0] = 0;
                  local_res10 = FUN_143360950(*(undefined8 *)
                                               (*(longlong *)
                                                 (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28)
                                                 + 0x18) + 0x618),"target",6);
                  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                  lVar8 = *(longlong *)(lVar6 + 0x20);
                  uVar7 = FUN_1434141c0(param_1,7);
                  (**(code **)(lVar8 + 0x18))
                            (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,
                             local_res8);
                  piVar1 = (int *)(local_res10 + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920();
                  }
                  if (8 < *(int *)(param_1 + 0x38)) {
                    local_res8[0] = 0;
                    local_res10 = FUN_143360950(*(undefined8 *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                                                 0x618),"align",5);
                    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                    lVar8 = *(longlong *)(lVar6 + 0x20);
                    uVar7 = FUN_1434141c0(param_1,8);
                    (**(code **)(lVar8 + 0x18))
                              (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,
                               local_res8);
                    piVar1 = (int *)(local_res10 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_14335f920();
                    }
                    if (9 < *(int *)(param_1 + 0x38)) {
                      local_res8[0] = 0;
                      local_res10 = FUN_143360950(*(undefined8 *)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18)
                                                   + 0x618),"leftMargin",10);
                      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                      lVar8 = *(longlong *)(lVar6 + 0x20);
                      uVar7 = FUN_1434141c0(param_1,9);
                      (**(code **)(lVar8 + 0x18))
                                (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,
                                 local_res8);
                      piVar1 = (int *)(local_res10 + 0x18);
                      *piVar1 = *piVar1 + -1;
                      if (*piVar1 == 0) {
                        FUN_14335f920();
                      }
                      if (10 < *(int *)(param_1 + 0x38)) {
                        local_res8[0] = 0;
                        local_res10 = FUN_143360950(*(undefined8 *)
                                                     (*(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18
                                                       ) + 0x618),"rightMargin",0xb);
                        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                        lVar8 = *(longlong *)(lVar6 + 0x20);
                        uVar7 = FUN_1434141c0(param_1,10);
                        (**(code **)(lVar8 + 0x18))
                                  (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7,
                                   local_res8);
                        piVar1 = (int *)(local_res10 + 0x18);
                        *piVar1 = *piVar1 + -1;
                        if (*piVar1 == 0) {
                          FUN_14335f920();
                        }
                        if (0xb < *(int *)(param_1 + 0x38)) {
                          local_res8[0] = 0;
                          local_res10 = FUN_143360950(*(undefined8 *)
                                                       (*(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)(lVar3 + 0xe8) + 0x28) +
                                                         0x18) + 0x618),"indent",6);
                          *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                          lVar8 = *(longlong *)(lVar6 + 0x20);
                          uVar7 = FUN_1434141c0(param_1,0xb);
                          (**(code **)(lVar8 + 0x18))
                                    (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,uVar7
                                     ,local_res8);
                          piVar1 = (int *)(local_res10 + 0x18);
                          *piVar1 = *piVar1 + -1;
                          if (*piVar1 == 0) {
                            FUN_14335f920();
                          }
                          if (0xc < *(int *)(param_1 + 0x38)) {
                            local_res8[0] = 0;
                            local_res10 = FUN_143360950(*(undefined8 *)
                                                         (*(longlong *)
                                                           (*(longlong *)
                                                             (*(longlong *)(lVar3 + 0xe8) + 0x28) +
                                                           0x18) + 0x618),"leading",7);
                            *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
                            lVar8 = *(longlong *)(lVar6 + 0x20);
                            uVar7 = FUN_1434141c0(param_1,0xc);
                            (**(code **)(lVar8 + 0x18))
                                      (lVar6 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,
                                       uVar7,local_res8);
                            piVar1 = (int *)(local_res10 + 0x18);
                            *piVar1 = *piVar1 + -1;
                            if (*piVar1 == 0) {
                              FUN_14335f920();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar6);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
  return;
}



// FUNCTION 1434746e0 FUN_1434746e0 body=61 status=ok
// SIG undefined FUN_1434746e0(void)

void FUN_1434746e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (lVar2 != 0) {
    FUN_1434712a0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143474730 FUN_143474730 body=1211 status=ok
// SIG undefined FUN_143474730(void)

longlong * FUN_143474730(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58 [8];
  longlong local_50 [2];
  undefined1 local_40;
  
  local_60 = 8;
  local_68 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_143473f20;
    lVar3 = FUN_14341b750(local_68,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 local_58,&local_res8);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0fd90;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x120,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar3 = FUN_14341b750(param_2,1);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0fba8;
    puVar4[4] = &PTR_LAB_145b0fbf0;
    FUN_1433dd540(puVar4 + 0xd,*(undefined8 *)(local_68 + 0x30));
    puVar4[0x17] = 0;
    *(undefined4 *)(puVar4 + 0x18) = 1;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    *(undefined4 *)(puVar4 + 0x1b) = 0;
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58[0] = 10;
      (**(code **)(puVar4[4] + 0x50))
                (puVar4 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 local_58,&local_res8);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar3;
    puVar5 = puVar4 + 0x1c;
    *(undefined1 *)(puVar4 + 0x1f) = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
    *(undefined1 *)(puVar4 + 0x22) = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x23] = 0;
    *puVar4 = &PTR_LAB_145b0fc98;
    puVar4[4] = &PTR_LAB_145b0fce0;
    *puVar5 = &PTR_LAB_145b0fd88;
    FUN_1434230f0(puVar5,puVar4,&local_68,param_1);
    local_res10[0] = 1;
    *puVar4 = &PTR_LAB_145b0fc98;
    puVar4[4] = &PTR_LAB_145b0fce0;
    *puVar5 = &PTR_LAB_145b0fd88;
    FUN_143422ee0(puVar5,puVar4,&local_68,&PTR_s_getTextExtent_145b07e80,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x20,&local_res8);
  local_50[0] = *param_1;
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58[0] = 8;
  local_40 = 0;
  if (local_50[0] != 0) {
    *(int *)(local_50[0] + 0x18) = *(int *)(local_50[0] + 0x18) + 1;
    *(uint *)(local_50[0] + 0x18) = *(uint *)(local_50[0] + 0x18) & 0x8fffffff;
  }
  local_50[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x238,
             local_58,&local_res8);
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 143474c00 FUN_143474c00 body=120 status=ok
// SIG undefined FUN_143474c00(void)

undefined8 * FUN_143474c00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0fe18;
  param_1[4] = &PTR_LAB_145b0fe60;
  FUN_1432c2f70(param_1 + 0xd);
  FUN_1432c2f70(param_1 + 0xe);
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x2c);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143474c80 FUN_143474c80 body=48 status=ok
// SIG undefined FUN_143474c80(void)

undefined8 FUN_143474c80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    if (*(char *)(*(longlong *)*param_3 + lVar1) != (&DAT_145b138b0)[lVar1]) {
      uVar3 = FUN_143414a10();
      return uVar3;
    }
    lVar1 = lVar2;
  } while (lVar2 != 5);
  return 1;
}



// FUNCTION 143474cc0 FUN_143474cc0 body=170 status=ok
// SIG undefined FUN_143474cc0(void)

void FUN_143474cc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_28 [32];
  
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                               0x618),&DAT_145b138b0,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  uVar2 = FUN_143410c00(local_28,param_3);
  FUN_143414a10(param_1 + 0x20,param_2,&local_res10,uVar2,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 143474d70 FUN_143474d70 body=215 status=ok
// SIG undefined FUN_143474d70(void)

undefined8 FUN_143474d70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  
  uVar4 = FUN_1432c3650(param_2,0,local_res20);
  iVar3 = (int)uVar4;
  do {
    if (iVar3 == 0) {
      FUN_1432c4d80(param_1 + 0x68,param_2);
      FUN_1432c4d80(param_1 + 0x70,param_3);
      return 1;
    }
    uVar2 = (uint)uVar4;
    switch(uVar2) {
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x2c:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3e:
    case 0x3f:
    case 0x5c:
    case 0x7e:
      return 0;
    }
    uVar1 = *(ushort *)(&DAT_145afe6e0 + ((uVar4 & 0xffff) >> 8) * 2);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        return 0;
      }
      if ((*(ushort *)
            (&DAT_145afe6e0 + (ulonglong)(((uVar2 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
           (uVar2 & 0xf) & 1) != 0) {
        return 0;
      }
    }
    uVar4 = Scaleform::String::GetNextChar(param_2,local_res20);
    iVar3 = (int)uVar4;
  } while( true );
}



// FUNCTION 143474ec0 FUN_143474ec0 body=249 status=ok
// SIG undefined FUN_143474ec0(void)

undefined8 FUN_143474ec0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  byte local_30 [40];
  
  local_30[0] = 0;
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),&DAT_145b138b0,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x58))
            ((longlong *)(param_1 + 0x20),param_2 + 0xe8,&local_res8,local_30);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar3 = FUN_143412120(local_30);
  local_38 = 0;
  local_48 = &PTR_FUN_145b138b8;
  local_40 = param_2;
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x40))
            ((longlong *)(lVar3 + 0x20),param_2 + 0xe8,&local_48,0,0);
  uVar2 = local_38;
  local_48 = &PTR_FUN_145af1858;
  if (4 < local_30[0]) {
    FUN_143411150(local_30);
  }
  return uVar2;
}



// FUNCTION 143474fc0 FUN_143474fc0 body=378 status=ok
// SIG undefined FUN_143474fc0(void)

void FUN_143474fc0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  byte local_28 [32];
  
  if (param_3 != (longlong *)0x0) {
    local_28[0] = 0;
    local_res18 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                                 0x618),&DAT_145b138b0,4);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x58))
              ((longlong *)(param_1 + 0x20),param_2 + 0xe8,&local_res18,local_28);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    lVar2 = FUN_143412120(local_28,param_2);
    local_40 = 0;
    local_48 = &PTR__scalar_deleting_destructor__145b138c8;
    local_38 = param_2;
    local_30 = param_3;
    (**(code **)(*param_3 + 8))(param_3);
    (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x40))(lVar2 + 0x20,param_2 + 0xe8,&local_48,0,0);
    (**(code **)(*param_3 + 0x38))(param_3);
    if (local_40 != 0) {
      lVar2 = 0;
      lVar3 = *(longlong *)(local_40 + 8) + 1;
      do {
        if (*(longlong *)(lVar2 + 0x10 + local_40) != -2) {
          *(undefined8 *)(lVar2 + 0x10 + local_40) = 0xfffffffffffffffe;
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (local_40 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_40 = 0;
    }
    local_48 = &PTR_FUN_145af1858;
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  return;
}



// FUNCTION 143475140 FUN_143475140 body=103 status=ok
// SIG undefined FUN_143475140(void)

undefined8 * FUN_143475140(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495a20();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0ff08;
  param_1[4] = &PTR_LAB_145b0ff50;
  param_1[0xf] = &PTR_LAB_145b0fff8;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_clear_145b08640,local_res8);
  return param_1;
}



// FUNCTION 1434751b0 FUN_1434751b0 body=396 status=ok
// SIG undefined FUN_1434751b0(void)

void FUN_1434751b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  RefCountImpl *this;
  RefCountImpl *this_00;
  RefCountNTSImpl *this_01;
  longlong lVar4;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x2c)) {
    lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0x60),
                            *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x18) + 0x140,0,0xffffffff);
      FUN_143474cc0(lVar4,*(undefined8 *)(param_1 + 0x30),lVar3);
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
      this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar1 + 0x10) + 0x18))(lVar1 + 0x10,0x24);
      if (this != (RefCountImpl *)0x0) {
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
        this_00 = (RefCountImpl *)
                  (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x18))(lVar1 + 0x10,0xc);
        this_01 = (RefCountNTSImpl *)
                  (**(code **)(*(longlong *)this + 0x10))(this,lVar4 + 0x68,lVar4 + 0x70,this_00);
        if (this_00 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this_00);
        }
        FUN_143474fc0(lVar4,*(undefined8 *)(param_1 + 0x30),this_01);
        if (this_01 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this_01);
        }
        Scaleform::RefCountImpl::Release(this);
      }
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","SharedObject"
               );
  return;
}



// FUNCTION 143475350 FUN_143475350 body=294 status=ok
// SIG undefined FUN_143475350(void)

void FUN_143475350(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  RefCountImpl *this;
  RefCountImpl *this_00;
  RefCountNTSImpl *this_01;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x2c)) {
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    if ((lVar3 != 0) &&
       (lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10),
       this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar1 + 0x10) + 0x18))(lVar1 + 0x10,0x24),
       this != (RefCountImpl *)0x0)) {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
      this_00 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar1 + 0x10) + 0x18))(lVar1 + 0x10,0xc);
      this_01 = (RefCountNTSImpl *)
                (**(code **)(*(longlong *)this + 0x10))(this,lVar3 + 0x68,lVar3 + 0x70,this_00);
      if (this_00 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this_00);
      }
      FUN_143474fc0(lVar3,*(undefined8 *)(param_1 + 0x30),this_01);
      if (this_01 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this_01);
      }
      Scaleform::RefCountImpl::Release(this);
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","SharedObject"
               );
  return;
}



// FUNCTION 143475480 FUN_143475480 body=136 status=ok
// SIG undefined FUN_143475480(void)

void FUN_143475480(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x2c) {
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        uVar3 = FUN_143474ec0(lVar4,*(undefined8 *)(param_1 + 0x30));
        pbVar1 = *(byte **)(param_1 + 8);
        if (4 < *pbVar1) {
          FUN_143411150(pbVar1);
        }
        *(undefined4 *)(pbVar1 + 8) = uVar3;
        *pbVar1 = 4;
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","SharedObject"
               );
  return;
}



// FUNCTION 143475510 FUN_143475510 body=1497 status=ok
// SIG undefined FUN_143475510(void)

void FUN_143475510(longlong param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  RefCountImpl *this;
  RefCountImpl *this_00;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined8 *local_res20;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong uVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined **local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  byte local_a8;
  undefined **local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulonglong *local_58;
  undefined ***local_50;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar11 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(uint *)(param_1 + 0x3c);
    lVar8 = 0;
    lVar14 = lVar8;
    if (uVar10 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      lVar14 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
    }
    uVar16 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
    FUN_143411540(lVar14,&local_c8,lVar11,0xffffffff,uVar16);
    puVar7 = (undefined8 *)
             FUN_143360950(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                            + 0x618),&DAT_145af3922,0,0);
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      uVar10 = *(int *)(param_1 + 0x3c) - 1;
      lVar14 = lVar8;
      if (uVar10 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
        lVar14 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
      }
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_143411540(lVar14,&local_res20,lVar11,0xffffffff,uVar16);
      *(int *)(local_res20 + 3) = *(int *)(local_res20 + 3) + 1;
      piVar1 = (int *)(puVar7 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(puVar7);
      }
      piVar1 = (int *)(local_res20 + 3);
      *piVar1 = *piVar1 + -1;
      puVar7 = local_res20;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res20);
      }
    }
    ppuVar4 = local_c8;
    uVar18 = (undefined4)(uVar16 >> 0x20);
    FUN_1432c2fb0(&local_res18,*local_c8);
    FUN_1432c2fb0(&local_res10,*puVar7);
    local_res8 = FUN_143360a90(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                  0x18) + 0x618),(longlong)(local_res10 & 0xfffffffffffffffc) + 0xc,
                               *(ulonglong *)(local_res10 & 0xfffffffffffffffc) & 0x7fffffffffffffff
                              );
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143360130(&local_res8,&DAT_145b138d8);
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)((local_res18 & 0xfffffffffffffffc) + 0xc + lVar11) != '\0');
    FUN_143360130(&local_res8);
    FUN_14341a730(*(undefined8 *)(param_1 + 0x30),&local_b8,0x2c);
    lVar11 = *(longlong *)(local_b8 + 0x70);
    local_res20 = (undefined8 *)(local_b8 + 0x70);
    lVar14 = lVar8;
    if (lVar11 != 0) {
      uVar16 = *(ulonglong *)(lVar11 + 8);
      uVar15 = *(uint *)(local_res8 + 0x1c) & uVar16;
      puVar13 = (ulonglong *)(lVar11 + 0x10 + uVar15 * 0x20);
      if ((*puVar13 != 0xfffffffffffffffe) &&
         (uVar12 = uVar15, (*(uint *)(puVar13[1] + 0x1c) & uVar16) == uVar15)) {
        while (((*(uint *)(puVar13[1] + 0x1c) & uVar16) != uVar15 || (puVar13[1] != local_res8))) {
          uVar12 = *puVar13;
          if (uVar12 == 0xffffffffffffffff) goto LAB_143475782;
          puVar13 = (ulonglong *)(lVar11 + 0x10 + uVar12 * 0x20);
        }
        if (-1 < (longlong)uVar12) {
          lVar14 = lVar11 + 0x18 + uVar12 * 0x20;
        }
      }
    }
LAB_143475782:
    lVar11 = lVar14 + 8;
    if (lVar14 == 0) {
      lVar11 = lVar8;
    }
    if (lVar11 == 0) {
      uVar17 = CONCAT44(uVar18,0xffffffff);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar11 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar11 + 0x60),
                             *(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x18) + 0x298,0,uVar17);
      uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
      cVar5 = FUN_143474d70(lVar11,&local_res18,&local_res10);
      if (cVar5 == '\0') {
        puVar3 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar3);
        *puVar3 = 1;
      }
      else {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
        lVar8 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar14 + 0x60),
                              *(longlong *)(*(longlong *)(lVar14 + 0x28) + 0x18) + 0x140,0,
                              CONCAT44(uVar18,0xffffffff));
        local_78 = 0;
        local_90 = 1;
        local_98 = &PTR_FUN_145b13870;
        local_88 = *(longlong *)(param_1 + 0x30);
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        plVar9 = (longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(local_88 + 0xe0) + 0x20) + 0x10) + 0x10)
        ;
        local_80 = lVar8;
        this = (RefCountImpl *)(**(code **)(*plVar9 + 0x18))(plVar9,0x24);
        lVar14 = *(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10)
        ;
        this_00 = (RefCountImpl *)
                  (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x18))(lVar14 + 0x10,0xc);
        if (this_00 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this_00);
        }
        if ((this == (RefCountImpl *)0x0) ||
           (cVar5 = (**(code **)(*(longlong *)this + 8))
                              (this,&local_res18,&local_res10,&local_98,this_00), cVar5 == '\0')) {
          puVar3 = *(undefined1 **)(param_1 + 8);
          FUN_143411150(puVar3);
          *puVar3 = 1;
        }
        else {
          FUN_143474cc0(lVar11,*(undefined8 *)(param_1 + 0x30),lVar8);
          FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar11);
          if (lVar11 != 0) {
            *(uint *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1U & 0x8fffffff;
          }
          local_58 = &local_res8;
          local_50 = &local_c8;
          local_c8 = &PTR_FUN_145b10000;
          local_c0 = lVar11;
          FUN_1434930d0(local_res20,local_res20,&local_58,*(undefined4 *)(local_res8 + 0x1c));
          local_c8 = &PTR_FUN_145b10000;
          if ((local_c0 != 0) && ((*(uint *)(local_c0 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(local_c0 + 0x18) = *(uint *)(local_c0 + 0x18) - 1;
            FUN_1434a2b80();
          }
        }
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        if (local_78 != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)&local_98);
        if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
          FUN_1434a2b80(lVar8);
        }
      }
      if ((lVar11 != 0) && ((*(uint *)(lVar11 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) - 1;
        FUN_1434a2b80(lVar11);
      }
    }
    else {
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar11 + 8));
    }
    if ((((local_a8 & 2) == 0) && (local_b8 != 0)) &&
       ((*(uint *)(local_b8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_b8 + 0x18) = *(uint *)(local_b8 + 0x18) - 1;
      FUN_1434a2b80(local_b8);
    }
    if ((((local_a8 & 1) == 0) && (local_b0 != 0)) &&
       ((*(uint *)(local_b0 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_b0 + 0x18) = *(uint *)(local_b0 + 0x18) - 1;
      FUN_1434a2b80();
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar6 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
    }
    iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar6 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
    }
    piVar1 = (int *)(puVar7 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar7);
    }
    ppuVar2 = ppuVar4 + 3;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    if (*(int *)ppuVar2 == 0) {
      FUN_14335f920(ppuVar4);
    }
  }
  return;
}



// FUNCTION 143475b20 FUN_143475b20 body=31 status=ok
// SIG undefined FUN_143475b20(void)

void FUN_143475b20(longlong param_1)

{
  FUN_143497c60(param_1 + 0x70);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 143475b50 FUN_143475b50 body=161 status=ok
// SIG undefined FUN_143475b50(void)

undefined8 * FUN_143475b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = Scaleform::GFx::AS2::SharedObjectCtorFunction::GlobalCtor;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b10010;
  *puVar2 = &PTR_LAB_145b10098;
  param_1[0xe] = 0;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_getLocal_145b08890,7);
  return param_1;
}



// FUNCTION 143475c00 GlobalCtor body=116 status=ok
// SIG undefined GlobalCtor(void)

void Scaleform::GFx::AS2::SharedObjectCtorFunction::GlobalCtor(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143474c00(lVar2,*(undefined8 *)(param_1 + 0x30));
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar2);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return;
}



// FUNCTION 143475c80 FUN_143475c80 body=60 status=ok
// SIG undefined FUN_143475c80(void)

void FUN_143475c80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 != 0) {
    FUN_143474c00(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143475cd0 FUN_143475cd0 body=1212 status=ok
// SIG undefined FUN_143475cd0(void)

longlong * FUN_143475cd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58 [8];
  longlong local_50 [2];
  undefined1 local_40;
  
  local_60 = 8;
  local_68 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x78);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = Scaleform::GFx::AS2::SharedObjectCtorFunction::GlobalCtor;
    lVar3 = FUN_14341b750(local_68,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 local_58,&local_res8);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b10010;
    puVar2[4] = &PTR_LAB_145b10098;
    puVar2[0xe] = 0;
    FUN_14340b610(puVar2 + 4,&local_68,&PTR_s_getLocal_145b08890,7);
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb8,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar3 = FUN_14341b750(param_2,1);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0fe18;
    puVar4[4] = &PTR_LAB_145b0fe60;
    FUN_1432c2f70(puVar4 + 0xd);
    FUN_1432c2f70(puVar4 + 0xe);
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58[0] = 10;
      (**(code **)(puVar4[4] + 0x50))
                (puVar4 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 local_58,&local_res8);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar3;
    *(undefined1 *)(puVar4 + 0x12) = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x16] = 0;
    *puVar4 = &PTR_LAB_145b0ff08;
    puVar4[4] = &PTR_LAB_145b0ff50;
    puVar4[0xf] = &PTR_LAB_145b0fff8;
    FUN_1434230f0(puVar4 + 0xf,puVar4,&local_68,param_1);
    local_res10[0] = 1;
    *puVar4 = &PTR_LAB_145b0ff08;
    puVar4[4] = &PTR_LAB_145b0ff50;
    puVar4[0xf] = &PTR_LAB_145b0fff8;
    FUN_143422ee0(puVar4 + 0xf,puVar4,&local_68,&PTR_s_clear_145b08640,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x2c,&local_res8);
  local_50[0] = *param_1;
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58[0] = 8;
  local_40 = 0;
  if (local_50[0] != 0) {
    *(int *)(local_50[0] + 0x18) = *(int *)(local_50[0] + 0x18) + 1;
    *(uint *)(local_50[0] + 0x18) = *(uint *)(local_50[0] + 0x18) & 0x8fffffff;
  }
  local_50[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x298,
             local_58,&local_res8);
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 1434761a0 FUN_1434761a0 body=115 status=ok
// SIG undefined FUN_1434761a0(void)

void FUN_1434761a0(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_145b10150;
  param_1[4] = &PTR_LAB_145b10198;
  uVar1 = param_1[0x10];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  FUN_143370c10(param_1 + 0xd);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143476220 FUN_143476220 body=111 status=ok
// SIG undefined FUN_143476220(void)

undefined8 * FUN_143476220(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b10150;
  param_1[4] = &PTR_LAB_145b10198;
  FUN_1433a4740(param_1 + 0xd);
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x2b);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 1434762c0 FUN_1434762c0 body=106 status=ok
// SIG undefined FUN_1434762c0(void)

undefined8 * FUN_1434762c0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495d70();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b10240;
  param_1[4] = &PTR_LAB_145b10288;
  param_1[0x12] = &PTR_LAB_145b10330;
  FUN_143422ee0(param_1 + 0x12,param_1,param_2,&PTR_s_findText_145b078c0,local_res8);
  return param_1;
}



// FUNCTION 143476330 FUN_143476330 body=516 status=ok
// SIG undefined FUN_143476330(void)

void FUN_143476330(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 0x2b)) {
    lVar7 = 0;
    lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar8 = lVar7;
    }
    if ((lVar8 != 0) && (2 < *(int *)(param_1 + 0x38))) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(uint *)(param_1 + 0x3c);
      lVar10 = lVar7;
      if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      uVar6 = FUN_143411f00(lVar10);
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 1;
      lVar10 = lVar7;
      if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      FUN_143411540(lVar10,&local_res10,lVar2,0xffffffff,0);
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 2;
      if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      uVar4 = FUN_143411fd0(lVar7);
      FUN_1432c3140(&local_res8,*local_res10,*(undefined4 *)(local_res10 + 4));
      uVar6 = FUN_1433a4db0(lVar8 + 0x68,uVar6,(local_res8 & 0xfffffffffffffffc) + 0xc,uVar4);
      pbVar3 = *(byte **)(param_1 + 8);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 4;
      *(undefined4 *)(pbVar3 + 8) = uVar6;
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res10);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143476540 FUN_143476540 body=136 status=ok
// SIG undefined FUN_143476540(void)

void FUN_143476540(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x2b) {
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        uVar3 = FUN_1433a4a30(lVar4 + 0x68);
        pbVar1 = *(byte **)(param_1 + 8);
        if (4 < *pbVar1) {
          FUN_143411150(pbVar1);
        }
        *(undefined4 *)(pbVar1 + 8) = uVar3;
        *pbVar1 = 4;
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 1434765d0 FUN_1434765d0 body=339 status=ok
// SIG undefined FUN_1434765d0(void)

void FUN_1434765d0(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 0x2b) {
      lVar7 = 0;
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = lVar7;
      }
      if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(uint *)(param_1 + 0x3c);
        lVar9 = lVar7;
        if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
        }
        uVar5 = FUN_143411f00(lVar9);
        if (*(int *)(param_1 + 0x38) < 2) {
          uVar8 = FUN_1433a4a30(lVar6 + 0x68);
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x30);
          uVar8 = *(int *)(param_1 + 0x3c) - 1;
          if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                             (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
            lVar7 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
          }
          uVar8 = FUN_143411f00(lVar7);
        }
        if (uVar8 <= uVar5) {
          uVar8 = uVar5 + 1;
        }
        uVar3 = FUN_1433a4f10(lVar6 + 0x68,uVar5,uVar8);
        puVar2 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar2);
        *puVar2 = 2;
        puVar2[8] = uVar3;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143476730 FUN_143476730 body=354 status=ok
// SIG undefined FUN_143476730(void)

void FUN_143476730(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_res8;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 0x2b) {
      lVar7 = 0;
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = lVar7;
      }
      if (lVar6 != 0) {
        if (*(int *)(param_1 + 0x38) < 1) {
          uVar4 = 0;
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x30);
          uVar1 = *(uint *)(param_1 + 0x3c);
          if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                             (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
            lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
          }
          uVar4 = FUN_143411fd0(lVar7);
        }
        FUN_1433a4bd0(lVar6 + 0x68,&local_res8,uVar4);
        lVar6 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                 0x18) + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
        *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
        pbVar3 = *(byte **)(param_1 + 8);
        if (4 < *pbVar3) {
          FUN_143411150(pbVar3);
        }
        *pbVar3 = 5;
        *(longlong *)(pbVar3 + 8) = lVar6;
        iVar5 = *(int *)(lVar6 + 0x18);
        *(int *)(lVar6 + 0x18) = iVar5;
        if (iVar5 == 0) {
          FUN_14335f920(lVar6);
        }
        iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar5 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
        }
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 1434768a0 FUN_1434768a0 body=563 status=ok
// SIG undefined FUN_1434768a0(void)

void FUN_1434768a0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong local_res8;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 0x2b) {
      lVar8 = 0;
      lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar7 = lVar8;
      }
      if ((lVar7 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(uint *)(param_1 + 0x3c);
        lVar10 = lVar8;
        if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
        }
        uVar5 = FUN_143411f00(lVar10);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(int *)(param_1 + 0x3c) - 1;
        lVar10 = lVar8;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        uVar6 = FUN_143411f00(lVar10,lVar1);
        if (*(int *)(param_1 + 0x38) < 3) {
          uVar3 = 0;
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x30);
          uVar9 = *(int *)(param_1 + 0x3c) - 2;
          if (uVar9 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                             (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
            lVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
          }
          uVar3 = FUN_143411fd0(lVar8);
        }
        if (uVar6 <= uVar5) {
          uVar6 = uVar5 + 1;
        }
        FUN_1433a4b30(lVar7 + 0x68,&local_res8,uVar5,uVar6,uVar3);
        lVar7 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                 0x18) + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        pbVar2 = *(byte **)(param_1 + 8);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 5;
        *(longlong *)(pbVar2 + 8) = lVar7;
        iVar4 = *(int *)(lVar7 + 0x18);
        *(int *)(lVar7 + 0x18) = iVar4;
        if (iVar4 == 0) {
          FUN_14335f920(lVar7);
        }
        iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar4 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
        }
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143476ae0 FUN_143476ae0 body=519 status=ok
// SIG undefined FUN_143476ae0(void)

void FUN_143476ae0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined **local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_18;
  longlong local_10;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x2b) {
      lVar6 = 0;
      lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar7 = lVar6;
      }
      if ((lVar7 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(uint *)(param_1 + 0x3c);
        lVar9 = lVar6;
        if (uVar8 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        uVar3 = FUN_143411f00(lVar9);
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(int *)(param_1 + 0x3c) - 1;
        lVar9 = lVar6;
        if (uVar8 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        uVar4 = FUN_143411f00(lVar9,lVar5);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
        if (lVar5 != 0) {
          lVar6 = FUN_14345d8d0(lVar5,*(undefined8 *)(param_1 + 0x30));
        }
        local_68 = 0x3f800000;
        uStack_60 = 0;
        local_78[0] = &PTR_FUN_145b13bc0;
        local_18 = *(undefined8 *)(param_1 + 0x30);
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_54 = 0x3f800000;
        uStack_50 = 0;
        uStack_4c = 0;
        local_10 = lVar6;
        FUN_1433a56b0(lVar7 + 0x68,local_78,uVar3,uVar4);
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar6);
        local_78[0] = &PTR_FUN_145b10140;
        if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
          FUN_1434a2b80(lVar6);
        }
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143476cf0 FUN_143476cf0 body=462 status=ok
// SIG undefined FUN_143476cf0(void)

void FUN_143476cf0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x2b) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if ((lVar4 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        lVar7 = lVar5;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar8 = (double)FUN_143411a90(lVar7);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(int *)(param_1 + 0x3c) - 1;
        lVar7 = lVar5;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar9 = (double)FUN_143411a90(lVar7);
        if (*(int *)(param_1 + 0x38) < 3) {
          fVar11 = 0.0;
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x30);
          uVar6 = *(int *)(param_1 + 0x3c) - 2;
          if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                             (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
            lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
          }
          dVar10 = (double)FUN_143411a90(lVar5);
          fVar11 = (float)dVar10;
        }
        iVar3 = FUN_1433a5210(lVar4 + 0x68,(float)dVar8 * 20.0,(float)dVar9 * 20.0,fVar11 * 20.0);
        pbVar2 = *(byte **)(param_1 + 8);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 3;
        *(double *)(pbVar2 + 8) = (double)iVar3;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143476ed0 FUN_143476ed0 body=201 status=ok
// SIG undefined FUN_143476ed0(void)

void FUN_143476ed0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined3 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined3 local_res8;
  undefined1 uStackX_b;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 0x2b) {
      lVar6 = 0;
      lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = lVar6;
      }
      if ((lVar5 != 0) && (0 < *(int *)(param_1 + 0x38))) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        uVar3 = FUN_143411f00(lVar6);
        _local_res8 = CONCAT13(0xff,uVar3);
        FUN_1433a5190(lVar5 + 0x68,&local_res8);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143476fa0 FUN_143476fa0 body=400 status=ok
// SIG undefined FUN_143476fa0(void)

void FUN_143476fa0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x2b) {
      lVar7 = 0;
      lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = lVar7;
      }
      if ((lVar8 != 0) && (2 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar4 = *(uint *)(param_1 + 0x3c);
        lVar9 = lVar7;
        if (uVar4 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar4 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar4 >> 5) * 8);
        }
        uVar4 = FUN_143411f00(lVar9);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(int *)(param_1 + 0x3c) - 1;
        lVar9 = lVar7;
        if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
        }
        uVar5 = FUN_143411f00(lVar9,lVar1);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        uVar2 = FUN_143411fd0(lVar7,lVar1);
        if (uVar5 <= uVar4) {
          uVar5 = uVar4 + 1;
        }
        FUN_1433a5010(lVar8 + 0x68,uVar4,uVar5,uVar2);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","TextSnapshot"
               );
  return;
}



// FUNCTION 143477140 FUN_143477140 body=123 status=ok
// SIG undefined FUN_143477140(void)

undefined8 * FUN_143477140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 1434771d0 FUN_1434771d0 body=782 status=ok
// SIG undefined FUN_1434771d0(void)

longlong * FUN_1434771d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[0xd] = 0;
    puVar2[4] = &PTR_LAB_145b0aef8;
    lVar3 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xd0,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = FUN_14341b750(param_2,1);
    FUN_143495d70(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,6);
    *puVar4 = &PTR_LAB_145b10240;
    puVar4[4] = &PTR_LAB_145b10288;
    puVar4[0x12] = &PTR_LAB_145b10330;
    FUN_143422ee0(puVar4 + 0x12,puVar4,&local_58,&PTR_s_findText_145b078c0,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar6 = puVar4;
  }
  local_res8 = puVar6;
  FUN_1434a4b90(param_2,0x2b,&local_res8);
  local_40[0] = *param_1;
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x290,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) - 1;
    FUN_1434a2b80(puVar6);
  }
  return param_1;
}



// FUNCTION 1434774f0 FUN_1434774f0 body=3122 status=ok
// SIG undefined FUN_1434774f0(void)

undefined8 * FUN_1434774f0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_58 [8];
  undefined1 local_50;
  byte local_38 [8];
  longlong local_30;
  
  FUN_143414770();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ae70;
  local_res8[0] = 6;
  param_1[4] = &PTR_LAB_145b10338;
  local_58[0] = 2;
  local_50 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "avHardwareDisable",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasAccessibility",0x10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasAudio",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasAudioEncoder",0xf);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasEmbeddedVideo",0x10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasIME",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasMP3",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasPrinting",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasScreenBroadcast",0x12);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasScreenPlayback",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasStreamingAudio",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasStreamingVideo",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hasVideoEncoder",0xf);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "isDebugger",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "localFileReadDisable",0x14);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                        &DAT_145b12a48,2);
  local_38[0] = 5;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  local_30 = lVar2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "language",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                        "Scaleform Windows",0x11);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  local_38[0] = 5;
  local_30 = lVar2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "manufacturer",0xc);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),"Windows",7)
  ;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  local_38[0] = 5;
  local_30 = lVar2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b12a70,2);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  local_38[0] = 4;
  local_30 = CONCAT44(local_30._4_4_,1);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "pixelAspectRatio",0x10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),"External",8
                       );
  local_38[0] = 5;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  local_30 = lVar2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "playerType",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),"color",5);
  local_38[0] = 5;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  local_30 = lVar2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "screenColor",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  local_38[0] = 4;
  local_30 = CONCAT44(local_30._4_4_,0x48);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "screenDPI",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                        "WIN 8,0,0,0",0xb);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  local_38[0] = 5;
  local_30 = lVar2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "version",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "windowlessDisable",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_58,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "screenResolutionX",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "screenResolutionY",0x11);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "serverString",0xc);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  return param_1;
}



// FUNCTION 143478130 FUN_143478130 body=610 status=ok
// SIG undefined FUN_143478130(void)

undefined8 FUN_143478130(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  char *_Str1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_res10;
  byte local_78 [8];
  longlong local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*(byte *)(param_2 + 0xf0) < 7) {
    cVar2 = FUN_14349e690(param_2 + 0xe8,param_3,"screenResolutionX");
    if (cVar2 == '\0') {
      cVar2 = FUN_14349e690(param_2 + 0xe8,param_3,"screenResolutionY");
      if (cVar2 == '\0') {
        cVar2 = FUN_14349e690(param_2 + 0xe8,param_3,"serverString");
        if (cVar2 != '\0') goto LAB_143478272;
        goto LAB_14347831b;
      }
      goto LAB_143478209;
    }
LAB_143478180:
    local_44 = 1;
    local_58 = 0;
    local_50 = 0;
    local_38 = 0;
    local_40 = 0;
    local_30 = 0;
    local_48 = 1;
    local_28 = 0x3f800000;
    local_2c = 0x3f800000;
    plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
    (**(code **)(*plVar5 + 0x68))(plVar5,&local_58);
    uVar4 = (undefined4)local_58;
  }
  else {
    _Str1 = *(char **)*param_3;
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"screenResolutionX");
    if (iVar3 == 0) goto LAB_143478180;
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"screenResolutionY");
    if (iVar3 != 0) {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"serverString");
      if (iVar3 == 0) {
LAB_143478272:
        plVar5 = (longlong *)FUN_143482e20(&local_res10,param_2);
        local_78[0] = 5;
        local_70 = *plVar5;
        *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
        FUN_143411240(param_4,local_78);
        if (4 < local_78[0]) {
          FUN_143411150(local_78);
        }
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return 1;
        }
        FUN_14335f920();
        return 1;
      }
LAB_14347831b:
      if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') ||
         (iVar3 = _guard_xfg_dispatch_icall_nop(*(char **)*param_3,"numControllers"), iVar3 != 0)) {
        uVar6 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
        return uVar6;
      }
      local_78[0] = 4;
      uVar4 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10) + 0x170))
                        ();
      goto LAB_1434781d1;
    }
LAB_143478209:
    local_44 = 1;
    local_58 = 0;
    local_50 = 0;
    local_38 = 0;
    local_40 = 0;
    local_30 = 0;
    local_48 = 1;
    local_28 = 0x3f800000;
    local_2c = 0x3f800000;
    plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
    (**(code **)(*plVar5 + 0x68))(plVar5,&local_58);
    uVar4 = local_58._4_4_;
  }
  local_78[0] = 4;
LAB_1434781d1:
  local_70 = CONCAT44(local_70._4_4_,uVar4);
  FUN_143411240(param_4,local_78);
  if (4 < local_78[0]) {
    FUN_143411150(local_78);
  }
  return 1;
}



// FUNCTION 1434783a0 FUN_1434783a0 body=770 status=ok
// SIG undefined FUN_1434783a0(void)

longlong * FUN_1434783a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x70)
  ;
  puVar4 = (undefined8 *)0x0;
  puVar3 = puVar4;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_1434774f0(lVar2,&local_58);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar3 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,1);
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      FUN_143415510(puVar3 + 4,&local_58,
                    *(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,local_48,
                    &local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *(undefined1 *)(puVar3 + 0x10) = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *puVar3 = &PTR_LAB_145b0b588;
    puVar3[4] = &PTR_LAB_145b0b5d0;
    puVar3[0xd] = &PTR_LAB_145b0b678;
    FUN_1434230f0(puVar3 + 0xd,puVar3,&local_58,param_1);
    local_res10[0] = 1;
    *puVar3 = &PTR_LAB_145b0b588;
    puVar3[4] = &PTR_LAB_145b0b5d0;
    puVar3[0xd] = &PTR_LAB_145b0b678;
    FUN_143422ee0(puVar3 + 0xd,puVar3,&local_58,&PTR_s_addProperty_145b07f40,local_res10);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
    puVar4 = puVar3;
  }
  local_res8 = puVar4;
  FUN_1434a4b90(param_2,0x11,&local_res8);
  local_40[0] = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar5 = (longlong *)(*(longlong *)(param_2 + 0x40) + 0x20);
  (**(code **)(*plVar5 + 0x50))
            (plVar5,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1c0,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar4 != (undefined8 *)0x0) && ((*(uint *)(puVar4 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar4 + 3) = *(uint *)(puVar4 + 3) - 1;
    FUN_1434a2b80(puVar4);
  }
  return param_1;
}



// FUNCTION 1434786b0 FUN_1434786b0 body=57 status=ok
// SIG undefined FUN_1434786b0(void)

void FUN_1434786b0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434786f0 Finalize_GC body=42 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::BitmapFilterObject::Finalize_GC(longlong param_1)

{
  FUN_143416210();
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 143478720 FUN_143478720 body=616 status=ok
// SIG undefined FUN_143478720(void)

/* WARNING: Removing unreachable block (ram,0x000143478752) */

undefined8 * FUN_143478720(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  undefined8 *puVar3;
  
  FUN_1434148b0();
  puVar3 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)0x0;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  param_1[0xd] = 0;
  if (param_3 == 0) {
    local_24[0] = 2;
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_24)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_144f70a50;
      *(undefined4 *)(puVar2 + 1) = 1;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 1;
      *(undefined4 *)(puVar2 + 4) = 0x42c80000;
      *(undefined8 *)((longlong)puVar2 + 0x24) = 0x42c80000;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
      *(undefined4 *)(puVar2 + 6) = 0x3f800000;
      puVar2[8] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x35) = 0xff0000;
      *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x39) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x3b) = 0;
      *(uint *)(puVar2 + 3) = *(uint *)(puVar2 + 3) & 0xfffffff8;
      puVar2[9] = 0;
      *puVar2 = &PTR_FUN_145af82c0;
      *(undefined4 *)(puVar2 + 4) = 0x42a00000;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0x42a00000;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 1;
      puVar3 = puVar2;
    }
    if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
    }
    param_1[0xd] = puVar3;
    return param_1;
  }
  if (param_3 == 1) {
    local_28 = 2;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_28);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143496f80(lVar1,0x3f490fdb,0x40800000,0x40800000,0x40800000,1);
    }
  }
  else if (param_3 == 2) {
    local_res20[0] = 2;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res20);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143496ae0(lVar1,0x40c00000,0x40c00000,1);
    }
  }
  else {
    puVar2 = puVar3;
    if (param_3 == 3) {
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res8);
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)FUN_143496140(lVar1,0x40800000,0x40800000,1);
      }
    }
    else {
      if (param_3 != 8) {
        return param_1;
      }
      local_res18[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x68,local_res18);
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)FUN_1432d0910(lVar1);
      }
    }
  }
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = puVar2;
  return param_1;
}



// FUNCTION 143478990 FUN_143478990 body=183 status=ok
// SIG undefined FUN_143478990(void)

longlong FUN_143478990(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[2];
  if (iVar1 == 0) {
    lVar3 = 0x278;
  }
  else if (iVar1 == 1) {
    lVar3 = 0x268;
  }
  else if (iVar1 == 2) {
    lVar3 = 0x270;
  }
  else if (iVar1 == 3) {
    lVar3 = 0x280;
  }
  else {
    if (iVar1 != 8) {
      return 0;
    }
    lVar3 = 0x288;
  }
  lVar3 = FUN_14341a5c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x58),
                        lVar3 + *(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18),0,
                        0xffffffff);
  if (lVar3 != 0) {
    uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
    if (*(RefCountImpl **)(lVar3 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x68));
    }
    *(undefined8 *)(lVar3 + 0x68) = uVar2;
  }
  return lVar3;
}



// FUNCTION 143478a50 FUN_143478a50 body=55 status=ok
// SIG undefined FUN_143478a50(void)

undefined8 * FUN_143478a50(undefined8 *param_1)

{
  FUN_143494b30();
  *param_1 = &PTR_LAB_145b104d0;
  param_1[4] = &PTR_LAB_145b10518;
  param_1[0xe] = &PTR_LAB_145b105c0;
  return param_1;
}



// FUNCTION 143478a90 FUN_143478a90 body=123 status=ok
// SIG undefined FUN_143478a90(void)

undefined8 * FUN_143478a90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143478b20 FUN_143478b20 body=743 status=ok
// SIG undefined FUN_143478b20(void)

longlong * FUN_143478b20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar7 = (undefined8 *)0x0;
  puVar4 = puVar7;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[0xd] = 0;
    puVar2[4] = &PTR_LAB_145b0aef8;
    lVar3 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = FUN_14341b750(param_2,1);
    FUN_143494b30(puVar4,&local_58,uVar5,param_1);
    *puVar4 = &PTR_LAB_145b104d0;
    puVar4[4] = &PTR_LAB_145b10518;
    puVar4[0xe] = &PTR_LAB_145b105c0;
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar7 = puVar4;
  }
  local_res8 = puVar7;
  FUN_1434a4b90(param_2,0x25,&local_res8);
  local_40[0] = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x58) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x260,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar7 != (undefined8 *)0x0) && ((*(uint *)(puVar7 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar7 + 3) = *(uint *)(puVar7 + 3) - 1;
    FUN_1434a2b80(puVar7);
  }
  return param_1;
}



// FUNCTION 143478e10 FUN_143478e10 body=57 status=ok
// SIG undefined FUN_143478e10(void)

void FUN_143478e10(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143478e50 FUN_143478e50 body=195 status=ok
// SIG undefined FUN_143478e50(void)

/* WARNING: Removing unreachable block (ram,0x000143478e81) */

undefined8 * FUN_143478e50(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  FUN_1434148b0();
  uVar2 = 0;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  param_1[0xd] = 0;
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res8);
  if (lVar1 != 0) {
    uVar2 = FUN_143496f80(lVar1,0x3f490fdb,0x40800000,0x40800000,0x40800000,1);
  }
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = uVar2;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b105c8;
  return param_1;
}



// FUNCTION 143478f20 FUN_143478f20 body=893 status=ok
// SIG undefined FUN_143478f20(void)

undefined8
FUN_143478f20(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *_Str1;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  lVar4 = 0;
  _Str1 = *(char **)*param_3;
  lVar9 = lVar4;
  while (lVar10 = lVar9 + 1, lVar7 = lVar4, _Str1[lVar9] == "alpha"[lVar9]) {
    lVar9 = lVar10;
    if (lVar10 == 6) {
      dVar11 = (double)FUN_143411a90(param_4);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(char *)(lVar4 + 0x1f) = (char)(longlong)((float)dVar11 * 255.0);
      return 1;
    }
  }
  while (lVar10 = lVar7 + 1, lVar9 = lVar4, _Str1[lVar7] == "angle"[lVar7]) {
    lVar7 = lVar10;
    if (lVar10 == 6) {
      FUN_143411e30(param_4,param_2);
      FUN_1434a4210(param_1 + -0x20);
      return 1;
    }
  }
  while (lVar10 = lVar9 + 1, lVar7 = lVar4, _Str1[lVar9] == (&DAT_145b09590)[lVar9]) {
    lVar9 = lVar10;
    if (lVar10 == 6) {
      dVar11 = (double)FUN_143411a90(param_4,param_2);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar4 + 8) = (float)dVar11 * 20.0;
      return 1;
    }
  }
  while (lVar10 = lVar7 + 1, lVar9 = lVar4, _Str1[lVar7] == "blurY"[lVar7]) {
    lVar7 = lVar10;
    if (lVar10 == 6) {
      dVar11 = (double)FUN_143411a90(param_4,param_2);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar4 + 0xc) = (float)dVar11 * 20.0;
      return 1;
    }
  }
  while (lVar7 = lVar9 + 1, _Str1[lVar9] == "color"[lVar9]) {
    lVar9 = lVar7;
    if (lVar7 == 6) {
      uVar2 = FUN_143411f00(param_4,param_2);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(undefined4 *)(lVar4 + 0x1c) = uVar2;
      *(undefined1 *)(lVar4 + 0x1f) = *(undefined1 *)(lVar4 + 0x1f);
      return 1;
    }
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"distance");
  if (iVar3 == 0) {
    FUN_143411e30(param_4,param_2);
    FUN_1434a46e0(param_1 + -0x20);
    return 1;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"hideObject");
  lVar9 = lVar4;
  if (iVar3 == 0) {
    cVar1 = FUN_143411fd0(param_4,param_2);
    if (cVar1 != '\0') {
      puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
      *puVar5 = *puVar5 | 0x40;
      return 1;
    }
    puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
    *puVar5 = *puVar5 & 0xffffffbf;
    return 1;
  }
  while (lVar7 = lVar9 + 1, _Str1[lVar9] == "inner"[lVar9]) {
    lVar9 = lVar7;
    if (lVar7 == 6) {
      cVar1 = FUN_143411fd0(param_4,param_2);
      if (cVar1 != '\0') {
        puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
        *puVar5 = *puVar5 | 0x20;
        return 1;
      }
      puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
      *puVar5 = *puVar5 & 0xffffffdf;
      return 1;
    }
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"knockout");
  if (iVar3 != 0) {
    do {
      lVar9 = lVar4 + 1;
      if (_Str1[lVar4] != "quality"[lVar4]) {
        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"strength");
        if (iVar3 == 0) {
          dVar11 = (double)FUN_143411a90(param_4);
          lVar4 = FUN_1434a76b0(param_1 + -0x20);
          *(float *)(lVar4 + 0x18) = (float)dVar11;
          return 1;
        }
        uVar6 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
        return uVar6;
      }
      lVar4 = lVar9;
    } while (lVar9 != 8);
    dVar11 = (double)FUN_143411a90(param_4,param_2);
    uVar8 = 0xf;
    if ((uint)(longlong)dVar11 < 0xf) {
      uVar8 = (uint)(longlong)dVar11;
    }
    lVar4 = FUN_1434a76b0(param_1 + -0x20);
    *(uint *)(lVar4 + 4) = uVar8;
    return 1;
  }
  cVar1 = FUN_143411fd0(param_4,param_2);
  if (cVar1 != '\0') {
    puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
    *puVar5 = *puVar5 | 0x10;
    return 1;
  }
  puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
  *puVar5 = *puVar5 & 0xffffffef;
  return 1;
}



// FUNCTION 1434792b0 FUN_1434792b0 body=863 status=ok
// SIG undefined FUN_1434792b0(void)

undefined8 FUN_1434792b0(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  lVar2 = 0;
  _Str1 = *(char **)*param_3;
  lVar7 = lVar2;
  while (lVar8 = lVar7 + 1, lVar5 = lVar2, _Str1[lVar7] == "alpha"[lVar7]) {
    lVar7 = lVar8;
    if (lVar8 == 6) {
      lVar2 = FUN_1434a62d0(param_1 + -4);
      if (*(byte *)(lVar2 + 0x1f) == 0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (float)*(byte *)(lVar2 + 0x1f) / 255.0;
      }
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *(double *)(param_4 + 8) = (double)fVar9;
      *param_4 = 3;
      return 1;
    }
  }
  while (lVar8 = lVar5 + 1, lVar7 = lVar2, _Str1[lVar5] == "angle"[lVar5]) {
    lVar5 = lVar8;
    if (lVar8 == 6) {
      lVar2 = param_1[9];
      if ((lVar2 == 0) || (5 < *(uint *)(lVar2 + 0x10))) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(lVar2 + 0x4c);
      }
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 3;
      *(double *)(param_4 + 8) = (double)fVar9;
      return 1;
    }
  }
  while (lVar8 = lVar7 + 1, lVar5 = lVar2, _Str1[lVar7] == (&DAT_145b09590)[lVar7]) {
    lVar7 = lVar8;
    if (lVar8 == 6) {
      lVar2 = FUN_1434a62d0(param_1 + -4);
      fVar9 = *(float *)(lVar2 + 8);
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 3;
      *(double *)(param_4 + 8) = (double)(fVar9 * 0.05);
      return 1;
    }
  }
  while (lVar8 = lVar5 + 1, lVar7 = lVar2, _Str1[lVar5] == "blurY"[lVar5]) {
    lVar5 = lVar8;
    if (lVar8 == 6) {
      lVar2 = FUN_1434a62d0(param_1 + -4);
      FUN_1434a4b40(param_4,(double)(*(float *)(lVar2 + 0xc) * 0.05));
      return 1;
    }
  }
  while (lVar5 = lVar7 + 1, _Str1[lVar7] == "color"[lVar7]) {
    lVar7 = lVar5;
    if (lVar5 == 6) {
      lVar2 = FUN_1434a62d0(param_1 + -4);
      FUN_1434a47f0(param_4,*(uint *)(lVar2 + 0x1c) & 0xffffff);
      return 1;
    }
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"distance");
  if (iVar1 == 0) {
    lVar2 = param_1[9];
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) < 6)) {
      FUN_1434a4b40(param_4,(double)*(float *)(lVar2 + 0x48));
      return 1;
    }
    FUN_1434a4b40(param_4,0);
    return 1;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"hideObject");
  lVar7 = lVar2;
  if (iVar1 == 0) {
    puVar3 = (uint *)FUN_1434a62d0(param_1 + -4);
    bVar6 = (byte)(*puVar3 >> 6);
  }
  else {
    do {
      lVar5 = lVar7 + 1;
      if (_Str1[lVar7] != "inner"[lVar7]) {
        iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"knockout");
        if (iVar1 != 0) {
          do {
            lVar7 = lVar2 + 1;
            if (_Str1[lVar2] != "quality"[lVar2]) {
              iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"strength");
              if (iVar1 == 0) {
                lVar2 = FUN_1434a62d0(param_1 + -4);
                FUN_1434a4b40(param_4,(double)*(float *)(lVar2 + 0x18));
                return 1;
              }
              uVar4 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
              return uVar4;
            }
            lVar2 = lVar7;
          } while (lVar7 != 8);
          lVar2 = FUN_1434a62d0(param_1 + -4);
          FUN_1434a47f0(param_4,*(undefined4 *)(lVar2 + 4));
          return 1;
        }
        puVar3 = (uint *)FUN_1434a62d0(param_1 + -4);
        bVar6 = (byte)(*puVar3 >> 4);
        goto LAB_143479507;
      }
      lVar7 = lVar5;
    } while (lVar5 != 6);
    puVar3 = (uint *)FUN_1434a62d0(param_1 + -4);
    bVar6 = (byte)(*puVar3 >> 5);
  }
LAB_143479507:
  FUN_143411150(param_4);
  *param_4 = 2;
  param_4[8] = bVar6 & 1;
  return 1;
}



// FUNCTION 143479620 FUN_143479620 body=103 status=ok
// SIG undefined FUN_143479620(void)

undefined8 * FUN_143479620(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_1434950c0();
  local_res8[0] = 0;
  *param_1 = &PTR_LAB_145b10670;
  param_1[4] = &PTR_LAB_145b106b8;
  param_1[0xe] = &PTR_LAB_145b10760;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_clone_145b08120,local_res8);
  return param_1;
}



// FUNCTION 143479690 FUN_143479690 body=283 status=ok
// SIG undefined FUN_143479690(void)

void FUN_143479690(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  longlong lVar5;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x26)) {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x58),
                            *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x268,0,0xffffffff);
      plVar1 = *(longlong **)(lVar5 + 0x68);
      uVar4 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,lVar5);
      this = (RefCountImpl *)(**(code **)(*plVar1 + 8))(plVar1,uVar4);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (*(RefCountImpl **)(lVar3 + 0x68) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x68));
      }
      *(RefCountImpl **)(lVar3 + 0x68) = this;
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                "DropShadowFilter");
  return;
}



// FUNCTION 1434797c0 FUN_1434797c0 body=126 status=ok
// SIG undefined FUN_1434797c0(void)

undefined8 * FUN_1434797c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143479850;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b10768;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143479850 FUN_143479850 body=2381 status=ok
// SIG undefined FUN_143479850(void)

void FUN_143479850(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_48 [48];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x26)) {
    plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar10 + 0x50))(plVar10,0x70);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = FUN_143478e50(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar9 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 4) = 1;
  FUN_1434a46e0(lVar5);
  FUN_1434a4210(lVar5);
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 0x1c) = 0;
  *(undefined1 *)(lVar6 + 0x1f) = *(undefined1 *)(lVar6 + 0x1f);
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined1 *)(lVar6 + 0x1f) = 0xff;
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 8) = 0x42a00000;
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 0xc) = 0x42a00000;
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 0x18) = 0x3f800000;
  puVar7 = (uint *)FUN_1434a76b0(lVar5);
  *puVar7 = *puVar7 & 0xffffffef;
  puVar7 = (uint *)FUN_1434a76b0(lVar5);
  *puVar7 = *puVar7 & 0xffffffbf;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar11 = *(uint *)(param_1 + 0x3c);
    lVar12 = lVar9;
    if (uVar11 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar12 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
    }
    FUN_143411e30(lVar12);
    FUN_1434a46e0(lVar5);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar11 = *(int *)(param_1 + 0x3c) - 1;
      lVar12 = lVar9;
      if (uVar11 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        lVar12 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
      }
      FUN_143411e30(lVar12);
      FUN_1434a4210(lVar5);
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar6 = *(longlong *)(param_1 + 0x30);
        uVar11 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar11 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
        }
        uVar4 = FUN_143411f00(lVar9);
        lVar6 = FUN_1434a76b0(lVar5);
        *(undefined4 *)(lVar6 + 0x1c) = uVar4;
        *(undefined1 *)(lVar6 + 0x1f) = *(undefined1 *)(lVar6 + 0x1f);
        if (3 < *(int *)(param_1 + 0x38)) {
          uVar8 = FUN_1434141c0(param_1,3);
          dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
          lVar6 = FUN_1434a76b0(lVar5);
          *(char *)(lVar6 + 0x1f) = (char)(longlong)((float)dVar13 * 255.0);
          if (4 < *(int *)(param_1 + 0x38)) {
            uVar8 = FUN_1434141c0(param_1,4);
            dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
            lVar6 = FUN_1434a76b0(lVar5);
            *(float *)(lVar6 + 8) = (float)dVar13 * 20.0;
            if (5 < *(int *)(param_1 + 0x38)) {
              uVar8 = FUN_1434141c0(param_1,5);
              dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
              lVar6 = FUN_1434a76b0(lVar5);
              *(float *)(lVar6 + 0xc) = (float)dVar13 * 20.0;
              if (6 < *(int *)(param_1 + 0x38)) {
                uVar8 = FUN_1434141c0(param_1,6);
                dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
                lVar6 = FUN_1434a76b0(lVar5);
                *(float *)(lVar6 + 0x18) = (float)dVar13;
                if (7 < *(int *)(param_1 + 0x38)) {
                  uVar8 = FUN_1434141c0(param_1,7);
                  dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
                  uVar11 = 0xf;
                  if ((uint)(longlong)dVar13 < 0xf) {
                    uVar11 = (uint)(longlong)dVar13;
                  }
                  lVar6 = FUN_1434a76b0(lVar5);
                  *(uint *)(lVar6 + 4) = uVar11;
                  if (8 < *(int *)(param_1 + 0x38)) {
                    uVar8 = FUN_1434141c0(param_1,8);
                    cVar2 = FUN_143411fd0(uVar8,*(undefined8 *)(param_1 + 0x30));
                    if (cVar2 == '\0') {
                      puVar7 = (uint *)FUN_1434a76b0(lVar5);
                      *puVar7 = *puVar7 & 0xffffffdf;
                    }
                    else {
                      puVar7 = (uint *)FUN_1434a76b0(lVar5);
                      *puVar7 = *puVar7 | 0x20;
                    }
                    if (9 < *(int *)(param_1 + 0x38)) {
                      uVar8 = FUN_1434141c0(param_1,9);
                      cVar2 = FUN_143411fd0(uVar8,*(undefined8 *)(param_1 + 0x30));
                      if (cVar2 == '\0') {
                        puVar7 = (uint *)FUN_1434a76b0(lVar5);
                        *puVar7 = *puVar7 & 0xffffffef;
                      }
                      else {
                        puVar7 = (uint *)FUN_1434a76b0(lVar5);
                        *puVar7 = *puVar7 | 0x10;
                      }
                      if (10 < *(int *)(param_1 + 0x38)) {
                        uVar8 = FUN_1434141c0(param_1,10);
                        cVar2 = FUN_143411fd0(uVar8,*(undefined8 *)(param_1 + 0x30));
                        if (cVar2 == '\0') {
                          puVar7 = (uint *)FUN_1434a76b0(lVar5);
                          *puVar7 = *puVar7 & 0xffffffbf;
                        }
                        else {
                          puVar7 = (uint *)FUN_1434a76b0(lVar5);
                          *puVar7 = *puVar7 | 0x40;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "distance",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "angle",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "color",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "alpha",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09590,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "blurY",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "strength",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "knockout",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "hideObject",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "inner",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar10 + 0x28) + 0x18) + 0x618),
                              "quality",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar10,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return;
}



// FUNCTION 14347a1b0 FUN_14347a1b0 body=60 status=ok
// SIG undefined FUN_14347a1b0(void)

void FUN_14347a1b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_143478e50(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14347a200 FUN_14347a200 body=1290 status=ok
// SIG undefined FUN_14347a200(void)

longlong * FUN_14347a200(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_res8 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x260);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  lVar2 = FUN_14341c340(param_2,&local_res8);
  if (lVar2 == 0) {
    FUN_143478b20(&local_58,param_2);
    if (((((byte)local_48 & 2) == 0) && (lVar2 = CONCAT71(uStack_57,local_58), lVar2 != 0)) &&
       ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    if (((((byte)local_48 & 1) == 0) && (local_50 != 0)) &&
       ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_60 = 8;
  local_68 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar2 = puVar3[6];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ae70;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar3[0xd] = FUN_143479850;
    lVar2 = FUN_14341b750(local_68,7);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 &local_58,&local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *puVar3 = &PTR_LAB_145b10768;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,0x25);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b103e0;
    puVar4[4] = &PTR_LAB_145b10428;
    puVar4[0xd] = 0;
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      FUN_143415510(puVar4 + 4,&local_68,
                    *(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,&local_58,
                    &local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar2;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    *puVar4 = &PTR_LAB_145b10670;
    puVar4[4] = &PTR_LAB_145b106b8;
    puVar4[0xe] = &PTR_LAB_145b10760;
    FUN_1434230f0(puVar4 + 0xe,puVar4,&local_68,param_1);
    local_res10[0] = 0;
    *puVar4 = &PTR_LAB_145b10670;
    puVar4[4] = &PTR_LAB_145b106b8;
    puVar4[0xe] = &PTR_LAB_145b10760;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_68,&PTR_s_clone_145b08120,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x26,&local_res8);
  local_50 = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58 = 8;
  local_40 = 0;
  if (local_50 != 0) {
    *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
    *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) & 0x8fffffff;
  }
  local_48 = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(&local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x58) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x268,&local_58,
             &local_res8);
  if (4 < local_58) {
    FUN_143411150(&local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 14347a710 FUN_14347a710 body=57 status=ok
// SIG undefined FUN_14347a710(void)

void FUN_14347a710(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 14347a750 FUN_14347a750 body=179 status=ok
// SIG undefined FUN_14347a750(void)

/* WARNING: Removing unreachable block (ram,0x00014347a781) */

undefined8 * FUN_14347a750(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  FUN_1434148b0();
  uVar2 = 0;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  param_1[0xd] = 0;
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res8);
  if (lVar1 != 0) {
    uVar2 = FUN_143496ae0(lVar1,0x40c00000,0x40c00000,1);
  }
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = uVar2;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b107f0;
  return param_1;
}



// FUNCTION 14347a810 FUN_14347a810 body=701 status=ok
// SIG undefined FUN_14347a810(void)

undefined8
FUN_14347a810(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *_Str1;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  lVar4 = 0;
  _Str1 = *(char **)*param_3;
  lVar9 = lVar4;
  while (lVar10 = lVar9 + 1, lVar7 = lVar4, _Str1[lVar9] == "alpha"[lVar9]) {
    lVar9 = lVar10;
    if (lVar10 == 6) {
      dVar11 = (double)FUN_143411a90(param_4);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(char *)(lVar4 + 0x1f) = (char)(longlong)((float)dVar11 * 255.0);
      return 1;
    }
  }
  while (lVar10 = lVar7 + 1, lVar9 = lVar4, _Str1[lVar7] == (&DAT_145b09590)[lVar7]) {
    lVar7 = lVar10;
    if (lVar10 == 6) {
      dVar11 = (double)FUN_143411a90(param_4,param_2);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar4 + 8) = (float)dVar11 * 20.0;
      return 1;
    }
  }
  while (lVar10 = lVar9 + 1, lVar7 = lVar4, _Str1[lVar9] == "blurY"[lVar9]) {
    lVar9 = lVar10;
    if (lVar10 == 6) {
      dVar11 = (double)FUN_143411a90(param_4,param_2);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar4 + 0xc) = (float)dVar11 * 20.0;
      return 1;
    }
  }
  while (lVar10 = lVar7 + 1, lVar9 = lVar4, _Str1[lVar7] == "color"[lVar7]) {
    lVar7 = lVar10;
    if (lVar10 == 6) {
      uVar2 = FUN_143411f00(param_4,param_2);
      lVar4 = FUN_1434a76b0(param_1 + -0x20);
      *(undefined4 *)(lVar4 + 0x1c) = uVar2;
      *(undefined1 *)(lVar4 + 0x1f) = *(undefined1 *)(lVar4 + 0x1f);
      return 1;
    }
  }
  while (lVar7 = lVar9 + 1, _Str1[lVar9] == "inner"[lVar9]) {
    lVar9 = lVar7;
    if (lVar7 == 6) {
      cVar1 = FUN_143411fd0(param_4,param_2);
      if (cVar1 != '\0') {
        puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
        *puVar5 = *puVar5 | 0x20;
        return 1;
      }
      puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
      *puVar5 = *puVar5 & 0xffffffdf;
      return 1;
    }
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"knockout");
  if (iVar3 != 0) {
    do {
      lVar9 = lVar4 + 1;
      if (_Str1[lVar4] != "quality"[lVar4]) {
        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"strength");
        if (iVar3 == 0) {
          dVar11 = (double)FUN_143411a90(param_4);
          lVar4 = FUN_1434a76b0(param_1 + -0x20);
          *(float *)(lVar4 + 0x18) = (float)dVar11;
          return 1;
        }
        uVar6 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
        return uVar6;
      }
      lVar4 = lVar9;
    } while (lVar9 != 8);
    dVar11 = (double)FUN_143411a90(param_4,param_2);
    uVar8 = 0xf;
    if ((uint)(longlong)dVar11 < 0xf) {
      uVar8 = (uint)(longlong)dVar11;
    }
    lVar4 = FUN_1434a76b0(param_1 + -0x20);
    *(uint *)(lVar4 + 4) = uVar8;
    return 1;
  }
  cVar1 = FUN_143411fd0(param_4,param_2);
  if (cVar1 != '\0') {
    puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
    *puVar5 = *puVar5 | 0x10;
    return 1;
  }
  puVar5 = (uint *)FUN_1434a76b0(param_1 + -0x20);
  *puVar5 = *puVar5 & 0xffffffef;
  return 1;
}



// FUNCTION 14347aae0 FUN_14347aae0 body=671 status=ok
// SIG undefined FUN_14347aae0(void)

undefined8 FUN_14347aae0(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  lVar2 = 0;
  _Str1 = *(char **)*param_3;
  lVar7 = lVar2;
  while (lVar8 = lVar7 + 1, lVar5 = lVar2, _Str1[lVar7] == "alpha"[lVar7]) {
    lVar7 = lVar8;
    if (lVar8 == 6) {
      lVar2 = FUN_1434a62d0(param_1 + -4);
      if (*(byte *)(lVar2 + 0x1f) == 0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (float)*(byte *)(lVar2 + 0x1f) / 255.0;
      }
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *(double *)(param_4 + 8) = (double)fVar9;
      *param_4 = 3;
      return 1;
    }
  }
  do {
    lVar8 = lVar5 + 1;
    lVar7 = lVar2;
    if (_Str1[lVar5] != (&DAT_145b09590)[lVar5]) goto LAB_14347abe2;
    lVar5 = lVar8;
  } while (lVar8 != 6);
  lVar2 = FUN_1434a62d0(param_1 + -4);
  fVar9 = *(float *)(lVar2 + 8);
  if (4 < *param_4) {
    FUN_143411150(param_4);
  }
  goto LAB_14347abbe;
LAB_14347ac40:
  while (lVar8 = lVar5 + 1, lVar7 = lVar2, _Str1[lVar5] == "color"[lVar5]) {
    lVar5 = lVar8;
    if (lVar8 == 6) {
      lVar2 = FUN_1434a62d0(param_1 + -4);
      FUN_1434a47f0(param_4,*(uint *)(lVar2 + 0x1c) & 0xffffff);
      return 1;
    }
  }
  do {
    lVar5 = lVar7 + 1;
    if (_Str1[lVar7] != "inner"[lVar7]) {
      iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"knockout");
      if (iVar1 != 0) {
        do {
          lVar7 = lVar2 + 1;
          if (_Str1[lVar2] != "quality"[lVar2]) {
            iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"strength");
            if (iVar1 == 0) {
              lVar2 = FUN_1434a62d0(param_1 + -4);
              FUN_1434a4b40(param_4,(double)*(float *)(lVar2 + 0x18));
              return 1;
            }
            uVar4 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
            return uVar4;
          }
          lVar2 = lVar7;
        } while (lVar7 != 8);
        lVar2 = FUN_1434a62d0(param_1 + -4);
        FUN_1434a47f0(param_4,*(undefined4 *)(lVar2 + 4));
        return 1;
      }
      puVar3 = (uint *)FUN_1434a62d0(param_1 + -4);
      bVar6 = (byte)(*puVar3 >> 4);
      goto LAB_14347aca3;
    }
    lVar7 = lVar5;
  } while (lVar5 != 6);
  puVar3 = (uint *)FUN_1434a62d0(param_1 + -4);
  bVar6 = (byte)(*puVar3 >> 5);
LAB_14347aca3:
  FUN_143411150(param_4);
  *param_4 = 2;
  param_4[8] = bVar6 & 1;
  return 1;
  while (lVar7 = lVar8, lVar8 != 6) {
LAB_14347abe2:
    lVar8 = lVar7 + 1;
    lVar5 = lVar2;
    if (_Str1[lVar7] != "blurY"[lVar7]) goto LAB_14347ac40;
  }
  lVar2 = FUN_1434a62d0(param_1 + -4);
  fVar9 = *(float *)(lVar2 + 0xc);
  if (4 < *param_4) {
    FUN_143411150(param_4);
    *param_4 = 3;
    *(double *)(param_4 + 8) = (double)(fVar9 * 0.05);
    return 1;
  }
LAB_14347abbe:
  *param_4 = 3;
  *(double *)(param_4 + 8) = (double)(fVar9 * 0.05);
  return 1;
}



// FUNCTION 14347ad90 FUN_14347ad90 body=103 status=ok
// SIG undefined FUN_14347ad90(void)

undefined8 * FUN_14347ad90(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495200();
  local_res8[0] = 0;
  *param_1 = &PTR_LAB_145b10898;
  param_1[4] = &PTR_LAB_145b108e0;
  param_1[0xe] = &PTR_LAB_145b10988;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_clone_145b08260,local_res8);
  return param_1;
}



// FUNCTION 14347ae00 FUN_14347ae00 body=283 status=ok
// SIG undefined FUN_14347ae00(void)

void FUN_14347ae00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  longlong lVar5;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x27)) {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x58),
                            *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x270,0,0xffffffff);
      plVar1 = *(longlong **)(lVar5 + 0x68);
      uVar4 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,lVar5);
      this = (RefCountImpl *)(**(code **)(*plVar1 + 8))(plVar1,uVar4);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (*(RefCountImpl **)(lVar3 + 0x68) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x68));
      }
      *(RefCountImpl **)(lVar3 + 0x68) = this;
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","GlowFilter");
  return;
}



// FUNCTION 14347af30 FUN_14347af30 body=126 status=ok
// SIG undefined FUN_14347af30(void)

undefined8 * FUN_14347af30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_14347afc0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b10990;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 14347afc0 FUN_14347afc0 body=1867 status=ok
// SIG undefined FUN_14347afc0(void)

void FUN_14347afc0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_48 [48];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x27)) {
    plVar9 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar9 + 0x50))(plVar9,0x70);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = FUN_14347a750(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar12 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
  FUN_1434a46e0(lVar5,0);
  FUN_1434a4210(lVar5,0);
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 0x1c) = 0xff0000;
  *(undefined1 *)(lVar6 + 0x1f) = *(undefined1 *)(lVar6 + 0x1f);
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined1 *)(lVar6 + 0x1f) = 0xff;
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 8) = 0x42f00000;
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 0xc) = 0x42f00000;
  lVar6 = FUN_1434a76b0(lVar5);
  *(undefined4 *)(lVar6 + 0x18) = 0x40000000;
  puVar7 = (uint *)FUN_1434a76b0(lVar5);
  *puVar7 = *puVar7 & 0xffffffef;
  puVar7 = (uint *)FUN_1434a76b0(lVar5);
  *puVar7 = *puVar7 & 0xffffffbf;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(uint *)(param_1 + 0x3c);
    lVar11 = lVar12;
    if (uVar10 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar11 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
    }
    uVar4 = FUN_143411f00(lVar11);
    lVar6 = FUN_1434a76b0(lVar5);
    *(undefined4 *)(lVar6 + 0x1c) = uVar4;
    *(undefined1 *)(lVar6 + 0x1f) = *(undefined1 *)(lVar6 + 0x1f);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar10 = *(int *)(param_1 + 0x3c) - 1;
      lVar11 = lVar12;
      if (uVar10 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        lVar11 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
      }
      dVar13 = (double)FUN_143411a90(lVar11);
      lVar6 = FUN_1434a76b0(lVar5);
      *(char *)(lVar6 + 0x1f) = (char)(longlong)((float)dVar13 * 255.0);
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar6 = *(longlong *)(param_1 + 0x30);
        uVar10 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar10 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
          lVar12 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
        }
        dVar13 = (double)FUN_143411a90(lVar12);
        lVar6 = FUN_1434a76b0(lVar5);
        *(float *)(lVar6 + 8) = (float)dVar13 * 20.0;
        if (3 < *(int *)(param_1 + 0x38)) {
          uVar8 = FUN_1434141c0(param_1,3);
          dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
          lVar6 = FUN_1434a76b0(lVar5);
          *(float *)(lVar6 + 0xc) = (float)dVar13 * 20.0;
          if (4 < *(int *)(param_1 + 0x38)) {
            uVar8 = FUN_1434141c0(param_1,4);
            dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
            lVar6 = FUN_1434a76b0(lVar5);
            *(float *)(lVar6 + 0x18) = (float)dVar13;
            if (5 < *(int *)(param_1 + 0x38)) {
              uVar8 = FUN_1434141c0(param_1,5);
              dVar13 = (double)FUN_143411a90(uVar8,*(undefined8 *)(param_1 + 0x30));
              uVar10 = 0xf;
              if ((uint)(longlong)dVar13 < 0xf) {
                uVar10 = (uint)(longlong)dVar13;
              }
              lVar6 = FUN_1434a76b0(lVar5);
              *(uint *)(lVar6 + 4) = uVar10;
              if (6 < *(int *)(param_1 + 0x38)) {
                uVar8 = FUN_1434141c0(param_1,6);
                cVar2 = FUN_143411fd0(uVar8,*(undefined8 *)(param_1 + 0x30));
                if (cVar2 == '\0') {
                  puVar7 = (uint *)FUN_1434a76b0(lVar5);
                  *puVar7 = *puVar7 & 0xffffffdf;
                }
                else {
                  puVar7 = (uint *)FUN_1434a76b0(lVar5);
                  *puVar7 = *puVar7 | 0x20;
                }
                if (7 < *(int *)(param_1 + 0x38)) {
                  uVar8 = FUN_1434141c0(param_1,7);
                  cVar2 = FUN_143411fd0(uVar8,*(undefined8 *)(param_1 + 0x30));
                  if (cVar2 == '\0') {
                    puVar7 = (uint *)FUN_1434a76b0(lVar5);
                    *puVar7 = *puVar7 & 0xffffffef;
                  }
                  else {
                    puVar7 = (uint *)FUN_1434a76b0(lVar5);
                    *puVar7 = *puVar7 | 0x10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),"color"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),"alpha"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09590,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),"blurY"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                              "strength",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                              "knockout",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),"inner"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                              "quality",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
            (lVar5 + 0x20,plVar9,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return;
}



// FUNCTION 14347b720 FUN_14347b720 body=60 status=ok
// SIG undefined FUN_14347b720(void)

void FUN_14347b720(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_14347a750(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14347b770 FUN_14347b770 body=1290 status=ok
// SIG undefined FUN_14347b770(void)

longlong * FUN_14347b770(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_res8 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x260);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  lVar2 = FUN_14341c340(param_2,&local_res8);
  if (lVar2 == 0) {
    FUN_143478b20(&local_58,param_2);
    if (((((byte)local_48 & 2) == 0) && (lVar2 = CONCAT71(uStack_57,local_58), lVar2 != 0)) &&
       ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    if (((((byte)local_48 & 1) == 0) && (local_50 != 0)) &&
       ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_60 = 8;
  local_68 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar2 = puVar3[6];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ae70;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar3[0xd] = FUN_14347afc0;
    lVar2 = FUN_14341b750(local_68,7);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 &local_58,&local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *puVar3 = &PTR_LAB_145b10990;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,0x25);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b103e0;
    puVar4[4] = &PTR_LAB_145b10428;
    puVar4[0xd] = 0;
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      FUN_143415510(puVar4 + 4,&local_68,
                    *(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,&local_58,
                    &local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar2;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    *puVar4 = &PTR_LAB_145b10898;
    puVar4[4] = &PTR_LAB_145b108e0;
    puVar4[0xe] = &PTR_LAB_145b10988;
    FUN_1434230f0(puVar4 + 0xe,puVar4,&local_68,param_1);
    local_res10[0] = 0;
    *puVar4 = &PTR_LAB_145b10898;
    puVar4[4] = &PTR_LAB_145b108e0;
    puVar4[0xe] = &PTR_LAB_145b10988;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_68,&PTR_s_clone_145b08260,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x27,&local_res8);
  local_50 = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58 = 8;
  local_40 = 0;
  if (local_50 != 0) {
    *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
    *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) & 0x8fffffff;
  }
  local_48 = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(&local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x58) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x270,&local_58,
             &local_res8);
  if (4 < local_58) {
    FUN_143411150(&local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 14347bc80 FUN_14347bc80 body=57 status=ok
// SIG undefined FUN_14347bc80(void)

void FUN_14347bc80(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 14347bcc0 FUN_14347bcc0 body=47 status=ok
// SIG undefined FUN_14347bcc0(void)

undefined8 * FUN_14347bcc0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143478720(param_1,param_2,0);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10a18;
  return param_1;
}



// FUNCTION 14347bd00 FUN_14347bd00 body=339 status=ok
// SIG undefined FUN_14347bd00(void)

undefined8 FUN_14347bd00(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  lVar6 = 0;
  lVar1 = *(longlong *)*param_3;
  lVar4 = lVar6;
  do {
    lVar7 = lVar4 + 1;
    lVar3 = lVar6;
    if (*(char *)(lVar1 + lVar4) != (&DAT_145b09590)[lVar4]) {
      do {
        lVar4 = lVar3 + 1;
        if (*(char *)(lVar1 + lVar3) != "blurY"[lVar3]) {
          do {
            lVar4 = lVar6 + 1;
            if (*(char *)(lVar1 + lVar6) != "quality"[lVar6]) {
              uVar2 = FUN_143414a10(param_1);
              return uVar2;
            }
            lVar6 = lVar4;
          } while (lVar4 != 8);
          dVar8 = (double)FUN_143411a90(param_4);
          uVar5 = 0xf;
          if ((uint)(int)(short)(int)dVar8 < 0xf) {
            uVar5 = (int)(short)(int)dVar8;
          }
          lVar1 = FUN_1434a76b0(param_1 + -0x20);
          *(uint *)(lVar1 + 4) = uVar5;
          return 1;
        }
        lVar3 = lVar4;
      } while (lVar4 != 6);
      dVar8 = (double)FUN_143411a90(param_4);
      lVar1 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar1 + 0xc) = (float)dVar8 * 20.0;
      return 1;
    }
    lVar4 = lVar7;
  } while (lVar7 != 6);
  dVar8 = (double)FUN_143411a90(param_4);
  lVar1 = FUN_1434a76b0(param_1 + -0x20);
  *(float *)(lVar1 + 8) = (float)dVar8 * 20.0;
  return 1;
}



// FUNCTION 14347be60 FUN_14347be60 body=345 status=ok
// SIG undefined FUN_14347be60(void)

undefined8 FUN_14347be60(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar7 = 0;
  lVar2 = *(longlong *)*param_3;
  lVar5 = lVar7;
  do {
    lVar6 = lVar5 + 1;
    lVar4 = lVar7;
    if (*(char *)(lVar2 + lVar5) != (&DAT_145b09590)[lVar5]) goto LAB_14347bef0;
    lVar5 = lVar6;
  } while (lVar6 != 6);
  lVar2 = FUN_1434a62d0(param_1 + -4);
  fVar8 = *(float *)(lVar2 + 8);
  if (4 < *param_4) {
    FUN_143411150(param_4);
  }
LAB_14347bec0:
  *param_4 = 3;
  *(double *)(param_4 + 8) = (double)(fVar8 * 0.05);
  return 1;
LAB_14347bef0:
  do {
    lVar5 = lVar4 + 1;
    if (*(char *)(lVar2 + lVar4) != "blurY"[lVar4]) {
      do {
        lVar5 = lVar7 + 1;
        if (*(char *)(lVar2 + lVar7) != "quality"[lVar7]) {
                    /* WARNING: Could not recover jumptable at 0x00014347bfb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
          return uVar3;
        }
        lVar7 = lVar5;
      } while (lVar5 != 8);
      lVar2 = FUN_1434a62d0(param_1 + -4);
      uVar1 = *(undefined4 *)(lVar2 + 4);
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 4;
      *(undefined4 *)(param_4 + 8) = uVar1;
      return 1;
    }
    lVar4 = lVar5;
  } while (lVar5 != 6);
  lVar2 = FUN_1434a62d0(param_1 + -4);
  fVar8 = *(float *)(lVar2 + 0xc);
  if (4 < *param_4) {
    FUN_143411150(param_4);
    *param_4 = 3;
    *(double *)(param_4 + 8) = (double)(fVar8 * 0.05);
    return 1;
  }
  goto LAB_14347bec0;
}



// FUNCTION 14347bfc0 FUN_14347bfc0 body=103 status=ok
// SIG undefined FUN_14347bfc0(void)

undefined8 * FUN_14347bfc0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494bf0();
  local_res8[0] = 0;
  *param_1 = &PTR_LAB_145b10ac0;
  param_1[4] = &PTR_LAB_145b10b08;
  param_1[0xe] = &PTR_LAB_145b10bb0;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_clone_145b08770,local_res8);
  return param_1;
}



// FUNCTION 14347c030 FUN_14347c030 body=283 status=ok
// SIG undefined FUN_14347c030(void)

void FUN_14347c030(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  longlong lVar5;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x28)) {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x58),
                            *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x278,0,0xffffffff);
      plVar1 = *(longlong **)(lVar5 + 0x68);
      uVar4 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,lVar5);
      this = (RefCountImpl *)(**(code **)(*plVar1 + 8))(plVar1,uVar4);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (*(RefCountImpl **)(lVar3 + 0x68) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x68));
      }
      *(RefCountImpl **)(lVar3 + 0x68) = this;
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","BlurFilter");
  return;
}



// FUNCTION 14347c160 FUN_14347c160 body=126 status=ok
// SIG undefined FUN_14347c160(void)

undefined8 * FUN_14347c160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_14347c1f0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b10bb8;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 14347c1f0 FUN_14347c1f0 body=955 status=ok
// SIG undefined FUN_14347c1f0(void)

void FUN_14347c1f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_48 [48];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 != 0x28)) {
    plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x50))(plVar7,0x70);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_143478720(puVar3,*(undefined8 *)(param_1 + 0x30),0);
      *puVar3 = &PTR_LAB_145b103e0;
      puVar3[4] = &PTR_LAB_145b10a18;
      puVar5 = puVar3;
    }
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      *(uint *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1U & 0x8fffffff;
    }
  }
  lVar6 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),puVar5);
  lVar4 = FUN_1434a76b0(puVar5);
  *(undefined1 *)(lVar4 + 0x1f) = 0xff;
  lVar4 = FUN_1434a76b0(puVar5);
  *(undefined4 *)(lVar4 + 8) = 0x42a00000;
  lVar4 = FUN_1434a76b0(puVar5);
  *(undefined4 *)(lVar4 + 0xc) = 0x42a00000;
  lVar4 = FUN_1434a76b0(puVar5);
  *(undefined4 *)(lVar4 + 0x18) = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(uint *)(param_1 + 0x3c);
    lVar9 = lVar6;
    if (uVar8 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
    }
    dVar10 = (double)FUN_143411a90(lVar9);
    lVar4 = FUN_1434a76b0(puVar5);
    *(float *)(lVar4 + 8) = (float)dVar10 * 20.0;
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar8 = *(int *)(param_1 + 0x3c) - 1;
      lVar9 = lVar6;
      if (uVar8 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
      }
      dVar10 = (double)FUN_143411a90(lVar9);
      lVar4 = FUN_1434a76b0(puVar5);
      *(float *)(lVar4 + 0xc) = (float)dVar10 * 20.0;
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar8 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
          lVar6 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        dVar10 = (double)FUN_143411a90(lVar6);
        uVar8 = 0xf;
        if ((uint)(longlong)dVar10 < 0xf) {
          uVar8 = (uint)(longlong)dVar10;
        }
        lVar4 = FUN_1434a76b0(puVar5);
        *(uint *)(lVar4 + 4) = uVar8;
      }
    }
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09590,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(puVar5[4] + 0x50))(puVar5 + 4,plVar7,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x618),"blurY"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(puVar5[4] + 0x50))(puVar5 + 4,plVar7,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  local_48[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x618),
                              "quality",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(puVar5[4] + 0x50))(puVar5 + 4,plVar7,&local_res10,local_48,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return;
}



// FUNCTION 14347c5c0 CreateNewObject body=105 status=ok
// SIG undefined CreateNewObject(void)

undefined8 *
Scaleform::GFx::AS2::BlurFilterCtorFunction::CreateNewObject(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_143478720(puVar2,param_2,0);
    *puVar2 = &PTR_LAB_145b103e0;
    puVar2[4] = &PTR_LAB_145b10a18;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14347c630 FUN_14347c630 body=1290 status=ok
// SIG undefined FUN_14347c630(void)

longlong * FUN_14347c630(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_res8 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x260);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  lVar2 = FUN_14341c340(param_2,&local_res8);
  if (lVar2 == 0) {
    FUN_143478b20(&local_58,param_2);
    if (((((byte)local_48 & 2) == 0) && (lVar2 = CONCAT71(uStack_57,local_58), lVar2 != 0)) &&
       ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    if (((((byte)local_48 & 1) == 0) && (local_50 != 0)) &&
       ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_60 = 8;
  local_68 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar2 = puVar3[6];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ae70;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar3[0xd] = FUN_14347c1f0;
    lVar2 = FUN_14341b750(local_68,7);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 &local_58,&local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *puVar3 = &PTR_LAB_145b10bb8;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,0x25);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b103e0;
    puVar4[4] = &PTR_LAB_145b10428;
    puVar4[0xd] = 0;
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      FUN_143415510(puVar4 + 4,&local_68,
                    *(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,&local_58,
                    &local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar2;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    *puVar4 = &PTR_LAB_145b10ac0;
    puVar4[4] = &PTR_LAB_145b10b08;
    puVar4[0xe] = &PTR_LAB_145b10bb0;
    FUN_1434230f0(puVar4 + 0xe,puVar4,&local_68,param_1);
    local_res10[0] = 0;
    *puVar4 = &PTR_LAB_145b10ac0;
    puVar4[4] = &PTR_LAB_145b10b08;
    puVar4[0xe] = &PTR_LAB_145b10bb0;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_68,&PTR_s_clone_145b08770,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x28,&local_res8);
  local_50 = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58 = 8;
  local_40 = 0;
  if (local_50 != 0) {
    *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
    *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) & 0x8fffffff;
  }
  local_48 = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(&local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x58) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x278,&local_58,
             &local_res8);
  if (4 < local_58) {
    FUN_143411150(&local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 14347cb40 FUN_14347cb40 body=57 status=ok
// SIG undefined FUN_14347cb40(void)

void FUN_14347cb40(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 14347cb80 FUN_14347cb80 body=179 status=ok
// SIG undefined FUN_14347cb80(void)

/* WARNING: Removing unreachable block (ram,0x00014347cbb1) */

undefined8 * FUN_14347cb80(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  FUN_1434148b0();
  uVar2 = 0;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  param_1[0xd] = 0;
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res8);
  if (lVar1 != 0) {
    uVar2 = FUN_143496140(lVar1,0x40800000,0x40800000,1);
  }
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = uVar2;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10c40;
  return param_1;
}



// FUNCTION 14347cc40 FUN_14347cc40 body=1007 status=ok
// SIG undefined FUN_14347cc40(void)

undefined8
FUN_14347cc40(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  char *_Str1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  longlong *local_res18;
  ulonglong in_stack_ffffffffffffffc8;
  
  lVar5 = 0;
  _Str1 = *(char **)*param_3;
  lVar9 = lVar5;
  while (lVar11 = lVar9 + 1, lVar8 = lVar5, _Str1[lVar9] == "angle"[lVar9]) {
    lVar9 = lVar11;
    if (lVar11 == 6) {
      FUN_143411e30(param_4);
      FUN_1434a4210(param_1 + -0x20);
      return 1;
    }
  }
  while (lVar11 = lVar8 + 1, lVar9 = lVar5, _Str1[lVar8] == (&DAT_145b09590)[lVar8]) {
    lVar8 = lVar11;
    if (lVar11 == 6) {
      dVar12 = (double)FUN_143411a90(param_4,param_2);
      lVar5 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar5 + 8) = (float)dVar12 * 20.0;
      return 1;
    }
  }
  while (lVar8 = lVar9 + 1, _Str1[lVar9] == "blurY"[lVar9]) {
    lVar9 = lVar8;
    if (lVar8 == 6) {
      dVar12 = (double)FUN_143411a90(param_4,param_2);
      lVar5 = FUN_1434a76b0(param_1 + -0x20);
      *(float *)(lVar5 + 0xc) = (float)dVar12 * 20.0;
      return 1;
    }
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"distance");
  if (iVar3 == 0) {
    FUN_143411e30(param_4,param_2);
    FUN_1434a46e0(param_1 + -0x20);
    return 1;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"highlightAlpha");
  if (iVar3 == 0) {
    dVar12 = (double)FUN_143411a90(param_4,param_2);
    lVar5 = FUN_1434a76b0(param_1 + -0x20);
    *(char *)(lVar5 + 0x1f) = (char)(longlong)((float)dVar12 * 255.0);
    return 1;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"highlightColor");
  if (iVar3 == 0) {
    uVar4 = FUN_143411f00(param_4,param_2);
    lVar5 = FUN_1434a76b0(param_1 + -0x20);
    *(undefined4 *)(lVar5 + 0x1c) = uVar4;
    *(undefined1 *)(lVar5 + 0x1f) = *(undefined1 *)(lVar5 + 0x1f);
    return 1;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"shadowAlpha");
  if (iVar3 == 0) {
    dVar12 = (double)FUN_143411a90(param_4,param_2);
    lVar5 = FUN_1434a76b0(param_1 + -0x20);
    *(char *)(lVar5 + 0x23) = (char)(longlong)((float)dVar12 * 255.0);
    return 1;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"shadowColor");
  if (iVar3 == 0) {
    uVar4 = FUN_143411f00(param_4,param_2);
    lVar5 = FUN_1434a76b0(param_1 + -0x20);
    *(undefined4 *)(lVar5 + 0x20) = uVar4;
    *(undefined1 *)(lVar5 + 0x23) = *(undefined1 *)(lVar5 + 0x23);
    return 1;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"knockout");
  lVar9 = lVar5;
  if (iVar3 == 0) {
    cVar2 = FUN_143411fd0(param_4,param_2);
    if (cVar2 != '\0') {
      puVar6 = (uint *)FUN_1434a76b0(param_1 + -0x20);
      *puVar6 = *puVar6 | 0x10;
      return 1;
    }
    puVar6 = (uint *)FUN_1434a76b0(param_1 + -0x20);
    *puVar6 = *puVar6 & 0xffffffef;
    return 1;
  }
  while (lVar11 = lVar9 + 1, lVar8 = lVar5, _Str1[lVar9] == "quality"[lVar9]) {
    lVar9 = lVar11;
    if (lVar11 == 8) {
      dVar12 = (double)FUN_143411a90(param_4,param_2);
      uVar10 = 0xf;
      if ((uint)(longlong)dVar12 < 0xf) {
        uVar10 = (uint)(longlong)dVar12;
      }
      lVar5 = FUN_1434a76b0(param_1 + -0x20);
      *(uint *)(lVar5 + 4) = uVar10;
      return 1;
    }
  }
  do {
    lVar9 = lVar8 + 1;
    if (_Str1[lVar8] != (&DAT_145af4d3c)[lVar8]) {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"strength");
      if (iVar3 == 0) {
        dVar12 = (double)FUN_143411a90(param_4);
        lVar5 = FUN_1434a76b0(param_1 + -0x20);
        *(float *)(lVar5 + 0x18) = (float)dVar12;
        return 1;
      }
      uVar7 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
      return uVar7;
    }
    lVar8 = lVar9;
  } while (lVar9 != 5);
  FUN_143411540(param_4,&local_res18,param_2,0xffffffff,
                in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  do {
    lVar9 = lVar5 + 1;
    if (*(char *)(*local_res18 + lVar5) != "inner"[lVar5]) {
      puVar6 = (uint *)FUN_1434a76b0(param_1 + -0x20);
      *puVar6 = *puVar6 & 0xffffffdf;
      goto LAB_14347cfad;
    }
    lVar5 = lVar9;
  } while (lVar9 != 6);
  puVar6 = (uint *)FUN_1434a76b0(param_1 + -0x20);
  *puVar6 = *puVar6 | 0x20;
LAB_14347cfad:
  plVar1 = local_res18 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920(local_res18);
  }
  return 1;
}



// FUNCTION 14347d040 FUN_14347d040 body=951 status=ok
// SIG undefined FUN_14347d040(void)

undefined8 FUN_14347d040(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  
  lVar3 = 0;
  pcVar7 = *(char **)*param_3;
  lVar8 = lVar3;
  while (lVar9 = lVar8 + 1, lVar6 = lVar3, pcVar7[lVar8] == "angle"[lVar8]) {
    lVar8 = lVar9;
    if (lVar9 == 6) {
      lVar3 = param_1[9];
      if ((lVar3 == 0) || (5 < *(uint *)(lVar3 + 0x10))) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = *(float *)(lVar3 + 0x4c);
      }
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 4;
      *(int *)(param_4 + 8) = (int)fVar10;
      return 1;
    }
  }
  do {
    lVar9 = lVar6 + 1;
    lVar8 = lVar3;
    if (pcVar7[lVar6] != (&DAT_145b09590)[lVar6]) goto LAB_14347d132;
    lVar6 = lVar9;
  } while (lVar9 != 6);
  lVar3 = FUN_1434a62d0(param_1 + -4);
  fVar10 = *(float *)(lVar3 + 8);
  if (4 < *param_4) {
    FUN_143411150(param_4);
  }
LAB_14347d10e:
  *param_4 = 3;
  *(double *)(param_4 + 8) = (double)(fVar10 * 0.05);
  return 1;
LAB_14347d132:
  do {
    lVar6 = lVar8 + 1;
    if (pcVar7[lVar8] != "blurY"[lVar8]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"distance");
      if (iVar2 == 0) {
        lVar3 = param_1[9];
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) < 6)) {
          FUN_1434a47f0(param_4,(int)*(float *)(lVar3 + 0x48));
          return 1;
        }
        FUN_1434a47f0(param_4,0);
        return 1;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"highlightAlpha");
      if (iVar2 == 0) {
        fVar10 = (float)Scaleform::GFx::AS2::BitmapFilterObject::GetAlpha(param_1 + -4);
      }
      else {
        iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"highlightColor");
        if (iVar2 == 0) {
          lVar3 = FUN_1434a62d0(param_1 + -4);
          FUN_1434a47f0(param_4,*(uint *)(lVar3 + 0x1c) & 0xffffff);
          return 1;
        }
        iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"shadowAlpha");
        if (iVar2 != 0) {
          iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"shadowColor");
          if (iVar2 == 0) {
            lVar3 = FUN_1434a62d0(param_1 + -4);
            FUN_1434a47f0(param_4,*(uint *)(lVar3 + 0x20) & 0xffffff);
            return 1;
          }
          iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"knockout");
          lVar8 = lVar3;
          if (iVar2 != 0) {
            while (lVar6 = lVar8 + 1, pcVar7[lVar8] == "quality"[lVar8]) {
              lVar8 = lVar6;
              if (lVar6 == 8) {
                lVar3 = FUN_1434a62d0(param_1 + -4);
                FUN_1434a47f0(param_4,*(undefined4 *)(lVar3 + 4));
                return 1;
              }
            }
            do {
              lVar8 = lVar3 + 1;
              if (pcVar7[lVar3] != (&DAT_145af4d3c)[lVar3]) {
                iVar2 = _guard_xfg_dispatch_icall_nop(pcVar7,"strength");
                if (iVar2 == 0) {
                  lVar3 = FUN_1434a62d0(param_1 + -4);
                  FUN_1434a4b40(param_4,(double)*(float *)(lVar3 + 0x18));
                  return 1;
                }
                uVar5 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
                return uVar5;
              }
              lVar3 = lVar8;
            } while (lVar8 != 5);
            puVar4 = (uint *)FUN_1434a62d0(param_1 + -4);
            pcVar7 = "inner";
            if ((*puVar4 >> 5 & 1) == 0) {
              pcVar7 = "outer";
            }
            lVar3 = FUN_143360a60(*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                                   0x618),pcVar7);
            *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
            if (4 < *param_4) {
              FUN_143411150(param_4);
            }
            *param_4 = 5;
            *(longlong *)(param_4 + 8) = lVar3;
            iVar2 = *(int *)(lVar3 + 0x18);
            *(int *)(lVar3 + 0x18) = iVar2;
            if (iVar2 == 0) {
              FUN_14335f920(lVar3);
            }
            return 1;
          }
          puVar4 = (uint *)FUN_1434a62d0(param_1 + -4);
          uVar1 = *puVar4;
          FUN_143411150(param_4);
          *param_4 = 2;
          param_4[8] = (byte)(uVar1 >> 4) & 1;
          return 1;
        }
        fVar10 = (float)Scaleform::GFx::AS2::BitmapFilterObject::GetAlpha2(param_1 + -4);
      }
      FUN_1434a4b40(param_4,(double)fVar10);
      return 1;
    }
    lVar8 = lVar6;
  } while (lVar6 != 6);
  lVar3 = FUN_1434a62d0(param_1 + -4);
  fVar10 = *(float *)(lVar3 + 0xc);
  if (4 < *param_4) {
    FUN_143411150(param_4);
    *param_4 = 3;
    *(double *)(param_4 + 8) = (double)(fVar10 * 0.05);
    return 1;
  }
  goto LAB_14347d10e;
}



// FUNCTION 14347d400 FUN_14347d400 body=103 status=ok
// SIG undefined FUN_14347d400(void)

undefined8 * FUN_14347d400(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_1434949e0();
  local_res8[0] = 0;
  *param_1 = &PTR_LAB_145b10ce8;
  param_1[4] = &PTR_LAB_145b10d30;
  param_1[0xe] = &PTR_LAB_145b10dd8;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_clone_145b073f0,local_res8);
  return param_1;
}



// FUNCTION 14347d470 FUN_14347d470 body=241 status=ok
// SIG undefined FUN_14347d470(void)

void FUN_14347d470(longlong param_1)

{
  RefCountImpl *this;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar1 == 0x29)) {
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar2 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar2 + 0x58),
                            *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x280,0,0xffffffff);
      this = *(RefCountImpl **)(lVar3 + 0x68);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (*(RefCountImpl **)(lVar2 + 0x68) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x68));
      }
      *(RefCountImpl **)(lVar2 + 0x68) = this;
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar2);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","BevelFilter")
  ;
  return;
}



// FUNCTION 14347d570 FUN_14347d570 body=126 status=ok
// SIG undefined FUN_14347d570(void)

undefined8 * FUN_14347d570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_14347d600;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b10de0;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 14347d600 FUN_14347d600 body=2560 status=ok
// SIG undefined FUN_14347d600(void)

void FUN_14347d600(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  undefined1 local_res8;
  undefined7 uStackX_9;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffff98;
  byte local_58 [48];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0x29)) {
    plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar11 + 0x50))(plVar11,0x70);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = FUN_14347cb80(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar6 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined4 *)(lVar8 + 4) = 1;
  FUN_1434a46e0(lVar7);
  FUN_1434a4210(lVar7);
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined4 *)(lVar8 + 0x1c) = 0;
  *(undefined1 *)(lVar8 + 0x1f) = *(undefined1 *)(lVar8 + 0x1f);
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined1 *)(lVar8 + 0x1f) = 0xff;
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined4 *)(lVar8 + 0x20) = 0xffffff;
  *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)(lVar8 + 0x23);
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined1 *)(lVar8 + 0x23) = 0xff;
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined4 *)(lVar8 + 8) = 0x42a00000;
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined4 *)(lVar8 + 0xc) = 0x42a00000;
  lVar8 = FUN_1434a76b0(lVar7);
  *(undefined4 *)(lVar8 + 0x18) = 0x3f800000;
  puVar9 = (uint *)FUN_1434a76b0(lVar7);
  *puVar9 = *puVar9 & 0xffffffef;
  puVar9 = (uint *)FUN_1434a76b0(lVar7);
  *puVar9 = *puVar9 & 0xffffffbf;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(uint *)(param_1 + 0x3c);
    lVar13 = lVar6;
    if (uVar12 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      lVar13 = (ulonglong)(uVar12 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar12 >> 5) * 8);
    }
    FUN_143411e30(lVar13);
    FUN_1434a46e0(lVar7);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar8 = *(longlong *)(param_1 + 0x30);
      uVar12 = *(int *)(param_1 + 0x3c) - 1;
      lVar13 = lVar6;
      if (uVar12 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
        lVar13 = (ulonglong)(uVar12 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar12 >> 5) * 8);
      }
      FUN_143411e30(lVar13);
      FUN_1434a4210(lVar7);
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        uVar12 = *(int *)(param_1 + 0x3c) - 2;
        lVar13 = lVar6;
        if (uVar12 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
          lVar13 = (ulonglong)(uVar12 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar12 >> 5) * 8);
        }
        uVar5 = FUN_143411f00(lVar13);
        lVar8 = FUN_1434a76b0(lVar7);
        *(undefined4 *)(lVar8 + 0x1c) = uVar5;
        *(undefined1 *)(lVar8 + 0x1f) = *(undefined1 *)(lVar8 + 0x1f);
        if (3 < *(int *)(param_1 + 0x38)) {
          uVar10 = FUN_1434141c0(param_1,3);
          dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
          lVar8 = FUN_1434a76b0(lVar7);
          *(char *)(lVar8 + 0x1f) = (char)(longlong)((float)dVar14 * 255.0);
          if (4 < *(int *)(param_1 + 0x38)) {
            uVar10 = FUN_1434141c0(param_1,4);
            uVar5 = FUN_143411f00(uVar10,*(undefined8 *)(param_1 + 0x30));
            lVar8 = FUN_1434a76b0(lVar7);
            *(undefined4 *)(lVar8 + 0x20) = uVar5;
            *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)(lVar8 + 0x23);
            if (5 < *(int *)(param_1 + 0x38)) {
              uVar10 = FUN_1434141c0(param_1,5);
              dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
              lVar8 = FUN_1434a76b0(lVar7);
              *(char *)(lVar8 + 0x23) = (char)(longlong)((float)dVar14 * 255.0);
              if (6 < *(int *)(param_1 + 0x38)) {
                uVar10 = FUN_1434141c0(param_1,6);
                dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
                lVar8 = FUN_1434a76b0(lVar7);
                *(float *)(lVar8 + 8) = (float)dVar14 * 20.0;
                if (7 < *(int *)(param_1 + 0x38)) {
                  uVar10 = FUN_1434141c0(param_1,7);
                  dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
                  lVar8 = FUN_1434a76b0(lVar7);
                  *(float *)(lVar8 + 0xc) = (float)dVar14 * 20.0;
                  if (8 < *(int *)(param_1 + 0x38)) {
                    uVar10 = FUN_1434141c0(param_1,8);
                    dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
                    lVar8 = FUN_1434a76b0(lVar7);
                    *(float *)(lVar8 + 0x18) = (float)dVar14;
                    if (9 < *(int *)(param_1 + 0x38)) {
                      uVar10 = FUN_1434141c0(param_1,9);
                      dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
                      uVar12 = 0xf;
                      if ((uint)(longlong)dVar14 < 0xf) {
                        uVar12 = (uint)(longlong)dVar14;
                      }
                      lVar8 = FUN_1434a76b0(lVar7);
                      *(uint *)(lVar8 + 4) = uVar12;
                      if (10 < *(int *)(param_1 + 0x38)) {
                        uVar10 = FUN_1434141c0(param_1,10);
                        FUN_143411540(uVar10,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                                      in_stack_ffffffffffffff98 & 0xffffffffffffff00);
                        plVar11 = (longlong *)CONCAT71(uStackX_9,local_res8);
                        do {
                          lVar8 = lVar6 + 1;
                          if (*(char *)(*plVar11 + lVar6) != "inner"[lVar6]) {
                            puVar9 = (uint *)FUN_1434a76b0(lVar7);
                            *puVar9 = *puVar9 & 0xffffffdf;
                            goto LAB_14347da9e;
                          }
                          lVar6 = lVar8;
                        } while (lVar8 != 6);
                        puVar9 = (uint *)FUN_1434a76b0(lVar7);
                        *puVar9 = *puVar9 | 0x20;
LAB_14347da9e:
                        if (0xb < *(int *)(param_1 + 0x38)) {
                          uVar10 = FUN_1434141c0(param_1,0xb);
                          cVar3 = FUN_143411fd0(uVar10,*(undefined8 *)(param_1 + 0x30));
                          if (cVar3 == '\0') {
                            puVar9 = (uint *)FUN_1434a76b0(lVar7);
                            *puVar9 = *puVar9 & 0xffffffef;
                          }
                          else {
                            puVar9 = (uint *)FUN_1434a76b0(lVar7);
                            *puVar9 = *puVar9 | 0x10;
                          }
                        }
                        plVar1 = plVar11 + 3;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        if ((int)*plVar1 == 0) {
                          FUN_14335f920(plVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_58[0] = 10;
  local_res8 = 0;
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "shadowColor",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "shadowAlpha",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "highlightColor",0xe);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "highlightAlpha",0xe);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09590,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "blurY",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "strength",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "knockout",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "inner",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              &DAT_145af4d3c,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  local_58[0] = 10;
  local_res8 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x28) + 0x18) + 0x618),
                              "quality",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,plVar11,&local_res10,local_58,&local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  return;
}



// FUNCTION 14347e010 FUN_14347e010 body=60 status=ok
// SIG undefined FUN_14347e010(void)

void FUN_14347e010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_14347cb80(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14347e060 FUN_14347e060 body=1290 status=ok
// SIG undefined FUN_14347e060(void)

longlong * FUN_14347e060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_res8 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x260);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  lVar2 = FUN_14341c340(param_2,&local_res8);
  if (lVar2 == 0) {
    FUN_143478b20(&local_58,param_2);
    if (((((byte)local_48 & 2) == 0) && (lVar2 = CONCAT71(uStack_57,local_58), lVar2 != 0)) &&
       ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    if (((((byte)local_48 & 1) == 0) && (local_50 != 0)) &&
       ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_60 = 8;
  local_68 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar2 = puVar3[6];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ae70;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar3[0xd] = FUN_14347d600;
    lVar2 = FUN_14341b750(local_68,7);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 &local_58,&local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *puVar3 = &PTR_LAB_145b10de0;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,0x25);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b103e0;
    puVar4[4] = &PTR_LAB_145b10428;
    puVar4[0xd] = 0;
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      FUN_143415510(puVar4 + 4,&local_68,
                    *(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,&local_58,
                    &local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar2;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    *puVar4 = &PTR_LAB_145b10ce8;
    puVar4[4] = &PTR_LAB_145b10d30;
    puVar4[0xe] = &PTR_LAB_145b10dd8;
    FUN_1434230f0(puVar4 + 0xe,puVar4,&local_68,param_1);
    local_res10[0] = 0;
    *puVar4 = &PTR_LAB_145b10ce8;
    puVar4[4] = &PTR_LAB_145b10d30;
    puVar4[0xe] = &PTR_LAB_145b10dd8;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_68,&PTR_s_clone_145b073f0,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x29,&local_res8);
  local_50 = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58 = 8;
  local_40 = 0;
  if (local_50 != 0) {
    *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
    *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) & 0x8fffffff;
  }
  local_48 = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(&local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x58) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x280,&local_58,
             &local_res8);
  if (4 < local_58) {
    FUN_143411150(&local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 14347e570 FUN_14347e570 body=57 status=ok
// SIG undefined FUN_14347e570(void)

void FUN_14347e570(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 14347e5b0 FUN_14347e5b0 body=162 status=ok
// SIG undefined FUN_14347e5b0(void)

/* WARNING: Removing unreachable block (ram,0x00014347e5e1) */

undefined8 * FUN_14347e5b0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  FUN_1434148b0();
  uVar2 = 0;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  param_1[0xd] = 0;
  param_1[0xd] = 0;
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x68,local_res8);
  if (lVar1 != 0) {
    uVar2 = FUN_1432d0910(lVar1);
  }
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = uVar2;
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10e68;
  return param_1;
}



// FUNCTION 14347e660 FUN_14347e660 body=480 status=ok
// SIG undefined FUN_14347e660(void)

undefined8 FUN_14347e660(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  uint local_68 [20];
  
  uVar7 = 0;
  uVar9 = uVar7;
  do {
    uVar10 = uVar9 + 1;
    if (*(char *)(*(longlong *)*param_3 + uVar9) != "matrix"[uVar9]) {
      uVar5 = FUN_143414a10(param_1,param_2);
      return uVar5;
    }
    uVar9 = uVar10;
  } while (uVar10 != 7);
  lVar4 = FUN_143412120(param_4,param_2);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) != 8)) {
    uVar5 = 0;
  }
  else {
    if (lVar4 != 0) {
      uVar5 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),2);
      cVar3 = (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x90))(lVar4 + 0x20,param_2,uVar5,1);
      if (cVar3 != '\0') {
        local_68[0] = 0;
        local_68[1] = 1;
        local_68[2] = 2;
        local_68[3] = 3;
        local_68[4] = 0x10;
        local_68[5] = 4;
        local_68[6] = 5;
        local_68[7] = 6;
        local_68[8] = 7;
        local_68[9] = 0x11;
        local_68[10] = 8;
        local_68[0xb] = 9;
        local_68[0xc] = 10;
        local_68[0xd] = 0xb;
        local_68[0xe] = 0x12;
        local_68[0xf] = 0xc;
        local_68[0x10] = 0xd;
        local_68[0x11] = 0xe;
        local_68[0x12] = 0xf;
        local_68[0x13] = 0x13;
        if (0 < *(int *)(lVar4 + 0x78)) {
          puVar8 = local_68;
          uVar9 = uVar7;
          do {
            dVar11 = (double)FUN_143411a90(*(undefined8 *)(uVar9 + *(longlong *)(lVar4 + 0x70)),
                                           param_2);
            uVar1 = *puVar8;
            uVar9 = uVar9 + 8;
            puVar8 = puVar8 + 1;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            *(float *)(lVar2 + 0x18 + (ulonglong)uVar1 * 4) = (float)dVar11;
          } while ((int)uVar6 < *(int *)(lVar4 + 0x78));
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 14347e850 FUN_14347e850 body=1013 status=ok
// SIG undefined FUN_14347e850(void)

undefined8 FUN_14347e850(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4)

{
  char *_Str1;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  undefined4 local_res18 [4];
  byte local_a8 [8];
  double local_a0;
  uint local_88 [24];
  
  puVar12 = (undefined1 *)0x0;
  _Str1 = *(char **)*param_3;
  puVar4 = puVar12;
  while (puVar13 = puVar4 + 1, puVar11 = puVar12, _Str1[(longlong)puVar4] == puVar4[0x145b12b60]) {
    puVar4 = puVar13;
    if (puVar13 == (undefined1 *)0x7) {
      lVar6 = param_1[9];
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == 8)) {
        local_88[0] = 0;
        local_88[1] = 1;
        local_88[2] = 2;
        plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
        local_88[3] = 3;
        local_88[4] = 0x10;
        local_88[5] = 4;
        local_88[6] = 5;
        local_88[7] = 6;
        local_88[8] = 7;
        local_88[9] = 0x11;
        local_88[10] = 8;
        local_88[0xb] = 9;
        local_88[0xc] = 10;
        local_88[0xd] = 0xb;
        local_88[0xe] = 0x12;
        local_88[0xf] = 0xc;
        local_88[0x10] = 0xd;
        local_88[0x11] = 0xe;
        local_88[0x12] = 0xf;
        local_88[0x13] = 0x13;
        lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
        puVar4 = puVar12;
        if (lVar3 != 0) {
          puVar4 = (undefined1 *)FUN_14345d8d0(lVar3,param_2);
        }
        FUN_14345e160(puVar4,0x14);
        puVar13 = puVar12;
        do {
          local_a8[0] = 3;
          local_a0 = (double)*(float *)(lVar6 + 0x18 + (ulonglong)local_88[(longlong)puVar11] * 4);
          if ((-1 < (longlong)puVar11) && ((int)puVar13 < *(int *)(puVar4 + 0x78))) {
            puVar4[0x94] = 0;
            if (*(longlong *)(*(longlong *)(puVar4 + 0x70) + (longlong)puVar11 * 8) == 0) {
              local_res18[0] = 0x143;
              puVar5 = (undefined1 *)
                       (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,puVar4,0x20,local_res18);
              puVar9 = puVar12;
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 0;
                puVar9 = puVar5;
              }
              *(undefined1 **)(*(longlong *)(puVar4 + 0x70) + (longlong)puVar11 * 8) = puVar9;
            }
            FUN_143411240(*(undefined8 *)(*(longlong *)(puVar4 + 0x70) + (longlong)puVar11 * 8),
                          local_a8);
            if (4 < local_a8[0]) {
              FUN_143411150(local_a8);
            }
          }
          puVar13 = (undefined1 *)(ulonglong)((int)puVar13 + 1);
          puVar11 = puVar11 + 1;
        } while ((longlong)puVar11 < 0x14);
        FUN_143412aa0(param_4,puVar4);
        if ((puVar4 != (undefined1 *)0x0) && ((*(uint *)(puVar4 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(puVar4 + 0x18) = *(uint *)(puVar4 + 0x18) - 1;
          FUN_1434a2b80(puVar4);
        }
        return 1;
      }
      return 0;
    }
  }
  do {
    puVar13 = puVar11 + 1;
    puVar4 = puVar12;
    if (_Str1[(longlong)puVar11] != puVar11[0x145b09590]) goto LAB_14347eaa0;
    puVar11 = puVar13;
  } while (puVar13 != &DAT_00000006);
  lVar6 = FUN_1434a62d0(param_1 + -4);
  fVar14 = *(float *)(lVar6 + 8);
  goto LAB_14347eac1;
LAB_14347eb00:
  while (puVar13 = puVar11 + 1, puVar4 = puVar12, _Str1[(longlong)puVar11] == puVar11[0x145b12aac])
  {
    puVar11 = puVar13;
    if (puVar13 == &DAT_00000006) {
      lVar6 = FUN_1434a62d0(param_1 + -4);
      FUN_1434a47f0(param_4,*(uint *)(lVar6 + 0x1c) & 0xffffff);
      return 1;
    }
  }
  do {
    puVar11 = puVar4 + 1;
    if (_Str1[(longlong)puVar4] != puVar4[0x145b12808]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"knockout");
      if (iVar2 != 0) {
        do {
          puVar4 = puVar12 + 1;
          if (_Str1[(longlong)puVar12] != puVar12[0x145b12800]) {
            iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"strength");
            if (iVar2 == 0) {
              lVar6 = FUN_1434a62d0(param_1 + -4);
              FUN_1434a4b40(param_4,(double)*(float *)(lVar6 + 0x18));
              return 1;
            }
            uVar8 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
            return uVar8;
          }
          puVar12 = puVar4;
        } while (puVar4 != &DAT_00000008);
        lVar6 = FUN_1434a62d0(param_1 + -4);
        FUN_1434a47f0(param_4,*(undefined4 *)(lVar6 + 4));
        return 1;
      }
      puVar7 = (uint *)FUN_1434a62d0(param_1 + -4);
      bVar10 = (byte)(*puVar7 >> 4);
      goto LAB_14347eb86;
    }
    puVar4 = puVar11;
  } while (puVar11 != &DAT_00000006);
  puVar7 = (uint *)FUN_1434a62d0(param_1 + -4);
  bVar10 = (byte)(*puVar7 >> 5);
LAB_14347eb86:
  FUN_143411150(param_4);
  *param_4 = 2;
  param_4[8] = bVar10 & 1;
  return 1;
  while (puVar4 = puVar13, puVar13 != &DAT_00000006) {
LAB_14347eaa0:
    puVar13 = puVar4 + 1;
    puVar11 = puVar12;
    if (_Str1[(longlong)puVar4] != puVar4[0x145b09598]) goto LAB_14347eb00;
  }
  lVar6 = FUN_1434a62d0(param_1 + -4);
  fVar14 = *(float *)(lVar6 + 0xc);
LAB_14347eac1:
  if (4 < *param_4) {
    FUN_143411150(param_4);
  }
  *param_4 = 3;
  *(double *)(param_4 + 8) = (double)(fVar14 * 0.05);
  return 1;
}



// FUNCTION 14347ec50 FUN_14347ec50 body=103 status=ok
// SIG undefined FUN_14347ec50(void)

undefined8 * FUN_14347ec50(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494df0();
  local_res8[0] = 0;
  *param_1 = &PTR_LAB_145b10f10;
  param_1[4] = &PTR_LAB_145b10f58;
  param_1[0xe] = &PTR_LAB_145b11000;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_clone_145b07850,local_res8);
  return param_1;
}



// FUNCTION 14347ecc0 FUN_14347ecc0 body=241 status=ok
// SIG undefined FUN_14347ecc0(void)

void FUN_14347ecc0(longlong param_1)

{
  RefCountImpl *this;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar1 == 0x2a)) {
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar2 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar2 + 0x58),
                            *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x288,0,0xffffffff);
      this = *(RefCountImpl **)(lVar3 + 0x68);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (*(RefCountImpl **)(lVar2 + 0x68) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x68));
      }
      *(RefCountImpl **)(lVar2 + 0x68) = this;
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar2);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                "ColorMatrixFilter");
  return;
}



// FUNCTION 14347edc0 FUN_14347edc0 body=126 status=ok
// SIG undefined FUN_14347edc0(void)

undefined8 * FUN_14347edc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_14347ee50;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b11008;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 14347ee50 FUN_14347ee50 body=752 status=ok
// SIG undefined FUN_14347ee50(void)

void FUN_14347ee50(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar12;
  uint *puVar13;
  double dVar14;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_a8 [32];
  uint local_88 [20];
  ulonglong uVar11;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 != 0x2a)) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar8 = (**(code **)(*plVar3 + 0x50))(plVar3,0x70);
    lVar7 = 0;
    if (lVar8 != 0) {
      lVar7 = FUN_14347e5b0(lVar8,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
    }
  }
  uVar11 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    uVar12 = uVar11;
    if (uVar2 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      uVar12 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    lVar8 = FUN_143412120(uVar12);
    if (lVar8 != 0) {
      uVar9 = FUN_14341b750(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8),2);
      cVar5 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x90))
                        (lVar8 + 0x20,*(undefined8 *)(param_1 + 0x30),uVar9,1);
      if (cVar5 != '\0') {
        lVar4 = *(longlong *)(lVar7 + 0x68);
        local_88[0] = 0;
        local_88[1] = 1;
        local_88[2] = 2;
        local_88[3] = 3;
        local_88[4] = 0x10;
        local_88[5] = 4;
        local_88[6] = 5;
        local_88[7] = 6;
        local_88[8] = 7;
        local_88[9] = 0x11;
        local_88[10] = 8;
        local_88[0xb] = 9;
        local_88[0xc] = 10;
        local_88[0xd] = 0xb;
        local_88[0xe] = 0x12;
        local_88[0xf] = 0xc;
        local_88[0x10] = 0xd;
        local_88[0x11] = 0xe;
        local_88[0x12] = 0xf;
        local_88[0x13] = 0x13;
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == 8)) && (0 < *(int *)(lVar8 + 0x78))) {
          puVar13 = local_88;
          uVar12 = uVar11;
          do {
            dVar14 = (double)FUN_143411a90(*(undefined8 *)(uVar12 + *(longlong *)(lVar8 + 0x70)),
                                           *(undefined8 *)(param_1 + 0x30));
            uVar2 = *puVar13;
            uVar12 = uVar12 + 8;
            puVar13 = puVar13 + 1;
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            *(float *)(lVar4 + 0x18 + (ulonglong)uVar2 * 4) = (float)dVar14;
          } while ((int)uVar10 < *(int *)(lVar8 + 0x78));
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  local_a8[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar8 + 0xe8) + 0x28) + 0x18) + 0x618)
                              ,"matrix",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x50))
            (lVar7 + 0x20,lVar8 + 0xe8,&local_res10,local_a8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_a8[0]) {
    FUN_143411150(local_a8);
  }
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  return;
}



// FUNCTION 14347f150 FUN_14347f150 body=60 status=ok
// SIG undefined FUN_14347f150(void)

void FUN_14347f150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_14347e5b0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14347f1a0 FUN_14347f1a0 body=1290 status=ok
// SIG undefined FUN_14347f1a0(void)

longlong * FUN_14347f1a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_res8 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x260);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  lVar2 = FUN_14341c340(param_2,&local_res8);
  if (lVar2 == 0) {
    FUN_143478b20(&local_58,param_2);
    if (((((byte)local_48 & 2) == 0) && (lVar2 = CONCAT71(uStack_57,local_58), lVar2 != 0)) &&
       ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    if (((((byte)local_48 & 1) == 0) && (local_50 != 0)) &&
       ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_60 = 8;
  local_68 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar2 = puVar3[6];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ae70;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar3[0xd] = FUN_14347ee50;
    lVar2 = FUN_14341b750(local_68,7);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 &local_58,&local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *puVar3 = &PTR_LAB_145b11008;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,0x25);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar4[1] = puVar5;
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b0ac50;
    puVar4[4] = &PTR_LAB_145b0ac98;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0;
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = 0;
    *puVar4 = &PTR_LAB_145b103e0;
    puVar4[4] = &PTR_LAB_145b10428;
    puVar4[0xd] = 0;
    if (puVar4[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58 = 10;
      FUN_143415510(puVar4 + 4,&local_68,
                    *(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,&local_58,
                    &local_res8);
      if (4 < local_58) {
        FUN_143411150(&local_58);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar4[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar4[6] = lVar2;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    *puVar4 = &PTR_LAB_145b10f10;
    puVar4[4] = &PTR_LAB_145b10f58;
    puVar4[0xe] = &PTR_LAB_145b11000;
    FUN_1434230f0(puVar4 + 0xe,puVar4,&local_68,param_1);
    local_res10[0] = 0;
    *puVar4 = &PTR_LAB_145b10f10;
    puVar4[4] = &PTR_LAB_145b10f58;
    puVar4[0xe] = &PTR_LAB_145b11000;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_68,&PTR_s_clone_145b07850,local_res10);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar5 = puVar4;
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x2a,&local_res8);
  local_50 = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58 = 8;
  local_40 = 0;
  if (local_50 != 0) {
    *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
    *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) & 0x8fffffff;
  }
  local_48 = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(&local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x58) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_68,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x288,&local_58,
             &local_res8);
  if (4 < local_58) {
    FUN_143411150(&local_58);
  }
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 14347f6b0 FUN_14347f6b0 body=618 status=ok
// SIG undefined FUN_14347f6b0(void)

void FUN_14347f6b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  rsize_t _MaxCount;
  undefined8 *local_res8;
  uint in_stack_fffffffffffff7c8;
  uint uVar9;
  byte local_818 [32];
  byte local_7f8 [32];
  char local_7d8 [2000];
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar8 = 0;
  uVar9 = *(uint *)(param_1 + 0x3c);
  lVar6 = lVar8;
  if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar6 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
  }
  plVar4 = (longlong *)FUN_1434123a0(lVar6,lVar2);
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    local_818[0] = 0;
    cVar3 = (**(code **)(*plVar4 + 0x58))
                      (plVar4,plVar7,*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 1000,
                       local_818);
    if ((cVar3 != '\0') && ((local_818[0] == 8 || (local_818[0] == 0xb)))) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      local_7f8[0] = 0;
      uVar9 = 0;
      FUN_14341e410(local_818,local_7f8,plVar4,lVar2,0,
                    (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5) +
                    *(int *)(lVar2 + 0x30) * 0x20 + -0x1f,0);
      FUN_143411540(local_7f8,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    uVar9 & 0xffffff00);
      FUN_1434a1420(param_1,&DAT_145af6478,*local_res8);
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res8);
      }
      if (4 < local_7f8[0]) {
        FUN_143411150(local_7f8);
      }
      if (local_818[0] < 5) {
        return;
      }
      FUN_143411150(local_818);
      return;
    }
    if (4 < local_818[0]) {
      FUN_143411150(local_818);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar9 = *(uint *)(param_1 + 0x3c);
  if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
  }
  FUN_143411540(lVar8,&local_res8,lVar2,0xffffffff,in_stack_fffffffffffff7c8 & 0xffffff00);
  _MaxCount = (rsize_t)*(uint *)(local_res8 + 4);
  if (1999 < *(uint *)(local_res8 + 4)) {
    _MaxCount = 1999;
  }
  strncpy_s(local_7d8,2000,(char *)*local_res8,_MaxCount);
  local_7d8[_MaxCount] = '\0';
  pcVar5 = local_7d8;
  while (local_7d8[0] != '\0') {
    if (*pcVar5 == '\r') {
      *pcVar5 = '\n';
    }
    pcVar5 = pcVar5 + 1;
    local_7d8[0] = *pcVar5;
  }
  pcVar5 = "%s\n";
  if (1999 < *(uint *)(local_res8 + 4)) {
    pcVar5 = "%s ...<truncated>\n";
  }
  FUN_1434a1420(param_1,pcVar5,local_7d8);
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  return;
}



// FUNCTION 14347f920 FUN_14347f920 body=474 status=ok
// SIG undefined FUN_14347f920(void)

void FUN_14347f920(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int _Radix;
  long lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  char *local_res8;
  longlong *local_res10;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  lVar8 = 0;
  uVar6 = *(uint *)(param_1 + 0x3c);
  _Radix = 10;
  if (uVar6 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
    lVar8 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
  }
  FUN_143411540(lVar8,&local_res10,lVar5,0xffffffff,0);
  lVar5 = 0;
  if (*(int *)(param_1 + 0x38) < 2) {
    if ((1 < *(uint *)(local_res10 + 4)) && (*(char *)*local_res10 == '0')) {
      _Radix = 8;
      lVar5 = 1;
      if ((((char *)*local_res10)[1] + 0xa8U & 0xdf) == 0) {
        _Radix = 0x10;
        lVar5 = 2;
      }
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    uVar6 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar6 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    _Radix = FUN_143411e30(lVar7);
    if (0x22 < _Radix - 2U) {
      uVar3 = Scaleform::GFx::NumberUtil::NaN();
      pbVar2 = *(byte **)(param_1 + 8);
      if (4 < *pbVar2) {
        FUN_143411150(pbVar2);
      }
      *(undefined8 *)(pbVar2 + 8) = uVar3;
      *pbVar2 = 3;
      goto LAB_14347fad4;
    }
  }
  lVar8 = *local_res10;
  local_res8 = (char *)0x0;
  lVar4 = strtol((char *)(*local_res10 + lVar5),&local_res8,_Radix);
  if (((char *)(lVar5 + lVar8) == local_res8) && (_Radix != 8)) {
    uVar9 = Scaleform::GFx::NumberUtil::NaN();
    FUN_1434a4b40(*(undefined8 *)(param_1 + 8),uVar9);
  }
  else {
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 4;
    *(long *)(pbVar2 + 8) = lVar4;
  }
LAB_14347fad4:
  plVar1 = local_res10 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920(local_res10);
  }
  return;
}



// FUNCTION 14347fb00 FUN_14347fb00 body=225 status=ok
// SIG undefined FUN_14347fb00(void)

void FUN_14347fb00(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar5,&local_res10,lVar3,0xffffffff,0);
    lVar3 = *local_res10;
    local_res8 = 0;
    uVar6 = FUN_14331b260(*local_res10,&local_res8);
    if (lVar3 == local_res8) {
      uVar6 = Scaleform::GFx::NumberUtil::NaN();
    }
    pbVar4 = *(byte **)(param_1 + 8);
    if (4 < *pbVar4) {
      FUN_143411150(pbVar4);
    }
    *(undefined8 *)(pbVar4 + 8) = uVar6;
    *pbVar4 = 3;
    plVar1 = local_res10 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_14335f920(local_res10);
    }
  }
  return;
}



// FUNCTION 14347fbf0 FUN_14347fbf0 body=213 status=ok
// SIG undefined FUN_14347fbf0(void)

void FUN_14347fbf0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 2;
    puVar2[8] = 0;
    if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      if (iVar4 != 2) {
        return;
      }
      plVar6 = *(longlong **)(param_1 + 0x10);
    }
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar7 = 0;
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      iVar4 = FUN_143411e30(lVar7);
      iVar5 = (**(code **)(*plVar6 + 0x380))(plVar6);
      if (iVar4 < iVar5) {
        puVar2 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar2);
        *puVar2 = 2;
        puVar2[8] = 1;
      }
    }
  }
  return;
}



// FUNCTION 14347fcd0 FUN_14347fcd0 body=199 status=ok
// SIG undefined FUN_14347fcd0(void)

void FUN_14347fcd0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    puVar2[8] = 1;
    *puVar2 = 2;
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar5 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  uVar6 = FUN_143411a90(lVar5);
  uVar4 = 0;
  if (((uVar6 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (uVar4 = 0, (uVar6 & 0xfffffffffffff) != 0)) {
    uVar4 = 1;
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  puVar2[8] = uVar4;
  *puVar2 = 2;
  return;
}



// FUNCTION 14347fda0 FUN_14347fda0 body=227 status=ok
// SIG undefined FUN_14347fda0(void)

void FUN_14347fda0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    puVar3 = *(undefined1 **)(param_1 + 8);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    uVar5 = FUN_143411a90(lVar4);
    if (((((uVar5 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar5 & 0xfffffffffffff) == 0))
        && (uVar5 != 0xfff0000000000000)) && (uVar5 != 0x7ff0000000000000)) {
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      puVar3[8] = 1;
      *puVar3 = 2;
      return;
    }
    puVar3 = *(undefined1 **)(param_1 + 8);
  }
  FUN_143411150(puVar3);
  puVar3[8] = 0;
  *puVar3 = 2;
  return;
}



// FUNCTION 14347fe90 FUN_14347fe90 body=1087 status=ok
// SIG undefined FUN_14347fe90(void)

void FUN_14347fe90(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  uint local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff88;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50;
  byte local_4f;
  
  lVar13 = *(longlong *)(param_1 + 0x30);
  pcVar11 = (char *)0x0;
  uVar10 = *(uint *)(param_1 + 0x3c);
  cVar4 = *(char *)(lVar13 + 0xf0);
  pcVar9 = pcVar11;
  if (uVar10 <= (uint)(*(int *)(lVar13 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar13 + 8) - *(longlong *)(lVar13 + 0x10) >> 5))) {
    pcVar9 = (char *)((ulonglong)(uVar10 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
  }
  plVar6 = (longlong *)FUN_1434123a0(pcVar9,lVar13);
  if (plVar6 != (longlong *)0x0) {
    lVar13 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(int *)(param_1 + 0x3c) - 1;
    pcVar9 = pcVar11;
    if (uVar10 <= (uint)(*(int *)(lVar13 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar13 + 8) - *(longlong *)(lVar13 + 0x10) >> 5))) {
      pcVar9 = (char *)((ulonglong)(uVar10 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
    }
    cVar2 = *pcVar9;
    if (cVar2 == '\x05') {
      in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
      FUN_143411540(pcVar9,&local_res8,lVar13,0xffffffff,in_stack_ffffffffffffff88);
      in_stack_ffffffffffffff88 = CONCAT44((int)(in_stack_ffffffffffffff88 >> 0x20),0x3fffffff);
      plVar7 = (longlong *)
               FUN_14345c110(&local_res18,*(undefined8 *)(param_1 + 0x30),&local_res8,&DAT_145b0a66c
                             ,in_stack_ffffffffffffff88);
      lVar13 = *plVar7;
      if (lVar13 != 0) {
        *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
      }
      pcVar12 = (char *)*plVar7;
      if ((local_res18 != 0) && ((*(uint *)(local_res18 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_res18 + 0x18) = *(uint *)(local_res18 + 0x18) - 1;
        FUN_1434a2b80();
      }
      piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else if (cVar2 == '\x06') {
      pcVar12 = pcVar11;
      if (uVar10 <= (uint)(*(int *)(lVar13 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar13 + 8) - *(longlong *)(lVar13 + 0x10) >> 5))) {
        pcVar12 = (char *)((ulonglong)(uVar10 & 0x1f) * 0x20 +
                          *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar10 >> 5) * 8)
                          );
      }
      pcVar8 = (char *)FUN_143412120(pcVar12,lVar13);
      pcVar12 = pcVar11;
      if (pcVar8 != (char *)0x0) {
        iVar5 = (**(code **)(*(longlong *)(pcVar8 + 0x20) + 0x10))(pcVar8 + 0x20);
        if (iVar5 == 7) {
          *(uint *)(pcVar8 + 0x18) = *(int *)(pcVar8 + 0x18) + 1U & 0x8fffffff;
          pcVar12 = pcVar8;
        }
        else {
          iVar5 = (**(code **)(*(longlong *)(pcVar8 + 0x20) + 0x10))(pcVar8 + 0x20);
          if (iVar5 != 8) {
            return;
          }
          in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
          FUN_143411540(pcVar9,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                        in_stack_ffffffffffffff88);
          in_stack_ffffffffffffff88 = CONCAT44((int)(in_stack_ffffffffffffff88 >> 0x20),0x3fffffff);
          plVar7 = (longlong *)
                   FUN_14345c110(&local_res20,*(undefined8 *)(param_1 + 0x30),&local_res8,
                                 &DAT_145b0a66c,in_stack_ffffffffffffff88);
          lVar13 = *plVar7;
          if (lVar13 != 0) {
            *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
          }
          pcVar12 = (char *)*plVar7;
          if ((local_res20 != 0) && ((*(uint *)(local_res20 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(local_res20 + 0x18) = *(uint *)(local_res20 + 0x18) - 1;
            FUN_1434a2b80();
          }
          piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
      }
    }
    else {
      pcVar12 = (char *)0x0;
      if (cVar2 != '\x01') {
        return;
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(int *)(param_1 + 0x3c) - 2;
    pcVar9 = pcVar11;
    if (uVar10 <= (uint)(*(int *)(lVar13 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar13 + 8) - *(longlong *)(lVar13 + 0x10) >> 5))) {
      pcVar9 = (char *)((ulonglong)(uVar10 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
    }
    local_res8 = FUN_143411e30(pcVar9);
    local_res8 = local_res8 & 0xffffff07;
    if (*(int *)(param_1 + 0x38) == 3) {
      pcVar9 = pcVar11;
      if (cVar4 == '\x05') {
        pcVar9 = (char *)0xffffffff;
      }
      local_4f = (byte)pcVar9;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x30);
      uVar10 = *(int *)(param_1 + 0x3c) - 3;
      pcVar9 = pcVar11;
      if (uVar10 <= (uint)(*(int *)(lVar13 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar13 + 8) - *(longlong *)(lVar13 + 0x10) >> 5))) {
        pcVar9 = (char *)((ulonglong)(uVar10 & 0x1f) * 0x20 +
                         *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar10 >> 5) * 8))
        ;
      }
      local_4f = FUN_143411f00(pcVar9);
    }
    local_4f = local_4f & 7;
    lVar13 = *(longlong *)(param_1 + 0x30) + 0xe8;
    if (pcVar12 == (char *)0x0) {
      local_50 = (undefined1)local_res8;
      local_68 = &PTR_FUN_145b0a618;
      local_60 = plVar6;
      local_58 = lVar13;
      (**(code **)(*plVar6 + 0x40))(plVar6,lVar13,&local_68,0xc,0);
    }
    else {
      iVar5 = *(int *)(pcVar12 + 0x78);
      if (0 < (longlong)iVar5) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(pcVar12 + 0x70) + (longlong)pcVar11 * 8);
          if (lVar3 != 0) {
            in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
            FUN_143411540(lVar3,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                          in_stack_ffffffffffffff88);
            local_68 = (undefined **)((ulonglong)local_68 & 0xffffffffffff0000);
            cVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,lVar13,&local_res10);
            if (cVar4 != '\0') {
              (**(code **)(*plVar6 + 0x38))(plVar6,lVar13,&local_res10);
            }
            if (4 < (byte)local_68) {
              FUN_143411150(&local_68);
            }
            piVar1 = (int *)(local_res10 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          pcVar11 = pcVar11 + 1;
        } while ((longlong)pcVar11 < (longlong)iVar5);
      }
      if ((*(uint *)(pcVar12 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(pcVar12 + 0x18) = *(uint *)(pcVar12 + 0x18) - 1;
        FUN_1434a2b80(pcVar12);
      }
    }
  }
  return;
}



// FUNCTION 1434802e0 FUN_1434802e0 body=166 status=ok
// SIG undefined FUN_1434802e0(void)

void FUN_1434802e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    uVar4 = FUN_143411f00(lVar5,lVar2);
    puVar3 = *(undefined1 **)(param_1 + 8);
    uVar1 = *(uint *)(*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                       0x10) + 0x2240);
    FUN_143411150(puVar3);
    *puVar3 = 2;
    puVar3[8] = (uVar1 & uVar4) == uVar4;
  }
  return;
}



// FUNCTION 143480390 FUN_143480390 body=415 status=ok
// SIG undefined FUN_143480390(void)

void FUN_143480390(longlong param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar8 = 0;
    uVar7 = *(uint *)(param_1 + 0x3c);
    if (uVar7 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    iVar4 = FUN_143411f00(lVar8);
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar8 = 0;
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar7 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    iVar5 = FUN_143411f00(lVar8,lVar6);
    if ((iVar4 == 800) && (iVar5 == 2)) {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
      lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x70);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_143416630(lVar6,*(longlong *)(param_1 + 0x30) + 0xe8,FUN_1434802e0);
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
        }
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((*pcVar3 != '\b') || (*(longlong *)(pcVar3 + 8) != lVar6)) {
        FUN_143411150(pcVar3);
        *pcVar3 = '\b';
        pcVar3[0x18] = '\0';
        *(longlong *)(pcVar3 + 8) = lVar6;
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
        }
        pcVar3[0x10] = '\0';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
      }
      if (lVar6 != 0) {
        if ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
          FUN_1434a2b80(lVar6);
        }
        if ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
          FUN_1434a2b80(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 143480540 FUN_143480540 body=337 status=ok
// SIG undefined FUN_143480540(void)

void FUN_143480540(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar7,&local_res10,lVar6,0xffffffff,0);
    FUN_1432c2f70(&local_res8);
    FUN_1433646e0(*local_res10,*(undefined4 *)(local_res10 + 4),&local_res8);
    lVar6 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                           + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    pbVar4 = *(byte **)(param_1 + 8);
    if (4 < *pbVar4) {
      FUN_143411150(pbVar4);
    }
    *pbVar4 = 5;
    *(longlong *)(pbVar4 + 8) = lVar6;
    iVar5 = *(int *)(lVar6 + 0x18);
    *(int *)(lVar6 + 0x18) = iVar5;
    if (iVar5 == 0) {
      FUN_14335f920(lVar6);
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    piVar1 = (int *)(local_res10 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res10);
    }
  }
  return;
}



// FUNCTION 1434806a0 FUN_1434806a0 body=337 status=ok
// SIG undefined FUN_1434806a0(void)

void FUN_1434806a0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar7,&local_res10,lVar6,0xffffffff,0);
    FUN_1432c2f70(&local_res8);
    FUN_143364700(*local_res10,*(undefined4 *)(local_res10 + 4),&local_res8);
    lVar6 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                           + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    pbVar4 = *(byte **)(param_1 + 8);
    if (4 < *pbVar4) {
      FUN_143411150(pbVar4);
    }
    *pbVar4 = 5;
    *(longlong *)(pbVar4 + 8) = lVar6;
    iVar5 = *(int *)(lVar6 + 0x18);
    *(int *)(lVar6 + 0x18) = iVar5;
    if (iVar5 == 0) {
      FUN_14335f920(lVar6);
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    piVar1 = (int *)(local_res10 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res10);
    }
  }
  return;
}



// FUNCTION 143480800 FUN_143480800 body=341 status=ok
// SIG undefined FUN_143480800(void)

void FUN_143480800(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar9 = 0;
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      lVar9 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar9,&local_res10,lVar8,0xffffffff,0);
    FUN_1432c2f70(&local_res8);
    uVar4 = *local_res10;
    uVar6 = FUN_14335fa60(&local_res10);
    FUN_1432c4400(uVar4,uVar6,&local_res8);
    lVar8 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                           + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    pbVar5 = *(byte **)(param_1 + 8);
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
    *pbVar5 = 5;
    *(longlong *)(pbVar5 + 8) = lVar8;
    iVar7 = *(int *)(lVar8 + 0x18);
    *(int *)(lVar8 + 0x18) = iVar7;
    if (iVar7 == 0) {
      FUN_14335f920(lVar8);
    }
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    piVar1 = (int *)(local_res10 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 143480960 FUN_143480960 body=341 status=ok
// SIG undefined FUN_143480960(void)

void FUN_143480960(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar9 = 0;
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
      lVar9 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar9,&local_res10,lVar8,0xffffffff,0);
    FUN_1432c2f70(&local_res8);
    uVar4 = *local_res10;
    uVar6 = FUN_14335fa60(&local_res10);
    FUN_1432c47c0(uVar4,uVar6,&local_res8);
    lVar8 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                           + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    pbVar5 = *(byte **)(param_1 + 8);
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
    *pbVar5 = 5;
    *(longlong *)(pbVar5 + 8) = lVar8;
    iVar7 = *(int *)(lVar8 + 0x18);
    *(int *)(lVar8 + 0x18) = iVar7;
    if (iVar7 == 0) {
      FUN_14335f920(lVar8);
    }
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    piVar1 = (int *)(local_res10 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 143480ad0 FUN_143480ad0 body=654 status=ok
// SIG undefined FUN_143480ad0(void)

void FUN_143480ad0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong local_res8;
  undefined8 *local_res10;
  ulonglong in_stack_ffffffffffffff88;
  byte local_58 [8];
  undefined8 *local_50;
  byte local_38 [32];
  
  lVar6 = 0;
  local_res8 = 0;
  FUN_143410ec0(local_58,*(undefined8 *)(*param_1 + 8));
  bVar7 = local_58[0];
  if (local_58[0] != 5) {
    if (local_58[0] == 7) {
      lVar5 = *param_1;
      if ((((**(char **)(lVar5 + 8) == '\a') && (lVar5 != 0)) &&
          (lVar3 = *(longlong *)(*(char **)(lVar5 + 8) + 8), lVar3 != 0)) &&
         ((lVar5 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                             (lVar3,*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x20) + 0x10)),
          lVar6 = 0, lVar5 != 0 && (*(char *)(lVar5 + 0x6a) < '\0')))) {
        lVar6 = lVar5;
      }
      goto LAB_143480c8e;
    }
    if ((local_58[0] == 0) || (local_58[0] == 10)) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18);
      if (*(byte *)(param_1 + 0xc) - 1 < 6) {
        local_50 = *(undefined8 **)(lVar6 + 0x138);
      }
      else {
        local_50 = *(undefined8 **)(lVar6 + 0x2d0);
      }
      *(int *)(local_50 + 3) = *(int *)(local_50 + 3) + 1;
    }
    else {
      in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
      FUN_143411540(local_58,&local_res10,*param_1,0xffffffff,in_stack_ffffffffffffff88);
      local_50 = local_res10;
    }
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    iVar2 = *(int *)(local_50 + 3);
    bVar7 = 5;
    local_58[0] = 5;
    *(int *)(local_50 + 3) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920(local_50);
    }
  }
  in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
  FUN_143411540(local_58,&local_res10,*param_1,0xffffffff,in_stack_ffffffffffffff88);
  iVar2 = *(int *)(local_res10 + 4);
  piVar1 = (int *)(local_res10 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (iVar2 == 0) {
    lVar6 = param_1[1];
  }
  else {
    lVar6 = param_1[7];
    local_38[0] = 0;
    FUN_143411540(*(undefined8 *)(*param_1 + 8),&local_res10,*param_1,0xffffffff,
                  in_stack_ffffffffffffff88 & 0xffffffffffffff00);
    FUN_1434175f0(*param_1,&local_res10,local_38,lVar6,&local_res8,0,0);
    piVar1 = (int *)(local_res10 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    lVar6 = local_res8;
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
      lVar6 = local_res8;
    }
  }
LAB_143480c8e:
  local_res8 = lVar6;
  if (local_res8 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
      FUN_143411540(local_58,&local_res10,*param_1,0xffffffff,1);
      FUN_143416f20(param_1 + 8,"SetTarget2(tellTarget) with invalid target \'%s\'.",*local_res10);
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    lVar6 = *param_1;
    lVar5 = param_1[1];
    *(byte *)(lVar6 + 0x17e) = *(byte *)(lVar6 + 0x17e) | 2;
    *(longlong *)(lVar6 + 0xe0) = lVar5;
  }
  else {
    lVar6 = *param_1;
    *(byte *)(lVar6 + 0x17e) = *(byte *)(lVar6 + 0x17e) & 0xfd;
    *(longlong *)(lVar6 + 0xe0) = local_res8;
    lVar5 = local_res8;
  }
  uVar4 = FUN_14336b320(lVar5);
  *(undefined1 *)(lVar6 + 0xf0) = uVar4;
  lVar6 = *param_1;
  if (4 < **(byte **)(lVar6 + 8)) {
    FUN_143411150();
  }
  *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + -0x20;
  if (*(ulonglong *)(lVar6 + 8) < *(ulonglong *)(lVar6 + 0x10)) {
    FUN_1434a25c0(lVar6 + 8);
  }
  if (4 < bVar7) {
    FUN_143411150(local_58);
  }
  return;
}



// FUNCTION 143480d70 FUN_143480d70 body=815 status=ok
// SIG undefined FUN_143480d70(void)

void FUN_143480d70(longlong *param_1)

{
  int *piVar1;
  double dVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *local_res8;
  longlong local_48 [2];
  undefined2 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar9 = *param_1;
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0xffffffff;
  lVar6 = *(ulonglong *)(lVar9 + 8) - 0x20;
  if (*(ulonglong *)(lVar9 + 8) <= *(ulonglong *)(lVar9 + 0x10)) {
    lVar6 = *(longlong *)(lVar9 + 0x20);
  }
  uVar3 = FUN_143411fd0(lVar6);
  local_48[0] = FUN_143419e00(*param_1,*(undefined8 *)(*param_1 + 8));
  if ((local_48[0] == 0) && ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0)) {
    FUN_143411540(*(undefined8 *)(*param_1 + 8),&local_res8,*param_1,0xffffffff,1);
    FUN_143416f20(param_1 + 8,"StartDrag of invalid target \'%s\'.",*local_res8);
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  lVar6 = *param_1;
  lVar7 = 0;
  uVar5 = *(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
          (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5);
  lVar9 = lVar7;
  if (1 < uVar5) {
    uVar5 = uVar5 - 2;
    lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
  }
  cVar4 = FUN_143411fd0(lVar9);
  local_38 = CONCAT11(cVar4,(undefined1)local_38);
  if (cVar4 != '\0') {
    lVar6 = *param_1;
    uVar5 = *(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
            (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5);
    lVar9 = lVar7;
    if (5 < uVar5) {
      uVar5 = uVar5 - 6;
      lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    dVar2 = (double)FUN_143411a90(lVar9);
    lVar6 = *param_1;
    local_34 = CONCAT44(local_34._4_4_,(float)dVar2 * 20.0);
    uVar5 = *(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
            (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5);
    lVar9 = lVar7;
    if (4 < uVar5) {
      uVar5 = uVar5 - 5;
      lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    dVar2 = (double)FUN_143411a90(lVar9);
    lVar6 = *param_1;
    local_34 = CONCAT44((float)dVar2 * 20.0,(undefined4)local_34);
    uVar5 = *(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
            (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5);
    lVar9 = lVar7;
    if (3 < uVar5) {
      uVar5 = uVar5 - 4;
      lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    dVar2 = (double)FUN_143411a90(lVar9);
    lVar6 = *param_1;
    local_2c = CONCAT44(local_2c._4_4_,(float)dVar2 * 20.0);
    uVar5 = *(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
            (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5);
    if (2 < uVar5) {
      uVar5 = uVar5 - 3;
      lVar7 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
    }
    dVar2 = (double)FUN_143411a90(lVar7);
    lVar6 = *param_1;
    iVar8 = 4;
    local_2c = CONCAT44((float)dVar2 * 20.0,(undefined4)local_2c);
    do {
      if (4 < **(byte **)(lVar6 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + -0x20;
      if (*(ulonglong *)(lVar6 + 8) < *(ulonglong *)(lVar6 + 0x10)) {
        FUN_1434a25c0(lVar6 + 8);
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_48[0] != 0) {
    FUN_1432e2050(local_48,uVar3,0);
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0xe0) + 0x20) + 0x10);
    if (lVar6 != 0) {
      FUN_1432e39c0(lVar6,local_48);
    }
  }
  FUN_1434a2470(*param_1 + 8);
  return;
}



// FUNCTION 1434810b0 FUN_1434810b0 body=601 status=ok
// SIG undefined FUN_1434810b0(void)

void FUN_1434810b0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong local_58;
  longlong lStack_50;
  byte local_48;
  byte local_38 [32];
  
  lVar8 = *param_1;
  uVar1 = *(ulonglong *)(lVar8 + 8);
  if (*(ulonglong *)(lVar8 + 0x10) < uVar1) {
    pcVar6 = (char *)(uVar1 - 0x20);
  }
  else {
    pcVar6 = *(char **)(lVar8 + 0x20);
  }
  cVar3 = *pcVar6;
  local_38[0] = 1;
  if ((cVar3 != '\b') && (cVar3 != '\v')) {
    if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
      FUN_143416f20(param_1 + 8,"The parameter of \'cast\' should be a function.");
    }
    goto LAB_1434812a7;
  }
  if (cVar3 == '\b') {
    uVar7 = *(ulonglong *)(pcVar6 + 8);
    bVar9 = 0;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1U & 0x8fffffff;
    }
    lVar2 = *(longlong *)(pcVar6 + 0x10);
    lVar8 = 0;
    if ((lVar2 != 0) && (bVar9 = (pcVar6[0x18] & 1U) != 0, lVar8 = lVar2, !(bool)bVar9)) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
LAB_1434811a4:
    if ((uVar7 != 0) &&
       (plVar4 = (longlong *)FUN_1434123a0(uVar1,*param_1), plVar4 != (longlong *)0x0)) {
      local_58 = local_58 & 0xffffffffffffff00;
      cVar3 = (**(code **)(*(longlong *)(uVar7 + 0x20) + 0x58))
                        ((longlong *)(uVar7 + 0x20),(longlong *)(*param_1 + 0xe8),
                         *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18)
                         + 0x3a0,&local_58);
      if (cVar3 == '\0') {
        if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
          FUN_143416f20(param_1 + 8,
                        "The constructor function in \'cast\' should have \'prototype\'.");
        }
      }
      else {
        uVar5 = FUN_143412120(&local_58,*param_1);
        cVar3 = (**(code **)(*plVar4 + 0x90))(plVar4,*param_1,uVar5,1);
        if (cVar3 != '\0') {
          FUN_143412c40(local_38,plVar4);
        }
      }
      if (4 < (byte)local_58) {
        FUN_143411150(&local_58);
      }
    }
  }
  else {
    if (cVar3 == '\v') {
      FUN_143413f20(pcVar6,&local_58);
      uVar7 = local_58;
      lVar8 = lStack_50;
      bVar9 = local_48;
      goto LAB_1434811a4;
    }
    bVar9 = 0;
    local_58 = 0;
    lStack_50 = 0;
    lVar8 = 0;
    uVar7 = 0;
  }
  if ((((bVar9 & 2) == 0) && (uVar7 != 0)) && ((*(uint *)(uVar7 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar7 + 0x18) = *(uint *)(uVar7 + 0x18) - 1;
    FUN_1434a2b80(uVar7);
  }
  if ((((bVar9 & 1) == 0) && (lVar8 != 0)) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
    FUN_1434a2b80(lVar8);
  }
LAB_1434812a7:
  FUN_1434a23f0(*param_1 + 8);
  lVar8 = *param_1;
  *(longlong *)(lVar8 + 8) = *(longlong *)(lVar8 + 8) + 0x20;
  if (*(ulonglong *)(lVar8 + 0x18) <= *(ulonglong *)(lVar8 + 8)) {
    FUN_1434a29d0(lVar8 + 8);
  }
  if (*(longlong *)(lVar8 + 8) != 0) {
    FUN_143410ec0(*(longlong *)(lVar8 + 8),local_38);
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return;
}



// FUNCTION 143481310 FUN_143481310 body=1074 status=ok
// SIG undefined FUN_143481310(void)

void FUN_143481310(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  byte local_res8;
  longlong local_res18;
  longlong local_res20;
  longlong local_a8;
  longlong lStack_a0;
  byte local_98;
  byte local_90 [8];
  longlong local_88;
  longlong local_80;
  byte local_78;
  byte local_70 [48];
  
  FUN_143410ec0(local_90,*(undefined8 *)(*param_1 + 8));
  lVar6 = *param_1;
  if (*(ulonglong *)(lVar6 + 0x10) < *(ulonglong *)(lVar6 + 8)) {
    lVar6 = *(ulonglong *)(lVar6 + 8) - 0x20;
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  iVar5 = FUN_143411e30(lVar6);
  FUN_1434a23f0(*param_1 + 8);
  if ((local_90[0] != 8) && (local_90[0] != 0xb)) {
    bVar11 = local_90[0];
    if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
      FUN_143416f20(param_1 + 8,"The parameter of \'implements\' should be a function.");
    }
    goto LAB_1434816d6;
  }
  if (local_90[0] == 8) {
    local_res8 = 0;
    local_res20 = local_88;
    if (local_88 != 0) {
      *(uint *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + 1U & 0x8fffffff;
    }
    local_res18 = 0;
    if (local_80 != 0) {
      local_res8 = (local_78 & 1) != 0;
      local_res18 = local_80;
      if (!(bool)local_res8) {
        *(uint *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + 1U & 0x8fffffff;
      }
    }
LAB_14348144d:
    if (local_res20 != 0) {
      local_70[0] = 0;
      cVar4 = (**(code **)(*(longlong *)(local_res20 + 0x20) + 0x58))
                        ((longlong *)(local_res20 + 0x20),(longlong *)(*param_1 + 0xe8),
                         *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18)
                         + 0x3a0);
      if (cVar4 == '\0') {
        if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
          FUN_143416f20(param_1 + 8,
                        "The constructor function in \'implements\' should have \'prototype\'.");
        }
      }
      else {
        lVar6 = FUN_143412120(local_70,*param_1);
        if (lVar6 != 0) {
          plVar1 = (longlong *)(lVar6 + 0x20);
          (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x88))(plVar1,*param_1 + 0xe8,iVar5);
          uVar10 = 0;
          if (0 < iVar5) {
            do {
              lVar6 = *param_1;
              pcVar9 = (char *)0x0;
              uVar7 = *(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5);
              if (uVar10 <= uVar7) {
                uVar7 = uVar7 - uVar10;
                pcVar9 = (char *)((ulonglong)(uVar7 & 0x1f) * 0x20 +
                                 *(longlong *)
                                  (*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
              }
              cVar4 = *pcVar9;
              if ((cVar4 == '\b') || (cVar4 == '\v')) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) {
                if (cVar4 == '\b') {
                  lVar6 = *(longlong *)(pcVar9 + 8);
                  bVar11 = 0;
                  if (lVar6 != 0) {
                    *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
                  }
                  lVar2 = *(longlong *)(pcVar9 + 0x10);
                  lVar8 = 0;
                  if ((lVar2 != 0) &&
                     (bVar11 = (pcVar9[0x18] & 1U) != 0, lVar8 = lVar2, !(bool)bVar11)) {
                    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
                  }
LAB_1434815ce:
                  if (lVar6 != 0) {
                    (**(code **)(*plVar1 + 0x88))(plVar1,*param_1 + 0xe8,uVar10);
                  }
                }
                else {
                  if (cVar4 == '\v') {
                    FUN_143413f20(pcVar9,&local_a8);
                    lVar6 = local_a8;
                    lVar8 = lStack_a0;
                    bVar11 = local_98;
                    goto LAB_1434815ce;
                  }
                  bVar11 = 0;
                  local_a8 = 0;
                  lStack_a0 = 0;
                  lVar8 = 0;
                  lVar6 = 0;
                }
                if ((((bVar11 & 2) == 0) && (lVar6 != 0)) &&
                   ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
                  *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
                  FUN_1434a2b80(lVar6);
                }
                if ((((bVar11 & 1) == 0) && (lVar8 != 0)) &&
                   ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
                  *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
                  FUN_1434a2b80(lVar8);
                }
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < iVar5);
          }
        }
      }
      if (4 < local_70[0]) {
        FUN_143411150(local_70);
      }
    }
  }
  else {
    if (local_90[0] == 0xb) {
      FUN_143413f20(local_90,&local_a8,*param_1);
      local_res8 = local_98;
      local_res18 = lStack_a0;
      local_res20 = local_a8;
      goto LAB_14348144d;
    }
    local_res8 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_res18 = 0;
    local_res20 = 0;
  }
  if ((((local_res8 & 2) == 0) && (local_res20 != 0)) &&
     ((*(uint *)(local_res20 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_res20 + 0x18) = *(uint *)(local_res20 + 0x18) - 1;
    FUN_1434a2b80(local_res20);
  }
  bVar11 = local_90[0];
  if ((((local_res8 & 1) == 0) && (local_res18 != 0)) &&
     ((*(uint *)(local_res18 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_res18 + 0x18) = *(uint *)(local_res18 + 0x18) - 1;
    FUN_1434a2b80(local_res18);
    bVar11 = local_90[0];
  }
LAB_1434816d6:
  lVar6 = *param_1;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (4 < **(byte **)(lVar6 + 8)) {
      FUN_143411150();
    }
    *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + -0x20;
    if (*(ulonglong *)(lVar6 + 8) < *(ulonglong *)(lVar6 + 0x10)) {
      FUN_1434a25c0(lVar6 + 8);
    }
  }
  if (4 < bVar11) {
    FUN_143411150(local_90);
  }
  return;
}



// FUNCTION 143481750 FUN_143481750 body=613 status=ok
// SIG undefined FUN_143481750(void)

void FUN_143481750(longlong *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffff48;
  undefined **local_98;
  longlong local_90;
  longlong *local_88;
  byte local_80 [32];
  byte local_60 [8];
  longlong local_58;
  byte local_40 [40];
  
  FUN_143410ec0(local_60,*(undefined8 *)(*param_1 + 8));
  lVar4 = *param_1;
  if (4 < **(byte **)(lVar4 + 8)) {
    FUN_143411150();
  }
  *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + -0x20;
  if (*(ulonglong *)(lVar4 + 8) < *(ulonglong *)(lVar4 + 0x10)) {
    FUN_1434a25c0(lVar4 + 8);
  }
  local_40[0] = 0;
  FUN_143411150(local_40);
  lVar4 = *param_1;
  local_40[0] = 1;
  *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 0x20;
  if (*(ulonglong *)(lVar4 + 0x18) <= *(ulonglong *)(lVar4 + 8)) {
    FUN_1434a29d0(lVar4 + 8);
  }
  bVar6 = 1;
  if (*(longlong *)(lVar4 + 8) != 0) {
    FUN_143410ec0(*(longlong *)(lVar4 + 8),local_40);
    bVar6 = local_40[0];
  }
  if (param_2 == 0x55) {
    if (local_60[0] == 7) {
      if (((*param_1 != 0) && (local_58 != 0)) &&
         (plVar3 = (longlong *)
                   Scaleform::GFx::CharacterHandle::ResolveCharacter
                             (local_58,*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(*param_1 + 0xe0) + 0x20) + 0x10
                                        )), plVar3 != (longlong *)0x0)) {
        plVar5 = (longlong *)0x0;
        if (*(char *)((longlong)plVar3 + 0x6a) < '\0') {
          plVar5 = plVar3;
        }
        if (plVar5 != (longlong *)0x0) {
          lVar4 = (**(code **)(*(longlong *)
                                ((longlong)plVar5 +
                                (ulonglong)*(byte *)((longlong)plVar5 + 0x6d) * 4) + 8))();
          plVar3 = (longlong *)(lVar4 + 8);
          if (lVar4 == 0) {
            plVar3 = (longlong *)0x0;
          }
          goto LAB_14348187f;
        }
      }
      plVar3 = (longlong *)0x0;
    }
    else {
      lVar4 = FUN_143412120(local_60);
      if (lVar4 == 0) goto LAB_14348197f;
      plVar3 = (longlong *)(lVar4 + 0x20);
    }
LAB_14348187f:
    if (plVar3 == (longlong *)0x0) goto LAB_14348197f;
  }
  else {
    FUN_143411540(local_60,&local_res8,*param_1,0xffffffff,
                  in_stack_ffffffffffffff48 & 0xffffffffffffff00);
    local_80[0] = 0;
    cVar2 = FUN_1434175f0(*param_1,&local_res8,local_80,param_1[7],0,0,0);
    if ((cVar2 == '\0') ||
       (plVar3 = (longlong *)FUN_1434123a0(local_80,*param_1), plVar3 == (longlong *)0x0)) {
      if (4 < local_80[0]) {
        FUN_143411150(local_80);
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_14348197f;
    }
    if (4 < local_80[0]) {
      FUN_143411150(local_80);
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) {
    FUN_143300df0(param_1 + 8,"---enumerate - Push: NULL\n");
  }
  local_90 = *param_1;
  local_98 = &PTR_FUN_145b115e0;
  local_88 = param_1 + 8;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_90 + 0xe8,&local_98,0xb,0);
  local_98 = &PTR_FUN_145af1858;
LAB_14348197f:
  if (4 < bVar6) {
    FUN_143411150(local_40);
  }
  if (4 < local_60[0]) {
    FUN_143411150(local_60);
  }
  return;
}



// FUNCTION 1434819c0 FUN_1434819c0 body=1026 status=ok
// SIG undefined FUN_1434819c0(void)

void FUN_1434819c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  byte bVar11;
  byte local_res8;
  longlong local_res10;
  longlong local_b8;
  longlong lStack_b0;
  byte local_a8;
  ulonglong local_a0;
  longlong lStack_98;
  byte local_90;
  byte local_80 [8];
  ulonglong local_78;
  longlong local_70;
  byte local_68;
  byte local_60 [8];
  longlong local_58;
  longlong local_50;
  byte local_48;
  
  FUN_143410ec0(local_60,*(undefined8 *)(*param_1 + 8));
  lVar8 = *param_1;
  if (*(ulonglong *)(lVar8 + 0x10) < *(ulonglong *)(lVar8 + 8)) {
    lVar8 = *(ulonglong *)(lVar8 + 8) - 0x20;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x20);
  }
  FUN_143410ec0(local_80,lVar8);
  lVar8 = 0;
  if (local_60[0] == 8) {
    local_a8 = 0;
    local_b8 = local_58;
    if (local_58 != 0) {
      *(uint *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1U & 0x8fffffff;
    }
    lStack_b0 = 0;
    if (local_50 != 0) {
      local_a8 = (local_48 & 1) != 0;
      lStack_b0 = local_50;
      if (!(bool)local_a8) {
        *(uint *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1U & 0x8fffffff;
      }
    }
  }
  else if (local_60[0] == 0xb) {
    FUN_143413f20(local_60,&local_b8,*param_1);
  }
  else {
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8 = 0;
  }
  bVar11 = local_80[0];
  bVar4 = local_a8;
  lVar3 = lStack_b0;
  lVar2 = local_b8;
  if (local_80[0] == 8) {
    local_res8 = 0;
    if (local_78 != 0) {
      *(uint *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1U & 0x8fffffff;
    }
    local_res10 = 0;
    uVar10 = local_78;
    if (local_70 != 0) {
      local_res8 = (local_68 & 1) != 0;
      local_res10 = local_70;
      if (!(bool)local_res8) {
        *(uint *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1U & 0x8fffffff;
      }
    }
  }
  else if (local_80[0] == 0xb) {
    FUN_143413f20(local_80,&local_a0,*param_1);
    local_res8 = local_90;
    local_res10 = lStack_98;
    uVar10 = local_a0;
  }
  else {
    local_res8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_res10 = 0;
    uVar10 = 0;
  }
  if ((lVar2 == 0) || (uVar10 == 0)) {
    if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
      pcVar9 = "Can\'t extend with unknown super class.";
      if (lVar2 != 0) {
        pcVar9 = "Can\'t extend the unknown class.";
      }
      FUN_143416f20(param_1 + 8,pcVar9);
    }
  }
  else {
    local_a0 = local_a0 & 0xffffffffffffff00;
    cVar5 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x58))
                      ((longlong *)(lVar2 + 0x20),(longlong *)(*param_1 + 0xe8),
                       *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18) +
                       0x3a0,&local_a0);
    if ((cVar5 == '\0') || ((byte)local_a0 != '\x06')) {
      if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
        FUN_143416f20(param_1 + 8,"can\'t extend by the class w/o prototype.");
      }
    }
    else {
      lVar6 = FUN_143412120(&local_a0,*param_1);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
      }
      plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0xe8) + 0x30);
      lVar7 = (**(code **)(*plVar1 + 0x50))(plVar1,0xa8,0);
      if (lVar7 != 0) {
        lVar8 = FUN_143423990(lVar7,*param_1 + 0xe8,lVar6);
      }
      FUN_143416360(uVar10,*param_1 + 0xe8,lVar8);
      FUN_1434a4c50(lVar8 + 0x20,*param_1 + 0xe8,&local_b8);
      if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
        FUN_1434a2b80(lVar8);
      }
      bVar11 = local_80[0];
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80(lVar6);
        bVar11 = local_80[0];
      }
    }
    if (4 < (byte)local_a0) {
      FUN_143411150(&local_a0);
    }
  }
  FUN_1434a23f0(*param_1 + 8);
  if ((((local_res8 & 2) == 0) && (uVar10 != 0)) && ((*(uint *)(uVar10 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar10 + 0x18) = *(uint *)(uVar10 + 0x18) - 1;
    FUN_1434a2b80(uVar10);
  }
  if ((((local_res8 & 1) == 0) && (local_res10 != 0)) &&
     ((*(uint *)(local_res10 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_res10 + 0x18) = *(uint *)(local_res10 + 0x18) - 1;
    FUN_1434a2b80();
  }
  if ((((bVar4 & 2) == 0) && (lVar2 != 0)) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  if ((((bVar4 & 1) == 0) && (lVar3 != 0)) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  if (4 < bVar11) {
    FUN_143411150(local_80);
  }
  if (4 < local_60[0]) {
    FUN_143411150(local_60);
  }
  return;
}



// FUNCTION 143481dd0 FUN_143481dd0 body=555 status=ok
// SIG undefined FUN_143481dd0(void)

void FUN_143481dd0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  byte bVar11;
  ulonglong local_38;
  longlong lStack_30;
  byte local_28;
  
  lVar9 = *param_1;
  pcVar1 = *(char **)(lVar9 + 8);
  pcVar10 = pcVar1 + -0x20;
  if (pcVar1 <= *(char **)(lVar9 + 0x10)) {
    pcVar10 = *(char **)(lVar9 + 0x20);
  }
  cVar4 = *pcVar1;
  uVar5 = 0;
  if ((cVar4 != '\b') && (cVar4 != '\v')) {
    if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
      FUN_143416f20(param_1 + 8,"The parameter of InstanceOf should be a function.");
    }
    goto LAB_143481fae;
  }
  if (cVar4 == '\b') {
    uVar8 = *(ulonglong *)(pcVar1 + 8);
    bVar11 = 0;
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 0x18) = *(int *)(uVar8 + 0x18) + 1U & 0x8fffffff;
    }
    lVar2 = *(longlong *)(pcVar1 + 0x10);
    lVar9 = 0;
    if ((lVar2 != 0) && (bVar11 = (pcVar1[0x18] & 1U) != 0, lVar9 = lVar2, !(bool)bVar11)) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
LAB_143481ebc:
    if ((uVar8 != 0) &&
       (plVar6 = (longlong *)FUN_1434123a0(pcVar10,*param_1), plVar6 != (longlong *)0x0)) {
      local_38 = local_38 & 0xffffffffffffff00;
      cVar4 = (**(code **)(*(longlong *)(uVar8 + 0x20) + 0x58))
                        ((longlong *)(uVar8 + 0x20),(longlong *)(*param_1 + 0xe8),
                         *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18)
                         + 0x3a0,&local_38);
      if (cVar4 == '\0') {
        if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
          FUN_143416f20(param_1 + 8,
                        "The constructor function in InstanceOf should have \'prototype\'.");
        }
      }
      else {
        uVar7 = FUN_143412120(&local_38,*param_1);
        uVar5 = (**(code **)(*plVar6 + 0x90))(plVar6,*param_1,uVar7,1);
      }
      if (4 < (byte)local_38) {
        FUN_143411150(&local_38);
      }
    }
  }
  else {
    if (cVar4 == '\v') {
      FUN_143413f20(pcVar1,&local_38);
      uVar8 = local_38;
      lVar9 = lStack_30;
      bVar11 = local_28;
      goto LAB_143481ebc;
    }
    bVar11 = 0;
    local_38 = 0;
    lStack_30 = 0;
    lVar9 = 0;
    uVar8 = 0;
  }
  if ((((bVar11 & 2) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
    FUN_1434a2b80(uVar8);
  }
  if ((((bVar11 & 1) == 0) && (lVar9 != 0)) && ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
    FUN_1434a2b80(lVar9);
  }
LAB_143481fae:
  FUN_1434a23f0(*param_1 + 8);
  lVar9 = *param_1;
  *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 0x20;
  if (*(ulonglong *)(lVar9 + 0x18) <= *(ulonglong *)(lVar9 + 8)) {
    FUN_1434a29d0(lVar9 + 8);
  }
  puVar3 = *(undefined1 **)(lVar9 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 2;
    puVar3[8] = uVar5;
  }
  return;
}



// FUNCTION 143482010 FUN_143482010 body=431 status=ok
// SIG undefined FUN_143482010(void)

void FUN_143482010(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  uint local_res18 [4];
  ulonglong uVar8;
  
  uVar10 = 0;
  lVar4 = *param_1;
  local_res18[0] = 0;
  plVar11 = (longlong *)0x0;
  if (((*(byte *)(lVar4 + 0x17e) & 2) == 0) &&
     ((*(ushort *)((longlong)*(longlong **)(lVar4 + 0xe0) + 0x6a) >> 10 & 1) != 0)) {
    plVar11 = *(longlong **)(lVar4 + 0xe0);
  }
  if (param_3 == 0x8a) {
    iVar2 = (int)param_1[5];
    cVar5 = '\x01';
    lVar4 = param_1[2];
    local_res18[0] =
         (uint)CONCAT11(*(undefined1 *)((iVar2 + 4) + lVar4),*(undefined1 *)((iVar2 + 3) + lVar4));
    bVar1 = *(byte *)((iVar2 + 5) + lVar4);
  }
  else {
    cVar5 = FUN_143410210(param_2,lVar4,*(undefined8 *)(lVar4 + 8),0,local_res18);
    lVar4 = *param_1;
    bVar1 = *(byte *)((longlong)((int)param_1[5] + 3) + param_1[2]);
    if (4 < **(byte **)(lVar4 + 8)) {
      FUN_143411150();
    }
    *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + -0x20;
    if (*(ulonglong *)(lVar4 + 8) < *(ulonglong *)(lVar4 + 0x10)) {
      FUN_1434a25c0(lVar4 + 8);
    }
  }
  if ((plVar11 != (longlong *)0x0) && (cVar5 != '\0')) {
    uVar6 = (**(code **)(*(longlong *)plVar11[0x22] + 0x50))();
    if ((uVar6 != 0) && (uVar6 <= local_res18[0])) {
      local_res18[0] = uVar6 - 1;
    }
    uVar6 = (**(code **)(*plVar11 + 0x380))(plVar11);
    if (uVar6 <= local_res18[0]) {
      uVar6 = *(uint *)((longlong)param_1 + 0x24);
      uVar3 = *(uint *)(*(longlong *)(param_2 + 0x10) + 0x18);
      uVar8 = (ulonglong)uVar6;
      uVar7 = uVar6;
      if (bVar1 != 0) {
        do {
          uVar7 = (uint)uVar8;
          if (uVar3 <= uVar7) goto LAB_143482189;
          lVar4 = param_1[2];
          uVar9 = (ulonglong)(uVar7 + 1);
          if (*(char *)(uVar8 + lVar4) < '\0') {
            uVar9 = (ulonglong)
                    (uVar7 + 3 +
                    (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar7 + 2) + lVar4),
                                   *(undefined1 *)(uVar9 + lVar4)));
          }
          uVar7 = (uint)uVar9;
          uVar10 = uVar10 + 1;
          uVar8 = uVar9;
        } while (uVar10 < bVar1);
      }
      if (uVar7 < uVar3) {
        *(uint *)((longlong)param_1 + 0x24) = uVar7;
      }
      else {
LAB_143482189:
        if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
          FUN_143416f20(param_1 + 8,
                        "WaitForFrame branch to offset %d - this section only runs to %d",uVar6,
                        (int)param_1[4]);
        }
      }
    }
  }
  return;
}



// FUNCTION 1434821d0 FUN_1434821d0 body=1301 status=ok
// SIG undefined FUN_1434821d0(void)

void FUN_1434821d0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong local_res8;
  longlong local_res18;
  undefined8 *local_res20;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  byte local_58 [8];
  longlong local_50;
  longlong local_48;
  undefined1 local_40;
  
  plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0xe8) + 0x30);
  lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0xd0,0);
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_143441430(lVar6,*param_1,param_2,*(undefined4 *)((longlong)param_1 + 0x24),
                          in_stack_ffffffffffffff68 & 0xffffffff00000000,param_1[7],1);
  }
  iVar11 = (int)param_1[5] + 3;
  local_res18 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18) +
                               0x618),(longlong)iVar11 + param_1[2]);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  iVar11 = *(int *)(local_res18 + 0x20) + 1 + iVar11;
  iVar15 = iVar11 + 2;
  uVar14 = (uint)CONCAT11(*(undefined1 *)((longlong)(iVar11 + 1) + param_1[2]),
                          *(undefined1 *)((longlong)iVar11 + param_1[2]));
  if (uVar14 != 0) {
    local_res8 = (ulonglong)uVar14;
    plVar2 = (longlong *)(lVar7 + 0xa0);
    do {
      lVar6 = FUN_143360a60(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18) + 0x618
                             ),(longlong)iVar15 + param_1[2]);
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      uVar3 = *(ulonglong *)(lVar7 + 0xa8);
      uVar12 = *(longlong *)(lVar7 + 0xa8) + 1;
      FUN_1434a3910(plVar2,plVar2,uVar12);
      if (uVar3 < uVar12) {
        puVar8 = (undefined4 *)(uVar3 * 0x10 + *plVar2);
        for (lVar13 = uVar12 - uVar3; lVar13 != 0; lVar13 = lVar13 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *(undefined4 *)(lVar7 + 0xb8);
            lVar4 = *(longlong *)(lVar7 + 0xc0);
            *(longlong *)(puVar8 + 2) = lVar4;
            piVar1 = (int *)(lVar4 + 0x18);
            *piVar1 = *piVar1 + 1;
          }
          puVar8 = puVar8 + 4;
        }
      }
      lVar13 = *(longlong *)(lVar7 + 0xa8) * 0x10 + *plVar2;
      *(undefined4 *)(lVar13 + -0x10) = 0;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      piVar1 = (int *)(*(longlong *)(lVar13 + -8) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar13 + -8) = lVar6;
      iVar15 = iVar15 + 1 + *(int *)(lVar6 + 0x20);
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar6);
      }
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  lVar13 = 0;
  uVar14 = (uint)CONCAT11(*(undefined1 *)((longlong)(iVar15 + 1) + param_1[2]),
                          *(undefined1 *)((longlong)iVar15 + param_1[2]));
  local_70 = 0;
  *(uint *)(lVar7 + 0x9c) = uVar14;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + uVar14;
  *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
  lVar6 = *(longlong *)(*param_1 + 0x188);
  if ((lVar6 != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + -8 + lVar6 * 8), lVar6 != 0)) {
    *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
    local_70 = lVar6;
  }
  lVar6 = local_70;
  local_68 = 0;
  local_58[0] = 8;
  *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
  local_48 = 0;
  if (local_70 != 0) {
    *(uint *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1U & 0x8fffffff;
    local_48 = local_70;
  }
  local_40 = 0;
  local_78 = lVar7;
  local_50 = lVar7;
  if (*(int *)(local_res18 + 0x20) != 0) {
    lVar4 = *(longlong *)(*param_1 + 0xe0);
    if (lVar4 != 0) {
      lVar13 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 8))();
    }
    local_res8 = local_res8 & 0xffffffffffffff00;
    (**(code **)(*(longlong *)(lVar13 + 8) + 0x50))
              ((longlong *)(lVar13 + 8),*param_1 + 0xe8,&local_res18,local_58,&local_res8);
  }
  plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0xe8) + 0x30);
  puVar9 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0xa8,0);
  if (puVar9 == (undefined8 *)0x0) {
    local_res20 = (undefined8 *)0x0;
  }
  else {
    local_res20 = puVar9;
    uVar10 = FUN_14341b750(*(undefined8 *)(*param_1 + 0xe8),1);
    lVar13 = *param_1;
    FUN_143414820(puVar9,lVar13 + 0xe8,uVar10);
    *(undefined1 *)(puVar9 + 0x10) = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    *(undefined1 *)(puVar9 + 0x13) = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x14] = 0;
    *puVar9 = &PTR_LAB_145b0b588;
    puVar9[4] = &PTR_LAB_145b0b5d0;
    puVar9[0xd] = &PTR_LAB_145b0b678;
    FUN_1434230f0(puVar9 + 0xd,puVar9,lVar13 + 0xe8,&local_78);
    *puVar9 = &PTR_LAB_145b0b680;
    puVar9[4] = &PTR_LAB_145b0b6c8;
    puVar9[0xd] = &PTR_LAB_145b0b770;
  }
  uVar10 = FUN_14341b750(*(undefined8 *)(*param_1 + 0xe8),7);
  FUN_1434163f0(lVar7,*param_1 + 0xe8,uVar10);
  lVar13 = *param_1;
  lVar4 = *(longlong *)(lVar7 + 0x20);
  local_res8 = local_res8 & 0xffffffffffffff00;
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0xe8) + 0x28) + 0x18);
  uVar10 = FUN_143410c00(&local_78,local_res20);
  (**(code **)(lVar4 + 0x50))(lVar7 + 0x20,lVar13 + 0xe8,lVar5 + 0x3a0,uVar10,&local_res8);
  if (4 < (byte)local_78) {
    FUN_143411150(&local_78);
  }
  if (*(int *)(local_res18 + 0x20) == 0) {
    lVar13 = *param_1;
    *(longlong *)(lVar13 + 8) = *(longlong *)(lVar13 + 8) + 0x20;
    if (*(ulonglong *)(lVar13 + 0x18) <= *(ulonglong *)(lVar13 + 8)) {
      FUN_1434a29d0(lVar13 + 8);
    }
    if (*(longlong *)(lVar13 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(lVar13 + 8),local_58);
    }
  }
  if ((local_res20 != (undefined8 *)0x0) && ((*(uint *)(local_res20 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_res20 + 3) = *(uint *)(local_res20 + 3) - 1;
    FUN_1434a2b80();
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  return;
}



// FUNCTION 1434826f0 FUN_1434826f0 body=1383 status=ok
// SIG undefined FUN_1434826f0(void)

void FUN_1434826f0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint local_res8 [2];
  longlong local_res18;
  ulonglong local_res20;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  byte local_58 [8];
  longlong local_50;
  longlong local_48;
  undefined1 local_40;
  
  plVar13 = *(longlong **)(*(longlong *)(*param_1 + 0xe8) + 0x30);
  lVar4 = (**(code **)(*plVar13 + 0x50))(plVar13,0xd0,0);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_143441430(lVar4,*param_1,param_2,*(undefined4 *)((longlong)param_1 + 0x24),
                          in_stack_ffffffffffffff68 & 0xffffffff00000000,param_1[7],2);
  }
  iVar9 = (int)param_1[5] + 3;
  local_res18 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18) +
                               0x618),(longlong)iVar9 + param_1[2]);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  lVar8 = param_1[2];
  iVar9 = *(int *)(local_res18 + 0x20) + 1 + iVar9;
  uVar3 = CONCAT11(*(undefined1 *)((iVar9 + 1) + lVar8),*(undefined1 *)(iVar9 + lVar8));
  *(undefined1 *)(lVar4 + 0xcb) = *(undefined1 *)((iVar9 + 2) + lVar8);
  iVar16 = iVar9 + 5;
  *(ushort *)(lVar4 + 200) =
       CONCAT11(*(undefined1 *)((longlong)(iVar9 + 4) + param_1[2]),
                *(undefined1 *)((longlong)(iVar9 + 3) + param_1[2]));
  if (uVar3 != 0) {
    local_res20 = (ulonglong)uVar3;
    plVar13 = (longlong *)(lVar4 + 0xa0);
    do {
      lVar8 = (longlong)(iVar16 + 1) + param_1[2];
      uVar15 = 0xffffffffffffffff;
      local_res8[0] = (uint)*(byte *)((longlong)iVar16 + param_1[2]);
      do {
        uVar15 = uVar15 + 1;
      } while (*(char *)(lVar8 + uVar15) != '\0');
      lVar8 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(*param_1 + 0xe8) + 0x28) + 0x18) + 0x618
                             ),lVar8,uVar15 & 0xffffffff);
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      uVar15 = *(ulonglong *)(lVar4 + 0xa8);
      uVar11 = *(longlong *)(lVar4 + 0xa8) + 1;
      FUN_1434a3910(plVar13,plVar13);
      if (uVar15 < uVar11) {
        puVar5 = (undefined4 *)(uVar15 * 0x10 + *plVar13);
        for (lVar12 = uVar11 - uVar15; lVar12 != 0; lVar12 = lVar12 + -1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)(lVar4 + 0xb8);
            lVar2 = *(longlong *)(lVar4 + 0xc0);
            *(longlong *)(puVar5 + 2) = lVar2;
            piVar1 = (int *)(lVar2 + 0x18);
            *piVar1 = *piVar1 + 1;
          }
          puVar5 = puVar5 + 4;
        }
      }
      lVar12 = *(longlong *)(lVar4 + 0xa8) * 0x10 + *plVar13;
      *(uint *)(lVar12 + -0x10) = local_res8[0];
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      piVar1 = (int *)(*(longlong *)(lVar12 + -8) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar12 + -8) = lVar8;
      iVar16 = iVar16 + 2 + *(int *)(lVar8 + 0x20);
      piVar1 = (int *)(lVar8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar8);
      }
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  puVar10 = (undefined8 *)0x0;
  uVar14 = (uint)CONCAT11(*(undefined1 *)((longlong)(iVar16 + 1) + param_1[2]),
                          *(undefined1 *)((longlong)iVar16 + param_1[2]));
  local_70 = 0;
  *(uint *)(lVar4 + 0x9c) = uVar14;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + uVar14;
  *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
  lVar8 = *(longlong *)(*param_1 + 0x188);
  if ((lVar8 != 0) &&
     (lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + -8 + lVar8 * 8), lVar8 != 0)) {
    *(uint *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1U & 0x8fffffff;
    local_70 = lVar8;
  }
  lVar8 = local_70;
  local_68 = 0;
  local_58[0] = 8;
  *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
  local_48 = 0;
  if (local_70 != 0) {
    *(uint *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1U & 0x8fffffff;
    local_48 = local_70;
  }
  local_40 = 0;
  local_78 = lVar4;
  local_50 = lVar4;
  if (*(int *)(local_res18 + 0x20) != 0) {
    lVar12 = *(longlong *)(*param_1 + 0xe0);
    puVar6 = puVar10;
    if (lVar12 != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*(longlong *)(lVar12 + (ulonglong)*(byte *)(lVar12 + 0x6d) * 4) + 8))();
    }
    local_res8[0] = local_res8[0] & 0xffffff00;
    (**(code **)(puVar6[1] + 0x50))(puVar6 + 1,*param_1 + 0xe8,&local_res18,local_58,local_res8);
  }
  plVar13 = (longlong *)(*param_1 + 0xe8);
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)(*plVar13 + 0x30) + 0x50))
                     (*(longlong **)(*plVar13 + 0x30),0xa8,0);
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = FUN_14341b750(*(undefined8 *)(*param_1 + 0xe8),1);
    FUN_143414820(puVar6,plVar13,uVar7);
    *(undefined1 *)(puVar6 + 0x10) = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    *puVar6 = &PTR_LAB_145b0b588;
    puVar6[4] = &PTR_LAB_145b0b5d0;
    puVar6[0xd] = &PTR_LAB_145b0b678;
    FUN_1434230f0(puVar6 + 0xd,puVar6,plVar13,&local_78);
    *puVar6 = &PTR_LAB_145b0b680;
    puVar6[4] = &PTR_LAB_145b0b6c8;
    puVar6[0xd] = &PTR_LAB_145b0b770;
    puVar10 = puVar6;
  }
  uVar7 = FUN_14341b750(*(undefined8 *)(*param_1 + 0xe8),7);
  FUN_1434163f0(lVar4,plVar13,uVar7);
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar12 = *(longlong *)(lVar4 + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(*plVar13 + 0x28) + 0x18);
  uVar7 = FUN_143410c00(&local_78,puVar10);
  (**(code **)(lVar12 + 0x50))(lVar4 + 0x20,plVar13,lVar2 + 0x3a0,uVar7,local_res8);
  if (4 < (byte)local_78) {
    FUN_143411150(&local_78);
  }
  if (*(int *)(local_res18 + 0x20) == 0) {
    lVar12 = *param_1;
    *(longlong *)(lVar12 + 8) = *(longlong *)(lVar12 + 8) + 0x20;
    if (*(ulonglong *)(lVar12 + 0x18) <= *(ulonglong *)(lVar12 + 8)) {
      FUN_1434a29d0(lVar12 + 8);
    }
    if (*(longlong *)(lVar12 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(lVar12 + 8),local_58);
    }
  }
  if ((puVar10 != (undefined8 *)0x0) && ((*(uint *)(puVar10 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar10 + 3) = *(uint *)(puVar10 + 3) - 1;
    FUN_1434a2b80(puVar10);
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  if ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
    FUN_1434a2b80(lVar8);
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  return;
}



// FUNCTION 143482c60 FUN_143482c60 body=27 status=ok
// SIG undefined FUN_143482c60(void)

void FUN_143482c60(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 143482c90 FUN_143482c90 body=205 status=ok
// SIG undefined FUN_143482c90(void)

void FUN_143482c90(longlong param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res8;
  byte local_28 [32];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 10) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar5 = (longlong *)0x0;
      }
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,local_28);
      FUN_143411540(uVar4,&local_res8,uVar1,0xffffffff,0);
      pbVar2 = *(byte **)(param_1 + 8);
      if (4 < *pbVar2) {
        FUN_143411150(pbVar2);
      }
      *pbVar2 = 5;
      *(longlong *)(pbVar2 + 8) = local_res8;
      iVar3 = *(int *)(local_res8 + 0x18);
      *(int *)(local_res8 + 0x18) = iVar3;
      if (iVar3 == 0) {
        FUN_14335f920();
      }
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Boolean");
  return;
}



// FUNCTION 143482d70 FUN_143482d70 body=158 status=ok
// SIG undefined FUN_143482d70(void)

void FUN_143482d70(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte local_28 [32];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 10) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar5 = (longlong *)0x0;
      }
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,local_28);
      uVar2 = FUN_143411fd0(uVar4,*(undefined8 *)(param_1 + 0x30));
      puVar1 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar1);
      puVar1[8] = uVar2;
      *puVar1 = 2;
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Boolean");
  return;
}



// FUNCTION 143482e20 FUN_143482e20 body=1489 status=ok
// SIG undefined FUN_143482e20(void)

longlong * FUN_143482e20(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  
  FUN_1432c5960(&local_b8,DAT_146b62f28);
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b12858,0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&SA=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&MP3=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&SV=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&EV=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&IME=",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b12884,0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&AE=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&VE=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&ACC=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&PR=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&SP=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&SB=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&DEB=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b128c0,0xffffffffffffffff);
  FUN_1432c2f70(&local_res8);
  puVar4 = (undefined8 *)
           FUN_143360950(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                          + 0x618),"WIN 8,0,0,0",0xb);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  FUN_1432c2fb0(&local_res20,*puVar4);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  FUN_1433646e0((longlong)(local_res20 & 0xfffffffffffffffc) + 0xc,
                *(ulonglong *)(local_res20 & 0xfffffffffffffffc) & 0x7fffffffffffffff,&local_res8);
  Scaleform::StringBuffer::AppendString
            (&local_b8,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b128c4,0xffffffffffffffff);
  FUN_1432c3510(&local_res8);
  puVar4 = (undefined8 *)
           FUN_143360950(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                          + 0x618),"Scaleform Windows",0x11);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  FUN_1432c2fb0(&local_res18,*puVar4);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  FUN_1433646e0((longlong)(local_res18 & 0xfffffffffffffffc) + 0xc,
                *(ulonglong *)(local_res18 & 0xfffffffffffffffc) & 0x7fffffffffffffff,&local_res8);
  Scaleform::StringBuffer::AppendString
            (&local_b8,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  local_6c = 1;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_70 = 1;
  local_50 = 0x3f800000;
  local_54 = 0x3f800000;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
  (**(code **)(*plVar2 + 0x68))(plVar2,&local_80);
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b128c8,0xffffffffffffffff);
  local_40 = (undefined4)local_80;
  local_48[0] = 4;
  FUN_143411540(local_48,&local_88,param_2,0xffffffff,0);
  puVar4 = local_88;
  Scaleform::StringBuffer::AppendString(&local_b8,*local_88,0xffffffffffffffff);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b09ac8,0xffffffffffffffff);
  local_40 = local_80._4_4_;
  local_48[0] = 4;
  FUN_143411540(local_48,&local_88,param_2,0xffffffff,0);
  Scaleform::StringBuffer::AppendString(&local_b8,*local_88,0xffffffffffffffff);
  piVar1 = (int *)(local_88 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_88);
  }
  Scaleform::StringBuffer::AppendString(&local_b8,"&DP=72",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&COL=color",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&AR=1.0",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,&DAT_145b128f0,0xffffffffffffffff);
  FUN_1432c3510(&local_res8);
  puVar4 = (undefined8 *)
           FUN_143360950(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                          + 0x618),"Windows",7);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  FUN_1432c2fb0(&local_res10,*puVar4);
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  FUN_1433646e0((longlong)(local_res10 & 0xfffffffffffffffc) + 0xc,
                *(ulonglong *)(local_res10 & 0xfffffffffffffffc) & 0x7fffffffffffffff,&local_res8);
  Scaleform::StringBuffer::AppendString
            (&local_b8,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&L=en",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&PT=External",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&AVD=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&LFD=f",0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(&local_b8,"&WD=f",0xffffffffffffffff);
  puVar6 = &DAT_145af3922;
  if (local_b8 != (undefined1 *)0x0) {
    puVar6 = local_b8;
  }
  lVar5 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                         + 0x618),puVar6,local_b0);
  *param_1 = lVar5;
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_b8);
  return param_1;
}



// FUNCTION 143483400 FUN_143483400 body=4545 status=ok
// SIG undefined FUN_143483400(void)

void FUN_143483400(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  char *pcVar24;
  longlong *plVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 *puVar30;
  longlong lVar31;
  undefined1 *puVar32;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_78;
  longlong local_70;
  byte local_68;
  byte local_60 [8];
  int *local_58;
  
  FUN_14349da50(param_1[1],*param_1);
  plVar10 = (longlong *)0x0;
  lVar19 = param_1[1];
  plVar25 = *(longlong **)(param_1[2] + 0x10);
  local_res8 = *(longlong **)(*(longlong *)(lVar19 + 0xe8) + 0x30);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar19 + 0x188);
  local_res10 = plVar25;
  if ((byte)(*(char *)(*param_1 + 0xca) - 1U) < 2) {
    lVar19 = FUN_143419890(lVar19);
    if (lVar19 != 0) {
      *(uint *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1U & 0x8fffffff;
    }
    lVar31 = param_1[9];
    if ((lVar31 != 0) && ((*(uint *)(lVar31 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar31 + 0x18) = *(uint *)(lVar31 + 0x18) - 1;
      FUN_1434a2b80();
    }
    param_1[9] = lVar19;
    lVar31 = param_1[3];
    if (lVar31 != 0) {
      *(uint *)(lVar31 + 0x18) = *(int *)(lVar31 + 0x18) + 1U & 0x8fffffff;
    }
    lVar29 = *(longlong *)(lVar19 + 0x28);
    if ((lVar29 != 0) && ((*(uint *)(lVar29 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar29 + 0x18) = *(uint *)(lVar29 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(longlong *)(lVar19 + 0x28) = lVar31;
  }
  else {
    plVar15 = (longlong *)(lVar19 + 0x180);
    FUN_1434a39d0(plVar15,plVar15,*(longlong *)(lVar19 + 0x188) + 1);
    puVar16 = (undefined8 *)(*plVar15 + (*(longlong *)(lVar19 + 0x188) + -1) * 8);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = 0;
    }
  }
  plVar15 = plVar25;
  local_res18 = plVar25;
  if (plVar25 != (longlong *)0x0) {
    iVar7 = (**(code **)(*plVar25 + 0x10))(plVar25);
    plVar18 = plVar10;
    if (iVar7 - 2U < 4) {
      plVar18 = (longlong *)plVar25[3];
    }
    if (plVar18 != (longlong *)0x0) {
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    }
    if ((RefCountNTSImpl *)param_1[7] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[7]);
    }
    param_1[7] = (longlong)plVar18;
    iVar7 = (**(code **)(*plVar25 + 0x10))(plVar25);
    plVar18 = plVar25 + -4;
    if (0x26 < iVar7 - 6U) {
      plVar18 = plVar10;
    }
    if (plVar18 != (longlong *)0x0) {
      *(uint *)(plVar18 + 3) = (int)plVar18[3] + 1U & 0x8fffffff;
    }
    lVar19 = param_1[8];
    if ((lVar19 != 0) && ((*(uint *)(lVar19 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar19 + 0x18) = *(uint *)(lVar19 + 0x18) - 1;
      FUN_1434a2b80();
    }
    param_1[8] = (longlong)plVar18;
    cVar6 = (**(code **)(*plVar25 + 0x78))(plVar25);
    if (cVar6 != '\0') {
      plVar15 = (longlong *)plVar25[0xb];
      local_res10 = plVar15;
    }
  }
  if (*(char *)(*param_1 + 0xca) == '\x02') {
    FUN_14349d250(param_1[1],*(undefined1 *)(*param_1 + 0xcb));
    iVar7 = (int)*(undefined8 *)(*param_1 + 0xa8);
    if (*(int *)(param_1[2] + 0x38) < iVar7) {
      iVar7 = *(int *)(param_1[2] + 0x38);
    }
    lVar19 = (longlong)iVar7;
    if (0 < iVar7) {
      lVar29 = 0;
      lVar31 = lVar29;
      do {
        lVar17 = *(longlong *)(*param_1 + 0xa0);
        uVar27 = *(uint *)(lVar31 + lVar17);
        uVar22 = (ulonglong)uVar27;
        lVar13 = *(longlong *)(param_1[2] + 0x30);
        iVar7 = (int)plVar10;
        uVar28 = *(int *)(param_1[2] + 0x3c) - iVar7;
        uVar8 = *(int *)(lVar13 + 0x30) * 0x20 + -0x20 +
                (int)(*(longlong *)(lVar13 + 8) - *(longlong *)(lVar13 + 0x10) >> 5);
        if (uVar27 == 0) {
          lVar26 = lVar29;
          if (uVar28 <= uVar8) {
            lVar26 = (ulonglong)(uVar28 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar28 >> 5) * 8);
          }
          lVar13 = param_1[1];
          lVar2 = *(longlong *)(lVar13 + 0x188);
          lVar3 = *(longlong *)(lVar13 + 0x180);
          lVar4 = *(longlong *)(lVar3 + -8 + lVar2 * 8);
          if (lVar4 != 0) {
            *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
          }
          lVar2 = *(longlong *)(lVar3 + lVar2 * 8 + -8);
          if (lVar2 != 0) {
            FUN_1434a4530(lVar2 + 0x20,lVar17 + 8 + (longlong)iVar7 * 0x10,lVar26,
                          CONCAT71((int7)((ulonglong)lVar13 >> 8),6 < *(byte *)(lVar13 + 0xf0)));
            if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
              *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
              FUN_1434a2b80(lVar2);
            }
          }
        }
        else {
          lVar17 = lVar29;
          if (uVar28 <= uVar8) {
            lVar17 = (ulonglong)(uVar28 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar13 + 0x28) + (ulonglong)(uVar28 >> 5) * 8);
          }
          lVar13 = param_1[1];
          uVar5 = *(ulonglong *)(lVar13 + 0xd0);
          if (uVar22 < uVar5) {
            lVar13 = ((uVar5 - uVar22) + -1) * 0x20 + *(longlong *)(lVar13 + 200);
          }
          else {
            FUN_1434a1360(lVar13,"Invalid local register %d, stack only has %d entries",uVar22,
                          uVar5 & 0xffffffff);
            lVar13 = lVar13 + 0x48;
          }
          FUN_143411240(lVar13,lVar17);
        }
        plVar10 = (longlong *)(ulonglong)(iVar7 + 1);
        lVar31 = lVar31 + 0x10;
        lVar19 = lVar19 + -1;
        plVar15 = local_res10;
      } while (lVar19 != 0);
    }
    lVar19 = (longlong)(int)plVar10;
    if (lVar19 < *(int *)(*param_1 + 0xa8)) {
      lVar31 = lVar19 << 4;
      lVar19 = *(int *)(*param_1 + 0xa8) - lVar19;
      do {
        lVar29 = *(longlong *)(*param_1 + 0xa0);
        if (*(int *)(lVar31 + lVar29) == 0) {
          lVar17 = param_1[1];
          local_60[0] = 0;
          lVar13 = *(longlong *)(lVar17 + 0x188);
          lVar26 = *(longlong *)(lVar17 + 0x180);
          lVar2 = *(longlong *)(lVar26 + -8 + lVar13 * 8);
          if (lVar2 != 0) {
            *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
          }
          lVar13 = *(longlong *)(lVar26 + lVar13 * 8 + -8);
          if (lVar13 != 0) {
            FUN_1434a4530(lVar13 + 0x20,lVar29 + 8 + (longlong)(int)plVar10 * 0x10,local_60,
                          6 < *(byte *)(lVar17 + 0xf0));
            if ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0) {
              *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
              FUN_1434a2b80(lVar13);
            }
          }
          if (4 < local_60[0]) {
            FUN_143411150(local_60);
          }
        }
        plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
        lVar31 = lVar31 + 0x10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    plVar10 = (longlong *)0x0;
    plVar25 = local_res8;
    if (((((*(ushort *)(*param_1 + 200) & 0x10) != 0) || ((*(ushort *)(*param_1 + 200) & 0x20) == 0)
         ) && (plVar18 = (longlong *)local_res18[2], plVar18 != (longlong *)0x0)) &&
       (*(uint *)(plVar18 + 3) = (int)plVar18[3] + 1U & 0x8fffffff, plVar18 != (longlong *)0x0)) {
      if (param_1[4] != 0) {
        local_res10 = (longlong *)
                      FUN_143360a60(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_1[1] + 0xe8) + 0x28) +
                                       0x18) + 0x618));
        *(int *)(local_res10 + 3) = (int)local_res10[3] + 1;
        lVar19 = param_1[1];
        plVar25 = plVar18 + 4;
        while (plVar20 = plVar10, plVar25 != (longlong *)0x0) {
          cVar6 = (**(code **)(*plVar25 + 0x48))(plVar25,lVar19 + 0xe8,&local_res10,0);
          if (cVar6 != '\0') {
            plVar20 = plVar25 + -4;
            if (plVar25 == (longlong *)0x0) {
              plVar20 = plVar10;
            }
            if (plVar20 != (longlong *)0x0) {
              *(uint *)(plVar20 + 3) = (int)plVar20[3] + 1U & 0x8fffffff;
            }
            break;
          }
          plVar20 = plVar25 + 2;
          plVar25 = (longlong *)(*plVar20 + 0x20);
          if (*plVar20 == 0) {
            plVar25 = plVar10;
          }
        }
        plVar25 = local_res10 + 3;
        *(int *)plVar25 = (int)*plVar25 + -1;
        if ((int)*plVar25 == 0) {
          FUN_14335f920();
        }
        if (plVar20 != (longlong *)0x0) {
          *(uint *)(plVar20 + 3) = (int)plVar20[3] + 1U & 0x8fffffff;
          if ((*(uint *)(plVar18 + 3) & 0x3ffffff) != 0) {
            *(uint *)(plVar18 + 3) = *(uint *)(plVar18 + 3) - 1;
            FUN_1434a2b80(plVar18);
          }
          plVar18 = plVar20;
          if ((*(uint *)(plVar20 + 3) & 0x3ffffff) != 0) {
            *(uint *)(plVar20 + 3) = *(uint *)(plVar20 + 3) - 1;
            FUN_1434a2b80(plVar20);
          }
        }
      }
      (**(code **)(plVar18[4] + 0x70))(plVar18 + 4,&local_78,param_1[1] + 0xe8);
      plVar25 = local_res8;
      lVar19 = (**(code **)(*local_res8 + 0x50))(local_res8,0x98,0);
      if (lVar19 != 0) {
        plVar10 = (longlong *)FUN_1434971c0(lVar19,plVar18[6],plVar15,&local_78);
      }
      if ((((local_68 & 2) == 0) && (local_78 != 0)) &&
         ((*(uint *)(local_78 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_78 + 0x18) = *(uint *)(local_78 + 0x18) - 1;
        FUN_1434a2b80();
      }
      local_78 = 0;
      if ((((local_68 & 1) == 0) && (local_70 != 0)) &&
         ((*(uint *)(local_70 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) - 1;
        FUN_1434a2b80();
      }
      local_70 = 0;
      if ((*(uint *)(plVar18 + 3) & 0x3ffffff) != 0) {
        *(uint *)(plVar18 + 3) = *(uint *)(plVar18 + 3) - 1;
        FUN_1434a2b80(plVar18);
      }
    }
    uVar22 = 1;
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,1);
    if ((*(byte *)(*param_1 + 200) & 1) != 0) {
      if (plVar15 == (longlong *)0x0) {
        lVar19 = param_1[1];
        uVar22 = *(ulonglong *)(lVar19 + 0xd0);
        if (uVar22 < 2) {
          FUN_1434a1360(lVar19,"Invalid local register %d, stack only has %d entries",1,
                        uVar22 & 0xffffffff);
          puVar30 = (undefined1 *)(lVar19 + 0x48);
        }
        else {
          puVar30 = (undefined1 *)((uVar22 - 2) * 0x20 + *(longlong *)(lVar19 + 200));
        }
        FUN_143411150(puVar30);
        *puVar30 = 0;
      }
      else {
        lVar19 = param_1[1];
        uVar22 = *(ulonglong *)(lVar19 + 0xd0);
        if (uVar22 < 2) {
          FUN_1434a1360(lVar19,"Invalid local register %d, stack only has %d entries",1,
                        uVar22 & 0xffffffff);
          FUN_143412c40(lVar19 + 0x48,plVar15);
        }
        else {
          FUN_143412c40((uVar22 - 2) * 0x20 + *(longlong *)(lVar19 + 200),plVar15);
        }
      }
      uVar22 = 2;
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,2);
    }
    if ((*(byte *)(*param_1 + 200) & 2) == 0) {
      local_60[0] = 0;
      if (plVar15 != (longlong *)0x0) {
        iVar7 = (**(code **)(*plVar15 + 0x10))(plVar15);
        if (iVar7 - 2U < 4) {
          iVar7 = (**(code **)(*plVar15 + 0x10))();
          if ((iVar7 - 2U < 4) && (plVar15[3] != 0)) {
            piVar11 = *(int **)(plVar15[3] + 0x70);
            if (piVar11 == (int *)0x0) {
              piVar11 = (int *)FUN_14336c170();
            }
          }
          else {
            piVar11 = (int *)0x0;
          }
          if ((local_60[0] != 7) || (local_58 != piVar11)) {
            FUN_143411150(local_60);
            local_60[0] = 7;
            local_58 = piVar11;
            if (piVar11 != (int *)0x0) {
              *piVar11 = *piVar11 + 1;
            }
          }
        }
        else {
          iVar7 = (**(code **)(*plVar15 + 0x10))(plVar15);
          if (iVar7 - 6U < 0x27) {
            plVar15 = plVar15 + -4;
          }
          else {
            plVar15 = (longlong *)0x0;
          }
          FUN_143412aa0(local_60,plVar15);
        }
      }
      lVar19 = param_1[1];
      lVar31 = *(longlong *)(lVar19 + 0x180);
      lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0xe8) + 0x28) + 0x18);
      lVar17 = *(longlong *)(lVar19 + 0x188);
      lVar13 = *(longlong *)(lVar31 + -8 + lVar17 * 8);
      if (lVar13 != 0) {
        *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
      }
      lVar31 = *(longlong *)(lVar31 + lVar17 * 8 + -8);
      if (lVar31 != 0) {
        FUN_1434a4530(lVar31 + 0x20,lVar29 + 800,local_60,6 < *(byte *)(lVar19 + 0xf0));
        if ((*(uint *)(lVar31 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar31 + 0x18) = *(uint *)(lVar31 + 0x18) - 1;
          FUN_1434a2b80(lVar31);
        }
      }
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
    }
    lVar19 = 0;
    if (((*(ushort *)(*param_1 + 200) & 4) != 0) || ((*(ushort *)(*param_1 + 200) & 8) == 0)) {
      lVar31 = (**(code **)(*plVar25 + 0x50))(plVar25,0x98,0);
      if (lVar31 != 0) {
        lVar19 = FUN_14345d8d0(lVar31,param_1[1]);
      }
      FUN_14345e160(lVar19,*(undefined4 *)(param_1[2] + 0x38));
      iVar7 = 0;
      if (0 < *(int *)(param_1[2] + 0x38)) {
        puVar32 = (undefined1 *)0x0;
        puVar30 = puVar32;
        do {
          lVar31 = *(longlong *)(param_1[2] + 0x30);
          uVar27 = *(int *)(param_1[2] + 0x3c) - iVar7;
          puVar23 = puVar32;
          if (uVar27 <= (uint)(*(int *)(lVar31 + 0x30) * 0x20 + -0x20 +
                              (int)(*(longlong *)(lVar31 + 8) - *(longlong *)(lVar31 + 0x10) >> 5)))
          {
            puVar23 = (undefined1 *)
                      ((ulonglong)(uVar27 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar31 + 0x28) + (ulonglong)(uVar27 >> 5) * 8));
          }
          if ((-1 < (longlong)puVar30) && (iVar7 < *(int *)(lVar19 + 0x78))) {
            *(undefined1 *)(lVar19 + 0x94) = 0;
            if (*(longlong *)(*(longlong *)(lVar19 + 0x70) + (longlong)puVar30 * 8) == 0) {
              local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0x143);
              puVar12 = (undefined1 *)
                        (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar19,0x20,&local_res10)
              ;
              puVar14 = puVar32;
              if (puVar12 != (undefined1 *)0x0) {
                *puVar12 = 0;
                puVar14 = puVar12;
              }
              *(undefined1 **)(*(longlong *)(lVar19 + 0x70) + (longlong)puVar30 * 8) = puVar14;
            }
            FUN_143411240(*(undefined8 *)(*(longlong *)(lVar19 + 0x70) + (longlong)puVar30 * 8),
                          puVar23);
          }
          iVar7 = iVar7 + 1;
          puVar30 = puVar30 + 1;
        } while (iVar7 < *(int *)(param_1[2] + 0x38));
        uVar22 = (ulonglong)local_res8 & 0xffffffff;
      }
    }
    if ((*(byte *)(*param_1 + 200) & 4) != 0) {
      lVar31 = param_1[1];
      uVar5 = *(ulonglong *)(lVar31 + 0xd0);
      if (uVar22 < uVar5) {
        lVar31 = ((uVar5 - uVar22) + -1) * 0x20 + *(longlong *)(lVar31 + 200);
      }
      else {
        FUN_1434a1360(lVar31,"Invalid local register %d, stack only has %d entries",uVar22,
                      uVar5 & 0xffffffff);
        lVar31 = lVar31 + 0x48;
      }
      FUN_143412aa0(lVar31,lVar19);
      uVar22 = (ulonglong)((int)uVar22 + 1);
    }
    if ((*(byte *)(*param_1 + 200) & 8) == 0) {
      lVar31 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 0xe8) + 0x28) + 0x18);
      uVar9 = FUN_143410c00(local_60,lVar19);
      lVar29 = param_1[1];
      lVar17 = *(longlong *)(lVar29 + 0x188);
      lVar13 = *(longlong *)(lVar29 + 0x180);
      lVar26 = *(longlong *)(lVar13 + -8 + lVar17 * 8);
      if (lVar26 != 0) {
        *(uint *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + 1U & 0x8fffffff;
      }
      lVar17 = *(longlong *)(lVar13 + lVar17 * 8 + -8);
      if (lVar17 != 0) {
        FUN_1434a4530(lVar17 + 0x20,lVar31 + 0x358,uVar9,6 < *(byte *)(lVar29 + 0xf0));
        if ((*(uint *)(lVar17 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) - 1;
          FUN_1434a2b80(lVar17);
        }
      }
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
      lVar31 = param_1[1];
      local_res8 = (longlong *)CONCAT71(local_res8._1_7_,7);
      uVar27 = *(int *)(lVar31 + 0x120) * 0x20 + -0x20 +
               (int)(*(longlong *)(lVar31 + 0xf8) - *(longlong *)(lVar31 + 0x100) >> 3);
      FUN_143410c00(local_60,*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(lVar31 + 0x118) + (ulonglong)(uVar27 >> 5) * 8) +
                              (ulonglong)(uVar27 & 0x1f) * 8));
      (**(code **)(*(longlong *)(lVar19 + 0x20) + 0x50))
                (lVar19 + 0x20,(longlong *)(param_1[1] + 0xe8),
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 0xe8) + 0x28) + 0x18) +
                 0x360,local_60,&local_res8);
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
      lVar31 = param_1[1];
      local_res8 = (longlong *)CONCAT71(local_res8._1_7_,7);
      if (*(int *)(lVar31 + 0x120) * 0x20 + -0x20 +
          (int)(*(longlong *)(lVar31 + 0xf8) - *(longlong *)(lVar31 + 0x100) >> 3) == 0) {
        local_60[0] = 1;
      }
      else {
        puVar16 = (undefined8 *)0x0;
        iVar7 = *(int *)(lVar31 + 0x120) * 0x20 + -0x20 +
                (int)(*(longlong *)(lVar31 + 0xf8) - *(longlong *)(lVar31 + 0x100) >> 3);
        if (iVar7 != 0) {
          uVar27 = iVar7 - 1;
          puVar16 = (undefined8 *)
                    (*(longlong *)(*(longlong *)(lVar31 + 0x118) + (ulonglong)(uVar27 >> 5) * 8) +
                    (ulonglong)(uVar27 & 0x1f) * 8);
        }
        FUN_143410c00(local_60,*puVar16);
      }
      (**(code **)(*(longlong *)(lVar19 + 0x20) + 0x50))
                (lVar19 + 0x20,(longlong *)(param_1[1] + 0xe8),
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 0xe8) + 0x28) + 0x18) +
                 0x368,local_60,&local_res8);
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
    }
    if ((*(byte *)(*param_1 + 200) & 0x10) != 0) {
      lVar31 = param_1[1];
      uVar5 = *(ulonglong *)(lVar31 + 0xd0);
      if (uVar22 < uVar5) {
        lVar31 = ((uVar5 - uVar22) + -1) * 0x20 + *(longlong *)(lVar31 + 200);
      }
      else {
        FUN_1434a1360(lVar31,"Invalid local register %d, stack only has %d entries",uVar22,
                      uVar5 & 0xffffffff);
        lVar31 = lVar31 + 0x48;
      }
      FUN_143412aa0(lVar31,plVar10);
      uVar22 = (ulonglong)((int)uVar22 + 1);
    }
    if ((*(byte *)(*param_1 + 200) & 0x20) == 0) {
      local_60[0] = 0;
      FUN_143412aa0(local_60,plVar10);
      lVar31 = param_1[1];
      lVar29 = *(longlong *)(lVar31 + 0x180);
      lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(lVar31 + 0xe8) + 0x28) + 0x18);
      lVar13 = *(longlong *)(lVar31 + 0x188);
      lVar26 = *(longlong *)(lVar29 + -8 + lVar13 * 8);
      if (lVar26 != 0) {
        *(uint *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + 1U & 0x8fffffff;
      }
      lVar29 = *(longlong *)(lVar29 + lVar13 * 8 + -8);
      if (lVar29 != 0) {
        FUN_1434a4530(lVar29 + 0x20,lVar17 + 0x328,local_60,6 < *(byte *)(lVar31 + 0xf0));
        if ((*(uint *)(lVar29 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar29 + 0x18) = *(uint *)(lVar29 + 0x18) - 1;
          FUN_1434a2b80(lVar29);
        }
      }
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
    }
    if ((*(byte *)(*param_1 + 200) & 0x40) != 0) {
      lVar31 = param_1[1];
      uVar5 = *(ulonglong *)(lVar31 + 0xd0);
      plVar25 = *(longlong **)(lVar31 + 0xe0);
      if (uVar22 < uVar5) {
        pcVar24 = (char *)(((uVar5 - uVar22) + -1) * 0x20 + *(longlong *)(lVar31 + 200));
      }
      else {
        FUN_1434a1360(lVar31,"Invalid local register %d, stack only has %d entries",uVar22,
                      uVar5 & 0xffffffff);
        pcVar24 = (char *)(lVar31 + 0x48);
      }
      lVar31 = (**(code **)(*plVar25 + 0x228))(plVar25,0);
      if (lVar31 == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = *(int **)(lVar31 + 0x70);
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)FUN_14336c170(lVar31);
        }
      }
      if ((*pcVar24 != '\a') || (*(int **)(pcVar24 + 8) != piVar11)) {
        FUN_143411150(pcVar24);
        *pcVar24 = '\a';
        *(int **)(pcVar24 + 8) = piVar11;
        if (piVar11 != (int *)0x0) {
          *piVar11 = *piVar11 + 1;
        }
      }
      uVar22 = (ulonglong)((int)uVar22 + 1);
    }
    if ((*(byte *)(*param_1 + 200) & 0x80) != 0) {
      local_60[0] = 0;
      FUN_1434175f0(param_1[1],
                    *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 0xe8) + 0x28) + 0x18) +
                    0x340,local_60,0,0,0,0);
      lVar31 = param_1[1];
      uVar5 = *(ulonglong *)(lVar31 + 0xd0);
      if (uVar22 < uVar5) {
        lVar31 = ((uVar5 - uVar22) + -1) * 0x20 + *(longlong *)(lVar31 + 200);
      }
      else {
        FUN_1434a1360(lVar31,"Invalid local register %d, stack only has %d entries",uVar22,
                      uVar5 & 0xffffffff);
        lVar31 = lVar31 + 0x48;
      }
      FUN_143411240(lVar31,local_60);
      uVar22 = (ulonglong)((int)uVar22 + 1);
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
    }
    if ((*(ushort *)(*param_1 + 200) & 0x100) != 0) {
      lVar31 = param_1[1];
      uVar5 = *(ulonglong *)(lVar31 + 0xd0);
      uVar9 = *(undefined8 *)(*(longlong *)(lVar31 + 0xe8) + 0x60);
      if (uVar22 < uVar5) {
        lVar31 = ((uVar5 - uVar22) + -1) * 0x20 + *(longlong *)(lVar31 + 200);
      }
      else {
        FUN_1434a1360(lVar31,"Invalid local register %d, stack only has %d entries",uVar22,
                      uVar5 & 0xffffffff);
        lVar31 = lVar31 + 0x48;
      }
      FUN_143412aa0(lVar31,uVar9);
    }
    if ((lVar19 != 0) && ((*(uint *)(lVar19 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar19 + 0x18) = *(uint *)(lVar19 + 0x18) - 1;
      FUN_1434a2b80(lVar19);
    }
    if ((plVar10 != (longlong *)0x0) && ((*(uint *)(plVar10 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) - 1;
      FUN_1434a2b80(plVar10);
    }
  }
  else {
    bVar1 = *(byte *)(param_1[1] + 0xf0);
    if (plVar15 != (longlong *)0x0) {
      local_60[0] = 0;
      FUN_143412c40(local_60,plVar15);
      lVar19 = param_1[1];
      lVar31 = *(longlong *)(lVar19 + 0x180);
      lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0xe8) + 0x28) + 0x18);
      lVar17 = *(longlong *)(lVar19 + 0x188);
      lVar13 = *(longlong *)(lVar31 + -8 + lVar17 * 8);
      if (lVar13 != 0) {
        *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
      }
      lVar31 = *(longlong *)(lVar31 + lVar17 * 8 + -8);
      if (lVar31 != 0) {
        FUN_1434a4530(lVar31 + 0x20,lVar29 + 800,local_60,6 < *(byte *)(lVar19 + 0xf0));
        if ((*(uint *)(lVar31 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar31 + 0x18) = *(uint *)(lVar31 + 0x18) - 1;
          FUN_1434a2b80(lVar31);
        }
      }
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
    }
    if ((5 < bVar1) && (param_1[9] != 0)) {
      *(longlong **)(param_1[9] + 0x30) = plVar25;
    }
    if (((param_1[9] != 0) && (lVar19 = *(longlong *)(param_1[2] + 0x30), lVar19 != 0)) &&
       (4 < bVar1)) {
      if (param_1[1] != lVar19) {
        FUN_143499e70(param_1 + 6,*(undefined8 *)(lVar19 + 0xe0));
      }
      *(undefined8 *)(param_1[9] + 0x38) = *(undefined8 *)(param_1[2] + 0x30);
      *(undefined4 *)(param_1[9] + 0x40) = *(undefined4 *)(param_1[2] + 0x38);
      *(undefined4 *)(param_1[9] + 0x44) = *(undefined4 *)(param_1[2] + 0x3c);
      lVar19 = param_1[9];
      uVar9 = FUN_14349dad0(param_1[1],local_60,0);
      FUN_143411240(lVar19 + 0x48,uVar9);
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
      lVar19 = param_1[9];
      uVar9 = FUN_14349dad0(param_1[1],local_60,1);
      FUN_143411240(lVar19 + 0x68,uVar9);
      if (4 < local_60[0]) {
        FUN_143411150(local_60);
      }
    }
    uVar27 = 0;
    iVar7 = (int)*(undefined8 *)(*param_1 + 0xa8);
    if (*(int *)(param_1[2] + 0x38) < iVar7) {
      iVar7 = *(int *)(param_1[2] + 0x38);
    }
    plVar25 = plVar10;
    if (0 < iVar7) {
      do {
        lVar19 = *(longlong *)(param_1[2] + 0x30);
        iVar21 = (int)plVar25;
        uVar27 = *(int *)(param_1[2] + 0x3c) - iVar21;
        plVar25 = plVar10;
        if (uVar27 <= (uint)(*(int *)(lVar19 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar19 + 8) - *(longlong *)(lVar19 + 0x10) >> 5))) {
          plVar25 = (longlong *)
                    ((ulonglong)(uVar27 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar19 + 0x28) + (ulonglong)(uVar27 >> 5) * 8));
        }
        lVar19 = param_1[1];
        lVar31 = *(longlong *)(*param_1 + 0xa0);
        lVar29 = *(longlong *)(lVar19 + 0x180);
        lVar17 = *(longlong *)(lVar19 + 0x188);
        lVar13 = *(longlong *)(lVar29 + -8 + lVar17 * 8);
        if (lVar13 != 0) {
          *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
        }
        lVar29 = *(longlong *)(lVar29 + lVar17 * 8 + -8);
        if (lVar29 != 0) {
          FUN_1434a4530(lVar29 + 0x20,(longlong)iVar21 * 0x10 + lVar31 + 8,plVar25,
                        CONCAT71((int7)((ulonglong)lVar19 >> 8),6 < *(byte *)(lVar19 + 0xf0)));
          if ((*(uint *)(lVar29 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar29 + 0x18) = *(uint *)(lVar29 + 0x18) - 1;
            FUN_1434a2b80(lVar29);
          }
        }
        uVar27 = iVar21 + 1;
        plVar25 = (longlong *)(ulonglong)uVar27;
      } while ((int)uVar27 < iVar7);
    }
    if ((int)uVar27 < *(int *)(*param_1 + 0xa8)) {
      lVar19 = (longlong)(int)uVar27 << 4;
      uVar22 = (ulonglong)(*(int *)(*param_1 + 0xa8) - uVar27);
      do {
        lVar31 = param_1[1];
        local_60[0] = 0;
        lVar29 = *(longlong *)(*param_1 + 0xa0);
        lVar17 = *(longlong *)(lVar31 + 0x188);
        lVar13 = *(longlong *)(lVar31 + 0x180);
        lVar26 = *(longlong *)(lVar13 + -8 + lVar17 * 8);
        if (lVar26 != 0) {
          *(uint *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + 1U & 0x8fffffff;
        }
        lVar17 = *(longlong *)(lVar13 + lVar17 * 8 + -8);
        if (lVar17 != 0) {
          FUN_1434a4530(lVar17 + 0x20,lVar29 + 8 + lVar19,local_60,6 < *(byte *)(lVar31 + 0xf0));
          if ((*(uint *)(lVar17 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) - 1;
            FUN_1434a2b80(lVar17);
          }
        }
        if (4 < local_60[0]) {
          FUN_143411150(local_60);
        }
        lVar19 = lVar19 + 0x10;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  return;
}



// FUNCTION 1434845d0 FUN_1434845d0 body=765 status=ok
// SIG undefined FUN_1434845d0(void)

void FUN_1434845d0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong *puVar12;
  byte local_28 [32];
  
  plVar10 = (longlong *)(param_1[8] + 0x20);
  if (param_1[8] == 0) {
    plVar10 = (longlong *)0x0;
  }
  if ((plVar10 != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*plVar10 + 0x78))(plVar10), cVar6 != '\0')) {
    plVar8 = plVar10 + -4;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    Scaleform::GFx::AS2::SuperObject::ResetAltProto(plVar8);
  }
  if ((*(char *)(*param_1 + 0xca) != '\x02') || ((*(byte *)(*param_1 + 200) & 2) == 0)) {
    lVar11 = param_1[1];
    local_28[0] = 0;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18);
    if ((*(longlong *)(lVar11 + 0x188) != 0) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0x180) + -8 + *(longlong *)(lVar11 + 0x188) * 8) != 0))
    {
      lVar7 = FUN_143419a10(lVar11,lVar2 + 800);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(lVar11 + 0x188);
        lVar3 = *(longlong *)(lVar11 + 0x180);
        lVar4 = *(longlong *)(lVar3 + -8 + lVar7 * 8);
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
        }
        lVar7 = *(longlong *)(lVar3 + lVar7 * 8 + -8);
        if (lVar7 != 0) {
          FUN_1434a4530(lVar7 + 0x20,lVar2 + 800,local_28,6 < *(byte *)(lVar11 + 0xf0));
          if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
            FUN_1434a2b80(lVar7);
          }
        }
      }
      else {
        FUN_143411240(lVar7,local_28);
      }
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
    }
  }
  if ((*(char *)(*param_1 + 0xca) != '\x02') || ((*(byte *)(*param_1 + 200) & 0x20) == 0)) {
    lVar11 = param_1[1];
    local_28[0] = 0;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18);
    if ((*(longlong *)(lVar11 + 0x188) != 0) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0x180) + -8 + *(longlong *)(lVar11 + 0x188) * 8) != 0))
    {
      lVar7 = FUN_143419a10(lVar11,lVar2 + 0x328);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(lVar11 + 0x188);
        lVar3 = *(longlong *)(lVar11 + 0x180);
        lVar4 = *(longlong *)(lVar3 + -8 + lVar7 * 8);
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
        }
        lVar7 = *(longlong *)(lVar3 + lVar7 * 8 + -8);
        if (lVar7 != 0) {
          FUN_1434a4530(lVar7 + 0x20,lVar2 + 0x328,local_28,6 < *(byte *)(lVar11 + 0xf0));
          if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
            FUN_1434a2b80(lVar7);
          }
        }
      }
      else {
        FUN_143411240(lVar7,local_28);
      }
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
    }
  }
  lVar11 = param_1[1];
  uVar1 = *(uint *)(param_1 + 10);
  uVar5 = *(ulonglong *)(lVar11 + 0x188);
  FUN_1434a39d0(lVar11 + 0x180,lVar11 + 0x180,uVar1);
  if (uVar5 < uVar1) {
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x180) + uVar5 * 8);
    for (lVar11 = uVar1 - uVar5; lVar11 != 0; lVar11 = lVar11 + -1) {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
      }
      puVar9 = puVar9 + 1;
    }
  }
  if (*(char *)(*param_1 + 0xca) == '\x02') {
    FUN_14349eb50(param_1[1],*(undefined1 *)(*param_1 + 0xcb));
  }
  lVar11 = param_1[1];
  if (lVar11 != 0) {
    puVar12 = (ulonglong *)(lVar11 + 0xf8);
    lVar2 = *(longlong *)*puVar12;
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *puVar12 = *puVar12 - 8;
    if (*puVar12 < *(ulonglong *)(lVar11 + 0x100)) {
      FUN_1434a2500(puVar12);
    }
  }
  return;
}



// FUNCTION 1434848e0 FUN_1434848e0 body=230 status=ok
// SIG undefined FUN_1434848e0(void)

void FUN_1434848e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1);
      if (cVar2 != '\0') {
        local_40 = *(undefined8 *)(param_2 + 8);
        local_18 = *(undefined8 *)(param_2 + 0x30);
        local_10 = *(undefined4 *)(param_2 + 0x38);
        local_c = *(undefined4 *)(param_2 + 0x3c);
        local_38 = plVar1[0xb];
        local_30 = 0;
        local_28 = 0;
        local_48 = &PTR_FUN_145b0ab98;
        local_20 = 0;
        FUN_1434849d0(param_1,&local_48);
        Scaleform::GFx::AS2::SuperObject::ResetAltProto(plVar1 + -4);
        local_48 = &PTR_FUN_145b0ab98;
        FUN_14349ebc0(&local_30);
        return;
      }
    }
    FUN_1434849d0(param_1,param_2);
  }
  return;
}



// FUNCTION 1434849d0 FUN_1434849d0 body=952 status=ok
// SIG undefined FUN_1434849d0(void)

void FUN_1434849d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong *local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  undefined8 local_90;
  byte local_80 [32];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  
  iVar3 = 0;
  lVar4 = *(longlong *)(param_2 + 0x30);
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_100 = (longlong *)0x0;
  local_f8 = 0;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  local_80[0] = 0;
  local_110 = 0xffffffffffffffff;
  uStack_108 = 0xffffffffffffffff;
  local_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_143411150(local_80);
    local_80[0] = 1;
  }
  else {
    FUN_143412c40();
  }
  bVar1 = local_80[0];
  FUN_14343bb60(*(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10) + 0x18),
                lVar4,local_80,&local_110);
  FUN_1434a3e20(&local_128,&local_128,1);
  lVar5 = local_120;
  lVar8 = local_128;
  puVar2 = (undefined8 *)(local_128 + -0x30 + local_120 * 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = 0;
    *(uint *)(puVar2 + 3) = local_f8;
    puVar2[4] = local_f0;
    puVar2[5] = local_e8;
    if ((local_f8 >> 6 & 1) != 0) {
      puVar2[2] = local_100;
      (**(code **)(*local_100 + 8))(local_100,puVar2,puVar2[4]);
    }
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      lVar6 = 0;
      lVar8 = *(longlong *)(param_2 + 0x30);
      local_d0 = (longlong *)0x0;
      uVar7 = *(int *)(param_2 + 0x3c) - iVar3;
      local_c8 = 0;
      local_e0 = 0xffffffffffffffff;
      uStack_d8 = 0xffffffffffffffff;
      if (uVar7 <= (uint)(*(int *)(lVar8 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar8 + 8) - *(longlong *)(lVar8 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
      }
      FUN_14343bb60(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10) + 0x18
                     ),lVar4,lVar6,&local_e0);
      FUN_1434a3e20(&local_128,&local_128,lVar5 + 1);
      lVar5 = local_120;
      lVar8 = local_128;
      puVar2 = (undefined8 *)(local_128 + -0x30 + local_120 * 0x30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0xffffffffffffffff;
        puVar2[1] = 0xffffffffffffffff;
        puVar2[2] = 0;
        *(uint *)(puVar2 + 3) = local_c8;
        puVar2[4] = local_c0;
        puVar2[5] = local_b8;
        if ((local_c8 >> 6 & 1) != 0) {
          puVar2[2] = local_d0;
          (**(code **)(*local_d0 + 8))(local_d0,puVar2,puVar2[4]);
        }
      }
      if ((local_c8 >> 6 & 1) != 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0,&local_e0,local_c0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 0x38));
  }
  local_58 = *(undefined8 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10) + 0x18) +
              0x10);
  local_60 = &local_b0;
  local_50 = &local_110;
  if (*(int *)(param_2 + 0x38) < 1) {
    local_40 = 0;
  }
  else {
    local_40 = lVar8 + 0x30;
  }
  local_38 = (int)lVar5 + -1;
  local_30 = *(undefined8 *)(param_1 + 0x70);
  local_48 = lVar8;
  (**(code **)(**(longlong **)(param_1 + 0x68) + 8))(*(longlong **)(param_1 + 0x68),&local_60);
  if ((local_98 & 0x8f) != 0) {
    FUN_14343b9a0(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10) + 0x18),
                  &local_b0,*(undefined8 *)(param_2 + 8));
  }
  if (4 < bVar1) {
    FUN_143411150(local_80);
  }
  if ((local_98 >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,local_90);
    local_a0 = (longlong *)0x0;
  }
  local_98 = 0;
  if ((local_f8 >> 6 & 1) != 0) {
    (**(code **)(*local_100 + 0x10))(local_100,&local_110,local_f0);
    local_100 = (longlong *)0x0;
  }
  local_f8 = 0;
  lVar4 = lVar8 + -0x30 + lVar5 * 0x30;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    if ((*(uint *)(lVar4 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x10))
                (*(longlong **)(lVar4 + 0x10),lVar4,*(undefined8 *)(lVar4 + 0x20));
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar4 = lVar4 + -0x30;
  }
  if (lVar8 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
  }
  return;
}



// FUNCTION 143484d90 FUN_143484d90 body=160 status=ok
// SIG undefined FUN_143484d90(void)

longlong * FUN_143484d90(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
  param_1[2] = lVar1;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x58);
  lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 0xf0))
                    (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
  *param_1 = param_3;
  param_1[1] = lVar1;
  if (param_4 != '\0') {
    lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_3);
    if (lVar1 == 0) {
      *param_1 = 0;
    }
    else {
      lVar2 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
      lVar1 = lVar2 + 8;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      *param_1 = lVar1;
    }
  }
  return param_1;
}



// FUNCTION 143484e40 FUN_143484e40 body=126 status=ok
// SIG undefined FUN_143484e40(void)

void FUN_143484e40(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *(uint *)(param_2 + 3) & 0x8f;
  if (uVar2 == 6) {
    param_3[6] = param_3[6] + 1;
  }
  else if (uVar2 == 7) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)(param_3 + -6));
  }
  else if (7 < uVar2) {
    if (uVar2 < 10) {
      lVar3 = Scaleform::GFx::AS2::ObjectInterface::ToASObject(param_3);
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    else if (uVar2 == 10) {
      *param_3 = *param_3 + 1;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = plVar1;
  *(undefined8 **)(*plVar1 + 8) = param_2;
  *plVar1 = (longlong)param_2;
  return;
}



// FUNCTION 143484ed0 FUN_143484ed0 body=188 status=ok
// SIG undefined FUN_143484ed0(void)

void FUN_143484ed0(undefined8 param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *(uint *)(param_2 + 3) & 0x8f;
  if (uVar2 == 6) {
    piVar1 = param_3 + 6;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(param_3);
    }
  }
  else if (uVar2 == 7) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)(param_3 + -6));
  }
  else if (7 < uVar2) {
    if (uVar2 < 10) {
      lVar3 = Scaleform::GFx::AS2::ObjectInterface::ToASObject(param_3);
      if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
    }
    else if ((uVar2 == 10) && (*param_3 = *param_3 + -1, *param_3 < 1)) {
      FUN_14336bed0(param_3);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_3);
    }
  }
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  return;
}



// FUNCTION 143484fa0 FUN_143484fa0 body=265 status=ok
// SIG undefined FUN_143484fa0(void)

ulonglong FUN_143484fa0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_res8;
  byte local_38 [32];
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x10) + 0x58);
  uVar4 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))
                    (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  uVar6 = uVar4;
  if (param_4 != '\0') {
    lVar5 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar5);
    uVar6 = 0;
    if ((lVar5 == 0) ||
       (uVar6 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 8))
                          (lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4), uVar6 == 0))
    goto LAB_143485013;
    param_2 = (longlong *)(uVar6 + 8);
  }
  if (param_2 != (longlong *)0x0) {
    local_38[0] = 0;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)(param_3 + lVar5) != '\0');
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar4 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),param_3,lVar5,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    cVar3 = (**(code **)(*param_2 + 0x20))(param_2,uVar4,&local_res8,local_38);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    return (ulonglong)(cVar3 != '\0');
  }
LAB_143485013:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1434850b0 FUN_1434850b0 body=445 status=ok
// SIG undefined FUN_1434850b0(void)

ulonglong FUN_1434850b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                       char param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_res8;
  byte local_38 [32];
  
  lVar7 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar7 + 0x18);
  lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
  uVar6 = (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 0xf0))();
  uVar8 = uVar6;
  if (param_5 != '\0') {
    lVar7 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar7);
    uVar8 = 0;
    if ((lVar7 == 0) ||
       (uVar8 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 8))
                          (lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4), uVar8 == 0))
    goto LAB_14348512c;
    param_2 = (longlong *)(uVar8 + 8);
  }
  if (param_2 != (longlong *)0x0) {
    local_38[0] = 0;
    local_res8 = FUN_143360a60(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar6 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),param_3);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    cVar3 = (**(code **)(*param_2 + 0x20))(param_2,uVar6,&local_res8,local_38);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (cVar3 == '\0') {
      if (param_4 != 0) {
        FUN_142055bf0(param_4);
      }
      uVar8 = 0;
    }
    else {
      if (local_38[0] == 9) {
        lVar7 = 0;
        iVar5 = (**(code **)(*param_2 + 0x10))(param_2);
        if ((iVar5 - 6U < 0x27) &&
           (lVar9 = Scaleform::GFx::AS2::ObjectInterface::ToASObject(param_2), lVar9 != 0)) {
          lVar7 = lVar9 + 0x20;
        }
        iVar5 = (**(code **)(*param_2 + 0x10))(param_2);
        if ((iVar5 - 2U < 4) &&
           (lVar9 = Scaleform::GFx::AS2::ObjectInterface::ToAvmCharacter(param_2), lVar9 != 0)) {
          lVar7 = lVar9 + 8;
        }
        FUN_143413c30(local_38,uVar6,lVar7,local_38);
      }
      FUN_14343bb60(lVar2,uVar6,local_38,param_4);
      uVar8 = 1;
    }
    if (local_38[0] < 5) {
      return uVar8;
    }
    FUN_143411150(local_38);
    return uVar8;
  }
LAB_14348512c:
  if (param_4 != 0) {
    uVar4 = *(uint *)(param_4 + 0x18) >> 6;
    uVar8 = (ulonglong)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar8 = (**(code **)(**(longlong **)(param_4 + 0x10) + 0x10))
                        (*(longlong **)(param_4 + 0x10),param_4,*(undefined8 *)(param_4 + 0x20));
      *(undefined8 *)(param_4 + 0x10) = 0;
    }
    *(undefined4 *)(param_4 + 0x18) = 0;
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 143485280 FUN_143485280 body=298 status=ok
// SIG undefined FUN_143485280(void)

ulonglong FUN_143485280(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       char param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_res8;
  byte local_38 [32];
  
  lVar6 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar6 + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
  uVar5 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
  uVar7 = uVar5;
  if (param_5 != '\0') {
    lVar6 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar6);
    uVar7 = 0;
    if ((lVar6 == 0) ||
       (uVar7 = (**(code **)(*(longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4) + 8))
                          (lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4), uVar7 == 0))
    goto LAB_1434852fc;
    param_2 = (longlong *)(uVar7 + 8);
  }
  if (param_2 != (longlong *)0x0) {
    local_38[0] = 0;
    FUN_14343b9a0(lVar2,param_4,local_38);
    param_5 = 0;
    local_res8 = FUN_143360a60(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar5 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),param_3);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    bVar4 = (**(code **)(*param_2 + 0x18))(param_2,uVar5,&local_res8,local_38,&param_5);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    return (ulonglong)bVar4;
  }
LAB_1434852fc:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 1434853b0 FUN_1434853b0 body=650 status=ok
// SIG undefined FUN_1434853b0(void)

ulonglong FUN_1434853b0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                       longlong param_5,uint param_6,char param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_res8;
  byte local_88 [32];
  byte local_68 [32];
  byte local_48 [32];
  
  lVar8 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar8 + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
  uVar7 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
  uVar9 = uVar7;
  if (param_7 != '\0') {
    lVar8 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar8);
    uVar9 = 0;
    if ((lVar8 == 0) ||
       (uVar9 = (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 8))
                          (lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4), uVar9 == 0))
    goto LAB_143485429;
    param_2 = (longlong *)(uVar9 + 8);
  }
  if (param_2 != (longlong *)0x0) {
    local_48[0] = 0;
    local_68[0] = 0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(param_4 + lVar8) != '\0');
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar7 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),param_4,lVar8,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    cVar5 = (**(code **)(*param_2 + 0x58))(param_2,(longlong *)(uVar7 + 0xe8),&local_res8,local_48);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (cVar5 == '\0') {
      bVar6 = 0;
    }
    else {
      local_88[0] = 0;
      if (-1 < (int)(param_6 - 1)) {
        uVar9 = (ulonglong)param_6;
        param_5 = (longlong)(int)(param_6 - 1) * 0x30 + param_5;
        do {
          FUN_14343b9a0(lVar2,param_5,local_88);
          *(longlong *)(uVar7 + 8) = *(longlong *)(uVar7 + 8) + 0x20;
          if (*(ulonglong *)(uVar7 + 0x18) <= *(ulonglong *)(uVar7 + 8)) {
            FUN_1434a29d0(uVar7 + 8);
          }
          if (*(longlong *)(uVar7 + 8) != 0) {
            FUN_143410ec0(*(longlong *)(uVar7 + 8),local_88);
          }
          param_5 = param_5 + -0x30;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      bVar4 = local_88[0];
      bVar6 = FUN_14341e410(local_48,local_68,param_2,uVar7,param_6,
                            (int)(*(longlong *)(uVar7 + 8) - *(longlong *)(uVar7 + 0x10) >> 5) +
                            *(int *)(uVar7 + 0x30) * 0x20 + -0x20,0);
      for (; param_6 != 0; param_6 = param_6 - 1) {
        if (4 < **(byte **)(uVar7 + 8)) {
          FUN_143411150();
        }
        *(longlong *)(uVar7 + 8) = *(longlong *)(uVar7 + 8) + -0x20;
        if (*(ulonglong *)(uVar7 + 8) < *(ulonglong *)(uVar7 + 0x10)) {
          FUN_1434a25c0(uVar7 + 8);
        }
      }
      if (param_3 != 0) {
        FUN_14343bb60(lVar2,uVar7,local_68,param_3);
      }
      if (4 < bVar4) {
        FUN_143411150(local_88);
      }
    }
    if (4 < local_68[0]) {
      FUN_143411150(local_68);
    }
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
    return (ulonglong)bVar6;
  }
LAB_143485429:
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 143485650 FUN_143485650 body=238 status=ok
// SIG undefined FUN_143485650(void)

ulonglong FUN_143485650(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_res8;
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x10) + 0x58);
  uVar4 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))
                    (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  uVar6 = uVar4;
  if (param_4 != '\0') {
    lVar5 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar5);
    uVar6 = 0;
    if ((lVar5 == 0) ||
       (uVar6 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 8))
                          (lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4), uVar6 == 0))
    goto LAB_1434856c3;
    param_2 = (longlong *)(uVar6 + 8);
  }
  if (param_2 != (longlong *)0x0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)(param_3 + lVar5) != '\0');
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar4 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),param_3,lVar5,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    bVar3 = (**(code **)(*param_2 + 0x30))(param_2,(longlong *)(uVar4 + 0xe8),&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    return (ulonglong)bVar3;
  }
LAB_1434856c3:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143485750 FUN_143485750 body=211 status=ok
// SIG undefined FUN_143485750(void)

void FUN_143485750(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(lVar3 + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x58);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))();
  if (param_4 != '\0') {
    lVar3 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,lVar3);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))();
      if (lVar3 != 0) {
        param_2 = (longlong *)(lVar3 + 8);
        goto LAB_1434857c8;
      }
    }
    param_2 = (longlong *)0x0;
  }
LAB_1434857c8:
  local_38 = &PTR_FUN_145b13020;
  local_30 = lVar1;
  local_28 = lVar2;
  local_20 = param_3;
  (**(code **)(*param_2 + 0x40))(param_2,lVar2 + 0xe8,&local_38,3,0);
  return;
}



// FUNCTION 143485850 FUN_143485850 body=32 status=ok
// SIG undefined FUN_143485850(void)

undefined8 FUN_143485850(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 + -0x20;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_14345e160(lVar1,param_3);
  return 1;
}



// FUNCTION 143485880 FUN_143485880 body=187 status=ok
// SIG undefined FUN_143485880(void)

undefined8 FUN_143485880(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_2 + -0x20;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  if ((*(uint *)(param_4 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_4 + 0x10) + 0x10))
              (*(longlong **)(param_4 + 0x10),param_4,*(undefined8 *)(param_4 + 0x20));
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  *(undefined4 *)(param_4 + 0x18) = 0;
  if (param_3 < *(uint *)(lVar4 + 0x78)) {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)(int)param_3 * 8);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x58);
      uVar3 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))
                        (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
      FUN_14343bb60(lVar1,uVar3,lVar4,param_4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143485950 FUN_143485950 body=210 status=ok
// SIG undefined FUN_143485950(void)

undefined8 FUN_143485950(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 local_res18 [4];
  byte local_28 [32];
  
  puVar3 = (undefined1 *)0x0;
  local_28[0] = 0;
  puVar4 = (undefined1 *)(param_2 + -0x20);
  if (param_2 == 0) {
    puVar4 = puVar3;
  }
  FUN_14343b9a0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),param_4,local_28);
  puVar4[0x94] = 0;
  if (*(int *)(puVar4 + 0x78) <= param_3) {
    FUN_14345e160(puVar4,param_3 + 1);
  }
  lVar1 = (longlong)param_3 * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(puVar4 + 0x70)) == 0) {
    local_res18[0] = 0x143;
    puVar2 = (undefined1 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,puVar4,0x20,local_res18);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      puVar3 = puVar2;
    }
    *(undefined1 **)(lVar1 + *(longlong *)(puVar4 + 0x70)) = puVar3;
  }
  FUN_143411240(*(undefined8 *)(lVar1 + *(longlong *)(puVar4 + 0x70)),local_28);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return 1;
}



// FUNCTION 143485a30 FUN_143485a30 body=351 status=ok
// SIG undefined FUN_143485a30(void)

void FUN_143485a30(longlong param_1,longlong param_2,longlong *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint local_30;
  undefined8 local_28;
  
  uVar5 = 0;
  uVar6 = param_2 - 0x20;
  if (param_2 == 0) {
    uVar6 = uVar5;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
  uVar4 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
  uVar1 = *(uint *)(uVar6 + 0x78);
  local_30 = 0;
  local_38 = (longlong *)0x0;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  if (param_4 < uVar1) {
    if (param_5 < 0) {
      param_5 = uVar1 - param_4;
    }
    uVar7 = param_4 + param_5;
    if (uVar1 < param_4 + param_5) {
      uVar7 = uVar1;
    }
    for (; param_4 < uVar7; param_4 = param_4 + 1) {
      lVar3 = *(longlong *)(*(longlong *)(uVar6 + 0x70) + (longlong)(int)param_4 * 8);
      if (lVar3 == 0) {
        if ((uVar5 >> 6 & 1) != 0) {
          (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
          local_38 = (longlong *)0x0;
        }
        local_30 = 0;
      }
      else {
        FUN_14343bb60(lVar2,uVar4,lVar3,&local_48);
      }
      (**(code **)(*param_3 + 8))(param_3,param_4,&local_48);
      uVar5 = (ulonglong)local_30;
    }
  }
  if ((local_30 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
  }
  return;
}



// FUNCTION 143485ba0 FUN_143485ba0 body=86 status=ok
// SIG undefined FUN_143485ba0(void)

undefined8 FUN_143485ba0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  byte local_28 [32];
  
  local_28[0] = 0;
  FUN_14343b9a0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),param_3,local_28);
  lVar1 = param_2 + -0x20;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_14345e390(lVar1,local_28);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return 1;
}



// FUNCTION 143485c00 FUN_143485c00 body=196 status=ok
// SIG undefined FUN_143485c00(void)

undefined8 FUN_143485c00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar4 = param_2 + -0x20;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x58);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))();
  if (*(int *)(lVar4 + 0x78) < 1) {
    if (param_3 != 0) {
      if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
                  (*(longlong **)(param_3 + 0x10),param_3,*(undefined8 *)(param_3 + 0x20));
        *(undefined8 *)(param_3 + 0x10) = 0;
      }
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      FUN_14343bb60(lVar1,uVar3,
                    *(undefined8 *)
                     (*(longlong *)(lVar4 + 0x70) + (longlong)(*(int *)(lVar4 + 0x78) + -1) * 8),
                    param_3);
    }
    if (*(longlong *)(lVar4 + 0x78) != 0) {
      FUN_14345e160(lVar4,*(int *)(lVar4 + 0x78) + -1);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143485cd0 FUN_143485cd0 body=74 status=ok
// SIG undefined FUN_143485cd0(void)

undefined8 FUN_143485cd0(undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_2 + -0x20;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x78);
  if (uVar1 <= param_3) {
    return 0;
  }
  if ((int)param_4 < 0) {
    param_4 = uVar1 - param_3;
  }
  if (uVar1 - param_3 < param_4) {
    param_4 = uVar1 - param_3;
  }
  FUN_14345e5d0(lVar2,param_3,param_4);
  return 1;
}



// FUNCTION 143485d90 IsDisplayObjectActive body=30 status=ok
// SIG undefined IsDisplayObjectActive(void)

bool Scaleform::GFx::AS2ValueObjectInterface::IsDisplayObjectActive
               (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  return lVar1 != 0;
}



// FUNCTION 143485dc0 FUN_143485dc0 body=278 status=ok
// SIG undefined FUN_143485dc0(void)

undefined8 FUN_143485dc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x70);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    if (lVar2 == 0) {
      lVar2 = FUN_14336c170();
    }
    plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + 0x40);
    lVar3 = Scaleform::GFx::CharacterHandle::ResolveCharacter(lVar2);
    if ((lVar3 != 0) && ((*(ushort *)(lVar3 + 0x6a) & 0x480) != 0)) {
      if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
                  (*(longlong **)(param_3 + 0x10),param_3,*(undefined8 *)(param_3 + 0x20));
        *(undefined8 *)(param_3 + 0x10) = 0;
      }
      *(undefined4 *)(param_3 + 0x18) = 0x4a;
      *(longlong *)(param_3 + 0x20) = lVar2;
      *(longlong **)(param_3 + 0x10) = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1,param_3,lVar2);
      return 1;
    }
    return 0;
  }
  if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
              (*(longlong **)(param_3 + 0x10),param_3,*(undefined8 *)(param_3 + 0x20));
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  *(undefined4 *)(param_3 + 0x18) = 1;
  return 1;
}



// FUNCTION 143485ee0 FUN_143485ee0 body=782 status=ok
// SIG undefined FUN_143485ee0(void)

undefined8 FUN_143485ee0(longlong param_1,undefined8 param_2,double *param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  double dVar12;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  plVar9 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  uVar10 = 0;
  if (plVar9 != (longlong *)0x0) {
    local_a0 = 100.0;
    dStack_98 = 100.0;
    dStack_90 = 0.0;
    local_88 = 0x3f800000;
    uStack_80 = 0;
    local_78 = 0x3f80000000000000;
    uStack_70 = 0;
    local_68 = 0.0;
    dStack_60 = 100.0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_a8 = 0;
    FUN_14336b690(plVar9,&local_a8);
    iVar8 = (**(code **)(*plVar9 + 0x290))(plVar9);
    dVar5 = dStack_90;
    dVar4 = dStack_98;
    dVar12 = local_a0;
    if (iVar8 == 4) {
      FUN_143dea570(plVar9,param_3);
    }
    else {
      iVar8 = (int)local_a8;
      iVar3 = local_a8._4_4_;
      lVar11 = FUN_1433679a0(plVar9);
      fVar1 = *(float *)(lVar11 + 0xc);
      uVar6 = (**(code **)(*plVar9 + 0x1d8))(plVar9);
      *(undefined1 *)((longlong)param_3 + 0xd6) = uVar6;
      *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x7ff;
      param_3[7] = local_58;
      param_3[8] = dStack_50;
      param_3[2] = dVar5;
      *param_3 = (double)iVar8 * 0.05;
      param_3[5] = (double)(fVar1 * 100.0);
      param_3[3] = dVar12;
      param_3[4] = dVar4;
      param_3[1] = (double)iVar3 * 0.05;
      param_3[6] = local_68;
      param_3[9] = dStack_60;
    }
    dVar12 = (double)(**(code **)(*plVar9 + 0x140))(plVar9);
    param_3[10] = dVar12;
    *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x800;
    local_e8 = 5.26354424712089e-315;
    local_d8 = 0.0078125;
    dStack_c0 = 5.26354424712089e-315;
    dStack_b0 = 0.0078125;
    dStack_e0 = 0.0;
    dStack_d0 = 0.0;
    local_c8 = 0.0;
    local_b8 = 0.0;
    cVar7 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_e8,0);
    if (cVar7 != '\0') {
      *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x1000;
      param_3[0x12] = local_e8;
      param_3[0x13] = dStack_e0;
      param_3[0x14] = local_d8;
      param_3[0x15] = dStack_d0;
      param_3[0x16] = local_c8;
      param_3[0x17] = dStack_c0;
      param_3[0x18] = local_b8;
      param_3[0x19] = dStack_b0;
    }
    local_118 = 5.26354424712089e-315;
    local_108 = 0.0078125;
    dStack_f0 = 5.26354424712089e-315;
    dStack_110 = 0.0;
    dStack_100 = 0.0;
    local_f8 = 0.0;
    cVar7 = (**(code **)(*plVar9 + 0x48))(plVar9,&local_118,0);
    if (cVar7 != '\0') {
      *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x2000;
      param_3[0xc] = local_118;
      param_3[0xd] = dStack_110;
      param_3[0xe] = local_108;
      param_3[0xf] = dStack_100;
      param_3[0x10] = local_f8;
      param_3[0x11] = dStack_f0;
    }
    uVar10 = FUN_14336b350(plVar9);
    lVar11 = FUN_1432cd1e0(uVar10);
    uVar2 = *(ushort *)(lVar11 + 10);
    *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x4000;
    uVar10 = 0x4001;
    *(uint *)(param_3 + 0x1a) = uVar2 & 0xc;
  }
  return uVar10;
}



// FUNCTION 143486200 FUN_143486200 body=2581 status=ok
// SIG undefined FUN_143486200(void)

undefined8 FUN_143486200(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  double dVar6;
  ushort uVar7;
  int *piVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_res8;
  double local_res10;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  plVar15 = (longlong *)
            Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar15 == (longlong *)0x0) {
    return 0;
  }
  bVar9 = false;
  iVar14 = (**(code **)(*plVar15 + 0x290))(plVar15);
  bVar19 = iVar14 != 4;
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xe & 1) != 0) {
    uVar23 = *(undefined4 *)(param_3 + 0x1a);
    uVar16 = FUN_14336b350(plVar15);
    FUN_143362aa0(uVar16,uVar23);
  }
  if (((*(byte *)((longlong)param_3 + 0xd4) >> 5 & 1) != 0) &&
     ((local_res8 = (double)param_3[5],
      ((ulonglong)local_res8 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
      (((ulonglong)local_res8 & 0xfffffffffffff) == 0)))) {
    puVar17 = (undefined8 *)FUN_1433679a0(plVar15);
    local_e8 = *puVar17;
    local_d8 = puVar17[2];
    uStack_d0 = puVar17[3];
    uStack_e0 = CONCAT44((float)((double)param_3[5] / 100.0),(int)puVar17[1]);
    FUN_1433679d0(plVar15,&local_e8);
    (**(code **)(*plVar15 + 0x1a8))(plVar15,0);
  }
  if ((*(byte *)((longlong)param_3 + 0xd4) >> 6 & 1) != 0) {
    (**(code **)(*plVar15 + 0x1d0))(plVar15,*(undefined1 *)((longlong)param_3 + 0xd6));
  }
  if (*(char *)((longlong)param_3 + 0xd4) < '\0') {
    uVar5 = param_3[6];
    uVar23 = (undefined4)uVar5;
    uVar25 = (undefined4)(uVar5 >> 0x20);
    if (((uVar5 & 0x7ff0000000000000) == 0x7ff0000000000000) && ((uVar5 & 0xfffffffffffff) != 0)) {
      uVar23 = 0;
      uVar25 = 0;
    }
    if ((CONCAT44(uVar25,uVar23) == -0x10000000000000) ||
       (uVar24 = uVar23, uVar26 = uVar25, CONCAT44(uVar25,uVar23) == 0x7ff0000000000000)) {
      uVar24 = 0;
      uVar26 = 0;
    }
    local_res8 = (double)CONCAT44(uVar25,uVar23);
    FUN_14336b4f0(plVar15);
    bVar9 = (double)CONCAT44(uVar26,uVar24) != *(double *)(plVar15[10] + 0x40);
    if (bVar9) {
      *(ulonglong *)(plVar15[10] + 0x40) = CONCAT44(uVar26,uVar24);
    }
  }
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 10 & 1) != 0) {
    local_res8 = (double)param_3[9];
    if ((((((ulonglong)local_res8 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)local_res8 & 0xfffffffffffff) != 0)) || (local_res8 == -INFINITY)) ||
       (uVar23 = SUB84(local_res8,0), uVar25 = (int)((ulonglong)local_res8 >> 0x20),
       local_res8 == INFINITY)) {
      uVar23 = 0;
      uVar25 = 0x40590000;
    }
    FUN_14336b4f0(plVar15);
    if (*(double *)(plVar15[10] + 0x48) != (double)CONCAT44(uVar25,uVar23)) {
      *(ulonglong *)(plVar15[10] + 0x48) = CONCAT44(uVar25,uVar23);
      bVar9 = true;
    }
  }
  if ((*(byte *)((longlong)param_3 + 0xd5) & 1) != 0) {
    dVar6 = (double)param_3[7];
    FUN_14336b4f0(plVar15);
    lVar18 = plVar15[10];
    if (dVar6 != *(double *)(lVar18 + 0x50)) {
      dVar6 = _guard_xfg_dispatch_icall_nop(dVar6,360.0);
      if (dVar6 <= 180.0) {
        if (dVar6 < -180.0) {
          dVar6 = dVar6 + 360.0;
        }
        *(double *)(lVar18 + 0x50) = dVar6;
        bVar9 = true;
      }
      else {
        bVar9 = true;
        *(double *)(lVar18 + 0x50) = dVar6 + -360.0;
      }
    }
  }
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 9 & 1) == 0) {
LAB_143486534:
    if (!bVar9) goto LAB_143486542;
  }
  else {
    dVar6 = (double)param_3[8];
    FUN_14336b4f0(plVar15);
    lVar18 = plVar15[10];
    if (dVar6 == *(double *)(lVar18 + 0x58)) goto LAB_143486534;
    dVar6 = _guard_xfg_dispatch_icall_nop(dVar6,360.0);
    if (dVar6 <= 180.0) {
      if (dVar6 < -180.0) {
        dVar6 = dVar6 + 360.0;
      }
      *(double *)(lVar18 + 0x58) = dVar6;
    }
    else {
      *(double *)(lVar18 + 0x58) = dVar6 + -360.0;
    }
  }
  (**(code **)(*plVar15 + 0x68))(plVar15);
LAB_143486542:
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xb & 1) == 0) {
    if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xc & 1) != 0) {
      (**(code **)(*plVar15 + 0x38))(plVar15,param_3 + 0x12);
    }
    if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xd & 1) != 0) {
      (**(code **)(*plVar15 + 0x50))(plVar15,param_3 + 0xc);
    }
  }
  else {
    dVar6 = (double)param_3[10];
    (**(code **)(*plVar15 + 0x140))(plVar15);
    if (dVar6 != (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da)) {
      lVar18 = *plVar15;
      _guard_xfg_dispatch_icall_nop(dVar6,180.0);
      (**(code **)(lVar18 + 0x138))(plVar15);
    }
  }
  if ((*(byte *)((longlong)param_3 + 0xd4) & 0x1f) != 0) {
    if (!bVar19) {
      *(uint *)((longlong)plVar15 + 0xfc) = *(uint *)((longlong)plVar15 + 0xfc) | 0x2000;
      FUN_143de5880(plVar15);
    }
    (**(code **)(*plVar15 + 0x1a8))(plVar15,0);
    piVar8 = (int *)plVar15[10];
    puVar17 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
    local_108 = *puVar17;
    uStack_100 = puVar17[1];
    local_f8 = *(float *)(puVar17 + 2);
    fStack_f4 = *(float *)((longlong)puVar17 + 0x14);
    fStack_f0 = *(float *)(puVar17 + 3);
    fStack_ec = *(float *)((longlong)puVar17 + 0x1c);
    if ((bVar19) || ((*(byte *)((longlong)param_3 + 0xd4) & 3) == 0)) {
      if ((*(byte *)((longlong)param_3 + 0xd4) & 1) == 0) {
        uVar23 = 0;
        uVar25 = 0;
      }
      else {
        uVar23 = (undefined4)*param_3;
        uVar25 = (undefined4)((ulonglong)*param_3 >> 0x20);
      }
      dVar6 = (double)CONCAT44(uVar25,uVar23);
      if ((*(byte *)((longlong)param_3 + 0xd4) >> 1 & 1) == 0) {
        dVar13 = 0.0;
      }
      else {
        dVar13 = (double)param_3[1];
        dVar6 = (double)CONCAT44(uVar25,uVar23);
      }
    }
    else {
      FUN_143dec900(plVar15,&local_res8,param_3);
      dVar13 = (double)local_res8._4_4_;
      dVar6 = (double)(float)local_res8;
    }
    uVar7 = *(ushort *)((longlong)param_3 + 0xd4);
    if ((uVar7 & 0x1c) != 0) {
      fVar1 = (float)piVar8[8];
      fVar2 = (float)piVar8[0xc];
      uStack_d0 = CONCAT44(fStack_ec,piVar8[0xe]);
      uStack_e0 = CONCAT44(uStack_100._4_4_,piVar8[10]);
      fVar3 = (float)piVar8[0xd];
      local_d8 = *(undefined8 *)(piVar8 + 0xc);
      fVar4 = (float)piVar8[9];
      local_e8 = *(undefined8 *)(piVar8 + 8);
      dVar10 = _guard_xfg_dispatch_icall_nop((double)fVar2,(double)fVar1);
      dVar11 = (double)fVar1;
      dVar21 = (double)fVar2;
      local_res8 = _guard_xfg_dispatch_icall_nop(dVar11 * dVar11 + dVar21 * dVar21);
      local_res10 = _guard_xfg_dispatch_icall_nop
                              ((double)fVar4 * (double)fVar4 + (double)fVar3 * (double)fVar3);
      dVar11 = *(double *)(piVar8 + 6);
      dVar12 = *(double *)(piVar8 + 2) / 100.0;
      dVar21 = *(double *)(piVar8 + 4) / 100.0;
      if (((byte)uVar7 >> 2 & 1) == 0) {
        dVar20 = (double)Scaleform::GFx::NumberUtil::NaN();
      }
      else {
        dVar20 = (double)param_3[2];
      }
      if ((((uint)((ulonglong)dVar20 >> 0x20) & 0x7ff00000) != 0x7ff00000) ||
         (((ulonglong)dVar20 & 0xfffffffffffff) == 0)) {
        dVar11 = _guard_xfg_dispatch_icall_nop(dVar20,360.0);
        if (dVar11 <= 180.0) {
          if (dVar11 < -180.0) {
            dVar11 = dVar11 + 360.0;
          }
        }
        else {
          dVar11 = dVar11 + -360.0;
        }
        *(double *)(piVar8 + 6) = dVar11;
      }
      if ((*(byte *)((longlong)param_3 + 0xd4) >> 3 & 1) == 0) {
        dVar20 = (double)Scaleform::GFx::NumberUtil::NaN();
      }
      else {
        dVar20 = (double)param_3[3] / 100.0;
      }
      uVar23 = SUB84(local_res8,0);
      uVar25 = (undefined4)((ulonglong)local_res8 >> 0x20);
      if (((dVar20 != dVar12) && (((ulonglong)dVar20 & 0x7ff0000000000000) != 0x7ff0000000000000))
         && ((*(undefined8 *)(piVar8 + 2) = param_3[3], local_res8 == 0.0 ||
             (dVar12 = dVar20, 1e+16 < dVar20)))) {
        dVar12 = 0.0;
        uVar23 = 0;
        uVar25 = 0x3ff00000;
      }
      if ((*(byte *)((longlong)param_3 + 0xd4) >> 4 & 1) == 0) {
        dVar20 = (double)Scaleform::GFx::NumberUtil::NaN();
      }
      else {
        dVar20 = (double)param_3[4] / 100.0;
      }
      dVar22 = local_res10;
      if (((dVar20 != dVar21) &&
          (local_res8 = dVar20, ((ulonglong)dVar20 & 0x7ff0000000000000) != 0x7ff0000000000000)) &&
         ((*(undefined8 *)(piVar8 + 4) = param_3[4], local_res10 == 0.0 ||
          (dVar21 = dVar20, 1e+16 < dVar20)))) {
        dVar21 = 0.0;
        dVar22 = 1.0;
      }
      FUN_14336d9c0(&local_e8,(float)(dVar12 / (double)CONCAT44(uVar25,uVar23)),
                    (float)(dVar21 / dVar22),(float)((dVar11 * 3.141592653589793) / 180.0 - dVar10))
      ;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      local_f8 = (float)local_d8;
      fStack_f4 = local_d8._4_4_;
      fStack_f0 = (float)uStack_d0;
      fStack_ec = uStack_d0._4_4_;
    }
    dVar11 = dVar6;
    if ((*(byte *)((longlong)param_3 + 0xd4) & 1) == 0) {
      dVar11 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    local_res8 = dVar11;
    if ((((ulonglong)dVar11 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar11 & 0xfffffffffffff) == 0)) {
      if ((dVar11 == -INFINITY) || (dVar11 == INFINITY)) {
        dVar11 = 0.0;
      }
      dVar11 = _guard_xfg_dispatch_icall_nop(dVar11 * 20.0);
      *piVar8 = (int)dVar11;
      uStack_100 = CONCAT44((float)(int)dVar11,(float)uStack_100);
    }
    dVar11 = dVar13;
    if ((*(byte *)((longlong)param_3 + 0xd4) >> 1 & 1) == 0) {
      dVar11 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    local_res8 = dVar11;
    if ((((ulonglong)dVar11 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar11 & 0xfffffffffffff) == 0)) {
      if ((dVar11 == -INFINITY) || (dVar11 == INFINITY)) {
        dVar11 = 0.0;
      }
      dVar11 = _guard_xfg_dispatch_icall_nop(dVar11 * 20.0);
      piVar8[1] = (int)dVar11;
      fStack_ec = (float)(int)dVar11;
    }
    if ((((((-3.4028235e+38 <= (float)local_108) && ((float)local_108 <= 3.4028235e+38)) &&
          (-3.4028235e+38 <= local_108._4_4_)) &&
         (((local_108._4_4_ <= 3.4028235e+38 && (-3.4028235e+38 <= (float)uStack_100)) &&
          (((float)uStack_100 <= 3.4028235e+38 &&
           ((-3.4028235e+38 <= uStack_100._4_4_ && (uStack_100._4_4_ <= 3.4028235e+38)))))))) &&
        (-3.4028235e+38 <= local_f8)) &&
       ((((local_f8 <= 3.4028235e+38 && (-3.4028235e+38 <= fStack_f4)) &&
         (fStack_f4 <= 3.4028235e+38)) &&
        (((-3.4028235e+38 <= fStack_f0 && (fStack_f0 <= 3.4028235e+38)) &&
         ((-3.4028235e+38 <= fStack_ec && (fStack_ec <= 3.4028235e+38)))))))) {
      if ((plVar15[9] == 0) || (lVar18 = FUN_1432cd1e0(), (*(ushort *)(lVar18 + 10) >> 9 & 1) == 0))
      {
        (**(code **)(*plVar15 + 0x18))(plVar15,&local_108);
      }
      else {
        (**(code **)(*plVar15 + 0x68))(plVar15);
      }
    }
    if (!bVar19) {
      if ((*(byte *)((longlong)param_3 + 0xd4) & 1) != 0) {
        dVar6 = dVar6 * 20.0;
        if (dVar6 <= 0.0) {
          dVar6 = dVar6 - 0.5;
        }
        else {
          dVar6 = dVar6 + 0.5;
        }
        *piVar8 = (int)dVar6;
      }
      if ((*(byte *)((longlong)param_3 + 0xd4) >> 1 & 1) != 0) {
        dVar13 = dVar13 * 20.0;
        if (dVar13 <= 0.0) {
          dVar13 = dVar13 - 0.5;
        }
        else {
          dVar13 = dVar13 + 0.5;
        }
        piVar8[1] = (int)dVar13;
      }
    }
  }
  return 1;
}



// FUNCTION 143486c20 FUN_143486c20 body=187 status=ok
// SIG undefined FUN_143486c20(void)

undefined8 FUN_143486c20(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  plVar1 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  fStack_1c = 0.0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  fStack_c = 0.0;
  (**(code **)(*plVar1 + 0x1e8))(plVar1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = fStack_1c * 0.05;
  param_3[4] = local_18;
  param_3[5] = uStack_14;
  param_3[6] = uStack_10;
  param_3[7] = fStack_c * 0.05;
  return 1;
}



// FUNCTION 143486cf0 FUN_143486cf0 body=181 status=ok
// SIG undefined FUN_143486cf0(void)

undefined8 FUN_143486cf0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  
  plVar8 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8);
  fVar1 = (float)puVar9[7];
  fVar2 = (float)puVar9[3];
  uVar3 = puVar9[5];
  uVar4 = puVar9[6];
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[4];
  *param_3 = *puVar9;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = fVar2 * 0.05;
  param_3[4] = uVar7;
  param_3[5] = uVar3;
  param_3[6] = uVar4;
  param_3[7] = fVar1 * 0.05;
  return 1;
}



// FUNCTION 143486db0 FUN_143486db0 body=455 status=ok
// SIG undefined FUN_143486db0(void)

undefined8 FUN_143486db0(longlong param_1,undefined8 param_2,Matrix2x4<float> *param_3)

{
  double dVar1;
  bool bVar2;
  longlong *plVar3;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined8 local_78;
  double local_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  plVar3 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar3 != (longlong *)0x0) {
    bVar2 = Scaleform::Render::Matrix2x4<float>::IsValid(param_3);
    if (bVar2) {
      local_94 = *(undefined4 *)(param_3 + 4);
      local_98 = *(undefined4 *)param_3;
      local_8c = *(float *)(param_3 + 0xc) * 20.0;
      local_84 = *(undefined4 *)(param_3 + 0x14);
      local_90 = *(undefined4 *)(param_3 + 8);
      local_7c = *(float *)(param_3 + 0x1c) * 20.0;
      local_88 = *(undefined4 *)(param_3 + 0x10);
      local_80 = *(undefined4 *)(param_3 + 0x18);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_98);
      local_68 = 100.0;
      dStack_60 = 0.0;
      local_48 = 0x3f80000000000000;
      uStack_40 = 0;
      local_58 = 0x3f800000;
      uStack_50 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_70 = 100.0;
      local_78 = 0;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0x40590000;
      FUN_14336b690(plVar3,&local_78);
      local_78 = CONCAT44((int)*(float *)(param_3 + 0x1c),(int)*(float *)(param_3 + 0xc));
      local_70 = _guard_xfg_dispatch_icall_nop
                           ((double)*(float *)param_3 * (double)*(float *)param_3 +
                            (double)*(float *)(param_3 + 0x10) * (double)*(float *)(param_3 + 0x10))
      ;
      local_70 = local_70 * 100.0;
      local_68 = _guard_xfg_dispatch_icall_nop
                           ((double)*(float *)(param_3 + 4) * (double)*(float *)(param_3 + 4) +
                            (double)*(float *)(param_3 + 0x14) * (double)*(float *)(param_3 + 0x14))
      ;
      local_68 = local_68 * 100.0;
      dVar1 = _guard_xfg_dispatch_icall_nop
                        ((double)*(float *)(param_3 + 0x10),(double)*(float *)param_3);
      dStack_60 = (dVar1 * 180.0) / 3.141592653589793;
      FUN_14336b830(plVar3,&local_78);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143486f80 FUN_143486f80 body=130 status=ok
// SIG undefined FUN_143486f80(void)

undefined8 FUN_143486f80(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  plVar8 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8);
  uVar1 = *(undefined4 *)(puVar9 + 1);
  fVar2 = *(float *)((longlong)puVar9 + 0xc);
  uVar7 = puVar9[2];
  uVar3 = *(undefined4 *)(puVar9 + 3);
  fVar4 = *(float *)((longlong)puVar9 + 0x1c);
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  *param_3 = *puVar9;
  param_3[1] = CONCAT44(fVar2 * 0.05,uVar1);
  param_3[2] = uVar7;
  param_3[3] = CONCAT44(fVar4 * 0.05,uVar3);
  param_3[4] = uVar5;
  param_3[5] = uVar6;
  return 1;
}



// FUNCTION 143487010 FUN_143487010 body=417 status=ok
// SIG undefined FUN_143487010(void)

undefined8 FUN_143487010(longlong param_1,undefined8 param_2,Matrix3x4<float> *param_3)

{
  bool bVar1;
  longlong *plVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar2 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar2 != (longlong *)0x0) {
    bVar1 = Scaleform::Render::Matrix3x4<float>::IsValid(param_3);
    if (bVar1) {
      local_48 = *(undefined4 *)param_3;
      uStack_44 = *(undefined4 *)(param_3 + 4);
      uStack_40 = *(undefined4 *)(param_3 + 8);
      local_38 = *(undefined4 *)(param_3 + 0x10);
      uStack_34 = *(undefined4 *)(param_3 + 0x14);
      uStack_30 = *(undefined4 *)(param_3 + 0x18);
      local_28 = *(undefined4 *)(param_3 + 0x20);
      uStack_24 = *(undefined4 *)(param_3 + 0x24);
      uStack_20 = *(undefined4 *)(param_3 + 0x28);
      uStack_1c = *(undefined4 *)(param_3 + 0x2c);
      fStack_3c = *(float *)(param_3 + 0xc) * 20.0;
      fStack_2c = *(float *)(param_3 + 0x1c) * 20.0;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_48);
      local_98 = 0x4059000000000000;
      uStack_90 = 0;
      local_78 = 0x3f80000000000000;
      uStack_70 = 0;
      local_88 = 0x3f800000;
      uStack_80 = 0;
      local_58 = 0.0;
      dStack_50 = 0.0;
      local_a0 = 0x4059000000000000;
      local_a8 = 0;
      local_68 = 0.0;
      dStack_60 = 100.0;
      FUN_14336b690(plVar2,&local_a8);
      local_68 = (double)*(float *)(param_3 + 0x2c);
      fVar3 = _guard_xfg_dispatch_icall_nop
                        (*(float *)(param_3 + 8) * *(float *)(param_3 + 8) +
                         *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x18) +
                         *(float *)(param_3 + 0x28) * *(float *)(param_3 + 0x28));
      dStack_60 = (double)fVar3 * 100.0;
      FUN_1434a00d0(param_3,local_res8,local_res10,0);
      local_58 = ((double)local_res8[0] * 180.0) / 3.141592653589793;
      dStack_50 = ((double)local_res10[0] * 180.0) / 3.141592653589793;
      FUN_14336b830(plVar2,&local_a8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1434871c0 FUN_1434871c0 body=113 status=ok
// SIG undefined FUN_1434871c0(void)

undefined8 FUN_1434871c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x290))(plVar3);
    if ((iVar2 == 4) || ((*(ushort *)((longlong)plVar3 + 0x6a) >> 10 & 1) != 0)) {
      puVar4 = (undefined8 *)FUN_1433679a0(plVar3);
      uVar1 = puVar4[1];
      *param_3 = *puVar4;
      param_3[1] = uVar1;
      uVar1 = puVar4[3];
      param_3[2] = puVar4[2];
      param_3[3] = uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143487240 FUN_143487240 body=116 status=ok
// SIG undefined FUN_143487240(void)

undefined8 FUN_143487240(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x290))(plVar2);
    if ((iVar1 == 4) || ((*(ushort *)((longlong)plVar2 + 0x6a) >> 10 & 1) != 0)) {
      FUN_1433679d0(plVar2,param_3);
      (**(code **)(*plVar2 + 0x1a8))(plVar2,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1434872c0 FUN_1434872c0 body=255 status=ok
// SIG undefined FUN_1434872c0(void)

undefined8 FUN_1434872c0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong local_res8;
  undefined1 local_38 [8];
  longlong local_30;
  
  plVar5 = (longlong *)Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,param_1[1]);
  uVar6 = 0;
  if (plVar5 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar5 + 0x290))(plVar5);
    if (iVar4 == 4) {
      lVar2 = *(longlong *)(param_1[1] + 0x18);
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
      uVar6 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
      FUN_143de9da0(plVar5,&local_res8,param_4);
      local_30 = local_res8;
      local_38[0] = 5;
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      FUN_14343bb60(lVar2,uVar6,local_38,param_3);
      FUN_143411150(local_38);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar6 = 1;
    }
    else {
      pcVar7 = "text";
      if (param_4 != '\0') {
        pcVar7 = "htmlText";
      }
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2,pcVar7,param_3,1);
    }
  }
  return uVar6;
}



// FUNCTION 1434873d0 FUN_1434873d0 body=288 status=ok
// SIG undefined FUN_1434873d0(void)

undefined1 FUN_1434873d0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  plVar4 = (longlong *)Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,param_1[1]);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*plVar4 + 0x290))(plVar4);
  if (iVar2 != 4) {
    pcVar5 = "text";
    local_28 = (longlong *)0x0;
    local_20 = 6;
    if (param_4 != '\0') {
      pcVar5 = "htmlText";
    }
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_18 = param_3;
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,pcVar5,&local_38,1);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
    }
    return uVar1;
  }
  uVar3 = *(uint *)((longlong)plVar4 + 0xfc);
  if (param_4 == '\0') {
    if ((uVar3 >> 1 & 1) == 0) goto LAB_1434874c1;
    uVar3 = uVar3 & 0xfffffffd;
  }
  else {
    if ((uVar3 >> 1 & 1) != 0) goto LAB_1434874c1;
    uVar3 = uVar3 | 2;
  }
  *(uint *)((longlong)plVar4 + 0xfc) = uVar3;
LAB_1434874c1:
  FUN_143dec020(plVar4,param_3,param_4,1);
  return 1;
}



// FUNCTION 143487500 FUN_143487500 body=245 status=ok
// SIG undefined FUN_143487500(void)

undefined1 FUN_143487500(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  plVar3 = (longlong *)Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,param_1[1]);
  uVar1 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x290))(plVar3);
    if (iVar2 == 4) {
      FUN_143debe50(plVar3,param_3,param_4);
      uVar1 = 1;
    }
    else {
      pcVar4 = "text";
      local_28 = (longlong *)0x0;
      local_20 = 7;
      if (param_4 != '\0') {
        pcVar4 = "htmlText";
      }
      local_38 = 0xffffffffffffffff;
      uStack_30 = 0xffffffffffffffff;
      local_18 = param_3;
      uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,pcVar4,&local_38,1);
      if ((local_20 >> 6 & 1) != 0) {
        (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
      }
    }
  }
  return uVar1;
}



// FUNCTION 143487600 FUN_143487600 body=158 status=ok
// SIG undefined FUN_143487600(void)

undefined8 FUN_143487600(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  
  plVar2 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if ((plVar2 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar2 + 0x6a) >> 10 & 1) != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x368))(plVar2,param_3,local_res8,1);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x378))(plVar2,local_res8[0]);
      (**(code **)(*plVar2 + 0x398))(plVar2,param_4 != '\0');
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1434876b0 FUN_1434876b0 body=131 status=ok
// SIG undefined FUN_1434876b0(void)

undefined8 FUN_1434876b0(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if ((plVar1 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar1 + 0x6a) >> 10 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x378))(plVar1,param_3 + -1);
    (**(code **)(*plVar1 + 0x398))(plVar1,param_4 != '\0');
    return 1;
  }
  return 0;
}



// FUNCTION 143487740 FUN_143487740 body=538 status=ok
// SIG undefined FUN_143487740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143487740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       int param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  RefCountNTSImpl *this;
  ulonglong uVar6;
  longlong local_res8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  RefCountImpl *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_48 [8];
  int *local_40;
  
  plVar4 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if ((plVar4 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar4 + 0x6a) >> 10 & 1) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
    lVar5 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 0xf0))
                      (lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
    if (param_5 < 0) {
      iVar3 = Scaleform::GFx::DisplayList::GetLargestDepthInUse(plVar4 + 0x1b);
      param_5 = iVar3 + -0x3fff;
      if (iVar3 + -0x3fff < 0) {
        param_5 = 0;
      }
    }
    local_6c = param_5 + 0x4000;
    local_b8 = _DAT_1467ccfd0;
    uStack_b0 = uRam00000001467ccfd8;
    local_98 = _DAT_14621c810;
    uStack_90 = _DAT_14621c818;
    local_88 = _DAT_14621c820;
    uStack_80 = _DAT_14621c828;
    local_70 = 0;
    local_a8 = _DAT_1467ccfe0;
    uStack_a4 = uRam00000001467ccfe4;
    uStack_a0 = uRam00000001467ccfe8;
    uStack_9c = uRam00000001467ccfec;
    local_78 = (RefCountImpl *)0x0;
    local_58 = 0xc0000;
    local_68 = 0x10001;
    local_54 = 0x100;
    local_60 = 0;
    if (local_6c < 0x7efffffe) {
      local_res8 = FUN_143360a60(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18) +
                                  0x618),param_4);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      this = (RefCountNTSImpl *)
             (**(code **)(*plVar4 + 0x3b8))(plVar4,&local_b8,&local_res8,0,0,0xffffffff,1,0,0);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (this != (RefCountNTSImpl *)0x0) {
        (**(code **)(*(longlong *)this + 0x1a8))(this,0);
        local_40 = *(int **)(this + 0x70);
        local_48[0] = 7;
        if (local_40 == (int *)0x0) {
          local_40 = (int *)FUN_14336c170(this);
        }
        if (local_40 != (int *)0x0) {
          *local_40 = *local_40 + 1;
        }
        FUN_14343bb60(lVar2,lVar5,local_48,param_3);
        FUN_143411150(local_48);
      }
      uVar6 = 1;
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
      if (local_78 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_78);
      }
    }
    else {
      uVar6 = 0;
    }
    return uVar6;
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 143487960 FUN_143487960 body=1242 status=ok
// SIG undefined FUN_143487960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143487960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,int param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  RefCountNTSImpl *this;
  char *pcVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar17;
  longlong *local_100;
  longlong lStack_f8;
  byte local_f0 [8];
  int *local_e8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  RefCountImpl *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  local_res18 = param_3;
  plVar7 = (longlong *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(param_2,*(undefined8 *)(param_1 + 8));
  if ((plVar7 == (longlong *)0x0) || ((*(ushort *)((longlong)plVar7 + 0x6a) >> 10 & 1) == 0)) {
    return (ulonglong)plVar7 & 0xffffffffffffff00;
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x58);
  local_c8 = plVar7;
  lVar8 = (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 0xf0))
                    (lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4);
  local_100 = (longlong *)0x0;
  lStack_f8 = 0;
  FUN_1432c2fb0(&local_res8,param_4);
  uVar3 = *(undefined8 *)(plVar7[4] + 0x10);
  uVar9 = (**(code **)(*plVar7 + 0x218))(plVar7);
  cVar4 = FUN_1432ec590(uVar3,uVar9,&local_100,&local_res8);
  uVar14 = local_res8 & 0xfffffffffffffffc;
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar14 + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar14);
  }
  if (cVar4 == '\0') {
    lVar10 = plVar7[0xe];
    if (lVar10 == 0) {
      lVar10 = FUN_14336c170(plVar7);
    }
    pcVar12 = "%s.attachMovie() failed - export name \"%s\" is not found.";
  }
  else {
    uVar6 = (**(code **)(*local_100 + 0x10))();
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar14 = 0;
      uStack_b0 = 0;
      local_c0 = local_100;
      local_b8 = *(undefined8 *)(lStack_f8 + 0x50);
      if (param_6 < 0) {
        iVar5 = Scaleform::GFx::DisplayList::GetLargestDepthInUse(plVar7 + 0x1b);
        param_6 = iVar5 + -0x3fff;
        if (iVar5 + -0x3fff < 0) {
          param_6 = 0;
        }
      }
      local_58 = (undefined4)local_c0[3];
      local_5c = param_6 + 0x4000;
      local_a8 = _DAT_1467ccfd0;
      uStack_a0 = uRam00000001467ccfd8;
      local_88 = _DAT_14621c810;
      uStack_80 = _DAT_14621c818;
      local_78 = _DAT_14621c820;
      uStack_70 = _DAT_14621c828;
      local_60 = 0;
      local_98 = _DAT_1467ccfe0;
      uStack_94 = uRam00000001467ccfe4;
      uStack_90 = uRam00000001467ccfe8;
      uStack_8c = uRam00000001467ccfec;
      local_68 = (RefCountImpl *)0x0;
      local_48 = 0xc0000;
      local_44 = 0x100;
      local_50 = 0;
      if (local_5c < 0x7efffffe) {
        uVar15 = uVar14;
        if ((param_7 != (longlong *)0x0) &&
           (local_d0 = FUN_14341a5c0(lVar8,*(undefined8 *)(*(longlong *)(lVar8 + 0xe8) + 0x60),
                                     *(longlong *)
                                      (*(longlong *)(*(longlong *)(lVar8 + 0xe8) + 0x28) + 0x18) +
                                     0x140,0,CONCAT44(uVar17,0xffffffff)), uVar15 = local_d0,
           param_7[1] != 0)) {
          plVar1 = (longlong *)(local_d0 + 0x20);
          do {
            puVar16 = (ulonglong *)(uVar14 * 0x38 + *param_7);
            puVar13 = (ulonglong *)(*puVar16 & 0xfffffffffffffffc);
            local_res10 = FUN_143360a90(*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(lVar8 + 0xe8) + 0x28) + 0x18
                                           ) + 0x618),(longlong)puVar13 + 0xc,
                                        *puVar13 & 0x7fffffffffffffff);
            *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
            local_f0[0] = 0;
            FUN_14343b9a0(lVar10,puVar16 + 1,local_f0);
            local_res8 = local_res8 & 0xffffffffffffff00;
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,&local_res10,local_f0,&local_res8);
            if (4 < local_f0[0]) {
              FUN_143411150(local_f0);
            }
            piVar2 = (int *)(local_res10 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
            uVar14 = (ulonglong)((int)uVar14 + 1);
            uVar15 = local_d0;
            plVar7 = local_c8;
          } while (uVar14 < (ulonglong)param_7[1]);
        }
        local_res8 = FUN_143360a60(*(undefined8 *)
                                    (*(longlong *)
                                      (*(longlong *)(*(longlong *)(lVar8 + 0xe8) + 0x28) + 0x18) +
                                    0x618),param_5);
        *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        lVar11 = uVar15 + 0x20;
        if (uVar15 == 0) {
          lVar11 = 0;
        }
        this = (RefCountNTSImpl *)
               (**(code **)(*plVar7 + 0x3b8))
                         (plVar7,&local_a8,&local_res8,0,lVar11,0xffffffff,1,&local_c0,0);
        if (this != (RefCountNTSImpl *)0x0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        piVar2 = (int *)(local_res8 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        if (this != (RefCountNTSImpl *)0x0) {
          (**(code **)(*(longlong *)this + 0x1a8))(this,0);
          uVar6 = FUN_14336b320(plVar7);
          if (5 < uVar6) {
            local_e8 = *(int **)(this + 0x70);
            local_f0[0] = 7;
            if (local_e8 == (int *)0x0) {
              local_e8 = (int *)FUN_14336c170(this);
            }
            if (local_e8 != (int *)0x0) {
              *local_e8 = *local_e8 + 1;
            }
            FUN_14343bb60(lVar10,lVar8,local_f0,local_res18);
            FUN_143411150(local_f0);
          }
        }
        uVar14 = 1;
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        if ((uVar15 != 0) && ((*(uint *)(uVar15 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(uVar15 + 0x18) = *(uint *)(uVar15 + 0x18) - 1;
          FUN_1434a2b80(uVar15);
        }
      }
      else {
        lVar10 = plVar7[0xe];
        if (lVar10 == 0) {
          lVar10 = FUN_14336c170(plVar7);
        }
        FUN_1434a1590(plVar7 + 3,"%s.attachMovie(\"%s\") failed - depth (%d) must be >= 0",
                      **(undefined8 **)(lVar10 + 0x18),param_4,CONCAT44(uVar17,local_5c));
        uVar14 = 0;
      }
      if (local_68 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_68);
      }
      goto LAB_143487df5;
    }
    lVar10 = plVar7[0xe];
    if (lVar10 == 0) {
      lVar10 = FUN_14336c170(plVar7);
    }
    pcVar12 = "%s.attachMovie() failed - \"%s\" is not a movieclip.";
  }
  FUN_1434a1590(plVar7 + 3,pcVar12,**(undefined8 **)(lVar10 + 0x18),param_4);
  uVar14 = 0;
LAB_143487df5:
  if (local_100 != (longlong *)0x0) {
    FUN_1432de450();
  }
  return uVar14;
}



// FUNCTION 143487e40 FUN_143487e40 body=225 status=ok
// SIG undefined FUN_143487e40(void)

void FUN_143487e40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *local_res8;
  ulonglong local_res20;
  byte local_38 [32];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x58);
  uVar5 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))
                    (lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
  local_38[0] = 0;
  FUN_14343b9a0(lVar2,param_3,local_38);
  FUN_143411540(local_38,&local_res8,uVar5,0xffffffff,0);
  uVar5 = FUN_1432c2fb0(&local_res20,*local_res8);
  FUN_1432c4d80(param_2,uVar5);
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return;
}


