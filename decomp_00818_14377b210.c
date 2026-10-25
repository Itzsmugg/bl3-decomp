// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14377b210 FUN_14377b210 body=427 status=ok
// SIG undefined FUN_14377b210(void)

void FUN_14377b210(longlong param_1,undefined8 param_2,undefined4 param_3,char *param_4,
                  undefined4 param_5,longlong param_6,int param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_7 == -1) {
    param_7 = *(int *)(param_1 + 0x28);
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),0x18);
  puVar8 = (undefined8 *)0x0;
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar9 = puVar5;
  }
  uVar6 = FUN_143703a50();
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  iVar4 = iVar1 + 1;
  if (((int)uVar3 < iVar4) && ((int)uVar3 < iVar4)) {
    iVar2 = iVar4;
    if (iVar4 < (int)(uVar3 * 2)) {
      iVar2 = uVar3 * 2;
    }
    FUN_14370c310(uVar6,param_1 + 0x20,iVar2,8);
  }
  lVar7 = *(longlong *)(param_1 + 0x20) + (longlong)param_7 * 8;
  FUN_143732890(lVar7 + 8,lVar7,(longlong)(iVar1 - param_7) << 3);
  *(undefined8 **)((longlong)param_7 * 8 + *(longlong *)(param_1 + 0x20)) = puVar9;
  *(int *)(param_1 + 0x28) = iVar4;
  puVar5 = puVar9 + 2;
  *puVar9 = param_2;
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar5 = 0x22222222;
  *(undefined2 *)((longlong)puVar9 + 0xc) = 0;
  if (((param_4 != (char *)0x0) && (*param_4 == '$')) &&
     (puVar9 = puVar8, 0 < *(int *)(param_1 + 0x58))) {
    do {
      iVar4 = hkString::strCmp(param_4 + 1,
                               *(longlong *)((longlong)puVar9 + *(longlong *)(param_1 + 0x50) + 8) +
                               1);
      if (iVar4 == 0) {
        param_4 = (char *)FUN_1437151f0(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x50) +
                                         (longlong)(int)puVar8 * 0x10));
        break;
      }
      uVar3 = (int)puVar8 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar3;
      puVar9 = puVar9 + 2;
    } while ((int)uVar3 < *(int *)(param_1 + 0x58));
  }
  FUN_14377cce0(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5,param_6,puVar5,param_8);
  if (param_6 != 0) {
    uVar6 = FUN_14377c230(*puVar5,*(undefined8 *)(param_1 + 0x18),0x4000,param_6);
    *puVar5 = uVar6;
  }
  return;
}



// FUNCTION 14377b3c0 FUN_14377b3c0 body=297 status=ok
// SIG undefined FUN_14377b3c0(void)

void FUN_14377b3c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),0x18);
  puVar7 = (undefined8 *)0x0;
  uVar8 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar7 = puVar5;
  }
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1 + 0x20,8);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8) = puVar7;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *puVar7 = param_2;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined2 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[2] = 0x22222222;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(lVar1 + 0xa0);
  uVar2 = *(undefined8 *)(lVar1 + 0x90);
  uVar3 = *(undefined8 *)(lVar1 + 0x98);
  uVar4 = *(undefined8 *)(lVar1 + 0x88);
  FUN_14377a950(&local_58);
  local_58 = lVar1;
  local_50 = lVar1;
  local_48 = uVar4;
  local_40 = uVar3;
  local_38 = uVar2;
  local_30 = uVar6;
  puVar5 = (undefined8 *)FUN_143714490(param_3,1);
  if (puVar5 != (undefined8 *)0x0) {
    uVar8 = (uint)*puVar5;
  }
  (*(code *)(&DAT_146b842e0)[uVar8 & 0xf])(&local_58,param_3,puVar7 + 2);
  return;
}



// FUNCTION 14377b4f0 FUN_14377b4f0 body=186 status=ok
// SIG undefined FUN_14377b4f0(void)

void FUN_14377b4f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar4 = 0;
    do {
      iVar1 = hkString::strCmp(*(undefined8 *)(lVar4 + 8 + *(longlong *)(param_1 + 0x50)),param_2);
      if (iVar1 == 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x58));
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x50,0x10);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x50) + 8 + (longlong)(*(int *)(param_1 + 0x58) + -1) * 0x10) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)(*(int *)(param_1 + 0x58) + -1) * 0x10)
       = param_3;
  return;
}



// FUNCTION 14377b5b0 FUN_14377b5b0 body=121 status=ok
// SIG undefined FUN_14377b5b0(void)

void FUN_14377b5b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xc0) == (*(uint *)(param_1 + 0xc4) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0xb8),0x20);
  }
  puVar2 = (undefined8 *)((longlong)*(int *)(param_1 + 0xc0) * 0x20 + *(longlong *)(param_1 + 0xb8))
  ;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  puVar2[2] = param_2;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  puVar2[3] = param_3;
  return;
}



// FUNCTION 14377b630 FUN_14377b630 body=58 status=ok
// SIG undefined FUN_14377b630(void)

undefined8 FUN_14377b630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = FUN_143703a50();
  }
  FUN_14373d990(param_2,param_3,lVar1);
  return param_2;
}



// FUNCTION 14377b670 FUN_14377b670 body=625 status=ok
// SIG undefined FUN_14377b670(void)

bool FUN_14377b670(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  local_res8 = param_1;
  local_res18 = param_2;
  piVar5 = (int *)FUN_14372adb0(param_1 + 0x130,&local_res10,&local_res18,&local_res20);
  if (-1 < *piVar5) {
    return 1 < (int)local_res20 - 1U;
  }
  local_res10 = 2;
  local_res18 = param_2;
  uVar6 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0x130,uVar6,&local_res18,&local_res10);
  puVar7 = (undefined8 *)FUN_143714490(param_2,1);
  bVar1 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar7;
  }
  lVar11 = 0;
  if ((bVar1 & 0xf) == 7) {
    lVar11 = param_2;
  }
  if (lVar11 == 0) {
    puVar7 = (undefined8 *)FUN_143714490(param_2,1);
    bVar1 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar7;
    }
    lVar11 = 0;
    if ((bVar1 & 0xf) == 8) {
      lVar11 = param_2;
    }
    if (lVar11 == 0) {
      puVar7 = (undefined8 *)FUN_143714490(param_2,1);
      bVar1 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar7;
      }
      lVar11 = 0;
      if ((bVar1 & 0xf) == 6) {
        lVar11 = param_2;
      }
      if (lVar11 == 0) goto LAB_14377b79e;
    }
    plVar9 = (longlong *)FUN_143714420(lVar11,2);
    if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
      puVar7 = (undefined8 *)FUN_143714420(lVar11,2);
      lVar12 = local_res8;
      if (puVar7 == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar7;
      }
      cVar2 = FUN_14377b670(local_res8,uVar6);
      if (cVar2 != '\0') goto LAB_14377b8aa;
    }
  }
  else {
    uVar3 = FUN_143715430();
    uVar6 = FUN_1437151f0(param_2);
    lVar12 = local_res8;
    lVar8 = FUN_14371e450(*(undefined8 *)(local_res8 + 0x100),uVar6,uVar3);
    if ((lVar8 != 0) ||
       ((*(longlong *)(param_2 + 8) != 0 && (cVar2 = FUN_14377b670(lVar12), cVar2 != '\0')))) {
LAB_14377b8aa:
      local_res8 = 0;
      local_res10 = param_2;
      uVar6 = FUN_143703a50();
      FUN_14372d6e0(lVar12 + 0x130,uVar6,&local_res10,&local_res8);
      return true;
    }
    iVar10 = 0;
    iVar4 = FUN_143715240(lVar11);
    if (0 < iVar4) {
      do {
        FUN_143714e90(lVar11,&local_res10,iVar10);
        cVar2 = FUN_14377b670(local_res8,local_res10);
        if (cVar2 != '\0') {
          local_res18 = 0;
          local_res20 = param_2;
          uVar6 = FUN_143703a50();
          FUN_14372d6e0(local_res8 + 0x130,uVar6,&local_res20,&local_res18);
          return true;
        }
        iVar10 = iVar10 + 1;
        iVar4 = FUN_143715240(lVar11);
      } while (iVar10 < iVar4);
    }
  }
LAB_14377b79e:
  local_res10 = 1;
  local_res18 = param_2;
  uVar6 = FUN_143703a50();
  FUN_14372d6e0(local_res8 + 0x130,uVar6,&local_res18,&local_res10);
  return false;
}



// FUNCTION 14377b8f0 FUN_14377b8f0 body=666 status=ok
// SIG undefined FUN_14377b8f0(void)

void FUN_14377b8f0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 local_48 [32];
  
  FUN_14377aba0(local_48);
  uVar12 = 0;
  uVar14 = uVar12;
  if (0 < *(int *)(param_2 + 0x20)) {
    do {
      piVar9 = (int *)(*(longlong *)(param_2 + 0x18) + uVar12);
      iVar1 = *piVar9;
      if ((iVar1 == 8) && (lVar3 = *(longlong *)(piVar9 + 2), lVar3 != 0)) {
        if (*(longlong *)(lVar3 + 8) != 0) {
          uVar5 = FUN_14377ef20(local_48);
          lVar4 = param_1[3];
          uVar6 = FUN_143703a50();
          if (*(uint *)(lVar4 + 0xd0) == (*(uint *)(lVar4 + 0xd4) & 0x3fffffff)) {
            FUN_14370c460(uVar6,(longlong *)(lVar4 + 200),0x20);
          }
          puVar10 = (undefined8 *)
                    ((longlong)*(int *)(lVar4 + 0xd0) * 0x20 + *(longlong *)(lVar4 + 200));
          *(int *)(lVar4 + 0xd0) = *(int *)(lVar4 + 0xd0) + 1;
          *puVar10 = *(undefined8 *)(lVar3 + 8);
          *(undefined4 *)(puVar10 + 1) = uVar5;
          puVar10[2] = param_1;
          puVar10[3] = 0;
        }
      }
      else if ((iVar1 == 1) &&
              (puVar10 = *(undefined8 **)(piVar9 + 2), puVar10 != (undefined8 *)0x0)) {
        uVar6 = puVar10[2];
        uVar2 = *(undefined4 *)(puVar10 + 1);
        uVar5 = *(undefined4 *)(puVar10 + 3);
        uVar11 = *puVar10;
        uVar15 = 0;
LAB_14377bae3:
        FUN_14377b210(param_1,uVar11,uVar2,uVar6,uVar5,0,uVar15,local_48);
      }
      else if ((iVar1 == 10) &&
              (puVar10 = *(undefined8 **)(piVar9 + 2), puVar10 != (undefined8 *)0x0)) {
        FUN_14377b3c0(param_1,*puVar10,puVar10[1]);
      }
      else if ((iVar1 == 2) && (*(undefined8 **)(piVar9 + 2) != (undefined8 *)0x0)) {
        puVar10 = (undefined8 *)FUN_14377ed00(param_1,**(undefined8 **)(piVar9 + 2));
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
        }
      }
      else if ((iVar1 == 0xb) && (*(undefined8 **)(piVar9 + 2) != (undefined8 *)0x0)) {
        puVar10 = (undefined8 *)FUN_14377ed00(param_1,**(undefined8 **)(piVar9 + 2));
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
        }
      }
      else if ((iVar1 != 4) || (*(longlong *)(piVar9 + 2) == 0)) {
        if ((iVar1 == 3) && (puVar10 = *(undefined8 **)(piVar9 + 2), puVar10 != (undefined8 *)0x0))
        {
          puVar7 = (undefined8 *)FUN_14377ed00(param_1,*puVar10);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = puVar10[1];
          }
        }
        else if ((iVar1 == 0xc) &&
                (puVar10 = *(undefined8 **)(piVar9 + 2), puVar10 != (undefined8 *)0x0)) {
          puVar7 = (undefined8 *)FUN_14377ed00(param_1,*puVar10);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
          }
          uVar6 = puVar10[4];
          uVar2 = *(undefined4 *)((longlong)puVar10 + 0x1c);
          uVar11 = *puVar10;
          uVar5 = *(undefined4 *)(puVar10 + 5);
          uVar15 = 0xffffffff;
          goto LAB_14377bae3;
        }
      }
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x10;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < *(int *)(param_2 + 0x20));
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != -1) {
    plVar8 = (longlong *)FUN_1437143d0(*param_1,0x10);
    *plVar8 = (longlong)iVar1;
    uVar6 = *(undefined8 *)(param_2 + 8);
    puVar10 = (undefined8 *)FUN_1437143d0(*param_1,8);
    *puVar10 = uVar6;
    FUN_14373bf70(local_48);
    return;
  }
  puVar10 = (undefined8 *)FUN_1437143d0(*param_1,0x10);
  *puVar10 = 0x80000000;
  FUN_14373bf70(local_48);
  return;
}



// FUNCTION 14377bb90 FUN_14377bb90 body=1188 status=ok
// SIG undefined FUN_14377bb90(void)

void FUN_14377bb90(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  
  FUN_14377aba0(local_e8);
  iVar4 = *(int *)(param_2 + 0x20) + -1;
  lVar15 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar14 = lVar15 << 4;
    do {
      piVar10 = (int *)(*(longlong *)(param_2 + 0x18) + lVar14);
      iVar4 = *piVar10;
      if ((iVar4 == 8) && (plVar9 = *(longlong **)(piVar10 + 2), plVar9 != (longlong *)0x0)) {
        if (*plVar9 != 0) {
          uVar5 = FUN_14377ef20(local_e8);
          lVar13 = param_1[3];
          uVar7 = FUN_143703a50();
          if (*(uint *)(lVar13 + 0xd0) == (*(uint *)(lVar13 + 0xd4) & 0x3fffffff)) {
            FUN_14370c460(uVar7,(longlong *)(lVar13 + 200));
          }
          plVar11 = (longlong *)
                    ((longlong)*(int *)(lVar13 + 0xd0) * 0x20 + *(longlong *)(lVar13 + 200));
          *(int *)(lVar13 + 0xd0) = *(int *)(lVar13 + 0xd0) + 1;
          *plVar11 = *plVar9;
          *(undefined4 *)(plVar11 + 1) = uVar5;
          plVar11[2] = (longlong)param_1;
          plVar11[3] = 0;
        }
      }
      else if ((iVar4 == 1) && (puVar8 = *(undefined8 **)(piVar10 + 2), puVar8 != (undefined8 *)0x0)
              ) {
        iVar4 = 0;
        lVar13 = 0;
        if (0 < *(int *)(param_1 + 5)) {
          do {
            iVar6 = hkString::strCmp(*puVar8,**(undefined8 **)(param_1[4] + lVar13 * 8));
            if (iVar6 == 0) {
              FUN_143745310(&local_c8,&DAT_145b8f480);
              FUN_143745710(&local_c8,*puVar8,0xffffffff);
              FUN_143716620(local_res10,local_c8);
              lVar3 = param_1[3];
              uVar7 = FUN_143703a50();
              if (*(uint *)(lVar3 + 0x70) == (*(uint *)(lVar3 + 0x74) & 0x3fffffff)) {
                FUN_14370c460(uVar7,lVar3 + 0x68);
              }
              lVar1 = *(longlong *)(lVar3 + 0x68) + (longlong)*(int *)(lVar3 + 0x70) * 8;
              if (lVar1 != 0) {
                FUN_1437165f0(lVar1,local_res10);
              }
              *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + 1;
              FUN_143716650(local_res10);
              **(ulonglong **)(param_1[4] + lVar13 * 8) =
                   *(ulonglong *)
                    (*(longlong *)(param_1[3] + 0x68) +
                    (longlong)(*(int *)(param_1[3] + 0x70) + -1) * 8) & 0xfffffffffffffffe;
              local_c0 = 0;
              if (-1 < (int)local_bc) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
              }
              break;
            }
            iVar4 = iVar4 + 1;
            lVar13 = lVar13 + 1;
          } while (iVar4 < *(int *)(param_1 + 5));
        }
      }
      else if ((iVar4 == 2) && (puVar8 = *(undefined8 **)(piVar10 + 2), puVar8 != (undefined8 *)0x0)
              ) {
        uVar7 = puVar8[2];
        uVar2 = *(undefined4 *)(puVar8 + 1);
        uVar5 = *(undefined4 *)(puVar8 + 3);
        uVar12 = *puVar8;
LAB_14377bfa1:
        FUN_14377b210(param_1,uVar12,uVar2,uVar7,uVar5,0,0,local_e8);
      }
      else if ((iVar4 == 0xb) && (*(undefined8 **)(piVar10 + 2) != (undefined8 *)0x0)) {
        FUN_14377b3c0(param_1,**(undefined8 **)(piVar10 + 2));
      }
      else if ((iVar4 != 4) || (*(longlong *)(piVar10 + 2) == 0)) {
        if ((iVar4 == 3) && (puVar8 = *(undefined8 **)(piVar10 + 2), puVar8 != (undefined8 *)0x0)) {
          iVar4 = 0;
          lVar13 = 0;
          if (0 < *(int *)(param_1 + 5)) {
            do {
              iVar6 = hkString::strCmp(puVar8[1],**(undefined8 **)(param_1[4] + lVar13 * 8));
              if (iVar6 == 0) {
                **(undefined8 **)(param_1[4] + lVar13 * 8) = *puVar8;
                break;
              }
              iVar4 = iVar4 + 1;
              lVar13 = lVar13 + 1;
            } while (iVar4 < *(int *)(param_1 + 5));
          }
        }
        else if ((iVar4 == 0xc) &&
                (puVar8 = *(undefined8 **)(piVar10 + 2), puVar8 != (undefined8 *)0x0)) {
          iVar4 = 0;
          lVar13 = 0;
          if (0 < *(int *)(param_1 + 5)) {
            do {
              iVar6 = hkString::strCmp(*puVar8,**(undefined8 **)(param_1[4] + lVar13 * 8));
              if (iVar6 == 0) {
                FUN_143745310(&local_c8,&DAT_145b8f480);
                FUN_143745710(&local_c8,*puVar8,0xffffffff);
                FUN_143716620(local_res18,local_c8);
                lVar3 = param_1[3];
                uVar7 = FUN_143703a50();
                if (*(uint *)(lVar3 + 0x70) == (*(uint *)(lVar3 + 0x74) & 0x3fffffff)) {
                  FUN_14370c460(uVar7,lVar3 + 0x68,8);
                }
                lVar1 = *(longlong *)(lVar3 + 0x68) + (longlong)*(int *)(lVar3 + 0x70) * 8;
                if (lVar1 != 0) {
                  FUN_1437165f0(lVar1,local_res18);
                }
                *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + 1;
                FUN_143716650(local_res18);
                **(ulonglong **)(param_1[4] + lVar13 * 8) =
                     *(ulonglong *)
                      (*(longlong *)(param_1[3] + 0x68) +
                      (longlong)(*(int *)(param_1[3] + 0x70) + -1) * 8) & 0xfffffffffffffffe;
                local_c0 = 0;
                if (-1 < (int)local_bc) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
                }
                break;
              }
              iVar4 = iVar4 + 1;
              lVar13 = lVar13 + 1;
            } while (iVar4 < *(int *)(param_1 + 5));
          }
          uVar7 = puVar8[2];
          uVar2 = *(undefined4 *)(puVar8 + 1);
          uVar12 = *puVar8;
          uVar5 = *(undefined4 *)(puVar8 + 3);
          goto LAB_14377bfa1;
        }
      }
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == -1) {
    puVar8 = (undefined8 *)FUN_1437143d0(*param_1,0x10);
    *puVar8 = 0x80000000;
  }
  else {
    plVar9 = (longlong *)FUN_1437143d0(*param_1,0x10);
    *plVar9 = (longlong)iVar4;
  }
  FUN_14373bf70(local_e8);
  return;
}



// FUNCTION 14377c040 FUN_14377c040 body=51 status=ok
// SIG undefined FUN_14377c040(void)

void FUN_14377c040(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  uVar1 = FUN_143735ac0(local_18);
  lVar2 = FUN_143736480(uVar1);
  *(undefined4 *)(lVar2 + 0xc) = 8;
  FUN_143735e50(param_1,lVar2);
  return;
}



// FUNCTION 14377c080 FUN_14377c080 body=401 status=ok
// SIG undefined FUN_14377c080(void)

undefined * FUN_14377c080(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143714910(param_2,&DAT_1467e5ab0);
  if (cVar1 != '\0') {
    return &DAT_1467e5ab0;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467e05b0);
  if (cVar1 != '\0') {
    return &DAT_1467e05b0;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467dcd10);
  if (cVar1 != '\0') {
    return &DAT_1467dcd10;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467e73f0);
  if (cVar1 != '\0') {
    return &DAT_1467e73f0;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467dce10);
  if (cVar1 != '\0') {
    return &DAT_1467dce10;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467e5480);
  if (cVar1 != '\0') {
    return &DAT_1467e5480;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467e2d70);
  if (cVar1 != '\0') {
    return &DAT_1467e2d70;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467ded00);
  if (cVar1 != '\0') {
    return &DAT_1467ded00;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467ed2b0);
  if (cVar1 != '\0') {
    return &DAT_1467ed2b0;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467e31f0);
  if (cVar1 != '\0') {
    return &DAT_1467e31f0;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467ee210);
  if (cVar1 != '\0') {
    return &DAT_1467ee210;
  }
  cVar1 = FUN_143714910(param_2,&DAT_1467e0e10);
  if (cVar1 != '\0') {
    return &DAT_1467e0e10;
  }
  return (undefined *)0x0;
}



// FUNCTION 14377c220 clear body=5 status=ok
// SIG undefined clear(void)

void hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((longlong)param_1 + 0xc) + 1) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined8 *)(lVar1 + *param_1) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0x18;
    } while (iVar2 < *(int *)((longlong)param_1 + 0xc) + 1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14377c230 FUN_14377c230 body=211 status=ok
// SIG undefined FUN_14377c230(void)

ulonglong * FUN_14377c230(ulonglong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  lVar6 = *param_2;
  uVar2 = FUN_14372d660((longlong)param_3 | uVar1);
  puVar3 = (ulonglong *)(**(code **)(lVar6 + 8))(param_2,uVar2);
  FUN_14370c700(puVar3,param_1,0x10);
  lVar6 = 0x20;
  *puVar3 = (longlong)param_3 | uVar1;
  uVar5 = 1;
  do {
    if ((*param_1 & (longlong)(int)uVar5) != 0) {
      puVar4 = (undefined8 *)FUN_1437143d0(param_1,uVar5);
      if (puVar4 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar4;
      }
      puVar4 = (undefined8 *)FUN_1437143d0(puVar3,uVar5);
      *puVar4 = uVar7;
    }
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar4 = (undefined8 *)FUN_1437143d0(puVar3,param_3);
  *puVar4 = param_4;
  return puVar3;
}



// FUNCTION 14377c310 FUN_14377c310 body=2507 status=ok
// SIG undefined FUN_14377c310(void)

longlong FUN_14377c310(longlong *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong local_res10;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 *local_3c8;
  uint local_3c0;
  uint local_3bc;
  undefined8 *local_3b8;
  uint local_3b0;
  uint local_3ac;
  longlong local_3a8;
  uint local_3a0;
  uint local_39c;
  undefined8 local_398;
  longlong local_390;
  ulonglong local_388;
  ulonglong local_380;
  longlong *local_378;
  undefined1 *local_368;
  undefined4 local_360;
  uint local_35c;
  undefined1 local_358 [128];
  undefined8 local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined1 local_248 [64];
  undefined1 local_208 [96];
  ulonglong local_1a8;
  longlong local_180;
  undefined8 local_110;
  longlong *local_f0;
  
  local_368 = local_358;
  local_35c = 0x80000080;
  local_380 = 0;
  local_360 = 1;
  local_358[0] = 0;
  if (param_3 != 0xffffffff) {
    local_380 = (ulonglong)param_3;
  }
  local_res20 = param_4;
  if (param_2 == 0) {
    uVar4 = FUN_143714fc0(param_4,&local_368,0,0);
    FUN_1437455a0(&local_368,uVar4);
    plVar13 = param_1 + 0xd;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar13,8);
    }
    puVar6 = (undefined8 *)(*plVar13 + (longlong)(int)param_1[0xe] * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
    }
    lVar5 = param_1[0xe];
    *(int *)(param_1 + 0xe) = (int)lVar5 + 1;
    FUN_143716690(*plVar13 + (longlong)(int)lVar5 * 8,&local_368);
    uVar1 = *(ulonglong *)(*plVar13 + (longlong)((int)param_1[0xe] + -1) * 8);
    iVar2 = FUN_143715430(local_res20);
    local_380 = FUN_14373c240(param_1 + 0x23,uVar1 & 0xfffffffffffffffe,(longlong)iVar2);
    iVar2 = (int)local_380;
  }
  else {
    FUN_1437455a0(&local_368);
    plVar13 = param_1 + 0xd;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar13,8);
    }
    puVar6 = (undefined8 *)(*plVar13 + (longlong)(int)param_1[0xe] * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
    }
    lVar5 = param_1[0xe];
    *(int *)(param_1 + 0xe) = (int)lVar5 + 1;
    FUN_1437166c0(*plVar13 + (longlong)(int)lVar5 * 8,param_2);
    lVar5 = (**(code **)(*(longlong *)param_1[0x21] + 0x18))((longlong *)param_1[0x21],param_2);
    if (lVar5 != 0) {
      uVar4 = FUN_1437151f0(lVar5);
      iVar2 = hkString::strCmp(uVar4,"hkHalf16");
      if (iVar2 != 0) {
        uVar4 = FUN_1437151f0(lVar5);
        iVar2 = hkString::strCmp(uVar4,"hkPropertyBag");
        if (iVar2 != 0) {
          puVar6 = (undefined8 *)FUN_143714490(lVar5,1);
          if (puVar6 == (undefined8 *)0x0) {
            bVar11 = 0;
          }
          else {
            bVar11 = (byte)*puVar6;
          }
          lVar8 = 0;
          if ((bVar11 & 0xf) == 7) {
            lVar8 = lVar5;
          }
          if (lVar8 == 0) {
            local_res10 = 0;
            goto LAB_14377cc91;
          }
        }
      }
    }
    iVar2 = (int)local_380;
  }
  plVar13 = param_1 + 0xd;
  local_res10 = FUN_14377edb0(param_1,local_368,iVar2);
  if (local_res10 == 0) {
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar13,8);
    }
    puVar6 = (undefined8 *)(*plVar13 + (longlong)(int)param_1[0xe] * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
    }
    lVar5 = param_1[0xe];
    *(int *)(param_1 + 0xe) = (int)lVar5 + 1;
    FUN_143716690(*plVar13 + (longlong)(int)lVar5 * 8,&local_368);
    local_388 = *(ulonglong *)(*plVar13 + (longlong)((int)param_1[0xe] + -1) * 8) &
                0xfffffffffffffffe;
    local_3ac = 0x80000000;
    local_3b8 = (undefined8 *)0x0;
    local_3b0 = 0;
    uVar4 = FUN_143703a50();
    if (local_3b0 == (local_3ac & 0x3fffffff)) {
      FUN_14370c460(uVar4,&local_3b8,8);
    }
    local_3b8[(int)local_3b0] = local_388;
    local_3b0 = local_3b0 + 1;
    local_3c8 = (undefined8 *)0x0;
    local_3c0 = 0;
    local_3bc = 0x80000000;
    local_398 = ALevelSequenceActor::RetrieveBindingOverrides(param_1[0x20],local_388,iVar2);
    uVar4 = FUN_143703a50();
    if (local_3c0 == (local_3bc & 0x3fffffff)) {
      FUN_14370c460(uVar4,&local_3c8,8);
    }
    local_3c8[(int)local_3c0] = local_398;
    local_3c0 = local_3c0 + 1;
    FUN_143737060(local_208);
    FUN_143738110(local_208,param_1);
    FUN_143745310(&local_2d8,*local_3b8);
    FUN_143716620(&local_res10,local_2d8);
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar13,8);
    }
    lVar5 = *plVar13 + (longlong)(int)param_1[0xe] * 8;
    if (lVar5 != 0) {
      FUN_1437165f0(lVar5,&local_res10);
    }
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    FUN_143716650(&local_res10);
    FUN_143737ab0(local_208,
                  *(ulonglong *)(*plVar13 + (longlong)((int)param_1[0xe] + -1) * 8) &
                  0xfffffffffffffffe,0);
    local_f0 = param_1 + 0xf;
    local_1a8 = local_1a8 | 0x400010;
    local_180 = (longlong)iVar2;
    iVar3 = FUN_143746140(&local_368,0x3c,0,0x7fffffff);
    if (-1 < iVar3) {
      local_1a8 = local_1a8 | 0x40000;
      local_110 = 0;
    }
    piVar7 = (int *)FUN_143737960(local_208,local_res18,param_1,&local_390);
    bVar11 = 0;
    if (*piVar7 < 0) {
      if (DAT_146b84268 != '\0') {
        FUN_14373a730(local_248,&DAT_146b84260,1);
        lVar5 = FUN_14373bbd0(local_248,"Failed to allocate type from builder",&DAT_145b909f0,0);
        *(char **)(lVar5 + 0x20) = "Reflect\\Version\\hkModifiableTypeSet.cpp";
        *(undefined8 *)(lVar5 + 0x28) = 0x68b;
        FUN_14373a950(local_248);
      }
      local_2d0 = 0;
      if (-1 < (int)local_2cc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_2d8,1,local_2cc & 0x3fffffff);
      }
      local_2d8 = 0;
      local_2cc = 0x80000000;
      FUN_143737160(local_208);
      local_res10 = 0;
    }
    else {
      local_res10 = local_390;
      puVar6 = (undefined8 *)FUN_143714490(local_390,1);
      if (puVar6 != (undefined8 *)0x0) {
        bVar11 = (byte)*puVar6;
      }
      local_2d0 = 0;
      lVar5 = 0;
      if ((bVar11 & 0xf) == 7) {
        lVar5 = local_res10;
      }
      if (-1 < (int)local_2cc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_2d8,1,local_2cc & 0x3fffffff);
      }
      local_2d8 = 0;
      local_2cc = 0x80000000;
      FUN_143737160(local_208);
      lVar8 = (**(code **)(*param_1 + 8))(param_1,0x78);
      if (lVar8 == 0) {
        local_res10 = 0;
      }
      else {
        local_res10 = FUN_14377abe0(lVar8,param_1,lVar5,iVar2,1,local_res20,local_398);
      }
      local_res18[0] = (int)param_1[10];
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 10) == (*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1 + 9,8);
      }
      *(longlong *)(param_1[9] + (longlong)(int)param_1[10] * 8) = local_res10;
      local_390 = (longlong)local_res18[0];
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      local_398 = *local_3c8;
      uVar4 = FUN_143703a50();
      local_378 = param_1 + 0xb;
      FUN_14372d6e0(local_378,uVar4,&local_398,&local_390);
      uVar1 = local_388;
      lVar5 = FUN_14371e1d0(param_1[0x20],local_388,iVar2);
      local_39c = 0x80000000;
      local_3a8 = 0;
      local_3a0 = 0;
      if (lVar5 != 0) goto LAB_14377c9e0;
      uVar4 = FUN_14371e450(param_1[0x20],uVar1,local_380);
      lVar5 = FUN_14377f940(uVar4);
      while (lVar5 != 0) {
LAB_14377c9e0:
        uVar4 = FUN_143703a50();
        if (local_3a0 == (local_39c & 0x3fffffff)) {
          FUN_14370c460(uVar4,&local_3a8,8);
        }
        *(longlong *)(local_3a8 + (longlong)(int)local_3a0 * 8) = lVar5;
        local_3a0 = local_3a0 + 1;
        iVar2 = *(int *)(lVar5 + 0x20) + -1;
        lVar8 = (longlong)iVar2;
        if (-1 < iVar2) {
          lVar12 = lVar8 << 4;
          do {
            if (((*(int *)(lVar12 + *(longlong *)(lVar5 + 0x18)) == 7) &&
                (puVar6 = *(undefined8 **)(lVar12 + 8 + *(longlong *)(lVar5 + 0x18)),
                puVar6 != (undefined8 *)0x0)) &&
               (lVar9 = FUN_14377c310(param_1,*puVar6,*(undefined4 *)(puVar6 + 1),0), lVar9 == 0)) {
              local_res10 = 0;
              goto LAB_14377cbe3;
            }
            lVar12 = lVar12 + -0x10;
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
        if (((*(longlong *)(lVar5 + 8) != 0) && (local_388 != 0)) &&
           (iVar2 = hkString::strCmp(*(longlong *)(lVar5 + 8),local_388), iVar2 != 0)) {
          uVar1 = *(ulonglong *)(lVar5 + 8);
          local_388 = uVar1;
          uVar4 = FUN_143703a50();
          if (local_3b0 == (local_3ac & 0x3fffffff)) {
            FUN_14370c460(uVar4,&local_3b8,8);
          }
          local_3b8[(int)local_3b0] = uVar1;
          local_3b0 = local_3b0 + 1;
        }
        if (*(longlong *)(lVar5 + 8) != 0) {
          uVar4 = ALevelSequenceActor::RetrieveBindingOverrides
                            (param_1[0x20],*(longlong *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0x14));
          uVar10 = FUN_143703a50();
          if (local_3c0 == (local_3bc & 0x3fffffff)) {
            FUN_14370c460(uVar10,&local_3c8,8);
          }
          local_3c8[(int)local_3c0] = uVar4;
          local_3c0 = local_3c0 + 1;
        }
        uVar4 = FUN_14371e450(param_1[0x20],*(undefined8 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0x14)
                             );
        lVar5 = FUN_14377f940(uVar4);
      }
      iVar2 = 0;
      if (0 < (int)local_3c0) {
        lVar8 = (longlong)local_res18[0];
        lVar5 = 0;
        do {
          local_398 = *(undefined8 *)((longlong)local_3c8 + lVar5);
          local_390 = lVar8;
          uVar4 = FUN_143703a50();
          FUN_14372d6e0(local_378,uVar4,&local_398,&local_390);
          iVar2 = iVar2 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar2 < (int)local_3c0);
      }
      iVar2 = 0;
      if (0 < (int)local_3a0) {
        lVar5 = 0;
        do {
          FUN_14377b8f0(local_res10,*(undefined8 *)(local_3a8 + lVar5));
          iVar2 = iVar2 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar2 < (int)local_3a0);
      }
LAB_14377cbe3:
      uVar4 = FUN_143703a50();
      local_3a0 = 0;
      if (-1 < (int)local_39c) {
        FUN_143702e10(uVar4,local_3a8,8,local_39c & 0x3fffffff);
      }
      local_3a8 = 0;
      local_39c = 0x80000000;
    }
    uVar4 = FUN_143703a50();
    local_3c0 = 0;
    if (-1 < (int)local_3bc) {
      FUN_143702e10(uVar4,local_3c8,8,local_3bc & 0x3fffffff);
    }
    local_3c8 = (undefined8 *)0x0;
    local_3bc = 0x80000000;
    uVar4 = FUN_143703a50();
    local_3b0 = 0;
    if (-1 < (int)local_3ac) {
      FUN_143702e10(uVar4,local_3b8,8,local_3ac & 0x3fffffff);
    }
    local_3b8 = (undefined8 *)0x0;
    local_3ac = 0x80000000;
  }
