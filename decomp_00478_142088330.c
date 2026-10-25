// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142088330 FUN_142088330 body=116 status=ok
// SIG undefined FUN_142088330(void)

undefined8 FUN_142088330(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0xfff) - 0x32;
  lVar1 = (**(code **)(*param_1 + 0xa0))();
  if (lVar1 == 0) {
    return 0;
  }
  if ((param_2 != 9) && (DAT_146ab62cc != 2)) {
    uVar2 = 0x1b2;
    if (uVar3 < 0x32) {
      uVar2 = 400;
    }
    return uVar2;
  }
  uVar2 = 0x112;
  if (uVar3 < 0x32) {
    uVar2 = 0x110;
  }
  return uVar2;
}



// FUNCTION 142088430 FUN_142088430 body=98 status=ok
// SIG undefined FUN_142088430(void)

undefined8 *
FUN_142088430(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0(param_1,param_3);
  if (lVar1 != 0) {
    FUN_142087050(lVar1,param_2,param_4);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 1420884a0 FUN_1420884a0 body=78 status=ok
// SIG undefined FUN_1420884a0(void)

undefined8 *
FUN_1420884a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0(param_1,param_3);
  if (lVar1 != 0) {
    FUN_142087330(lVar1,param_2,param_4);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420884f0 FUN_1420884f0 body=267 status=ok
// SIG undefined FUN_1420884f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1420884f0(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    uVar6 = uRam0000000146ae423c;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = uVar6;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar6 = uRam0000000146ae4234 & uRam0000000146ae4244;
    uVar7 = uRam0000000146ae4238 & uRam0000000146ae4248;
    uVar8 = uRam0000000146ae423c & uRam0000000146ae424c;
    param_2[8] = _DAT_146ae4230 & _DAT_146ae4240;
    param_2[9] = uVar6;
    param_2[10] = uVar7;
    param_2[0xb] = uVar8;
  }
  else {
    FUN_14203d350(local_18,param_2);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142088600 FUN_142088600 body=31 status=ok
// SIG undefined FUN_142088600(void)

void FUN_142088600(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142088620(lVar1);
    return;
  }
  return;
}



// FUNCTION 142088620 FUN_142088620 body=692 status=ok
// SIG undefined FUN_142088620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142088620(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong local_140;
  longlong *plStack_138;
  longlong local_130 [3];
  undefined1 local_118 [96];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_44;
  byte local_42;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_b8 = 0x3f800000;
  local_a8 = 0x3f80000000000000;
  local_90 = 0x3f800000;
  local_88 = 0x3f800000;
  local_78 = 0x3f80000000000000;
  local_60 = 0x3f800000;
  local_50 = 0x3f80000000000000;
  local_148 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_44 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_150 = *(longlong **)(param_1 + 0x30);
      local_158 = 0;
      if (local_150 == (longlong *)0x0) {
LAB_14208873e:
        plVar8 = &local_158;
        bVar4 = true;
        bVar11 = false;
        lVar10 = local_158;
      }
      else {
        LOCK();
        iVar7 = (int)local_150[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_150 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)local_150[1];
          if (bVar11) {
            *(int *)(local_150 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_150 != (longlong *)0x0) {
              local_158 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208873e;
          }
          LOCK();
          iVar7 = (int)local_150[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(local_150 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_158;
        local_150 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_142088767;
    }
  }
  plVar8 = &local_140;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_142088767:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_138;
  *plVar8 = 0;
  if ((bVar11) && (plStack_138 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_138 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
      }
    }
  }
  plVar8 = local_150;
  if ((bVar4) && (local_150 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_150 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if ((lVar10 == 0) || (cVar6 = FUN_142039630(lVar10,local_118), cVar6 == '\0')) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar9 = UObjectBaseUtility::GetPathName(param_1,local_130,0);
    if (local_130[0] != 0) {
      uVar9 = FMemory::Free();
    }
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar9 = (ulonglong)local_42;
  }
  return uVar9;
}



// FUNCTION 1420888e0 FUN_1420888e0 body=41 status=ok
// SIG undefined FUN_1420888e0(void)

void FUN_1420888e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142088910(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 142088910 FUN_142088910 body=445 status=ok
// SIG undefined FUN_142088910(void)

void FUN_142088910(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_1420889ad:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_1420889ad;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_1420889d4;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_1420889d4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203dbf0(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142088ad0 FUN_142088ad0 body=40 status=ok
// SIG undefined FUN_142088ad0(void)

void FUN_142088ad0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142088b00(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 142088b00 FUN_142088b00 body=445 status=ok
// SIG undefined FUN_142088b00(void)

void FUN_142088b00(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142088b9d:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142088b9d;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142088bc4;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142088bc4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203dd70(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142088cc0 FUN_142088cc0 body=41 status=ok
// SIG undefined FUN_142088cc0(void)

void FUN_142088cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142088cf0(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 142088cf0 FUN_142088cf0 body=445 status=ok
// SIG undefined FUN_142088cf0(void)

void FUN_142088cf0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142088d8d:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142088d8d;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142088db4;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142088db4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203e230(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142088eb0 FUN_142088eb0 body=40 status=ok
// SIG undefined FUN_142088eb0(void)

void FUN_142088eb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142088ee0(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 142088ee0 FUN_142088ee0 body=445 status=ok
// SIG undefined FUN_142088ee0(void)

void FUN_142088ee0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142088f7d:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142088f7d;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142088fa4;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142088fa4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203e3e0(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1420890a0 FUN_1420890a0 body=202 status=ok
// SIG undefined FUN_1420890a0(void)

ulonglong FUN_1420890a0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar8 = FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 != 0) {
    bVar6 = FTcpMessageTransportConnection::Init();
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return (ulonglong)bVar6;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar4 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar8 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142089170 ImageLost body=53 status=ok
// SIG undefined ImageLost(void)

void Scaleform::Render::Texture::ImageLost(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  Lock::DoLock(lVar1 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = 0;
  Lock::DoLock(lVar1 + 0x18);
  return;
}



// FUNCTION 1420891d0 FUN_1420891d0 body=150 status=ok
// SIG undefined FUN_1420891d0(void)

void FUN_1420891d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_144f8c610;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)(puVar1 + 2) = 1;
    *(undefined4 *)(puVar1 + 3) = 0;
  }
  if (*(RefCountImpl **)(param_1 + 0x2c8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x2c8));
  }
  *(undefined8 **)(param_1 + 0x2c8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000142089262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))(*(longlong **)(param_1 + 0x180),1,puVar1);
  return;
}



// FUNCTION 142089280 FUN_142089280 body=607 status=ok
// SIG undefined FUN_142089280(void)

ulonglong FUN_142089280(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong in_RAX;
  longlong lVar9;
  undefined4 *puVar10;
  uint7 uVar12;
  ulonglong uVar11;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  bool bVar16;
  
  if (param_2 == (undefined4 *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar10 = (undefined4 *)0x0;
  uVar15 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
  FUN_14170c210(*(longlong *)(param_1 + 0x68) + 0x18);
  lVar9 = UTexture2D::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 4) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 4) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  puVar13 = param_2;
  if (!bVar16) {
    puVar13 = puVar10;
  }
  lVar9 = UTexture2D::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 4) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 4) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (!bVar16) {
    param_2 = puVar10;
  }
  if (puVar13 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
  else {
    uVar7 = UTexture2D::GetNumResidentMips(puVar13);
    *(undefined1 *)(param_1 + 0x44) = uVar7;
    puVar4 = *(undefined4 **)(puVar13 + 0x36);
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar1 = puVar4[1];
      *(undefined4 *)(param_1 + 0x38) = *puVar4;
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
    puVar10 = (undefined4 *)(**(code **)(*plVar5 + 0xa0))(plVar5,uVar8 & 0xffefffff);
    *(undefined4 **)(param_1 + 0x58) = puVar10;
  }
  if (puVar10 == (undefined4 *)0x0) {
    piVar14 = &DAT_1464fae60;
    iVar2 = DAT_1464fae60;
    while (iVar2 != 0) {
      if (puVar13 == (undefined4 *)0x0) {
        if (param_2 != (undefined4 *)0x0) {
          if (*(byte *)((longlong)param_2 + 0xe2) == 0) {
            puVar10 = (undefined4 *)FUN_14046e310(*(undefined1 *)((longlong)param_2 + 0xe1));
          }
          else {
            puVar10 = (undefined4 *)(ulonglong)*(byte *)((longlong)param_2 + 0xe2);
          }
          bVar16 = piVar14[1] == (int)puVar10;
          goto LAB_142089415;
        }
      }
      else {
        puVar10 = *(undefined4 **)(puVar13 + 0x36);
        if (puVar10 == (undefined4 *)0x0) {
          bVar16 = piVar14[1] == 0;
        }
        else {
          bVar16 = piVar14[1] == puVar10[3];
        }
LAB_142089415:
        if (bVar16) {
          puVar10 = (undefined4 *)(**(code **)(*plVar5 + 0xa0))(plVar5,*piVar14);
          *(undefined4 **)(param_1 + 0x58) = puVar10;
          break;
        }
      }
      piVar14 = piVar14 + 8;
      iVar2 = *piVar14;
    }
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    puVar10 = (undefined4 *)(**(code **)(*plVar5 + 0xa0))(plVar5,2);
    *(undefined4 **)(param_1 + 0x58) = puVar10;
  }
  if (puVar13 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      puVar6 = *(uint **)(param_1 + 0x68);
      uVar8 = param_2[0x31];
      puVar10 = (undefined4 *)(ulonglong)(uint)param_2[0x30];
      *puVar6 = param_2[0x30];
      puVar6[1] = uVar8;
    }
  }
  else {
    puVar10 = *(undefined4 **)(puVar13 + 0x36);
    uVar1 = uVar15;
    if (puVar10 != (undefined4 *)0x0) {
      uVar15 = *puVar10;
      uVar1 = puVar10[1];
    }
    puVar10 = *(undefined4 **)(param_1 + 0x68);
    *puVar10 = uVar15;
    puVar10[1] = uVar1;
  }
  uVar12 = (uint7)((ulonglong)puVar10 >> 8);
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
    uVar11 = CONCAT71(uVar12,1);
  }
  else {
    uVar11 = (ulonglong)uVar12 << 8;
  }
  if ((char)uVar11 != '\0') {
    uVar8 = (*(uint **)(param_1 + 0x68))[1];
    uVar3 = **(uint **)(param_1 + 0x68);
    uVar11 = (ulonglong)uVar3;
    *(uint *)(param_1 + 0x38) = uVar3;
    *(uint *)(param_1 + 0x3c) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x40) = 2;
  return CONCAT71((int7)(uVar11 >> 8),1);
}



// FUNCTION 1420894e0 FUN_1420894e0 body=961 status=ok
// SIG undefined FUN_1420894e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420894e0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  uint local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined8 *local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 9) & 4) != 0) {
    uVar9 = FUN_1416f8720(*(undefined4 *)(param_1[0xd] + 0x18));
    uVar9 = FUN_142089280(param_1,uVar9);
    return uVar9;
  }
  bVar4 = false;
  uVar7 = (**(code **)(*param_1 + 0x28))();
  plVar3 = *(longlong **)(param_1[5] + 0x10);
  if (((int)param_1[8] != 3) && (uVar17 = 0, *(char *)((longlong)param_1 + 0x45) != '\0')) {
    do {
      piVar13 = (int *)(uVar17 * 0x20 + param_1[0xd]);
      piVar10 = (int *)FUN_1432c8a20(local_88,uVar7,param_1 + 7,uVar17);
      iVar1 = *piVar10;
      piVar13[1] = piVar10[1];
      *piVar13 = iVar1;
      cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar7,*(undefined2 *)((longlong)param_1 + 0x46));
      if (cVar5 == '\0') {
        local_90 = *piVar13;
        local_8c = piVar13[1];
        Scaleform::Render::ImageSize_RoundUpPow2(&local_98,&local_90);
        if ((local_98 != *piVar13) || (iStack_94 != piVar13[1])) {
          *piVar13 = local_98;
          bVar4 = true;
          piVar13[1] = iStack_94;
        }
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < *(byte *)((longlong)param_1 + 0x45));
    if ((bVar4) && ((*(byte *)((longlong)param_1 + 0x46) & 1) != 0)) {
      if ((uVar7 & 0xfff) - 0x32 < 0x32) goto LAB_142089847;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
    }
  }
  uVar6 = *(ushort *)((longlong)param_1 + 0x46);
  puVar19 = (undefined8 *)0x0;
  uVar7 = 0;
  if ((uVar6 & 2) != 0) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
    uVar16 = 0x1f;
    puVar14 = puVar19;
    if (*(char *)((longlong)param_1 + 0x45) != '\0') {
      do {
        piVar10 = (int *)((longlong)puVar14 * 0x20 + param_1[0xd]);
        iStack_94 = piVar10[1];
        local_98 = *piVar10;
        uVar8 = Scaleform::Render::ImageSize_MipLevelCount(&local_98);
        if (uVar16 < uVar8) {
          uVar8 = uVar16;
        }
        uVar16 = uVar8;
        uVar8 = (int)puVar14 + 1;
        puVar14 = (undefined8 *)(ulonglong)uVar8;
      } while (uVar8 < *(byte *)((longlong)param_1 + 0x45));
      uVar6 = *(ushort *)((longlong)param_1 + 0x46);
    }
    *(char *)((longlong)param_1 + 0x44) = (char)uVar16;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  if ((uVar6 & 0xe0) != 0) {
    uVar7 = 0x100;
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  if ((uVar6 & 0x400) == 0) {
    uVar16 = uVar7 | 0x40;
  }
  else {
    uVar16 = uVar7 | 2;
    if ((DAT_146ab62cc < 0x1e) && ((0x303a0004U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      uVar16 = uVar7 | 3;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  puVar14 = puVar19;
  if (*(char *)((longlong)param_1 + 0x45) != '\0') {
    do {
      puVar18 = (undefined4 *)((longlong)puVar14 * 0x20 + param_1[0xd]);
      puVar11 = (undefined8 *)operator_new(0x80);
      puVar15 = puVar19;
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar11 + 1) = 4;
        puVar11[2] = 0;
        puVar11[3] = 0;
        *(undefined1 *)(puVar11 + 5) = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0xc7efffffe0000000;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        *(undefined4 *)(puVar11 + 0xc) = 0;
        *(undefined2 *)((longlong)puVar11 + 100) = 0;
        *(undefined1 *)((longlong)puVar11 + 0x66) = 0;
        *puVar11 = &PTR_FUN_144f8bd60;
        puVar11[0xd] = param_1;
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        puVar15 = puVar11;
      }
      *(undefined8 **)(puVar18 + 2) = puVar15;
      lVar12 = Scaleform::Render::RHI::Texture::GetTextureFormatMapping(param_1);
      local_50 = L"FGfxTextureResource";
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      local_64 = _DAT_1468b5d78;
      uStack_60 = uRam00000001468b5d7c;
      uStack_5c = uRam00000001468b5d80;
      uStack_58 = uRam00000001468b5d84;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_a0 = &local_78;
      local_c8 = puVar18[1];
      local_b0 = 1;
      local_b8 = (uint)*(byte *)(puVar15[0xd] + 0x44);
      local_c0 = (undefined1)*(undefined4 *)(lVar12 + 4);
      local_a8 = uVar16;
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_98,&DAT_146ab6e78,*puVar18);
      puVar11 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(puVar15 + 0xe,&local_98);
      TRefCountPtr<FRHITexture>::operator=(puVar15 + 6,*puVar11);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
      uVar7 = (int)puVar14 + 1;
      puVar14 = (undefined8 *)(ulonglong)uVar7;
    } while (uVar7 < *(byte *)((longlong)param_1 + 0x45));
  }
  if ((*(ushort *)((longlong)param_1 + 0x46) & 0x400) != 0) {
    uVar2 = ((undefined4 *)param_1[0xd])[1];
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_1[0xd];
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  }
  if ((param_1[6] == 0) || (cVar5 = FUN_1432c90e0(param_1), cVar5 != '\0')) {
    *(undefined4 *)(param_1 + 8) = 2;
    return 1;
  }
  (**(code **)(*param_1 + 0x60))(param_1,1);
LAB_142089847:
  *(undefined4 *)(param_1 + 8) = 1;
  return 0;
}



// FUNCTION 1420898b0 FUN_1420898b0 body=57 status=ok
// SIG undefined FUN_1420898b0(void)

undefined8 * FUN_1420898b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f8baa8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420898f0 FUN_1420898f0 body=103 status=ok
// SIG undefined FUN_1420898f0(void)

undefined8 *
FUN_1420898f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0(param_1,param_3);
  if (lVar1 != 0) {
    FUN_142089960(lVar1,param_2,param_4,param_5);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 142089960 FUN_142089960 body=1001 status=ok
// SIG undefined FUN_142089960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 *
FUN_142089960(longlong param_1,undefined2 *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_1d8 [48];
  uint local_1a8 [2];
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong local_188;
  longlong *plStack_180;
  longlong *local_178;
  undefined2 *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong *local_140;
  uint local_138;
  undefined8 local_130;
  longlong local_120 [2];
  longlong local_110 [3];
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)local_1a8;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_1a8[0] = *(uint *)(param_4 + 1);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_198 = *(longlong **)(param_1 + 0x30);
      local_1a0 = 0;
      if (local_198 == (longlong *)0x0) {
LAB_142089a3a:
        plVar9 = &local_1a0;
        bVar6 = true;
        bVar19 = false;
        lVar10 = local_1a0;
      }
      else {
        LOCK();
        iVar8 = (int)local_198[1];
        bVar19 = iVar8 == 0;
        if (bVar19) {
          *(int *)(local_198 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar19) {
          LOCK();
          bVar19 = iVar8 == (int)local_198[1];
          if (bVar19) {
            *(int *)(local_198 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar19) {
            if (local_198 != (longlong *)0x0) {
              local_1a0 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142089a3a;
          }
          LOCK();
          iVar8 = (int)local_198[1];
          bVar19 = iVar8 == 0;
          if (bVar19) {
            *(int *)(local_198 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        plVar9 = &local_1a0;
        local_198 = (longlong *)0x0;
        bVar6 = true;
        bVar19 = false;
        lVar10 = 0;
      }
      goto LAB_142089a5d;
    }
  }
  plVar9 = &local_188;
  local_188 = 0;
  plStack_180 = (longlong *)0x0;
  bVar6 = false;
  bVar19 = true;
  lVar10 = 0;
LAB_142089a5d:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  plVar2 = plStack_180;
  *plVar9 = 0;
  local_190 = lVar10;
  local_178 = param_4;
  local_170 = param_2;
  local_168 = param_1;
  local_158 = param_3;
  if ((bVar19) && (plStack_180 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_180 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_180 + 8))();
      }
    }
  }
  plVar9 = local_198;
  if ((bVar6) && (local_198 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_198 + 1;
    lVar15 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_198 + 8))();
      }
    }
  }
  puVar16 = auStack_1d8;
  if (lVar10 != 0) {
    cVar7 = FUN_142045cb0(lVar10);
    plVar9 = local_178;
    if (cVar7 == '\0') {
      UObjectBaseUtility::GetPathName(param_1,local_110,0);
      puVar16 = auStack_1d8;
      if (local_110[0] != 0) {
        FMemory::Free();
        puVar16 = auStack_1d8;
      }
    }
    else {
      uVar18 = (ulonglong)local_1a8[0];
      local_160 = (longlong)(int)local_1a8[0];
      lVar10 = local_160 * 0x30;
      if (lVar10 == 0) {
        lVar10 = 0;
        puVar16 = auStack_1d8;
      }
      else {
        uVar13 = lVar10 + 0x1e;
        if (uVar13 <= lVar10 + 0xfU) {
          uVar13 = 0xffffffffffffff0;
        }
        puVar16 = auStack_1d8 + -(uVar13 & 0xfffffffffffffff0);
        lVar10 = (longlong)&local_1a0 + -(uVar13 & 0xfffffffffffffff0);
      }
      lVar15 = 0;
      if (local_1a8[0] != 0) {
        puVar11 = (undefined8 *)(lVar10 + 0x10);
        uVar13 = uVar18;
        do {
          puVar11[-2] = 0xffffffffffffffff;
          puVar11[-1] = 0xffffffffffffffff;
          *puVar11 = 0;
          *(undefined4 *)(puVar11 + 1) = 0;
          puVar11 = puVar11 + 6;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        if (local_1a8[0] != 0) {
          uVar18 = (ulonglong)local_1a8[0];
          lVar17 = lVar10;
          do {
            lVar12 = *plVar9;
            *(undefined8 *)(puVar16 + -8) = 0x142089bae;
            FUN_142082de0(lVar17,lVar12 + lVar15);
            lVar15 = lVar15 + 0x38;
            lVar17 = lVar17 + 0x30;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
          uVar18 = (ulonglong)local_1a8[0];
          param_1 = local_168;
          param_2 = local_170;
        }
      }
      lVar15 = local_160;
      local_140 = (longlong *)0x0;
      local_138 = 0;
      local_150 = 0xffffffffffffffff;
      uStack_148 = 0xffffffffffffffff;
      if (*(int *)(local_158 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*local_158;
      }
      *(undefined8 *)(puVar16 + -8) = 0x142089c03;
      lVar12 = TStringConversion<FTCHARToUTF8_Convert,128>::
               TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,puVar14);
      lVar17 = local_190;
      *(longlong *)(puVar16 + 0x20) = lVar15;
      uVar4 = *(undefined8 *)(lVar12 + 0x88);
      *(undefined8 *)(puVar16 + -8) = 0x142089c1f;
      cVar7 = FUN_1420458d0(lVar17,uVar4,&local_150,lVar10);
      if (local_78 != 0) {
        *(undefined8 *)(puVar16 + -8) = 0x142089c33;
        FMemory::Free();
      }
      if (cVar7 == '\0') {
        *(undefined8 *)(puVar16 + -8) = 0x142089c57;
        UObjectBaseUtility::GetPathName(param_1,local_120,0);
        if (local_120[0] != 0) {
          *(undefined8 *)(puVar16 + -8) = 0x142089c68;
          FMemory::Free();
        }
      }
      else {
        *(undefined8 *)(puVar16 + -8) = 0x142089c46;
        FUN_142082f00(param_1,param_2,&local_150);
      }
      plVar9 = local_140;
      if ((local_138 >> 6 & 1) != 0) {
        pcVar5 = *(code **)(*local_140 + 0x10);
        *(undefined8 *)(puVar16 + -8) = 0x142089c84;
        (*pcVar5)(plVar9,&local_150,local_130);
        local_140 = (longlong *)0x0;
      }
      local_138 = 0;
      if ((int)uVar18 != 0) {
        puVar11 = (undefined8 *)(lVar10 + 0x10);
        do {
          if ((*(uint *)(puVar11 + 1) >> 6 & 1) != 0) {
            plVar9 = (longlong *)*puVar11;
            uVar4 = puVar11[2];
            pcVar5 = *(code **)(*plVar9 + 0x10);
            *(undefined8 *)(puVar16 + -8) = 0x142089cbb;
            (*pcVar5)(plVar9,puVar11 + -2,uVar4);
            *puVar11 = 0;
          }
          *(undefined4 *)(puVar11 + 1) = 0;
          puVar11 = puVar11 + 6;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      pcVar5 = *(code **)*plVar3;
      *(undefined8 *)(puVar16 + -8) = 0x142089d0c;
      (*pcVar5)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        pcVar5 = *(code **)(*plVar3 + 8);
        *(undefined8 *)(puVar16 + -8) = 0x142089d23;
        (*pcVar5)(plVar3,1);
      }
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x142089d35;
  return param_2;
}



// FUNCTION 142089d50 FUN_142089d50 body=101 status=ok
// SIG undefined FUN_142089d50(void)

undefined2 * FUN_142089d50(undefined2 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar1 = *param_3;
  }
  else {
    FUN_142089960(*(longlong *)(param_2 + 0x38),param_1);
    lVar1 = *param_3;
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142089dc0 FUN_142089dc0 body=253 status=ok
// SIG undefined FUN_142089dc0(void)

undefined2 * FUN_142089dc0(undefined2 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  plVar1 = (longlong *)FString::FString(local_18,param_3);
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar3 = 0;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_142089960(*(longlong *)(param_2 + 0x38),param_1,plVar1,&local_28);
    lVar3 = local_28;
    if (*plVar1 != 0) {
      FMemory::Free();
      lVar3 = local_28;
    }
  }
  if ((int)local_20 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x10);
    iVar2 = (int)local_20;
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142089ec0 FUN_142089ec0 body=202 status=ok
// SIG undefined FUN_142089ec0(void)

ulonglong FUN_142089ec0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar8 = FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 != 0) {
    bVar6 = FUN_142045c10();
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return (ulonglong)bVar6;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar4 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar8 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142089f90 FUN_142089f90 body=202 status=ok
// SIG undefined FUN_142089f90(void)

ulonglong FUN_142089f90(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar8 = FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 != 0) {
    bVar6 = FUN_142045c80();
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return (ulonglong)bVar6;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar4 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar8 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14208a080 FUN_14208a080 body=211 status=ok
// SIG undefined FUN_14208a080(void)

ulonglong FUN_14208a080(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = FUN_140ad4c90();
  if (local_18 == 0) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar5 = (int)lVar4 - 1;
      uVar6 = (ulonglong)uVar5;
      if (uVar5 == 0) {
        uVar6 = (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar6 = (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return uVar6 & 0xffffffffffffff00;
  }
  LOCK();
  bVar7 = *(int *)(local_18 + 0xa0) == 0;
  if (bVar7) {
    *(int *)(local_18 + 0xa0) = 0;
  }
  UNLOCK();
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return (ulonglong)!bVar7;
}



// FUNCTION 14208a170 FUN_14208a170 body=202 status=ok
// SIG undefined FUN_14208a170(void)

ulonglong FUN_14208a170(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar8 = FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 != 0) {
    bVar6 = FUN_142046020();
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return (ulonglong)bVar6;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar4 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar8 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14208a250 LSeek body=17 status=ok
// SIG undefined LSeek(void)

longlong FGFxFile::LSeek(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  return (longlong)iVar1;
}



// FUNCTION 14208a280 FUN_14208a280 body=734 status=ok
// SIG undefined FUN_14208a280(void)

ulonglong FUN_14208a280(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar7 = thunk_FUN_142039c70();
  plVar9 = (longlong *)0x0;
  if (lVar7 == 0) goto LAB_14208a50b;
  plVar8 = (longlong *)operator_new(5);
  plVar11 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)plVar8 = 0x1010000;
    *(undefined1 *)((longlong)plVar8 + 4) = 1;
    plVar11 = plVar8;
  }
  local_48 = plVar11;
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_FUN_144f8c848;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)plVar11;
    plVar9 = plVar8;
  }
  plStack_40 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_48,plVar11,plVar11);
  FUN_140ad4c90(param_1,&local_58);
  plVar11 = local_48;
  lVar5 = local_58;
  plVar9 = local_50;
  if (local_58 != 0) {
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    uVar6 = FUN_142046020(local_58);
    plVar8 = local_50;
    *(undefined1 *)((longlong)plVar11 + 1) = uVar6;
    LOCK();
    bVar12 = *(int *)(lVar5 + 0xa0) == 0;
    if (bVar12) {
      *(int *)(lVar5 + 0xa0) = 0;
    }
    UNLOCK();
    *(bool *)((longlong)plVar11 + 2) = bVar12;
    LOCK();
    bVar12 = *(int *)(local_58 + 0x98) == 0;
    if (bVar12) {
      *(int *)(local_58 + 0x98) = 0;
    }
    UNLOCK();
    *(bool *)((longlong)plVar11 + 3) = !bVar12;
    LOCK();
    bVar12 = *(int *)(local_58 + 0x9c) == 0;
    if (bVar12) {
      *(int *)(local_58 + 0x9c) = 0;
    }
    UNLOCK();
    *(bool *)((longlong)plVar11 + 4) = !bVar12;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        plVar9 = local_50;
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          (**(code **)(*param_1 + 0x280))(param_1);
          goto LAB_14208a41b;
        }
      }
    }
    plVar9 = local_50;
    (**(code **)(*param_1 + 0x280))(param_1);
  }
LAB_14208a41b:
  plVar11 = local_50;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_38 = local_48;
  plStack_30 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_1420474c0(lVar7,local_28,param_1,&local_38);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_40 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
LAB_14208a50b:
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff7ffff;
  uVar10 = (param_2 & 0xff) << 0x13;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | (uint)uVar10;
  if ((param_1[0x2b] != 0) && (param_1[0x2c] != 0)) {
    uVar10 = 0;
    puVar2 = (uint *)(param_1[0x2c] + 8);
    LOCK();
    uVar4 = *puVar2;
    if (uVar4 == 0) {
      *puVar2 = 0;
    }
    else {
      uVar10 = (ulonglong)uVar4;
    }
    UNLOCK();
    if (0 < (int)uVar10) {
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
  }
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 14208a580 FUN_14208a580 body=86 status=ok
// SIG undefined FUN_14208a580(void)

void FUN_14208a580(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[5];
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  (**(code **)(*param_1 + 0x60))(param_1,1);
  plVar2 = (longlong *)param_1[6];
  *(undefined4 *)(param_1 + 8) = 3;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xc0))(plVar2,1);
  }
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  return;
}



// FUNCTION 14208a5f0 FUN_14208a5f0 body=1342 status=ok
// SIG undefined FUN_14208a5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14208a5f0(longlong *param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  char local_d8;
  undefined8 *local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  uint local_98;
  uint local_94;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  wchar_t *local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c0 = param_4;
  local_b8 = param_1;
  local_90 = param_2;
  if (param_4 < 5) {
    uVar14 = 1;
    if ((*(byte *)((longlong)param_2 + 0x46) & 2) == 0) {
      uVar14 = (uint)*(byte *)((longlong)param_2 + 0x44);
    }
    uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
    iVar7 = FUN_1432c86a0(uVar6);
    plVar1 = param_1 + 0xb;
    uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
    local_a0 = param_1 + 3;
    FUN_1432c78c0();
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(char *)((longlong)param_1 + 0x21) = (char)param_4;
    param_1[5] = (longlong)plVar1;
    *(short *)((longlong)param_1 + 0x22) = (short)(iVar7 * uVar14);
    plVar18 = local_b8;
    if ((plVar1 != (longlong *)0x0) && (iVar7 * uVar14 == 1)) {
      *(int *)(param_1 + 7) = (int)*plVar1;
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x5c);
      param_1[8] = param_1[0xc];
      param_1[9] = param_1[0xd];
      param_1[10] = param_1[0xe];
    }
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
    plVar18 = param_1 + 3;
    local_a0 = plVar18;
    FUN_1432c78c0(plVar18);
    uVar12 = FUN_1432c7600(plVar18,uVar6,param_4,1);
    plVar18 = param_1;
    if ((char)uVar12 == '\0') {
      return uVar12;
    }
  }
  plVar18[1] = (longlong)param_2;
  local_d8 = '\0';
  *(undefined4 *)(plVar18 + 2) = param_3;
  *(uint *)((longlong)plVar18 + 0x14) = param_4;
  local_bc = (uint)*(byte *)((longlong)param_2 + 0x45);
  local_c8 = 0;
  if (local_bc != 0) {
    local_b0 = 0;
    do {
      lVar16 = local_b0;
      uVar12 = 0;
      lVar10 = param_2[0xd];
      lVar8 = *(longlong *)(lVar10 + 8 + local_b0);
      uVar14 = *(uint *)(lVar10 + local_b0);
      uVar15 = *(uint *)(lVar10 + 4 + local_b0);
      if (lVar8 == 0) {
        lVar8 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18 + local_b0));
        if (((lVar8 != 0) &&
            (lVar8 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18 + lVar16)),
            *(longlong *)(lVar8 + 0x60) != 0)) &&
           (lVar8 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18 + lVar16)),
           *(longlong *)(*(longlong *)(lVar8 + 0x60) + 0x30) != 0)) {
          lVar8 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18 + lVar16));
          lVar8 = (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 0x60) + 0x30) + 8))();
          if (lVar8 != 0) {
            lVar8 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18 + lVar16));
            local_d0 = (undefined8 *)
                       (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 0x60) + 0x30) + 8))();
            if (local_d0 == (undefined8 *)0x0) goto LAB_14208aaf0;
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
            goto LAB_14208a816;
          }
        }
        local_d0 = (undefined8 *)0x0;
