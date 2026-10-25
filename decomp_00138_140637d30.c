// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140637d30 FUN_140637d30 body=512 status=ok
// SIG undefined FUN_140637d30(void)

void FUN_140637d30(float *param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  float *param_6,longlong param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  size_t _Size;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      FUN_140637060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_6,param_2,(longlong)param_3 - (longlong)param_2);
      pfVar6 = param_2 + -1;
      pfVar3 = param_3 + -1;
      pfVar4 = (float *)((longlong)param_6 + (((longlong)param_3 - (longlong)param_2) - 4U));
      *pfVar3 = param_2[-1];
      do {
        pfVar6 = pfVar6 + -1;
        while( true ) {
          pfVar5 = pfVar3;
          fVar1 = *pfVar6;
          fVar2 = *pfVar4;
          if (param_8 == '\0') {
            bVar7 = fVar1 < fVar2;
          }
          else {
            bVar7 = fVar2 < fVar1;
          }
          pfVar3 = pfVar5 + -1;
          if (!bVar7 && fVar1 != fVar2) break;
          pfVar4 = pfVar4 + -1;
          *pfVar3 = fVar2;
          if (param_6 == pfVar4) {
            pfVar5[-2] = *pfVar6;
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(pfVar5 + -2) - ((longlong)pfVar6 - (longlong)param_1)),
                       param_1,(longlong)pfVar6 - (longlong)param_1);
            *param_1 = *param_6;
            return;
          }
        }
        *pfVar3 = fVar1;
      } while (param_1 != pfVar6);
      pfVar5[-2] = *pfVar4;
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(pfVar5 + -2) - ((longlong)pfVar4 - (longlong)param_6)),param_6,
                 (longlong)pfVar4 - (longlong)param_6);
    }
  }
  else {
    _Size = (longlong)param_2 - (longlong)param_1;
    _guard_xfg_dispatch_icall_nop(param_6,param_1,_Size);
    *param_1 = *param_2;
    pfVar6 = (float *)((longlong)param_6 + (_Size - 4));
    param_2 = param_2 + 1;
    pfVar3 = param_1 + 1;
    pfVar4 = param_6;
    do {
      while( true ) {
        fVar1 = *pfVar4;
        fVar2 = *param_2;
        if (param_8 == '\0') {
          bVar7 = fVar1 < fVar2;
        }
        else {
          bVar7 = fVar2 < fVar1;
        }
        pfVar5 = pfVar3 + 1;
        if (bVar7 || fVar1 == fVar2) break;
        param_2 = param_2 + 1;
        *pfVar3 = fVar2;
        pfVar3 = pfVar5;
        if (param_2 == param_3) {
          _guard_xfg_dispatch_icall_nop
                    (pfVar5,pfVar4,(longlong)param_6 + (_Size - (longlong)pfVar4));
          return;
        }
      }
      pfVar4 = pfVar4 + 1;
      *pfVar3 = fVar1;
      pfVar3 = pfVar5;
    } while (pfVar4 != pfVar6);
    _guard_xfg_dispatch_icall_nop(pfVar5,param_2,(longlong)param_3 - (longlong)param_2);
    *(float *)(((longlong)param_3 - (longlong)param_2) + (longlong)pfVar5) = *pfVar6;
  }
  return;
}



// FUNCTION 140637f30 FUN_140637f30 body=900 status=ok
// SIG undefined FUN_140637f30(void)

void FUN_140637f30(float *param_1,longlong param_2,longlong param_3,float *param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  size_t sVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  
  pfVar7 = param_1;
  if (0x20 < param_3) {
    lVar14 = (param_3 - 0x21U >> 5) + 1;
    pfVar8 = param_1;
    do {
      pfVar7 = pfVar8 + 0x20;
      if (pfVar8 != pfVar7) {
        for (pfVar10 = pfVar8 + 1; pfVar10 != pfVar7; pfVar10 = pfVar10 + 1) {
          fVar2 = *pfVar10;
          fVar3 = *pfVar8;
          if (param_5 == '\0') {
            bVar15 = fVar3 < fVar2;
          }
          else {
            bVar15 = fVar2 < fVar3;
          }
          pfVar6 = pfVar10;
          if (bVar15 || fVar3 == fVar2) {
            while( true ) {
              fVar3 = pfVar6[-1];
              if (param_5 == '\0') {
                bVar15 = fVar3 < fVar2;
              }
              else {
                bVar15 = fVar2 < fVar3;
              }
              if (bVar15 || fVar3 == fVar2) break;
              *pfVar6 = fVar3;
              pfVar6 = pfVar6 + -1;
            }
            *pfVar6 = fVar2;
          }
          else {
            _guard_xfg_dispatch_icall_nop(pfVar8 + 1,pfVar8,(longlong)pfVar10 - (longlong)pfVar8);
            *pfVar8 = fVar2;
          }
        }
      }
      lVar14 = lVar14 + -1;
      pfVar8 = pfVar7;
    } while (lVar14 != 0);
  }
  FUN_140639e30(pfVar7,param_2,param_5);
  pfVar7 = param_4;
  pfVar8 = param_1;
  lVar14 = param_3;
  if (param_3 < 0x21) {
    return;
  }
  do {
    lVar12 = lVar14 + -0x20;
    pfVar10 = pfVar8 + 0x20;
    lVar4 = 0x20;
    if (lVar12 < 0x20) {
      lVar4 = lVar12;
    }
    pfVar6 = pfVar8 + lVar4 + 0x20;
    pfVar9 = pfVar10;
    do {
      while( true ) {
        fVar2 = *pfVar8;
        fVar3 = *pfVar9;
        if (param_5 == '\0') {
          bVar15 = fVar2 < fVar3;
        }
        else {
          bVar15 = fVar3 < fVar2;
        }
        pfVar1 = pfVar7 + 1;
        if (bVar15 || fVar2 == fVar3) break;
        pfVar9 = pfVar9 + 1;
        *pfVar7 = fVar3;
        pfVar7 = pfVar1;
        if (pfVar9 == pfVar6) {
          sVar11 = (longlong)pfVar10 - (longlong)pfVar8;
          pfVar9 = pfVar8;
          goto LAB_1406380df;
        }
      }
      pfVar8 = pfVar8 + 1;
      *pfVar7 = fVar2;
      pfVar7 = pfVar1;
    } while (pfVar8 != pfVar10);
    sVar11 = (longlong)pfVar6 - (longlong)pfVar9;
LAB_1406380df:
    _guard_xfg_dispatch_icall_nop(pfVar1,pfVar9,sVar11);
    pfVar7 = (float *)((longlong)pfVar1 + sVar11);
    pfVar8 = pfVar6;
    lVar14 = lVar12 - lVar4;
    if (lVar12 - lVar4 < 0x21) {
      _guard_xfg_dispatch_icall_nop
                ((float *)((longlong)pfVar1 + sVar11),pfVar6,param_2 - (longlong)pfVar6);
      lVar14 = 0x20;
      do {
        lVar4 = lVar14 * 2;
        pfVar8 = param_4;
        pfVar7 = param_1;
        lVar12 = param_3;
        while (lVar4 < lVar12) {
          lVar12 = lVar12 + lVar14 * -2;
          pfVar10 = pfVar8 + lVar14 * 2;
          lVar5 = lVar4;
          if (lVar12 < lVar4) {
            lVar5 = lVar12;
          }
          lVar12 = lVar12 - lVar5;
          pfVar6 = pfVar8 + lVar5 + lVar4;
          pfVar9 = pfVar10;
          do {
            while( true ) {
              fVar2 = *pfVar8;
              fVar3 = *pfVar9;
              if (param_5 == '\0') {
                bVar15 = fVar2 < fVar3;
              }
              else {
                bVar15 = fVar3 < fVar2;
              }
              pfVar1 = pfVar7 + 1;
              if (bVar15 || fVar2 == fVar3) break;
              pfVar9 = pfVar9 + 1;
              *pfVar7 = fVar3;
              pfVar7 = pfVar1;
              if (pfVar9 == pfVar6) {
                sVar11 = (longlong)pfVar10 - (longlong)pfVar8;
                pfVar9 = pfVar8;
                goto LAB_1406381af;
              }
            }
            pfVar8 = pfVar8 + 1;
            *pfVar7 = fVar2;
            pfVar7 = pfVar1;
          } while (pfVar8 != pfVar10);
          sVar11 = (longlong)pfVar6 - (longlong)pfVar9;
LAB_1406381af:
          _guard_xfg_dispatch_icall_nop(pfVar1,pfVar9,sVar11);
          pfVar7 = (float *)(sVar11 + (longlong)pfVar1);
          pfVar8 = pfVar6;
        }
        _guard_xfg_dispatch_icall_nop
                  (pfVar7,pfVar8,(param_3 * 4 - (longlong)pfVar8) + (longlong)param_4);
        lVar4 = lVar14 * 4;
        pfVar7 = param_4;
        pfVar8 = param_1;
        lVar12 = param_3;
        if (param_3 <= lVar4) {
          return;
        }
        do {
          lVar13 = lVar12 + lVar14 * -4;
          pfVar10 = pfVar8 + lVar14 * 4;
          lVar5 = lVar4;
          if (lVar13 < lVar4) {
            lVar5 = lVar13;
          }
          pfVar6 = pfVar8 + lVar5 + lVar4;
          pfVar9 = pfVar10;
          do {
            while( true ) {
              fVar2 = *pfVar8;
              fVar3 = *pfVar9;
              if (param_5 == '\0') {
                bVar15 = fVar2 < fVar3;
              }
              else {
                bVar15 = fVar3 < fVar2;
              }
              pfVar1 = pfVar7 + 1;
              if (bVar15 || fVar2 == fVar3) break;
              pfVar9 = pfVar9 + 1;
              *pfVar7 = fVar3;
              pfVar7 = pfVar1;
              if (pfVar9 == pfVar6) {
                sVar11 = (longlong)pfVar10 - (longlong)pfVar8;
                pfVar9 = pfVar8;
                goto LAB_14063826f;
              }
            }
            pfVar8 = pfVar8 + 1;
            *pfVar7 = fVar2;
            pfVar7 = pfVar1;
          } while (pfVar8 != pfVar10);
          sVar11 = (longlong)pfVar6 - (longlong)pfVar9;
LAB_14063826f:
          _guard_xfg_dispatch_icall_nop(pfVar1,pfVar9,sVar11);
          pfVar7 = (float *)(sVar11 + (longlong)pfVar1);
          pfVar8 = pfVar6;
          lVar12 = lVar13 - lVar5;
        } while (lVar4 < lVar13 - lVar5);
        _guard_xfg_dispatch_icall_nop
                  ((float *)(sVar11 + (longlong)pfVar1),pfVar6,param_2 - (longlong)pfVar6);
        lVar14 = lVar4;
      } while( true );
    }
  } while( true );
}



// FUNCTION 1406382c0 FUN_1406382c0 body=374 status=ok
// SIG undefined FUN_1406382c0(void)

void FUN_1406382c0(void *param_1,longlong param_2,longlong param_3,void *param_4,undefined1 param_5)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_1406397b0();
  pvVar5 = param_1;
  lVar9 = param_3;
  pvVar2 = param_4;
  if (0x20 < param_3) {
    do {
      lVar7 = lVar9 + -0x20;
      lVar6 = 0x20;
      if (lVar7 < 0x20) {
        lVar6 = lVar7;
      }
      pvVar4 = (void *)((longlong)pvVar5 + 0x100 + lVar6 * 8);
      pvVar2 = (void *)FUN_14063ca60(pvVar5,(longlong)pvVar5 + 0x100,pvVar4,pvVar2,param_5);
      pvVar5 = pvVar4;
      lVar9 = lVar7 - lVar6;
      lVar3 = 0x20;
    } while (0x20 < lVar7 - lVar6);
    while( true ) {
      lVar7 = lVar3;
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,param_2 - (longlong)pvVar4);
      lVar9 = lVar7 * 2;
      pvVar5 = param_4;
      pvVar2 = param_1;
      for (lVar6 = param_3; lVar9 < lVar6; lVar6 = lVar6 - lVar3) {
        lVar6 = lVar6 + lVar7 * -2;
        pvVar4 = (void *)((longlong)pvVar5 + lVar7 * 0x10);
        lVar3 = lVar9;
        if (lVar6 < lVar9) {
          lVar3 = lVar6;
        }
        pvVar1 = (void *)((longlong)pvVar4 + lVar3 * 8);
        pvVar2 = (void *)FUN_14063acf0(pvVar5,pvVar4,pvVar1,pvVar2,param_5);
        pvVar5 = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop
                (pvVar2,pvVar5,(param_3 * 8 - (longlong)pvVar5) + (longlong)param_4);
      lVar3 = lVar7 << 2;
      pvVar5 = param_1;
      lVar9 = param_3;
      pvVar2 = param_4;
      if (param_3 <= lVar3) break;
      do {
        lVar8 = lVar9 + lVar7 * -4;
        pvVar1 = (void *)((longlong)pvVar5 + lVar7 * 0x20);
        lVar6 = lVar3;
        if (lVar8 < lVar3) {
          lVar6 = lVar8;
        }
        pvVar4 = (void *)((longlong)pvVar1 + lVar6 * 8);
        pvVar2 = (void *)FUN_14063acf0(pvVar5,pvVar1,pvVar4,pvVar2,param_5);
        pvVar5 = pvVar4;
        lVar9 = lVar8 - lVar6;
      } while (lVar3 < lVar8 - lVar6);
    }
  }
  return;
}



// FUNCTION 140638440 FUN_140638440 body=1093 status=ok
// SIG undefined FUN_140638440(void)

void FUN_140638440(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  char param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  
  FUN_140639b80();
  plVar5 = param_1;
  lVar6 = param_3;
  plVar3 = param_4;
  if (param_3 < 0x21) {
    return;
  }
  do {
    lVar11 = lVar6 + -0x20;
    lVar13 = 0x20;
    if (lVar11 < 0x20) {
      lVar13 = lVar11;
    }
    plVar4 = plVar5 + 0x40 + lVar13 * 2;
    plVar3 = (longlong *)FUN_14063cc50(plVar5,plVar5 + 0x40,plVar4,plVar3,param_5);
    plVar5 = plVar4;
    lVar6 = lVar11 - lVar13;
  } while (0x20 < lVar11 - lVar13);
  if (plVar4 != param_2) {
    lVar6 = (longlong)plVar4 - (longlong)plVar3;
    do {
      *plVar3 = 0;
      *plVar3 = *(longlong *)(lVar6 + (longlong)plVar3);
      *(undefined8 *)(lVar6 + (longlong)plVar3) = 0;
      *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(lVar6 + 8 + (longlong)plVar3);
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)(lVar6 + 0xc + (longlong)plVar3);
      *(undefined8 *)(lVar6 + 8 + (longlong)plVar3) = 0;
      plVar3 = plVar3 + 2;
    } while ((longlong *)(lVar6 + (longlong)plVar3) != param_2);
  }
  plVar3 = param_4 + param_3 * 2;
  lVar6 = 0x20;
  do {
    lVar13 = lVar6 * 2;
    plVar5 = param_4;
    lVar11 = param_3;
    plVar4 = param_1;
    while (lVar13 < lVar11) {
      lVar11 = lVar11 + lVar6 * -2;
      plVar1 = plVar5 + lVar6 * 4;
      lVar10 = lVar13;
      if (lVar11 < lVar13) {
        lVar10 = lVar11;
      }
      lVar11 = lVar11 - lVar10;
      plVar9 = plVar1 + lVar10 * 2;
      plVar12 = plVar1;
      do {
        while( true ) {
          plVar16 = plVar5;
          plVar14 = plVar4;
          if (param_5 == '\0') {
            if ((int)plVar12[1] == 0) {
              iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8);
              bVar18 = iVar2 < 0;
            }
            else {
              iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*plVar12);
              bVar18 = iVar2 < 0;
            }
          }
          else {
            if ((int)plVar12[1] == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*plVar12;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8);
            bVar18 = 0 < iVar2;
          }
          if (!bVar18) break;
          if (plVar14 != plVar12) {
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            *plVar14 = *plVar12;
            *plVar12 = 0;
            *(int *)(plVar14 + 1) = (int)plVar12[1];
            *(undefined4 *)((longlong)plVar14 + 0xc) = *(undefined4 *)((longlong)plVar12 + 0xc);
            plVar12[1] = 0;
          }
          plVar12 = plVar12 + 2;
          plVar4 = plVar14 + 2;
          plVar5 = plVar16;
          plVar17 = plVar1;
          if (plVar12 == plVar9) goto LAB_140638676;
        }
        if (plVar14 != plVar16) {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          *plVar14 = *plVar16;
          *plVar16 = 0;
          *(int *)(plVar14 + 1) = (int)plVar16[1];
          *(undefined4 *)((longlong)plVar14 + 0xc) = *(undefined4 *)((longlong)plVar16 + 0xc);
          plVar16[1] = 0;
        }
        plVar5 = plVar16 + 2;
        plVar4 = plVar14 + 2;
        plVar16 = plVar12;
        plVar17 = plVar9;
      } while (plVar5 != plVar1);
LAB_140638676:
      plVar4 = (longlong *)FUN_14063af70(plVar16,plVar17,plVar14 + 2);
      plVar5 = plVar9;
    }
    FUN_14063af70(plVar5,plVar3,plVar4);
    lVar13 = lVar6 * 4;
    plVar5 = param_4;
    lVar11 = param_3;
    plVar4 = param_1;
    if (param_3 <= lVar13) {
      for (; param_4 != plVar3; param_4 = param_4 + 2) {
        if (*param_4 != 0) {
          FMemory::Free();
        }
      }
      return;
    }
    do {
      lVar15 = lVar11 + lVar6 * -4;
      plVar1 = plVar4 + lVar6 * 8;
      lVar10 = lVar13;
      if (lVar15 < lVar13) {
        lVar10 = lVar15;
      }
      plVar9 = plVar1 + lVar10 * 2;
      plVar12 = plVar1;
      do {
        while( true ) {
          plVar16 = plVar4;
          plVar14 = plVar5;
          if (param_5 == '\0') {
            if ((int)plVar16[1] == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*plVar16;
            }
            if ((int)plVar12[1] == 0) {
              iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar8);
              bVar18 = iVar2 < 0;
            }
            else {
              iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*plVar12,puVar8);
              bVar18 = iVar2 < 0;
            }
          }
          else {
            if ((int)plVar16[1] == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*plVar16;
            }
            if ((int)plVar12[1] == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = (undefined2 *)*plVar12;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
            bVar18 = 0 < iVar2;
          }
          if (!bVar18) break;
          if (plVar14 != plVar12) {
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            *plVar14 = *plVar12;
            *plVar12 = 0;
            *(int *)(plVar14 + 1) = (int)plVar12[1];
            *(undefined4 *)((longlong)plVar14 + 0xc) = *(undefined4 *)((longlong)plVar12 + 0xc);
            plVar12[1] = 0;
          }
          plVar12 = plVar12 + 2;
          plVar5 = plVar14 + 2;
          plVar4 = plVar16;
          plVar17 = plVar1;
          if (plVar12 == plVar9) goto LAB_1406387f6;
        }
        if (plVar14 != plVar16) {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          *plVar14 = *plVar16;
          *plVar16 = 0;
          *(int *)(plVar14 + 1) = (int)plVar16[1];
          *(undefined4 *)((longlong)plVar14 + 0xc) = *(undefined4 *)((longlong)plVar16 + 0xc);
          plVar16[1] = 0;
        }
        plVar4 = plVar16 + 2;
        plVar5 = plVar14 + 2;
        plVar16 = plVar12;
        plVar17 = plVar9;
      } while (plVar4 != plVar1);
LAB_1406387f6:
      plVar5 = (longlong *)FUN_14063af70(plVar16,plVar17,plVar14 + 2);
      lVar11 = lVar15 - lVar10;
      plVar4 = plVar9;
    } while (lVar13 < lVar15 - lVar10);
    FUN_14063af70(plVar9,param_2,plVar5);
    lVar6 = lVar13;
  } while( true );
}



// FUNCTION 140638890 FUN_140638890 body=298 status=ok
// SIG undefined FUN_140638890(void)

wchar_t * FUN_140638890(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
                       longlong param_5,uint param_6)

{
  wchar_t wVar1;
  wchar_t wVar2;
  short sVar3;
  short sVar4;
  wchar_t *pwVar5;
  bool bVar6;
  
  pwVar5 = param_1;
  if ((param_6 >> 8 & 1) == 0) {
    if ((param_6 >> 0xb & 1) == 0) {
      do {
        if (pwVar5 == param_2) {
          bVar6 = param_3 == param_4;
LAB_140638996:
          if (!bVar6) {
            return param_1;
          }
          return pwVar5;
        }
        bVar6 = true;
        if (param_3 == param_4) goto LAB_140638996;
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
        wVar1 = *param_3;
        param_3 = param_3 + 1;
      } while (wVar2 == wVar1);
    }
    else if (param_1 == param_2) {
LAB_14063890d:
      bVar6 = param_3 == param_4;
LAB_140638910:
      if (bVar6) {
        param_1 = pwVar5;
      }
    }
    else {
      do {
        bVar6 = true;
        if (param_3 == param_4) goto LAB_140638910;
        wVar2 = *param_3;
        sVar3 = FUN_140664350(param_5,*pwVar5);
        sVar4 = FUN_140664350(param_5,wVar2);
        pwVar5 = pwVar5 + 1;
        param_3 = param_3 + 1;
        if (sVar3 != sVar4) {
          return param_1;
        }
      } while (pwVar5 != param_2);
      if (param_3 == param_4) {
        param_1 = pwVar5;
      }
    }
  }
  else {
    do {
      if (pwVar5 == param_2) goto LAB_14063890d;
      bVar6 = true;
      if (param_3 == param_4) goto LAB_140638910;
      wVar2 = *param_3;
      wVar1 = std::ctype<wchar_t>::tolower(*(ctype<wchar_t> **)(param_5 + 8),*pwVar5);
      wVar2 = std::ctype<wchar_t>::tolower(*(ctype<wchar_t> **)(param_5 + 8),wVar2);
      pwVar5 = pwVar5 + 1;
      param_3 = param_3 + 1;
    } while (wVar1 == wVar2);
  }
  return param_1;
}



// FUNCTION 1406389c0 FUN_1406389c0 body=734 status=ok
// SIG undefined FUN_1406389c0(void)

undefined8 *
FUN_1406389c0(undefined8 *param_1,longlong param_2,undefined8 param_3,ushort *param_4,
             ushort *param_5)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res18 [16];
  
  puVar4 = param_5;
  if (param_4 == param_5) {
    *param_1 = param_3;
    return param_1;
  }
  uVar12 = 0;
  do {
    puVar10 = param_4 + 1;
    puVar11 = puVar10;
    if (*param_4 == 0x24) {
      if (puVar10 == puVar4) {
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                  (param_3,0x24);
      }
      else {
        uVar1 = *puVar10;
        if (uVar1 == 0x24) {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                    (param_3,0x24);
          puVar11 = param_4 + 2;
        }
        else if (uVar1 == 0x60) {
          puVar9 = *(undefined2 **)(param_2 + 0x28);
          uVar13 = (*(longlong *)(param_2 + 0x30) - (longlong)puVar9) + 1U >> 1;
          if (*(undefined2 **)(param_2 + 0x30) < puVar9) {
            uVar13 = uVar12;
          }
          uVar8 = uVar12;
          if (uVar13 == 0) {
LAB_140638af7:
            puVar11 = param_4 + 2;
          }
          else {
            do {
              std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              push_back(param_3,*puVar9);
              uVar8 = uVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 != uVar13);
            puVar11 = param_4 + 2;
          }
        }
        else {
          if (uVar1 == 0x27) {
            puVar9 = *(undefined2 **)(param_2 + 0x40);
            uVar13 = (*(longlong *)(param_2 + 0x48) - (longlong)puVar9) + 1U >> 1;
            if (*(undefined2 **)(param_2 + 0x48) < puVar9) {
              uVar13 = uVar12;
            }
            uVar8 = uVar12;
            if (uVar13 != 0) {
              do {
                std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                push_back(param_3,*puVar9);
                uVar8 = uVar8 + 1;
                puVar9 = puVar9 + 1;
              } while (uVar8 != uVar13);
            }
            goto LAB_140638af7;
          }
          puVar11 = param_4 + 2;
          if (uVar1 == 0x26) {
            puVar5 = *(undefined8 **)(param_2 + 0x10);
            lVar6 = *(longlong *)(param_2 + 0x18) - (longlong)puVar5;
            lVar2 = lVar6 >> 0x3f;
            if (lVar6 / 0x18 + lVar2 != lVar2) {
              puVar5 = (undefined8 *)FUN_14063ce50(&param_5,*puVar5,puVar5[1],param_3);
              param_3 = *puVar5;
            }
          }
          else if ((ushort)(uVar1 - 0x30) < 10) {
            uVar7 = uVar1 - 0x30;
            if ((puVar11 == puVar4) || (uVar1 = *puVar11, 9 < (ushort)(uVar1 - 0x30))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              puVar11 = param_4 + 3;
              uVar7 = (uint)uVar1 + (uVar7 * 5 + -0x18) * 2;
            }
            if (uVar7 == 0) {
              std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              push_back(param_3,0x24);
              std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              push_back(param_3,0x30);
              if (bVar3) {
                std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                push_back(param_3,0x30);
              }
            }
            else if ((ulonglong)uVar7 <
                     (ulonglong)
                     ((*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10)) / 0x18)) {
              puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar7 * 0x18);
              puVar5 = (undefined8 *)FUN_14063ce50(local_res18,*puVar5,puVar5[1],param_3);
              param_3 = *puVar5;
            }
          }
          else {
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                      (param_3,0x24);
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                      (param_3,*puVar10);
          }
        }
      }
    }
    else {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                (param_3);
    }
    param_4 = puVar11;
    if (puVar11 == puVar4) {
      *param_1 = param_3;
      return param_1;
    }
  } while( true );
}



// FUNCTION 140638ca0 FUN_140638ca0 body=448 status=ok
// SIG undefined FUN_140638ca0(void)

undefined8 *
FUN_140638ca0(undefined8 *param_1,longlong param_2,undefined8 param_3,ushort *param_4,
             ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  
  if (param_4 == param_5) {
    *param_1 = param_3;
    return param_1;
  }
  do {
    uVar6 = 0;
    puVar7 = param_4 + 1;
    if (*param_4 == 0x26) {
      puVar2 = *(undefined8 **)(param_2 + 0x10);
      lVar5 = *(longlong *)(param_2 + 0x18) - (longlong)puVar2;
      lVar3 = lVar5 >> 0x3f;
      if (lVar5 / 0x18 + lVar3 != lVar3) {
        puVar8 = (undefined2 *)*puVar2;
        uVar9 = (ulonglong)((longlong)puVar2[1] + (1 - (longlong)puVar8)) >> 1;
        if ((undefined2 *)puVar2[1] < puVar8) {
          uVar9 = uVar6;
        }
        if (uVar9 != 0) {
          do {
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                      (param_3,*puVar8);
            uVar6 = uVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 != uVar9);
        }
      }
    }
    else {
      if (*param_4 == 0x5c) {
        if (puVar7 == param_5) break;
        uVar1 = *puVar7;
        puVar7 = param_4 + 2;
        if ((ushort)(uVar1 - 0x30) < 10) {
          lVar3 = *(longlong *)(param_2 + 0x10);
          uVar9 = (ulonglong)(uVar1 - 0x30);
          if (uVar9 < (ulonglong)((*(longlong *)(param_2 + 0x18) - lVar3) / 0x18)) {
            puVar8 = *(undefined2 **)(lVar3 + uVar9 * 0x18);
            puVar4 = *(undefined2 **)(lVar3 + uVar9 * 0x18 + 8);
            uVar9 = (ulonglong)((longlong)puVar4 + (1 - (longlong)puVar8)) >> 1;
            if (puVar4 < puVar8) {
              uVar9 = uVar6;
            }
            if (uVar9 != 0) {
              do {
                std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                push_back(param_3,*puVar8);
                uVar6 = uVar6 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar6 != uVar9);
            }
          }
          goto LAB_140638e1e;
        }
      }
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                (param_3);
    }
LAB_140638e1e:
    param_4 = puVar7;
  } while (puVar7 != param_5);
  *param_1 = param_3;
  return param_1;
}



// FUNCTION 140638e60 FUN_140638e60 body=534 status=ok
// SIG undefined FUN_140638e60(void)

void FUN_140638e60(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  size_t _Size;
  size_t _Size_00;
  longlong *plVar11;
  longlong *plVar12;
  longlong *_Src;
  char cVar13;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  
  _Size = (longlong)param_2 - (longlong)param_1;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res18 = param_3;
  _guard_xfg_dispatch_icall_nop(param_4,param_1,_Size);
  plVar9 = (longlong *)((longlong)param_4 + (_Size - 8));
  *param_1 = *param_2;
  param_2 = param_2 + 1;
  _Src = param_4;
  local_98 = plVar9;
  do {
    while( true ) {
      plVar11 = param_1 + 1;
      lVar1 = *param_2;
      lVar2 = *_Src;
      if (lVar1 != 0) break;
      if (lVar2 != 0) {
        cVar13 = param_5 == '\0';
        goto LAB_140639014;
      }
LAB_140638ff7:
      plVar12 = param_1 + 2;
      lVar1 = *_Src;
      _Src = _Src + 1;
      *plVar11 = lVar1;
      param_1 = plVar11;
      if (_Src == plVar9) {
        _Size_00 = (longlong)local_res18 - (longlong)param_2;
        _guard_xfg_dispatch_icall_nop(plVar12,param_2,_Size_00);
        *(undefined8 *)(_Size_00 + (longlong)plVar12) =
             *(undefined8 *)((longlong)param_4 + (_Size - 8));
        return;
      }
    }
    cVar13 = param_5;
    if (lVar2 != 0) {
      if (param_5 == '\0') {
        local_res10 = *(undefined8 *)(lVar2 + 0x18);
        bVar6 = true;
        bVar5 = true;
        FName::ToString(&local_res10,&local_60);
        local_res20 = *(undefined8 *)(lVar1 + 0x18);
        FName::ToString(&local_res20,&local_70);
        puVar8 = &DAT_143f3eda8;
        puVar10 = &DAT_143f3eda8;
        if (local_58 != 0) {
          puVar10 = local_60;
        }
        if (local_68 != 0) {
          puVar8 = local_70;
        }
      }
      else {
        local_a8 = *(undefined8 *)(lVar1 + 0x18);
        bVar4 = true;
        bVar3 = true;
        FName::ToString(&local_a8,&local_80);
        local_a0 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_a0,&local_90);
        puVar10 = &DAT_143f3eda8;
        if (local_78 != 0) {
          puVar10 = local_80;
        }
        puVar8 = &DAT_143f3eda8;
        if (local_88 != 0) {
          puVar8 = local_90;
        }
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
      cVar13 = iVar7 < 0;
      if ((bVar3) && (bVar3 = false, local_90 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar4) && (bVar4 = false, local_80 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar5) && (bVar5 = false, local_70 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      plVar9 = local_98;
      if ((bVar6) && (bVar6 = false, local_60 != (undefined2 *)0x0)) {
        FMemory::Free();
        plVar9 = local_98;
      }
    }
LAB_140639014:
    plVar12 = param_1 + 2;
    if (cVar13 == '\0') goto LAB_140638ff7;
    lVar1 = *param_2;
    param_2 = param_2 + 1;
    *plVar11 = lVar1;
    param_1 = plVar11;
    if (param_2 == local_res18) {
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,(longlong)param_4 + (_Size - (longlong)_Src));
      return;
    }
  } while( true );
}



// FUNCTION 140639080 FUN_140639080 body=579 status=ok
// SIG undefined FUN_140639080(void)

void FUN_140639080(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = param_4;
  if (param_1 != param_2) {
    puVar5 = (undefined4 *)((longlong)param_1 + 0xc);
    do {
      *plVar8 = 0;
      puVar1 = puVar5 + 4;
      *plVar8 = *(longlong *)(puVar5 + -3);
      plVar8 = plVar8 + 2;
      *(undefined8 *)(puVar5 + -3) = 0;
      *(undefined4 *)((longlong)param_4 + (-0x14 - (longlong)param_1) + (longlong)puVar1) =
           puVar5[-1];
      *(undefined4 *)((longlong)param_4 + (-0x10 - (longlong)param_1) + (longlong)puVar1) = *puVar5;
      plVar2 = (longlong *)(puVar5 + 1);
      *(undefined8 *)(puVar5 + -1) = 0;
      puVar5 = puVar1;
    } while (plVar2 != param_2);
  }
  plVar2 = plVar8 + -2;
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  param_1 = param_1 + 2;
  param_2 = param_2 + 2;
  plVar4 = param_4;
  do {
    while( true ) {
      if (param_5 == '\0') {
        if ((int)plVar4[1] == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*plVar4;
        }
        if ((int)param_2[1] == 0) {
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar7);
          bVar9 = iVar3 < 0;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*param_2,puVar7);
          bVar9 = iVar3 < 0;
        }
      }
      else {
        if ((int)plVar4[1] == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*plVar4;
        }
        if ((int)param_2[1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_2;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
        bVar9 = 0 < iVar3;
      }
      if (!bVar9) break;
      if (param_1 != param_2) {
        if (*param_1 != 0) {
          FMemory::Free();
        }
        *param_1 = *param_2;
        *param_2 = 0;
        *(int *)(param_1 + 1) = (int)param_2[1];
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
        param_2[1] = 0;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      if (param_2 == param_3) {
        FUN_14063af70(plVar4,plVar8,param_1);
joined_r0x000140639289:
        for (; param_4 != plVar8; param_4 = param_4 + 2) {
          if (*param_4 != 0) {
            FMemory::Free();
          }
        }
        return;
      }
    }
    if (param_1 != plVar4) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_1 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    param_1 = param_1 + 2;
    plVar4 = plVar4 + 2;
  } while (plVar4 != plVar2);
  plVar4 = (longlong *)FUN_14063af70(param_2,param_3,param_1);
  if (plVar4 != plVar2) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    *plVar4 = *plVar2;
    *plVar2 = 0;
    *(int *)(plVar4 + 1) = (int)plVar8[-1];
    *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)((longlong)plVar8 + -4);
    plVar8[-1] = 0;
  }
  goto joined_r0x000140639289;
}



// FUNCTION 1406392d0 FUN_1406392d0 body=551 status=ok
// SIG undefined FUN_1406392d0(void)

void FUN_1406392d0(longlong *param_1,void *param_2,longlong param_3,longlong *param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *_Src;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char cVar14;
  ulonglong local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res10 = local_res10 & 0xffffffff00000000;
  local_res20 = param_4;
  _guard_xfg_dispatch_icall_nop(param_4,param_2,param_3 - (longlong)param_2);
  *(longlong *)(param_3 + -8) = *(longlong *)((longlong)param_2 + -8);
  plVar13 = (longlong *)((longlong)local_res20 + ((param_3 - (longlong)param_2) - 8U));
  plVar11 = (longlong *)((longlong)param_2 + -0x10);
  _Src = local_res20;
  plVar7 = (longlong *)(param_3 + -8);
LAB_140639330:
  do {
    plVar12 = plVar7;
    lVar1 = *plVar13;
    lVar2 = *plVar11;
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        cVar14 = param_5 == '\0';
        goto LAB_1406394bc;
      }
    }
    else {
      cVar14 = param_5;
      if (lVar2 != 0) {
        if (param_5 == '\0') {
          local_res10 = *(ulonglong *)(lVar2 + 0x18);
          bVar6 = true;
          bVar5 = true;
          FName::ToString(&local_res10,&local_58);
          local_res18 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_res18,&local_68);
          puVar9 = &DAT_143f3eda8;
          puVar10 = &DAT_143f3eda8;
          if (local_50 != 0) {
            puVar10 = local_58;
          }
          if (local_60 != 0) {
            puVar9 = local_68;
          }
        }
        else {
          local_98 = *(undefined8 *)(lVar1 + 0x18);
          bVar4 = true;
          bVar3 = true;
          FName::ToString(&local_98,&local_78);
          local_90 = *(undefined8 *)(lVar2 + 0x18);
          FName::ToString(&local_90,&local_88);
          puVar10 = &DAT_143f3eda8;
          if (local_70 != 0) {
            puVar10 = local_78;
          }
          puVar9 = &DAT_143f3eda8;
          if (local_80 != 0) {
            puVar9 = local_88;
          }
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
        cVar14 = iVar8 < 0;
        if ((bVar3) && (bVar3 = false, local_88 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar4) && (bVar4 = false, local_78 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (bVar5 = false, local_68 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        _Src = local_res20;
        if ((bVar6) && (bVar6 = false, local_58 != (undefined2 *)0x0)) {
          FMemory::Free();
          _Src = local_res20;
        }
      }
LAB_1406394bc:
      if (cVar14 != '\0') {
        plVar12[-1] = *plVar11;
        if (param_1 == plVar11) {
          plVar12[-2] = *plVar13;
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(plVar12 + -2) - ((longlong)plVar13 - (longlong)_Src)),_Src,
                     (longlong)plVar13 - (longlong)_Src);
          return;
        }
        plVar11 = plVar11 + -1;
        plVar7 = plVar12 + -1;
        goto LAB_140639330;
      }
    }
    lVar1 = *plVar13;
    plVar13 = plVar13 + -1;
    plVar12[-1] = lVar1;
    plVar7 = plVar12 + -1;
    if (_Src == plVar13) {
      plVar12[-2] = *plVar11;
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(plVar12 + -2) - ((longlong)plVar11 - (longlong)param_1)),
                 param_1,(longlong)plVar11 - (longlong)param_1);
      *param_1 = *local_res20;
      return;
    }
  } while( true );
}



// FUNCTION 140639500 FUN_140639500 body=675 status=ok
// SIG undefined FUN_140639500(void)

void FUN_140639500(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4,
                  char param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  longlong *plVar9;
  
  plVar7 = param_4;
  if (param_2 != param_3) {
    puVar5 = param_2 + 3;
    do {
      *plVar7 = 0;
      puVar1 = puVar5 + 4;
      *plVar7 = *(longlong *)(puVar5 + -3);
      plVar7 = plVar7 + 2;
      *(undefined8 *)(puVar5 + -3) = 0;
      *(undefined4 *)((longlong)param_4 + (-0x14 - (longlong)param_2) + (longlong)puVar1) =
           puVar5[-1];
      *(undefined4 *)((longlong)param_4 + (-0x10 - (longlong)param_2) + (longlong)puVar1) = *puVar5;
      puVar2 = puVar5 + 1;
      *(undefined8 *)(puVar5 + -1) = 0;
      puVar5 = puVar1;
    } while (puVar2 != param_3);
  }
  plVar8 = (longlong *)(param_2 + -4);
  plVar10 = (longlong *)(param_3 + -4);
  if (plVar10 != plVar8) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    *plVar10 = *plVar8;
    *plVar8 = 0;
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    *(undefined8 *)(param_2 + -2) = 0;
  }
  plVar12 = plVar7 + -2;
  do {
    plVar9 = plVar8 + -2;
    while( true ) {
      plVar11 = plVar10;
      if (param_5 == '\0') {
        if ((int)plVar8[-1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*plVar9;
        }
        if ((int)plVar12[1] == 0) {
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar6);
          bVar13 = iVar3 < 0;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*plVar12,puVar6);
          bVar13 = iVar3 < 0;
        }
      }
      else {
        if ((int)plVar8[-1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*plVar9;
        }
        if ((int)plVar12[1] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*plVar12;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
        bVar13 = 0 < iVar3;
      }
      plVar10 = plVar11 + -2;
      if (bVar13) break;
      if (plVar10 != plVar12) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        *plVar10 = *plVar12;
        *plVar12 = 0;
        *(int *)(plVar11 + -1) = (int)plVar12[1];
        *(undefined4 *)((longlong)plVar11 + -4) = *(undefined4 *)((longlong)plVar12 + 0xc);
        plVar12[1] = 0;
      }
      plVar12 = plVar12 + -2;
      if (param_4 == plVar12) {
        plVar10 = plVar11 + -4;
        if (plVar10 != plVar9) {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          *plVar10 = *plVar9;
          *plVar9 = 0;
          *(int *)(plVar11 + -3) = (int)plVar8[-1];
          *(undefined4 *)((longlong)plVar11 + -0x14) = *(undefined4 *)((longlong)plVar8 + -4);
          plVar8[-1] = 0;
        }
        FUN_14063aef0(param_1,plVar9,plVar10);
        if (param_1 != param_4) {
          if (*param_1 != 0) {
            FMemory::Free();
          }
          *param_1 = *param_4;
          *param_4 = 0;
          *(int *)(param_1 + 1) = (int)param_4[1];
          *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
          param_4[1] = 0;
        }
        goto joined_r0x00014063976c;
      }
    }
    if (plVar10 != plVar9) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      *plVar10 = *plVar9;
      *plVar9 = 0;
      *(int *)(plVar11 + -1) = (int)plVar8[-1];
      *(undefined4 *)((longlong)plVar11 + -4) = *(undefined4 *)((longlong)plVar8 + -4);
      plVar8[-1] = 0;
    }
    plVar8 = plVar9;
    if (param_1 == plVar9) {
      plVar10 = plVar11 + -4;
      if (plVar10 != plVar12) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        *plVar10 = *plVar12;
        *plVar12 = 0;
        *(int *)(plVar11 + -3) = (int)plVar12[1];
        *(undefined4 *)((longlong)plVar11 + -0x14) = *(undefined4 *)((longlong)plVar12 + 0xc);
        plVar12[1] = 0;
      }
      FUN_14063aef0(param_4,plVar12,plVar10);
joined_r0x00014063976c:
      for (; param_4 != plVar7; param_4 = param_4 + 2) {
        if (*param_4 != 0) {
          FMemory::Free();
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 1406397b0 FUN_1406397b0 body=968 status=ok
// SIG undefined FUN_1406397b0(void)

/* WARNING: Removing unreachable block (ram,0x000140639a85) */
/* WARNING: Removing unreachable block (ram,0x000140639a92) */

void FUN_1406397b0(longlong *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  char cVar16;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  if (0x20 < param_3) {
    lVar12 = (param_3 - 0x21U >> 5) + 1;
    do {
      local_c8 = param_1 + 0x20;
      if ((param_1 != local_c8) && (plVar14 = param_1 + 1, plVar14 != local_c8)) {
LAB_140639840:
        lVar1 = *plVar14;
        lVar2 = *param_1;
        plVar15 = plVar14;
        if (lVar1 == 0) {
          if (lVar2 == 0) goto LAB_1406399b0;
          cVar16 = param_4 == '\0';
        }
        else {
          cVar16 = param_4;
          if (lVar2 != 0) {
            if (param_4 == '\0') {
              local_108 = *(undefined8 *)(lVar2 + 0x18);
              bVar6 = true;
              bVar3 = true;
              FName::ToString(&local_108,&local_90);
              local_100 = *(undefined8 *)(lVar1 + 0x18);
              FName::ToString(&local_100,&local_a0);
              puVar11 = &DAT_143f3eda8;
              puVar13 = &DAT_143f3eda8;
              if (local_88 != 0) {
                puVar13 = local_90;
              }
              if (local_98 != 0) {
                puVar11 = local_a0;
              }
            }
            else {
              local_f8 = *(undefined8 *)(lVar1 + 0x18);
              bVar5 = true;
              bVar4 = true;
              FName::ToString(&local_f8,&local_b0);
              local_f0 = *(undefined8 *)(lVar2 + 0x18);
              FName::ToString(&local_f0,&local_c0);
              puVar13 = &DAT_143f3eda8;
              if (local_a8 != 0) {
                puVar13 = local_b0;
              }
              puVar11 = &DAT_143f3eda8;
              if (local_b8 != 0) {
                puVar11 = local_c0;
              }
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar13);
            cVar16 = iVar10 < 0;
            if ((bVar4) && (bVar4 = false, local_c0 != (undefined2 *)0x0)) {
              FMemory::Free();
            }
            if ((bVar5) && (bVar5 = false, local_b0 != (undefined2 *)0x0)) {
              FMemory::Free();
            }
            if ((bVar6) && (bVar6 = false, local_a0 != (undefined2 *)0x0)) {
              FMemory::Free();
            }
            if ((bVar3) && (bVar3 = false, local_90 != (undefined2 *)0x0)) {
              FMemory::Free();
            }
          }
        }
        if (cVar16 == '\0') {
LAB_1406399b0:
          do {
            lVar2 = plVar15[-1];
            if (lVar1 == 0) {
              if (lVar2 == 0) goto LAB_140639b02;
              cVar16 = param_4 == '\0';
            }
            else {
              cVar16 = param_4;
              if (lVar2 != 0) {
                if (param_4 == '\0') {
                  local_e8 = *(undefined8 *)(lVar2 + 0x18);
                  bVar9 = true;
                  bVar8 = true;
                  FName::ToString(&local_e8,&local_50);
                  local_e0 = *(undefined8 *)(lVar1 + 0x18);
                  FName::ToString(&local_e0,&local_60);
                  puVar11 = &DAT_143f3eda8;
                  puVar13 = &DAT_143f3eda8;
                  if (local_48 != 0) {
                    puVar13 = local_50;
                  }
                  if (local_58 != 0) {
                    puVar11 = local_60;
                  }
                }
                else {
                  local_d8 = *(undefined8 *)(lVar1 + 0x18);
                  bVar7 = true;
                  FName::ToString(&local_d8,&local_70);
                  local_d0 = *(undefined8 *)(lVar2 + 0x18);
                  FName::ToString(&local_d0,&local_80);
                  puVar13 = &DAT_143f3eda8;
                  if (local_68 != 0) {
                    puVar13 = local_70;
                  }
                  puVar11 = &DAT_143f3eda8;
                  if (local_78 != 0) {
                    puVar11 = local_80;
                  }
                }
                iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar13);
                cVar16 = iVar10 < 0;
                if ((bVar7) && (bVar7 = false, local_70 != (undefined2 *)0x0)) {
                  FMemory::Free();
                }
                if ((bVar8) && (bVar8 = false, local_60 != (undefined2 *)0x0)) {
                  FMemory::Free();
                }
                if ((bVar9) && (bVar9 = false, local_50 != (undefined2 *)0x0)) {
                  FMemory::Free();
                }
              }
            }
            if (cVar16 == '\0') goto LAB_140639b02;
            *plVar15 = plVar15[-1];
            plVar15 = plVar15 + -1;
          } while( true );
        }
        _guard_xfg_dispatch_icall_nop(param_1 + 1,param_1,(longlong)plVar14 - (longlong)param_1);
        *param_1 = lVar1;
        goto LAB_140639b0a;
      }
LAB_140639b24:
      lVar12 = lVar12 + -1;
      param_1 = local_c8;
    } while (lVar12 != 0);
  }
  FUN_140639f20(param_1,param_2,param_4);
  return;
LAB_140639b02:
  *plVar15 = lVar1;
LAB_140639b0a:
  plVar14 = plVar14 + 1;
  if (plVar14 == local_c8) goto LAB_140639b24;
  goto LAB_140639840;
}



// FUNCTION 140639b80 FUN_140639b80 body=677 status=ok
// SIG undefined FUN_140639b80(void)

void FUN_140639b80(longlong *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  longlong local_50 [3];
  
  if (0x20 < param_3) {
    lVar8 = (param_3 - 0x21U >> 5) + 1;
    plVar13 = param_1;
    do {
      param_1 = plVar13 + 0x40;
      plVar6 = plVar13;
      if (plVar13 != param_1) {
        while (plVar12 = plVar6 + 2, plVar12 != param_1) {
          puVar3 = (undefined2 *)*plVar12;
          *plVar12 = 0;
          iVar1 = (int)plVar12[1];
          uVar2 = *(undefined4 *)((longlong)plVar6 + 0x1c);
          plVar12[1] = 0;
          if (param_4 == '\0') {
            if ((int)plVar13[1] == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*plVar13;
            }
            puVar9 = &DAT_143f3eda8;
            if (iVar1 != 0) {
              puVar9 = puVar3;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
            bVar14 = iVar7 < 0;
          }
          else {
            if ((int)plVar13[1] == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*plVar13;
            }
            puVar9 = &DAT_143f3eda8;
            if (iVar1 != 0) {
              puVar9 = puVar3;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
            bVar14 = 0 < iVar7;
          }
          plVar6 = plVar12;
          if (bVar14) {
            plVar11 = plVar12 + 2;
            while (plVar5 = plVar12, plVar4 = plVar11, plVar5 != plVar13) {
              plVar12 = plVar5 + -2;
              plVar11 = plVar4 + -2;
              if (plVar11 != plVar12) {
                if (*plVar11 != 0) {
                  FMemory::Free();
                }
                *plVar11 = *plVar12;
                *plVar12 = 0;
                *(int *)(plVar4 + -1) = (int)plVar5[-1];
                *(undefined4 *)((longlong)plVar4 + -4) = *(undefined4 *)((longlong)plVar5 + -4);
                plVar5[-1] = 0;
              }
            }
            if (plVar13 == local_50) {
LAB_140639daa:
              if (puVar3 != (undefined2 *)0x0) {
                FMemory::Free(puVar3);
              }
            }
            else {
              if (*plVar13 != 0) {
                FMemory::Free();
              }
              *plVar13 = (longlong)puVar3;
              *(int *)(plVar13 + 1) = iVar1;
              *(undefined4 *)((longlong)plVar13 + 0xc) = uVar2;
            }
          }
          else {
            while( true ) {
              plVar11 = plVar12;
              plVar12 = plVar11 + -2;
              if (param_4 == '\0') {
                if ((int)plVar11[-1] == 0) {
                  puVar10 = &DAT_143f3eda8;
                }
                else {
                  puVar10 = (undefined2 *)*plVar12;
                }
                puVar9 = &DAT_143f3eda8;
                if (iVar1 != 0) {
                  puVar9 = puVar3;
                }
                iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
                bVar14 = iVar7 < 0;
              }
              else {
                if ((int)plVar11[-1] == 0) {
                  puVar10 = &DAT_143f3eda8;
                }
                else {
                  puVar10 = (undefined2 *)*plVar12;
                }
                puVar9 = &DAT_143f3eda8;
                if (iVar1 != 0) {
                  puVar9 = puVar3;
                }
                iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
                bVar14 = 0 < iVar7;
              }
              if (!bVar14) break;
              if (plVar11 != plVar12) {
                if (*plVar11 != 0) {
                  FMemory::Free();
                }
                *plVar11 = *plVar12;
                *plVar12 = 0;
                *(int *)(plVar11 + 1) = (int)plVar11[-1];
                *(undefined4 *)((longlong)plVar11 + 0xc) = *(undefined4 *)((longlong)plVar11 + -4);
                plVar11[-1] = 0;
              }
            }
            if (plVar11 == local_50) goto LAB_140639daa;
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            *plVar11 = (longlong)puVar3;
            *(int *)(plVar11 + 1) = iVar1;
            *(undefined4 *)((longlong)plVar11 + 0xc) = uVar2;
          }
        }
      }
      lVar8 = lVar8 + -1;
      plVar13 = param_1;
    } while (lVar8 != 0);
  }
  FUN_14063a270(param_1,param_2,param_4);
  return;
}



// FUNCTION 140639e30 FUN_140639e30 body=238 status=ok
// SIG undefined FUN_140639e30(void)

float * FUN_140639e30(float *param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  
  if (param_1 != param_2) {
    for (pfVar4 = param_1 + 1; pfVar4 != param_2; pfVar4 = pfVar4 + 1) {
      fVar1 = *pfVar4;
      fVar2 = *param_1;
      if (param_3 == '\0') {
        bVar5 = fVar2 < fVar1;
      }
      else {
        bVar5 = fVar1 < fVar2;
      }
      pfVar3 = pfVar4;
      if (bVar5 || fVar2 == fVar1) {
        while( true ) {
          fVar2 = pfVar3[-1];
          if (param_3 == '\0') {
            bVar5 = fVar2 < fVar1;
          }
          else {
            bVar5 = fVar1 < fVar2;
          }
          if (bVar5 || fVar2 == fVar1) break;
          *pfVar3 = fVar2;
          pfVar3 = pfVar3 + -1;
        }
        *pfVar3 = fVar1;
      }
      else {
        _guard_xfg_dispatch_icall_nop(param_1 + 1,param_1,(longlong)pfVar4 - (longlong)param_1);
        *param_1 = fVar1;
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140639f20 FUN_140639f20 body=839 status=ok
// SIG undefined FUN_140639f20(void)

/* WARNING: Removing unreachable block (ram,0x00014063a19f) */
/* WARNING: Removing unreachable block (ram,0x00014063a1ac) */

longlong * FUN_140639f20(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  char cVar15;
  ulonglong local_res20;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res20 = local_res20 & 0xffffffff00000000;
  plVar10 = param_1;
  if (param_1 == param_2) {
    return param_2;
  }
joined_r0x000140639f61:
  while( true ) {
    plVar10 = plVar10 + 1;
    if (plVar10 == param_2) {
      return param_2;
    }
    lVar1 = *plVar10;
    lVar2 = *param_1;
    plVar14 = plVar10;
    if (lVar1 == 0) {
      if (lVar2 == 0) break;
      cVar15 = param_3 == '\0';
    }
    else {
      cVar15 = param_3;
      if (lVar2 != 0) {
        if (param_3 == '\0') {
          local_res20 = *(ulonglong *)(lVar2 + 0x18);
          bVar6 = true;
          bVar3 = true;
          FName::ToString(&local_res20,&local_90);
          local_f8 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_f8,&local_a0);
          puVar12 = &DAT_143f3eda8;
          puVar13 = &DAT_143f3eda8;
          if (local_88 != 0) {
            puVar13 = local_90;
          }
          if (local_98 != 0) {
            puVar12 = local_a0;
          }
        }
        else {
          local_f0 = *(undefined8 *)(lVar1 + 0x18);
          bVar5 = true;
          bVar4 = true;
          FName::ToString(&local_f0,&local_b0);
          local_e8 = *(undefined8 *)(lVar2 + 0x18);
          FName::ToString(&local_e8,&local_c0);
          puVar13 = &DAT_143f3eda8;
          if (local_a8 != 0) {
            puVar13 = local_b0;
          }
          puVar12 = &DAT_143f3eda8;
          if (local_b8 != 0) {
            puVar12 = local_c0;
          }
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
        cVar15 = iVar11 < 0;
        if ((bVar4) && (bVar4 = false, local_c0 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (bVar5 = false, local_b0 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar6) && (bVar6 = false, local_a0 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar3) && (bVar3 = false, local_90 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
      }
    }
    if (cVar15 == '\0') break;
    _guard_xfg_dispatch_icall_nop(param_1 + 1,param_1,(longlong)plVar10 - (longlong)param_1);
    *param_1 = lVar1;
  }
  do {
    lVar2 = plVar14[-1];
    if (lVar1 == 0) {
      if (lVar2 == 0) break;
      cVar15 = param_3 == '\0';
    }
    else {
      cVar15 = param_3;
      if (lVar2 != 0) {
        if (param_3 == '\0') {
          local_e0 = *(undefined8 *)(lVar2 + 0x18);
          bVar9 = true;
          bVar8 = true;
          FName::ToString(&local_e0,&local_50);
          local_d8 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_d8,&local_60);
          puVar12 = &DAT_143f3eda8;
          puVar13 = &DAT_143f3eda8;
          if (local_48 != 0) {
            puVar13 = local_50;
          }
          if (local_58 != 0) {
            puVar12 = local_60;
          }
        }
        else {
          local_d0 = *(undefined8 *)(lVar1 + 0x18);
          bVar7 = true;
          FName::ToString(&local_d0,&local_70);
          local_c8 = *(undefined8 *)(lVar2 + 0x18);
          FName::ToString(&local_c8,&local_80);
          puVar13 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar13 = local_70;
          }
          puVar12 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar12 = local_80;
          }
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
        cVar15 = iVar11 < 0;
        if ((bVar7) && (bVar7 = false, local_70 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar8) && (bVar8 = false, local_60 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar9) && (bVar9 = false, local_50 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
      }
    }
    if (cVar15 == '\0') break;
    *plVar14 = plVar14[-1];
    plVar14 = plVar14 + -1;
  } while( true );
  *plVar14 = lVar1;
  goto joined_r0x000140639f61;
}



// FUNCTION 14063a270 FUN_14063a270 body=625 status=ok
// SIG undefined FUN_14063a270(void)

longlong * FUN_14063a270(longlong *param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong local_38 [2];
  
  if (param_1 == param_2) {
    return param_2;
  }
  plVar11 = param_1 + 2;
  if (plVar11 == param_2) {
    return param_2;
  }
  do {
    puVar3 = (undefined2 *)*plVar11;
    *plVar11 = 0;
    uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
    iVar2 = (int)plVar11[1];
    plVar11[1] = 0;
    if (param_3 == '\0') {
      if ((int)param_1[1] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_1;
      }
      puVar7 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar7 = puVar3;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      bVar12 = iVar6 < 0;
    }
    else {
      if ((int)param_1[1] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_1;
      }
      puVar7 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar7 = puVar3;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      bVar12 = 0 < iVar6;
    }
    plVar9 = plVar11;
    if (bVar12) {
      plVar9 = plVar11 + 2;
      plVar10 = plVar11;
      while (plVar5 = plVar10, plVar4 = plVar9, plVar5 != param_1) {
        plVar10 = plVar5 + -2;
        plVar9 = plVar4 + -2;
        if (plVar9 != plVar10) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          *plVar9 = *plVar10;
          *plVar10 = 0;
          *(int *)(plVar4 + -1) = (int)plVar5[-1];
          *(undefined4 *)((longlong)plVar4 + -4) = *(undefined4 *)((longlong)plVar5 + -4);
          plVar5[-1] = 0;
        }
      }
      if (param_1 == local_38) {
LAB_14063a47d:
        if (puVar3 != (undefined2 *)0x0) {
          FMemory::Free(puVar3);
        }
      }
      else {
        if (*param_1 != 0) {
          FMemory::Free();
        }
        *param_1 = (longlong)puVar3;
        *(int *)(param_1 + 1) = iVar2;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
      }
    }
    else {
      while( true ) {
        plVar10 = plVar9;
        plVar9 = plVar10 + -2;
        if (param_3 == '\0') {
          if ((int)plVar10[-1] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*plVar9;
          }
          puVar7 = &DAT_143f3eda8;
          if (iVar2 != 0) {
            puVar7 = puVar3;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          bVar12 = iVar6 < 0;
        }
        else {
          if ((int)plVar10[-1] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*plVar9;
          }
          puVar7 = &DAT_143f3eda8;
          if (iVar2 != 0) {
            puVar7 = puVar3;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          bVar12 = 0 < iVar6;
        }
        if (!bVar12) break;
        if (plVar10 != plVar9) {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          *plVar10 = *plVar9;
          *plVar9 = 0;
          *(int *)(plVar10 + 1) = (int)plVar10[-1];
          *(undefined4 *)((longlong)plVar10 + 0xc) = *(undefined4 *)((longlong)plVar10 + -4);
          plVar10[-1] = 0;
        }
      }
      if (plVar10 == local_38) goto LAB_14063a47d;
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      *plVar10 = (longlong)puVar3;
      *(int *)(plVar10 + 1) = iVar2;
      *(undefined4 *)((longlong)plVar10 + 0xc) = uVar1;
    }
    plVar11 = plVar11 + 2;
    if (plVar11 == param_2) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 14063a4f0 FUN_14063a4f0 body=144 status=ok
// SIG undefined FUN_14063a4f0(void)

short * FUN_14063a4f0(short *param_1,short *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  
  do {
    if (param_3 == (uint *)0x0) {
      return param_1;
    }
    uVar7 = 0;
    if (param_3[3] != 0) {
      uVar2 = *param_3;
      do {
        uVar3 = 0;
        psVar5 = param_1;
        if (uVar2 != 0) {
          psVar4 = (short *)(*(longlong *)(param_3 + 4) + uVar7 * 2);
          do {
            sVar1 = *psVar5;
            psVar5 = psVar5 + 1;
            if (sVar1 != *psVar4) break;
            uVar3 = uVar3 + 1;
            psVar4 = psVar4 + 1;
          } while (uVar3 < uVar2);
        }
        if (psVar5 == param_2) {
          return param_2;
        }
        uVar6 = (int)uVar7 + uVar2;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < param_3[3]);
    }
    param_3 = *(uint **)(param_3 + 6);
  } while( true );
}



// FUNCTION 14063a580 FUN_14063a580 body=1268 status=ok
// SIG undefined FUN_14063a580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14063a580(undefined2 param_1,uint *param_2,undefined8 *param_3)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  short *psVar5;
  undefined8 ****ppppuVar6;
  wchar_t *_Dst;
  short *psVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  size_t _Size;
  wchar_t *pwVar16;
  uint uVar17;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  short local_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uStack_90 = 7;
  local_98 = 0;
  local_a8 = (undefined8 ***)((ulonglong)local_a8 & 0xffffffffffff0000);
  local_b8 = 0;
  uStack_b0 = 7;
  local_c8 = 0;
  local_f8 = param_3;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
            (&local_c8,param_1);
  psVar5 = &local_c8;
  if (7 < uStack_b0) {
    psVar5 = (short *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
  }
  psVar7 = &local_c8;
  if (7 < uStack_b0) {
    psVar7 = (short *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
  }
  psVar5 = (short *)FUN_14063d550(param_3,&local_88,psVar7,psVar5 + local_b8);
  if (&local_c8 != psVar5) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
              (&local_c8);
    uStack_c4 = *(undefined4 *)(psVar5 + 2);
    uStack_c0 = *(undefined4 *)(psVar5 + 4);
    uStack_bc = *(undefined4 *)(psVar5 + 6);
    local_c8 = (short)*(undefined4 *)psVar5;
    uStack_c6 = (undefined2)((uint)*(undefined4 *)psVar5 >> 0x10);
    local_b8 = *(ulonglong *)(psVar5 + 8);
    uStack_b0 = *(ulonglong *)(psVar5 + 0xc);
    psVar5[8] = 0;
    psVar5[9] = 0;
    psVar5[10] = 0;
    psVar5[0xb] = 0;
    psVar5[0xc] = 7;
    psVar5[0xd] = 0;
    psVar5[0xe] = 0;
    psVar5[0xf] = 0;
    *psVar5 = 0;
  }
  if (7 < uStack_70) {
    lVar2 = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
    uVar9 = uStack_70 * 2 + 2;
    lVar10 = lVar2;
    if (0xfff < uVar9) {
      lVar10 = *(longlong *)(lVar2 + -8);
      uVar9 = uStack_70 * 2 + 0x29;
      if (0x1f < (lVar2 - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar10,uVar9);
  }
  psVar5 = (short *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
  uVar9 = uStack_b0;
  for (; param_2 != (uint *)0x0; param_2 = *(uint **)(param_2 + 6)) {
    uVar11 = 0;
    if (param_2[3] != 0) {
      uVar4 = *param_2;
      do {
        uVar9 = uStack_90;
        uVar14 = (ulonglong)uVar4;
        _Src = (void *)(*(longlong *)(param_2 + 4) + uVar11 * 2);
        if (uStack_90 < uVar14) {
          if (0x7ffffffffffffffe - (uStack_90 >> 1) < uStack_90) {
            uVar12 = 0x7ffffffffffffffe;
          }
          else {
            uVar1 = (uStack_90 >> 1) + uStack_90;
            uVar12 = uVar14 | 7;
            if ((uVar14 | 7) < uVar1) {
              uVar12 = uVar1;
            }
          }
          ppppuVar6 = (undefined8 ****)std::allocator<wchar_t>::allocate(&local_a8,uVar12 + 1);
          local_98 = uVar14;
          uStack_90 = uVar12;
          _guard_xfg_dispatch_icall_nop(ppppuVar6,_Src,uVar14 * 2);
          *(undefined2 *)((longlong)ppppuVar6 + uVar14 * 2) = 0;
          if (7 < uVar9) {
            lVar10 = uVar9 * 2;
            uVar9 = lVar10 + 2;
            ppppuVar8 = (undefined8 ****)local_a8;
            if (0xfff < uVar9) {
              ppppuVar8 = (undefined8 ****)local_a8[-1];
              uVar9 = lVar10 + 0x29;
              if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar8)))
              goto LAB_14063aa22;
            }
            FMemory::operator_delete(ppppuVar8,uVar9);
          }
        }
        else {
          ppppuVar6 = &local_a8;
          if (7 < uStack_90) {
            ppppuVar6 = (undefined8 ****)local_a8;
          }
          local_98 = uVar14;
          _guard_xfg_dispatch_icall_nop(ppppuVar6,_Src,uVar14 * 2);
          *(undefined2 *)((longlong)ppppuVar6 + uVar14 * 2) = 0;
          ppppuVar6 = (undefined8 ****)local_a8;
        }
        local_a8 = ppppuVar6;
        _Dst = (wchar_t *)0x0;
        ppppuVar6 = &local_a8;
        if (7 < uStack_90) {
          ppppuVar6 = (undefined8 ****)local_a8;
        }
        uStack_70 = 7;
        ppppuVar8 = &local_a8;
        if (7 < uStack_90) {
          ppppuVar8 = (undefined8 ****)local_a8;
        }
        local_88 = 0;
        local_78 = 0;
        ppppuVar6 = (undefined8 ****)((longlong)ppppuVar6 + local_98 * 2);
        if (ppppuVar8 == ppppuVar6) {
          local_e0 = 0;
          uStack_d8 = 7;
          local_f0 = (undefined8 ***)((ulonglong)CONCAT42(uStack_84,uStack_86) << 0x10);
          uStack_e8 = CONCAT44(uStack_7c,uStack_80);
        }
        else {
          _Size = (longlong)ppppuVar6 - (longlong)ppppuVar8;
          uVar9 = (longlong)_Size >> 1;
          pwVar13 = _Dst;
          pwVar16 = _Dst;
          if (uVar9 != 0) {
            if (0x7fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
              std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
            }
            _Dst = (wchar_t *)std::allocator<wchar_t>::allocate(&local_e0,uVar9);
            _guard_xfg_dispatch_icall_nop(_Dst,ppppuVar8,_Size);
            pwVar13 = (wchar_t *)(_Size + (longlong)_Dst);
            pwVar16 = _Dst + uVar9;
          }
          puVar3 = local_f8;
          std::ctype<wchar_t>::tolower
                    ((ctype<wchar_t> *)local_f8[1],_Dst,
                     _Dst + ((longlong)pwVar13 - (longlong)_Dst >> 1));
          (**(code **)(*(longlong *)*puVar3 + 0x20))
                    ((longlong *)*puVar3,&local_68,_Dst,
                     _Dst + ((longlong)pwVar13 - (longlong)_Dst >> 1));
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          _Tidy_deallocate(&local_88);
          uStack_d8 = uStack_50;
          local_e0 = local_58;
          local_f0 = (undefined8 ***)CONCAT62(uStack_66,local_68);
          local_68 = 0;
          uStack_e8 = uStack_60;
          local_58 = 0;
          uStack_50 = 7;
          local_78 = local_e0;
          uStack_70 = uStack_d8;
          if (_Dst != (wchar_t *)0x0) {
            uVar9 = ((longlong)pwVar16 - (longlong)_Dst >> 1) * 2;
            pwVar13 = _Dst;
            if (0xfff < uVar9) {
              pwVar13 = *(wchar_t **)(_Dst + -4);
              uVar9 = uVar9 + 0x27;
              if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pwVar13))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(pwVar13,uVar9);
          }
        }
        uVar14 = local_78;
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Tidy_deallocate(&local_a8);
        psVar5 = (short *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
        psVar7 = &local_c8;
        if (7 < uStack_b0) {
          psVar7 = psVar5;
        }
        local_a8 = local_f0;
        uStack_a0 = uStack_e8;
        ppppuVar6 = &local_a8;
        if (7 < uStack_70) {
          ppppuVar6 = (undefined8 ****)local_f0;
        }
        local_98 = local_e0;
        uStack_90 = uStack_d8;
        uVar9 = uStack_b0;
        if (uVar14 == local_b8) {
          if (uVar14 == 0) {
LAB_14063a973:
            uVar15 = 1;
            goto LAB_14063a9a3;
          }
          lVar10 = (longlong)ppppuVar6 - (longlong)psVar7;
          while (*(short *)((longlong)psVar7 + lVar10) == *psVar7) {
            psVar7 = psVar7 + 1;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_14063a973;
          }
        }
        uVar4 = *param_2;
        uVar17 = (int)uVar11 + uVar4;
        uVar11 = (ulonglong)uVar17;
      } while (uVar17 < param_2[3]);
    }
  }
  uVar15 = 0;
LAB_14063a9a3:
  if (7 < uVar9) {
    uVar11 = uVar9 * 2 + 2;
    psVar7 = psVar5;
    if (0xfff < uVar11) {
      psVar7 = *(short **)(psVar5 + -4);
      uVar11 = uVar9 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)psVar5 + (-8 - (longlong)psVar7))) goto LAB_14063aa22;
    }
    FMemory::operator_delete(psVar7,uVar11);
  }
  local_b8 = 0;
  uStack_b0 = 7;
  local_c8 = 0;
  if (7 < uStack_90) {
    uVar9 = uStack_90 * 2 + 2;
    ppppuVar6 = (undefined8 ****)local_a8;
    if (0xfff < uVar9) {
      ppppuVar6 = (undefined8 ****)local_a8[-1];
      uVar9 = uStack_90 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar6))) {
LAB_14063aa22:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(ppppuVar6,uVar9);
  }
  return uVar15;
}



// FUNCTION 14063aa80 _Match<std::allocator<std::sub_match<char_const_*>_>_> body=492 status=ok
// SIG undefined _Match<std::allocator<std::sub_match<char_const_*>_>_>(void)

undefined1
std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
_Match<std::allocator<std::sub_match<char_const_*>_>_>
          (undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar5 = (longlong *)&DAT_00000010;
  }
  else {
    plVar5 = param_2 + 2;
    *(undefined1 *)(param_2 + 1) = 1;
    vector<std::sub_match<char_const_*>,std::allocator<std::sub_match<char_const_*>_>_>::
    _Resize<<lambda_ab0e3d178479707b69154cc681b1d77a>_>(plVar5,0,plVar5);
  }
  param_1[0x13] = param_1[0x15];
  *param_1 = param_1[0x15];
  vector<bool,std::allocator<bool>_>::resize
            (param_1 + 1,*(undefined4 *)((longlong)param_1 + 0xc4),0);
  vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
  ::_Resize<<lambda_47813ac1a32808d3f1e3d1dec2e61caa>_>
            (param_1 + 5,*(undefined4 *)((longlong)param_1 + 0xc4),param_1 + 5);
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 10000000;
  *(bool *)((longlong)param_1 + 0xc1) = param_2 != (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1c) = 600;
  *(undefined1 *)(param_1 + 0x18) = 0;
  cVar3 = FUN_140662c80(param_1,param_1[0x16]);
  if (cVar3 != '\0') {
    if (param_2 != (undefined8 *)0x0) {
      vector<std::sub_match<char_const_*>,std::allocator<std::sub_match<char_const_*>_>_>::
      _Resize<<lambda_ab0e3d178479707b69154cc681b1d77a>_>
                (plVar5,*(undefined4 *)((longlong)param_1 + 0xc4));
      uVar7 = 0;
      if (*(int *)((longlong)param_1 + 0xc4) != 0) {
        do {
          lVar1 = uVar7 * 0x18;
          if ((*(uint *)(param_1[9] + (uVar7 >> 5) * 4) >> ((byte)uVar7 & 0x1f) & 1) == 0) {
            *(undefined1 *)(*plVar5 + 0x10 + lVar1) = 0;
            *(undefined8 *)(lVar1 + *plVar5) = param_1[0x14];
            uVar4 = param_1[0x14];
          }
          else {
            *(undefined1 *)(*plVar5 + 0x10 + lVar1) = 1;
            *(undefined8 *)(lVar1 + *plVar5) = *(undefined8 *)(param_1[0xd] + uVar7 * 0x10);
            uVar4 = *(undefined8 *)(param_1[0xd] + 8 + uVar7 * 0x10);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          *(undefined8 *)(lVar1 + 8 + *plVar5) = uVar4;
        } while (uVar6 < *(uint *)((longlong)param_1 + 0xc4));
      }
      plVar5 = (longlong *)*plVar5;
      *param_2 = param_1[0x13];
      lVar1 = param_1[0x13];
      param_2[5] = lVar1;
      lVar2 = *plVar5;
      param_2[6] = lVar2;
      *(bool *)(param_2 + 7) = lVar1 != lVar2;
      lVar1 = plVar5[1];
      param_2[8] = lVar1;
      lVar2 = param_1[0x14];
      param_2[9] = lVar2;
      *(bool *)(param_2 + 10) = lVar1 != lVar2;
      param_2[0xb] = param_1[0x14];
      param_2[0xc] = param_1[0x14];
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14063ac70 FUN_14063ac70 body=120 status=ok
// SIG undefined FUN_14063ac70(void)

bool FUN_14063ac70(int *param_1,int *param_2,int *param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_2;
  bVar3 = false;
  iVar1 = *param_1;
  if (param_4 == '\0') {
    bVar2 = iVar4 < iVar1;
  }
  else {
    bVar2 = iVar1 < iVar4;
  }
  if (bVar2) {
    *param_2 = iVar1;
    *param_1 = iVar4;
    iVar4 = *param_2;
  }
  iVar1 = *param_3;
  if (param_4 == '\0') {
    bVar2 = iVar1 < iVar4;
  }
  else {
    bVar2 = iVar4 < iVar1;
  }
  if (bVar2) {
    *param_3 = iVar4;
    *param_2 = iVar1;
    iVar4 = *param_1;
    if (param_4 == '\0') {
      bVar3 = iVar1 < iVar4;
    }
    else {
      bVar3 = iVar4 < iVar1;
    }
    if (bVar3 != false) {
      *param_2 = iVar4;
      *param_1 = iVar1;
    }
  }
  return bVar3;
}



// FUNCTION 14063acf0 FUN_14063acf0 body=512 status=ok
// SIG undefined FUN_14063acf0(void)

longlong FUN_14063acf0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                      char param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *_Src;
  char cVar10;
  ulonglong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  _Src = param_2;
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    lVar1 = *_Src;
    lVar2 = *param_1;
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        cVar10 = param_5 == '\0';
        goto LAB_14063ae87;
      }
LAB_14063ae69:
      lVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_4 = lVar1;
      if (param_1 == param_2) {
        local_res18 = (longlong *)((longlong)param_3 - (longlong)_Src);
        _guard_xfg_dispatch_icall_nop(param_4 + 1,_Src,(size_t)local_res18);
        local_res10 = local_res18;
        goto LAB_14063aed2;
      }
    }
    else {
      cVar10 = param_5;
      if (lVar2 != 0) {
        if (param_5 == '\0') {
          local_res8 = *(ulonglong *)(lVar2 + 0x18);
          bVar6 = true;
          bVar5 = true;
          FName::ToString(&local_res8,&local_50);
          local_98 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_98,&local_60);
          puVar8 = &DAT_143f3eda8;
          puVar9 = &DAT_143f3eda8;
          if (local_48 != 0) {
            puVar9 = local_50;
          }
          if (local_58 != 0) {
            puVar8 = local_60;
          }
        }
        else {
          local_90 = *(undefined8 *)(lVar1 + 0x18);
          bVar4 = true;
          bVar3 = true;
          FName::ToString(&local_90,&local_70);
          local_88 = *(undefined8 *)(lVar2 + 0x18);
          FName::ToString(&local_88,&local_80);
          puVar9 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar9 = local_70;
          }
          puVar8 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
        cVar10 = iVar7 < 0;
        if ((bVar3) && (bVar3 = false, local_80 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar4) && (bVar4 = false, local_70 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (bVar5 = false, local_60 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        param_2 = local_res10;
        param_3 = local_res18;
        if ((bVar6) && (bVar6 = false, local_50 != (undefined2 *)0x0)) {
          FMemory::Free();
          param_2 = local_res10;
          param_3 = local_res18;
        }
      }
LAB_14063ae87:
      if (cVar10 == '\0') goto LAB_14063ae69;
      lVar1 = *_Src;
      _Src = _Src + 1;
      *param_4 = lVar1;
      if (_Src == param_3) {
        local_res10 = (longlong *)((longlong)param_2 - (longlong)param_1);
        _guard_xfg_dispatch_icall_nop(param_4 + 1,param_1,(size_t)local_res10);
LAB_14063aed2:
        return (longlong)param_4 + (longlong)local_res10 + 8U;
      }
    }
    param_4 = param_4 + 1;
  } while( true );
}



// FUNCTION 14063aef0 FUN_14063aef0 body=121 status=ok
// SIG undefined FUN_14063aef0(void)

longlong * FUN_14063aef0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  while (plVar2 = param_2, plVar1 = param_3, plVar2 != param_1) {
    param_2 = plVar2 + -2;
    param_3 = plVar1 + -2;
    if (param_3 != param_2) {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = *param_2;
      *param_2 = 0;
      *(int *)(plVar1 + -1) = (int)plVar2[-1];
      *(undefined4 *)((longlong)plVar1 + -4) = *(undefined4 *)((longlong)plVar2 + -4);
      plVar2[-1] = 0;
    }
  }
  return plVar1;
}



// FUNCTION 14063af70 FUN_14063af70 body=146 status=ok
// SIG undefined FUN_14063af70(void)

longlong * FUN_14063af70(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar4 = (longlong)param_3 - (longlong)param_1;
    puVar3 = param_1 + 1;
    do {
      plVar1 = puVar3 + -1;
      if (param_3 != plVar1) {
        if (*param_3 != 0) {
          FMemory::Free();
        }
        *param_3 = *plVar1;
        *plVar1 = 0;
        *(undefined4 *)(lVar4 + (longlong)puVar3) = *(undefined4 *)puVar3;
        *(undefined4 *)(lVar4 + 4 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 4);
        *puVar3 = 0;
      }
      param_3 = param_3 + 2;
      puVar2 = puVar3 + 1;
      puVar3 = puVar3 + 2;
    } while (puVar2 != param_2);
  }
  return param_3;
}



// FUNCTION 14063b010 FUN_14063b010 body=700 status=ok
// SIG undefined FUN_14063b010(void)

ulonglong * FUN_14063b010(ulonglong *param_1,int *param_2,int *param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar5 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 3);
  lVar3 = (longlong)param_3 + (-4 - (longlong)param_2) >> 2;
  if (lVar3 < 0x29) {
    FUN_14063ac70(param_2,piVar5,param_3 + -1);
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    FUN_14063ac70(param_2,param_2 + lVar3,param_2 + lVar3 * 2);
    FUN_14063ac70(piVar5 + -lVar3,piVar5,piVar5 + lVar3);
    FUN_14063ac70(param_3 + lVar3 * -2 + -1,param_3 + (-1 - lVar3),param_3 + -1);
    FUN_14063ac70(param_2 + lVar3,piVar5,param_3 + (-1 - lVar3));
  }
  piVar7 = piVar5 + 1;
  if (param_2 < piVar5) {
    iVar4 = *piVar5;
    while( true ) {
      iVar1 = piVar5[-1];
      piVar8 = piVar5 + -1;
      if (param_4 == '\0') {
        bVar2 = iVar1 < iVar4;
      }
      else {
        bVar2 = iVar4 < iVar1;
      }
      if (bVar2) break;
      if (param_4 == '\0') {
        bVar2 = iVar4 < iVar1;
      }
      else {
        bVar2 = iVar1 < iVar4;
      }
      if ((bVar2) || (piVar5 = piVar8, iVar4 = iVar1, piVar8 <= param_2)) break;
    }
  }
  piVar8 = piVar7;
  piVar6 = piVar5;
  if (piVar7 < param_3) {
    iVar4 = *piVar5;
    while( true ) {
      iVar1 = *piVar7;
      if (param_4 == '\0') {
        bVar2 = iVar1 < iVar4;
      }
      else {
        bVar2 = iVar4 < iVar1;
      }
      piVar8 = piVar7;
      if (bVar2) break;
      if (param_4 == '\0') {
        bVar2 = iVar4 < iVar1;
      }
      else {
        bVar2 = iVar1 < iVar4;
      }
      if ((bVar2) || (piVar7 = piVar7 + 1, piVar8 = piVar7, param_3 <= piVar7)) break;
    }
  }
joined_r0x00014063b179:
  do {
    piVar9 = piVar5;
    if (param_3 <= piVar7) {
joined_r0x00014063b1d4:
      for (; param_2 < piVar5; piVar5 = piVar5 + -1) {
        piVar9 = piVar9 + -1;
        iVar4 = *piVar6;
        iVar1 = *piVar9;
        if (param_4 == '\0') {
          bVar2 = iVar1 < iVar4;
        }
        else {
          bVar2 = iVar4 < iVar1;
        }
        if (!bVar2) {
          if (param_4 == '\0') {
            bVar2 = iVar4 < iVar1;
          }
          else {
            bVar2 = iVar1 < iVar4;
          }
          if (bVar2) break;
          piVar6 = piVar6 + -1;
          if (piVar6 != piVar9) {
            iVar4 = *piVar6;
            *piVar6 = iVar1;
            *piVar9 = iVar4;
          }
        }
      }
      if (piVar5 == param_2) {
        if (piVar7 == param_3) {
          *param_1 = (ulonglong)piVar6;
          param_1[1] = (ulonglong)piVar8;
          return param_1;
        }
        if (piVar8 != piVar7) {
          iVar4 = *piVar6;
          *piVar6 = *piVar8;
          *piVar8 = iVar4;
        }
        iVar4 = *piVar6;
        *piVar6 = *piVar7;
        *piVar7 = iVar4;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        if (piVar7 == param_3) {
          piVar6 = piVar6 + -1;
          if (piVar5 == piVar6) {
            iVar4 = *piVar6;
            *piVar6 = piVar8[-1];
            piVar8[-1] = iVar4;
            piVar8 = piVar8 + -1;
          }
          else {
            piVar8 = piVar8 + -1;
            iVar4 = *piVar5;
            *piVar5 = *piVar6;
            *piVar6 = iVar4;
            *piVar6 = *piVar8;
            *piVar8 = iVar4;
          }
        }
        else {
          iVar4 = *piVar7;
          *piVar7 = *piVar5;
          piVar7 = piVar7 + 1;
          *piVar5 = iVar4;
        }
      }
      goto joined_r0x00014063b179;
    }
    iVar4 = *piVar7;
    iVar1 = *piVar6;
    if (param_4 == '\0') {
      bVar2 = iVar1 < iVar4;
    }
    else {
      bVar2 = iVar4 < iVar1;
    }
    if (!bVar2) {
      if (param_4 == '\0') {
        bVar2 = iVar4 < iVar1;
      }
      else {
        bVar2 = iVar1 < iVar4;
      }
      if (bVar2) goto joined_r0x00014063b1d4;
      if (piVar8 != piVar7) {
        iVar1 = *piVar8;
        *piVar8 = iVar4;
        *piVar7 = iVar1;
      }
      piVar8 = piVar8 + 1;
    }
    piVar7 = piVar7 + 1;
  } while( true );
}



// FUNCTION 14063b2d0 FUN_14063b2d0 body=257 status=ok
// SIG undefined FUN_14063b2d0(void)

void FUN_14063b2d0(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar5) {
    iVar1 = *(int *)(param_1 + 4 + lVar4 * 8);
    iVar2 = *(int *)(param_1 + 8 + lVar4 * 8);
    if (param_5 == '\0') {
      bVar3 = iVar2 < iVar1;
    }
    else {
      bVar3 = iVar1 < iVar2;
    }
    lVar6 = lVar4 * 2 + 1 + ((ulonglong)bVar3 ^ 1);
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + lVar6 * 4);
    lVar4 = lVar6;
  }
  if ((lVar4 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar4 = param_3 - 1;
  }
  if (param_2 < lVar4) {
    do {
      iVar1 = *param_4;
      lVar5 = lVar4 + -1 >> 1;
      iVar2 = *(int *)(param_1 + lVar5 * 4);
      if (param_5 == '\0') {
        bVar3 = iVar2 < iVar1;
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if (!bVar3) {
        *(int *)(param_1 + lVar4 * 4) = iVar1;
        return;
      }
      *(int *)(param_1 + lVar4 * 4) = iVar2;
      lVar4 = lVar5;
    } while (param_2 < lVar5);
    *(int *)(param_1 + lVar5 * 4) = *param_4;
  }
  else {
    *(int *)(param_1 + lVar4 * 4) = *param_4;
  }
  return;
}



// FUNCTION 14063b3e0 FUN_14063b3e0 body=244 status=ok
// SIG undefined FUN_14063b3e0(void)

ulonglong FUN_14063b3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                       undefined4 param_5,undefined1 param_6)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  
  lVar2 = *param_4;
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  FUN_14063d9a0(local_f8,param_1,param_2,param_4 + 1,lVar2,*(undefined4 *)(lVar2 + 0x28),
                *(undefined4 *)(lVar2 + 0x20),param_5);
  bVar1 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
          _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_f8,param_3,param_6);
  if (local_78 != 0) {
    uVar3 = local_68 - local_78 & 0xfffffffffffffff0;
    lVar2 = local_78;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(local_78 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (local_78 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (local_b8);
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (local_f8);
  return (ulonglong)bVar1;
}



// FUNCTION 14063b4e0 FUN_14063b4e0 body=1000 status=ok
// SIG undefined FUN_14063b4e0(void)

undefined8 *
FUN_14063b4e0(undefined8 *param_1,undefined8 param_2,undefined2 *param_3,undefined2 *param_4,
             longlong *param_5,undefined8 *param_6,uint param_7)

{
  bool bVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 *local_1a8;
  undefined1 local_1a0;
  longlong *local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined2 *puStack_180;
  undefined2 *local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined2 *local_98;
  undefined2 *local_90;
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  longlong *local_68;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar12 = 0;
  local_1a8 = (undefined2 *)0x0;
  local_1a0 = 0;
  local_198 = (longlong *)0x0;
  lStack_190 = 0;
  local_188 = 0;
  puStack_180 = (undefined2 *)0x0;
  local_178 = (undefined2 *)0x0;
  local_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  uVar7 = uVar12;
  uVar11 = param_7;
  while( true ) {
    lVar6 = *param_5;
    if (lVar6 == 0) break;
    local_80 = *(undefined4 *)(lVar6 + 0x20);
    local_74 = *(undefined4 *)(lVar6 + 0x28);
    bVar1 = false;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_78 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_a8 = 0;
    if (((*(byte *)(lVar6 + 0xc) & 8) == 0) || (local_70 = 1, (uVar11 & 0x10) != 0)) {
      local_70 = 0;
    }
    local_68 = param_5 + 1;
    local_98 = param_4;
    local_90 = param_3;
    local_88 = lVar6;
    local_7c = (uint)uVar7 | uVar11;
    std::vector<std::_Loop_vals_t,std::allocator<std::_Loop_vals_t>_>::
    _Resize<<lambda_2aa502090c117147aa783e21f2063a98>_>
              (&local_b8,*(undefined4 *)(lVar6 + 0x24),&local_b8);
    cVar2 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
            _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_138,&local_1a8,0);
    if (cVar2 == '\0') {
      if ((param_3 != param_4) && ((uVar11 & 0x40) == 0)) {
        local_7c = local_7c & 0xffffdfff | 0x100;
        for (puVar3 = (undefined2 *)FUN_1406632a0(local_138,param_3 + 1,param_4,0);
            puVar3 != param_4; puVar3 = (undefined2 *)FUN_1406632a0(local_138,puVar3 + 1,param_4,0))
        {
          local_90 = puVar3;
          cVar2 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
                  _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_138,&local_1a8,0);
          if (cVar2 != '\0') goto LAB_14063b6ad;
        }
        local_90 = param_4;
        cVar2 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
                _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_138,&local_1a8,0);
        if (cVar2 != '\0') goto LAB_14063b6ad;
      }
    }
    else {
LAB_14063b6ad:
      local_170 = param_3 != local_178;
      bVar1 = true;
      local_1a8 = param_3;
      puStack_180 = param_3;
    }
    if (local_b8 != 0) {
      uVar7 = local_a8 - local_b8 & 0xfffffffffffffff0;
      lVar6 = local_b8;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(local_b8 + -8);
        uVar7 = uVar7 + 0x27;
        if (0x1f < (local_b8 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar7);
      local_a8 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
    }
    std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
    ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
              (local_f8);
    std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
    ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
              (local_138);
    if (!bVar1) break;
    if ((param_7 >> 0xb & 1) == 0) {
      uVar7 = (ulonglong)((longlong)local_178 + (1 - (longlong)puStack_180)) >> 1;
      if (local_178 < puStack_180) {
        uVar7 = uVar12;
      }
      uVar9 = uVar12;
      puVar3 = puStack_180;
      if (uVar7 != 0) {
        do {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                    (param_2,*puVar3);
          uVar9 = uVar9 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar9 != uVar7);
      }
    }
    puVar4 = param_6;
    if (7 < (ulonglong)param_6[3]) {
      puVar4 = (undefined8 *)*param_6;
    }
    puVar10 = param_6;
    if (7 < (ulonglong)param_6[3]) {
      puVar10 = (undefined8 *)*param_6;
    }
    if ((uVar11 >> 10 & 1) == 0) {
      puVar4 = (undefined8 *)
               FUN_1406389c0(local_40,&local_1a8,param_2,puVar10,(longlong)puVar4 + param_6[2] * 2,
                             uVar11);
    }
    else {
      puVar4 = (undefined8 *)FUN_140638ca0(local_48);
    }
    param_2 = *puVar4;
    lVar6 = lStack_190 - (longlong)local_198 >> 0x3f;
    lVar8 = (lStack_190 - (longlong)local_198) / 0x18 + lVar6;
    plVar5 = &local_150;
    if (lVar8 != lVar6) {
      plVar5 = local_198;
    }
    param_3 = (undefined2 *)plVar5[1];
    if ((param_3 == param_4) || ((param_7 >> 0xc & 1) != 0)) break;
    plVar5 = &local_150;
    if (lVar8 != lVar6) {
      plVar5 = local_198;
    }
    if (*plVar5 != plVar5[1]) {
      uVar11 = uVar11 | 0x100;
    }
    uVar7 = 0x2000;
    if (*plVar5 != plVar5[1]) {
      uVar7 = uVar12;
    }
  }
  if ((param_7 & 0x800) == 0) {
    uVar7 = (ulonglong)((longlong)param_4 + (1 - (longlong)param_3)) >> 1;
    if (param_4 < param_3) {
      uVar7 = uVar12;
    }
    if (uVar7 != 0) {
      do {
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                  (param_2,*param_3);
        uVar12 = uVar12 + 1;
        param_3 = param_3 + 1;
      } while (uVar12 != uVar7);
    }
  }
  *param_1 = param_2;
  std::vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>::
  ~vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>(&local_198);
  return param_1;
}



// FUNCTION 14063b8d0 FUN_14063b8d0 body=487 status=ok
// SIG undefined FUN_14063b8d0(void)

ulonglong FUN_14063b8d0(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                       uint param_5,undefined8 param_6)

{
  char cVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_50;
  uint local_3c;
  
  lVar2 = *param_4;
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = 0;
  FUN_14063d9a0(local_f8,param_1,param_2,param_4 + 1,lVar2,*(undefined4 *)(lVar2 + 0x28),
                *(undefined4 *)(lVar2 + 0x20),param_5);
  cVar1 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
          _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_f8,param_3,0);
  if (cVar1 == '\0') {
    if ((param_1 == param_2) || ((param_5 & 0x40) != 0)) goto LAB_14063ba15;
    local_3c = local_3c & 0xffffdfff | 0x100;
    for (lVar2 = FUN_1406632a0(local_f8,param_1 + 2,param_2,0); lVar2 != param_2;
        lVar2 = FUN_1406632a0(local_f8,lVar2 + 2,param_2,0)) {
      local_50 = lVar2;
      cVar1 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
              _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_f8,param_3,0);
      if (cVar1 != '\0') goto LAB_14063b9f4;
    }
    local_50 = param_2;
    cVar1 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::
            _Match<std::allocator<std::sub_match<char_const_*>_>_>(local_f8,param_3,0);
    if (cVar1 == '\0') goto LAB_14063ba15;
  }
LAB_14063b9f4:
  uVar4 = 1;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_6;
    param_3[5] = param_1;
    *(bool *)(param_3 + 7) = param_1 != param_3[6];
  }
LAB_14063ba15:
  if (local_78 != 0) {
    uVar3 = local_68 - local_78 & 0xfffffffffffffff0;
    lVar2 = local_78;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(local_78 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (local_78 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (local_b8);
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (local_f8);
  return uVar4;
}



// FUNCTION 14063bac0 _Reset<char_const_*> body=490 status=ok
// SIG undefined _Reset<char_const_*>(void)

void std::basic_regex<char,std::regex_traits<char>_>::_Reset<char_const_*>
               (undefined8 *param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48;
  undefined8 *local_40;
  uint local_38;
  uint local_34;
  undefined8 *local_30;
  uint local_28;
  uint local_18;
  
  puVar4 = (undefined8 *)0x0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar7 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = param_2;
  local_90 = param_2;
  local_88 = param_3;
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0x14;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_144027658;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    puVar4 = puVar2;
  }
  local_38 = ~(param_4 >> 3) & 0x100;
  uVar8 = param_4 & 0x3f;
  local_34 = ~(param_4 >> 9) & 4;
  if (uVar8 < 2) {
    uVar7 = 0x8775dfb;
  }
  else if (uVar8 == 2) {
    uVar7 = 0x6e000300;
  }
  else if (uVar8 == 4) {
    uVar7 = 0x7080001b;
  }
  else if (uVar8 == 8) {
    uVar7 = 0x7181a01b;
  }
  else if (uVar8 == 0x10) {
    uVar7 = 0x6e080304;
  }
  else if (uVar8 == 0x20) {
    uVar7 = 0x7088001f;
  }
  if (uVar7 >> 0x1e != 0) {
    *(uint *)((longlong)puVar4 + 0xc) = *(uint *)((longlong)puVar4 + 0xc) | 8;
  }
  local_58 = puVar4;
  local_50 = puVar4;
  local_48 = param_4;
  local_40 = param_1 + 1;
  local_30 = param_1 + 1;
  local_28 = param_4;
  local_18 = uVar7;
  FUN_140663660(&local_98);
  uVar3 = _Builder<char_const_*,char,std::regex_traits<char>_>::_Begin_capture_group(&local_58,0);
  FUN_140661900(&local_98);
  if (local_98 != local_88) {
                    /* WARNING: Subroutine does not return */
    _Parser<char_const_*,char,std::regex_traits<char>_>::_Error(&local_98,0xe);
  }
  _Builder<char_const_*,char,std::regex_traits<char>_>::_End_group(&local_58,uVar3);
  _Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(&local_58,0x15);
  puVar4 = local_58;
  *(uint *)(local_58 + 4) = local_28;
  *(int *)(local_58 + 5) = (int)local_80 + 1;
  _Calculate_loop_simplicity(local_58,0,0);
  LOCK();
  piVar1 = (int *)((longlong)puVar4 + 0x2c);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  _Tidy(param_1);
  *param_1 = puVar4;
  if (local_78 != 0) {
    uVar6 = local_68 - local_78 & 0xfffffffffffffffc;
    lVar5 = local_78;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(local_78 + -8);
      uVar6 = uVar6 + 0x27;
      if (0x1f < (local_78 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar6);
  }
  return;
}



// FUNCTION 14063bcb0 _Resize<<lambda_2aa502090c117147aa783e21f2063a98>_> body=438 status=ok
// SIG undefined _Resize<<lambda_2aa502090c117147aa783e21f2063a98>_>(void)

void std::vector<std::_Loop_vals_t,std::allocator<std::_Loop_vals_t>_>::
     _Resize<<lambda_2aa502090c117147aa783e21f2063a98>_>(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  
  pvVar7 = (void *)param_1[1];
  lVar2 = *param_1;
  uVar6 = (longlong)pvVar7 - lVar2 >> 4;
  uVar3 = param_1[2] - lVar2 >> 4;
  if (param_2 <= uVar3) {
    if (uVar6 < param_2) {
      lVar2 = param_2 - uVar6;
      if (lVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop(pvVar7,0,lVar2 * 0x10);
        pvVar7 = (void *)((longlong)pvVar7 + lVar2 * 0x10);
      }
      param_1[1] = (longlong)pvVar7;
      return;
    }
    if (param_2 == uVar6) {
      return;
    }
    param_1[1] = param_2 * 0x10 + lVar2;
    return;
  }
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar1 = param_2;
  if ((uVar3 <= 0xfffffffffffffff - (uVar3 >> 1)) && (uVar1 = (uVar3 >> 1) + uVar3, uVar1 < param_2)
     ) {
    uVar1 = param_2;
  }
  uVar3 = uVar1 * 0x10;
  if (uVar1 < 0x1000000000000000) {
    uVar1 = uVar3;
    if (0xfff < uVar3) goto LAB_14063bd4d;
    if (uVar3 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)operator_new(uVar3);
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
LAB_14063bd4d:
    uVar4 = uVar1 + 0x27;
    if (uVar4 <= uVar1) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar2 = operator_new(uVar4);
    if (lVar2 == 0) goto LAB_14063be24;
    pvVar7 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar7 - 8) = lVar2;
  }
  if (param_2 - uVar6 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(uVar6 * 0x10 + (longlong)pvVar7),0,(param_2 - uVar6) * 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop(pvVar7,(void *)*param_1,param_1[1] - *param_1);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = param_1[2] - lVar2 & 0xfffffffffffffff0;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      uVar6 = uVar6 + 0x27;
      if (0x1f < (lVar2 - lVar5) - 8U) {
LAB_14063be24:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar6);
  }
  param_1[1] = (longlong)(param_2 * 0x10 + (longlong)pvVar7);
  *param_1 = (longlong)pvVar7;
  param_1[2] = (longlong)(uVar3 + (longlong)pvVar7);
  return;
}



// FUNCTION 14063be70 _Resize<<lambda_ab0e3d178479707b69154cc681b1d77a>_> body=559 status=ok
// SIG undefined _Resize<<lambda_ab0e3d178479707b69154cc681b1d77a>_>(void)

void std::vector<std::sub_match<char_const_*>,std::allocator<std::sub_match<char_const_*>_>_>::
     _Resize<<lambda_ab0e3d178479707b69154cc681b1d77a>_>(longlong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  puVar13 = (undefined8 *)param_1[1];
  lVar5 = *param_1;
  lVar8 = ((longlong)puVar13 - lVar5) / 6 + ((longlong)puVar13 - lVar5 >> 0x3f);
  uVar14 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  uVar9 = (param_1[2] - lVar5) / 0x18;
  if (uVar9 < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    uVar6 = param_2;
    if ((uVar9 <= 0xaaaaaaaaaaaaaaa - (uVar9 >> 1)) &&
       (uVar6 = (uVar9 >> 1) + uVar9, uVar6 < param_2)) {
      uVar6 = param_2;
    }
    puVar10 = (undefined4 *)0x0;
    uVar9 = uVar6 * 0x18;
    uVar4 = 0xffffffffffffffff;
    if ((uVar6 < 0xaaaaaaaaaaaaaab) && (uVar4 = uVar9, uVar9 < 0x1000)) {
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)operator_new(uVar9);
      }
    }
    else {
      uVar9 = uVar4 + 0x27;
      if (uVar4 + 0x27 <= uVar4) {
        uVar9 = 0xffffffffffffffff;
      }
      lVar5 = operator_new(uVar9);
      if (lVar5 == 0) goto LAB_14063c05d;
      puVar10 = (undefined4 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar10 + -2) = lVar5;
    }
    puVar13 = (undefined8 *)(puVar10 + uVar14 * 6);
    for (lVar5 = param_2 - uVar14; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined1 *)(puVar13 + 2) = 0;
      puVar13 = puVar13 + 3;
    }
    puVar12 = (undefined4 *)param_1[1];
    puVar11 = (undefined4 *)*param_1;
    puVar7 = puVar10;
    if (puVar11 != puVar12) {
      do {
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar3 = puVar11[3];
        *puVar7 = *puVar11;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar13 = (undefined8 *)(puVar11 + 4);
        puVar11 = puVar11 + 6;
        *(undefined8 *)(puVar7 + 4) = *puVar13;
        puVar7 = puVar7 + 6;
      } while (puVar11 != puVar12);
      puVar11 = (undefined4 *)*param_1;
    }
    if (puVar11 != (undefined4 *)0x0) {
      uVar9 = ((param_1[2] - (longlong)puVar11) / 0x18) * 0x18;
      puVar12 = puVar11;
      if (0xfff < uVar9) {
        puVar12 = *(undefined4 **)(puVar11 + -2);
        uVar9 = uVar9 + 0x27;
        if (0x1f < (ulonglong)((longlong)puVar11 + (-8 - (longlong)puVar12))) {
LAB_14063c05d:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(puVar12,uVar9);
    }
    *param_1 = (longlong)puVar10;
    param_1[1] = (longlong)(puVar10 + param_2 * 6);
    param_1[2] = (longlong)(puVar10 + uVar6 * 6);
  }
  else if (uVar14 < param_2) {
    for (lVar5 = param_2 - uVar14; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined1 *)(puVar13 + 2) = 0;
      puVar13 = puVar13 + 3;
    }
    param_1[1] = (longlong)puVar13;
  }
  else if (param_2 != uVar14) {
    param_1[1] = lVar5 + param_2 * 0x18;
  }
  return;
}



// FUNCTION 14063c0b0 _Resize<<lambda_47813ac1a32808d3f1e3d1dec2e61caa>_> body=355 status=ok
// SIG undefined _Resize<<lambda_47813ac1a32808d3f1e3d1dec2e61caa>_>(void)

void std::
     vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
     ::_Resize<<lambda_47813ac1a32808d3f1e3d1dec2e61caa>_>(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pvVar2 = (void *)param_1[1];
  lVar4 = *param_1;
  uVar5 = (longlong)pvVar2 - lVar4 >> 4;
  uVar1 = param_1[2] - lVar4 >> 4;
  if (uVar1 < param_2) {
    if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    uVar6 = param_2;
    if ((uVar1 <= 0xfffffffffffffff - (uVar1 >> 1)) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar6 < param_2)) {
      uVar6 = param_2;
    }
    pvVar2 = (void *)allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(param_1);
    if (param_2 - uVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(uVar5 * 0x10 + (longlong)pvVar2),0,(param_2 - uVar5) * 0x10);
    }
    ::_guard_xfg_dispatch_icall_nop(pvVar2,(void *)*param_1,param_1[1] - *param_1);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      uVar1 = param_1[2] - lVar4 & 0xfffffffffffffff0;
      lVar3 = lVar4;
      if (0xfff < uVar1) {
        lVar3 = *(longlong *)(lVar4 + -8);
        uVar1 = uVar1 + 0x27;
        if (0x1f < (lVar4 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar1);
    }
    *param_1 = (longlong)pvVar2;
    param_1[2] = (longlong)(uVar6 * 0x10 + (longlong)pvVar2);
    param_1[1] = (longlong)(param_2 * 0x10 + (longlong)pvVar2);
  }
  else if (uVar5 < param_2) {
    lVar4 = param_2 - uVar5;
    if (lVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop(pvVar2,0,lVar4 * 0x10);
      pvVar2 = (void *)((longlong)pvVar2 + lVar4 * 0x10);
    }
    param_1[1] = (longlong)pvVar2;
  }
  else if (param_2 != uVar5) {
    param_1[1] = param_2 * 0x10 + lVar4;
  }
  return;
}



// FUNCTION 14063c220 _Resize<<lambda_f5f77627601f5a8a55cdb6434a10ac65>_> body=380 status=ok
// SIG undefined _Resize<<lambda_f5f77627601f5a8a55cdb6434a10ac65>_>(void)

void std::vector<unsigned_int,std::allocator<unsigned_int>_>::
     _Resize<<lambda_f5f77627601f5a8a55cdb6434a10ac65>_>
               (longlong *param_1,ulonglong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar4 = (undefined4 *)param_1[1];
  lVar7 = *param_1;
  uVar6 = (longlong)puVar4 - lVar7 >> 2;
  uVar2 = param_1[2] - lVar7 >> 2;
  if (uVar2 < param_2) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar5 = param_2;
    if ((uVar2 <= 0x3fffffffffffffff - (uVar2 >> 1)) &&
       (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < param_2)) {
      uVar5 = param_2;
    }
    _Dst = (void *)allocator<unsigned_int>::allocate(param_1,uVar5);
    puVar1 = *(undefined4 **)(param_3 + 8);
    puVar4 = (undefined4 *)((longlong)_Dst + uVar6 * 4);
    for (lVar7 = param_2 - uVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar4 = *puVar1;
      puVar4 = puVar4 + 1;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,param_1[1] - *param_1);
    lVar7 = *param_1;
    if (lVar7 != 0) {
      uVar2 = param_1[2] - lVar7 & 0xfffffffffffffffc;
      lVar3 = lVar7;
      if (0xfff < uVar2) {
        lVar3 = *(longlong *)(lVar7 + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (lVar7 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar2);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)((longlong)_Dst + param_2 * 4);
    param_1[2] = (longlong)((longlong)_Dst + uVar5 * 4);
  }
  else {
    if (uVar6 < param_2) {
      puVar1 = *(undefined4 **)(param_3 + 8);
      for (lVar7 = param_2 - uVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar4 = *puVar1;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = (longlong)puVar4;
      return;
    }
    if (param_2 != uVar6) {
      param_1[1] = lVar7 + param_2 * 4;
      return;
    }
  }
  return;
}



// FUNCTION 14063c3a0 FUN_14063c3a0 body=196 status=ok
// SIG undefined FUN_14063c3a0(void)

void FUN_14063c3a0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28 [2];
  
  if (param_1 != param_2) {
    do {
      plVar4 = param_2 + -2;
      if (param_1 == plVar4) {
        return;
      }
      lVar2 = *param_1;
      *param_1 = 0;
      lVar3 = param_1[1];
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_1 + 1) = (int)param_2[-1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + -4);
      param_2[-1] = 0;
      if (plVar4 == local_28) {
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
      else {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        *plVar4 = lVar2;
        *(int *)(param_2 + -1) = (int)lVar3;
        *(undefined4 *)((longlong)param_2 + -4) = uVar1;
      }
      param_1 = param_1 + 2;
      param_2 = plVar4;
    } while (param_1 != plVar4);
  }
  return;
}



// FUNCTION 14063c470 FUN_14063c470 body=702 status=ok
// SIG undefined FUN_14063c470(void)

void FUN_14063c470(int *param_1,int *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  int local_res8 [2];
  int *local_28;
  int *local_20;
  
  lVar5 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar5 = lVar5 >> 2;
    if (lVar5 < 0x21) {
LAB_14063c536:
      if ((1 < lVar5) && (param_1 != param_2)) {
        for (piVar10 = param_1 + 1; piVar10 != param_2; piVar10 = piVar10 + 1) {
          iVar2 = *piVar10;
          if (param_4 == '\0') {
            bVar4 = iVar2 < *param_1;
          }
          else {
            bVar4 = *param_1 < iVar2;
          }
          piVar7 = piVar10;
          if (bVar4) {
            _guard_xfg_dispatch_icall_nop(param_1 + 1,param_1,(longlong)piVar10 - (longlong)param_1)
            ;
            *param_1 = iVar2;
          }
          else {
            while( true ) {
              iVar3 = piVar7[-1];
              if (param_4 == '\0') {
                bVar4 = iVar2 < iVar3;
              }
              else {
                bVar4 = iVar3 < iVar2;
              }
              if (!bVar4) break;
              *piVar7 = iVar3;
              piVar7 = piVar7 + -1;
            }
            *piVar7 = iVar2;
          }
        }
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar5) {
        uVar8 = (longlong)param_2 - (longlong)param_1 >> 2;
        lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
        if (0 < lVar5) {
          lVar9 = (longlong)(uVar8 - 1) >> 1;
          do {
            iVar2 = param_1[lVar5 + -1];
            lVar5 = lVar5 + -1;
            lVar1 = lVar5;
            while (lVar1 < lVar9) {
              if (param_4 == '\0') {
                bVar4 = param_1[lVar1 * 2 + 2] < param_1[lVar1 * 2 + 1];
              }
              else {
                bVar4 = param_1[lVar1 * 2 + 1] < param_1[lVar1 * 2 + 2];
              }
              lVar6 = lVar1 * 2 + 1 + ((ulonglong)bVar4 ^ 1);
              param_1[lVar1] = param_1[lVar6];
              lVar1 = lVar6;
            }
            if ((lVar1 == lVar9) && ((uVar8 & 1) == 0)) {
              param_1[lVar1] = param_1[uVar8 - 1];
              lVar1 = uVar8 - 1;
            }
            while (lVar5 < lVar1) {
              lVar6 = lVar1 + -1 >> 1;
              iVar3 = param_1[lVar6];
              if (param_4 == '\0') {
                bVar4 = iVar3 < iVar2;
              }
              else {
                bVar4 = iVar2 < iVar3;
              }
              if (!bVar4) break;
              param_1[lVar1] = iVar3;
              lVar1 = lVar6;
            }
            param_1[lVar1] = iVar2;
          } while (0 < lVar5);
        }
        if ((longlong)uVar8 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (longlong)uVar8) {
            local_res8[0] = *param_2;
            *param_2 = *param_1;
            FUN_14063b2d0(param_1,0,(longlong)param_2 - (longlong)param_1 >> 2,local_res8,param_4);
          }
          param_2 = param_2 + -1;
          uVar8 = (4 - (longlong)param_1) + (longlong)param_2 >> 2;
        } while (1 < (longlong)uVar8);
        return;
      }
      goto LAB_14063c536;
    }
    FUN_14063b010(&local_28,param_1,param_2,param_4);
    piVar7 = local_20;
    piVar10 = local_28;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_28 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)local_20 & 0xfffffffffffffffcU)) {
      FUN_14063c470(param_1,local_28,param_3,param_4);
      param_1 = piVar7;
      piVar10 = param_2;
    }
    else {
      FUN_14063c470(local_20,param_2,param_3,param_4);
    }
    lVar5 = (longlong)piVar10 - (longlong)param_1;
    param_2 = piVar10;
  } while( true );
}



// FUNCTION 14063c730 FUN_14063c730 body=258 status=ok
// SIG undefined FUN_14063c730(void)

void FUN_14063c730(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar3;
  
  if (param_3 < 0x21) {
    FUN_140639e30(param_1,param_2,param_6);
    return;
  }
  lVar2 = param_3 >> 1;
  param_3 = param_3 - lVar2;
  lVar1 = param_1 + param_3 * 4;
  if (param_5 < param_3) {
    FUN_14063c730(param_1,lVar1,param_3,param_4,param_5,param_6);
    FUN_14063c730(lVar1,param_2,lVar2,param_4,param_5,param_6);
  }
  else {
    uVar3 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_140637f30();
    FUN_140637f30(lVar1,param_2,lVar2,param_4,CONCAT71(uVar3,param_6));
  }
  FUN_1406374c0(param_1,lVar1,param_2,param_3,lVar2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14063c840 FUN_14063c840 body=258 status=ok
// SIG undefined FUN_14063c840(void)

void FUN_14063c840(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar3;
  
  if (param_3 < 0x21) {
    FUN_140639f20(param_1,param_2,param_6);
    return;
  }
  lVar2 = param_3 >> 1;
  param_3 = param_3 - lVar2;
  lVar1 = param_1 + param_3 * 8;
  if (param_5 < param_3) {
    FUN_14063c840(param_1,lVar1,param_3,param_4,param_5,param_6);
    FUN_14063c840(lVar1,param_2,lVar2,param_4,param_5,param_6);
  }
  else {
    uVar3 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1406382c0();
    FUN_1406382c0(lVar1,param_2,lVar2,param_4,CONCAT71(uVar3,param_6));
  }
  FUN_1406375f0(param_1,lVar1,param_2,param_3,lVar2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14063c950 FUN_14063c950 body=264 status=ok
// SIG undefined FUN_14063c950(void)

void FUN_14063c950(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar3;
  
  if (param_3 < 0x21) {
    FUN_14063a270(param_1,param_2,param_6);
    return;
  }
  lVar2 = param_3 >> 1;
  param_3 = param_3 - lVar2;
  lVar1 = param_3 * 0x10 + param_1;
  if (param_5 < param_3) {
    FUN_14063c950(param_1,lVar1,param_3,param_4,param_5,param_6);
    FUN_14063c950(lVar1,param_2,lVar2,param_4,param_5,param_6);
  }
  else {
    uVar3 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_140638440();
    FUN_140638440(lVar1,param_2,lVar2,param_4,CONCAT71(uVar3,param_6));
  }
  FUN_140637a80(param_1,lVar1,param_2,param_3,lVar2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14063ca60 FUN_14063ca60 body=484 status=ok
// SIG undefined FUN_14063ca60(void)

longlong FUN_14063ca60(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                      char param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *_Src;
  char cVar11;
  ulonglong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  _Src = param_2;
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    while( true ) {
      plVar10 = param_4;
      lVar1 = *_Src;
      lVar2 = *param_1;
      if (lVar1 != 0) break;
      if (lVar2 != 0) {
        cVar11 = param_5 == '\0';
        goto LAB_14063cbcc;
      }
LAB_14063cc03:
      lVar1 = *param_1;
      param_1 = param_1 + 1;
      *plVar10 = lVar1;
      param_4 = plVar10 + 1;
      if (param_1 == param_2) {
        local_res18 = (longlong *)((longlong)param_3 - (longlong)_Src);
        _guard_xfg_dispatch_icall_nop(plVar10 + 1,_Src,(size_t)local_res18);
        local_res10 = local_res18;
        goto LAB_14063cc30;
      }
    }
    cVar11 = param_5;
    if (lVar2 != 0) {
      if (param_5 == '\0') {
        local_res8 = *(ulonglong *)(lVar2 + 0x18);
        bVar6 = true;
        bVar5 = true;
        FName::ToString(&local_res8,&local_58);
        local_res20 = *(undefined8 *)(lVar1 + 0x18);
        FName::ToString(&local_res20,&local_68);
        puVar8 = &DAT_143f3eda8;
        puVar9 = &DAT_143f3eda8;
        if (local_50 != 0) {
          puVar9 = local_58;
        }
        if (local_60 != 0) {
          puVar8 = local_68;
        }
      }
      else {
        local_98 = *(undefined8 *)(lVar1 + 0x18);
        bVar4 = true;
        bVar3 = true;
        FName::ToString(&local_98,&local_78);
        local_90 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_90,&local_88);
        puVar9 = &DAT_143f3eda8;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        puVar8 = &DAT_143f3eda8;
        if (local_80 != 0) {
          puVar8 = local_88;
        }
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      cVar11 = iVar7 < 0;
      if ((bVar3) && (bVar3 = false, local_88 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar4) && (bVar4 = false, local_78 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar5) && (bVar5 = false, local_68 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      param_2 = local_res10;
      param_3 = local_res18;
      if ((bVar6) && (bVar6 = false, local_58 != (undefined2 *)0x0)) {
        FMemory::Free();
        param_2 = local_res10;
        param_3 = local_res18;
      }
    }
LAB_14063cbcc:
    if (cVar11 == '\0') goto LAB_14063cc03;
    lVar1 = *_Src;
    _Src = _Src + 1;
    *plVar10 = lVar1;
    param_4 = plVar10 + 1;
  } while (_Src != param_3);
  local_res10 = (longlong *)((longlong)param_2 - (longlong)param_1);
  _guard_xfg_dispatch_icall_nop(plVar10 + 1,param_1,(size_t)local_res10);
LAB_14063cc30:
  return (longlong)plVar10 + (longlong)local_res10 + 8U;
}



// FUNCTION 14063cc50 FUN_14063cc50 body=414 status=ok
// SIG undefined FUN_14063cc50(void)

void FUN_14063cc50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = param_2;
  do {
    while( true ) {
      if (param_5 == '\0') {
        if (*(int *)(param_1 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*param_1;
        }
        if (*(int *)(puVar6 + 1) == 0) {
          iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar4);
          bVar7 = iVar1 < 0;
        }
        else {
          iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*puVar6,puVar4);
          bVar7 = iVar1 < 0;
        }
      }
      else {
        if (*(int *)(param_1 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*param_1;
        }
        if (*(int *)(puVar6 + 1) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = (undefined2 *)*puVar6;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
        bVar7 = 0 < iVar1;
      }
      *param_4 = 0;
      puVar2 = param_4 + 2;
      if (!bVar7) break;
      *param_4 = *puVar6;
      *puVar6 = 0;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      param_4 = puVar2;
      if (puVar6 == param_3) {
        if (param_1 == param_2) {
          return;
        }
        puVar5 = (undefined4 *)((longlong)param_1 + 0xc);
        do {
          *puVar2 = 0;
          *puVar2 = *(undefined8 *)(puVar5 + -3);
          *(undefined8 *)(puVar5 + -3) = 0;
          *(undefined4 *)(puVar2 + 1) = puVar5[-1];
          *(undefined4 *)((longlong)puVar2 + 0xc) = *puVar5;
          puVar6 = (undefined8 *)(puVar5 + 1);
          *(undefined8 *)(puVar5 + -1) = 0;
          puVar2 = puVar2 + 2;
          puVar5 = puVar5 + 4;
        } while (puVar6 != param_2);
        return;
      }
    }
    *param_4 = *param_1;
    *param_1 = 0;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    param_1 = param_1 + 2;
    param_4 = puVar2;
  } while (param_1 != param_2);
  if (puVar6 != param_3) {
    puVar5 = (undefined4 *)((longlong)puVar6 + 0xc);
    do {
      *puVar2 = 0;
      *puVar2 = *(undefined8 *)(puVar5 + -3);
      *(undefined8 *)(puVar5 + -3) = 0;
      *(undefined4 *)(puVar2 + 1) = puVar5[-1];
      *(undefined4 *)((longlong)puVar2 + 0xc) = *puVar5;
      puVar6 = (undefined8 *)(puVar5 + 1);
      *(undefined8 *)(puVar5 + -1) = 0;
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 4;
    } while (puVar6 != param_3);
  }
  return;
}



// FUNCTION 14063cdf0 FUN_14063cdf0 body=89 status=ok
// SIG undefined FUN_14063cdf0(void)

undefined8 * FUN_14063cdf0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = param_3;
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      *puVar4 = 0;
      puVar1 = puVar3 + 4;
      *puVar4 = *(undefined8 *)(puVar3 + -3);
      puVar4 = puVar4 + 2;
      *(undefined8 *)(puVar3 + -3) = 0;
      *(undefined4 *)((longlong)param_3 + (-0x14 - (longlong)param_1) + (longlong)puVar1) =
           puVar3[-1];
      *(undefined4 *)((longlong)param_3 + (-0x10 - (longlong)param_1) + (longlong)puVar1) = *puVar3;
      puVar2 = puVar3 + 1;
      *(undefined8 *)(puVar3 + -1) = 0;
      puVar3 = puVar1;
    } while (puVar2 != param_2);
  }
  return puVar4;
}



// FUNCTION 14063ce50 FUN_14063ce50 body=125 status=ok
// SIG undefined FUN_14063ce50(void)

undefined8 *
FUN_14063ce50(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  uVar1 = (ulonglong)((longlong)param_3 + (1 - (longlong)param_2)) >> 1;
  if (param_3 < param_2) {
    uVar1 = uVar2;
  }
  if (uVar1 == 0) {
    *param_1 = param_4;
  }
  else {
    do {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
                (param_4,*param_2);
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != uVar1);
    *param_1 = param_4;
  }
  return param_1;
}



// FUNCTION 14063ced0 FUN_14063ced0 body=325 status=ok
// SIG undefined FUN_14063ced0(void)

ulonglong FUN_14063ced0(longlong param_1,wchar_t *param_2,wchar_t *param_3,char param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar3 = uVar7;
  uVar5 = uVar7;
  do {
    if ((longlong)param_3 - (longlong)param_2 >> 1 ==
        (ulonglong)*(uint *)((longlong)&DAT_1440279e0 + uVar3)) {
      pwVar6 = *(wchar_t **)((longlong)&PTR_u_alnum_1440279d8 + uVar3);
      pwVar4 = param_2;
      while( true ) {
        if (pwVar4 == param_3) goto LAB_14063cf8a;
        wVar2 = *pwVar6;
        wVar1 = std::ctype<wchar_t>::tolower(*(ctype<wchar_t> **)(param_1 + 8),*pwVar4);
        wVar2 = std::ctype<wchar_t>::tolower(*(ctype<wchar_t> **)(param_1 + 8),wVar2);
        if (wVar1 != wVar2) break;
        pwVar4 = pwVar4 + 1;
        pwVar6 = pwVar6 + 1;
      }
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar3 = uVar5 * 0x18;
  } while ((&PTR_u_alnum_1440279d8)[uVar5 * 3] != (undefined *)0x0);
LAB_14063cf8a:
  if ((&PTR_u_alnum_1440279d8)[uVar5 * 3] != (undefined *)0x0) {
    uVar7 = (ulonglong)*(ushort *)(&DAT_1440279e4 + uVar5 * 0x18);
  }
  if ((param_4 != '\0') && ((uVar7 & 3) != 0)) {
    uVar7 = (ulonglong)(ushort)((ushort)uVar7 | 3);
  }
  return uVar7;
}



// FUNCTION 14063d020 FUN_14063d020 body=473 status=ok
// SIG undefined FUN_14063d020(void)

longlong FUN_14063d020(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  char cVar12;
  ulonglong local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar11 = param_2 - param_1 >> 3;
  local_res18 = param_3;
joined_r0x00014063d051:
  lVar7 = lVar11;
  if (lVar7 < 1) {
    return param_1;
  }
  lVar1 = *param_3;
  lVar11 = lVar7 >> 1;
  lVar2 = *(longlong *)(param_1 + lVar11 * 8);
  local_88 = param_1 + lVar11 * 8;
  if (lVar2 == 0) goto LAB_14063d1a1;
  cVar12 = param_4;
  if (lVar1 != 0) {
    if (param_4 == '\0') {
      local_res8 = *(ulonglong *)(lVar1 + 0x18);
      bVar6 = true;
      bVar5 = true;
      FName::ToString(&local_res8,&local_50);
      local_res10 = *(undefined8 *)(lVar2 + 0x18);
      FName::ToString(&local_res10,&local_60);
      puVar9 = &DAT_143f3eda8;
      puVar10 = &DAT_143f3eda8;
      if (local_48 != 0) {
        puVar10 = local_50;
      }
      if (local_58 != 0) {
        puVar9 = local_60;
      }
    }
    else {
      local_98 = *(undefined8 *)(lVar2 + 0x18);
      bVar4 = true;
      bVar3 = true;
      FName::ToString(&local_98,&local_70);
      local_90 = *(undefined8 *)(lVar1 + 0x18);
      FName::ToString(&local_90,&local_80);
      puVar10 = &DAT_143f3eda8;
      if (local_68 != 0) {
        puVar10 = local_70;
      }
      puVar9 = &DAT_143f3eda8;
      if (local_78 != 0) {
        puVar9 = local_80;
      }
    }
    iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
    cVar12 = iVar8 < 0;
    if ((bVar3) && (bVar3 = false, local_80 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (bVar4 = false, local_70 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (bVar5 = false, local_60 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    param_3 = local_res18;
    if ((bVar6) && (bVar6 = false, local_50 != (undefined2 *)0x0)) {
      FMemory::Free();
      param_3 = local_res18;
    }
  }
  goto LAB_14063d1ac;
LAB_14063d1a1:
  if (lVar1 != 0) {
    cVar12 = param_4 == '\0';
LAB_14063d1ac:
    if (cVar12 != '\0') {
      param_1 = local_88 + 8;
      lVar11 = lVar7 + (-1 - lVar11);
    }
  }
  goto joined_r0x00014063d051;
}



// FUNCTION 14063d200 FUN_14063d200 body=429 status=ok
// SIG undefined FUN_14063d200(void)

int FUN_14063d200(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *_Buf1;
  size_t _Size;
  void *_Buf1_00;
  int iVar5;
  void *pvVar6;
  
  pvVar1 = (void *)param_1[1];
  iVar5 = 0;
  if (((longlong)pvVar1 - *param_1 >> 1 == 0) ||
     (pvVar6 = (void *)*param_1, param_3[1] - *param_3 >> 1 == 0)) {
    return 0;
  }
  while( true ) {
    _Buf1_00 = pvVar6;
    pvVar6 = (void *)*param_3;
    lVar4 = param_3[1] - (longlong)pvVar6 >> 1;
    if ((lVar4 < 1) || ((longlong)pvVar1 - (longlong)_Buf1_00 >> 1 < lVar4)) break;
    _Size = param_3[1] - (longlong)pvVar6;
    iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1_00,pvVar6,_Size);
    _Buf1 = _Buf1_00;
    while (iVar2 != 0) {
      if (_Buf1 == (void *)((longlong)pvVar1 + lVar4 * -2)) goto LAB_14063d326;
      _Buf1 = (void *)((longlong)_Buf1 + 2);
      iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1,pvVar6,_Size);
    }
    if (_Buf1 == pvVar1) break;
    pvVar6 = (void *)(lVar4 * 2 + (longlong)_Buf1);
    if ((param_4 == '\0') || ((longlong)_Buf1 - (longlong)_Buf1_00 >> 1 != 0)) {
      iVar2 = (int)param_2[1];
      iVar5 = iVar5 + 1;
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar3 = _Buf1_00;
      puVar3[1] = _Buf1;
    }
  }
LAB_14063d326:
  if ((param_4 != '\0') && ((longlong)pvVar1 - (longlong)_Buf1_00 >> 1 == 0)) {
    return iVar5;
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar3 = _Buf1_00;
  puVar3[1] = pvVar1;
  return iVar5 + 1;
}



// FUNCTION 14063d3b0 FUN_14063d3b0 body=401 status=ok
// SIG undefined FUN_14063d3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14063d3b0(undefined8 *param_1,undefined4 *param_2,void *param_3,void *param_4)

{
  longlong lVar1;
  wchar_t *_Dst;
  longlong lVar2;
  wchar_t *pwVar3;
  size_t _Size;
  wchar_t *pwVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  _Dst = (wchar_t *)0x0;
  *(undefined8 *)(param_2 + 6) = 7;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)param_2 = 0;
  if (param_3 != param_4) {
    _Size = (longlong)param_4 - (longlong)param_3;
    uVar5 = (longlong)_Size >> 1;
    pwVar3 = _Dst;
    pwVar4 = _Dst;
    if (uVar5 != 0) {
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
      }
      _Dst = (wchar_t *)std::allocator<wchar_t>::allocate(local_78,uVar5);
      _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
      pwVar3 = (wchar_t *)(_Size + (longlong)_Dst);
      pwVar4 = _Dst + uVar5;
    }
    std::ctype<wchar_t>::tolower
              ((ctype<wchar_t> *)param_1[1],_Dst,_Dst + ((longlong)pwVar3 - (longlong)_Dst >> 1));
    (**(code **)(*(longlong *)*param_1 + 0x20))
              ((longlong *)*param_1,&local_60,_Dst,_Dst + ((longlong)pwVar3 - (longlong)_Dst >> 1));
    if (param_2 == &local_60) {
      if (7 < uStack_48) {
        lVar1 = CONCAT44(uStack_5c,local_60);
        uVar5 = uStack_48 * 2 + 2;
        lVar2 = lVar1;
        if (0xfff < uVar5) {
          lVar2 = *(longlong *)(lVar1 + -8);
          uVar5 = uStack_48 * 2 + 0x29;
          if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar2,uVar5);
      }
    }
    else {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Tidy_deallocate(param_2);
      *param_2 = local_60;
      param_2[1] = uStack_5c;
      param_2[2] = uStack_58;
      param_2[3] = uStack_54;
      *(undefined8 *)(param_2 + 4) = local_50;
      *(ulonglong *)(param_2 + 6) = uStack_48;
    }
    if (_Dst != (wchar_t *)0x0) {
      uVar5 = ((longlong)pwVar4 - (longlong)_Dst >> 1) * 2;
      pwVar3 = _Dst;
      if (0xfff < uVar5) {
        pwVar3 = *(wchar_t **)(_Dst + -4);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pwVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pwVar3,uVar5);
    }
  }
  return param_2;
}



// FUNCTION 14063d550 FUN_14063d550 body=421 status=ok
// SIG undefined FUN_14063d550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14063d550(undefined8 *param_1,undefined4 *param_2,void *param_3,void *param_4)

{
  longlong lVar1;
  wchar_t *_Dst;
  longlong lVar2;
  wchar_t *pwVar3;
  size_t _Size;
  wchar_t *pwVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  pwVar3 = (wchar_t *)0x0;
  *(undefined8 *)(param_2 + 6) = 7;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)param_2 = 0;
  if (param_3 != param_4) {
    _Size = (longlong)param_4 - (longlong)param_3;
    uVar5 = (longlong)_Size >> 1;
    pwVar4 = pwVar3;
    _Dst = pwVar3;
    if (uVar5 != 0) {
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
      }
      _Dst = (wchar_t *)std::allocator<wchar_t>::allocate(local_68,uVar5);
      _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
      pwVar3 = (wchar_t *)((longlong)_Dst + _Size);
      pwVar4 = _Dst + uVar5;
    }
    std::ctype<wchar_t>::tolower
              ((ctype<wchar_t> *)param_1[1],_Dst,_Dst + ((longlong)pwVar3 - (longlong)_Dst >> 1));
    (**(code **)(*(longlong *)*param_1 + 0x20))
              ((longlong *)*param_1,&local_50,_Dst,_Dst + ((longlong)pwVar3 - (longlong)_Dst >> 1));
    if (param_2 == &local_50) {
      if (7 < uStack_38) {
        lVar1 = CONCAT44(uStack_4c,local_50);
        uVar5 = uStack_38 * 2 + 2;
        lVar2 = lVar1;
        if (0xfff < uVar5) {
          lVar2 = *(longlong *)(lVar1 + -8);
          uVar5 = uStack_38 * 2 + 0x29;
          if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar2,uVar5);
      }
    }
    else {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Tidy_deallocate(param_2);
      *param_2 = local_50;
      param_2[1] = uStack_4c;
      param_2[2] = uStack_48;
      param_2[3] = uStack_44;
      *(undefined8 *)(param_2 + 4) = local_40;
      *(ulonglong *)(param_2 + 6) = uStack_38;
    }
    if (_Dst != (wchar_t *)0x0) {
      uVar5 = ((longlong)pwVar4 - (longlong)_Dst >> 1) * 2;
      pwVar3 = _Dst;
      if (0xfff < uVar5) {
        pwVar3 = *(wchar_t **)(_Dst + -4);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pwVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pwVar3,uVar5);
    }
  }
  return param_2;
}



// FUNCTION 14063d700 FUN_14063d700 body=473 status=ok
// SIG undefined FUN_14063d700(void)

longlong FUN_14063d700(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  char cVar12;
  ulonglong local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar11 = param_2 - param_1 >> 3;
  local_res18 = param_3;
  while( true ) {
    lVar7 = lVar11;
    if (lVar7 < 1) {
      return param_1;
    }
    lVar1 = *param_3;
    lVar11 = lVar7 >> 1;
    lVar2 = *(longlong *)(param_1 + lVar11 * 8);
    local_88 = param_1 + lVar11 * 8;
    if (lVar1 == 0) break;
    cVar12 = param_4;
    if (lVar2 != 0) {
      if (param_4 == '\0') {
        local_res8 = *(ulonglong *)(lVar2 + 0x18);
        bVar6 = true;
        bVar5 = true;
        FName::ToString(&local_res8,&local_50);
        local_res10 = *(undefined8 *)(lVar1 + 0x18);
        FName::ToString(&local_res10,&local_60);
        puVar9 = &DAT_143f3eda8;
        puVar10 = &DAT_143f3eda8;
        if (local_48 != 0) {
          puVar10 = local_50;
        }
        if (local_58 != 0) {
          puVar9 = local_60;
        }
      }
      else {
        local_98 = *(undefined8 *)(lVar1 + 0x18);
        bVar4 = true;
        bVar3 = true;
        FName::ToString(&local_98,&local_70);
        local_90 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_90,&local_80);
        puVar10 = &DAT_143f3eda8;
        if (local_68 != 0) {
          puVar10 = local_70;
        }
        puVar9 = &DAT_143f3eda8;
        if (local_78 != 0) {
          puVar9 = local_80;
        }
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
      cVar12 = iVar8 < 0;
      if ((bVar3) && (bVar3 = false, local_80 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar4) && (bVar4 = false, local_70 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar5) && (bVar5 = false, local_60 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      param_3 = local_res18;
      if ((bVar6) && (bVar6 = false, local_50 != (undefined2 *)0x0)) {
        FMemory::Free();
        param_3 = local_res18;
      }
    }
LAB_14063d88c:
    if (cVar12 == '\0') {
LAB_14063d896:
      param_1 = local_88 + 8;
      lVar11 = lVar7 + (-1 - lVar11);
    }
  }
  if (lVar2 != 0) {
    cVar12 = param_4 == '\0';
    goto LAB_14063d88c;
  }
  goto LAB_14063d896;
}



// FUNCTION 14063d8e0 _Bt_state_t<char_const_*> body=188 status=ok
// SIG undefined _Bt_state_t<char_const_*>(void)

undefined8 *
std::_Bt_state_t<char_const_*>::_Bt_state_t<char_const_*>(undefined8 *param_1,undefined8 *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = (longlong)(param_2[2] - param_2[1]) >> 2;
  if (uVar1 != 0) {
    if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    _Dst = (void *)allocator<unsigned_int>::allocate(param_1 + 1,uVar1);
    param_1[1] = _Dst;
    param_1[2] = _Dst;
    param_1[3] = (void *)((longlong)_Dst + uVar1 * 4);
    _Size = param_2[2] - (longlong)param_2[1];
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)param_2[1],_Size);
    param_1[2] = _Size + (longlong)_Dst;
  }
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 14063d9a0 FUN_14063d9a0 body=197 status=ok
// SIG undefined FUN_14063d9a0(void)

longlong FUN_14063d9a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar2 = (undefined8 *)(param_1 + 0x80);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_7;
  *(longlong *)(param_1 + 0xb0) = param_5;
  *(uint *)(param_1 + 0xbc) = param_8;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = param_6;
  if (((*(byte *)(param_5 + 0xc) & 8) == 0) || ((param_8 & 0x10) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = param_4;
  std::vector<std::_Loop_vals_t,std::allocator<std::_Loop_vals_t>_>::
  _Resize<<lambda_2aa502090c117147aa783e21f2063a98>_>(puVar2,*(undefined4 *)(param_5 + 0x24),puVar2)
  ;
  return param_1;
}



// FUNCTION 14063da70 _Tgt_state_t<char_const_*> body=182 status=ok
// SIG undefined _Tgt_state_t<char_const_*>(void)

longlong std::_Tgt_state_t<char_const_*>::_Tgt_state_t<char_const_*>
                   (longlong param_1,longlong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  _Bt_state_t<char_const_*>::_Bt_state_t<char_const_*>();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 4;
  if (uVar1 != 0) {
    if (0xfffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    _Dst = (void *)allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate
                             (param_1 + 0x28,uVar1);
    *(void **)(param_1 + 0x28) = _Dst;
    *(void **)(param_1 + 0x38) = (void *)(uVar1 * 0x10 + (longlong)_Dst);
    *(void **)(param_1 + 0x30) = _Dst;
    _Size = *(longlong *)(param_2 + 0x30) - (longlong)*(void **)(param_2 + 0x28);
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_2 + 0x28),_Size);
    *(size_t *)(param_1 + 0x30) = _Size + (longlong)_Dst;
  }
  return param_1;
}



// FUNCTION 14063db30 FUN_14063db30 body=61 status=ok
// SIG undefined FUN_14063db30(void)

longlong * FUN_14063db30(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = MNP_OverrideOutput_WC(param_2);
    lVar2 = param_2 + (longlong)iVar1 * 2;
  }
  param_1[1] = lVar2;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14063db70 FUN_14063db70 body=398 status=ok
// SIG undefined FUN_14063db70(void)

undefined8 *
FUN_14063db70(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  FArchive::FArchive();
  param_1[0x12] = param_3;
  *param_1 = &PTR_FUN_144025e90;
  puVar1 = param_1 + 0x1e;
  param_1[0x13] = param_4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *puVar1 = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (*(int *)(param_1[0x13] + 0xc) < 0x20) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1[0x13],0x20);
  }
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 8;
  FArchive::SetIsPersistent(param_1,0);
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xdf;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res10 = param_2;
      FUN_14058c900(puVar1,local_res8,&local_res10,0);
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
      if (plVar4 != (longlong *)0x0) {
        local_res10 = plVar4;
        FUN_14058c900(puVar1,local_res8,&local_res10,0);
      }
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2);
      if (plVar4 != (longlong *)0x0) {
        local_res10 = plVar4;
        FUN_14058c900(puVar1,local_res8,&local_res10,0);
      }
    }
    (**(code **)(*param_2 + 0xa8))(param_2,param_1);
  }
  return param_1;
}



// FUNCTION 14063dd00 FUN_14063dd00 body=198 status=ok
// SIG undefined FUN_14063dd00(void)

undefined8 * FUN_14063dd00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 7,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[7],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 14063ddd0 FUN_14063ddd0 body=154 status=ok
// SIG undefined FUN_14063ddd0(void)

undefined8 * FUN_14063ddd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_1440277b8;
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = &PTR__scalar_deleting_destructor__143f73ca8;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  FGCObject::Init(param_1 + 4);
  param_1[4] = &PTR__scalar_deleting_destructor__144027750;
  param_1[8] = param_2[4];
  *param_2 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_2 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_2);
  }
  return param_1;
}



// FUNCTION 14063de70 FUN_14063de70 body=83 status=ok
// SIG undefined FUN_14063de70(void)

undefined8 * FUN_14063de70(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x138);
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  *(undefined1 *)(param_1 + 1) = 0;
  FGCObject::Init();
  param_1[4] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144027750;
  return param_1;
}



// FUNCTION 14063df00 FUN_14063df00 body=153 status=ok
// SIG undefined FUN_14063df00(void)

undefined8 * FUN_14063df00(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = param_3;
  *param_1 = &PTR_FUN_144025488;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  FString::FString(param_1 + 2);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
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
  uVar1 = FUN_141649d10();
  FAutomationTestFramework::RegisterAutomationTest(uVar1,param_2,param_1);
  return param_1;
}



// FUNCTION 14063dfa0 FUN_14063dfa0 body=239 status=ok
// SIG undefined FUN_14063dfa0(void)

undefined4 * FUN_14063dfa0(undefined4 *param_1,undefined4 param_2,short *param_3,short *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = -1;
  if ((param_3 != (short *)0x0) && (lVar3 = lVar1, *param_3 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    param_1[4] = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
    }
    FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 2),param_3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    do {
      lVar1 = lVar1 + 1;
    } while (param_4[lVar1] != 0);
    iVar2 = (int)lVar1 + 1;
    param_1[8] = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6,0);
    }
    FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 6),param_4,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14063e0c0 FUN_14063e0c0 body=343 status=ok
// SIG undefined FUN_14063e0c0(void)

undefined8 * FUN_14063e0c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  if ((wchar_t *)param_1[1] != L"../../Saved/PerfMapCaptures/") {
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x14) != 0x1d) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,0x1d);
      iVar2 = *(int *)(param_1 + 2);
    }
    *(int *)(param_1 + 2) = iVar2 + 0x1d;
    if (*(int *)((longlong)param_1 + 0x14) < iVar2 + 0x1d) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 1);
    }
    builtin_wcsncpy((wchar_t *)param_1[1],L"../../Saved/PerfMapCaptures/",0x1d);
  }
  *(undefined4 *)(param_1 + 3) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x100;
  *(undefined4 *)(param_1 + 4) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x49480000;
  *(undefined4 *)(param_1 + 6) = 0x49480000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x49480000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if ((undefined *)param_1[8] != &DAT_14401f638) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0xb);
      iVar3 = *(int *)(param_1 + 9);
    }
    *(int *)(param_1 + 9) = iVar3 + 0xb;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar3 + 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar3);
    }
    puVar1 = (undefined8 *)param_1[8];
    *puVar1 = 0x5b005f006d0025;
    puVar1[1] = 0x25005f00720025;
    *(undefined4 *)(puVar1 + 2) = 0x5d0063;
    *(undefined2 *)((longlong)puVar1 + 0x14) = 0;
  }
  return param_1;
}



// FUNCTION 14063e220 FObjectIterator body=477 status=ok
// SIG undefined FObjectIterator(void)

longlong *
FObjectIterator::FObjectIterator
          (longlong *param_1,longlong param_2,char param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  *param_1 = (longlong)&DAT_1469e91a0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  iVar1 = DAT_1469e91a4;
  iVar10 = -1;
  if (param_3 != '\0') {
    *(int *)(param_1 + 1) = DAT_1469e91a4;
    iVar10 = iVar1;
  }
  iVar10 = iVar10 + 1;
  *(int *)(param_1 + 1) = iVar10;
  if (iVar10 < (int)DAT_1469e91c4) {
    do {
      uVar7 = iVar10 >> 0x1f & 0xffff;
      uVar4 = iVar10 + uVar7;
      lVar5 = (longlong)(int)((uVar4 & 0xffff) - uVar7);
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8);
      if (*(longlong *)(lVar9 + lVar5 * 0x18) != 0) {
        param_1[2] = lVar9 + lVar5 * 0x18;
        break;
      }
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 1) = iVar10;
    } while (iVar10 < (int)DAT_1469e91c4);
  }
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(uint *)((longlong)param_1 + 0x24) = param_5 | 0x10000000;
  cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (cVar3 == '\0') {
    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x8000000;
  }
  do {
    lVar9 = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      lVar9 = *(longlong *)param_1[2];
    }
    if ((*(uint *)(param_1 + 4) & *(uint *)(lVar9 + 8)) == 0) {
      iVar1 = *(int *)(lVar9 + 0xc);
      lVar5 = 0;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      if ((*(uint *)((longlong)param_1 + 0x24) & *(uint *)(lVar5 + 8)) == 0) {
        lVar6 = UObject::GetPrivateStaticClass();
        lVar5 = param_1[3];
        if (lVar5 == lVar6) {
          return param_1;
        }
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return param_1;
        }
      }
    }
    lVar9 = *param_1;
    uVar4 = (int)param_1[1] + 1;
    *(uint *)(param_1 + 1) = uVar4;
    param_1[2] = 0;
    if (*(int *)(lVar9 + 0x24) <= (int)uVar4) {
      return param_1;
    }
    while( true ) {
      uVar8 = uVar4 & 0xffff;
      uVar7 = uVar4;
      if ((int)uVar4 < 0) {
        uVar7 = uVar4 + 0xffff;
        uVar8 = uVar8 - 0x10000;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (longlong)((int)uVar7 >> 0x10) * 8);
      if (*(longlong *)(lVar5 + (longlong)(int)uVar8 * 0x18) != 0) break;
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 1) = uVar4;
      if (*(int *)(lVar9 + 0x24) <= (int)uVar4) {
        return param_1;
      }
    }
    param_1[2] = lVar5 + (longlong)(int)uVar8 * 0x18;
  } while( true );
}



// FUNCTION 14063e400 FUN_14063e400 body=630 status=ok
// SIG undefined FUN_14063e400(void)

longlong * FUN_14063e400(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_28 [2];
  
  *param_1 = param_2;
  uVar2 = GetTransientPackage();
  puVar6 = (undefined8 *)0x0;
  local_res8 = 0;
  if (param_2 == 0) {
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  lVar3 = FUN_1417985e0(param_3,uVar2,param_2,0,0,0,0,0,0);
  param_1[1] = lVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar4 = (undefined8 *)operator_new(0x188);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    local_res10 = *param_1;
    lVar3 = param_1[1];
    uVar2 = FName::ToString(&local_res10,local_28);
    FUN_14063df00(puVar4,uVar2,1);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    puVar4[0x14] = 0;
    *puVar4 = &PTR_FUN_144025a80;
    FWeakObjectPtr::operator=(puVar4 + 0x15,0);
    FWeakObjectPtr::operator=(puVar4 + 0x16,0);
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    *(undefined1 *)(puVar4 + 0x26) = 0;
    *(undefined4 *)(puVar4 + 0x27) = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    *(undefined2 *)(puVar4 + 0x30) = 0;
    FWeakObjectPtr::operator=(&local_res8,lVar3);
    cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                      (puVar4 + 0x15,&local_res8);
    if (cVar1 != '\0') {
      FUN_14065e450(puVar4);
      *(undefined4 *)(puVar4 + 0x15) = (undefined4)local_res8;
      *(undefined4 *)((longlong)puVar4 + 0xac) = local_res8._4_4_;
      FUN_140658e30(puVar4);
    }
  }
  puVar5 = (undefined8 *)operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_LAB_144027978;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = puVar4;
    puVar6 = puVar5;
  }
  param_1[0xd] = (longlong)puVar4;
  param_1[0xe] = (longlong)puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0xd,puVar4,puVar4);
  return param_1;
}



// FUNCTION 14063e680 FUN_14063e680 body=1196 status=ok
// SIG undefined FUN_14063e680(void)

undefined8 * FUN_14063e680(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 local_res8;
  undefined4 in_stack_ffffffffffffff68;
  undefined2 uVar16;
  uint uVar15;
  longlong local_58;
  float local_50;
  undefined4 local_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  
  uVar16 = (undefined2)((uint)in_stack_ffffffffffffff68 >> 0x10);
  *param_1 = &PTR_FUN_144027520;
  uVar6 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar6;
  param_1[3] = param_3[2];
  param_1[4] = *param_2;
  FString::FString(param_1 + 5,param_2 + 1);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  FString::FString(param_1 + 0xc,param_2 + 8);
  uVar13 = 0;
  plVar1 = param_1 + 0x1a;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *plVar1 = 0;
  param_1[0x1b] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,0);
  FGenericPlatformString::Convert<char,wchar_t>(*plVar1,8,"Unnamed",8,CONCAT22(uVar16,0x3f));
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e,0);
  FGenericPlatformString::Memcpy(param_1[0x1e],L"%m_[%d_%r_%c]",0x1c);
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar7 = UTexture2D::GetPrivateStaticClass();
  uVar15 = 0;
  lVar8 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  param_1[0x10] = lVar8;
  iVar14 = *(int *)(lVar8 + 0xc);
  uVar9 = uVar13;
  if (iVar14 < (int)DAT_1469e91c4) {
    uVar11 = iVar14 >> 0x1f & 0xffff;
    uVar5 = iVar14 + uVar11;
    uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
  }
  *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x40000000;
  FUN_14287a5c0(param_1[0x10],0x800,0x800,2,uVar15 & 0xffffff00);
  *(undefined4 *)(param_1[0x10] + 0xb8) = *(undefined4 *)(param_1 + 9);
  plVar10 = (longlong *)UDynamicEntryBox::GetAllEntries(param_1[4]);
  iVar14 = (int)plVar10[1] + *(int *)(param_1 + 0xf);
  *(int *)(param_1 + 0xf) = iVar14;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar14) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xe);
  }
  uVar9 = uVar13;
  if (0 < (int)plVar10[1]) {
    do {
      uVar15 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar15;
      lVar8 = *(longlong *)(*plVar10 + -8 + (uVar9 + 1) * 8);
      *(byte *)(uVar9 + param_1[0xe]) = *(byte *)(lVar8 + 0x204) >> 4 & 1;
      pbVar2 = (byte *)(lVar8 + 0x204);
      *pbVar2 = *pbVar2 | 0x10;
      uVar9 = uVar9 + 1;
    } while ((int)uVar15 < (int)plVar10[1]);
  }
  fStack_3c = *(float *)((longlong)param_1 + 0x4c) * 0.5;
  local_30 = CONCAT31(local_30._1_3_,1);
  fStack_38 = *(float *)(param_1 + 10) * 0.5;
  local_50 = *(float *)((longlong)param_1 + 0x54) * 0.5;
  fStack_40 = -local_50;
  param_1[0x11] = CONCAT44(fStack_38,fStack_3c) ^ 0x8000000080000000;
  param_1[0x12] = CONCAT44(fStack_3c,fStack_40);
  param_1[0x13] = CONCAT44(local_50,fStack_38);
  *(undefined4 *)(param_1 + 0x14) = local_30;
  if ((*(float *)((longlong)param_1 + 0x94) - *(float *)(param_1 + 0x11) == 0.0) ||
     (*(float *)(param_1 + 0x13) - *(float *)((longlong)param_1 + 0x8c) == 0.0)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  *(char *)(param_1 + 0x20) = cVar4;
  if (cVar4 == '\0') {
    fStack_34 = local_50;
    FString::operator=(param_1 + 0x1e,param_1 + 0xc);
    local_res8 = *(undefined8 *)(param_1[4] + 0x18);
    FName::ToString(&local_res8,&local_58);
    if (plVar1 == &local_58) {
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_58;
      *(float *)(param_1 + 0x1b) = local_50;
      *(undefined4 *)((longlong)param_1 + 0xdc) = local_4c;
    }
    fVar3 = *(float *)(param_1 + 7);
    *(int *)(param_1 + 0x1d) = (int)fVar3;
    iVar12 = (int)ROUND((*(float *)(param_1 + 0x11) + *(float *)(param_1 + 0x11)) - 0.5) >> 1;
    *(int *)((longlong)param_1 + 0xa4) = iVar12;
    iVar14 = (int)ROUND((*(float *)((longlong)param_1 + 0x8c) + *(float *)((longlong)param_1 + 0x8c)
                        ) - 0.5) >> 1;
    *(int *)(param_1 + 0x15) = iVar14;
    *(int *)((longlong)param_1 + 0xac) =
         -((int)ROUND(-0.5 - (*(float *)((longlong)param_1 + 0x94) +
                             *(float *)((longlong)param_1 + 0x94))) >> 1);
    *(int *)(param_1 + 0x16) =
         -((int)ROUND(-0.5 - (*(float *)(param_1 + 0x13) + *(float *)(param_1 + 0x13))) >> 1);
    *(int *)((longlong)param_1 + 0xb4) = (int)((float)*(int *)((longlong)param_1 + 0x3c) * fVar3);
    *(float *)((longlong)param_1 + 0xc4) = (float)iVar12;
    *(int *)(param_1 + 0x17) = (int)((float)*(int *)(param_1 + 8) * fVar3);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x5c);
    *(float *)(param_1 + 0x19) = (float)iVar14;
  }
  return param_1;
}



// FUNCTION 14063eb30 FUN_14063eb30 body=148 status=ok
// SIG undefined FUN_14063eb30(void)

longlong * FUN_14063eb30(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1] - *param_2 >> 1;
  if (lVar3 != 0) {
    iVar2 = (int)lVar3 + 1;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar2);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + iVar1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    _guard_xfg_dispatch_icall_nop((void *)*param_1,(void *)*param_2,lVar3 * 2);
    *(undefined2 *)(*param_1 + -2 + (longlong)(int)param_1[1] * 2) = 0;
  }
  return param_1;
}



// FUNCTION 14063ebd0 FUN_14063ebd0 body=15 status=ok
// SIG undefined FUN_14063ebd0(void)

longlong FUN_14063ebd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 14063ebe0 FUN_14063ebe0 body=24 status=ok
// SIG undefined FUN_14063ebe0(void)

undefined4 * FUN_14063ebe0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 14063ec00 CAkDistortion body=20 status=ok
// SIG undefined CAkDistortion(void)

undefined8 * DSP::CAkDistortion::CAkDistortion(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 14063ec20 FUN_14063ec20 body=25 status=ok
// SIG undefined FUN_14063ec20(void)

undefined8 * FUN_14063ec20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 14063ec40 FUN_14063ec40 body=303 status=ok
// SIG undefined FUN_14063ec40(void)

undefined8 *
FUN_14063ec40(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__144027730;
  plVar8 = param_1 + 1;
  *plVar8 = *param_2;
  lVar4 = param_2[1];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  lVar4 = *plVar8;
  *(undefined4 *)(param_1 + 3) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  param_1[5] = *(undefined8 *)(param_4 + 4);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x50) == '\0') {
      FString::operator=(lVar4 + 0x20,param_3);
      *(undefined2 *)(lVar4 + 0x50) = 1;
    }
    else {
      local_10 = (longlong *)0x0;
      if (plVar8 != &local_18) {
        *plVar8 = 0;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&local_10);
        plVar8 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
    }
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14063ed70 FUN_14063ed70 body=601 status=ok
// SIG undefined FUN_14063ed70(void)

undefined8 *
FUN_14063ed70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_144027680;
  FString::FString(param_1 + 2,param_3);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_14217c140(param_1 + 8);
  *(undefined2 *)(param_1 + 9) = 1;
  puVar10 = &DAT_143f3eda8;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  if (*(int *)(param_1 + 3) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[2];
  }
  puVar3 = (undefined8 *)FName::FName(local_res8,puVar9,1);
  uVar4 = FUN_14217c900(local_68);
  puVar3 = (undefined8 *)Trace::Private::FLogScope::Enter<0>(local_res10,*puVar3,uVar4);
  param_1[8] = *puVar3;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  uVar4 = param_1[8];
  local_98 = (longlong *)0x0;
  local_78 = param_1;
  uStack_70 = param_4;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_90 = 3;
  local_98 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_144027818;
    *(undefined4 *)(plVar5 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar5 + 0xc) = local_78._4_4_;
    *(undefined4 *)(plVar5 + 2) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)plVar5 + 0x14) = uStack_70._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
  }
  FUN_142184b10(uVar4,local_res8,2,&local_98);
  if (local_90 == 0) {
LAB_14063eedd:
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    local_90 = 0;
    goto LAB_14063eedd;
  }
  if (*(int *)(param_1 + 3) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[2];
  }
  FConfigCacheIni::GetStr(DAT_1468b6148,&local_88,puVar9,L"PlayerQuery",param_4);
  if ((local_80 != 0) && (local_80 != 1)) {
    pwVar7 = L"First";
    pwVar8 = local_88;
    do {
      _C = *pwVar8;
      if ((_C == L'\0') && (*pwVar7 == L'\0')) goto LAB_14063ef70;
      if (_C != *pwVar7) {
        wVar1 = towlower(_C);
        wVar2 = towlower(*pwVar7);
        if (wVar1 != wVar2) goto LAB_14063ef65;
      }
      pwVar8 = pwVar8 + 1;
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_14063ef74:
  if (*(int *)(param_1 + 3) != 0) {
    puVar10 = (undefined2 *)param_1[2];
  }
  FConfigCacheIni::GetBool(DAT_1468b6148,puVar10,L"UseRawStats",(longlong)param_1 + 0x49,param_4);
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
LAB_14063ef65:
  if (wVar1 == wVar2) {
LAB_14063ef70:
    *(undefined1 *)(param_1 + 9) = 0;
  }
  goto LAB_14063ef74;
}



// FUNCTION 14063efd0 System body=32 status=ok
// SIG undefined System(System * this, HeapDesc * param_1, SysAllocBase * param_2)

/* public: __cdecl Scaleform::System::System(struct Scaleform::MemoryHeap::HeapDesc const &
   __ptr64,class Scaleform::SysAllocBase * __ptr64) __ptr64 */

System * __thiscall Scaleform::System::System(System *this,HeapDesc *param_1,SysAllocBase *param_2)

{
                    /* 0x63efd0  16
                       ??0System@Scaleform@@QEAA@AEBUHeapDesc@MemoryHeap@1@PEAVSysAllocBase@1@@Z */
  Init(param_1,param_2);
  return this;
}



// FUNCTION 14063eff0 System body=83 status=ok
// SIG undefined System(System * this, SysAllocBase * param_1)

/* public: __cdecl Scaleform::System::System(class Scaleform::SysAllocBase * __ptr64) __ptr64 */

System * __thiscall Scaleform::System::System(System *this,SysAllocBase *param_1)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* 0x63eff0  17  ??0System@Scaleform@@QEAA@PEAVSysAllocBase@1@@Z */
  local_48[0] = 0;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_20 = 0;
  local_18 = 1;
  local_10 = 0;
  Init((HeapDesc *)local_48,param_1);
  return this;
}



// FUNCTION 14063f050 FUN_14063f050 body=33 status=ok
// SIG undefined FUN_14063f050(void)

undefined8 * FUN_14063f050(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_1440251e8;
  return param_1;
}



// FUNCTION 14063f080 FUN_14063f080 body=33 status=ok
// SIG undefined FUN_14063f080(void)

undefined8 * FUN_14063f080(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_144026080;
  return param_1;
}



// FUNCTION 14063f0b0 FUN_14063f0b0 body=33 status=ok
// SIG undefined FUN_14063f0b0(void)

undefined8 * FUN_14063f0b0(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_1440267b8;
  return param_1;
}



// FUNCTION 14063f0e0 FUN_14063f0e0 body=33 status=ok
// SIG undefined FUN_14063f0e0(void)

undefined8 * FUN_14063f0e0(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_144026310;
  return param_1;
}



// FUNCTION 14063f110 FUN_14063f110 body=33 status=ok
// SIG undefined FUN_14063f110(void)

undefined8 * FUN_14063f110(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_144026a48;
  return param_1;
}



// FUNCTION 14063f140 FUN_14063f140 body=42 status=ok
// SIG undefined FUN_14063f140(void)

undefined8 * FUN_14063f140(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_144026cd8;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 14063f170 FUN_14063f170 body=197 status=ok
// SIG undefined FUN_14063f170(void)

undefined8 * FUN_14063f170(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  uVar1 = FUN_14178c940();
  UDataAsset::UDataAsset(param_1,uVar1);
  *param_1 = &PTR_FUN_144026f68;
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = UEnum::GetPrivateStaticClass();
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,L"TextureCompressionSettings",1);
  if (lVar2 == 0) {
    local_res8 = 0;
  }
  else {
    UEnum::GetNameByValue(lVar2,&local_res8,0);
  }
  param_1[8] = local_res8;
  uVar1 = UEnum::GetPrivateStaticClass();
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,L"TextureGroup",1);
  if (lVar2 == 0) {
    local_res8 = 0;
  }
  else {
    UEnum::GetNameByValue(lVar2,&local_res8,0x20);
  }
  param_1[10] = local_res8;
  return param_1;
}



// FUNCTION 14063f240 FUN_14063f240 body=48 status=ok
// SIG undefined FUN_14063f240(void)

undefined8 * FUN_14063f240(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_143fcf3b0;
  FWeakObjectPtr::operator=(param_1 + 5,0);
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 14063f270 FUN_14063f270 body=1084 status=ok
// SIG undefined FUN_14063f270(void)

undefined8 * FUN_14063f270(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = FUN_14178c940();
  UCommandlet::UCommandlet(param_1,uVar1);
  iVar4 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144025528;
  if ((wchar_t *)param_1[5] != L"Lists tests associated with a given build-plan in various formats."
     ) {
    *(undefined4 *)(param_1 + 6) = 0;
    iVar3 = iVar4;
    if (*(int *)((longlong)param_1 + 0x34) != 0x43) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x43);
      iVar3 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar3 + 0x43;
    if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 0x43) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],
                    L"Lists tests associated with a given build-plan in various formats.",0x43);
  }
  if ((undefined *)param_1[7] != &DAT_144020b40) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) != 0x74) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 7,0x74);
      iVar4 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 8) = iVar4 + 0x74;
    if (*(int *)((longlong)param_1 + 0x44) < iVar4 + 0x74) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7);
    }
    puVar2 = (undefined8 *)param_1[7];
    *puVar2 = 0x6e00750072002d;
    puVar2[1] = 0x7800620047003d;
    puVar2[2] = 0x74007300650054;
    puVar2[3] = 0x6e0061006c0050;
    puVar2[4] = 0x50002d005b0020;
    puVar2[5] = 0x3d006e0061006c;
    puVar2[6] = 0x65006e006f004e;
    puVar2[7] = 0x5400420041007c;
    puVar2[8] = 0x670069004e007c;
    puVar2[9] = 0x79006c00740068;
    puVar2[10] = 0x2d005b0020005d;
    puVar2[0xb] = 0x6d0072006f0046;
    puVar2[0xc] = 0x46003d00740061;
    puVar2[0xd] = 0x4e006c006c0075;
    puVar2[0xe] = 0x7c0065006d0061;
    puVar2[0xf] = 0x73006e006f0043;
    puVar2[0x10] = 0x7c0065006c006f;
    puVar2[0x11] = 0x6d006d006f0043;
    puVar2[0x12] = 0x6c0064006e0061;
    puVar2[0x13] = 0x5d0065006e0069;
    puVar2[0x14] = 0x4f002d005b0020;
    puVar2[0x15] = 0x75007000740075;
    puVar2[0x16] = 0x690046003d0074;
    puVar2[0x17] = 0x61004e0065006c;
    puVar2[0x18] = 0x6900570065006d;
    puVar2[0x19] = 0x75006f00680074;
    *(undefined4 *)(puVar2 + 0x1a) = 0x450074;
    *(undefined4 *)((longlong)puVar2 + 0xd4) = 0x740078;
    *(undefined4 *)(puVar2 + 0x1b) = 0x6e0065;
    *(undefined4 *)((longlong)puVar2 + 0xdc) = 0x690073;
    puVar2[0x1c] = 0x5d006e006f;
  }
  local_28 = 0;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Plan",10);
  iVar4 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + param_1[0xb]);
  local_28 = 0;
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 0x74;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Memcpy
            (local_28,
             L"Specifies the build-plan to target. Should be one of: ABT, Nightly. Default is None, which generates an empty list."
             ,0xe8);
  iVar4 = *(int *)(param_1 + 0xe);
  *(int *)(param_1 + 0xe) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + param_1[0xd]);
  local_28 = 0;
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Format",0xe);
  iVar4 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + param_1[0xb]);
  local_28 = 0;
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 0x169;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Memcpy
            (local_28,
             L"Specifies the format for each list entry of the output. Default is FullName. \"FullName\" - each entry is an automation test name. \"Console\" - each entry is a console command for executing the test. \"Commandline\" - each entry is a commandline command for executing the test (includes switches and excludes the executable name. appropriate for the build machine.)"
             ,0x2d2);
  iVar4 = *(int *)(param_1 + 0xe);
  *(int *)(param_1 + 0xe) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + param_1[0xd]);
  local_28 = 0;
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Output",0xe);
  iVar4 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + param_1[0xb]);
  local_28 = 0;
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 0x91;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Memcpy
            (local_28,
             L"An optional filename (excluding file-extension, .txt is used) to write the resulting list to. If not specified, the list is reported to the log."
             ,0x122);
  iVar4 = *(int *)(param_1 + 0xe);
  *(int *)(param_1 + 0xe) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + param_1[0xd]);
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  return param_1;
}



// FUNCTION 14063f6b0 FUN_14063f6b0 body=295 status=ok
// SIG undefined FUN_14063f6b0(void)

undefined8 * FUN_14063f6b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1417818c0();
  local_10 = 0x11;
  local_18 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144024f70;
  param_1[5] = 0;
  param_1[6] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  uVar2 = local_18;
  FGenericPlatformString::Memcpy(local_18,L"/Game/Automation",0x22);
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 5,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[5]);
  local_18 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
  local_10 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  uVar2 = local_18;
  FGenericPlatformString::Memcpy(local_18,L"/Engine/Automation",0x26);
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 5,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[5]);
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
  return param_1;
}



// FUNCTION 14063f7e0 FUN_14063f7e0 body=188 status=ok
// SIG undefined FUN_14063f7e0(void)

undefined8 * FUN_14063f7e0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1440257b0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  if ((undefined2 *)param_1[9] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 14063f8a0 FUN_14063f8a0 body=33 status=ok
// SIG undefined FUN_14063f8a0(void)

undefined8 * FUN_14063f8a0(undefined8 *param_1)

{
  FUN_14063f7e0();
  *param_1 = &PTR_FUN_144025b28;
  return param_1;
}



// FUNCTION 14063f8d0 FUN_14063f8d0 body=185 status=ok
// SIG undefined FUN_14063f8d0(void)

undefined8 * FUN_14063f8d0(undefined8 *param_1)

{
  FUN_14063f7e0();
  *param_1 = &PTR_FUN_144027218;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  return param_1;
}



// FUNCTION 14063f990 FUN_14063f990 body=95 status=ok
// SIG undefined FUN_14063f990(void)

void FUN_14063f990(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FUN_14217f430(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14063f9f0 ~TArray<FAutomationExecutionEntry,FDefaultAllocator> body=123 status=ok
// SIG undefined ~TArray<FAutomationExecutionEntry,FDefaultAllocator>(void)

void TArray<FAutomationExecutionEntry,FDefaultAllocator>::
     ~TArray<FAutomationExecutionEntry,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14063fa70 ~TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>(void)

void TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>::
     ~TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 14063fb10 FUN_14063fb10 body=123 status=ok
// SIG undefined FUN_14063fb10(void)

void FUN_14063fb10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-3] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14063fb90 FUN_14063fb90 body=159 status=ok
// SIG undefined FUN_14063fb90(void)

void FUN_14063fb90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14063fc30 FUN_14063fc30 body=200 status=ok
// SIG undefined FUN_14063fc30(void)

void FUN_14063fc30(longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_14063ff40((longlong)local_1c * 0x30 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14063fd00 ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=395 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_14063fdc1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14063fdc1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FUN_140640250((longlong)iStack_1c * 0x88 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14063fe90 ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_> body=172 status=ok
// SIG undefined ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>(void)

void std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
     ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
               (longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_14063ff36;
    }
    FMemory::operator_delete(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x18) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_14063ff36:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14063ff40 FUN_14063ff40 body=135 status=ok
// SIG undefined FUN_14063ff40(void)

void FUN_14063ff40(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 3);
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14063ffd0 ~vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_> body=122 status=ok
// SIG undefined ~vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>(void)

void std::vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>::
     ~vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 140640050 ~AcquireInterface body=11 status=ok
// SIG void ~AcquireInterface(AcquireInterface * this)

/* public: virtual __cdecl Scaleform::AcquireInterface::~AcquireInterface(void) __ptr64 */

void __thiscall Scaleform::AcquireInterface::~AcquireInterface(AcquireInterface *this)

{
                    /* 0x640050  23  ??1AcquireInterface@Scaleform@@UEAA@XZ
                       0x640050  28  ??1DefaultAcquireInterface@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_144025e68;
  return;
}



// FUNCTION 140640060 ~FARFilter body=184 status=ok
// SIG undefined ~FARFilter(void)

void FARFilter::~FARFilter(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140640120 FUN_140640120 body=109 status=ok
// SIG undefined FUN_140640120(void)

void FUN_140640120(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  FArchive::~FArchive(param_1);
  return;
}



// FUNCTION 140640190 FUN_140640190 body=183 status=ok
// SIG undefined FUN_140640190(void)

void FUN_140640190(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FAutomationTestExecutionInfo::Clear();
  FUN_14063fb10(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x38);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FAutomationExecutionEntry,FDefaultAllocator>::
  ~TArray<FAutomationExecutionEntry,FDefaultAllocator>(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140640250 FUN_140640250 body=156 status=ok
// SIG undefined FUN_140640250(void)

void FUN_140640250(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1406402f0 FUN_1406402f0 body=285 status=ok
// SIG undefined FUN_1406402f0(void)

void FUN_1406402f0(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_144027520;
  plVar4 = (longlong *)UDynamicEntryBox::GetAllEntries(param_1[4]);
  iVar7 = 0;
  if (0 < (int)plVar4[1]) {
    lVar5 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar7 = iVar7 + 1;
      lVar2 = *(longlong *)(*plVar4 + -8 + lVar5 * 8);
      pbVar1 = (byte *)(lVar2 + 0x204);
      *pbVar1 = *pbVar1 ^ (*(char *)(param_1[0xe] + -1 + lVar5) << 4 ^ *(byte *)(lVar2 + 0x204)) &
                          0x10;
    } while (iVar7 < (int)plVar4[1]);
  }
  if (param_1[0x10] != 0) {
    UTexture::ReleaseResource();
    iVar7 = *(int *)(param_1[0x10] + 0xc);
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar6 = iVar7 >> 0x1f & 0xffff;
      uVar3 = iVar7 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xbfffffff;
    param_1[0x10] = 0;
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  return;
}



// FUNCTION 140640410 ~System body=5 status=ok
// SIG void ~System(System * this)

/* public: __cdecl Scaleform::System::~System(void) __ptr64 */

void __thiscall Scaleform::System::~System(System *this)

{
  char cVar1;
  
                    /* 0x640410  41  ??1System@Scaleform@@QEAA@XZ */
  if (DAT_146b62f10 != (longlong *)0x0) {
    Thread::FinishAllThreads();
    cVar1 = (**(code **)(*DAT_146b62f10 + 0x10))();
    HasMemoryLeaks = cVar1 == '\0';
    DAT_146b62f10 = (longlong *)0x0;
    FUN_143305bd0();
    return;
  }
  return;
}



// FUNCTION 140640420 ~UCommandlet body=186 status=ok
// SIG undefined ~UCommandlet(void)

void UCommandlet::~UCommandlet(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x68);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x60);
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x58);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1406404e0 operator= body=119 status=ok
// SIG undefined operator=(void)

undefined8 * std::_Tgt_state_t<char_const_*>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 local_res8;
  
  *param_1 = *param_2;
  if (param_1 + 1 != param_2 + 1) {
    vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(param_1 + 1,param_2 + 1);
    param_1[4] = param_2[4];
  }
  if (param_1 + 5 != param_2 + 5) {
    vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
    ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
              (param_1 + 5,param_2[5],param_2[6],local_res8);
  }
  return param_1;
}



// FUNCTION 140640560 operator= body=348 status=ok
// SIG undefined operator=(void)

longlong *
std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t sVar7;
  
  if (param_1 != param_2) {
    pvVar3 = (void *)*param_1;
    lVar1 = param_2[1];
    pvVar2 = (void *)*param_2;
    sVar7 = lVar1 - (longlong)pvVar2;
    uVar4 = param_1[1] - (longlong)pvVar3 >> 2;
    uVar6 = param_1[2] - (longlong)pvVar3 >> 2;
    uVar5 = (longlong)sVar7 >> 2;
    if (uVar6 < uVar5) {
      if (0x3fffffffffffffff < uVar5) {
LAB_1406406b7:
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      uVar4 = uVar5;
      if ((uVar6 <= 0x3fffffffffffffff - (uVar6 >> 1)) &&
         (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar5)) {
        uVar4 = uVar5;
      }
      if (pvVar3 != (void *)0x0) {
        allocator<unsigned_int>::deallocate(param_1,pvVar3);
      }
      pvVar3 = (void *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (uVar4 != 0) {
        if (0x3fffffffffffffff < uVar4) goto LAB_1406406b7;
        pvVar3 = (void *)allocator<unsigned_int>::allocate(param_1,uVar4);
        *param_1 = (longlong)pvVar3;
        param_1[1] = (longlong)pvVar3;
        param_1[2] = (longlong)((longlong)pvVar3 + uVar4 * 4);
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,sVar7);
      pvVar3 = (void *)(sVar7 + (longlong)pvVar3);
    }
    else if (uVar4 < uVar5) {
      sVar7 = uVar4 * 4;
      ::_guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,sVar7);
      pvVar2 = (void *)(sVar7 + (longlong)pvVar2);
      pvVar3 = (void *)param_1[1];
      sVar7 = lVar1 - (longlong)pvVar2;
      ::_guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,sVar7);
      pvVar3 = (void *)(sVar7 + (longlong)pvVar3);
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,sVar7);
      pvVar3 = (void *)((longlong)pvVar3 + uVar5 * 4);
    }
    param_1[1] = (longlong)pvVar3;
  }
  return param_1;
}



// FUNCTION 1406406c0 FUN_1406406c0 body=339 status=ok
// SIG undefined FUN_1406406c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1406406c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  void *_Src;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar1 = param_1 + 5;
  param_1[4] = param_2[4];
  uStack_40 = (longlong *)param_2[6];
  local_48 = param_2[5];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar1) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = (longlong *)param_1[6];
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_48._4_4_;
    *(undefined4 *)(param_1 + 6) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_40._4_4_;
    local_48 = uVar5;
    uStack_40 = plVar6;
  }
  plVar6 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  puVar1 = param_1 + 7;
  if (puVar1 != param_2 + 7) {
    iVar4 = *(int *)(param_2 + 8);
    _Src = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar4 << 2);
    }
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 140640820 FUN_140640820 body=550 status=ok
// SIG undefined FUN_140640820(void)

longlong FUN_140640820(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  char local_res10 [8];
  undefined1 local_res18 [8];
  
  if (*param_2 == 0) {
    return param_1;
  }
  local_res10[0] = '\0';
  FUN_14058cbf0(param_1 + 0xa0,local_res18,param_2,local_res10);
  if (local_res10[0] != '\0') {
    return param_1;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar6 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar6 = *(longlong *)(lVar2 + 200);
      if (lVar6 != 0) {
        lVar7 = UBlueprint::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (*(longlong *)(lVar6 + 0x30) != 0) {
            lVar8 = UObject::GetPrivateStaticClass();
            lVar6 = *(longlong *)(lVar6 + 0x30);
            for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
              if (lVar7 == lVar8) goto LAB_140640923;
            }
          }
          lVar6 = 0;
LAB_140640923:
          if (lVar2 == lVar6) {
            lVar6 = lVar2;
            do {
              if (lVar6 == *(longlong *)(param_1 + 0x90)) {
                plVar3 = *(longlong **)(param_1 + 0x98);
                plVar4 = (longlong *)*plVar3;
                iVar1 = (int)plVar3[1];
                plVar9 = plVar4;
                goto joined_r0x000140640966;
              }
              lVar6 = *(longlong *)(lVar6 + 0x30);
            } while (lVar6 != 0);
          }
        }
      }
      goto LAB_1406409ac;
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) && (0 < *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x124))) &&
       (piVar10 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                   (param_1 + 0xf0,local_res10,lVar2), *piVar10 == -1)) {
      return param_1;
    }
  }
LAB_1406409ac:
  (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,param_1);
  return param_1;
joined_r0x000140640966:
  if (plVar9 == plVar4 + iVar1) goto LAB_140640984;
  if (*plVar9 == lVar2) {
    if ((int)((longlong)plVar9 - (longlong)plVar4 >> 3) != -1) goto LAB_1406409ac;
    goto LAB_140640984;
  }
  plVar9 = plVar9 + 1;
  goto joined_r0x000140640966;
LAB_140640984:
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = lVar2;
  goto LAB_1406409ac;
}



// FUNCTION 140640a50 FUN_140640a50 body=50 status=ok
// SIG undefined FUN_140640a50(void)

longlong * FUN_140640a50(longlong *param_1,undefined8 param_2)

{
  longlong local_res8 [4];
  
  local_res8[0] = FUN_141796df0(param_2);
  if (local_res8[0] != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  }
  return param_1;
}



// FUNCTION 140640a90 FUN_140640a90 body=50 status=ok
// SIG undefined FUN_140640a90(void)

longlong * FUN_140640a90(longlong *param_1,undefined8 param_2)

{
  longlong local_res8 [4];
  
  local_res8[0] = FUN_1405ec200(param_2);
  if (local_res8[0] != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  }
  return param_1;
}



// FUNCTION 140640ad0 FUN_140640ad0 body=109 status=ok
// SIG undefined FUN_140640ad0(void)

void FUN_140640ad0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [6];
  
  *(undefined1 *)(*param_1 + 0x27) = 1;
  FRawDistributionFloat::GetOutRange(param_2 + 0x38,local_res10,local_res8);
  if ((local_res10[0] == 0.0) && (local_res8[0] == 0.0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(char *)(*param_1 + 0x2b) != '\0') || (uVar2 = 0, bVar1)) {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_1 + 0x2b) = uVar2;
  fVar3 = *(float *)(*param_1 + 0x1c);
  if (fVar3 <= local_res8[0]) {
    fVar3 = local_res8[0];
  }
  *(float *)(*param_1 + 0x1c) = fVar3;
  return;
}



// FUNCTION 140640b40 FUN_140640b40 body=121 status=ok
// SIG undefined FUN_140640b40(void)

void FUN_140640b40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  
  *(undefined1 *)(*param_1 + 0x25) = 1;
  if ((*(char *)(*param_1 + 0x29) == '\0') && ((*(byte *)(param_2 + 0x108) & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_1 + 0x29) = uVar2;
  if ((*(char *)(*param_1 + 0x2a) == '\0') &&
     (((*(byte *)(param_2 + 0x108) & 1) == 0 || (*(int *)(param_2 + 0x10c) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_1 + 0x2a) = uVar2;
  lVar1 = *param_1;
  iVar3 = *(int *)(param_2 + 0x10c);
  if (*(int *)(param_2 + 0x10c) <= *(int *)(lVar1 + 0x14)) {
    iVar3 = *(int *)(lVar1 + 0x14);
  }
  *(int *)(lVar1 + 0x14) = iVar3;
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x2c) == '\0') && ((*(byte *)(param_2 + 100) & 4) != 0)) {
    *(undefined1 *)(lVar1 + 0x2c) = 0;
    return;
  }
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  return;
}



// FUNCTION 140640bc0 FUN_140640bc0 body=138 status=ok
// SIG undefined FUN_140640bc0(void)

longlong * FUN_140640bc0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = param_2[1] - *param_2 >> 1;
  if (lVar5 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (int)lVar5;
    iVar4 = iVar1 + -1;
    iVar3 = iVar2;
    if (iVar1 == 0) {
      iVar4 = 0;
      iVar3 = iVar2 + 1;
    }
    *(int *)(param_1 + 1) = iVar3 + iVar1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar4 * 2),(void *)*param_2,(longlong)iVar2 * 2);
    *(undefined2 *)(*param_1 + -2 + (longlong)(int)param_1[1] * 2) = 0;
  }
  return param_1;
}



// FUNCTION 140640c50 FUN_140640c50 body=137 status=ok
// SIG undefined FUN_140640c50(void)

undefined8 * FUN_140640c50(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-1] = &PTR_FUN_144025e68;
      puVar1 = puVar1 + -1;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 8 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_FUN_144025e68;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140640ce0 `default_constructor_closure' body=10 status=ok
// SIG void `default_constructor_closure'(Event * this)

/* public: void __cdecl Scaleform::Event::`default constructor closure'(void) __ptr64 */

void __thiscall Scaleform::Event::_default_constructor_closure_(Event *this)

{
                    /* 0x640ce0  49  ??_FEvent@Scaleform@@QEAAXXZ */
  Event(this,false,false);
  return;
}



// FUNCTION 140640cf0 `default_constructor_closure' body=10 status=ok
// SIG void `default_constructor_closure'(Mutex * this)

/* public: void __cdecl Scaleform::Mutex::`default constructor closure'(void) __ptr64 */

void __thiscall Scaleform::Mutex::_default_constructor_closure_(Mutex *this)

{
                    /* 0x640cf0  50  ??_FMutex@Scaleform@@QEAAXXZ */
  Mutex(this,true,false);
  return;
}



// FUNCTION 140640d00 `default_constructor_closure' body=12 status=ok
// SIG void `default_constructor_closure'(Semaphore * this)

/* public: void __cdecl Scaleform::Semaphore::`default constructor closure'(void) __ptr64 */

void __thiscall Scaleform::Semaphore::_default_constructor_closure_(Semaphore *this)

{
                    /* 0x640d00  51  ??_FSemaphore@Scaleform@@QEAAXXZ */
  Semaphore(this,1,false);
  return;
}



// FUNCTION 140640d10 `default_constructor_closure' body=49 status=ok
// SIG void `default_constructor_closure'(SysAllocStatic * this)

/* public: void __cdecl Scaleform::SysAllocStatic::`default constructor closure'(void) __ptr64 */

void __thiscall Scaleform::SysAllocStatic::_default_constructor_closure_(SysAllocStatic *this)

{
                    /* 0x640d10  52  ??_FSysAllocStatic@Scaleform@@QEAAXXZ */
  SysAllocStatic(this,(void *)0x0,0,(void *)0x0,0,(void *)0x0,0,(void *)0x0,0);
  return;
}



// FUNCTION 140640d50 `default_constructor_closure' body=199 status=ok
// SIG void `default_constructor_closure'(System * this)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl Scaleform::System::`default constructor closure'(void) __ptr64 */

void __thiscall Scaleform::System::_default_constructor_closure_(System *this)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* 0x640d50  53  ??_FSystem@Scaleform@@QEAAXXZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146856810) {
    _Init_thread_header(&DAT_146856810);
    if (DAT_146856810 == -1) {
      DAT_146856808 = 0;
      _Init_thread_footer(&DAT_146856810);
    }
  }
  DAT_146856808 = 1;
  _DAT_1468567f8 = &PTR_FUN_144025e38;
  _DAT_146856800 = &DAT_1468567f8;
  local_48[0] = 0;
  local_20 = 0;
  local_10 = 0;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_18 = 1;
  Init((HeapDesc *)local_48,(SysAllocBase *)&DAT_1468567f8);
  return;
}



// FUNCTION 140640e20 `default_constructor_closure' body=16 status=ok
// SIG void `default_constructor_closure'(Thread * this)

/* public: void __cdecl Scaleform::Thread::`default constructor closure'(void) __ptr64 */

void __thiscall Scaleform::Thread::_default_constructor_closure_(Thread *this)

{
                    /* 0x640e20  54  ??_FThread@Scaleform@@QEAAXXZ */
  Thread(this,0x20000,-1);
  return;
}



// FUNCTION 140640e30 `scalar_deleting_destructor' body=264 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
std::_Node_class<char,std::regex_traits<char>_>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1440279c0;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    free(*(void **)(lVar2 + 0x10));
    FMemory::operator_delete(lVar2,0x20);
    lVar2 = lVar1;
  }
  FMemory::operator_delete(param_1[5],0x20);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    free(*(void **)(lVar2 + 8));
    FMemory::operator_delete(lVar2,0x10);
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    free(*(void **)(lVar2 + 8));
    FMemory::operator_delete(lVar2,0x10);
  }
  lVar2 = param_1[9];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    free(*(void **)(lVar2 + 0x10));
    FMemory::operator_delete(lVar2,0x20);
    lVar2 = lVar1;
  }
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140640f40 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
std::_Node_str<char>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  free((void *)param_1[5]);
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140640f90 FUN_140640f90 body=52 status=ok
// SIG undefined FUN_140640f90(void)

undefined8 FUN_140640f90(undefined8 param_1,ulonglong param_2)

{
  FUN_140640120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140640fd0 FUN_140640fd0 body=145 status=ok
// SIG undefined FUN_140640fd0(void)

undefined8 * FUN_140640fd0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1440277b8;
  param_1[4] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 5) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = &PTR_FUN_144025478;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140641070 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
ConstructorHelpers::FObjectFinderOptional<UFont>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1406410d0 FUN_1406410d0 body=120 status=ok
// SIG undefined FUN_1406410d0(void)

undefined8 * FUN_1406410d0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_144025488;
  uVar1 = FUN_141649d10();
  FAutomationTestFramework::UnregisterAutomationTest(uVar1,param_1 + 2);
  TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>::
  ~TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>(param_1 + 0x12);
  FUN_140640190(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140641150 FUN_140641150 body=122 status=ok
// SIG undefined FUN_140641150(void)

undefined8 * FUN_140641150(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144027768;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144025478;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1406411d0 FUN_1406411d0 body=98 status=ok
// SIG undefined FUN_1406411d0(void)

undefined8 * FUN_1406411d0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144025478;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140641240 FUN_140641240 body=98 status=ok
// SIG undefined FUN_140641240(void)

undefined8 * FUN_140641240(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144025478;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1406412b0 FUN_1406412b0 body=98 status=ok
// SIG undefined FUN_1406412b0(void)

undefined8 * FUN_1406412b0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144025478;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140641320 FUN_140641320 body=52 status=ok
// SIG undefined FUN_140641320(void)

undefined8 FUN_140641320(undefined8 param_1,ulonglong param_2)

{
  FUN_1406402f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140641360 FUN_140641360 body=134 status=ok
// SIG undefined FUN_140641360(void)

undefined8 * FUN_140641360(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[7];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1406413f0 FUN_1406413f0 body=66 status=ok
// SIG undefined FUN_1406413f0(void)

undefined8 * FUN_1406413f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14063fb90(param_1 + 5);
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140641440 FUN_140641440 body=95 status=ok
// SIG undefined FUN_140641440(void)

undefined8 * FUN_140641440(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144027680;
  FUN_14063f990(param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1406414a0 FUN_1406414a0 body=221 status=ok
// SIG undefined FUN_1406414a0(void)

undefined8 * FUN_1406414a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_144025a80;
  FUN_14065e450();
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x1d];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_FUN_144025488;
  uVar6 = FUN_141649d10();
  FAutomationTestFramework::UnregisterAutomationTest(uVar6,param_1 + 2);
  TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>::
  ~TArray<UIpNetDriver::FReceivedPacket,TSizedDefaultAllocator<32>_>(param_1 + 0x12);
  FUN_140640190(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 140641580 FUN_140641580 body=43 status=ok
// SIG undefined FUN_140641580(void)

undefined8 * FUN_140641580(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1406415b0 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNarrativeDataTable::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140641640 FUN_140641640 body=98 status=ok
// SIG undefined FUN_140641640(void)

undefined8 * FUN_140641640(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144025478;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1406416b0 FUN_1406416b0 body=95 status=ok
// SIG undefined FUN_1406416b0(void)

undefined8 * FUN_1406416b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144027680;
  FUN_14063f990(param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140641710 FUN_140641710 body=43 status=ok
// SIG undefined FUN_140641710(void)

undefined8 * FUN_140641710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140641740 FUN_140641740 body=43 status=ok
// SIG undefined FUN_140641740(void)

undefined8 * FUN_140641740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144025e20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140641770 FUN_140641770 body=43 status=ok
// SIG undefined FUN_140641770(void)

undefined8 * FUN_140641770(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144025e20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1406417a0 FUN_1406417a0 body=52 status=ok
// SIG undefined FUN_1406417a0(void)

undefined8 FUN_1406417a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1406417e0 FUN_1406417e0 body=52 status=ok
// SIG undefined FUN_1406417e0(void)

undefined8 FUN_1406417e0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140641820 FUN_140641820 body=52 status=ok
// SIG undefined FUN_140641820(void)

undefined8 FUN_140641820(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 140641860 FUN_140641860 body=52 status=ok
// SIG undefined FUN_140641860(void)

undefined8 FUN_140641860(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1406418a0 FUN_1406418a0 body=52 status=ok
// SIG undefined FUN_1406418a0(void)

undefined8 FUN_1406418a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1406418e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCommandlet::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~UCommandlet();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140641920 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBoneMaskFilter::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1406419a0 FUN_1406419a0 body=122 status=ok
// SIG undefined FUN_1406419a0(void)

longlong FUN_1406419a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x88);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140641a20 FUN_140641a20 body=194 status=ok
// SIG undefined FUN_140641a20(void)

longlong FUN_140641a20(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x128);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x110);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 200);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x88);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140641af0 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * std::_Node_assert::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = &PTR__scalar_deleting_destructor__144027668;
  if (puVar1 != (undefined8 *)0x0) {
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar1[2];
      puVar1[2] = 0;
      (**(code **)*puVar1)(puVar1,1);
      puVar1 = puVar2;
    }
  }
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140641b80 FUN_140641b80 body=43 status=ok
// SIG undefined FUN_140641b80(void)

undefined8 * FUN_140641b80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140641bb0 FUN_140641bb0 body=43 status=ok
// SIG undefined FUN_140641bb0(void)

undefined8 * FUN_140641bb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140641be0 `scalar_deleting_destructor' body=188 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * std::_Node_if::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144027670;
  puVar3 = (undefined8 *)param_1[5];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[5];
    puVar3[5] = 0;
    puVar2 = (undefined8 *)param_1[4];
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (undefined8 *)0x0))) {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1);
      puVar4 = puVar3;
    }
  }
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140641ca0 FUN_140641ca0 body=43 status=ok
// SIG undefined FUN_140641ca0(void)

undefined8 * FUN_140641ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140641cd0 FUN_140641cd0 body=43 status=ok
// SIG undefined FUN_140641cd0(void)

undefined8 * FUN_140641cd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144027650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140641d00 FUN_140641d00 body=33 status=ok
// SIG undefined FUN_140641d00(void)

void FUN_140641d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [40];
  
  uVar1 = FUN_14065e080(local_28,param_2,param_3,param_1);
  FUN_1406587a0(param_1,uVar1);
  return;
}



// FUNCTION 140641d30 FUN_140641d30 body=93 status=ok
// SIG undefined FUN_140641d30(void)

void FUN_140641d30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar2 = FUN_1428dfc70();
    local_res8 = *(longlong *)(param_1 + 0x20);
    for (lVar1 = local_res8; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_140641d69;
    }
  }
  local_res8 = 0;
LAB_140641d69:
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
  return;
}



// FUNCTION 140641d90 FUN_140641d90 body=156 status=ok
// SIG undefined FUN_140641d90(void)

void FUN_140641d90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res10;
  
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x13c);
  iVar5 = *(int *)(param_1 + 0x130) + -1;
  lVar8 = (longlong)iVar5;
  local_res10 = param_2;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x128);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140641df2:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_res10);
        if (cVar4 == '\0') goto LAB_140641df2;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x13c);
  }
  *(int *)(param_1 + 0x13c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x128),0);
  }
  return;
}



// FUNCTION 140641e40 FUN_140641e40 body=117 status=ok
// SIG undefined FUN_140641e40(void)

void FUN_140641e40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  
  puVar3 = (undefined8 *)FName::FName(local_res18,L"AssetRegistry",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar1);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
  cVar2 = (**(code **)(*plVar5 + 0x188))(plVar5);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
  }
  return;
}



// FUNCTION 140641ed0 FUN_140641ed0 body=166 status=ok
// SIG undefined FUN_140641ed0(void)

void FUN_140641ed0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 local_res20 [8];
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  cVar2 = FUN_140655ea0();
  if (cVar2 != '\0') {
    uVar3 = FUN_1417006f0(local_18,param_3);
    FPackageName::GetLongPackageAssetName(&local_28,uVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    lVar1 = *param_1;
    puVar5 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar5 = local_28;
    }
    puVar4 = (undefined8 *)FName::FName(local_res20,puVar5,1);
    (**(code **)(lVar1 + 0xb8))(param_1,*puVar4);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140641f80 FUN_140641f80 body=179 status=ok
// SIG undefined FUN_140641f80(void)

void FUN_140641f80(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  
  switch(param_3) {
  case 0:
    uVar4 = 0x100;
    break;
  case 1:
    uVar4 = 0x200;
    break;
  case 2:
    uVar4 = 0x400;
    break;
  case 3:
    uVar4 = 0x800;
    break;
  default:
    uVar4 = 1;
    break;
  case 5:
    uVar4 = 2;
    break;
  case 6:
    uVar4 = 4;
    break;
  case 7:
    uVar4 = 8;
    break;
  case 8:
    uVar4 = 0x10;
    break;
  case 9:
    uVar4 = 0x20;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 1;
  } while (puVar3[lVar1] != 0);
  std::basic_regex<char,std::regex_traits<char>_>::_Reset<char_const_*>
            (param_1,puVar3,puVar3 + lVar2,uVar4);
  return;
}



// FUNCTION 140642060 FUN_140642060 body=73 status=ok
// SIG undefined FUN_140642060(void)

void FUN_140642060(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 1;
  } while (puVar3[lVar1] != 0);
  std::basic_regex<char,std::regex_traits<char>_>::_Reset<char_const_*>
            (param_1,puVar3,puVar3 + lVar2,1);
  return;
}



// FUNCTION 1406420b0 FUN_1406420b0 body=145 status=ok
// SIG undefined FUN_1406420b0(void)

void FUN_1406420b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x28);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
      lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
      if (lVar3 != 0) {
        FUN_142f001d0(lVar3);
        return;
      }
    }
  }
  local_28 = DAT_1469e9958;
  local_20 = DAT_1469e9960;
  local_18 = DAT_1469e9968;
  if (DAT_1469e9968 != 0) {
    LOCK();
    *(int *)(DAT_1469e9968 + 8) = *(int *)(DAT_1469e9968 + 8) + 1;
    UNLOCK();
  }
  FUN_1406587a0(param_1,&local_28);
  return;
}



// FUNCTION 140642150 FUN_140642150 body=78 status=ok
// SIG undefined FUN_140642150(void)

void FUN_140642150(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_18;
  longlong local_10;
  
  cVar1 = FUN_140655950();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14064ef40();
    local_18 = *(undefined8 *)(param_1 + 0x28);
    local_10 = *(longlong *)(param_1 + 0x30);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_18);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1406421a0 FUN_1406421a0 body=282 status=ok
// SIG undefined FUN_1406421a0(void)

void FUN_1406421a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140642256:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))
                          (plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
        if (cVar3 == '\0') goto LAB_140642256;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
  }
  return;
}



// FUNCTION 1406422c0 FUN_1406422c0 body=219 status=ok
// SIG undefined FUN_1406422c0(void)

void FUN_1406422c0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140642349:
        bVar2 = true;
      }
      else {
        local_28 = *param_3;
        local_20 = param_3[1];
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,&local_28,param_4);
        if (cVar3 == '\0') goto LAB_140642349;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1406423a0 FUN_1406423a0 body=99 status=ok
// SIG undefined FUN_1406423a0(void)

void FUN_1406423a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_38 [8];
  longlong local_30 [2];
  longlong local_20 [3];
  
  local_38[0] = 3;
  FString::FString(local_30);
  FString::FString(local_20,param_3);
  (**(code **)(*param_1 + 8))(param_1,local_38);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140642410 FUN_140642410 body=693 status=ok
// SIG undefined FUN_140642410(void)

void FUN_140642410(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar9 = *(int *)(param_2 + 1);
  if (*(int *)(param_1 + 0x34) < iVar9) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar1,iVar9);
    iVar9 = *(int *)(param_2 + 1);
  }
  puVar12 = (undefined1 *)*param_2;
  puVar13 = puVar12 + (longlong)iVar9 * 0x30;
  if (puVar12 != puVar13) {
    puVar11 = (undefined8 *)(puVar12 + 0x10);
    do {
      fVar14 = *(float *)((longlong)puVar11 + 0x14);
      if (0.0 <= fVar14) {
        lVar6 = puVar11[1];
        uVar5 = *puVar12;
        uVar7 = puVar11[-1];
        uVar8 = *puVar11;
        fVar16 = *(float *)(param_1 + 0x40);
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
          fVar14 = *(float *)((longlong)puVar11 + 0x14);
        }
        fVar2 = *(float *)(puVar11 + 2);
        uVar3 = *(undefined4 *)(puVar11 + 3);
        fVar15 = ABS(fVar16) + fVar2;
        uVar4 = *(undefined4 *)((longlong)puVar11 + 0x1c);
        fVar16 = fVar15 + fVar14;
        if (ABS((fVar15 + fVar14) - fVar15) < 0.0001) {
          fVar16 = fVar15;
        }
        iVar9 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar9 + 1;
        if (*(int *)(param_1 + 0x34) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar9);
        }
        puVar10 = (undefined1 *)((longlong)iVar9 * 0x40 + *plVar1);
        *puVar10 = uVar5;
        *(undefined8 *)(puVar10 + 8) = uVar7;
        *(undefined8 *)(puVar10 + 0x10) = uVar8;
        *(longlong *)(puVar10 + 0x18) = lVar6;
        *(float *)(puVar10 + 0x20) = fVar2;
        *(float *)(puVar10 + 0x24) = fVar14;
        *(undefined4 *)(puVar10 + 0x28) = uVar3;
        *(undefined4 *)(puVar10 + 0x2c) = uVar4;
        *(float *)(puVar10 + 0x30) = fVar15;
        *(float *)(puVar10 + 0x34) = fVar16;
        puVar10[0x38] = 0;
      }
      puVar12 = puVar12 + 0x30;
      puVar11 = puVar11 + 6;
    } while (puVar12 != puVar13);
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x30)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar1);
  }
  return;
}



// FUNCTION 140642740 FUN_140642740 body=60 status=ok
// SIG undefined FUN_140642740(void)

void FUN_140642740(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0xa0),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0xa0);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 140642780 FUN_140642780 body=1258 status=ok
// SIG undefined FUN_140642780(void)

void FUN_140642780(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar5 = 0;
  local_98 = 0;
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar1 = lVar1 + 0x400;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    local_98 = *(undefined4 *)(param_7 + 4);
    local_70 = *(undefined8 *)(param_7 + 0x10);
    local_90 = lVar1;
    lVar2 = FLatentActionManager::FindExistingAction<FDelayAction>(lVar1,local_70,local_98);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      FUN_14064c620(lVar2 + 0x30,(int)param_6[1] + 4);
      local_a8 = 0;
      if (*param_4 != 0) {
        uVar3 = FName::ToString(param_4,local_68);
        iVar6 = *(int *)(lVar2 + 0x38);
        *(int *)(lVar2 + 0x38) = iVar6 + 1;
        if (*(int *)(lVar2 + 0x3c) < iVar6 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar2 + 0x30,iVar6);
        }
        puVar7 = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)(lVar2 + 0x30));
        *puVar7 = 0;
        puVar7[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7,0);
        FGenericPlatformString::Memcpy(*puVar7,L"pclass",0xe);
        FUN_14217e740(puVar7 + 2);
        FUN_140643170(puVar7 + 2,uVar3);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        local_a8 = 0;
        bVar11 = param_4[1] == 0;
        if (bVar11) {
          local_80 = 0;
          plVar4 = &local_80;
          local_78 = 0;
        }
        else {
          plVar4 = (longlong *)FName::ToString(param_4 + 1,local_58);
        }
        iVar6 = *(int *)(lVar2 + 0x38);
        *(int *)(lVar2 + 0x38) = iVar6 + 1;
        if (*(int *)(lVar2 + 0x3c) < iVar6 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar2 + 0x30,iVar6);
        }
        puVar7 = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)(lVar2 + 0x30));
        *puVar7 = 0;
        puVar7[1] = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7,0);
        FGenericPlatformString::Memcpy(*puVar7,L"ptype",0xc);
        FUN_14217e740(puVar7 + 2);
        FUN_140643170(puVar7 + 2,plVar4);
        if ((bVar11) && (local_80 != 0)) {
          FMemory::Free();
        }
        if ((!bVar11) && (local_58[0] != 0)) {
          FMemory::Free();
        }
        local_a8 = 0;
        bVar11 = param_4[2] == 0;
        if (bVar11) {
          local_a8 = 0;
          plVar4 = &local_a8;
          local_a0 = 0;
        }
        else {
          plVar4 = (longlong *)FName::ToString(param_4 + 2,local_48);
        }
        iVar6 = *(int *)(lVar2 + 0x38);
        *(int *)(lVar2 + 0x38) = iVar6 + 1;
        if (*(int *)(lVar2 + 0x3c) < iVar6 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar2 + 0x30,iVar6);
        }
        puVar7 = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)(lVar2 + 0x30));
        *puVar7 = 0;
        puVar7[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7,0);
        FGenericPlatformString::Memcpy(*puVar7,L"psubtype",0x12);
        FUN_14217e740(puVar7 + 2);
        FUN_140643170(puVar7 + 2,plVar4);
        if ((bVar11) && (local_a8 != 0)) {
          FMemory::Free();
        }
        lVar1 = local_90;
        if ((!bVar11) && (local_48[0] != 0)) {
          FMemory::Free();
          lVar1 = local_90;
        }
      }
      iVar6 = (int)param_5[1] + -1;
      if ((int)param_5[1] == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        iVar6 = *(int *)(lVar2 + 0x38);
        *(int *)(lVar2 + 0x38) = iVar6 + 1;
        if (*(int *)(lVar2 + 0x3c) < iVar6 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar2 + 0x30,iVar6);
        }
        puVar7 = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)(lVar2 + 0x30));
        *puVar7 = 0;
        puVar7[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7,0);
        FGenericPlatformString::Memcpy(*puVar7,L"test",10);
        FUN_14217e740(puVar7 + 2);
        FUN_140643170(puVar7 + 2,param_5);
      }
      lVar9 = *param_6;
      lVar10 = (longlong)(int)param_6[1] * 0x20 + lVar9;
      for (; lVar9 != lVar10; lVar9 = lVar9 + 0x20) {
        iVar6 = *(int *)(lVar2 + 0x38);
        *(int *)(lVar2 + 0x38) = iVar6 + 1;
        if (*(int *)(lVar2 + 0x3c) < iVar6 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar2 + 0x30,iVar6);
        }
        lVar8 = (longlong)iVar6 * 0x30 + *(longlong *)(lVar2 + 0x30);
        FString::FString(lVar8,lVar9);
        FUN_14217e740(lVar8 + 0x10);
        FUN_140643170(lVar8 + 0x10,lVar9 + 0x10);
      }
      lVar2 = operator_new(0x30);
      if (lVar2 != 0) {
        local_90 = *(longlong *)(param_1 + 0x28);
        local_88 = *(longlong *)(param_1 + 0x30);
        if (local_88 != 0) {
          LOCK();
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
          UNLOCK();
        }
        uVar5 = FUN_14063ec40(lVar2,&local_90,param_3,param_7);
      }
      FUN_142514cf0(lVar1,local_70,local_98,uVar5);
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140642c70 FUN_140642c70 body=246 status=ok
// SIG undefined FUN_140642c70(void)

void FUN_140642c70(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  longlong local_10;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar1 = lVar1 + 0x400;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    lVar2 = FLatentActionManager::FindExistingAction<FDelayAction>
                      (lVar1,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4));
    if (lVar2 == 0) {
      FUN_14064c620(*(longlong *)(param_1 + 0x28) + 0x30,0);
      lVar2 = operator_new(0x30);
      uVar3 = 0;
      if (lVar2 != 0) {
        local_18 = *(undefined8 *)(param_1 + 0x28);
        local_10 = *(longlong *)(param_1 + 0x30);
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        uVar3 = FUN_14063ec40(lVar2,&local_18,param_3,param_4);
      }
      FUN_142514cf0(lVar1,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),uVar3);
    }
  }
  if (*param_3 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140642d70 FUN_140642d70 body=177 status=ok
// SIG undefined FUN_140642d70(void)

bool FUN_140642d70(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  longlong local_res8;
  longlong local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  switch(param_3) {
  case 0:
    return param_1 == param_2;
  case 1:
    return param_1 != param_2;
  case 2:
    iVar1 = FName::Compare(&local_res8,local_res10);
    return 0 < iVar1;
  case 3:
    iVar1 = FName::Compare(&local_res8,local_res10);
    return -1 < iVar1;
  case 4:
    iVar1 = FName::Compare(&local_res8,local_res10);
    return iVar1 < 0;
  case 5:
    iVar1 = FName::Compare(&local_res8,local_res10);
    return iVar1 < 1;
  default:
    return false;
  }
}



// FUNCTION 140642e40 FUN_140642e40 body=33 status=ok
// SIG undefined FUN_140642e40(void)

ulonglong FUN_140642e40(byte param_1,byte param_2,char param_3)

{
  ulonglong in_RAX;
  
  if (param_3 == '\0') {
    return (ulonglong)(byte)(param_1 ^ param_2 ^ 1);
  }
  if (param_3 != '\x01') {
    return in_RAX & 0xffffffffffffff00;
  }
  return (ulonglong)(param_1 ^ param_2);
}



// FUNCTION 140642e70 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140642f20 FUN_140642f20 body=320 status=ok
// SIG undefined FUN_140642f20(void)

bool FUN_140642f20(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar5 = 0;
  }
  iVar3 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar3 = 0;
  }
  if ((iVar5 < 1) && (iVar3 < 1)) {
    lVar2 = param_1[1];
    if (*param_2 != 0) {
      FMemory::Free();
    }
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return 0 < (int)lVar2;
  }
  lVar2 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while( true ) {
    if (lVar2 == lVar4) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      if (*param_3 != 0) {
        FMemory::Free();
      }
      return false;
    }
    if (((0 < iVar5) && (cVar1 = FUN_1406559e0(lVar2,param_2,param_4,param_5), cVar1 != '\0')) ||
       ((0 < iVar3 && (cVar1 = FUN_1406559e0(lVar2 + 8,param_3,param_6,param_7), cVar1 != '\0'))))
    break;
    lVar2 = lVar2 + 0x10;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return true;
}



// FUNCTION 140643060 FUN_140643060 body=264 status=ok
// SIG undefined FUN_140643060(void)

ulonglong FUN_140643060(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  short *psVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  psVar5 = (short *)(ulonglong)uVar1;
  iVar8 = uVar1 - 1;
  if (uVar1 == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    iVar8 = *(int *)(param_2 + 1);
    psVar5 = (short *)(ulonglong)(iVar8 - 1);
    if (iVar8 == 0) {
      psVar5 = (short *)0x0;
    }
    if (0 < (int)psVar5) {
      uVar9 = 0xffffffff;
      do {
        if (iVar8 == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*param_2;
        }
        uVar4 = FUN_141592950(param_1,puVar7,1,0,(int)uVar9 + 1);
        iVar8 = *(int *)(param_2 + 1);
        iVar3 = (int)uVar4;
        uVar9 = uVar4 & 0xffffffff;
        iVar10 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar10 = 0;
        }
        if (iVar3 < 0) {
LAB_1406430f8:
          bVar2 = false;
        }
        else {
          iVar6 = *(int *)(param_1 + 1) + -1;
          if (*(int *)(param_1 + 1) == 0) {
            iVar6 = 0;
          }
          if (iVar6 <= iVar3) goto LAB_1406430f8;
          bVar2 = true;
        }
        if (iVar10 < 1) {
LAB_140643116:
          psVar5 = (short *)(uVar4 & 0xffffffffffffff00);
        }
        else {
          uVar1 = *(uint *)(param_1 + 1);
          uVar4 = (ulonglong)uVar1;
          iVar6 = uVar1 - 1;
          if (uVar1 == 0) {
            iVar6 = 0;
          }
          if (iVar6 - iVar10 <= iVar3) goto LAB_140643116;
          psVar5 = (short *)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
        if ((((bVar2) && ((char)psVar5 != '\0')) && (psVar5 = (short *)*param_2, *psVar5 == 0x2f))
           && (psVar5 = (short *)*param_1, psVar5[iVar10 + iVar3] == 0x2f)) {
          return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
        }
      } while (iVar3 != -1);
    }
  }
  return (ulonglong)psVar5 & 0xffffffffffffff00;
}



// FUNCTION 140643170 FUN_140643170 body=174 status=ok
// SIG undefined FUN_140643170(void)

void FUN_140643170(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142194380(param_1,0x18,1,0,0);
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a100;
  local_18 = 0;
  local_20 = param_1;
  FArchive::SetIsSaving(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_14158ce90(local_b8,param_2);
  FArchive::~FArchive(local_b8);
  return;
}



// FUNCTION 140643220 FUN_140643220 body=116 status=ok
// SIG undefined FUN_140643220(void)

longlong * FUN_140643220(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  lVar1 = GetTransientPackage();
  if (param_2 != 0) {
    if ((lVar1 + 1U & 0xfffffffffffffffe) == 0) {
      lVar1 = GetTransientPackage();
    }
    plVar2 = (longlong *)FUN_1417987a0(param_2,lVar1,0,0xefffffff,0,0,0xff800000);
  }
  (**(code **)(*plVar2 + 0x2c8))(plVar2);
  return plVar2;
}



// FUNCTION 1406432a0 FUN_1406432a0 body=15 status=ok
// SIG undefined FUN_1406432a0(void)

void FUN_1406432a0(longlong param_1,longlong param_2,longlong param_3)

{
  *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_2;
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + param_3;
  return;
}



// FUNCTION 1406432b0 FUN_1406432b0 body=174 status=ok
// SIG undefined FUN_1406432b0(void)

longlong FUN_1406432b0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    uVar1 = GetTransientPackage();
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = UVaRestJsonValue::GetPrivateStaticClass();
    lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x30) = param_2;
      FWeakObjectPtr::operator=(lVar3 + 0x28,param_1);
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 140643360 CreateCopy body=56 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TSharedPtr<SWidget,0>___cdecl(enum_EUINavigation),<lambda_e74b6f1c127731dbdfcc7f9e5352a964>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144027818;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1406433a0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440278e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144027930;
  }
  return;
}



// FUNCTION 1406433f0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144027858;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1440278a0;
  }
  return;
}



// FUNCTION 140643440 FUN_140643440 body=573 status=ok
// SIG undefined FUN_140643440(void)

void FUN_140643440(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  void *local_50;
  undefined8 local_48;
  
  puVar8 = (undefined8 *)*param_1;
  puVar4 = puVar8 + (longlong)(int)param_1[1] * 2;
  for (; puVar8 != puVar4; puVar8 = puVar8 + 2) {
    pvVar6 = (void *)0x0;
    pvVar2 = (void *)*puVar8;
    iVar3 = 0;
    lVar7 = puVar8[1] - (longlong)pvVar2 >> 1;
    local_50 = (void *)0x0;
    local_48 = 0;
    iVar9 = iVar3;
    if (lVar7 != 0) {
      iVar3 = (int)lVar7 + 1;
      pvVar10 = pvVar6;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50,iVar3);
        pvVar10 = (void *)(local_48 >> 0x20);
        pvVar6 = (void *)(local_48 & 0xffffffff);
      }
      iVar3 = (int)pvVar6 + iVar3;
      local_48 = CONCAT44(local_48._4_4_,iVar3);
      iVar9 = (int)pvVar10;
      if ((int)pvVar10 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,pvVar6);
        iVar3 = (int)local_48;
        iVar9 = local_48._4_4_;
      }
      pvVar6 = local_50;
      _guard_xfg_dispatch_icall_nop(local_50,pvVar2,lVar7 * 2);
      *(undefined2 *)((longlong)pvVar6 + (longlong)(iVar3 + -1) * 2) = 0;
    }
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar5 = (ulonglong *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar5 = (ulonglong)pvVar6;
    *(int *)(puVar5 + 1) = iVar3;
    *(int *)((longlong)puVar5 + 0xc) = iVar9;
  }
  puVar8 = (undefined8 *)*param_2;
  puVar4 = puVar8 + (longlong)(int)param_2[1] * 2;
  for (; puVar8 != puVar4; puVar8 = puVar8 + 2) {
    pvVar6 = (void *)0x0;
    pvVar2 = (void *)*puVar8;
    iVar3 = 0;
    lVar7 = puVar8[1] - (longlong)pvVar2 >> 1;
    local_50 = (void *)0x0;
    local_48 = 0;
    iVar9 = iVar3;
    if (lVar7 != 0) {
      iVar3 = (int)lVar7 + 1;
      pvVar10 = pvVar6;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50,iVar3);
        pvVar10 = (void *)(local_48 >> 0x20);
        pvVar6 = (void *)(local_48 & 0xffffffff);
      }
      iVar3 = (int)pvVar6 + iVar3;
      local_48 = CONCAT44(local_48._4_4_,iVar3);
      iVar9 = (int)pvVar10;
      if ((int)pvVar10 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,pvVar6);
        iVar3 = (int)local_48;
        iVar9 = local_48._4_4_;
      }
      pvVar6 = local_50;
      _guard_xfg_dispatch_icall_nop(local_50,pvVar2,lVar7 * 2);
      *(undefined2 *)((longlong)pvVar6 + (longlong)(iVar3 + -1) * 2) = 0;
    }
    iVar1 = (int)param_4[1];
    *(int *)(param_4 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar1);
    }
    puVar5 = (ulonglong *)((longlong)iVar1 * 0x10 + *param_4);
    *puVar5 = (ulonglong)pvVar6;
    *(int *)(puVar5 + 1) = iVar3;
    *(int *)((longlong)puVar5 + 0xc) = iVar9;
  }
  return;
}



// FUNCTION 140643680 FUN_140643680 body=424 status=ok
// SIG undefined FUN_140643680(void)

/* WARNING: Removing unreachable block (ram,0x0001406437d5) */

void FUN_140643680(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  lVar5 = *param_1;
  local_58 = (undefined2 *)0x0;
  lVar8 = (longlong)(int)param_1[1] * 0x58 + lVar5;
  local_50 = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  uVar2 = local_48;
  uVar3 = local_40;
  if (lVar5 != lVar8) {
    do {
      local_40 = uVar3;
      local_48 = uVar2;
      FName::ToString(lVar5,&local_58);
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar7 = local_58;
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar4 = 0;
      lVar9 = (longlong)(int)local_50;
      *(int *)(puVar4 + 1) = (int)local_50;
      if ((int)local_50 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,local_50 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,puVar7,lVar9 * 2);
      }
      FName::ToString(lVar5 + 0x10,&local_58);
      FName::ToString(lVar5 + 0x18,&local_38);
      puVar7 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar7 = local_38;
      }
      puVar6 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar6 = local_58;
      }
      FString::PrintfImpl(&local_48,L"%s.%s",puVar6,puVar7);
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      *puVar4 = 0;
      *puVar4 = local_48;
      local_48 = 0;
      uVar2 = local_48;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_40._4_4_;
      local_40 = 0;
      uVar3 = local_40;
      local_40 = 0;
      local_48 = 0;
      lVar5 = lVar5 + 0x58;
    } while (lVar5 != lVar8);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140643830 FUN_140643830 body=818 status=ok
// SIG undefined FUN_140643830(void)

/* WARNING: Removing unreachable block (ram,0x000140643b18) */

void FUN_140643830(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  wchar_t *local_res8;
  wchar_t *local_res20;
  wchar_t *local_80;
  ulonglong local_78;
  wchar_t *local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar18 = (undefined8 *)*param_1;
  pwVar11 = (wchar_t *)0x0;
  puVar2 = puVar18 + (longlong)*(int *)(param_1 + 1) * 2;
  local_res8 = (wchar_t *)0x0;
  local_res20 = (wchar_t *)0x0;
  pwVar16 = pwVar11;
  if (puVar18 != puVar2) {
    do {
      psVar1 = (short *)*puVar18;
      psVar9 = psVar1 + *(int *)(puVar18 + 1);
      psVar7 = psVar9;
      do {
        if (psVar7 == psVar1) goto LAB_140643b21;
        psVar7 = psVar7 + -1;
      } while (*psVar7 != 0x2f);
      iVar6 = (int)((longlong)psVar7 - (longlong)psVar1 >> 1);
      if (iVar6 != -1) {
        do {
          if (psVar9 == psVar1) goto LAB_140643b21;
          psVar9 = psVar9 + -1;
        } while (*psVar9 != 0x2e);
        uVar8 = (uint)((longlong)psVar9 - (longlong)psVar1 >> 1);
        if ((uVar8 != 0xffffffff) && (iVar6 < (int)uVar8)) {
          iVar14 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar14 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar14 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar14);
          }
          FString::FString((longlong)iVar14 * 0x10 + *param_3);
          iVar14 = 0;
          if (*(int *)(puVar18 + 1) == 0) {
            pwVar16 = L"";
            iVar10 = iVar14;
          }
          else {
            pwVar16 = (wchar_t *)*puVar18;
            iVar10 = *(int *)(puVar18 + 1) + -1;
          }
          if ((-1 < iVar6) && (iVar14 = iVar10, iVar6 < iVar10)) {
            iVar14 = iVar6;
          }
          local_80 = (wchar_t *)0x0;
          uVar15 = iVar14 + 1;
          if (iVar14 == 0) {
            uVar15 = 0;
          }
          local_78 = (ulonglong)uVar15;
          pwVar11 = (wchar_t *)0x0;
          if (0 < (int)uVar15) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
            pwVar11 = local_80;
            uVar15 = (uint)local_78;
            if (0 < (int)(uint)local_78) {
              wcsncpy(local_80,pwVar16,(longlong)iVar14);
              pwVar11[iVar14] = L'\0';
            }
          }
          if (local_res8 != (wchar_t *)0x0) {
            FMemory::Free(local_res8);
          }
          iVar14 = *(int *)(puVar18 + 1);
          local_80 = (wchar_t *)0x0;
          local_78 = 0;
          uVar19 = iVar14 - 1;
          if (iVar14 == 0) {
            uVar19 = 0;
          }
          uVar4 = iVar14 - 1;
          if (iVar6 + 1U < uVar19) {
            uVar19 = iVar6 + 1U;
          }
          if (iVar14 == 0) {
            uVar4 = 0;
          }
          uVar5 = uVar19;
          if ((uVar19 <= uVar8) && (uVar5 = uVar4, uVar8 < uVar4)) {
            uVar5 = uVar8;
          }
          if (iVar14 == 0) {
            puVar17 = &DAT_143f3eda8;
          }
          else {
            puVar17 = (undefined2 *)*puVar18;
          }
          iVar6 = uVar5 - uVar19;
          local_70 = (wchar_t *)0x0;
          uVar8 = iVar6 + 1;
          if (iVar6 == 0) {
            uVar8 = 0;
          }
          local_68 = (ulonglong)uVar8;
          pwVar16 = local_70;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
            pwVar16 = local_70;
            uVar8 = (uint)local_68;
            if (0 < (int)(uint)local_68) {
              wcsncpy(local_70,puVar17 + (int)uVar19,(longlong)iVar6);
              pwVar16[iVar6] = L'\0';
            }
          }
          if (local_res20 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          pwVar13 = L"";
          if (uVar8 != 0) {
            pwVar13 = pwVar16;
          }
          local_70 = (wchar_t *)0x0;
          local_68 = 0;
          pwVar12 = L"";
          if (uVar15 != 0) {
            pwVar12 = pwVar11;
          }
          FString::PrintfImpl(&local_60,L"%s.%s",pwVar12,pwVar13);
          iVar6 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
          }
          puVar3 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_2);
          *puVar3 = 0;
          *puVar3 = local_60;
          *(undefined4 *)(puVar3 + 1) = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_58._4_4_;
          local_58 = 0;
          local_60 = 0;
          local_res8 = pwVar11;
          local_res20 = pwVar16;
        }
      }
LAB_140643b21:
      puVar18 = puVar18 + 2;
    } while (puVar18 != puVar2);
    if (pwVar16 != (wchar_t *)0x0) {
      FMemory::Free(pwVar16);
    }
    if (pwVar11 != (wchar_t *)0x0) {
      FMemory::Free(pwVar11);
    }
  }
  return;
}



// FUNCTION 140643b70 FUN_140643b70 body=722 status=ok
// SIG undefined FUN_140643b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140643b70(longlong *param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong *local_98;
  longlong *plStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar13 = 0;
  cVar7 = FUN_140655950();
  if (cVar7 != '\0') {
    plVar8 = (longlong *)FUN_14064ef40();
    plVar9 = (longlong *)operator_new(0x58);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x48))(plVar8);
      puVar11 = (undefined8 *)FName::FName(local_70,L"PerfSnapshot",1);
      FUN_14063ed70(plVar9,*puVar11,param_1,uVar10);
      *(undefined2 *)(plVar9 + 10) = 0;
      *plVar9 = (longlong)&PTR_FUN_1440276e8;
      *(undefined1 *)((longlong)plVar9 + 0x52) = 0;
    }
    plStack_90 = (longlong *)operator_new(0x18);
    if (plStack_90 != (longlong *)0x0) {
      *(undefined4 *)(plStack_90 + 1) = 1;
      *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
      plStack_90[2] = (longlong)plVar9;
    }
    local_98 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_98,plVar9,plVar9);
    plVar9 = local_98;
    if (local_98 != (longlong *)0x0) {
      lVar4 = *local_98;
      uVar10 = (**(code **)(*plVar8 + 0x48))(plVar8);
      cVar7 = (**(code **)(lVar4 + 8))(plVar9,uVar10);
      if (cVar7 != '\0') {
        uVar10 = GetTransientPackage();
        FUN_1417846f0(uVar10,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_78 = 0;
        uVar12 = FUN_140664960();
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        lVar13 = FUN_1417985e0(uVar12,uVar10,0,0);
        if (lVar13 != 0) {
          local_68 = local_98;
          plStack_60 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
            UNLOCK();
          }
          cVar7 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_68,param_1);
          if (cVar7 == '\0') {
            lVar13 = 0;
          }
          else {
            local_88._8_8_ = plStack_90;
            local_88._0_8_ = local_98;
            uVar5 = (undefined4)((ulonglong)local_98 >> 0x20);
            uVar6 = (undefined4)((ulonglong)plStack_90 >> 0x20);
            pauVar1 = (undefined1 (*) [16])(lVar13 + 0x28);
            if (plStack_90 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
              UNLOCK();
            }
            if (&local_88 != pauVar1) {
              local_88 = *pauVar1;
              *(int *)*pauVar1 = (int)local_98;
              *(undefined4 *)(lVar13 + 0x2c) = uVar5;
              *(int *)(lVar13 + 0x30) = (int)plStack_90;
              *(undefined4 *)(lVar13 + 0x34) = uVar6;
              local_58 = (int)local_98;
              uStack_54 = uVar5;
              uStack_50 = (int)plStack_90;
              uStack_4c = uVar6;
            }
            uVar10 = local_88._8_8_;
            if ((undefined8 *)local_88._8_8_ != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_88._8_8_ + 8);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (*(code *)**(undefined8 **)local_88._8_8_)(local_88._8_8_);
                LOCK();
                piVar2 = (int *)(uVar10 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*(longlong *)local_88._8_8_ + 8))(local_88._8_8_,1);
                }
              }
            }
          }
        }
      }
    }
    plVar8 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_90 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  *(bool *)param_2 = lVar13 == 0;
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return lVar13;
}



// FUNCTION 140643e50 FUN_140643e50 body=138 status=ok
// SIG undefined FUN_140643e50(void)

undefined8 FUN_140643e50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
    lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
    if (lVar3 != 0) {
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x28);
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
        uVar4 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
      }
      uVar5 = FUN_140654d40(param_1);
      uVar4 = FUN_142eecda0(uVar4,uVar5);
      return uVar4;
    }
  }
  return 0xffffffff;
}



// FUNCTION 140643f00 FUN_140643f00 body=991 status=ok
// SIG undefined FUN_140643f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140643f00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  ulonglong *param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  ulonglong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160 [3];
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  bVar9 = false;
  local_190 = param_5;
  local_198 = local_198 & 0xffffffff00000000;
  local_170 = param_2;
  local_168 = param_1;
  puVar2 = (undefined8 *)FName::FName(&local_198,"AssetRegistry",1);
  lVar3 = FModuleManager::GetModulePtr_Internal(*puVar2);
  if (lVar3 != 0) {
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    puVar2 = (undefined8 *)*param_3;
    puVar12 = puVar2 + (longlong)*(int *)(param_3 + 1) * 2;
    local_d8 = 0xffffffff;
    local_88 = 0xffffffff;
    for (; puVar2 != puVar12; puVar2 = puVar2 + 2) {
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      FName::FName(&local_198,puVar7,1);
      uVar10 = local_130;
      lVar3 = (longlong)(int)local_130;
      iVar1 = (int)local_130 + 1;
      local_130 = CONCAT44(local_130._4_4_,iVar1);
      if (local_130._4_4_ < iVar1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_138,uVar10 & 0xffffffff);
      }
      *(ulonglong *)(local_138 + lVar3 * 8) = local_198;
    }
    plVar8 = (longlong *)*param_4;
    plVar5 = plVar8 + (int)param_4[1];
    param_5 = local_190;
    for (; local_190 = param_5, plVar8 != plVar5; plVar8 = plVar8 + 1) {
      lVar3 = *plVar8;
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 200) == 0) {
          puVar4 = &local_198;
          local_198 = *(ulonglong *)(lVar3 + 0x18);
        }
        else {
          bVar9 = true;
          puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar3,local_160,0);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = (undefined2 *)*puVar2;
          }
          puVar4 = (ulonglong *)FName::FName(local_178,puVar7);
        }
        uVar10 = local_110;
        lVar3 = (longlong)(int)local_110;
        iVar1 = (int)local_110 + 1;
        local_110 = CONCAT44(local_110._4_4_,iVar1);
        if (local_110._4_4_ < iVar1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_118,uVar10 & 0xffffffff);
        }
        *(ulonglong *)(local_118 + lVar3 * 8) = *puVar4;
        if ((bVar9) && (bVar9 = false, local_160[0] != 0)) {
          FMemory::Free();
        }
      }
      param_5 = local_190;
    }
    uVar11 = 0;
    plVar5 = (longlong *)*param_5;
    uVar10 = (longlong)(int)param_5[1] & 0x1fffffffffffffff;
    if (plVar5 + (int)param_5[1] < plVar5) {
      uVar10 = uVar11;
    }
    if (uVar10 != 0) {
      do {
        if (*plVar5 != 0) {
          local_190 = *(ulonglong **)(*plVar5 + 0x18);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                    (&local_b8,&local_198,&local_190,0);
        }
        plVar5 = plVar5 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    local_68 = CONCAT31(CONCAT21(local_68._2_2_,param_7),param_6);
    local_188 = 0;
    local_180 = 0;
    puVar2 = (undefined8 *)FName::FName(local_178,"AssetRegistry",1);
    plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar2);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
      (**(code **)(*plVar5 + 0x40))(plVar5,&local_148,&local_188);
      puVar2 = (undefined8 *)FName::FName(local_178,"GbxBlueprintHelper",1);
      plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar2);
      if (plVar5 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
        FUN_142ea6e80(uVar6,&local_148,&local_188);
      }
    }
    FUN_140657fa0(&local_188,local_168,local_170);
    FUN_1404be960(&local_188);
    FARFilter::~FARFilter(&local_148);
  }
  iVar1 = *(int *)(param_3 + 1);
  plVar5 = (longlong *)*param_3;
  if (iVar1 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar5 = (longlong *)*param_3;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406442e0 FUN_1406442e0 body=1073 status=ok
// SIG undefined FUN_1406442e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406442e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  ulonglong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  puVar5 = (undefined8 *)FName::FName(&local_168,"AssetRegistry",1);
  plVar6 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
  if (plVar6 != (longlong *)0x0) {
    uVar14 = 0;
    local_148 = (longlong *)0x0;
    local_140 = 0;
    FUN_140651a20(param_1,&local_148);
    uVar15 = (uint)local_140;
    uVar16 = (ulonglong)(int)(uint)local_140;
    local_128 = 0;
    plVar10 = local_148 + uVar16 * 2;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    for (plVar9 = local_148; plVar9 != plVar10; plVar9 = plVar9 + 2) {
      if ((int)plVar9[1] == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*plVar9;
      }
      FName::FName(local_138,puVar7,1);
      uVar8 = local_110;
      lVar12 = (longlong)(int)local_110;
      iVar4 = (int)local_110 + 1;
      local_110 = CONCAT44(local_110._4_4_,iVar4);
      if (local_110._4_4_ < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_118,uVar8 & 0xffffffff);
      }
      *(undefined8 *)(local_118 + lVar12 * 8) = local_138[0];
    }
    lVar12 = FUN_140665170();
    lVar13 = (longlong)(int)local_f0;
    uVar1 = *(undefined8 *)(lVar12 + 0x18);
    iVar4 = (int)local_f0 + 1;
    if (local_f0._4_4_ < iVar4) {
      uVar8 = local_f0 & 0xffffffff;
      local_f0._0_4_ = iVar4;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,uVar8);
      iVar4 = (int)local_f0;
    }
    local_f0._0_4_ = iVar4;
    *(undefined8 *)(local_f8 + lVar13 * 8) = uVar1;
    lVar12 = UBlueprint::GetPrivateStaticClass();
    iVar4 = (int)local_f0;
    lVar13 = (longlong)(int)local_f0;
    uVar1 = *(undefined8 *)(lVar12 + 0x18);
    local_f0._0_4_ = (int)local_f0 + 1;
    if (local_f0._4_4_ < (int)local_f0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,iVar4);
    }
    *(undefined8 *)(local_f8 + lVar13 * 8) = uVar1;
    lVar12 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    iVar4 = (int)local_f0;
    lVar13 = (longlong)(int)local_f0;
    uVar1 = *(undefined8 *)(lVar12 + 0x18);
    local_f0._0_4_ = (int)local_f0 + 1;
    if (local_f0._4_4_ < (int)local_f0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,iVar4);
    }
    *(undefined8 *)(local_f8 + lVar13 * 8) = uVar1;
    local_48 = CONCAT22(local_48._2_2_,0x101);
    local_158 = 0;
    local_150 = 0;
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_128,&local_158);
    local_168 = 0;
    local_160 = 0;
    if (0 < (int)local_150) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_168,local_150 & 0xffffffff);
      uVar14 = local_160 & 0xffffffff;
    }
    iVar4 = (int)uVar14;
    lVar17 = (longlong)(int)local_150 * 0x58 + local_158;
    lVar12 = local_168;
    for (lVar13 = local_158; lVar13 != lVar17; lVar13 = lVar13 + 0x58) {
      cVar3 = FUN_140655ea0(param_1,lVar13);
      if (cVar3 != '\0') {
        iVar4 = (int)uVar14;
        uVar11 = iVar4 + 1;
        local_160 = CONCAT44(local_160._4_4_,uVar11);
        if (local_160._4_4_ < (int)uVar11) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_168,uVar14);
          lVar12 = local_168;
          uVar11 = (uint)local_160;
        }
        uVar14 = (ulonglong)uVar11;
        FUN_14063dd00((longlong)iVar4 * 0x58 + lVar12,lVar13);
      }
      lVar2 = *(longlong *)(lVar13 + 0x20);
      if ((int)param_1[0x22] != *(int *)((longlong)param_1 + 0x13c)) {
        plVar6 = (longlong *)param_1[0x29];
        if ((longlong *)param_1[0x29] == (longlong *)0x0) {
          plVar6 = param_1 + 0x28;
        }
        iVar4 = *(int *)((longlong)plVar6 +
                        ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                        (longlong)(int)param_1[0x2a] - 1U) * 4);
        if (iVar4 != -1) {
          do {
            if (*(longlong *)(param_1[0x21] + (longlong)iVar4 * 0x10) == lVar2) {
              if (iVar4 != -1) {
                iVar4 = (int)uVar14;
                uVar11 = iVar4 + 1;
                local_160 = CONCAT44(local_160._4_4_,uVar11);
                if (local_160._4_4_ < (int)uVar11) {
                  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_168,uVar14);
                  lVar12 = local_168;
                  uVar11 = (uint)local_160;
                }
                uVar14 = (ulonglong)uVar11;
                FUN_14063dd00((longlong)iVar4 * 0x58 + lVar12,lVar13);
              }
              break;
            }
            iVar4 = *(int *)(param_1[0x21] + 8 + (longlong)iVar4 * 0x10);
          } while (iVar4 != -1);
        }
      }
      iVar4 = (int)uVar14;
    }
    lVar13 = (longlong)iVar4 * 0x58 + lVar12;
    for (; lVar12 != lVar13; lVar12 = lVar12 + 0x58) {
      (**(code **)(*param_1 + 0x40))(param_1,lVar12);
    }
    FUN_1404be960(&local_168);
    FUN_1404be960(&local_158);
    FARFilter::~FARFilter(&local_128);
    plVar9 = local_148;
    plVar6 = local_148;
    while (uVar15 != 0) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
      uVar15 = (int)uVar16 - 1;
      uVar16 = (ulonglong)uVar15;
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2e);
  return;
}



// FUNCTION 140644720 FUN_140644720 body=734 status=ok
// SIG undefined FUN_140644720(void)

void FUN_140644720(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  longlong local_78;
  int local_70;
  longlong *local_68;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  puVar15 = (undefined2 *)0x0;
  uVar5 = FUN_14066fd50();
  FObjectIterator::FObjectIterator(&local_78,uVar5,0,0,0);
  plVar12 = local_68;
  iVar11 = local_70;
  if (local_68 == (longlong *)0x0) {
    return;
  }
  do {
    if (plVar12 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar12;
    }
    if ((*(uint *)(lVar8 + 8) >> 4 & 1) != 0) {
      if (plVar12 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar12;
      }
      lVar8 = *(longlong *)(lVar8 + 0x10);
      uVar4 = *(uint *)(lVar8 + 0xb4);
      lVar6 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      lVar9 = lVar8;
      do {
        if (lVar9 == lVar6) {
          bVar1 = false;
          goto LAB_1406447ea;
        }
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while (lVar9 != 0);
      bVar1 = true;
LAB_1406447ea:
      if ((((uVar4 & 0x2000001) == 0) && (bVar1)) &&
         (cVar3 = (**(code **)(*param_1 + 0x48))(param_1,*(undefined8 *)(lVar8 + 0x18),lVar8),
         cVar3 != '\0')) {
        puVar7 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar8,local_88,0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar7;
        }
        lVar8 = FUN_14171bfe0();
        local_res18 = *(undefined8 *)(lVar8 + 0x18);
        FName::ToString(&local_res18,&local_98);
        puVar14 = &DAT_143f3eda8;
        if (local_90 != 0) {
          puVar14 = local_98;
        }
        FString::PrintfImpl(&local_a8,L"%s\'%s\'",puVar14,puVar13);
        if (puVar15 != (undefined2 *)0x0) {
          FMemory::Free(puVar15);
        }
        puVar15 = local_a8;
        iVar2 = (int)local_a0;
        local_a8 = (undefined2 *)0x0;
        local_a0 = 0;
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar13 = puVar15;
        }
        FName::FName(local_res20,puVar13,1);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (param_1 + 0x17,local_res10,local_res20,0);
      }
    }
LAB_1406448e1:
    do {
      do {
        iVar11 = iVar11 + 1;
        if (*(int *)(local_78 + 0x24) <= iVar11) {
LAB_140644929:
          if (puVar15 == (undefined2 *)0x0) {
            return;
          }
          FMemory::Free(puVar15);
          return;
        }
        while( true ) {
          uVar10 = iVar11 >> 0x1f & 0xffff;
          uVar4 = iVar11 + uVar10;
          lVar6 = (longlong)(int)((uVar4 & 0xffff) - uVar10);
          lVar8 = *(longlong *)(*(longlong *)(local_78 + 0x10) + (longlong)((int)uVar4 >> 0x10) * 8)
          ;
          lVar9 = *(longlong *)(lVar8 + lVar6 * 0x18);
          plVar12 = (longlong *)(lVar8 + lVar6 * 0x18);
          if (lVar9 != 0) break;
          iVar11 = iVar11 + 1;
          if (*(int *)(local_78 + 0x24) <= iVar11) goto LAB_140644929;
        }
      } while ((local_58 & *(uint *)(lVar9 + 8)) != 0);
      lVar8 = UObject::GetPrivateStaticClass();
      if (local_60 != lVar8) {
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(local_60 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(local_60 + 0x90) * 8) != local_60 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_1406448e1;
      }
      uVar4 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar10 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar10 = uVar10 - 0x10000;
        }
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar10 * 0x18;
      }
      else {
        lVar8 = 0;
      }
    } while ((*(uint *)(lVar8 + 8) & local_54) != 0);
  } while( true );
}



// FUNCTION 140644a00 FUN_140644a00 body=517 status=ok
// SIG undefined FUN_140644a00(void)

void FUN_140644a00(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  longlong local_68;
  int local_60;
  longlong *local_58;
  longlong local_50;
  uint local_48;
  uint local_44;
  
  uVar3 = FUN_140665170();
  FObjectIterator::FObjectIterator(&local_68,uVar3,0,0,0);
  plVar9 = local_58;
  iVar8 = local_60;
  if (local_58 == (longlong *)0x0) {
    return;
  }
  do {
    if (plVar9 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar9;
    }
    if ((*(uint *)(lVar5 + 8) >> 4 & 1) != 0) {
      if (plVar9 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar9;
      }
      lVar5 = *(longlong *)(lVar5 + 0x10);
      uVar2 = *(uint *)(lVar5 + 0xb4);
      lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      lVar6 = lVar5;
      do {
        if (lVar6 == lVar4) {
          bVar1 = false;
          goto LAB_140644ac6;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
      bVar1 = true;
LAB_140644ac6:
      if (((uVar2 & 0x2000001) == 0) && (bVar1)) {
        local_res18[0] = *(undefined8 *)(lVar5 + 0x18);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (param_1 + 0x108,local_res10,local_res18,0);
      }
    }
LAB_140644b00:
    do {
      do {
        iVar8 = iVar8 + 1;
        if (*(int *)(local_68 + 0x24) <= iVar8) {
          return;
        }
        while( true ) {
          uVar7 = iVar8 >> 0x1f & 0xffff;
          uVar2 = iVar8 + uVar7;
          lVar4 = (longlong)(int)((uVar2 & 0xffff) - uVar7);
          lVar5 = *(longlong *)(*(longlong *)(local_68 + 0x10) + (longlong)((int)uVar2 >> 0x10) * 8)
          ;
          lVar6 = *(longlong *)(lVar5 + lVar4 * 0x18);
          plVar9 = (longlong *)(lVar5 + lVar4 * 0x18);
          if (lVar6 != 0) break;
          iVar8 = iVar8 + 1;
          if (*(int *)(local_68 + 0x24) <= iVar8) {
            return;
          }
        }
      } while ((*(uint *)(lVar6 + 8) & local_48) != 0);
      lVar5 = UObject::GetPrivateStaticClass();
      if (local_50 != lVar5) {
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(local_50 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(local_50 + 0x90) * 8) != local_50 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140644b00;
      }
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < (int)DAT_1469e91c4) {
        uVar7 = uVar2 & 0xffff;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      else {
        lVar5 = 0;
      }
    } while ((*(uint *)(lVar5 + 8) & local_44) != 0);
  } while( true );
}



// FUNCTION 140644c10 FUN_140644c10 body=4993 status=ok
// SIG undefined FUN_140644c10(void)

void FUN_140644c10(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  void *pvVar1;
  bool bVar2;
  undefined2 *puVar3;
  void *pvVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *local_a8;
  ulonglong local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  int local_80;
  longlong local_78 [2];
  char local_68;
  char local_67;
  char local_66;
  char local_65;
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  undefined1 local_58 [8];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  if (param_2 != 0) {
    lVar6 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140644c80;
  }
  param_2 = 0;
LAB_140644c80:
  local_78[0] = 0;
  local_78[1] = 0;
  cVar5 = FUN_140653290(param_2,local_78);
  if (cVar5 != '\0') {
    if ((((param_4 == 0) || (*(char *)(param_4 + 0x38) == '\0')) &&
        (*(char *)(param_1 + 0x38) != '\0')) && (local_68 != *(char *)(param_1 + 0x39))) {
      FString::PrintfImpl(&local_98,L"Invalid usage flag (skeletal mesh)");
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x39) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      iVar8 = 0;
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar9 = local_90;
      if (local_80 != 0) {
        iVar8 = local_80 + -1;
      }
      if (iVar8 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + local_90 + iVar8;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar9);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar9 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1c;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.SkeletalMesh",0x38);
      lVar6 = (longlong)(int)local_a0;
      local_58[0] = 3;
      local_50 = (void *)0x0;
      local_48 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_44 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_50,puVar3,lVar6 * 2);
      }
      pvVar4 = local_98;
      lVar6 = (longlong)local_90;
      local_40 = (void *)0x0;
      local_38 = local_90;
      if (local_90 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_40,pvVar4,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x3a) == '\0')) &&
       ((*(char *)(param_1 + 0x3a) != '\0' && (local_67 != *(char *)(param_1 + 0x3b))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x3b) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar9 * 2) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1f;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.ParticleSprites",0x3e);
      lVar6 = (longlong)(int)local_a0;
      local_58[0] = 3;
      local_50 = (void *)0x0;
      local_48 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_44 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_50,puVar3,lVar6 * 2);
      }
      pvVar4 = local_98;
      lVar6 = (longlong)local_90;
      local_40 = (void *)0x0;
      local_38 = local_90;
      if (local_90 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_40,pvVar4,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x3c) == '\0')) &&
       ((*(char *)(param_1 + 0x3c) != '\0' && (local_66 != *(char *)(param_1 + 0x3d))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x3d) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar9 * 2) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1a;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.BeamTrails",0x34);
      lVar6 = (longlong)(int)local_a0;
      local_58[0] = 3;
      local_50 = (void *)0x0;
      local_48 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_44 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_50,puVar3,lVar6 * 2);
      }
      pvVar4 = local_98;
      lVar6 = (longlong)local_90;
      local_40 = (void *)0x0;
      local_38 = local_90;
      if (local_90 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_40,pvVar4,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((((param_4 == 0) || (*(char *)(param_4 + 0x3e) == '\0')) &&
        (*(char *)(param_1 + 0x3e) != '\0')) && (local_65 != *(char *)(param_1 + 0x3f))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x3f) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + local_90 + iVar9;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1c;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.ParticleMesh",0x38);
      lVar6 = (longlong)(int)local_a0;
      local_58[0] = 3;
      local_50 = (void *)0x0;
      local_48 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_44 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_50,puVar3,lVar6 * 2);
      }
      pvVar4 = local_98;
      lVar6 = (longlong)local_90;
      local_40 = (void *)0x0;
      local_38 = local_90;
      if (local_90 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_40,pvVar4,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x40) == '\0')) &&
       ((*(char *)(param_1 + 0x40) != '\0' && (local_64 != *(char *)(param_1 + 0x41))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x41) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1e;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.StaticLighting",0x3c);
      lVar6 = (longlong)(int)local_a0;
      local_58[0] = 3;
      local_50 = (void *)0x0;
      local_48 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_44 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_50,puVar3,lVar6 * 2);
      }
      pvVar4 = local_98;
      lVar6 = (longlong)local_90;
      local_40 = (void *)0x0;
      local_38 = local_90;
      if (local_90 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_40,pvVar4,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x42) == '\0')) &&
       ((*(char *)(param_1 + 0x42) != '\0' && (local_63 != *(char *)(param_1 + 0x43))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x43) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1c;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.MorphTargets",0x38);
      lVar6 = (longlong)(int)local_a0;
      local_58[0] = 3;
      local_50 = (void *)0x0;
      local_48 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_44 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_50,puVar3,lVar6 * 2);
      }
      pvVar4 = local_98;
      lVar6 = (longlong)local_90;
      local_40 = (void *)0x0;
      local_38 = local_90;
      if (local_90 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_40,pvVar4,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((((param_4 == 0) || (*(char *)(param_4 + 0x44) == '\0')) &&
        (*(char *)(param_1 + 0x44) != '\0')) && (local_62 != *(char *)(param_1 + 0x45))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x45) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1a;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.SplineMesh",0x34);
      local_58[0] = 3;
      FString::FString(&local_50,&local_a8);
      FString::FString(&local_40,&local_98);
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x48) == '\0')) &&
       ((*(char *)(param_1 + 0x48) != '\0' && (local_61 != *(char *)(param_1 + 0x49))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x49) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x1b;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.InstancedSM",0x36);
      local_58[0] = 3;
      FString::FString(&local_50,&local_a8);
      FString::FString(&local_40,&local_98);
      (**(code **)(*param_3 + 8))(param_3,local_58);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x4a) == '\0')) &&
       ((*(char *)(param_1 + 0x4a) != '\0' && (local_60 != *(char *)(param_1 + 0x4b))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x4b) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + local_90 + iVar9;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a0 = 0x18;
      local_a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"Material.Usage.Clothing",0x30);
      FUN_1406423a0(param_3,&local_a8,&local_98);
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((((param_4 == 0) || (*(char *)(param_4 + 0x4c) == '\0')) &&
        (*(char *)(param_1 + 0x4c) != '\0')) && (local_5f != *(char *)(param_1 + 0x4d))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x4d) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar7 = L"expected a true value, but was false";
      }
      puVar3 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar7,0x4a);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar10 = puVar3;
      }
      FString::PrintfImpl(&local_88,L" (%s)",puVar10);
      pvVar4 = local_88;
      iVar8 = local_90;
      if (local_80 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_80 + -1;
      }
      if (iVar9 != 0) {
        lVar6 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar9 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar8);
        }
        pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar9 * 2) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"Material.PhysMat",0x22);
      FUN_1406423a0(param_3,&local_a8,&local_98);
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140645fa0 FUN_140645fa0 body=5416 status=ok
// SIG undefined FUN_140645fa0(void)

void FUN_140645fa0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  void *_Dst;
  bool bVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong local_res10;
  void *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  if (param_2 == 0) {
LAB_140646007:
    lVar9 = 0;
  }
  else {
    lVar9 = UNodeMappingContainer::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar9 = param_2;
    if (!bVar1) goto LAB_140646007;
  }
  if (param_2 != 0) {
    lVar10 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_res10 = param_2;
    if (bVar1) goto LAB_140646050;
  }
  local_res10 = 0;
LAB_140646050:
  local_50 = 0;
  iVar13 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  cVar7 = FUN_1406539f0(lVar9,&local_60);
  if ((cVar7 != '\0') || (cVar7 = FUN_140653620(local_res10,&local_60), cVar7 != '\0')) {
    uVar4 = local_60;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x38) == '\0')) &&
       (*(char *)(param_1 + 0x38) != '\0')) {
      cVar7 = FUN_140634d10(local_60 & 0xffffffff,*(undefined4 *)(param_1 + 0x3c),3);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too few LODs");
        puVar11 = (undefined8 *)
                  FUN_1406366a0(&local_70,uVar4 & 0xffffffff,*(undefined4 *)(param_1 + 0x3c),3);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar5 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 != 0) {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x11;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.LODs.TooFew",0x22);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x40) == '\0')) &&
       (*(char *)(param_1 + 0x40) != '\0')) {
      cVar7 = FUN_140634d10(uVar4 & 0xffffffff,*(undefined4 *)(param_1 + 0x44),5);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too many LODs");
        puVar11 = (undefined8 *)
                  FUN_1406366a0(&local_70,uVar4 & 0xffffffff,*(undefined4 *)(param_1 + 0x44),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b8 = (void *)0x0;
        local_b0 = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.LODs.TooMany",0x24);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x48) == '\0')) &&
       (*(char *)(param_1 + 0x48) != '\0')) {
      uVar6 = local_60._4_4_;
      cVar7 = FUN_140634d10(local_60._4_4_,*(undefined4 *)(param_1 + 0x4c),5);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too many triangles");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar6,*(undefined4 *)(param_1 + 0x4c),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x17;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.Triangles.TooMany",0x2e);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    uVar4 = uStack_58;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x50) == '\0')) &&
       (*(char *)(param_1 + 0x50) != '\0')) {
      cVar7 = FUN_140634d10(uStack_58 & 0xffffffff,*(undefined4 *)(param_1 + 0x54),5);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too many vertices");
        puVar11 = (undefined8 *)
                  FUN_1406366a0(&local_70,uVar4 & 0xffffffff,*(undefined4 *)(param_1 + 0x54),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + iVar13 + (int)local_a0;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x16;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.Vertices.TooMany",0x2c);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x58) == '\0')) &&
       (*(char *)(param_1 + 0x58) != '\0')) {
      uVar6 = uStack_58._4_4_;
      cVar7 = FUN_140634d10(uStack_58._4_4_,*(undefined4 *)(param_1 + 0x5c),3);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too few texture coordinates");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar6,*(undefined4 *)(param_1 + 0x5c),3);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x10;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.UVs.TooFew",0x20);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    uVar4 = local_50;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x60) == '\0')) &&
       (*(char *)(param_1 + 0x60) != '\0')) {
      cVar7 = FUN_140634d10(local_50 & 0xffffffff,*(undefined4 *)(param_1 + 100),5);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too many texture coordinates");
        puVar11 = (undefined8 *)
                  FUN_1406366a0(&local_70,uVar4 & 0xffffffff,*(undefined4 *)(param_1 + 100),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x11;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.UVs.TooMany",0x22);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x68) == '\0')) &&
       (*(char *)(param_1 + 0x68) != '\0')) {
      uVar6 = local_50._4_4_;
      cVar7 = FUN_140634d10(local_50._4_4_,*(undefined4 *)(param_1 + 0x6c),3);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too few mesh sections");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar6,*(undefined4 *)(param_1 + 0x6c),3);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + iVar13 + (int)local_a0;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x15;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pvVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.Sections.TooFew",0x2a);
        lVar10 = (longlong)(int)local_b0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar10 * 2);
        }
        puVar14 = local_a8;
        lVar10 = (longlong)(int)local_a0;
        local_80 = (void *)0x0;
        local_78 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    uVar6 = local_48;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x70) == '\0')) &&
       (*(char *)(param_1 + 0x70) != '\0')) {
      cVar7 = FUN_140634d10(local_48,*(undefined4 *)(param_1 + 0x74),5);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too many mesh sections");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar6,*(undefined4 *)(param_1 + 0x74),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar10 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + iVar13 + (int)local_a0;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x16;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.Sections.TooMany",0x2c);
        local_98[0] = 3;
        FString::FString(&local_90,&local_b8);
        FString::FString(&local_80,&local_a8);
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  iVar13 = 0;
  local_44 = 0;
  local_40 = '\0';
  cVar7 = FUN_140653890(lVar9,&local_60);
  if ((cVar7 != '\0') || (cVar7 = FUN_140653470(local_res10,&local_60), cVar7 != '\0')) {
    uVar6 = local_44;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x78) == '\0')) &&
       (*(char *)(param_1 + 0x78) != '\0')) {
      cVar7 = FUN_140634d10(local_44,*(undefined4 *)(param_1 + 0x7c),3);
      if (cVar7 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too few sockets");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar6,*(undefined4 *)(param_1 + 0x7c),3);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
        uVar4 = local_a0;
        pvVar2 = local_b8;
        if ((int)local_b0 != 0) {
          iVar13 = (int)local_b0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_a0;
          lVar9 = (longlong)(int)local_a0;
          iVar8 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
          local_a0 = CONCAT44(local_a0._4_4_,iVar8);
          if (local_a0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
          }
          puVar14 = local_a8 + (lVar9 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_b0 = 0x18;
        local_b8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        FGenericPlatformString::Memcpy(local_b8,L"Mesh.SocketCount.TooFew",0x30);
        local_98[0] = 3;
        FString::FString(&local_90,&local_b8);
        FString::FString(&local_80,&local_a8);
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x80) == '\0')) &&
       ((*(char *)(param_1 + 0x80) != '\0' &&
        (cVar7 = FUN_140634d10(uVar6,*(undefined4 *)(param_1 + 0x84),5), cVar7 == '\0')))) {
      FString::PrintfImpl(&local_a8,L"Too many sockets");
      puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar6,*(undefined4 *)(param_1 + 0x84),5);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar11;
      }
      FString::PrintfImpl(&local_b8,L" (%s)",puVar14);
      uVar4 = local_a0;
      pvVar2 = local_b8;
      if ((int)local_b0 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = (int)local_b0 + -1;
      }
      if (iVar13 != 0) {
        iVar3 = (int)local_a0;
        lVar9 = (longlong)(int)local_a0;
        iVar8 = (uint)((int)local_a0 == 0) + iVar13 + (int)local_a0;
        local_a0 = CONCAT44(local_a0._4_4_,iVar8);
        if (local_a0._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
        }
        puVar14 = local_a8 + (lVar9 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar13 * 2);
        puVar14[iVar13] = 0;
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free();
      }
      local_b0 = 0x19;
      local_b8 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"Mesh.SocketCount.TooMany",0x32);
      local_98[0] = 3;
      FString::FString(&local_90,&local_b8);
      FString::FString(&local_80,&local_a8);
      (**(code **)(*param_3 + 8))(param_3,local_98);
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if ((((param_4 == 0) || (*(char *)(param_4 + 0x88) == '\0')) &&
        (*(char *)(param_1 + 0x88) != '\0')) && (local_40 != *(char *)(param_1 + 0x89))) {
      FString::PrintfImpl(&local_b8);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x89) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar12 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar12 = L"expected a true value, but was false";
      }
      puVar14 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar12,0x4a);
      puVar15 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar15 = puVar14;
      }
      FString::PrintfImpl(&local_70,L" (%s)",puVar15);
      pvVar2 = local_70;
      uVar4 = local_b0;
      if (local_68 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_68 + -1;
      }
      if (iVar13 != 0) {
        iVar3 = (int)local_b0;
        lVar9 = (longlong)(int)local_b0;
        iVar8 = (uint)((int)local_b0 == 0) + iVar13 + (int)local_b0;
        local_b0 = CONCAT44(local_b0._4_4_,iVar8);
        if (local_b0._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar4 & 0xffffffff);
        }
        _Dst = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar13 * 2) = 0;
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"Mesh.SocketCount.Exists",0x30);
      local_98[0] = 3;
      FString::FString(&local_90,&local_a8);
      FString::FString(&local_80,&local_b8);
      (**(code **)(*param_3 + 8))(param_3,local_98);
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1406474d0 FUN_1406474d0 body=13665 status=ok
// SIG undefined FUN_1406474d0(void)

void FUN_1406474d0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int *piVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  int *piVar16;
  int *piVar17;
  int *local_2b8;
  int local_2b0;
  int local_2ac;
  void *local_2a8;
  ulonglong local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288 [2];
  undefined1 local_278 [8];
  void *local_270;
  int local_268;
  undefined4 local_264;
  void *local_260;
  int local_258;
  undefined4 local_254;
  undefined2 *local_250;
  undefined8 local_248;
  int *local_240;
  int local_238;
  int local_234;
  int *local_230;
  int local_228;
  int local_224;
  int *local_220;
  int local_218;
  int local_214;
  int *local_210;
  int local_208;
  int local_204;
  longlong local_200 [2];
  int *local_1f0;
  undefined8 local_1e8;
  longlong local_1e0 [4];
  int *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0 [5];
  longlong local_188 [2];
  int *local_178;
  undefined8 local_170;
  float local_164;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  void *local_128;
  int local_120;
  void *local_118;
  int local_110;
  void *local_108;
  int local_100;
  void *local_f8;
  int local_f0;
  void *local_e8;
  int local_e0;
  void *local_d8;
  int local_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [6];
  
  if (param_2 == 0) {
LAB_14064754c:
    param_2 = 0;
  }
  else {
    lVar6 = UCameraShake::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14064754c;
  }
  local_188[0] = 0;
  local_188[1] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  cVar5 = FUN_140652f90(param_2,local_188);
  if (cVar5 == '\0') goto LAB_14064a9e8;
  if (((param_4 == 0) || (*(char *)(param_4 + 0x38) == '\0')) && (*(char *)(param_1 + 0x38) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_154,*(undefined4 *)(param_1 + 0x3c),3);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too few emitters");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_154,*(undefined4 *)(param_1 + 0x3c),3);
      iVar11 = 0;
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar12 = local_2b0;
      if ((int)local_2a0 != 0) {
        iVar11 = (int)local_2a0 + -1;
      }
      if (iVar11 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar11;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_2a0 = 0x19;
      local_2a8 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      pvVar3 = local_2a8;
      FGenericPlatformString::Memcpy(local_2a8,L"Particle.Emitters.TooFew",0x32);
      lVar6 = (longlong)(int)local_2a0;
      local_278[0] = 3;
      local_270 = (void *)0x0;
      local_268 = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        local_264 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_2a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_270,pvVar3,lVar6 * 2);
      }
      piVar16 = local_2b8;
      lVar6 = (longlong)local_2b0;
      local_260 = (void *)0x0;
      local_258 = local_2b0;
      if (local_2b0 == 0) {
        local_254 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_2b0,0);
        _guard_xfg_dispatch_icall_nop(local_260,piVar16,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x40) == '\0')) && (*(char *)(param_1 + 0x40) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_154,*(undefined4 *)(param_1 + 0x44),5);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too many emitters");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_154,*(undefined4 *)(param_1 + 0x44),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_2a0 = 0x1a;
      local_2a8 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      pvVar3 = local_2a8;
      FGenericPlatformString::Memcpy(local_2a8,L"Particle.Emitters.TooMany",0x34);
      lVar6 = (longlong)(int)local_2a0;
      local_278[0] = 3;
      local_270 = (void *)0x0;
      local_268 = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        local_264 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_2a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_270,pvVar3,lVar6 * 2);
      }
      piVar16 = local_2b8;
      lVar6 = (longlong)local_2b0;
      local_260 = (void *)0x0;
      local_258 = local_2b0;
      if (local_2b0 == 0) {
        local_254 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_2b0,0);
        _guard_xfg_dispatch_icall_nop(local_260,piVar16,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x48) == '\0')) && (*(char *)(param_1 + 0x48) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_150,*(undefined4 *)(param_1 + 0x4c),3);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too few modules");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_150,*(undefined4 *)(param_1 + 0x4c),3);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_2a0 = 0x18;
      local_2a8 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      pvVar3 = local_2a8;
      FGenericPlatformString::Memcpy(local_2a8,L"Particle.Modules.TooFew",0x30);
      lVar6 = (longlong)(int)local_2a0;
      local_278[0] = 3;
      local_270 = (void *)0x0;
      local_268 = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        local_264 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_2a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_270,pvVar3,lVar6 * 2);
      }
      piVar16 = local_2b8;
      lVar6 = (longlong)local_2b0;
      local_260 = (void *)0x0;
      local_258 = local_2b0;
      if (local_2b0 == 0) {
        local_254 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_2b0,0);
        _guard_xfg_dispatch_icall_nop(local_260,piVar16,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x50) == '\0')) && (*(char *)(param_1 + 0x50) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_14c,*(undefined4 *)(param_1 + 0x54),5);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too many modules");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_14c,*(undefined4 *)(param_1 + 0x54),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_2a0 = 0x19;
      local_2a8 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      pvVar3 = local_2a8;
      FGenericPlatformString::Memcpy(local_2a8,L"Particle.Modules.TooMany",0x32);
      lVar6 = (longlong)(int)local_2a0;
      local_278[0] = 3;
      local_270 = (void *)0x0;
      local_268 = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        local_264 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_2a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_270,pvVar3,lVar6 * 2);
      }
      piVar16 = local_2b8;
      lVar6 = (longlong)local_2b0;
      local_260 = (void *)0x0;
      local_258 = local_2b0;
      if (local_2b0 == 0) {
        local_254 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_2b0,0);
        _guard_xfg_dispatch_icall_nop(local_260,piVar16,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x78) == '\0')) &&
     ((*(char *)(param_1 + 0x78) != '\0' && (local_164 < *(float *)(param_1 + 0x7c))))) {
    FString::PrintfImpl(&local_2b8,L"Too small of an update time");
    puVar7 = (undefined8 *)FUN_140636770(local_288,local_164,*(undefined4 *)(param_1 + 0x7c),3);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
    pvVar3 = local_2a8;
    iVar11 = local_2b0;
    if ((int)local_2a0 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = (int)local_2a0 + -1;
    }
    if (iVar12 != 0) {
      lVar6 = (longlong)local_2b0;
      local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
      if (local_2ac < local_2b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
      }
      pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_2a8 != (void *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_288[0] != 0) {
      FMemory::Free();
    }
    local_2a0 = 0x1b;
    local_2a8 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
    pvVar3 = local_2a8;
    FGenericPlatformString::Memcpy(local_2a8,L"Particle.UpdateTime.TooLow",0x36);
    lVar6 = (longlong)(int)local_2a0;
    local_278[0] = 3;
    local_270 = (void *)0x0;
    local_268 = (int)local_2a0;
    if ((int)local_2a0 == 0) {
      local_264 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_2a0 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_270,pvVar3,lVar6 * 2);
    }
    piVar16 = local_2b8;
    lVar6 = (longlong)local_2b0;
    local_260 = (void *)0x0;
    local_258 = local_2b0;
    if (local_2b0 == 0) {
      local_254 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_2b0,0);
      _guard_xfg_dispatch_icall_nop(local_260,piVar16,lVar6 * 2);
    }
    (**(code **)(*param_3 + 8))(param_3,local_278);
    if (local_260 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_270 != (void *)0x0) {
      FMemory::Free();
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    if (local_2b8 != (int *)0x0) {
      FMemory::Free();
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x80) == '\0')) && (*(char *)(param_1 + 0x80) != '\0')
     ) {
    cVar5 = FUN_140634db0(local_164,*(undefined4 *)(param_1 + 0x84),5,0x38d1b717);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too large of an update time");
      puVar7 = (undefined8 *)FUN_140636770(local_288,local_164,*(undefined4 *)(param_1 + 0x84),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + iVar12 + local_2b0;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_2a0 = 0x1c;
      local_2a8 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      pvVar3 = local_2a8;
      FGenericPlatformString::Memcpy(local_2a8,L"Particle.UpdateTime.TooHigh",0x38);
      lVar6 = (longlong)(int)local_2a0;
      local_278[0] = 3;
      local_270 = (void *)0x0;
      local_268 = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        local_264 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_2a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_270,pvVar3,lVar6 * 2);
      }
      piVar16 = local_2b8;
      lVar6 = (longlong)local_2b0;
      local_260 = (void *)0x0;
      local_258 = local_2b0;
      if (local_2b0 == 0) {
        local_254 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_2b0,0);
        _guard_xfg_dispatch_icall_nop(local_260,piVar16,lVar6 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x88) == '\0')) && (*(char *)(param_1 + 0x88) != '\0')
     ) {
    cVar5 = FUN_140634db0(local_160,*(undefined4 *)(param_1 + 0x8c),5,0x38d1b717);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too large of a warmup time");
      puVar7 = (undefined8 *)FUN_140636770(local_288,local_160,*(undefined4 *)(param_1 + 0x8c),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x1c;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.WarmupTime.TooHigh",0x38);
      local_278[0] = 3;
      FString::FString(&local_270,&local_298);
      FString::FString(&local_260,&local_2b8);
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x90) == '\0')) && (*(char *)(param_1 + 0x90) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_144,*(undefined4 *)(param_1 + 0x94),3);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too few emitters with anim-trail data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_144,*(undefined4 *)(param_1 + 0x94),3);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x21;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.AnimTrail.TooFew",0x42);
      local_278[0] = 3;
      FString::FString(&local_270,&local_298);
      FString::FString(&local_260,&local_2b8);
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0x98) == '\0')) && (*(char *)(param_1 + 0x98) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_144,*(undefined4 *)(param_1 + 0x9c),5);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too many emitters with anim-trail data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_144,*(undefined4 *)(param_1 + 0x9c),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x22;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.AnimTrail.TooMany",0x44);
      local_278[0] = 3;
      FString::FString(&local_270,&local_298);
      FString::FString(&local_260,&local_2b8);
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xa0) == '\0')) && (*(char *)(param_1 + 0xa0) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_140,*(undefined4 *)(param_1 + 0xa4),3);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too few emitters with gpu-sprites data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_140,*(undefined4 *)(param_1 + 0xa4),3);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x22;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.GPUSprites.TooFew",0x44);
      local_278[0] = 3;
      FString::FString(&local_270,&local_298);
      FString::FString(&local_260,&local_2b8);
      (**(code **)(*param_3 + 8))(param_3,local_278);
      if (local_260 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xa8) == '\0')) && (*(char *)(param_1 + 0xa8) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_140,*(undefined4 *)(param_1 + 0xac),5);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too many emitters with gpu-sprites data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_140,*(undefined4 *)(param_1 + 0xac),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x23;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.GPUSprites.TooMany",0x46);
      FUN_1406423a0(param_3,&local_298,&local_2b8);
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  uVar13 = local_13c;
  if (((param_4 == 0) || (*(char *)(param_4 + 0xb0) == '\0')) && (*(char *)(param_1 + 0xb0) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_13c,*(undefined4 *)(param_1 + 0xb4),3);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too few emitters with mesh data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,uVar13,*(undefined4 *)(param_1 + 0xb4),3);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
        uVar13 = local_13c;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x20;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.MeshData.TooFew",0x40);
      FUN_1406423a0(param_3,&local_298,&local_2b8);
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xb8) == '\0')) && (*(char *)(param_1 + 0xb8) != '\0')
     ) {
    cVar5 = FUN_140634d10(uVar13,*(undefined4 *)(param_1 + 0xbc),5);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too many emitters with mesh data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,uVar13,*(undefined4 *)(param_1 + 0xbc),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x21;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.MeshData.TooMany",0x42);
      FUN_1406423a0(param_3,&local_298,&local_2b8);
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xc0) == '\0')) && (*(char *)(param_1 + 0xc0) != '\0')
     ) {
    cVar5 = FUN_140634d10(local_138,*(undefined4 *)(param_1 + 0xc4),3);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too few emitters with ribbon/beam data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_138,*(undefined4 *)(param_1 + 0xc4),3);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + iVar12 + local_2b0;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x22;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.RibbonBeam.TooFew",0x44);
      FUN_1406423a0(param_3,&local_298,&local_2b8);
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 200) == '\0')) && (*(char *)(param_1 + 200) != '\0'))
  {
    cVar5 = FUN_140634d10(local_138,*(undefined4 *)(param_1 + 0xcc),5);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too many emitters with ribbon/beam data");
      puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_138,*(undefined4 *)(param_1 + 0xcc),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar12;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x23;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.Module.RibbonBeam.TooHigh",0x46);
      FUN_1406423a0(param_3,&local_298,&local_2b8);
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xd0) == '\0')) && (*(char *)(param_1 + 0xd0) != '\0')
     ) {
    cVar5 = FUN_140634db0(local_158,*(undefined4 *)(param_1 + 0xd4),5,0x38d1b717);
    if (cVar5 == '\0') {
      FString::PrintfImpl(&local_2b8,L"Too large of a template memory cost");
      puVar7 = (undefined8 *)FUN_140636770(local_288,local_158,*(undefined4 *)(param_1 + 0xd4),5);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
      pvVar3 = local_2a8;
      iVar11 = local_2b0;
      if ((int)local_2a0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)local_2a0 + -1;
      }
      if (iVar12 != 0) {
        lVar6 = (longlong)local_2b0;
        local_2b0 = (uint)(local_2b0 == 0) + iVar12 + local_2b0;
        if (local_2ac < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
        }
        pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      local_290 = 0x1e;
      local_298 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,L"Particle.TemplateCost.TooHigh",0x3c);
      FUN_1406423a0(param_3,&local_298,&local_2b8);
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  iVar11 = 0;
  if (((param_4 == 0) || (*(char *)(param_4 + 0xd8) == '\0')) && (*(char *)(param_1 + 0xd8) != '\0')
     ) {
    if (*(char *)(param_1 + 0xd9) == '\0') {
      cVar5 = FUN_140634d10(local_144,0,0);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too many emitters with Anim Trail Data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_144,0,0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar12 = local_2b0;
        if ((int)local_2a0 != 0) {
          iVar11 = (int)local_2a0 + -1;
        }
        if (iVar11 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar11;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_290 = 0x22;
        local_298 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar13 = 0x44;
        pwVar9 = L"Particle.Module.AnimTrail.TooMany";
        goto LAB_14064954f;
      }
    }
    else {
      cVar5 = FUN_140634d10(local_144,1,3);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too few emitters with Anim Trail Data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_144,1,3);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar12 = local_2b0;
        if ((int)local_2a0 != 0) {
          iVar11 = (int)local_2a0 + -1;
        }
        if (iVar11 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar11;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_290 = 0x21;
        local_298 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar13 = 0x42;
        pwVar9 = L"Particle.Module.AnimTrail.TooFew";
LAB_14064954f:
        FGenericPlatformString::Memcpy(local_298,pwVar9,uVar13);
        FUN_1406423a0(param_3,&local_298,&local_2b8);
        if (local_298 != 0) {
          FMemory::Free();
        }
        if (local_2b8 != (int *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  iVar11 = 0;
  if (((param_4 == 0) || (*(char *)(param_4 + 0xda) == '\0')) && (*(char *)(param_1 + 0xda) != '\0')
     ) {
    if (*(char *)(param_1 + 0xdb) == '\0') {
      cVar5 = FUN_140634d10(local_140,0,0);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too many emitters with GPU Sprites data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_140,0,0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar12 = local_2b0;
        if ((int)local_2a0 != 0) {
          iVar11 = (int)local_2a0 + -1;
        }
        if (iVar11 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar11;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_298 = 0;
        local_290 = 0x22;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar14 = 0x44;
        pwVar9 = L"Particle.Module.GPUSprite.TooMany";
        goto LAB_1406496e5;
      }
    }
    else {
      cVar5 = FUN_140634d10(local_140,1,3);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too few emitters with GPU Sprites data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_140,1,3);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar12 = local_2b0;
        if ((int)local_2a0 != 0) {
          iVar11 = (int)local_2a0 + -1;
        }
        if (iVar11 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar11;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_298 = 0;
        local_290 = 0x21;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar14 = 0x42;
        pwVar9 = L"Particle.Module.GPUSprite.TooFew";
LAB_1406496e5:
        FGenericPlatformString::Memcpy(local_298,pwVar9,uVar14);
        FUN_1406423a0(param_3,&local_298,&local_2b8);
        if (local_298 != 0) {
          FMemory::Free();
        }
        if (local_2b8 != (int *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xdc) == '\0')) && (*(char *)(param_1 + 0xdc) != '\0')
     ) {
    if (*(char *)(param_1 + 0xdd) == '\0') {
      cVar5 = FUN_140634d10(local_13c,0,0);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too many emitters with Mesh data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_13c,0,0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar11 = local_2b0;
        if ((int)local_2a0 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = (int)local_2a0 + -1;
        }
        if (iVar12 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + iVar12 + local_2b0;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_290 = 0x23;
        local_298 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar13 = 0x46;
        pwVar9 = L"Particle.Module.StaticMesh.TooMany";
        goto LAB_1406499b3;
      }
    }
    else {
      cVar5 = FUN_140634d10(local_13c,1,3);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too few emitters with Mesh data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_13c,1,3);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar11 = local_2b0;
        if ((int)local_2a0 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = (int)local_2a0 + -1;
        }
        if (iVar12 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + iVar12 + local_2b0;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar11);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_290 = 0x22;
        local_298 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar13 = 0x44;
        pwVar9 = L"Particle.Module.StaticMesh.TooFew";
LAB_1406499b3:
        FGenericPlatformString::Memcpy(local_298,pwVar9,uVar13);
        FUN_1406423a0(param_3,&local_298,&local_2b8);
        if (local_298 != 0) {
          FMemory::Free();
        }
        if (local_2b8 != (int *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  if (((param_4 == 0) || (*(char *)(param_4 + 0xde) == '\0')) && (*(char *)(param_1 + 0xde) != '\0')
     ) {
    iVar11 = 0;
    if (*(char *)(param_1 + 0xdf) == '\0') {
      cVar5 = FUN_140634d10(local_138,0,0);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too many emitters with Ribbon/Beam data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_138,0,0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar12 = local_2b0;
        if ((int)local_2a0 != 0) {
          iVar11 = (int)local_2a0 + -1;
        }
        if (iVar11 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + iVar11 + local_2b0;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_298 = 0;
        local_290 = 0x23;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar14 = 0x46;
        pwVar9 = L"Particle.Module.RibbonBeam.TooMany";
        goto LAB_140649c68;
      }
    }
    else {
      cVar5 = FUN_140634d10(local_138,1,3);
      if (cVar5 == '\0') {
        FString::PrintfImpl(&local_2b8,L"Too few emitters with Ribbon/Beam data");
        puVar7 = (undefined8 *)FUN_1406366a0(local_288,local_138,1,3);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_2a8,L" (%s)",puVar15);
        pvVar3 = local_2a8;
        iVar12 = local_2b0;
        if ((int)local_2a0 != 0) {
          iVar11 = (int)local_2a0 + -1;
        }
        if (iVar11 != 0) {
          lVar6 = (longlong)local_2b0;
          local_2b0 = (uint)(local_2b0 == 0) + iVar11 + local_2b0;
          if (local_2ac < local_2b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
          }
          pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
        }
        if (local_2a8 != (void *)0x0) {
          FMemory::Free(local_2a8);
        }
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        local_298 = 0;
        local_290 = 0x22;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
        uVar14 = 0x44;
        pwVar9 = L"Particle.Module.RibbonBeam.TooFew";
LAB_140649c68:
        FGenericPlatformString::Memcpy(local_298,pwVar9,uVar14);
        FUN_1406423a0(param_3,&local_298,&local_2b8);
        if (local_298 != 0) {
          FMemory::Free();
        }
        if (local_2b8 != (int *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  local_250 = (undefined2 *)0x0;
  local_248 = 0;
  piVar17 = local_178 + (longlong)(int)local_170 * 0xc;
  piVar16 = local_178;
  if (local_178 != piVar17) {
    do {
      iVar11 = *piVar16;
      if (iVar11 != -1) {
        FName::ToString(piVar16 + 2,&local_250);
        if (*(char *)((longlong)piVar16 + 0x25) != '\0') {
          if (((param_4 == 0) || (*(char *)(param_4 + 0xe0) == '\0')) &&
             (*(char *)(param_1 + 0xe0) != '\0')) {
            if ((*(char *)((longlong)piVar16 + 0x29) == '\0') &&
               (*(char *)((longlong)piVar16 + 0x2a) == '\0')) {
              if ((param_4 == 0) || (*(char *)(param_4 + 0xe0) == '\0')) {
                cVar5 = FUN_140634d10(piVar16[5],*(undefined4 *)(param_1 + 0xe4),5);
                if (cVar5 == '\0') {
                  puVar15 = &DAT_143f3eda8;
                  if ((int)local_248 != 0) {
                    puVar15 = local_250;
                  }
                  FString::PrintfImpl(&local_2b8,
                                      L"Too large of a value for the Required module\'s MaxDrawCount property: [%d] %s"
                                      ,iVar11,puVar15);
                  puVar7 = (undefined8 *)
                           FUN_1406366a0(local_b8,piVar16[5],*(undefined4 *)(param_1 + 0xe4),5);
                  if (*(int *)(puVar7 + 1) == 0) {
                    puVar15 = &DAT_143f3eda8;
                  }
                  else {
                    puVar15 = (undefined2 *)*puVar7;
                  }
                  FString::PrintfImpl(&local_128,L" (%s)",puVar15);
                  pvVar3 = local_128;
                  iVar12 = local_2b0;
                  if (local_120 == 0) {
                    iVar10 = 0;
                  }
                  else {
                    iVar10 = local_120 + -1;
                  }
                  if (iVar10 != 0) {
                    lVar6 = (longlong)local_2b0;
                    local_2b0 = (uint)(local_2b0 == 0) + local_2b0 + iVar10;
                    if (local_2ac < local_2b0) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar12);
                    }
                    pvVar1 = (void *)((longlong)local_2b8 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
                    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
                    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
                  }
                  if (local_128 != (void *)0x0) {
                    FMemory::Free(local_128);
                  }
                  if (local_b8[0] != 0) {
                    FMemory::Free();
                  }
                  local_200[1] = 0x1e;
                  local_200[0] = 0;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_200,0);
                  FGenericPlatformString::Memcpy(local_200[0],L"Particle.MaxDrawCount.TooHigh",0x3c)
                  ;
                  FUN_1406423a0(param_3,local_200,&local_2b8);
                  piVar8 = local_2b8;
                  if (local_200[0] != 0) {
                    FMemory::Free();
                    piVar8 = local_2b8;
                  }
                  goto LAB_14064a071;
                }
              }
            }
            else {
              local_1f0 = (int *)0x0;
              local_1e8 = 0x1f;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
              FGenericPlatformString::Memcpy(local_1f0,L"Particle.MaxDrawCount.Infinite",0x3e);
              puVar15 = &DAT_143f3eda8;
              if ((int)local_248 != 0) {
                puVar15 = local_250;
              }
              FString::PrintfImpl(local_c8,
                                  L"Infinite value for the Required module\'s MaxDrawCount property: [%d] %s"
                                  ,iVar11,puVar15);
              FUN_1406423a0(param_3,&local_1f0,local_c8);
              piVar8 = local_1f0;
              if (local_c8[0] != 0) {
                FMemory::Free();
                piVar8 = local_1f0;
              }
LAB_14064a071:
              if (piVar8 != (int *)0x0) {
                FMemory::Free();
              }
            }
          }
          if (((((param_4 == 0) || (*(char *)(param_4 + 0xe8) == '\0')) &&
               (*(char *)(param_1 + 0xe8) != '\0')) && (*(char *)(param_1 + 0xe9) != '\0')) &&
             ((param_4 == 0 || (*(char *)(param_4 + 0xe8) == '\0')))) {
            cVar5 = FUN_140642e40((char)piVar16[0xb] == '\0',*(char *)(param_1 + 0xe9),0);
            if (cVar5 == '\0') {
              puVar15 = &DAT_143f3eda8;
              if ((int)local_248 != 0) {
                puVar15 = local_250;
              }
              FString::PrintfImpl(&local_240,
                                  L"Invalid configuration for the Required module\'s bKillOnCompleted property: [%d] %s"
                                  ,iVar11,puVar15);
              puVar7 = (undefined8 *)
                       FUN_140650c40(local_a8,(char)piVar16[0xb] == '\0',
                                     *(undefined1 *)(param_1 + 0xe9),0);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = (undefined2 *)*puVar7;
              }
              FString::PrintfImpl(&local_118,L" (%s)",puVar15);
              pvVar3 = local_118;
              iVar12 = local_238;
              if (local_110 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = local_110 + -1;
              }
              if (iVar10 != 0) {
                lVar6 = (longlong)local_238;
                local_238 = (uint)(local_238 == 0) + iVar10 + local_238;
                if (local_234 < local_238) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,iVar12);
                }
                pvVar1 = (void *)((longlong)local_240 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
                *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
              }
              if (local_118 != (void *)0x0) {
                FMemory::Free(local_118);
              }
              if (local_a8[0] != 0) {
                FMemory::Free();
              }
              local_1e0[1] = 0x18;
              local_1e0[0] = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e0,0);
              FGenericPlatformString::Memcpy(local_1e0[0],L"Particle.KillOnComplete",0x30);
              FUN_1406423a0(param_3,local_1e0);
              if (local_1e0[0] != 0) {
                FMemory::Free();
              }
              if (local_240 != (int *)0x0) {
                FMemory::Free();
              }
            }
          }
        }
        if (*(char *)((longlong)piVar16 + 0x27) != '\0') {
          if (*(char *)((longlong)piVar16 + 0x2b) == '\0') {
            if (((param_4 == 0) || (*(char *)(param_4 + 0xf8) == '\0')) &&
               (*(char *)(param_1 + 0xf8) != '\0')) {
              cVar5 = FUN_140634db0(piVar16[7],*(undefined4 *)(param_1 + 0xfc),5,0x38d1b717);
              if (cVar5 == '\0') {
                puVar15 = &DAT_143f3eda8;
                if ((int)local_248 != 0) {
                  puVar15 = local_250;
                }
                FString::PrintfImpl(&local_230,
                                    L"Too large of a value for a Lifetime module\'s Lifetime property: [%d] %s"
                                    ,iVar11,puVar15);
                puVar7 = (undefined8 *)
                         FUN_140636770(local_98,piVar16[7],*(undefined4 *)(param_1 + 0xfc),5);
                if (*(int *)(puVar7 + 1) == 0) {
                  puVar15 = &DAT_143f3eda8;
                }
                else {
                  puVar15 = (undefined2 *)*puVar7;
                }
                FString::PrintfImpl(&local_108,L" (%s)",puVar15);
                pvVar3 = local_108;
                iVar12 = local_228;
                if (local_100 == 0) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = local_100 + -1;
                }
                if (iVar10 != 0) {
                  lVar6 = (longlong)local_228;
                  local_228 = (uint)(local_228 == 0) + local_228 + iVar10;
                  if (local_224 < local_228) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,iVar12);
                  }
                  pvVar1 = (void *)((longlong)local_230 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
                  *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
                }
                if (local_108 != (void *)0x0) {
                  FMemory::Free(local_108);
                }
                if (local_98[0] != 0) {
                  FMemory::Free();
                }
                local_1e0[3] = 0x1a;
                local_1e0[2] = 0;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e0 + 2,0);
                FGenericPlatformString::Memcpy(local_1e0[2],L"Particle.Lifetime.TooHigh",0x34);
                FUN_1406423a0(param_3,local_1e0 + 2);
                piVar8 = local_230;
                if (local_1e0[2] != 0) {
                  FMemory::Free();
                  piVar8 = local_230;
                }
                goto LAB_14064a474;
              }
            }
          }
          else if (((param_4 == 0) || (*(char *)(param_4 + 0xf8) == '\0')) &&
                  (*(char *)(param_1 + 0xf8) != '\0')) {
            local_1c0 = (int *)0x0;
            local_1b8 = 0x1a;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
            FGenericPlatformString::Memcpy(local_1c0,L"Particle.Lifetime.TooHigh",0x34);
            puVar15 = &DAT_143f3eda8;
            if ((int)local_248 != 0) {
              puVar15 = local_250;
            }
            FString::PrintfImpl(local_288,
                                L"Too large of a value (infinite = 0) for a Lifetime module\'s Lifetime property: [%d] %s"
                                ,iVar11,puVar15);
            FUN_1406423a0(param_3,&local_1c0);
            piVar8 = local_1c0;
            if (local_288[0] != 0) {
              FMemory::Free();
              piVar8 = local_1c0;
            }
LAB_14064a474:
            if (piVar8 != (int *)0x0) {
              FMemory::Free();
            }
          }
          if (((param_4 == 0) || (*(char *)(param_4 + 0xf6) == '\0')) &&
             (((*(char *)(param_1 + 0xf6) != '\0' && (*(char *)(param_1 + 0xf7) == '\0')) &&
              ((param_4 == 0 || (*(char *)(param_4 + 0xf6) == '\0')))))) {
            cVar5 = FUN_140642e40(*(undefined1 *)((longlong)piVar16 + 0x2b),0,0);
            if (cVar5 == '\0') {
              puVar15 = &DAT_143f3eda8;
              if ((int)local_248 != 0) {
                puVar15 = local_250;
              }
              FString::PrintfImpl(&local_220,
                                  L"Infinite lifetimes are not allowed for a Lifetime module\'s Lifetime property: [%d] %s"
                                  ,iVar11,puVar15);
              puVar7 = (undefined8 *)
                       FUN_140650c40(local_88,*(undefined1 *)((longlong)piVar16 + 0x2b),
                                     *(undefined1 *)(param_1 + 0xf7),0);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = (undefined2 *)*puVar7;
              }
              FString::PrintfImpl(&local_f8,L" (%s)",puVar15);
              pvVar3 = local_f8;
              iVar12 = local_218;
              if (local_f0 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = local_f0 + -1;
              }
              if (iVar10 != 0) {
                lVar6 = (longlong)local_218;
                local_218 = (uint)(local_218 == 0) + local_218 + iVar10;
                if (local_214 < local_218) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,iVar12);
                }
                pvVar1 = (void *)((longlong)local_220 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
                *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
              }
              if (local_f8 != (void *)0x0) {
                FMemory::Free(local_f8);
              }
              if (local_88[0] != 0) {
                FMemory::Free();
              }
              local_1b0[1] = 0x1a;
              local_1b0[0] = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b0,0);
              FGenericPlatformString::Memcpy(local_1b0[0],L"Particle.Lifetime.TooHigh",0x34);
              FUN_1406423a0(param_3,local_1b0);
              if (local_1b0[0] != 0) {
                FMemory::Free();
              }
              if (local_220 != (int *)0x0) {
                FMemory::Free();
              }
            }
          }
        }
        if ((*(char *)((longlong)piVar16 + 0x26) != '\0') &&
           (((param_4 == 0 || (*(char *)(param_4 + 0xec) == '\0')) &&
            (*(char *)(param_1 + 0xec) != '\0')))) {
          cVar5 = FUN_140634db0(piVar16[6],*(undefined4 *)(param_1 + 0xf0),3,0x38d1b717);
          if (cVar5 == '\0') {
            puVar15 = &DAT_143f3eda8;
            if ((int)local_248 != 0) {
              puVar15 = local_250;
            }
            FString::PrintfImpl(&local_210,
                                L"Too small of a value for the SpawnPerUnit module\'s UnitScalar property: [%d] %s"
                                ,iVar11,puVar15);
            puVar7 = (undefined8 *)
                     FUN_140636770(local_78,piVar16[6],*(undefined4 *)(param_1 + 0xf0),3);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar7;
            }
            FString::PrintfImpl(&local_e8,L" (%s)",puVar15);
            pvVar3 = local_e8;
            iVar12 = local_208;
            if (local_e0 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = local_e0 + -1;
            }
            if (iVar10 != 0) {
              lVar6 = (longlong)local_208;
              local_208 = (uint)(local_208 == 0) + iVar10 + local_208;
              if (local_204 < local_208) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,iVar12);
              }
              pvVar1 = (void *)((longlong)local_210 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
              *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            if (local_78[0] != 0) {
              FMemory::Free();
            }
            local_1b0[3] = 0x2d;
            local_1b0[2] = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b0 + 2,0);
            FGenericPlatformString::Memcpy
                      (local_1b0[2],L"Particle.Module.SpawnPerUnit.MinScalarTooLow",0x5a);
            FUN_1406423a0(param_3,local_1b0 + 2);
            if (local_1b0[2] != 0) {
              FMemory::Free();
            }
            if (local_210 != (int *)0x0) {
              FMemory::Free();
            }
          }
        }
        if ((((char)piVar16[10] != '\0') && ((param_4 == 0 || (*(char *)(param_4 + 0xf4) == '\0'))))
           && ((*(char *)(param_1 + 0xf4) != '\0' &&
               ((*(char *)(param_1 + 0xf5) != '\0' &&
                ((param_4 == 0 || (*(char *)(param_4 + 0xf4) == '\0')))))))) {
          cVar5 = FUN_140642e40(*(char *)((longlong)piVar16 + 0x2d) == '\0',
                                *(char *)(param_1 + 0xf5),0);
          if (cVar5 == '\0') {
            puVar15 = &DAT_143f3eda8;
            if ((int)local_248 != 0) {
              puVar15 = local_250;
            }
            FString::PrintfImpl(&local_298,
                                L"Invalid value for a Light module\'s bUseInverseSquaredFalloff property: [%d] %s"
                                ,iVar11,puVar15);
            puVar7 = (undefined8 *)
                     FUN_140650c40(local_68,*(char *)((longlong)piVar16 + 0x2d) == '\0',
                                   *(undefined1 *)(param_1 + 0xf5),0);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar7;
            }
            FString::PrintfImpl(&local_d8,L" (%s)",puVar15);
            pvVar3 = local_d8;
            uVar4 = local_290;
            if (local_d0 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = local_d0 + -1;
            }
            if (iVar11 != 0) {
              iVar12 = (int)local_290;
              lVar6 = (longlong)(int)local_290;
              iVar10 = (uint)((int)local_290 == 0) + iVar11 + (int)local_290;
              local_290 = CONCAT44(local_290._4_4_,iVar10);
              if (local_290._4_4_ < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar4 & 0xffffffff);
              }
              pvVar1 = (void *)(local_298 + (lVar6 - (ulonglong)(iVar12 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar11 * 2);
              *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            local_2a8 = (void *)0x0;
            local_2a0 = 0x2c;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
            FGenericPlatformString::Memcpy
                      (local_2a8,L"Particle.Module.Light.InverseSquaredFalloff",0x58);
            FUN_1406423a0(param_3,&local_2a8);
            if (local_2a8 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_298 != 0) {
              FMemory::Free();
            }
          }
        }
      }
      piVar16 = piVar16 + 0xc;
    } while (piVar16 != piVar17);
    if (local_250 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_14064a9e8:
  if (local_178 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14064aa40 FUN_14064aa40 body=132 status=ok
// SIG undefined FUN_14064aa40(void)

void FUN_14064aa40(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong local_28 [4];
  
  FUN_140645fa0();
  if (param_2 != 0) {
    lVar2 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14064aa8b;
  }
  param_2 = 0;
LAB_14064aa8b:
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140653750(param_2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14064aad0 FUN_14064aad0 body=4247 status=ok
// SIG undefined FUN_14064aad0(void)

void FUN_14064aad0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  longlong local_60 [2];
  ulonglong uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined2 local_38;
  
  FUN_140645fa0();
  if (param_2 != 0) {
    lVar10 = UNodeMappingContainer::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14064ab44;
  }
  param_2 = 0;
LAB_14064ab44:
  local_60[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_60[1] = 0;
  uStack_50 = 0;
  cVar8 = FUN_140653b20(param_2,local_60);
  uVar5 = uStack_50;
  if (cVar8 != '\0') {
    if (((param_4 == 0) || (*(char *)(param_4 + 0x90) == '\0')) &&
       (*(char *)(param_1 + 0x90) != '\0')) {
      cVar8 = FUN_140634d10(uStack_50 & 0xffffffff,*(undefined4 *)(param_1 + 0x94),3);
      if (cVar8 == '\0') {
        FString::PrintfImpl(&local_b8,L"Too few primitives");
        puVar11 = (undefined8 *)
                  FUN_1406366a0(&local_70,uVar5 & 0xffffffff,*(undefined4 *)(param_1 + 0x94),3);
        iVar13 = 0;
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_a8,L" (%s)",puVar14);
        pvVar6 = local_a8;
        uVar4 = local_b0;
        if ((int)local_a0 != 0) {
          iVar13 = (int)local_a0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_b0;
          lVar10 = (longlong)(int)local_b0;
          iVar9 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar13;
          local_b0 = CONCAT44(local_b0._4_4_,iVar9);
          if (local_b0._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar4 & 0xffffffff);
          }
          puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_a8 = (void *)0x0;
        local_a0 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pvVar6 = local_a8;
        FGenericPlatformString::Memcpy(local_a8,L"Mesh.Collision.TooFew",0x2c);
        lVar10 = (longlong)(int)local_a0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar6,lVar10 * 2);
        }
        puVar14 = local_b8;
        lVar10 = (longlong)(int)local_b0;
        local_80 = (void *)0x0;
        local_78 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    iVar13 = 0;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x98) == '\0')) &&
       (*(char *)(param_1 + 0x98) != '\0')) {
      cVar8 = FUN_140634d10(uVar5 & 0xffffffff,*(undefined4 *)(param_1 + 0x9c),5);
      if (cVar8 == '\0') {
        FString::PrintfImpl(&local_b8,L"Too many primitives");
        puVar11 = (undefined8 *)
                  FUN_1406366a0(&local_70,uVar5 & 0xffffffff,*(undefined4 *)(param_1 + 0x9c),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_a8,L" (%s)",puVar14);
        pvVar6 = local_a8;
        uVar5 = local_b0;
        if ((int)local_a0 != 0) {
          iVar13 = (int)local_a0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_b0;
          lVar10 = (longlong)(int)local_b0;
          iVar9 = (uint)((int)local_b0 == 0) + iVar13 + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar9);
          if (local_b0._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
          }
          puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_a8 = (void *)0x0;
        local_a0 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pvVar6 = local_a8;
        FGenericPlatformString::Memcpy(local_a8,L"Mesh.Collision.TooMany",0x2e);
        lVar10 = (longlong)(int)local_a0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar6,lVar10 * 2);
        }
        puVar14 = local_b8;
        lVar10 = (longlong)(int)local_b0;
        local_80 = (void *)0x0;
        local_78 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    uVar7 = uStack_4c;
    if (((param_4 == 0) || (*(char *)(param_4 + 0xa0) == '\0')) &&
       (*(char *)(param_1 + 0xa0) != '\0')) {
      cVar8 = FUN_140634d10(uStack_4c,*(undefined4 *)(param_1 + 0xa4),3);
      if (cVar8 == '\0') {
        FString::PrintfImpl(&local_b8,L"Too small of a value for the light-map resolution");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar7,*(undefined4 *)(param_1 + 0xa4),3);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_a8,L" (%s)",puVar14);
        pvVar6 = local_a8;
        uVar5 = local_b0;
        if ((int)local_a0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_a0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_b0;
          lVar10 = (longlong)(int)local_b0;
          iVar9 = (uint)((int)local_b0 == 0) + iVar13 + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar9);
          if (local_b0._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
          }
          puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_a0 = 0x19;
        local_a8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pvVar6 = local_a8;
        FGenericPlatformString::Memcpy(local_a8,L"Mesh.Lightmap.Res.TooLow",0x32);
        lVar10 = (longlong)(int)local_a0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar6,lVar10 * 2);
        }
        puVar14 = local_b8;
        lVar10 = (longlong)(int)local_b0;
        local_80 = (void *)0x0;
        local_78 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0xa8) == '\0')) &&
       (*(char *)(param_1 + 0xa8) != '\0')) {
      cVar8 = FUN_140634d10(uVar7,*(undefined4 *)(param_1 + 0xac),5);
      if (cVar8 == '\0') {
        FString::PrintfImpl(&local_b8,L"Too large of a value for the light-map resolution");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,uVar7,*(undefined4 *)(param_1 + 0xac),5);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_a8,L" (%s)",puVar14);
        pvVar6 = local_a8;
        uVar5 = local_b0;
        if ((int)local_a0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_a0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_b0;
          lVar10 = (longlong)(int)local_b0;
          iVar9 = (uint)((int)local_b0 == 0) + iVar13 + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar9);
          if (local_b0._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
          }
          puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_a8 = (void *)0x0;
        local_a0 = 0x1a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pvVar6 = local_a8;
        FGenericPlatformString::Memcpy(local_a8,L"Mesh.Lightmap.Res.TooHigh",0x34);
        lVar10 = (longlong)(int)local_a0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar6,lVar10 * 2);
        }
        puVar14 = local_b8;
        lVar10 = (longlong)(int)local_b0;
        local_80 = (void *)0x0;
        local_78 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0xb0) == '\0')) &&
       (*(char *)(param_1 + 0xb0) != '\0')) {
      cVar8 = FUN_140634d10(local_48,*(undefined4 *)(param_1 + 0xb4),3);
      if (cVar8 == '\0') {
        FString::PrintfImpl(&local_b8,L"Too small of a value for the light-map index");
        puVar11 = (undefined8 *)FUN_1406366a0(&local_70,local_48,*(undefined4 *)(param_1 + 0xb4),3);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        FString::PrintfImpl(&local_a8,L" (%s)",puVar14);
        pvVar6 = local_a8;
        uVar5 = local_b0;
        if ((int)local_a0 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)local_a0 + -1;
        }
        if (iVar13 != 0) {
          iVar3 = (int)local_b0;
          lVar10 = (longlong)(int)local_b0;
          iVar9 = (uint)((int)local_b0 == 0) + iVar13 + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar9);
          if (local_b0._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
          }
          puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar13 * 2);
          puVar14[iVar13] = 0;
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        local_a0 = 0x19;
        local_a8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pvVar6 = local_a8;
        FGenericPlatformString::Memcpy(local_a8,L"Mesh.Lightmap.CoordIndex",0x32);
        lVar10 = (longlong)(int)local_a0;
        local_98[0] = 3;
        local_90 = (void *)0x0;
        local_88 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_90,pvVar6,lVar10 * 2);
        }
        puVar14 = local_b8;
        lVar10 = (longlong)(int)local_b0;
        local_80 = (void *)0x0;
        local_78 = (int)local_b0;
        if ((int)local_b0 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_b0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_98);
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0xb8) == '\0')) &&
       ((*(char *)(param_1 + 0xb8) != '\0' &&
        (cVar8 = FUN_140634d10(local_48,*(undefined4 *)(param_1 + 0xbc),5), cVar8 == '\0')))) {
      FString::PrintfImpl(&local_b8,L"Too large of a value for the light-map index");
      puVar11 = (undefined8 *)FUN_1406366a0(&local_70,local_48,*(undefined4 *)(param_1 + 0xbc),5);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar11;
      }
      FString::PrintfImpl(&local_a8,L" (%s)",puVar14);
      pvVar6 = local_a8;
      uVar5 = local_b0;
      if ((int)local_a0 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = (int)local_a0 + -1;
      }
      if (iVar13 != 0) {
        iVar3 = (int)local_b0;
        lVar10 = (longlong)(int)local_b0;
        iVar9 = (uint)((int)local_b0 == 0) + iVar13 + (int)local_b0;
        local_b0 = CONCAT44(local_b0._4_4_,iVar9);
        if (local_b0._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
        }
        puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar13 * 2);
        puVar14[iVar13] = 0;
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free();
      }
      local_a8 = (void *)0x0;
      local_a0 = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      pvVar6 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Mesh.Lightmap.CoordIndex",0x32);
      lVar10 = (longlong)(int)local_a0;
      local_98[0] = 3;
      local_90 = (void *)0x0;
      local_88 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_84 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_90,pvVar6,lVar10 * 2);
      }
      puVar14 = local_b8;
      lVar10 = (longlong)(int)local_b0;
      local_80 = (void *)0x0;
      local_78 = (int)local_b0;
      if ((int)local_b0 == 0) {
        local_74 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_b0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_80,puVar14,lVar10 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_98);
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if ((((param_4 == 0) || (*(char *)(param_4 + 0xd0) == '\0')) &&
        (*(char *)(param_1 + 0xd0) != '\0')) && ((char)local_38 != *(char *)(param_1 + 0xd1))) {
      FString::PrintfImpl(&local_a8);
      local_b8 = (undefined2 *)0x0;
      local_b0 = 0x25;
      if (*(char *)(param_1 + 0xd1) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
        pwVar12 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
        pwVar12 = L"expected a true value, but was false";
      }
      puVar14 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,pwVar12,0x4a);
      puVar15 = &DAT_143f3eda8;
      if ((int)local_b0 != 0) {
        puVar15 = puVar14;
      }
      FString::PrintfImpl(&local_70,L" (%s)",puVar15);
      pvVar6 = local_70;
      uVar5 = local_a0;
      if (local_68 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_68 + -1;
      }
      if (iVar13 != 0) {
        iVar3 = (int)local_a0;
        lVar10 = (longlong)(int)local_a0;
        iVar9 = (uint)((int)local_a0 == 0) + iVar13 + (int)local_a0;
        local_a0 = CONCAT44(local_a0._4_4_,iVar9);
        if (local_a0._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
        }
        pvVar1 = (void *)((longlong)local_a8 + (lVar10 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar6,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar13 * 2) = 0;
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      local_b0 = 0x10;
      local_b8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      puVar14 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,L"Mesh.CastShadow",0x20);
      lVar10 = (longlong)(int)local_b0;
      local_98[0] = 3;
      local_90 = (void *)0x0;
      local_88 = (int)local_b0;
      if ((int)local_b0 == 0) {
        local_84 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_b0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_90,puVar14,lVar10 * 2);
      }
      pvVar6 = local_a8;
      lVar10 = (longlong)(int)local_a0;
      local_80 = (void *)0x0;
      local_78 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_74 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_80,pvVar6,lVar10 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_98);
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0xd2) == '\0')) &&
       ((*(char *)(param_1 + 0xd2) != '\0' && (local_38._1_1_ != *(char *)(param_1 + 0xd3))))) {
      FString::PrintfImpl(&local_a8);
      local_b8 = (undefined2 *)0x0;
      local_b0 = 0x25;
      if (*(char *)(param_1 + 0xd3) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
        pwVar12 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
        pwVar12 = L"expected a true value, but was false";
      }
      puVar14 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,pwVar12,0x4a);
      puVar15 = &DAT_143f3eda8;
      if ((int)local_b0 != 0) {
        puVar15 = puVar14;
      }
      FString::PrintfImpl(&local_70,L" (%s)",puVar15);
      pvVar6 = local_70;
      uVar5 = local_a0;
      iVar13 = 0;
      if (local_68 != 0) {
        iVar13 = local_68 + -1;
      }
      if (iVar13 != 0) {
        iVar3 = (int)local_a0;
        lVar10 = (longlong)(int)local_a0;
        iVar9 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
        local_a0 = CONCAT44(local_a0._4_4_,iVar9);
        if (local_a0._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
        }
        pvVar1 = (void *)((longlong)local_a8 + (lVar10 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar6,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar13 * 2) = 0;
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      local_b8 = (undefined2 *)0x0;
      local_b0 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"Mesh.EnableCollision",0x2a);
      local_98[0] = 3;
      FString::FString(&local_90,&local_b8);
      FString::FString(&local_80,&local_a8);
      (**(code **)(*param_3 + 8))(param_3,local_98);
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14064bb70 FUN_14064bb70 body=2729 status=ok
// SIG undefined FUN_14064bb70(void)

void FUN_14064bb70(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  void *_Dst;
  bool bVar1;
  ulonglong uVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  longlong local_50 [4];
  undefined4 local_30;
  char local_2b;
  
  if (param_2 != 0) {
    lVar7 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14064bbe0;
  }
  param_2 = 0;
LAB_14064bbe0:
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  cVar4 = FUN_140653d20(param_2,local_50);
  lVar7 = local_50[2];
  if (cVar4 != '\0') {
    iVar11 = 0;
    if (((param_4 == 0) || (*(char *)(param_4 + 0x38) == '\0')) &&
       (*(char *)(param_1 + 0x38) != '\0')) {
      cVar4 = FUN_140642d70(local_50[2],*(undefined8 *)(param_1 + 0x40),0);
      if (cVar4 == '\0') {
        FString::PrintfImpl(&local_a8,L"CompressionMethod mismatch");
        puVar8 = (undefined8 *)FUN_140650b20(&local_60,lVar7,*(undefined8 *)(param_1 + 0x40),0);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(&local_98,L" (%s)",puVar12);
        pvVar3 = local_98;
        uVar2 = local_a0;
        iVar10 = iVar11;
        if ((int)local_90 != 0) {
          iVar10 = (int)local_90 + -1;
        }
        if (iVar10 != 0) {
          iVar6 = (int)local_a0;
          lVar7 = (longlong)(int)local_a0;
          iVar5 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar10;
          local_a0 = CONCAT44(local_a0._4_4_,iVar5);
          if (local_a0._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar2 & 0xffffffff);
          }
          puVar12 = local_a8 + (lVar7 - (ulonglong)(iVar6 != 0));
          _guard_xfg_dispatch_icall_nop(puVar12,pvVar3,(longlong)iVar10 * 2);
          puVar12[iVar10] = 0;
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        local_98 = (void *)0x0;
        local_90 = 0x14;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar3 = local_98;
        FGenericPlatformString::Memcpy(local_98,L"Texture.Compression",0x28);
        lVar7 = (longlong)(int)local_90;
        local_88[0] = 3;
        local_80 = (void *)0x0;
        local_78 = (int)local_90;
        if ((int)local_90 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_90 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,pvVar3,lVar7 * 2);
        }
        puVar12 = local_a8;
        lVar7 = (longlong)(int)local_a0;
        local_70 = (void *)0x0;
        local_68 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_64 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_70,puVar12,lVar7 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_88);
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    lVar7 = local_50[3];
    if (((param_4 == 0) || (*(char *)(param_4 + 0x48) == '\0')) &&
       (*(char *)(param_1 + 0x48) != '\0')) {
      cVar4 = FUN_140642d70(local_50[3],*(undefined8 *)(param_1 + 0x50),0);
      if (cVar4 == '\0') {
        FString::PrintfImpl(&local_a8,L"LOD-group mismatch");
        puVar8 = (undefined8 *)FUN_140650b20(&local_60,lVar7,*(undefined8 *)(param_1 + 0x50),0);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(&local_98,L" (%s)",puVar12);
        pvVar3 = local_98;
        uVar2 = local_a0;
        if ((int)local_90 != 0) {
          iVar11 = (int)local_90 + -1;
        }
        if (iVar11 != 0) {
          iVar10 = (int)local_a0;
          lVar7 = (longlong)(int)local_a0;
          iVar6 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar11;
          local_a0 = CONCAT44(local_a0._4_4_,iVar6);
          if (local_a0._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar2 & 0xffffffff);
          }
          puVar12 = local_a8 + (lVar7 - (ulonglong)(iVar10 != 0));
          _guard_xfg_dispatch_icall_nop(puVar12,pvVar3,(longlong)iVar11 * 2);
          puVar12[iVar11] = 0;
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        local_98 = (void *)0x0;
        local_90 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar3 = local_98;
        FGenericPlatformString::Memcpy(local_98,L"Texture.LODGroup",0x22);
        lVar7 = (longlong)(int)local_90;
        local_88[0] = 3;
        local_80 = (void *)0x0;
        local_78 = (int)local_90;
        if ((int)local_90 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_90 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,pvVar3,lVar7 * 2);
        }
        puVar12 = local_a8;
        lVar7 = (longlong)(int)local_a0;
        local_70 = (void *)0x0;
        local_68 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_64 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_70,puVar12,lVar7 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_88);
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x58) == '\0')) &&
       (*(char *)(param_1 + 0x58) != '\0')) {
      cVar4 = FUN_140634d10(local_30,*(undefined4 *)(param_1 + 0x5c),3);
      if (cVar4 == '\0') {
        FString::PrintfImpl(&local_a8,L"Too small of a value for the LOD-bias");
        puVar8 = (undefined8 *)FUN_1406366a0(&local_60,local_30,*(undefined4 *)(param_1 + 0x5c),3);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(&local_98,L" (%s)",puVar12);
        pvVar3 = local_98;
        uVar2 = local_a0;
        if ((int)local_90 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = (int)local_90 + -1;
        }
        if (iVar11 != 0) {
          iVar10 = (int)local_a0;
          lVar7 = (longlong)(int)local_a0;
          iVar6 = (uint)((int)local_a0 == 0) + iVar11 + (int)local_a0;
          local_a0 = CONCAT44(local_a0._4_4_,iVar6);
          if (local_a0._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar2 & 0xffffffff);
          }
          puVar12 = local_a8 + (lVar7 - (ulonglong)(iVar10 != 0));
          _guard_xfg_dispatch_icall_nop(puVar12,pvVar3,(longlong)iVar11 * 2);
          puVar12[iVar11] = 0;
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        local_90 = 0x17;
        local_98 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar3 = local_98;
        FGenericPlatformString::Memcpy(local_98,L"Texture.LODBias.TooLow",0x2e);
        lVar7 = (longlong)(int)local_90;
        local_88[0] = 3;
        local_80 = (void *)0x0;
        local_78 = (int)local_90;
        if ((int)local_90 == 0) {
          local_74 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_90 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_80,pvVar3,lVar7 * 2);
        }
        puVar12 = local_a8;
        lVar7 = (longlong)(int)local_a0;
        local_70 = (void *)0x0;
        local_68 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_64 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_70,puVar12,lVar7 * 2);
        }
        (**(code **)(*param_3 + 8))(param_3,local_88);
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if ((((param_4 == 0) || (*(char *)(param_4 + 0x60) == '\0')) &&
        (*(char *)(param_1 + 0x60) != '\0')) &&
       (cVar4 = FUN_140634d10(local_30,*(undefined4 *)(param_1 + 100),5), cVar4 == '\0')) {
      FString::PrintfImpl(&local_a8,L"Too large of a value for the LOD-bias");
      puVar8 = (undefined8 *)FUN_1406366a0(&local_60,local_30,*(undefined4 *)(param_1 + 100),5);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_98,L" (%s)",puVar12);
      pvVar3 = local_98;
      uVar2 = local_a0;
      if ((int)local_90 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)local_90 + -1;
      }
      if (iVar11 != 0) {
        iVar10 = (int)local_a0;
        lVar7 = (longlong)(int)local_a0;
        iVar6 = (uint)((int)local_a0 == 0) + iVar11 + (int)local_a0;
        local_a0 = CONCAT44(local_a0._4_4_,iVar6);
        if (local_a0._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar2 & 0xffffffff);
        }
        puVar12 = local_a8 + (lVar7 - (ulonglong)(iVar10 != 0));
        _guard_xfg_dispatch_icall_nop(puVar12,pvVar3,(longlong)iVar11 * 2);
        puVar12[iVar11] = 0;
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
      local_98 = (void *)0x0;
      local_90 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      pvVar3 = local_98;
      FGenericPlatformString::Memcpy(local_98,L"Texture.LODBias.TooHigh",0x30);
      lVar7 = (longlong)(int)local_90;
      local_88[0] = 3;
      local_80 = (void *)0x0;
      local_78 = (int)local_90;
      if ((int)local_90 == 0) {
        local_74 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_90 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_80,pvVar3,lVar7 * 2);
      }
      puVar12 = local_a8;
      lVar7 = (longlong)(int)local_a0;
      local_70 = (void *)0x0;
      local_68 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_64 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_70,puVar12,lVar7 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_88);
      if (local_70 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (((param_4 == 0) || (*(char *)(param_4 + 0x6a) == '\0')) &&
       ((*(char *)(param_1 + 0x6a) != '\0' && (local_2b != *(char *)(param_1 + 0x6b))))) {
      FString::PrintfImpl(&local_98);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0x25;
      if (*(char *)(param_1 + 0x6b) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar9 = L"expected a false value, but was true";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pwVar9 = L"expected a true value, but was false";
      }
      puVar12 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pwVar9,0x4a);
      puVar13 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar13 = puVar12;
      }
      FString::PrintfImpl(&local_60,L" (%s)",puVar13);
      pvVar3 = local_60;
      uVar2 = local_90;
      iVar11 = 0;
      if (local_58 != 0) {
        iVar11 = local_58 + -1;
      }
      if (iVar11 != 0) {
        iVar10 = (int)local_90;
        lVar7 = (longlong)(int)local_90;
        iVar6 = (uint)((int)local_90 == 0) + iVar11 + (int)local_90;
        local_90 = CONCAT44(local_90._4_4_,iVar6);
        if (local_90._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
        }
        _Dst = (void *)((longlong)local_98 + (lVar7 - (ulonglong)(iVar10 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar3,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar11 * 2) = 0;
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      if (puVar12 != (undefined2 *)0x0) {
        FMemory::Free(puVar12);
      }
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar12 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,L"Texture.sRGB",0x1a);
      lVar7 = (longlong)(int)local_a0;
      local_88[0] = 3;
      local_80 = (void *)0x0;
      local_78 = (int)local_a0;
      if ((int)local_a0 == 0) {
        local_74 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_80,puVar12,lVar7 * 2);
      }
      pvVar3 = local_98;
      lVar7 = (longlong)(int)local_90;
      local_70 = (void *)0x0;
      local_68 = (int)local_90;
      if ((int)local_90 == 0) {
        local_64 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_90 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_70,pvVar3,lVar7 * 2);
      }
      (**(code **)(*param_3 + 8))(param_3,local_88);
      if (local_70 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar12 != (undefined2 *)0x0) {
        FMemory::Free(puVar12);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14064c620 FUN_14064c620 body=109 status=ok
// SIG undefined FUN_14064c620(void)

void FUN_14064c620(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_14217f430(plVar1 + 2);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 14064c690 Empty body=418 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar3) goto LAB_14064c761;
      uVar4 = puVar8[lVar6 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_44 = (iStack_40 - iVar7) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14064c761:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      lVar5 = (longlong)iStack_1c;
      lVar6 = *param_1;
      if ((*(char *)(lVar6 + 0x18 + lVar5 * 0x28) != '\0') &&
         (*(undefined1 *)(lVar6 + 0x18 + lVar5 * 0x28) = 0,
         *(longlong *)(lVar6 + 8 + lVar5 * 0x28) != 0)) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14064c840 FUN_14064c840 body=12 status=ok
// SIG undefined FUN_14064c840(void)

undefined8 FUN_14064c840(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),
                  *(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x40));
}



// FUNCTION 14064c850 FUN_14064c850 body=1304 status=ok
// SIG undefined FUN_14064c850(void)

void FUN_14064c850(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined2 *local_90;
  int local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [2];
  
  plVar9 = (longlong *)operator_new(0x38);
  lVar4 = (longlong)local_a8;
  plVar17 = (longlong *)0x0;
  local_a8._0_4_ = (undefined4)param_1;
  uVar5 = (undefined4)local_a8;
  local_a8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = local_a8._4_4_;
  local_80 = plVar17;
  if (plVar9 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar9[1] = 0;
    plVar9[2] = 0;
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,uVar2);
    local_98 = 2;
    plVar9[3] = 0;
    *(undefined4 *)(plVar9 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar9 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(plVar9 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = uStack_a0._4_4_;
    *plVar9 = (longlong)&PTR_FUN_144027788;
    plVar9[6] = CONCAT44(uStack_94,2);
    local_80 = plVar9;
    lVar4 = param_1;
  }
  local_a8 = (longlong *)lVar4;
  plVar10 = (longlong *)operator_new(0x18);
  plVar9 = plVar17;
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
    plVar10[2] = (longlong)local_80;
    plVar9 = plVar10;
  }
  plVar10 = local_80 + 1;
  if (local_80 == (longlong *)0x0) {
    plVar10 = plVar17;
  }
  local_78 = plVar9;
  if (plVar10 != (longlong *)0x0) {
    if ((*plVar10 != 0) && (plVar10[1] != 0)) {
      piVar1 = (int *)(plVar10[1] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) goto LAB_14064c9c5;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)local_80;
    plVar14 = (longlong *)plVar10[1];
    if (plVar9 != plVar14) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar14 = (longlong *)plVar10[1];
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      plVar10[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14064c9c5:
  uVar11 = FUN_141649d10();
  FUN_1416473a0(uVar11,&local_80);
  if (param_3 != '\0') {
    puVar12 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    puVar13 = puVar12 + *(int *)(DAT_146b17150 + 0xc20);
    for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
      if (((*(char *)*puVar12 - 1U & 0xfd) == 0) &&
         (lVar4 = *(longlong *)((char *)*puVar12 + 0x288), lVar4 != 0)) {
        FUN_1428cc8c0(lVar4,&local_90);
        if (*(int *)(param_2 + 1) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = (undefined2 *)*param_2;
        }
        puVar15 = &DAT_143f3eda8;
        if (local_88 != 0) {
          puVar15 = local_90;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar16);
        if ((iVar8 == 0) || (cVar7 = FString::EndsWith(param_2,&local_90,1), cVar7 != '\0')) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (local_90 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (bVar3) {
          return;
        }
        break;
      }
    }
  }
  puVar13 = (undefined8 *)operator_new(0x40);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    uStack_40 = *(undefined4 *)(param_1 + 0x138);
    local_48 = param_1;
    FString::FString(local_38,param_2);
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = &PTR_FUN_144027768;
    *(undefined4 *)(puVar13 + 4) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar13 + 0x24) = local_48._4_4_;
    *(undefined4 *)(puVar13 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_3c;
    FString::FString(puVar13 + 6,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  plVar10 = (longlong *)operator_new(0x18);
  plVar9 = plVar17;
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
    plVar10[2] = (longlong)puVar13;
    plVar9 = plVar10;
  }
  plVar10 = puVar13 + 1;
  if (puVar13 == (undefined8 *)0x0) {
    plVar10 = plVar17;
  }
  local_70 = puVar13;
  local_68 = plVar9;
  if (plVar10 != (longlong *)0x0) {
    if ((*plVar10 != 0) && (plVar10[1] != 0)) {
      piVar1 = (int *)(plVar10[1] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) goto LAB_14064cbe5;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)puVar13;
    plVar14 = (longlong *)plVar10[1];
    if (plVar9 != plVar14) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar14 = (longlong *)plVar10[1];
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      plVar10[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14064cbe5:
  uVar11 = FUN_141649d10();
  FUN_1416473a0(uVar11,&local_70);
  plVar10 = (longlong *)operator_new(0x38);
  plVar9 = plVar17;
  if (plVar10 != (longlong *)0x0) {
    uStack_58 = *(undefined4 *)(param_1 + 0x138);
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = (longlong)&PTR_FUN_144027778;
    *(undefined4 *)(plVar10 + 4) = uVar5;
    *(undefined4 *)((longlong)plVar10 + 0x24) = uVar6;
    *(undefined4 *)(plVar10 + 5) = uStack_58;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = uStack_54;
    plVar10[6] = CONCAT44(uStack_4c,0x3fc00000);
    plVar9 = plVar10;
    local_60 = param_1;
  }
  plVar14 = (longlong *)operator_new(0x18);
  plVar10 = plVar17;
  if (plVar14 != (longlong *)0x0) {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_143f3f2e0;
    plVar14[2] = (longlong)plVar9;
    plVar10 = plVar14;
  }
  plVar14 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar14 = plVar17;
  }
  local_a8 = plVar9;
  uStack_a0 = plVar10;
  if (plVar14 != (longlong *)0x0) {
    if ((*plVar14 != 0) && (plVar14[1] != 0)) {
      piVar1 = (int *)(plVar14[1] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) goto LAB_14064cd36;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar14 = (longlong)plVar9;
    plVar9 = (longlong *)plVar14[1];
    if (plVar10 != plVar9) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar14[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar14[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_14064cd36:
  uVar11 = FUN_141649d10();
  FUN_1416473a0(uVar11,&local_a8);
  return;
}



// FUNCTION 14064cd70 FUN_14064cd70 body=3180 status=ok
// SIG undefined FUN_14064cd70(void)

void FUN_14064cd70(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [80];
  
  plVar4 = (longlong *)operator_new(0x38);
  plVar10 = (longlong *)0x0;
  local_128 = (undefined4)param_1;
  uStack_124 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_108 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar4[1] = 0;
    plVar4[2] = 0;
    local_118 = CONCAT44(local_118._4_4_,2);
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    plVar4[3] = 0;
    plVar4[6] = local_118;
    *plVar4 = (longlong)&PTR_FUN_144027788;
    local_108 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_108;
    plVar4 = plVar5;
  }
  plVar5 = local_108 + 1;
  if (local_108 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_100 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064cef1;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_108;
    plVar8 = (longlong *)plVar5[1];
    if (plVar4 != plVar8) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064cef1:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_108);
  plVar4 = (longlong *)operator_new(0x40);
  local_f8 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar4[1] = 0;
    plVar4[2] = 0;
    uStack_110 = CONCAT31(uStack_110._1_3_,param_5);
    plVar4[3] = 0;
    *plVar4 = (longlong)&PTR_FUN_144027798;
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    local_118 = CONCAT44(param_4,param_3);
    *(undefined4 *)(plVar4 + 6) = param_3;
    *(undefined4 *)((longlong)plVar4 + 0x34) = param_4;
    *(undefined4 *)(plVar4 + 7) = uStack_110;
    *(undefined4 *)((longlong)plVar4 + 0x3c) = uStack_10c;
    local_f8 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_f8;
    plVar4 = plVar5;
  }
  plVar5 = local_f8 + 1;
  if (local_f8 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_f0 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064d058;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_f8;
    plVar8 = (longlong *)plVar5[1];
    if (plVar4 != plVar8) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064d058:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_f8);
  plVar4 = (longlong *)operator_new(0x38);
  local_e8 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar4[1] = 0;
    plVar4[2] = 0;
    local_118 = CONCAT44(local_118._4_4_,2);
    plVar4[3] = 0;
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    *plVar4 = (longlong)&PTR_FUN_144027788;
    plVar4[6] = local_118;
    local_e8 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_e8;
    plVar4 = plVar5;
  }
  plVar5 = local_e8 + 1;
  if (local_e8 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_e0 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064d1ac;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_e8;
    plVar8 = (longlong *)plVar5[1];
    if (plVar4 != plVar8) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064d1ac:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_e8);
  plVar4 = (longlong *)operator_new(0x38);
  local_d8 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    uVar11 = (undefined4)((ulonglong)local_118 >> 0x20);
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (longlong)&PTR_FUN_1440277a8;
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    plVar4[6] = CONCAT44(uVar11,0x40a00000);
    local_118 = CONCAT44(uVar11,0x40a00000);
    local_d8 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_d8;
    plVar4 = plVar5;
  }
  plVar5 = local_d8 + 1;
  if (local_d8 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_d0 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064d30a;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_d8;
    plVar8 = (longlong *)plVar5[1];
    if (plVar4 != plVar8) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064d30a:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_d8);
  if (param_2 != 0) {
    lVar7 = FUN_1428dfc70();
    lVar9 = param_2;
    do {
      if (lVar9 == lVar7) {
        lVar9 = operator_new(0x48);
        plVar4 = plVar10;
        if (lVar9 != 0) {
          uVar6 = FUN_14063de70(local_78,param_1,param_2);
          plVar4 = (longlong *)FUN_14063ddd0(lVar9,uVar6);
        }
        plVar8 = (longlong *)operator_new(0x18);
        plVar5 = plVar10;
        if (plVar8 != (longlong *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
          *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
          plVar8[2] = (longlong)plVar4;
          plVar5 = plVar8;
        }
        plVar8 = plVar4 + 1;
        if (plVar4 == (longlong *)0x0) {
          plVar8 = plVar10;
        }
        local_c8 = plVar4;
        local_c0 = plVar5;
        if (plVar8 != (longlong *)0x0) {
          if ((*plVar8 != 0) && (plVar8[1] != 0)) {
            piVar1 = (int *)(plVar8[1] + 8);
            LOCK();
            iVar3 = *piVar1;
            if (iVar3 == 0) {
              *piVar1 = 0;
              iVar3 = 0;
            }
            UNLOCK();
            if (0 < iVar3) goto LAB_14064d45c;
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          *plVar8 = (longlong)plVar4;
          plVar4 = (longlong *)plVar8[1];
          if (plVar5 != plVar4) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
              UNLOCK();
              plVar4 = (longlong *)plVar8[1];
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
            plVar8[1] = (longlong)plVar5;
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar5 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
LAB_14064d45c:
        uVar6 = FUN_141649d10();
        FUN_1416473a0(uVar6,&local_c8);
        break;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  plVar4 = (longlong *)operator_new(0x30);
  local_b8 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (longlong)&PTR_FUN_1440277c8;
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    local_b8 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_b8;
    plVar4 = plVar5;
  }
  plVar5 = local_b8 + 1;
  if (local_b8 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_b0 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064d599;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_b8;
    plVar8 = (longlong *)plVar5[1];
    if (plVar4 != plVar8) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064d599:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_b8);
  if (param_2 != 0) {
    lVar9 = FUN_1428dfc70();
    do {
      if (param_2 == lVar9) {
        plVar4 = (longlong *)operator_new(0x30);
        local_a8 = plVar10;
        if (plVar4 != (longlong *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 0x138);
          plVar4[1] = 0;
          plVar4[2] = 0;
          plVar4[3] = 0;
          *plVar4 = (longlong)&PTR_FUN_1440277d8;
          *(undefined4 *)(plVar4 + 4) = local_128;
          *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
          *(undefined4 *)(plVar4 + 5) = uVar2;
          *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
          local_a8 = plVar4;
        }
        plVar5 = (longlong *)operator_new(0x18);
        plVar4 = plVar10;
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
          plVar5[2] = (longlong)local_a8;
          plVar4 = plVar5;
        }
        plVar5 = local_a8 + 1;
        if (local_a8 == (longlong *)0x0) {
          plVar5 = plVar10;
        }
        local_a0 = plVar4;
        if (plVar5 != (longlong *)0x0) {
          if ((*plVar5 != 0) && (plVar5[1] != 0)) {
            piVar1 = (int *)(plVar5[1] + 8);
            LOCK();
            iVar3 = *piVar1;
            if (iVar3 == 0) {
              *piVar1 = 0;
              iVar3 = 0;
            }
            UNLOCK();
            if (0 < iVar3) goto LAB_14064d6fb;
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          *plVar5 = (longlong)local_a8;
          plVar8 = (longlong *)plVar5[1];
          if (plVar4 != plVar8) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)plVar5[1];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            plVar5[1] = (longlong)plVar4;
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar4 + 1;
            lVar9 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
LAB_14064d6fb:
        uVar6 = FUN_141649d10();
        FUN_1416473a0(uVar6,&local_a8);
        break;
      }
      param_2 = *(longlong *)(param_2 + 0x30);
    } while (param_2 != 0);
  }
  plVar4 = (longlong *)operator_new(0x38);
  local_98 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar4[1] = 0;
    plVar4[2] = 0;
    local_118 = CONCAT71(local_118._1_7_,param_6);
    plVar4[3] = 0;
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    *plVar4 = (longlong)&PTR_FUN_1440277e8;
    plVar4[6] = local_118;
    local_98 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_98;
    plVar4 = plVar5;
  }
  plVar5 = local_98 + 1;
  if (local_98 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_90 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064d84f;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_98;
    plVar8 = (longlong *)plVar5[1];
    if (plVar4 != plVar8) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064d84f:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_98);
  plVar4 = (longlong *)operator_new(0x38);
  local_88 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    plVar4[1] = 0;
    plVar4[2] = 0;
    local_118 = CONCAT44(local_118._4_4_,2);
    plVar4[3] = 0;
    *(undefined4 *)(plVar4 + 4) = local_128;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_124;
    *(undefined4 *)(plVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_11c;
    *plVar4 = (longlong)&PTR_FUN_144027788;
    plVar4[6] = local_118;
    local_88 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)local_88;
    plVar4 = plVar5;
  }
  plVar5 = local_88 + 1;
  if (local_88 == (longlong *)0x0) {
    plVar5 = plVar10;
  }
  local_80 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14064d9a0;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)local_88;
    plVar10 = (longlong *)plVar5[1];
    if (plVar4 != plVar10) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar5[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar4 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14064d9a0:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_88);
  return;
}



// FUNCTION 14064da30 FUN_14064da30 body=42 status=ok
// SIG undefined FUN_14064da30(void)

void FUN_14064da30(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),param_2,&local_18);
  return;
}



// FUNCTION 14064da60 FUN_14064da60 body=55 status=ok
// SIG undefined FUN_14064da60(void)

undefined8 FUN_14064da60(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14064daa0 FUN_14064daa0 body=44 status=ok
// SIG undefined FUN_14064daa0(void)

undefined8 FUN_14064daa0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),param_2,&local_18);
  return 1;
}



// FUNCTION 14064dad0 FUN_14064dad0 body=795 status=ok
// SIG undefined FUN_14064dad0(void)

void FUN_14064dad0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong local_48 [2];
  
  if ((int)param_1[1] == (int)param_2[1]) {
    uVar15 = 0;
    iVar16 = 0;
    iVar6 = *(int *)(param_5 + 8) + -1;
    if (*(int *)(param_5 + 8) == 0) {
      iVar6 = iVar16;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    uVar12 = (ulonglong)(*(int *)(param_6 + 8) - 1);
    if (*(int *)(param_6 + 8) == 0) {
      uVar12 = uVar15;
    }
    iVar7 = *(int *)(param_7 + 1) + -1;
    if (*(int *)(param_7 + 1) == 0) {
      iVar7 = iVar16;
    }
    iVar8 = *(int *)(param_8 + 1) + -1;
    if (*(int *)(param_8 + 1) == 0) {
      iVar8 = iVar16;
    }
    uVar17 = uVar15;
    if (0 < (int)param_1[1]) {
      do {
        plVar11 = (longlong *)(*param_1 + uVar15);
        FUN_14064fad0(plVar11,local_48);
        iVar16 = (int)uVar17;
        if (((iVar6 < 1) || (cVar4 = FString::StartsWith(local_48,param_5,1), cVar4 != '\0')) &&
           (((int)uVar12 < 1 || (cVar4 = FString::EndsWith(local_48,param_6,1), cVar4 != '\0')))) {
          if (0 < iVar7) {
            if (*(int *)(param_7 + 1) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*param_7;
            }
            iVar5 = FUN_141592950(local_48,puVar10,1,0,0xffffffff);
            if (iVar5 == -1) goto LAB_14064dda1;
          }
          if (iVar8 < 1) {
LAB_14064dd1a:
            iVar5 = (int)param_3[1];
            lVar1 = *param_1;
            *(int *)(param_3 + 1) = iVar5 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar5);
            }
            FString::FString((longlong)iVar5 * 0x10 + *param_3,lVar1 + (longlong)iVar16 * 0x10);
            iVar5 = (int)param_4[1];
            lVar1 = *param_2;
            *(int *)(param_4 + 1) = iVar5 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar5);
            }
            FString::FString((longlong)iVar5 * 0x10 + *param_4,lVar1 + (longlong)iVar16 * 0x10);
          }
          else {
            iVar5 = (int)plVar11[1] + -1;
            if ((int)plVar11[1] == 0) {
              iVar5 = 0;
            }
            if (0 < iVar5) {
              iVar14 = *(int *)(param_8 + 1);
              iVar5 = iVar14 + -1;
              if (iVar14 == 0) {
                iVar5 = 0;
              }
              if (0 < iVar5) {
                iVar5 = -1;
                do {
                  if (iVar14 == 0) {
                    puVar10 = &DAT_143f3eda8;
                  }
                  else {
                    puVar10 = (undefined2 *)*param_8;
                  }
                  iVar5 = FUN_141592950(plVar11,puVar10,1,0,iVar5 + 1);
                  iVar14 = *(int *)(param_8 + 1);
                  iVar13 = iVar14 + -1;
                  if (iVar14 == 0) {
                    iVar13 = 0;
                  }
                  if (iVar5 < 0) {
LAB_14064dcc8:
                    bVar2 = false;
                  }
                  else {
                    iVar9 = (int)plVar11[1] + -1;
                    if ((int)plVar11[1] == 0) {
                      iVar9 = 0;
                    }
                    if (iVar9 <= iVar5) goto LAB_14064dcc8;
                    bVar2 = true;
                  }
                  if (iVar13 < 1) {
LAB_14064dce7:
                    bVar3 = false;
                  }
                  else {
                    iVar9 = (int)plVar11[1] + -1;
                    if ((int)plVar11[1] == 0) {
                      iVar9 = 0;
                    }
                    if (iVar9 - iVar13 <= iVar5) goto LAB_14064dce7;
                    bVar3 = true;
                  }
                  if ((((bVar2) && (bVar3)) && (*(short *)*param_8 == 0x2f)) &&
                     (*(short *)(*plVar11 + (longlong)(iVar13 + iVar5) * 2) == 0x2f))
                  goto LAB_14064dd1a;
                } while (iVar5 != -1);
              }
            }
          }
        }
LAB_14064dda1:
        uVar15 = uVar15 + 0x10;
        uVar17 = (ulonglong)(iVar16 + 1U);
      } while ((int)(iVar16 + 1U) < (int)param_1[1]);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14064ddf0 FUN_14064ddf0 body=937 status=ok
// SIG undefined FUN_14064ddf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14064ddf0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  size_t _Count;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *_Source;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined2 *local_120;
  wchar_t *local_118;
  undefined8 local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined2 *local_e8;
  longlong local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  wchar_t local_68;
  undefined6 uStack_66;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = (longlong *)0x0;
  lStack_c0 = 0;
  iVar9 = (int)param_2[1];
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (iVar9 == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar6 = 0;
  }
  local_128 = 0;
  local_e8 = puVar11 + iVar6;
  local_120 = puVar11;
  local_f8 = param_1;
  local_f0 = param_2;
  cVar2 = FUN_14063b8d0(puVar11,local_e8,&local_d8,param_1);
  do {
    if (cVar2 == '\0') {
LAB_14064e122:
      std::vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>::
      ~vector<GGPO::FSaveFrame,std::allocator<GGPO::FSaveFrame>_>(&local_c8);
      lVar5 = local_f8;
      std::basic_regex<char,std::regex_traits<char>_>::_Tidy(local_f8);
      if ((*(longlong **)(lVar5 + 0x20) != (longlong *)0x0) &&
         (puVar3 = (undefined8 *)(**(code **)(**(longlong **)(lVar5 + 0x20) + 0x10))(),
         puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return;
    }
    lVar5 = lStack_c0 - (longlong)local_c8 >> 0x3f;
    plVar4 = &local_80;
    if ((lStack_c0 - (longlong)local_c8) / 0x18 + lVar5 != lVar5) {
      plVar4 = local_c8;
    }
    if ((char)plVar4[2] == '\0') {
      local_108 = 0;
      lStack_100 = 0;
    }
    else {
      local_108 = *plVar4;
      lStack_100 = plVar4[1];
    }
    local_58 = 0;
    local_50 = 7;
    local_68 = L'\0';
    if (local_108 != lStack_100) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
                (&local_68,local_108,lStack_100 - local_108 >> 1);
    }
    _Count = (size_t)(int)local_58;
    local_118 = (wchar_t *)0x0;
    _Source = &local_68;
    if (7 < local_50) {
      _Source = (wchar_t *)CONCAT62(uStack_66,local_68);
    }
    iVar9 = (int)local_58 + 1;
    if ((int)local_58 == 0) {
      iVar9 = 0;
    }
    local_110._4_4_ = 0;
    pwVar8 = local_118;
    uVar10 = local_110._4_4_;
    local_110._0_4_ = iVar9;
    if ((0 < iVar9) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0), uVar10 = local_110._4_4_,
       iVar9 = (int)local_110, pwVar8 = local_118, 0 < (int)local_110)) {
      wcsncpy(local_118,_Source,_Count);
      pwVar8[_Count] = L'\0';
    }
    iVar6 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar6);
    }
    param_2 = local_f0;
    local_118 = (wchar_t *)0x0;
    puVar3 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_3);
    *puVar3 = pwVar8;
    *(int *)(puVar3 + 1) = iVar9;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar10;
    local_110 = 0;
    lVar5 = lStack_c0 - (longlong)local_c8 >> 0x3f;
    plVar4 = &local_80;
    if ((lStack_c0 - (longlong)local_c8) / 0x18 + lVar5 != lVar5) {
      plVar4 = local_c8;
    }
    if ((char)plVar4[2] == '\0') {
      local_108 = 0;
      lStack_100 = 0;
    }
    else {
      local_108 = *plVar4;
      lStack_100 = plVar4[1];
    }
    iVar6 = (int)(lStack_100 - local_108 >> 1) + (int)(*plVar4 - local_d8 >> 1);
    iVar9 = (int)local_f0[1] + -1;
    if ((int)local_f0[1] == 0) {
      iVar9 = 0;
    }
    if (iVar9 <= iVar6) {
      if (7 < local_50) {
        lVar1 = CONCAT62(uStack_66,local_68);
        uVar7 = local_50 * 2 + 2;
        lVar5 = lVar1;
        if (0xfff < uVar7) {
          lVar5 = *(longlong *)(lVar1 + -8);
          uVar7 = local_50 * 2 + 0x29;
          if (0x1f < (lVar1 - lVar5) - 8U) {
LAB_14064e116:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar5,uVar7);
      }
      goto LAB_14064e122;
    }
    puVar11 = puVar11 + iVar6;
    if (7 < local_50) {
      lVar1 = CONCAT62(uStack_66,local_68);
      uVar7 = local_50 * 2 + 2;
      lVar5 = lVar1;
      if (0xfff < uVar7) {
        lVar5 = *(longlong *)(lVar1 + -8);
        uVar7 = local_50 * 2 + 0x29;
        if (0x1f < (lVar1 - lVar5) - 8U) goto LAB_14064e116;
      }
      FMemory::operator_delete(lVar5,uVar7);
    }
    local_128 = 0;
    local_120 = puVar11;
    cVar2 = FUN_14063b8d0(puVar11,local_e8,&local_d8,local_f8);
  } while( true );
}



// FUNCTION 14064e1a0 FUN_14064e1a0 body=476 status=ok
// SIG undefined FUN_14064e1a0(void)

longlong FUN_14064e1a0(short *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  lVar2 = 0;
  local_38 = 0;
  local_30 = 0;
  lVar6 = -1;
  lVar7 = lVar2;
  if ((param_1 != (short *)0x0) && (lVar4 = lVar6, lVar7 = 0, *param_1 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_1[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    lVar7 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_1,(longlong)(int)uVar3 * 2);
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_2,local_res8,&local_38);
  lVar4 = lVar2;
  if (local_res8[0] != -1) {
    lVar4 = *param_2 + (longlong)local_res8[0] * 0x28;
  }
  lVar5 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar5 = lVar2;
  }
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  if (lVar5 != 0) {
    return lVar5;
  }
  local_48 = 0;
  local_40 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_1[lVar6] != 0);
    uVar3 = (int)lVar6 + 1;
    local_40 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_1,(longlong)(int)uVar3 * 2);
  }
  uVar1 = FString::ToLower(&local_48,&local_38);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_2,local_res8,uVar1);
  lVar6 = lVar2;
  if (local_res8[0] != -1) {
    lVar6 = *param_2 + (longlong)local_res8[0] * 0x28;
  }
  lVar7 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar7 = lVar2;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (lVar7 == 0) {
    uVar1 = FString::ToUpper(&local_48,&local_38);
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_2,local_res8,uVar1);
    lVar6 = lVar2;
    if (local_res8[0] != -1) {
      lVar6 = *param_2 + (longlong)local_res8[0] * 0x28;
    }
    lVar7 = lVar6 + 0x10;
    if (lVar6 == 0) {
      lVar7 = lVar2;
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (lVar7 == 0) goto LAB_14064e351;
  }
  lVar2 = lVar7;
LAB_14064e351:
  if (local_48 != 0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 14064e380 FindTag body=218 status=ok
// SIG undefined FindTag(void)

longlong *
FAssetDataTagMapSharedView::FindTag(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iStackX_1c;
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  lVar2 = *param_1;
  uVar5 = (longlong)(int)param_1[1];
  lVar3 = 0;
  while (uVar5 != 0) {
    uVar7 = uVar5 >> 1;
    uVar6 = (uint)uVar5;
    lVar1 = uVar7 + lVar3;
    iVar4 = *(int *)(lVar2 + lVar1 * 0x18) - (int)param_3;
    if (iVar4 == 0) {
      iVar4 = *(int *)(lVar2 + lVar1 * 0x18 + 4) - iStackX_1c;
    }
    uVar5 = uVar7;
    if (iVar4 < 0) {
      lVar3 = (ulonglong)(uVar6 & 1) + lVar1;
    }
  }
  uVar5 = (ulonglong)(int)lVar3;
  if (uVar5 < (ulonglong)(longlong)(int)param_1[1]) {
    iVar4 = (int)param_3 - *(int *)(lVar2 + uVar5 * 0x18);
    if (iVar4 == 0) {
      iVar4 = iStackX_1c - *(int *)(lVar2 + 4 + uVar5 * 0x18);
    }
    if ((-1 < iVar4) && ((int)lVar3 != -1)) {
      *param_2 = lVar2 + (uVar5 * 3 + 1) * 8;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14064e460 FUN_14064e460 body=498 status=ok
// SIG undefined FUN_14064e460(void)

undefined8 * FUN_14064e460(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0xffffffffffffffff;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  lVar7 = FUN_140650f20();
  if (lVar7 != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x18);
    uVar9 = *(undefined8 *)(lVar7 + 0x18);
    param_2[1] = uVar9;
    *(int *)(param_2 + 2) = (int)((ulonglong)uVar9 >> 0x20);
    lVar8 = FUN_142f18d50();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar5 = UPrimitiveComponent::GetStaticDepthPriorityGroup(lVar7);
      *(undefined1 *)(param_2 + 5) = uVar5;
      uVar9 = FUN_142eb6b70(lVar7,local_28);
      uVar9 = FText::ToString(uVar9);
      FString::operator=(param_2 + 3,uVar9);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      *(undefined1 *)((longlong)param_2 + 0x29) = 1;
    }
    lVar8 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(int *)((longlong)param_2 + 0x14) == -1) {
        *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar7 + 0x2d8);
      }
      *(undefined1 *)((longlong)param_2 + 0x2a) = 1;
    }
    lVar8 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(int *)((longlong)param_2 + 0x14) == -1) {
        *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar7 + 0x2e0);
      }
      *(undefined1 *)((longlong)param_2 + 0x2b) = 1;
    }
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(int *)((longlong)param_2 + 0x14) == -1) {
        uVar6 = FUN_142eb7a00(lVar7);
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
      }
      *(undefined1 *)((longlong)param_2 + 0x2c) = 1;
    }
  }
  return param_2;
}



// FUNCTION 14064e660 FUN_14064e660 body=77 status=ok
// SIG undefined FUN_14064e660(void)

undefined8 * FUN_14064e660(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140650f20();
  if (lVar1 != 0) {
    lVar1 = FUN_140650f20(param_1);
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14064e6c0 FUN_14064e6c0 body=1122 status=ok
// SIG undefined FUN_14064e6c0(void)

longlong * FUN_14064e6c0(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  void *pvVar11;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 5) == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(param_1 + 5) * 5 + -4;
    if (iVar7 < 1) goto LAB_14064e70a;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar7);
LAB_14064e70a:
  uVar8 = 0;
  bVar3 = false;
  uVar10 = uVar8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          iVar7 = *(int *)(param_1 + 5) + -1;
          if (*(int *)(param_1 + 5) == 0) {
            iVar7 = 0;
          }
          iVar9 = (int)uVar10;
          if (iVar7 <= iVar9) {
            cVar4 = FString::EndsWith(param_2,L".png",1);
            if (cVar4 == '\0') {
              local_30 = 5;
              local_38 = (void *)0x0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
              pvVar11 = local_38;
              FGenericPlatformString::Memcpy(local_38,L".png",10);
              if (((int)local_30 != 0) && (iVar7 = (int)local_30 + -1, iVar7 != 0)) {
                iVar9 = (int)param_2[1];
                iVar6 = (uint)(iVar9 == 0) + iVar9 + iVar7;
                *(int *)(param_2 + 1) = iVar6;
                if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
                }
                pvVar1 = (void *)(*param_2 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar7 * 2);
                *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
              }
              if (pvVar11 != (void *)0x0) {
                FMemory::Free(pvVar11);
              }
            }
            return param_2;
          }
          sVar2 = *(short *)(uVar8 + param_1[4]);
          if (sVar2 != 0x25) break;
          uVar10 = (ulonglong)(iVar9 + 1);
          bVar3 = true;
          uVar8 = uVar8 + 2;
        }
        if (bVar3) break;
        if (sVar2 != 0) {
          iVar7 = (int)param_2[1];
          iVar6 = iVar7 + -1;
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          iVar7 = (iVar7 < 1) + 1 + iVar7;
          *(int *)(param_2 + 1) = iVar7;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(short *)(*param_2 + (longlong)iVar6 * 2) = sVar2;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar6 * 2) = 0;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
        uVar8 = uVar8 + 2;
      }
      if (sVar2 != 99) break;
      local_38 = (void *)0x0;
      local_30 = 0;
      FString::AppendInt(&local_38,*(undefined4 *)((longlong)param_1 + 0x14));
      pvVar11 = local_38;
      if ((int)local_30 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)local_30 + -1;
      }
      if (iVar7 != 0) {
        iVar6 = (int)param_2[1];
        iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar7;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
        pvVar11 = local_38;
      }
LAB_14064e9d1:
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
LAB_14064e9e1:
      bVar3 = false;
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar8 = uVar8 + 2;
    }
    if (sVar2 == 100) {
      local_48 = (void *)0x0;
      local_40 = 0;
      FString::AppendInt(&local_48,*(undefined4 *)(param_1 + 3));
      pvVar11 = local_48;
      if ((int)local_40 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)local_40 + -1;
      }
      if (iVar7 != 0) {
        iVar6 = (int)param_2[1];
        iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar7;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
        pvVar11 = local_48;
      }
      goto LAB_14064e9d1;
    }
    if (sVar2 != 0x6d) {
      if (sVar2 == 0x72) {
        local_58 = (void *)0x0;
        local_50 = 0;
        FString::AppendInt(&local_58,*(undefined4 *)(param_1 + 2));
        pvVar11 = local_58;
        if ((int)local_50 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)local_50 + -1;
        }
        if (iVar7 != 0) {
          iVar6 = (int)param_2[1];
          iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar7;
          *(int *)(param_2 + 1) = iVar5;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar7 * 2);
          *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
          pvVar11 = local_58;
        }
        goto LAB_14064e9d1;
      }
      goto LAB_14064e9e1;
    }
    pvVar11 = (void *)*param_1;
    iVar7 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar7 = 0;
    }
    if (iVar7 == 0) goto LAB_14064e9e1;
    iVar6 = (int)param_2[1];
    iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar7;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar7 * 2);
    uVar10 = (ulonglong)(iVar9 + 1);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    bVar3 = false;
    uVar8 = uVar8 + 2;
  } while( true );
}



// FUNCTION 14064eb30 FUN_14064eb30 body=1039 status=ok
// SIG undefined FUN_14064eb30(void)

void FUN_14064eb30(longlong *param_1,longlong *param_2,float param_3,char param_4)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  float local_194;
  undefined4 local_190;
  float local_188;
  float local_184;
  undefined4 local_180;
  float local_178;
  float fStack_174;
  float local_170;
  longlong *local_168;
  int local_160;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_118 [8];
  float local_110;
  byte local_108 [12];
  undefined4 local_fc;
  float local_ec;
  undefined1 local_78 [80];
  
  if (DAT_146b19a68 != 0) {
    fStack_1ac = DAT_1468b5d90;
    local_1a8 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
    local_1b8 = DAT_1468b5d90;
    fStack_1b4 = DAT_1468b5d94;
    fStack_1b0 = DAT_1468b5d98;
    local_1a0 = (float)((uint)local_1a0 & 0xffffff00);
    UWorld::GetLevelIterator(DAT_146b19a68,&local_168);
    for (; (-1 < local_160 && (local_160 < (int)local_168[1])); local_160 = local_160 + 1) {
      iVar5 = 0;
      lVar3 = *(longlong *)(*local_168 + (longlong)local_160 * 8);
      while ((-1 < iVar5 && (iVar5 < *(int *)(lVar3 + 0xa8)))) {
        plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0xa0) + (longlong)iVar5 * 8);
        if (plVar4 == (longlong *)0x0) {
LAB_14064ecef:
          iVar5 = iVar5 + 1;
        }
        else {
          pfVar2 = (float *)(**(code **)(*plVar4 + 0x560))(plVar4,local_78,0);
          if (local_1a0._0_1_ == '\0') {
            if (*(char *)(pfVar2 + 6) != '\0') {
              local_1b8 = *pfVar2;
              fStack_1b4 = pfVar2[1];
              fStack_1b0 = pfVar2[2];
              fStack_1ac = pfVar2[3];
              local_1a8 = *(undefined8 *)(pfVar2 + 4);
              local_1a0 = pfVar2[6];
            }
            goto LAB_14064ecef;
          }
          if (*(char *)(pfVar2 + 6) == '\0') goto LAB_14064ecef;
          if (*pfVar2 < local_1b8) {
            local_1b8 = *pfVar2;
          }
          if (pfVar2[1] < fStack_1b4) {
            fStack_1b4 = pfVar2[1];
          }
          if (pfVar2[2] < fStack_1b0) {
            fStack_1b0 = pfVar2[2];
          }
          if (fStack_1ac < pfVar2[3]) {
            fStack_1ac = pfVar2[3];
          }
          if ((float)local_1a8 < pfVar2[4]) {
            local_1a8 = CONCAT44(local_1a8._4_4_,pfVar2[4]);
          }
          if (pfVar2[5] <= local_1a8._4_4_) goto LAB_14064ecef;
          local_1a8 = CONCAT44(pfVar2[5],(float)local_1a8);
          iVar5 = iVar5 + 1;
        }
      }
    }
    local_180 = 0xc9800000;
    local_138 = 0xc9800000c9800000;
    local_130 = 0xc9800000;
    local_190 = 0x49800000;
    local_12c = 0x4980000049800000;
    local_124 = 0x49800000;
    local_120 = 1;
    FUN_141631920(&local_1b8,&local_158,&local_138);
    fVar6 = local_14c;
    fVar9 = local_158;
    fVar7 = local_148;
    if (local_158 < local_14c) {
      do {
        fVar8 = local_154;
        if (local_154 < fVar7) {
          do {
            fVar6 = 0.0;
            if (param_4 == '\0') {
LAB_14064ee90:
              iVar5 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar5 + 1;
              local_178 = fVar9;
              fStack_174 = fVar8;
              local_170 = fVar6;
              if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
              }
              lVar3 = *param_1;
              *(ulonglong *)(lVar3 + (longlong)iVar5 * 0xc) = CONCAT44(fStack_174,local_178);
              *(float *)(lVar3 + 8 + (longlong)iVar5 * 0xc) = local_170;
            }
            else {
              local_180 = 0x49800000;
              local_190 = 0xc9800000;
              local_198 = fVar9;
              local_194 = fVar8;
              local_188 = fVar9;
              local_184 = fVar8;
              _guard_xfg_dispatch_icall_nop(local_108,0,0x90);
              local_fc = 0x3f800000;
              UWorld::LineTraceSingleByChannel
                        (DAT_146b19a68,local_108,&local_188,&local_198,0,&DAT_146aefe90,
                         &DAT_146aefe68);
              if (((((local_108[0] & 1) != 0) && ((local_108[0] & 2) == 0)) &&
                  (param_2 != (longlong *)0x0)) &&
                 (lVar3 = (**(code **)(*param_2 + 0x6e8))(param_2), lVar3 != 0)) {
                plVar4 = (longlong *)(**(code **)(*param_2 + 0x6e8))(param_2);
                cVar1 = (**(code **)(*plVar4 + 0x7f0))(plVar4);
                if (cVar1 != '\0') {
                  FUN_14222da00(param_2,1,&local_168,local_118);
                  fVar6 = local_110 + local_ec;
                  goto LAB_14064ee90;
                }
              }
            }
            fVar8 = fVar8 + param_3;
            fVar6 = local_14c;
            fVar7 = local_148;
          } while (fVar8 < local_148);
        }
        fVar9 = fVar9 + param_3;
      } while (fVar9 < fVar6);
    }
  }
  return;
}



// FUNCTION 14064ef40 FUN_14064ef40 body=232 status=ok
// SIG undefined FUN_14064ef40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14064ef40(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  cVar3 = FUN_140655950();
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (cVar3 != '\0') {
    if (iVar1 < DAT_1468567c0) {
      _Init_thread_header(&DAT_1468567c0);
      if (DAT_1468567c0 == -1) {
        FName::FName(&DAT_1468567b8,L"GbxPerfAnalytics",1);
        _Init_thread_footer(&DAT_1468567c0);
      }
    }
    uVar2 = DAT_1468567b8;
    uVar4 = FUN_14168dc80();
    puVar5 = (undefined *)FModuleManager::GetModule(uVar4,uVar2);
    return puVar5;
  }
  if (iVar1 < DAT_1468567e0) {
    _Init_thread_header(&DAT_1468567e0);
    if (DAT_1468567e0 == -1) {
      _DAT_1468567c8 = &PTR_FUN_143f3ee80;
      DAT_1468567d0 = 0;
      _DAT_1468567d8 = 0;
      atexit(FUN_143e40470);
      _Init_thread_footer(&DAT_1468567e0);
    }
  }
  return &DAT_1468567c8;
}



// FUNCTION 14064f030 FUN_14064f030 body=775 status=ok
// SIG undefined FUN_14064f030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14064f030(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  void *_Src;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  ulonglong local_158 [2];
  void *local_148;
  ulonglong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  bVar11 = false;
  local_158[0] = local_158[0] & 0xffffffff00000000;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_47 = 0;
  local_45 = 0;
  local_48 = 1;
  FName::FName(local_158,L"/Game/Maps",1);
  uVar3 = local_110;
  lVar8 = (longlong)(int)local_110;
  iVar5 = (int)local_110 + 1;
  local_110 = CONCAT44(local_110._4_4_,iVar5);
  if (local_110._4_4_ < iVar5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,uVar3 & 0xffffffff)
    ;
  }
  *(ulonglong *)(local_118 + lVar8 * 8) = local_158[0];
  lVar8 = FUN_142a2f930();
  uVar3 = local_f0;
  lVar9 = (longlong)(int)local_f0;
  uVar1 = *(undefined8 *)(lVar8 + 0x18);
  iVar5 = (int)local_f0 + 1;
  local_f0 = CONCAT44(local_f0._4_4_,iVar5);
  if (local_f0._4_4_ < iVar5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,uVar3 & 0xffffffff);
  }
  *(undefined8 *)(local_f8 + lVar9 * 8) = uVar1;
  local_138 = 0;
  local_130 = 0;
  puVar6 = (undefined8 *)FName::FName(local_158,"AssetRegistry",1);
  plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar6);
  if (plVar7 != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7,&local_128,&local_138);
  }
  local_148 = (void *)0x0;
  lVar9 = (longlong)(int)local_130 * 0x58 + local_138;
  local_140 = 0;
  lVar8 = local_138;
  if (local_138 != lVar9) {
    do {
      FName::ToString(lVar8,&local_148);
      cVar4 = FString::EndsWith(&local_148,&DAT_144020044,1);
      if (cVar4 == '\0') {
        local_158[0] = 0;
        local_158[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
        local_168 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_158[0],3,&DAT_14401f30c);
        bVar11 = true;
        cVar4 = FString::EndsWith(&local_148,local_158,1);
        if (cVar4 != '\0') goto LAB_14064f252;
        bVar2 = false;
      }
      else {
LAB_14064f252:
        bVar2 = true;
      }
      if ((bVar11) && (bVar11 = false, local_158[0] != 0)) {
        FMemory::Free();
      }
      if (bVar2) {
        iVar5 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
        }
        _Src = local_148;
        puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_1);
        *puVar6 = 0;
        lVar10 = (longlong)(int)local_140;
        *(int *)(puVar6 + 1) = (int)local_140;
        if ((int)local_140 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,local_140 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,lVar10 * 2);
        }
      }
      lVar8 = lVar8 + 0x58;
    } while (lVar8 != lVar9);
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1404be960(&local_138);
  FARFilter::~FARFilter(&local_128);
  return;
}



// FUNCTION 14064f340 FUN_14064f340 body=606 status=ok
// SIG undefined FUN_14064f340(void)

void FUN_14064f340(longlong *param_1,char param_2)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  short *psVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if (param_2 == '\0') {
    FUN_1406541c0(0,4,&local_38,param_1);
  }
  else {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_1406541c0(0,4,&local_38,&local_48);
    uVar13 = (uint)local_40;
    uVar14 = (ulonglong)(int)(uint)local_40;
    plVar8 = local_48 + uVar14 * 2;
    plVar4 = local_48;
    for (plVar15 = local_48; plVar2 = plVar4, local_48 = plVar4, plVar15 != plVar8;
        plVar15 = plVar15 + 2) {
      uVar12 = 0;
      psVar1 = (short *)*plVar15;
      psVar5 = psVar1 + (int)plVar15[1];
      if (psVar5 != psVar1) {
LAB_14064f3d0:
        psVar5 = psVar5 + -1;
        if (*psVar5 != 0x2e) goto code_r0x00014064f3de;
        iVar10 = (int)((longlong)psVar5 - (longlong)psVar1 >> 1);
        if (iVar10 != -1) {
          local_58 = 0;
          psVar5 = &DAT_143f3eda8;
          if ((int)plVar15[1] != 0) {
            psVar5 = psVar1;
          }
          uVar11 = 0;
          local_50 = local_50 & 0xffffffff;
          psVar5 = psVar5 + (longlong)iVar10 + 1;
          uVar16 = uVar12;
          if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
            lVar6 = -1;
            do {
              lVar3 = lVar6 + 1;
              lVar6 = lVar6 + 1;
            } while (psVar5[lVar3] != 0);
            uVar9 = (int)lVar6 + 1;
            local_50 = (ulonglong)uVar9;
            uVar11 = uVar9;
            if (0 < (int)uVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
              uVar12 = local_50 >> 0x20;
              uVar11 = (uint)local_50;
            }
            uVar16 = local_58;
            FGenericPlatformString::Memcpy(local_58,psVar5,(longlong)(int)uVar9 * 2);
          }
          iVar10 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
          }
          local_58 = 0;
          puVar7 = (ulonglong *)((longlong)iVar10 * 0x10 + *param_1);
          *puVar7 = uVar16;
          *(int *)((longlong)puVar7 + 0xc) = (int)uVar12;
          local_50 = 0;
          *(uint *)(puVar7 + 1) = uVar11;
          goto LAB_14064f40e;
        }
      }
LAB_14064f3e3:
      iVar10 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar10 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
      }
      FString::FString((longlong)iVar10 * 0x10 + *param_1,plVar15);
LAB_14064f40e:
      plVar4 = local_48;
    }
    while (uVar13 != 0) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      uVar13 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar13;
      plVar2 = plVar2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
  plVar4 = local_38;
  plVar15 = local_38;
  for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar4);
  return;
code_r0x00014064f3de:
  if (psVar5 == psVar1) goto LAB_14064f3e3;
  goto LAB_14064f3d0;
}



// FUNCTION 14064f5a0 FUN_14064f5a0 body=537 status=ok
// SIG undefined FUN_14064f5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14064f5a0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118 [2];
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_98 = 0xffffffff;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_27 = 0;
  local_25 = 0;
  local_28 = 1;
  FName::FName(local_118,L"/Game",1);
  uVar5 = local_f0;
  lVar6 = (longlong)(int)local_f0;
  iVar2 = (int)local_f0 + 1;
  local_f0 = CONCAT44(local_f0._4_4_,iVar2);
  if (local_f0._4_4_ < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,uVar5 & 0xffffffff);
  }
  *(undefined8 *)(local_f8 + lVar6 * 8) = local_118[0];
  local_27 = CONCAT11(local_27._1_1_,1);
  lVar6 = ACineCameraActor::GetPrivateStaticClass();
  lVar7 = (longlong)(int)local_d0;
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  iVar2 = (int)local_d0 + 1;
  if (local_d0._4_4_ < iVar2) {
    uVar5 = local_d0 & 0xffffffff;
    local_d0._0_4_ = iVar2;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar5);
    iVar2 = (int)local_d0;
  }
  local_d0._0_4_ = iVar2;
  *(undefined8 *)(local_d8 + lVar7 * 8) = uVar1;
  lVar6 = UCameraShake::GetPrivateStaticClass();
  iVar2 = (int)local_d0;
  lVar7 = (longlong)(int)local_d0;
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
  }
  *(undefined8 *)(local_d8 + lVar7 * 8) = uVar1;
  lVar6 = USkeleton::GetPrivateStaticClass();
  iVar2 = (int)local_d0;
  lVar7 = (longlong)(int)local_d0;
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
  }
  *(undefined8 *)(local_d8 + lVar7 * 8) = uVar1;
  lVar6 = UNodeMappingContainer::StaticClass();
  iVar2 = (int)local_d0;
  lVar7 = (longlong)(int)local_d0;
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
  }
  *(undefined8 *)(local_d8 + lVar7 * 8) = uVar1;
  puVar3 = (undefined8 *)FName::FName(local_118,"AssetRegistry",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_108,param_1);
  }
  FARFilter::~FARFilter(&local_108);
  return;
}



// FUNCTION 14064f7c0 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FArchiveCountMem::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FArchiveCountMem",0x22);
  return param_2;
}



// FUNCTION 14064f800 GetAsset body=220 status=ok
// SIG undefined GetAsset(void)

longlong FAssetData::GetAsset(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_18 [2];
  
  if (*param_1 == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1,local_18);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  uVar2 = UObject::GetPrivateStaticClass();
  lVar3 = FUN_141799410(uVar2,0,puVar4,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)FName::ToString(param_1,local_18);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar1;
    }
    uVar2 = UObject::GetPrivateStaticClass();
    lVar3 = FUN_141799c90(uVar2,0,puVar5,0,0,0,1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return lVar3;
}



// FUNCTION 14064f8e0 FUN_14064f8e0 body=484 status=ok
// SIG undefined FUN_14064f8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14064f8e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_a8 = 0xffffffff;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FName::FName(&local_128,param_1,1);
  uVar6 = local_f0;
  lVar10 = (longlong)(int)local_f0;
  iVar7 = (int)local_f0 + 1;
  local_f0 = CONCAT44(local_f0._4_4_,iVar7);
  if (local_f0._4_4_ < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,uVar6 & 0xffffffff);
  }
  *(undefined8 *)(local_f8 + lVar10 * 8) = local_128;
  local_138 = 0;
  local_130 = 0;
  puVar8 = (undefined8 *)FName::FName(local_120,"AssetRegistry",1);
  plVar9 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar8);
  if (plVar9 != (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_118,&local_138);
  }
  bVar5 = 0 < (int)local_130;
  if (0 < (int)local_130) {
    FUN_1406406c0(param_2,local_138);
  }
  if ((int)local_130 != 0) {
    plVar9 = (longlong *)(local_138 + 0x30);
    iVar7 = (int)local_130;
    do {
      if (plVar9[1] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)*plVar9;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar9 = plVar9 + 0xb;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  FARFilter::~FARFilter(&local_118);
  return bVar5;
}



// FUNCTION 14064fad0 FUN_14064fad0 body=415 status=ok
// SIG undefined FUN_14064fad0(void)

void FUN_14064fad0(undefined8 param_1,wchar_t **param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t **ppwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  ppwVar3 = (wchar_t **)FPackageName::GetLongPackageAssetName(&local_28,param_1);
  pwVar9 = (wchar_t *)0x0;
  if (param_2 != ppwVar3) {
    if (*param_2 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_2 = *ppwVar3;
    *ppwVar3 = (wchar_t *)0x0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppwVar3 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppwVar3 + 0xc);
    ppwVar3[1] = (wchar_t *)0x0;
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  pwVar2 = *param_2;
  iVar8 = *(int *)(param_2 + 1);
  pwVar4 = pwVar2 + iVar8;
  if (pwVar4 != pwVar2) {
    while (pwVar4 = pwVar4 + -1, *pwVar4 != L'.') {
      if (pwVar4 == pwVar2) {
        return;
      }
    }
    iVar7 = (int)((longlong)pwVar4 - (longlong)pwVar2 >> 1);
    if (iVar7 != -1) {
      uVar10 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar10 = 0xffffffff;
      }
      uVar1 = iVar7 + 0x80000000;
      if (iVar8 == 0) {
        uVar10 = 0;
      }
      if (iVar7 + 1U < uVar10) {
        uVar10 = iVar7 + 1U;
      }
      uVar5 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar5 = 0;
      }
      uVar6 = uVar10;
      if ((uVar10 <= uVar1) && (uVar6 = uVar5, uVar1 < uVar5)) {
        uVar6 = uVar1;
      }
      local_28 = (wchar_t *)0x0;
      local_1c = 0;
      pwVar4 = L"";
      if (iVar8 != 0) {
        pwVar4 = pwVar2;
      }
      iVar7 = uVar6 - uVar10;
      iVar8 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      local_20 = iVar8;
      if ((0 < iVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar8 = local_20,
         pwVar9 = local_28, 0 < local_20)) {
        wcsncpy(local_28,pwVar4 + (int)uVar10,(longlong)iVar7);
        pwVar9[iVar7] = L'\0';
      }
      if (param_2 == &local_28) {
        if (pwVar9 != (wchar_t *)0x0) {
          FMemory::Free(pwVar9);
        }
      }
      else {
        if (*param_2 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_2 = pwVar9;
        *(int *)(param_2 + 1) = iVar8;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
      }
    }
  }
  return;
}



// FUNCTION 14064fc70 FUN_14064fc70 body=115 status=ok
// SIG undefined FUN_14064fc70(void)

undefined8 FUN_14064fc70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  longlong local_18 [2];
  
  local_res8[0] = 0;
  cVar1 = FName::operator==<wchar_t>(param_1 + 0x20,L"Blueprint");
  if (cVar1 == '\0') {
    uVar2 = FAssetData::GetAsset(param_1);
    return uVar2;
  }
  uVar2 = FName::ToString(param_1,local_18);
  FUN_14065bb80(uVar2,local_res8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_res8[0] != 0) {
    return *(undefined8 *)(local_res8[0] + 0x10);
  }
  return 0;
}



// FUNCTION 14064fcf0 FUN_14064fcf0 body=133 status=ok
// SIG undefined FUN_14064fcf0(void)

void FUN_14064fcf0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (param_1 != 0) {
    uVar1 = UObjectBaseUtility::GetPathName(param_1,local_18,0);
    plVar2 = (longlong *)FUN_1417006f0(local_28,uVar1);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14064fd80 FUN_14064fd80 body=741 status=ok
// SIG undefined FUN_14064fd80(void)

void FUN_14064fd80(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  void *pvVar7;
  int iVar8;
  short *psVar9;
  void *pvVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_res8 [2];
  void *local_res10;
  undefined1 local_res18 [8];
  short *local_88;
  undefined8 local_80;
  short *local_78;
  undefined8 local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  short **local_48;
  short **local_40;
  
  FUN_1417557f0();
  lVar11 = *(longlong *)(param_1 + 0x30);
  pvVar10 = (void *)0x0;
  local_78 = (short *)0x0;
  local_70 = 0;
  local_88 = (short *)0x0;
  local_80 = 0;
  lVar6 = (longlong)*(int *)(param_1 + 0x38) * 0x30 + lVar11;
  if (lVar11 != lVar6) {
    do {
      local_48 = &local_78;
      local_40 = &local_88;
      local_68 = (void *)0x0;
      pvStack_60 = (void *)0x0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_140634290(lVar11,&local_68);
      lVar11 = lVar11 + 0x30;
    } while (lVar11 != lVar6);
    psVar9 = local_78;
    if ((int)local_70 != 0) goto LAB_14064fe22;
  }
  psVar9 = &DAT_143f3eda8;
LAB_14064fe22:
  local_68 = (void *)0x0;
  pvStack_60 = (void *)((ulonglong)pvStack_60 & 0xffffffff);
  lVar11 = -1;
  pvVar7 = pvVar10;
  if ((psVar9 != (short *)0x0) && (lVar6 = lVar11, *psVar9 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar9[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    pvStack_60 = (void *)(ulonglong)uVar5;
    uVar1 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      uVar1 = (uint)pvStack_60;
    }
    pvVar10 = local_68;
    pvVar7 = (void *)(ulonglong)uVar1;
    FGenericPlatformString::Memcpy(local_68,psVar9,(longlong)(int)uVar5 * 2);
  }
  puVar4 = (undefined8 *)FName::FName(local_res18,"TestCommands",1);
  iVar8 = (int)pvVar7;
  local_68 = (void *)*puVar4;
  pvStack_60 = (void *)0x0;
  local_58._0_4_ = iVar8;
  if (iVar8 == 0) {
    local_res10 = (void *)0x0;
    local_res8[0] = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pvStack_60,pvVar7,0);
    local_res10 = pvStack_60;
    _guard_xfg_dispatch_icall_nop(pvStack_60,pvVar10,(longlong)iVar8 * 2);
    local_res8[0] = local_58._4_4_;
  }
  iVar3 = (int)local_58;
  pvVar7 = local_68;
  iVar8 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar8);
  }
  puVar4 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_2);
  *puVar4 = pvVar7;
  pvVar7 = (void *)0x0;
  puVar4[1] = local_res10;
  *(undefined4 *)((longlong)puVar4 + 0x14) = local_res8[0];
  *(int *)(puVar4 + 2) = iVar3;
  puVar4[3] = 0;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  local_68 = (void *)0x0;
  psVar9 = &DAT_143f3eda8;
  if ((int)local_80 != 0) {
    psVar9 = local_88;
  }
  pvStack_60 = (void *)((ulonglong)pvStack_60 & 0xffffffff);
  pvVar10 = pvVar7;
  if ((psVar9 != (short *)0x0) && (pvVar10 = (void *)0x0, *psVar9 != 0)) {
    do {
      lVar11 = lVar11 + 1;
    } while (psVar9[lVar11] != 0);
    uVar5 = (int)lVar11 + 1;
    pvStack_60 = (void *)(ulonglong)uVar5;
    uVar1 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      uVar1 = (uint)pvStack_60;
    }
    pvVar7 = local_68;
    pvVar10 = (void *)(ulonglong)uVar1;
    FGenericPlatformString::Memcpy(local_68,psVar9,(longlong)(int)uVar5 * 2);
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"DisplayNames",1);
  pvStack_60 = (void *)0x0;
  iVar8 = (int)pvVar10;
  local_68 = (void *)*puVar4;
  local_58._0_4_ = iVar8;
  if (iVar8 == 0) {
    pvVar10 = (void *)0x0;
    uVar12 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pvStack_60,pvVar10,0);
    pvVar10 = pvStack_60;
    _guard_xfg_dispatch_icall_nop(pvStack_60,pvVar7,(longlong)iVar8 * 2);
    uVar12 = local_58._4_4_;
  }
  iVar3 = (int)local_58;
  pvVar2 = local_68;
  iVar8 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar8);
  }
  puVar4 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_2);
  *puVar4 = pvVar2;
  puVar4[1] = pvVar10;
  *(int *)(puVar4 + 2) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar12;
  puVar4[3] = 0;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  if (local_88 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140650070 FUN_140650070 body=391 status=ok
// SIG undefined FUN_140650070(void)

void FUN_140650070(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  void *pvVar7;
  short *psVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined1 local_res8 [8];
  void *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong local_38 [2];
  
  FUN_1417557f0();
  puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x40,local_38);
  if (*(int *)(puVar3 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
  }
  else {
    psVar8 = (short *)*puVar3;
  }
  pvVar10 = (void *)0x0;
  local_58 = (void *)0x0;
  uVar9 = 0;
  local_50 = (void *)(ulonglong)(uint)local_50;
  _Src = pvVar10;
  pvVar7 = pvVar10;
  if ((psVar8 != (short *)0x0) && (_Src = (void *)0x0, pvVar7 = (void *)0x0, *psVar8 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar8[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_50 = (void *)(ulonglong)uVar4;
    uVar1 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar1 = (uint)local_50;
    }
    _Src = local_58;
    pvVar7 = (void *)(ulonglong)uVar1;
    FGenericPlatformString::Memcpy(local_58,psVar8,(longlong)(int)uVar4 * 2);
  }
  puVar3 = (undefined8 *)FName::FName(local_res8,"HierarchicalCommands",1);
  local_50 = (void *)0x0;
  iVar6 = (int)pvVar7;
  local_58 = (void *)*puVar3;
  local_48 = iVar6;
  if (iVar6 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,pvVar7,0);
    pvVar10 = local_50;
    _guard_xfg_dispatch_icall_nop(local_50,_Src,(longlong)iVar6 * 2);
    uVar9 = local_44;
  }
  iVar2 = local_48;
  pvVar7 = local_58;
  iVar6 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar6);
  }
  puVar3 = (undefined8 *)((longlong)iVar6 * 0x20 + *param_2);
  *puVar3 = pvVar7;
  puVar3[1] = pvVar10;
  *(int *)(puVar3 + 2) = iVar2;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uVar9;
  puVar3[3] = 0;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140650200 FUN_140650200 body=420 status=ok
// SIG undefined FUN_140650200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140650200(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  ulonglong uVar6;
  size_t _Count;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  wchar_t local_50;
  undefined6 uStack_4e;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar6 = (ulonglong)param_3;
  lVar1 = FUN_140663ef0(param_1 + 0x28,0);
  if ((longlong)uVar6 < lVar1) {
    if (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x18))
    {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x38) + uVar6 * 0x18);
    }
    else {
      plVar2 = (longlong *)(param_1 + 0x80);
    }
    local_58 = plVar2[2];
    local_68 = *plVar2;
    lStack_60 = plVar2[1];
    if ((char)local_58 == '\0') {
      local_68 = 0;
      lStack_60 = 0;
    }
    local_40 = 0;
    local_38 = 7;
    local_50 = L'\0';
    if (local_68 != lStack_60) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
                (&local_50,local_68,lStack_60 - local_68 >> 1);
    }
    _Count = (size_t)(int)local_40;
    pwVar3 = (wchar_t *)CONCAT62(uStack_4e,local_50);
    *param_2 = 0;
    pwVar4 = &local_50;
    if (7 < local_38) {
      pwVar4 = pwVar3;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    iVar5 = (int)local_40 + 1;
    if ((int)local_40 == 0) {
      iVar5 = 0;
    }
    *(int *)(param_2 + 1) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      pwVar3 = (wchar_t *)CONCAT62(uStack_4e,local_50);
      if (0 < *(int *)(param_2 + 1)) {
        pwVar3 = (wchar_t *)*param_2;
        wcsncpy(pwVar3,pwVar4,_Count);
        pwVar3[_Count] = L'\0';
        pwVar3 = (wchar_t *)CONCAT62(uStack_4e,local_50);
      }
    }
    if (7 < local_38) {
      uVar6 = local_38 * 2 + 2;
      pwVar4 = pwVar3;
      if (0xfff < uVar6) {
        pwVar4 = *(wchar_t **)(pwVar3 + -4);
        uVar6 = local_38 * 2 + 0x29;
        if (0x1f < (ulonglong)((longlong)pwVar3 + (-8 - (longlong)pwVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pwVar4,uVar6);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1406503b0 FUN_1406503b0 body=484 status=ok
// SIG undefined FUN_1406503b0(void)

undefined8 * FUN_1406503b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *_Source;
  undefined8 local_res8;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  pwVar6 = (wchar_t *)0x0;
  iVar5 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FName::ToString(param_1 + 0xd0);
    return param_2;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Unknown",0x10);
    return param_2;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xa8);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  local_48 = (wchar_t *)0x0;
  local_40 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Unknown",0x10);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 200) == 0) {
      local_res8 = *(undefined8 *)(lVar3 + 0x18);
    }
    else {
      local_res8 = *(undefined8 *)(*(longlong *)(lVar3 + 200) + 0x18);
    }
    FName::ToString(&local_res8,&local_48);
  }
  cVar2 = FString::EndsWith(&local_48,&DAT_14401f470,1);
  if (cVar2 == '\0') {
    pwVar6 = local_48;
    local_2c = local_40._4_4_;
    iVar4 = (int)local_40;
  }
  else {
    if ((int)local_40 == 0) {
      _Source = L"";
      iVar4 = iVar5;
    }
    else {
      _Source = local_48;
      iVar4 = (int)local_40 + -1;
    }
    iVar1 = iVar4 + -2;
    if ((-1 < iVar1) && (iVar5 = iVar4, iVar1 < iVar4)) {
      iVar5 = iVar1;
    }
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    iVar4 = iVar5 + 1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    local_30 = iVar4;
    if ((0 < iVar4) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar4 = local_30,
       pwVar6 = local_38, 0 < local_30)) {
      wcsncpy(local_38,_Source,(longlong)iVar5);
      pwVar6[iVar5] = L'\0';
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  *param_2 = pwVar6;
  *(int *)(param_2 + 1) = iVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
  return param_2;
}



// FUNCTION 1406505a0 FUN_1406505a0 body=696 status=ok
// SIG undefined FUN_1406505a0(void)

longlong * FUN_1406505a0(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  void *pvVar7;
  undefined2 *puVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  pvVar10 = (void *)0x0;
  iVar9 = 0;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
    if (cVar2 == '\0') {
      local_58 = (void *)0x0;
      local_50 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"Gearbox.",0x12);
    }
    else {
      local_68 = (void *)0x0;
      local_60 = 0;
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa8);
      (**(code **)(*plVar5 + 0x288))(plVar5,&local_68);
      local_58 = local_68;
      local_50 = local_60;
    }
  }
  else {
    uVar3 = FName::ToString(param_1 + 200,local_38);
    puVar4 = (undefined8 *)FString::Replace(uVar3,&local_68,&DAT_14401ef9c,&DAT_14401ef7c,1);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_58,L"Gearbox%s.",puVar8);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_1406503b0(param_1,&local_48);
  pvVar7 = local_48;
  pvVar1 = local_58;
  lVar13 = (longlong)(int)local_50;
  iVar12 = (int)local_40;
  if ((int)local_50 < 2) {
    *param_2 = 0;
    *(int *)(param_2 + 1) = iVar12;
    if (iVar12 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,(longlong)iVar12 * 2);
      goto LAB_14065080e;
    }
  }
  else {
    iVar6 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar6 = 0;
    }
    if (((int)local_50 != 0) || (iVar9 = 1, iVar6 == 0)) {
      iVar9 = 0;
    }
    local_68 = (void *)0x0;
    local_60 = CONCAT44(local_60._4_4_,(int)local_50);
    if (((int)local_50 == 0) && (iVar9 + iVar6 == 0)) {
      local_60 = local_50 & 0xffffffff;
      uVar14 = 0;
      iVar9 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,(int)local_50 + iVar9 + iVar6,0);
      pvVar10 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar13 * 2);
      uVar14 = local_60 & 0xffffffff;
      iVar9 = local_60._4_4_;
    }
    pvVar1 = local_48;
    iVar11 = (int)uVar14;
    iVar12 = iVar11;
    if (iVar6 != 0) {
      iVar12 = iVar11 + (uint)(iVar11 == 0) + iVar6;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (iVar9 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar14);
        pvVar10 = local_68;
        iVar12 = (int)local_60;
        iVar9 = local_60._4_4_;
      }
      pvVar7 = (void *)(((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2 + (longlong)pvVar10);
      _guard_xfg_dispatch_icall_nop(pvVar7,pvVar1,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar7) = 0;
    }
    *param_2 = (longlong)pvVar10;
    *(int *)(param_2 + 1) = iVar12;
  }
  *(int *)((longlong)param_2 + 0xc) = iVar9;
LAB_14065080e:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140650860 FUN_140650860 body=220 status=ok
// SIG undefined FUN_140650860(void)

void FUN_140650860(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_18;
  undefined8 local_10;
  
  local_10 = 8;
  local_18 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  _Src = local_18;
  FGenericPlatformString::Memcpy(local_18,L"Policy.",0x10);
  if (((int)local_10 != 0) && (iVar3 = (int)local_10 + -1, iVar3 != 0)) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
    return;
  }
  return;
}



// FUNCTION 140650940 FUN_140650940 body=225 status=ok
// SIG undefined FUN_140650940(void)

void FUN_140650940(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_18;
  undefined8 local_10;
  
  FUN_140650860();
  local_10 = 9;
  local_18 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  _Src = local_18;
  FGenericPlatformString::Memcpy(local_18,L"Content.",0x12);
  if (((int)local_10 != 0) && (iVar3 = (int)local_10 + -1, iVar3 != 0)) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
    return;
  }
  return;
}



// FUNCTION 140650a30 FUN_140650a30 body=225 status=ok
// SIG undefined FUN_140650a30(void)

void FUN_140650a30(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_18;
  undefined8 local_10;
  
  FUN_140650860();
  local_10 = 0xc;
  local_18 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  _Src = local_18;
  FGenericPlatformString::Memcpy(local_18,L"Simulation.",0x18);
  if (((int)local_10 != 0) && (iVar3 = (int)local_10 + -1, iVar3 != 0)) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
    return;
  }
  return;
}



// FUNCTION 140650b20 FUN_140650b20 body=254 status=ok
// SIG undefined FUN_140650b20(void)

undefined8
FUN_140650b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_res10 = param_2;
  local_res18 = param_3;
  puVar1 = (undefined8 *)FName::ToString(&local_res18,local_28);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar1;
  }
  uVar4 = param_4;
  switch(param_4) {
  case 0:
    uVar4 = 1;
    break;
  case 1:
    uVar4 = 0;
    break;
  case 2:
    uVar4 = 5;
    break;
  case 3:
    uVar4 = 4;
    break;
  case 4:
    uVar4 = 3;
    break;
  case 5:
    uVar4 = 2;
  }
  puVar1 = (undefined8 *)FName::ToString(&local_res10,local_38);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_14065e340(uVar4);
  uVar3 = FUN_14065e2d0(param_4);
  FString::PrintfImpl(param_1,L"expected a value %s another, but \"%s\" %s \"%s\"",uVar3,puVar5,
                      uVar2,puVar6);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140650c40 FUN_140650c40 body=97 status=ok
// SIG undefined FUN_140650c40(void)

undefined8 * FUN_140650c40(undefined8 *param_1,undefined8 param_2,byte param_3,char param_4)

{
  wchar_t *pwVar1;
  
  if (param_4 != '\0') {
    param_3 = param_3 ^ 1;
  }
  *param_1 = 0;
  param_1[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  pwVar1 = L"expected a true value, but was false";
  if (param_3 == 0) {
    pwVar1 = L"expected a false value, but was true";
  }
  FGenericPlatformString::Memcpy(*param_1,pwVar1,0x4a);
  return param_1;
}



// FUNCTION 140650cb0 FUN_140650cb0 body=149 status=ok
// SIG undefined FUN_140650cb0(void)

longlong FUN_140650cb0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxTest",1);
  plVar3 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar2);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(*plVar3 + 0x80))(plVar3);
  if (lVar4 != 0) {
    lVar5 = UViewport::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140650d50 FUN_140650d50 body=451 status=ok
// SIG undefined FUN_140650d50(void)

uint FUN_140650d50(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  void **local_res8;
  undefined1 local_res10 [8];
  void *local_18;
  undefined8 local_10;
  
  cVar3 = FWeakObjectPtr::IsValid();
  if (cVar3 == '\0') {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      local_18 = (void *)0x0;
      local_10 = 0;
      local_res8 = (void **)0x0;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        puVar8 = (undefined8 *)FName::FName(local_res10,L"DiscoveryMethod",1);
        FAssetDataTagMapSharedView::FindTag(param_1 + 0xe0,&local_res8,*puVar8);
        if (local_res8 != (void **)0x0) {
          if (&local_18 != local_res8) {
            iVar1 = *(int *)(local_res8 + 1);
            _Src = *local_res8;
            local_10 = CONCAT44(local_10._4_4_,iVar1);
            if ((iVar1 != 0) || (local_10._4_4_ != 0)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar1);
              _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar1 * 2);
            }
          }
          puVar8 = (undefined8 *)FName::FName(&local_res8,"GbxTest",1);
          uVar2 = *puVar8;
          uVar9 = FUN_14168dc80();
          plVar10 = (longlong *)FUN_141690010(uVar9,uVar2);
          uVar5 = (**(code **)(*plVar10 + 0x68))(plVar10,&local_18);
          if (uVar5 != 0xffffffff) {
            if (local_18 != (void *)0x0) {
              FMemory::Free();
            }
            return uVar5 & 0xff;
          }
        }
        if (local_18 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xa8);
    plVar10 = *(longlong **)(lVar6 + 0x10);
    lVar6 = plVar10[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar6 = plVar10[0x1f];
      if (lVar6 == 0) {
        return 1;
      }
    }
    lVar7 = FUN_14066fd50();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return (uint)*(byte *)(lVar6 + 0x28);
    }
  }
  return 1;
}



// FUNCTION 140650f20 FUN_140650f20 body=173 status=ok
// SIG undefined FUN_140650f20(void)

longlong * FUN_140650f20(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = FUN_140654d40();
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (plVar4 = (longlong *)FUN_142eb65a0(lVar2), plVar4 != (longlong *)0x0)) {
      lVar2 = UGameInstanceGameParameters::GetPrivateStaticClass();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4);
        if (plVar5 != (longlong *)0x0) {
          return plVar5;
        }
        return plVar4;
      }
      return plVar4;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140650fd0 FUN_140650fd0 body=11 status=ok
// SIG undefined FUN_140650fd0(void)

void FUN_140650fd0(longlong param_1)

{
  FUN_140663ef0(param_1 + 0x28,0);
  return;
}



// FUNCTION 140650fe0 FUN_140650fe0 body=404 status=ok
// SIG undefined FUN_140650fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140650fe0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  ulonglong uVar5;
  size_t _Count;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  wchar_t local_58;
  undefined6 uStack_56;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((ulonglong)(longlong)param_3 <
      (ulonglong)((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x18)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x18);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x80);
  }
  if ((char)plVar1[2] == '\0') {
    local_68 = 0;
    lStack_60 = 0;
  }
  else {
    local_68 = *plVar1;
    lStack_60 = plVar1[1];
  }
  local_48 = 0;
  local_40 = 7;
  local_58 = L'\0';
  if (local_68 != lStack_60) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (&local_58,local_68,lStack_60 - local_68 >> 1);
  }
  _Count = (size_t)(int)local_48;
  pwVar2 = (wchar_t *)CONCAT62(uStack_56,local_58);
  *param_2 = 0;
  pwVar3 = &local_58;
  if (7 < local_40) {
    pwVar3 = pwVar2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  iVar4 = (int)local_48 + 1;
  if ((int)local_48 == 0) {
    iVar4 = 0;
  }
  *(int *)(param_2 + 1) = iVar4;
  if (0 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar2 = (wchar_t *)CONCAT62(uStack_56,local_58);
    if (0 < *(int *)(param_2 + 1)) {
      pwVar2 = (wchar_t *)*param_2;
      wcsncpy(pwVar2,pwVar3,_Count);
      pwVar2[_Count] = L'\0';
      pwVar2 = (wchar_t *)CONCAT62(uStack_56,local_58);
    }
  }
  if (7 < local_40) {
    uVar5 = local_40 * 2 + 2;
    pwVar3 = pwVar2;
    if (0xfff < uVar5) {
      pwVar3 = *(wchar_t **)(pwVar2 + -4);
      uVar5 = local_40 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pwVar3,uVar5);
  }
  return param_2;
}



// FUNCTION 140651180 FUN_140651180 body=133 status=ok
// SIG undefined FUN_140651180(void)

longlong FUN_140651180(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
    lVar5 = (**(code **)(*plVar4 + 0xfa8))(plVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_1406356f0(lVar5);
      if (lVar6 != 0) {
        iVar1 = *(int *)(lVar5 + 0x48);
        iVar3 = FUN_142eecda0(lVar5,lVar6);
        if (iVar3 == iVar1 + -2) {
          return lVar6;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140651210 FUN_140651210 body=705 status=ok
// SIG undefined FUN_140651210(void)

undefined2 * FUN_140651210(longlong *param_1)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined8 *local_res8;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  int local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468567f0) && (_Init_thread_header(&DAT_1468567f0), DAT_1468567f0 == -1))
  {
    FName::FName(&DAT_1468567e8,"NativeParentClass",1);
    _Init_thread_footer(&DAT_1468567f0);
  }
  puVar6 = (undefined2 *)0x0;
  local_res8 = (undefined8 *)0x0;
  puVar7 = puVar6;
  if ((*param_1 != 0) &&
     (FAssetDataTagMapSharedView::FindTag(param_1 + 5,&local_res8,DAT_1468567e8),
     puVar7 = (undefined2 *)0x0, local_res8 != (undefined8 *)0x0)) {
    _Src = (void *)*local_res8;
    iVar1 = *(int *)(local_res8 + 1);
    local_68 = (undefined2 *)0x0;
    local_60 = CONCAT44(local_60._4_4_,iVar1);
    puVar9 = puVar6;
    iVar10 = 0;
    if (iVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar1,0);
      puVar9 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar1 * 2);
      iVar10 = (int)local_60;
    }
    local_38 = 0;
    local_30 = 0;
    local_28 = -1;
    uVar2 = FUN_14171bfe0();
    FUN_1417a5560(uVar2,&local_38,1,0x10,0);
    do {
      local_28 = local_28 + 1;
      puVar7 = (undefined2 *)0x0;
      if ((int)local_30 <= local_28) break;
      puVar7 = (undefined2 *)0x0;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
LAB_140651328:
    if ((local_28 < 0) || ((int)local_30 <= local_28)) goto joined_r0x000140651444;
    puVar3 = (undefined8 *)
             UObjectBaseUtility::GetPathName
                       (*(undefined8 *)(local_38 + (longlong)local_28 * 8),local_48,0);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar3;
    }
    lVar4 = FUN_14171bfe0();
    local_res8 = *(undefined8 **)(lVar4 + 0x18);
    FName::ToString(&local_res8,&local_58);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    FString::PrintfImpl(&local_68,L"%s\'%s\'",puVar5,puVar8);
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    puVar7 = local_68;
    iVar1 = (int)local_60;
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    puVar8 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar8 = puVar9;
    }
    puVar5 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar5 = puVar7;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar8);
    if (iVar1 != 0) {
      do {
        local_28 = local_28 + 1;
        if ((int)local_30 <= local_28) break;
      } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
      goto LAB_140651328;
    }
    puVar6 = *(undefined2 **)(local_38 + (longlong)local_28 * 8);
joined_r0x000140651444:
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return puVar6;
}



// FUNCTION 1406514e0 FUN_1406514e0 body=156 status=ok
// SIG undefined FUN_1406514e0(void)

void FUN_1406514e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_1429c56e0();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
    if (((plVar3 != (longlong *)0x0) &&
        (puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x28))(plVar3), puVar4 != (undefined8 *)0x0))
       && (param_1 != puVar4)) {
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(param_1 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        return;
      }
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 4);
    }
  }
  return;
}



// FUNCTION 140651580 GetActor body=5 status=ok
// SIG undefined GetActor(void)

longlong UGeneral_Player::GetActor(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStackX_8 [32];
  
  puVar2 = (undefined8 *)FName::FName(auStackX_8,L"GbxTest",1);
  plVar3 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar2);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(*plVar3 + 0x80))(plVar3);
  if (lVar4 != 0) {
    lVar5 = UViewport::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140651590 FUN_140651590 body=527 status=ok
// SIG undefined FUN_140651590(void)

longlong FUN_140651590(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uStack_84 = 1;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x40);
  puVar2 = (uint *)(param_1 + 0x28);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_14065165d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14065165d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x40);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140651723;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_140651723:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar2)) {
      return 0;
    }
    lVar6 = (longlong)(int)uStack_4c * 0x88 + *plVar1;
    lVar9 = *(longlong *)(lVar6 + 0x70);
    if ((*(char *)(lVar9 + 0x130) != '\0') || (*(char *)(lVar9 + 0x181) != '\0')) break;
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return lVar6 + 8;
}



// FUNCTION 1406517a0 FUN_1406517a0 body=83 status=ok
// SIG undefined FUN_1406517a0(void)

longlong FUN_1406517a0(longlong param_1,int param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x18) <=
      (ulonglong)(longlong)param_2) {
    return *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x28) >> 1;
  }
  return *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x18) -
         *(longlong *)(param_1 + 0x28) >> 1;
}



// FUNCTION 140651800 FUN_140651800 body=353 status=ok
// SIG undefined FUN_140651800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140651800(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulonglong uVar4;
  size_t _Count;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  wchar_t local_40;
  undefined6 uStack_3e;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_1 + 0x60);
  local_58 = *(longlong *)(param_1 + 0x50);
  lStack_50 = *(longlong *)(param_1 + 0x58);
  if ((char)local_48 == '\0') {
    local_58 = 0;
    lStack_50 = 0;
  }
  local_30 = 0;
  local_28 = 7;
  local_40 = L'\0';
  if (local_58 != lStack_50) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (&local_40,local_58,lStack_50 - local_58 >> 1);
  }
  _Count = (size_t)(int)local_30;
  pwVar1 = (wchar_t *)CONCAT62(uStack_3e,local_40);
  *param_2 = 0;
  pwVar2 = &local_40;
  if (7 < local_28) {
    pwVar2 = pwVar1;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  iVar3 = (int)local_30 + 1;
  if ((int)local_30 == 0) {
    iVar3 = 0;
  }
  *(int *)(param_2 + 1) = iVar3;
  if (0 < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar1 = (wchar_t *)CONCAT62(uStack_3e,local_40);
    if (0 < *(int *)(param_2 + 1)) {
      pwVar1 = (wchar_t *)*param_2;
      wcsncpy(pwVar1,pwVar2,_Count);
      pwVar1[_Count] = L'\0';
      pwVar1 = (wchar_t *)CONCAT62(uStack_3e,local_40);
    }
  }
  if (7 < local_28) {
    uVar4 = local_28 * 2 + 2;
    pwVar2 = pwVar1;
    if (0xfff < uVar4) {
      pwVar2 = *(wchar_t **)(pwVar1 + -4);
      uVar4 = local_28 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pwVar1 + (-8 - (longlong)pwVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pwVar2,uVar4);
  }
  return param_2;
}



// FUNCTION 140651970 FUN_140651970 body=162 status=ok
// SIG undefined FUN_140651970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140651970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [160];
  undefined1 local_b8 [64];
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  FUN_14063db70(local_158,param_1,param_2,param_3);
  local_20 = 0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_68);
  local_70 = 0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_b8);
  FArchive::~FArchive(local_158);
  return;
}



// FUNCTION 140651a20 FUN_140651a20 body=428 status=ok
// SIG undefined FUN_140651a20(void)

void FUN_140651a20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong *puVar5;
  short *psVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 9;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar11 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"/GbxTest",0x12);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar5 = (ulonglong *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar5 = uVar11;
  *(uint *)(puVar5 + 1) = (uint)local_30;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_30._4_4_;
  plVar3 = (longlong *)USequenceRenderSettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  puVar7 = *(undefined8 **)(lVar4 + 0x28);
  puVar12 = puVar7 + (longlong)*(int *)(lVar4 + 0x30) * 2;
  for (; puVar7 != puVar12; puVar7 = puVar7 + 2) {
    uVar11 = 0;
    if (*(int *)(puVar7 + 1) == 0) {
      psVar6 = &DAT_143f3eda8;
    }
    else {
      psVar6 = (short *)*puVar7;
    }
    local_38 = 0;
    local_30 = local_30 & 0xffffffff;
    uVar8 = 0;
    uVar10 = 0;
    if ((psVar6 != (short *)0x0) && (uVar10 = uVar8, *psVar6 != 0)) {
      lVar4 = -1;
      do {
        lVar1 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (psVar6[lVar1] != 0);
      uVar9 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar9;
      uVar13 = uVar11;
      uVar10 = uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        uVar13 = local_30 >> 0x20;
        uVar10 = (uint)local_30;
      }
      uVar11 = local_38;
      uVar8 = (uint)uVar13;
      FGenericPlatformString::Memcpy(local_38,psVar6,(longlong)(int)uVar9 * 2);
    }
    lVar4 = param_2[1];
    iVar2 = (int)lVar4 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar5 = (ulonglong *)((longlong)(int)lVar4 * 0x10 + *param_2);
    local_30 = 0;
    *puVar5 = uVar11;
    *(uint *)(puVar5 + 1) = uVar10;
    *(uint *)((longlong)puVar5 + 0xc) = uVar8;
  }
  return;
}



// FUNCTION 140651bd0 FUN_140651bd0 body=353 status=ok
// SIG undefined FUN_140651bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140651bd0(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulonglong uVar4;
  size_t _Count;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  wchar_t local_40;
  undefined6 uStack_3e;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_1 + 0x78);
  local_58 = *(longlong *)(param_1 + 0x68);
  lStack_50 = *(longlong *)(param_1 + 0x70);
  if ((char)local_48 == '\0') {
    local_58 = 0;
    lStack_50 = 0;
  }
  local_30 = 0;
  local_28 = 7;
  local_40 = L'\0';
  if (local_58 != lStack_50) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (&local_40,local_58,lStack_50 - local_58 >> 1);
  }
  _Count = (size_t)(int)local_30;
  pwVar1 = (wchar_t *)CONCAT62(uStack_3e,local_40);
  *param_2 = 0;
  pwVar2 = &local_40;
  if (7 < local_28) {
    pwVar2 = pwVar1;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  iVar3 = (int)local_30 + 1;
  if ((int)local_30 == 0) {
    iVar3 = 0;
  }
  *(int *)(param_2 + 1) = iVar3;
  if (0 < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar1 = (wchar_t *)CONCAT62(uStack_3e,local_40);
    if (0 < *(int *)(param_2 + 1)) {
      pwVar1 = (wchar_t *)*param_2;
      wcsncpy(pwVar1,pwVar2,_Count);
      pwVar1[_Count] = L'\0';
      pwVar1 = (wchar_t *)CONCAT62(uStack_3e,local_40);
    }
  }
  if (7 < local_28) {
    uVar4 = local_28 * 2 + 2;
    pwVar2 = pwVar1;
    if (0xfff < uVar4) {
      pwVar2 = *(wchar_t **)(pwVar1 + -4);
      uVar4 = local_28 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pwVar1 + (-8 - (longlong)pwVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pwVar2,uVar4);
  }
  return param_2;
}



// FUNCTION 140651d40 GetCompatibleUserDecorationsImpl body=46 status=ok
// SIG undefined GetCompatibleUserDecorationsImpl(void)

void UMovieSceneAudioTrack::GetCompatibleUserDecorationsImpl(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = ACineCameraActor::GetPrivateStaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  return;
}