LAB_14377cc91:
  local_360 = 0;
  if (-1 < (int)local_35c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_368,1,local_35c & 0x3fffffff);
  }
  return local_res10;
}



// FUNCTION 14377cce0 FUN_14377cce0 body=1345 status=ok
// SIG undefined FUN_14377cce0(void)

void FUN_14377cce0(longlong *param_1,uint param_2,longlong param_3,int param_4,undefined8 param_5,
                  longlong param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined8 in_stack_ffffffffffffffb8;
  uint uVar11;
  undefined8 in_stack_ffffffffffffffc8;
  uint uVar12;
  
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if ((param_2 & 0x10) != 0) {
    lVar5 = param_1[0x12];
    lVar3 = (**(code **)(*param_1 + 8))(param_1,0x40);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = FUN_1437369d0(lVar3,0,0x18,8,lVar5,"hkArray",(ulonglong)uVar12 << 0x20);
    }
    FUN_14377cce0(param_1,param_2 & 0xffffffef,param_3,0,0,lVar4 + 0x18,param_7);
    FUN_14377f7b0(param_6,lVar4);
    return;
  }
  if ((param_2 & 0x20) == 0) {
    switch(param_2) {
    case 1:
      FUN_14377f7b0(param_6,&DAT_1467f0560);
      return;
    case 2:
      FUN_14377f7b0(param_6,&DAT_1467f0140);
      return;
    case 3:
      FUN_14377f7b0(param_6,&DAT_1467f0380);
      return;
    case 4:
      FUN_14377f7b0(param_6,&DAT_1467e5ab0);
      return;
    case 5:
      FUN_14377f7b0(param_6,&DAT_1467f6e10);
      return;
    case 6:
      FUN_14377f7b0(param_6,&DAT_1467dcd10);
      return;
    case 7:
      FUN_14377f7b0(param_6,&DAT_1467dce10);
      return;
    case 8:
      goto switchD_14377cea7_caseD_8;
    case 9:
      if (param_3 != 0) {
        uVar1 = FUN_14377ef20(param_7,param_3);
        puVar6 = (undefined8 *)FUN_14377edb0(param_1,param_3,uVar1);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_14377f7b0(param_6,0x22222222);
          uVar7 = FUN_143703a50();
          if (*(uint *)(param_1 + 0x18) == (*(uint *)((longlong)param_1 + 0xc4) & 0x3fffffff)) {
            FUN_14370c460(uVar7,param_1 + 0x17,0x20);
          }
          plVar9 = (longlong *)((longlong)(int)param_1[0x18] * 0x20 + param_1[0x17]);
          *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
          *(undefined4 *)(plVar9 + 1) = uVar1;
          plVar9[2] = 0;
          *plVar9 = param_3;
          plVar9[3] = param_6;
          return;
        }
        FUN_14377f7b0(param_6,*puVar6);
        return;
      }
    case 0:
      FUN_14377f7b0(param_6,&DAT_1467f0048);
      return;
    case 10:
      FUN_14377f7b0(param_6,&DAT_1467f04a0);
      return;
    case 0xb:
      FUN_14377e210(param_1,param_6,param_3,param_7);
    default:
      return;
    }
  }
  lVar5 = (**(code **)(*param_1 + 8))(param_1,0x68);
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = FUN_143736dd0(lVar5,0,param_4,0,(ulonglong)uVar11 << 0x20,&DAT_146b829b0,&DAT_145b73138,
                          0);
  }
  puVar6 = (undefined8 *)(lVar3 + 0x18);
  FUN_14377cce0(param_1,param_2 & 0xffffffdf,param_3,0,0,puVar6,param_7);
  uVar7 = *puVar6;
  uVar1 = FUN_143714d40(uVar7);
  iVar2 = FUN_1437152f0(uVar7);
  FUN_14374a630(lVar3,iVar2 * param_4,uVar1);
  uVar7 = *puVar6;
  lVar5 = FUN_143715320(lVar3);
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  FUN_14377f7b0(param_6,lVar3);
  return;
switchD_14377cea7_caseD_8:
  lVar5 = (**(code **)(*param_1 + 8))(param_1,0x70);
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = FUN_143736ce0(lVar5,0x22222222,&DAT_145b7313c,0);
  }
  *(longlong *)(lVar3 + 0x20) = param_1[0x14];
  if (param_3 == 0) {
    puVar10 = &DAT_1467f0048;
  }
  else {
    uVar1 = FUN_14377ef20(param_7,param_3);
    puVar6 = (undefined8 *)FUN_14377edb0(param_1,param_3,uVar1);
    if (puVar6 == (undefined8 *)0x0) {
      plVar9 = param_1 + 0x17;
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x18) == (*(uint *)((longlong)param_1 + 0xc4) & 0x3fffffff)) {
        FUN_14370c460(uVar7,plVar9,0x20);
      }
      plVar8 = (longlong *)((longlong)(int)param_1[0x18] * 0x20 + *plVar9);
      *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
      *(undefined4 *)(plVar8 + 1) = uVar1;
      plVar8[3] = lVar3 + 0x18;
      *plVar8 = param_3;
      plVar8[2] = 0;
      lVar5 = FUN_143715320(lVar3);
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x18) == (*(uint *)((longlong)param_1 + 0xc4) & 0x3fffffff)) {
        FUN_14370c460(uVar7,plVar9,0x20);
      }
      plVar9 = (longlong *)((longlong)(int)param_1[0x18] * 0x20 + *plVar9);
      *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
      *(undefined4 *)(plVar9 + 1) = uVar1;
      plVar9[3] = lVar5 + 0x10;
      *plVar9 = param_3;
      plVar9[2] = 0;
      FUN_14377f7b0(param_6,lVar3);
      return;
    }
    puVar10 = (undefined *)*puVar6;
  }
  *(undefined **)(lVar3 + 0x18) = puVar10;
  lVar5 = FUN_143715320(lVar3);
  *(undefined **)(lVar5 + 0x10) = puVar10;
  FUN_14377f7b0(param_6,lVar3);
  return;
}



// FUNCTION 14377d260 FUN_14377d260 body=4004 status=ok
// SIG undefined FUN_14377d260(void)

longlong * FUN_14377d260(longlong *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *local_res10;
  uint local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_fffffffffffffb48;
  undefined4 uVar17;
  int local_498 [2];
  longlong *local_490;
  longlong local_488;
  uint local_480;
  uint local_47c;
  undefined8 *local_478;
  uint local_470;
  uint local_46c;
  longlong *local_468;
  longlong *local_460;
  longlong local_458;
  uint local_450;
  uint local_44c;
  longlong *local_448;
  longlong *local_440;
  longlong *local_438;
  longlong local_430 [2];
  longlong *local_420;
  longlong *local_418;
  undefined8 local_410;
  longlong local_408;
  longlong *plStack_400;
  undefined1 local_3f8 [64];
  undefined1 *local_3b8;
  undefined4 local_3b0;
  uint local_3ac;
  undefined1 local_3a8 [128];
  undefined8 local_328;
  undefined4 local_320;
  uint local_31c;
  undefined1 *local_298;
  undefined4 local_290;
  int local_28c;
  undefined1 local_288 [128];
  undefined1 local_208 [96];
  ulonglong local_1a8;
  longlong local_180;
  undefined8 local_110;
  longlong *local_f0;
  
  local_3b8 = local_3a8;
  local_3ac = 0x80000080;
  local_3b0 = 1;
  local_3a8[0] = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_2 == (longlong *)0x0) {
    local_res10 = (longlong *)FUN_143714fc0(param_4,&local_3b8,0,0);
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0xd,8);
    }
    puVar10 = (undefined8 *)(param_1[0xd] + (longlong)(int)param_1[0xe] * 8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
    }
    lVar4 = param_1[0xe];
    *(int *)(param_1 + 0xe) = (int)lVar4 + 1;
    FUN_1437166c0(param_1[0xd] + (longlong)(int)lVar4 * 8,local_res10);
    uVar1 = *(ulonglong *)(param_1[0xd] + (longlong)((int)param_1[0xe] + -1) * 8);
    iVar2 = FUN_143715430(local_res20);
    local_490 = (longlong *)FUN_14373c240(param_1 + 0x23,uVar1 & 0xfffffffffffffffe,(longlong)iVar2)
    ;
  }
  else {
    FUN_1437455a0(&local_3b8);
    plVar16 = param_1 + 0xd;
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar3,plVar16,8);
    }
    puVar10 = (undefined8 *)(*plVar16 + (longlong)(int)param_1[0xe] * 8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
    }
    lVar4 = param_1[0xe];
    *(int *)(param_1 + 0xe) = (int)lVar4 + 1;
    FUN_1437166c0(*plVar16 + (longlong)(int)lVar4 * 8,local_res10);
    local_490 = (longlong *)
                FUN_14373c240(param_1 + 0x23,
                              *(ulonglong *)(*plVar16 + (longlong)((int)param_1[0xe] + -1) * 8) &
                              0xfffffffffffffffe,(longlong)(int)local_res18[0]);
  }
  plVar8 = param_1 + 0xd;
  plVar16 = (longlong *)0x0;
  local_res10 = (longlong *)
                ALevelSequenceActor::RetrieveBindingOverrides
                          (param_1[0x20],local_3b8,(ulonglong)local_490 & 0xffffffff);
  local_418 = param_1 + 0xb;
  local_440 = local_res10;
  iVar2 = FUN_14372a960(local_418,&local_res10);
  if (iVar2 <= *(int *)((longlong)param_1 + 100)) {
    iVar2 = *(int *)(param_1[0xb] + 8 + (longlong)iVar2 * 0x10);
    if (iVar2 != 0x50000000) {
      plVar16 = *(longlong **)(param_1[9] + (longlong)iVar2 * 8);
    }
    goto LAB_14377e1be;
  }
  local_460 = local_440;
  local_res10 = (longlong *)0x50000000;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xb,uVar3,&local_460,&local_res10);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar8,8);
  }
  puVar10 = (undefined8 *)(*plVar8 + (longlong)(int)param_1[0xe] * 8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
  }
  lVar4 = param_1[0xe];
  *(int *)(param_1 + 0xe) = (int)lVar4 + 1;
  FUN_143716690(*plVar8 + (longlong)(int)lVar4 * 8,&local_3b8);
  local_448 = (longlong *)
              (*(ulonglong *)(*plVar8 + (longlong)((int)param_1[0xe] + -1) * 8) & 0xfffffffffffffffe
              );
  uVar3 = FUN_14371e450(param_1[0x20],local_3b8,(ulonglong)local_490 & 0xffffffff);
  lVar4 = FUN_14377f940(uVar3);
  local_458 = 0;
  local_498[0] = (int)local_490;
  local_438 = local_448;
  local_450 = 0;
  local_44c = 0x80000000;
  local_res18[0] = local_res18[0] & 0xffffff00;
  local_478 = (undefined8 *)0x0;
  local_470 = 0;
  local_46c = 0x80000000;
  local_488 = 0;
  local_480 = 0;
  local_47c = 0x80000000;
  uVar3 = FUN_143703a50();
  if (local_470 == (local_46c & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_478,8);
  }
  local_478[(int)local_470] = local_448;
  local_470 = local_470 + 1;
  uVar3 = FUN_143703a50();
  if (local_480 == (local_47c & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_488,8);
  }
  *(longlong **)(local_488 + (longlong)(int)local_480 * 8) = local_440;
  local_480 = local_480 + 1;
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) != -1) {
      uVar3 = FUN_143703a50();
      if (local_450 == (local_44c & 0x3fffffff)) {
        FUN_14370c460(uVar3,&local_458,8);
      }
      *(longlong *)(local_458 + (longlong)(int)local_450 * 8) = lVar4;
      local_450 = local_450 + 1;
    }
    if (*(longlong *)(lVar4 + 8) != 0) {
      local_res10 = (longlong *)0x50000000;
      local_460 = (longlong *)
                  ALevelSequenceActor::RetrieveBindingOverrides
                            (param_1[0x20],*(longlong *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0x14));
      uVar3 = FUN_143703a50();
      FUN_14372d6e0(param_1 + 0xb,uVar3,&local_460,&local_res10);
    }
    uVar3 = FUN_14371e450(param_1[0x20],*(undefined8 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0x14));
    lVar4 = FUN_14377f940(uVar3);
  }
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
  if (0 < (int)local_450) {
    local_460 = (longlong *)0x0;
    do {
      plVar16 = *(longlong **)(local_458 + (longlong)local_460);
      iVar2 = (int)plVar16[4] + -1;
      lVar4 = (longlong)iVar2;
      local_468 = plVar16;
      if (-1 < iVar2) {
        lVar15 = lVar4 << 4;
        do {
          if ((*(int *)(lVar15 + plVar16[3]) == 7) &&
             (puVar10 = *(undefined8 **)(lVar15 + 8 + plVar16[3]), plVar16 = local_468,
             puVar10 != (undefined8 *)0x0)) {
            local_420 = (longlong *)&DAT_ffffffffffffffff;
            local_430[0] = ALevelSequenceActor::RetrieveBindingOverrides
                                     (param_1[0x20],*puVar10,*(undefined4 *)(puVar10 + 1));
            piVar5 = (int *)FUN_14372d420(local_418,local_430,&local_420);
            plVar16 = local_468;
            if ((*piVar5 == -1) &&
               (lVar6 = FUN_14377d260(param_1,*puVar10,*(undefined4 *)(puVar10 + 1),0),
               plVar16 = local_468, lVar6 == 0)) goto LAB_14377d9db;
          }
          lVar15 = lVar15 + -0x10;
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
      if (((plVar16[1] != 0) && (local_438 != (longlong *)0x0)) &&
         (iVar2 = hkString::strCmp(plVar16[1],local_438), iVar2 != 0)) {
        plVar8 = (longlong *)plVar16[1];
        local_438 = plVar8;
        uVar3 = FUN_143703a50();
        if (local_470 == (local_46c & 0x3fffffff)) {
          FUN_14370c460(uVar3,&local_478,8);
        }
        local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
        local_478[(int)local_470] = plVar8;
        local_470 = local_470 + 1;
      }
      if (plVar16[1] != 0) {
        uVar3 = ALevelSequenceActor::RetrieveBindingOverrides
                          (param_1[0x20],plVar16[1],*(undefined4 *)((longlong)plVar16 + 0x14));
        uVar7 = FUN_143703a50();
        if (local_480 == (local_47c & 0x3fffffff)) {
          FUN_14370c460(uVar7,&local_488,8);
        }
        *(undefined8 *)(local_488 + (longlong)(int)local_480 * 8) = uVar3;
        local_480 = local_480 + 1;
      }
      iVar2 = (int)local_res10 + 1;
      local_498[0] = *(int *)((longlong)plVar16 + 0x14);
      local_460 = local_460 + 1;
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    } while (iVar2 < (int)local_450);
  }
  plVar16 = (longlong *)0x0;
  local_468 = (longlong *)0x0;
  if (local_498[0] < 0) {
LAB_14377d9e3:
    FUN_143737060(local_208);
    FUN_143738110(local_208,param_1);
    FUN_143745310(&local_328,*local_478);
    FUN_14377f8d0(&local_328);
    FUN_143716620(&local_res10,local_328);
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xe) == (*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0xd,8);
    }
    lVar4 = param_1[0xd] + (longlong)(int)param_1[0xe] * 8;
    if (lVar4 != 0) {
      FUN_1437165f0(lVar4,&local_res10);
    }
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    FUN_143716650(&local_res10);
    FUN_143737ab0(local_208,
                  *(ulonglong *)(param_1[0xd] + (longlong)((int)param_1[0xe] + -1) * 8) &
                  0xfffffffffffffffe,0);
    uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffb48 >> 0x20);
    local_f0 = param_1 + 0xf;
    local_180 = (longlong)(int)local_490;
    local_1a8 = local_1a8 | 0x400010;
    bVar14 = 0;
    if (local_468 != (longlong *)0x0) {
      local_460 = (longlong *)local_468[1];
      local_438 = (longlong *)0x0;
      local_res10 = (longlong *)0x0;
      if (local_460 != (longlong *)0x0) {
        do {
          local_430[0] = (**(code **)(*(longlong *)param_1[0x21] + 0x20))();
          plVar8 = local_res10;
          if (local_430[0] != 0) {
            local_298 = local_288;
            local_28c = -0x7fffff80;
            local_290 = 1;
            local_288[0] = 0;
            uVar3 = FUN_143714fc0(local_430[0],&local_298,0,0);
            local_res18[0] = FUN_143715430(local_430[0]);
            local_430[0] = FUN_14370c890(uVar3,param_1);
            plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x18);
            plVar8 = plVar16;
            if (plVar9 != (longlong *)0x0) {
              *plVar9 = local_430[0];
              *(uint *)(plVar9 + 1) = local_res18[0];
              plVar9[2] = 0;
              plVar8 = plVar9;
            }
            plVar9 = plVar8;
            if (local_res10 != (longlong *)0x0) {
              local_res10[2] = (longlong)plVar8;
              plVar9 = local_438;
            }
            local_438 = plVar9;
            local_290 = 0;
            if (-1 < local_28c) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_298);
            }
          }
          local_res10 = plVar8;
          plVar8 = local_438;
          uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffb48 >> 0x20);
          local_460 = (longlong *)local_460[1];
        } while (local_460 != (longlong *)0x0);
        if (local_438 != (longlong *)0x0) {
          puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,8);
          local_408 = 0;
          plStack_400 = (longlong *)0x0;
          *puVar10 = plVar8;
          puVar10 = (undefined8 *)FUN_14371d5c0(local_430,puVar10,&DAT_1467e2a90);
          local_410 = *puVar10;
          local_408 = puVar10[1];
          plVar8 = plVar16;
          if (local_408 != 0) {
            plVar8 = (longlong *)FUN_1437151a0();
          }
          if (((ulonglong)plVar8 & 1) != 0) {
            FUN_1437329e0((ulonglong)plVar8 & 0xfffffffffffffffe);
          }
          if (((ulonglong)plStack_400 & 1) != 0) {
            FUN_143733a60((ulonglong)plStack_400 & 0xfffffffffffffffe);
          }
          plStack_400 = plVar8;
          FUN_143737490(local_208,&local_410);
          if (((ulonglong)plStack_400 & 1) != 0) {
            FUN_143733a60((ulonglong)plStack_400 & 0xfffffffffffffffe);
          }
        }
      }
    }
    iVar2 = FUN_143746140(&local_3b8,0x3c,0,0x7fffffff);
    if (-1 < iVar2) {
      local_1a8 = local_1a8 | 0x40000;
      local_110 = 0;
    }
    piVar5 = (int *)FUN_143737960(local_208,local_res18,param_1,&local_420);
    if (*piVar5 < 0) {
      if (DAT_146b84268 != 0) {
        FUN_14373a730(local_3f8,&DAT_146b84260,1);
        lVar4 = FUN_14373bbd0(local_3f8,"Failed to allocate type from builder",&DAT_145b909f0,0);
        *(char **)(lVar4 + 0x20) = "Reflect\\Version\\hkModifiableTypeSet.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x5df;
        FUN_14373a950(local_3f8);
      }
      local_320 = 0;
      if (-1 < (int)local_31c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_328,1,local_31c & 0x3fffffff);
      }
      local_328 = 0;
      local_31c = 0x80000000;
      FUN_143737160(local_208);
      plVar16 = (longlong *)0x0;
    }
    else {
      local_res10 = local_420;
      puVar10 = (undefined8 *)FUN_143714490(local_420,1);
      if (puVar10 != (undefined8 *)0x0) {
        bVar14 = (byte)*puVar10;
      }
      local_320 = 0;
      plVar8 = plVar16;
      if ((bVar14 & 0xf) == 7) {
        plVar8 = local_res10;
      }
      if (-1 < (int)local_31c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_328,1,local_31c & 0x3fffffff);
      }
      local_328 = 0;
      local_31c = 0x80000000;
      FUN_143737160(local_208);
      local_res18[0] = *(uint *)(param_1 + 10);
      lVar4 = (**(code **)(*param_1 + 8))(param_1,0x78);
      plVar9 = plVar16;
      if (lVar4 != 0) {
        plVar9 = (longlong *)
                 FUN_14377abe0(lVar4,param_1,plVar8,(ulonglong)local_490 & 0xffffffff,
                               CONCAT44(uVar17,1),local_res20,local_440);
      }
      local_490 = plVar9;
      uVar3 = FUN_143703a50();
      if (*(uint *)(param_1 + 10) == (*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff)) {
        FUN_14370c460(uVar3,param_1 + 9,8);
      }
      *(longlong **)(param_1[9] + (longlong)(int)param_1[10] * 8) = plVar9;
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      if (0 < (int)local_480) {
        plVar11 = (longlong *)(longlong)(int)local_res18[0];
        plVar8 = plVar16;
        do {
          local_430[0] = *(longlong *)(local_488 + (longlong)plVar8);
          local_res10 = plVar11;
          uVar3 = FUN_143703a50();
          FUN_14372d6e0(local_418,uVar3,local_430,&local_res10);
          uVar13 = (int)plVar16 + 1;
          plVar16 = (longlong *)(ulonglong)uVar13;
          plVar8 = plVar8 + 1;
          plVar9 = local_490;
        } while ((int)uVar13 < (int)local_480);
      }
      plVar16 = (longlong *)0x0;
      if ((-1 < local_498[0]) && (local_468 != (longlong *)0x0)) {
        puVar10 = (undefined8 *)FUN_143714490(local_468,1);
        if (puVar10 == (undefined8 *)0x0) {
          bVar14 = 0;
        }
        else {
          bVar14 = (byte)*puVar10;
        }
        local_440 = plVar16;
        if ((bVar14 & 0xf) == 7) {
          local_440 = local_468;
        }
        iVar2 = FUN_143715240(local_440);
        plVar8 = local_440;
        if (0 < iVar2) {
          do {
            FUN_143714e90(plVar8,&local_res10,plVar16);
            pbVar12 = (byte *)FUN_143714f30(&local_res10,local_res18);
            plVar11 = local_res10;
            if ((~*pbVar12 & 1) != 0) {
              uVar3 = FUN_1437151c0(&local_res10);
              plVar9 = local_490;
              FUN_14377b3c0(local_490,uVar3,plVar11);
            }
            uVar13 = (int)plVar16 + 1;
            plVar16 = (longlong *)(ulonglong)uVar13;
            iVar2 = FUN_143715240(plVar8);
          } while ((int)uVar13 < iVar2);
        }
        iVar2 = 0;
        plVar16 = (longlong *)FUN_143715320(local_440);
        local_res10 = plVar16;
        if ((plVar16 != (longlong *)0x0) && ((short)plVar16[1] != 0)) {
          do {
            FUN_14377b4f0(plVar9,plVar16[3],plVar16[2]);
            iVar2 = iVar2 + 1;
            plVar16 = plVar16 + 2;
          } while (iVar2 < (int)(uint)*(ushort *)(local_res10 + 1));
        }
        lVar4 = hkReflect::RecordType::getParentRecord(local_440);
        if (lVar4 != 0) {
          uVar3 = FUN_143703a50();
          if (*(uint *)(param_1 + 0x1a) == (*(uint *)((longlong)param_1 + 0xd4) & 0x3fffffff)) {
            FUN_14370c460(uVar3,param_1 + 0x19,0x20);
          }
          puVar10 = (undefined8 *)((longlong)(int)param_1[0x1a] * 0x20 + param_1[0x19]);
          *(int *)(param_1 + 0x1a) = (int)param_1[0x1a] + 1;
          uVar3 = (**(code **)(*(longlong *)param_1[0x21] + 0x20))((longlong *)param_1[0x21],lVar4);
          puVar10[2] = local_490;
          puVar10[3] = uVar3;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = 0xffffffff;
        }
      }
      plVar16 = local_490;
      lVar4 = (longlong)(int)(local_450 - 1);
      if (-1 < (int)(local_450 - 1)) {
        do {
          lVar15 = *(longlong *)(local_458 + lVar4 * 8);
          FUN_14377bb90(plVar16,lVar15);
          local_498[0] = *(int *)(lVar15 + 0x14);
          if (*(longlong **)(lVar15 + 8) != (longlong *)0x0) {
            local_448 = *(longlong **)(lVar15 + 8);
          }
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
    }
  }
  else {
    local_448 = local_438;
    if ((local_res20 == 0) || ((char)local_res18[0] != '\0')) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[0x21] + 0x18))();
    }
    else {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)param_1[0x21] + 0x20))
                         ((longlong *)param_1[0x21],local_res20);
    }
    local_468 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      if ((~*(ushort *)(param_1 + 0x2a) & 1) == 0) goto LAB_14377d9e3;
      if (DAT_146b84268 < 2) {
LAB_14377d9db:
        plVar16 = (longlong *)0x0;
      }
      else {
        FUN_14373a730(local_3f8,&DAT_146b84260,2);
        lVar4 = FUN_14373bbd0(local_3f8,
                              "Patches are trying to create class {} but it is not registered",
                              &DAT_145b74470,&local_448,0);
        *(char **)(lVar4 + 0x20) = "Reflect\\Version\\hkModifiableTypeSet.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x594;
        *(undefined4 *)(lVar4 + 0xc) = 0x2db84748;
        FUN_14373a950(local_3f8);
      }
    }
    else {
      iVar2 = FUN_143715430(plVar8);
      if ((iVar2 == local_498[0]) || ((~*(ushort *)(param_1 + 0x2a) & 1) == 0)) goto LAB_14377d9e3;
      if (DAT_146b84268 < 2) goto LAB_14377d9db;
      local_res18[0] = FUN_143715430(plVar8);
      FUN_14373a730(local_3f8,&DAT_146b84260,2);
      lVar4 = FUN_14373bbd0(local_3f8,
                            "Patches say class {} version {} should be present, but version {} is registered"
                            ,&DAT_145b8f900,&local_448,local_498,local_res18,0);
      *(char **)(lVar4 + 0x20) = "Reflect\\Version\\hkModifiableTypeSet.cpp";
      *(undefined8 *)(lVar4 + 0x28) = 0x5a0;
      *(undefined4 *)(lVar4 + 0xc) = 0x6a320fb;
      FUN_14373a950(local_3f8);
      plVar16 = (longlong *)0x0;
    }
  }
  uVar3 = FUN_143703a50();
  local_480 = 0;
  if (-1 < (int)local_47c) {
    FUN_143702e10(uVar3,local_488,8,local_47c & 0x3fffffff);
  }
  local_488 = 0;
  local_47c = 0x80000000;
  uVar3 = FUN_143703a50();
  local_470 = 0;
  if (-1 < (int)local_46c) {
    FUN_143702e10(uVar3,local_478,8,local_46c & 0x3fffffff);
  }
  local_478 = (undefined8 *)0x0;
  local_46c = 0x80000000;
  uVar3 = FUN_143703a50();
  local_450 = 0;
  if (-1 < (int)local_44c) {
    FUN_143702e10(uVar3,local_458,8,local_44c & 0x3fffffff);
  }
  local_458 = 0;
  local_44c = 0x80000000;
LAB_14377e1be:
  local_3b0 = 0;
  if (-1 < (int)local_3ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_3b8,1,local_3ac & 0x3fffffff);
  }
  return plVar16;
}



// FUNCTION 14377e210 FUN_14377e210 body=780 status=ok
// SIG undefined FUN_14377e210(void)

void FUN_14377e210(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  
  FUN_143745310(&local_a8,param_3);
  FUN_14377f820(&local_a8);
  cVar2 = FUN_143745f90(&local_a8,&DAT_145b18618);
  puVar7 = (undefined *)0x0;
  if (cVar2 == '\0') {
    cVar2 = FUN_143746f60(&local_a8,"hkArray");
    if (cVar2 == '\0') {
      cVar2 = FUN_143746f20(&local_a8,"hkPtr");
      if (cVar2 == '\0') {
        cVar2 = FUN_143746f20(&local_a8,"hkViewPtr");
        if (cVar2 == '\0') {
          cVar2 = FUN_143746f20(&local_a8,"hkReflect::Type*");
          if (cVar2 == '\0') {
            iVar3 = FUN_14377ef20(param_4,local_a8);
            if ((iVar3 == -1) ||
               (puVar9 = (undefined8 *)FUN_14377edb0(param_1,local_a8,iVar3),
               puVar9 == (undefined8 *)0x0)) {
              puVar7 = (undefined *)
                       (**(code **)(*(longlong *)param_1[0x21] + 0x18))
                                 ((longlong *)param_1[0x21],local_a8);
              if (puVar7 == (undefined *)0x0) goto LAB_14377e4e0;
            }
            else {
              puVar7 = (undefined *)*puVar9;
            }
          }
          else {
            puVar7 = &DAT_1467e2850;
          }
          goto LAB_14377e4db;
        }
        FUN_143745ed0(&local_a8,9);
        FUN_14377f910(&local_a8);
        lVar6 = (**(code **)(*param_1 + 8))(param_1,0x70);
        if (lVar6 != 0) {
          pcVar10 = "hkViewPtr";
          goto LAB_14377e408;
        }
      }
      else {
        FUN_143745ed0(&local_a8,5);
        FUN_14377f910(&local_a8);
        lVar6 = (**(code **)(*param_1 + 8))(param_1,0x70);
        if (lVar6 != 0) {
          pcVar10 = "hkPtr";
LAB_14377e408:
          puVar7 = (undefined *)FUN_143736ce0(lVar6,0x22222222,pcVar10,0);
        }
      }
      *(longlong *)(puVar7 + 0x20) = param_1[0x14];
    }
    else {
      FUN_143745ed0(&local_a8,7);
      FUN_14377f910(&local_a8);
      lVar6 = param_1[0x12];
      lVar8 = (**(code **)(*param_1 + 8))(param_1,0x78);
      if (lVar8 != 0) {
        puVar7 = (undefined *)
                 FUN_143736b30(lVar8,0x22222222,0x18,8,lVar6,"hkArray",
                               in_stack_ffffffffffffff38 & 0xffffffff00000000);
      }
    }
    FUN_14377e210(param_1,puVar7 + 0x18,local_a8,param_4);
    uVar1 = *(undefined8 *)(puVar7 + 0x18);
    lVar6 = FUN_143715320(puVar7);
    *(undefined8 *)(lVar6 + 0x10) = uVar1;
  }
  else {
    iVar3 = FUN_14377f0e0();
    lVar6 = (**(code **)(*param_1 + 8))(param_1,0x68);
    if (lVar6 != 0) {
      puVar7 = (undefined *)
               FUN_143736dd0(lVar6,0,iVar3,0,in_stack_ffffffffffffff28 & 0xffffffff00000000,
                             &DAT_146b829b0,&DAT_145b73138,0);
    }
    FUN_14377e210(param_1,puVar7 + 0x18,local_a8,param_4);
    uVar1 = *(undefined8 *)(puVar7 + 0x18);
    uVar4 = FUN_143714d40(uVar1);
    iVar5 = FUN_1437152f0(uVar1);
    FUN_14374a630(puVar7,iVar5 * iVar3,uVar4);
    uVar1 = *(undefined8 *)(puVar7 + 0x18);
    lVar6 = FUN_143715320(puVar7);
    *(undefined8 *)(lVar6 + 0x10) = uVar1;
  }
LAB_14377e4db:
  FUN_14377f7b0(param_2,puVar7);
LAB_14377e4e0:
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14377e520 FUN_14377e520 body=54 status=ok
// SIG undefined FUN_14377e520(void)

void FUN_14377e520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = FUN_143703a50();
  }
  FUN_14373db20(param_2,param_3,lVar1);
  return;
}



// FUNCTION 14377e560 FUN_14377e560 body=1941 status=ok
// SIG undefined FUN_14377e560(void)