LAB_14208aaf0:
        uVar12 = TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d0);
        return uVar12 & 0xffffffffffffff00;
      }
      local_d0 = *(undefined8 **)(lVar8 + 0x70);
      if (local_d0 == (undefined8 *)0x0) goto LAB_14208aaf0;
      LOCK();
      *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
      UNLOCK();
LAB_14208a816:
      if (local_d0 == (undefined8 *)0x0) goto LAB_14208aaf0;
      if (((*(byte *)((longlong)local_90 + 0x46) & 0xf0) != 0) &&
         ((0x17 < DAT_146ab62cc || ((0x800788U >> (DAT_146ab62cc & 0x1f) & 1) == 0)))) {
        lVar8 = *(longlong *)(lVar10 + 0x10 + lVar16);
        if (lVar8 == 0) {
          local_64 = 0;
          local_78 = 1;
          local_e0 = &local_88;
          local_50 = 0;
          local_60 = L"MappedTextureStagingTexture";
          local_88 = 0;
          uStack_80 = 0;
          local_74 = _DAT_1468b5d78;
          uStack_70 = uRam00000001468b5d7c;
          uStack_6c = uRam00000001468b5d80;
          uStack_68 = uRam00000001468b5d84;
          local_e8 = *(undefined4 *)(local_d0 + 8);
          local_f0 = *(undefined4 *)(local_d0 + 7);
          local_f8 = *(undefined4 *)((longlong)local_d0 + 0x34);
          local_100 = (uint *)CONCAT71(local_100._1_7_,*(undefined1 *)((longlong)local_d0 + 0x3c));
          local_108 = *(undefined4 *)((longlong)local_d0 + 100);
          local_58 = lVar8;
          (**(code **)(*DAT_146ab6358 + 0x5e0))
                    (DAT_146ab6358,local_a8,&DAT_146ab6e78,*(undefined4 *)(local_d0 + 0xc));
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar16 + 0x10 + lVar10,local_a8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
          if (*(longlong *)(lVar10 + 0x10 + lVar16) == 0) goto LAB_14208aaf0;
        }
        TRefCountPtr<FRHIIndexBuffer>::operator=();
        if (local_d0 == (undefined8 *)0x0) goto LAB_14208aaf0;
      }
      plVar1 = local_a0;
      puVar3 = local_d0;
      uVar9 = (ulonglong)*(uint *)(plVar18 + 2);
      if (*(uint *)(plVar18 + 2) != 0) {
        do {
          uVar14 = uVar14 >> 1;
          if (uVar14 == 0) {
            uVar14 = 1;
          }
          uVar15 = uVar15 >> 1;
          if (uVar15 == 0) {
            uVar15 = 1;
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar17 = 0;
      if (local_c0 != 0) {
        do {
          local_100 = &local_c4;
          local_f0 = CONCAT31(local_f0._1_3_,1);
          local_c4 = (uint)uVar12;
          local_f8 = CONCAT31(local_f8._1_3_,1);
          local_108 = 1;
          lVar10 = (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,puVar3,uVar17)
          ;
          uVar12 = (ulonglong)local_c4;
          if (lVar10 == 0) {
            uVar12 = 0;
            local_d8 = '\x01';
            lVar10 = 0;
            uVar11 = 0;
          }
          else {
            local_98 = uVar14;
            local_94 = uVar15;
            uVar11 = FUN_1432c8a70((int)*plVar1,&local_98,uVar17);
          }
          puVar13 = (uint *)((ulonglong)(uVar17 * local_bc + local_c8) * 0x20 + local_b8[5]);
          *puVar13 = uVar14;
          uVar14 = uVar14 >> 1;
          puVar13[1] = uVar15;
          *(ulonglong *)(puVar13 + 2) = uVar12;
          if (uVar14 == 0) {
            uVar14 = 1;
          }
          *(undefined8 *)(puVar13 + 4) = uVar11;
          uVar15 = uVar15 >> 1;
          *(longlong *)(puVar13 + 6) = lVar10;
          if (uVar15 == 0) {
            uVar15 = 1;
          }
          uVar17 = uVar17 + 1;
          lVar16 = local_b0;
          plVar18 = local_b8;
        } while (uVar17 < local_c0);
      }
      puVar4 = local_d0;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar3 + 1);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          if ((*(char *)(local_d0 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar19 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar19) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar19) {
              uVar14 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar14 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = (&DAT_1468a81f8)[uVar14 >> 0xe] + (ulonglong)(uVar14 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar10 + 8) = local_d0;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      local_c8 = local_c8 + 1;
      local_b0 = lVar16 + 0x20;
      param_2 = local_90;
    } while (local_c8 < local_bc);
    if (local_d8 != '\0') {
      uVar12 = (**(code **)(*plVar18 + 0x10))(plVar18,0x800701);
      return uVar12 & 0xffffffffffffff00;
    }
  }
  lVar10 = plVar18[1];
  *(longlong **)(lVar10 + 0x50) = plVar18;
  return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
}



// FUNCTION 14208ab30 FUN_14208ab30 body=629 status=ok
// SIG undefined FUN_14208ab30(void)

void FUN_14208ab30(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    iVar2 = FUN_141594550(param_2,&local_38,&DAT_144f89b5c,1);
    if (iVar2 == 2) {
      local_48 = (longlong *)0x0;
      local_40 = 0;
      iVar2 = FUN_141594550(local_38 + 2,&local_48,&DAT_144f89b6c,1);
      if (0 < iVar2) {
        iVar2 = 1;
        uVar6 = 0x10;
        if (1 < (int)local_40) {
          do {
            uVar3 = FString::TrimStartAndEnd(local_48 + (longlong)iVar2 * 2,local_28);
            uVar6 = FUN_1420928a0(uVar6,uVar3);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)local_40);
        }
        puVar4 = &DAT_143f3eda8;
        if ((int)local_48[1] == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*local_48;
        }
        if ((int)local_38[1] != 0) {
          puVar4 = (undefined2 *)*local_38;
        }
        FUN_1433014c0(*(undefined8 *)(param_1 + 0x2c0),puVar4,puVar7,uVar6,0x3f800000,0);
        plVar5 = local_38;
        if ((param_3 != (longlong *)0x0) && (param_4 != 0)) {
          iVar2 = TArray<FString,FDefaultAllocator>::Find(param_3,local_38);
          if (iVar2 == -1) {
            iVar2 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
            }
            FString::FString((longlong)iVar2 * 0x10 + *param_3,plVar5);
          }
          plVar1 = local_38;
          plVar5 = (longlong *)(param_1 + 0x2b0);
          iVar2 = TArray<FString,FDefaultAllocator>::Find(plVar5,local_38);
          if (iVar2 == -1) {
            iVar2 = *(int *)(param_1 + 0x2b8);
            *(int *)(param_1 + 0x2b8) = iVar2 + 1;
            if (*(int *)(param_1 + 700) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar2);
            }
            FString::FString((longlong)iVar2 * 0x10 + *plVar5,plVar1);
          }
          iVar2 = *(int *)(param_4 + 8) + -1;
          if (*(int *)(param_4 + 8) == 0) {
            iVar2 = 0;
          }
          if (iVar2 == 0) {
            FString::operator=(param_4,local_48);
          }
        }
      }
      plVar5 = local_48;
      for (iVar2 = (int)local_40; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    plVar5 = local_38;
    for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 14208adb0 FUN_14208adb0 body=342 status=ok
// SIG undefined FUN_14208adb0(void)

undefined8 * FUN_14208adb0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  wchar_t *local_18;
  wchar_t *pwStack_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae444c) && (_Init_thread_header(&DAT_146ae444c), DAT_146ae444c == -1))
  {
    local_18 = L"stompmalloc-ui";
    pwStack_10 = L"ue-stompmalloc-ui";
    DAT_146ae4448 = FUN_1415b0910(&local_18);
    _Init_thread_footer(&DAT_146ae444c);
  }
  lVar2 = DAT_146ae43c0;
  if (DAT_146ae4448 == '\0') {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      puVar5 = &DAT_00000004;
      if (DVar4 == DAT_1468c21c0) goto LAB_14208ae32;
    }
    else {
LAB_14208ae32:
      puVar5 = (undefined1 *)0x0;
    }
    if (*(int *)(puVar5 + lVar2) == 0) {
      bVar1 = false;
      goto LAB_14208ae42;
    }
  }
  bVar1 = true;
LAB_14208ae42:
  puVar6 = (undefined8 *)operator_new(0x28);
  if (bVar1) {
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar6 = &PTR_FUN_144f8c6d0;
    ppuVar7 = &PTR_LAB_144f8c6f8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar6 = &PTR_FUN_144f8c638;
    ppuVar7 = &PTR_LAB_144f8c658;
  }
  puVar6[1] = ppuVar7;
  puVar6[4] = param_2;
  puVar6[3] = param_1;
  puVar6[2] = 0;
  return puVar6;
}



// FUNCTION 14208af10 FUN_14208af10 body=90 status=ok
// SIG undefined FUN_14208af10(void)

void FUN_14208af10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_144f8c638;
    puVar1[1] = &PTR_LAB_144f8c658;
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    return;
  }
  return;
}



// FUNCTION 14208af70 FUN_14208af70 body=833 status=ok
// SIG undefined FUN_14208af70(void)

void FUN_14208af70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  lVar13 = 0;
  if (iVar6 < (int)DAT_1469e91c4) {
    uVar11 = iVar6 >> 0x1f & 0xffff;
    uVar5 = iVar6 + uVar11;
    lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
  }
  *(uint *)(lVar13 + 8) = *(uint *)(lVar13 + 8) & 0xfbffffff;
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    piVar1 = (int *)(param_1[6] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_60 = (longlong *)param_1[6];
      local_68 = 0;
      if (local_60 == (longlong *)0x0) {
LAB_14208b04f:
        plVar7 = &local_68;
        bVar4 = true;
        bVar16 = false;
        lVar13 = local_68;
      }
      else {
        LOCK();
        iVar6 = (int)local_60[1];
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(local_60 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar6 == (int)local_60[1];
          if (bVar16) {
            *(int *)(local_60 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (local_60 != (longlong *)0x0) {
              local_68 = param_1[5];
            }
            goto LAB_14208b04f;
          }
          LOCK();
          iVar6 = (int)local_60[1];
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(local_60 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_68;
        local_60 = (longlong *)0x0;
        bVar4 = true;
        bVar16 = false;
        lVar13 = 0;
      }
      goto LAB_14208b076;
    }
  }
  plVar7 = &local_58;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  bVar4 = false;
  bVar16 = true;
  lVar13 = 0;
LAB_14208b076:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_50;
  if ((bVar16) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar7 = local_60;
  if ((bVar4) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (lVar13 != 0) {
    lVar8 = (**(code **)(*param_1 + 0x290))(param_1);
    if (lVar8 != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 400));
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::Remove(lVar8 + 0x198,lVar13 + 0x28);
      lVar9 = (longlong)*(int *)(lVar8 + 0x200);
      if (*(int *)(lVar8 + 0x200) != 0) {
        iVar15 = 0;
        bVar16 = (longlong *)**(undefined8 **)(lVar8 + 0x1f8) != param_1;
        lVar12 = 0;
        iVar6 = 0;
        do {
          lVar12 = lVar12 + 1;
          iVar14 = iVar6 + 1;
          if (lVar12 < lVar9) {
            puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f8) + lVar12 * 8);
            do {
              if (bVar16 != ((longlong *)*puVar10 != param_1)) break;
              iVar14 = iVar14 + 1;
              lVar12 = lVar12 + 1;
              puVar10 = puVar10 + 1;
            } while (lVar12 < lVar9);
          }
          if (bVar16 != false) {
            if (iVar15 != iVar6) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar8 + 0x1f8) + (longlong)iVar15 * 8),
                         (void *)(*(longlong *)(lVar8 + 0x1f8) + (longlong)iVar6 * 8),
                         (longlong)(iVar14 - iVar6) << 3);
            }
            iVar15 = iVar15 + (iVar14 - iVar6);
          }
          bVar16 = (bool)(bVar16 ^ 1);
          iVar6 = iVar14;
        } while (lVar12 < lVar9);
        *(int *)(lVar8 + 0x200) = iVar15;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 400));
    }
    FUN_142033200(lVar13);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar13 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208b2c0 FUN_14208b2c0 body=30 status=ok
// SIG undefined FUN_14208b2c0(void)

void FUN_14208b2c0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x100,local_res10);
  return;
}



// FUNCTION 14208b2e0 FUN_14208b2e0 body=30 status=ok
// SIG undefined FUN_14208b2e0(void)

void FUN_14208b2e0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x110,local_res10);
  return;
}



// FUNCTION 14208b300 FUN_14208b300 body=420 status=ok
// SIG undefined FUN_14208b300(void)

void FUN_14208b300(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  longlong local_18 [2];
  
  UObjectBaseUtility::GetPathName(param_1,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_14208b3a7:
        puVar8 = &local_38;
        bVar5 = true;
        bVar9 = false;
      }
      else {
        LOCK();
        iVar7 = (int)local_30[1];
        bVar9 = iVar7 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar7 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(undefined8 *)(param_1 + 0x28);
            }
            goto LAB_14208b3a7;
          }
          LOCK();
          iVar7 = (int)local_30[1];
          bVar9 = iVar7 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        local_30 = (longlong *)0x0;
        puVar8 = &local_38;
        bVar5 = true;
        bVar9 = false;
      }
      goto LAB_14208b3c6;
    }
  }
  puVar8 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar5 = false;
  bVar9 = true;
LAB_14208b3c6:
  plVar4 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  *puVar8 = 0;
  plVar3 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar3 = local_30;
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14208b4b0 FUN_14208b4b0 body=32 status=ok
// SIG undefined FUN_14208b4b0(void)

void FUN_14208b4b0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xf0,local_res10);
  return;
}



// FUNCTION 14208b4d0 FUN_14208b4d0 body=439 status=ok
// SIG undefined FUN_14208b4d0(void)

longlong FUN_14208b4d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      byte param_5,undefined1 param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_res8 [2];
  longlong local_78 [2];
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if ((param_1 == 0) || (DAT_146ab62f7 != '\0')) {
    param_4 = 0;
  }
  else {
    if (param_4 == 0) {
      uVar4 = GetTransientPackage();
      param_4 = FUN_14207ece0(uVar4);
    }
    iVar2 = *(int *)(param_4 + 0xc);
    lVar5 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
    plVar6 = (longlong *)UObjectBaseUtility::GetPathName(param_1,local_78,0);
    plVar1 = (longlong *)(param_4 + 0x28);
    if (plVar1 != plVar6) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar6;
      *plVar6 = 0;
      *(int *)(param_4 + 0x30) = (int)plVar6[1];
      *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar6[1] = 0;
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    *(uint *)(param_4 + 0x40) = *(uint *)(param_4 + 0x40) & 0xfffffffe;
    *(uint *)(param_4 + 0x40) = *(uint *)(param_4 + 0x40) | (uint)param_5;
    *(undefined8 *)(param_4 + 0x50) = param_2;
    *(undefined8 *)(param_4 + 0x48) = param_3;
    local_res8[0] = 0xffffffff;
    FUN_14170c210(local_res8,param_4);
    uVar9 = local_res8[0];
    local_res8[0] = 0xffffffff;
    local_38 = 0;
    local_28 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_144f8c830;
      *(undefined1 *)(puVar7 + 1) = param_6;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_68[0] = FUN_1420829d0;
    FUN_14204c280(local_68);
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_res8[0]);
  }
  return param_4;
}



// FUNCTION 14208b690 FUN_14208b690 body=304 status=ok
// SIG undefined FUN_14208b690(void)

longlong *
FUN_14208b690(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,byte param_5,
             undefined1 param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong local_18 [2];
  
  if (param_1 == 0) {
    param_4 = (longlong *)0x0;
  }
  else {
    if (param_4 == (longlong *)0x0) {
      uVar4 = GetTransientPackage();
      param_4 = (longlong *)FUN_14207ece0(uVar4);
      iVar2 = *(int *)((longlong)param_4 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar7 = iVar2 >> 0x1f & 0xffff;
        uVar3 = iVar2 + uVar7;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
    }
    plVar6 = (longlong *)UObjectBaseUtility::GetPathName(param_1,local_18,0);
    plVar1 = param_4 + 5;
    if (plVar1 != plVar6) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar6;
      *plVar6 = 0;
      *(int *)(param_4 + 6) = (int)plVar6[1];
      *(undefined4 *)((longlong)param_4 + 0x34) = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar6[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (param_2 != 0) {
      param_4[10] = param_2;
    }
    if (param_3 != 0) {
      param_4[9] = param_3;
    }
    if (param_4 != (longlong *)0x0) {
      *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) & 0xfffffffe;
      *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | (uint)param_5;
      (**(code **)(*param_4 + 0x278))(param_4,param_6);
    }
  }
  return param_4;
}



// FUNCTION 14208b7c0 FUN_14208b7c0 body=1783 status=ok
// SIG undefined FUN_14208b7c0(void)

wchar_t **
FUN_14208b7c0(undefined8 param_1,wchar_t **param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,char param_6)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  short *psVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  void *pvVar16;
  int iVar17;
  wchar_t *pwVar18;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar19;
  wchar_t *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  ulonglong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  FString::FString(param_2,param_3);
  local_90 = 6;
  local_98 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  lVar12 = local_98;
  FGenericPlatformString::Memcpy(local_98,L"GFxUI",0xc);
  if (param_4 == &local_98) {
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
  }
  else {
    if (*param_4 != 0) {
      FMemory::Free();
    }
    *param_4 = lVar12;
    *(undefined4 *)(param_4 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_90._4_4_;
  }
  uVar7 = FGuid::NewGuid(local_48);
  FUN_141682af0(uVar7,&local_68,0);
  if (param_5 == &local_68) {
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_5 != 0) {
      FMemory::Free();
    }
    *param_5 = local_68;
    *(undefined4 *)(param_5 + 1) = local_60;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_5c;
  }
  psVar2 = (short *)*param_3;
  psVar13 = psVar2;
  do {
    if (psVar13 == psVar2 + (int)param_3[1]) {
LAB_14208be8c:
      if (*param_3 != 0) {
        FMemory::Free();
      }
      return param_2;
    }
    if (*psVar13 == 0x5e) {
      iVar17 = (int)((longlong)psVar13 - (longlong)psVar2 >> 1);
      if (iVar17 != -1) {
        local_a8 = (wchar_t *)0x0;
        uVar9 = iVar17 + 1;
        local_a0 = 0;
        uVar3 = FUN_141592950(param_3,&DAT_144f89af4,1,0,CONCAT44(uVar19,uVar9));
        uVar4 = FUN_141592950(param_3,&DAT_144f89b14,1,0,uVar9);
        if (((0 < (int)uVar3) && (0 < (int)uVar4)) && ((int)uVar3 < (int)uVar4)) {
          iVar6 = (int)param_3[1];
          uVar5 = iVar6 - 1;
          if (iVar6 == 0) {
            uVar5 = 0;
          }
          if (uVar9 < uVar5) {
            uVar5 = uVar9;
          }
          uVar9 = iVar6 - 1;
          if (iVar6 == 0) {
            uVar9 = 0;
          }
          uVar10 = uVar5;
          if ((uVar5 <= uVar3) && (uVar10 = uVar9, uVar3 < uVar9)) {
            uVar10 = uVar3;
          }
          if (iVar6 == 0) {
            local_d8 = L"";
          }
          else {
            local_d8 = (wchar_t *)*param_3;
          }
          iVar11 = uVar10 - uVar5;
          local_b8 = (wchar_t *)0x0;
          local_ac = 0;
          iVar6 = iVar11 + 1;
          if (iVar11 == 0) {
            iVar6 = 0;
          }
          local_b0 = iVar6;
          if ((0 < iVar6) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0), iVar6 = local_b0,
             0 < local_b0)) {
            wcsncpy(local_b8,local_d8 + (int)uVar5,(longlong)iVar11);
            local_b8[iVar11] = L'\0';
          }
          if (local_a8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_a8 = local_b8;
          local_a0 = CONCAT44(local_ac,iVar6);
        }
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        iVar6 = FUN_141594550(&local_a8,&local_c8,&DAT_144f89b4c,1);
        plVar8 = local_c8;
        if (iVar6 == 1) {
LAB_14208ba6c:
          FString::operator=(param_5,plVar8);
        }
        else if (iVar6 == 2) {
          FString::operator=(param_4,local_c8);
          plVar8 = local_c8 + 2;
          goto LAB_14208ba6c;
        }
        iVar6 = (int)param_3[1] + -1;
        if ((int)param_3[1] == 0) {
          pwVar18 = L"";
          iVar6 = 0;
        }
        else {
          pwVar18 = (wchar_t *)*param_3;
        }
        if (iVar17 < 0) {
          iVar6 = 0;
        }
        else if (iVar17 < iVar6) {
          iVar6 = iVar17;
        }
        local_d8 = (wchar_t *)0x0;
        local_cc = 0;
        iVar17 = iVar6 + 1;
        if (iVar6 == 0) {
          iVar17 = 0;
        }
        pwVar14 = (wchar_t *)0x0;
        local_d0 = iVar17;
        if ((0 < iVar17) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0), iVar17 = local_d0,
           pwVar14 = local_d8, 0 < local_d0)) {
          wcsncpy(local_d8,pwVar18,(longlong)iVar6);
          pwVar14[iVar6] = L'\0';
        }
        if (param_2 == &local_d8) {
          if (pwVar14 != (wchar_t *)0x0) {
            FMemory::Free(pwVar14);
          }
        }
        else {
          if (*param_2 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *param_2 = pwVar14;
          *(int *)(param_2 + 1) = iVar17;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_cc;
        }
        uVar7 = FUN_141607f00();
        FUN_141604c00(uVar7,&local_58,param_4,param_5,0);
        if ((param_6 == '\0') || (local_58 == (undefined8 *)0x0)) {
          iVar17 = (int)param_3[1];
          uVar9 = iVar17 - 1;
          if (iVar17 == 0) {
            uVar9 = 0;
          }
          uVar5 = iVar17 - 1;
          if (uVar3 + 1 < uVar9) {
            uVar9 = uVar3 + 1;
          }
          if (iVar17 == 0) {
            uVar5 = 0;
          }
          uVar3 = uVar9;
          if ((uVar9 <= uVar4) && (uVar3 = uVar5, uVar4 < uVar5)) {
            uVar3 = uVar4;
          }
          if (iVar17 == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*param_3;
          }
          iVar6 = uVar3 - uVar9;
          pwVar18 = (wchar_t *)0x0;
          local_88 = (wchar_t *)0x0;
          local_7c = 0;
          iVar17 = iVar6 + 1;
          if (iVar6 == 0) {
            iVar17 = 0;
          }
          local_80 = iVar17;
          if ((0 < iVar17) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0), iVar17 = local_80,
             pwVar18 = local_88, 0 < local_80)) {
            wcsncpy(local_88,puVar15 + (int)uVar9,(longlong)iVar6);
            pwVar18[iVar6] = L'\0';
          }
          if ((iVar17 != 0) && (iVar17 = iVar17 + -1, iVar17 != 0)) {
            iVar6 = *(int *)(param_2 + 1);
            iVar11 = (uint)(iVar6 == 0) + iVar6 + iVar17;
            *(int *)(param_2 + 1) = iVar11;
            if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
            }
            pwVar14 = *param_2;
            _guard_xfg_dispatch_icall_nop
                      (pwVar14 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),pwVar18,
                       (longlong)iVar17 * 2);
            (pwVar14 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar17] = L'\0';
          }
          if (pwVar18 != (wchar_t *)0x0) {
            FMemory::Free(pwVar18);
          }
        }
        else {
          pvVar16 = (void *)*local_58;
          iVar17 = *(int *)(local_58 + 1) + -1;
          if (*(int *)(local_58 + 1) == 0) {
            iVar17 = 0;
          }
          if (iVar17 != 0) {
            iVar6 = *(int *)(param_2 + 1);
            iVar11 = (uint)(iVar6 == 0) + iVar17 + iVar6;
            *(int *)(param_2 + 1) = iVar11;
            if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
            }
            pwVar18 = *param_2;
            _guard_xfg_dispatch_icall_nop
                      (pwVar18 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),pvVar16,
                       (longlong)iVar17 * 2);
            (pwVar18 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar17] = L'\0';
          }
        }
        pvVar16 = (void *)0x0;
        iVar17 = (int)param_3[1];
        if (iVar17 == 0) {
          iVar6 = -1;
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*param_3;
          iVar6 = iVar17 + -1;
        }
        iVar11 = 0;
        if (iVar17 == 0) {
          iVar6 = iVar11;
        }
        iVar17 = (iVar6 - uVar4) + -1;
        if ((-1 < iVar17) && (iVar11 = iVar6, (int)(iVar6 - uVar4) <= iVar6)) {
          iVar11 = iVar17;
        }
        local_78 = (void *)0x0;
        local_70 = 0;
        psVar2 = puVar15 + ((longlong)iVar6 - (longlong)iVar11);
        if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (psVar2[lVar12] != 0);
          uVar4 = (int)lVar12 + 1;
          local_70 = (ulonglong)uVar4;
          uVar3 = uVar4;
          if (0 < (int)uVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
            uVar3 = (uint)local_70;
          }
          pvVar16 = local_78;
          FGenericPlatformString::Memcpy(local_78,psVar2,(longlong)(int)uVar4 * 2);
          if ((uVar3 != 0) && (iVar17 = uVar3 - 1, iVar17 != 0)) {
            iVar6 = *(int *)(param_2 + 1);
            iVar11 = (uint)(iVar6 == 0) + iVar6 + iVar17;
            *(int *)(param_2 + 1) = iVar11;
            if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
            }
            pwVar18 = *param_2;
            _guard_xfg_dispatch_icall_nop
                      (pwVar18 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),pvVar16,
                       (longlong)iVar17 * 2);
            (pwVar18 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar17] = L'\0';
          }
        }
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_50 + 1;
          lVar12 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar8 = local_c8;
        for (iVar17 = (int)local_c0; iVar17 != 0; iVar17 = iVar17 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free(local_c8);
        }
        if (local_a8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      goto LAB_14208be8c;
    }
    psVar13 = psVar13 + 1;
  } while( true );
}



// FUNCTION 14208bec0 FUN_14208bec0 body=51 status=ok
// SIG undefined FUN_14208bec0(void)

void FUN_14208bec0(undefined8 param_1)

{
  longlong local_18 [2];
  
  UObject::PostLoad();
  UObjectBaseUtility::GetPathName(param_1,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14208bf00 FUN_14208bf00 body=274 status=ok
// SIG undefined FUN_14208bf00(void)

void FUN_14208bf00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  UObject::PostLoad();
  lVar7 = *(longlong *)(param_1 + 0xb0);
  lVar6 = (longlong)*(int *)(param_1 + 0xb8) * 0x50 + lVar7;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x50) {
    FUN_14203a620(lVar7,&local_78);
    local_68 = local_78;
    plStack_60 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    FUN_142029890(&local_68,0);
    plVar5 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  local_28 = 0;
  local_18 = 0;
  local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142081b30(param_1,local_58);
  return;
}



// FUNCTION 14208c020 FUN_14208c020 body=271 status=ok
// SIG undefined FUN_14208c020(void)

void FUN_14208c020(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  LOCK();
  iVar2 = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xa8) = 1;
  UNLOCK();
  if (iVar2 == 0) {
    plVar1 = (longlong *)(param_1 + 0xd0);
    puVar4 = (undefined8 *)*plVar1;
    uVar8 = (ulonglong)*(int *)(param_1 + 0xd8);
    puVar6 = puVar4 + uVar8 * 10;
    if (puVar4 != puVar6) {
      plVar5 = puVar4 + 6;
      do {
        if ((int)plVar5[2] != 0) {
          plVar3 = (longlong *)*plVar5;
          if ((longlong *)*plVar5 == (longlong *)0x0) {
            plVar3 = plVar5 + -4;
          }
          if (plVar3 != (longlong *)0x0) {
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            (*(code *)*puVar4)();
          }
        }
        puVar4 = puVar4 + 10;
        plVar5 = plVar5 + 10;
      } while (puVar4 != puVar6);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xd8);
    }
    if ((int)uVar8 != 0) {
      plVar5 = (longlong *)(*plVar1 + 0x30);
      do {
        if ((int)plVar5[2] != 0) {
          plVar3 = (longlong *)*plVar5;
          if ((longlong *)*plVar5 == (longlong *)0x0) {
            plVar3 = plVar5 + -4;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 10;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(int *)(param_1 + 0xdc) != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14208c130 FUN_14208c130 body=224 status=ok
// SIG undefined FUN_14208c130(void)

void FUN_14208c130(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x15) = 0;
  UNLOCK();
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    if (param_1[10] == 0) {
      param_1[10] = (longlong)param_1;
    }
    uVar8 = uVar6;
    if (0 < (int)param_1[0x10]) {
      do {
        (**(code **)(*param_1 + 0x2a0))
                  (param_1,param_1[0xf] + (longlong)(int)uVar8 * 0x18,
                   *(undefined8 *)(uVar6 + 0x10 + param_1[0xf]));
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 0x18;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_1[0x10]);
    }
    TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x2d,param_1 + 0xb);
    TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x2f,param_1 + 0xd);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 14208c210 FUN_14208c210 body=78 status=ok
// SIG undefined FUN_14208c210(void)

void FUN_14208c210(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    if ((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(longlong *)(param_2 + 0x18);
      *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    *(longlong *)(param_2 + 0x10) = *param_1;
    *(longlong **)(param_2 + 0x18) = param_1 + -2;
    *(longlong *)(*param_1 + 0x18) = param_2;
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 14208c260 FUN_14208c260 body=150 status=ok
// SIG undefined FUN_14208c260(void)

void FUN_14208c260(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [80];
  
  FUN_140ad4c90(param_1,&local_68);
  if (local_68 == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_2);
    FUN_14204c280(local_58);
  }
  else {
    FUN_14204c130();
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 14208c300 FUN_14208c300 body=485 status=ok
// SIG undefined FUN_14208c300(void)

void FUN_14208c300(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [80];
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_80 = *(longlong **)(param_1 + 0x30);
      local_88 = 0;
      if (local_80 == (longlong *)0x0) {
LAB_14208c39d:
        plVar7 = &local_88;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_88;
      }
      else {
        LOCK();
        iVar6 = (int)local_80[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_80 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_80[1];
          if (bVar9) {
            *(int *)(local_80 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_80 != (longlong *)0x0) {
              local_88 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208c39d;
          }
          LOCK();
          iVar6 = (int)local_80[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_80 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_88;
        local_80 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_14208c3c4;
    }
  }
  plVar7 = &local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_14208c3c4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_70;
  if ((bVar9) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar7 = local_80;
  if ((bVar4) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar8 == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,param_2);
    FUN_14204c280(local_68);
  }
  else {
    FUN_14204c270(lVar8);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208c4f0 FUN_14208c4f0 body=219 status=ok
// SIG undefined FUN_14208c4f0(void)

void FUN_14208c4f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [80];
  
  FUN_140ad4c90(param_1,&local_68);
  if (local_68 != 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_2);
    FUN_14204c370(local_68,local_58);
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)();
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_2 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14208c5d0 FUN_14208c5d0 body=558 status=ok
// SIG undefined FUN_14208c5d0(void)

void FUN_14208c5d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *plStack_88;
  undefined1 local_78 [80];
  
  local_98 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_a0 = *(longlong **)(param_1 + 0x30);
      local_a8 = 0;
      if (local_a0 == (longlong *)0x0) {
LAB_14208c671:
        plVar7 = &local_a8;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_a8;
      }
      else {
        LOCK();
        iVar6 = (int)local_a0[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_a0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_a0[1];
          if (bVar9) {
            *(int *)(local_a0 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_a0 != (longlong *)0x0) {
              local_a8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208c671;
          }
          LOCK();
          iVar6 = (int)local_a0[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_a0 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_a8;
        local_a0 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_14208c69a;
    }
  }
  plVar7 = &local_90;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_14208c69a:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar2 = plStack_88;
  *plVar7 = 0;
  if ((bVar9) && (plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_88 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_88 + 8))(plStack_88,1);
      }
    }
  }
  plVar7 = local_a0;
  if ((bVar4) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar8 != 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_2);
    FUN_14204c6c0(lVar8,local_78);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar7 = (longlong *)(param_2 + 0x10);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14208c800 FUN_14208c800 body=310 status=ok
// SIG undefined FUN_14208c800(void)

void FUN_14208c800(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [80];
  undefined1 local_68 [80];
  
  FUN_140ad4c90(param_1,&local_c8);
  if (local_c8 != 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,param_3);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,param_2);
    FUN_14204c730(local_c8,local_68,local_b8);
  }
  plVar5 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_2 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_3 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14208c940 FUN_14208c940 body=116 status=ok
// SIG undefined FUN_14208c940(void)

void FUN_14208c940(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_14204cae0(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 14208c9c0 FUN_14208c9c0 body=445 status=ok
// SIG undefined FUN_14208c9c0(void)

void FUN_14208c9c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_14208ca5d:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208ca5d;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_14208ca84;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_14208ca84:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14204cc30(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208cb80 FUN_14208cb80 body=93 status=ok
// SIG undefined FUN_14208cb80(void)

int FUN_14208cb80(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
    return -1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) < iVar1 + param_3) {
    param_3 = *(int *)(param_1 + 0x18) - iVar1;
  }
  _guard_xfg_dispatch_icall_nop
            (param_2,(void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x10)),(longlong)param_3);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
  return param_3;
}



// FUNCTION 14208cc40 FUN_14208cc40 body=1240 status=ok
// SIG undefined FUN_14208cc40(void)

void FUN_14208cc40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong local_28 [2];
  
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  pwVar4 = L"GFxApplyLanguage";
  do {
    wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c5678));
    if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208ccc1;
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) break;
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
  if (wVar2 != wVar3) {
    return;
  }
LAB_14208ccc1:
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  pwVar4 = L"Spanish";
  do {
    wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c568c));
    if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208cd1d;
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) break;
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    pwVar4 = L"French";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c5698));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208cd9d;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208cd92;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208cd1d:
  local_28[1] = 3;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  pwVar4 = L"es";
  goto LAB_14208d0d2;
LAB_14208cd92:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    pwVar4 = L"German";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c56a4));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208ce1d;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208ce12;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208cd9d:
  local_28[1] = 3;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  pwVar4 = L"fr";
  goto LAB_14208d0d2;
LAB_14208ce12:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    pwVar4 = L"Russian";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c56b0));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208ce9d;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208ce92;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208ce1d:
  local_28[1] = 3;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  pwVar4 = L"de";
  goto LAB_14208d0d2;
LAB_14208ce92:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    pwVar4 = L"Korean";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c56bc));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208cf1d;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208cf12;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208ce9d:
  local_28[1] = 3;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  pwVar4 = L"ru";
  goto LAB_14208d0d2;
LAB_14208cf12:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    pwVar4 = L"Chinese";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c56c8));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208cf9d;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208cf92;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208cf1d:
  local_28[1] = 3;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  pwVar4 = L"ko";
  goto LAB_14208d0d2;
LAB_14208cf92:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    pwVar4 = L"Japanese";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar5 + -0xa27c56d8));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208d01d;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208d012;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208cf9d:
  local_28[1] = 6;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  uVar6 = 0xc;
  pwVar4 = L"zh-CN";
  goto LAB_14208d0d8;
LAB_14208d086:
  if (wVar2 == wVar3) {
LAB_14208d090:
    local_28[1] = 3;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    pwVar4 = L"hi";
  }
  else {
    local_28[1] = 3;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    pwVar4 = L"en";
  }
  goto LAB_14208d0d2;
LAB_14208d012:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) != 0) {
      puVar7 = (undefined2 *)*param_3;
    }
    pwVar4 = L"Hindi";
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar4 + (longlong)(puVar7 + -0xa27c56e8));
      if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14208d090;
      if (wVar1 != *pwVar4) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_14208d086;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_14208d01d:
  local_28[1] = 3;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  pwVar4 = L"ja";
LAB_14208d0d2:
  uVar6 = 6;
LAB_14208d0d8:
  FGenericPlatformString::Memcpy(local_28[0],pwVar4,uVar6);
  uVar6 = FInternationalization::Get();
  FInternationalization::SetCurrentCulture(uVar6,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14208d120 FUN_14208d120 body=149 status=ok
// SIG undefined FUN_14208d120(void)

bool FUN_14208d120(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*param_2 == 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_18);
    if (param_2 != plVar4) {
      *param_2 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar4 + 1);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 14208d1c0 FUN_14208d1c0 body=266 status=ok
// SIG undefined FUN_14208d1c0(void)

ulonglong FUN_14208d1c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar1 = param_2 + 1;
  if ((*param_2 != 0) && (*plVar1 != 0)) {
    plVar8 = (longlong *)0x0;
    puVar2 = (uint *)(*plVar1 + 8);
    LOCK();
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      *puVar2 = 0;
    }
    else {
      plVar8 = (longlong *)(ulonglong)uVar7;
    }
    UNLOCK();
    if (0 < (int)plVar8) goto LAB_14208d29d;
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_18);
  *param_2 = *plVar8;
  plVar5 = (longlong *)plVar8[1];
  plVar9 = (longlong *)*plVar1;
  if (plVar5 != plVar9) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar8 = (longlong *)(ulonglong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        plVar8 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *plVar1 = (longlong)plVar5;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    uVar7 = (int)lVar6 - 1;
    plVar8 = (longlong *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      plVar8 = (longlong *)(**(code **)*local_10)(local_10);
      LOCK();
      piVar3 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        plVar8 = (longlong *)(**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
LAB_14208d29d:
  if ((*param_2 != 0) && (*plVar1 != 0)) {
    plVar8 = (longlong *)0x0;
    puVar2 = (uint *)(*plVar1 + 8);
    LOCK();
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      *puVar2 = 0;
    }
    else {
      plVar8 = (longlong *)(ulonglong)uVar7;
    }
    UNLOCK();
    if (0 < (int)plVar8) {
      return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
    }
  }
  return (ulonglong)plVar8 & 0xffffffffffffff00;
}



// FUNCTION 14208d2d0 FUN_14208d2d0 body=145 status=ok
// SIG undefined FUN_14208d2d0(void)

bool FUN_14208d2d0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*param_2 == 0) {
    plVar4 = (longlong *)FUN_142085870(param_1,local_18);
    if (param_2 != plVar4) {
      *param_2 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar4 + 1);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 14208d370 FUN_14208d370 body=262 status=ok
// SIG undefined FUN_14208d370(void)

ulonglong FUN_14208d370(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar1 = param_2 + 1;
  if ((*param_2 != 0) && (*plVar1 != 0)) {
    plVar8 = (longlong *)0x0;
    puVar2 = (uint *)(*plVar1 + 8);
    LOCK();
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      *puVar2 = 0;
    }
    else {
      plVar8 = (longlong *)(ulonglong)uVar7;
    }
    UNLOCK();
    if (0 < (int)plVar8) goto LAB_14208d449;
  }
  plVar8 = (longlong *)FUN_142085870(param_1,local_18);
  *param_2 = *plVar8;
  plVar5 = (longlong *)plVar8[1];
  plVar9 = (longlong *)*plVar1;
  if (plVar5 != plVar9) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar8 = (longlong *)(ulonglong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        plVar8 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *plVar1 = (longlong)plVar5;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    uVar7 = (int)lVar6 - 1;
    plVar8 = (longlong *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      plVar8 = (longlong *)(**(code **)*local_10)(local_10);
      LOCK();
      piVar3 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        plVar8 = (longlong *)(**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
LAB_14208d449:
  if ((*param_2 != 0) && (*plVar1 != 0)) {
    plVar8 = (longlong *)0x0;
    puVar2 = (uint *)(*plVar1 + 8);
    LOCK();
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      *puVar2 = 0;
    }
    else {
      plVar8 = (longlong *)(ulonglong)uVar7;
    }
    UNLOCK();
    if (0 < (int)plVar8) {
      return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
    }
  }
  return (ulonglong)plVar8 & 0xffffffffffffff00;
}



// FUNCTION 14208d480 FUN_14208d480 body=149 status=ok
// SIG undefined FUN_14208d480(void)

void FUN_14208d480(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  uVar2 = 0;
  LOCK();
  bVar4 = *(int *)(param_1 + 0xa8) == 0;
  if (bVar4) {
    *(int *)(param_1 + 0xa8) = 0;
  }
  UNLOCK();
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar1 + 1;
    if (*(int *)(param_1 + 0xdc) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0xd0),iVar1);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0xd0),param_2);
    return;
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014208d4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(uVar2);
  return;
}