undefined4 *
FUN_14377e560(undefined8 *param_1,undefined4 *param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulonglong *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  ulonglong *puVar19;
  int local_348;
  char *local_340;
  longlong local_338;
  uint local_330;
  uint local_32c;
  int local_328;
  longlong local_320;
  uint *local_318;
  longlong local_310;
  undefined8 *local_308;
  int local_300;
  undefined1 local_2fc [4];
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 local_298;
  undefined4 local_290;
  uint local_28c;
  undefined1 local_208 [96];
  ulonglong local_1a8;
  uint *local_f8;
  undefined8 local_f0;
  
  if (*(int *)(param_1 + 0xd) - 2U < 2) {
    *param_2 = 0;
    return param_2;
  }
  *(undefined4 *)(param_1 + 0xd) = 2;
  local_348 = 0;
  if (0 < *(int *)(param_1 + 7)) {
    local_310 = 0;
    uVar16 = param_4;
    do {
      plVar3 = *(longlong **)(local_310 + param_1[6]);
      if (plVar3 != (longlong *)0x0) {
        piVar10 = (int *)FUN_14377e560(plVar3,local_2e0,param_3,uVar16);
        if (*piVar10 < 0) {
          *param_2 = 0x80040200;
          return param_2;
        }
        local_320 = *plVar3;
        puVar11 = (undefined8 *)FUN_143714490(local_320,1);
        bVar6 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          bVar6 = (byte)*puVar11;
        }
        lVar18 = 0;
        if ((bVar6 & 0xf) == 7) {
          lVar18 = local_320;
        }
        if ((int)plVar3[0xd] != 2) {
          FUN_14377b070(plVar3,param_1);
        }
        if ((char)param_4 != '\0') {
          local_328 = 0;
          hkReflect::DeclIterAll::DeclIterAll(&local_2d8,lVar18,0);
          local_320 = 0;
          while( true ) {
            puVar19 = (ulonglong *)0x0;
            puVar11 = local_2d8 + 1;
            if ((local_2d0 <= local_2d8 + 1) &&
               (cVar7 = FUN_1437144f0(&local_2d8), puVar11 = local_2d8, cVar7 == '\0')) break;
            local_2d8 = puVar11;
            pbVar12 = (byte *)FUN_143714f30(local_2d8,local_2dc);
            if ((*pbVar12 & 0x30) != 0) {
              FUN_143714060(&local_340,*local_2d8);
              pbVar12 = (byte *)FUN_143714f30(&local_340,&local_318);
              if ((~*pbVar12 & 1) != 0) {
                puVar13 = (ulonglong *)
                          (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],0x18);
                if (puVar13 != (ulonglong *)0x0) {
                  *(undefined4 *)(puVar13 + 1) = 0;
                  puVar19 = puVar13;
                }
                uVar14 = FUN_143703a50();
                iVar9 = *(int *)(param_1 + 5) + 1;
                local_300 = *(int *)(param_1 + 5) - local_328;
                uVar8 = *(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff;
                if (((int)uVar8 < iVar9) && ((int)uVar8 < iVar9)) {
                  iVar5 = iVar9;
                  if (iVar9 < (int)(uVar8 * 2)) {
                    iVar5 = uVar8 * 2;
                  }
                  FUN_14370c310(uVar14,param_1 + 4,iVar5,8);
                }
                lVar18 = param_1[4] + (longlong)local_328 * 8;
                FUN_143732890(lVar18 + 8,lVar18,(longlong)local_300 << 3);
                *(ulonglong **)(local_320 + param_1[4]) = puVar19;
                *(int *)(param_1 + 5) = iVar9;
                if ((local_348 < *(int *)(param_1 + 7) + -1) &&
                   (pcVar15 = (char *)FUN_1437151c0(&local_340), *pcVar15 != '#')) {
                  FUN_143745310(&local_298,&DAT_145b8f480);
                  uVar14 = FUN_1437151c0(&local_340);
                  FUN_143745710(&local_298,uVar14,0xffffffff);
                  FUN_143716620(&local_308,local_298);
                  lVar18 = param_1[3];
                  uVar14 = FUN_143703a50();
                  if (*(uint *)(lVar18 + 0x70) == (*(uint *)(lVar18 + 0x74) & 0x3fffffff)) {
                    FUN_14370c460(uVar14,lVar18 + 0x68,8);
                  }
                  lVar1 = *(longlong *)(lVar18 + 0x68) + (longlong)*(int *)(lVar18 + 0x70) * 8;
                  if (lVar1 != 0) {
                    FUN_1437165f0(lVar1,&local_308);
                  }
                  *(int *)(lVar18 + 0x70) = *(int *)(lVar18 + 0x70) + 1;
                  FUN_143716650(&local_308);
                  *puVar19 = *(ulonglong *)
                              (*(longlong *)(param_1[3] + 0x68) +
                              (longlong)(*(int *)(param_1[3] + 0x70) + -1) * 8) & 0xfffffffffffffffe
                  ;
                  local_290 = 0;
                  if (-1 < (int)local_28c) {
                    FUN_143702e10(&PTR_vftable_1467f0638,local_298,1,local_28c & 0x3fffffff);
                  }
                }
                else {
                  uVar16 = FUN_1437151c0(&local_340);
                  *puVar19 = uVar16;
                }
                puVar17 = (undefined4 *)FUN_143714f30(&local_340,local_2fc);
                local_328 = local_328 + 1;
                local_320 = local_320 + 8;
                *(undefined4 *)(puVar19 + 1) = *puVar17;
                puVar19[2] = (ulonglong)local_340;
                *(undefined2 *)((longlong)puVar19 + 0xc) = 0;
              }
            }
          }
        }
        uVar16 = param_4 & 0xff;
      }
      local_348 = local_348 + 1;
      local_310 = local_310 + 8;
    } while (local_348 < *(int *)(param_1 + 7));
  }
  if ((*(byte *)(param_1[3] + 0x150) >> 1 & 1) != 0) {
    *(int *)((longlong)param_1 + 0x14) = *(int *)(param_1 + 7) + -1;
  }
  puVar4 = (uint *)*param_1;
  puVar11 = (undefined8 *)FUN_143714490(puVar4,1);
  bVar6 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    bVar6 = (byte)*puVar11;
  }
  local_338 = 0;
  local_330 = 0;
  local_318 = (uint *)0x0;
  if ((bVar6 & 0xf) == 7) {
    local_318 = puVar4;
  }
  local_32c = 0x80000000;
  FUN_14373bf20(local_2f8,(ulonglong)param_1 & 0xff);
  local_348 = 0;
  if (0 < *(int *)(param_1 + 5)) {
    local_310 = 0;
    do {
      puVar11 = *(undefined8 **)(local_310 + param_1[4]);
      local_340 = (char *)*puVar11;
      local_308 = puVar11;
      if ((local_340 != (char *)0x0) && (*local_340 != '#')) {
        uVar14 = FUN_14373bfe0(local_2f8);
        iVar9 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                          (local_2f8,uVar14);
        if (iVar9 == 0) {
          FUN_14373c2f0(local_2f8,local_340,1);
        }
        else {
          iVar9 = FUN_14370c910(local_340);
          pcVar15 = (char *)(**(code **)(*param_3 + 8))(param_3,iVar9 + 2);
          *pcVar15 = '#';
          hkString::strNcpy(pcVar15 + 1,iVar9 + 1,local_340,iVar9 + 1);
          puVar11 = local_308;
          local_340 = pcVar15;
        }
      }
      if (puVar11[2] == 0) {
        if (1 < DAT_146b84268) {
          FUN_14373a730(&local_2d8,&DAT_146b84260,2);
          lVar18 = FUN_14373bbd0(&local_2d8,"Dropping field {} as it has a null type",&DAT_145b74470
                                 ,&local_340,0);
          *(char **)(lVar18 + 0x20) = "Reflect\\Version\\hkModifiableTypeSet.cpp";
          *(undefined8 *)(lVar18 + 0x28) = 0x1af;
          *(undefined4 *)(lVar18 + 0xc) = 0x2dba8010;
          FUN_14373a950(&local_2d8);
        }
        if ((~*(ushort *)(param_1[3] + 0x150) & 1) != 0) {
          *param_2 = 0x80040200;
          goto LAB_14377ec0d;
        }
      }
      else {
        FUN_143737060(local_208);
        uVar14 = FUN_143715410(puVar11[2]);
        FUN_143738110(local_208,uVar14);
        UMovieScenePropertyTrack::SetSectionToKey(local_208,puVar11[2]);
        FUN_1437380c0(local_208,local_340,*(undefined2 *)((longlong)puVar11 + 0xc),
                      *(undefined4 *)(puVar11 + 1));
        local_f0 = 0;
        local_1a8 = local_1a8 | 0x600000;
        local_f8 = local_318;
        piVar10 = (int *)FUN_143737960(local_208,local_2fc,param_3,&local_320);
        lVar18 = local_320;
        if (*piVar10 < 0) {
          if (DAT_146b84268 != 0) {
            FUN_14373a730(&local_2d8,&DAT_146b84260,1);
            lVar18 = FUN_14373bbd0(&local_2d8,"Failed to allocate type from builder",&DAT_145b909f0,
                                   0);
            *(char **)(lVar18 + 0x20) = "Reflect\\Version\\hkModifiableTypeSet.cpp";
            *(undefined8 *)(lVar18 + 0x28) = 0x1a5;
            FUN_14373a950(&local_2d8);
          }
          *param_2 = 0x80040200;
          FUN_143737160(local_208);
          goto LAB_14377ec0d;
        }
        uVar14 = FUN_143703a50();
        if (local_330 == (local_32c & 0x3fffffff)) {
          FUN_14370c460(uVar14,&local_338,8);
        }
        *(longlong *)(local_338 + (longlong)(int)local_330 * 8) = lVar18;
        local_330 = local_330 + 1;
        FUN_143737160(local_208);
      }
      local_348 = local_348 + 1;
      local_310 = local_310 + 8;
    } while (local_348 < *(int *)(param_1 + 5));
  }
  uVar14 = FUN_143714780(local_338,local_330,0,param_3);
  puVar11 = (undefined8 *)FUN_1437143d0(local_318,0x4000000);
  *puVar11 = uVar14;
  if ((*local_318 >> 0x12 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xb);
    uVar14 = FUN_143703a50();
    lVar18 = FUN_143714810(uVar2,uVar14);
    param_1[0xc] = lVar18;
    FUN_14370c700(lVar18 + 0x10,param_1[10],*(int *)(param_1 + 0xb) << 4);
    uVar14 = param_1[0xc];
    puVar11 = (undefined8 *)FUN_1437143d0(local_318,0x40000);
    *puVar11 = uVar14;
  }
  *(undefined4 *)(param_1 + 0xd) = 3;
  *param_2 = 0;
LAB_14377ec0d:
  FUN_14373bf70(local_2f8);
  uVar14 = FUN_143703a50();
  local_330 = 0;
  if (-1 < (int)local_32c) {
    FUN_143702e10(uVar14,local_338,8,local_32c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 14377ed00 FUN_14377ed00 body=173 status=ok
// SIG undefined FUN_14377ed00(void)

undefined8 FUN_14377ed00(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar4 = 0;
    do {
      pcVar3 = (char *)**(undefined8 **)(lVar4 + *(longlong *)(param_1 + 0x20));
      if (pcVar3 != (char *)0x0) {
        bVar1 = false;
        if (*pcVar3 == '#') {
          bVar1 = true;
          do {
            pcVar3 = pcVar3 + 1;
          } while (*pcVar3 == '#');
        }
        iVar2 = hkString::strCmp(pcVar3,param_2);
        if (iVar2 == 0) {
          if (bVar1) {
            **(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8) = pcVar3;
          }
          return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8);
        }
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 14377edb0 FUN_14377edb0 body=91 status=ok
// SIG undefined FUN_14377edb0(void)

undefined8 FUN_14377edb0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 local_res8 [3];
  undefined8 local_res20;
  
  local_res8[0] = 0xffffffffffffffff;
  local_res20 = ALevelSequenceActor::RetrieveBindingOverrides(*(undefined8 *)(param_1 + 0x100));
  piVar2 = (int *)FUN_14372d420(param_1 + 0x58,&local_res20,local_res8);
  iVar1 = *piVar2;
  if ((-1 < iVar1) && (iVar1 != 0x50000000)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8);
  }
  return 0;
}



// FUNCTION 14377ee10 FUN_14377ee10 body=272 status=ok
// SIG undefined FUN_14377ee10(void)

void FUN_14377ee10(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_98 [128];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = 0;
    do {
      local_9c = -0x7fffff80;
      local_a8 = local_98;
      local_a0 = 1;
      local_98[0] = 0;
      uVar2 = FUN_143714fc0(**(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0x48)),&local_a8,0,0);
      iVar1 = hkString::strCmp(uVar2,param_2);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_143715430(**(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0x48))),
         iVar1 == param_3)) {
        FUN_14377f030(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x48)),param_4);
      }
      local_a0 = 0;
      if (-1 < local_9c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_a8);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 14377ef20 FUN_14377ef20 body=18 status=ok
// SIG undefined FUN_14377ef20(void)

undefined8 FUN_14377ef20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_14373c2c0(param_1,param_2,0xffffffffffffffff);
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 14377ef40 FUN_14377ef40 body=218 status=ok
// SIG undefined FUN_14377ef40(void)

void FUN_14377ef40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_res8 = 0x50000000;
  local_res10 = uVar4;
  uVar2 = FUN_143703a50();
  FUN_14372d6e0(lVar3 + 0x58,uVar2,&local_res10,&local_res8);
  for (lVar3 = FUN_14371f270(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x100),uVar4);
      lVar3 != 0;
      lVar3 = FUN_14371e450(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x100),
                            *(undefined8 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x14))) {
    if (*(longlong *)(lVar3 + 8) != 0) {
      local_res10 = ALevelSequenceActor::RetrieveBindingOverrides
                              (*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x100),
                               *(longlong *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x14));
      lVar1 = *(longlong *)(param_1 + 0x18);
      local_res8 = 0x50000000;
      uVar4 = FUN_143703a50();
      FUN_14372d6e0(lVar1 + 0x58,uVar4,&local_res10,&local_res8);
    }
  }
  return;
}



// FUNCTION 14377f020 FUN_14377f020 body=16 status=ok
// SIG undefined FUN_14377f020(void)

undefined1 FUN_14377f020(char param_1)

{
  if ((param_1 != ' ') && (param_1 != '\t')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14377f030 FUN_14377f030 body=176 status=ok
// SIG undefined FUN_14377f030(void)

void FUN_14377f030(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 1);
  uVar4 = 0;
  if (0 < (int)uVar5) {
    plVar1 = (longlong *)*param_2;
    uVar2 = uVar4;
    uVar3 = uVar4;
    do {
      if (*plVar1 == param_1) {
        if (-1 < (int)uVar3) {
          return;
        }
        break;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)(int)uVar5);
  }
  if (uVar5 == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,param_2,8);
  }
  *(longlong *)(*param_2 + (longlong)(int)param_2[1] * 8) = param_1;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  uVar2 = uVar4;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      FUN_14377f030(*(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x40)),param_2);
      uVar5 = (int)uVar2 + 1;
      uVar4 = uVar4 + 8;
      uVar2 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 14377f0e0 FUN_14377f0e0 body=137 status=ok
// SIG undefined FUN_14377f0e0(void)

int FUN_14377f0e0(longlong *param_1)

{
  char *_Str;
  char *pcVar1;
  int iVar2;
  
  FUN_143745e50(param_1,1);
  FUN_14377f820(param_1);
  pcVar1 = (char *)((longlong)((int)param_1[1] + -2) + *param_1);
  do {
    _Str = pcVar1;
    if (_Str <= (char *)(*param_1 + 1)) break;
    pcVar1 = _Str + -1;
  } while ((byte)(_Str[-1] - 0x30U) < 10);
  iVar2 = hkString::atoi(_Str);
  FUN_14377f820(param_1);
  FUN_143745e50(param_1,1);
  FUN_14377f820(param_1);
  return iVar2;
}



// FUNCTION 14377f170 FUN_14377f170 body=129 status=ok
// SIG undefined FUN_14377f170(void)

void FUN_14377f170(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    plVar2 = *(longlong **)(param_1 + 0x30);
    uVar5 = uVar3;
    uVar8 = uVar3;
    while (iVar7 = (int)uVar8, *plVar2 != param_2) {
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 1;
      if ((longlong)*(int *)(param_1 + 0x38) <= (longlong)uVar5) {
        return;
      }
    }
    if (-1 < iVar7) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      lVar6 = (longlong)(*(int *)(param_1 + 0x38) - iVar7) * 8;
      lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 8;
      uVar5 = uVar3;
      if (0 < lVar6) {
        do {
          uVar4 = (int)uVar5 + 8;
          *(undefined8 *)(uVar3 + lVar1) = *(undefined8 *)(uVar3 + 8 + lVar1);
          uVar3 = uVar3 + 8;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < lVar6);
      }
    }
  }
  return;
}



// FUNCTION 14377f200 FUN_14377f200 body=356 status=ok
// SIG undefined FUN_14377f200(void)

void FUN_14377f200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined1 local_res8 [8];
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  lVar4 = FUN_1437151f0(*param_1);
  local_8c = 0x80000080;
  local_98 = local_88;
  local_90 = 1;
  local_88[0] = 0;
  iVar3 = hkString::strCmp(lVar4,param_2);
  if (iVar3 == 0) {
    FUN_1437455a0(&local_98,param_3);
  }
  else {
    FUN_1437455a0(&local_98,param_3);
    iVar3 = FUN_14370c910(param_2);
    FUN_143745710(&local_98,iVar3 + lVar4,0xffffffff);
  }
  FUN_143716620(local_res8,local_98);
  lVar4 = param_1[3];
  uVar5 = FUN_143703a50();
  if (*(uint *)(lVar4 + 0x70) == (*(uint *)(lVar4 + 0x74) & 0x3fffffff)) {
    FUN_14370c460(uVar5,lVar4 + 0x68,8);
  }
  lVar1 = *(longlong *)(lVar4 + 0x68) + (longlong)*(int *)(lVar4 + 0x70) * 8;
  if (lVar1 != 0) {
    FUN_1437165f0(lVar1,local_res8);
  }
  *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + 1;
  FUN_143716650(local_res8);
  uVar2 = *(ulonglong *)
           (*(longlong *)(param_1[3] + 0x68) + (longlong)(*(int *)(param_1[3] + 0x70) + -1) * 8);
  puVar6 = (ulonglong *)FUN_1437143d0(*param_1,8);
  *puVar6 = uVar2 & 0xfffffffffffffffe;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14377f370 FUN_14377f370 body=13 status=ok
// SIG undefined FUN_14377f370(void)

void FUN_14377f370(longlong param_1,undefined8 param_2)

{
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x18) = param_2;
  }
  return;
}



// FUNCTION 14377f380 FUN_14377f380 body=543 status=ok
// SIG undefined FUN_14377f380(void)

void FUN_14377f380(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0xc0) == 0) && (*(int *)(param_1 + 0xd0) == 0)) break;
    uVar6 = uVar7;
    if (0 < *(int *)(param_1 + 0xc0)) {
      do {
        FUN_14377f680(param_1);
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0xc0));
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_14377f5a0(param_1,0);
    }
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x50)) {
    lVar10 = uVar6 * 8;
    do {
      if ((*(longlong *)(lVar10 + *(longlong *)(param_1 + 0x48)) != 0) &&
         (piVar3 = (int *)FUN_14377e560(*(undefined8 *)(lVar10 + *(longlong *)(param_1 + 0x48)),
                                        local_res8,param_1,param_2), *piVar3 < 0)) {
        FUN_14377ef40(*(undefined8 *)(lVar10 + *(longlong *)(param_1 + 0x48)));
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        if (*(int *)(param_1 + 0x50) != (int)uVar6) {
          *(undefined8 *)(lVar10 + *(longlong *)(param_1 + 0x48)) =
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 8);
        }
        uVar6 = (ulonglong)((int)uVar6 - 1);
        lVar10 = lVar10 + -8;
      }
      while ((*(int *)(param_1 + 0xc0) != 0 || (*(int *)(param_1 + 0xd0) != 0))) {
        uVar9 = uVar7;
        if (0 < *(int *)(param_1 + 0xc0)) {
          do {
            FUN_14377f680(param_1,uVar9);
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < *(int *)(param_1 + 0xc0));
        }
        *(undefined4 *)(param_1 + 0xc0) = 0;
        if (*(int *)(param_1 + 0xd0) != 0) {
          FUN_14377f5a0(param_1,0);
        }
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x50));
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x50)) {
    lVar10 = uVar6 * 8;
    do {
      puVar1 = *(ulonglong **)(lVar10 + *(longlong *)(param_1 + 0x48));
      uVar9 = *puVar1;
      puVar4 = (undefined8 *)FUN_143714490(uVar9,1);
      bVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar4;
      }
      uVar5 = uVar7;
      if ((bVar2 & 0xf) == 7) {
        uVar5 = uVar9;
      }
      if ((param_2 == '\0') && ((int)puVar1[7] != 0)) {
        *(undefined8 *)(uVar5 + 8) =
             **(undefined8 **)(puVar1[6] + (longlong)*(int *)((longlong)puVar1 + 0x14) * 8);
      }
      FUN_14377c040();
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x50));
  }
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x50) + -1;
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 0xe0)) {
    do {
      FUN_14377c040(*(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0xd8)));
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar6 = uVar6 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0xe0));
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 14377f5a0 FUN_14377f5a0 body=221 status=ok
// SIG undefined FUN_14377f5a0(void)

void FUN_14377f5a0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)(*(longlong *)(param_1 + 200) + (longlong)param_2 * 0x20);
  lVar5 = plVar3[2];
  if ((*(byte *)(param_1 + 0x150) >> 1 & 1) == 0) {
    if ((*plVar3 != 0) || (plVar3[3] != 0)) {
      FUN_14377d260(param_1,*plVar3,(int)plVar3[1],plVar3[3]);
    }
  }
  else {
    FUN_14377c310(param_1,*plVar3,(int)plVar3[1],plVar3[3]);
  }
  FUN_14377b120(lVar5);
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
  uVar1 = 0;
  lVar5 = *(longlong *)(param_1 + 200) + (longlong)param_2 * 0x20;
  lVar6 = (longlong)(*(int *)(param_1 + 0xd0) - param_2) * 0x20;
  uVar4 = uVar1;
  if (0 < lVar6) {
    do {
      uVar2 = (int)uVar4 + 8;
      *(undefined8 *)(uVar1 + lVar5) = *(undefined8 *)(uVar1 + 0x20 + lVar5);
      uVar1 = uVar1 + 8;
      uVar4 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar6);
  }
  return;
}



// FUNCTION 14377f680 FUN_14377f680 body=303 status=ok
// SIG undefined FUN_14377f680(void)

void FUN_14377f680(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong lVar8;
  longlong local_28;
  ulonglong uStack_20;
  longlong local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0xb8));
  lVar5 = *plVar2;
  uStack_20 = plVar2[1];
  plVar2 = (longlong *)((longlong)param_2 * 0x20 + 0x10 + *(longlong *)(param_1 + 0xb8));
  lVar8 = *plVar2;
  uStack_10 = (undefined4)plVar2[1];
  uStack_c = *(undefined4 *)((longlong)plVar2 + 0xc);
  local_28 = lVar5;
  local_18 = lVar8;
  if (lVar5 == 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))
                      (*(longlong **)(param_1 + 0x108),lVar8);
    if (lVar3 != 0) {
      lVar8 = lVar3;
    }
    local_18 = lVar8;
    uVar1 = FUN_143715430(lVar8);
    uVar4 = FUN_1437151f0(lVar8);
    plVar2 = (longlong *)FUN_14377edb0(param_1,uVar4,uVar1);
  }
  else {
    plVar2 = (longlong *)FUN_14377edb0(param_1,lVar5,uStack_20 & 0xffffffff);
    lVar8 = local_18;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14377d260(param_1,lVar5,uStack_20 & 0xffffffff,lVar8);
    lVar8 = 0;
    if (plVar2 == (longlong *)0x0) {
      if ((lVar5 != 0) &&
         (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))
                            (*(longlong **)(param_1 + 0x108),lVar5), lVar5 != 0)) {
        puVar6 = (undefined8 *)FUN_143714490(lVar5,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar3 = lVar8;
        if ((bVar7 & 0xf) == 7) {
          lVar3 = lVar5;
        }
        lVar8 = 0;
        if (lVar3 == 0) {
          lVar8 = lVar5;
        }
      }
    }
    else {
      lVar8 = *plVar2;
    }
  }
  else {
    lVar8 = *plVar2;
  }
  FUN_14377f370(&local_28,lVar8);
  return;
}



// FUNCTION 14377f7b0 FUN_14377f7b0 body=9 status=ok
// SIG undefined FUN_14377f7b0(void)

void FUN_14377f7b0(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 14377f7c0 FUN_14377f7c0 body=92 status=ok
// SIG undefined FUN_14377f7c0(void)

void FUN_14377f7c0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar4 + *(longlong *)(param_1 + 0x48));
      iVar1 = *(int *)(puVar2 + 2);
      plVar3 = (longlong *)FUN_1437143d0(*puVar2,0x10);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
      *plVar3 = (longlong)iVar1;
    } while (iVar5 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 14377f820 FUN_14377f820 body=175 status=ok
// SIG undefined FUN_14377f820(void)

void FUN_14377f820(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar2 = *(int *)(param_1 + 1);
  puVar8 = (undefined1 *)*param_1;
  uVar6 = 0;
  iVar7 = iVar2 + -1;
  lVar10 = (longlong)iVar7;
  uVar9 = uVar6;
  cVar4 = FUN_14377f020(*puVar8);
  if (cVar4 != '\0') {
    uVar5 = uVar9 & 0xffffffff;
    do {
      if (lVar10 <= (longlong)uVar5) break;
      lVar3 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      cVar4 = FUN_14377f020(puVar8[lVar3]);
    } while (cVar4 != '\0');
  }
  cVar4 = FUN_14377f020(puVar8[iVar2 + -2]);
  if (cVar4 != '\0') {
    uVar5 = uVar9 & 0xffffffff;
    puVar8 = puVar8 + lVar10 + -1;
    do {
      if (iVar7 <= (int)uVar5) break;
      puVar1 = puVar8 + -1;
      puVar8 = puVar8 + -1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = (ulonglong)((int)uVar5 + 1);
      cVar4 = FUN_14377f020(*puVar1);
    } while (cVar4 != '\0');
  }
  FUN_143745ed0(param_1,uVar9 & 0xffffffff);
  FUN_143745e50(param_1,uVar6);
  return;
}



// FUNCTION 14377f8d0 FUN_14377f8d0 body=60 status=ok
// SIG undefined FUN_14377f8d0(void)

void FUN_14377f8d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143746180(param_1,&DAT_145b1488c,0,0x7fffffff);
  if (-1 < iVar1) {
    FUN_143745e50(param_1,(*(int *)(param_1 + 8) - iVar1) + -1);
    return;
  }
  return;
}



// FUNCTION 14377f910 FUN_14377f910 body=45 status=ok
// SIG undefined FUN_14377f910(void)

void FUN_14377f910(undefined8 param_1)

{
  FUN_14377f820();
  FUN_143745ed0(param_1,1);
  FUN_143745e50(param_1,1);
  return;
}



// FUNCTION 14377f940 FUN_14377f940 body=18 status=ok
// SIG undefined FUN_14377f940(void)

longlong FUN_14377f940(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x24) == '\0')) {
    return param_1;
  }
  return 0;
}



// FUNCTION 14377f960 FUN_14377f960 body=74 status=ok
// SIG undefined FUN_14377f960(void)

undefined8 FUN_14377f960(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = 0;
  local_res10[0] = param_2;
  piVar1 = (int *)FUN_14372d420(param_1 + 0x140,local_res10,&local_res8);
  if (*piVar1 != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)*piVar1 * 8);
  }
  return 0;
}



// FUNCTION 14377f9b0 FUN_14377f9b0 body=129 status=ok
// SIG undefined FUN_14377f9b0(void)

void FUN_14377f9b0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)FUN_143714420(param_2,2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    puVar2 = (undefined8 *)FUN_143714420(param_2,2);
    uVar4 = 0;
    uVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar4 = *puVar2;
    }
    puVar2 = (undefined8 *)FUN_143714490(uVar4,1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = (uint)*puVar2;
    }
    (*(code *)(&DAT_146b84330)[uVar3 & 0xf])(param_1,uVar4);
  }
  return;
}



// FUNCTION 14377fa40 FUN_14377fa40 body=95 status=ok
// SIG undefined FUN_14377fa40(void)

void FUN_14377fa40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)FUN_143714420(param_2,2);
  if ((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, lVar1 != 0)) {
    puVar4 = (undefined8 *)FUN_143714490(lVar1,1);
    uVar2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = (uint)*puVar4;
    }
    (*(code *)(&DAT_146b84330)[uVar2 & 0xf])(param_1,lVar1);
  }
  return;
}



// FUNCTION 14377faa0 FUN_14377faa0 body=476 status=ok
// SIG undefined FUN_14377faa0(void)

void FUN_14377faa0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res18 [8];
  undefined8 *local_38;
  undefined8 *local_30;
  
  puVar4 = (uint *)FUN_143715390(param_2,local_res18);
  if ((*puVar4 >> 5 & 1) == 0) {
    plVar5 = (longlong *)*param_1;
    uVar9 = 0;
    uVar10 = 0;
    uVar12 = uVar9;
    if (0 < (int)plVar5[1]) {
      do {
        lVar1 = *plVar5;
        if (*(longlong *)(lVar1 + uVar9) != 0) {
          uVar6 = FUN_1437151f0(param_2);
          iVar3 = hkString::strCmp(uVar6,*(undefined8 *)(lVar1 + uVar9));
          if (iVar3 == 0) {
            return;
          }
        }
        plVar5 = (longlong *)*param_1;
        if (param_2 == *(longlong *)(uVar9 + 0x10 + *plVar5)) {
          return;
        }
        uVar11 = (int)uVar12 + 1;
        uVar9 = uVar9 + 0x20;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)plVar5[1]);
    }
    plVar5 = (longlong *)*param_1;
    uVar6 = FUN_143703a50();
    if (*(uint *)(plVar5 + 1) == (*(uint *)((longlong)plVar5 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar6,plVar5,0x20);
    }
    puVar8 = (undefined8 *)((longlong)(int)plVar5[1] * 0x20 + *plVar5);
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    *puVar8 = 0;
    *(undefined4 *)(puVar8 + 1) = 0xffffffff;
    puVar8[2] = param_2;
    puVar8[3] = 0;
    iVar3 = FUN_143715430(param_2);
    uVar6 = FUN_1437151f0(param_2);
    FUN_14373c2f0(param_1[1],uVar6,(longlong)iVar3);
    hkReflect::DeclIterAll::DeclIterAll(&local_38,param_2,0);
    while ((puVar8 = local_38 + 1, local_38 + 1 < local_30 ||
           (cVar2 = FUN_1437144f0(&local_38), puVar8 = local_38, cVar2 != '\0'))) {
      local_38 = puVar8;
      pbVar7 = (byte *)FUN_143714f30(local_38,local_res18);
      if ((*pbVar7 & 0x30) != 0) {
        uVar6 = *local_38;
        puVar8 = (undefined8 *)FUN_143714490(uVar6,1);
        if (puVar8 == (undefined8 *)0x0) {
          (*DAT_146b84330)(param_1,uVar6);
        }
        else {
          (*(&DAT_146b84330)[(uint)*puVar8 & 0xf])(param_1,uVar6);
        }
      }
    }
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 != 0) {
      puVar8 = (undefined8 *)FUN_143714490(lVar1,1);
      if (puVar8 != (undefined8 *)0x0) {
        uVar10 = (uint)*puVar8;
      }
      (*(&DAT_146b84330)[uVar10 & 0xf])(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 14377fc80 FUN_14377fc80 body=763 status=ok
// SIG undefined FUN_14377fc80(void)

void FUN_14377fc80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong in_stack_ffffffffffffffb8;
  ulonglong in_stack_ffffffffffffffc8;
  
  lVar1 = FUN_14377c080();
  if (lVar1 == 0) {
    puVar2 = (ulonglong *)FUN_143714420(param_2,1);
    uVar9 = 0;
    uVar3 = uVar9;
    if (puVar2 != (ulonglong *)0x0) {
      uVar3 = *puVar2;
    }
    uVar8 = 0;
    uVar4 = uVar9;
    if ((int)(uVar3 >> 8) < 1) {
      plVar5 = (longlong *)FUN_143714420(param_2,2);
      if ((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) {
        uVar10 = param_1[4];
      }
      else {
        uVar10 = param_1[2];
      }
      plVar5 = (longlong *)FUN_143714420(param_2,2);
      if ((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) {
        lVar1 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],0x40);
        if (lVar1 != 0) {
          uVar4 = FUN_1437369d0(lVar1,0,0,0,uVar10,"hkArray",
                                in_stack_ffffffffffffffc8 & 0xffffffff00000000);
        }
      }
      else {
        lVar1 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],0x78);
        if (lVar1 != 0) {
          uVar4 = FUN_143736b30(lVar1,0x22222222,0,0,uVar10,"hkArray",
                                in_stack_ffffffffffffffc8 & 0xffffffff00000000);
        }
      }
    }
    else {
      puVar2 = (ulonglong *)FUN_143714420(param_2,1);
      uVar3 = uVar9;
      if (puVar2 != (ulonglong *)0x0) {
        uVar3 = *puVar2;
      }
      puVar2 = (ulonglong *)FUN_143714420(param_2,2);
      uVar7 = uVar9;
      if (puVar2 != (ulonglong *)0x0) {
        uVar7 = *puVar2;
      }
      lVar1 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],0x68);
      if (lVar1 != 0) {
        uVar4 = FUN_143736dd0(lVar1,-(uint)(uVar7 != 0) & 0x22222222,uVar3 >> 8 & 0xffffffff,0,
                              in_stack_ffffffffffffffb8 & 0xffffffff00000000,&DAT_146b829b0,
                              &DAT_145b73138,0);
      }
    }
    plVar5 = (longlong *)FUN_143714420(param_2,2);
    if ((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) {
      uVar9 = 0x18;
      uVar3 = 8;
    }
    else {
      puVar2 = (ulonglong *)FUN_143714420(param_2,2);
      uVar3 = uVar9;
      if (puVar2 != (ulonglong *)0x0) {
        uVar3 = *puVar2;
      }
      puVar6 = (undefined8 *)FUN_143714490(uVar3,1);
      if (puVar6 != (undefined8 *)0x0) {
        uVar8 = (uint)*puVar6;
      }
      (*(code *)(&DAT_146b842e0)[uVar8 & 0xf])(param_1,uVar3,uVar4 + 0x18);
      lVar1 = *(longlong *)(uVar4 + 0x30);
      puVar2 = (ulonglong *)FUN_143714420(param_2,2);
      uVar3 = uVar9;
      if (puVar2 != (ulonglong *)0x0) {
        uVar3 = *puVar2;
      }
      puVar6 = (undefined8 *)FUN_143714490(uVar3,1);
      if (puVar6 == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*puVar6;
      }
      (*(code *)(&DAT_146b842e0)[uVar8 & 0xf])(param_1,uVar3,lVar1 + 0x10);
      puVar2 = (ulonglong *)FUN_143714420(param_2,1);
      uVar7 = uVar9;
      if (puVar2 != (ulonglong *)0x0) {
        uVar7 = *puVar2;
      }
      uVar3 = uVar9;
      if ((int)(uVar7 >> 8) < 1) {
        uVar9 = 0x18;
        uVar3 = 8;
      }
    }
    FUN_14374a630(uVar4,uVar9,uVar3);
    if ((int)uVar9 == 0) {
      FUN_14377b0c0(*param_1,uVar4);
    }
    FUN_14377f7b0(param_3,uVar4);
    return;
  }
  FUN_14377f7b0(param_3,lVar1);
  return;
}