// FUNCTION 14208d550 FUN_14208d550 body=383 status=ok
// SIG undefined FUN_14208d550(void)

ulonglong FUN_14208d550(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  uVar10 = 0;
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    uVar6 = CONCAT71((int7)(CONCAT44(extraout_var,DVar5) >> 8),DVar5 == DAT_1468c21c0);
    if (DVar5 == DAT_1468c21c0) goto LAB_14208d596;
  }
  else {
LAB_14208d596:
    uVar6 = 0;
    LOCK();
    bVar13 = DAT_1468b5054 == 0;
    if (bVar13) {
      DAT_1468b5054 = 0;
    }
    else {
      uVar6 = (ulonglong)DAT_1468b5054;
    }
    UNLOCK();
    if (bVar13) {
      bVar13 = true;
      goto LAB_14208d5aa;
    }
  }
  bVar13 = false;
LAB_14208d5aa:
  if (*(char *)(param_1 + 0x45) != '\0') {
    do {
      lVar9 = uVar10 * 0x20;
      plVar3 = *(longlong **)(lVar9 + 8 + *(longlong *)(param_1 + 0x68));
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
        if (bVar13) {
          plVar1 = (longlong *)(lVar2 + 0x1b8);
          uVar6 = *(ulonglong *)(lVar2 + 0x1c0) + 1;
          if (uVar6 < *(ulonglong *)(lVar2 + 0x1c0)) {
            uVar11 = uVar6;
            if (uVar6 < *(ulonglong *)(lVar2 + 0x1c8) >> 1) {
LAB_14208d627:
              FUN_14208d940(plVar1,plVar1,uVar11);
            }
          }
          else if (*(ulonglong *)(lVar2 + 0x1c8) < uVar6) {
            uVar11 = (uVar6 >> 2) + uVar6;
            goto LAB_14208d627;
          }
          *(ulonglong *)(lVar2 + 0x1c0) = uVar6;
          *(longlong **)(*plVar1 + -8 + uVar6 * 8) = plVar3;
        }
        else {
          (**(code **)*plVar3)(plVar3,1);
        }
      }
      lVar7 = FUN_1416f8720(*(undefined4 *)(lVar9 + 0x18 + *(longlong *)(param_1 + 0x68)));
      if (lVar7 != 0) {
        uVar8 = FUN_1416f8720(*(undefined4 *)(lVar9 + 0x18 + *(longlong *)(param_1 + 0x68)));
        FUN_14204edc0(uVar8);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x68) + 0x10 + lVar9,0);
      *(undefined8 *)(lVar9 + 8 + *(longlong *)(param_1 + 0x68)) = 0;
      FUN_14170c210(*(longlong *)(param_1 + 0x68) + 0x18 + lVar9);
      uVar6 = (ulonglong)*(byte *)(param_1 + 0x45);
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar12;
    } while (uVar12 < *(byte *)(param_1 + 0x45));
  }
  return uVar6;
}



// FUNCTION 14208d6d0 FUN_14208d6d0 body=69 status=ok
// SIG undefined FUN_14208d6d0(void)

void FUN_14208d6d0(longlong param_1)

{
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x70,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  return;
}



// FUNCTION 14208d720 FUN_14208d720 body=58 status=ok
// SIG undefined FUN_14208d720(void)

void FUN_14208d720(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((((*(uint *)(param_1 + 1) >> 4 & 1) == 0) && (param_1[0x2b] != 0)) && (param_1[0x2c] != 0)) {
    piVar1 = (int *)(param_1[0x2c] + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014208d752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x278))();
      return;
    }
  }
  return;
}



// FUNCTION 14208d760 FUN_14208d760 body=137 status=ok
// SIG undefined FUN_14208d760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14208d760(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  lVar4 = 0;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar5 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
  iVar2 = *(int *)(param_1 + 0xc);
  if ((int)DAT_1469e91c4 <= iVar2) {
    _DAT_00000008 = _DAT_00000008 | 0x20000000;
    return;
  }
  uVar5 = iVar2 >> 0x1f & 0xffff;
  uVar3 = iVar2 + uVar5;
  puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                   (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18);
  *puVar1 = *puVar1 | 0x20000000;
  return;
}



// FUNCTION 14208d7f0 FUN_14208d7f0 body=326 status=ok
// SIG undefined FUN_14208d7f0(void)

void FUN_14208d7f0(longlong param_1)

{
  PSRWLOCK SRWLock;
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  RefCountImpl *local_res8;
  longlong *local_28;
  int local_20;
  
  uVar4 = 0;
  LOCK();
  bVar5 = *(int *)(param_1 + 0x38) == 0;
  if (bVar5) {
    *(int *)(param_1 + 0x38) = 0;
  }
  UNLOCK();
  if (!bVar5) {
    LOCK();
    *(undefined4 *)(param_1 + 0x38) = 0;
    UNLOCK();
    SRWLock = (PSRWLOCK)(param_1 + 0x18);
    AcquireSRWLockShared(SRWLock);
    LOCK();
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    UNLOCK();
    _Src = *(void **)(param_1 + 0x28);
    local_20 = *(int *)(param_1 + 0x30);
    lVar1 = (longlong)local_20;
    local_28 = (longlong *)0x0;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 << 3);
    }
    ReleaseSRWLockShared(SRWLock);
    LOCK();
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    UNLOCK();
    uVar3 = (ulonglong)((longlong)(local_28 + local_20) + (7 - (longlong)local_28)) >> 3;
    if (local_28 + local_20 < local_28) {
      uVar3 = uVar4;
    }
    plVar2 = local_28;
    if (uVar3 != 0) {
      do {
        local_res8 = (RefCountImpl *)*plVar2;
        if (local_res8 != (RefCountImpl *)0x0) {
          (**(code **)(*(longlong *)local_res8 + 0x10))(local_res8,1);
          AcquireSRWLockExclusive(SRWLock);
          LOCK();
          *(undefined4 *)(param_1 + 0x20) = 1;
          UNLOCK();
          TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x28,&local_res8);
          ReleaseSRWLockExclusive(SRWLock);
          LOCK();
          *(undefined4 *)(param_1 + 0x20) = 0;
          UNLOCK();
          Scaleform::RefCountImpl::Release(local_res8);
        }
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 1;
      } while (uVar4 != uVar3);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 14208d940 FUN_14208d940 body=175 status=ok
// SIG undefined FUN_14208d940(void)

void FUN_14208d940(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    uVar2 = 8;
    if (7 < param_3) {
      uVar2 = param_3;
    }
    if (uVar2 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = uVar2 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        *param_1 = lVar1;
        param_1[2] = uVar2;
        return;
      }
      local_res8[0] = 0x48;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14208d9f0 FUN_14208d9f0 body=120 status=ok
// SIG undefined FUN_14208d9f0(void)

void FUN_14208d9f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[0xf];
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  (**(code **)(*param_1 + 0x90))(param_1);
  plVar2 = param_1 + 0x14;
  if (param_1 == (longlong *)0xffffffffffffff50) {
    plVar2 = (longlong *)0x0;
  }
  while ((longlong *)param_1[0x17] != plVar2) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x48))();
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  return;
}



// FUNCTION 14208dad0 FUN_14208dad0 body=114 status=ok
// SIG undefined FUN_14208dad0(void)

void FUN_14208dad0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_14204ff00(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 14208db60 FUN_14208db60 body=41 status=ok
// SIG undefined FUN_14208db60(void)

void FUN_14208db60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_14208db90(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 14208db90 FUN_14208db90 body=491 status=ok
// SIG undefined FUN_14208db90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14208db90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *plStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  FUN_1432bfaf0(&local_58);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_80 = *(longlong **)(param_1 + 0x30);
      local_88 = 0;
      if (local_80 == (longlong *)0x0) {
LAB_14208dc3a:
        plVar8 = &local_88;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_88;
      }
      else {
        LOCK();
        iVar7 = (int)local_80[1];
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(local_80 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar7 == (int)local_80[1];
          if (bVar10) {
            *(int *)(local_80 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_80 != (longlong *)0x0) {
              local_88 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208dc3a;
          }
          LOCK();
          iVar7 = (int)local_80[1];
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(local_80 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_88;
        local_80 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_14208dc5f;
    }
  }
  plVar8 = &local_70;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_14208dc5f:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_68;
  *plVar8 = 0;
  if ((bVar10) && (plStack_68 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_68 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_68 + 8))(plStack_68,1);
      }
    }
  }
  plVar8 = local_80;
  if ((bVar4) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((lVar9 != 0) && (cVar6 = FUN_142045be0(lVar9), cVar6 != '\0')) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_48 = *(undefined4 *)(param_2 + 2);
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_40 = *(undefined4 *)(param_2 + 3);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    FUN_142050bc0(lVar9,&local_58);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208dd80 FUN_14208dd80 body=41 status=ok
// SIG undefined FUN_14208dd80(void)

void FUN_14208dd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_14208ddb0(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 14208ddb0 FUN_14208ddb0 body=841 status=ok
// SIG undefined FUN_14208ddb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14208ddb0(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong local_140;
  longlong *plStack_138;
  longlong local_130 [3];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined1 local_42;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_150 = *(longlong **)(param_1 + 0x30);
      local_158 = 0;
      if (local_150 == (longlong *)0x0) {
LAB_14208de6e:
        plVar7 = &local_158;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_158;
      }
      else {
        LOCK();
        iVar6 = (int)local_150[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_150 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_150[1];
          if (bVar9) {
            *(int *)(local_150 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_150 != (longlong *)0x0) {
              local_158 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208de6e;
          }
          LOCK();
          iVar6 = (int)local_150[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_150 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_158;
        local_150 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_14208de97;
    }
  }
  plVar7 = &local_140;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_14208de97:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar2 = plStack_138;
  *plVar7 = 0;
  if ((bVar9) && (plStack_138 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_138 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
      }
    }
  }
  plVar7 = local_150;
  if ((bVar4) && (local_150 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_150 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if (lVar8 == 0) {
    UObjectBaseUtility::GetPathName(param_1,local_130,0);
    if (local_130[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_118 = (double)*param_2;
    local_110 = (double)param_2[1];
    local_50 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_108 = (double)param_2[6];
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_58 = 0;
    local_44 = 0x7ff;
    local_42 = *(undefined1 *)(param_2 + 10);
    local_100 = (double)param_2[3];
    local_b8 = 0x3f800000;
    local_a8 = 0x3f80000000000000;
    local_90 = 0x3f800000;
    local_88 = 0x3f800000;
    local_78 = 0x3f80000000000000;
    local_f8 = (double)param_2[4];
    local_60 = 0x3f800000;
    uStack_4c = 0x3f800000;
    uStack_48 = 0;
    local_f0 = (double)param_2[9];
    local_e8 = (double)param_2[2];
    local_e0 = (double)param_2[7];
    local_d8 = (double)param_2[8];
    local_d0 = (double)param_2[5];
    local_c8 = 0x404b800000000000;
    FUN_142050fd0(lVar8,&local_118);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208e100 FUN_14208e100 body=934 status=ok
// SIG undefined FUN_14208e100(void)

void FUN_14208e100(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar12 = 0;
  *param_1 = 8;
  if (param_2 == 0) {
    puVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    local_78 = uVar12;
  }
  else {
    if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_14208e1b0:
      puVar9 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
      local_98 = uVar12;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      LOCK();
      iVar11 = *piVar1;
      if (iVar11 == 0) {
        *piVar1 = 0;
        iVar11 = 0;
      }
      UNLOCK();
      if (iVar11 < 1) goto LAB_14208e1b0;
      local_a0 = *(longlong **)(param_2 + 0x30);
      bVar5 = true;
      bVar4 = false;
      local_a8 = 0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_a0 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_a0 + 1) = 0;
          uVar7 = uVar12;
        }
        else {
          uVar7 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar11 = (int)uVar7;
          LOCK();
          bVar13 = iVar11 == (int)local_a0[1];
          if (bVar13) {
            *(int *)(local_a0 + 1) = iVar11 + 1;
          }
          UNLOCK();
          if (bVar13) {
            local_a8 = *(ulonglong *)(param_2 + 0x28);
            puVar9 = &local_a8;
            local_98 = local_a8;
            goto LAB_14208e1c4;
          }
          uVar7 = 0;
          LOCK();
          uVar3 = *(uint *)(local_a0 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_a0 + 1) = 0;
          }
          else {
            uVar7 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_a0 = (longlong *)0x0;
      }
      puVar9 = &local_a8;
      local_98 = 0;
    }
LAB_14208e1c4:
    plVar10 = (longlong *)puVar9[1];
    puVar9[1] = 0;
    plVar2 = plStack_60;
    local_90 = plVar10;
    *puVar9 = 0;
    if ((bVar4) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_60 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar10 = local_a0;
    if ((bVar5) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    bVar5 = true;
    bVar4 = false;
    puVar9 = &local_98;
    local_78 = local_98;
  }
  plVar10 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  plVar2 = plStack_50;
  local_70 = plVar10;
  *puVar9 = 0;
  if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_50 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar10 = local_90;
  if ((bVar5) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  uVar7 = local_78;
  bVar5 = false;
  bVar4 = false;
  if (local_78 == 0) goto LAB_14208e3fc;
  local_48 = 0;
  bVar5 = true;
  bVar4 = true;
  local_40 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
  local_38 = *(undefined8 *)(uVar7 + 0x78);
  plVar10 = *(longlong **)(uVar7 + 0x80);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_14203ba40(local_38,uVar6,param_3,&local_48,&local_88);
  if (uVar7 == 0) {
LAB_14208e3bf:
    uVar7 = uVar12;
  }
  else {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_14208e3bf;
  }
  uVar12 = uVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_14208e3fc:
  *(ulonglong *)(param_1 + 0x30) = uVar12;
  if (bVar4) {
    plVar10 = local_88;
    for (iVar11 = (int)local_80; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if ((bVar5) && (local_48 != 0)) {
    FMemory::Free();
  }
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 14208e4b0 FUN_14208e4b0 body=41 status=ok
// SIG undefined FUN_14208e4b0(void)

void FUN_14208e4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_14208e4e0(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 14208e4e0 FUN_14208e4e0 body=714 status=ok
// SIG undefined FUN_14208e4e0(void)

void FUN_14208e4e0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (0 < iVar12) {
      local_c0 = *(longlong **)(param_1 + 0x30);
      local_c8 = 0;
      if (local_c0 == (longlong *)0x0) {
LAB_14208e58d:
        plVar13 = &local_c8;
        bVar10 = true;
        bVar16 = false;
        lVar15 = local_c8;
      }
      else {
        LOCK();
        iVar12 = (int)local_c0[1];
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(local_c0 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar12 == (int)local_c0[1];
          if (bVar16) {
            *(int *)(local_c0 + 1) = iVar12 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (local_c0 != (longlong *)0x0) {
              local_c8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208e58d;
          }
          LOCK();
          iVar12 = (int)local_c0[1];
          bVar16 = iVar12 == 0;
          if (bVar16) {
            *(int *)(local_c0 + 1) = 0;
            iVar12 = 0;
          }
          UNLOCK();
        }
        plVar13 = &local_c8;
        local_c0 = (longlong *)0x0;
        bVar10 = true;
        bVar16 = false;
        lVar15 = 0;
      }
      goto LAB_14208e5b4;
    }
  }
  plVar13 = &local_b8;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  bVar10 = false;
  bVar16 = true;
  lVar15 = 0;
LAB_14208e5b4:
  plVar3 = (longlong *)plVar13[1];
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13 = plStack_b0;
  if ((bVar16) && (plStack_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_b0 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  plVar13 = local_c0;
  if ((bVar10) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (lVar15 != 0) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_78 = 0;
    local_68 = 0;
    puVar14 = (undefined8 *)FUN_140438ef0(0x60,local_98);
    plVar13 = plVar3;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &PTR_FUN_144f8c858;
      puVar14[2] = param_1;
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      puVar14[6] = uVar6;
      puVar14[7] = uVar7;
      puVar14[8] = uVar8;
      puVar14[9] = uVar9;
      puVar14[10] = lVar15;
      puVar14[0xb] = plVar3;
      plVar13 = (longlong *)0x0;
    }
    local_a8[0] = &LAB_142082940;
    FUN_14208c5d0(param_1,local_a8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar13 + 1;
      lVar15 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar3 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208e7b0 FUN_14208e7b0 body=147 status=ok
// SIG undefined FUN_14208e7b0(void)

void FUN_14208e7b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res18 [4];
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    local_res18[0] = *param_3;
    *param_3 = 0xffffffff;
    FUN_142051270(local_18,param_2,local_res18);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FUN_1416f8340(*param_3);
  return;
}



// FUNCTION 14208e850 FUN_14208e850 body=158 status=ok
// SIG undefined FUN_14208e850(void)

void FUN_14208e850(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res20 [2];
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    local_res20[0] = 0xffffffff;
    if (param_3 != 0) {
      FUN_14170c210(local_res20,param_3);
    }
    FUN_142051270(local_18,param_2,local_res20);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 14208e900 FUN_14208e900 body=1210 status=ok
// SIG undefined FUN_14208e900(void)

void FUN_14208e900(longlong param_1,longlong param_2)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  RefCountImpl *this;
  undefined8 uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined2 *_Src;
  void *pvVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_res8;
  int local_res18;
  longlong local_res20;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  int local_ac;
  void *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  int local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))(*(longlong **)(param_1 + 0x180),0x14);
  plVar10 = (longlong *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = (longlong *)0x0;
  local_res18 = 0;
  local_90 = 0;
  local_8c = 0;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20,0);
  plVar4 = plVar10;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_143301200(lVar3);
  }
  if (*(RefCountImpl **)(param_1 + 0x2c0) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x2c0));
  }
  *(longlong **)(param_1 + 0x2c0) = plVar4;
  plVar4 = plVar10;
  if (0 < *(int *)(param_2 + 0x70)) {
    do {
      FUN_14208ab30(param_1,(longlong)(int)plVar4 * 0x10 + *(longlong *)(param_2 + 0x68),&local_98,
                    &local_a8);
      uVar9 = (int)plVar4 + 1;
      plVar4 = (longlong *)(ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_2 + 0x70));
    local_res18 = local_90;
    plVar4 = local_98;
  }
  local_res8 = 0;
  if (0 < *(int *)(param_1 + 0x2b8)) {
    plVar4 = plVar4 + (longlong)local_res18 * 2;
    local_res20 = 0;
    local_78 = plVar4;
    do {
      _Src = (undefined2 *)0x0;
      local_88 = (undefined2 *)0x0;
      local_80 = *(int *)(local_res20 + 8 + *(longlong *)(param_1 + 0x2b0));
      lVar3 = (longlong)local_80;
      pvVar11 = *(void **)(local_res20 + *(longlong *)(param_1 + 0x2b0));
      if (local_80 == 0) {
        local_7c = 0;
        plVar1 = local_98;
        iVar2 = local_80;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
        _Src = local_88;
        _guard_xfg_dispatch_icall_nop(local_88,pvVar11,lVar3 * 2);
        plVar1 = local_98;
        iVar2 = local_80;
      }
      for (; iVar12 = local_80, plVar1 != plVar4; plVar1 = plVar1 + 2) {
        puVar8 = &DAT_143f3eda8;
        if (local_80 != 0) {
          puVar8 = _Src;
        }
        if ((int)plVar1[1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*plVar1;
        }
        local_80 = iVar2;
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
        uVar9 = (uint)plVar10;
        if (iVar2 == 0) goto LAB_14208ec66;
        iVar2 = local_80;
        local_80 = iVar12;
      }
      local_c8 = (void *)0x0;
      local_c0._4_4_ = (int)((ulonglong)local_c0 >> 0x20);
      iVar7 = (2 - (uint)(local_80 != 0)) + local_80;
      local_c0._0_4_ = local_80;
      local_80 = iVar2;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar7,0);
      pvVar11 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,_Src,(longlong)iVar12 * 2);
      iVar2 = (int)local_c0;
      lVar3 = (longlong)(int)local_c0;
      local_c0._0_4_ = (2 - (uint)((int)local_c0 != 0)) + (int)local_c0;
      iVar12 = local_c0._4_4_;
      iVar7 = (int)local_c0;
      if (local_c0._4_4_ < (int)local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar2);
        pvVar11 = local_c8;
        iVar12 = local_c0._4_4_;
        iVar7 = (int)local_c0;
      }
      local_c8 = (void *)0x0;
      local_c0 = 0;
      puVar8 = (undefined2 *)((longlong)pvVar11 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar8 = 0x2f;
      puVar8[1] = 0;
      if (iVar7 < 2) {
        lVar3 = (longlong)(int)local_a0;
        local_b8 = (void *)0x0;
        local_b0 = (int)local_a0;
        if ((int)local_a0 == 0) {
          local_ac = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_a0 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(local_b8,local_a8,lVar3 * 2);
        }
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
      }
      else {
        iVar2 = (int)local_a0 + -1;
        if ((int)local_a0 == 0) {
          iVar2 = 0;
        }
        if ((iVar7 != 0) || (iVar13 = 1, iVar2 == 0)) {
          iVar13 = 0;
        }
        local_d8 = pvVar11;
        local_d0._4_4_ = iVar12;
        if (iVar12 < iVar13 + iVar7 + iVar2) {
          local_d0._0_4_ = iVar7;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
          iVar7 = (int)local_d0;
        }
        pvVar11 = local_d8;
        iVar13 = local_d0._4_4_;
        iVar12 = iVar7;
        if (iVar2 != 0) {
          local_d0._0_4_ = iVar7 + (uint)(iVar7 == 0) + iVar2;
          if (local_d0._4_4_ < (int)local_d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar7);
          }
          iVar13 = local_d0._4_4_;
          iVar12 = (int)local_d0;
          pvVar11 = local_d8;
          _Dst = (void *)((longlong)local_d8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,local_a8,(longlong)iVar2 * 2);
          *(undefined2 *)((longlong)_Dst + (longlong)iVar2 * 2) = 0;
        }
        local_d8 = (void *)0x0;
        local_d0 = 0;
        local_b8 = pvVar11;
        local_b0 = iVar12;
        local_ac = iVar13;
      }
      FUN_14208ab30(param_1,&local_b8,0,0);
      plVar4 = local_78;
      uVar9 = local_res8;
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
        plVar4 = local_78;
      }
LAB_14208ec66:
      if (_Src != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res8 = uVar9 + 1;
      plVar10 = (longlong *)(ulonglong)local_res8;
      local_res20 = local_res20 + 0x10;
    } while ((int)local_res8 < *(int *)(param_1 + 0x2b8));
  }
  this = (RefCountImpl *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))
            (*(longlong **)(param_1 + 0x180),0x17,*(undefined8 *)(param_1 + 0x2c0));
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))
            (*(longlong **)(param_1 + 0x180),1,*(undefined8 *)(param_1 + 0x2c8));
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (lVar3 != 0) {
    this = (RefCountImpl *)FUN_1432bc310(lVar3);
  }
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))(*(longlong **)(param_1 + 0x180),0x14,this);
  local_6c = 0;
  uVar5 = UObjectBaseUtility::GetPathName(param_2,&local_88,0);
  lVar3 = FUN_1420476f0(param_1,uVar5,local_70);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    Scaleform::GFx::FontLib::AddFontsFrom(this,lVar3,0);
    FUN_1432de450(lVar3);
  }
  plVar4 = local_98;
  plVar10 = local_98;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
    plVar4 = local_98;
    plVar10 = local_98;
  }
  for (; plVar1 = local_98, local_res18 != 0; local_res18 = local_res18 + -1) {
    local_98 = plVar10;
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    plVar10 = local_98;
    local_98 = plVar1;
  }
  bVar14 = local_98 != (longlong *)0x0;
  local_98 = plVar10;
  if (bVar14) {
    FMemory::Free(plVar1);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}



// FUNCTION 14208edc0 FUN_14208edc0 body=445 status=ok
// SIG undefined FUN_14208edc0(void)

void FUN_14208edc0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_14208ee5d:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208ee5d;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_14208ee84;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_14208ee84:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142055d60(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208efa0 FUN_14208efa0 body=456 status=ok
// SIG undefined FUN_14208efa0(void)

void FUN_14208efa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_14208f03d:
        plVar7 = &local_48;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208f03d;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_14208f064;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_14208f064:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_1420523e0(lVar8,param_2,param_3);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208f170 FUN_14208f170 body=991 status=ok
// SIG undefined FUN_14208f170(void)

void FUN_14208f170(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar9 = 0;
  if (param_3 == 0) {
    plVar7 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar4 = false;
    bVar10 = true;
  }
  else {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14208f237:
      plVar7 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar4 = false;
      bVar10 = true;
      lVar9 = 0;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) goto LAB_14208f237;
      local_90 = *(longlong **)(param_1 + 0x30);
      local_98 = 0;
      if (local_90 == (longlong *)0x0) {
LAB_14208f228:
        plVar7 = &local_98;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_98;
      }
      else {
        LOCK();
        iVar6 = (int)local_90[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_90 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_90[1];
          if (bVar10) {
            *(int *)(local_90 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_90 != (longlong *)0x0) {
              local_98 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208f228;
          }
          LOCK();
          iVar6 = (int)local_90[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_90 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_98;
        local_90 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
    }
    plVar3 = (longlong *)plVar7[1];
    plVar7[1] = 0;
    plVar2 = plStack_60;
    local_70 = plVar3;
    *plVar7 = 0;
    local_78 = lVar9;
    if ((bVar10) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar7 = plStack_60 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar7 = local_90;
    if ((bVar4) && (local_90 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_90 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    bVar4 = true;
    bVar10 = false;
    plVar7 = &local_78;
  }
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_50;
  if ((bVar10) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar7 = local_70;
  if ((bVar4) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar9 == 0) goto LAB_14208f4eb;
  if ((*(longlong *)(param_3 + 0x28) == 0) || (*(longlong *)(param_3 + 0x30) == 0)) {
LAB_14208f429:
    puVar8 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_38 = 0;
    bVar4 = false;
    bVar10 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_3 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_14208f429;
    local_80 = *(longlong **)(param_3 + 0x30);
    local_88 = 0;
    if (local_80 == (longlong *)0x0) {
LAB_14208f419:
      puVar8 = &local_88;
      bVar4 = true;
      bVar10 = false;
      local_38 = local_88;
    }
    else {
      LOCK();
      iVar6 = (int)local_80[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(local_80 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar6 == (int)local_80[1];
        if (bVar10) {
          *(int *)(local_80 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (local_80 != (longlong *)0x0) {
            local_88 = *(undefined8 *)(param_3 + 0x28);
          }
          goto LAB_14208f419;
        }
        LOCK();
        iVar6 = (int)local_80[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_80 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      puVar8 = &local_88;
      local_80 = (longlong *)0x0;
      bVar4 = true;
      bVar10 = false;
      local_38 = 0;
    }
  }
  local_30 = puVar8[1];
  puVar8[1] = 0;
  plVar7 = plStack_40;
  *puVar8 = 0;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_80;
  if ((bVar4) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  FUN_142052630(lVar9,param_2,&local_38);
LAB_14208f4eb:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14208f550 FUN_14208f550 body=579 status=ok
// SIG undefined FUN_14208f550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14208f550(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong *local_140;
  undefined4 local_138;
  longlong local_130;
  longlong *plStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong *local_110;
  uint local_108;
  undefined8 local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = 0;
  local_110 = (longlong *)0x0;
  local_108 = 0;
  local_120 = 0xffffffffffffffff;
  uStack_118 = 0xffffffffffffffff;
  FUN_142082de0(&local_120,param_3);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_140 = *(longlong **)(param_1 + 0x30);
      local_148 = 0;
      if (local_140 == (longlong *)0x0) {
LAB_14208f61d:
        plVar6 = &local_148;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_148;
      }
      else {
        LOCK();
        iVar5 = (int)local_140[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(local_140 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar5 == (int)local_140[1];
          if (bVar10) {
            *(int *)(local_140 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_140 != (longlong *)0x0) {
              local_148 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208f61d;
          }
          LOCK();
          iVar5 = (int)local_140[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(local_140 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        plVar6 = &local_148;
        local_140 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_14208f646;
    }
  }
  plVar6 = &local_130;
  local_130 = 0;
  plStack_128 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_14208f646:
  plVar3 = (longlong *)plVar6[1];
  plVar6[1] = 0;
  plVar2 = plStack_128;
  *plVar6 = 0;
  if ((bVar10) && (plStack_128 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plStack_128 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_128)(plStack_128);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_128 + 8))(plStack_128,1);
      }
    }
  }
  plVar6 = local_140;
  if ((bVar4) && (local_140 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_140 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (lVar9 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,puVar8);
    FUN_1420523e0(lVar9,*(undefined8 *)(lVar7 + 0x88),&local_120);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((local_108 >> 6 & 1) != 0) {
    (**(code **)(*local_110 + 0x10))(local_110,&local_120,local_100);
  }
  return;
}



// FUNCTION 14208f7a0 FUN_14208f7a0 body=376 status=ok
// SIG undefined FUN_14208f7a0(void)

void FUN_14208f7a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  lVar7 = 0;
  bVar8 = param_2 == 0;
  if (bVar8) {
    plVar6 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)FUN_140ad4c90(param_2,local_48);
    lVar7 = *plVar6;
  }
  plVar4 = (longlong *)plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6 = plStack_50;
  if (bVar8) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar8) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar7 == 0) {
    UObjectBaseUtility::GetPathName(param_1,local_38,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_142052890(lVar7,param_1,param_3,param_4);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 14208f920 FUN_14208f920 body=117 status=ok
// SIG undefined FUN_14208f920(void)

ulonglong FUN_14208f920(undefined8 param_1,byte param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 != 0) {
    LOCK();
    uVar3 = *(uint *)(local_18 + 0x98);
    *(uint *)(local_18 + 0x98) = (uint)param_2;
    uVar6 = (ulonglong)uVar3;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_10 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar6 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar6 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 14208f9a0 FUN_14208f9a0 body=117 status=ok
// SIG undefined FUN_14208f9a0(void)

ulonglong FUN_14208f9a0(undefined8 param_1,byte param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 != 0) {
    LOCK();
    uVar3 = *(uint *)(local_18 + 0x9c);
    *(uint *)(local_18 + 0x9c) = (uint)param_2;
    uVar6 = (ulonglong)uVar3;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_10 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar6 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar6 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 14208fa20 FUN_14208fa20 body=934 status=ok
// SIG undefined FUN_14208fa20(void)

void FUN_14208fa20(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar12 = 0;
  *param_1 = 7;
  if (param_2 == 0) {
    puVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    local_78 = uVar12;
  }
  else {
    if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_14208fad0:
      puVar9 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
      local_98 = uVar12;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      LOCK();
      iVar11 = *piVar1;
      if (iVar11 == 0) {
        *piVar1 = 0;
        iVar11 = 0;
      }
      UNLOCK();
      if (iVar11 < 1) goto LAB_14208fad0;
      local_a0 = *(longlong **)(param_2 + 0x30);
      bVar5 = true;
      bVar4 = false;
      local_a8 = 0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_a0 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_a0 + 1) = 0;
          uVar7 = uVar12;
        }
        else {
          uVar7 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar11 = (int)uVar7;
          LOCK();
          bVar13 = iVar11 == (int)local_a0[1];
          if (bVar13) {
            *(int *)(local_a0 + 1) = iVar11 + 1;
          }
          UNLOCK();
          if (bVar13) {
            local_a8 = *(ulonglong *)(param_2 + 0x28);
            puVar9 = &local_a8;
            local_98 = local_a8;
            goto LAB_14208fae4;
          }
          uVar7 = 0;
          LOCK();
          uVar3 = *(uint *)(local_a0 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_a0 + 1) = 0;
          }
          else {
            uVar7 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_a0 = (longlong *)0x0;
      }
      puVar9 = &local_a8;
      local_98 = 0;
    }
LAB_14208fae4:
    plVar10 = (longlong *)puVar9[1];
    puVar9[1] = 0;
    plVar2 = plStack_60;
    local_90 = plVar10;
    *puVar9 = 0;
    if ((bVar4) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_60 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar10 = local_a0;
    if ((bVar5) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    bVar5 = true;
    bVar4 = false;
    puVar9 = &local_98;
    local_78 = local_98;
  }
  plVar10 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  plVar2 = plStack_50;
  local_70 = plVar10;
  *puVar9 = 0;
  if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_50 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar10 = local_90;
  if ((bVar5) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  uVar7 = local_78;
  bVar5 = false;
  bVar4 = false;
  if (local_78 == 0) goto LAB_14208fd1c;
  local_48 = 0;
  bVar5 = true;
  bVar4 = true;
  local_40 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
  local_38 = *(undefined8 *)(uVar7 + 0x78);
  plVar10 = *(longlong **)(uVar7 + 0x80);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_14203ba40(local_38,uVar6,param_3,&local_48,&local_88);
  if (uVar7 == 0) {
LAB_14208fcdf:
    uVar7 = uVar12;
  }
  else {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_14208fcdf;
  }
  uVar12 = uVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_14208fd1c:
  *(ulonglong *)(param_1 + 0x30) = uVar12;
  if (bVar4) {
    plVar10 = local_88;
    for (iVar11 = (int)local_80; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if ((bVar5) && (local_48 != 0)) {
    FMemory::Free();
  }
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 14208fdd0 FUN_14208fdd0 body=123 status=ok
// SIG undefined FUN_14208fdd0(void)

void FUN_14208fdd0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_142052c50(local_18,param_2 != '\0');
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 14208fe50 FUN_14208fe50 body=116 status=ok
// SIG undefined FUN_14208fe50(void)

void FUN_14208fe50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_142052ee0(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 14208fed0 ChangeFieldOfView body=59 status=ok
// SIG undefined ChangeFieldOfView(void)

void UHelperFunctionLibrary::ChangeFieldOfView
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_14208ff10(lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 14208ff10 FUN_14208ff10 body=472 status=ok
// SIG undefined FUN_14208ff10(void)

void FUN_14208ff10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  lVar8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(param_1 + 0x30);
      local_58 = 0;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_50[1];
          if (bVar9) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_58;
            bVar4 = true;
            bVar9 = false;
            local_58 = lVar8;
            goto LAB_14208ffd8;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_50 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_58;
      bVar4 = true;
      bVar9 = false;
      goto LAB_14208ffd8;
    }
  }
  plVar7 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_14208ffd8:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar9) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142053150(lVar8,CONCAT44(param_3,param_2));
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1420900f0 FUN_1420900f0 body=439 status=ok
// SIG undefined FUN_1420900f0(void)

void FUN_1420900f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_48;
            bVar4 = true;
            bVar9 = false;
            local_48 = lVar8;
            goto LAB_1420901a8;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_40 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_48;
      bVar4 = true;
      bVar9 = false;
      goto LAB_1420901a8;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_1420901a8:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142053150(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1420902b0 FUN_1420902b0 body=8 status=ok
// SIG undefined FUN_1420902b0(void)

void FUN_1420902b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1ec) = param_2;
  return;
}



// FUNCTION 1420902c0 ChangeFieldOfView body=59 status=ok
// SIG undefined ChangeFieldOfView(void)

void UHelperFunctionLibrary::ChangeFieldOfView
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142090300(lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142090300 FUN_142090300 body=472 status=ok
// SIG undefined FUN_142090300(void)

void FUN_142090300(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  lVar8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(param_1 + 0x30);
      local_58 = 0;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_50[1];
          if (bVar9) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_58;
            bVar4 = true;
            bVar9 = false;
            local_58 = lVar8;
            goto LAB_1420903c8;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_50 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_58;
      bVar4 = true;
      bVar9 = false;
      goto LAB_1420903c8;
    }
  }
  plVar7 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_1420903c8:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar9) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142055060(lVar8,CONCAT44(param_3,param_2));
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1420904e0 FUN_1420904e0 body=439 status=ok
// SIG undefined FUN_1420904e0(void)

void FUN_1420904e0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_48;
            bVar4 = true;
            bVar9 = false;
            local_48 = lVar8;
            goto LAB_142090598;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_40 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_48;
      bVar4 = true;
      bVar9 = false;
      goto LAB_142090598;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_142090598:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142055060(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1420906a0 FUN_1420906a0 body=556 status=ok
// SIG undefined FUN_1420906a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420906a0(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  char *pcVar5;
  ulonglong uVar6;
  short *psVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_198 [32];
  short *local_178 [2];
  short local_168 [128];
  short *local_68;
  short *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  psVar8 = (short *)0x0;
  *param_1 = 5;
  local_68 = (short *)0x0;
  iVar10 = 0;
  uVar9 = 0xffffffffffffffff;
  uVar6 = uVar9;
  if (param_2 == (char *)0x0) {
    local_60 = (short *)0x0;
    local_58 = 0;
  }
  else {
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (param_2[uVar6] != '\0');
    local_178[0] = (short *)((ulonglong)local_178[0] & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_178,0x7fffffff,param_2,uVar6 & 0xffffffff);
    local_58 = (int)local_178[0];
    uVar1 = (int)local_178[0] + 1;
    psVar4 = psVar8;
    if ((0x80 < uVar1) && (psVar4 = (short *)0x0, uVar1 != 0)) {
      psVar4 = (short *)FMemory::Realloc(0,(longlong)(int)uVar1 * 2,0);
      local_68 = psVar4;
    }
    local_178[0] = local_168;
    if (psVar4 != (short *)0x0) {
      local_178[0] = psVar4;
    }
    local_60 = local_178[0];
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_178,uVar1,param_2,(int)uVar7 + 2);
  }
  psVar4 = local_60;
  if (*(short **)(param_1 + 0x10) != local_60) {
    if ((local_60 != (short *)0x0) && (uVar6 = uVar9, *local_60 != 0)) {
      do {
        uVar6 = uVar6 + 1;
      } while (local_60[uVar6] != 0);
      psVar8 = (short *)(ulonglong)((int)uVar6 + 1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar3 = (int)psVar8;
    if (*(int *)(param_1 + 0x1c) != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
      iVar10 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar10 + iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar10 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
    }
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),psVar4,(longlong)iVar3 * 2);
    }
  }
  if (local_68 != (short *)0x0) {
    FMemory::Free(local_68);
  }
  do {
    uVar6 = uVar9;
    uVar9 = uVar6 + 1;
  } while (param_2[uVar9] != '\0');
  iVar10 = *(int *)(param_1 + 0x28);
  iVar3 = (int)uVar6 + 2;
  if (iVar10 < iVar3) {
    *(int *)(param_1 + 0x28) = iVar3;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar10 + *(longlong *)(param_1 + 0x20)),0,
               (longlong)(iVar3 - iVar10));
  }
  else if ((iVar3 < iVar10) && (iVar3 != iVar10)) {
    *(int *)(param_1 + 0x28) = iVar3;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
  }
  if (0 < (int)uVar9) {
    pcVar5 = *(char **)(param_1 + 0x20);
    do {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  return;
}



// FUNCTION 1420908d0 FUN_1420908d0 body=95 status=ok
// SIG undefined FUN_1420908d0(void)

void FUN_1420908d0(longlong param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 6;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 6;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 142090930 FUN_142090930 body=362 status=ok
// SIG undefined FUN_142090930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142090930(undefined1 *param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [48];
  undefined1 local_d8 [128];
  longlong local_58;
  char *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *param_1 = 6;
  lVar6 = -1;
  if (*(short **)(param_1 + 0x10) != param_2) {
    iVar3 = 0;
    iVar2 = iVar3;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      iVar2 = (int)lVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,iVar2);
      iVar3 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar3 + iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar3 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),param_2,(longlong)iVar2 * 2);
    }
  }
  do {
    lVar5 = lVar6;
    lVar6 = lVar5 + 1;
  } while (param_2[lVar6] != 0);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = (int)lVar5 + 2;
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x28) = iVar2;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar3 + *(longlong *)(param_1 + 0x20)),0,(longlong)(iVar2 - iVar3)
              );
  }
  else if ((iVar2 < iVar3) && (iVar2 != iVar3)) {
    *(int *)(param_1 + 0x28) = iVar2;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
  }
  if (0 < (int)lVar6) {
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,param_2);
    pcVar4 = *(char **)(param_1 + 0x20);
    do {
      cVar1 = *local_50;
      local_50 = local_50 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142090aa0 FUN_142090aa0 body=95 status=ok
// SIG undefined FUN_142090aa0(void)

void FUN_142090aa0(longlong param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 7;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 142090b00 FUN_142090b00 body=114 status=ok
// SIG undefined FUN_142090b00(void)

void FUN_142090b00(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_142055ba0(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142090b80 SetVariableValue body=51 status=ok
// SIG undefined SetVariableValue(void)

void UGFxMoviePlayer::SetVariableValue
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_14208f550(lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142090bc0 SetVariableValueArray body=67 status=ok
// SIG undefined SetVariableValueArray(void)

void UGFxMoviePlayer::SetVariableValueArray
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_14208f7a0(lVar1,param_1,param_3,param_4);
  }
  return;
}



// FUNCTION 142090c10 FUN_142090c10 body=116 status=ok
// SIG undefined FUN_142090c10(void)

void FUN_142090c10(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_142056380(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142090c90 FUN_142090c90 body=114 status=ok
// SIG undefined FUN_142090c90(void)

void FUN_142090c90(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_142056400(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142090d10 FUN_142090d10 body=394 status=ok
// SIG undefined FUN_142090d10(void)

void FUN_142090d10(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [8];
  
  FUN_140ad4c90(param_1,&local_a8);
  if (local_a8 != 0) {
    if (((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) ||
       (plVar4 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0),
       plVar4 == (longlong *)0x0)) {
      local_98 = 0xffffffffffffffff;
      puVar6 = &local_98;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_20);
    }
    iVar3 = *(int *)(param_1 + 0x40);
    if (param_4 < 0) {
      param_4 = (int)*puVar6;
    }
    if (param_5 < 0) {
      param_5 = (int)((ulonglong)*puVar6 >> 0x20);
    }
    FUN_14203d400(local_a8,&local_90);
    local_68 = local_68 | ~(iVar3 << 9) & 0x400U;
    local_58 = local_90;
    local_54 = local_8c;
    local_40 = local_78;
    local_3c = local_74;
    local_38 = local_70;
    local_34 = local_6c;
    local_2c = local_64;
    local_28 = local_60;
    local_88 = param_2;
    local_84 = param_3;
    local_80 = param_4;
    local_7c = param_5;
    local_50 = param_2;
    local_4c = param_3;
    local_48 = param_4;
    local_44 = param_5;
    local_30 = local_68;
    FUN_142056420(local_a8,&local_58);
  }
  plVar4 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 142090ea0 FUN_142090ea0 body=47 status=ok
// SIG undefined FUN_142090ea0(void)

void FUN_142090ea0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1420876d0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142090ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 142090ed0 FUN_142090ed0 body=139 status=ok
// SIG undefined FUN_142090ed0(void)

void FUN_142090ed0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x278))();
  }
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FUN_142056520(local_18,param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142090f60 FUN_142090f60 body=447 status=ok
// SIG undefined FUN_142090f60(void)

void FUN_142090f60(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142090ffe:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142090ffe;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142091025;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142091025:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142056670(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142091120 FUN_142091120 body=573 status=ok
// SIG undefined FUN_142091120(void)

undefined1 FUN_142091120(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  int local_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_1420911bd:
        plVar8 = &local_48;
        bVar4 = true;
        bVar11 = false;
        lVar10 = local_48;
      }
      else {
        LOCK();
        iVar7 = (int)local_40[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_40 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)local_40[1];
          if (bVar11) {
            *(int *)(local_40 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_1420911bd;
          }
          LOCK();
          iVar7 = (int)local_40[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(local_40 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_1420911e4;
    }
  }
  plVar8 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_1420911e4:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_30;
  if ((bVar11) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar8 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar10 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar6 = 1;
  }
  else {
    uVar9 = UBidstackCustomMeshAdUnitComponent::getMaterialInfo(lVar10,&local_28);
    uVar6 = TArray<FString,FDefaultAllocator>::Contains<FString>(uVar9,param_2);
    plVar8 = local_28;
    for (; local_20 != 0; local_20 = local_20 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 142091360 FUN_142091360 body=124 status=ok
// SIG undefined FUN_142091360(void)

bool FUN_142091360(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  cVar2 = FUN_142059490();
  if (cVar2 != '\0') {
    cVar2 = FUN_142056970();
    piVar1 = DAT_146ae4388;
    if (cVar2 == '\0') {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar3 = GetCurrentThreadId();
        if (DVar3 != DAT_1468c21c0) {
          return piVar1[1] != 0;
        }
      }
      return *piVar1 != 0;
    }
  }
  return true;
}



// FUNCTION 1420913e0 FUN_1420913e0 body=226 status=ok
// SIG undefined FUN_1420913e0(void)

undefined8 FUN_1420913e0(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  wchar_t *local_18;
  wchar_t *pwStack_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae444c) && (_Init_thread_header(&DAT_146ae444c), DAT_146ae444c == -1))
  {
    local_18 = L"stompmalloc-ui";
    pwStack_10 = L"ue-stompmalloc-ui";
    DAT_146ae4448 = FUN_1415b0910(&local_18);
    _Init_thread_footer(&DAT_146ae444c);
  }
  lVar1 = DAT_146ae43c0;
  if (DAT_146ae4448 != '\0') {
    return 1;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar4 = 4;
  }
  else {
    lVar4 = 0;
  }
  if (*(int *)(lVar4 + lVar1) != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 1420914d0 FUN_1420914d0 body=1329 status=ok
// SIG undefined FUN_1420914d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420914d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined4 local_1a0 [2];
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined4 local_148 [64];
  undefined4 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar14;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  uVar14 = 0;
  local_1a0[0] = 0;
  plVar12 = *(longlong **)(param_1 + 0x38);
  if (plVar12 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      (**(code **)(*plVar12 + 0x288))(plVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  FUN_14172a070(local_1a8,0);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  plVar12 = *(longlong **)(param_1 + 0x1f8);
  uVar16 = (longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff;
  if (plVar12 + *(int *)(param_1 + 0x200) < plVar12) {
    uVar16 = uVar14;
  }
  uVar15 = uVar14;
  if (uVar16 != 0) {
    do {
      if (*plVar12 != 0) {
        local_1a0[0] = 0xffffffff;
        FUN_14170c210(local_1a0);
        uVar4 = local_40;
        lVar6 = (longlong)(int)local_40;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (local_40._4_4_ < iVar5) {
          TArray<int,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                    (local_148,uVar4 & 0xffffffff);
        }
        puVar11 = local_148;
        if (local_48 != (undefined4 *)0x0) {
          puVar11 = local_48;
        }
        puVar11[lVar6] = local_1a0[0];
        local_1a0[0] = 0xffffffff;
        FUN_1416f8340(0xffffffff);
      }
      plVar12 = plVar12 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar16);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  FUN_14172a400(local_1a8);
  puVar11 = local_148;
  if (local_48 != (undefined4 *)0x0) {
    puVar11 = local_48;
  }
  puVar3 = puVar11 + (int)local_40;
  do {
    if (puVar11 == puVar3) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
      TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
      ::Empty(param_1 + 0x198,0);
      *(undefined4 *)(param_1 + 0x200) = 0;
      if (*(int *)(param_1 + 0x204) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1f8,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
      puVar11 = local_148;
      iVar5 = (int)local_40;
      if (local_48 != (undefined4 *)0x0) {
        puVar11 = local_48;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        FUN_1416f8340(*puVar11);
        puVar11 = puVar11 + 1;
      }
      if (local_48 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    uVar8 = 0;
    local_1a4 = 0xffffffff;
    uVar7 = FUN_1416f8720(*puVar11);
    FUN_14170c210(&local_1a4,uVar7);
    lVar6 = FUN_1416f8720(local_1a4);
    if (lVar6 != 0) {
      lVar6 = FUN_1416f8720();
      if (lVar6 == 0) {
        puVar9 = &local_168;
        local_168 = 0;
        plStack_160 = (longlong *)0x0;
        uVar14 = (ulonglong)((uint)uVar14 | 2);
      }
      else {
        lVar6 = FUN_1416f8720(local_1a4);
        if ((*(longlong *)(lVar6 + 0x28) == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) {
LAB_14209175e:
          puVar9 = &local_178;
          local_178 = 0;
          plStack_170 = (longlong *)0x0;
          uVar13 = 8;
        }
        else {
          piVar1 = (int *)(*(longlong *)(lVar6 + 0x30) + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (iVar5 < 1) goto LAB_14209175e;
          local_190 = *(longlong **)(lVar6 + 0x30);
          local_198 = 0;
          if (local_190 != (longlong *)0x0) {
            LOCK();
            iVar5 = (int)local_190[1];
            bVar17 = iVar5 == 0;
            if (bVar17) {
              *(int *)(local_190 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar17) {
              LOCK();
              bVar17 = iVar5 == (int)local_190[1];
              if (bVar17) {
                *(int *)(local_190 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar17) {
                uVar8 = *(undefined8 *)(lVar6 + 0x28);
                puVar9 = &local_198;
                uVar13 = 4;
                local_198 = uVar8;
                goto LAB_142091774;
              }
              LOCK();
              iVar5 = (int)local_190[1];
              bVar17 = iVar5 == 0;
              if (bVar17) {
                *(int *)(local_190 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
            local_190 = (longlong *)0x0;
          }
          uVar8 = 0;
          puVar9 = &local_198;
          uVar13 = 4;
        }
LAB_142091774:
        uVar13 = (uint)uVar14 | 1 | uVar13;
        uVar14 = (ulonglong)uVar13;
        local_188 = uVar8;
        plVar12 = (longlong *)puVar9[1];
        puVar9[1] = 0;
        local_180 = plVar12;
        *puVar9 = 0;
        plVar12 = plStack_170;
        if (((uVar13 & 8) != 0) &&
           (uVar14 = (ulonglong)(uVar13 & 0xfffffff7), plStack_170 != (longlong *)0x0)) {
          LOCK();
          plVar10 = plStack_170 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_170)();
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_170 + 8))(plStack_170,1);
            }
          }
        }
        plVar12 = local_190;
        if (((uVar14 & 4) != 0) &&
           (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffb), local_190 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_190 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_190)();
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
            }
          }
        }
        puVar9 = &local_188;
      }
      plVar12 = (longlong *)puVar9[1];
      puVar9[1] = 0;
      *puVar9 = 0;
      plVar10 = plStack_160;
      if (((uVar14 & 2) != 0) &&
         (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffd), plStack_160 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_160 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_160 + 8))(plStack_160,1);
          }
        }
      }
      plVar10 = local_180;
      if (((uVar14 & 1) != 0) &&
         (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffe), local_180 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_180 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      plVar10 = (longlong *)FUN_1416f8720(local_1a4);
      (**(code **)(*plVar10 + 0x288))(plVar10);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    FUN_1416f8340(local_1a4);
    puVar11 = puVar11 + 1;
  } while( true );
}



// FUNCTION 142091a40 FUN_142091a40 body=229 status=ok
// SIG undefined FUN_142091a40(void)

bool FUN_142091a40(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90();
  if ((local_18 == 0) || (param_2 != '\0')) {
    if (*(int *)(param_1 + 0x30) < 2) {
      LOCK();
      *(undefined4 *)(param_1 + 0xa4) = 0;
      UNLOCK();
    }
    else {
      cVar5 = FUN_14208a280(param_1);
      LOCK();
      *(uint *)(param_1 + 0xa4) = (uint)(cVar5 != '\0');
      UNLOCK();
    }
  }
  else {
    LOCK();
    bVar6 = *(int *)(local_18 + 0x90) == 0;
    if (bVar6) {
      *(int *)(local_18 + 0x90) = 0;
    }
    UNLOCK();
    LOCK();
    *(uint *)(param_1 + 0xa4) = (uint)!bVar6;
    UNLOCK();
  }
  LOCK();
  bVar6 = *(int *)(param_1 + 0xa4) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0xa4) = 0;
  }
  UNLOCK();
  bVar6 = !bVar6;
  if (local_10 == (longlong *)0x0) {
    return bVar6;
  }
  LOCK();
  plVar1 = local_10 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*local_10)(local_10);
    LOCK();
    piVar2 = (int *)((longlong)local_10 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
  return bVar6;
}



// FUNCTION 142091b30 FUN_142091b30 body=114 status=ok
// SIG undefined FUN_142091b30(void)

void FUN_142091b30(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (DAT_1468b5010 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142091b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,param_1);
    return;
  }
  uVar1 = 0;
  if ((int)param_1[10] != 0) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 4;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)param_1[2])(uVar1);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142091b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142091bb0 FUN_142091bb0 body=7 status=ok
// SIG undefined FUN_142091bb0(void)

void FUN_142091bb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// FUNCTION 142091bd0 FUN_142091bd0 body=246 status=ok
// SIG undefined FUN_142091bd0(void)

void FUN_142091bd0(undefined1 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 1:
    FUN_142052b90(param_2);
    return;
  case 2:
    FUN_142050490(param_2,param_1[1]);
    return;
  case 3:
    FUN_142052280(param_2,*(undefined4 *)(param_1 + 4));
    return;
  case 4:
    FUN_142052be0(param_2,(double)*(float *)(param_1 + 8));
    return;
  case 5:
    FUN_1420908d0(param_2,*(undefined8 *)(param_1 + 0x20));
    return;
  case 6:
    break;
  case 7:
  case 8:
    uVar1 = FUN_142086ad0(*(undefined8 *)(param_1 + 0x30));
    FUN_1410b5e10(param_2,uVar1);
    return;
  default:
    if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
                (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_142090aa0(param_2,&DAT_143f3eda8);
    return;
  }
  FUN_142090aa0(param_2,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 142091cf0 FUN_142091cf0 body=526 status=ok
// SIG undefined FUN_142091cf0(void)

void FUN_142091cf0(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *_Src;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [5];
  undefined4 local_40;
  longlong local_38 [2];
  
  if (param_2 != (undefined8 *)0x0) {
    puVar11 = (undefined2 *)0x0;
    iVar5 = 0;
    psVar1 = (short *)*param_2;
    local_78 = (undefined2 *)0x0;
    local_6c = 0;
    _Src = puVar11;
    if ((psVar1 != (short *)0x0) && (_Src = (undefined2 *)0x0, *psVar1 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar1[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
      local_70 = iVar9;
      if (0 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      iVar5 = local_70;
      _Src = local_78;
      FGenericPlatformString::Memcpy(local_78,psVar1,(longlong)iVar9 * 2);
    }
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    cVar4 = FUN_142045c00();
    if (cVar4 == '\0') {
      local_40 = 0;
      plVar7 = local_68 + 4;
      bVar3 = false;
      bVar2 = true;
    }
    else {
      local_78 = (undefined2 *)0x0;
      local_70 = iVar5;
      if (iVar5 == 0) {
        local_6c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar5,0);
        _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar5 * 2);
      }
      uVar6 = thunk_FUN_142039c70();
      plVar7 = (longlong *)FUN_14208b7c0(uVar6,local_38,&local_78,local_68 + 2,local_68,1);
      bVar3 = true;
      bVar2 = false;
      puVar11 = (undefined2 *)*plVar7;
    }
    *plVar7 = 0;
    lVar10 = plVar7[1];
    plVar7[1] = 0;
    if ((bVar2) && (local_68[4] != 0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if ((DAT_146ae4358 == (longlong *)0x0) ||
       (iVar5 = (**(code **)(*DAT_146ae4358 + 0x68))(), iVar5 == 0)) {
      puVar8 = &DAT_143f3eda8;
      if ((int)lVar10 != 0) {
        puVar8 = puVar11;
      }
      FUN_1432fbec0(param_2,puVar8,0xffffffffffffffff);
    }
    else {
      puVar8 = &DAT_143f3eda8;
      if ((int)lVar10 != 0) {
        puVar8 = puVar11;
      }
      FUN_1432fbec0(param_2,puVar8,0xffffffffffffffff);
      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
    }
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    if (_Src != (undefined2 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 142091f10 FUN_142091f10 body=1811 status=ok
// SIG undefined FUN_142091f10(void)

void FUN_142091f10(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  bool bVar19;
  bool bVar20;
  uint local_res8;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  
  lVar3 = *(longlong *)(param_1 + 8);
  bVar19 = false;
  bVar6 = false;
  local_res8 = 0;
  uVar8 = (uint)*(byte *)(lVar3 + 0x45);
  if (uVar8 != 0) {
    local_b0 = 0;
    puVar15 = local_c8;
    do {
      iVar17 = 0;
      lVar16 = *(longlong *)(lVar3 + 0x68) + local_b0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      lVar13 = *(longlong *)(lVar16 + 0x10);
      uVar10 = local_res8;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          FUN_1432c7ad0(param_1 + 0x18,uVar10,&local_68);
          if (local_50 != 0) {
            if (lVar13 == 0) {
              bVar6 = true;
              if (*(longlong *)(lVar16 + 8) == 0) {
                lVar11 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18));
                if (((lVar11 != 0) &&
                    (lVar11 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18)),
                    *(longlong *)(lVar11 + 0x60) != 0)) &&
                   (lVar11 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18)),
                   *(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x30) != 0)) {
                  lVar11 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18));
                  lVar11 = (**(code **)(**(longlong **)(*(longlong *)(lVar11 + 0x60) + 0x30) + 8))()
                  ;
                  if (lVar11 != 0) {
                    lVar11 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18));
                    local_c8 = (undefined8 *)
                               (**(code **)(**(longlong **)(*(longlong *)(lVar11 + 0x60) + 0x30) + 8
                                           ))();
                    puVar15 = local_c8;
                    puVar12 = local_c8;
                    if (local_c8 != (undefined8 *)0x0) {
                      LOCK();
                      *(int *)(local_c8 + 1) = *(int *)(local_c8 + 1) + 1;
                      UNLOCK();
                    }
                    goto LAB_142092098;
                  }
                }
                local_c8 = (undefined8 *)0x0;
                puVar15 = local_c8;
                puVar12 = local_c8;
              }
              else {
                local_c8 = *(undefined8 **)(*(longlong *)(lVar16 + 8) + 0x70);
                puVar15 = local_c8;
                puVar12 = local_c8;
                if (local_c8 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_c8 + 1) = *(int *)(local_c8 + 1) + 1;
                  UNLOCK();
                }
              }
            }
            else {
              puVar12 = *(undefined8 **)(lVar16 + 0x10);
              bVar19 = true;
              local_c0 = puVar12;
              if (puVar12 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                UNLOCK();
                puVar15 = local_c8;
              }
            }
LAB_142092098:
            (**(code **)(*DAT_146ab6358 + 0x588))
                      (DAT_146ab6358,&DAT_146ab6e78,puVar12,*(int *)(param_1 + 0x10) + iVar17,0,1);
            if ((bVar6) && (bVar6 = false, puVar15 != (undefined8 *)0x0)) {
              LOCK();
              piVar1 = (int *)(puVar15 + 1);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar15 = local_c8;
              if (iVar2 == 1) {
                if ((*(char *)(local_c8 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                  LOCK();
                  bVar20 = *(int *)((longlong)local_c8 + 0xc) == 0;
                  if (bVar20) {
                    *(int *)((longlong)local_c8 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar20) {
                    uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar9 == 0) {
                      lVar11 = 0;
                    }
                    else {
                      lVar11 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
                    }
                    *(undefined8 **)(lVar11 + 8) = local_c8;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
                  (**(code **)*local_c8)(local_c8,1);
                }
              }
            }
            if ((bVar19) && (bVar19 = false, local_c0 != (undefined8 *)0x0)) {
              LOCK();
              piVar1 = (int *)(local_c0 + 1);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar15 = local_c8;
              if (iVar2 == 1) {
                if ((*(char *)(local_c0 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                  LOCK();
                  bVar20 = *(int *)((longlong)local_c0 + 0xc) == 0;
                  if (bVar20) {
                    *(int *)((longlong)local_c0 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar20) {
                    uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar9 == 0) {
                      lVar11 = 0;
                    }
                    else {
                      lVar11 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
                    }
                    *(undefined8 **)(lVar11 + 8) = local_c0;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
                  (**(code **)*local_c0)(local_c0,1);
                }
              }
            }
            local_50 = 0;
          }
          iVar17 = iVar17 + 1;
          uVar10 = uVar10 + uVar8;
        } while (iVar17 < *(int *)(param_1 + 0x14));
      }
      if ((param_2 != '\0') && (lVar13 != 0)) {
        uVar4 = *(undefined8 *)(lVar16 + 0x10);
        puVar18 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar12 = puVar18 + 1;
        if (DAT_146ab6eb0 < puVar12) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x10);
          puVar18 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
          puVar12 = puVar18 + 1;
        }
        DAT_146ab6ea8 = puVar12;
        *puVar18 = uVar4;
        puVar14 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar12 = puVar14 + 5;
        if (DAT_146ab6eb0 < puVar12) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
          puVar14 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
          puVar12 = puVar14 + 5;
        }
        DAT_146ab6e8c = DAT_146ab6e8c + 1;
        DAT_146ab6ea8 = puVar12;
        *DAT_146ab6e80 = puVar14;
        DAT_146ab6e80 = puVar14 + 1;
        *DAT_146ab6e80 = 0;
        *puVar14 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar14 + 2) = 1;
        puVar14[3] = puVar18;
        *(undefined4 *)(puVar14 + 4) = 1;
        *(undefined1 *)((longlong)puVar14 + 0x24) = 0;
        if (*(longlong *)(lVar16 + 8) == 0) {
          lVar13 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18));
          if (((lVar13 != 0) &&
              (lVar13 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18)),
              *(longlong *)(lVar13 + 0x60) != 0)) &&
             (lVar13 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18)),
             *(longlong *)(*(longlong *)(lVar13 + 0x60) + 0x30) != 0)) {
            lVar13 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18));
            lVar13 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x60) + 0x30) + 8))();
            if (lVar13 != 0) {
              lVar13 = FUN_1416f8720(*(undefined4 *)(lVar16 + 0x18));
              local_b8 = (undefined8 *)
                         (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x60) + 0x30) + 8))();
              if (local_b8 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
                UNLOCK();
                puVar15 = local_c8;
              }
              goto LAB_142092415;
            }
          }
          local_b8 = (undefined8 *)0x0;
        }
        else {
          local_b8 = *(undefined8 **)(*(longlong *)(lVar16 + 8) + 0x70);
          if (local_b8 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
            UNLOCK();
            puVar15 = local_c8;
          }
        }
LAB_142092415:
        plVar5 = *(longlong **)(lVar16 + 0x10);
        puVar18 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar12 = puVar18 + 10;
        if (DAT_146ab6eb0 < puVar12) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x58);
          puVar18 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
          puVar12 = puVar18 + 10;
        }
        DAT_146ab6e8c = DAT_146ab6e8c + 1;
        DAT_146ab6ea8 = puVar12;
        *DAT_146ab6e80 = puVar18;
        DAT_146ab6e80 = puVar18 + 1;
        *DAT_146ab6e80 = 0;
        *puVar18 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar18 + 2) = 0;
        *(undefined4 *)((longlong)puVar18 + 0x14) = 0xffffffff;
        *(undefined4 *)(puVar18 + 3) = 0xffffffff;
        *(undefined4 *)((longlong)puVar18 + 0x1c) = 0xffffffff;
        *(undefined4 *)(puVar18 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
        *(undefined4 *)(puVar18 + 5) = 0xffffffff;
        *(undefined4 *)((longlong)puVar18 + 0x2c) = 0xffffffff;
        *(undefined4 *)(puVar18 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)puVar18 + 0x34) = 0;
        *(undefined4 *)(puVar18 + 7) = 0;
        *(undefined4 *)((longlong)puVar18 + 0x3c) = 0;
        puVar18[8] = plVar5;
        puVar18[9] = local_b8;
        lVar13 = (**(code **)(*plVar5 + 8))(plVar5);
        if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[8] + 0x18))(), lVar13 == 0)
           ) {
          (**(code **)(*(longlong *)puVar18[8] + 0x20))();
        }
        lVar13 = (**(code **)(*(longlong *)puVar18[9] + 8))();
        if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[9] + 0x18))(), lVar13 == 0)
           ) {
          (**(code **)(*(longlong *)puVar18[9] + 0x20))();
        }
        if (local_b8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_b8 + 1);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar15 = local_c8;
          if (iVar17 == 1) {
            if ((*(char *)(local_b8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar20 = *(int *)((longlong)local_b8 + 0xc) == 0;
              if (bVar20) {
                *(int *)((longlong)local_b8 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar20) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = local_b8;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*local_b8)(local_b8,1);
            }
          }
        }
      }
      local_res8 = local_res8 + 1;
      local_b0 = local_b0 + 0x20;
    } while (local_res8 < uVar8);
  }
  FUN_1432c8cf0(param_1,1);
  return;
}