// FUNCTION 14377ff90 FUN_14377ff90 body=523 status=ok
// SIG undefined FUN_14377ff90(void)

void FUN_14377ff90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  plVar1 = (longlong *)FUN_143714420(param_2,2);
  if ((plVar1 != (longlong *)0x0) && (lVar5 = *plVar1, lVar5 != 0)) {
    lVar2 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],0x70);
    lVar6 = 0;
    uVar8 = 0;
    lVar3 = lVar6;
    if (lVar2 != 0) {
      lVar3 = FUN_143736ce0(lVar2,0x22222222,&DAT_145b7313c,0);
    }
    *(undefined8 *)(lVar3 + 0x20) = param_1[5];
    puVar4 = (undefined8 *)FUN_143714490(lVar5,1);
    uVar9 = 0;
    bVar7 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar7 = (byte)*puVar4;
    }
    lVar2 = lVar6;
    if ((bVar7 & 0xf) == 7) {
      lVar2 = lVar5;
    }
    if (lVar2 == 0) {
      plVar1 = (longlong *)FUN_143714420(param_2,2);
      lVar5 = lVar6;
      if (plVar1 != (longlong *)0x0) {
        lVar5 = *plVar1;
      }
      puVar4 = (undefined8 *)FUN_143714490(lVar5,1);
      if (puVar4 != (undefined8 *)0x0) {
        uVar9 = (uint)*puVar4;
      }
      (*(code *)(&DAT_146b842e0)[uVar9 & 0xf])(param_1,lVar5,lVar3 + 0x18);
      lVar5 = FUN_143715320(lVar3);
      plVar1 = (longlong *)FUN_143714420(param_2,2);
      if (plVar1 != (longlong *)0x0) {
        lVar6 = *plVar1;
      }
      puVar4 = (undefined8 *)FUN_143714490(lVar6,1);
      if (puVar4 != (undefined8 *)0x0) {
        uVar8 = (uint)*puVar4;
      }
      (*(code *)(&DAT_146b842e0)[uVar8 & 0xf])(param_1,lVar6,lVar5 + 0x10);
    }
    else {
      plVar1 = (longlong *)FUN_143714420(param_2,2);
      lVar5 = lVar6;
      if (plVar1 != (longlong *)0x0) {
        lVar5 = *plVar1;
      }
      FUN_14377b5b0(*param_1,lVar5,lVar3 + 0x18);
      lVar5 = FUN_143715320(lVar3);
      plVar1 = (longlong *)FUN_143714420(param_2,2);
      if (plVar1 != (longlong *)0x0) {
        lVar6 = *plVar1;
      }
      FUN_14377b5b0(*param_1,lVar6,lVar5 + 0x10);
    }
    FUN_14377f7b0(param_3,lVar3);
    return;
  }
  lVar5 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],0x70);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_143736ce0(lVar5,0,&DAT_145b7313c,0);
  }
  *(undefined8 *)(lVar6 + 0x20) = param_1[5];
  FUN_14377f7b0(param_3,lVar6);
  return;
}



// FUNCTION 1437801a0 FUN_1437801a0 body=212 status=ok
// SIG undefined FUN_1437801a0(void)

/* WARNING: Removing unreachable block (ram,0x00014378023c) */

void FUN_1437801a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_143715430(param_2);
  uVar2 = FUN_1437151f0(param_2);
  puVar3 = (undefined8 *)FUN_14377edb0(*param_1,uVar2,uVar1);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_14377f7b0(param_3,0x22222222);
    FUN_14377b5b0(*param_1,param_2,param_3);
  }
  else {
    FUN_14377f7b0(param_3,*puVar3);
  }
  return;
}



// FUNCTION 143780280 FUN_143780280 body=99 status=ok
// SIG undefined FUN_143780280(void)

void FUN_143780280(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x38);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_143736d50(lVar2,8,8,uVar1,"const char*",0,0);
  }
  FUN_14377f7b0(param_3,uVar3);
  return;
}



// FUNCTION 1437802f0 FUN_1437802f0 body=66 status=ok
// SIG undefined FUN_1437802f0(void)

void FUN_1437802f0(longlong param_1)

{
  if (((*(int *)(param_1 + 0x1c) == 1) || (*(int *)(param_1 + 0x1c) - 4U < 2)) &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_143780340(*(longlong *)(param_1 + 0x10),1);
  }
  FUN_143716650(param_1 + 8);
  FUN_143716650(param_1);
  return;
}



// FUNCTION 143780340 FUN_143780340 body=120 status=ok
// SIG undefined FUN_143780340(void)

longlong FUN_143780340(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437802f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x28);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1437803c0 FUN_1437803c0 body=199 status=ok
// SIG undefined FUN_1437803c0(void)

undefined1 FUN_1437803c0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  cVar1 = FUN_143746f20(param_1,"hkRefPtr");
  if (cVar1 == '\0') {
    cVar1 = FUN_143746f20(param_1,"hkPtr");
    if (cVar1 == '\0') {
      cVar1 = FUN_143746f20(param_1,"hkViewPtr");
      if (cVar1 == '\0') {
        cVar1 = FUN_143746f20(param_1,"hkStrongRefPtr");
        if (cVar1 != '\0') {
          uVar2 = 0xe;
          goto LAB_143780442;
        }
        cVar1 = FUN_143746f20(param_1,"hkWeakPtr");
        if (cVar1 == '\0') {
          return 0;
        }
      }
      uVar2 = 9;
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 8;
  }
LAB_143780442:
  FUN_143745ed0(param_1,uVar2);
  FUN_1437470f0(param_1,local_res10,0x3c);
  FUN_143747010(param_1,local_res10,0x3e);
  FUN_1437470b0(param_1);
  FUN_143746fb0(param_1);
  return 1;
}



// FUNCTION 143780490 FUN_143780490 body=1423 status=ok
// SIG undefined FUN_143780490(void)

undefined8 *
FUN_143780490(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint *puVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *local_res18;
  undefined1 local_res20;
  ulonglong local_168;
  undefined8 *local_160 [3];
  undefined1 *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined1 local_138 [128];
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [136];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_143714060(&local_168,param_3);
  puVar13 = (undefined8 *)0x0;
  uVar18 = 0;
  if (1 < local_168) {
    pbVar6 = (byte *)FUN_143714f30(&local_168,&local_res18);
    if ((~*pbVar6 & 1) == 0) {
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      puVar8 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar7 + 0x58),0x28);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar13 = puVar8;
      }
      FUN_1437166c0(puVar13,param_2);
      local_148 = local_138;
      local_13c = 0x80000080;
      local_140 = 1;
      local_138[0] = 0;
      uVar9 = FUN_143714f80(param_3,local_160);
      uVar9 = hkReflect::TypeName::toString(uVar9,&local_148);
      FUN_1437166c0(puVar13 + 1,uVar9);
      puVar13[3] = 0;
      puVar13[2] = &DAT_1467df8b8;
      *(undefined1 *)(puVar13 + 4) = 0;
      local_140 = 0;
      puVar3 = local_148;
      uVar18 = local_13c;
      goto joined_r0x0001437809f3;
    }
    puVar8 = (undefined8 *)FUN_143714490(param_3,1);
    uVar17 = uVar18;
    if (puVar8 != (undefined8 *)0x0) {
      uVar17 = (uint)*puVar8;
    }
    puVar8 = puVar13;
    if ((uVar17 & 0xf) == 0) {
      puVar8 = param_3;
    }
    if ((puVar8 == (undefined8 *)0x0) &&
       (pbVar6 = (byte *)FUN_143715390(param_3,&local_res18), (~*pbVar6 & 1) == 0)) {
      return (undefined8 *)0x0;
    }
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  puVar10 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar7 + 0x58),0x28);
  puVar8 = puVar13;
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar8 = puVar10;
  }
  FUN_1437166c0(puVar8,param_2);
  local_ac = 0x80000080;
  local_b0 = 1;
  bVar2 = false;
  local_a8[0] = 0;
  local_b8 = local_a8;
  uVar9 = FUN_143714f80(param_3,local_160);
  uVar9 = hkReflect::TypeName::toString(uVar9,&local_b8);
  FUN_1437166c0(puVar8 + 1,uVar9);
  *(undefined1 *)(puVar8 + 4) = local_res20;
  *(undefined4 *)(puVar8 + 3) = 0;
  puVar10 = (undefined8 *)FUN_143714490(param_3,1);
  if (puVar10 != (undefined8 *)0x0) {
    uVar18 = (uint)*puVar10;
  }
  uVar18 = uVar18 & 0xf;
  if ((uVar18 == 4) || (((uVar18 - 2 & 0xfffffffc) == 0 && (uVar18 != 4)))) {
    bVar2 = true;
  }
  puVar10 = puVar13;
  if (bVar2) {
    puVar10 = param_3;
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_143714490(param_3,1);
    uVar18 = 0;
    bVar15 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar18 = (uint)*puVar10;
    }
    puVar10 = puVar13;
    if ((uVar18 & 0xf) == 0) {
      puVar10 = param_3;
    }
    if ((puVar10 != (undefined8 *)0x0) || (cVar4 = FUN_143780f40(param_3), cVar4 != '\0'))
    goto joined_r0x0001437809bd;
    puVar10 = (undefined8 *)FUN_143714490(param_3,1);
    bVar16 = bVar15;
    if (puVar10 != (undefined8 *)0x0) {
      bVar16 = (byte)*puVar10;
    }
    local_res18 = puVar13;
    if ((bVar16 & 0xf) == 6) {
      local_res18 = param_3;
    }
    if (local_res18 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)FUN_143714490(param_3,1);
      bVar16 = bVar15;
      if (puVar10 != (undefined8 *)0x0) {
        bVar16 = (byte)*puVar10;
      }
      local_160[0] = puVar13;
      if ((bVar16 & 0xf) == 8) {
        local_160[0] = param_3;
      }
      if (local_160[0] == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_143714490(param_3,1);
        if (puVar10 != (undefined8 *)0x0) {
          bVar15 = (byte)*puVar10;
        }
        if ((bVar15 & 0xf) == 7) {
          puVar13 = param_3;
        }
        if (puVar13 == (undefined8 *)0x0) {
          cVar4 = FUN_143755360(0x6ae11bd3,"Serialize\\Version\\hkVersionBundleUtil.cpp",0x147,
                                "hkVersionBundleUtil::Field::createFromStaticType",&DAT_145af3922,
                                "Not implemented",&DAT_145b909f0,0);
          if (cVar4 != '\0') {
            pcVar1 = (code *)swi(3);
            puVar13 = (undefined8 *)(*pcVar1)();
            return puVar13;
          }
        }
        else {
          uVar9 = (**(code **)*param_1)();
          puVar8[2] = uVar9;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 3;
        }
      }
      else {
        iVar5 = FUN_1436fc9c0(local_160[0]);
        puVar10 = local_160[0];
        local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,iVar5);
        if (iVar5 == 0) {
          plVar12 = (longlong *)FUN_143714420(local_160[0],2);
          if ((plVar12 == (longlong *)0x0) || (*plVar12 == 0)) {
            *(undefined4 *)((longlong)puVar8 + 0x1c) = 4;
            puVar8[2] = 0;
          }
          else {
            puVar13 = (undefined8 *)FUN_143714420(puVar10,2);
            if (puVar13 == (undefined8 *)0x0) {
              uVar9 = FUN_143780490(param_1,0,0,1);
              puVar8[2] = uVar9;
              *(undefined4 *)((longlong)puVar8 + 0x1c) = 4;
            }
            else {
              uVar9 = FUN_143780490(param_1,0,*puVar13,1);
              puVar8[2] = uVar9;
              *(undefined4 *)((longlong)puVar8 + 0x1c) = 4;
            }
          }
        }
        else {
          puVar10 = (undefined8 *)FUN_143714420(local_160[0],2);
          if (puVar10 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)*puVar10;
          }
          uVar9 = FUN_143780490(param_1,0,puVar13,1);
          puVar8[2] = uVar9;
          *(undefined4 *)(puVar8 + 3) = local_res18._0_4_;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 5;
        }
      }
    }
    else {
      puVar11 = (undefined8 *)FUN_143714420(local_res18,2);
      puVar10 = puVar13;
      if (puVar11 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar11;
      }
      cVar4 = FUN_1437810a0(puVar10);
      puVar10 = local_res18;
      if (cVar4 == '\0') {
        plVar12 = (longlong *)FUN_143714420(local_res18,2);
        if ((plVar12 == (longlong *)0x0) || (*plVar12 == 0)) {
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 1;
          puVar8[2] = 0;
        }
        else {
          puVar10 = (undefined8 *)FUN_143714420(puVar10,2);
          if (puVar10 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)*puVar10;
          }
          uVar9 = FUN_143780490(param_1,0,puVar13,1);
          puVar8[2] = uVar9;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 1;
        }
      }
      else {
        *(undefined4 *)((longlong)puVar8 + 0x1c) = 2;
        puVar8[2] = 0;
      }
    }
  }
  else {
joined_r0x0001437809bd:
    while ((param_3 != (undefined8 *)0x0 &&
           (puVar14 = (uint *)FUN_143715390(param_3,&local_res18), (*puVar14 >> 3 & 1) != 0))) {
      param_3 = (undefined8 *)param_3[1];
    }
    *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
    puVar8[2] = param_3;
  }
  local_b0 = 0;
  puVar13 = puVar8;
  puVar3 = local_b8;
  uVar18 = local_ac;
joined_r0x0001437809f3:
  if (-1 < (int)uVar18) {
    FUN_143702e10(&PTR_vftable_1467f0638,puVar3,1,uVar18 & 0x3fffffff);
  }
  return puVar13;
}



// FUNCTION 143780a30 FUN_143780a30 body=1274 status=ok
// SIG undefined FUN_143780a30(void)

undefined8 * FUN_143780a30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int local_res20 [2];
  longlong local_2d8;
  int local_2d0;
  uint local_2cc;
  undefined1 local_248 [32];
  undefined1 local_228 [520];
  undefined8 *puVar9;
  
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  puVar10 = (undefined8 *)0x0;
  FUN_1437166c0(puVar3,param_2);
  FUN_1437166c0(puVar3 + 1,param_3);
  *(undefined1 *)(puVar3 + 4) = 1;
  FUN_143745310(&local_2d8,param_3);
  FUN_1437470b0(&local_2d8);
  FUN_143746fb0(&local_2d8);
  cVar1 = FUN_143745f90(&local_2d8,&DAT_145b18618);
  if (cVar1 != '\0') {
    FUN_143745e50(&local_2d8,1);
    FUN_143746fb0(&local_2d8);
    lVar4 = local_2d8;
    cVar1 = FUN_143780f30(*(undefined1 *)((local_2d0 + -2) + local_2d8));
    if (cVar1 != '\0') {
      uVar12 = (ulonglong)(local_2d0 - 1);
      uVar7 = (ulonglong)(local_2d0 - 2);
      puVar9 = puVar10;
      do {
        iVar11 = (int)uVar12;
        uVar8 = (uint)puVar9;
        if (iVar11 <= (int)uVar8) break;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar8;
        cVar1 = FUN_143780f30(*(undefined1 *)((int)uVar6 + lVar4));
        iVar11 = (int)uVar12;
      } while (cVar1 != '\0');
      if (uVar8 != 0) {
        local_res20[0] = hkString::atoi((char *)(((longlong)iVar11 - (longlong)(int)uVar8) + lVar4))
        ;
        FUN_143745e50(&local_2d8,uVar8);
        FUN_143746fb0(&local_2d8);
        cVar1 = FUN_143745f90(&local_2d8,&DAT_145b4dda8);
        if (cVar1 == '\0') {
          FUN_1437134a0(local_248,local_228,0x200);
          uVar5 = Electra::FHTTPResourceRequest::URL(local_248,"Invalid array count in field ");
          uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,param_2);
          uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,&DAT_145ba0510);
          uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,param_3);
          Electra::FHTTPResourceRequest::URL(uVar5,&DAT_145b12c80);
          FUN_143732520(0x5b3ff9fe,local_228,"Serialize\\Version\\hkVersionBundleUtil.cpp",0x74);
          FUN_143713520(local_248);
          puVar3 = puVar10;
          goto LAB_143780eef;
        }
        FUN_143745e50(&local_2d8,1);
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 5;
        lVar4 = FUN_143780a30(param_1,0,local_2d8);
        if (lVar4 != 0) {
          puVar3[2] = lVar4;
          *(int *)(puVar3 + 3) = local_res20[0];
          goto LAB_143780eef;
        }
LAB_143780e69:
        FUN_1437802f0(puVar3);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),puVar3,0x28);
        puVar3 = puVar10;
        goto LAB_143780eef;
      }
    }
    FUN_1437134a0(local_248,local_228,0x200);
    uVar5 = Electra::FHTTPResourceRequest::URL(local_248,"Invalid array count in field ");
    uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,param_2);
    uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,&DAT_145ba0510);
    uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,param_3);
    Electra::FHTTPResourceRequest::URL(uVar5,&DAT_145b12c80);
    FUN_143732520(0x5b3ff9fd,local_228,"Serialize\\Version\\hkVersionBundleUtil.cpp",0x6a);
    FUN_143713520(local_248);
    puVar3 = (undefined8 *)0x0;
    goto LAB_143780eef;
  }
  cVar1 = FUN_143745f90(&local_2d8,&DAT_145af6c98);
  if ((cVar1 == '\0') ||
     (cVar1 = UPlatformEventsComponent::SupportsConvertibleLaptops(&local_2d8,"const char*"),
     cVar1 == '\0')) {
    cVar1 = FUN_143745f90(&local_2d8,"hkVariantArray");
    if ((cVar1 != '\0') || (cVar1 = FUN_143745f90(&local_2d8,"hkReflect::Any"), cVar1 != '\0')) {
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
      goto LAB_143780ee8;
    }
    cVar1 = FUN_143745f90(&local_2d8,"hkVariant");
    if ((cVar1 != '\0') || (cVar1 = FUN_143745f90(&local_2d8,"hkReflect::Var"), cVar1 != '\0')) {
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
      goto LAB_143780ee8;
    }
    cVar1 = FUN_143746f20(&local_2d8,"hkArray");
    if (cVar1 == '\0') {
      cVar1 = FUN_1437803c0(&local_2d8);
      if (cVar1 != '\0') {
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
        goto LAB_143780d63;
      }
      lVar4 = (**(code **)(*param_1 + 8))(param_1,local_2d8);
      if (lVar4 != 0) {
        puVar3[3] = 0;
        puVar3[2] = lVar4;
        goto LAB_143780eef;
      }
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 3;
      uVar5 = (**(code **)*param_1)(param_1,local_2d8);
      puVar3[2] = uVar5;
    }
    else {
      FUN_143745ed0(&local_2d8,7);
      FUN_1437470f0(&local_2d8,local_res20,0x3c);
      FUN_143747010(&local_2d8,local_res20,0x3e);
      FUN_1437470b0(&local_2d8);
      FUN_143746fb0(&local_2d8);
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
LAB_143780d63:
      lVar4 = FUN_143780a30(param_1,0,local_2d8);
      if (lVar4 == 0) goto LAB_143780e69;
      puVar3[2] = lVar4;
    }
  }
  else {
    FUN_143745e50(&local_2d8,1);
    cVar1 = FText::EqualTo(&local_2d8,"hkReflect::Type");
    if (cVar1 == '\0') {
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
      goto LAB_143780d63;
    }
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 2;
LAB_143780ee8:
    puVar3[2] = 0;
  }
  *(undefined4 *)(puVar3 + 3) = 0;
LAB_143780eef:
  local_2d0 = 0;
  if (-1 < (int)local_2cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2d8,1,local_2cc & 0x3fffffff);
  }
  return puVar3;
}



// FUNCTION 143780f30 FUN_143780f30 body=10 status=ok
// SIG undefined FUN_143780f30(void)

bool FUN_143780f30(char param_1)

{
  return (byte)(param_1 - 0x30U) < 10;
}



// FUNCTION 143780f40 FUN_143780f40 body=340 status=ok
// SIG undefined FUN_143780f40(void)

ulonglong FUN_143780f40(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  
  puVar2 = (undefined8 *)FUN_143714490(param_1,1);
  lVar9 = 0;
  bVar6 = 0;
  bVar7 = bVar6;
  if (puVar2 != (undefined8 *)0x0) {
    bVar7 = (byte)*puVar2;
  }
  lVar3 = lVar9;
  if ((bVar7 & 0xf) == 8) {
    lVar3 = param_1;
  }
  plVar4 = (longlong *)0x0;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1,1);
    bVar7 = bVar6;
    if (puVar2 != (undefined8 *)0x0) {
      bVar7 = (byte)*puVar2;
    }
    lVar3 = lVar9;
    if ((bVar7 & 0xf) == 8) {
      lVar3 = param_1;
    }
    plVar4 = (longlong *)FUN_143714420(lVar3,2);
    if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
      puVar2 = (undefined8 *)FUN_143714490(param_1,1);
      bVar7 = bVar6;
      if (puVar2 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar2;
      }
      lVar3 = lVar9;
      if ((bVar7 & 0xf) == 8) {
        lVar3 = param_1;
      }
      plVar4 = (longlong *)FUN_143714420(lVar3,2);
      lVar3 = lVar9;
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *plVar4;
      }
      puVar2 = (undefined8 *)FUN_143714490(lVar3,1);
      bVar7 = bVar6;
      if (puVar2 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar2;
      }
      lVar5 = lVar9;
      if ((bVar7 & 0xf) == 5) {
        lVar5 = lVar3;
      }
      plVar4 = (longlong *)0x0;
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)FUN_143714490(param_1,1);
        if (puVar2 != (undefined8 *)0x0) {
          bVar6 = (byte)*puVar2;
        }
        lVar3 = lVar9;
        if ((bVar6 & 0xf) == 8) {
          lVar3 = param_1;
        }
        plVar4 = (longlong *)FUN_143714420(lVar3,1);
        if (plVar4 != (longlong *)0x0) {
          lVar9 = *plVar4;
        }
        iVar8 = (int)((ulonglong)lVar9 >> 8);
        if (iVar8 != 0) {
          uVar1 = iVar8 - 4;
          return (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xfffffff3) == 0);
        }
      }
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 1437810a0 FUN_1437810a0 body=59 status=ok
// SIG undefined FUN_1437810a0(void)

undefined1 FUN_1437810a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_143715410();
    if (lVar1 == 0) {
      cVar2 = FUN_143714910(param_1,&DAT_1467e2850);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1437810e0 FUN_1437810e0 body=245 status=ok
// SIG undefined FUN_1437810e0(void)

ulonglong FUN_1437810e0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == (ulonglong *)0x0) {
    return 0;
  }
  uVar4 = *param_2;
  if ((param_1[1] < *param_1) &&
     (cVar3 = FUN_143755360(0,
                            "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Types/hkVarArgsV.h"
                            ,0x24,"hkVarArgs::Vector::getSize","m_end >= m_begin",
                            "Inconsistent begin/end pointers in hkVarArgs::Vector.",&DAT_145b909f0,0
                           ), cVar3 != '\0')) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  puVar1 = (undefined8 *)*param_1;
  uVar5 = (longlong)(param_1[1] - (longlong)puVar1) >> 4;
  uVar6 = uVar5;
  if (uVar4 < uVar5) {
    uVar5 = uVar4;
    uVar6 = uVar4;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    param_2 = param_2 + 1;
    *param_3 = *param_3 + 8;
    *puVar1 = *(undefined8 *)(*param_3 + -8);
    puVar1[1] = *param_2;
    puVar1 = puVar1 + 2;
  }
  return uVar6;
}



// FUNCTION 1437811f0 FUN_1437811f0 body=120 status=ok
// SIG undefined FUN_1437811f0(void)

undefined8 FUN_1437811f0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x58);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143781270(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143781270 FUN_143781270 body=70 status=ok
// SIG undefined FUN_143781270(void)

undefined8 * FUN_143781270(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkErrorRouter::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370d870(param_1 + 6,0);
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1437812c0 FUN_1437812c0 body=216 status=ok
// SIG undefined FUN_1437812c0(void)

void FUN_1437812c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkErrorRouter::vftable;
  lVar1 = param_1[3];
  lVar3 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  uVar2 = FUN_143703a50();
  lVar1 = param_1[3];
  lVar3 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437813a0 FUN_1437813a0 body=139 status=ok
// SIG undefined FUN_1437813a0(void)

longlong FUN_1437813a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437812c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 143781430 FUN_143781430 body=221 status=ok
// SIG undefined FUN_143781430(void)

undefined4
FUN_143781430(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    uVar2 = 0;
    if ((*(char *)(param_1 + 0x28) == '\0') && (iVar3 = 0, 0 < *(int *)(param_1 + 0x20))) {
      lVar4 = 0;
      do {
        *(undefined1 *)(param_1 + 0x28) = 1;
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
        uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4,param_5,param_6);
        iVar3 = iVar3 + 1;
        *(undefined1 *)(param_1 + 0x28) = 0;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x20));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return uVar2;
  }
  return 0;
}



// FUNCTION 143781510 operator== body=45 status=ok
// SIG undefined operator==(void)

undefined4 hkReflect::StringValue::operator==(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*param_1 == param_2) {
    return 1;
  }
  if (((*param_1 != 0) && (param_2 != 0)) && (iVar1 = hkString::strCmp(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143781540 FUN_143781540 body=55 status=ok
// SIG undefined FUN_143781540(void)

undefined8 FUN_143781540(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == param_2) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = hkString::strCmp();
  return uVar1;
}



// FUNCTION 143781580 FUN_143781580 body=204 status=ok
// SIG undefined FUN_143781580(void)

undefined4 *
FUN_143781580(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)FUN_143714420(param_4,2);
  if (plVar4 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar4;
  }
  uVar1 = param_3[1];
  uVar3 = 0;
  uVar2 = *param_3;
  uVar5 = 0;
  if (lVar6 != 0) {
    uVar3 = FUN_1437152f0(lVar6);
    uVar5 = FUN_1437151a0(lVar6);
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
  }
  *param_5 = (ulonglong)uVar1 + (longlong)param_3;
  param_5[1] = lVar6;
  *(uint *)(param_5 + 2) = (uint)uVar2;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar3;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143781650 FUN_143781650 body=26 status=ok
// SIG undefined FUN_143781650(void)

undefined4 *
FUN_143781650(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,uint param_5
             )

{
  undefined4 uVar1;
  
  uVar1 = 0x80040200;
  if (param_5 == *param_3) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 143781670 FUN_143781670 body=85 status=ok
// SIG undefined FUN_143781670(void)

undefined8
FUN_143781670(undefined8 param_1,ushort *param_2,undefined8 param_3,longlong param_4,uint param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)FUN_143714420(param_3,2);
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar2;
    }
    cVar1 = FUN_143714870(param_4,uVar3);
    if ((cVar1 != '\0') && (param_5 == *param_2)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1437816d0 FUN_1437816d0 body=33 status=ok
// SIG undefined FUN_1437816d0(void)

undefined4 *
FUN_1437816d0(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
             short param_5,undefined8 param_6,undefined2 param_7)

{
  *param_2 = 0;
  param_3[1] = param_5 - (short)param_3;
  *param_3 = param_7;
  return param_2;
}



// FUNCTION 143781700 FUN_143781700 body=26 status=ok
// SIG undefined FUN_143781700(void)

longlong FUN_143781700(longlong param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x7c) = uVar1;
  *(uint *)(param_1 + 0x80) = uVar1;
  return param_1;
}



// FUNCTION 143781720 FUN_143781720 body=454 status=ok
// SIG undefined FUN_143781720(void)

void FUN_143781720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  plVar5 = (longlong *)FUN_143741ed0(param_2,local_20,param_4);
  uVar8 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  bVar2 = 0;
  if (plVar5[1] != 0) {
    puVar6 = (undefined8 *)FUN_143714490(plVar5[1],1);
    bVar3 = bVar2;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    if ((bVar3 & 0xf) == 8) {
      local_38 = *plVar5;
      lStack_30 = plVar5[1];
      if ((*(byte *)(plVar5 + 2) & 1) != 0) {
        FUN_1437329e0(plVar5[2] & 0xfffffffffffffffe);
      }
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      local_28 = plVar5[2];
    }
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if (local_38 != 0) {
    puVar6 = (undefined8 *)FUN_143714490(param_3,1);
    bVar3 = bVar2;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    uVar7 = uVar8;
    if ((bVar3 & 0xf) == 7) {
      uVar7 = param_3;
    }
    puVar6 = (undefined8 *)FUN_143714b80(uVar7,local_40,param_4,1);
    FUN_143714040(&local_48,*puVar6);
    puVar6 = (undefined8 *)FUN_143714490(local_48,1);
    if (puVar6 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar6;
    }
    uVar7 = uVar8;
    if ((bVar2 & 0xf) == 8) {
      uVar7 = local_48;
    }
    puVar6 = (undefined8 *)FUN_143714420(uVar7,2);
    if (puVar6 != (undefined8 *)0x0) {
      uVar8 = *puVar6;
    }
    piVar1 = (int *)(param_1 + (longlong)*(int *)(param_1 + 0x78) * 0xc);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    iVar4 = FUN_143742950(&local_38);
    *piVar1 = iVar4;
    iVar4 = FUN_1437152f0(uVar8);
    piVar1[1] = iVar4 * *piVar1 + 0xfU & 0xfffffff0;
    iVar4 = FUN_143715270(&local_48);
    piVar1[2] = iVar4;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + piVar1[1];
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437818f0 FUN_1437818f0 body=220 status=ok
// SIG undefined FUN_1437818f0(void)

undefined8 * FUN_1437818f0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)FUN_143702b60(*(undefined8 *)((longlong)pvVar3 + 0x58),1,uVar1);
  FUN_14370c720(puVar4,0);
  puVar8 = (undefined8 *)0x0;
  puVar6 = puVar8;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = hkReferencedObject::vftable;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0x1ffff;
    puVar6 = puVar4;
  }
  *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(param_1 + 0x80);
  *(undefined2 *)((longlong)puVar6 + 0x12) = 0;
  iVar9 = *(int *)(param_1 + 0x7c);
  if (0 < *(int *)(param_1 + 0x78)) {
    piVar5 = (int *)(param_1 + 8);
    do {
      iVar2 = *piVar5;
      uVar7 = (int)puVar8 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar7;
      *(short *)((longlong)iVar2 + 2 + (longlong)puVar4) = (short)iVar9 - (short)*piVar5;
      *(short *)((longlong)iVar2 + (longlong)puVar4) = (short)piVar5[-2];
      iVar9 = iVar9 + piVar5[-1];
      piVar5 = piVar5 + 3;
    } while ((int)uVar7 < *(int *)(param_1 + 0x78));
  }
  return puVar4;
}



// FUNCTION 1437819d0 FUN_1437819d0 body=44 status=ok
// SIG undefined FUN_1437819d0(void)

longlong * FUN_1437819d0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000100;
  FUN_143781a30();
  return param_1;
}