// FUNCTION 142092650 FUN_142092650 body=580 status=ok
// SIG undefined FUN_142092650(void)

undefined8 FUN_142092650(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  bool bVar9;
  undefined8 *local_res8;
  int local_58;
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (param_3 == 0) {
    return 1;
  }
  piVar8 = (int *)(param_2 + 0x28);
  uVar7 = (ulonglong)param_3;
  do {
    local_58 = piVar8[-2];
    local_54 = piVar8[-1];
    local_48 = *piVar8 - local_58;
    local_44 = piVar8[1] - local_54;
    local_50 = 0;
    if (*(longlong *)(lVar3 + 8) == 0) {
      lVar6 = FUN_1416f8720(*(undefined4 *)(lVar3 + 0x18));
      if (((lVar6 != 0) &&
          (lVar6 = FUN_1416f8720(*(undefined4 *)(lVar3 + 0x18)), *(longlong *)(lVar6 + 0x60) != 0))
         && (lVar6 = FUN_1416f8720(*(undefined4 *)(lVar3 + 0x18)),
            *(longlong *)(*(longlong *)(lVar6 + 0x60) + 0x30) != 0)) {
        lVar6 = FUN_1416f8720(*(undefined4 *)(lVar3 + 0x18));
        lVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x60) + 0x30) + 8))();
        if (lVar6 != 0) {
          lVar6 = FUN_1416f8720(*(undefined4 *)(lVar3 + 0x18));
          local_res8 = (undefined8 *)
                       (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x60) + 0x30) + 8))();
          if (local_res8 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_res8 + 1) = *(int *)(local_res8 + 1) + 1;
            UNLOCK();
          }
          goto LAB_14209277a;
        }
      }
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8 = *(undefined8 **)(*(longlong *)(lVar3 + 8) + 0x70);
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_res8 + 1) = *(int *)(local_res8 + 1) + 1;
        UNLOCK();
      }
    }
LAB_14209277a:
    (**(code **)(*DAT_146ab6358 + 0x590))
              (DAT_146ab6358,&DAT_146ab6e78,local_res8,param_4,&local_58,piVar8[-8],
               *(undefined8 *)(piVar8 + -4));
    if (local_res8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res8 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(local_res8 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)local_res8 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)local_res8 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar6 = 0;
            if (uVar5 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = local_res8;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    piVar8 = piVar8 + 0xe;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 1420928a0 FUN_1420928a0 body=364 status=ok
// SIG undefined FUN_1420928a0(void)

uint FUN_1420928a0(uint param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  uint uVar4;
  wint_t *pwVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  pwVar5 = &DAT_144f8b3c8;
  do {
    wVar2 = *(wint_t *)((longlong)(puVar8 + -0xa27c59e4) + (longlong)pwVar5);
    if ((wVar2 == 0) && (*pwVar5 == 0)) goto LAB_14209291b;
    if (wVar2 != *pwVar5) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar5);
      if (wVar2 != wVar3) break;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
  if (wVar2 != wVar3) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    pwVar6 = L"normal";
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa27c59ec) + (longlong)pwVar6);
      if ((wVar1 == L'\0') && (*pwVar6 == L'\0')) goto LAB_14209297b;
      if (wVar1 != *pwVar6) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar6);
        if (wVar2 != wVar3) goto LAB_142092971;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_14209291b:
  uVar4 = 2;
  goto LAB_1420929d2;
LAB_1420929c3:
  if (wVar2 != wVar3) {
    return param_1;
  }
LAB_1420929cd:
  uVar4 = 1;
  goto LAB_1420929d2;
LAB_142092971:
  if (wVar2 != wVar3) {
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    pwVar6 = L"italic";
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa27c59f4) + (longlong)pwVar6);
      if ((wVar1 == L'\0') && (*pwVar6 == L'\0')) goto LAB_1420929cd;
      if (wVar1 != *pwVar6) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar6);
        if (wVar2 != wVar3) goto LAB_1420929c3;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_14209297b:
  uVar4 = 0;
LAB_1420929d2:
  if (param_1 == 0x10) {
    return uVar4;
  }
  if (param_1 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else if (uVar4 != 0) goto LAB_1420929ef;
  if ((param_1 & 3) != 0) {
    return param_1;
  }
LAB_1420929ef:
  return param_1 | uVar4;
}



// FUNCTION 142092a10 FUN_142092a10 body=117 status=ok
// SIG undefined FUN_142092a10(void)

void FUN_142092a10(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if (local_18 != 0) {
    FTcpMessageTransportConnection::Stop();
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142092a90 FUN_142092a90 body=91 status=ok
// SIG undefined FUN_142092a90(void)

int FUN_142092a90(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_3) && (param_2 != (void *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x18) < iVar1 + param_3) {
      param_3 = *(int *)(param_1 + 0x18) - iVar1;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x10)),param_2,(longlong)param_3);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
    return param_3;
  }
  return -1;
}



// FUNCTION 142092af0 FUN_142092af0 body=179 status=ok
// SIG undefined FUN_142092af0(void)

void FUN_142092af0(longlong param_1,char param_2,char param_3,undefined4 param_4,undefined4 *param_5
                  ,undefined4 *param_6,undefined1 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_6 = param_4;
  lVar3 = 0;
  *param_5 = 0;
  if (param_2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = lVar3;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 8);
    }
    if (*(char *)(lVar2 + 8) == '\x04') {
      *param_5 = 2;
      *param_6 = 1;
    }
    else {
      lVar2 = lVar3;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
      }
      if (*(char *)(lVar2 + 8) == '\x01') {
        *param_5 = 4;
      }
      else {
        *param_6 = 1;
        *param_7 = 1;
      }
    }
  }
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = lVar3;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 8);
    }
    if (*(char *)(lVar2 + 8) != '\x04') {
      if (lVar1 != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
      }
      if (*(char *)(lVar3 + 8) != '\x01') {
        *param_7 = 1;
      }
    }
  }
  return;
}



// FUNCTION 142092bb0 FUN_142092bb0 body=62 status=ok
// SIG undefined FUN_142092bb0(void)

void FUN_142092bb0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0x48;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xd8,local_res10);
  if (lVar1 != 0) {
    Scaleform::Render::RHI::MappedTexture::MappedTexture(lVar1);
    return;
  }
  return;
}



// FUNCTION 142092c20 FUN_142092c20 body=297 status=ok
// SIG undefined FUN_142092c20(void)

longlong * FUN_142092c20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_1[0xf];
    Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x48));
    cVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar3 == '\0') {
      if ((param_2[2] != 0) && (param_2[3] != 0)) {
        *(longlong *)(param_2[2] + 0x18) = param_2[3];
        *(longlong *)(param_2[3] + 0x10) = param_2[2];
        param_2[2] = 0;
        param_2[3] = 0;
      }
      param_2[2] = param_1[0x1a];
      param_2[3] = (longlong)(param_1 + 0x18);
      *(longlong **)(param_1[0x1a] + 0x18) = param_2;
      param_1[0x1a] = (longlong)param_2;
      if (param_1[10] != 0) {
        Scaleform::Mutex::Unlock((Mutex *)(param_1[0xf] + 0x48));
        (**(code **)(*(longlong *)param_1[10] + 8))((longlong *)param_1[10],param_1 + 6);
        Scaleform::Mutex::DoLock((Mutex *)(param_1[0xf] + 0x48));
      }
      iVar1 = (int)param_2[6];
      while (iVar1 == 0) {
        Scaleform::WaitCondition::Wait
                  ((WaitCondition *)(param_1[0xf] + 0x70),(Mutex *)(param_1[0xf] + 0x48),0xffffffff)
        ;
        iVar1 = (int)param_2[6];
      }
    }
    else {
      (**(code **)(*param_1 + 0x90))(param_1);
      (**(code **)(*param_1 + 0x98))(param_1);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x48));
    return param_2;
  }
  return (longlong *)0x0;
}



// FUNCTION 142092d50 FUN_142092d50 body=350 status=ok
// SIG undefined FUN_142092d50(void)

RefCountImpl * FUN_142092d50(longlong *param_1,RefCountImpl *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 == (RefCountImpl *)0x0) {
    return (RefCountImpl *)0x0;
  }
  cVar2 = (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
  if (cVar2 == '\0') {
    Scaleform::RefCountImpl::Release(param_2);
    return (RefCountImpl *)0x0;
  }
  lVar1 = param_1[0xf];
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar2 == '\0') {
    if (((byte)param_2[0x48] & 4) == 0) {
      FUN_14208c210(param_1 + 0x18,param_2);
      Scaleform::Mutex::Unlock((Mutex *)(param_1[0xf] + 0x48));
      (**(code **)(*(longlong *)param_1[10] + 8))((longlong *)param_1[10],param_1 + 6);
      Scaleform::Mutex::DoLock((Mutex *)(param_1[0xf] + 0x48));
      iVar3 = *(int *)(param_2 + 0x40);
      while (iVar3 == 0) {
        Scaleform::WaitCondition::Wait
                  ((WaitCondition *)(param_1[0xf] + 0x70),(Mutex *)(param_1[0xf] + 0x48),0xffffffff)
        ;
        iVar3 = *(int *)(param_2 + 0x40);
      }
      goto LAB_142092e4d;
    }
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  cVar2 = (**(code **)(*(longlong *)param_2 + 8))(param_2);
  if (cVar2 != '\0') {
    FUN_14208c210(param_1 + 0x16,param_2);
  }
LAB_142092e4d:
  if ((param_3 >> 8 & 1) != 0) {
    if ((*(longlong **)(param_2 + 0x30) != (longlong *)0x0) &&
       (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))(), iVar3 == 2)) {
      Scaleform::Render::RawImage::freeData(*(undefined8 *)(param_2 + 0x30));
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (*(int *)(param_2 + 0x40) == 1) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    Scaleform::RefCountImpl::Release(param_2);
    param_2 = (RefCountImpl *)0x0;
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  return param_2;
}



// FUNCTION 142092ec0 FUN_142092ec0 body=258 status=ok
// SIG undefined FUN_142092ec0(void)

void FUN_142092ec0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0xb0;
  if (param_1 == -0xc0) {
    lVar3 = 0;
  }
  if (*(longlong *)(param_1 + 200) != lVar3) {
    do {
      plVar1 = *(longlong **)(param_1 + 200);
      if ((plVar1[2] != 0) && (plVar1[3] != 0)) {
        *(longlong *)(plVar1[2] + 0x18) = plVar1[3];
        *(longlong *)(plVar1[3] + 0x10) = plVar1[2];
        plVar1[2] = 0;
        plVar1[3] = 0;
      }
      cVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      if (cVar2 != '\0') {
        if ((plVar1[2] != 0) && (plVar1[3] != 0)) {
          *(longlong *)(plVar1[2] + 0x18) = plVar1[3];
          *(longlong *)(plVar1[3] + 0x10) = plVar1[2];
          plVar1[2] = 0;
          plVar1[3] = 0;
        }
        plVar1[2] = *(longlong *)(param_1 + 0xb0);
        plVar1[3] = param_1 + 0xa0;
        *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x18) = plVar1;
        *(longlong **)(param_1 + 0xb0) = plVar1;
      }
    } while (*(longlong *)(param_1 + 200) != lVar3);
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0x78) + 0x70));
  }
  return;
}



// FUNCTION 142092fd0 FUN_142092fd0 body=128 status=ok
// SIG undefined FUN_142092fd0(void)

void FUN_142092fd0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x1b8) + uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < *(ulonglong *)(param_1 + 0x1c0));
  }
  if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
     ((*(ulonglong *)(param_1 + 0x1c8) & 0xfffffffffffffffe) != 0)) {
    FUN_14208d940(param_1 + 0x1b8,param_1 + 0x1b8,0);
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}



// FUNCTION 142093050 FUN_142093050 body=842 status=ok
// SIG undefined FUN_142093050(void)