// FUNCTION 143781a00 FUN_143781a00 body=44 status=ok
// SIG undefined FUN_143781a00(void)

longlong * FUN_143781a00(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000100;
  FUN_143781af0();
  return param_1;
}



// FUNCTION 143781a30 FUN_143781a30 body=180 status=ok
// SIG undefined FUN_143781a30(void)

void FUN_143781a30(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    iVar3 = thunk_FUN_143782220(param_2,0xffffffff);
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar4 < iVar3) {
      iVar2 = uVar4 * 2;
      iVar1 = iVar3;
      if (iVar3 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
    }
    *(int *)(param_1 + 1) = iVar3;
    thunk_FUN_143781fc0(*param_1,iVar3,param_2,0xffffffff);
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*param_1,1,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)
    ;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 143781af0 FUN_143781af0 body=180 status=ok
// SIG undefined FUN_143781af0(void)

void FUN_143781af0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    iVar3 = FUN_143782310(param_2,0xffffffff);
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar4 < iVar3) {
      iVar2 = uVar4 * 2;
      iVar1 = iVar3;
      if (iVar3 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,2);
    }
    *(int *)(param_1 + 1) = iVar3;
    thunk_FUN_143781bb0(*param_1,iVar3,param_2,0xffffffff);
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*param_1,2,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)
    ;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 143781bb0 FUN_143781bb0 body=919 status=ok
// SIG undefined FUN_143781bb0(void)

ulonglong FUN_143781bb0(ushort *param_1,int param_2,longlong param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = FUN_143781f50(param_3,param_4);
    return uVar6;
  }
  iVar12 = 0;
  if (param_4 != 0) {
    iVar10 = 2;
    iVar9 = 1;
    uVar6 = 0;
    puVar11 = param_1;
    while( true ) {
      iVar3 = (int)uVar6;
      uVar4 = iVar3 + 1;
      uVar7 = (ulonglong)uVar4;
      bVar2 = *(byte *)(uVar6 + param_3);
      if (bVar2 == 0) break;
      if (bVar2 < 0xc0) {
        if (param_2 <= iVar9) {
LAB_143781f0a:
          param_1[iVar12] = 0;
          iVar9 = FUN_143781f50((ulonglong)uVar4 + param_3,param_4 - uVar4);
          return (ulonglong)(uint)(iVar9 + 1 + iVar12);
        }
        iVar12 = iVar12 + 1;
        iVar9 = iVar9 + 1;
        *puVar11 = (ushort)bVar2;
        iVar10 = iVar10 + 1;
      }
      else if (bVar2 < 0xe0) {
        if (param_2 <= iVar9) {
          uVar4 = iVar3 + 2;
          goto LAB_143781f0a;
        }
        if ((param_4 < iVar3 + 2U) || (pbVar1 = (byte *)(uVar7 + param_3), *pbVar1 == 0)) break;
        iVar12 = iVar12 + 1;
        iVar9 = iVar9 + 1;
        uVar7 = (ulonglong)(iVar3 + 2U);
        *puVar11 = (ushort)(bVar2 & 0x1f) * 0x40 + (ushort)(*pbVar1 & 0x3f);
        iVar10 = iVar10 + 1;
      }
      else if (bVar2 < 0xf0) {
        if (param_2 <= iVar9) {
          uVar4 = iVar3 + 3;
          goto LAB_143781f0a;
        }
        if (((param_4 < iVar3 + 3U) || (pbVar1 = (byte *)(uVar7 + param_3), *pbVar1 == 0)) ||
           (*(char *)((ulonglong)(iVar3 + 2) + param_3) == '\0')) break;
        iVar12 = iVar12 + 1;
        iVar9 = iVar9 + 1;
        uVar7 = (ulonglong)(iVar3 + 3);
        *puVar11 = ((ushort)(*pbVar1 & 0x3f) + (ushort)bVar2 * 0x40) * 0x40 +
                   (ushort)(*(byte *)((ulonglong)(iVar3 + 2) + param_3) & 0x3f);
        iVar10 = iVar10 + 1;
      }
      else {
        if (bVar2 < 0xf8) {
          if ((((param_4 < iVar3 + 4U) || (*(char *)(uVar7 + param_3) == '\0')) ||
              (uVar6 = (ulonglong)(iVar3 + 2), *(char *)(uVar6 + param_3) == '\0')) ||
             (*(char *)((ulonglong)(iVar3 + 3) + param_3) == '\0')) break;
          iVar8 = (((int)*(char *)(uVar7 + param_3) & 0x3fU) + (bVar2 & 7) * 0x40) * 0x1000;
LAB_143781e6b:
          uVar4 = ((int)*(char *)(uVar6 + param_3) & 0x3fU) << 6;
        }
        else {
          if (0xfb < bVar2) {
            if (((((iVar3 + 6U <= param_4) && (*(char *)(uVar7 + param_3) != '\0')) &&
                 (*(char *)((ulonglong)(iVar3 + 2) + param_3) != '\0')) &&
                ((*(char *)((ulonglong)(iVar3 + 3) + param_3) != '\0' &&
                 (*(char *)((ulonglong)(iVar3 + 4) + param_3) != '\0')))) &&
               (*(char *)((ulonglong)(iVar3 + 5) + param_3) != '\0')) {
              iVar8 = (((int)*(char *)(uVar7 + param_3) & 0x3fU) + (bVar2 & 1) * 0x40) * 0x1000000 +
                      ((int)*(char *)((ulonglong)(iVar3 + 2) + param_3) & 0x3fU) * 0x40000 +
                      ((int)*(char *)((ulonglong)(iVar3 + 3) + param_3) & 0x3fU) * 0x1000;
              uVar6 = (ulonglong)(iVar3 + 4);
              goto LAB_143781e6b;
            }
            break;
          }
          if (((param_4 < iVar3 + 5U) || (*(char *)(uVar7 + param_3) == '\0')) ||
             ((*(char *)((ulonglong)(iVar3 + 2) + param_3) == '\0' ||
              ((*(char *)((ulonglong)(iVar3 + 3) + param_3) == '\0' ||
               (*(char *)((ulonglong)(iVar3 + 4) + param_3) == '\0')))))) break;
          uVar6 = (ulonglong)(iVar3 + 3);
          iVar8 = (((int)*(char *)(uVar7 + param_3) & 0x3fU) + (bVar2 & 3) * 0x40) * 0x1000 +
                  ((int)*(char *)((ulonglong)(iVar3 + 2) + param_3) & 0x3fU) * 0x40;
          uVar4 = (int)*(char *)(uVar6 + param_3) & 0x3f;
        }
        uVar5 = (int)uVar6 + 2;
        uVar7 = (ulonglong)uVar5;
        if (param_2 <= iVar10) {
          param_1[iVar12] = 0;
          iVar9 = FUN_143781f50((ulonglong)uVar5 + param_3,param_4 - uVar5);
          return (ulonglong)(uint)(iVar9 + 2 + iVar12);
        }
        uVar4 = (iVar8 + uVar4 + ((int)*(char *)((ulonglong)((int)uVar6 + 1) + param_3) & 0x3fU)) -
                0x10000;
        iVar12 = iVar12 + 2;
        iVar9 = iVar9 + 2;
        *puVar11 = (short)(uVar4 >> 10) + 0xd800;
        puVar11 = puVar11 + 1;
        iVar10 = iVar10 + 2;
        *puVar11 = ((ushort)uVar4 & 0x3ff) + 0xdc00;
      }
      puVar11 = puVar11 + 1;
      uVar6 = uVar7;
      if (param_4 <= (uint)uVar7) break;
    }
  }
  param_1[iVar12] = 0;
  return (ulonglong)(iVar12 + 1);
}



// FUNCTION 143781f50 FUN_143781f50 body=108 status=ok
// SIG undefined FUN_143781f50(void)

int FUN_143781f50(longlong param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  iVar2 = 0;
  uVar6 = uVar3;
  if (param_2 != 0) {
    do {
      iVar2 = (int)uVar3;
      bVar1 = *(byte *)(uVar6 + param_1);
      if (bVar1 == 0) break;
      if (bVar1 < 0xc0) {
        uVar3 = (ulonglong)(iVar2 + 1);
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = (ulonglong)(iVar2 + 1);
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        uVar3 = (ulonglong)(iVar2 + 1);
        iVar4 = 3;
      }
      else {
        if (bVar1 < 0xf8) {
          iVar4 = 4;
        }
        else {
          iVar4 = 5;
          if (0xfb < bVar1) {
            iVar4 = 6;
          }
        }
        uVar3 = (ulonglong)(iVar2 + 2);
      }
      iVar2 = (int)uVar3;
      uVar5 = (int)uVar6 + iVar4;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_2);
  }
  return iVar2 + 1;
}



// FUNCTION 143781fc0 FUN_143781fc0 body=587 status=ok
// SIG undefined FUN_143781fc0(void)

ulonglong FUN_143781fc0(longlong param_1,int param_2,longlong param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_2 == 0) {
    uVar4 = FUN_143782220(param_3,param_4);
    return uVar4;
  }
  iVar8 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      uVar9 = (int)uVar4 + 1;
      uVar11 = (ulonglong)uVar9;
      uVar1 = *(ushort *)(param_3 + uVar4 * 2);
      uVar10 = (uint)uVar1;
      bVar7 = (byte)uVar1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x80) {
        lVar5 = (longlong)iVar8;
        if (param_2 <= iVar8 + 1) {
          *(undefined1 *)(lVar5 + param_1) = 0;
          iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar9);
          return (ulonglong)(uint)(iVar3 + 1 + iVar8);
        }
      }
      else {
        if (uVar1 < 0x800) {
          lVar5 = (longlong)iVar8;
          if (param_2 <= iVar8 + 2) {
            *(undefined1 *)(lVar5 + param_1) = 0;
            iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar9);
            return (ulonglong)(uint)(iVar3 + 2 + iVar8);
          }
          bVar6 = (byte)(uVar1 >> 6) | 0xc0;
        }
        else {
          if ((ushort)(uVar1 + 0x2800) < 0x800) {
            if ((param_4 <= uVar9) || (uVar2 = *(ushort *)(param_3 + uVar11 * 2), uVar2 == 0)) {
              if (param_2 <= iVar8 + 3) {
                *(undefined1 *)(iVar8 + param_1) = 0;
                return (ulonglong)(iVar8 + 4);
              }
              *(undefined1 *)(iVar8 + param_1) = 0xef;
              iVar3 = iVar8 + 2;
              *(undefined1 *)((iVar8 + 1) + param_1) = 0xbf;
              iVar8 = iVar8 + 3;
              *(undefined1 *)(iVar3 + param_1) = 0xbd;
              break;
            }
            uVar10 = (int)uVar4 + 2;
            uVar11 = (ulonglong)uVar10;
            lVar5 = (longlong)iVar8;
            if (param_2 <= iVar8 + 4) {
              *(undefined1 *)(lVar5 + param_1) = 0;
              iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar10);
              return (ulonglong)(uint)(iVar3 + 4 + iVar8);
            }
            iVar8 = iVar8 + 1;
            uVar10 = (uint)uVar2 + (uint)uVar1 * 0x400 + -0x35fdc00;
            *(byte *)(lVar5 + param_1) = (byte)(uVar10 >> 0x12) | 0xf0;
            *(byte *)(iVar8 + param_1) = (byte)(uVar10 >> 0xc) & 0x3f | 0x80;
            bVar6 = (byte)(uVar10 >> 6);
          }
          else {
            if (param_2 <= iVar8 + 3) {
              *(undefined1 *)(iVar8 + param_1) = 0;
              iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar9);
              return (ulonglong)(uint)(iVar3 + 3 + iVar8);
            }
            *(byte *)(iVar8 + param_1) = (byte)(uVar1 >> 0xc) | 0xe0;
            bVar6 = (byte)(uVar1 >> 6);
          }
          bVar7 = (byte)uVar10;
          iVar8 = iVar8 + 1;
          lVar5 = (longlong)iVar8;
          bVar6 = bVar6 & 0x3f | 0x80;
        }
        iVar8 = iVar8 + 1;
        *(byte *)(lVar5 + param_1) = bVar6;
        lVar5 = (longlong)iVar8;
        bVar7 = bVar7 & 0x3f | 0x80;
      }
      iVar8 = iVar8 + 1;
      *(byte *)(lVar5 + param_1) = bVar7;
      uVar4 = uVar11;
    } while ((uint)uVar11 < param_4);
  }
  *(undefined1 *)(iVar8 + param_1) = 0;
  return (ulonglong)(iVar8 + 1);
}



// FUNCTION 143782210 thunk_FUN_143781fc0 body=5 status=ok
// SIG undefined thunk_FUN_143781fc0(void)

ulonglong thunk_FUN_143781fc0(longlong param_1,int param_2,longlong param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_2 == 0) {
    uVar4 = FUN_143782220(param_3,param_4);
    return uVar4;
  }
  iVar8 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      uVar9 = (int)uVar4 + 1;
      uVar11 = (ulonglong)uVar9;
      uVar1 = *(ushort *)(param_3 + uVar4 * 2);
      uVar10 = (uint)uVar1;
      bVar7 = (byte)uVar1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x80) {
        lVar5 = (longlong)iVar8;
        if (param_2 <= iVar8 + 1) {
          *(undefined1 *)(lVar5 + param_1) = 0;
          iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar9);
          return (ulonglong)(uint)(iVar3 + 1 + iVar8);
        }
      }
      else {
        if (uVar1 < 0x800) {
          lVar5 = (longlong)iVar8;
          if (param_2 <= iVar8 + 2) {
            *(undefined1 *)(lVar5 + param_1) = 0;
            iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar9);
            return (ulonglong)(uint)(iVar3 + 2 + iVar8);
          }
          bVar6 = (byte)(uVar1 >> 6) | 0xc0;
        }
        else {
          if ((ushort)(uVar1 + 0x2800) < 0x800) {
            if ((param_4 <= uVar9) || (uVar2 = *(ushort *)(param_3 + uVar11 * 2), uVar2 == 0)) {
              if (param_2 <= iVar8 + 3) {
                *(undefined1 *)(iVar8 + param_1) = 0;
                return (ulonglong)(iVar8 + 4);
              }
              *(undefined1 *)(iVar8 + param_1) = 0xef;
              iVar3 = iVar8 + 2;
              *(undefined1 *)((iVar8 + 1) + param_1) = 0xbf;
              iVar8 = iVar8 + 3;
              *(undefined1 *)(iVar3 + param_1) = 0xbd;
              break;
            }
            uVar10 = (int)uVar4 + 2;
            uVar11 = (ulonglong)uVar10;
            lVar5 = (longlong)iVar8;
            if (param_2 <= iVar8 + 4) {
              *(undefined1 *)(lVar5 + param_1) = 0;
              iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar10);
              return (ulonglong)(uint)(iVar3 + 4 + iVar8);
            }
            iVar8 = iVar8 + 1;
            uVar10 = (uint)uVar2 + (uint)uVar1 * 0x400 + -0x35fdc00;
            *(byte *)(lVar5 + param_1) = (byte)(uVar10 >> 0x12) | 0xf0;
            *(byte *)(iVar8 + param_1) = (byte)(uVar10 >> 0xc) & 0x3f | 0x80;
            bVar6 = (byte)(uVar10 >> 6);
          }
          else {
            if (param_2 <= iVar8 + 3) {
              *(undefined1 *)(iVar8 + param_1) = 0;
              iVar3 = FUN_143782220(param_3 + uVar11 * 2,param_4 - uVar9);
              return (ulonglong)(uint)(iVar3 + 3 + iVar8);
            }
            *(byte *)(iVar8 + param_1) = (byte)(uVar1 >> 0xc) | 0xe0;
            bVar6 = (byte)(uVar1 >> 6);
          }
          bVar7 = (byte)uVar10;
          iVar8 = iVar8 + 1;
          lVar5 = (longlong)iVar8;
          bVar6 = bVar6 & 0x3f | 0x80;
        }
        iVar8 = iVar8 + 1;
        *(byte *)(lVar5 + param_1) = bVar6;
        lVar5 = (longlong)iVar8;
        bVar7 = bVar7 & 0x3f | 0x80;
      }
      iVar8 = iVar8 + 1;
      *(byte *)(lVar5 + param_1) = bVar7;
      uVar4 = uVar11;
    } while ((uint)uVar11 < param_4);
  }
  *(undefined1 *)(iVar8 + param_1) = 0;
  return (ulonglong)(iVar8 + 1);
}



// FUNCTION 143782220 FUN_143782220 body=204 status=ok
// SIG undefined FUN_143782220(void)

int FUN_143782220(longlong param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar7 = uVar4;
  if (param_2 == 0) {
    return 1;
  }
  do {
    uVar6 = (uint)uVar7;
    uVar3 = (int)uVar4 + 1;
    uVar5 = (ulonglong)uVar3;
    uVar1 = *(ushort *)(param_1 + uVar4 * 2);
    if (uVar1 == 0) break;
    if (uVar1 < 0x80) {
      iVar2 = 1;
    }
    else if (uVar1 < 0x800) {
      iVar2 = 2;
    }
    else if ((ushort)(uVar1 + 0x2800) < 0x800) {
      if ((param_2 <= uVar3) || (*(short *)(param_1 + uVar5 * 2) == 0)) {
        return uVar6 + 4;
      }
      uVar5 = (ulonglong)((int)uVar4 + 2);
      iVar2 = 4;
    }
    else {
      iVar2 = 3;
    }
    uVar6 = uVar6 + iVar2;
    uVar4 = uVar5;
    uVar7 = (ulonglong)uVar6;
  } while ((uint)uVar5 < param_2);
  return uVar6 + 1;
}



// FUNCTION 1437822f0 thunk_FUN_143782220 body=5 status=ok
// SIG undefined thunk_FUN_143782220(void)

int thunk_FUN_143782220(longlong param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar7 = uVar4;
  if (param_2 == 0) {
    return 1;
  }
  do {
    uVar6 = (uint)uVar7;
    uVar3 = (int)uVar4 + 1;
    uVar5 = (ulonglong)uVar3;
    uVar1 = *(ushort *)(param_1 + uVar4 * 2);
    if (uVar1 == 0) break;
    if (uVar1 < 0x80) {
      iVar2 = 1;
    }
    else if (uVar1 < 0x800) {
      iVar2 = 2;
    }
    else if ((ushort)(uVar1 + 0x2800) < 0x800) {
      if ((param_2 <= uVar3) || (*(short *)(param_1 + uVar5 * 2) == 0)) {
        return uVar6 + 4;
      }
      uVar5 = (ulonglong)((int)uVar4 + 2);
      iVar2 = 4;
    }
    else {
      iVar2 = 3;
    }
    uVar6 = uVar6 + iVar2;
    uVar4 = uVar5;
    uVar7 = (ulonglong)uVar6;
  } while ((uint)uVar5 < param_2);
  return uVar6 + 1;
}



// FUNCTION 143782300 thunk_FUN_143781bb0 body=5 status=ok
// SIG undefined thunk_FUN_143781bb0(void)

void thunk_FUN_143781bb0(void)

{
  FUN_143781bb0();
  return;
}



// FUNCTION 143782310 FUN_143782310 body=5 status=ok
// SIG undefined FUN_143782310(void)

int FUN_143782310(longlong param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  iVar2 = 0;
  uVar6 = uVar3;
  if (param_2 != 0) {
    do {
      iVar2 = (int)uVar3;
      bVar1 = *(byte *)(uVar6 + param_1);
      if (bVar1 == 0) break;
      if (bVar1 < 0xc0) {
        uVar3 = (ulonglong)(iVar2 + 1);
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = (ulonglong)(iVar2 + 1);
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        uVar3 = (ulonglong)(iVar2 + 1);
        iVar4 = 3;
      }
      else {
        if (bVar1 < 0xf8) {
          iVar4 = 4;
        }
        else {
          iVar4 = 5;
          if (0xfb < bVar1) {
            iVar4 = 6;
          }
        }
        uVar3 = (ulonglong)(iVar2 + 2);
      }
      iVar2 = (int)uVar3;
      uVar5 = (int)uVar6 + iVar4;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_2);
  }
  return iVar2 + 1;
}



// FUNCTION 143782320 FUN_143782320 body=59 status=ok
// SIG undefined FUN_143782320(void)

undefined8 * FUN_143782320(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkXmlLexAnalyzer::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  FUN_1437512c0(param_1 + 3);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 143782360 FUN_143782360 body=148 status=ok
// SIG undefined FUN_143782360(void)

longlong FUN_143782360(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143751370(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x68;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143782400 FUN_143782400 body=159 status=ok
// SIG undefined FUN_143782400(void)

ulonglong FUN_143782400(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  char local_res8 [8];
  
  builtin_strncpy(local_res8,"-->",4);
LAB_14378241a:
  lVar2 = 0;
  do {
    lVar5 = lVar2;
    pcVar4 = *(char **)(param_1 + 0x38);
    if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar4) {
      FUN_143751600(param_1 + 0x18,0x100);
      pcVar4 = *(char **)(param_1 + 0x38);
      if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar4)
      goto LAB_143782481;
    }
    cVar1 = *pcVar4;
    *(char **)(param_1 + 0x38) = pcVar4 + 1;
    if (cVar1 == '\0') {
LAB_143782481:
      uVar3 = CCallbackImpl<12>::GetCallbackSizeBytes(param_1,"Badly formed comment");
      return uVar3;
    }
    if (local_res8[lVar5] != cVar1) goto LAB_14378241a;
    lVar2 = lVar5 + 1;
    if (lVar5 + 1 == 3) {
      return (ulonglong)((int)lVar5 + 2);
    }
  } while( true );
}



// FUNCTION 1437824a0 FUN_1437824a0 body=147 status=ok
// SIG undefined FUN_1437824a0(void)

undefined8 FUN_1437824a0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
LAB_1437824b0:
  cVar1 = **(char **)(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_143751600(param_1 + 0x18,0x100);
    cVar1 = **(char **)(param_1 + 0x38);
  }
  if ((((0x19 < (byte)(cVar1 + 0x9fU)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
      (9 < (byte)(cVar1 - 0x30U))) && ((cVar1 != '_' && (cVar1 != ':')))) {
    return 8;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if ((ulonglong)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= uVar2)
  goto code_r0x000143782500;
  goto LAB_14378251e;
code_r0x000143782500:
  FUN_143751600(param_1 + 0x18,0x100);
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 < (ulonglong)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40))) {
LAB_14378251e:
    *(ulonglong *)(param_1 + 0x38) = uVar2 + 1;
  }
  goto LAB_1437824b0;
}



// FUNCTION 143782540 FUN_143782540 body=125 status=ok
// SIG undefined FUN_143782540(void)

undefined8 FUN_143782540(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar3 = *(char **)(param_1 + 0x38);
    if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar3) {
      FUN_143751600(param_1 + 0x18,0x100);
      pcVar3 = *(char **)(param_1 + 0x38);
      if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar3)
      break;
    }
    cVar1 = *pcVar3;
    *(char **)(param_1 + 0x38) = pcVar3 + 1;
    if (cVar1 == '\0') break;
    if (cVar1 == '\"') {
      return 10;
    }
  }
  uVar2 = CCallbackImpl<12>::GetCallbackSizeBytes(param_1,"Didn\'t hit terminating \"");
  return uVar2;
}



// FUNCTION 1437825c0 FUN_1437825c0 body=172 status=ok
// SIG undefined FUN_1437825c0(void)

undefined8 FUN_1437825c0(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((ulonglong)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40)) <
      *(ulonglong *)(param_1 + 0x38)) {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) - 1;
  }
  while( true ) {
    pbVar2 = *(byte **)(param_1 + 0x38);
    if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar2) {
      FUN_143751600(param_1 + 0x18,0x100);
      pbVar2 = *(byte **)(param_1 + 0x38);
      if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar2) {
        return 2;
      }
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x38) = pbVar2 + 1;
    if (bVar1 == 0) break;
    if ((bVar1 == 0x3c) ||
       ((bVar1 < 0x21 && ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)))) {
      if ((byte *)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40)) < pbVar2 + 1)
      {
        *(byte **)(param_1 + 0x38) = pbVar2;
      }
      return 2;
    }
  }
  return 2;
}



// FUNCTION 143782670 FUN_143782670 body=147 status=ok
// SIG undefined FUN_143782670(void)

undefined8 FUN_143782670(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
LAB_143782690:
  bVar1 = **(byte **)(param_1 + 0x38);
  if (bVar1 == 0) {
    FUN_143751600(param_1 + 0x18,0x100);
    bVar1 = **(byte **)(param_1 + 0x38);
  }
  if ((0x20 < bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
    return 3;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if ((ulonglong)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= uVar2)
  goto code_r0x0001437826cb;
  goto LAB_1437826e9;
code_r0x0001437826cb:
  FUN_143751600(param_1 + 0x18,0x100);
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 < (ulonglong)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40))) {
LAB_1437826e9:
    *(ulonglong *)(param_1 + 0x38) = uVar2 + 1;
  }
  goto LAB_143782690;
}



// FUNCTION 143782710 FUN_143782710 body=504 status=ok
// SIG undefined FUN_143782710(void)

undefined8 FUN_143782710(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  
  do {
    pcVar3 = *(char **)(param_1 + 0x38);
    if (pcVar3 < (char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40))) {
LAB_143782764:
      cVar2 = *pcVar3;
      *(char **)(param_1 + 0x38) = pcVar3 + 1;
    }
    else {
      FUN_143751600(param_1 + 0x18);
      pcVar3 = *(char **)(param_1 + 0x38);
      if (pcVar3 < (char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)))
      goto LAB_143782764;
      cVar2 = '\0';
    }
    switch(cVar2) {
    case '\0':
      return 5;
    default:
      if ((((0x19 < (byte)(cVar2 + 0x9fU)) && (0x19 < (byte)(cVar2 + 0xbfU))) && (cVar2 != '_')) &&
         (cVar2 != ':')) {
        uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes(param_1,"Unexpected token");
        return uVar1;
      }
      uVar1 = FUN_1437824a0(param_1);
      return uVar1;
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      FUN_143782670(param_1);
      FUN_1437514c0(param_1 + 0x18);
      break;
    case '\"':
      uVar1 = FUN_143782540(param_1);
      return uVar1;
    case '/':
      return 0xb;
    case '=':
      return 9;
    case '>':
      if ((*(uint *)(param_1 + 0x60) & 2) != 0) {
        uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes(param_1,"Expecting ?> to close <? section");
        return uVar1;
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
      return 6;
    case '?':
      if ((*(byte *)(param_1 + 0x60) & 2) != 0) {
        pcVar3 = *(char **)(param_1 + 0x38);
        if (pcVar3 < (char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40))) {
LAB_1437827da:
          cVar2 = *pcVar3;
          *(char **)(param_1 + 0x38) = pcVar3 + 1;
          if (cVar2 == '>') {
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
            return 7;
          }
        }
        else {
          FUN_143751600(param_1 + 0x18,0x100);
          pcVar3 = *(char **)(param_1 + 0x38);
          if (pcVar3 < (char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)))
          goto LAB_1437827da;
        }
        if ((ulonglong)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40)) <
            *(ulonglong *)(param_1 + 0x38)) {
          *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) - 1;
        }
      }
    }
  } while( true );
}



// FUNCTION 143782970 FUN_143782970 body=332 status=ok
// SIG undefined FUN_143782970(void)

undefined8 FUN_143782970(longlong param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined1 local_res8 [8];
  
  pbVar5 = *(byte **)(param_1 + 0x38);
  if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar5) {
    FUN_143751600(param_1 + 0x18,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar5) {
      return 5;
    }
  }
  bVar3 = *pbVar5;
  *(byte **)(param_1 + 0x38) = pbVar5 + 1;
  if (bVar3 == 0) {
    return 5;
  }
  if (bVar3 != 0x3c) {
    if ((bVar3 < 0x21) && ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
      uVar1 = FUN_143782670(param_1);
      return uVar1;
    }
    uVar1 = FUN_1437825c0(param_1);
    return uVar1;
  }
  bVar3 = pbVar5[1];
  if (bVar3 == 0) {
    FUN_143751600(param_1 + 0x18,0x100);
    bVar3 = **(byte **)(param_1 + 0x38);
  }
  if (bVar3 != 0x3f) {
    pcVar2 = (char *)hkParserBuffer::matchAndConsume(param_1 + 0x18,local_res8,&DAT_145b9a510);
    if (*pcVar2 == '\0') {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
      return 0;
    }
    uVar1 = FUN_143782400(param_1);
    return uVar1;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if ((ulonglong)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= uVar4) {
    FUN_143751600(param_1 + 0x18,0x100);
    uVar4 = *(ulonglong *)(param_1 + 0x38);
    if ((ulonglong)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= uVar4)
    goto LAB_143782a5b;
  }
  *(ulonglong *)(param_1 + 0x38) = uVar4 + 1;
LAB_143782a5b:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 3;
  return 1;
}



// FUNCTION 143782ac0 advance body=47 status=ok
// SIG undefined advance(void)

void hkXmlLexAnalyzer::advance(longlong param_1)

{
  FUN_1437514c0(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    FUN_143782710();
    return;
  }
  FUN_143782970(param_1);
  return;
}



// FUNCTION 143782af0 FUN_143782af0 body=12 status=ok
// SIG undefined FUN_143782af0(void)

longlong FUN_143782af0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143782b00 FUN_143782b00 body=88 status=ok
// SIG undefined FUN_143782b00(void)

void FUN_143782b00(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    FUN_143702c60(*(undefined8 *)((longlong)pvVar2 + 0x58),lVar1,4,0x270);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 143782b60 FUN_143782b60 body=176 status=ok
// SIG undefined FUN_143782b60(void)

void FUN_143782b60(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = 0;
  uVar3 = 0x18d;
  lVar4 = 0x270;
  do {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar6 = (*(uint *)(lVar2 + (ulonglong)((uVar3 - 0x18c) % 0x270) * 4) ^ *(uint *)(lVar5 + lVar2))
            & 0x7fffffff ^ *(uint *)(lVar5 + lVar2);
    *(uint *)(lVar5 + lVar2) = *(uint *)(lVar2 + (ulonglong)(uVar3 % 0x270) * 4) ^ uVar6 >> 1;
    if ((uVar6 & 1) != 0) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 8) + lVar5);
      *puVar1 = *puVar1 ^ 0x9908b0df;
    }
    uVar3 = uVar3 + 1;
    lVar5 = lVar5 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143782c10 FUN_143782c10 body=120 status=ok
// SIG undefined FUN_143782c10(void)

uint FUN_143782c10(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    FUN_143782b60();
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)*param_1 * 4);
  uVar1 = *param_1 + 1;
  uVar2 = uVar2 ^ uVar2 >> 0xb;
  uVar2 = uVar2 ^ (uVar2 & 0xff3a58ad) << 7;
  uVar2 = uVar2 ^ (uVar2 & 0xffffdf8c) << 0xf;
  *param_1 = (short)uVar1 + (short)(uVar1 / 0x270) * -0x270;
  return uVar2 >> 0x12 ^ uVar2;
}



// FUNCTION 143782c90 FUN_143782c90 body=163 status=ok
// SIG undefined FUN_143782c90(void)

void FUN_143782c90(undefined2 *param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 4) == 0) {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    uVar4 = FUN_143702b60(*(undefined8 *)((longlong)pvVar3 + 0x58),4,0x270);
    *(undefined8 *)(param_1 + 4) = uVar4;
  }
  **(undefined4 **)(param_1 + 4) = param_2;
  uVar2 = 1;
  lVar6 = 4;
  lVar7 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 4);
    iVar5 = (*(uint *)(lVar7 + lVar1) >> 0x1e ^ *(uint *)(lVar7 + lVar1)) * 0x6c078965 + uVar2;
    uVar2 = uVar2 + 1;
    *(int *)(lVar6 + lVar1) = iVar5;
    lVar6 = lVar6 + 4;
    lVar7 = lVar7 + 4;
  } while (uVar2 < 0x270);
  *param_1 = 0;
  return;
}



// FUNCTION 143782d40 FUN_143782d40 body=195 status=ok
// SIG undefined FUN_143782d40(void)

undefined8 * FUN_143782d40(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  uVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkWin32FileSystem::WatcherImpl::vftable;
  FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1 + 3);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_14370d870(lVar2,4000);
  }
  param_1[6] = uVar3;
  FUN_143765d50(param_1 + 3,local_res8,FUN_143784c80,param_1,"FileWatcherThread",0x1000);
  return param_1;
}



// FUNCTION 143782e10 FUN_143782e10 body=367 status=ok
// SIG undefined FUN_143782e10(void)

void FUN_143782e10(undefined8 *param_1)