void FUN_142093050(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 local_res18 [2];
  longlong *local_res20;
  
  if (param_3 == 0) {
    if (*param_1 != 0) {
      lVar7 = 0;
      lVar10 = *(longlong *)(*param_1 + 8) + 1;
      do {
        if (*(longlong *)(lVar7 + 0x10 + *param_1) != -2) {
          *(undefined8 *)(lVar7 + 0x10 + *param_1) = 0xfffffffffffffffe;
        }
        lVar7 = lVar7 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if (param_3 < 8) {
      lVar7 = 8;
    }
    else {
      param_3 = param_3 - 1;
      if ((param_3 & 0xffffffff00000000) == 0) {
        if ((param_3 & 0xffff0000) == 0) {
          if ((param_3 & 0xff00) == 0) {
            cVar4 = (&DAT_145af9a40)[param_3 & 0xff];
          }
          else {
            cVar4 = (&DAT_145af9a40)[param_3 >> 8 & 0xff] + '\b';
          }
        }
        else if ((param_3 & 0xff000000) == 0) {
          cVar4 = (&DAT_145af9a40)[param_3 >> 0x10 & 0xff] + '\x10';
        }
        else {
          cVar4 = (&DAT_145af9a40)[param_3 >> 0x18] + '\x18';
        }
      }
      else if ((param_3 & 0xffff000000000000) == 0) {
        if ((param_3 & 0xff0000000000) == 0) {
          cVar4 = (&DAT_145af9a40)[param_3 >> 0x20 & 0xff] + ' ';
        }
        else {
          cVar4 = (&DAT_145af9a40)[param_3 >> 0x28 & 0xff] + '(';
        }
      }
      else if ((param_3 & 0xff00000000000000) == 0) {
        cVar4 = (&DAT_145af9a40)[param_3 >> 0x30 & 0xff] + '0';
      }
      else {
        cVar4 = (&DAT_145af9a40)[param_3 >> 0x38] + '8';
      }
      lVar7 = 1L << (cVar4 + 1U & 0x3f);
    }
    local_res18[0] = 2;
    local_res20 = (longlong *)
                  (**(code **)(*DAT_146b62f28 + 0x70))
                            (DAT_146b62f28,param_2,(lVar7 + 1) * 0x10,local_res18);
    lVar9 = 0;
    *local_res20 = 0;
    local_res20[1] = lVar7 + -1;
    lVar10 = lVar9;
    do {
      lVar10 = lVar10 + 0x10;
      *(undefined8 *)(lVar10 + (longlong)local_res20) = 0xfffffffffffffffe;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (*param_1 != 0) {
      lVar7 = *(longlong *)(*param_1 + 8) + 1;
      do {
        lVar10 = *param_1 + lVar9;
        if (*(longlong *)(lVar10 + 0x10) != -2) {
          uVar1 = *(ushort *)(lVar10 + 0x18);
          FUN_142082ae0(&local_res20,param_2);
          uVar5 = local_res20[1];
          *local_res20 = *local_res20 + 1;
          uVar13 = uVar5 & uVar1;
          puVar11 = (ulonglong *)(local_res20 + (uVar13 + 1) * 2);
          uVar2 = *puVar11;
          uVar12 = uVar13;
          if (uVar2 == 0xfffffffffffffffe) {
            *puVar11 = 0xffffffffffffffff;
            *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(lVar10 + 0x18);
            *(undefined2 *)((longlong)puVar11 + 10) = *(undefined2 *)(lVar10 + 0x1a);
          }
          else {
            do {
              uVar12 = uVar12 + 1 & uVar5;
              puVar8 = (ulonglong *)(local_res20 + uVar12 * 2 + 2);
            } while (*puVar8 != 0xfffffffffffffffe);
            uVar5 = (ushort)puVar11[1] & uVar5;
            if (uVar5 == uVar13) {
              *puVar8 = uVar2;
              *(short *)(puVar8 + 1) = (short)puVar11[1];
              *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)((longlong)puVar11 + 10);
              uVar3 = *(undefined4 *)(lVar10 + 0x18);
              *puVar11 = uVar12;
            }
            else {
              puVar6 = (ulonglong *)(local_res20 + (uVar5 + 1) * 2);
              uVar5 = *puVar6;
              while (uVar5 != uVar13) {
                puVar6 = (ulonglong *)(local_res20 + (uVar5 + 1) * 2);
                uVar5 = *puVar6;
              }
              *puVar8 = uVar2;
              *(short *)(puVar8 + 1) = (short)puVar11[1];
              *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)((longlong)puVar11 + 10);
              *puVar6 = uVar12;
              uVar3 = *(undefined4 *)(lVar10 + 0x18);
              *puVar11 = 0xffffffffffffffff;
            }
            *(undefined4 *)(puVar11 + 1) = uVar3;
          }
          *(undefined8 *)(lVar10 + 0x10) = 0xfffffffffffffffe;
        }
        lVar9 = lVar9 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    }
    *param_1 = (longlong)local_res20;
  }
  return;
}



// FUNCTION 1420933a0 FUN_1420933a0 body=47 status=ok
// SIG undefined FUN_1420933a0(void)

longlong FUN_1420933a0(void)

{
  if (DAT_146ae4730 == 0) {
    FUN_141786440(&DAT_146ae4730,&PTR_FUN_144f8f220);
  }
  return DAT_146ae4730;
}



// FUNCTION 1420933d0 FUN_1420933d0 body=47 status=ok
// SIG undefined FUN_1420933d0(void)

longlong FUN_1420933d0(void)

{
  if (DAT_146ae45a8 == 0) {
    FUN_141786a30(&DAT_146ae45a8,&PTR_FUN_1464fba70);
  }
  return DAT_146ae45a8;
}



// FUNCTION 142093400 FUN_142093400 body=47 status=ok
// SIG undefined FUN_142093400(void)

longlong FUN_142093400(void)

{
  if (DAT_146ae45b0 == 0) {
    FUN_141786a30(&DAT_146ae45b0,&PTR_FUN_1464fbb60);
  }
  return DAT_146ae45b0;
}



// FUNCTION 142093430 FUN_142093430 body=47 status=ok
// SIG undefined FUN_142093430(void)

longlong FUN_142093430(void)

{
  if (DAT_146ae45b8 == 0) {
    FUN_141786a30(&DAT_146ae45b8,&PTR_FUN_1464fbbe0);
  }
  return DAT_146ae45b8;
}



// FUNCTION 142093460 FUN_142093460 body=47 status=ok
// SIG undefined FUN_142093460(void)

longlong FUN_142093460(void)

{
  if (DAT_146ae45c0 == 0) {
    FUN_141786a30(&DAT_146ae45c0,&PTR_FUN_1464fbcd0);
  }
  return DAT_146ae45c0;
}



// FUNCTION 142093490 FUN_142093490 body=47 status=ok
// SIG undefined FUN_142093490(void)

longlong FUN_142093490(void)

{
  if (DAT_146ae45c8 == 0) {
    FUN_141786a30(&DAT_146ae45c8,&PTR_FUN_1464fbd50);
  }
  return DAT_146ae45c8;
}



// FUNCTION 1420934c0 FUN_1420934c0 body=47 status=ok
// SIG undefined FUN_1420934c0(void)

longlong FUN_1420934c0(void)

{
  if (DAT_146ae45d0 == 0) {
    FUN_141786a30(&DAT_146ae45d0,&PTR_FUN_1464fbdd0);
  }
  return DAT_146ae45d0;
}



// FUNCTION 1420934f0 FUN_1420934f0 body=47 status=ok
// SIG undefined FUN_1420934f0(void)

longlong FUN_1420934f0(void)

{
  if (DAT_146ae45d8 == 0) {
    FUN_141786a30(&DAT_146ae45d8,&PTR_FUN_1464fbf00);
  }
  return DAT_146ae45d8;
}



// FUNCTION 142093520 FUN_142093520 body=47 status=ok
// SIG undefined FUN_142093520(void)

longlong FUN_142093520(void)

{
  if (DAT_146ae45e0 == 0) {
    FUN_141786a30(&DAT_146ae45e0,&PTR_FUN_1464fc030);
  }
  return DAT_146ae45e0;
}



// FUNCTION 142093550 FUN_142093550 body=47 status=ok
// SIG undefined FUN_142093550(void)

longlong FUN_142093550(void)

{
  if (DAT_146ae45e8 == 0) {
    FUN_141786a30(&DAT_146ae45e8,&PTR_FUN_1464fc120);
  }
  return DAT_146ae45e8;
}



// FUNCTION 142093580 FUN_142093580 body=47 status=ok
// SIG undefined FUN_142093580(void)

longlong FUN_142093580(void)

{
  if (DAT_146ae45f0 == 0) {
    FUN_141786a30(&DAT_146ae45f0,&PTR_FUN_1464fc280);
  }
  return DAT_146ae45f0;
}



// FUNCTION 1420935b0 FUN_1420935b0 body=47 status=ok
// SIG undefined FUN_1420935b0(void)

longlong FUN_1420935b0(void)

{
  if (DAT_146ae45f8 == 0) {
    FUN_141786a30(&DAT_146ae45f8,&PTR_FUN_1464fc300);
  }
  return DAT_146ae45f8;
}



// FUNCTION 1420935e0 FUN_1420935e0 body=47 status=ok
// SIG undefined FUN_1420935e0(void)

longlong FUN_1420935e0(void)

{
  if (DAT_146ae4600 == 0) {
    FUN_141786a30(&DAT_146ae4600,&PTR_FUN_1464fc3c0);
  }
  return DAT_146ae4600;
}



// FUNCTION 142093610 FUN_142093610 body=47 status=ok
// SIG undefined FUN_142093610(void)

longlong FUN_142093610(void)

{
  if (DAT_146ae4608 == 0) {
    FUN_141786a30(&DAT_146ae4608,&PTR_FUN_1464fc470);
  }
  return DAT_146ae4608;
}



// FUNCTION 142093640 FUN_142093640 body=47 status=ok
// SIG undefined FUN_142093640(void)

longlong FUN_142093640(void)

{
  if (DAT_146ae4610 == 0) {
    FUN_141786a30(&DAT_146ae4610,&PTR_FUN_1464fc520);
  }
  return DAT_146ae4610;
}



// FUNCTION 142093670 FUN_142093670 body=47 status=ok
// SIG undefined FUN_142093670(void)

longlong FUN_142093670(void)

{
  if (DAT_146ae4618 == 0) {
    FUN_141786a30(&DAT_146ae4618,&PTR_FUN_1464fc5d0);
  }
  return DAT_146ae4618;
}



// FUNCTION 1420936a0 FUN_1420936a0 body=47 status=ok
// SIG undefined FUN_1420936a0(void)

longlong FUN_1420936a0(void)

{
  if (DAT_146ae4620 == 0) {
    FUN_141786a30(&DAT_146ae4620,&PTR_FUN_1464fc680);
  }
  return DAT_146ae4620;
}



// FUNCTION 1420936d0 FUN_1420936d0 body=47 status=ok
// SIG undefined FUN_1420936d0(void)

longlong FUN_1420936d0(void)

{
  if (DAT_146ae4628 == 0) {
    FUN_141786a30(&DAT_146ae4628,&PTR_FUN_1464fc7b0);
  }
  return DAT_146ae4628;
}



// FUNCTION 142093700 FUN_142093700 body=47 status=ok
// SIG undefined FUN_142093700(void)

longlong FUN_142093700(void)

{
  if (DAT_146ae4630 == 0) {
    FUN_141786a30(&DAT_146ae4630,&PTR_FUN_1464fc870);
  }
  return DAT_146ae4630;
}



// FUNCTION 142093730 FUN_142093730 body=47 status=ok
// SIG undefined FUN_142093730(void)

longlong FUN_142093730(void)

{
  if (DAT_146ae4638 == 0) {
    FUN_141786a30(&DAT_146ae4638,&PTR_FUN_1464fc930);
  }
  return DAT_146ae4638;
}



// FUNCTION 142093760 FUN_142093760 body=47 status=ok
// SIG undefined FUN_142093760(void)

longlong FUN_142093760(void)

{
  if (DAT_146ae4640 == 0) {
    FUN_141786a30(&DAT_146ae4640,&PTR_FUN_1464fc970);
  }
  return DAT_146ae4640;
}



// FUNCTION 142093790 FUN_142093790 body=47 status=ok
// SIG undefined FUN_142093790(void)

longlong FUN_142093790(void)

{
  if (DAT_146ae4648 == 0) {
    FUN_141786a30(&DAT_146ae4648,&PTR_FUN_1464fc9b0);
  }
  return DAT_146ae4648;
}



// FUNCTION 1420937c0 FUN_1420937c0 body=47 status=ok
// SIG undefined FUN_1420937c0(void)

longlong FUN_1420937c0(void)

{
  if (DAT_146ae4650 == 0) {
    FUN_141786a30(&DAT_146ae4650,&PTR_FUN_1464fc9f0);
  }
  return DAT_146ae4650;
}



// FUNCTION 1420937f0 FUN_1420937f0 body=47 status=ok
// SIG undefined FUN_1420937f0(void)

longlong FUN_1420937f0(void)

{
  if (DAT_146ae4658 == 0) {
    FUN_141786a30(&DAT_146ae4658,&PTR_FUN_1464fcaa0);
  }
  return DAT_146ae4658;
}



// FUNCTION 142093820 FUN_142093820 body=47 status=ok
// SIG undefined FUN_142093820(void)

longlong FUN_142093820(void)

{
  if (DAT_146ae4660 == 0) {
    FUN_141786a30(&DAT_146ae4660,&PTR_FUN_1464fcae0);
  }
  return DAT_146ae4660;
}



// FUNCTION 142093850 FUN_142093850 body=47 status=ok
// SIG undefined FUN_142093850(void)

longlong FUN_142093850(void)

{
  if (DAT_146ae4668 == 0) {
    FUN_141786a30(&DAT_146ae4668,&PTR_FUN_1464fcb20);
  }
  return DAT_146ae4668;
}



// FUNCTION 142093880 FUN_142093880 body=47 status=ok
// SIG undefined FUN_142093880(void)

longlong FUN_142093880(void)

{
  if (DAT_146ae4670 == 0) {
    FUN_141786a30(&DAT_146ae4670,&PTR_FUN_1464fcda0);
  }
  return DAT_146ae4670;
}



// FUNCTION 1420938b0 FUN_1420938b0 body=47 status=ok
// SIG undefined FUN_1420938b0(void)

longlong FUN_1420938b0(void)

{
  if (DAT_146ae4678 == 0) {
    FUN_141786a30(&DAT_146ae4678,&PTR_FUN_1464fcde0);
  }
  return DAT_146ae4678;
}



// FUNCTION 1420938e0 FUN_1420938e0 body=47 status=ok
// SIG undefined FUN_1420938e0(void)

longlong FUN_1420938e0(void)

{
  if (DAT_146ae4680 == 0) {
    FUN_141786a30(&DAT_146ae4680,&PTR_FUN_1464fce60);
  }
  return DAT_146ae4680;
}



// FUNCTION 142093910 FUN_142093910 body=47 status=ok
// SIG undefined FUN_142093910(void)

longlong FUN_142093910(void)

{
  if (DAT_146ae4688 == 0) {
    FUN_141786a30(&DAT_146ae4688,&PTR_FUN_1464fcf50);
  }
  return DAT_146ae4688;
}



// FUNCTION 142093940 FUN_142093940 body=47 status=ok
// SIG undefined FUN_142093940(void)

longlong FUN_142093940(void)

{
  if (DAT_146ae4690 == 0) {
    FUN_141786a30(&DAT_146ae4690,&PTR_FUN_1464fcfd0);
  }
  return DAT_146ae4690;
}



// FUNCTION 142093970 FUN_142093970 body=47 status=ok
// SIG undefined FUN_142093970(void)

longlong FUN_142093970(void)

{
  if (DAT_146ae4698 == 0) {
    FUN_141786a30(&DAT_146ae4698,&PTR_FUN_1464fd0c0);
  }
  return DAT_146ae4698;
}



// FUNCTION 1420939a0 FUN_1420939a0 body=47 status=ok
// SIG undefined FUN_1420939a0(void)

longlong FUN_1420939a0(void)

{
  if (DAT_146ae46a0 == 0) {
    FUN_141786a30(&DAT_146ae46a0,&PTR_FUN_1464fd140);
  }
  return DAT_146ae46a0;
}



// FUNCTION 1420939d0 FUN_1420939d0 body=47 status=ok
// SIG undefined FUN_1420939d0(void)

longlong FUN_1420939d0(void)

{
  if (DAT_146ae46a8 == 0) {
    FUN_141786a30(&DAT_146ae46a8,&PTR_FUN_1464fd230);
  }
  return DAT_146ae46a8;
}



// FUNCTION 142093a00 FUN_142093a00 body=47 status=ok
// SIG undefined FUN_142093a00(void)

longlong FUN_142093a00(void)

{
  if (DAT_146ae46b0 == 0) {
    FUN_141786a30(&DAT_146ae46b0,&PTR_FUN_1464fd2b0);
  }
  return DAT_146ae46b0;
}



// FUNCTION 142093a30 FUN_142093a30 body=47 status=ok
// SIG undefined FUN_142093a30(void)

longlong FUN_142093a30(void)

{
  if (DAT_146ae46b8 == 0) {
    FUN_141786a30(&DAT_146ae46b8,&PTR_FUN_1464fd370);
  }
  return DAT_146ae46b8;
}



// FUNCTION 142093a60 FUN_142093a60 body=47 status=ok
// SIG undefined FUN_142093a60(void)

longlong FUN_142093a60(void)

{
  if (DAT_146ae46c0 == 0) {
    FUN_141786a30(&DAT_146ae46c0,&PTR_FUN_1464fd430);
  }
  return DAT_146ae46c0;
}



// FUNCTION 142093a90 FUN_142093a90 body=47 status=ok
// SIG undefined FUN_142093a90(void)

longlong FUN_142093a90(void)

{
  if (DAT_146ae46c8 == 0) {
    FUN_141786a30(&DAT_146ae46c8,&PTR_FUN_1464fd4f0);
  }
  return DAT_146ae46c8;
}



// FUNCTION 142093ac0 FUN_142093ac0 body=47 status=ok
// SIG undefined FUN_142093ac0(void)

longlong FUN_142093ac0(void)

{
  if (DAT_146ae46d0 == 0) {
    FUN_141786a30(&DAT_146ae46d0,&PTR_FUN_1464fd570);
  }
  return DAT_146ae46d0;
}



// FUNCTION 142093af0 FUN_142093af0 body=47 status=ok
// SIG undefined FUN_142093af0(void)

longlong FUN_142093af0(void)

{
  if (DAT_146ae46d8 == 0) {
    FUN_141786a30(&DAT_146ae46d8,&PTR_FUN_1464fd5b0);
  }
  return DAT_146ae46d8;
}



// FUNCTION 142093b20 FUN_142093b20 body=47 status=ok
// SIG undefined FUN_142093b20(void)

longlong FUN_142093b20(void)

{
  if (DAT_146ae46e0 == 0) {
    FUN_141786a30(&DAT_146ae46e0,&PTR_FUN_1464fd6d0);
  }
  return DAT_146ae46e0;
}



// FUNCTION 142093b50 FUN_142093b50 body=47 status=ok
// SIG undefined FUN_142093b50(void)

longlong FUN_142093b50(void)

{
  if (DAT_146ae46e8 == 0) {
    FUN_141786a30(&DAT_146ae46e8,&PTR_FUN_1464fd750);
  }
  return DAT_146ae46e8;
}



// FUNCTION 142093b80 FUN_142093b80 body=47 status=ok
// SIG undefined FUN_142093b80(void)

longlong FUN_142093b80(void)

{
  if (DAT_146ae46f0 == 0) {
    FUN_141786a30(&DAT_146ae46f0,&PTR_FUN_1464fd840);
  }
  return DAT_146ae46f0;
}



// FUNCTION 142093bb0 FUN_142093bb0 body=47 status=ok
// SIG undefined FUN_142093bb0(void)

longlong FUN_142093bb0(void)

{
  if (DAT_146ae46f8 == 0) {
    FUN_141786a30(&DAT_146ae46f8,&PTR_FUN_1464fd930);
  }
  return DAT_146ae46f8;
}



// FUNCTION 142093be0 FUN_142093be0 body=47 status=ok
// SIG undefined FUN_142093be0(void)

longlong FUN_142093be0(void)

{
  if (DAT_146ae4700 == 0) {
    FUN_141786a30(&DAT_146ae4700,&PTR_FUN_1464fd9b0);
  }
  return DAT_146ae4700;
}



// FUNCTION 142093c10 FUN_142093c10 body=47 status=ok
// SIG undefined FUN_142093c10(void)

longlong FUN_142093c10(void)

{
  if (DAT_146ae4708 == 0) {
    FUN_141786a30(&DAT_146ae4708,&PTR_FUN_1464fdad0);
  }
  return DAT_146ae4708;
}



// FUNCTION 142093c40 FUN_142093c40 body=47 status=ok
// SIG undefined FUN_142093c40(void)

longlong FUN_142093c40(void)

{
  if (DAT_146ae4710 == 0) {
    FUN_141786a30(&DAT_146ae4710,&PTR_FUN_1464fdb50);
  }
  return DAT_146ae4710;
}



// FUNCTION 142093c70 FUN_142093c70 body=47 status=ok
// SIG undefined FUN_142093c70(void)

longlong FUN_142093c70(void)

{
  if (DAT_146ae4718 == 0) {
    FUN_141786a30(&DAT_146ae4718,&PTR_FUN_1464fdc10);
  }
  return DAT_146ae4718;
}



// FUNCTION 142093ca0 FUN_142093ca0 body=47 status=ok
// SIG undefined FUN_142093ca0(void)

longlong FUN_142093ca0(void)

{
  if (DAT_146ae4720 == 0) {
    FUN_141786a30(&DAT_146ae4720,&PTR_FUN_1464fdcd0);
  }
  return DAT_146ae4720;
}



// FUNCTION 142093cd0 FUN_142093cd0 body=47 status=ok
// SIG undefined FUN_142093cd0(void)

longlong FUN_142093cd0(void)

{
  if (DAT_146ae4728 == 0) {
    FUN_141786a30(&DAT_146ae4728,&PTR_FUN_1464fde10);
  }
  return DAT_146ae4728;
}



// FUNCTION 142093d20 FUN_142093d20 body=53 status=ok
// SIG undefined FUN_142093d20(void)

void FUN_142093d20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &PTR_FUN_144f913e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142093d60 FUN_142093d60 body=53 status=ok
// SIG undefined FUN_142093d60(void)

void FUN_142093d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f914f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142093da0 FUN_142093da0 body=53 status=ok
// SIG undefined FUN_142093da0(void)

void FUN_142093da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f91610;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142093de0 FUN_142093de0 body=53 status=ok
// SIG undefined FUN_142093de0(void)

void FUN_142093de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f91728;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142093e20 FUN_142093e20 body=53 status=ok
// SIG undefined FUN_142093e20(void)

void FUN_142093e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144f91840;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142093e60 FUN_142093e60 body=151 status=ok
// SIG undefined FUN_142093e60(void)

longlong FUN_142093e60(void)

{
  if (DAT_146ae4738 == 0) {
    FUN_14171ccd0(L"/Script/ScaleformUI",L"GFxMoviePlayer",&DAT_146ae4738,FUN_142095690,0x210,
                  0x10000000,0,L"Engine",&LAB_1420947a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ae4738;
}



// FUNCTION 142093f10 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlatformInterfaceBase::GetPrivateStaticClass(void)

{
  if (DAT_146ae47f0 == 0) {
    FUN_14171ccd0(L"/Script/ScaleformUI",L"GFxObject",&DAT_146ae47f0,FUN_1420956c0,0x38,0x10000008,0
                  ,L"Engine",FUN_1420947c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ae47f0;
}



// FUNCTION 142093fb0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialParameterCollectionInstance::GetPrivateStaticClass(void)

{
  if (DAT_146ae4880 == 0) {
    FUN_14171ccd0(L"/Script/ScaleformUI",L"SwfMovie",&DAT_146ae4880,FUN_140447710,0xf8,0x10000000,0,
                  L"Engine",FUN_142094800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ae4880;
}



// FUNCTION 142094050 FUN_142094050 body=47 status=ok
// SIG undefined FUN_142094050(void)

longlong FUN_142094050(void)

{
  if (DAT_146ae47e8 == 0) {
    FUN_141786440(&DAT_146ae47e8,&PTR_GetPrivateStaticClass_144f901d0);
  }
  return DAT_146ae47e8;
}



// FUNCTION 142094080 FUN_142094080 body=47 status=ok
// SIG undefined FUN_142094080(void)

longlong FUN_142094080(void)

{
  if (DAT_146ae4740 == 0) {
    FUN_141786a30(&DAT_146ae4740,&PTR_FUN_1464fefa0);
  }
  return DAT_146ae4740;
}



// FUNCTION 1420940b0 FUN_1420940b0 body=47 status=ok
// SIG undefined FUN_1420940b0(void)

longlong FUN_1420940b0(void)

{
  if (DAT_146ae4748 == 0) {
    FUN_141786a30(&DAT_146ae4748,&PTR_FUN_1464ff020);
  }
  return DAT_146ae4748;
}



// FUNCTION 1420940e0 FUN_1420940e0 body=47 status=ok
// SIG undefined FUN_1420940e0(void)

longlong FUN_1420940e0(void)

{
  if (DAT_146ae4750 == 0) {
    FUN_141786a30(&DAT_146ae4750,&PTR_FUN_1464ff0a0);
  }
  return DAT_146ae4750;
}



// FUNCTION 142094110 FUN_142094110 body=47 status=ok
// SIG undefined FUN_142094110(void)

longlong FUN_142094110(void)

{
  if (DAT_146ae4758 == 0) {
    FUN_141786a30(&DAT_146ae4758,&PTR_FUN_1464ff120);
  }
  return DAT_146ae4758;
}



// FUNCTION 142094140 FUN_142094140 body=47 status=ok
// SIG undefined FUN_142094140(void)

longlong FUN_142094140(void)

{
  if (DAT_146ae4760 == 0) {
    FUN_141786a30(&DAT_146ae4760,&PTR_FUN_1464ff1a0);
  }
  return DAT_146ae4760;
}



// FUNCTION 142094170 FUN_142094170 body=47 status=ok
// SIG undefined FUN_142094170(void)

longlong FUN_142094170(void)

{
  if (DAT_146ae4768 == 0) {
    FUN_141786a30(&DAT_146ae4768,&PTR_FUN_1464ff260);
  }
  return DAT_146ae4768;
}



// FUNCTION 1420941a0 FUN_1420941a0 body=47 status=ok
// SIG undefined FUN_1420941a0(void)

longlong FUN_1420941a0(void)

{
  if (DAT_146ae4770 == 0) {
    FUN_141786a30(&DAT_146ae4770,&PTR_FUN_1464ff320);
  }
  return DAT_146ae4770;
}



// FUNCTION 1420941d0 FUN_1420941d0 body=47 status=ok
// SIG undefined FUN_1420941d0(void)

longlong FUN_1420941d0(void)

{
  if (DAT_146ae4778 == 0) {
    FUN_141786a30(&DAT_146ae4778,&PTR_FUN_1464ff3e0);
  }
  return DAT_146ae4778;
}



// FUNCTION 142094200 FUN_142094200 body=47 status=ok
// SIG undefined FUN_142094200(void)

longlong FUN_142094200(void)

{
  if (DAT_146ae4780 == 0) {
    FUN_141786a30(&DAT_146ae4780,&PTR_FUN_1464ff420);
  }
  return DAT_146ae4780;
}



// FUNCTION 142094230 FUN_142094230 body=47 status=ok
// SIG undefined FUN_142094230(void)

longlong FUN_142094230(void)

{
  if (DAT_146ae4788 == 0) {
    FUN_141786a30(&DAT_146ae4788,&PTR_FUN_1464ff460);
  }
  return DAT_146ae4788;
}



// FUNCTION 142094260 FUN_142094260 body=47 status=ok
// SIG undefined FUN_142094260(void)

longlong FUN_142094260(void)

{
  if (DAT_146ae4790 == 0) {
    FUN_141786a30(&DAT_146ae4790,&PTR_FUN_1464ff4a0);
  }
  return DAT_146ae4790;
}



// FUNCTION 142094290 FUN_142094290 body=47 status=ok
// SIG undefined FUN_142094290(void)

longlong FUN_142094290(void)

{
  if (DAT_146ae4798 == 0) {
    FUN_141786a30(&DAT_146ae4798,&PTR_FUN_1464ff4e0);
  }
  return DAT_146ae4798;
}



// FUNCTION 1420942c0 FUN_1420942c0 body=47 status=ok
// SIG undefined FUN_1420942c0(void)

longlong FUN_1420942c0(void)

{
  if (DAT_146ae47a0 == 0) {
    FUN_141786a30(&DAT_146ae47a0,&PTR_FUN_1464ff5a0);
  }
  return DAT_146ae47a0;
}



// FUNCTION 1420942f0 FUN_1420942f0 body=47 status=ok
// SIG undefined FUN_1420942f0(void)

longlong FUN_1420942f0(void)

{
  if (DAT_146ae47a8 == 0) {
    FUN_141786a30(&DAT_146ae47a8,&PTR_FUN_1464ff620);
  }
  return DAT_146ae47a8;
}



// FUNCTION 142094320 FUN_142094320 body=47 status=ok
// SIG undefined FUN_142094320(void)

longlong FUN_142094320(void)

{
  if (DAT_146ae47b0 == 0) {
    FUN_141786a30(&DAT_146ae47b0,&PTR_FUN_1464ff6a0);
  }
  return DAT_146ae47b0;
}



// FUNCTION 142094350 FUN_142094350 body=47 status=ok
// SIG undefined FUN_142094350(void)

longlong FUN_142094350(void)

{
  if (DAT_146ae47b8 == 0) {
    FUN_141786a30(&DAT_146ae47b8,&PTR_FUN_1464ff720);
  }
  return DAT_146ae47b8;
}



// FUNCTION 142094380 FUN_142094380 body=47 status=ok
// SIG undefined FUN_142094380(void)

longlong FUN_142094380(void)

{
  if (DAT_146ae47c0 == 0) {
    FUN_141786a30(&DAT_146ae47c0,&PTR_FUN_1464ff7a0);
  }
  return DAT_146ae47c0;
}



// FUNCTION 1420943b0 FUN_1420943b0 body=47 status=ok
// SIG undefined FUN_1420943b0(void)

longlong FUN_1420943b0(void)

{
  if (DAT_146ae47c8 == 0) {
    FUN_141786a30(&DAT_146ae47c8,&PTR_FUN_1464ff860);
  }
  return DAT_146ae47c8;
}



// FUNCTION 1420943e0 FUN_1420943e0 body=47 status=ok
// SIG undefined FUN_1420943e0(void)

longlong FUN_1420943e0(void)

{
  if (DAT_146ae47d0 == 0) {
    FUN_141786a30(&DAT_146ae47d0,&PTR_FUN_1464ff8a0);
  }
  return DAT_146ae47d0;
}



// FUNCTION 142094410 FUN_142094410 body=47 status=ok
// SIG undefined FUN_142094410(void)

longlong FUN_142094410(void)

{
  if (DAT_146ae47d8 == 0) {
    FUN_141786a30(&DAT_146ae47d8,&PTR_FUN_1464ff8e0);
  }
  return DAT_146ae47d8;
}



// FUNCTION 142094440 FUN_142094440 body=47 status=ok
// SIG undefined FUN_142094440(void)

longlong FUN_142094440(void)

{
  if (DAT_146ae47e0 == 0) {
    FUN_141786a30(&DAT_146ae47e0,&PTR_FUN_1464ff9a0);
  }
  return DAT_146ae47e0;
}



// FUNCTION 142094480 FUN_142094480 body=162 status=ok
// SIG undefined FUN_142094480(void)

longlong FUN_142094480(void)

{
  if (DAT_146ae4840 == 0) {
    FUN_14171ccd0(L"/Script/ScaleformUI",L"ScaleformBlueprintLibrary",&DAT_146ae4840,FUN_1420956f0,
                  0x28,0x10000000,0,L"Engine",&LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146ae4840;
}



// FUNCTION 142094530 FUN_142094530 body=47 status=ok
// SIG undefined FUN_142094530(void)

longlong FUN_142094530(void)

{
  if (DAT_146ae4848 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
  }
  return DAT_146ae4848;
}



// FUNCTION 142094560 FUN_142094560 body=53 status=ok
// SIG undefined FUN_142094560(void)

void FUN_142094560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144f90f40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1420945a0 FUN_1420945a0 body=53 status=ok
// SIG undefined FUN_1420945a0(void)

void FUN_1420945a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144f91058;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1420945e0 FUN_1420945e0 body=47 status=ok
// SIG undefined FUN_1420945e0(void)

longlong FUN_1420945e0(void)

{
  if (DAT_146ae4838 == 0) {
    FUN_141786440(&DAT_146ae4838,&PTR_FUN_144f90a20);
  }
  return DAT_146ae4838;
}



// FUNCTION 142094610 FUN_142094610 body=47 status=ok
// SIG undefined FUN_142094610(void)

longlong FUN_142094610(void)

{
  if (DAT_146ae47f8 == 0) {
    FUN_141786a30(&DAT_146ae47f8,&PTR_FUN_1464ffa20);
  }
  return DAT_146ae47f8;
}



// FUNCTION 142094640 FUN_142094640 body=47 status=ok
// SIG undefined FUN_142094640(void)

longlong FUN_142094640(void)

{
  if (DAT_146ae4800 == 0) {
    FUN_141786a30(&DAT_146ae4800,&PTR_FUN_1464ffbe0);
  }
  return DAT_146ae4800;
}



// FUNCTION 142094670 FUN_142094670 body=47 status=ok
// SIG undefined FUN_142094670(void)

longlong FUN_142094670(void)

{
  if (DAT_146ae4808 == 0) {
    FUN_141786a30(&DAT_146ae4808,&PTR_FUN_1464ffca0);
  }
  return DAT_146ae4808;
}



// FUNCTION 1420946a0 FUN_1420946a0 body=47 status=ok
// SIG undefined FUN_1420946a0(void)

longlong FUN_1420946a0(void)

{
  if (DAT_146ae4810 == 0) {
    FUN_141786a30(&DAT_146ae4810,&PTR_FUN_1464ffd60);
  }
  return DAT_146ae4810;
}



// FUNCTION 1420946d0 FUN_1420946d0 body=47 status=ok
// SIG undefined FUN_1420946d0(void)

longlong FUN_1420946d0(void)

{
  if (DAT_146ae4818 == 0) {
    FUN_141786a30(&DAT_146ae4818,&PTR_FUN_1464ffe20);
  }
  return DAT_146ae4818;
}



// FUNCTION 142094700 FUN_142094700 body=47 status=ok
// SIG undefined FUN_142094700(void)

longlong FUN_142094700(void)

{
  if (DAT_146ae4820 == 0) {
    FUN_141786a30(&DAT_146ae4820,&PTR_FUN_1464fff20);
  }
  return DAT_146ae4820;
}



// FUNCTION 142094730 FUN_142094730 body=47 status=ok
// SIG undefined FUN_142094730(void)

longlong FUN_142094730(void)

{
  if (DAT_146ae4828 == 0) {
    FUN_141786a30(&DAT_146ae4828,&PTR_FUN_1464fffe0);
  }
  return DAT_146ae4828;
}



// FUNCTION 142094760 FUN_142094760 body=47 status=ok
// SIG undefined FUN_142094760(void)

longlong FUN_142094760(void)

{
  if (DAT_146ae4830 == 0) {
    FUN_141786a30(&DAT_146ae4830,&PTR_FUN_146500250);
  }
  return DAT_146ae4830;
}



// FUNCTION 1420947c0 FUN_1420947c0 body=51 status=ok
// SIG undefined FUN_1420947c0(void)

void FUN_1420947c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_14468cff8;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 142094800 FUN_142094800 body=179 status=ok
// SIG undefined FUN_142094800(void)

void FUN_142094800(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144f91958;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0x4b;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
  }
  return;
}



// FUNCTION 1420948c0 FUN_1420948c0 body=159 status=ok
// SIG undefined FUN_1420948c0(void)

undefined4 * FUN_1420948c0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142094960 FUN_142094960 body=285 status=ok
// SIG undefined FUN_142094960(void)

undefined4 * FUN_142094960(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[10] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 142094a80 ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator> body=114 status=ok
// SIG undefined ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(void)

void TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
     ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
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



// FUNCTION 142094b00 FUN_142094b00 body=94 status=ok
// SIG undefined FUN_142094b00(void)

void FUN_142094b00(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FUN_1416f8340((int)plVar1[2]);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 142094b60 ~TArray<FSpawnGenerator,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FSpawnGenerator,FDefaultAllocator>(void)

void TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 142094bd0 FUN_142094bd0 body=151 status=ok
// SIG undefined FUN_142094bd0(void)

longlong * FUN_142094bd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    iVar3 = (int)param_1[1];
    if (iVar3 != 0) {
      plVar2 = (longlong *)(lVar1 + 0x10);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 7;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      lVar1 = *param_1;
    }
    if (lVar1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 142094c70 FUN_142094c70 body=198 status=ok
// SIG undefined FUN_142094c70(void)

undefined1 * FUN_142094c70(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 0x10);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 142094d40 FUN_142094d40 body=250 status=ok
// SIG undefined FUN_142094d40(void)

longlong FUN_142094d40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0xe0);
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0xd0);
  FUN_142094b00(param_1 + 0xc0);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
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
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142094ef0 FUN_142094ef0 body=51 status=ok
// SIG undefined FUN_142094ef0(void)

void FUN_142094ef0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FName::FName(param_2,&DAT_143f3eda8,1);
  param_2[1] = 0;
  return;
}



// FUNCTION 142094f50 FUN_142094f50 body=36 status=ok
// SIG undefined FUN_142094f50(void)

void FUN_142094f50(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  FUN_142094960(param_2);
  return;
}



// FUNCTION 142094fd0 FUN_142094fd0 body=233 status=ok
// SIG undefined FUN_142094fd0(void)

undefined8 FUN_142094fd0(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 1);
    do {
      *param_2 = puVar3[-1];
      param_2[1] = *puVar3;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar3 + 3);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar3 + 7);
      FString::operator=(param_2 + 0x10,puVar3 + 0xf);
      puVar1 = (undefined8 *)(param_2 + 0x20);
      if (puVar1 != (undefined8 *)(puVar3 + 0x1f)) {
        iVar2 = *(int *)(puVar3 + 0x27);
        _Src = *(void **)(puVar3 + 0x1f);
        *(int *)(param_2 + 0x28) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
        }
      }
      puVar1 = (undefined8 *)(puVar3 + 0x2f);
      puVar3 = puVar3 + 0x38;
      *(undefined8 *)(param_2 + 0x30) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x38;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1420950c0 Copy body=135 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPreviewMeshCollectionEntry>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      puVar1 = puVar1 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142095150 FUN_142095150 body=85 status=ok
// SIG undefined FUN_142095150(void)

void FUN_142095150(void)

{
  if (DAT_146ae4450 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4450 = GetStaticEnum(FUN_142095d10,DAT_146ae4848,L"EASType");
  }
  return;
}



// FUNCTION 1420951b0 FUN_1420951b0 body=85 status=ok
// SIG undefined FUN_1420951b0(void)

void FUN_1420951b0(void)

{
  if (DAT_146ae4480 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4480 = GetStaticEnum(FUN_142095d40,DAT_146ae4848,L"EGFxAlign");
  }
  return;
}



// FUNCTION 142095210 FUN_142095210 body=85 status=ok
// SIG undefined FUN_142095210(void)

void FUN_142095210(void)

{
  if (DAT_146ae4470 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4470 = GetStaticEnum(FUN_142095d70,DAT_146ae4848,L"EGFxRenderTextureMode");
  }
  return;
}



// FUNCTION 142095270 FUN_142095270 body=85 status=ok
// SIG undefined FUN_142095270(void)

void FUN_142095270(void)

{
  if (DAT_146ae4478 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4478 = GetStaticEnum(FUN_142095da0,DAT_146ae4848,L"EGFxScaleMode");
  }
  return;
}



// FUNCTION 1420952d0 FUN_1420952d0 body=85 status=ok
// SIG undefined FUN_1420952d0(void)

void FUN_1420952d0(void)

{
  if (DAT_146ae4468 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4468 = GetStaticEnum(FUN_142095dd0,DAT_146ae4848,L"EGFxTimingMode");
  }
  return;
}



// FUNCTION 142095330 FUN_142095330 body=85 status=ok
// SIG undefined FUN_142095330(void)

void FUN_142095330(void)

{
  if (DAT_146ae4458 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4458 = GetStaticEnum(FUN_142095e00,DAT_146ae4848,L"EGbxGFxMovieGetChildStrategy");
  }
  return;
}



// FUNCTION 142095390 FUN_142095390 body=85 status=ok
// SIG undefined FUN_142095390(void)

void FUN_142095390(void)

{
  if (DAT_146ae4488 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4488 = GetStaticEnum(FUN_142095e30,DAT_146ae4848,L"FlashTextureRescale");
  }
  return;
}



// FUNCTION 1420953f0 FUN_1420953f0 body=85 status=ok
// SIG undefined FUN_1420953f0(void)

void FUN_1420953f0(void)

{
  if (DAT_146ae4460 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    DAT_146ae4460 = GetStaticEnum(FUN_142095e60,DAT_146ae4848,L"GFxHitTestType");
  }
  return;
}



// FUNCTION 142095450 FUN_142095450 body=6 status=ok
// SIG undefined FUN_142095450(void)

undefined8 FUN_142095450(void)

{
  return 0xe5fae55d;
}



// FUNCTION 142095460 FUN_142095460 body=6 status=ok
// SIG undefined FUN_142095460(void)

undefined8 FUN_142095460(void)

{
  return 0x42d19a46;
}



// FUNCTION 142095470 FUN_142095470 body=6 status=ok
// SIG undefined FUN_142095470(void)

undefined8 FUN_142095470(void)

{
  return 0x51d8c35;
}



// FUNCTION 142095480 FUN_142095480 body=6 status=ok
// SIG undefined FUN_142095480(void)

undefined8 FUN_142095480(void)

{
  return 0xacde8a4b;
}