{
  ULONG_PTR dwData;
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE hThread;
  LPVOID pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  *param_1 = hkWin32FileSystem::WatcherImpl::vftable;
  hThread = (HANDLE)FHardwareCursor::GetHandle(param_1 + 3);
  if (*(int *)(param_1 + 8) == 0) {
    QueueUserAPC((PAPCFUNC)&LAB_140915850,hThread,(ULONG_PTR)param_1);
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      lVar5 = 0;
      do {
        dwData = *(ULONG_PTR *)(lVar5 + param_1[7]);
        FUN_14370c030(dwData);
        QueueUserAPC(FUN_143784c30,hThread,dwData);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
  }
  WaitForSingleObjectEx(hThread,10000,1);
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[6];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar1 + 0x58),lpCriticalSection,0x28);
  }
  uVar2 = FUN_143703a50();
  lVar5 = param_1[7];
  lVar3 = (longlong)(*(int *)(param_1 + 8) + -1);
  if (-1 < *(int *)(param_1 + 8) + -1) {
    do {
      if (*(longlong *)(lVar5 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar2,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  thunk_FUN_143765cf0(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143782f80 FUN_143782f80 body=358 status=ok
// SIG undefined FUN_143782f80(void)

void FUN_143782f80(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x1d93) + -1;
  if (-1 < iVar3) {
    lVar2 = param_1[0x1d92] + ((longlong)iVar3 * 3 + 1) * 8;
    do {
      FUN_143716650(lVar2 + 8);
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x18;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x1d93) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xec9c)) {
    FUN_143702e10(uVar1,param_1[0x1d92],0x18,*(uint *)((longlong)param_1 + 0xec9c) & 0x3fffffff);
  }
  param_1[0x1d92] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec9c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x1d91) + -1;
  if (-1 < iVar3) {
    lVar2 = param_1[0x1d90] + ((longlong)iVar3 * 3 + 1) * 8;
    do {
      FUN_143716650(lVar2 + 8);
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x18;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x1d91) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xec8c)) {
    FUN_143702e10(uVar1,param_1[0x1d90],0x18,*(uint *)((longlong)param_1 + 0xec8c) & 0x3fffffff);
  }
  param_1[0x1d90] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec8c) = 0x80000000;
  FUN_143716650(param_1 + 5);
  *param_1 = hkFileSystem::Watcher::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437830f0 FUN_1437830f0 body=144 status=ok
// SIG undefined FUN_1437830f0(void)

undefined8 * FUN_1437830f0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkFileSystem::Watcher::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x18;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143783180 FUN_143783180 body=139 status=ok
// SIG undefined FUN_143783180(void)

longlong FUN_143783180(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143782e10();
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



// FUNCTION 143783210 FUN_143783210 body=139 status=ok
// SIG undefined FUN_143783210(void)

longlong FUN_143783210(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143782f80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = -0x1350;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xecb0);
    }
  }
  return param_1;
}



// FUNCTION 1437832a0 FUN_1437832a0 body=187 status=ok
// SIG undefined FUN_1437832a0(void)

undefined8 * FUN_1437832a0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = _anon_E0561198::Win32Impl::vftable;
  if ((longlong)param_1[6] - 1U < 0xfffffffffffffffe) {
    FindClose((HANDLE)param_1[6]);
  }
  FUN_143716650(param_1 + 5);
  FUN_143716650(param_1 + 4);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143783360 FUN_143783360 body=630 status=ok
// SIG undefined FUN_143783360(void)

int FUN_143783360(int param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar9;
  uint *puVar10;
  _FILETIME local_res18 [2];
  undefined1 *local_4b8;
  undefined4 local_4b0;
  uint local_4ac;
  undefined1 local_4a8 [128];
  undefined1 local_428 [1024];
  
  lVar7 = *(longlong *)(param_3 + 0x20);
  lVar8 = *(longlong *)(lVar7 + 0x20);
  if (param_1 == 0x3e3) {
    if (*(char *)(lVar7 + 0x30) != '\0') {
      FUN_14370c150(lVar7);
      LOCK();
      piVar1 = (int *)(lVar8 + 0x28);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      return iVar5;
    }
  }
  else if (param_2 != 0) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar8 + 0x30);
    EnterCriticalSection(lpCriticalSection);
    FUN_143784de0(lVar7);
    GetSystemTimeAsFileTime(local_res18);
    FUN_14370c700(lVar7 + 0xeca0,local_res18,8);
    puVar10 = (uint *)(lVar7 + 0x80);
    plVar2 = (longlong *)(lVar7 + 0xec80);
    while( true ) {
      thunk_FUN_143781fc0(local_428,0x3ff,puVar10 + 3,puVar10[2] >> 1);
      local_4b8 = local_4a8;
      local_4ac = 0x80000080;
      local_4b0 = 1;
      local_4a8[0] = 0;
      FUN_143745b90(&local_4b8,*(ulonglong *)(lVar7 + 0x28) & 0xfffffffffffffffe,&DAT_145b11fc0,
                    local_428,0,0,0);
      uVar9 = FUN_143703a50();
      if (*(uint *)(lVar7 + 0xec88) == (*(uint *)(lVar7 + 0xec8c) & 0x3fffffff)) {
        FUN_14370c460(uVar9,plVar2,0x18);
      }
      lVar3 = *plVar2 + (longlong)*(int *)(lVar7 + 0xec88) * 0x18;
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      puVar4 = (undefined1 *)(*plVar2 + (longlong)*(int *)(lVar7 + 0xec88) * 0x18);
      *(int *)(lVar7 + 0xec88) = *(int *)(lVar7 + 0xec88) + 1;
      FUN_143716690(puVar4 + 0x10,&local_4b8);
      *puVar4 = 4;
      uVar6 = puVar10[1];
      if (uVar6 == 1) {
        *puVar4 = 0;
      }
      else if (uVar6 == 2) {
        *puVar4 = 1;
      }
      else if (uVar6 == 3) {
        *puVar4 = 2;
      }
      else if (uVar6 == 4) {
        *puVar4 = 5;
      }
      else if (uVar6 == 5) {
        *puVar4 = 6;
      }
      local_4b0 = 0;
      if (*puVar10 == 0) break;
      puVar10 = (uint *)((longlong)puVar10 + (ulonglong)*puVar10);
      if (-1 < (int)local_4ac) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_4b8,1,local_4ac & 0x3fffffff);
      }
    }
    if (-1 < (int)local_4ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_4b8,1,local_4ac & 0x3fffffff);
    }
    LeaveCriticalSection(lpCriticalSection);
    FUN_143783750(lVar8,lVar7);
  }
  LOCK();
  piVar1 = (int *)(lVar8 + 0x28);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar5;
}



// FUNCTION 1437835e0 FUN_1437835e0 body=152 status=ok
// SIG undefined FUN_1437835e0(void)

undefined8 * FUN_1437835e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143745310(&local_98,param_3);
  FUN_143784700(&local_98);
  uVar1 = FUN_143787200(local_98);
  uVar1 = FUN_143763690(param_1,uVar1,param_4 & 0xfffffffe);
  *param_2 = uVar1;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143783680 FUN_143783680 body=180 status=ok
// SIG undefined FUN_143783680(void)

undefined8 *
FUN_143783680(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143745310(&local_98,param_3);
  FUN_143784700(&local_98);
  uVar2 = param_4 >> 2 & 0x3fffffff;
  uVar1 = 4;
  if ((param_4 & 2) != 0) {
    uVar1 = 2;
  }
  uVar1 = FUN_143787510(local_98,uVar1,
                        CONCAT71((int7)(uVar2 >> 8),~(byte)uVar2) & 0xffffffffffffff01);
  uVar1 = FUN_143763710(param_1,uVar1,param_4 & 0xffffffff);
  *param_2 = uVar1;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143783750 FUN_143783750 body=135 status=ok
// SIG undefined FUN_143783750(void)

void FUN_143783750(longlong param_1,longlong param_2)

{
  HANDLE hDirectory;
  BOOL BVar1;
  DWORD local_res8 [8];
  
  hDirectory = *(HANDLE *)(param_2 + 0x18);
  ((LPOVERLAPPED)(param_2 + 0x40))->Internal = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(longlong *)(param_2 + 0x60) = param_2;
  *(longlong *)(param_2 + 0x58) = param_2;
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  UNLOCK();
  local_res8[0] = 0;
  BVar1 = ReadDirectoryChangesW
                    (hDirectory,(LPVOID)(param_2 + 0x80),0xec00,1,0x13,local_res8,
                     (LPOVERLAPPED)(param_2 + 0x40),FUN_143783360);
  if (BVar1 == 0) {
    LOCK();
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    UNLOCK();
    GetLastError();
  }
  return;
}



// FUNCTION 1437837e0 FUN_1437837e0 body=712 status=ok
// SIG undefined FUN_1437837e0(void)

undefined8 * FUN_1437837e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  LPVOID pvVar5;
  longlong *plVar6;
  HANDLE hThread;
  undefined8 uVar7;
  longlong *dwData;
  undefined8 local_res18;
  DWORD local_res20 [2];
  undefined1 local_278 [56];
  undefined8 local_240;
  undefined4 local_238;
  uint local_234;
  
  local_res18 = param_3;
  puVar2 = (undefined8 *)FUN_143781a00(&local_240,param_3);
  dwData = (longlong *)0x0;
  puVar3 = CreateFileW((LPCWSTR)*puVar2,1,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x42000000,(HANDLE)0x0);
  local_238 = 0;
  if (-1 < (int)local_234) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_240,2,local_234 & 0x3fffffff);
  }
  if (puVar3 == &DAT_ffffffffffffffff) {
    if (DAT_146b843e8 != '\0') {
      FUN_14373a730(local_278,&DAT_146b843e0,1);
      lVar4 = FUN_14373bbd0(local_278,"Failed to create file watcher for {}.",&DAT_145b74470,
                            &local_res18,0);
      *(char **)(lVar4 + 0x20) = "System\\Io\\Platform\\Win32\\hkWin32FileSystem.cpp";
      *(undefined8 *)(lVar4 + 0x28) = 0x1d7;
      FUN_14373a950(local_278);
    }
    *param_2 = 0;
  }
  else {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar5 + 0x58),0xecb0);
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0x1ffff;
      *plVar6 = (longlong)Win32FileSystemWatcher::vftable;
      plVar6[5] = 0;
      plVar6[0x1d90] = 0;
      *(undefined4 *)(plVar6 + 0x1d91) = 0;
      *(undefined4 *)((longlong)plVar6 + 0xec8c) = 0x80000000;
      plVar6[0x1d92] = 0;
      *(undefined4 *)(plVar6 + 0x1d93) = 0;
      *(undefined4 *)((longlong)plVar6 + 0xec9c) = 0x80000000;
      dwData = plVar6;
    }
    dwData[3] = (longlong)puVar3;
    dwData[4] = param_1;
    FUN_1437166c0(dwData + 5,local_res18);
    *(undefined1 *)(dwData + 6) = 0;
    hThread = (HANDLE)FHardwareCursor::GetHandle(param_1 + 0x18);
    DVar1 = QueueUserAPC((PAPCFUNC)&LAB_143783740,hThread,(ULONG_PTR)dwData);
    if (DVar1 == 0) {
      if (DAT_146b843e8 != '\0') {
        local_res20[0] = GetLastError();
        FUN_14373a730(local_278,&DAT_146b843e0,1);
        lVar4 = FUN_14373bbd0(local_278,"Failed to add file watcher for {} with error {}.",
                              &DAT_145ba09e8,&local_res18,local_res20,0);
        *(char **)(lVar4 + 0x20) = "System\\Io\\Platform\\Win32\\hkWin32FileSystem.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x1e6;
        FUN_14373a950(local_278);
      }
      lVar4 = *dwData;
      *param_2 = 0;
      (**(code **)(lVar4 + 8))(dwData,1);
    }
    else {
      FUN_14370c030(dwData);
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
        FUN_14370c460(uVar7,param_1 + 0x38,8);
      }
      puVar2 = (undefined8 *)
               (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = dwData;
        FUN_14370c030(dwData);
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      FUN_14370c150(dwData);
      *param_2 = *(undefined8 *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)(*(int *)(param_1 + 0x40) + -1) * 8);
    }
  }
  return param_2;
}



// FUNCTION 143783ab0 FUN_143783ab0 body=700 status=ok
// SIG undefined FUN_143783ab0(void)

undefined8 FUN_143783ab0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  undefined8 local_508;
  undefined4 local_500;
  uint local_4fc;
  undefined8 local_478;
  undefined4 local_470;
  uint local_46c;
  _WIN32_FIND_DATAW local_268;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_143745310(&local_508,*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    bVar7 = (*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe) == 0;
    if (bVar7) {
      puVar3 = (ulonglong *)FUN_143716620(local_res8,&DAT_145af6c98);
    }
    else {
      puVar3 = (ulonglong *)FUN_1437165f0(local_res18,param_1 + 0x28);
    }
    FUN_143746330(&local_508,*puVar3 & 0xfffffffffffffffe,0,0);
    if (bVar7) {
      FUN_143716650(local_res8);
    }
    else {
      FUN_143716650(local_res18);
    }
    FUN_143784700(&local_508);
    puVar4 = (undefined8 *)FUN_143781a00(&local_478,local_508);
    pvVar5 = FindFirstFileW((LPCWSTR)*puVar4,&local_268);
    *(HANDLE *)(param_1 + 0x30) = pvVar5;
    local_470 = 0;
    if (-1 < (int)local_46c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_478,2,local_46c & 0x3fffffff);
    }
    if (*(longlong *)(param_1 + 0x30) == -1) {
      uVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)FUN_1437819d0(&local_478,local_268.cFileName);
      cVar1 = FUN_1437639f0(*puVar4,0);
      local_470 = 0;
      if (-1 < (int)local_46c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_478,1,local_46c & 0x3fffffff);
      }
      if (cVar1 == '\0') {
        local_500 = 0;
        if (-1 < (int)local_4fc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_508,1,local_4fc & 0x3fffffff);
        }
        goto LAB_143783c9b;
      }
      FUN_143784730(param_2,*(undefined8 *)(param_1 + 0x18),
                    *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,&local_268);
      uVar6 = 1;
    }
    local_500 = 0;
    if (-1 < (int)local_4fc) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_508,1,local_4fc & 0x3fffffff);
    }
  }
  else {
LAB_143783c9b:
    if (*(undefined1 **)(param_1 + 0x30) != &DAT_ffffffffffffffff) {
      iVar2 = FindNextFileW(*(undefined1 **)(param_1 + 0x30),&local_268);
      while (iVar2 != 0) {
        puVar4 = (undefined8 *)FUN_1437819d0(&local_478,local_268.cFileName);
        cVar1 = FUN_1437639f0(*puVar4,0);
        local_470 = 0;
        if (-1 < (int)local_46c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_478,1,local_46c & 0x3fffffff);
        }
        if (cVar1 != '\0') {
          FUN_143784730(param_2,*(undefined8 *)(param_1 + 0x18),
                        *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,&local_268);
          return 1;
        }
        iVar2 = FindNextFileW(*(HANDLE *)(param_1 + 0x30),&local_268);
      }
      FindClose(*(HANDLE *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    }
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143783d70 FUN_143783d70 body=512 status=ok
// SIG undefined FUN_143783d70(void)

undefined4 *
FUN_143783d70(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  LPCWSTR lpNewFileName;
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_548;
  undefined4 local_540;
  uint local_53c;
  undefined8 local_4b8;
  undefined4 local_4b0;
  uint local_4ac;
  undefined8 local_428;
  undefined4 local_420;
  uint local_41c;
  undefined8 local_218;
  undefined4 local_210;
  uint local_20c;
  
  FUN_143745310(&local_4b8,param_3);
  FUN_143784700(&local_4b8);
  FUN_143745310(&local_548,param_4);
  FUN_143784700(&local_548);
  puVar4 = (undefined8 *)FUN_143781a00(&local_428,local_548);
  DVar1 = GetFileAttributesW((LPCWSTR)*puVar4);
  local_420 = 0;
  if (-1 < (int)local_41c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_428,2,local_41c & 0x3fffffff);
  }
  if ((DVar1 & 1) != 0) {
    puVar4 = (undefined8 *)FUN_143781a00(&local_428,local_548);
    SetFileAttributesW((LPCWSTR)*puVar4,DVar1 & 0xfffffffe);
    local_420 = 0;
    if (-1 < (int)local_41c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_428,2,local_41c & 0x3fffffff);
    }
  }
  puVar4 = (undefined8 *)FUN_143781a00(&local_218,local_548);
  lpNewFileName = (LPCWSTR)*puVar4;
  puVar4 = (undefined8 *)FUN_143781a00(&local_428,local_4b8);
  BVar2 = CopyFileW((LPCWSTR)*puVar4,lpNewFileName,0);
  local_420 = 0;
  if (-1 < (int)local_41c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_428,2,local_41c & 0x3fffffff);
  }
  local_428 = 0;
  local_41c = 0x80000000;
  local_210 = 0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
  }
  local_540 = 0;
  uVar3 = 0x80040200;
  if (BVar2 == 1) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  if (-1 < (int)local_53c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_548,1,local_53c & 0x3fffffff);
  }
  local_548 = 0;
  local_53c = 0x80000000;
  local_4b0 = 0;
  if (-1 < (int)local_4ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_4b8,1,local_4ac & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143783f70 FUN_143783f70 body=187 status=ok
// SIG undefined FUN_143783f70(void)

undefined8 *
FUN_143783f70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    puVar2[3] = param_1;
    *puVar2 = _anon_E0561198::Win32Impl::vftable;
    FUN_143716620(puVar2 + 4,param_3);
    FUN_143716620(puVar2 + 5,param_4);
    puVar2[6] = 0;
    *param_2 = puVar2;
  }
  return param_2;
}



// FUNCTION 143784030 FUN_143784030 body=239 status=ok
// SIG undefined FUN_143784030(void)

undefined8 FUN_143784030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x48);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_143782d40(lVar2);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  FUN_143745310(&local_98,param_3);
  FUN_143784700(&local_98);
  FUN_1437837e0(*(undefined8 *)(param_1 + 0x38),param_2,local_98);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143784120 FUN_143784120 body=58 status=ok
// SIG undefined FUN_143784120(void)

int * FUN_143784120(longlong param_1,int *param_2,undefined8 param_3)

{
  FUN_143784c90(*(undefined8 *)(param_1 + 0x20),param_2,param_1,param_3);
  if (-1 < *param_2) {
    FUN_143763790(param_3);
  }
  return param_2;
}



// FUNCTION 143784160 FUN_143784160 body=305 status=ok
// SIG undefined FUN_143784160(void)

undefined8 FUN_143784160(longlong *param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  DWORD DVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined8 local_458;
  ulonglong auStack_450 [3];
  undefined4 local_438;
  undefined8 local_430;
  undefined4 local_428;
  uint local_424;
  WCHAR local_218 [264];
  
  auStack_450[2] = 0xffffffffffffffff;
  uVar4 = 0;
  auStack_450[1] = 0;
  local_458 = 0;
  auStack_450[0] = 0;
  local_438 = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 0x40))(0,local_res8,param_2,&local_458);
  if (-1 < *piVar2) {
    if ((param_4 & 1) == 0) {
      FUN_1437455a0(param_3,auStack_450[0] & 0xfffffffffffffffe);
    }
    else {
      puVar3 = (undefined8 *)FUN_143781a00(&local_430);
      DVar1 = GetFullPathNameW((LPCWSTR)*puVar3,0x104,local_218,(LPWSTR *)0x0);
      local_428 = 0;
      if (-1 < (int)local_424) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_430,2,local_424 & 0x3fffffff);
      }
      if (DVar1 == 0) goto LAB_14378426f;
      puVar3 = (undefined8 *)FUN_1437819d0(&local_430,local_218);
      FUN_1437455a0(param_3,*puVar3);
      local_428 = 0;
      if (-1 < (int)local_424) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_430,1,local_424 & 0x3fffffff);
      }
    }
    uVar4 = *param_3;
  }
LAB_14378426f:
  FUN_143716650(auStack_450);
  return uVar4;
}



// FUNCTION 1437842a0 FUN_1437842a0 body=266 status=ok
// SIG undefined FUN_1437842a0(void)

undefined4 * FUN_1437842a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined8 local_218;
  undefined4 local_210;
  uint local_20c;
  
  FUN_143745310(&local_2a8,param_3);
  FUN_143784700(&local_2a8);
  puVar4 = (undefined8 *)FUN_143781a00(&local_218,local_2a8);
  BVar1 = CreateDirectoryW((LPCWSTR)*puVar4,(LPSECURITY_ATTRIBUTES)0x0);
  local_210 = 0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
  }
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      uVar3 = 0;
      if (param_4 == 2) {
        uVar3 = 0x800402b7;
      }
      *param_2 = uVar3;
    }
    else {
      *param_2 = 0x80040200;
    }
  }
  else {
    *param_2 = 0;
  }
  local_2a0 = 0;
  if (-1 < (int)local_29c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2a8,1,local_29c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1437843b0 FUN_1437843b0 body=383 status=ok
// SIG undefined FUN_1437843b0(void)

undefined4 *
FUN_1437843b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  undefined8 local_548;
  undefined4 local_540;
  uint local_53c;
  undefined8 local_4b8;
  undefined4 local_4b0;
  uint local_4ac;
  LPCWSTR local_428;
  undefined4 local_420;
  uint local_41c;
  LPCWSTR local_218;
  undefined4 local_210;
  uint local_20c;
  
  FUN_143745310(&local_4b8,param_3);
  FUN_143784700(&local_4b8);
  FUN_143745310(&local_548,param_4);
  FUN_143784700(&local_548);
  FUN_143781a00(&local_218,local_4b8);
  FUN_143781a00(&local_428,local_548);
  BVar1 = MoveFileExW(local_218,local_428,0);
  local_420 = 0;
  if (BVar1 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_2 = 0;
  }
  if (-1 < (int)local_41c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_428,2,local_41c & 0x3fffffff);
  }
  local_210 = 0;
  local_41c = 0x80000000;
  local_428 = (LPCWSTR)0x0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
  }
  local_540 = 0;
  local_20c = 0x80000000;
  local_218 = (LPCWSTR)0x0;
  if (-1 < (int)local_53c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_548,1,local_53c & 0x3fffffff);
  }
  local_4b0 = 0;
  local_53c = 0x80000000;
  local_548 = 0;
  if (-1 < (int)local_4ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_4b8,1,local_4ac & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143784530 FUN_143784530 body=288 status=ok
// SIG undefined FUN_143784530(void)

undefined4 * FUN_143784530(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  uint dwFileAttributes;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  LPCWSTR local_218;
  undefined4 local_210;
  uint local_20c;
  
  FUN_143745310(&local_2a8,param_3);
  FUN_143784700(&local_2a8);
  FUN_143781a00(&local_218,local_2a8);
  dwFileAttributes = GetFileAttributesW(local_218);
  if ((dwFileAttributes & 1) != 0) {
    dwFileAttributes = dwFileAttributes & 0xfffffffe;
    SetFileAttributesW(local_218,dwFileAttributes);
  }
  if ((dwFileAttributes & 0x10) == 0) {
    BVar1 = DeleteFileW(local_218);
    uVar3 = 0x80040200;
    if (BVar1 != 0) {
      uVar3 = 0;
    }
  }
  else {
    BVar1 = RemoveDirectoryW(local_218);
    if (BVar1 != 0) {
      *param_2 = 0;
      goto LAB_1437845d8;
    }
    DVar2 = GetLastError();
    uVar3 = 0x80040200;
    if (DVar2 == 2) {
      uVar3 = 0x80040202;
    }
  }
  *param_2 = uVar3;
LAB_1437845d8:
  local_210 = 0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
  }
  local_218 = (LPCWSTR)0x0;
  local_20c = 0x80000000;
  local_2a0 = 0;
  if (-1 < (int)local_29c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2a8,1,local_29c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143784650 FUN_143784650 body=147 status=ok
// SIG undefined FUN_143784650(void)

void FUN_143784650(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = operator_new(0x78);
  if (lVar1 != 0) {
    FUN_143703810(lVar1);
  }
  plVar2 = (longlong *)FUN_14370d950();
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,"hkFileSystemWatcherWin32",3);
  FUN_14370ce50(lVar1);
  while ((*(int *)(param_1 + 0x28) != 0 || (*(char *)(param_1 + 0x2c) == '\0'))) {
    SleepEx(0xffffffff,1);
  }
  FUN_14370d050();
  plVar2 = (longlong *)FUN_14370d950();
                    /* WARNING: Could not recover jumptable at 0x0001437846df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,3);
  return;
}



// FUNCTION 1437846f0 FUN_1437846f0 body=12 status=ok
// SIG undefined FUN_1437846f0(void)

longlong FUN_1437846f0(longlong param_1,uint param_2)

{
  return (param_1 << 0x20) + (ulonglong)param_2;
}



// FUNCTION 143784700 FUN_143784700 body=16 status=ok
// SIG undefined FUN_143784700(void)

void FUN_143784700(undefined8 param_1)

{
  FUN_143746950(param_1,0x2f,0x5c,1);
  return;
}



// FUNCTION 143784710 FUN_143784710 body=30 status=ok
// SIG undefined FUN_143784710(void)

longlong FUN_143784710(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_1,param_2) * 100 + 0x5e6684f4b3960000;
}



// FUNCTION 143784730 FUN_143784730 body=320 status=ok
// SIG undefined FUN_143784730(void)

void FUN_143784730(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  
  lVar5 = param_4;
  uVar1 = FUN_143784710(*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x14));
  puVar2 = (undefined8 *)FUN_1437819d0(&local_128,lVar5 + 0x2c);
  uVar4 = *puVar2;
  uVar3 = FUN_143745310(&local_1b8,param_3);
  puVar2 = (undefined8 *)FUN_143746330(uVar3,uVar4,0,0);
  uVar4 = FUN_1437846f0(*(undefined4 *)(param_4 + 0x1c),*(undefined4 *)(param_4 + 0x20),*puVar2);
  FUN_143763c00(param_1,param_2);
  local_1b0 = 0;
  if (-1 < (int)local_1ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff,uVar1,uVar4);
  }
  local_1b8 = 0;
  local_1ac = 0x80000000;
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_128,1,local_11c & 0x3fffffff,uVar1,uVar4);
  }
  return;
}



// FUNCTION 143784870 FUN_143784870 body=593 status=ok
// SIG undefined FUN_143784870(void)

undefined4 *
FUN_143784870(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined1 *hFindFile;
  char *local_508;
  int local_500;
  uint local_4fc;
  undefined8 local_478;
  undefined4 local_470;
  uint local_46c;
  _WIN32_FIND_DATAW local_268;
  
  FUN_143745310(&local_508,param_3);
  FUN_143784700(&local_508);
  cVar1 = FUN_143745f90(&local_508,&DAT_145b709a8);
  while (cVar1 != '\0') {
    FUN_143745e50(&local_508,1);
    cVar1 = FUN_143745f90(&local_508,&DAT_145b709a8);
  }
  if (((local_500 == 3) && (iVar2 = isalpha((int)*local_508), iVar2 != 0)) && (local_508[1] == ':'))
  {
    FUN_143745710(&local_508,&DAT_145b709a8,0xffffffff);
    puVar4 = (undefined8 *)FUN_143781a00(&local_478,local_508);
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar4);
    local_470 = 0;
    if (-1 < (int)local_46c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_478,2,local_46c & 0x3fffffff);
    }
    if (DVar3 != 0xffffffff) {
      FUN_143763c00(param_4,param_1,local_508,2,0,0);
      *param_2 = 0;
      goto LAB_143784a6d;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_143781a00(&local_478,local_508);
    hFindFile = FindFirstFileW((LPCWSTR)*puVar4,&local_268);
    local_470 = 0;
    if (-1 < (int)local_46c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_478,2,local_46c & 0x3fffffff);
    }
    local_478 = 0;
    local_46c = 0x80000000;
    if (hFindFile != &DAT_ffffffffffffffff) {
      FUN_143784710(local_268.ftLastWriteTime.dwHighDateTime,local_268.ftLastWriteTime.dwLowDateTime
                   );
      FUN_1437846f0(local_268.nFileSizeHigh,local_268.nFileSizeLow);
      FUN_143763c00(param_4,param_1,local_508);
      FindClose(hFindFile);
      *param_2 = 0;
      goto LAB_143784a6d;
    }
  }
  *param_2 = 0x80040200;
LAB_143784a6d:
  local_500 = 0;
  if (-1 < (int)local_4fc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_508,1,local_4fc & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143784ad0 stopWatching body=52 status=ok
// SIG undefined stopWatching(void)

void hkWin32FileSystem::WatcherImpl::stopWatching(longlong param_1)

{
  if ((param_1 != 0) && (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0)) {
    CancelIo(*(HANDLE *)(param_1 + 0x18));
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 143784b10 FUN_143784b10 body=288 status=ok
// SIG undefined FUN_143784b10(void)

undefined4 * FUN_143784b10(ULONG_PTR param_1,undefined4 *param_2)

{
  ULONG_PTR *pUVar1;
  HANDLE hThread;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *param_2 = 0;
    return param_2;
  }
  FUN_14370c030();
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_14370c030(param_1);
  iVar5 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x40);
  if (0 < iVar4) {
    pUVar1 = *(ULONG_PTR **)(*(longlong *)(param_1 + 0x20) + 0x38);
    lVar2 = 0;
    do {
      if (*pUVar1 == param_1) goto LAB_143784b77;
      iVar5 = iVar5 + 1;
      lVar2 = lVar2 + 1;
      pUVar1 = pUVar1 + 1;
    } while (lVar2 < iVar4);
  }
  iVar5 = -1;
LAB_143784b77:
  FUN_14370c150(param_1);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)((longlong)iVar5 * 8 + *(longlong *)(lVar2 + 0x38)) != 0) {
    FUN_14370c150();
  }
  *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + -1;
  iVar4 = 0;
  lVar6 = *(longlong *)(lVar2 + 0x38) + (longlong)iVar5 * 8;
  lVar2 = (longlong)(*(int *)(lVar2 + 0x40) - iVar5) * 8;
  if (0 < lVar2) {
    lVar3 = 0;
    do {
      iVar4 = iVar4 + 8;
      *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar3 + 8 + lVar6);
      lVar3 = lVar3 + 8;
    } while (iVar4 < lVar2);
  }
  hThread = (HANDLE)FHardwareCursor::GetHandle(*(longlong *)(param_1 + 0x20) + 0x18);
  QueueUserAPC(hkWin32FileSystem::WatcherImpl::stopWatching,hThread,param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143784c30 FUN_143784c30 body=72 status=ok
// SIG undefined FUN_143784c30(void)

void FUN_143784c30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
    CancelIo(*(HANDLE *)(param_1 + 0x18));
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  FUN_14370c150(param_1);
  return;
}



// FUNCTION 143784c80 FUN_143784c80 body=16 status=ok
// SIG undefined FUN_143784c80(void)

undefined8 FUN_143784c80(void)

{
  FUN_143784650();
  return 0;
}



// FUNCTION 143784c90 FUN_143784c90 body=335 status=ok
// SIG undefined FUN_143784c90(void)

undefined4 * FUN_143784c90(longlong param_1,undefined4 *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x30);
  EnterCriticalSection(lpCriticalSection);
  FUN_143784de0(param_3);
  iVar8 = *(int *)(param_3 + 0xec98);
  lVar5 = (longlong)iVar8;
  lVar7 = *(longlong *)(param_3 + 0xec90);
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  iVar9 = (int)param_4[1] + iVar8;
  if (((int)uVar4 < iVar9) && ((int)uVar4 < iVar9)) {
    iVar2 = iVar9;
    if (iVar9 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar3,param_4,iVar2,0x18);
  }
  lVar1 = *param_4 + (longlong)(int)param_4[1] * 0x18;
  if (0 < iVar8) {
    lVar6 = lVar1 + 8;
    lVar7 = lVar7 - lVar1;
    do {
      if ((undefined1 *)(lVar6 + -8) != (undefined1 *)0x0) {
        *(undefined1 *)(lVar6 + -8) = *(undefined1 *)(lVar7 + -8 + lVar6);
        FUN_1437165f0(lVar6,lVar7 + lVar6);
        FUN_1437165f0(lVar6 + 8,lVar7 + 8 + lVar6);
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(param_4 + 1) = iVar9;
  iVar8 = *(int *)(param_3 + 0xec98) + -1;
  if (-1 < iVar8) {
    lVar7 = *(longlong *)(param_3 + 0xec90) + ((longlong)iVar8 * 3 + 1) * 8;
    do {
      FUN_143716650(lVar7 + 8);
      FUN_143716650(lVar7);
      lVar7 = lVar7 + -0x18;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  *(undefined4 *)(param_3 + 0xec98) = 0;
  *param_2 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 143784de0 FUN_143784de0 body=909 status=ok
// SIG undefined FUN_143784de0(void)

void FUN_143784de0(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong local_res8;
  longlong local_res10;
  _FILETIME local_res18;
  
  GetSystemTimeAsFileTime(&local_res18);
  if (((0x264caf < (longlong)local_res18 - *(longlong *)(param_1 + 0xeca0)) &&
      (iVar6 = *(int *)(param_1 + 0xec88), iVar6 != 0)) && (iVar12 = 0, 0 < iVar6)) {
    local_res10 = 0;
    local_res8 = 1;
    do {
      lVar8 = *(longlong *)(param_1 + 0xec80);
      if (*(char *)(lVar8 + local_res10) == '\x05') {
        iVar9 = iVar12 + 1;
        if (iVar9 < iVar6) {
          pcVar7 = (char *)(lVar8 + 0x18 + local_res10);
          lVar8 = local_res8;
LAB_143784e90:
          if (*pcVar7 != '\x06') goto code_r0x000143784e95;
          plVar1 = (longlong *)(param_1 + 0xec90);
          uVar4 = FUN_143703a50();
          if (*(uint *)(param_1 + 0xec98) == (*(uint *)(param_1 + 0xec9c) & 0x3fffffff)) {
            FUN_14370c460(uVar4,plVar1,0x18);
          }
          pcVar2 = (char *)(*plVar1 + (longlong)*(int *)(param_1 + 0xec98) * 0x18);
          if (pcVar2 != (char *)0x0) {
            *pcVar2 = *pcVar7;
            FUN_1437165f0(pcVar2 + 8,pcVar7 + 8);
            FUN_1437165f0(pcVar2 + 0x10,pcVar7 + 0x10);
          }
          *(int *)(param_1 + 0xec98) = *(int *)(param_1 + 0xec98) + 1;
          FUN_143716660(*plVar1 + ((longlong)(*(int *)(param_1 + 0xec98) + -1) * 3 + 1) * 8);
          *(undefined1 *)(*plVar1 + (longlong)(*(int *)(param_1 + 0xec98) + -1) * 0x18) = 3;
          FUN_143716650(*(longlong *)(param_1 + 0xec80) + (longlong)iVar12 * 0x18 + 0x10);
          FUN_143716650();
          *(int *)(param_1 + 0xec88) = *(int *)(param_1 + 0xec88) + -1;
          iVar6 = 0;
          lVar10 = *(longlong *)(param_1 + 0xec80) + local_res10;
          lVar11 = (longlong)(*(int *)(param_1 + 0xec88) - iVar12) * 0x18;
          if (0 < lVar11) {
            lVar5 = 0;
            do {
              iVar6 = iVar6 + 8;
              *(undefined8 *)(lVar10 + lVar5) = *(undefined8 *)(lVar10 + 0x18 + lVar5);
              lVar5 = lVar5 + 8;
            } while (iVar6 < lVar11);
          }
          lVar10 = *(longlong *)(param_1 + 0xec80) + (longlong)(iVar9 + -1) * 0x18;
          FUN_143716650(lVar10 + 0x10);
          FUN_143716650(lVar10 + 8);
          *(int *)(param_1 + 0xec88) = *(int *)(param_1 + 0xec88) + -1;
          iVar6 = 0;
          lVar10 = (longlong)(*(int *)(param_1 + 0xec88) - (iVar9 + -1)) * 0x18;
          lVar8 = *(longlong *)(param_1 + 0xec80) + (lVar8 + -1) * 0x18;
          if (0 < lVar10) {
            lVar11 = 0;
            do {
              iVar6 = iVar6 + 8;
              *(undefined8 *)(lVar11 + lVar8) = *(undefined8 *)(lVar11 + 0x18 + lVar8);
              lVar11 = lVar11 + 8;
            } while (iVar6 < lVar10);
          }
        }
      }
      else if (*(char *)(lVar8 + local_res10) != '\x06') {
        uVar4 = FUN_143703a50();
        if (*(uint *)(param_1 + 0xec98) == (*(uint *)(param_1 + 0xec9c) & 0x3fffffff)) {
          FUN_14370c460(uVar4,(longlong *)(param_1 + 0xec90),0x18);
        }
        puVar3 = (undefined1 *)
                 (*(longlong *)(param_1 + 0xec90) + (longlong)*(int *)(param_1 + 0xec98) * 0x18);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *(undefined1 *)(lVar8 + local_res10);
          FUN_1437165f0(puVar3 + 8,lVar8 + 8 + local_res10);
          FUN_1437165f0(puVar3 + 0x10);
        }
        *(int *)(param_1 + 0xec98) = *(int *)(param_1 + 0xec98) + 1;
        lVar8 = *(longlong *)(param_1 + 0xec80) + (longlong)iVar12 * 0x18;
        FUN_143716650(lVar8 + 0x10);
        FUN_143716650(lVar8 + 8);
        *(int *)(param_1 + 0xec88) = *(int *)(param_1 + 0xec88) + -1;
        iVar6 = 0;
        lVar8 = *(longlong *)(param_1 + 0xec80) + local_res10;
        lVar10 = (longlong)(*(int *)(param_1 + 0xec88) - iVar12) * 0x18;
        if (0 < lVar10) {
          lVar11 = 0;
          do {
            iVar6 = iVar6 + 8;
            *(undefined8 *)(lVar8 + lVar11) = *(undefined8 *)(lVar11 + 0x18 + lVar8);
            lVar11 = lVar11 + 8;
          } while (iVar6 < lVar10);
        }
      }
LAB_14378503d:
      iVar6 = *(int *)(param_1 + 0xec88);
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 0x18;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar6);
  }
  return;
code_r0x000143784e95:
  iVar9 = iVar9 + 1;
  lVar8 = lVar8 + 1;
  pcVar7 = pcVar7 + 0x18;
  if (iVar6 <= lVar8) goto LAB_14378503d;
  goto LAB_143784e90;
}



// FUNCTION 143785170 FUN_143785170 body=81 status=ok
// SIG undefined FUN_143785170(void)

undefined8 * FUN_143785170(undefined8 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  uVar2 = FUN_143703880(*(undefined8 *)((longlong)pvVar1 + 0x58),param_2,0x40);
  *param_1 = uVar2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  return param_1;
}



// FUNCTION 1437851d0 FUN_1437851d0 body=102 status=ok
// SIG undefined FUN_1437851d0(void)

undefined8 * FUN_1437851d0(undefined8 *param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkBufferedStreamReader::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  uVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  param_1[4] = uVar1;
  if (param_3 < 0) {
    param_3 = 0x10000;
  }
  FUN_143785170(param_1 + 5,param_3);
  FUN_14370c030(param_1[3]);
  return param_1;
}



// FUNCTION 143785240 FUN_143785240 body=49 status=ok
// SIG undefined FUN_143785240(void)

void FUN_143785240(undefined8 *param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  uVar1 = *param_1;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  FUN_1437038e0(*(undefined8 *)((longlong)pvVar2 + 0x58),uVar1);
  return;
}



// FUNCTION 143785280 FUN_143785280 body=50 status=ok
// SIG undefined FUN_143785280(void)

void FUN_143785280(undefined8 *param_1)

{
  *param_1 = hkBufferedStreamReader::vftable;
  FUN_14370c150(param_1[3]);
  FUN_143785240(param_1 + 5);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437852c0 FUN_1437852c0 body=136 status=ok
// SIG undefined FUN_1437852c0(void)

longlong FUN_1437852c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143785280();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143785350 FUN_143785350 body=61 status=ok
// SIG undefined FUN_143785350(void)

undefined1 * FUN_143785350(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
    pcVar1 = (char *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                               (*(longlong **)(param_1 + 0x18),local_res8);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143785390 FUN_143785390 body=11 status=ok
// SIG undefined FUN_143785390(void)

longlong FUN_143785390(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// FUNCTION 1437853a0 FUN_1437853a0 body=221 status=ok
// SIG undefined FUN_1437853a0(void)

int FUN_1437853a0(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x38) + -0x200 < param_3) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x34) < iVar2 + param_3) {
      uVar3 = *(int *)(param_1 + 0x34) - iVar2;
      uVar1 = uVar3 & 0x800001ff;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffe00) + 1;
      }
      iVar4 = 0x200 - uVar1;
      if ((iVar4 != iVar2) && (uVar3 != 0)) {
        FUN_143732890((longlong)iVar4 + *(longlong *)(param_1 + 0x28),
                      (longlong)iVar2 + *(longlong *)(param_1 + 0x28),(longlong)(int)uVar3);
      }
      iVar2 = iVar4 + uVar3;
      *(int *)(param_1 + 0x30) = iVar4;
      *(int *)(param_1 + 0x34) = iVar2;
      iVar2 = FUN_143785530(*(undefined8 *)(param_1 + 0x18),
                            (longlong)iVar2 + *(longlong *)(param_1 + 0x28),
                            *(int *)(param_1 + 0x38) - iVar2);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    FGenericPlatformString::Memcpy
              (param_2,(longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x28),
               (longlong)iVar2);
  }
  return iVar2;
}



// FUNCTION 143785480 FUN_143785480 body=170 status=ok
// SIG undefined FUN_143785480(void)

int FUN_143785480(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  iVar2 = 0;
  if (iVar1 < param_3) {
    do {
      FUN_14370c700(iVar2 + param_2,
                    (longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x28),iVar1);
      param_3 = param_3 - iVar1;
      iVar2 = iVar2 + iVar1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      iVar1 = FUN_143785530(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                            *(undefined4 *)(param_1 + 0x38));
      if (iVar1 == 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0x34) = iVar1;
    } while (iVar1 < param_3);
  }
  FUN_14370c700(iVar2 + param_2,(longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x28),
                param_3);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
  return iVar2 + param_3;
}



// FUNCTION 143785530 FUN_143785530 body=131 status=ok
// SIG undefined FUN_143785530(void)

int FUN_143785530(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0x18))(param_1,local_res8);
  if (*pcVar2 != '\0') {
    iVar3 = 0;
    while ((param_3 != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0x20))(param_1,iVar3 + param_2,param_3), 0 < iVar1))) {
      iVar3 = iVar3 + iVar1;
      param_3 = param_3 - iVar1;
    }
    return iVar3;
  }
  return 0;
}



// FUNCTION 1437855c0 FUN_1437855c0 body=49 status=ok
// SIG undefined FUN_1437855c0(void)

undefined8 FUN_1437855c0(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  if (param_4 == 1) {
    param_3 = (ulonglong)
              (uint)((int)param_3 + (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34)));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
            (*(longlong **)(param_1 + 0x20),param_2,param_3);
  return param_2;
}



// FUNCTION 143785600 FUN_143785600 body=156 status=ok
// SIG undefined FUN_143785600(void)

int FUN_143785600(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  if (iVar3 < param_2) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    param_2 = param_2 - iVar3;
    uVar2 = (param_2 >> 0x1f & 0x1ffU) + param_2 & 0xfffffe00;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                      (*(longlong **)(param_1 + 0x18),uVar2);
    param_2 = param_2 - iVar1;
    iVar4 = iVar1 + iVar3;
    if (iVar1 < (int)uVar2) {
      return iVar4;
    }
    iVar3 = FUN_143785530(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x38));
    *(int *)(param_1 + 0x34) = iVar3;
  }
  if (param_2 < iVar3) {
    iVar3 = param_2;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3;
  return iVar3 + iVar4;
}



// FUNCTION 1437856a0 FUN_1437856a0 body=48 status=ok
// SIG undefined FUN_1437856a0(void)

int FUN_1437856a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))();
  if (-1 < iVar1) {
    return (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34)) + iVar1;
  }
  return -1;
}



// FUNCTION 1437856d0 FUN_1437856d0 body=68 status=ok
// SIG undefined FUN_1437856d0(void)

undefined8 * FUN_1437856d0(undefined8 *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143763d10();
  param_1[0xb] = param_2;
  *param_1 = hkBsdSocket::vftable;
  if (param_2 == -1) {
    FUN_143785ee0(param_1,local_res8);
  }
  return param_1;
}



// FUNCTION 143785720 FUN_143785720 body=55 status=ok
// SIG undefined FUN_143785720(void)

void FUN_143785720(undefined8 *param_1)

{
  *param_1 = hkBsdSocket::vftable;
  FUN_143785a70();
  FUN_14370c000(param_1 + 7);
  FUN_14370c000(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143785760 FUN_143785760 body=136 status=ok
// SIG undefined FUN_143785760(void)

longlong FUN_143785760(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143785720();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x60;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1437857f0 FUN_1437857f0 body=411 status=ok
// SIG undefined FUN_1437857f0(void)

undefined4 * FUN_1437857f0(longlong param_1,undefined4 *param_2,undefined2 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_68 [2];
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined1 local_50 [56];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_60 = 2;
  local_5c = 0;
  local_5e = Ordinal_9(param_3);
  local_res8[0] = 1;
  uVar3 = CONCAT44(uVar4,4);
  Ordinal_21(*(undefined8 *)(param_1 + 0x58),0xffff,4,local_res8,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_res20[0] = Ordinal_111();
  if ((local_res20[0] != 0) && (DAT_146b84468 != '\0')) {
    FUN_14373a730(local_50,&DAT_146b84460,1);
    uVar4 = 0;
    lVar2 = FUN_14373bbd0(local_50,"Failed to setsockopt(), WSA error code #{:x}",&DAT_145b74460,
                          local_res20,0);
    *(char **)(lVar2 + 0x20) = "System\\Io\\Platform\\Bsd\\hkBsdSocket.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0x329;
    FUN_14373a950(local_50);
  }
  local_68[0] = 0;
  Ordinal_21(*(undefined8 *)(param_1 + 0x58),0xffff,0xfffffffb,local_68,CONCAT44(uVar4,4));
  iVar1 = Ordinal_2(*(undefined8 *)(param_1 + 0x58),&local_60,0x10);
  if (iVar1 == -1) {
    local_res20[0] = Ordinal_111();
    if (DAT_146b84468 != '\0') {
      FUN_14373a730(local_50,&DAT_146b84460,1);
      lVar2 = FUN_14373bbd0(local_50,"Failed to bind(), WSA error code #{:x}",&DAT_145b74460,
                            local_res20,0);
      *(char **)(lVar2 + 0x20) = "System\\Io\\Platform\\Bsd\\hkBsdSocket.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x336;
      FUN_14373a950(local_50);
    }
    *param_2 = 0x80040200;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143785990 FUN_143785990 body=103 status=ok
// SIG undefined FUN_143785990(void)

bool FUN_143785990(longlong param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_218 [2];
  longlong local_210;
  
  local_210 = *(longlong *)(param_1 + 0x58);
  if (local_210 != -1) {
    local_218[0] = 1;
    local_res8[0] = 0;
    iVar1 = Ordinal_18((int)local_210 + 1,local_218,0,0,local_res8);
    return 0 < iVar1;
  }
  return false;
}



// FUNCTION 143785a00 FUN_143785a00 body=102 status=ok
// SIG undefined FUN_143785a00(void)

bool FUN_143785a00(longlong param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_218 [2];
  longlong local_210;
  
  local_210 = *(longlong *)(param_1 + 0x58);
  if (local_210 != -1) {
    local_218[0] = 1;
    local_res8[0] = 0;
    iVar1 = Ordinal_18((int)local_210 + 1,0,local_218,0,local_res8);
    return 0 < iVar1;
  }
  return false;
}



// FUNCTION 143785a70 FUN_143785a70 body=39 status=ok
// SIG undefined FUN_143785a70(void)

void FUN_143785a70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != -1) {
    Ordinal_3();
    *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 143785aa0 FUN_143785aa0 body=528 status=ok
// SIG undefined FUN_143785aa0(void)

undefined4 * FUN_143785aa0(longlong *param_1,undefined4 *param_2,char *param_3,ulonglong param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined4 local_e4 [3];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [128];
  
  FUN_14370c720(&local_e8,0,0x10);
  local_e8 = 2;
  local_e6 = Ordinal_9(param_4 & 0xffff);
  pcVar2 = (char *)FUN_1437862f0(&local_res18,(int)*param_3);
  if (*pcVar2 == '\0') {
    local_9c = 0x80000080;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = local_98;
    local_d8 = 0x200000000;
    local_d0 = 1;
    local_a0 = 1;
    local_98[0] = 0;
    hkStringBuf::printf((char *)&local_a8,&DAT_145af963c,param_4 & 0xffffffff);
    iVar1 = getaddrinfo(param_3,local_a8,&local_d8,&local_res18);
    if (iVar1 != 0) {
      *param_2 = 0x80040200;
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
        return param_2;
      }
      return param_2;
    }
    lVar4 = CONCAT44(uStackX_1c,local_res18);
    uVar5 = 0;
    if (lVar4 != 0) {
      do {
        if (*(int *)(lVar4 + 4) == 2) {
          FUN_14370c700(local_e4,*(longlong *)(lVar4 + 0x20) + 4,4);
        }
        lVar4 = *(longlong *)(lVar4 + 0x28);
      } while (lVar4 != 0);
      uVar5 = CONCAT44(uStackX_1c,local_res18);
    }
    freeaddrinfo(uVar5);
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
    }
  }
  else {
    iVar1 = inet_pton(2,param_3,&local_res18);
    if (iVar1 != 1) goto LAB_143785c55;
    local_e4[0] = local_res18;
  }
  if ((param_1[0xb] != -1) || (piVar3 = (int *)FUN_143785ee0(param_1,&local_res18), -1 < *piVar3)) {
    iVar1 = Ordinal_4(param_1[0xb],&local_e8,0x10);
    if ((-1 < iVar1) || (iVar1 = Ordinal_111(), iVar1 == 0x2733)) {
      *param_2 = 0;
      return param_2;
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
LAB_143785c55:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143785cb0 FUN_143785cb0 body=274 status=ok
// SIG undefined FUN_143785cb0(void)

undefined4 * FUN_143785cb0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined4 local_res18;
  undefined2 uStackX_1c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined1 local_48 [64];
  
  FUN_14370c720(&local_58,0,0x10);
  uStackX_1c = (undefined2)((ulonglong)param_3 >> 0x20);
  local_58 = 2;
  local_56 = Ordinal_9(uStackX_1c);
  local_res18 = (undefined4)param_3;
  local_54 = local_res18;
  iVar1 = Ordinal_4(param_1[0xb],&local_58,0x10);
  if ((iVar1 < 0) && (local_res8[0] = Ordinal_111(), local_res8[0] != 0x2733)) {
    if (DAT_146b84468 != '\0') {
      FUN_14373a730(local_48,&DAT_146b84460,1);
      lVar2 = FUN_14373bbd0(local_48,"Socket connection WSA error code #{:x}",&DAT_145b74460,
                            local_res8,0);
      *(char **)(lVar2 + 0x20) = "System\\Io\\Platform\\Bsd\\hkBsdSocket.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x1b1;
      FUN_14373a950(local_48);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143785dd0 FUN_143785dd0 body=271 status=ok
// SIG undefined FUN_143785dd0(void)

undefined4 *
FUN_143785dd0(longlong *param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  
  (**(code **)(*param_1 + 0x20))();
  lVar2 = Ordinal_23(2,2,0);
  param_1[0xb] = lVar2;
  if (lVar2 != -1) {
    local_30 = 2;
    local_2c = param_4;
    local_2e = Ordinal_9(param_3);
    local_res8[0] = 1;
    iVar1 = Ordinal_21(param_1[0xb],0xffff,0x20,local_res8,4);
    if (iVar1 == 0) {
      local_38 = 1;
      Ordinal_21(param_1[0xb],0xffff,4,&local_38,4);
      (**(code **)(*param_1 + 0xa0))(param_1,local_34,0);
      iVar1 = Ordinal_2(param_1[0xb],&local_30,0x10);
      if (iVar1 != -1) {
        *param_2 = 0;
        return param_2;
      }
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143785ee0 FUN_143785ee0 body=300 status=ok
// SIG undefined FUN_143785ee0(void)

undefined4 * FUN_143785ee0(longlong *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined1 *hObject;
  _OSVERSIONINFOEXW local_128;
  
  (**(code **)(*param_1 + 0x20))();
  local_128.dwOSVersionInfoSize = 0x11c;
  local_128.dwMajorVersion = 0;
  local_128.dwMinorVersion = 0;
  local_128.dwBuildNumber = 0;
  local_128.dwPlatformId = 0;
  local_128.szCSDVersion[0] = L'\0';
  _guard_xfg_dispatch_icall_nop(local_128.szCSDVersion + 1,0,0xfe);
  local_128.wServicePackMajor = 0;
  local_128.wServicePackMinor = 0;
  local_128.wSuiteMask = 0;
  local_128.wProductType = '\0';
  local_128.wReserved = '\0';
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,0x20,3);
  local_128.dwMajorVersion = 6;
  local_128.dwMinorVersion = 1;
  local_128.wServicePackMajor = 1;
  BVar1 = VerifyVersionInfoW(&local_128,0x23,dwlConditionMask);
  hObject = (undefined1 *)WSASocketW(2,1,0,0,0,-(BVar1 != 0) & 0x80);
  param_1[0xb] = (longlong)hObject;
  if (hObject == &DAT_ffffffffffffffff) {
    *param_2 = 0x80040200;
  }
  else {
    if (BVar1 == 0) {
      SetHandleInformation(hObject,1,0);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143786010 getAddress body=85 status=ok
// SIG undefined getAddress(void)

void hkBsdSocket::getAddress(longlong param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [2];
  undefined2 local_16;
  
  (*(code *)PTR_FUN_1467f5f70)(param_2);
  local_res8[0] = 0x10;
  iVar2 = Ordinal_6(*(undefined8 *)(param_1 + 0x58),local_18,local_res8);
  if (iVar2 != -1) {
    uVar1 = Ordinal_15(local_16);
    *param_3 = (uint)uVar1;
  }
  return;
}



// FUNCTION 143786070 getInetAddr body=110 status=ok
// SIG undefined getInetAddr(void)

undefined4 * hkBsdSocket::getInetAddr(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [2];
  undefined2 local_16;
  undefined4 local_14;
  
  local_res8[0] = 0x10;
  iVar2 = Ordinal_6(*(undefined8 *)(param_1 + 0x58),local_18,local_res8);
  if (iVar2 == -1) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_3 = local_14;
  uVar1 = Ordinal_15(local_16);
  *(undefined2 *)(param_3 + 1) = uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437860e0 FUN_1437860e0 body=109 status=ok
// SIG undefined FUN_1437860e0(void)

undefined4 FUN_1437860e0(void)

{
  int iVar1;
  
  iVar1 = Ordinal_111();
  if (iVar1 < 0x2743) {
    if (iVar1 != 0x2742) {
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == 0x2733) {
        return 1;
      }
      if (iVar1 == 0x2740) {
        return 4;
      }
    }
  }
  else {
    if (iVar1 == 0x2746) {
      return 2;
    }
    if (iVar1 == 0x276d) {
      return 3;
    }
  }
  return 5;
}



// FUNCTION 143786150 FUN_143786150 body=266 status=ok
// SIG undefined FUN_143786150(void)

void FUN_143786150(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined1 local_88 [128];
  
  FUN_1437455a0(param_1,"unknown");
  iVar3 = Ordinal_57(local_88,0x80);
  if (-1 < iVar3) {
    FUN_1437455a0(param_1,local_88);
    FUN_143745310(&local_118,local_88);
    lVar4 = Ordinal_52(local_118);
    if (lVar4 != 0) {
      puVar1 = *(undefined8 **)(lVar4 + 0x18);
      puVar2 = (undefined4 *)*puVar1;
      while (puVar2 != (undefined4 *)0x0) {
        uVar5 = Ordinal_12(*puVar2);
        puVar1 = puVar1 + 1;
        FUN_143745630(param_1,&DAT_145ba0cec);
        FUN_143745630(param_1,uVar5);
        FUN_143745630(param_1,&DAT_145b18618);
        puVar2 = (undefined4 *)*puVar1;
      }
    }
    local_110 = 0;
    if (-1 < (int)local_10c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_118,1,local_10c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 143786260 FUN_143786260 body=136 status=ok
// SIG undefined FUN_143786260(void)

void FUN_143786260(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [512];
  undefined1 local_1a8 [424];
  
  if (DAT_146b844d8 == '\0') {
    iVar2 = Ordinal_115(0x202,local_1a8);
    if (iVar2 == -1) {
      FUN_1437134a0(local_3c8,local_3a8,0x200);
      Electra::FHTTPResourceRequest::URL(local_3c8,"(Windows)WSAStartup failed with error!");
      iVar2 = FUN_143732300(0x321825f8,local_3a8,"System\\Io\\Platform\\Bsd\\hkBsdSocket.cpp",0x82);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_143713520(local_3c8);
    }
    DAT_146b844d8 = '\x01';
  }
  return;
}



// FUNCTION 1437862f0 FUN_1437862f0 body=15 status=ok
// SIG undefined FUN_1437862f0(void)

undefined8 FUN_1437862f0(undefined8 param_1,int param_2)

{
  *(bool *)param_1 = param_2 - 0x30U < 10;
  return param_1;
}



// FUNCTION 143786300 FUN_143786300 body=14 status=ok
// SIG undefined FUN_143786300(void)

undefined8 FUN_143786300(longlong param_1,undefined8 param_2)

{
  *(bool *)param_2 = *(longlong *)(param_1 + 0x58) != -1;
  return param_2;
}



// FUNCTION 143786310 FUN_143786310 body=421 status=ok
// SIG undefined FUN_143786310(void)

undefined4 * FUN_143786310(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_f8 [8];
  undefined2 local_f0;
  undefined2 local_ee;
  undefined4 local_ec;
  undefined1 *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c8 [128];
  undefined1 local_48 [64];
  
  local_res18[0] = param_3;
  piVar2 = (int *)FUN_143785ee0(param_1,local_res20);
  if (*piVar2 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    local_ec = 0;
    local_f0 = 2;
    local_ee = Ordinal_9((undefined2)local_res18[0]);
    iVar1 = Ordinal_2(param_1[0xb],&local_f0,0x10);
    if (iVar1 == -1) {
      (**(code **)(*param_1 + 0x20))(param_1);
      *param_2 = 0x80040200;
    }
    else {
      iVar1 = Ordinal_13(param_1[0xb],4);
      if (iVar1 == -1) {
        (**(code **)(*param_1 + 0x20))();
        *param_2 = 0x80040200;
      }
      else {
        local_d8 = local_c8;
        local_cc = 0x80000080;
        local_d0 = 1;
        local_c8[0] = 0;
        (**(code **)(*param_1 + 0x98))(param_1,&local_d8,local_f8);
        if (2 < DAT_146b84468) {
          FUN_14373a730(local_48,&DAT_146b84460,3);
          lVar3 = FUN_14373bbd0(local_48,"Listening on host [{}] port {}",&DAT_145ba0c78,&local_d8,
                                local_res18,0);
          *(char **)(lVar3 + 0x20) = "System\\Io\\Platform\\Bsd\\hkBsdSocket.cpp";
          *(undefined8 *)(lVar3 + 0x28) = 0x1f1;
          FUN_14373a950(local_48);
        }
        *param_2 = 0;
        local_d0 = 0;
        if (-1 < (int)local_cc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_d8,1,local_cc & 0x3fffffff);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1437864c0 FUN_1437864c0 body=490 status=ok
// SIG undefined FUN_1437864c0(void)

undefined8 FUN_1437864c0(longlong param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 local_4d8 [2];
  undefined2 local_4d6;
  undefined4 local_4d4 [3];
  undefined1 local_4c8 [64];
  undefined1 local_488 [80];
  undefined4 local_438 [2];
  longlong local_430;
  undefined4 local_228 [2];
  longlong local_220;
  
  local_430 = *(longlong *)(param_1 + 0x58);
  if (local_430 != -1) {
    puVar7 = &local_res20;
    local_438[0] = 1;
    local_228[0] = 1;
    local_res20 = 0;
    local_220 = local_430;
    iVar2 = Ordinal_18((int)local_430 + 1,local_438,0,local_228,puVar7);
    uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if ((0 < iVar2) &&
       (iVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 0x58),local_438), iVar2 != 0
       )) {
      local_res18[0] = 0x10;
      lVar3 = Ordinal_1(*(undefined8 *)(param_1 + 0x58),local_4d8,local_res18);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_4d4[0];
        uVar1 = Ordinal_15(local_4d6);
        *(undefined2 *)(param_2 + 1) = uVar1;
      }
      lVar4 = _guard_xfg_dispatch_icall_nop(2,local_4d4,local_488);
      if (lVar4 != 0) {
        uVar1 = Ordinal_15(local_4d6);
        local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar1);
        if (2 < DAT_146b84468) {
          FUN_14373a730(local_4c8,&DAT_146b84460,3);
          puVar8 = local_res8;
          lVar4 = FUN_14373bbd0(local_4c8,"Socket got connection from [{}:{}]",&DAT_145ba0cb0,
                                local_488,puVar8,0);
          uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
          *(char **)(lVar4 + 0x20) = "System\\Io\\Platform\\Bsd\\hkBsdSocket.cpp";
          *(undefined8 *)(lVar4 + 0x28) = 0x24b;
          FUN_14373a950(local_4c8);
        }
      }
      if (lVar3 != -1) {
        local_res8[0] = 1;
        Ordinal_21(lVar3,6,1,local_res8,CONCAT44(uVar9,4));
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        lVar4 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar5 + 0x58),0x60);
        if (lVar4 == 0) {
          return 0;
        }
        uVar6 = FUN_1437856d0(lVar4,lVar3);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 1437866b0 FUN_1437866b0 body=67 status=ok
// SIG undefined FUN_1437866b0(void)

undefined8 FUN_1437866b0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1[0xb] != -1) && (0 < param_3)) {
    uVar2 = Ordinal_16();
    if (0 < (int)uVar2) {
      return uVar2;
    }
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return 0;
}



// FUNCTION 143786700 FUN_143786700 body=90 status=ok
// SIG undefined FUN_143786700(void)

undefined4 FUN_143786700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [2];
  undefined2 local_16;
  undefined4 local_14;
  
  local_res8[0] = 0x10;
  uVar2 = Ordinal_17(*(undefined8 *)(param_1 + 0x58),param_2,param_3,0,local_18,local_res8);
  *param_4 = local_14;
  uVar1 = Ordinal_15(local_16);
  *(undefined2 *)(param_4 + 1) = uVar1;
  return uVar2;
}



// FUNCTION 143786760 FUN_143786760 body=137 status=ok
// SIG undefined FUN_143786760(void)

void FUN_143786760(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  FUN_14370c720(&local_18,0,0x10);
  local_18 = 2;
  local_16 = Ordinal_9(*(undefined2 *)(param_4 + 1));
  local_14 = *param_4;
  Ordinal_20(*(undefined8 *)(param_1 + 0x58),param_2,param_3,0,&local_18,0x10);
  return;
}



// FUNCTION 1437867f0 FUN_1437867f0 body=62 status=ok
// SIG undefined FUN_1437867f0(void)

uint * FUN_1437867f0(longlong param_1,uint *param_2,char param_3)

{
  int iVar1;
  uint local_res8 [8];
  
  local_res8[0] = (uint)(param_3 == '\0');
  iVar1 = Ordinal_10(*(undefined8 *)(param_1 + 0x58),0x8004667e,local_res8);
  *param_2 = -(uint)(iVar1 != 0) & 0x80040200;
  return param_2;
}



// FUNCTION 143786830 FUN_143786830 body=67 status=ok
// SIG undefined FUN_143786830(void)

undefined8 FUN_143786830(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1[0xb] != -1) && (0 < param_3)) {
    uVar2 = Ordinal_19();
    if (0 < (int)uVar2) {
      return uVar2;
    }
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return 0;
}



// FUNCTION 143786880 FUN_143786880 body=112 status=ok
// SIG undefined FUN_143786880(void)

int FUN_143786880(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_208 [512];
  
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - iVar1) {
    iVar1 = iVar2;
    if (0x200 < iVar2) {
      iVar1 = 0x200;
    }
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_208,iVar1);
    if (iVar1 == 0) break;
  }
  return param_2 - iVar2;
}



// FUNCTION 1437868f0 FUN_1437868f0 body=81 status=ok
// SIG undefined FUN_1437868f0(void)

undefined8 * FUN_1437868f0(undefined8 *param_1)

{
  *param_1 = hkSolverAllocator::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = param_1 + 8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000040;
  FUN_14370d870(param_1 + 0x88,0);
  return param_1;
}



// FUNCTION 143786950 FUN_143786950 body=44 status=ok
// SIG undefined FUN_143786950(void)

void FUN_143786950(undefined8 *param_1)

{
  *param_1 = hkSolverAllocator::vftable;
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  FUN_143702b50(param_1);
  return;
}



// FUNCTION 143786980 FUN_143786980 body=55 status=ok
// SIG undefined FUN_143786980(void)

undefined8 FUN_143786980(undefined8 param_1,byte param_2)

{
  FUN_143786950();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 1437869c0 FUN_1437869c0 body=398 status=ok
// SIG undefined FUN_1437869c0(void)

longlong FUN_1437869c0(longlong param_1,int *param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x440));
  iVar9 = -1;
  iVar4 = *param_2;
  iVar11 = 0x7ffffff;
  if (*(int *)(param_1 + 0x20) + 1 <
      (int)((*(uint *)(param_1 + 0x3c) & 0x3fffffff) * 2 - *(int *)(param_1 + 0x38))) {
    iVar3 = *(int *)(param_1 + 0x38) + -1;
    if (-1 < iVar3) {
      lVar10 = *(longlong *)(param_1 + 0x30);
      piVar6 = (int *)(lVar10 + 8 + (longlong)iVar3 * 0x10);
      do {
        iVar1 = *piVar6;
        if ((iVar4 <= iVar1) && (iVar1 < iVar11)) {
          iVar11 = iVar1;
          iVar9 = iVar3;
        }
        piVar6 = piVar6 + -4;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      if (-1 < iVar9) {
        lVar7 = (longlong)iVar9 * 0x10;
        lVar5 = *(longlong *)(lVar10 + lVar7);
        if (((param_3 == '\0') || (iVar11 == iVar4)) &&
           ((iVar11 * 2 <= iVar4 * 3 || (iVar4 < 0x401)))) {
          iVar4 = 0;
          *param_2 = *(int *)(lVar10 + 8 + lVar7);
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          lVar7 = *(longlong *)(param_1 + 0x30) + lVar7;
          lVar10 = (longlong)(*(int *)(param_1 + 0x38) - iVar9) * 0x10;
          if (0 < lVar10) {
            lVar8 = 0;
            do {
              iVar4 = iVar4 + 8;
              *(undefined8 *)(lVar8 + lVar7) = *(undefined8 *)(lVar8 + 0x10 + lVar7);
              lVar8 = lVar8 + 8;
            } while (iVar4 < lVar10);
          }
        }
        else {
          piVar6 = (int *)(lVar10 + 8 + lVar7);
          *piVar6 = *piVar6 - iVar4;
          *(longlong *)(lVar10 + lVar7) = lVar5 + iVar4;
        }
        uVar2 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (*(ulonglong *)(param_1 + 0x28) < uVar2) {
          *(ulonglong *)(param_1 + 0x28) = uVar2;
        }
        goto LAB_143786b25;
      }
    }
    if (iVar4 <= *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18)) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      *(longlong *)(param_1 + 0x18) = lVar5 + iVar4;
      *param_2 = iVar4;
      uVar2 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if (*(ulonglong *)(param_1 + 0x28) < uVar2) {
        *(ulonglong *)(param_1 + 0x28) = uVar2;
      }
      goto LAB_143786b25;
    }
  }
  lVar5 = 0;
LAB_143786b25:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x440));
  return lVar5;
}



// FUNCTION 143786b50 FUN_143786b50 body=43 status=ok
// SIG undefined FUN_143786b50(void)

undefined8 FUN_143786b50(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  uint local_res10 [6];
  
  if (param_2 != 0) {
    local_res10[0] = param_2 + 0x7fU & 0xffffff80;
    uVar1 = FUN_1437869c0(param_1,local_res10,1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143786b80 FUN_143786b80 body=26 status=ok
// SIG undefined FUN_143786b80(void)

void FUN_143786b80(longlong *param_1,longlong param_2,int param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143786b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3 + 0x7fU & 0xffffff80);
    return;
  }
  return;
}



// FUNCTION 143786ba0 FUN_143786ba0 body=8 status=ok
// SIG undefined FUN_143786ba0(void)

void FUN_143786ba0(undefined8 param_1,undefined8 param_2)

{
  FUN_1437869c0(param_1,param_2,0);
  return;
}



// FUNCTION 143786bb0 FUN_143786bb0 body=541 status=ok
// SIG undefined FUN_143786bb0(void)

void FUN_143786bb0(longlong param_1,ulonglong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  ulonglong uVar12;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x440));
  uVar8 = (longlong)param_3 + param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (uVar8 == *(ulonglong *)(param_1 + 0x18)) {
    iVar4 = *(int *)(param_1 + 0x38);
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) - (longlong)param_3;
    while ((iVar4 != 0 &&
           (plVar7 = (longlong *)
                     ((longlong)(*(int *)(param_1 + 0x38) + -1) * 0x10 +
                     *(longlong *)(param_1 + 0x30)), (longlong)(int)plVar7[1] + *plVar7 == param_2))
          ) {
      *(undefined8 *)(param_1 + 0x18) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x38) + -1) * 0x10);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      iVar4 = *(int *)(param_1 + 0x38);
    }
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    puVar6 = *(ulonglong **)(param_1 + 0x30);
    *puVar6 = param_2;
    *(int *)(puVar6 + 1) = param_3;
  }
  else {
    uVar10 = *(int *)(param_1 + 0x38) - 1;
    uVar11 = (ulonglong)(int)uVar10;
    uVar9 = uVar10;
    if (-1 < (int)uVar10) {
      puVar6 = (ulonglong *)(uVar11 * 0x10 + *(longlong *)(param_1 + 0x30));
      uVar12 = uVar11;
      do {
        uVar9 = (uint)uVar12;
        if (*puVar6 < param_2) break;
        uVar9 = uVar9 - 1;
        uVar12 = (ulonglong)uVar9;
        puVar6 = puVar6 + -2;
        uVar11 = uVar11 - 1;
      } while (-1 < (longlong)uVar11);
      if (-1 < (int)uVar9) {
        plVar7 = (longlong *)((longlong)(int)uVar9 * 0x10 + *(longlong *)(param_1 + 0x30));
        if ((longlong)(int)plVar7[1] + *plVar7 == param_2) {
          param_3 = (int)plVar7[1] + param_3;
          *(int *)(plVar7 + 1) = param_3;
          if ((int)uVar9 < *(int *)(param_1 + 0x38) + -1) {
            lVar15 = (longlong)(int)(uVar9 + 1) * 0x10;
            if (uVar8 == *(ulonglong *)(lVar15 + *(longlong *)(param_1 + 0x30))) {
              *(int *)(plVar7 + 1) = param_3 + *(int *)(lVar15 + 8 + *(longlong *)(param_1 + 0x30));
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              lVar15 = *(longlong *)(param_1 + 0x30) + lVar15;
              uVar8 = 0;
              lVar14 = (longlong)(int)((*(int *)(param_1 + 0x38) - uVar9) + -1) * 0x10;
              uVar11 = uVar8;
              if (0 < lVar14) {
                do {
                  uVar10 = (int)uVar11 + 8;
                  *(undefined8 *)(uVar8 + lVar15) = *(undefined8 *)(uVar8 + 0x10 + lVar15);
                  uVar8 = uVar8 + 8;
                  uVar11 = (ulonglong)uVar10;
                } while ((int)uVar10 < lVar14);
              }
            }
          }
          goto LAB_143786dab;
        }
      }
    }
    if (((int)uVar9 < (int)uVar10) &&
       (puVar6 = (ulonglong *)((longlong)(int)(uVar9 + 1) * 0x10 + *(longlong *)(param_1 + 0x30)),
       *puVar6 == uVar8)) {
      *(int *)(puVar6 + 1) = (int)puVar6[1] + param_3;
      *puVar6 = param_2;
    }
    else {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      lVar15 = (longlong)(*(int *)(param_1 + 0x38) + -1);
      lVar14 = (longlong)(int)(uVar9 + 1);
      if (lVar14 < lVar15) {
        lVar13 = lVar15 - lVar14;
        lVar15 = lVar15 << 4;
        do {
          puVar1 = (undefined8 *)(lVar15 + -0x10 + *(longlong *)(param_1 + 0x30));
          uVar5 = puVar1[1];
          puVar3 = (undefined8 *)(lVar15 + *(longlong *)(param_1 + 0x30));
          *puVar3 = *puVar1;
          puVar3[1] = uVar5;
          lVar13 = lVar13 + -1;
          lVar15 = lVar15 + -0x10;
        } while (lVar13 != 0);
      }
      local_18 = (undefined4)param_2;
      uStack_14 = (undefined4)(param_2 >> 0x20);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar14 * 0x10);
      *puVar2 = local_18;
      puVar2[1] = uStack_14;
      puVar2[2] = param_3;
      puVar2[3] = uStack_c;
    }
  }
LAB_143786dab:
                    /* WARNING: Could not recover jumptable at 0x000143786dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x440));
  return;
}



// FUNCTION 143786dd0 FUN_143786dd0 body=44 status=ok
// SIG undefined FUN_143786dd0(void)

void FUN_143786dd0(longlong param_1,longlong *param_2)

{
  *param_2 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8);
  param_2[3] = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18);
  param_2[1] = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
  param_2[2] = *(longlong *)(param_1 + 0x28);
  return;
}



// FUNCTION 143786e00 FUN_143786e00 body=13 status=ok
// SIG undefined FUN_143786e00(void)

void FUN_143786e00(longlong param_1)

{
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
  return;
}



// FUNCTION 143786e10 FUN_143786e10 body=124 status=ok
// SIG undefined FUN_143786e10(void)

void FUN_143786e10(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x440));
  *(undefined4 *)(param_1 + 0x3c) = 0x80000040;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(longlong *)(param_1 + 0x30) = param_1 + 0x40;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_3;
  }
  *(longlong *)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(longlong *)(param_1 + 0x10) = iVar1 + param_2;
                    /* WARNING: Could not recover jumptable at 0x000143786e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x440));
  return;
}



// FUNCTION 143786e90 FUN_143786e90 body=624 status=ok
// SIG undefined FUN_143786e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_143786e90(float *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  fVar1 = param_3[0xc];
  fVar2 = param_3[0xd];
  fVar3 = param_3[0xe];
  fVar4 = param_3[0xf];
  fVar12 = param_3[8];
  fVar13 = param_3[9];
  fVar14 = param_3[10];
  fVar15 = param_3[0xb];
  fVar19 = fVar3 * fVar13 - fVar2 * fVar14;
  fVar20 = fVar4 * fVar14 - fVar3 * fVar15;
  fVar21 = fVar1 * fVar15 - fVar4 * fVar12;
  fVar22 = fVar2 * fVar12 - fVar1 * fVar13;
  fVar27 = fVar4 * fVar14 - fVar3 * fVar15;
  fVar29 = fVar1 * fVar15 - fVar4 * fVar12;
  fVar31 = fVar2 * fVar12 - fVar1 * fVar13;
  fVar33 = fVar3 * fVar13 - fVar2 * fVar14;
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar23 = fVar2 * fVar15 - fVar4 * fVar13;
  fVar24 = fVar3 * fVar12 - fVar1 * fVar14;
  fVar25 = fVar4 * fVar13 - fVar2 * fVar15;
  fVar26 = fVar1 * fVar14 - fVar3 * fVar12;
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  fVar39 = fVar2 * fVar27 + fVar23 * fVar3 + fVar19 * fVar4;
  fVar40 = fVar3 * fVar29 + fVar24 * fVar4 + fVar20 * fVar1;
  fVar41 = fVar4 * fVar31 + fVar25 * fVar1 + fVar21 * fVar2;
  fVar42 = fVar1 * fVar33 + fVar26 * fVar2 + fVar22 * fVar3;
  fVar13 = fVar40 * fVar6;
  fVar15 = fVar42 * fVar8;
  fVar12 = -(fVar39 * fVar5);
  fVar14 = -(fVar41 * fVar7);
  fVar16 = fVar14 + fVar12;
  fVar17 = fVar15 + fVar13;
  fVar12 = fVar12 + fVar14;
  fVar13 = fVar13 + fVar15;
  fVar14 = fVar17 + fVar16;
  if (*param_4 < ABS(fVar14)) {
    *param_2 = 0;
    fVar15 = param_3[0xc];
    fVar9 = param_3[0xd];
    fVar10 = param_3[0xe];
    fVar11 = param_3[0xf];
    fVar28 = fVar8 * fVar2 - fVar6 * fVar4;
    fVar30 = fVar5 * fVar3 - fVar7 * fVar1;
    fVar32 = fVar6 * fVar4 - fVar8 * fVar2;
    fVar34 = fVar7 * fVar1 - fVar5 * fVar3;
    fVar35 = fVar4 * fVar7 - fVar8 * fVar3;
    fVar36 = fVar1 * fVar8 - fVar5 * fVar4;
    fVar37 = fVar2 * fVar5 - fVar6 * fVar1;
    fVar38 = fVar3 * fVar6 - fVar7 * fVar2;
    fVar43 = fVar3 * fVar6 - fVar7 * fVar2;
    fVar44 = fVar4 * fVar7 - fVar8 * fVar3;
    fVar45 = fVar1 * fVar8 - fVar5 * fVar4;
    fVar46 = fVar2 * fVar5 - fVar6 * fVar1;
    auVar18._4_4_ = fVar16 + fVar17;
    auVar18._0_4_ = fVar14;
    auVar18._8_4_ = fVar13 + fVar12;
    auVar18._12_4_ = fVar12 + fVar13;
    auVar18 = divps(_DAT_1467f06f0,auVar18);
    fVar12 = auVar18._0_4_;
    fVar13 = auVar18._4_4_;
    fVar14 = auVar18._8_4_;
    fVar16 = auVar18._12_4_;
    fVar1 = param_3[8];
    fVar2 = param_3[9];
    fVar3 = param_3[10];
    fVar4 = param_3[0xb];
    *param_1 = fVar12 * -fVar39;
    param_1[1] = fVar12 * (fVar8 * fVar19 + fVar23 * fVar7 + fVar27 * fVar6);
    param_1[2] = fVar12 * -(fVar11 * fVar43 + fVar28 * fVar10 + fVar35 * fVar9);
    param_1[3] = (fVar4 * fVar43 + fVar28 * fVar3 + fVar35 * fVar2) * fVar12;
    param_1[8] = fVar14 * -fVar41;
    param_1[9] = fVar14 * (fVar6 * fVar21 + fVar25 * fVar5 + fVar31 * fVar8);
    param_1[10] = fVar14 * -(fVar9 * fVar45 + fVar32 * fVar15 + fVar37 * fVar11);
    param_1[0xb] = (fVar2 * fVar45 + fVar32 * fVar1 + fVar37 * fVar4) * fVar14;
    param_1[4] = fVar13 * fVar40;
    param_1[5] = fVar13 * -(fVar5 * fVar20 + fVar24 * fVar8 + fVar29 * fVar7);
    param_1[6] = fVar13 * (fVar15 * fVar44 + fVar30 * fVar11 + fVar36 * fVar10);
    param_1[7] = -(fVar1 * fVar44 + fVar30 * fVar4 + fVar36 * fVar3) * fVar13;
    param_1[0xc] = fVar16 * fVar42;
    param_1[0xd] = fVar16 * -(fVar7 * fVar22 + fVar26 * fVar6 + fVar33 * fVar5);
    param_1[0xe] = fVar16 * (fVar10 * fVar46 + fVar34 * fVar9 + fVar38 * fVar15);
    param_1[0xf] = -(fVar3 * fVar46 + fVar34 * fVar2 + fVar38 * fVar1) * fVar16;
  }
  else {
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 143787100 FUN_143787100 body=42 status=ok
// SIG undefined FUN_143787100(void)

undefined8 * FUN_143787100(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = hkStdioStreamReader::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  *(bool *)(param_1 + 4) = param_2 != 0;
  return param_1;
}



// FUNCTION 143787130 FUN_143787130 body=47 status=ok
// SIG undefined FUN_143787130(void)

void FUN_143787130(undefined8 *param_1)

{
  *param_1 = hkStdioStreamReader::vftable;
  if ((FILE *)param_1[3] != (FILE *)0x0) {
    fclose((FILE *)param_1[3]);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143787160 FUN_143787160 body=136 status=ok
// SIG undefined FUN_143787160(void)

longlong FUN_143787160(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143787130();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437871f0 FUN_1437871f0 body=10 status=ok
// SIG undefined FUN_1437871f0(void)

undefined1 * FUN_1437871f0(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 143787200 FUN_143787200 body=190 status=ok
// SIG undefined FUN_143787200(void)

undefined8 FUN_143787200(undefined8 param_1)

{
  undefined8 *puVar1;
  FILE *pFVar2;
  LPVOID pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_218;
  undefined4 local_210;
  uint local_20c;
  
  puVar1 = (undefined8 *)FUN_143781a00(&local_218,param_1);
  pFVar2 = _wfopen((wchar_t *)*puVar1,L"rb");
  uVar5 = 0;
  local_210 = 0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
  }
  if (pFVar2 != (FILE *)0x0) {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    lVar4 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
    if (lVar4 != 0) {
      uVar5 = FUN_143787100(lVar4,pFVar2);
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 1437872c0 FUN_1437872c0 body=97 status=ok
// SIG undefined FUN_1437872c0(void)

ulonglong FUN_1437872c0(longlong param_1,void *param_2,int param_3)

{
  FILE *_File;
  int iVar1;
  size_t sVar2;
  
  _File = *(FILE **)(param_1 + 0x18);
  sVar2 = fread(param_2,1,(longlong)param_3,_File);
  iVar1 = fseek(_File,-(int)sVar2,1);
  if ((iVar1 < 0) || ((int)sVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return sVar2 & 0xffffffff;
}



// FUNCTION 143787330 FUN_143787330 body=47 status=ok
// SIG undefined FUN_143787330(void)

void FUN_143787330(longlong param_1,void *param_2,int param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x18));
  if ((int)sVar1 < 1) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143787360 FUN_143787360 body=83 status=ok
// SIG undefined FUN_143787360(void)

undefined4 * FUN_143787360(longlong param_1,undefined4 *param_2,long param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fseek(*(FILE **)(param_1 + 0x18),param_3,param_4);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_2;
}



// FUNCTION 1437873c0 FUN_1437873c0 body=11 status=ok
// SIG undefined FUN_1437873c0(void)

void FUN_1437873c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437873c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftell(*(FILE **)(param_1 + 0x18));
  return;
}



// FUNCTION 1437873d0 FUN_1437873d0 body=33 status=ok
// SIG undefined FUN_1437873d0(void)

undefined8 * FUN_1437873d0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = hkWin32StreamWriter::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 143787400 FUN_143787400 body=37 status=ok
// SIG undefined FUN_143787400(void)

void FUN_143787400(undefined8 *param_1)

{
  *param_1 = hkWin32StreamWriter::vftable;
  hkWin32StreamWriter::flush();
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143787430 FUN_143787430 body=136 status=ok
// SIG undefined FUN_143787430(void)

longlong FUN_143787430(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143787400();
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



// FUNCTION 1437874c0 flush body=18 status=ok
// SIG undefined flush(void)

void hkWin32StreamWriter::flush(longlong param_1)

{
  if (*(undefined1 **)(param_1 + 0x18) != &DAT_ffffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0001437874ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(*(undefined1 **)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1437874e0 FUN_1437874e0 body=18 status=ok
// SIG undefined FUN_1437874e0(void)

void FUN_1437874e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001437874ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FlushFileBuffers();
    return;
  }
  return;
}



// FUNCTION 143787500 FUN_143787500 body=14 status=ok
// SIG undefined FUN_143787500(void)

undefined8 FUN_143787500(longlong param_1,undefined8 param_2)

{
  *(bool *)param_2 = *(longlong *)(param_1 + 0x18) != -1;
  return param_2;
}



// FUNCTION 143787510 FUN_143787510 body=275 status=ok
// SIG undefined FUN_143787510(void)

undefined8 FUN_143787510(undefined8 param_1,DWORD param_2,char param_3)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  LPVOID pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_228;
  undefined4 local_220;
  int local_21c;
  
  iVar7 = 1000;
  do {
    puVar2 = (undefined8 *)FUN_143781a00(&local_228,param_1);
    puVar3 = CreateFileW((LPCWSTR)*puVar2,0x40000000,(uint)(param_3 != '\0'),
                         (LPSECURITY_ATTRIBUTES)0x0,param_2,0x80,(HANDLE)0x0);
    local_220 = 0;
    if (-1 < local_21c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_228,2);
    }
    if (puVar3 != &DAT_ffffffffffffffff) {
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar4 + 0x58),0x20);
      if (lVar5 != 0) {
        uVar6 = FUN_1437873d0(lVar5,puVar3);
        return uVar6;
      }
      return 0;
    }
    DVar1 = GetLastError();
    if (DVar1 != 0x20) {
      return 0;
    }
    Sleep(100);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  return 0;
}



// FUNCTION 143787630 FUN_143787630 body=51 status=ok
// SIG undefined FUN_143787630(void)

undefined4 * FUN_143787630(longlong param_1,undefined4 *param_2,LONG param_3,DWORD param_4)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x18),param_3,(PLONG)0x0,param_4);
  uVar2 = 0x80040200;
  if (DVar1 != 0xffffffff) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143787670 FUN_143787670 body=40 status=ok
// SIG undefined FUN_143787670(void)

DWORD FUN_143787670(longlong param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x18),0,(PLONG)0x0,1);
  DVar2 = 0xffffffff;
  if (DVar1 != 0xffffffff) {
    DVar2 = DVar1;
  }
  return DVar2;
}



// FUNCTION 1437876a0 FUN_1437876a0 body=78 status=ok
// SIG undefined FUN_1437876a0(void)

DWORD FUN_1437876a0(longlong param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD local_res8 [8];
  
  if ((*(undefined1 **)(param_1 + 0x18) == &DAT_ffffffffffffffff) || ((int)param_3 < 1)) {
    local_res8[0] = 0;
  }
  else {
    WriteFile(*(undefined1 **)(param_1 + 0x18),param_2,param_3,local_res8,(LPOVERLAPPED)0x0);
    if (local_res8[0] == 0) {
      hkWin32StreamWriter::flush(param_1);
      return local_res8[0];
    }
  }
  return local_res8[0];
}



// FUNCTION 1437876f0 FUN_1437876f0 body=65 status=ok
// SIG undefined FUN_1437876f0(void)

void FUN_1437876f0(undefined8 *param_1)

{
  *param_1 = hkProcessContext::vftable;
  FUN_143787740(param_1 + 1,param_1);
  FUN_14370e7c0(param_1 + 1);
  *param_1 = hkProcessContextBase::vftable;
  return;
}



// FUNCTION 143787740 FUN_143787740 body=153 status=ok
// SIG undefined FUN_143787740(void)

void FUN_143787740(ulonglong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  
  *param_1 = *param_1 & 0xfffffffffffffffd;
  *param_1 = *param_1 | 1;
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  puVar3 = param_1;
  while (plVar2 != (longlong *)0x0) {
    puVar1 = (ulonglong *)(plVar2 + 1);
    plVar4 = (longlong *)(plVar2[1] & 0xfffffffffffffffc);
    if ((*puVar1 & 3) == 0) {
      (*(code *)((undefined8 *)*plVar2)[2])(plVar2,param_2);
      plVar2 = plVar4;
      puVar3 = puVar1;
    }
    else {
      (**(code **)*plVar2)(plVar2,1);
      *puVar3 = (ulonglong)((uint)*puVar3 & 3) | (ulonglong)plVar4;
      plVar2 = plVar4;
    }
  }
  *param_1 = *param_1 & 0xfffffffffffffffc;
  return;
}



// FUNCTION 1437877e0 FUN_1437877e0 body=145 status=ok
// SIG undefined FUN_1437877e0(void)

void FUN_1437877e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkSlot::vftable;
    puVar2[1] = *param_1 & 0xfffffffffffffffc;
    puVar2[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar2;
    *puVar2 = hkSignal1<hkProcessContext*___ptr64>::
              MemberSlot<hkVisualDebugger,void_(__cdecl_hkVisualDebugger::*)(hkProcessContext*___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
    return;
  }
  return;
}



// FUNCTION 143787880 FUN_143787880 body=114 status=ok
// SIG undefined FUN_143787880(void)

void FUN_143787880(undefined8 *param_1)

{
  *param_1 = hkProcess::vftable;
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  if (param_1[2] != 0) {
    FUN_14370c150();
  }
  if (param_1[1] != 0) {
    FUN_14370c150();
    return;
  }
  return;
}



// FUNCTION 143787900 FUN_143787900 body=120 status=ok
// SIG undefined FUN_143787900(void)

longlong FUN_143787900(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143787880();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x40);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 143787980 FUN_143787980 body=105 status=ok
// SIG undefined FUN_143787980(void)

void FUN_143787980(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1437877e0(param_2 + 8,param_1,FUN_1437879f0,"hkVisualDebugger");
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 0x48,8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 8) = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 1437879f0 FUN_1437879f0 body=129 status=ok
// SIG undefined FUN_1437879f0(void)

void FUN_1437879f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    plVar2 = *(longlong **)(param_1 + 0x48);
    uVar5 = uVar3;
    uVar8 = uVar3;
    while (iVar7 = (int)uVar8, *plVar2 != param_2) {
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 1;
      if ((longlong)*(int *)(param_1 + 0x50) <= (longlong)uVar5) {
        return;
      }
    }
    if (-1 < iVar7) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      lVar6 = (longlong)(*(int *)(param_1 + 0x50) - iVar7) * 8;
      lVar1 = *(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 8;
      uVar5 = uVar3;
      if (0 < lVar6) {
        do {
          uVar4 = (int)uVar5 + 8;
          *(undefined8 *)(uVar3 + lVar1) = *(undefined8 *)(uVar3 + 8 + lVar1);
          uVar3 = uVar3 + 8;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < lVar6);
      }
    }
  }
  return;
}



// FUNCTION 143787a80 FUN_143787a80 body=422 status=ok
// SIG undefined FUN_143787a80(void)

void FUN_143787a80(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_48 [64];
  
  (**(code **)(*DAT_146b81f68 + 0x48))(DAT_146b81f68,0x1293adef,"Shutting down Visual Debugger..");
  iVar2 = (int)param_1[8];
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_143787c50(param_1,iVar2,0);
    (**(code **)(*param_1 + 0x30))(param_1,iVar2);
    if (2 < DAT_146b84508) {
      FUN_14373a730(local_48,&DAT_146b84500,3);
      lVar3 = FUN_14373bbd0(local_48,"Client deleted.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "hkVisualDebugger.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0xae;
      FUN_14373a950(local_48);
    }
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
    param_1[5] = 0;
    if (2 < DAT_146b84508) {
      FUN_14373a730(local_48,&DAT_146b84500,3);
      lVar3 = FUN_14373bbd0(local_48,"Server deleted.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "hkVisualDebugger.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0xb5;
      FUN_14373a950(local_48);
    }
  }
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
    param_1[6] = 0;
    if (2 < DAT_146b84508) {
      FUN_14373a730(local_48,&DAT_146b84500,3);
      lVar3 = FUN_14373bbd0(local_48,"Net lobby deleted.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "hkVisualDebugger.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0xbc;
      FUN_14373a950(local_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143787c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b81f68 + 0x50))();
  return;
}



// FUNCTION 143787c30 FUN_143787c30 body=26 status=ok
// SIG undefined FUN_143787c30(void)

void FUN_143787c30(longlong param_1,undefined8 param_2)

{
  FUN_1437877e0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),"Unnamed");
  return;
}



// FUNCTION 143787c50 FUN_143787c50 body=113 status=ok
// SIG undefined FUN_143787c50(void)

void FUN_143787c50(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8);
  cVar3 = (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x20) + 0x38))();
  if (cVar3 != '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x30);
    FUN_143df9450(uVar2,5);
    FUN_143df9480(uVar2,0);
    FUN_143df96a0(uVar2,param_3);
    plVar4 = (longlong *)FUniqueNetIdString::GetBytes(uVar2);
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  return;
}



// FUNCTION 143787ce0 FUN_143787ce0 body=120 status=ok
// SIG undefined FUN_143787ce0(void)

undefined8 FUN_143787ce0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x50);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143787d60(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143787d60 FUN_143787d60 body=140 status=ok
// SIG undefined FUN_143787d60(void)

undefined8 * FUN_143787d60(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkDebugDisplay::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_14370d870(lVar2,1000);
    param_1[5] = uVar3;
    return param_1;
  }
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143787df0 FUN_143787df0 body=221 status=ok
// SIG undefined FUN_143787df0(void)

void FUN_143787df0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[5];
  *param_1 = hkDebugDisplay::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lpCriticalSection,0x28);
  }
  uVar3 = FUN_143703a50();
  lVar1 = param_1[3];
  lVar4 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar3,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkDebugDisplayHandler::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143787ed0 FUN_143787ed0 body=139 status=ok
// SIG undefined FUN_143787ed0(void)

longlong FUN_143787ed0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143787df0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 143787f60 FUN_143787f60 body=144 status=ok
// SIG undefined FUN_143787f60(void)

undefined8 * FUN_143787f60(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkDebugDisplayHandler::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x18;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143787ff0 FUN_143787ff0 body=220 status=ok
// SIG undefined FUN_143787ff0(void)

undefined4 *
FUN_143787ff0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x20))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437880d0 FUN_1437880d0 body=58 status=ok
// SIG undefined FUN_1437880d0(void)

undefined8 FUN_1437880d0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x28))();
  return param_2;
}



// FUNCTION 143788110 FUN_143788110 body=265 status=ok
// SIG undefined FUN_143788110(void)

undefined4 *
FUN_143788110(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x28))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7,param_8);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788220 FUN_143788220 body=220 status=ok
// SIG undefined FUN_143788220(void)

undefined4 *
FUN_143788220(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x30))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788300 FUN_143788300 body=165 status=ok
// SIG undefined FUN_143788300(void)

undefined4 *
FUN_143788300(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1437883b0 FUN_1437883b0 body=255 status=ok
// SIG undefined FUN_1437883b0(void)

undefined4 *
FUN_1437883b0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xa0))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437884b0 FUN_1437884b0 body=80 status=ok
// SIG undefined FUN_1437884b0(void)

undefined8 FUN_1437884b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xa8))();
  return param_2;
}



// FUNCTION 143788500 FUN_143788500 body=276 status=ok
// SIG undefined FUN_143788500(void)

undefined4 *
FUN_143788500(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  
  bVar5 = 1;
  local_res10 = param_2;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0xa8))
                         (plVar1,local_res8,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
      ;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143788620 FUN_143788620 body=265 status=ok
// SIG undefined FUN_143788620(void)

undefined4 *
FUN_143788620(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0xb0))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar6 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143788730 FUN_143788730 body=84 status=ok
// SIG undefined FUN_143788730(void)

undefined8 FUN_143788730(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xb8))();
  return param_2;
}



// FUNCTION 143788790 FUN_143788790 body=255 status=ok
// SIG undefined FUN_143788790(void)

undefined4 *
FUN_143788790(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 200))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788890 FUN_143788890 body=223 status=ok
// SIG undefined FUN_143788890(void)

undefined4 *
FUN_143788890(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x138))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788970 FUN_143788970 body=258 status=ok
// SIG undefined FUN_143788970(void)

undefined4 *
FUN_143788970(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x118))
                         (plVar1,local_res8,uVar2,param_4,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788a80 FUN_143788a80 body=223 status=ok
// SIG undefined FUN_143788a80(void)

undefined4 *
FUN_143788a80(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x148))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788b60 FUN_143788b60 body=255 status=ok
// SIG undefined FUN_143788b60(void)

undefined4 *
FUN_143788b60(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xf0))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788c60 FUN_143788c60 body=255 status=ok
// SIG undefined FUN_143788c60(void)

undefined4 *
FUN_143788c60(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xd8))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143788d60 FUN_143788d60 body=265 status=ok
// SIG undefined FUN_143788d60(void)

undefined4 *
FUN_143788d60(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x150))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar6 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143788e70 FUN_143788e70 body=264 status=ok
// SIG undefined FUN_143788e70(void)

undefined4 *
FUN_143788e70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  
  bVar5 = 1;
  local_res10 = param_2;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x130))
                         (plVar1,local_res8,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
      ;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143788f80 FUN_143788f80 body=282 status=ok
// SIG undefined FUN_143788f80(void)

undefined4 *
FUN_143788f80(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x128))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7,param_8);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437890a0 FUN_1437890a0 body=223 status=ok
// SIG undefined FUN_1437890a0(void)

undefined4 *
FUN_1437890a0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xd0))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143789180 FUN_143789180 body=223 status=ok
// SIG undefined FUN_143789180(void)

undefined4 *
FUN_143789180(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x90))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 143789260 FUN_143789260 body=61 status=ok
// SIG undefined FUN_143789260(void)

undefined8 FUN_143789260(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x98))();
  return param_2;
}



// FUNCTION 1437892a0 FUN_1437892a0 body=282 status=ok
// SIG undefined FUN_1437892a0(void)

undefined4 *
FUN_1437892a0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x98))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7,param_8);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437893c0 FUN_1437893c0 body=258 status=ok
// SIG undefined FUN_1437893c0(void)

undefined4 *
FUN_1437893c0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x120))
                         (plVar1,local_res8,uVar2,param_4,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437894d0 FUN_1437894d0 body=282 status=ok
// SIG undefined FUN_1437894d0(void)

undefined4 *
FUN_1437894d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xe8))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7,param_8);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437895f0 FUN_1437895f0 body=223 status=ok
// SIG undefined FUN_1437895f0(void)

undefined4 *
FUN_1437895f0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res18;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xc0))(plVar1,local_res8,uVar2,param_4,param_5,param_6);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437896d0 FUN_1437896d0 body=255 status=ok
// SIG undefined FUN_1437896d0(void)

undefined4 *
FUN_1437896d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar7 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = local_res20;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x140))
                         (plVar1,local_res8,local_res18,uVar2,param_5,param_6,param_7);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar7 = bVar7 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = 0x80040200;
  if (bVar7 != 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1437897d0 FUN_1437897d0 body=265 status=ok
// SIG undefined FUN_1437897d0(void)

undefined4 *
FUN_1437897d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0xe0))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar6 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1437898e0 FUN_1437898e0 body=132 status=ok
// SIG undefined FUN_1437898e0(void)

int * FUN_1437898e0(longlong param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x18));
      (**(code **)(*plVar1 + 0x100))(plVar1,local_res8);
      if (local_res8[0] < 0) {
        *param_2 = local_res8[0];
        goto LAB_143789940;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  *param_2 = 0;
LAB_143789940:
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 143789970 FUN_143789970 body=163 status=ok
// SIG undefined FUN_143789970(void)

undefined4 * FUN_143789970(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0xf8))(plVar1,local_res8,param_3);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar4 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143789a20 FUN_143789a20 body=162 status=ok
// SIG undefined FUN_143789a20(void)

undefined4 * FUN_143789a20(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x88))(plVar1,local_res8,param_3);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar4 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143789ad0 FUN_143789ad0 body=159 status=ok
// SIG undefined FUN_143789ad0(void)

undefined4 * FUN_143789ad0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x78))(plVar1,local_res8,param_3);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar4 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143789b70 FUN_143789b70 body=159 status=ok
// SIG undefined FUN_143789b70(void)

undefined4 * FUN_143789b70(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8,param_3);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar4 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143789c10 FUN_143789c10 body=183 status=ok
// SIG undefined FUN_143789c10(void)

undefined4 *
FUN_143789c10(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x50))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143789cd0 FUN_143789cd0 body=184 status=ok
// SIG undefined FUN_143789cd0(void)

undefined4 *
FUN_143789cd0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x48))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143789d90 FUN_143789d90 body=165 status=ok
// SIG undefined FUN_143789d90(void)

undefined4 *
FUN_143789d90(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x38))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}


