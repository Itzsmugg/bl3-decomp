// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405482b0 FUN_1405482b0 body=45 status=ok
// SIG undefined FUN_1405482b0(void)

undefined8 FUN_1405482b0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 1405482e0 FUN_1405482e0 body=45 status=ok
// SIG undefined FUN_1405482e0(void)

undefined8 FUN_1405482e0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 140548310 FUN_140548310 body=277 status=ok
// SIG undefined FUN_140548310(void)

undefined8 FUN_140548310(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar7[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar7 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar7[1];
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar6 = *(longlong **)(param_1 + 0x10);
          plVar5 = plVar6;
          if (plVar6 == (longlong *)0x0) goto LAB_1405483e2;
          LOCK();
          iVar3 = (int)plVar6[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar6 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          plVar5 = plVar8;
          if (!bVar9) goto LAB_1405483c0;
          goto LAB_1405483e2;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar7 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = 0;
  plVar7 = plVar6;
  goto LAB_140548359;
  while( true ) {
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar6 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar9) break;
LAB_1405483c0:
    LOCK();
    bVar9 = iVar3 == (int)plVar6[1];
    if (bVar9) {
      *(int *)(plVar6 + 1) = iVar3 + 1;
    }
    UNLOCK();
    if (bVar9) {
      plVar5 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 8);
      }
      break;
    }
  }
LAB_1405483e2:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  uVar4 = 1;
LAB_140548359:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 140548430 FUN_140548430 body=278 status=ok
// SIG undefined FUN_140548430(void)

undefined8 FUN_140548430(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140548502;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x0001405484da;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_14054847a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return uVar6;
joined_r0x0001405484da:
  plVar7 = plVar8;
  if (bVar9) goto LAB_140548502;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140548502;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x0001405484da;
LAB_140548502:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_14054847a;
}



// FUNCTION 140548550 FUN_140548550 body=1014 status=ok
// SIG undefined FUN_140548550(void)

longlong FUN_140548550(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  iVar6 = 0;
  uStack_94 = 1;
  plVar12 = (longlong *)(param_1 + 0x78);
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0xa0);
  puVar1 = (uint *)(param_1 + 0x88);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = iVar6;
    local_98 = iVar6;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar10 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar10;
      if (bVar4) goto LAB_14054862b;
      uVar3 = puVar9[lVar8 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (iStack_80 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14054862b:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xa0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar12;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar7 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar10 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1405486f4;
      uVar7 = puVar9[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar10 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (uVar11 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1405486f4:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      plVar12 = (longlong *)(param_1 + 0xd0);
      local_98 = 0;
      uVar2 = *(uint *)(param_1 + 0xf8);
      puVar1 = (uint *)(param_1 + 0xe0);
      uStack_94 = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar2 == 0) goto LAB_140548801;
      puVar9 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar3 = *puVar9;
      iStack_80 = iVar6;
      local_98 = iVar6;
      goto joined_r0x0001405487aa;
    }
    lVar8 = (longlong)(int)uStack_5c * 0x168 + *plVar12;
    if ((*(longlong *)(lVar8 + 0xd0) != 0) &&
       (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) break;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  goto LAB_140548921;
joined_r0x0001405487aa:
  if (uVar3 != 0) goto LAB_1405487d4;
  lVar8 = (longlong)local_98;
  iStack_80 = iStack_80 + 0x20;
  iVar6 = local_98 + 1;
  bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
  local_98 = iVar6;
  if (bVar4) goto LAB_1405487fd;
  uVar3 = puVar9[lVar8 + 1];
  goto joined_r0x0001405487aa;
LAB_1405487d4:
  uStack_94 = -uVar3 & uVar3;
  iVar6 = 0x1f;
  if (uStack_94 != 0) {
    for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (uStack_94 == 0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = 0x1f - iVar6;
  }
  uStack_84 = (iStack_80 - iVar6) + 0x1f;
  if ((int)uVar2 < (int)uStack_84) {
LAB_1405487fd:
    uStack_84 = uVar2;
  }
LAB_140548801:
  uVar3 = *(uint *)(param_1 + 0xf8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar12;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar7 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1405488c2;
      uVar7 = puVar9[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar11 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1405488c2:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      return 0;
    }
    lVar8 = (longlong)(int)uStack_5c * 0x168 + *plVar12;
    if ((*(longlong *)(lVar8 + 0xd0) != 0) &&
       (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) break;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
LAB_140548921:
  return lVar8 + 0x10;
}



// FUNCTION 140548950 FUN_140548950 body=1021 status=ok
// SIG undefined FUN_140548950(void)

longlong FUN_140548950(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar6 = (**(code **)(*param_2 + 0x90))(param_2);
  iVar7 = 0;
  uStack_94 = 1;
  plVar13 = (longlong *)(param_1 + 0x78);
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0xa0);
  puVar1 = (uint *)(param_1 + 0x88);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_80 = iVar7;
    local_98 = iVar7;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar11;
      if (bVar4) goto LAB_140548a3b;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar11 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (iStack_80 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140548a3b:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xa0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar13;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar10 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar11 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_140548b04;
      uVar8 = puVar10[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar12 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140548b04:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      plVar13 = (longlong *)(param_1 + 0xd0);
      local_98 = 0;
      uVar2 = *(uint *)(param_1 + 0xf8);
      puVar1 = (uint *)(param_1 + 0xe0);
      uStack_94 = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar2 == 0) goto LAB_140548c11;
      puVar10 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar10 = puVar1;
      }
      uVar3 = *puVar10;
      iStack_80 = iVar7;
      local_98 = iVar7;
      goto joined_r0x000140548bb5;
    }
    lVar9 = (longlong)(int)uStack_5c * 0x168 + *plVar13;
    cVar5 = AccountId::operator==(lVar9 + 0x10,uVar6);
    if (cVar5 != '\0') break;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  goto LAB_140548d28;
joined_r0x000140548bb5:
  if (uVar3 != 0) goto LAB_140548be4;
  lVar9 = (longlong)local_98;
  iStack_80 = iStack_80 + 0x20;
  iVar7 = local_98 + 1;
  bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
  local_98 = iVar7;
  if (bVar4) goto LAB_140548c0d;
  uVar3 = puVar10[lVar9 + 1];
  goto joined_r0x000140548bb5;
LAB_140548be4:
  uStack_94 = -uVar3 & uVar3;
  iVar7 = 0x1f;
  if (uStack_94 != 0) {
    for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uStack_94 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f - iVar7;
  }
  uStack_84 = (iStack_80 - iVar7) + 0x1f;
  if ((int)uVar2 < (int)uStack_84) {
LAB_140548c0d:
    uStack_84 = uVar2;
  }
LAB_140548c11:
  uVar3 = *(uint *)(param_1 + 0xf8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar13;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar10 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140548cd2;
      uVar8 = puVar10[(longlong)iVar7 + 1];
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
    uStack_84 = (uVar12 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140548cd2:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      return 0;
    }
    lVar9 = (longlong)(int)uStack_5c * 0x168 + *plVar13;
    cVar5 = AccountId::operator==(lVar9 + 0x10,uVar6);
    if (cVar5 != '\0') break;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
LAB_140548d28:
  return lVar9 + 0x10;
}



// FUNCTION 140548d50 FUN_140548d50 body=1080 status=ok
// SIG undefined FUN_140548d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140548d50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong **local_150;
  int local_148 [2];
  undefined2 *local_140;
  int local_138;
  longlong *local_130;
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong local_f0 [2];
  longlong local_e0 [2];
  undefined1 local_d0 [96];
  longlong *local_70;
  int local_68;
  char local_60;
  longlong local_58 [2];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  FUN_140549500(param_1 + 0xd0,local_148,param_2);
  plVar9 = (longlong *)0x0;
  plVar6 = plVar9;
  if (local_148[0] != -1) {
    plVar6 = (longlong *)((longlong)local_148[0] * 0x168 + *(longlong *)(param_1 + 0xd0));
  }
  plVar14 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar14 = plVar9;
  }
  if (plVar14 == (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 8);
  }
  else {
    lVar5 = FUN_142b45e90();
    plVar6 = (longlong *)FUN_142b4a6e0(*(undefined8 *)(lVar5 + 0x18),local_120,param_2);
    local_128 = (longlong *)plVar6[1];
    plVar6 = (longlong *)*plVar6;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    local_130 = plVar6;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_140);
      FUN_140562700(plVar14,&local_130);
      local_60 = '\0';
      local_48 = '\0';
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      uVar7 = FUN_14054ec00(param_1,local_e0,&local_110);
      uVar8 = FUN_14054f180(param_1,local_f0,&local_100);
      local_150 = &local_70;
      local_158 = local_58;
      lVar5 = FUN_14056c2d0(local_d0,uVar8,&local_140,uVar7);
      FString::operator=(plVar14,lVar5);
      FString::operator=(plVar14 + 2,lVar5 + 0x10);
      FString::operator=(plVar14 + 4,lVar5 + 0x20);
      FString::operator=(plVar14 + 6,lVar5 + 0x30);
      FString::operator=(plVar14 + 8,lVar5 + 0x40);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(plVar14 + 10,lVar5 + 0x50);
      FUN_14056ed50(local_d0);
      if (local_f0[0] != 0) {
        FMemory::Free();
      }
      if (local_e0[0] != 0) {
        FMemory::Free();
      }
      if ((local_48 != '\0') && (local_48 = '\0', local_58[0] != 0)) {
        FMemory::Free();
      }
      if (local_60 != '\0') {
        local_60 = '\0';
        plVar6 = local_70;
        for (iVar12 = local_68; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_70 != (longlong *)0x0) {
          FMemory::Free(local_70);
        }
      }
      lVar5 = FUN_142b45e90();
      lVar5 = *(longlong *)(lVar5 + 0x18);
      if (((*(int *)(lVar5 + 400) != 0) && (*(longlong **)(lVar5 + 0x188) != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x188) + 0x18))(), cVar3 != '\0')) {
        if (*(int *)(lVar5 + 400) != 0) {
          plVar9 = *(longlong **)(lVar5 + 0x188);
        }
        (**(code **)(*plVar9 + 0x40))(plVar9,param_2);
      }
      plVar9 = (longlong *)(param_1 + 0x1b8);
      if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
        puVar10 = &DAT_143f3eda8;
        if (local_138 != 0) {
          puVar10 = local_140;
        }
        iVar12 = FUN_140438070(puVar10);
        lVar5 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar5 = param_1 + 0x1f0;
        }
        iVar12 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (longlong)iVar12) * 4)
        ;
        if (iVar12 != -1) {
          lVar5 = *plVar9;
          do {
            lVar13 = (longlong)iVar12 * 0x78;
            puVar10 = &DAT_143f3eda8;
            if (local_138 != 0) {
              puVar10 = local_140;
            }
            if (*(int *)(lVar13 + 8 + lVar5) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = *(undefined2 **)(lVar13 + lVar5);
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar10);
            if (iVar4 == 0) {
              if (iVar12 != -1) {
                lVar13 = *plVar9 + lVar13;
                goto LAB_140549099;
              }
              break;
            }
            lVar5 = *plVar9;
            iVar12 = *(int *)(lVar13 + 0x70 + lVar5);
          } while (iVar12 != -1);
        }
      }
      lVar13 = 0;
LAB_140549099:
      lVar5 = lVar13 + 0x10;
      if (lVar13 == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        FUN_140559bb0(param_1,plVar14,lVar5,lVar5 + 0x50);
        FUN_14055ebf0(plVar9,&local_140);
      }
      if (local_140 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    plVar9 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_128 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    plVar9 = *(longlong **)(param_2 + 8);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140549190 FUN_140549190 body=483 status=ok
// SIG undefined FUN_140549190(void)

void FUN_140549190(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  RoomId RVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [2];
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  code *local_50;
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  undefined1 local_30 [24];
  
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_108);
  plVar3 = (longlong *)puVar7[1];
  uVar4 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar9 = (int *)((longlong)local_100 + 0xc);
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  piVar9 = (int *)((longlong)plVar3 + 0xc);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  FString::FString(local_e8,param_1 + 0x20);
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  puVar8 = (undefined4 *)FUN_140447410(local_e8,local_30);
  local_f8 = *puVar8;
  uStack_f4 = puVar8[1];
  uStack_f0 = puVar8[2];
  uStack_ec = puVar8[3];
  local_50 = FUN_140530cb0;
  local_48 = FUN_14052c790;
  local_40 = &LAB_14052c660;
  local_38 = FUN_14052c6b0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_90 = uVar4;
  local_88 = plVar3;
  RVar6 = bifrost::messaging::_guard_xfg_dispatch_icall_nop(&local_f8,0);
  bifrost::messaging::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar5 + 8),RVar6,&local_90);
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar2 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140549380 FUN_140549380 body=380 status=ok
// SIG undefined FUN_140549380(void)

int * FUN_140549380(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar11 = (longlong *)*param_3;
    uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11);
      uVar7 = (uint)*pbVar8;
    }
    else {
      pcVar3 = *(code **)(*plVar11 + 0x10);
      if (uVar7 < 8) {
        puVar9 = (uint *)(*pcVar3)();
        uVar7 = *puVar9;
      }
      else {
        puVar10 = (undefined8 *)(*pcVar3)(plVar11);
        uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar13 = *(int *)((longlong)plVar11 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    if (iVar13 != -1) {
      lVar12 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x38;
        plVar4 = *(longlong **)(lVar14 + 8 + lVar12);
        puVar10 = *(undefined8 **)(lVar14 + lVar12);
        plVar11 = plVar4 + 1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        if ((puVar10 == (undefined8 *)*param_3) ||
           (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 != '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (bVar5) {
          *param_2 = iVar13;
          return param_2;
        }
        lVar12 = *param_1;
        iVar13 = *(int *)(lVar14 + 0x30 + lVar12);
      } while (iVar13 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549500 FUN_140549500 body=386 status=ok
// SIG undefined FUN_140549500(void)

int * FUN_140549500(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar11 = (longlong *)*param_3;
    uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11);
      uVar7 = (uint)*pbVar8;
    }
    else {
      pcVar3 = *(code **)(*plVar11 + 0x10);
      if (uVar7 < 8) {
        puVar9 = (uint *)(*pcVar3)();
        uVar7 = *puVar9;
      }
      else {
        puVar10 = (undefined8 *)(*pcVar3)(plVar11);
        uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar13 = *(int *)((longlong)plVar11 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    if (iVar13 != -1) {
      lVar12 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x168;
        plVar4 = *(longlong **)(lVar14 + 8 + lVar12);
        puVar10 = *(undefined8 **)(lVar14 + lVar12);
        plVar11 = plVar4 + 1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        if ((puVar10 == (undefined8 *)*param_3) ||
           (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 != '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (bVar5) {
          *param_2 = iVar13;
          return param_2;
        }
        lVar12 = *param_1;
        iVar13 = *(int *)(lVar14 + 0x160 + lVar12);
      } while (iVar13 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549690 FUN_140549690 body=380 status=ok
// SIG undefined FUN_140549690(void)

int * FUN_140549690(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar11 = (longlong *)*param_3;
    uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11);
      uVar7 = (uint)*pbVar8;
    }
    else {
      pcVar3 = *(code **)(*plVar11 + 0x10);
      if (uVar7 < 8) {
        puVar9 = (uint *)(*pcVar3)();
        uVar7 = *puVar9;
      }
      else {
        puVar10 = (undefined8 *)(*pcVar3)(plVar11);
        uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar13 = *(int *)((longlong)plVar11 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    if (iVar13 != -1) {
      lVar12 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x68;
        plVar4 = *(longlong **)(lVar14 + 8 + lVar12);
        puVar10 = *(undefined8 **)(lVar14 + lVar12);
        plVar11 = plVar4 + 1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        if ((puVar10 == (undefined8 *)*param_3) ||
           (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 != '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (bVar5) {
          *param_2 = iVar13;
          return param_2;
        }
        lVar12 = *param_1;
        iVar13 = *(int *)(lVar14 + 0x60 + lVar12);
      } while (iVar13 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549810 FUN_140549810 body=391 status=ok
// SIG undefined FUN_140549810(void)

int * FUN_140549810(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar13 = (longlong *)*param_3;
    uVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
    if (uVar9 < 4) {
      pbVar10 = (byte *)(**(code **)(*plVar13 + 0x10))(plVar13);
      uVar9 = (uint)*pbVar10;
    }
    else {
      pcVar4 = *(code **)(*plVar13 + 0x10);
      if (uVar9 < 8) {
        puVar11 = (uint *)(*pcVar4)();
        uVar9 = *puVar11;
      }
      else {
        puVar12 = (undefined8 *)(*pcVar4)(plVar13);
        uVar9 = (int)((ulonglong)*puVar12 >> 0x20) * 0x17 + (int)*puVar12;
      }
    }
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    iVar15 = *(int *)((longlong)plVar13 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    if (iVar15 != -1) {
      lVar14 = *param_1;
      do {
        lVar2 = (longlong)iVar15 * 0x28;
        plVar5 = *(longlong **)(lVar2 + 8 + lVar14);
        puVar12 = *(undefined8 **)(lVar2 + lVar14);
        plVar13 = plVar5 + 1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar13 = (int)*plVar13 + 1;
          UNLOCK();
        }
        puVar6 = (undefined8 *)*param_3;
        if ((puVar12 == puVar6) || (cVar8 = (**(code **)*puVar6)(puVar6,puVar12), cVar8 != '\0')) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          lVar14 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
        if (bVar7) {
          *param_2 = iVar15;
          return param_2;
        }
        lVar14 = *param_1;
        iVar15 = *(int *)(lVar2 + 0x20 + lVar14);
      } while (iVar15 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1405499a0 FUN_1405499a0 body=381 status=ok
// SIG undefined FUN_1405499a0(void)

int * FUN_1405499a0(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar11 = (longlong *)*param_3;
    uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11);
      uVar7 = (uint)*pbVar8;
    }
    else {
      pcVar3 = *(code **)(*plVar11 + 0x10);
      if (uVar7 < 8) {
        puVar9 = (uint *)(*pcVar3)();
        uVar7 = *puVar9;
      }
      else {
        puVar10 = (undefined8 *)(*pcVar3)(plVar11);
        uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar13 = *(int *)((longlong)plVar11 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    if (iVar13 != -1) {
      lVar12 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x20;
        plVar4 = *(longlong **)(lVar14 + 8 + lVar12);
        puVar10 = *(undefined8 **)(lVar14 + lVar12);
        plVar11 = plVar4 + 1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        if ((puVar10 == (undefined8 *)*param_3) ||
           (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 != '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (bVar5) {
          *param_2 = iVar13;
          return param_2;
        }
        lVar12 = *param_1;
        iVar13 = *(int *)(lVar14 + 0x18 + lVar12);
      } while (iVar13 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549b20 FUN_140549b20 body=223 status=ok
// SIG undefined FUN_140549b20(void)

int * FUN_140549b20(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x78;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x70 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549c00 FUN_140549c00 body=391 status=ok
// SIG undefined FUN_140549c00(void)

int * FUN_140549c00(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar13 = (longlong *)*param_3;
    uVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
    if (uVar9 < 4) {
      pbVar10 = (byte *)(**(code **)(*plVar13 + 0x10))(plVar13);
      uVar9 = (uint)*pbVar10;
    }
    else {
      pcVar4 = *(code **)(*plVar13 + 0x10);
      if (uVar9 < 8) {
        puVar11 = (uint *)(*pcVar4)();
        uVar9 = *puVar11;
      }
      else {
        puVar12 = (undefined8 *)(*pcVar4)(plVar13);
        uVar9 = (int)((ulonglong)*puVar12 >> 0x20) * 0x17 + (int)*puVar12;
      }
    }
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    iVar15 = *(int *)((longlong)plVar13 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    if (iVar15 != -1) {
      lVar14 = *param_1;
      do {
        lVar2 = (longlong)iVar15 * 0x18;
        plVar5 = *(longlong **)(lVar2 + 8 + lVar14);
        puVar12 = *(undefined8 **)(lVar2 + lVar14);
        plVar13 = plVar5 + 1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar13 = (int)*plVar13 + 1;
          UNLOCK();
        }
        puVar6 = (undefined8 *)*param_3;
        if ((puVar12 == puVar6) || (cVar8 = (**(code **)*puVar6)(puVar6,puVar12), cVar8 != '\0')) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          lVar14 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
        if (bVar7) {
          *param_2 = iVar15;
          return param_2;
        }
        lVar14 = *param_1;
        iVar15 = *(int *)(lVar2 + 0x10 + lVar14);
      } while (iVar15 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549d90 FindId body=173 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = AccountId::operator==((longlong)iVar2 * 0x68 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140549e40 FUN_140549e40 body=643 status=ok
// SIG undefined FUN_140549e40(void)

undefined8 FUN_140549e40(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  LARGE_INTEGER local_res8;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  longlong *local_3c;
  undefined1 local_34;
  
  uVar7 = 0x3e5;
  FUN_1404b6bd0(param_1 + 0x2b0);
  puVar5 = (undefined1 *)(param_1 + 0x2e8);
  plVar6 = (longlong *)0x8;
  do {
    iVar2 = rand();
    *puVar5 = (char)iVar2;
    puVar5 = puVar5 + 1;
    plVar6 = (longlong *)((longlong)plVar6 + -1);
  } while (plVar6 != (longlong *)0x0);
  local_58 = plVar6;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_50 = 3;
  local_58 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140559260;
    plVar3[1] = param_1;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  local_68 = plVar6;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_1405560e0;
    plVar3[1] = param_1;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  QueryPerformanceCounter(&local_res8);
  local_34 = 0;
  local_40 = 0;
  *(double *)(param_1 + 0x408) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  local_48 = plVar6;
  local_3c = plVar6;
  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_48);
  lVar4 = (longlong)local_40;
  local_40 = local_40 + 0x400;
  if ((int)local_3c < local_40) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)local_48),0,0x400);
  FUN_1404ae8d0(param_1 + 0x2b0,&local_48,*(undefined8 *)(param_1 + 0x2e8));
  cVar1 = FUN_1404b5f10(param_1 + 0x2b0,&local_48,&local_58,&local_68);
  if (cVar1 == '\0') {
    uVar7 = 0x80004005;
    FUN_1405693c0(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x18) = 3;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_14054a05c;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_14054a05c:
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return uVar7;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return uVar7;
}



// FUNCTION 14054a0d0 FUN_14054a0d0 body=978 status=ok
// SIG undefined FUN_14054a0d0(void)

void FUN_14054a0d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_38 [2];
  
  plVar5 = (longlong *)*param_3;
  plVar4 = (longlong *)FName::FName(local_res18,L"SPARK",1);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_res20);
  if (*plVar5 != *plVar4) {
    return;
  }
  plVar6 = (longlong *)operator_new(0x118);
  plVar5 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = *param_2;
    lVar8 = param_2[1];
    plVar6[3] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    plVar6[4] = *param_3;
    lVar8 = param_3[1];
    plVar6[5] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    plVar6[6] = 0;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 8) = 2;
    plVar6[9] = (longlong)&PTR_FUN_143f769a8;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[0xe] = (longlong)&PTR_FUN_143f769a0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    *(undefined2 *)(plVar6 + 0x11) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x8c) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x94) = 0;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    plVar6[0x17] = 0;
    plVar6[0x18] = 0;
    *(undefined4 *)(plVar6 + 0x19) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0xcc) = 0;
    plVar6[0x1b] = 0;
    *(undefined4 *)(plVar6 + 0x1c) = 0;
    plVar6[0x1d] = 0;
    plVar6[0x1e] = 0;
    plVar6[0x1f] = 0;
    *(undefined4 *)(plVar6 + 0x20) = 9999;
    plVar6[0x21] = 0;
    *(undefined4 *)(plVar6 + 0x22) = 0;
    plVar4 = plVar6;
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143fc21a0;
    plVar6[2] = (longlong)plVar4;
    plVar5 = plVar6;
  }
  if (plVar4 == (longlong *)0x0) goto LAB_14054a45d;
  if ((*plVar4 == 0) || (plVar4[1] == 0)) {
LAB_14054a28c:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar4 = (longlong)plVar4;
    plVar6 = (longlong *)plVar4[1];
    if (plVar5 != plVar6) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar4[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar4[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
      goto LAB_14054a30d;
    }
  }
  else {
    piVar1 = (int *)(plVar4[1] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 < 1) goto LAB_14054a28c;
LAB_14054a30d:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(param_1 + 0x3e0);
  *(int *)(param_1 + 0x3e0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3e4) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x3d8,iVar3);
  }
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x3d8));
  *puVar7 = plVar4;
  puVar7[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  pplVar2 = (longlong **)(plVar4 + 0x21);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_38[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140555050;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar8;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_38 != pplVar2) {
    if (plVar6 == (longlong *)0x0) {
      if (((int)plVar4[0x22] != 0) && (plVar9 = *pplVar2, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar9 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar9;
        }
        *(undefined4 *)(plVar4 + 0x22) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,pplVar2);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_38[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_38[0] != (longlong *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  FUN_140564320(plVar4);
LAB_14054a45d:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 14054a4b0 FUN_14054a4b0 body=714 status=ok
// SIG undefined FUN_14054a4b0(void)

void FUN_14054a4b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_28 [2];
  
  lVar4 = operator_new(0x118);
  plVar9 = (longlong *)0x0;
  plVar5 = plVar9;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140534960(lVar4,param_2,param_3);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143fc2260;
    plVar6[2] = (longlong)plVar5;
    plVar9 = plVar6;
  }
  if (plVar5 == (longlong *)0x0) goto LAB_14054a736;
  if ((*plVar5 == 0) || (plVar5[1] == 0)) {
LAB_14054a55c:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
    plVar6 = (longlong *)plVar5[1];
    if (plVar9 != plVar6) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      goto LAB_14054a5dd;
    }
  }
  else {
    piVar1 = (int *)(plVar5[1] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 < 1) goto LAB_14054a55c;
LAB_14054a5dd:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(param_1 + 0x3d0);
  *(int *)(param_1 + 0x3d0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3d4) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x3c8,iVar3);
  }
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x3c8));
  *puVar7 = plVar5;
  puVar7[1] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  pplVar2 = (longlong **)(plVar5 + 0x21);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140555310;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar4;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_28 != pplVar2) {
    if (plVar6 == (longlong *)0x0) {
      if (((int)plVar5[0x22] != 0) && (plVar8 = *pplVar2, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar8;
        }
        *(undefined4 *)(plVar5 + 0x22) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,pplVar2);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  FUN_140564700(plVar5);
LAB_14054a736:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  return;
}



// FUNCTION 14054a780 FUN_14054a780 body=1036 status=ok
// SIG undefined FUN_14054a780(void)

void FUN_14054a780(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong **pplVar11;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar3 = param_1 + 0x52;
  if (*plVar3 != 0) {
    return;
  }
  lVar4 = *param_3;
  if (*(int *)(lVar4 + 0x18) == 1) {
    return;
  }
  lVar9 = *(longlong *)(lVar4 + 8);
  for (iVar10 = *(int *)(lVar4 + 0x10); iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_1404bf650(lVar9);
    lVar9 = lVar9 + 0xc0;
  }
  plVar7 = (longlong *)0x0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  if (*(int *)(lVar4 + 0x14) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
              (lVar4 + 8,0);
  }
  local_60 = (longlong *)param_3[1];
  local_68 = *param_3;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  if (plVar3 != &local_68) {
    *plVar3 = local_68;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x53,&local_60);
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (*(char *)(*param_3 + 0x78) != '\0') {
    iVar10 = FUN_140549e40(param_1);
    if (iVar10 == 0x3e5) {
      return;
    }
    goto LAB_14054ab4c;
  }
  lVar4 = operator_new(0x80);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140534a70(lVar4,param_2,param_3);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_143fc21e0;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  pplVar2 = (longlong **)(param_1 + 0x77);
  local_58 = plVar5;
  local_50 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar10 = *piVar1;
      if (iVar10 == 0) {
        *piVar1 = 0;
        iVar10 = 0;
      }
      UNLOCK();
      if (0 < iVar10) goto LAB_14054a98b;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_14054a98b:
  if (pplVar2 != &local_58) {
    *pplVar2 = plVar5;
    local_58 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_50);
  }
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (*pplVar2 != (longlong *)0x0) {
    *(undefined4 *)(*plVar3 + 0x18) = 1;
    plVar3 = *pplVar2;
    pplVar11 = (longlong **)(plVar3 + 0xe);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_48[0] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = (longlong)param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_1405555f0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar4;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_48 != pplVar11) {
      if (plVar7 == (longlong *)0x0) {
        if (((int)plVar3[0xf] != 0) && (plVar5 = *pplVar11, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*pplVar11 != (longlong *)0x0) {
            plVar5 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
            *pplVar11 = plVar5;
          }
          *(undefined4 *)(plVar3 + 0xf) = 0;
        }
      }
      else {
        (**(code **)(*plVar7 + 0x30))(plVar7,pplVar11);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_48[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_48[0] != (longlong *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    plVar3 = *pplVar2;
    lVar4 = plVar3[6];
    if (lVar4 == 0) {
      return;
    }
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar3,local_38);
    FUN_1405313f0(lVar4 + 0x90,uVar8,FUN_140557c80);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    FUN_140565840(plVar3[6]);
    return;
  }
  iVar10 = -0x7fffbffb;
LAB_14054ab4c:
  (**(code **)(*param_1 + 0x120))(param_1,(iVar10 != 0) + '\x01');
  return;
}



// FUNCTION 14054ab90 FUN_14054ab90 body=553 status=ok
// SIG undefined FUN_14054ab90(void)

void FUN_14054ab90(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar4 = (int)param_1[0x51];
  iVar7 = 0;
  if (iVar4 < 1) {
    return;
  }
  lVar6 = 0;
  lVar3 = param_1[0x50];
  plVar2 = (longlong *)(lVar3 + 0xb8);
  plVar1 = plVar2;
  while (*plVar1 != param_3) {
    iVar7 = iVar7 + 1;
    lVar6 = lVar6 + 1;
    plVar1 = plVar1 + 0x23;
    if (iVar4 <= lVar6) {
      return;
    }
  }
  lVar3 = (longlong)iVar7 * 0x118 + lVar3;
  if (lVar3 == 0) {
    return;
  }
  if (param_4 == 1) {
    *(undefined4 *)(lVar3 + 0x110) = 2;
    lVar3 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x10 + lVar3;
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
      (**(code **)(*param_1 + 0x2d0))(param_1,param_3,lVar3);
    }
  }
  else {
    iVar7 = 0;
    if (0 < iVar4) {
      lVar3 = 0;
      do {
        if (*plVar2 == param_3) {
          FUN_1404f31b0(param_1 + 0x50,iVar7,1,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
          break;
        }
        iVar7 = iVar7 + 1;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 0x23;
      } while (lVar3 < iVar4);
    }
  }
  (**(code **)(*param_1 + 0x348))(param_1);
  (**(code **)(*param_1 + 0x50))(param_1,param_3,param_4);
  if (param_4 != 1) {
    plVar1 = (longlong *)param_1[0x54];
    plVar2 = plVar1 + (int)param_1[0x55];
    for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      if (*plVar1 == param_3) {
        (**(code **)(*param_1 + 0xf0))(param_1,param_3,1);
        lVar3 = (longlong)(int)param_1[0x55];
        if ((int)param_1[0x55] == 0) {
          return;
        }
        iVar7 = 0;
        bVar8 = *(longlong *)param_1[0x54] != param_3;
        lVar6 = 0;
        iVar4 = 0;
        do {
          lVar6 = lVar6 + 1;
          iVar5 = iVar4 + 1;
          if (lVar6 < lVar3) {
            plVar2 = (longlong *)(param_1[0x54] + lVar6 * 8);
            do {
              if (bVar8 != (*plVar2 != param_3)) break;
              iVar5 = iVar5 + 1;
              lVar6 = lVar6 + 1;
              plVar2 = plVar2 + 1;
            } while (lVar6 < lVar3);
          }
          if (bVar8 != false) {
            if (iVar7 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1[0x54] + (longlong)iVar7 * 8),
                         (void *)(param_1[0x54] + (longlong)iVar4 * 8),
                         (longlong)(iVar5 - iVar4) << 3);
            }
            iVar7 = iVar7 + (iVar5 - iVar4);
          }
          bVar8 = (bool)(bVar8 ^ 1);
          iVar4 = iVar5;
          if (lVar3 <= lVar6) {
            *(int *)(param_1 + 0x55) = iVar7;
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 14054adc0 FUN_14054adc0 body=218 status=ok
// SIG undefined FUN_14054adc0(void)

void FUN_14054adc0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if ((int)param_1[0x51] < 1) {
    return;
  }
  plVar4 = (longlong *)(param_1[0x50] + 0xb8);
  plVar1 = plVar4;
  uVar3 = uVar2;
  uVar5 = uVar2;
  while (*plVar1 != param_2) {
    uVar3 = (ulonglong)((int)uVar3 + 1);
    uVar5 = uVar5 + 1;
    plVar1 = plVar1 + 0x23;
    if ((longlong)(int)param_1[0x51] <= (longlong)uVar5) {
      return;
    }
  }
  if ((longlong)(int)uVar3 * 0x118 + param_1[0x50] == 0) {
    return;
  }
  uVar3 = uVar2;
  if (0 < (int)param_1[0x51]) {
    do {
      if (*plVar4 == param_2) {
        FUN_1404f31b0(param_1 + 0x50,uVar3,1,CONCAT71((int7)(uVar5 >> 8),1));
        break;
      }
      uVar2 = uVar2 + 1;
      plVar4 = plVar4 + 0x23;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while ((longlong)uVar2 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 14054aea0 FUN_14054aea0 body=297 status=ok
// SIG undefined FUN_14054aea0(void)

void FUN_14054aea0(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = (int)param_1[0x51];
  uVar3 = 0;
  if (iVar1 < 1) {
    return;
  }
  lVar6 = param_1[0x50];
  plVar4 = (longlong *)(lVar6 + 0xb8);
  plVar2 = plVar4;
  uVar5 = uVar3;
  uVar7 = uVar3;
  while (*plVar2 != param_3) {
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar7 = uVar7 + 1;
    plVar2 = plVar2 + 0x23;
    if ((longlong)iVar1 <= (longlong)uVar7) {
      return;
    }
  }
  lVar8 = (longlong)(int)uVar5 * 0x118 + lVar6;
  if (lVar8 == 0) {
    return;
  }
  if (param_4 == 1) {
    *(undefined4 *)(lVar8 + 0x110) = 2;
    lVar6 = *param_2;
    lVar8 = (longlong)(int)param_2[1] * 0x10 + lVar6;
    for (; lVar6 != lVar8; lVar6 = lVar6 + 0x10) {
      (**(code **)(*param_1 + 0x2d0))(param_1,param_3,lVar6);
    }
  }
  else {
    uVar5 = uVar3;
    if (0 < iVar1) {
      do {
        if (*plVar4 == param_3) {
          FUN_1404f31b0(param_1 + 0x50,uVar5,1,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
          break;
        }
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 0x23;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while ((longlong)uVar3 < (longlong)iVar1);
    }
  }
  (**(code **)(*param_1 + 0x178))(param_1,param_3,param_4);
  return;
}



// FUNCTION 14054afd0 FUN_14054afd0 body=387 status=ok
// SIG undefined FUN_14054afd0(void)

void FUN_14054afd0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_38;
  longlong *local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  uVar9 = 0;
  if (0 < (int)param_1[0x51]) {
    plVar5 = (longlong *)(param_1[0x50] + 0xb8);
    uVar10 = uVar9;
    while (*plVar5 != param_2) {
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar9 = uVar9 + 1;
      plVar5 = plVar5 + 0x23;
      if ((longlong)(int)param_1[0x51] <= (longlong)uVar9) {
        return;
      }
    }
    lVar8 = (longlong)(int)uVar10 * 0x118 + param_1[0x50];
    if (lVar8 != 0) {
      if ((((*(char *)(lVar8 + 0x3a) == '\0') && (*(char *)(lVar8 + 0x3e) != '\0')) &&
          (plVar5 = *(longlong **)(lVar8 + 0xa0), plVar5 != (longlong *)0x0)) &&
         (lVar4 = *(longlong *)(lVar8 + 0xe0), lVar4 != 0)) {
        local_30 = *(longlong **)(lVar8 + 0xe8);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        local_38 = lVar4;
        uVar6 = FUN_14054be90(param_1,local_18,lVar8 + 0x28);
        uVar7 = (**(code **)(*plVar5 + 0x38))(plVar5,local_28);
        FUN_140560760(param_1,&local_38,uVar7,uVar6);
        plVar5 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_30)(local_30);
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
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 14054b160 FUN_14054b160 body=148 status=ok
// SIG undefined FUN_14054b160(void)

undefined8 FUN_14054b160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_18,param_1 + 0xb0);
  uVar5 = 0;
  if (local_18 != 0) {
    uVar5 = *(undefined8 *)(local_18 + 8);
  }
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14054b210 FUN_14054b210 body=130 status=ok
// SIG undefined FUN_14054b210(void)

undefined8 FUN_14054b210(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146853568) {
    _Init_thread_header(&DAT_146853568);
    if (DAT_146853568 == -1) {
      FName::FName(&DAT_146853560,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146853568);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146853560);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}



// FUNCTION 14054b2a0 GetWidgetClippingText body=33 status=ok
// SIG undefined GetWidgetClippingText(void)

undefined8 FSnapshotWidgetReflectorNode::GetWidgetClippingText(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0xa0);
  return param_2;
}



// FUNCTION 14054b2e0 FUN_14054b2e0 body=390 status=ok
// SIG undefined FUN_14054b2e0(void)

undefined8 *
FUN_14054b2e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar8 = FUN_14054e750(param_1,param_3,param_5);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) == 2)) {
    puVar10 = *(undefined8 **)(lVar8 + 0x20);
    iVar11 = *(int *)(lVar8 + 0x28);
    for (puVar12 = puVar10; puVar12 != puVar10 + (longlong)iVar11 * 2; puVar12 = puVar12 + 2) {
      plVar4 = (longlong *)puVar12[1];
      plVar5 = (longlong *)*puVar12;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5,local_38);
      cVar7 = (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,*param_4);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_30)(local_30);
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if (cVar7 != '\0') {
        iVar11 = (int)((longlong)puVar12 - (longlong)puVar10 >> 4);
        if ((-1 < iVar11) && (iVar11 < *(int *)(lVar8 + 0x28))) {
          puVar10 = (undefined8 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar8 + 0x20));
          *param_2 = *puVar10;
          lVar8 = puVar10[1];
          param_2[1] = lVar8;
          if (lVar8 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14054b470 FUN_14054b470 body=568 status=ok
// SIG undefined FUN_14054b470(void)

int FUN_14054b470(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *in_R9;
  int iVar11;
  int *in_stack_00000028;
  
  iVar11 = 0;
  lVar6 = FUN_14054e750();
  if (lVar6 == 0) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x18) != 2) {
    return *(int *)(lVar6 + 0x18);
  }
  iVar8 = *(int *)((longlong)in_R9 + 0xc);
  iVar10 = (int)in_R9[1];
  if (iVar8 < 0) {
    if (iVar10 != 0) {
      plVar9 = (longlong *)(*in_R9 + 8);
      do {
        plVar3 = (longlong *)*plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar9 = plVar9 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar8 = *(int *)((longlong)in_R9 + 0xc);
    }
    *(undefined4 *)(in_R9 + 1) = 0;
    if (iVar8 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(in_R9,0);
    }
  }
  else {
    if (iVar10 != 0) {
      plVar9 = (longlong *)(*in_R9 + 8);
      do {
        plVar3 = (longlong *)*plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar9 = plVar9 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    *(undefined4 *)(in_R9 + 1) = 0;
  }
  iVar8 = in_stack_00000028[1];
  if ((0 < iVar8) || (iVar8 = *(int *)(lVar6 + 0x28), 0 < iVar8)) {
    do {
      iVar10 = *in_stack_00000028 + iVar11;
      if (iVar10 < 0) {
        return 2;
      }
      if (*(int *)(lVar6 + 0x28) <= iVar10) {
        return 2;
      }
      puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar6 + 0x20));
      plVar9 = (longlong *)puVar7[1];
      uVar4 = *puVar7;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      iVar10 = (int)in_R9[1];
      *(int *)(in_R9 + 1) = iVar10 + 1;
      if (*(int *)((longlong)in_R9 + 0xc) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(in_R9,iVar10);
      }
      puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *in_R9);
      *puVar7 = uVar4;
      puVar7[1] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar9 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar10 == 1) && (plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar8);
  }
  return 2;
}



// FUNCTION 14054b6b0 FUN_14054b6b0 body=11 status=ok
// SIG undefined FUN_14054b6b0(void)

undefined8 * FUN_14054b6b0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  return param_2;
}



// FUNCTION 14054b6c0 FUN_14054b6c0 body=11 status=ok
// SIG undefined FUN_14054b6c0(void)

undefined8 * FUN_14054b6c0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  return param_2;
}



// FUNCTION 14054b6e0 FUN_14054b6e0 body=115 status=ok
// SIG undefined FUN_14054b6e0(void)

undefined8 FUN_14054b6e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  FUN_140549810((longlong *)(param_1 + 0x140),local_res8);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x140) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
  FString::operator=(param_3);
  return 1;
}



// FUNCTION 14054b760 FUN_14054b760 body=230 status=ok
// SIG undefined FUN_14054b760(void)

undefined8 * FUN_14054b760(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  int local_res20 [2];
  undefined1 local_18 [16];
  
  local_res20[0] = -1;
  puVar2 = (undefined8 *)FName::FName(local_18,L"SEARCHCROSSPLAY",1);
  cVar1 = FUN_1404a9610(param_3,*puVar2,local_res20);
  if (((cVar1 == '\0') || (local_res20[0] == 0)) || (local_res20[0] != 1)) {
    *param_2 = 0;
    uVar4 = DAT_1461fcaa0;
    _Src = DAT_1461fca98;
    iVar3 = (int)DAT_1461fcaa0;
    *(int *)(param_2 + 1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  else {
    *param_2 = 0;
    uVar4 = DAT_1461fcab0;
    _Src = DAT_1461fcaa8;
    iVar3 = (int)DAT_1461fcab0;
    *(int *)(param_2 + 1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar4 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)(int)uVar4 * 2);
  return param_2;
}



// FUNCTION 14054b850 FUN_14054b850 body=1597 status=ok
// SIG undefined FUN_14054b850(void)

undefined8 * FUN_14054b850(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *local_118;
  longlong *plStack_110;
  longlong local_108 [10];
  longlong *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined **local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *local_28;
  longlong *plStack_20;
  
  plVar5 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)operator_new(0x50);
  local_118 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[7] = 0;
    plVar4[9] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar4[8] = 0;
    local_118 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)local_118;
    plVar5 = plVar4;
  }
  plStack_110 = plVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_118,local_118,local_118);
  if ((local_118 != (longlong *)0x0) && (lVar6 = *(longlong *)(param_3 + 8), lVar6 != 0)) {
    local_68 = *(longlong **)(param_3 + 0x10);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_70 = lVar6;
    lVar6 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_50,&local_70);
    plVar5 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_68)(local_68);
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
    if (local_50 != 0) {
      local_108[0] = 0;
      local_108[1] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
      FGenericPlatformString::Memcpy(local_108[0],L"host_sandcastle_id",0x26);
      plVar5 = local_118;
      uVar7 = FUN_1428b4040(local_50);
      FJsonObject::SetStringField(plVar5,local_108,uVar7);
      if (local_108[0] != 0) {
        FMemory::Free();
      }
    }
    local_108[2] = 0;
    local_108[3] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 2,0);
    FGenericPlatformString::Memcpy(local_108[2],L"session_flags",0x1c);
    local_108[8] = 0;
    local_108[9] = 0;
    FString::AppendInt(local_108 + 8,
                       -(uint)(*(char *)(param_3 + 0x40) != '\0') & 0x100 |
                       -(uint)(*(char *)(param_3 + 0x3f) != '\0') & 0x80 |
                       -(uint)(*(char *)(param_3 + 0x3e) != '\0') & 0x40 |
                       -(uint)(*(char *)(param_3 + 0x3d) != '\0') & 0x20 |
                       -(uint)(*(char *)(param_3 + 0x3c) != '\0') & 0x10 |
                       -(uint)(*(char *)(param_3 + 0x3b) != '\0') & 8 |
                       -(uint)(*(char *)(param_3 + 0x3a) != '\0') & 4 |
                       -(uint)(*(char *)(param_3 + 0x39) != '\0') & 2 |
                       (uint)(*(char *)(param_3 + 0x38) != '\0'));
    FJsonObject::SetStringField(local_118,local_108 + 2,local_108 + 8);
    if (local_108[8] != 0) {
      FMemory::Free();
    }
    if (local_108[2] != 0) {
      FMemory::Free();
    }
    local_90 = *(undefined8 *)(param_3 + 8);
    local_88 = *(longlong **)(param_3 + 0x10);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    local_80 = 0;
    local_98 = &PTR_FUN_143f740c8;
    local_78 = 0;
    puVar8 = (undefined8 *)FUN_1425f5be0(&local_98,local_40);
    local_60 = *puVar8;
    local_58 = (longlong *)puVar8[1];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_108[4] = 0;
    local_108[5] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 4,0);
    FGenericPlatformString::Memcpy(local_108[4],L"owning_user_id",0x1e);
    FJsonObject::SetField(local_118,local_108 + 4,&local_60);
    if (local_108[4] != 0) {
      FMemory::Free();
    }
    plVar5 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
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
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (*(longlong *)(param_3 + 0xa0) != 0) {
      local_108[6] = 0;
      local_108[7] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 6,0);
      FGenericPlatformString::Memcpy(local_108[6],L"voice_channel_guid",0x26);
      plVar5 = *(longlong **)(param_3 + 0xa8);
      lVar6 = *(longlong *)(param_3 + 0xa0);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FJsonObject::SetStringField(local_118,local_108 + 6,lVar6 + 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if (local_108[6] != 0) {
        FMemory::Free();
      }
    }
    FUN_1404ae740(local_a8,param_2,0);
    plVar5 = plStack_110;
    local_28 = local_118;
    plStack_20 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    local_b0 = (longlong *)FUN_1404a9830(&local_28);
    local_b8 = local_b0 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
    FUN_1404a9a60(&local_b8,local_a8,1);
    plVar4 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b0)(local_b0);
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    local_98 = &PTR_FUN_143f740c8;
    if (local_80 != 0) {
      FMemory::Free();
    }
    plVar5 = local_88;
    local_98 = &PTR_FUN_143f73d18;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_88)(local_88);
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
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_48 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_110 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_110)(plStack_110);
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
  return param_2;
}



// FUNCTION 14054be90 FUN_14054be90 body=318 status=ok
// SIG undefined FUN_14054be90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14054be90(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
  
  *param_2 = 0;
  uVar2 = _DAT_1461fcac0;
  pvVar1 = DAT_1461fcab8;
  iVar3 = (int)_DAT_1461fcac0;
  *(int *)(param_2 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar2 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar1,(longlong)iVar3 * 2);
  }
  uVar2 = DAT_1461fcad0;
  pvVar1 = DAT_1461fcac8;
  if (*(char *)(param_3 + 0x16) != '\0') {
    if ((void **)param_2 != &DAT_1461fcac8) {
      iVar3 = (int)DAT_1461fcad0;
      *(int *)(param_2 + 1) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar2 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar1,(longlong)iVar3 * 2);
      }
    }
    uVar2 = _DAT_1461fcac0;
    pvVar1 = DAT_1461fcab8;
    if ((*(char *)(param_3 + 0x15) != '\0') && (*(char *)(param_3 + 0x17) != '\0')) {
      if ((void **)param_2 != &DAT_1461fcab8) {
        iVar3 = (int)_DAT_1461fcac0;
        *(int *)(param_2 + 1) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar2 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar1,(longlong)iVar3 * 2);
        }
      }
      if (*(char *)(param_3 + 0x18) != '\0') {
        FString::operator=(param_2,&DAT_1461fcad8);
      }
    }
  }
  return param_2;
}



// FUNCTION 14054bfd0 FUN_14054bfd0 body=935 status=ok
// SIG undefined FUN_14054bfd0(void)

longlong ** FUN_14054bfd0(undefined8 param_1,longlong **param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  uint *puVar15;
  double dVar16;
  int local_res10 [2];
  undefined8 local_res18 [2];
  longlong *local_108;
  longlong *local_100;
  uint local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 local_e8;
  int iStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [2];
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  uint uStack_b0;
  int iStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  
  plVar10 = (longlong *)0x0;
  local_res10[0] = 0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  plVar14 = plVar10;
  if (*(char *)(param_3 + 0x10) != '\0') {
    puVar5 = (undefined8 *)FUN_14054be90(param_1,local_a0);
    puVar9 = &DAT_143f3eda8;
    puVar13 = &DAT_143f3eda8;
    if (DAT_1461fcac0 != 0) {
      puVar13 = DAT_1461fcab8;
    }
    if (*(int *)(puVar5 + 1) != 0) {
      puVar9 = (undefined2 *)*puVar5;
    }
    plVar14 = (longlong *)0x1;
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar13);
    if (iVar3 == 0) {
      bVar2 = true;
      goto LAB_14054c042;
    }
  }
  bVar2 = false;
LAB_14054c042:
  if ((plVar14 != (longlong *)0x0) && (local_a0[0] != 0)) {
    FMemory::Free();
  }
  if (bVar2) {
    plVar6 = (longlong *)operator_new(0x50);
    plVar14 = plVar10;
    if (plVar6 != (longlong *)0x0) {
      plVar6[2] = 0;
      plVar6[3] = 0;
      plVar6[7] = 0;
      plVar6[9] = 0;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      *(undefined4 *)(plVar6 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
      plVar6[8] = 0;
      plVar14 = plVar6;
    }
    plVar7 = (longlong *)operator_new(0x18);
    plVar6 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f60d28;
      plVar7[2] = (longlong)plVar14;
      plVar6 = plVar7;
    }
    local_108 = plVar14;
    local_100 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_108,plVar14,plVar14);
    if (param_2 != &local_108) {
      *param_2 = plVar14;
      local_108 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_100);
      plVar6 = local_100;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar6 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar11 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_c8 = (longlong *)(param_3 + 0x28);
    iVar3 = *(int *)(param_3 + 0x50);
    puStack_f0 = (uint *)(param_3 + 0x38);
    uStack_f4 = 1;
    local_f8 = 0;
    iStack_e4 = 0;
    uStack_e0 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)(param_3 + 0x48);
      if (*(uint **)(param_3 + 0x48) == (uint *)0x0) {
        puVar15 = puStack_f0;
      }
      uVar1 = *puVar15;
      plVar14 = plVar10;
      while (uVar1 == 0) {
        iVar4 = (int)plVar10;
        uStack_e0 = (int)plVar14 + 0x20;
        plVar14 = (longlong *)(ulonglong)uStack_e0;
        local_f8 = iVar4 + 1;
        plVar10 = (longlong *)(ulonglong)local_f8;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14054c214;
        uVar1 = puVar15[(longlong)iVar4 + 1];
      }
      uStack_f4 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_f4 != 0) {
        for (; uStack_f4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_f4 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_e4 = (uStack_e0 - iVar4) + 0x1f;
      if (iVar3 < iStack_e4) {
LAB_14054c214:
        iStack_e4 = iVar3;
      }
    }
    local_e8 = 0xffffffff;
    uStack_c0 = CONCAT44(uStack_f4,local_f8);
    uStack_58 = 0xffffffff;
    iStack_54 = iStack_e4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    uStack_b0 = 0xffffffff;
    iStack_ac = iStack_e4;
    local_a8 = uStack_e0;
    uStack_a4 = uStack_dc;
    local_b8 = puStack_f0;
    local_70 = local_c8;
    uStack_68 = uStack_c0;
    puStack_60 = puStack_f0;
    if (iStack_e4 < iVar3) {
      do {
        local_res18[0] = *(undefined8 *)((longlong)iStack_ac * 0x30 + *local_c8);
        piVar11 = (int *)(*local_c8 + 8 + (longlong)iStack_ac * 0x30);
        if (piVar11[6] - 2U < 2) {
          if (*piVar11 == 1) {
            local_res10[0] = 0;
            FVariantData::GetValue(piVar11,local_res10);
            plVar10 = *param_2;
            dVar16 = (double)local_res10[0];
            uVar8 = FName::ToString(local_res18,local_80);
            FUN_1416b32b0(plVar10,uVar8,SUB84(dVar16,0));
            lVar12 = local_80[0];
          }
          else {
            if (*piVar11 != 6) goto LAB_14054c339;
            local_d8[0] = 0;
            local_d8[1] = 0;
            FUN_1404b0a70(piVar11,local_d8);
            plVar10 = *param_2;
            uVar8 = FName::ToString(local_res18,local_90);
            FJsonObject::SetStringField(plVar10,uVar8,local_d8);
            lVar12 = local_d8[0];
            if (local_90[0] != 0) {
              FMemory::Free();
              lVar12 = local_d8[0];
            }
          }
          if (lVar12 != 0) {
            FMemory::Free();
          }
        }
LAB_14054c339:
        uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      } while (iStack_ac < (int)local_b8[6]);
    }
  }
  return param_2;
}



// FUNCTION 14054c380 FUN_14054c380 body=156 status=ok
// SIG undefined FUN_14054c380(void)

char FUN_14054c380(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,param_2);
  if (local_18 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_142b54900();
    cVar4 = (cVar4 != '\0') + '\x01';
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    return cVar4;
  }
  return cVar4;
}



// FUNCTION 14054c470 FUN_14054c470 body=637 status=ok
// SIG undefined FUN_14054c470(void)

void FUN_14054c470(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((*(int *)(param_1 + 0x60) < 0) || (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x60))) ||
     (*(char *)(param_1 + 0x68) != '\0')) {
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x70,uVar7);
    if (local_20 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar8 = local_20 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return;
    }
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_20 + 8))(local_20,1);
    return;
  }
  lVar4 = operator_new(0x70);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)
             FUN_140534c90(lVar4,param_1 + 0x10,
                           (longlong)*(int *)(param_1 + 0x60) * 0x10 + *(longlong *)(param_1 + 0x40)
                          );
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143fc21c0;
    plVar6[2] = (longlong)plVar5;
    plVar8 = plVar6;
  }
  pplVar1 = (longlong **)(param_1 + 0x50);
  local_48 = plVar5;
  local_40 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar2 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14054c5bb;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
    plVar6 = (longlong *)plVar5[1];
    if (plVar8 != plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
LAB_14054c5bb:
  if (pplVar1 != &local_48) {
    *pplVar1 = plVar5;
    local_48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&local_40);
  }
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar8 = *pplVar1;
  if (plVar8 != (longlong *)0x0) {
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
    FUN_1405313f0(plVar8 + 0xc,uVar7,FUN_140555ac0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    FUN_140564900(*pplVar1);
  }
  return;
}



// FUNCTION 14054c6f0 FUN_14054c6f0 body=789 status=ok
// SIG undefined FUN_14054c6f0(void)

void FUN_14054c6f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined **local_e8;
  undefined1 local_e0 [16];
  undefined8 *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [16];
  undefined8 *local_a0;
  int local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  
  iVar6 = 0;
  lVar7 = FUN_142b45e90();
  plVar8 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),local_88,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar8) {
    *plVar1 = *plVar8;
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar8 + 1);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_80 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((*plVar1 != 0) && (cVar5 = FUN_142b54900(), cVar5 != '\0')) {
    FUN_142b47dc0(*plVar1,&local_f8);
    if (local_f8 != 0) {
      FUN_142b1df20(local_b8);
      FString::operator=(local_b0,param_1 + 0x20);
      local_90 = *(undefined4 *)(param_1 + 0x30);
      lVar7 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar7 + 0x18),&local_108);
      local_e8 = &PTR_FUN_143fc06d0;
      local_78 = 0;
      uStack_70 = 0;
      FString::FString(local_e0,local_b0);
      local_d0 = (undefined8 *)0x0;
      local_c8 = local_98;
      if (local_98 == 0) {
        local_c4 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_d0,local_98,0);
        puVar11 = local_d0;
        do {
          *puVar11 = 0;
          iVar6 = *(int *)(local_a0 + 1);
          pvVar4 = (void *)*local_a0;
          *(int *)(puVar11 + 1) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,iVar6,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar4,(longlong)iVar6 * 2);
          }
          puVar11 = puVar11 + 2;
          local_a0 = local_a0 + 2;
          local_98 = local_98 + -1;
        } while (local_98 != 0);
      }
      pvVar4 = local_108;
      local_c0 = local_90;
      local_118 = (void *)0x0;
      iVar6 = (int)local_100;
      local_110 = iVar6;
      if (iVar6 == 0) {
        local_10c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_100 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_118,pvVar4,(longlong)iVar6 * 2);
      }
      lVar7 = *plVar1;
      uVar9 = FUN_140531690(local_48,param_1,FUN_140554690);
      uVar10 = FUN_142b46360(lVar7,local_68);
      iVar6 = FUN_142ae6df0(local_f8,uVar10,&local_118,&local_e8,uVar9,&local_78);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_142b1e270(local_b8);
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (0 < iVar6) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar9);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 14054ca10 FUN_14054ca10 body=1108 status=ok
// SIG undefined FUN_14054ca10(void)

void FUN_14054ca10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  void *local_res18;
  undefined8 in_stack_fffffffffffffee8;
  longlong *local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined4 local_bc;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  
  iVar12 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34);
  if ((iVar12 < 0) || (*(int *)(param_1 + 0x28) <= iVar12)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xa0,uVar7);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          return;
        }
      }
    }
  }
  else {
    iVar13 = 0;
    iVar3 = 0;
    lVar4 = FUN_142b45e90();
    plVar5 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),local_98,param_1 + 0x10);
    plVar9 = (longlong *)(param_1 + 0x38);
    if (plVar9 != plVar5) {
      *plVar9 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar5 + 1);
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_90 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (*plVar9 != 0) {
      FUN_142b45fe0(*plVar9,&local_b8);
      if (local_b8 != 0) {
        uVar8 = *(int *)(param_1 + 0x28) - iVar12;
        local_108 = (longlong *)0x0;
        if (*(int *)(param_1 + 0x34) <= (int)uVar8) {
          uVar8 = *(uint *)(param_1 + 0x34);
        }
        local_100 = 0;
        if (0 < (int)uVar8) {
          local_100._4_4_ = 0;
          local_a0 = &local_e0;
          lVar4 = (longlong)iVar12 << 4;
          uVar11 = (ulonglong)uVar8;
          iVar12 = local_100._4_4_;
          iVar3 = iVar13;
          do {
            local_res10 = *(ulonglong *)(param_1 + 0x20);
            iVar13 = iVar3 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar13);
            if (iVar12 < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,iVar3);
              iVar12 = local_100._4_4_;
              iVar13 = (int)local_100;
            }
            FString::FString(local_108 + (longlong)iVar3 * 2,lVar4 + local_res10);
            local_a8 = *(longlong *)(param_1 + 0x20) + lVar4;
            local_e0 = 0;
            local_d8 = 0;
            TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
                      (param_1 + 0x50,local_res8,&local_a8,0);
            if (local_e0 != 0) {
              FMemory::Free();
            }
            lVar4 = lVar4 + 0x10;
            uVar11 = uVar11 - 1;
            iVar3 = iVar13;
          } while (uVar11 != 0);
        }
        plVar5 = local_108;
        FTickAnimationPlayers::FTickAnimationPlayers(local_f8);
        uVar8 = (uint)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
        plVar9 = local_f0;
        for (iVar12 = local_e8; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          uVar8 = (uint)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
          plVar9 = plVar9 + 2;
        }
        TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                  (&local_f0,plVar5,iVar13,uStack_e4,(ulonglong)uVar8 << 0x20);
        local_d0 = &PTR_FUN_143fc0f68;
        local_res10 = CONCAT44(uStack_e4,local_e8);
        local_c8 = (undefined8 *)0x0;
        local_88 = 0;
        uStack_80 = 0;
        if (local_e8 == 0) {
          local_bc = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_c8,local_e8,0);
          puVar10 = local_c8;
          do {
            iVar3 = (int)local_res10;
            *puVar10 = 0;
            iVar12 = (int)local_f0[1];
            local_res18 = (void *)*local_f0;
            *(int *)(puVar10 + 1) = iVar12;
            if (iVar12 == 0) {
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,iVar12,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar10,local_res18,(longlong)iVar12 * 2);
              iVar3 = (int)local_res10;
            }
            puVar10 = puVar10 + 2;
            local_f0 = local_f0 + 2;
            local_res10 = (ulonglong)(iVar3 - 1U);
          } while (iVar3 - 1U != 0);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        uVar6 = FUN_140531690(local_48,param_1,FUN_140558720);
        uVar7 = FUN_142b46360(uVar7,local_78);
        iVar3 = FUN_142ad59c0(local_b8,uVar7,&local_d0,uVar6,&local_88);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        FUN_142b0f560(local_f8);
        plVar5 = local_108;
        plVar9 = local_108;
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (plVar5 != (longlong *)0x0) {
          FMemory::Free(plVar5);
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_b0 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      if (0 < iVar3) {
        return;
      }
    }
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_68);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xa0,uVar7);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14054cea0 FUN_14054cea0 body=659 status=ok
// SIG undefined FUN_14054cea0(void)

void FUN_14054cea0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  uVar4 = *(uint *)(param_1 + 400);
  puVar3 = (uint *)(param_1 + 0x178);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar12 = *puVar13;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar12 == 0) {
      lVar11 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar9 = local_a8 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar9;
      if (bVar7) goto LAB_14054cf6f;
      uVar12 = puVar13[lVar11 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    iVar9 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_94 = (iStack_90 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_14054cf6f:
      uStack_94 = uVar4;
    }
  }
  uStack_74 = *(uint *)(param_1 + 400);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar12 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar3;
  if (uStack_74 != uVar4) {
    puVar13 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar10 = puVar13[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar9 = (int)uStack_74 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14054d04d;
      uVar10 = puVar13[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar12 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_74) {
LAB_14054d04d:
      uStack_74 = uVar4;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar3))) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x168) + 0x18 + (longlong)(int)uStack_44 * 0x28)
    ;
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x10 + (longlong)(int)uStack_44 * 0x28)
    ;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar8 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar8 = uVar6;
    puVar8[1] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar9 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return;
}



// FUNCTION 14054d140 FUN_14054d140 body=169 status=ok
// SIG undefined FUN_14054d140(void)

undefined8 * FUN_14054d140(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,param_3);
  if (local_18 != 0) {
    cVar4 = FUN_142b54900();
    if (cVar4 != '\0') {
      uVar6 = FUN_14057c410(local_18);
      FString::FString(param_2,uVar6);
      goto LAB_14054d19e;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14054d19e:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14054d1f0 FUN_14054d1f0 body=255 status=ok
// SIG undefined FUN_14054d1f0(void)

void FUN_14054d1f0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_38 [4];
  
  plVar2 = (longlong *)*param_2;
  plVar1 = (longlong *)FName::FName(local_res10,L"SPARK",1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_res18);
  if (*plVar2 == *plVar1) {
    puVar5 = &DAT_143f3eda8;
    if (DAT_146b18950 != 0) {
      puVar5 = DAT_146b18948;
    }
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_38 + 2);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar3;
    }
    puVar4 = &DAT_143f3eda8;
    if (DAT_146b18940 != 0) {
      puVar4 = DAT_146b18938;
    }
    FString::PrintfImpl(local_38,L"%s://%s?%s",puVar4,puVar7,puVar5);
    if (local_38[2] != 0) {
      FMemory::Free();
    }
    uVar6 = 1;
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    uVar6 = 2;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,uVar6,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14054d2f0 GetSupportedPlatforms body=5 status=ok
// SIG undefined GetSupportedPlatforms(void)

longlong FAvfMediaFactoryModule::GetSupportedPlatforms(longlong param_1)

{
  return param_1 + 0x20;
}



// FUNCTION 14054d300 FUN_14054d300 body=505 status=ok
// SIG undefined FUN_14054d300(void)

undefined8 FUN_14054d300(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  short *_Src;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  lVar8 = *(longlong *)(param_2 + 0xa0);
  if (lVar8 == 0) {
    return 0;
  }
  plVar3 = *(longlong **)(param_2 + 0xa8);
  if (*(char *)(param_2 + 0x3a) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    puVar9 = &DAT_143f3eda8;
    if (DAT_146b18950 != 0) {
      puVar9 = DAT_146b18948;
    }
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)(lVar8 + 0x18) + 0x68))(lVar8 + 0x18,local_18,1);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar4;
    }
    puVar6 = &DAT_143f3eda8;
    if (DAT_146b18940 != 0) {
      puVar6 = DAT_146b18938;
    }
    FString::PrintfImpl(&local_28,L"%s://%s?%s",puVar6,puVar10,puVar9);
    if (param_3 == &local_28) {
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_28;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
      local_20 = 0;
      local_28 = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar8 + 0x30) == 0) {
      _Src = &DAT_143f3eda8;
    }
    else {
      _Src = *(short **)(lVar8 + 0x28);
    }
    if ((short *)*param_3 != _Src) {
      iVar5 = 0;
      if ((_Src == (short *)0x0) || (*_Src == 0)) {
        iVar7 = 0;
      }
      else {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (_Src[lVar8] != 0);
        iVar7 = (int)lVar8 + 1;
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar7);
        iVar5 = (int)param_3[1];
      }
      *(int *)(param_3 + 1) = iVar5 + iVar7;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*param_3,_Src,(longlong)iVar7 * 2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return 1;
}



// FUNCTION 14054d500 FUN_14054d500 body=372 status=ok
// SIG undefined FUN_14054d500(void)

undefined8 FUN_14054d500(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  lVar6 = (**(code **)(*param_1 + 0x10))();
  if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar6 + 0xa0), lVar4 != 0)) {
    plVar5 = *(longlong **)(lVar6 + 0xa8);
    if (*(char *)(lVar6 + 0x3a) == '\0') {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar8 = &DAT_143f3eda8;
      if (DAT_146b18950 != 0) {
        puVar8 = DAT_146b18948;
      }
      puVar7 = (undefined8 *)
               (**(code **)(*(longlong *)(lVar4 + 0x18) + 0x68))(lVar4 + 0x18,local_18,1);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar7;
      }
      puVar9 = &DAT_143f3eda8;
      if (DAT_146b18940 != 0) {
        puVar9 = DAT_146b18938;
      }
      FString::PrintfImpl(&local_28,L"%s://%s?%s",puVar9,puVar10,puVar8);
      if (param_3 == &local_28) {
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_3 != 0) {
          FMemory::Free();
        }
        *param_3 = local_28;
        *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
        local_20 = 0;
        local_28 = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FString::operator=(param_3,lVar4 + 0x28);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    return 1;
  }
  return 0;
}



// FUNCTION 14054d680 FUN_14054d680 body=30 status=ok
// SIG undefined FUN_14054d680(void)

undefined8 FUN_14054d680(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x50);
  return param_2;
}



// FUNCTION 14054d770 GetNumLocalTalkers body=4 status=ok
// SIG undefined GetNumLocalTalkers(void)

undefined4 FOnlineVoiceImpl::GetNumLocalTalkers(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// FUNCTION 14054d780 FUN_14054d780 body=1358 status=ok
// SIG undefined FUN_14054d780(void)

undefined8 * FUN_14054d780(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  int local_128;
  uint uStack_124;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  uint uStack_d4;
  int iStack_b8;
  uint uStack_b4;
  uint *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  int local_98;
  uint local_88;
  uint uStack_84;
  uint local_80;
  int local_78;
  int local_74;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  plVar7 = (longlong *)*param_3;
  plVar6 = (longlong *)FName::FName(local_48,L"SPARK");
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_40);
  if (*plVar7 == *plVar6) {
    *param_2 = *param_3;
    lVar11 = param_3[1];
    param_2[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_3[1];
    if (plVar7 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar6 = plVar7 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return param_2;
    }
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_2;
    }
    return param_2;
  }
  plVar7 = (longlong *)(param_1 + 0x78);
  local_128 = 0;
  uVar3 = *(uint *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0x88);
  uStack_124 = 1;
  uStack_114 = 0;
  iStack_110 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = *puVar12;
    iStack_110 = 0;
    local_128 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar8 = local_128 + 1;
      bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar8;
      if (bVar4) goto LAB_14054d905;
      uVar9 = puVar12[lVar11 + 1];
    }
    uStack_124 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_114 = (iStack_110 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14054d905:
      uStack_114 = uVar3;
    }
  }
  uStack_84 = *(uint *)(param_1 + 0xa0);
  iStack_b8 = local_128;
  uStack_b4 = uStack_124;
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_114;
  uStack_a0 = CONCAT44(uStack_10c,iStack_110);
  local_98 = (int)uStack_84 >> 5;
  local_88 = -1 << ((byte)uStack_84 & 0x1f);
  local_80 = uStack_84 & 0xffffffe0;
  iStack_68 = local_128;
  uStack_64 = uStack_124;
  puStack_b0 = puVar2;
  local_60 = puVar2;
  local_50 = uStack_a0;
  uStack_a8 = uStack_58;
  uStack_a4 = uStack_54;
  local_70 = plVar7;
  uVar9 = uStack_84;
  if (uStack_84 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[local_98] & local_88;
    while (uVar9 == 0) {
      lVar11 = (longlong)local_98;
      local_80 = local_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar4) goto LAB_14054d9ee;
      uVar9 = puVar12[lVar11 + 1];
      local_88 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (local_80 - iVar8) + 0x1f;
    uVar9 = uStack_84;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14054d9ee:
      uStack_84 = uVar3;
      uVar9 = uVar3;
    }
  }
  while( true ) {
    if (((uStack_54 == uVar9) && (local_60 == puVar2)) && (local_70 == plVar7)) {
      local_108 = 0;
      uVar3 = *(uint *)(param_1 + 0xf8);
      puVar2 = (uint *)(param_1 + 0xe0);
      uStack_104 = 1;
      uStack_f4 = 0;
      iStack_f0 = 0;
      if (uVar3 == 0) goto LAB_14054db0a;
      puVar12 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar9 = *puVar12;
      iStack_f0 = 0;
      local_108 = 0;
      goto joined_r0x00014054daad;
    }
    lVar11 = (longlong)(int)uStack_54 * 0x168 + *local_70;
    cVar5 = (*(code *)**(undefined8 **)*param_3)
                      ((undefined8 *)*param_3,*(undefined8 *)(lVar11 + 0xc0));
    if (cVar5 != '\0') break;
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  }
  goto LAB_14054dc54;
joined_r0x00014054daad:
  if (uVar9 != 0) goto LAB_14054dad7;
  lVar11 = (longlong)local_108;
  iStack_f0 = iStack_f0 + 0x20;
  iVar8 = local_108 + 1;
  bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
  local_108 = iVar8;
  if (bVar4) goto LAB_14054db05;
  uVar9 = puVar12[lVar11 + 1];
  goto joined_r0x00014054daad;
LAB_14054dad7:
  uStack_104 = -uVar9 & uVar9;
  local_78 = 0x1f;
  if (uStack_104 != 0) {
    for (; uStack_104 >> local_78 == 0; local_78 = local_78 + -1) {
    }
  }
  if (uStack_104 == 0) {
    iVar8 = 0x20;
  }
  else {
    iVar8 = 0x1f - local_78;
  }
  uStack_f4 = (iStack_f0 - iVar8) + 0x1f;
  if ((int)uVar3 < (int)uStack_f4) {
LAB_14054db05:
    uStack_f4 = uVar3;
  }
LAB_14054db0a:
  uStack_d4 = *(uint *)(param_1 + 0xf8);
  uStack_a0 = CONCAT44(uStack_ec,iStack_f0);
  uVar9 = uStack_d4 & 0xffffffe0;
  iStack_b8 = local_108;
  uStack_b4 = uStack_104;
  uStack_a8 = 0xffffffff;
  uStack_a4 = uStack_f4;
  puStack_b0 = puVar2;
  if (uStack_d4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = puVar12[(int)uStack_d4 >> 5] & -1 << ((byte)uStack_d4 & 0x1f);
    iVar8 = (int)uStack_d4 >> 5;
    while (uVar10 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14054dbf1;
      uVar10 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    local_74 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> local_74 == 0; local_74 = local_74 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_74;
    }
    uStack_d4 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_d4) {
LAB_14054dbf1:
      uStack_d4 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_a4 == uStack_d4) && (puStack_b0 == puVar2)) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_14054dc74;
    }
    lVar11 = (longlong)(int)uStack_a4 * 0x168 + *(longlong *)(param_1 + 0xd0);
    cVar5 = (*(code *)**(undefined8 **)*param_3)
                      ((undefined8 *)*param_3,*(undefined8 *)(lVar11 + 0xc0));
    if (cVar5 != '\0') break;
    uStack_a8 = uStack_a8 & ~uStack_b4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b8);
  }
LAB_14054dc54:
  *param_2 = *(undefined8 *)(lVar11 + 0xd0);
  lVar11 = *(longlong *)(lVar11 + 0xd8);
  param_2[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
LAB_14054dc74:
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14054dd00 FUN_14054dd00 body=1379 status=ok
// SIG undefined FUN_14054dd00(void)

undefined8 * FUN_14054dd00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  int local_128;
  uint uStack_124;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  uint uStack_d4;
  undefined8 uStack_b8;
  uint *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  int local_98;
  uint local_88;
  uint uStack_84;
  uint local_80;
  int local_78;
  int local_74;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  plVar7 = (longlong *)*param_3;
  plVar6 = (longlong *)FName::FName(local_48,L"SPARK");
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_40);
  if (*plVar7 != *plVar6) {
    *param_2 = *param_3;
    lVar11 = param_3[1];
    param_2[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_3[1];
    if (plVar7 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar6 = plVar7 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return param_2;
    }
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_2;
    }
    return param_2;
  }
  plVar7 = (longlong *)(param_1 + 0x78);
  local_128 = 0;
  uVar3 = *(uint *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0x88);
  uStack_124 = 1;
  uStack_114 = 0;
  iStack_110 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = *puVar12;
    iStack_110 = 0;
    local_128 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar8 = local_128 + 1;
      bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar8;
      if (bVar4) goto LAB_14054de85;
      uVar9 = puVar12[lVar11 + 1];
    }
    uStack_124 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_114 = (iStack_110 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14054de85:
      uStack_114 = uVar3;
    }
  }
  uStack_84 = *(uint *)(param_1 + 0xa0);
  uStack_b8 = CONCAT44(uStack_124,local_128);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_114;
  uStack_a0 = CONCAT44(uStack_10c,iStack_110);
  local_98 = (int)uStack_84 >> 5;
  local_88 = -1 << ((byte)uStack_84 & 0x1f);
  local_80 = uStack_84 & 0xffffffe0;
  iStack_68 = local_128;
  uStack_64 = uStack_124;
  puStack_b0 = puVar2;
  local_60 = puVar2;
  local_50 = uStack_a0;
  local_70 = plVar7;
  uStack_a8 = uStack_58;
  uStack_a4 = uStack_54;
  uVar9 = uStack_84;
  if (uStack_84 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[local_98] & local_88;
    while (uVar9 == 0) {
      lVar11 = (longlong)local_98;
      local_80 = local_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar4) goto LAB_14054df6e;
      uVar9 = puVar12[lVar11 + 1];
      local_88 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (local_80 - iVar8) + 0x1f;
    uVar9 = uStack_84;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14054df6e:
      uStack_84 = uVar3;
      uVar9 = uVar3;
    }
  }
  do {
    if (((uStack_54 == uVar9) && (local_60 == puVar2)) && (local_70 == plVar7)) {
      local_108 = 0;
      uVar3 = *(uint *)(param_1 + 0xf8);
      puVar2 = (uint *)(param_1 + 0xe0);
      uStack_104 = 1;
      uStack_f4 = 0;
      iStack_f0 = 0;
      if (uVar3 == 0) goto LAB_14054e09a;
      puVar12 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar9 = *puVar12;
      iStack_f0 = 0;
      local_108 = 0;
      break;
    }
    lVar11 = (longlong)(int)uStack_54 * 0x168 + *local_70;
    if (*(longlong *)(lVar11 + 0xd0) != 0) {
      cVar5 = (*(code *)**(undefined8 **)*param_3)();
      if (cVar5 != '\0') goto LAB_14054e1e9;
    }
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  } while( true );
joined_r0x00014054e032:
  if (uVar9 != 0) goto LAB_14054e067;
  lVar11 = (longlong)local_108;
  iStack_f0 = iStack_f0 + 0x20;
  iVar8 = local_108 + 1;
  bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
  local_108 = iVar8;
  if (bVar4) goto LAB_14054e095;
  uVar9 = puVar12[lVar11 + 1];
  goto joined_r0x00014054e032;
LAB_14054e067:
  uStack_104 = -uVar9 & uVar9;
  local_78 = 0x1f;
  if (uStack_104 != 0) {
    for (; uStack_104 >> local_78 == 0; local_78 = local_78 + -1) {
    }
  }
  if (uStack_104 == 0) {
    iVar8 = 0x20;
  }
  else {
    iVar8 = 0x1f - local_78;
  }
  uStack_f4 = (iStack_f0 - iVar8) + 0x1f;
  if ((int)uVar3 < (int)uStack_f4) {
LAB_14054e095:
    uStack_f4 = uVar3;
  }
LAB_14054e09a:
  uStack_d4 = *(uint *)(param_1 + 0xf8);
  uStack_a8 = 0xffffffff;
  uStack_a4 = uStack_f4;
  uStack_a0 = CONCAT44(uStack_ec,iStack_f0);
  uVar9 = uStack_d4 & 0xffffffe0;
  uStack_b8 = CONCAT44(uStack_104,local_108);
  puStack_b0 = puVar2;
  if (uStack_d4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = puVar12[(int)uStack_d4 >> 5] & -1 << ((byte)uStack_d4 & 0x1f);
    iVar8 = (int)uStack_d4 >> 5;
    while (uVar10 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14054e181;
      uVar10 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    local_74 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> local_74 == 0; local_74 = local_74 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_74;
    }
    uStack_d4 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_d4) {
LAB_14054e181:
      uStack_d4 = uVar3;
    }
  }
  while ((uStack_a4 != uStack_d4 || (puStack_b0 != puVar2))) {
    lVar11 = (longlong)(int)uStack_a4 * 0x168 + *(longlong *)(param_1 + 0xd0);
    if (*(longlong *)(lVar11 + 0xd0) != 0) {
      cVar5 = (*(code *)**(undefined8 **)*param_3)();
      if (cVar5 != '\0') {
LAB_14054e1e9:
        *param_2 = *(undefined8 *)(lVar11 + 0xc0);
        lVar11 = *(longlong *)(lVar11 + 200);
        param_2[1] = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
LAB_14054e209:
        plVar7 = (longlong *)param_3[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar7 + 1;
          lVar11 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        return param_2;
      }
    }
    uStack_a8 = uStack_a8 & ~uStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  goto LAB_14054e209;
}



// FUNCTION 14054e270 FUN_14054e270 body=52 status=ok
// SIG undefined FUN_14054e270(void)

short FUN_14054e270(longlong *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
  sVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return sVar2 + 3 + sVar1;
}



// FUNCTION 14054e2b0 FUN_14054e2b0 body=641 status=ok
// SIG undefined FUN_14054e2b0(void)

int FUN_14054e2b0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  iVar13 = 0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  uVar3 = *(uint *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0x88);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_14054e3ad;
      uVar4 = puVar12[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14054e3ad:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xa0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar9) goto LAB_14054e471;
      uVar11 = puVar12[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar9 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14054e471:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar7 = (longlong)(int)uStack_5c * 0x168 + *plVar1;
    cVar6 = FUN_140584270(lVar7 + 0x70);
    if (cVar6 != '\0') {
      plVar8 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,lVar7 + 0x10);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x60))(plVar8,lVar7 + 0x70);
      cVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar13 = iVar13 + (uint)(cVar6 == '\x02');
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return iVar13;
}



// FUNCTION 14054e560 FUN_14054e560 body=487 status=ok
// SIG undefined FUN_14054e560(void)

undefined8 FUN_14054e560(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  wint_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  pwVar4 = L"session_id";
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa1fddcd8) + (longlong)pwVar4);
    if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14054e5da;
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) break;
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
  if (wVar2 == wVar3) {
LAB_14054e5da:
    FString::operator=(param_3,param_1 + 0xb0);
    return 1;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  pwVar4 = L"linked_service";
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa1fddd1c) + (longlong)pwVar4);
    if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14054e64a;
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) break;
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
  if (wVar2 == wVar3) {
LAB_14054e64a:
    FString::operator=(param_3,param_1 + 0xc0);
    return 1;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  pwVar4 = L"linked_service_id";
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa1fdddb4) + (longlong)pwVar4);
    if ((wVar1 == L'\0') && (*pwVar4 == L'\0')) goto LAB_14054e6ba;
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) break;
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
  if (wVar2 == wVar3) {
LAB_14054e6ba:
    FString::operator=(param_3,param_1 + 0xd0);
    return 1;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar6 = (undefined2 *)*param_2;
  }
  pwVar5 = &DAT_143fbbbe8;
  do {
    wVar2 = *(wint_t *)((longlong)(puVar6 + -0xa1fdddf4) + (longlong)pwVar5);
    if ((wVar2 == 0) && (*pwVar5 == 0)) goto LAB_14054e71b;
    if (wVar2 != *pwVar5) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar5);
      if (wVar2 != wVar3) {
        if (wVar2 != wVar3) {
          return 0;
        }
LAB_14054e71b:
        FString::operator=(param_3,param_1 + 0xe0);
        return 1;
      }
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
}



// FUNCTION 14054e750 FUN_14054e750 body=158 status=ok
// SIG undefined FUN_14054e750(void)

longlong FUN_14054e750(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  
  FUN_140549380((longlong *)(param_1 + 0xf0),local_res8,param_2);
  lVar2 = 0;
  lVar1 = lVar2;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0xf0);
  }
  lVar3 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar3 = lVar2;
  }
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (param_3 == 3) {
      return lVar2 + 0x60;
    }
    if (param_3 == 4) {
      return lVar2 + 0x120;
    }
    if (param_3 == 5) {
      return lVar2 + 0xc0;
    }
  }
  return lVar2;
}



// FUNCTION 14054e7f0 FUN_14054e7f0 body=874 status=ok
// SIG undefined FUN_14054e7f0(void)

void FUN_14054e7f0(longlong param_1,char *param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  char cVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  longlong local_res8;
  char *local_res10;
  char *local_res18;
  int local_res20;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  uint uStack_a4;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  
  cVar10 = '\x01';
  cVar11 = '\x01';
  if (*(longlong *)(param_1 + 0x60) == 0) {
    *param_2 = '\x01';
    *param_3 = '\x01';
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xa0);
  puVar3 = (uint *)(param_1 + 0x88);
  local_d8 = 0;
  uStack_d4 = 1;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar4 != 0) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar14 = *puVar12;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar13 = local_d8 + 1;
      bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar13;
      if (bVar5) goto LAB_14054e8ed;
      uVar14 = puVar12[lVar9 + 1];
    }
    uStack_d4 = -uVar14 & uVar14;
    local_res20 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_res20;
    }
    uStack_c4 = (iStack_c0 - iVar13) + 0x1f;
    if ((int)uVar4 < (int)uStack_c4) {
LAB_14054e8ed:
      uStack_c4 = uVar4;
    }
  }
  uStack_a4 = *(uint *)(param_1 + 0xa0);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_c4;
  local_68 = CONCAT44(uStack_bc,iStack_c0);
  uVar14 = uStack_a4 & 0xffffffe0;
  iStack_80 = local_d8;
  uStack_7c = uStack_d4;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_78 = puVar3;
  if (uStack_a4 != uVar4) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar8 = puVar12[(int)uStack_a4 >> 5] & -1 << ((byte)uStack_a4 & 0x1f);
    iVar13 = (int)uStack_a4 >> 5;
    while (uVar8 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_14054e9cd;
      uVar8 = puVar12[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_a4 = (uVar14 - iVar13) + 0x1f;
    if ((int)uVar4 < (int)uStack_a4) {
LAB_14054e9cd:
      uStack_a4 = uVar4;
    }
  }
  while ((uStack_6c != uStack_a4 || (local_78 != puVar3))) {
    local_res8 = CONCAT44(local_res8._4_4_,1);
    lVar9 = *(longlong *)(param_1 + 0x78) + (longlong)(int)uStack_6c * 0x168 + 0xc0;
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x140))
              (*(longlong **)(param_1 + 0x60),lVar9,3,&local_res8);
    if ((int)local_res8 != 3) {
      cVar10 = '\0';
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x140))
              (*(longlong **)(param_1 + 0x60),lVar9,9,&local_res8);
    if ((int)local_res8 != 3) {
      cVar11 = '\0';
    }
    lVar7 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_60,lVar9);
    plVar6 = local_58;
    if (local_60 != 0) {
      if ((cVar10 == '\0') || (*(char *)(local_60 + 600) == '\0')) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      if ((cVar11 == '\0') || (*(char *)(local_60 + 0x259) == '\0')) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x01';
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  *local_res10 = cVar10;
  *local_res18 = cVar11;
  return;
}



// FUNCTION 14054eb60 FUN_14054eb60 body=151 status=ok
// SIG undefined FUN_14054eb60(void)

longlong FUN_14054eb60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0xf0);
  FUN_140549380(plVar1,local_res8,param_2);
  lVar2 = 0;
  if (local_res8[0] != -1) {
    lVar2 = (longlong)local_res8[0] * 0x38 + *plVar1;
  }
  lVar3 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return lVar3;
  }
  local_18 = param_2;
  local_10 = param_2;
  FUN_140532720(plVar1,local_res8,&local_18,0);
  return *plVar1 + (longlong)local_res8[0] * 0x38 + 0x10;
}



// FUNCTION 14054ec00 FUN_14054ec00 body=1403 status=ok
// SIG undefined FUN_14054ec00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14054ec00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  longlong *local_d0;
  int local_c8;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  undefined8 local_7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853598) && (_Init_thread_header(&DAT_146853598), DAT_146853598 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3f7a0);
    _Init_thread_footer(&DAT_146853598);
  }
  if (DAT_146853590 < 2) {
    uStack_f0 = (longlong *)param_3[1];
    local_f8 = *param_3;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
    uVar12 = 0;
    if (local_f8 == 0) {
      uVar3 = *(uint *)(param_1 + 0xa0);
      local_90 = 0;
      local_7c = 0;
      if (uVar3 != 0) {
        puVar14 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x88);
        }
        uVar8 = *puVar14;
        iVar13 = 0;
        while (uVar8 == 0) {
          uVar12 = uVar12 + 0x20;
          local_90 = iVar13 + 1;
          local_7c = (ulonglong)uVar12 << 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13) {
            local_7c = CONCAT44(uVar12,uVar3);
            uVar12 = uVar3;
            goto LAB_14054ed94;
          }
          uVar8 = puVar14[(longlong)iVar13 + 1];
          iVar13 = local_90;
        }
        uVar8 = -uVar8 & uVar8;
        iVar9 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uVar12 = (uVar12 - iVar9) + 0x1f;
        if ((int)uVar3 < (int)uVar12) {
          uVar12 = uVar3;
        }
        uVar6 = (ulonglong)local_7c >> 0x20;
        local_7c = CONCAT44((int)uVar6,uVar12);
        local_90 = iVar13;
      }
LAB_14054ed94:
      uStack_b4 = *(uint *)(param_1 + 0xa0);
      uVar3 = *(uint *)(param_1 + 0xa0);
      local_b8 = -1 << ((byte)uStack_b4 & 0x1f);
      local_c8 = (int)uStack_b4 >> 5;
      local_b0 = uStack_b4 & 0xffffffe0;
      if (uStack_b4 != uVar3) {
        puVar14 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x88);
        }
        uVar8 = puVar14[local_c8] & local_b8;
        while (uVar8 == 0) {
          lVar11 = (longlong)local_c8;
          local_b0 = local_b0 + 0x20;
          iVar13 = local_c8 + 1;
          bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar13;
          if (bVar4) goto LAB_14054ee4c;
          uVar8 = puVar14[lVar11 + 1];
          local_b8 = 0xffffffff;
        }
        uVar8 = -uVar8 & uVar8;
        local_a8 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_a8 == 0; local_a8 = local_a8 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_a8;
        }
        uStack_b4 = (local_b0 - iVar13) + 0x1f;
        if ((int)uVar3 < (int)uStack_b4) {
LAB_14054ee4c:
          uStack_b4 = uVar3;
        }
      }
      if (uVar12 != uStack_b4) {
        local_d0 = *(longlong **)
                    ((longlong)(int)uVar12 * 0x168 + 200 + *(longlong *)(param_1 + 0x78));
        local_f8 = *(longlong *)
                    ((longlong)(int)uVar12 * 0x168 + 0xc0 + *(longlong *)(param_1 + 0x78));
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        local_e8[2] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_f0,&local_d0);
        plVar5 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
    }
    if (local_f8 != 0) {
      local_68 = (undefined4)local_f8;
      uStack_64 = local_f8._4_4_;
      uStack_60 = (undefined4)uStack_f0;
      uStack_5c = uStack_f0._4_4_;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
        UNLOCK();
      }
      lVar11 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar11 + 0x18),&local_58,&local_68);
      plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_58 != 0) {
        FUN_142b4a0e0(local_58,&local_a0,&DAT_146853558);
        if (local_a0 != 0) {
          local_e8[0] = 0;
          local_e8[1] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
          FGenericPlatformString::Memcpy(local_e8[0],L"VivoxDomain",0x18);
          puVar10 = (undefined8 *)FUN_142afc750(local_a0,local_48,local_e8,&DAT_146853588);
          if ((void **)puVar10 != &DAT_146853588) {
            if (DAT_146853588 != (void *)0x0) {
              FMemory::Free();
            }
            DAT_146853588 = (void *)*puVar10;
            *puVar10 = 0;
            DAT_146853590 = *(int *)(puVar10 + 1);
            _DAT_146853594 = *(undefined4 *)((longlong)puVar10 + 0xc);
            puVar10[1] = 0;
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
        }
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_98 + 1;
          lVar11 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)local_98 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar11 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    *param_2 = 0;
    iVar13 = DAT_146853590;
    pvVar7 = DAT_146853588;
    lVar11 = (longlong)DAT_146853590;
    *(int *)(param_2 + 1) = DAT_146853590;
    if (iVar13 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar13,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,lVar11 * 2);
    }
    plVar5 = uStack_f0;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_f0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*uStack_f0)(uStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
        }
      }
    }
  }
  else {
    *param_2 = 0;
    iVar13 = DAT_146853590;
    pvVar7 = DAT_146853588;
    lVar11 = (longlong)DAT_146853590;
    *(int *)(param_2 + 1) = DAT_146853590;
    if (iVar13 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar13,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,lVar11 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14054f180 FUN_14054f180 body=1403 status=ok
// SIG undefined FUN_14054f180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14054f180(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  longlong *local_d0;
  int local_c8;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  undefined8 local_7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468535b0) && (_Init_thread_header(&DAT_1468535b0), DAT_1468535b0 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3f7c0);
    _Init_thread_footer(&DAT_1468535b0);
  }
  if (DAT_1468535a8 < 2) {
    uStack_f0 = (longlong *)param_3[1];
    local_f8 = *param_3;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
    uVar12 = 0;
    if (local_f8 == 0) {
      uVar3 = *(uint *)(param_1 + 0xa0);
      local_90 = 0;
      local_7c = 0;
      if (uVar3 != 0) {
        puVar14 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x88);
        }
        uVar8 = *puVar14;
        iVar13 = 0;
        while (uVar8 == 0) {
          uVar12 = uVar12 + 0x20;
          local_90 = iVar13 + 1;
          local_7c = (ulonglong)uVar12 << 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13) {
            local_7c = CONCAT44(uVar12,uVar3);
            uVar12 = uVar3;
            goto LAB_14054f314;
          }
          uVar8 = puVar14[(longlong)iVar13 + 1];
          iVar13 = local_90;
        }
        uVar8 = -uVar8 & uVar8;
        iVar9 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uVar12 = (uVar12 - iVar9) + 0x1f;
        if ((int)uVar3 < (int)uVar12) {
          uVar12 = uVar3;
        }
        uVar6 = (ulonglong)local_7c >> 0x20;
        local_7c = CONCAT44((int)uVar6,uVar12);
        local_90 = iVar13;
      }
LAB_14054f314:
      uStack_b4 = *(uint *)(param_1 + 0xa0);
      uVar3 = *(uint *)(param_1 + 0xa0);
      local_b8 = -1 << ((byte)uStack_b4 & 0x1f);
      local_c8 = (int)uStack_b4 >> 5;
      local_b0 = uStack_b4 & 0xffffffe0;
      if (uStack_b4 != uVar3) {
        puVar14 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x88);
        }
        uVar8 = puVar14[local_c8] & local_b8;
        while (uVar8 == 0) {
          lVar11 = (longlong)local_c8;
          local_b0 = local_b0 + 0x20;
          iVar13 = local_c8 + 1;
          bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar13;
          if (bVar4) goto LAB_14054f3cc;
          uVar8 = puVar14[lVar11 + 1];
          local_b8 = 0xffffffff;
        }
        uVar8 = -uVar8 & uVar8;
        local_a8 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_a8 == 0; local_a8 = local_a8 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_a8;
        }
        uStack_b4 = (local_b0 - iVar13) + 0x1f;
        if ((int)uVar3 < (int)uStack_b4) {
LAB_14054f3cc:
          uStack_b4 = uVar3;
        }
      }
      if (uVar12 != uStack_b4) {
        local_d0 = *(longlong **)
                    ((longlong)(int)uVar12 * 0x168 + 200 + *(longlong *)(param_1 + 0x78));
        local_f8 = *(longlong *)
                    ((longlong)(int)uVar12 * 0x168 + 0xc0 + *(longlong *)(param_1 + 0x78));
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        local_e8[2] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_f0,&local_d0);
        plVar5 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
    }
    if (local_f8 != 0) {
      local_68 = (undefined4)local_f8;
      uStack_64 = local_f8._4_4_;
      uStack_60 = (undefined4)uStack_f0;
      uStack_5c = uStack_f0._4_4_;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
        UNLOCK();
      }
      lVar11 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar11 + 0x18),&local_58,&local_68);
      plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_58 != 0) {
        FUN_142b4a0e0(local_58,&local_a0,&DAT_146853558);
        if (local_a0 != 0) {
          local_e8[0] = 0;
          local_e8[1] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
          FGenericPlatformString::Memcpy(local_e8[0],L"VivoxIssuer",0x18);
          puVar10 = (undefined8 *)FUN_142afc750(local_a0,local_48,local_e8,&DAT_1468535a0);
          if ((void **)puVar10 != &DAT_1468535a0) {
            if (DAT_1468535a0 != (void *)0x0) {
              FMemory::Free();
            }
            DAT_1468535a0 = (void *)*puVar10;
            *puVar10 = 0;
            DAT_1468535a8 = *(int *)(puVar10 + 1);
            _DAT_1468535ac = *(undefined4 *)((longlong)puVar10 + 0xc);
            puVar10[1] = 0;
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
        }
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_98 + 1;
          lVar11 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)local_98 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar11 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    *param_2 = 0;
    iVar13 = DAT_1468535a8;
    pvVar7 = DAT_1468535a0;
    lVar11 = (longlong)DAT_1468535a8;
    *(int *)(param_2 + 1) = DAT_1468535a8;
    if (iVar13 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar13,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,lVar11 * 2);
    }
    plVar5 = uStack_f0;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_f0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*uStack_f0)(uStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
        }
      }
    }
  }
  else {
    *param_2 = 0;
    iVar13 = DAT_1468535a8;
    pvVar7 = DAT_1468535a0;
    lVar11 = (longlong)DAT_1468535a8;
    *(int *)(param_2 + 1) = DAT_1468535a8;
    if (iVar13 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar13,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,lVar11 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14054f700 FUN_14054f700 body=1403 status=ok
// SIG undefined FUN_14054f700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14054f700(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  longlong *local_d0;
  int local_c8;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  undefined8 local_7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853580) && (_Init_thread_header(&DAT_146853580), DAT_146853580 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3f7e0);
    _Init_thread_footer(&DAT_146853580);
  }
  if (DAT_146853578 < 2) {
    uStack_f0 = (longlong *)param_3[1];
    local_f8 = *param_3;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
    uVar12 = 0;
    if (local_f8 == 0) {
      uVar3 = *(uint *)(param_1 + 0xa0);
      local_90 = 0;
      local_7c = 0;
      if (uVar3 != 0) {
        puVar14 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x88);
        }
        uVar8 = *puVar14;
        iVar13 = 0;
        while (uVar8 == 0) {
          uVar12 = uVar12 + 0x20;
          local_90 = iVar13 + 1;
          local_7c = (ulonglong)uVar12 << 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13) {
            local_7c = CONCAT44(uVar12,uVar3);
            uVar12 = uVar3;
            goto LAB_14054f894;
          }
          uVar8 = puVar14[(longlong)iVar13 + 1];
          iVar13 = local_90;
        }
        uVar8 = -uVar8 & uVar8;
        iVar9 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uVar12 = (uVar12 - iVar9) + 0x1f;
        if ((int)uVar3 < (int)uVar12) {
          uVar12 = uVar3;
        }
        uVar6 = (ulonglong)local_7c >> 0x20;
        local_7c = CONCAT44((int)uVar6,uVar12);
        local_90 = iVar13;
      }
LAB_14054f894:
      uStack_b4 = *(uint *)(param_1 + 0xa0);
      uVar3 = *(uint *)(param_1 + 0xa0);
      local_b8 = -1 << ((byte)uStack_b4 & 0x1f);
      local_c8 = (int)uStack_b4 >> 5;
      local_b0 = uStack_b4 & 0xffffffe0;
      if (uStack_b4 != uVar3) {
        puVar14 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x88);
        }
        uVar8 = puVar14[local_c8] & local_b8;
        while (uVar8 == 0) {
          lVar11 = (longlong)local_c8;
          local_b0 = local_b0 + 0x20;
          iVar13 = local_c8 + 1;
          bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar13;
          if (bVar4) goto LAB_14054f94c;
          uVar8 = puVar14[lVar11 + 1];
          local_b8 = 0xffffffff;
        }
        uVar8 = -uVar8 & uVar8;
        local_a8 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_a8 == 0; local_a8 = local_a8 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_a8;
        }
        uStack_b4 = (local_b0 - iVar13) + 0x1f;
        if ((int)uVar3 < (int)uStack_b4) {
LAB_14054f94c:
          uStack_b4 = uVar3;
        }
      }
      if (uVar12 != uStack_b4) {
        local_d0 = *(longlong **)
                    ((longlong)(int)uVar12 * 0x168 + 200 + *(longlong *)(param_1 + 0x78));
        local_f8 = *(longlong *)
                    ((longlong)(int)uVar12 * 0x168 + 0xc0 + *(longlong *)(param_1 + 0x78));
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        local_e8[2] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_f0,&local_d0);
        plVar5 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
    }
    if (local_f8 != 0) {
      local_68 = (undefined4)local_f8;
      uStack_64 = local_f8._4_4_;
      uStack_60 = (undefined4)uStack_f0;
      uStack_5c = uStack_f0._4_4_;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
        UNLOCK();
      }
      lVar11 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar11 + 0x18),&local_58,&local_68);
      plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_58 != 0) {
        FUN_142b4a0e0(local_58,&local_a0,&DAT_146853558);
        if (local_a0 != 0) {
          local_e8[0] = 0;
          local_e8[1] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
          FGenericPlatformString::Memcpy(local_e8[0],L"VivoxEndpoint",0x1c);
          puVar10 = (undefined8 *)FUN_142afc750(local_a0,local_48,local_e8,&DAT_146853570);
          if ((void **)puVar10 != &DAT_146853570) {
            if (DAT_146853570 != (void *)0x0) {
              FMemory::Free();
            }
            DAT_146853570 = (void *)*puVar10;
            *puVar10 = 0;
            DAT_146853578 = *(int *)(puVar10 + 1);
            _DAT_14685357c = *(undefined4 *)((longlong)puVar10 + 0xc);
            puVar10[1] = 0;
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
        }
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_98 + 1;
          lVar11 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)local_98 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar11 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    *param_2 = 0;
    iVar13 = DAT_146853578;
    pvVar7 = DAT_146853570;
    lVar11 = (longlong)DAT_146853578;
    *(int *)(param_2 + 1) = DAT_146853578;
    if (iVar13 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar13,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,lVar11 * 2);
    }
    plVar5 = uStack_f0;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_f0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*uStack_f0)(uStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
        }
      }
    }
  }
  else {
    *param_2 = 0;
    iVar13 = DAT_146853578;
    pvVar7 = DAT_146853570;
    lVar11 = (longlong)DAT_146853578;
    *(int *)(param_2 + 1) = DAT_146853578;
    if (iVar13 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar13,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar7,lVar11 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14054fc80 FUN_14054fc80 body=116 status=ok
// SIG undefined FUN_14054fc80(void)

undefined8 * FUN_14054fc80(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x68);
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 1) = 0x32;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy
              (*param_2,L"Initialized - Use \'ShowDebug Voice\' for more info",100);
    return param_2;
  }
  *(undefined4 *)(param_2 + 1) = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Not Initialized",0x20);
  return param_2;
}



// FUNCTION 14054fd70 FUN_14054fd70 body=2008 status=ok
// SIG undefined FUN_14054fd70(void)

undefined8 FUN_14054fd70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong **pplVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *plStack_140;
  longlong *local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  
  plVar5 = (longlong *)operator_new(0x208);
  plVar7 = (longlong *)0x0;
  plStack_130 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc1a50;
    FUN_140535180(plVar5 + 2,param_1);
    plStack_130 = plVar5;
  }
  local_138 = plStack_130 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_138,local_138,local_138);
  local_148 = local_138;
  plStack_140 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0x80) != &local_148) {
    *(longlong **)(param_1 + 0x80) = local_138;
    local_148 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&plStack_140);
  }
  plVar5 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_140 + 8))(plStack_140,1);
      }
    }
  }
  plVar5 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_130 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_130)(plStack_130);
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
  plVar5 = (longlong *)operator_new(0x1a0);
  plStack_110 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc1a60;
    FUN_140534da0(plVar5 + 2,param_1);
    plStack_110 = plVar5;
  }
  local_118 = plStack_110 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_118,local_118,local_118);
  local_128 = local_118;
  plStack_120 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0x70) != &local_128) {
    *(longlong **)(param_1 + 0x70) = local_118;
    local_128 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&plStack_120);
  }
  plVar5 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_110)(plStack_110);
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
  plVar5 = (longlong *)operator_new(0x420);
  plStack_f0 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc1a70;
    FUN_140535820(plVar5 + 2,param_1);
    plStack_f0 = plVar5;
  }
  local_f8 = plStack_f0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
  local_108 = local_f8;
  plStack_100 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0xa0) != &local_108) {
    *(longlong **)(param_1 + 0xa0) = local_f8;
    local_108 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa8,&plStack_100);
  }
  plVar5 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  plVar5 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
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
  plVar5 = (longlong *)operator_new(200);
  plStack_d0 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc1a80;
    FUN_140535540(plVar5 + 2,param_1);
    plStack_d0 = plVar5;
  }
  local_d8 = plStack_d0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
  local_e8 = local_d8;
  plStack_e0 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0x90) != &local_e8) {
    *(longlong **)(param_1 + 0x90) = local_d8;
    local_e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x98,&plStack_e0);
  }
  plVar5 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  plVar5 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
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
  plVar5 = (longlong *)operator_new(0x38);
  plStack_b0 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_143fc1a90;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 2;
    plVar5[2] = (longlong)&PTR__scalar_deleting_destructor__143fc1310;
    plVar5[6] = param_1;
    plStack_b0 = plVar5;
  }
  local_b8 = plStack_b0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
  local_c8 = local_b8;
  plStack_c0 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0xb0) != &local_c8) {
    *(longlong **)(param_1 + 0xb0) = local_b8;
    local_c8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb8,&plStack_c0);
  }
  plVar5 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
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
  plVar5 = (longlong *)operator_new(0x238);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc1aa0;
    FUN_140535a10(plVar5 + 2,param_1);
    plVar7 = plVar5;
  }
  plVar5 = plVar7 + 2;
  local_58 = plVar5;
  local_50 = plVar7;
  TSharedRef<FOnlineLeaderboardsInterfaceEOS,1>::Init<FOnlineLeaderboardsInterfaceEOS>
            (&local_58,plVar5);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  pplVar8 = (longlong **)(param_1 + 0xc0);
  local_158 = plVar5;
  local_150 = plVar7;
  if (pplVar8 != &local_158) {
    *pplVar8 = plVar5;
    local_158 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 200,&local_150);
  }
  plVar5 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  (**(code **)(**pplVar8 + 0x10))();
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"GameNetDriver",1);
  local_80 = *puVar6;
  puVar6 = (undefined8 *)FName::FName(local_res10,L"/Script/SocketSubsystemSpark.SparkNetDriver",1);
  local_78 = *puVar6;
  puVar6 = (undefined8 *)FName::FName(local_res18,L"OnlineSubsystemUtils.IpNetDriver",1);
  local_70 = *puVar6;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res20,L"BeaconNetDriver",1);
  local_a8 = *puVar6;
  puVar6 = (undefined8 *)
           FName::FName(local_48,L"/Script/SocketSubsystemSpark.SparkBeaconNetDriver",1);
  local_a0 = *puVar6;
  puVar6 = (undefined8 *)FName::FName(local_40,L"OnlineSubsystemUtils.IpBeaconNetDriver",1);
  local_98 = *puVar6;
  FUN_14287ff60(&local_80);
  FUN_14287ff60(&local_a8);
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140550550 FUN_140550550 body=2024 status=ok
// SIG undefined FUN_140550550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140550550(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char cVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined2 *puVar24;
  longlong *plVar25;
  undefined1 auStack_608 [32];
  undefined8 *local_5e8;
  undefined8 local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  longlong *local_5c8;
  int local_5c0;
  longlong *local_5b8;
  int local_5b0;
  longlong *local_5a8;
  int local_5a0;
  undefined8 local_598;
  undefined2 *local_590;
  undefined8 local_588;
  undefined1 local_580 [8];
  undefined1 local_578 [8];
  undefined1 local_570 [8];
  undefined1 local_568 [8];
  undefined1 local_560 [8];
  undefined1 local_558 [8];
  undefined1 local_550 [8];
  longlong *local_548;
  undefined1 local_540 [8];
  longlong *local_538;
  longlong *local_530;
  longlong *local_520;
  longlong local_510 [3];
  undefined8 local_4f8 [76];
  undefined8 local_298 [76];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_608;
  if (*(char *)(param_1 + 0x68) != '\0') {
    return CONCAT71((int7)(local_38 >> 8),1);
  }
  puVar17 = (undefined8 *)FName::FName(local_580,L"VivoxCore",1);
  uVar18 = FUN_14168dc80();
  lVar19 = FUN_141690010(uVar18,*puVar17);
  lVar20 = 0;
  if (lVar19 != 0) {
    lVar20 = lVar19 + -0x10;
  }
  *(longlong *)(param_1 + 0x50) = lVar20;
  if (lVar20 == 0) {
    return 0;
  }
  FUN_14056e870(local_298);
  lVar19 = 4;
  puVar17 = local_298;
  puVar14 = local_4f8;
  do {
    puVar23 = puVar14;
    puVar21 = puVar17;
    uVar18 = puVar21[1];
    uVar11 = puVar21[2];
    uVar12 = puVar21[3];
    *puVar23 = *puVar21;
    puVar23[1] = uVar18;
    uVar18 = puVar21[4];
    uVar13 = puVar21[5];
    puVar23[2] = uVar11;
    puVar23[3] = uVar12;
    uVar11 = puVar21[6];
    uVar12 = puVar21[7];
    puVar23[4] = uVar18;
    puVar23[5] = uVar13;
    uVar18 = puVar21[8];
    uVar13 = puVar21[9];
    puVar23[6] = uVar11;
    puVar23[7] = uVar12;
    uVar11 = puVar21[10];
    uVar12 = puVar21[0xb];
    puVar23[8] = uVar18;
    puVar23[9] = uVar13;
    uVar18 = puVar21[0xc];
    uVar13 = puVar21[0xd];
    puVar23[10] = uVar11;
    puVar23[0xb] = uVar12;
    uVar11 = puVar21[0xe];
    uVar12 = puVar21[0xf];
    puVar23[0xc] = uVar18;
    puVar23[0xd] = uVar13;
    puVar23[0xe] = uVar11;
    puVar23[0xf] = uVar12;
    lVar19 = lVar19 + -1;
    puVar17 = puVar21 + 0x10;
    puVar14 = puVar23 + 0x10;
  } while (lVar19 != 0);
  uVar18 = puVar21[0x11];
  uVar11 = puVar21[0x12];
  uVar12 = puVar21[0x13];
  puVar23[0x10] = puVar21[0x10];
  puVar23[0x11] = uVar18;
  uVar18 = puVar21[0x14];
  uVar13 = puVar21[0x15];
  puVar23[0x12] = uVar11;
  puVar23[0x13] = uVar12;
  uVar3 = *(undefined4 *)(puVar21 + 0x16);
  uVar4 = *(undefined4 *)((longlong)puVar21 + 0xb4);
  uVar5 = *(undefined4 *)(puVar21 + 0x17);
  uVar6 = *(undefined4 *)((longlong)puVar21 + 0xbc);
  puVar23[0x14] = uVar18;
  puVar23[0x15] = uVar13;
  uVar7 = *(undefined4 *)(puVar21 + 0x18);
  uVar8 = *(undefined4 *)((longlong)puVar21 + 0xc4);
  uVar9 = *(undefined4 *)(puVar21 + 0x19);
  uVar10 = *(undefined4 *)((longlong)puVar21 + 0xcc);
  uVar18 = puVar21[0x1a];
  *(undefined4 *)(puVar23 + 0x16) = uVar3;
  *(undefined4 *)((longlong)puVar23 + 0xb4) = uVar4;
  *(undefined4 *)(puVar23 + 0x17) = uVar5;
  *(undefined4 *)((longlong)puVar23 + 0xbc) = uVar6;
  *(undefined4 *)(puVar23 + 0x18) = uVar7;
  *(undefined4 *)((longlong)puVar23 + 0xc4) = uVar8;
  *(undefined4 *)(puVar23 + 0x19) = uVar9;
  *(undefined4 *)((longlong)puVar23 + 0xcc) = uVar10;
  puVar23[0x1a] = uVar18;
  plVar22 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
  iVar16 = (**(code **)(*plVar22 + 8))(plVar22,local_4f8);
  if (iVar16 != 0) {
    return 0;
  }
  local_5e8 = &DAT_1468e2360;
  cVar15 = FConfigCacheIni::GetInt
                     (DAT_1468b6148,L"OnlineSubsystem",L"MaxLocalTalkers",param_1 + 200);
  if (cVar15 == '\0') {
    *(undefined4 *)(param_1 + 200) = 1;
  }
  local_5e8 = &DAT_1468e2360;
  cVar15 = FConfigCacheIni::GetInt
                     (DAT_1468b6148,L"OnlineSubsystem",L"MaxRemoteTalkers",param_1 + 0x120);
  if (cVar15 == '\0') {
    *(undefined4 *)(param_1 + 0x120) = 0x10;
  }
  local_590 = (undefined2 *)0x0;
  local_588 = 0;
  local_5e8 = &DAT_1468e2360;
  cVar15 = FConfigCacheIni::GetString
                     (DAT_1468b6148,L"OnlineSessionSpark",L"VoiceSessionName",&local_590);
  if (cVar15 == '\0') {
    local_598 = 0x11f;
    *(undefined8 *)(param_1 + 0x70) = 0x11f;
  }
  else {
    puVar24 = &DAT_143f3eda8;
    if ((int)local_588 != 0) {
      puVar24 = local_590;
    }
    puVar17 = (undefined8 *)FName::FName(&local_598,puVar24,1);
    *(undefined8 *)(param_1 + 0x70) = *puVar17;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                      (*(longlong **)(param_1 + 0x48),local_550);
  *(undefined8 *)(param_1 + 0x58) = *puVar17;
  if (local_548 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_548 + 1;
    lVar19 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_548)(local_548);
      LOCK();
      piVar1 = (int *)((longlong)local_548 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_548 + 8))(local_548,1);
      }
    }
  }
  uStack_5d0 = 0;
  local_5c8 = (longlong *)0x0;
  local_5d8 = FUN_140553e40;
  plVar22 = (longlong *)FMemory::Realloc(0,0x30);
  local_5c0 = 3;
  local_5c8 = plVar22;
  if (plVar22 != (longlong *)0x0) {
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1ab0;
    plVar22[1] = param_1;
    *(undefined4 *)(plVar22 + 2) = (undefined4)local_5d8;
    *(undefined4 *)((longlong)plVar22 + 0x14) = local_5d8._4_4_;
    *(undefined4 *)(plVar22 + 3) = uStack_5d0;
    *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_5cc;
    lVar19 = FDelegateHandle::GenerateNewID();
    plVar22[5] = lVar19;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1af8;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x160))
                      (*(longlong **)(param_1 + 0x58),local_578,&local_5c8);
  *(undefined8 *)(param_1 + 0x208) = *puVar17;
  if (local_5c0 == 0) {
LAB_1405508b6:
    if (local_5c8 != (longlong *)0x0) {
      FMemory::Free(local_5c8);
    }
  }
  else if (local_5c8 != (longlong *)0x0) {
    (**(code **)(*local_5c8 + 0x28))(local_5c8,0);
    if (local_5c8 != (longlong *)0x0) {
      local_5c8 = (longlong *)FMemory::Realloc(local_5c8,0,0);
    }
    local_5c0 = 0;
    goto LAB_1405508b6;
  }
  uStack_5d0 = 0;
  local_5b8 = (longlong *)0x0;
  local_5d8 = FUN_140553e40;
  plVar22 = (longlong *)FMemory::Realloc(0,0x30);
  local_5b0 = 3;
  local_5b8 = plVar22;
  if (plVar22 != (longlong *)0x0) {
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1ab0;
    plVar22[1] = param_1;
    *(undefined4 *)(plVar22 + 2) = (undefined4)local_5d8;
    *(undefined4 *)((longlong)plVar22 + 0x14) = local_5d8._4_4_;
    *(undefined4 *)(plVar22 + 3) = uStack_5d0;
    *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_5cc;
    lVar19 = FDelegateHandle::GenerateNewID();
    plVar22[5] = lVar19;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1af8;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))
                      (*(longlong **)(param_1 + 0x58),local_570,&local_5b8);
  *(undefined8 *)(param_1 + 0x210) = *puVar17;
  if (local_5b0 == 0) {
LAB_140550976:
    if (local_5b8 != (longlong *)0x0) {
      FMemory::Free(local_5b8);
    }
  }
  else if (local_5b8 != (longlong *)0x0) {
    (**(code **)(*local_5b8 + 0x28))(local_5b8,0);
    if (local_5b8 != (longlong *)0x0) {
      local_5b8 = (longlong *)FMemory::Realloc(local_5b8,0,0);
    }
    local_5b0 = 0;
    goto LAB_140550976;
  }
  uStack_5d0 = 0;
  local_5a8 = (longlong *)0x0;
  local_5d8 = FUN_140554350;
  plVar22 = (longlong *)FMemory::Realloc(0,0x30);
  local_5a0 = 3;
  local_5a8 = plVar22;
  if (plVar22 != (longlong *)0x0) {
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1ab0;
    plVar22[1] = param_1;
    *(undefined4 *)(plVar22 + 2) = (undefined4)local_5d8;
    *(undefined4 *)((longlong)plVar22 + 0x14) = local_5d8._4_4_;
    *(undefined4 *)(plVar22 + 3) = uStack_5d0;
    *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_5cc;
    lVar19 = FDelegateHandle::GenerateNewID();
    plVar22[5] = lVar19;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1af8;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0xd8))
                      (*(longlong **)(param_1 + 0x58),local_568,&local_5a8);
  *(undefined8 *)(param_1 + 0x218) = *puVar17;
  if (local_5a0 != 0) {
    if (local_5a8 == (longlong *)0x0) goto LAB_140550a4e;
    (**(code **)(*local_5a8 + 0x28))(local_5a8,0);
    if (local_5a8 != (longlong *)0x0) {
      local_5a8 = (longlong *)FMemory::Realloc(local_5a8,0,0);
    }
    local_5a0 = 0;
  }
  if (local_5a8 != (longlong *)0x0) {
    FMemory::Free(local_5a8);
  }
LAB_140550a4e:
  local_5d8 = FUN_140554670;
  uStack_5d0 = 0;
  plVar22 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
  lVar19 = (**(code **)(*plVar22 + 0x28))(plVar22);
  plVar22 = (longlong *)FMemory::Realloc(0,0x30);
  local_530 = plVar22;
  if (plVar22 != (longlong *)0x0) {
    plVar22[1] = param_1;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar22 + 2) = (undefined4)local_5d8;
    *(undefined4 *)((longlong)plVar22 + 0x14) = local_5d8._4_4_;
    *(undefined4 *)(plVar22 + 3) = uStack_5d0;
    *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_5cc;
    lVar20 = FDelegateHandle::GenerateNewID();
    plVar22[5] = lVar20;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc2098;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar19 + 0x38,1);
    (**(code **)(*plVar22 + 0x20))(plVar22,local_560);
    iVar16 = *(int *)(lVar19 + 0x40);
    *(int *)(lVar19 + 0x40) = iVar16 + 1;
    if (*(int *)(lVar19 + 0x44) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar19 + 0x38,iVar16);
    }
    puVar17 = (undefined8 *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar19 + 0x38));
    *puVar17 = plVar22;
    *(undefined4 *)(puVar17 + 1) = 3;
  }
  local_5d8 = (code *)&LAB_140560740;
  uStack_5d0 = 0;
  plVar22 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
  lVar19 = (**(code **)(*plVar22 + 0x28))(plVar22);
  plVar22 = (longlong *)FMemory::Realloc(0,0x30);
  local_520 = plVar22;
  if (plVar22 != (longlong *)0x0) {
    plVar22[1] = param_1;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar22 + 2) = (undefined4)local_5d8;
    *(undefined4 *)((longlong)plVar22 + 0x14) = local_5d8._4_4_;
    *(undefined4 *)(plVar22 + 3) = uStack_5d0;
    *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_5cc;
    lVar20 = FDelegateHandle::GenerateNewID();
    plVar22[5] = lVar20;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc2098;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar19 + 0x50,1);
    (**(code **)(*plVar22 + 0x20))(plVar22,local_558);
    iVar16 = *(int *)(lVar19 + 0x58);
    *(int *)(lVar19 + 0x58) = iVar16 + 1;
    if (*(int *)(lVar19 + 0x5c) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar19 + 0x50,iVar16);
    }
    puVar17 = (undefined8 *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar19 + 0x50));
    *puVar17 = plVar22;
    *(undefined4 *)(puVar17 + 1) = 3;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))
                      (*(longlong **)(param_1 + 0x48),local_540);
  *(undefined8 *)(param_1 + 0x60) = *puVar17;
  if (local_538 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_538 + 1;
    lVar19 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_538)(local_538);
      LOCK();
      piVar1 = (int *)((longlong)local_538 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_538 + 8))(local_538,1);
      }
    }
  }
  lVar19 = FUN_142b45e90();
  uStack_5d0 = 0;
  local_5d8 = FUN_1405427f0;
  lVar19 = *(longlong *)(lVar19 + 0x18);
  plVar25 = (longlong *)(lVar19 + 0x1b8);
  plVar22 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar22 != (longlong *)0x0) {
    plVar22[1] = param_1;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar22 + 2) = (undefined4)local_5d8;
    *(undefined4 *)((longlong)plVar22 + 0x14) = local_5d8._4_4_;
    *(undefined4 *)(plVar22 + 3) = uStack_5d0;
    *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_5cc;
    lVar20 = FDelegateHandle::GenerateNewID();
    plVar22[5] = lVar20;
    *plVar22 = (longlong)&PTR_GetPoolName_143fc1af8;
  }
  if (local_510 != plVar25) {
    if (plVar22 == (longlong *)0x0) {
      if ((*(int *)(lVar19 + 0x1c0) != 0) &&
         (plVar2 = (longlong *)*plVar25, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar25 != 0) {
          lVar20 = FMemory::Realloc(*plVar25,0,0);
          *plVar25 = lVar20;
        }
        *(undefined4 *)(lVar19 + 0x1c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar22 + 0x30))(plVar22,plVar25);
    }
  }
  if (plVar22 != (longlong *)0x0) {
    (**(code **)(*plVar22 + 0x28))(plVar22,0);
    lVar19 = FMemory::Realloc(plVar22,0,0);
    if (lVar19 != 0) {
      FMemory::Free(lVar19);
    }
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (local_590 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140550d40 FUN_140550d40 body=47 status=ok
// SIG undefined FUN_140550d40(void)

void FUN_140550d40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_143fc0488;
    return;
  }
  return;
}



// FUNCTION 140550d70 FUN_140550d70 body=740 status=ok
// SIG undefined FUN_140550d70(void)

undefined8 FUN_140550d70(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  plVar9 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                     (*(longlong **)(param_1 + 0x48),local_58);
  plVar4 = (longlong *)plVar9[1];
  plVar9 = (longlong *)*plVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_98 = *param_2;
  local_90 = param_2[1];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  FUN_14054dd00(param_1,&local_a8,&local_98);
  local_88 = *param_3;
  local_80 = param_3[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  FUN_14054d780(param_1,&local_b8,&local_88);
  if (((plVar9 != (longlong *)0x0) && (local_a8 != 0)) && (local_b8 != 0)) {
    local_68 = local_b8;
    plStack_60 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
    }
    local_78 = local_a8;
    plStack_70 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x140))(plVar9,local_48,&local_78,&local_68,3);
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    if (*plVar9 != 0) {
      uVar10 = 1;
      goto LAB_140550ecf;
    }
  }
  uVar10 = 0;
LAB_140550ecf:
  if (bVar5) {
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  plVar9 = plStack_70;
  if (bVar6) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  plVar9 = plStack_60;
  if ((bVar7) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return uVar10;
}



// FUNCTION 140551060 FUN_140551060 body=140 status=ok
// SIG undefined FUN_140551060(void)

bool FUN_140551060(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x140))(param_1,local_18,param_2,param_3,param_4);
  lVar3 = *plVar5;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return lVar3 != 0;
  }
  return lVar3 != 0;
}



// FUNCTION 140551100 FUN_140551100 body=1520 status=ok
// SIG undefined FUN_140551100(void)

undefined1 * FUN_140551100(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  wint_t *pwVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  uint *puVar18;
  byte local_res18;
  int local_218;
  uint uStack_214;
  uint uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  uint uStack_1e4;
  int iStack_1c0;
  uint uStack_1bc;
  uint *local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  longlong *local_190;
  undefined1 local_188 [96];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return &stack0x00000000;
  }
  uVar4 = *(uint *)(param_1 + 0xa0);
  puVar1 = (uint *)(param_1 + 0x88);
  local_res18 = 0;
  local_218 = 0;
  uStack_214 = 1;
  uStack_204 = 0;
  iStack_200 = 0;
  if (uVar4 != 0) {
    puVar18 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar12 = *puVar18;
    iStack_200 = 0;
    local_218 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)local_218;
      iStack_200 = iStack_200 + 0x20;
      iVar17 = local_218 + 1;
      bVar5 = (int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 <= local_218;
      local_218 = iVar17;
      if (bVar5) goto LAB_140551205;
      uVar12 = puVar18[lVar9 + 1];
    }
    uStack_214 = -uVar12 & uVar12;
    iVar17 = 0x1f;
    if (uStack_214 != 0) {
      for (; uStack_214 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uStack_214 == 0) {
      iVar17 = 0x20;
    }
    else {
      iVar17 = 0x1f - iVar17;
    }
    uStack_204 = (iStack_200 - iVar17) + 0x1f;
    if ((int)uVar4 < (int)uStack_204) {
LAB_140551205:
      uStack_204 = uVar4;
    }
  }
  uStack_1e4 = *(uint *)(param_1 + 0xa0);
  uVar4 = *(uint *)(param_1 + 0xa0);
  uStack_1b0 = 0xffffffff;
  uStack_1ac = uStack_204;
  local_1a8 = CONCAT44(uStack_1fc,iStack_200);
  uVar12 = uStack_1e4 & 0xffffffe0;
  iStack_1c0 = local_218;
  uStack_1bc = uStack_214;
  local_1b8 = puVar1;
  if (uStack_1e4 != uVar4) {
    puVar18 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar13 = puVar18[(int)uStack_1e4 >> 5] & -1 << ((byte)uStack_1e4 & 0x1f);
    iVar17 = (int)uStack_1e4 >> 5;
    while (uVar13 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 <= iVar17)
      goto LAB_1405512f0;
      uVar13 = puVar18[(longlong)iVar17 + 1];
      iVar17 = iVar17 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar17 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar17 = 0x20;
    }
    else {
      iVar17 = 0x1f - iVar17;
    }
    uStack_1e4 = (uVar12 - iVar17) + 0x1f;
    if ((int)uVar4 < (int)uStack_1e4) {
LAB_1405512f0:
      uStack_1e4 = uVar4;
    }
  }
LAB_140551310:
  if ((uStack_1ac == uStack_1e4) && (local_1b8 == puVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    puVar16 = (undefined8 *)((longlong)(int)uStack_1ac * 0x168 + *(longlong *)(param_1 + 0x78));
    local_198 = *puVar16;
    local_190 = (longlong *)puVar16[1];
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    FUN_1405343b0(local_188,puVar16 + 2);
    FString::FString(local_128,puVar16 + 0xe);
    FString::FString(local_118,puVar16 + 0x10);
    FString::FString(local_108,puVar16 + 0x12);
    local_f8 = *(undefined1 *)(puVar16 + 0x14);
    local_f0 = puVar16[0x15];
    uStack_e8 = puVar16[0x16];
    local_e0 = puVar16[0x17];
    local_d8 = puVar16[0x18];
    local_d0 = puVar16[0x19];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    local_c8 = puVar16[0x1a];
    local_c0 = puVar16[0x1b];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    local_b8 = *(undefined4 *)(puVar16 + 0x1c);
    local_b4 = *(undefined4 *)((longlong)puVar16 + 0xe4);
    local_b0 = *(undefined4 *)(puVar16 + 0x1d);
    local_ac = *(undefined4 *)((longlong)puVar16 + 0xec);
    local_a8 = *(undefined4 *)(puVar16 + 0x1e);
    local_a4 = *(undefined4 *)((longlong)puVar16 + 0xf4);
    local_a0 = *(undefined1 *)(puVar16 + 0x1f);
    FString::FString(local_98,puVar16 + 0x20);
    local_88 = *(undefined1 *)(puVar16 + 0x22);
    local_87 = *(undefined1 *)((longlong)puVar16 + 0x111);
    local_86 = *(undefined1 *)((longlong)puVar16 + 0x112);
    local_85 = *(undefined1 *)((longlong)puVar16 + 0x113);
    local_84 = *(undefined1 *)((longlong)puVar16 + 0x114);
    local_83 = *(undefined1 *)((longlong)puVar16 + 0x115);
    local_82 = *(undefined1 *)((longlong)puVar16 + 0x116);
    local_81 = *(undefined1 *)((longlong)puVar16 + 0x117);
    local_80 = puVar16[0x23];
    local_78 = *(undefined4 *)(puVar16 + 0x24);
    local_70 = puVar16[0x25];
    local_68 = puVar16[0x26];
    local_60 = puVar16[0x27];
    local_58 = puVar16[0x28];
    local_50 = puVar16[0x29];
    local_48 = puVar16[0x2a];
    local_40 = puVar16[0x2b];
    plVar10 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x28))(plVar10);
    lVar9 = *plVar10;
    uVar11 = FUN_140572be0(local_188);
    plVar10 = (longlong *)(**(code **)(lVar9 + 0x80))(plVar10,uVar11);
    cVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
    if (cVar6 == '\0') {
      puVar16 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
      if (*(int *)(puVar16 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar16;
      }
      pwVar14 = &DAT_143fb28a8;
      do {
        wVar7 = *(wint_t *)((longlong)(puVar15 + -0xa1fd9454) + (longlong)pwVar14);
        if ((wVar7 == 0) && (*pwVar14 == 0)) break;
        if (wVar7 != *pwVar14) {
          wVar7 = towlower(wVar7);
          wVar8 = towlower(*pwVar14);
          if (wVar7 != wVar8) goto LAB_1405515f0;
        }
        pwVar14 = pwVar14 + 1;
      } while( true );
    }
    goto LAB_140551601;
  }
  goto LAB_1405516a3;
LAB_1405515f0:
  if (wVar7 != wVar8) {
    local_res18 = 1;
    FUN_140539840(local_188);
    plVar10 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_190 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        iVar17 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
LAB_1405516a3:
    return (undefined1 *)(ulonglong)local_res18;
  }
LAB_140551601:
  FUN_140539840(local_188);
  plVar10 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_190 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar17 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  uStack_1b0 = uStack_1b0 & ~uStack_1bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1c0);
  goto LAB_140551310;
}



// FUNCTION 1405516f0 FUN_1405516f0 body=39 status=ok
// SIG undefined FUN_1405516f0(void)

bool FUN_1405516f0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))();
    return iVar1 != 0;
  }
  return false;
}



// FUNCTION 140551720 FUN_140551720 body=90 status=ok
// SIG undefined FUN_140551720(void)

ulonglong FUN_140551720(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_res8 [8];
  
  FUN_140549500((longlong *)(param_1 + 0x78),local_res8,param_2);
  uVar1 = 0;
  if (local_res8[0] != -1) {
    uVar1 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  uVar2 = uVar1 + 0x10;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    return (ulonglong)*(byte *)(uVar2 + 0x104);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140551780 FUN_140551780 body=553 status=ok
// SIG undefined FUN_140551780(void)

undefined8 FUN_140551780(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_94 = 1;
  plVar1 = param_1 + 0xf;
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0x14);
  puVar2 = (uint *)(param_1 + 0x11);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = (uint *)param_1[0x13];
    if ((uint *)param_1[0x13] == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_14055185e;
      uVar4 = puVar11[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14055185e:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x14);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = (uint *)param_1[0x13];
    if ((uint *)param_1[0x13] == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_140551921;
      uVar8 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar9 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140551921:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    cVar6 = (**(code **)(*param_1 + 0x88))
                      (param_1,*plVar1 + (longlong)(int)uStack_5c * 0x168 + 0xc0,param_2);
    if (cVar6 != '\0') {
      return 1;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return 0;
}



// FUNCTION 1405519b0 FUN_1405519b0 body=379 status=ok
// SIG undefined FUN_1405519b0(void)

bool FUN_1405519b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14054dd00(param_1,&local_48,&local_38);
  if (local_48 != 0) {
    FUN_140549690(param_1 + 0x128,local_res18,param_2);
    plVar5 = plStack_40;
    plVar6 = (longlong *)0x0;
    plVar4 = plVar6;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x68 + *(longlong *)(param_1 + 0x128));
    }
    plVar7 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      local_28 = local_48;
      plStack_20 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      FUN_140549c00(plVar7,local_res20,&local_28);
      plVar4 = plStack_40;
      if (local_res20[0] != -1) {
        plVar6 = (longlong *)(*plVar7 + (longlong)local_res20[0] * 0x18);
      }
      bVar8 = plVar6 != (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar5 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_40;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          plVar5 = plStack_40;
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      goto LAB_140551ae3;
    }
  }
  bVar8 = false;
  plVar5 = plStack_40;
LAB_140551ae3:
  plVar6 = plStack_40;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return bVar8;
}



// FUNCTION 140551b30 FUN_140551b30 body=499 status=ok
// SIG undefined FUN_140551b30(void)

undefined1 FUN_140551b30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14054dd00(param_1,&local_58,&local_48);
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14054d780(param_1,&local_68,&local_38);
  lVar6 = FUN_14054b210();
  if (((local_58 == 0) || (local_68 == 0)) || (lVar6 == 0)) {
    uVar5 = 0;
  }
  else {
    local_18 = local_68;
    plStack_10 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    local_28 = local_58;
    plStack_20 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_1404d5ac0(lVar6,&local_28,&local_18);
    plVar4 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_20)(plStack_20);
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
    plVar4 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
  }
  plVar4 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 140551d30 FUN_140551d30 body=93 status=ok
// SIG undefined FUN_140551d30(void)

ulonglong FUN_140551d30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_res8 [8];
  
  FUN_140549500((longlong *)(param_1 + 0xd0),local_res8,param_2);
  uVar1 = 0;
  if (local_res8[0] != -1) {
    uVar1 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0xd0);
  }
  uVar2 = uVar1 + 0x10;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    return (ulonglong)*(byte *)(uVar2 + 0x104);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140551da0 FUN_140551da0 body=2317 status=ok
// SIG undefined FUN_140551da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140551da0(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  ulonglong local_e8;
  longlong *local_d8;
  longlong *plStack_d0;
  void *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98 [2];
  longlong local_88 [2];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar7 = (longlong *)0x0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_a8 = param_2;
  if (*(int *)(param_2 + 1) == 0) {
    (**(code **)(*param_1 + 0x178))(param_1,param_3,2);
    return;
  }
  if (0 < (int)param_1[0x51]) {
    plVar9 = (longlong *)(param_1[0x50] + 0xb8);
    plVar10 = plVar7;
    plVar5 = plVar7;
    do {
      if (*plVar9 == param_3) {
        if ((longlong)(int)plVar5 * 0x118 + param_1[0x50] != 0) {
          (**(code **)(*param_1 + 0x178))(param_1,param_3,2);
          return;
        }
        break;
      }
      plVar5 = (longlong *)(ulonglong)((int)plVar5 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
      plVar9 = plVar9 + 0x23;
    } while ((longlong)plVar10 < (longlong)(int)param_1[0x51]);
  }
  lVar11 = param_1[0x51];
  iVar3 = (int)lVar11 + 1;
  *(int *)(param_1 + 0x51) = iVar3;
  if (*(int *)((longlong)param_1 + 0x28c) < iVar3) {
    FUN_1404f33d0(param_1 + 0x50);
  }
  plVar10 = (longlong *)((longlong)(int)lVar11 * 0x118 + param_1[0x50]);
  plVar9 = plVar7;
  if (plVar10 != (longlong *)0x0) {
    FUN_140535720(plVar10);
    plVar10[0x17] = param_3;
    *plVar10 = (longlong)&PTR__scalar_deleting_destructor__143f7d2c8;
    *(undefined4 *)(plVar10 + 0x18) = 0xffffffff;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    *(undefined1 *)(plVar10 + 0x1b) = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[0x20] = 0;
    plVar10[0x21] = 0;
    *(undefined4 *)(plVar10 + 0x22) = 0;
    plVar9 = plVar10;
  }
  pvVar4 = (void *)operator_new(0x60);
  plVar10 = plVar7;
  if (pvVar4 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(pvVar4,0,0x60);
    plVar10 = (longlong *)FUN_1405357c0(pvVar4);
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar10;
    plVar7 = plVar5;
  }
  local_b8 = plVar10;
  plStack_b0 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar10,plVar10);
  plVar10 = local_b8;
  plVar7 = *(longlong **)(param_4 + 0xa8);
  lVar11 = *(longlong *)(param_4 + 0xa0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (lVar11 != 0) {
    FString::operator=(local_b8 + 10,lVar11 + 0x50);
    *(undefined4 *)(plVar10 + 4) = *(undefined4 *)(lVar11 + 0x20);
    *(undefined2 *)((longlong)plVar10 + 0x24) = *(undefined2 *)(lVar11 + 0x24);
    FString::operator=(plVar10 + 5,lVar11 + 0x28);
    FString::operator=(plVar10 + 8,lVar11 + 0x40);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  local_d8 = local_b8;
  plStack_d0 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(plVar9 + 0x14) != &local_d8) {
    plVar9[0x14] = (longlong)local_b8;
    local_d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 0x15,&plStack_d0);
  }
  plVar7 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_d0 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  puVar8 = local_a8;
  local_110 = (longlong *)((longlong *)*local_a8)[1];
  local_118 = *(longlong *)*local_a8;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  plVar7 = plVar9 + 0x1c;
  if (plVar7 != &local_118) {
    *plVar7 = local_118;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 0x1d,&local_110);
  }
  plVar10 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_110 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  plVar5 = (longlong *)plVar9[0x1d];
  plVar10 = plVar9 + 0x19;
  lVar11 = *plVar7;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_108 = lVar11;
  plStack_100 = plVar5;
  if (&local_108 != plVar10) {
    local_108 = *plVar10;
    plStack_100 = (longlong *)plVar9[0x1a];
    *plVar10 = lVar11;
    plVar9[0x1a] = (longlong)plVar5;
    local_78 = lVar11;
    plStack_70 = plVar5;
  }
  plVar7 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_100 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  plVar10 = *(longlong **)(param_4 + 0x10);
  plVar7 = plVar9 + 1;
  lVar11 = *(longlong *)(param_4 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_f8 = lVar11;
  plStack_f0 = plVar10;
  if (&local_f8 != plVar7) {
    local_f8 = *plVar7;
    plStack_f0 = (longlong *)plVar9[2];
    *plVar7 = lVar11;
    plVar9[2] = (longlong)plVar10;
    local_68 = lVar11;
    plStack_60 = plVar10;
  }
  plVar7 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_f0 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
      }
    }
  }
  *(undefined4 *)(plVar9 + 6) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)((longlong)plVar9 + 0x34) = *(undefined4 *)(param_4 + 0x34);
  if (*(char *)((longlong)plVar9 + 0x3a) != '\0') {
    FUN_14054aea0(param_1,puVar8,param_3,1);
    goto LAB_140552647;
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  puVar6 = (undefined8 *)FName::FName(local_a0,L"FRIENDPASSCODE",1);
  FUN_1404a96c0(param_4 + 0x28,*puVar6,&local_c8);
  plVar7 = (longlong *)operator_new(0x70);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar9 = plVar7;
  }
  else {
    local_e8 = (**(code **)(*local_b8 + 0x38))(local_b8,local_88);
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    iVar3 = *(int *)(puVar8 + 1);
    puVar8 = (undefined8 *)*local_a8;
    *(int *)(plVar7 + 3) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)plVar7 + 0x1c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar7 + 2,iVar3,0);
      puVar6 = (undefined8 *)plVar7[2];
      do {
        *puVar6 = *puVar8;
        lVar11 = puVar8[1];
        puVar6[1] = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        puVar6 = puVar6 + 2;
        puVar8 = puVar8 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    plVar7[4] = param_3;
    FString::FString(plVar7 + 5,local_e8);
    pvVar4 = local_c8;
    plVar7[7] = 0;
    lVar11 = (longlong)(int)local_c0;
    *(int *)(plVar7 + 8) = (int)local_c0;
    if ((int)local_c0 == 0) {
      *(undefined4 *)((longlong)plVar7 + 0x44) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar7 + 7,local_c0 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)plVar7[7],pvVar4,lVar11 * 2);
    }
    plVar7[9] = 0;
    plVar7[10] = 0;
    *(undefined4 *)(plVar7 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)plVar7 + 0x5c) = 2;
    plVar7[0xc] = 0;
    *(undefined4 *)(plVar7 + 0xd) = 0;
    plVar9 = (longlong *)0x1;
  }
  plVar10 = (longlong *)0x0;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc21b0;
    plVar5[2] = (longlong)plVar7;
    plVar10 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_140552482;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar5 = (longlong *)plVar7[1];
    if (plVar10 != plVar5) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar7[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar7[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar10 + 1;
      lVar11 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_140552482:
  if ((plVar9 != (longlong *)0x0) && (local_88[0] != 0)) {
    FMemory::Free();
  }
  if (plVar7 != (longlong *)0x0) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    iVar3 = (int)param_1[0x6e];
    *(int *)(param_1 + 0x6e) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x374) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x6d,iVar3);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[0x6d]);
    *puVar8 = plVar7;
    puVar8[1] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar10 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    pplVar2 = (longlong **)(plVar7 + 0xc);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_98[0] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = (longlong)param_1;
      *plVar9 = (longlong)&DAT_143f3ed00;
      plVar9[2] = (longlong)FUN_140555e20;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar11;
      *plVar9 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_98 != pplVar2) {
      if (plVar9 == (longlong *)0x0) {
        if (((int)plVar7[0xd] != 0) && (plVar5 = *pplVar2, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*pplVar2 != (longlong *)0x0) {
            plVar5 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
            *pplVar2 = plVar5;
          }
          *(undefined4 *)(plVar7 + 0xd) = 0;
        }
      }
      else {
        (**(code **)(*plVar9 + 0x30))(plVar9,pplVar2);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_98[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_98[0] != (longlong *)0x0) {
        FMemory::Free(local_98[0]);
      }
    }
    *(undefined4 *)(plVar7 + 0xb) = 0;
    FUN_14053d700(plVar7);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
LAB_140552647:
  plVar7 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_b0 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 1405526b0 FUN_1405526b0 body=569 status=ok
// SIG undefined FUN_1405526b0(void)

void FUN_1405526b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
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
  
  if (param_2 == *(longlong *)(param_1 + 0x70)) {
    plVar1 = (longlong *)(param_1 + 0x78);
    puVar2 = (uint *)(param_1 + 0x88);
    uVar3 = *(uint *)(param_1 + 0xa0);
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar10 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar10 = puVar2;
      }
      uVar4 = *puVar10;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar7 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar8 = local_88 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar8;
        if (bVar5) goto LAB_14055279b;
        uVar4 = puVar10[lVar7 + 1];
      }
      uStack_84 = -uVar4 & uVar4;
      iVar8 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_74 = (iStack_70 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_14055279b:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xa0);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar9 = uVar4 & 0xffffffe0;
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
      puVar10 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar10 = puVar2;
      }
      uVar6 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar8 = (int)uVar4 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_140552863;
        uVar6 = puVar10[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_74 = (uVar9 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_140552863:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
      FUN_1405426e0(param_1,*plVar1 + (longlong)(int)uStack_4c * 0x168 + 0xc0);
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return;
}



// FUNCTION 140552900 FUN_140552900 body=1080 status=ok
// SIG undefined FUN_140552900(void)

void FUN_140552900(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  void *_Src_00;
  void **ppvVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  void *local_188;
  int local_180;
  undefined4 local_17c;
  int local_178;
  uint uStack_174;
  uint *puStack_170;
  undefined4 local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 *local_128;
  uint local_110;
  uint uStack_10c;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  plVar7 = (longlong *)(**(code **)(*param_2 + 0x88))(param_2);
  (**(code **)(*plVar7 + 0x48))(plVar7,local_78);
  lVar8 = FUN_140548950(param_1,param_2);
  if (lVar8 == 0) {
    FString::FString(local_d8,local_78);
    FString::FString(local_c8,local_68);
    FString::FString(local_b8,local_58);
    local_a8 = local_48;
    local_88 = *param_3;
    local_80 = (longlong *)param_3[1];
    local_90 = local_30;
    local_a0 = local_40;
    uStack_9c = uStack_3c;
    uStack_98 = uStack_38;
    uStack_94 = uStack_34;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    uVar9 = (**(code **)(*param_2 + 0x90))(param_2);
    local_130 = FUN_1405859b0(uVar9);
    local_128 = local_d8;
    FUN_140533200(param_1 + 0x1b8,local_res8);
    plVar7 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FUN_14056f1b0();
  }
  else {
    FUN_14056a280(param_1,lVar8,param_2);
    FUN_140559bb0(param_1,lVar8);
  }
  if (*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 0x104)) {
    local_100 = (longlong *)(param_1 + 0x78);
    uVar4 = *(uint *)(param_1 + 0xa0);
    puVar3 = (uint *)(param_1 + 0x88);
    local_178 = 0;
    uStack_174 = 1;
    uStack_164 = 0;
    iStack_160 = 0;
    if (uVar4 != 0) {
      puVar16 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar16 = puVar3;
      }
      uVar12 = *puVar16;
      iStack_160 = 0;
      local_178 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)local_178;
        iStack_160 = iStack_160 + 0x20;
        iVar11 = local_178 + 1;
        bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_178;
        local_178 = iVar11;
        if (bVar5) goto LAB_140552b21;
        uVar12 = puVar16[lVar8 + 1];
      }
      uStack_174 = -uVar12 & uVar12;
      iVar11 = 0x1f;
      if (uStack_174 != 0) {
        for (; uStack_174 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_174 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_164 = (iStack_160 - iVar11) + 0x1f;
      if ((int)uVar4 < (int)uStack_164) {
LAB_140552b21:
        uStack_164 = uVar4;
      }
    }
    local_168 = 0xffffffff;
    uStack_10c = *(uint *)(param_1 + 0xa0);
    uStack_f8 = CONCAT44(uStack_174,local_178);
    uStack_140 = CONCAT44(uStack_164,0xffffffff);
    local_138 = CONCAT44(uStack_15c,iStack_160);
    local_110 = -1 << ((byte)uStack_10c & 0x1f);
    uVar15 = uStack_10c & 0xffffffe0;
    iStack_150 = local_178;
    uStack_14c = uStack_174;
    puStack_170 = puVar3;
    local_148 = puVar3;
    puStack_f0 = puVar3;
    uStack_e8 = uStack_140;
    uStack_e0 = local_138;
    local_158 = local_100;
    uVar12 = uStack_10c;
    if (uStack_10c != uVar4) {
      puVar16 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar16 = puVar3;
      }
      uVar12 = puVar16[(int)uStack_10c >> 5] & local_110;
      iVar11 = (int)uStack_10c >> 5;
      while (uVar12 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_140552bf2;
        uVar12 = puVar16[(longlong)iVar11 + 1];
        local_110 = 0xffffffff;
        iVar11 = iVar11 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar11 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_10c = (uVar15 - iVar11) + 0x1f;
      uVar12 = uStack_10c;
      if ((int)uVar4 < (int)uStack_10c) {
LAB_140552bf2:
        uStack_10c = uVar4;
        uVar12 = uVar4;
      }
    }
    while( true ) {
      if (((uStack_140._4_4_ == uVar12) && (local_148 == puVar3)) &&
         (local_158 == (longlong *)(param_1 + 0x78))) break;
      lVar8 = (longlong)(int)uStack_140._4_4_ * 0x168 + *local_158;
      cVar6 = FUN_140584270(lVar8 + 0x70);
      if (cVar6 != '\0') {
        puVar10 = (undefined8 *)FUN_1405859b0(lVar8 + 0x70);
        _Src_00 = (void *)0x0;
        local_188 = (void *)0x0;
        local_180 = *(int *)(puVar10 + 1);
        lVar13 = (longlong)local_180;
        _Src = (void *)*puVar10;
        if (local_180 == 0) {
          local_17c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_188,local_180,0);
          _Src_00 = local_188;
          _guard_xfg_dispatch_icall_nop(local_188,_Src,lVar13 * 2);
        }
        iVar11 = local_180;
        FUN_1405426e0(param_1,lVar8 + 0xc0);
        *(undefined1 *)(lVar8 + 0xf8) = 1;
        ppvVar14 = (void **)(lVar8 + 0x100);
        if (ppvVar14 != &local_188) {
          *(int *)(lVar8 + 0x108) = iVar11;
          if ((iVar11 == 0) && (*(int *)(lVar8 + 0x10c) == 0)) {
            *(undefined4 *)(lVar8 + 0x10c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar14,iVar11);
            _guard_xfg_dispatch_icall_nop(*ppvVar14,_Src_00,(longlong)iVar11 * 2);
          }
        }
        if (_Src_00 != (void *)0x0) {
          FMemory::Free(_Src_00);
        }
      }
      uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_14c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
    }
  }
  FUN_14056f1b0(local_78);
  return;
}



// FUNCTION 140552d40 FUN_140552d40 body=1212 status=ok
// SIG undefined FUN_140552d40(void)

void FUN_140552d40(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int local_e8;
  uint uStack_e4;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  uint uStack_bc;
  uint *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined1 local_78 [80];
  
  plVar7 = (longlong *)(**(code **)(*param_2 + 0x88))(param_2);
  (**(code **)(*plVar7 + 0x48))(plVar7,local_78);
  uVar8 = (**(code **)(*param_2 + 0x90))(param_2);
  uVar8 = FUN_1405859b0(uVar8);
  FUN_14055ebf0(param_1 + 0x1b8,uVar8);
  lVar9 = FUN_140548950(param_1,param_2);
  if (lVar9 != 0) {
    FUN_14056a280(param_1,lVar9,param_2);
  }
  plVar7 = (longlong *)(**(code **)(*param_2 + 0x88))(param_2);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x28))(plVar7);
  uVar2 = *(uint *)(plVar7 + 5);
  iVar11 = 0;
  uStack_e4 = 1;
  local_e8 = 0;
  puVar1 = (uint *)(plVar7 + 2);
  uStack_d4 = 0;
  iStack_d0 = 0;
  if (uVar2 != 0) {
    puVar13 = (uint *)plVar7[4];
    if ((uint *)plVar7[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar3 = *puVar13;
    iStack_d0 = iVar11;
    local_e8 = iVar11;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_e8;
      iStack_d0 = iStack_d0 + 0x20;
      iVar10 = local_e8 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e8;
      local_e8 = iVar10;
      if (bVar5) goto LAB_140552e83;
      uVar3 = puVar13[lVar9 + 1];
    }
    uStack_e4 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_e4 != 0) {
      for (; uStack_e4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_e4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_d4 = (iStack_d0 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_d4) {
LAB_140552e83:
      uStack_d4 = uVar2;
    }
  }
  uVar3 = *(uint *)(plVar7 + 5);
  uStack_b0 = 0xffffffff;
  uStack_ac = uStack_d4;
  local_a8 = CONCAT44(uStack_cc,iStack_d0);
  uStack_98 = CONCAT44(uStack_e4,local_e8);
  uVar14 = uVar3 & 0xffffffe0;
  iStack_c0 = local_e8;
  uStack_bc = uStack_e4;
  local_b8 = puVar1;
  local_a0 = plVar7;
  puStack_90 = puVar1;
  uStack_80 = local_a8;
  uStack_88 = uStack_b0;
  uStack_84 = uStack_ac;
  uStack_d4 = uVar3;
  if (uVar3 != uVar2) {
    puVar13 = (uint *)plVar7[4];
    if ((uint *)plVar7[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = puVar13[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar10 = (int)uVar3 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_140552f55;
      uVar12 = puVar13[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar10 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_d4 = (uVar14 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_d4) {
LAB_140552f55:
      uStack_d4 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_ac == uStack_d4) && (local_b8 == puVar1)) {
      plVar7 = (longlong *)(param_1 + 0x78);
      uStack_e4 = 1;
      uVar2 = *(uint *)(param_1 + 0xa0);
      puVar1 = (uint *)(param_1 + 0x88);
      local_e8 = 0;
      uStack_d4 = 0;
      iStack_d0 = 0;
      if (uVar2 == 0) goto LAB_140553085;
      puVar13 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar3 = *puVar13;
      iStack_d0 = iVar11;
      local_e8 = iVar11;
      goto joined_r0x00014055302e;
    }
    lVar9 = (longlong)(int)uStack_ac * 0x20 + *plVar7;
    plVar4 = *(longlong **)(lVar9 + 0x10);
    if ((((plVar4 != param_2) && (cVar6 = (**(code **)(*plVar4 + 8))(), cVar6 == '\0')) &&
        (lVar9 = FUN_140548950(param_1,*(undefined8 *)(lVar9 + 0x10)), lVar9 != 0)) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xf8))
                          (*(longlong **)(param_1 + 0x48),lVar9 + 0xb0), cVar6 == '\0')) break;
    uStack_b0 = uStack_b0 & ~uStack_bc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
  }
  goto LAB_1405531d2;
joined_r0x00014055302e:
  if (uVar3 != 0) goto LAB_140553055;
  lVar9 = (longlong)local_e8;
  iStack_d0 = iStack_d0 + 0x20;
  iVar11 = local_e8 + 1;
  bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e8;
  local_e8 = iVar11;
  if (bVar5) goto LAB_140553081;
  uVar3 = puVar13[lVar9 + 1];
  goto joined_r0x00014055302e;
LAB_140553055:
  uStack_e4 = -uVar3 & uVar3;
  iVar11 = 0x1f;
  if (uStack_e4 != 0) {
    for (; uStack_e4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
  if (uStack_e4 == 0) {
    iVar11 = 0x20;
  }
  else {
    iVar11 = 0x1f - iVar11;
  }
  uStack_d4 = (iStack_d0 - iVar11) + 0x1f;
  if ((int)uVar2 < (int)uStack_d4) {
LAB_140553081:
    uStack_d4 = uVar2;
  }
LAB_140553085:
  uVar3 = *(uint *)(param_1 + 0xa0);
  uStack_b0 = 0xffffffff;
  uStack_ac = uStack_d4;
  local_a8 = CONCAT44(uStack_cc,iStack_d0);
  uStack_98 = CONCAT44(uStack_e4,local_e8);
  uVar14 = uVar3 & 0xffffffe0;
  iStack_c0 = local_e8;
  uStack_bc = uStack_e4;
  local_b8 = puVar1;
  local_a0 = plVar7;
  puStack_90 = puVar1;
  uStack_80 = local_a8;
  uStack_88 = uStack_b0;
  uStack_84 = uStack_ac;
  uStack_d4 = uVar3;
  if (uVar3 != uVar2) {
    puVar13 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = puVar13[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar11 = (int)uVar3 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_140553146;
      uVar12 = puVar13[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar11 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_d4 = (uVar14 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_d4) {
LAB_140553146:
      uStack_d4 = uVar2;
    }
  }
  while ((uStack_ac != uStack_d4 || (local_b8 != puVar1))) {
    lVar9 = (longlong)(int)uStack_ac * 0x168 + *plVar7;
    cVar6 = FUN_140584270(lVar9 + 0x70);
    if ((cVar6 != '\0') && (cVar6 = ChannelId::operator==(lVar9 + 0x70,local_78), cVar6 != '\0')) {
      FUN_1405426e0(param_1,lVar9 + 0xc0);
      uVar8 = FUN_1405859b0(local_78);
      *(undefined1 *)(lVar9 + 0xf8) = 1;
      FString::operator=(lVar9 + 0x100,uVar8);
    }
    uStack_b0 = uStack_b0 & ~uStack_bc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
  }
LAB_1405531d2:
  FUN_14056f1b0(local_78);
  return;
}



// FUNCTION 140553200 FUN_140553200 body=211 status=ok
// SIG undefined FUN_140553200(void)

void FUN_140553200(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((param_3 == 200) && (*param_4 != 0)) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    plVar4 = (longlong *)param_4[1];
    lVar5 = *param_4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(lVar5 + 8);
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
  }
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x40,uVar6);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 1405532e0 FUN_1405532e0 body=199 status=ok
// SIG undefined FUN_1405532e0(void)

void FUN_1405532e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*(int *)(*param_2 + 0x20) == 1) {
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(*param_2 + 0x38);
  }
  local_10 = (longlong *)0x0;
  if (param_1 + 0x3d != &local_18) {
    param_1[0x3d] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3e,&local_10);
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
  }
                    /* WARNING: Could not recover jumptable at 0x0001405533a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*param_2 + 0x10,1);
  return;
}



// FUNCTION 1405533b0 FUN_1405533b0 body=84 status=ok
// SIG undefined FUN_1405533b0(void)

void FUN_1405533b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x30) == 1) {
    FUN_14055e970(param_1 + 0xb,lVar1 + 0x10);
    lVar1 = *param_2;
  }
  (**(code **)(*param_1 + 0x50))(param_1,lVar1 + 0x10,*(undefined4 *)(lVar1 + 0x30));
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
            (param_1 + 0x15,param_2);
  return;
}



// FUNCTION 140553410 FUN_140553410 body=554 status=ok
// SIG undefined FUN_140553410(void)

void FUN_140553410(longlong param_1,longlong *param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong local_res8;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((param_3 == 200) && (lVar3 = *param_4, lVar3 != 0)) {
    plVar4 = (longlong *)param_4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar3 + 0x10) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar3 + 8);
    }
    cVar6 = FDateTime::ParseIso8601(puVar8,&local_50);
    if (cVar6 != '\0') {
      FDateTime::UtcNow(&local_res8);
      plVar5 = *(longlong **)(*param_2 + 0x78);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0xa8))(plVar5,&local_38);
        if (local_38 != (longlong *)0x0) {
          local_48[1] = 5;
          local_48[0] = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
          FGenericPlatformString::Memcpy(local_48[0],L"Date",10);
          uVar7 = (**(code **)(*local_38 + 0x10))(local_38,local_28,local_48);
          cVar6 = FDateTime::ParseHttpDate(uVar7,&local_58);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (cVar6 != '\0') {
            local_res8 = local_58;
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_30 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x40) = 1;
      *(float *)(param_1 + 0x44) = (float)((double)(local_50 - local_res8) * 1e-07);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x58,uVar7);
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
  return;
}



// FUNCTION 140553640 FUN_140553640 body=118 status=ok
// SIG undefined FUN_140553640(void)

void FUN_140553640(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*param_2 + 0x40);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar5);
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
  return;
}



// FUNCTION 1405536c0 FUN_1405536c0 body=150 status=ok
// SIG undefined FUN_1405536c0(void)

void FUN_1405536c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*param_2 + 0x40);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x38) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x30);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 140553760 FUN_140553760 body=112 status=ok
// SIG undefined FUN_140553760(void)

void FUN_140553760(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*param_2 + 0x40);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar5);
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
  return;
}



// FUNCTION 1405537d0 FUN_1405537d0 body=281 status=ok
// SIG undefined FUN_1405537d0(void)

void FUN_1405537d0(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((param_3 == 0xc9) && (lVar4 = *param_4, lVar4 != 0)) {
    plVar5 = (longlong *)param_4[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::operator=(param_1 + 0x60,lVar4 + 0x18);
    FString::operator=(param_1 + 0x70,lVar4 + 8);
    *(undefined4 *)(param_1 + 0x58) = 1;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_142b58170(*(longlong *)(param_1 + 0x80),param_1 + 0x60);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar6);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return;
}



// FUNCTION 1405538f0 FUN_1405538f0 body=142 status=ok
// SIG undefined FUN_1405538f0(void)

void FUN_1405538f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((param_3 - 0xcaU & 0xfffffffd) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else if (param_3 == 0x194) {
    *(undefined4 *)(param_1 + 0x60) = 8;
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x78,uVar5);
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
  return;
}



// FUNCTION 140553980 FUN_140553980 body=312 status=ok
// SIG undefined FUN_140553980(void)

void FUN_140553980(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*param_2 + 0x60) == 1) {
    iVar3 = *(int *)(param_1 + 0x88);
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar6 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_38,(longlong)iVar3 * 0x10 + lVar4);
    if (local_38 == 0) {
      *(undefined4 *)(param_1 + 0x8c) = 2;
      uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar7);
      plVar5 = local_30;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar5 = local_30;
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            plVar5 = local_30;
          }
        }
      }
    }
    else {
      FUN_142b58170(local_38,param_1 + 0x58);
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      FUN_14053cfc0(param_1);
      plVar5 = local_30;
    }
  }
  else {
    *(int *)(param_1 + 0x8c) = *(int *)(*param_2 + 0x60);
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar7);
    plVar5 = local_10;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  return;
}



// FUNCTION 140553ac0 FUN_140553ac0 body=294 status=ok
// SIG undefined FUN_140553ac0(void)

void FUN_140553ac0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*param_2 + 0x60) == 1) {
    iVar3 = *(int *)(param_1 + 0x58);
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar6 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_38,(longlong)iVar3 * 0x10 + lVar4);
    if (local_38 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 2;
      uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar7);
      plVar5 = local_30;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar5 = local_30;
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            plVar5 = local_30;
          }
        }
      }
    }
    else {
      FUN_142b58170(local_38,param_1 + 0x28);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      FUN_14053d700(param_1);
      plVar5 = local_30;
    }
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(*param_2 + 0x60);
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar7);
    plVar5 = local_10;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  return;
}



// FUNCTION 140553bf0 FUN_140553bf0 body=236 status=ok
// SIG undefined FUN_140553bf0(void)

void FUN_140553bf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  iVar3 = *(int *)(*param_2 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 == 1) {
    lVar4 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_28,param_1 + 0x20);
    if (local_28 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 2;
    }
    else {
      FUN_142b58170(local_28,param_1 + 0x30);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar5);
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
  return;
}



// FUNCTION 140553ce0 FUN_140553ce0 body=150 status=ok
// SIG undefined FUN_140553ce0(void)

void FUN_140553ce0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*param_2 + 0x60);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x38) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x30);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 140553d80 FUN_140553d80 body=188 status=ok
// SIG undefined FUN_140553d80(void)

void FUN_140553d80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*param_2 + 0x58);
  if (*(int *)(*param_2 + 0x58) == 1) {
    FString::operator=(param_1 + 0x58,*param_2 + 0x60);
    FString::operator=(param_1 + 0x68,*param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x88) = 1;
    FUN_14053cfc0(param_1);
    return;
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar5);
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
  return;
}



// FUNCTION 140553e40 FUN_140553e40 body=20 status=ok
// SIG undefined FUN_140553e40(void)

void FUN_140553e40(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_140546e20();
  }
  return;
}



// FUNCTION 140553e60 FUN_140553e60 body=987 status=ok
// SIG undefined FUN_140553e60(void)

void FUN_140553e60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res18 [8];
  longlong local_48 [2];
  
  lVar10 = *param_2;
  if (*(int *)(lVar10 + 0x8c) == 1) {
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x288)) {
      lVar9 = 0;
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x280) + 0xb8);
      do {
        if (*plVar8 == *(longlong *)(lVar10 + 0x20)) {
          lVar9 = (longlong)iVar13 * 0x118 + *(longlong *)(param_1 + 0x280);
          if (lVar9 != 0) {
            plVar8 = *(longlong **)(lVar9 + 0xa8);
            lVar12 = *(longlong *)(lVar9 + 0xa0);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            FString::operator=(lVar12 + 0x50,lVar10 + 0x58);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar8 + 1;
              lVar10 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            plVar8 = *(longlong **)(lVar9 + 0xa8);
            lVar10 = *param_2;
            lVar12 = *(longlong *)(lVar9 + 0xa0);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                      (lVar12 + 8,lVar10 + 0x10);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar8 + 1;
              lVar10 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            lVar10 = *param_2;
            if (1 < *(int *)(lVar10 + 0x70)) {
              puVar6 = (undefined8 *)FName::FName(local_res18,L"FRIENDPASSCODE",1);
              FUN_1404ab4c0(lVar9 + 0x28,*puVar6,lVar10 + 0x68,0);
              lVar10 = *param_2;
            }
            lVar10 = *(longlong *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              plVar8 = *(longlong **)(lVar9 + 0xa8);
              lVar12 = *(longlong *)(lVar9 + 0xa0);
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
              }
              fVar3 = *(float *)(lVar10 + 0x44);
              if (5.0 < fVar3) {
                *(float *)(lVar12 + 0x38) = fVar3 - 5.0;
              }
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar8 + 1;
                lVar10 = *plVar5;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
            }
            if (*(char *)(lVar9 + 0x3e) != '\0') {
              lVar10 = *(longlong *)(*param_2 + 0x10);
              lVar12 = (longlong)*(int *)(*param_2 + 0x18) * 0x10 + lVar10;
              for (; lVar10 != lVar12; lVar10 = lVar10 + 0x10) {
                lVar4 = *param_2;
                uVar7 = FUN_14054be90(param_1,local_48,lVar9 + 0x28);
                FUN_140560760(param_1,lVar10,lVar4 + 0x58,uVar7);
                if (local_48[0] != 0) {
                  FMemory::Free();
                }
              }
            }
          }
          break;
        }
        iVar13 = iVar13 + 1;
        lVar9 = lVar9 + 1;
        plVar8 = plVar8 + 0x23;
      } while (lVar9 < *(int *)(param_1 + 0x288));
    }
  }
  lVar10 = *param_2;
  FUN_14054ab90(param_1,lVar10 + 0x10,*(undefined8 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x8c))
  ;
  lVar10 = (longlong)*(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) != 0) {
    iVar14 = 0;
    bVar16 = **(longlong **)(param_1 + 0x358) != *param_2;
    lVar9 = 0;
    iVar13 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar15 = iVar13 + 1;
      if (lVar9 < lVar10) {
        plVar8 = (longlong *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0x358));
        do {
          if (bVar16 != (*plVar8 != *param_2)) break;
          iVar15 = iVar15 + 1;
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 2;
        } while (lVar9 < lVar10);
      }
      iVar11 = iVar15 - iVar13;
      if (bVar16 == false) {
        if (iVar11 != 0) {
          plVar8 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *(longlong *)(param_1 + 0x358));
          do {
            plVar5 = (longlong *)*plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar12 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar8 = plVar8 + 2;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        if (iVar14 != iVar13) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar14 * 0x10 + *(longlong *)(param_1 + 0x358)),
                     (void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x358)),
                     (longlong)iVar11 << 4);
        }
        iVar14 = iVar14 + iVar11;
      }
      bVar16 = (bool)(bVar16 ^ 1);
      iVar13 = iVar15;
    } while (lVar9 < lVar10);
    *(int *)(param_1 + 0x360) = iVar14;
  }
  return;
}



// FUNCTION 140554240 FUN_140554240 body=119 status=ok
// SIG undefined FUN_140554240(void)

void FUN_140554240(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_3 == 0xcc) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x48,uVar5);
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
  return;
}



// FUNCTION 1405542e0 FUN_1405542e0 body=112 status=ok
// SIG undefined FUN_1405542e0(void)

void FUN_1405542e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*param_2 + 0x30);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar5);
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
  return;
}



// FUNCTION 140554350 FUN_140554350 body=20 status=ok
// SIG undefined FUN_140554350(void)

void FUN_140554350(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_1405526b0();
  }
  return;
}



// FUNCTION 140554370 FUN_140554370 body=758 status=ok
// SIG undefined FUN_140554370(void)

void FUN_140554370(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  lVar6 = *param_2;
  uVar12 = 0;
  if (0 < *(int *)(param_1 + 0x288)) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x280) + 0xb8);
    uVar9 = uVar12;
    uVar10 = uVar12;
    do {
      if (*plVar5 == *(longlong *)(lVar6 + 0x20)) {
        lVar8 = (longlong)(int)uVar10 * 0x118 + *(longlong *)(param_1 + 0x280);
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x3e) != '\0')) {
          lVar8 = *(longlong *)(lVar6 + 0x10);
          lVar6 = (longlong)*(int *)(lVar6 + 0x18) * 0x10 + lVar8;
          for (; lVar8 != lVar6; lVar8 = lVar8 + 0x10) {
            local_68 = 0;
            local_60 = 0;
            local_78 = 0;
            local_70 = 0;
            lVar4 = FUN_142b45e90();
            FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_58,lVar8);
            if (local_58 != 0) {
              FUN_1405466e0(local_48,&local_78,&local_68);
              FUN_142b6ad50(local_58,local_48);
              if (local_48[0] != 0) {
                FMemory::Free();
              }
            }
            plVar5 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_50 + 1;
              lVar4 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_68 != 0) {
              FMemory::Free();
            }
          }
        }
        break;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar9 = uVar9 + 1;
      plVar5 = plVar5 + 0x23;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x288));
  }
  FUN_14054adc0(param_1,*(undefined8 *)(*param_2 + 0x20),*(undefined4 *)(*param_2 + 0x5c));
  lVar6 = (longlong)*(int *)(param_1 + 0x390);
  if (*(int *)(param_1 + 0x390) != 0) {
    bVar14 = **(longlong **)(param_1 + 0x388) != *param_2;
    lVar8 = 0;
    uVar9 = uVar12;
    do {
      iVar13 = (int)uVar9;
      lVar8 = lVar8 + 1;
      uVar9 = (ulonglong)(iVar13 + 1);
      if (lVar8 < lVar6) {
        plVar5 = (longlong *)(lVar8 * 0x10 + *(longlong *)(param_1 + 0x388));
        do {
          if (bVar14 != (*plVar5 != *param_2)) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar8 = lVar8 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar8 < lVar6);
      }
      iVar7 = (int)uVar9 - iVar13;
      if (bVar14 == false) {
        if (iVar7 != 0) {
          plVar5 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *(longlong *)(param_1 + 0x388));
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        iVar11 = (int)uVar12;
        if (iVar11 != iVar13) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x388)),
                     (void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x388)),
                     (longlong)iVar7 << 4);
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar7);
      }
      bVar14 = (bool)(bVar14 ^ 1);
    } while (lVar8 < lVar6);
    *(int *)(param_1 + 0x390) = (int)uVar12;
  }
  return;
}



// FUNCTION 140554670 FUN_140554670 body=29 status=ok
// SIG undefined FUN_140554670(void)

void FUN_140554670(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b45e90();
  TBaseMulticastDelegate<void>::Broadcast(*(longlong *)(lVar1 + 0x18) + 0x160);
  return;
}



// FUNCTION 140554690 FUN_140554690 body=731 status=ok
// SIG undefined FUN_140554690(void)

void FUN_140554690(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *pvVar12;
  int *piVar13;
  void *pvVar14;
  longlong local_88;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  if ((param_3 == 200) && (lVar3 = *param_4, lVar3 != 0)) {
    plVar4 = (longlong *)param_4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_88 = *(longlong *)(lVar3 + 8);
    lVar8 = (longlong)*(int *)(lVar3 + 0x10) * 0x38 + local_88;
    if (local_88 != lVar8) {
      piVar13 = (int *)(local_88 + 0x30);
      do {
        local_48 = piVar13[-8];
        lVar11 = (longlong)local_48;
        pvVar12 = (void *)0x0;
        pvVar5 = *(void **)(piVar13 + -10);
        local_50 = (void *)0x0;
        if (local_48 == 0) {
          local_44 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
          pvVar12 = local_50;
          _guard_xfg_dispatch_icall_nop(local_50,pvVar5,lVar11 * 2);
        }
        local_38 = *piVar13;
        lVar11 = (longlong)local_38;
        pvVar14 = (void *)0x0;
        pvVar5 = *(void **)(piVar13 + -2);
        local_40 = (void *)0x0;
        if (local_38 == 0) {
          local_34 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_38,0);
          pvVar14 = local_40;
          _guard_xfg_dispatch_icall_nop(local_40,pvVar5,lVar11 * 2);
          pvVar12 = local_50;
        }
        uVar7 = local_34;
        iVar6 = local_38;
        iVar2 = *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iVar2 + 1;
        if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow((longlong *)(param_1 + 0x50),iVar2);
        }
        piVar13 = piVar13 + 0xe;
        puVar10 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
        *puVar10 = pvVar12;
        *(int *)(puVar10 + 1) = local_48;
        *(undefined4 *)((longlong)puVar10 + 0xc) = local_44;
        puVar10[2] = pvVar14;
        *(int *)(puVar10 + 3) = iVar6;
        *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar7;
        local_88 = local_88 + 0x38;
      } while (local_88 != lVar8);
    }
    if ((*(int *)(lVar3 + 0x10) < 1) ||
       ((longlong)*(int *)(lVar3 + 0x10) != *(longlong *)(lVar3 + 0x18))) {
      *(undefined4 *)(param_1 + 0x48) = 1;
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_70);
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar9);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar13 = (int *)((longlong)local_68 + 0xc);
          iVar2 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      FUN_14054c6f0(param_1);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar13 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  else {
    uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_60);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar9);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar13 = (int *)((longlong)local_58 + 0xc);
        iVar2 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140554970 FUN_140554970 body=1759 status=ok
// SIG undefined FUN_140554970(void)

void FUN_140554970(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  undefined2 *puVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  short *psVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined4 local_res10 [2];
  longlong local_res18;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined2 *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8 [10];
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  bVar5 = false;
  local_res10[0] = 0;
  if (*(int *)(*param_2 + 0x48) == 1) {
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    if (0 < *(int *)(*param_2 + 0x58)) {
      lVar10 = FUN_142b45e90();
      plVar11 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar10 + 0x18),local_68,param_1 + 0x10);
      if (&local_128 != plVar11) {
        local_128 = *plVar11;
        *plVar11 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_120,plVar11 + 1);
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_60 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    lVar10 = *(longlong *)(*param_2 + 0x50);
    local_res18 = (longlong)*(int *)(*param_2 + 0x58) * 0x20 + lVar10;
    if (lVar10 != local_res18) {
      do {
        local_100 = 7;
        local_108 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        puVar7 = local_108;
        FGenericPlatformString::Memcpy(local_108,L"friend",0xe);
        puVar16 = &DAT_143f3eda8;
        if ((int)local_100 != 0) {
          puVar16 = puVar7;
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
          psVar12 = &DAT_143f3eda8;
        }
        else {
          psVar12 = *(short **)(lVar10 + 0x10);
        }
        lVar15 = (longlong)puVar16 - (longlong)psVar12;
        do {
          sVar3 = *psVar12;
          sVar4 = *(short *)((longlong)psVar12 + lVar15);
          if (sVar3 != sVar4) break;
          psVar12 = psVar12 + 1;
        } while (sVar4 != 0);
        if (puVar7 != (undefined2 *)0x0) {
          FMemory::Free(puVar7);
        }
        if (sVar3 == sVar4) {
          local_res10[0] = 1;
        }
        else {
          local_f0 = 9;
          local_f8 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          puVar7 = local_f8;
          FGenericPlatformString::Memcpy(local_f8,L"blocking",0x12);
          puVar16 = &DAT_143f3eda8;
          if ((int)local_f0 != 0) {
            puVar16 = puVar7;
          }
          if (*(int *)(lVar10 + 0x18) == 0) {
            psVar12 = &DAT_143f3eda8;
          }
          else {
            psVar12 = *(short **)(lVar10 + 0x10);
          }
          lVar15 = (longlong)puVar16 - (longlong)psVar12;
          do {
            sVar3 = *psVar12;
            sVar4 = *(short *)((longlong)psVar12 + lVar15);
            if (sVar3 != sVar4) break;
            psVar12 = psVar12 + 1;
          } while (sVar4 != 0);
          if (sVar3 == sVar4) {
LAB_140554be1:
            bVar6 = true;
          }
          else {
            local_118 = (undefined2 *)0x0;
            local_110 = 8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
            FGenericPlatformString::Memcpy(local_118,L"blocked",0x10);
            bVar5 = true;
            puVar16 = &DAT_143f3eda8;
            if ((int)local_110 != 0) {
              puVar16 = local_118;
            }
            if (*(int *)(lVar10 + 0x18) == 0) {
              psVar12 = &DAT_143f3eda8;
            }
            else {
              psVar12 = *(short **)(lVar10 + 0x10);
            }
            lVar15 = (longlong)puVar16 - (longlong)psVar12;
            do {
              sVar3 = *psVar12;
              sVar4 = *(short *)((longlong)psVar12 + lVar15);
              if (sVar3 != sVar4) break;
              psVar12 = psVar12 + 1;
            } while (sVar4 != 0);
            if (sVar3 == sVar4) goto LAB_140554be1;
            bVar6 = false;
          }
          if ((bVar5) && (bVar5 = false, local_118 != (undefined2 *)0x0)) {
            FMemory::Free(local_118);
          }
          if (puVar7 != (undefined2 *)0x0) {
            FMemory::Free(puVar7);
          }
          if (bVar6) {
            local_res10[0] = 4;
          }
          else {
            local_e0 = 8;
            local_e8 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            puVar7 = local_e8;
            FGenericPlatformString::Memcpy(local_e8,L"pending",0x10);
            puVar16 = &DAT_143f3eda8;
            if ((int)local_e0 != 0) {
              puVar16 = puVar7;
            }
            if (*(int *)(lVar10 + 0x18) == 0) {
              psVar12 = &DAT_143f3eda8;
            }
            else {
              psVar12 = *(short **)(lVar10 + 0x10);
            }
            lVar15 = (longlong)puVar16 - (longlong)psVar12;
            do {
              sVar3 = *psVar12;
              sVar4 = *(short *)((longlong)psVar12 + lVar15);
              if (sVar3 != sVar4) break;
              psVar12 = psVar12 + 1;
            } while (sVar4 != 0);
            if (puVar7 != (undefined2 *)0x0) {
              FMemory::Free(puVar7);
            }
            if (sVar3 == sVar4) {
              local_res10[0] = 3;
            }
            else {
              local_d8 = (undefined2 *)0x0;
              local_d0 = 5;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
              puVar7 = local_d8;
              FGenericPlatformString::Memcpy(local_d8,L"sent",10);
              puVar16 = &DAT_143f3eda8;
              if ((int)local_d0 != 0) {
                puVar16 = puVar7;
              }
              if (*(int *)(lVar10 + 0x18) == 0) {
                psVar12 = &DAT_143f3eda8;
              }
              else {
                psVar12 = *(short **)(lVar10 + 0x10);
              }
              lVar15 = (longlong)puVar16 - (longlong)psVar12;
              do {
                sVar3 = *psVar12;
                sVar4 = *(short *)((longlong)psVar12 + lVar15);
                if (sVar3 != sVar4) break;
                psVar12 = psVar12 + 1;
              } while (sVar4 != 0);
              if (puVar7 != (undefined2 *)0x0) {
                FMemory::Free(puVar7);
              }
              local_res10[0] = 0;
              if (sVar3 == sVar4) {
                local_res10[0] = 2;
              }
            }
          }
        }
        plVar11 = (longlong *)0x0;
        plVar13 = (longlong *)operator_new(0x40);
        if (plVar13 != (longlong *)0x0) {
          *(undefined4 *)(plVar13 + 1) = 1;
          *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
          *plVar13 = (longlong)&PTR_FUN_143f77e88;
          FUniqueNetIdNull::FUniqueNetIdNull(plVar13 + 2,lVar10);
          plVar11 = plVar13;
        }
        local_78 = plVar11 + 2;
        local_70 = plVar11;
        FUN_14044f790(&local_78);
        local_130 = (longlong *)FUN_140533e40(&local_78,local_res10);
        local_138 = local_130 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_138,local_138,local_138);
        if (local_128 != 0) {
          local_c8[0] = 0;
          local_c8[1] = 0;
          local_c8[2] = 0;
          local_c8[3] = 0;
          local_c8[4] = 0;
          local_c8[5] = 0;
          local_c8[6] = 0;
          local_c8[7] = 0;
          local_c8[8] = 0;
          local_c8[9] = 0;
          cVar8 = FUN_142b4b7a0(local_128,lVar10,local_c8);
          if (cVar8 != '\0') {
            FUN_1405615e0(local_138);
          }
          if (local_c8[8] != 0) {
            FMemory::Free();
          }
          if (local_c8[6] != 0) {
            FMemory::Free();
          }
          if (local_c8[4] != 0) {
            FMemory::Free();
          }
          if (local_c8[2] != 0) {
            FMemory::Free();
          }
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
        }
        iVar2 = *(int *)(param_1 + 0xb0);
        iVar9 = iVar2 + 1;
        *(int *)(param_1 + 0xb0) = iVar9;
        if (*(int *)(param_1 + 0xb4) < iVar9) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xa8));
        }
        plVar13 = local_130;
        plVar17 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
        *plVar17 = (longlong)local_138;
        plVar17[1] = (longlong)local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_130 + 1;
            lVar15 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          lVar15 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        lVar10 = lVar10 + 0x20;
      } while (lVar10 != local_res18);
    }
    if (*(int *)(param_1 + 0xb0) < 1) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      uVar14 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xd8,uVar14);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_50 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    else {
      FUN_14055a8f0();
    }
    plVar11 = plStack_120;
    if (plStack_120 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar13 = plStack_120 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) {
      return;
    }
    (**(code **)*plStack_120)(plStack_120);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    lVar10 = *plStack_120;
    local_40 = plStack_120;
  }
  else {
    uVar14 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xd8,uVar14);
    if (local_40 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar11 = local_40 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) {
      return;
    }
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    lVar10 = *local_40;
  }
  (**(code **)(lVar10 + 8))(local_40,1);
  return;
}



// FUNCTION 140555050 FUN_140555050 body=428 status=ok
// SIG undefined FUN_140555050(void)

void FUN_140555050(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  lVar8 = *param_2;
  (**(code **)(*param_1 + 0x1a0))
            (param_1,*(undefined4 *)(lVar8 + 0x40),lVar8 + 0x10,lVar8 + 0x20,lVar8 + 0x48);
  lVar8 = (longlong)(int)param_1[0x7c];
  if ((int)param_1[0x7c] != 0) {
    iVar9 = 0;
    bVar12 = *(longlong *)param_1[0x7b] != *param_2;
    lVar7 = 0;
    iVar10 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar11 = iVar10 + 1;
      if (lVar7 < lVar8) {
        plVar5 = (longlong *)(lVar7 * 0x10 + param_1[0x7b]);
        do {
          if (bVar12 != (*plVar5 != *param_2)) break;
          iVar11 = iVar11 + 1;
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar7 < lVar8);
      }
      iVar6 = iVar11 - iVar10;
      if (bVar12 == false) {
        if (iVar6 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + param_1[0x7b]);
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar9 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + param_1[0x7b]),
                     (void *)((longlong)iVar10 * 0x10 + param_1[0x7b]),(longlong)iVar6 << 4);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar11;
    } while (lVar7 < lVar8);
    *(int *)(param_1 + 0x7c) = iVar9;
  }
  return;
}



// FUNCTION 140555200 FUN_140555200 body=259 status=ok
// SIG undefined FUN_140555200(void)

void FUN_140555200(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*param_2 + 0x40);
  lVar5 = *param_2;
  FUN_1404c0750(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar5 + 0x100);
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x30) != &local_28) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_20);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x108,uVar6);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140555310 FUN_140555310 body=409 status=ok
// SIG undefined FUN_140555310(void)

void FUN_140555310(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  lVar8 = *param_2;
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined4 *)(lVar8 + 0x40),lVar8 + 0x20,lVar8 + 0x48);
  lVar8 = (longlong)(int)param_1[0x7a];
  if ((int)param_1[0x7a] != 0) {
    iVar9 = 0;
    bVar12 = *(longlong *)param_1[0x79] != *param_2;
    lVar7 = 0;
    iVar10 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar11 = iVar10 + 1;
      if (lVar7 < lVar8) {
        plVar5 = (longlong *)(lVar7 * 0x10 + param_1[0x79]);
        do {
          if (bVar12 != (*plVar5 != *param_2)) break;
          iVar11 = iVar11 + 1;
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar7 < lVar8);
      }
      iVar6 = iVar11 - iVar10;
      if (bVar12 == false) {
        if (iVar6 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + param_1[0x79]);
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar9 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + param_1[0x79]),
                     (void *)((longlong)iVar10 * 0x10 + param_1[0x79]),(longlong)iVar6 << 4);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar11;
    } while (lVar7 < lVar8);
    *(int *)(param_1 + 0x7a) = iVar9;
  }
  return;
}



// FUNCTION 1405554b0 FUN_1405554b0 body=320 status=ok
// SIG undefined FUN_1405554b0(void)

void FUN_1405554b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*param_2 + 0x40);
  lVar4 = *param_2;
  FUN_1404c0750(param_1 + 0x48,lVar4 + 0x48);
  plVar8 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar4 + 0x100);
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x30) != &local_28) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  if ((*(int *)(param_1 + 0x110) != 0) && (*(longlong **)(param_1 + 0x108) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0x110) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x108);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,uVar7);
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return;
}



// FUNCTION 1405555f0 FUN_1405555f0 body=308 status=ok
// SIG undefined FUN_1405555f0(void)

void FUN_1405555f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = (longlong *)0x0;
  plVar6 = param_1 + 0x52;
  *(uint *)(*plVar6 + 0x18) = (*(int *)(*param_2 + 100) != 1) + 2;
  if (plVar6 != &local_38) {
    *plVar6 = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x53,&local_30);
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  uVar4 = *(undefined4 *)(*param_2 + 100);
  if (param_1 + 0x77 != &local_28) {
    param_1[0x77] = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_20);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014055571d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,uVar4);
  return;
}



// FUNCTION 140555730 FUN_140555730 body=323 status=ok
// SIG undefined FUN_140555730(void)

void FUN_140555730(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_3 == 200) {
    lVar5 = *param_4;
    if (lVar5 != 0) {
      local_20 = (longlong *)param_4[1];
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      local_28 = lVar5;
      if ((longlong *)(param_1 + 0x38) != &local_28) {
        *(longlong *)(param_1 + 0x38) = lVar5;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_20);
      }
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else if (param_3 == 0x194) {
    *(undefined4 *)(param_1 + 0x30) = 8;
    goto LAB_140555817;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_140549190(param_1);
    return;
  }
LAB_140555817:
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar6);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140555880 FUN_140555880 body=568 status=ok
// SIG undefined FUN_140555880(void)

void FUN_140555880(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  void *_Dst;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar8 = (longlong *)0x0;
  iVar2 = *(int *)(*param_2 + 0x30);
  *(int *)(param_1 + 0x40) = iVar2;
  if (iVar2 == 1) {
    _Dst = (void *)operator_new(0x60);
    plVar5 = plVar8;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
      plVar5 = (longlong *)FUN_1405357c0(_Dst);
    }
    plVar6 = (longlong *)operator_new(0x18);
    plStack_20 = plVar8;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2d0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar5;
      plStack_20 = plVar6;
    }
    local_28 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_28,plVar5,plVar5);
    FString::operator=(local_28 + 10,param_1 + 0x20);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    if ((longlong **)(param_1 + 0xe8) != &local_38) {
      *(longlong **)(param_1 + 0xe8) = local_28;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf0,&plStack_30);
    }
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_30 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    FUN_140559a10(*param_2 + 0x38,*param_2 + 0x58,param_1 + 0x48,param_1 + 0x10);
    plVar5 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  if (((*(int *)(param_1 + 0x110) != 0) && (*(longlong **)(param_1 + 0x108) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x110) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x108);
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,uVar7);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return;
}



// FUNCTION 140555ac0 FUN_140555ac0 body=854 status=ok
// SIG undefined FUN_140555ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140555ac0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  void *_Dst;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined4 local_118 [2];
  longlong local_110;
  longlong *local_108;
  undefined **local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar9 = (longlong *)0x0;
  local_118[0] = 0;
  iVar7 = *(int *)(*param_2 + 0x30);
  if (iVar7 == 8) {
    iVar7 = *(int *)(param_1 + 100);
  }
  else {
    *(int *)(param_1 + 100) = iVar7;
  }
  if ((iVar7 != 1) || (*(int *)(*param_2 + 0x30) == 8)) goto LAB_140555df0;
  local_f8 = &PTR_FUN_143f769a8;
  local_f0 = 0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = &PTR_FUN_143f769a0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 9999;
  _Dst = (void *)operator_new(0x60);
  plVar4 = plVar9;
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    plVar4 = (longlong *)FUN_1405357c0(_Dst);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plStack_120 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar4;
    plStack_120 = plVar5;
  }
  local_128 = plVar4;
  SharedPointerInternals::EnableSharedFromThis(&local_128,plVar4,plVar4);
  FString::operator=(local_128 + 10,
                     (longlong)*(int *)(param_1 + 0x60) * 0x10 + *(longlong *)(param_1 + 0x40));
  plStack_130 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
    UNLOCK();
  }
  local_58 = local_128;
  local_138 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&plStack_130);
  plVar4 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_130 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_130 + 8))(plStack_130,1);
      }
    }
  }
  FUN_140559a10(*param_2 + 0x38,*param_2 + 0x58,&local_f8,param_1 + 0x10);
  if (local_f0 == 0) {
LAB_140555d1d:
    bVar2 = false;
  }
  else {
    uVar6 = FName::FName(local_118,L"SPARK",1);
    plVar4 = (longlong *)FUN_1404b0000(uVar6);
    local_110 = local_f0;
    local_108 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)0x1;
    cVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4,&local_110);
    if (cVar3 != '\0') goto LAB_140555d1d;
    bVar2 = true;
  }
  plVar4 = local_108;
  if ((plVar9 != (longlong *)0x0) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_108 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_108)(local_108);
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
  if (bVar2) {
    lVar8 = *(longlong *)(param_1 + 0x20);
    iVar7 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x10) = iVar7 + 1;
    if (*(int *)(lVar8 + 0x14) < iVar7 + 1) {
      FUN_1404852a0(lVar8 + 8,iVar7);
    }
    lVar8 = (longlong)iVar7 * 0xc0 + *(longlong *)(lVar8 + 8);
    FUN_140535720(lVar8,&local_f8);
    *(undefined4 *)(lVar8 + 0xb8) = local_40;
  }
  plVar9 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_120 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_1404bf650(&local_f8);
LAB_140555df0:
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  FUN_14054c470(param_1);
  return;
}



// FUNCTION 140555e20 FUN_140555e20 body=701 status=ok
// SIG undefined FUN_140555e20(void)

void FUN_140555e20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  longlong local_48 [2];
  
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x5c) == 1) {
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x288)) {
      lVar7 = 0;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x280) + 0xb8);
      do {
        if (*plVar6 == *(longlong *)(lVar8 + 0x20)) {
          lVar7 = (longlong)iVar11 * 0x118 + *(longlong *)(param_1 + 0x280);
          if (lVar7 != 0) {
            plVar6 = *(longlong **)(lVar7 + 0xa8);
            lVar10 = *(longlong *)(lVar7 + 0xa0);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                      (lVar10 + 8,lVar8 + 0x10);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar6 + 1;
              lVar8 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            if (*(char *)(lVar7 + 0x3e) != '\0') {
              lVar8 = *(longlong *)(*param_2 + 0x10);
              lVar10 = (longlong)*(int *)(*param_2 + 0x18) * 0x10 + lVar8;
              for (; lVar8 != lVar10; lVar8 = lVar8 + 0x10) {
                lVar3 = *param_2;
                uVar5 = FUN_14054be90(param_1,local_48,lVar7 + 0x28);
                FUN_140560760(param_1,lVar8,lVar3 + 0x28,uVar5);
                if (local_48[0] != 0) {
                  FMemory::Free();
                }
              }
            }
          }
          break;
        }
        iVar11 = iVar11 + 1;
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 0x23;
      } while (lVar7 < *(int *)(param_1 + 0x288));
    }
  }
  lVar8 = *param_2;
  FUN_14054aea0(param_1,lVar8 + 0x10,*(undefined8 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x5c));
  lVar8 = (longlong)*(int *)(param_1 + 0x370);
  if (*(int *)(param_1 + 0x370) != 0) {
    iVar12 = 0;
    bVar14 = **(longlong **)(param_1 + 0x368) != *param_2;
    lVar7 = 0;
    iVar11 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar13 = iVar11 + 1;
      if (lVar7 < lVar8) {
        plVar6 = (longlong *)(lVar7 * 0x10 + *(longlong *)(param_1 + 0x368));
        do {
          if (bVar14 != (*plVar6 != *param_2)) break;
          iVar13 = iVar13 + 1;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 2;
        } while (lVar7 < lVar8);
      }
      iVar9 = iVar13 - iVar11;
      if (bVar14 == false) {
        if (iVar9 != 0) {
          plVar6 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *(longlong *)(param_1 + 0x368));
          do {
            plVar4 = (longlong *)*plVar6;
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
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            plVar6 = plVar6 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        if (iVar12 != iVar11) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0x368)),
                     (void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x368)),
                     (longlong)iVar9 << 4);
        }
        iVar12 = iVar12 + iVar9;
      }
      bVar14 = (bool)(bVar14 ^ 1);
      iVar11 = iVar13;
    } while (lVar7 < lVar8);
    *(int *)(param_1 + 0x370) = iVar12;
  }
  return;
}



// FUNCTION 1405560e0 FUN_1405560e0 body=199 status=ok
// SIG undefined FUN_1405560e0(void)

void FUN_1405560e0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_1405693c0();
  plVar2 = param_1 + 0x52;
  plVar5 = (longlong *)*plVar2;
  if (plVar5 != (longlong *)0x0) {
    if (0 < (int)plVar5[2]) {
      (**(code **)(*plVar5 + 8))();
      plVar5 = (longlong *)*plVar2;
    }
    *(undefined4 *)(plVar5 + 3) = 2;
    local_10 = (longlong *)0x0;
    if (plVar2 != &local_18) {
      *plVar2 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x53,&local_10);
      plVar2 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001405561a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,1);
  return;
}



// FUNCTION 1405561b0 FUN_1405561b0 body=1412 status=ok
// SIG undefined FUN_1405561b0(void)

void FUN_1405561b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong **pplVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  bool bVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60 [2];
  longlong local_50 [3];
  
  lVar16 = *(longlong *)(param_1 + 0x280);
  puVar14 = &DAT_143f3eda8;
  bVar15 = false;
  bVar4 = false;
  lVar18 = (longlong)*(int *)(param_1 + 0x288) * 0x118 + lVar16;
  for (; lVar16 != lVar18; lVar16 = lVar16 + 0x118) {
    plVar13 = *(longlong **)(lVar16 + 0xa0);
    if (plVar13 == (longlong *)0x0) {
LAB_140556245:
      bVar3 = false;
    }
    else {
      bVar15 = true;
      puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x38))(plVar13,local_50);
      if (*(int *)(param_4 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*param_4;
      }
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
      if (iVar5 != 0) goto LAB_140556245;
      bVar3 = true;
    }
    if ((bVar15) && (bVar15 = false, local_50[0] != 0)) {
      FMemory::Free();
    }
    if (bVar3) {
      bVar4 = true;
      break;
    }
  }
  if (0 < *(int *)(param_1 + 0x360)) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_4;
    }
    if (*(int *)(**(longlong **)(param_1 + 0x358) + 0x60) != 0) {
      puVar14 = *(undefined2 **)(**(longlong **)(param_1 + 0x358) + 0x58);
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar12);
    if (iVar5 == 0) {
      return;
    }
  }
  if (bVar4) {
    return;
  }
  lVar16 = operator_new(0x30);
  if (lVar16 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUniqueNetIdNull::FUniqueNetIdNull(lVar16,param_3);
  }
  plVar13 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  plVar17 = plVar13;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f7de48;
    plVar7[2] = local_70;
    plVar17 = plVar7;
  }
  plVar7 = (longlong *)(local_70 + 8);
  if (local_70 == 0) {
    plVar7 = plVar13;
  }
  local_68 = plVar17;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) goto LAB_1405563d0;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    *plVar7 = local_70;
    plVar8 = (longlong *)plVar7[1];
    if (plVar17 != plVar8) {
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar17;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar17 + 1;
      lVar16 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
  }
LAB_1405563d0:
  lVar16 = operator_new(0x118);
  plVar7 = plVar13;
  if (lVar16 != 0) {
    plVar7 = (longlong *)FUN_140535bc0(lVar16,param_2,&local_70,param_4);
  }
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143fc21a0;
    plVar8[2] = (longlong)plVar7;
    plVar13 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) goto LAB_1405566bb;
  if ((*plVar7 == 0) || (plVar7[1] == 0)) {
LAB_14055645f:
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar8 = (longlong *)plVar7[1];
    if (plVar13 != plVar8) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar13 + 1;
      lVar16 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      goto LAB_1405564e8;
    }
  }
  else {
    piVar1 = (int *)(plVar7[1] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_14055645f;
LAB_1405564e8:
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
  }
  iVar5 = *(int *)(param_1 + 0x350);
  *(int *)(param_1 + 0x350) = iVar5 + 1;
  if (*(int *)(param_1 + 0x354) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x348,iVar5);
  }
  puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x348));
  *puVar6 = plVar7;
  puVar6[1] = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar13 + 1;
    lVar16 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  pplVar2 = (longlong **)(plVar7 + 0x21);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_60[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&DAT_143f3ed00;
    plVar8[1] = param_1;
    plVar8[2] = (longlong)FUN_140556fb0;
    lVar16 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar16;
    *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_60 != pplVar2) {
    if (plVar8 == (longlong *)0x0) {
      if (((int)plVar7[0x22] != 0) && (plVar9 = *pplVar2, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar9 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar9;
        }
        *(undefined4 *)(plVar7 + 0x22) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar2);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_60[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_60[0] != (longlong *)0x0) {
      FMemory::Free(local_60[0]);
    }
  }
  lVar16 = plVar7[6];
  if (lVar16 == 0) goto LAB_1405566bb;
  uVar10 = FUN_1405317f0(&local_80,plVar7,FUN_1405554b0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x108,uVar10);
  if (local_78 == 0) {
LAB_1405566a5:
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
  else if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x28))(local_80,0);
    if (local_80 != (longlong *)0x0) {
      local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
    }
    local_78 = 0;
    goto LAB_1405566a5;
  }
  FUN_140564700(plVar7[6]);
LAB_1405566bb:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar13 + 1;
    lVar16 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar16 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  return;
}



// FUNCTION 140556740 FUN_140556740 body=685 status=ok
// SIG undefined FUN_140556740(void)

void FUN_140556740(longlong param_1,char param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  int local_res10 [2];
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (param_2 == '\x02') {
    FUN_140549500(param_1 + 0x78,local_res10);
    uVar7 = 0;
    uVar6 = uVar7;
    if (local_res10[0] != -1) {
      uVar6 = (longlong)local_res10[0] * 0x168 + *(longlong *)(param_1 + 0x78);
    }
    uVar9 = uVar6 + 0x10;
    if (uVar6 == 0) {
      uVar9 = uVar7;
    }
    if (uVar9 != 0) {
      if (*(char *)(uVar9 + 0xe8) != '\0') {
        FUN_14053fd40(param_1,uVar9 + 0xb0,uVar9 + 0xf0);
      }
      plVar2 = (longlong *)(param_1 + 0xd0);
      local_98 = 0;
      uVar3 = *(uint *)(param_1 + 0xf8);
      puVar1 = (uint *)(param_1 + 0xe0);
      uStack_94 = 1;
      uStack_84 = 0;
      uStack_80 = 0;
      if (uVar3 != 0) {
        puVar10 = *(uint **)(param_1 + 0xf0);
        if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar4 = *puVar10;
        uVar6 = uVar7;
        while (uVar4 == 0) {
          iVar5 = (int)uVar7;
          uStack_80 = (int)uVar6 + 0x20;
          uVar6 = (ulonglong)uStack_80;
          local_98 = iVar5 + 1;
          uVar7 = (ulonglong)local_98;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_14055688d;
          uVar4 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_94 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_84 = (uStack_80 - iVar5) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_14055688d:
          uStack_84 = uVar3;
        }
      }
      uVar4 = *(uint *)(param_1 + 0xf8);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_84;
      local_58 = CONCAT44(uStack_7c,uStack_80);
      uStack_48 = CONCAT44(uStack_94,local_98);
      uVar11 = uVar4 & 0xffffffe0;
      uStack_70 = local_98;
      uStack_6c = uStack_94;
      local_68 = puVar1;
      local_50 = plVar2;
      puStack_40 = puVar1;
      uStack_30 = local_58;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      uStack_84 = uVar4;
      if (uVar4 != uVar3) {
        puVar10 = *(uint **)(param_1 + 0xf0);
        if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar8 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar5 = (int)uVar4 >> 5;
        while (uVar8 == 0) {
          uVar11 = uVar11 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_140556952;
          uVar8 = puVar10[(longlong)iVar5 + 1];
          iVar5 = iVar5 + 1;
        }
        uVar8 = -uVar8 & uVar8;
        iVar5 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_84 = (uVar11 - iVar5) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_140556952:
          uStack_84 = uVar3;
        }
      }
      while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
        FUN_140562c50(param_1,*plVar2 + (longlong)(int)uStack_5c * 0x168 + 0xc0);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      }
    }
  }
  else if (param_2 == '\0') {
    FUN_140566ea0(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 1405569f0 FUN_1405569f0 body=849 status=ok
// SIG undefined FUN_1405569f0(void)

void FUN_1405569f0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  uint uStack_a4;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  
  if ((int)param_3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x23);
    puVar1 = (uint *)(param_1 + 0x20);
    uStack_d4 = 1;
    iStack_c0 = (int)(param_3 >> 0x20);
    local_d8 = 0;
    uStack_c4 = 0;
    if (uVar4 != 0) {
      puVar13 = (uint *)param_1[0x22];
      if ((uint *)param_1[0x22] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = *puVar13;
      iVar14 = 0;
      while (uVar12 == 0) {
        iVar7 = (int)param_3;
        iStack_c0 = iVar14 + 0x20;
        local_d8 = iVar7 + 1;
        param_3 = (ulonglong)local_d8;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140556add;
        iVar14 = iStack_c0;
        uVar12 = puVar13[(longlong)iVar7 + 1];
      }
      uStack_d4 = -uVar12 & uVar12;
      iVar7 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_c4 = (iVar14 - iVar7) + 0x1f;
      if ((int)uVar4 < (int)uStack_c4) {
LAB_140556add:
        uStack_c4 = uVar4;
      }
    }
    uStack_a4 = *(uint *)(param_1 + 0x23);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_c4;
    local_58 = CONCAT44(uStack_bc,iStack_c0);
    uVar12 = uStack_a4 & 0xffffffe0;
    uStack_70 = local_d8;
    uStack_6c = uStack_d4;
    local_68 = puVar1;
    if (uStack_a4 != uVar4) {
      puVar13 = (uint *)param_1[0x22];
      if ((uint *)param_1[0x22] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar8 = puVar13[(int)uStack_a4 >> 5] & -1 << ((byte)uStack_a4 & 0x1f);
      iVar14 = (int)uStack_a4 >> 5;
      while (uVar8 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_140556bbd;
        uVar8 = puVar13[(longlong)iVar14 + 1];
        iVar14 = iVar14 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar14 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_a4 = (uVar12 - iVar14) + 0x1f;
      if ((int)uVar4 < (int)uStack_a4) {
LAB_140556bbd:
        uStack_a4 = uVar4;
      }
    }
    while ((uStack_5c != uStack_a4 || (local_68 != puVar1))) {
      lVar9 = (longlong)(int)uStack_5c * 0x38 + param_1[0x1e];
      cVar6 = (*(code *)**(undefined8 **)*param_2)
                        ((undefined8 *)*param_2,*(undefined8 *)(lVar9 + 0x10));
      if (cVar6 != '\0') {
        puVar10 = *(undefined4 **)(lVar9 + 0x20);
        puVar15 = puVar10 + (longlong)*(int *)(lVar9 + 0x28) * 0x18;
        for (; puVar10 != puVar15; puVar10 = puVar10 + 0x18) {
          if (puVar10[6] == 1) {
            puVar10[6] = 3;
            (**(code **)(*param_1 + 0x130))(param_1,puVar10 + 2,2,*puVar10,0,0);
          }
          iVar14 = puVar10[10];
          if (iVar14 != 0) {
            plVar11 = (longlong *)(*(longlong *)(puVar10 + 8) + 8);
            do {
              plVar5 = (longlong *)*plVar11;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar7 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
              plVar11 = plVar11 + 2;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          puVar10[10] = 0;
          if (puVar10[0xb] != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar10 + 8,0);
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return;
}



// FUNCTION 140556d60 FUN_140556d60 body=579 status=ok
// SIG undefined FUN_140556d60(void)

void FUN_140556d60(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  plVar7 = (longlong *)operator_new(0x40);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f77e88;
    FUniqueNetIdNull::FUniqueNetIdNull(plVar7 + 2,param_3 + 0x10);
  }
  local_68 = plVar7 + 2;
  local_60 = plVar7;
  FUN_14044f790(&local_68,local_68);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  lVar8 = FUN_14054eb60(param_1,param_2);
  puVar13 = *(undefined4 **)(lVar8 + 0x10);
  puVar11 = puVar13 + (longlong)*(int *)(lVar8 + 0x18) * 0x18;
  do {
    if (puVar13 == puVar11) {
LAB_140556f57:
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return;
    }
    puVar5 = *(undefined8 **)(puVar13 + 8);
    iVar10 = puVar13[10];
    for (puVar12 = puVar5; puVar12 != puVar5 + (longlong)iVar10 * 2; puVar12 = puVar12 + 2) {
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,local_58)
      ;
      cVar6 = (**(code **)plVar7[2])(plVar7 + 2,*puVar9);
      plVar1 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (cVar6 != '\0') {
        iVar10 = (int)((longlong)puVar12 - (longlong)puVar5 >> 4);
        if ((-1 < iVar10) && (iVar10 < (int)puVar13[10])) {
          FUN_1405615e0(*(undefined8 *)(*(longlong *)(puVar13 + 8) + (longlong)iVar10 * 0x10),
                        param_3);
          (**(code **)(*param_1 + 0x28))(param_1,param_2,*puVar13,0);
          goto LAB_140556f57;
        }
        break;
      }
    }
    puVar13 = puVar13 + 0x18;
  } while( true );
}



// FUNCTION 140556fb0 FUN_140556fb0 body=429 status=ok
// SIG undefined FUN_140556fb0(void)

void FUN_140556fb0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x40) == 1) {
    (**(code **)(*param_1 + 0x240))(param_1,lVar6 + 0x10,lVar6 + 0x20,lVar6 + 0x48);
  }
  lVar6 = (longlong)(int)param_1[0x6a];
  if ((int)param_1[0x6a] != 0) {
    iVar9 = 0;
    bVar12 = *(longlong *)param_1[0x69] != *param_2;
    lVar8 = 0;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar11 = iVar10 + 1;
      if (lVar8 < lVar6) {
        plVar5 = (longlong *)(lVar8 * 0x10 + param_1[0x69]);
        do {
          if (bVar12 != (*plVar5 != *param_2)) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar8 < lVar6);
      }
      iVar7 = iVar11 - iVar10;
      if (bVar12 == false) {
        if (iVar7 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + param_1[0x69]);
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        if (iVar9 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + param_1[0x69]),
                     (void *)((longlong)iVar10 * 0x10 + param_1[0x69]),(longlong)iVar7 << 4);
        }
        iVar9 = iVar9 + iVar7;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar6);
    *(int *)(param_1 + 0x6a) = iVar9;
  }
  return;
}



// FUNCTION 140557160 FUN_140557160 body=819 status=ok
// SIG undefined FUN_140557160(void)

void FUN_140557160(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar3 = *(int *)(*param_2 + 0x20);
  lVar8 = FUN_14054eb60(param_1,*param_2 + 0x10);
  puVar11 = *(undefined4 **)(lVar8 + 0x10);
  if (iVar3 == 3) {
    puVar11 = puVar11 + 0x18;
  }
  else if (iVar3 == 4) {
    puVar11 = puVar11 + 0x48;
  }
  else if (iVar3 == 5) {
    puVar11 = puVar11 + 0x30;
  }
  plVar4 = *(longlong **)(puVar11 + 0x16);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar12 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if ((undefined8 *)(puVar11 + 0x14) != &local_58) {
    *(undefined8 *)(puVar11 + 0x14) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar11 + 0x16,&plStack_50);
    plVar5 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if (puVar11[6] == 1) {
    if (*(int *)(*param_2 + 0x24) == 1) {
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                (puVar11 + 0x10,*param_2 + 0xa8);
      if (puVar11[0xe] == puVar11[0x12]) {
        uVar14 = uVar12;
        if (0 < (int)puVar11[0xe]) {
          do {
            plVar5 = *(longlong **)(uVar12 + *(longlong *)(puVar11 + 0xc));
            puVar9 = (undefined8 *)
                     (**(code **)(**(longlong **)(uVar12 + *(longlong *)(puVar11 + 0x10)) + 8))
                               (*(longlong **)(uVar12 + *(longlong *)(puVar11 + 0x10)),local_38);
            puVar9 = (undefined8 *)*puVar9;
            puVar10 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5,local_48);
            cVar7 = (**(code **)*puVar9)(puVar9,*puVar10);
            plVar5 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_40)(local_40);
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
            plVar5 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_30 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_30)(local_30);
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
            if (cVar7 == '\0') {
              bVar6 = true;
              goto LAB_140557362;
            }
            uVar13 = (int)uVar14 + 1;
            uVar12 = uVar12 + 0x10;
            uVar14 = (ulonglong)uVar13;
          } while ((int)uVar13 < (int)puVar11[0xe]);
        }
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
LAB_140557362:
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                (puVar11 + 8,puVar11 + 0x10);
      puVar11[6] = 2;
      FUN_14055f6d0(puVar11 + 0xc,0);
      FUN_14055f6d0(puVar11 + 0x10,0);
      (**(code **)(*param_1 + 0x130))(param_1,puVar11 + 2,1,*puVar11,puVar11[10],0);
      if (bVar6) {
        (**(code **)(*param_1 + 0x28))(param_1,puVar11 + 2,*puVar11,0);
      }
    }
    else {
      puVar11[6] = 3;
      FUN_14055f6d0(puVar11 + 0xc,0);
      FUN_14055f6d0(puVar11 + 0x10,0);
      (**(code **)(*param_1 + 0x130))(param_1,puVar11 + 2,2,*puVar11,0,0);
    }
  }
  else if (puVar11[6] == 3) {
    puVar11[6] = 3;
    FUN_14055f6d0(puVar11 + 0xc,0);
    FUN_14055f6d0(puVar11 + 0x10,0);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 1405574a0 FUN_1405574a0 body=622 status=ok
// SIG undefined FUN_1405574a0(void)

void FUN_1405574a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  lVar7 = *param_2;
  if ((*(int *)(lVar7 + 0x28) == 1) && (lVar9 = *(longlong *)(lVar7 + 0x18), lVar9 != 0)) {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x288)) {
      lVar6 = 0;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x280) + 0xb8);
      do {
        if (*plVar5 == *(longlong *)(lVar7 + 0x10)) {
          lVar7 = (longlong)iVar10 * 0x118 + *(longlong *)(param_1 + 0x280);
          if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0xa0), lVar6 != 0)) {
            plVar5 = *(longlong **)(lVar7 + 0xa8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            fVar3 = *(float *)(lVar9 + 0x44);
            if (5.0 < fVar3) {
              *(float *)(lVar6 + 0x38) = fVar3 - 5.0;
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar5 + 1;
              lVar7 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          break;
        }
        iVar10 = iVar10 + 1;
        lVar6 = lVar6 + 1;
        plVar5 = plVar5 + 0x23;
      } while (lVar6 < *(int *)(param_1 + 0x288));
    }
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x400);
  if (*(int *)(param_1 + 0x400) != 0) {
    iVar11 = 0;
    bVar13 = **(longlong **)(param_1 + 0x3f8) != *param_2;
    lVar9 = 0;
    iVar10 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar12 = iVar10 + 1;
      if (lVar9 < lVar7) {
        plVar5 = (longlong *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0x3f8));
        do {
          if (bVar13 != (*plVar5 != *param_2)) break;
          iVar12 = iVar12 + 1;
          lVar9 = lVar9 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar9 < lVar7);
      }
      iVar8 = iVar12 - iVar10;
      if (bVar13 == false) {
        if (iVar8 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + *(longlong *)(param_1 + 0x3f8));
          do {
            plVar4 = (longlong *)*plVar5;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        if (iVar11 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x3f8)),
                     (void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x3f8)),
                     (longlong)iVar8 << 4);
        }
        iVar11 = iVar11 + iVar8;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar10 = iVar12;
    } while (lVar9 < lVar7);
    *(int *)(param_1 + 0x400) = iVar11;
  }
  return;
}



// FUNCTION 140557710 FUN_140557710 body=805 status=ok
// SIG undefined FUN_140557710(void)

void FUN_140557710(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 local_res18;
  longlong local_48 [2];
  
  lVar8 = *param_2;
  iVar10 = 0;
  iVar11 = (int)param_1[0x51];
  if (*(int *)(lVar8 + 0x58) == 1) {
    if (0 < iVar11) {
      lVar7 = 0;
      plVar6 = (longlong *)(param_1[0x50] + 0xb8);
      do {
        if (*plVar6 == *(longlong *)(lVar8 + 0x40)) {
          lVar7 = (longlong)iVar10 * 0x118 + param_1[0x50];
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x3e) != '\0')) {
            uVar5 = FUN_14054be90(param_1,local_48,lVar7 + 0x28);
            FUN_140560760(param_1,lVar8 + 0x20,lVar8 + 0x30,uVar5);
            if (local_48[0] != 0) {
              FMemory::Free();
            }
          }
          break;
        }
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 0x23;
      } while (lVar7 < iVar11);
    }
  }
  else {
    if (0 < iVar11) {
      lVar7 = 0;
      plVar6 = (longlong *)(param_1[0x50] + 0xb8);
      do {
        if (*plVar6 == *(longlong *)(lVar8 + 0x40)) {
          lVar8 = (longlong)iVar10 * 0x118 + param_1[0x50];
          if ((lVar8 != 0) && (lVar7 = *(longlong *)(lVar8 + 0xa0), lVar7 != 0)) {
            plVar6 = *(longlong **)(lVar8 + 0xa8);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_res18 = *(undefined8 *)(*param_2 + 0x20);
            FUN_1404bb3d0(lVar7 + 8,&local_res18);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar6 + 1;
              lVar8 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          break;
        }
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 0x23;
      } while (lVar7 < iVar11);
    }
    (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_2 + 0x40),*param_2 + 0x20);
  }
  lVar8 = *param_2;
  (**(code **)(*param_1 + 0x2f0))
            (param_1,*(undefined8 *)(lVar8 + 0x40),lVar8 + 0x20,*(undefined4 *)(lVar8 + 0x58));
  lVar8 = (longlong)(int)param_1[0x74];
  if ((int)param_1[0x74] != 0) {
    iVar10 = 0;
    bVar13 = *(longlong *)param_1[0x73] != *param_2;
    lVar7 = 0;
    iVar11 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar12 = iVar11 + 1;
      if (lVar7 < lVar8) {
        plVar6 = (longlong *)(lVar7 * 0x10 + param_1[0x73]);
        do {
          if (bVar13 != (*plVar6 != *param_2)) break;
          iVar12 = iVar12 + 1;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 2;
        } while (lVar7 < lVar8);
      }
      iVar9 = iVar12 - iVar11;
      if (bVar13 == false) {
        if (iVar9 != 0) {
          plVar6 = (longlong *)((longlong)iVar11 * 0x10 + 8 + param_1[0x73]);
          do {
            plVar3 = (longlong *)*plVar6;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar6 = plVar6 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        if (iVar10 != iVar11) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar10 * 0x10 + param_1[0x73]),
                     (void *)((longlong)iVar11 * 0x10 + param_1[0x73]),(longlong)iVar9 << 4);
        }
        iVar10 = iVar10 + iVar9;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar11 = iVar12;
    } while (lVar7 < lVar8);
    *(int *)(param_1 + 0x74) = iVar10;
  }
  return;
}



// FUNCTION 140557a40 FUN_140557a40 body=140 status=ok
// SIG undefined FUN_140557a40(void)

void FUN_140557a40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_3 == 0xcc) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_142b58060(*(longlong *)(param_1 + 0x38),param_1 + 0x20);
    }
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x48,uVar5);
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
  return;
}



// FUNCTION 140557af0 FUN_140557af0 body=150 status=ok
// SIG undefined FUN_140557af0(void)

void FUN_140557af0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*param_2 + 0x30);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  if ((*(int *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x48) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x40);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 140557b90 FUN_140557b90 body=229 status=ok
// SIG undefined FUN_140557b90(void)

void FUN_140557b90(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((param_3 == 200) && (lVar4 = *param_4, lVar4 != 0)) {
    plVar5 = (longlong *)param_4[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x70,lVar4 + 8);
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar6);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return;
}



// FUNCTION 140557c80 FUN_140557c80 body=270 status=ok
// SIG undefined FUN_140557c80(void)

void FUN_140557c80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*param_2 + 0x68);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x40,*param_2 + 0x70);
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x30) != &local_28) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_20);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  if (*(int *)(param_1 + 100) == 1) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_14054c470();
  }
  else {
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x70,uVar6);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140557d90 FUN_140557d90 body=409 status=ok
// SIG undefined FUN_140557d90(void)

void FUN_140557d90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  (**(code **)(*param_1 + 0x200))
            (param_1,*(undefined8 *)(*param_2 + 0x10),*(undefined4 *)(*param_2 + 0x28));
  lVar8 = (longlong)(int)param_1[0x7e];
  if ((int)param_1[0x7e] != 0) {
    iVar9 = 0;
    bVar12 = *(longlong *)param_1[0x7d] != *param_2;
    lVar7 = 0;
    iVar10 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar11 = iVar10 + 1;
      if (lVar7 < lVar8) {
        plVar5 = (longlong *)(lVar7 * 0x10 + param_1[0x7d]);
        do {
          if (bVar12 != (*plVar5 != *param_2)) break;
          iVar11 = iVar11 + 1;
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar7 < lVar8);
      }
      iVar6 = iVar11 - iVar10;
      if (bVar12 == false) {
        if (iVar6 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + param_1[0x7d]);
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar9 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + param_1[0x7d]),
                     (void *)((longlong)iVar10 * 0x10 + param_1[0x7d]),(longlong)iVar6 << 4);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar11;
    } while (lVar7 < lVar8);
    *(int *)(param_1 + 0x7e) = iVar9;
  }
  return;
}



// FUNCTION 140557f30 FUN_140557f30 body=114 status=ok
// SIG undefined FUN_140557f30(void)

void FUN_140557f30(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x48,uVar5);
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
  return;
}



// FUNCTION 140557fb0 FUN_140557fb0 body=84 status=ok
// SIG undefined FUN_140557fb0(void)

void FUN_140557fb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x30) != 1) {
    FUN_14055e970(param_1 + 0xb,lVar1 + 0x10);
    lVar1 = *param_2;
  }
  (**(code **)(*param_1 + 0x28))(param_1,lVar1 + 0x10,*(undefined4 *)(lVar1 + 0x30));
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
            (param_1 + 0x15,param_2);
  return;
}



// FUNCTION 140558010 FUN_140558010 body=126 status=ok
// SIG undefined FUN_140558010(void)

void FUN_140558010(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  if (local_18 != 0) {
    local_10 = (longlong *)param_2[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    FUN_14055be90(param_1,&local_18);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140558090 FUN_140558090 body=409 status=ok
// SIG undefined FUN_140558090(void)

void FUN_140558090(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  lVar8 = *param_2;
  (**(code **)(*param_1 + 0x318))
            (param_1,*(undefined8 *)(lVar8 + 0x20),lVar8 + 0x10,*(undefined4 *)(lVar8 + 0x38));
  lVar8 = (longlong)(int)param_1[0x76];
  if ((int)param_1[0x76] != 0) {
    iVar9 = 0;
    bVar12 = *(longlong *)param_1[0x75] != *param_2;
    lVar7 = 0;
    iVar10 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar11 = iVar10 + 1;
      if (lVar7 < lVar8) {
        plVar5 = (longlong *)(lVar7 * 0x10 + param_1[0x75]);
        do {
          if (bVar12 != (*plVar5 != *param_2)) break;
          iVar11 = iVar11 + 1;
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar7 < lVar8);
      }
      iVar6 = iVar11 - iVar10;
      if (bVar12 == false) {
        if (iVar6 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + param_1[0x75]);
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar9 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + param_1[0x75]),
                     (void *)((longlong)iVar10 * 0x10 + param_1[0x75]),(longlong)iVar6 << 4);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar11;
    } while (lVar7 < lVar8);
    *(int *)(param_1 + 0x76) = iVar9;
  }
  return;
}



// FUNCTION 140558230 FUN_140558230 body=122 status=ok
// SIG undefined FUN_140558230(void)

void FUN_140558230(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_3 == 0xcc) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x80,uVar5);
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
  return;
}



// FUNCTION 1405582b0 FUN_1405582b0 body=480 status=ok
// SIG undefined FUN_1405582b0(void)

void FUN_1405582b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  iVar3 = *(int *)(*param_2 + 0x68);
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 == 1) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      if (lVar4 != 0) {
        uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
        FUN_1405313f0(lVar4 + 0x48,uVar5,FUN_1405542e0);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        FUN_1405640e0(*(undefined8 *)(param_1 + 0x48));
        return;
      }
      uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar5);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            return;
          }
        }
      }
    }
    else {
      uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
      FUN_1405313f0(lVar4 + 0x58,uVar5,FUN_140553760);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      FUN_1405635c0(*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar5);
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
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140558490 FUN_140558490 body=647 status=ok
// SIG undefined FUN_140558490(void)

void FUN_140558490(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  lVar7 = *param_2;
  if ((*(int *)(lVar7 + 0x58) == 1) && (lVar9 = *(longlong *)(lVar7 + 0x38), lVar9 != 0)) {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x288)) {
      lVar6 = 0;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x280) + 0xb8);
      do {
        if (*plVar5 == *(longlong *)(lVar7 + 0x20)) {
          lVar7 = (longlong)iVar10 * 0x118 + *(longlong *)(param_1 + 0x280);
          if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0xa0), lVar6 != 0)) {
            plVar5 = *(longlong **)(lVar7 + 0xa8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            fVar3 = *(float *)(lVar9 + 0x44);
            if (5.0 < fVar3) {
              *(float *)(lVar6 + 0x38) = fVar3 - 5.0;
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar5 + 1;
              lVar7 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          break;
        }
        iVar10 = iVar10 + 1;
        lVar6 = lVar6 + 1;
        plVar5 = plVar5 + 0x23;
      } while (lVar6 < *(int *)(param_1 + 0x288));
    }
  }
  FUN_14054afd0(param_1,*(undefined8 *)(*param_2 + 0x20),*(undefined4 *)(*param_2 + 0x58));
  lVar7 = (longlong)*(int *)(param_1 + 0x380);
  if (*(int *)(param_1 + 0x380) != 0) {
    iVar11 = 0;
    bVar13 = **(longlong **)(param_1 + 0x378) != *param_2;
    lVar9 = 0;
    iVar10 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar12 = iVar10 + 1;
      if (lVar9 < lVar7) {
        plVar5 = (longlong *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0x378));
        do {
          if (bVar13 != (*plVar5 != *param_2)) break;
          iVar12 = iVar12 + 1;
          lVar9 = lVar9 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar9 < lVar7);
      }
      iVar8 = iVar12 - iVar10;
      if (bVar13 == false) {
        if (iVar8 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + *(longlong *)(param_1 + 0x378));
          do {
            plVar4 = (longlong *)*plVar5;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        if (iVar11 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x378)),
                     (void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x378)),
                     (longlong)iVar8 << 4);
        }
        iVar11 = iVar11 + iVar8;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar10 = iVar12;
    } while (lVar9 < lVar7);
    *(int *)(param_1 + 0x380) = iVar11;
  }
  return;
}



// FUNCTION 140558720 FUN_140558720 body=241 status=ok
// SIG undefined FUN_140558720(void)

void FUN_140558720(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_3 == 200) && (lVar3 = *param_4, lVar3 != 0)) {
    plVar4 = (longlong *)param_4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar6 = *(longlong *)(lVar3 + 8);
    lVar3 = lVar6 + (longlong)*(int *)(lVar3 + 0x10) * 0x28;
    for (; lVar6 != lVar3; lVar6 = lVar6 + 0x28) {
      local_38 = lVar6 + 0x18;
      local_30 = lVar6 + 8;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                (param_1 + 0x50,local_res18,&local_38,0);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    FUN_14054ca10(param_1);
    local_20 = plVar4;
  }
  else {
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xa0,uVar5);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140558820 FUN_140558820 body=703 status=ok
// SIG undefined FUN_140558820(void)

void FUN_140558820(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  int local_res8 [2];
  int local_res10;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  lVar11 = *param_2;
  if (*(int *)(lVar11 + 0x48) == 1) {
    uStack_b4 = 1;
    plVar1 = (longlong *)(lVar11 + 0x50);
    local_b8 = 0;
    iVar5 = *(int *)(lVar11 + 0x78);
    local_88 = (uint *)(lVar11 + 0x60);
    iStack_a4 = 0;
    iStack_a0 = 0;
    if (iVar5 != 0) {
      puVar14 = *(uint **)(lVar11 + 0x70);
      if (*(uint **)(lVar11 + 0x70) == (uint *)0x0) {
        puVar14 = local_88;
      }
      uVar6 = *puVar14;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar6 == 0) {
        lVar11 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar13 = local_b8 + 1;
        bVar7 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
        local_b8 = iVar13;
        if (bVar7) goto LAB_140558900;
        uVar6 = puVar14[lVar11 + 1];
      }
      uStack_b4 = -uVar6 & uVar6;
      local_res10 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> local_res10 == 0; local_res10 = local_res10 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - local_res10;
      }
      iStack_a4 = (iStack_a0 - iVar13) + 0x1f;
      if (iVar5 < iStack_a4) {
LAB_140558900:
        iStack_a4 = iVar5;
      }
    }
    uStack_90 = CONCAT44(uStack_b4,local_b8);
    uStack_38 = 0xffffffff;
    iStack_34 = iStack_a4;
    iStack_30 = iStack_a0;
    uStack_80 = CONCAT44(iStack_a4,0xffffffff);
    local_78 = iStack_a0;
    local_50 = plVar1;
    uStack_48 = uStack_90;
    puStack_40 = local_88;
    if (iStack_a4 < iVar5) {
      do {
        lVar4 = *plVar1 + (longlong)iStack_a4 * 0x28;
        lVar11 = lVar4 + 0x10;
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x58,local_res8);
        if (local_res8[0] == -1) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(param_1 + 0x58) + (longlong)local_res8[0] * 0x28;
        }
        if (1 < *(int *)(lVar4 + 0x18)) {
          FUN_140560aa0(*(undefined8 *)(lVar12 + 0x10),lVar11);
        }
        uVar9 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 8))
                          (*(longlong **)(lVar12 + 0x10),local_70);
        if (((*(int *)(param_1 + 0xc0) != 0) && (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0))
           && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar8 != '\0')) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(param_1 + 0xb8);
          }
          (**(code **)(*plVar10 + 0x40))(plVar10,uVar9,lVar11);
        }
        plVar10 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_68 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        iStack_a4 = uStack_80._4_4_;
      } while (uStack_80._4_4_ < (int)local_88[6]);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*param_2 + 0x48);
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_60);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xd8,uVar9);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 140558ae0 FUN_140558ae0 body=1580 status=ok
// SIG undefined FUN_140558ae0(void)

void FUN_140558ae0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined2 *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 *local_190;
  undefined2 **local_188;
  longlong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168 [2];
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148 [2];
  undefined1 local_138 [8];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [24];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [80];
  
  plVar3 = (longlong *)param_1[0x3a];
  if (plVar3 == plVar3 + (longlong)(int)param_1[0x3b] * 2) {
    return;
  }
  plVar13 = plVar3;
  while (*(int *)(*plVar13 + 0x30) != *(int *)(*param_2 + 8)) {
    plVar13 = plVar13 + 2;
    if (plVar13 == plVar3 + (longlong)(int)param_1[0x3b] * 2) {
      return;
    }
  }
  lVar14 = (longlong)plVar13 - (longlong)plVar3 >> 4;
  iVar4 = (int)lVar14;
  if (iVar4 < 0) {
    return;
  }
  if ((int)param_1[0x3b] <= iVar4) {
    return;
  }
  plVar13 = (longlong *)plVar3[(longlong)iVar4 * 2 + 1];
  lVar7 = plVar3[(longlong)iVar4 * 2];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1b8 = lVar7;
  local_178 = plVar13;
  TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
            (param_1 + 0x3a,lVar14,1,1);
  if ((param_3 == 200) && (lVar14 = *param_4, lVar14 != 0)) {
    local_170 = (longlong *)param_4[1];
    if (local_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    cVar2 = *(char *)(lVar14 + 8);
    lVar18 = *(longlong *)(lVar14 + 0x10);
    local_180 = lVar18 + (longlong)*(int *)(lVar14 + 0x18) * 0x28;
    lVar14 = lVar7;
    if (lVar18 != local_180) {
      do {
        local_1c0 = *(int *)(lVar18 + 0x10);
        lVar14 = (longlong)local_1c0;
        _Src = *(void **)(lVar18 + 8);
        local_1c8 = (undefined2 *)0x0;
        if (local_1c0 == 0) {
          local_1bc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_1c0,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,_Src,lVar14 * 2);
        }
        puVar16 = *(undefined8 **)(lVar7 + 0x10);
        puVar17 = puVar16 + (longlong)*(int *)(lVar7 + 0x18) * 6;
        local_190 = puVar16;
        for (; puVar16 != puVar17; puVar16 = puVar16 + 6) {
          puVar6 = (undefined8 *)
                   (**(code **)(*(longlong *)*puVar16 + 0x28))((longlong *)*puVar16,local_168);
          puVar15 = &DAT_143f3eda8;
          if (local_1c0 != 0) {
            puVar15 = local_1c8;
          }
          if (*(int *)(puVar6 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar6;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar15);
          if (local_168[0] != 0) {
            FMemory::Free();
          }
          if (iVar4 == 0) {
            lVar14 = ((longlong)puVar16 - (longlong)local_190) / 6 +
                     ((longlong)puVar16 - (longlong)local_190 >> 0x3f);
            iVar4 = (int)(lVar14 >> 3) - (int)(lVar14 >> 0x3f);
            goto LAB_140558cef;
          }
        }
        iVar4 = -1;
LAB_140558cef:
        if (cVar2 != '\0') {
          local_188 = &local_1c8;
          TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
                    (lVar7 + 0x20,&local_188);
        }
        if ((-1 < iVar4) && (iVar4 < *(int *)(lVar7 + 0x18))) {
          FString::operator=((longlong)iVar4 * 0x30 + *(longlong *)(lVar7 + 0x10) + 0x10,
                             lVar18 + 0x18);
        }
        if (local_1c8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        lVar18 = lVar18 + 0x28;
        lVar14 = local_1b8;
        plVar13 = local_178;
      } while (lVar18 != local_180);
    }
    plVar3 = local_170;
    uVar8 = 1;
    if (cVar2 != '\0') {
      lVar7 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_1a0,lVar14);
      if (local_1a0 != 0) {
        FUN_142b45fe0(local_1a0,&local_1b0);
        if (local_1b0 != 0) {
          Chaos::FPBDRigidSpringConstraints::FPBDRigidSpringConstraints(local_138);
          TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_100,lVar14 + 0x20);
          FUN_142b0e490(local_e8);
          FString::operator=(local_d8,local_130);
          FString::operator=(local_c8,local_120);
          FString::operator=(local_b8,local_110);
          TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_a8,local_100);
          local_158 = 0;
          uStack_150 = 0;
          uVar8 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                            (local_98,param_1,FUN_140558ae0);
          uVar9 = FUN_140537530(local_88,local_e8);
          uVar10 = FUN_142b46360(local_1a0,local_148);
          uVar5 = FUN_142ad4340(local_1b0,uVar10,uVar9,uVar8,&local_158);
          lVar14 = local_1b8;
          *(undefined4 *)(local_1b8 + 0x30) = uVar5;
          if (local_148[0] != 0) {
            FMemory::Free();
          }
          if (0 < *(int *)(lVar14 + 0x30)) {
            iVar4 = (int)param_1[0x3b];
            *(int *)(param_1 + 0x3b) = iVar4 + 1;
            if (*(int *)((longlong)param_1 + 0x1dc) < iVar4 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x3a,iVar4);
            }
            plVar11 = (longlong *)((longlong)iVar4 * 0x10 + param_1[0x3a]);
            *plVar11 = lVar14;
            plVar11[1] = (longlong)plVar13;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            FUN_142b0f5d0(local_e8);
            FUN_142b0f600(local_138);
            if (local_1a8 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_1a8 + 1;
              lVar14 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_1a8)(local_1a8);
                LOCK();
                piVar1 = (int *)((longlong)local_1a8 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_1a8 + 8))(local_1a8,1);
                }
              }
            }
            if (local_198 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_198 + 1;
              lVar14 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_198)(local_198);
                LOCK();
                piVar1 = (int *)((longlong)local_198 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_198 + 8))(local_198,1);
                }
              }
            }
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar3 + 1;
              lVar14 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            goto LAB_1405590a8;
          }
          FUN_142b0f5d0(local_e8);
          FUN_142b0f600(local_138);
        }
        if (local_1a8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1a8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar1 = (int *)((longlong)local_1a8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_1a8 + 8))(local_1a8,1);
            }
          }
        }
      }
      uVar8 = 0;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_198 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
    }
    lVar7 = lVar14;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      lVar14 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  else {
    uVar8 = 0;
  }
  (**(code **)(*param_1 + 0x1c0))(param_1,uVar8,lVar7 + 0x10);
LAB_1405590a8:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar13 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 140559110 FUN_140559110 body=333 status=ok
// SIG undefined FUN_140559110(void)

void FUN_140559110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_38;
  int local_30;
  undefined8 local_2c;
  char local_24;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 0x288)) {
    do {
      lVar1 = uVar6 + *(longlong *)(param_1 + 0x280);
      if (lVar1 != 0) {
        if ((*(char *)(lVar1 + 0x3a) == '\0') || (*(int *)(lVar1 + 0xb4) < 1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_38 = 0;
          local_2c = 0;
          local_24 = '\0';
          local_30 = 0;
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_38);
          lVar5 = (longlong)local_30;
          local_30 = local_30 + 0x400;
          if ((int)local_2c < local_30) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38);
          }
          _guard_xfg_dispatch_icall_nop((void *)(lVar5 + local_38),0,0x400);
          FUN_1404aeb10(param_1 + 0x2b0,&local_38,param_4);
          FUN_14053df50(param_1,&local_38,lVar1);
          if (local_24 == '\0') {
            FUN_1404add60(param_1 + 0x2b0,local_38,local_2c._4_4_);
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 0x118;
    } while ((int)uVar3 < *(int *)(param_1 + 0x288));
  }
  return;
}



// FUNCTION 140559260 FUN_140559260 body=343 status=ok
// SIG undefined FUN_140559260(void)

void FUN_140559260(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  LARGE_INTEGER local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  lVar2 = *(longlong *)(param_1 + 0x290);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x14) < iVar1 + 1) {
      FUN_1404852a0(lVar2 + 8,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0xc0 + *(longlong *)(lVar2 + 8));
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_143f769a8;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = &PTR_FUN_143f769a0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined2 *)(puVar3 + 8) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0x12] = 0;
      *(undefined4 *)(puVar3 + 0x13) = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      *(undefined4 *)(puVar3 + 0x17) = 9999;
    }
    QueryPerformanceCounter(&local_res8);
    *(int *)(puVar3 + 0x17) =
         (int)((((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x408)) * 1000.0);
    local_2c = 0;
    local_28 = 0;
    local_38 = param_2;
    local_30 = param_3;
    FUN_14055bb20(param_1,&local_38,puVar3);
  }
  return;
}



// FUNCTION 1405593c0 FUN_1405593c0 body=83 status=ok
// SIG undefined FUN_1405593c0(void)

void FUN_1405593c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  
  if (1 < *(int *)(param_3 + 8)) {
    iVar1 = FUN_141592950(param_4,L"SPARK_FRIEND_REQUEST_ACCEPTED_MESSAGE",1,0,0xffffffff);
    if (iVar1 != -1) {
      FUN_14055c200(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140559420 FUN_140559420 body=1518 status=ok
// SIG undefined FUN_140559420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140559420(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  void *_Src;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  wchar_t *_Str;
  longlong *plVar12;
  longlong *plVar13;
  void **ppvVar14;
  longlong lVar15;
  undefined1 auStack_158 [32];
  int local_138 [2];
  undefined8 local_130;
  longlong *plStack_128;
  void *local_120;
  ulonglong local_118;
  longlong *local_110;
  longlong *plStack_108;
  longlong local_100 [6];
  wchar_t *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68 [2];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar13 = (longlong *)0x0;
  local_138[0] = 0;
  local_110 = (longlong *)0x0;
  plStack_108 = (longlong *)0x0;
  TJsonReaderFactory<wchar_t>::Create(local_78,param_1);
  cVar8 = FUN_1404a7f60(local_78,&local_110);
  plVar10 = local_110;
  if ((cVar8 != '\0') && (local_110 != (longlong *)0x0)) {
    local_d0 = (wchar_t *)0x0;
    local_c8 = 0;
    local_100[0] = 0;
    local_100[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100,0);
    FGenericPlatformString::Memcpy(local_100[0],L"session_flags",0x1c);
    cVar8 = FUN_1416b40a0(plVar10,local_100,&local_d0);
    if (local_100[0] != 0) {
      FMemory::Free();
    }
    if (cVar8 != '\0') {
      _Str = L"";
      if ((int)local_c8 != 0) {
        _Str = local_d0;
      }
      uVar9 = _wtoi(_Str);
      *(byte *)(param_2 + 0x38) = (byte)uVar9 & 1;
      *(byte *)(param_2 + 0x39) = (byte)(uVar9 >> 1) & 1;
      *(byte *)(param_2 + 0x3a) = (byte)(uVar9 >> 2) & 1;
      *(byte *)(param_2 + 0x3c) = (byte)(uVar9 >> 4) & 1;
      *(byte *)(param_2 + 0x3b) = (byte)(uVar9 >> 3) & 1;
      *(byte *)(param_2 + 0x3d) = (byte)(uVar9 >> 5) & 1;
      *(byte *)(param_2 + 0x3e) = (byte)(uVar9 >> 6) & 1;
      *(byte *)(param_2 + 0x3f) = (byte)(uVar9 >> 7) & 1;
      *(byte *)(param_2 + 0x40) = (byte)(uVar9 >> 8) & 1;
    }
    local_100[2] = 0;
    local_100[3] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100 + 2,0);
    FGenericPlatformString::Memcpy(local_100[2],L"owning_user_id",0x1e);
    plVar10 = local_110;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(local_110,local_138,local_100 + 2);
    plVar12 = plVar13;
    if (local_138[0] != -1) {
      plVar12 = (longlong *)(*plVar10 + (longlong)local_138[0] * 0x28);
    }
    plVar10 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar10 = plVar13;
    }
    if ((plVar10 == (longlong *)0x0) || (plVar12 = (longlong *)*plVar10, plVar12 == (longlong *)0x0)
       ) {
      plVar10 = &local_88;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      local_b8 = (longlong *)plVar10[1];
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      plVar10 = &local_c0;
      bVar6 = true;
      bVar5 = false;
      plVar13 = plVar12;
      local_c0 = (longlong)plVar12;
    }
    plVar12 = (longlong *)plVar10[1];
    plVar10[1] = 0;
    plVar2 = plStack_80;
    *plVar10 = 0;
    if ((bVar5) && (plStack_80 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_80 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    plVar10 = local_b8;
    if ((bVar6) && (local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_b8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (local_100[2] != 0) {
      FMemory::Free();
    }
    if (plVar13 != (longlong *)0x0) {
      local_98 = 0;
      local_90 = 0;
      local_b0 = &PTR_FUN_143f740c8;
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      uVar11 = FJsonValue::AsString(plVar13,local_68);
      FUN_1425e3ea0(&local_b0,uVar11);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      puVar3 = (undefined8 *)(param_2 + 8);
      local_130 = local_a8;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      plVar10 = plStack_a0;
      if (&local_130 != puVar3) {
        local_130 = *puVar3;
        plVar10 = *(longlong **)(param_2 + 0x10);
        local_58 = local_a8;
        plStack_50 = plStack_a0;
        *puVar3 = local_a8;
        *(longlong **)(param_2 + 0x10) = plStack_a0;
      }
      plStack_128 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar10 + 1;
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_128 + 8))(plStack_128,1);
          }
        }
      }
      local_b0 = &PTR_FUN_143f740c8;
      if (local_98 != 0) {
        FMemory::Free();
      }
      plVar10 = plStack_a0;
      local_b0 = &PTR_FUN_143f73d18;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_a0 + 1;
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    local_120 = (void *)0x0;
    local_118 = 0;
    local_100[4] = 0;
    local_100[5] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100 + 4,0);
    FGenericPlatformString::Memcpy(local_100[4],L"voice_channel_guid",0x26);
    cVar8 = FUN_1416b40a0(local_110,local_100 + 4,&local_120);
    if ((cVar8 == '\0') || (*(longlong *)(param_2 + 0xa0) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (local_100[4] != 0) {
      FMemory::Free();
    }
    _Src = local_120;
    if (bVar5) {
      plVar10 = *(longlong **)(param_2 + 0xa8);
      lVar7 = *(longlong *)(param_2 + 0xa0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      ppvVar14 = (void **)(lVar7 + 0x40);
      if (ppvVar14 != &local_120) {
        lVar15 = (longlong)(int)local_118;
        *(int *)(lVar7 + 0x48) = (int)local_118;
        if (((int)local_118 == 0) && (*(int *)(lVar7 + 0x4c) == 0)) {
          *(undefined4 *)(lVar7 + 0x4c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar14,local_118 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar14,_Src,lVar15 * 2);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar10 + 1;
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if (local_120 != (void *)0x0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (local_d0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_70 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar10 = plStack_108;
  if (plStack_108 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_108 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_108)(plStack_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_108 + 8))(plStack_108,1);
      }
    }
  }
  return;
}



// FUNCTION 140559a10 FUN_140559a10 body=404 status=ok
// SIG undefined FUN_140559a10(void)

void FUN_140559a10(longlong *param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar12 = &DAT_143f3eda8;
    puVar10 = &DAT_143f3eda8;
    if ((int)DAT_1461fcaa0 != 0) {
      puVar10 = DAT_1461fca98;
    }
    if (*(int *)(lVar5 + 0x10) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(lVar5 + 8);
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    else {
      puVar10 = &DAT_143f3eda8;
      if ((int)DAT_1461fcab0 != 0) {
        puVar10 = DAT_1461fcaa8;
      }
      if (*(int *)(lVar5 + 0x10) != 0) {
        puVar12 = *(undefined2 **)(lVar5 + 8);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar10);
      uVar11 = 0;
      if (iVar7 == 0) {
        uVar11 = 1;
      }
    }
    local_48[0] = 0;
    local_40 = 0;
    local_38 = 0;
    FVariantData::SetValue(local_48,uVar11);
    local_30 = 0;
    puVar8 = (undefined8 *)FName::FName(local_res8,L"SEARCHCROSSPLAY",1);
    FUN_1404b6080(param_3 + 0x28,*puVar8,local_48);
    FVariantData::Empty(local_48);
    FUN_140559420(*param_1 + 0x20,param_3,param_4);
    plVar6 = *(longlong **)(param_3 + 0xa8);
    lVar5 = *(longlong *)(param_3 + 0xa0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(lVar5 + 0x20) = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x18);
    *(undefined4 *)(param_3 + 0x34) = 0;
    *(undefined4 *)(param_3 + 0x30) = uVar3;
    iVar7 = *(int *)(*param_1 + 0x18);
    iVar4 = *(int *)(*param_1 + 0x30);
    *(undefined4 *)(param_3 + 0xb0) = 0;
    *(int *)(param_3 + 0xb4) = iVar7 - iVar4;
  }
  return;
}



// FUNCTION 140559bb0 FUN_140559bb0 body=768 status=ok
// SIG undefined FUN_140559bb0(void)

void FUN_140559bb0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint local_60;
  uint uStack_5c;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(char *)(param_2 + 0x101) == '\0') {
    FString::operator=(param_2 + 0x60,param_3);
    FString::operator=(param_2 + 0x70,param_3 + 0x10);
    FString::operator=(param_2 + 0x80,param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(param_3 + 0x30);
    uVar6 = *(undefined4 *)(param_3 + 0x3c);
    uVar7 = *(undefined4 *)(param_3 + 0x40);
    uVar8 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x9c) = uVar6;
    *(undefined4 *)(param_2 + 0xa0) = uVar7;
    *(undefined4 *)(param_2 + 0xa4) = uVar8;
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_3 + 0x48);
  }
  puVar2 = (undefined8 *)(param_2 + 0xb0);
  if (param_1[0x2f] != 0) {
    plVar3 = param_1 + 0x33;
    iVar10 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
             IndexOfByPredicate<FUniqueNetIdMatcher>(plVar3,*puVar2);
    if (iVar10 == -1) {
      iVar10 = (int)param_1[0x34];
      *(int *)(param_1 + 0x34) = iVar10 + 1;
      if (*(int *)((longlong)param_1 + 0x1a4) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar10);
      }
      puVar11 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar3);
      *puVar11 = *puVar2;
      lVar13 = *(longlong *)(param_2 + 0xb8);
      puVar11[1] = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
    }
  }
  uStack_b4 = 1;
  plVar3 = param_1 + 0xf;
  uVar4 = *(uint *)(param_1 + 0x14);
  puVar1 = (uint *)(param_1 + 0x11);
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar4 != 0) {
    puVar15 = (uint *)param_1[0x13];
    if ((uint *)param_1[0x13] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = *puVar15;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar14 == 0) {
      lVar13 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar10 = local_b8 + 1;
      bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar10;
      if (bVar5) goto LAB_140559d4d;
      uVar14 = puVar15[lVar13 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    iVar10 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_a4 = (iStack_a0 - iVar10) + 0x1f;
    if ((int)uVar4 < (int)uStack_a4) {
LAB_140559d4d:
      uStack_a4 = uVar4;
    }
  }
  uStack_5c = *(uint *)(param_1 + 0x14);
  uStack_48 = CONCAT44(uStack_b4,local_b8);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  local_78 = CONCAT44(uStack_9c,iStack_a0);
  local_60 = -1 << ((byte)uStack_5c & 0x1f);
  uVar14 = uStack_5c & 0xffffffe0;
  iStack_90 = local_b8;
  uStack_8c = uStack_b4;
  local_88 = puVar1;
  local_50 = plVar3;
  puStack_40 = puVar1;
  uStack_30 = local_78;
  uStack_38 = uStack_80;
  uStack_34 = uStack_7c;
  uVar12 = uStack_5c;
  if (uStack_5c != uVar4) {
    puVar15 = (uint *)param_1[0x13];
    if ((uint *)param_1[0x13] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = puVar15[(int)uStack_5c >> 5] & local_60;
    iVar10 = (int)uStack_5c >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_140559e14;
      uVar12 = puVar15[(longlong)iVar10 + 1];
      local_60 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar10 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_5c = (uVar14 - iVar10) + 0x1f;
    uVar12 = uStack_5c;
    if ((int)uVar4 < (int)uStack_5c) {
LAB_140559e14:
      uStack_5c = uVar4;
      uVar12 = uVar4;
    }
  }
  while ((uStack_7c != uVar12 || (local_88 != puVar1))) {
    lVar13 = (longlong)(int)uStack_7c * 0x168 + *plVar3;
    cVar9 = (**(code **)(*param_1 + 0x88))(param_1,lVar13 + 0xc0,puVar2);
    if (cVar9 != '\0') {
      FUN_140560b30(param_1,lVar13 + 0xc0,puVar2,1);
    }
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  return;
}



// FUNCTION 140559eb0 FUN_140559eb0 body=1220 status=ok
// SIG undefined FUN_140559eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140559eb0(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  short *_Src;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar17;
  undefined1 auStack_1c8 [32];
  char local_1a8;
  short *local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  longlong *plVar16;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = param_2;
  local_190 = param_1;
  lVar9 = FUN_14054b210();
  if (lVar9 != 0) {
    plVar10 = (longlong *)FName::FName(local_168,L"SPARK",1);
    plVar16 = (longlong *)0x0;
    lVar2 = *plVar10;
    if (*(int *)(lVar9 + 0x90) != *(int *)(lVar9 + 0xbc)) {
      lVar11 = *(longlong *)(lVar9 + 200);
      if (*(longlong *)(lVar9 + 200) == 0) {
        lVar11 = lVar9 + 0xc0;
      }
      iVar14 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                 (longlong)*(int *)(lVar9 + 0xd0) - 1U) * 4);
      if (iVar14 != -1) {
        do {
          plVar10 = (longlong *)((longlong)iVar14 * 0x20 + *(longlong *)(lVar9 + 0x88));
          if (*plVar10 == lVar2) {
            if (iVar14 != -1) goto LAB_140559f92;
            break;
          }
          iVar14 = (int)plVar10[3];
        } while (iVar14 != -1);
      }
    }
    plVar10 = plVar16;
LAB_140559f92:
    plVar17 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar17 = plVar16;
    }
    if (plVar17 != (longlong *)0x0) {
      iVar14 = (int)plVar17[1];
      plVar10 = plVar16;
      if (0 < iVar14) {
        do {
          plVar3 = *(longlong **)(*plVar17 + 8 + (longlong)plVar10);
          plVar4 = *(longlong **)(*plVar17 + (longlong)plVar10);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          plVar13 = (longlong *)plVar4[2];
          local_188 = plVar4[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_180 = plVar13;
          lVar9 = FUN_140548550(local_190,&local_188);
          if (lVar9 == 0) {
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar13 + 1;
              lVar9 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  lVar9 = *plVar13;
LAB_14055a20c:
                  (**(code **)(lVar9 + 8))(plVar13,1);
                }
              }
            }
          }
          else {
            cVar5 = FUN_140551780(local_190,(undefined8 *)(lVar9 + 0xb0));
            if ((cVar5 == '\0') && (local_1a8 != '\0')) {
              local_178 = *(undefined8 *)(lVar9 + 0xb0);
              local_170 = *(longlong **)(lVar9 + 0xb8);
              if (local_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                UNLOCK();
              }
              uVar15 = 0;
              local_1a0 = (short *)0x0;
              local_198 = 0;
              sVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
              if (sVar7 != 0) {
                TStringConversion<FUTF8ToTCHAR_Convert,128>::
                TStringConversion<FUTF8ToTCHAR_Convert,128>(local_158);
                _Src = local_50;
                if (local_1a0 != local_50) {
                  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
                    lVar9 = -1;
                    do {
                      lVar9 = lVar9 + 1;
                    } while (local_50[lVar9] != 0);
                    uVar15 = (int)lVar9 + 1;
                  }
                  uVar12 = local_198._4_4_;
                  iVar14 = 0;
                  local_198 = (ulonglong)local_198._4_4_ << 0x20;
                  if (uVar12 != uVar15) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a0,uVar15);
                    iVar14 = (int)local_198;
                    uVar12 = local_198._4_4_;
                  }
                  local_198 = CONCAT44(local_198._4_4_,iVar14 + uVar15);
                  if ((int)uVar12 < (int)(iVar14 + uVar15)) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0);
                  }
                  if (uVar15 != 0) {
                    _guard_xfg_dispatch_icall_nop(local_1a0,_Src,(longlong)(int)uVar15 * 2);
                  }
                }
                if (local_58 != 0) {
                  FMemory::Free();
                }
              }
              lVar9 = *local_190;
              uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
              (**(code **)(lVar9 + 0xe0))(local_190,&local_178,&local_1a0,uVar6);
              if (local_1a0 != (short *)0x0) {
                FMemory::Free();
              }
              plVar4 = local_170;
              if (local_170 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_170 + 1;
                lVar9 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_170)(local_170);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  iVar14 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
            }
            plVar4 = local_180;
            if (local_180 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_180 + 1;
              lVar9 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_180)(local_180);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  lVar9 = *local_180;
                  plVar13 = local_180;
                  goto LAB_14055a20c;
                }
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          iVar14 = (int)plVar17[1];
          uVar15 = (int)plVar16 + 1;
          plVar16 = (longlong *)(ulonglong)uVar15;
          plVar10 = plVar10 + 2;
        } while ((int)uVar15 < iVar14);
      }
      iVar8 = *(int *)((longlong)plVar17 + 0xc);
      if (iVar8 < 0) {
        if (iVar14 != 0) {
          plVar10 = (longlong *)(*plVar17 + 8);
          do {
            plVar16 = (longlong *)*plVar10;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar16 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
            plVar10 = plVar10 + 2;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          iVar8 = *(int *)((longlong)plVar17 + 0xc);
        }
        *(undefined4 *)(plVar17 + 1) = 0;
        if (iVar8 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar17,0);
        }
      }
      else {
        if (iVar14 != 0) {
          plVar10 = (longlong *)(*plVar17 + 8);
          do {
            plVar16 = (longlong *)*plVar10;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar16 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
            plVar10 = plVar10 + 2;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        *(undefined4 *)(plVar17 + 1) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14055a380 FUN_14055a380 body=379 status=ok
// SIG undefined FUN_14055a380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14055a380(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  longlong *local_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_14053f820;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    local_88[0] = 0;
    local_88[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],L"crossplay",0x14);
    local_88[2] = *(undefined8 *)(param_1 + 0x178);
    local_70 = *(longlong **)(param_1 + 0x180);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_142b62c30(local_88 + 2,local_88,param_2,local_68);
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14055a500 FUN_14055a500 body=998 status=ok
// SIG undefined FUN_14055a500(void)

void FUN_14055a500(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res18 [4];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58 [2];
  longlong *local_48 [2];
  longlong *local_38 [2];
  
  local_res18[0] = param_3;
  lVar5 = FUN_14054eb60();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if (param_3 == 3) {
    lVar5 = lVar5 + 0x60;
  }
  else if (param_3 == 4) {
    lVar5 = lVar5 + 0x120;
  }
  else if (param_3 == 5) {
    lVar5 = lVar5 + 0xc0;
  }
  if (*(int *)(lVar5 + 0x18) != 1) {
    *(undefined4 *)(lVar5 + 0x18) = 1;
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(lVar5 + 0x30,lVar5 + 0x20);
    FUN_14055f6d0(lVar5 + 0x40,0);
    FUN_14055f6d0(lVar5 + 0x20,0);
    plVar6 = (longlong *)FUN_140533f80(param_2,local_res18);
    plVar1 = plVar6 + 2;
    local_68 = plVar1;
    local_60 = plVar6;
    TSharedRef<FStringTable,1>::Init<FStringTable>(&local_68,plVar1);
    pplVar3 = (longlong **)(plVar6 + 0x1b);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_58[0] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar7[2] = (longlong)FUN_14054b6e0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
    }
    if (local_58 != pplVar3) {
      if (plVar7 == (longlong *)0x0) {
        if (((int)plVar6[0x1c] != 0) && (plVar9 = *pplVar3, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          if (*pplVar3 != (longlong *)0x0) {
            plVar9 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
            *pplVar3 = plVar9;
          }
          *(undefined4 *)(plVar6 + 0x1c) = 0;
        }
      }
      else {
        (**(code **)(*plVar7 + 0x30))(plVar7,pplVar3);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_58[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_58[0] != (longlong *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    pplVar3 = (longlong **)(plVar6 + 0x19);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_48[0] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_14053cf90;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_48 != pplVar3) {
      if (plVar7 == (longlong *)0x0) {
        if (((int)plVar6[0x1a] != 0) && (plVar9 = *pplVar3, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          if (*pplVar3 != (longlong *)0x0) {
            plVar9 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
            *pplVar3 = plVar9;
          }
          *(undefined4 *)(plVar6 + 0x1a) = 0;
        }
      }
      else {
        (**(code **)(*plVar7 + 0x30))(plVar7,pplVar3);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_48[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_48[0] != (longlong *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    pplVar3 = (longlong **)(plVar6 + 0x1d);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_38[0] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_140557160;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_38 != pplVar3) {
      if (plVar7 == (longlong *)0x0) {
        if (((int)plVar6[0x1e] != 0) && (plVar9 = *pplVar3, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          if (*pplVar3 != (longlong *)0x0) {
            plVar9 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
            *pplVar3 = plVar9;
          }
          *(undefined4 *)(plVar6 + 0x1e) = 0;
        }
      }
      else {
        (**(code **)(*plVar7 + 0x30))(plVar7,pplVar3);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_38[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_38[0] != (longlong *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_78 = plVar1;
    local_70 = plVar6;
    if ((longlong **)(lVar5 + 0x50) != &local_78) {
      *(longlong **)(lVar5 + 0x50) = plVar1;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x58,&local_70);
    }
    plVar7 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    FUN_140564c50(plVar1);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14055a8f0 FUN_14055a8f0 body=1200 status=ok
// SIG undefined FUN_14055a8f0(void)

void FUN_14055a8f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  void **ppvVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  void *pvVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  void *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  void **local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  void *local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar13 = *(longlong **)(param_1 + 0xa8);
  plVar11 = plVar13 + (longlong)*(int *)(param_1 + 0xb0) * 2;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_res10 = plVar11;
  if (plVar13 != plVar11) {
    do {
      plVar9 = (longlong *)0x0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      uVar8 = (**(code **)(*(longlong *)*plVar13 + 8))((longlong *)*plVar13,local_78);
      if (((*(int *)(param_1 + 0xd0) == 0) || (*(longlong **)(param_1 + 200) == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(**(longlong **)(param_1 + 200) + 0x18))(), cVar7 == '\0')) {
        cVar7 = '\0';
      }
      else {
        if (*(int *)(param_1 + 0xd0) != 0) {
          plVar9 = *(longlong **)(param_1 + 200);
        }
        cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,uVar8,&local_c8);
      }
      plVar9 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      pvVar12 = local_c8;
      if (cVar7 == '\0') {
        puVar10 = (undefined8 *)
                  (**(code **)(*(longlong *)*plVar13 + 8))((longlong *)*plVar13,local_58);
        (**(code **)(*(longlong *)*puVar10 + 0x28))((longlong *)*puVar10,&local_a8);
        plVar11 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          lVar15 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar14 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        uVar6 = local_e0;
        lVar15 = (longlong)(int)local_e0;
        iVar14 = (int)local_e0 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,iVar14);
        if (local_e0._4_4_ < iVar14) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_e8,uVar6 & 0xffffffff);
        }
        pvVar12 = local_a8;
        plVar11 = local_e8 + lVar15 * 2;
        *plVar11 = 0;
        lVar15 = (longlong)local_a0;
        *(int *)(plVar11 + 1) = local_a0;
        if (local_a0 == 0) {
          *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar11,local_a0,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar11,pvVar12,lVar15 * 2);
        }
        local_98 = &local_a8;
        local_90 = plVar13;
        FUN_140533600(param_1 + 0x58,local_res8,&local_98,0);
        pvVar12 = local_a8;
LAB_14055ab7c:
        plVar11 = local_res10;
        if (pvVar12 != (void *)0x0) {
          FMemory::Free();
          plVar11 = local_res10;
        }
      }
      else {
        lVar15 = (longlong)(int)local_c0;
        if (1 < (int)local_c0) {
          lVar5 = *plVar13;
          ppvVar4 = (void **)(lVar5 + 0xd0);
          if (ppvVar4 != &local_c8) {
            *(int *)(lVar5 + 0xd8) = (int)local_c0;
            if (((int)local_c0 == 0) && (*(int *)(lVar5 + 0xdc) == 0)) {
              *(undefined4 *)(lVar5 + 0xdc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar4,local_c0 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar4,pvVar12,lVar15 * 2);
            }
          }
          plVar11 = local_res10;
          if (1 < *(int *)(lVar5 + 0xd8)) {
            lVar15 = FUN_142b45e90();
            plVar9 = (longlong *)FUN_142b495d0(*(undefined8 *)(lVar15 + 0x18),local_68);
            plVar11 = (longlong *)(lVar5 + 0xc0);
            pvVar12 = local_68[0];
            if (plVar11 != plVar9) {
              if (*plVar11 != 0) {
                FMemory::Free();
              }
              *plVar11 = *plVar9;
              *plVar9 = 0;
              *(int *)(lVar5 + 200) = (int)plVar9[1];
              *(undefined4 *)(lVar5 + 0xcc) = *(undefined4 *)((longlong)plVar9 + 0xc);
              plVar9[1] = 0;
              pvVar12 = local_68[0];
            }
            goto LAB_14055ab7c;
          }
        }
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar11);
    if (0 < (int)local_e0) {
      plVar11 = (longlong *)FUN_140534090(param_1 + 0x10,&local_e8);
      plVar13 = plVar11 + 2;
      local_88 = plVar13;
      local_80 = plVar11;
      TSharedRef<FStringTable,1>::Init<FStringTable>(&local_88,plVar13);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      pplVar3 = (longlong **)(param_1 + 0x48);
      local_d8 = plVar13;
      local_d0 = plVar11;
      if (pplVar3 != &local_d8) {
        *pplVar3 = plVar13;
        local_d8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_d0);
      }
      plVar13 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_d0 + 1;
        lVar15 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar11 + 1;
        lVar15 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar13 = *pplVar3;
      uVar8 = FUN_1405317f0(&local_b8,param_1,FUN_140558820);
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar13 + 0x14,uVar8);
      if (local_b0 == 0) {
LAB_14055ace2:
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      else if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x28))(local_b8,0);
        if (local_b8 != (longlong *)0x0) {
          local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
        }
        local_b0 = 0;
        goto LAB_14055ace2;
      }
      FUN_1405661b0(*pplVar3);
      goto LAB_14055ad52;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xd8,uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_40 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
LAB_14055ad52:
  plVar13 = local_e8;
  for (iVar14 = (int)local_e0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14055ada0 FUN_14055ada0 body=898 status=ok
// SIG undefined FUN_14055ada0(void)

void FUN_14055ada0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  uint uStackX_14;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  plVar10 = (longlong *)0x0;
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if (cVar4 == '\0') {
    return;
  }
  pplVar3 = (longlong **)(param_1 + 0x1e8);
  if (*pplVar3 != (longlong *)0x0) goto LAB_14055b104;
  plVar6 = (longlong *)operator_new(0x50);
  if (plVar6 == (longlong *)0x0) {
    plVar11 = (longlong *)((ulonglong)uStackX_14 << 0x20);
    plVar6 = plVar10;
    plVar9 = plVar10;
  }
  else {
    lVar8 = *param_2;
    plVar11 = *(longlong **)(lVar8 + 0x10);
    plVar9 = plVar10;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar11 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar10, !bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar11[1];
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar9 = (longlong *)0x0;
          if (plVar11 == (longlong *)0x0) goto LAB_14055ae89;
          plVar9 = *(longlong **)(lVar8 + 8);
          plVar7 = plVar11;
          break;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar11 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      plVar11 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar7 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
LAB_14055ae89:
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = (longlong)plVar9;
    plVar6[3] = (longlong)plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar6 + 4) = 2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[8] = 0;
    *(undefined4 *)(plVar6 + 9) = 0;
    plVar9 = (longlong *)0x1;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143fc2170;
    plVar7[2] = (longlong)plVar6;
    plVar10 = plVar7;
  }
  local_48 = plVar6;
  local_40 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar2 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) goto LAB_14055af9d;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar6;
    plVar7 = (longlong *)plVar6[1];
    if (plVar10 != plVar7) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_14055af9d:
  if (pplVar3 != &local_48) {
    *pplVar3 = plVar6;
    local_48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1f0,&local_40);
  }
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if ((plVar9 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar10 = *pplVar3;
  plVar11 = plVar10 + 8;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_1405532e0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar8;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_38 != plVar11) {
    if (plVar6 == (longlong *)0x0) {
      if (((int)plVar10[9] != 0) && (plVar9 = (longlong *)*plVar11, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar11 != 0) {
          lVar8 = FMemory::Realloc(*plVar11,0,0);
          *plVar11 = lVar8;
        }
        *(undefined4 *)(plVar10 + 9) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar11);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar8 = FMemory::Realloc(plVar6,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
LAB_14055b104:
  if (*pplVar3 != (longlong *)0x0) {
    FUN_140563290();
  }
  return;
}



// FUNCTION 14055b130 FUN_14055b130 body=2535 status=ok
// SIG undefined FUN_14055b130(void)

void FUN_14055b130(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 *local_288;
  longlong *local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong lStack_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong lStack_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  longlong local_158 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138 [2];
  undefined1 local_128 [8];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [80];
  
  iVar5 = (int)param_3[1];
  bVar2 = false;
  if (iVar5 < 1) {
    local_res18 = 0;
    plVar6 = &local_res18;
  }
  else {
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)*param_3 + 8))(*(longlong **)*param_3,local_res20);
    iVar5 = (int)param_3[1];
  }
  puVar10 = (undefined8 *)*param_3;
  lVar7 = *plVar6;
  puVar13 = puVar10 + (longlong)iVar5 * 2;
joined_r0x00014055b1a7:
  if (puVar10 != puVar13) {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,local_168);
    if (*plVar6 == lVar7) goto code_r0x00014055b1c6;
    puVar10 = (undefined8 *)*param_3;
    puVar13 = puVar10 + (longlong)(int)param_3[1] * 2;
    local_278 = 0;
    local_270 = 0;
    for (; puVar10 != puVar13; puVar10 = puVar10 + 2) {
      local_250 = (longlong *)puVar10[1];
      local_228 = *puVar10;
      local_210 = 0;
      local_208 = 0;
      local_200 = 0;
      local_220 = (longlong *)0x0;
      lStack_218 = 0;
      if (local_250 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_250 + 1) = (int)local_250[1] + 1;
        UNLOCK();
      }
      local_258 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_220,&local_250);
      plVar6 = local_250;
      if (local_250 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_250 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_250)(local_250);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_250 + 8))(local_250,1);
          }
        }
      }
      uVar3 = local_270;
      lVar7 = (longlong)(int)local_270;
      iVar5 = (int)local_270 + 1;
      local_270 = CONCAT44(local_270._4_4_,iVar5);
      if (local_270._4_4_ < iVar5) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar3 & 0xffffffff);
      }
      puVar14 = (undefined8 *)(lVar7 * 0x30 + local_278);
      *puVar14 = local_228;
      puVar14[1] = local_220;
      if (local_220 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_220 + 1) = (int)local_220[1] + 1;
        UNLOCK();
      }
      FString::FString(puVar14 + 2,&lStack_218);
      FString::FString(puVar14 + 4,&local_208);
      if (local_208 != 0) {
        FMemory::Free();
      }
      if (lStack_218 != 0) {
        FMemory::Free();
      }
      plVar6 = local_220;
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_220 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_220 + 8))(local_220,1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x1c0))(param_1,0,&local_278);
    plVar6 = &local_278;
    goto LAB_14055baf7;
  }
  plVar6 = (longlong *)FName::FName(local_160,L"SPARK",1);
  if (lVar7 == *plVar6) {
    if (0 < (int)param_3[1]) {
      lVar7 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_178,param_2);
      if (local_178 != 0) {
        FUN_142b45fe0(local_178,&local_188);
        if (local_188 != 0) {
          local_288 = (undefined8 *)operator_new(0x38);
          if (local_288 == (undefined8 *)0x0) {
            local_288 = (undefined8 *)0x0;
          }
          else {
            *local_288 = *param_2;
            lVar7 = param_2[1];
            local_288[1] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            local_288[2] = 0;
            local_288[3] = 0;
            local_288[4] = 0;
            local_288[5] = 0;
            *(undefined4 *)(local_288 + 6) = 0;
          }
          plVar6 = (longlong *)0x0;
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *(undefined4 *)(plVar8 + 1) = 1;
            *plVar8 = (longlong)&PTR_FUN_143fc2280;
            *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
            plVar8[2] = (longlong)local_288;
            plVar6 = plVar8;
          }
          local_280 = plVar6;
          SharedPointerInternals::EnableSharedFromThis(&local_288,local_288,local_288);
          puVar10 = local_288;
          if (local_288 != (undefined8 *)0x0) {
            iVar5 = *(int *)((longlong)local_288 + 0x2c);
            plVar6 = (longlong *)local_288[4];
            iVar15 = *(int *)(local_288 + 5);
            if (iVar5 < 0) {
              if (iVar15 != 0) {
                do {
                  if (*plVar6 != 0) {
                    FMemory::Free();
                  }
                  plVar6 = plVar6 + 2;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
                iVar5 = *(int *)((longlong)puVar10 + 0x2c);
              }
              *(undefined4 *)(puVar10 + 5) = 0;
              if (iVar5 != 0) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar10 + 4,0);
              }
            }
            else {
              for (; iVar15 != 0; iVar15 = iVar15 + -1) {
                if (*plVar6 != 0) {
                  FMemory::Free();
                }
                plVar6 = plVar6 + 2;
              }
              *(undefined4 *)(puVar10 + 5) = 0;
            }
            puVar10 = (undefined8 *)*param_3;
            puVar13 = puVar10 + (longlong)(int)param_3[1] * 2;
            for (; puVar10 != puVar13; puVar10 = puVar10 + 2) {
              local_240 = (longlong *)puVar10[1];
              local_1f8 = *puVar10;
              local_1e0 = 0;
              local_1d8 = 0;
              local_1d0 = 0;
              local_1f0 = (longlong *)0x0;
              lStack_1e8 = 0;
              if (local_240 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_240 + 1) = (int)local_240[1] + 1;
                UNLOCK();
              }
              local_248 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1f0,&local_240);
              plVar6 = local_240;
              if (local_240 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_240 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_240)(local_240);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_240 + 8))(local_240,1);
                  }
                }
              }
              puVar14 = local_288;
              iVar5 = *(int *)(local_288 + 3);
              *(int *)(local_288 + 3) = iVar5 + 1;
              if (*(int *)((longlong)local_288 + 0x1c) < iVar5 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(local_288 + 2,iVar5);
              }
              puVar14 = (undefined8 *)((longlong)iVar5 * 0x30 + puVar14[2]);
              *puVar14 = local_1f8;
              puVar14[1] = local_1f0;
              if (local_1f0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
                UNLOCK();
              }
              FString::FString(puVar14 + 2,&lStack_1e8);
              FString::FString(puVar14 + 4,&local_1d8);
              puVar14 = local_288;
              puVar9 = (undefined8 *)
                       (**(code **)(*(longlong *)*puVar10 + 0x28))((longlong *)*puVar10,local_158);
              iVar5 = *(int *)(puVar14 + 5);
              *(int *)(puVar14 + 5) = iVar5 + 1;
              if (*(int *)((longlong)puVar14 + 0x2c) < iVar5 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar14 + 4,iVar5);
              }
              puVar14 = (undefined8 *)((longlong)iVar5 * 0x10 + puVar14[4]);
              *puVar14 = 0;
              *puVar14 = *puVar9;
              *puVar9 = 0;
              *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
              *(undefined4 *)((longlong)puVar14 + 0xc) = *(undefined4 *)((longlong)puVar9 + 0xc);
              puVar9[1] = 0;
              if (local_158[0] != 0) {
                FMemory::Free();
              }
              if (local_1d8 != 0) {
                FMemory::Free();
              }
              if (lStack_1e8 != 0) {
                FMemory::Free();
              }
              plVar6 = local_1f0;
              if (local_1f0 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_1f0 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_1f0)(local_1f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_1f0 + 8))(local_1f0,1);
                  }
                }
              }
            }
            Chaos::FPBDRigidSpringConstraints::FPBDRigidSpringConstraints(local_128);
            TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_f0,local_288 + 4);
            FUN_142b0e490(local_d8);
            FString::operator=(local_c8,local_120);
            FString::operator=(local_b8,local_110);
            FString::operator=(local_a8,local_100);
            TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_98,local_f0);
            local_198 = 0;
            local_190 = 0;
            local_148 = 0;
            uStack_140 = 0;
            puVar10 = (undefined8 *)operator_new(0x28,&local_198);
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[1] = param_1;
              *puVar10 = &DAT_143f3ed00;
              puVar10[2] = FUN_140558ae0;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar10[4] = uVar11;
              *puVar10 = &PTR_GetPoolName_143f3ed48;
            }
            puVar10 = local_288;
            uVar11 = FUN_140537530(local_88,local_d8);
            uVar12 = FUN_142b46360(local_178,local_138);
            uVar4 = FUN_142ad4340(local_188,uVar12,uVar11,&local_198,&local_148);
            *(undefined4 *)(puVar10 + 6) = uVar4;
            if (local_138[0] != 0) {
              FMemory::Free();
            }
            plVar6 = local_280;
            puVar10 = local_288;
            if (0 < *(int *)(local_288 + 6)) {
              bVar2 = true;
              if (local_280 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_280 + 1) = (int)local_280[1] + 1;
                UNLOCK();
              }
              iVar5 = (int)param_1[0x3b];
              *(int *)(param_1 + 0x3b) = iVar5 + 1;
              if (*(int *)((longlong)param_1 + 0x1dc) < iVar5 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x3a,iVar5);
              }
              puVar13 = (undefined8 *)((longlong)iVar5 * 0x10 + param_1[0x3a]);
              *puVar13 = puVar10;
              puVar13[1] = plVar6;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                LOCK();
                plVar8 = plVar6 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
            FUN_142b0f5d0(local_d8);
            FUN_142b0f600(local_128);
          }
          plVar6 = local_280;
          if (local_280 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_280 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_280)(local_280);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
        }
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_180 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar1 = (int *)((longlong)local_180 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_180 + 8))(local_180,1);
            }
          }
        }
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_170 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      if (bVar2) {
        return;
      }
    }
    puVar10 = (undefined8 *)*param_3;
    puVar13 = puVar10 + (longlong)(int)param_3[1] * 2;
    local_268 = 0;
    local_260 = 0;
    for (; puVar10 != puVar13; puVar10 = puVar10 + 2) {
      local_230 = (longlong *)puVar10[1];
      local_1c8 = *puVar10;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_1c0 = (longlong *)0x0;
      lStack_1b8 = 0;
      if (local_230 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_230 + 1) = (int)local_230[1] + 1;
        UNLOCK();
      }
      local_238 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1c0,&local_230);
      plVar6 = local_230;
      if (local_230 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_230 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_230)(local_230);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_230 + 8))(local_230,1);
          }
        }
      }
      uVar3 = local_260;
      lVar7 = (longlong)(int)local_260;
      iVar5 = (int)local_260 + 1;
      local_260 = CONCAT44(local_260._4_4_,iVar5);
      if (local_260._4_4_ < iVar5) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_268,uVar3 & 0xffffffff);
      }
      puVar14 = (undefined8 *)(lVar7 * 0x30 + local_268);
      *puVar14 = local_1c8;
      puVar14[1] = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
        UNLOCK();
      }
      FString::FString(puVar14 + 2,&lStack_1b8);
      FString::FString(puVar14 + 4,&local_1a8);
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      if (lStack_1b8 != 0) {
        FMemory::Free();
      }
      plVar6 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1c0 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x1c0))(param_1,0,&local_268);
    plVar6 = &local_268;
LAB_14055baf7:
    TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
    ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(plVar6);
  }
  return;
code_r0x00014055b1c6:
  puVar10 = puVar10 + 2;
  goto joined_r0x00014055b1a7;
}



// FUNCTION 14055bb20 FUN_14055bb20 body=869 status=ok
// SIG undefined FUN_14055bb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14055bb20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *plStack_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)0x0;
  local_88 = 0;
  local_80 = 0;
  uVar5 = FUN_1404acbf0(param_2,&local_88);
  plVar6 = (longlong *)FUN_1404acbf0(uVar5);
  if (((char)plVar6[2] == '\0') &&
     (lVar7 = (longlong)*(int *)((longlong)plVar6 + 0xc),
     *(int *)((longlong)plVar6 + 0xc) + 4 <= (int)plVar6[1])) {
    lVar4 = *plVar6;
    *(uint *)(param_3 + 0xb0) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + lVar4),
                                    *(undefined1 *)(lVar7 + 1 + lVar4)),
                           *(undefined1 *)(lVar7 + 2 + lVar4)),*(undefined1 *)(lVar7 + 3 + lVar4));
    iVar3 = *(int *)((longlong)plVar6 + 0xc);
    lVar7 = (longlong)iVar3;
    *(int *)((longlong)plVar6 + 0xc) = iVar3 + 4;
    if (((char)plVar6[2] == '\0') && (iVar3 + 8 <= (int)plVar6[1])) {
      lVar4 = *plVar6;
      *(uint *)(param_3 + 0xb4) =
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 4 + lVar4),
                                      *(undefined1 *)(lVar7 + 5 + lVar4)),
                             *(undefined1 *)(lVar7 + 6 + lVar4)),*(undefined1 *)(lVar7 + 7 + lVar4))
      ;
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 4;
      goto LAB_14055bc27;
    }
  }
  *(undefined1 *)(plVar6 + 2) = 1;
LAB_14055bc27:
  if (1 < (int)local_80) {
    local_60 = 0;
    local_58 = 0;
    local_78 = &PTR_FUN_143f740c8;
    local_70 = 0;
    plStack_68 = (longlong *)0x0;
    FUN_1425e3ea0(&local_78,&local_88);
    puVar1 = (undefined8 *)(param_3 + 8);
    local_a8 = local_70;
    if (plStack_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
      UNLOCK();
    }
    plVar6 = plStack_68;
    if (&local_a8 != puVar1) {
      local_a8 = *puVar1;
      plVar6 = *(longlong **)(param_3 + 0x10);
      local_50 = local_70;
      plStack_48 = plStack_68;
      *puVar1 = local_70;
      *(longlong **)(param_3 + 0x10) = plStack_68;
    }
    plStack_a0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_a0 + 8))();
        }
      }
    }
    local_78 = &PTR_FUN_143f740c8;
    if (local_60 != 0) {
      FMemory::Free();
    }
    plVar6 = plStack_68;
    local_78 = &PTR_FUN_143f73d18;
    if (plStack_68 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_68 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_68)(plStack_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  plVar8 = (longlong *)operator_new(0x60);
  plVar6 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar8 + 2,0,0x50);
    *plVar8 = (longlong)&PTR_FUN_143fc0630;
    plVar8[1] = 0;
    plVar8[2] = 0;
    FUN_14052cc90(plVar8 + 3);
    plVar8[5] = 0;
    plVar8[6] = 0;
    *(undefined4 *)(plVar8 + 7) = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar6 = plVar8;
  }
  FUN_140539f10(param_2,plVar6);
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f2d0;
    plVar8[2] = (longlong)plVar6;
    plVar9 = plVar8;
  }
  local_98 = plVar6;
  local_90 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_98,plVar6,plVar6);
  if ((longlong **)(param_3 + 0xa0) != &local_98) {
    *(longlong **)(param_3 + 0xa0) = plVar6;
    local_98 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 0xa8,&local_90);
    plVar9 = local_90;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_1404f28c0(param_1,param_2,param_3 + 0x28);
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14055be90 FUN_14055be90 body=865 status=ok
// SIG undefined FUN_14055be90(void)

void FUN_14055be90(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int local_res8 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_a8 [16];
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  longlong **local_50;
  longlong *local_48;
  longlong *plStack_40;
  
  FUN_1405499a0(param_1 + 0x23,local_res18,param_2);
  plVar8 = (longlong *)0x0;
  if ((local_res18[0] == -1) ||
     (lVar7 = (longlong)local_res18[0] * 0x20 + param_1[0x23], lVar7 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x10);
  }
  local_res8[0] = (**(code **)(*param_1 + 0x78))(param_1,param_2);
  if (iVar9 == local_res8[0]) {
    return;
  }
  local_60 = local_res8;
  local_68 = param_2;
  FUN_140532df0(param_1 + 0x23,local_res20,&local_68,0);
  lVar7 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_78,param_2);
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  if (local_78 != 0) {
    lVar7 = operator_new(0x30);
    plVar4 = plVar8;
    if (lVar7 != 0) {
      uVar3 = FUN_14203c4a0(local_78);
      plVar4 = (longlong *)FUniqueNetIdNull::FUniqueNetIdNull(lVar7,uVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f7de48;
      plVar5[2] = (longlong)plVar4;
      plVar8 = plVar5;
    }
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    local_80 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      if ((*plVar5 != 0) && (plVar5[1] != 0)) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) goto LAB_14055c064;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      *plVar5 = (longlong)plVar4;
      plVar6 = (longlong *)plVar5[1];
      if (plVar8 != plVar6) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          plVar6 = (longlong *)plVar5[1];
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        plVar5[1] = (longlong)plVar8;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
LAB_14055c064:
    local_88 = 0;
    local_98 = plVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_80);
    plVar8 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    plVar8 = plStack_90;
    if (local_98 != (longlong *)0x0) {
      local_48 = local_98;
      plStack_40 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      local_50 = &local_48;
      local_58 = param_2;
      FUN_140532370(param_1 + 0x2d,local_a8,&local_58,0);
      plVar4 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_40 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = plStack_90;
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar8 = plStack_90;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar8 = plStack_90;
          }
        }
      }
      goto LAB_14055c158;
    }
  }
  FUN_14055e740(param_1 + 0x2d,param_2);
  plVar8 = plStack_90;
LAB_14055c158:
  (**(code **)(*param_1 + 0x98))(param_1,param_2,local_res8[0],iVar9);
  plVar4 = plStack_90;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 14055c200 FUN_14055c200 body=118 status=ok
// SIG undefined FUN_14055c200(void)

void FUN_14055c200(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_18,param_2);
  if (local_18 != 0) {
    FUN_142b655a0();
  }
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
  return;
}



// FUNCTION 14055c280 FUN_14055c280 body=1228 status=ok
// SIG undefined FUN_14055c280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14055c280(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong **local_2c0;
  int local_2b8;
  int local_2b4;
  undefined8 local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong *local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 *local_278;
  undefined8 local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258 [2];
  longlong local_248 [2];
  longlong local_238 [2];
  undefined1 local_228 [96];
  undefined1 local_1c8 [336];
  longlong *local_78;
  int local_70;
  char local_68;
  longlong local_60 [2];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return local_48 & 0xffffffffffffff00;
  }
  local_2a0 = param_1;
  FUN_140549500(param_1 + 0x78,&local_2b8,param_2);
  plVar10 = (longlong *)0x0;
  plVar6 = plVar10;
  if (local_2b8 != -1) {
    plVar6 = (longlong *)((longlong)local_2b8 * 0x168 + *(longlong *)(param_1 + 0x78));
  }
  plVar3 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar3 = plVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_298,param_2);
  if (local_298 == 0) {
    uVar12 = 0;
    goto LAB_14055c6dc;
  }
  lVar4 = operator_new(0x30);
  plVar6 = plVar10;
  if (lVar4 != 0) {
    uVar5 = FUN_14203c4a0(local_298);
    plVar6 = (longlong *)FUniqueNetIdNull::FUniqueNetIdNull(lVar4,uVar5);
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar3 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f7de48;
    plVar7[2] = (longlong)plVar6;
    plVar3 = plVar7;
  }
  plVar7 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  local_268 = plVar6;
  local_260 = plVar3;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar11 = *piVar1;
      if (iVar11 == 0) {
        *piVar1 = 0;
        iVar11 = 0;
      }
      UNLOCK();
      if (0 < iVar11) goto LAB_14055c467;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar6;
    plVar10 = (longlong *)plVar7[1];
    if (plVar3 != plVar10) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar7[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar7[1] = (longlong)plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar3 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
LAB_14055c467:
  local_2a8 = (longlong *)param_2[1];
  local_2b0 = *param_2;
  plVar10 = (longlong *)0x0;
  local_288 = local_2b0;
  if (local_2a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
    UNLOCK();
    local_288 = *param_2;
    plVar10 = (longlong *)param_2[1];
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_68 = '\0';
  local_50 = '\0';
  local_280 = plVar10;
  uVar5 = FUN_14054ec00(param_1,local_238,&local_2b0);
  uVar8 = (**(code **)(*plVar6 + 0x28))(plVar6,local_248);
  lVar4 = local_2a0;
  uVar9 = FUN_14054f180(local_2a0,local_258,&local_288);
  local_2c0 = &local_78;
  local_2c8 = local_60;
  FUN_14056c2d0(local_228,uVar9,uVar8,uVar5);
  if (local_258[0] != 0) {
    FMemory::Free();
  }
  if (local_248[0] != 0) {
    FMemory::Free();
  }
  if (local_238[0] != 0) {
    FMemory::Free();
  }
  if ((local_50 != '\0') && (local_50 = '\0', local_60[0] != 0)) {
    FMemory::Free();
  }
  if (local_68 != '\0') {
    local_68 = '\0';
    plVar6 = local_78;
    for (iVar11 = local_70; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar10 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  plVar6 = local_2a8;
  if (local_2a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2a8 + 1;
    lVar2 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_2a8)(local_2a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_2a8 + 8))(local_2a8,1);
      }
    }
  }
  local_278 = param_2;
  local_270 = FUN_1405373b0(local_1c8,local_228,param_2,1);
  FUN_140532010(lVar4 + 0x78,&local_2b4,&local_278,0);
  lVar2 = *(longlong *)(lVar4 + 0x78);
  FUN_140539840(local_1c8);
  FUN_140562700((longlong)local_2b4 * 0x168 + 0x10 + lVar2,&local_268);
  FUN_140566a40(lVar4,param_2);
  uVar12 = 1;
  FUN_14056ed50(local_228);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_14055c6dc:
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_290 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)local_290 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  return uVar12;
}



// FUNCTION 14055c750 FUN_14055c750 body=1631 status=ok
// SIG undefined FUN_14055c750(void)

void FUN_14055c750(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong **pplVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  longlong *local_68 [2];
  longlong local_58 [3];
  
  plVar13 = (longlong *)0x0;
  iVar18 = 0;
  if (0 < (int)param_1[0x51]) {
    plVar7 = (longlong *)(param_1[0x50] + 0xb8);
    plVar15 = plVar13;
    plVar12 = plVar13;
    do {
      if (*plVar7 == param_2) {
        lVar16 = (longlong)(int)plVar12 * 0x118 + param_1[0x50];
        if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0xa0) != 0)) {
          lVar3 = *param_3;
          iVar6 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
                  IndexOfByPredicate<FUniqueNetIdMatcher>(lVar16 + 0xf0,lVar3);
          if (iVar6 != -1) {
            (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3,2);
            return;
          }
          if ((*(char *)(lVar16 + 0x3a) != '\0') ||
             (cVar5 = (**(code **)(*(longlong *)param_1[0x4f] + 0xf8))
                                ((longlong *)param_1[0x4f],param_3), cVar5 == '\0'))
          goto LAB_14055c9af;
          plVar7 = *(longlong **)(lVar16 + 0xa8);
          lVar11 = *(longlong *)(lVar16 + 0xa0);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          puVar10 = *(undefined8 **)(lVar11 + 8);
          plVar15 = (longlong *)(lVar11 + 8);
          puVar14 = puVar10 + (longlong)*(int *)(lVar11 + 0x10) * 2;
          goto joined_r0x00014055c881;
        }
        break;
      }
      plVar12 = (longlong *)(ulonglong)((int)plVar12 + 1);
      plVar15 = (longlong *)((longlong)plVar15 + 1);
      plVar7 = plVar7 + 0x23;
    } while ((longlong)plVar15 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3,2);
  return;
joined_r0x00014055c881:
  if (puVar10 == puVar14) goto LAB_14055c8a4;
  cVar5 = (*(code *)**(undefined8 **)*puVar10)((undefined8 *)*puVar10,lVar3);
  iVar18 = 0;
  if (cVar5 != '\0') goto LAB_14055c95e;
  puVar10 = puVar10 + 2;
  goto joined_r0x00014055c881;
LAB_14055c8a4:
  iVar18 = -0x7fffbffb;
  if (*(int *)(lVar11 + 0x10) < 1) goto LAB_14055c95e;
  plVar8 = (longlong *)operator_new(0x70);
  plVar12 = plVar13;
  plVar17 = plVar13;
  if (plVar8 != (longlong *)0x0) {
    plVar12 = (longlong *)*plVar15;
    uVar9 = (**(code **)(**(longlong **)(lVar16 + 0xa0) + 0x38))
                      (*(longlong **)(lVar16 + 0xa0),local_58);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = *plVar12;
    lVar4 = plVar12[1];
    plVar8[3] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8[4] = *param_3;
    lVar4 = param_3[1];
    plVar8[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FString::FString(plVar8 + 6,uVar9);
    plVar8[8] = param_2;
    plVar8[9] = 0;
    plVar8[10] = 0;
    *(undefined4 *)(plVar8 + 0xb) = 2;
    plVar8[0xc] = 0;
    *(undefined4 *)(plVar8 + 0xd) = 0;
    plVar12 = (longlong *)0x1;
    plVar17 = plVar8;
  }
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143fc2180;
    plVar8[2] = (longlong)plVar17;
    plVar13 = plVar8;
  }
  if (plVar17 != (longlong *)0x0) {
    if ((*plVar17 != 0) && (plVar17[1] != 0)) {
      piVar1 = (int *)(plVar17[1] + 8);
      LOCK();
      iVar18 = *piVar1;
      if (iVar18 == 0) {
        *piVar1 = 0;
        iVar18 = 0;
      }
      UNLOCK();
      if (0 < iVar18) goto LAB_14055cb7f;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar17 = (longlong)plVar17;
    plVar8 = (longlong *)plVar17[1];
    if (plVar13 != plVar8) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar17[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar17[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar13 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
LAB_14055cb7f:
  if ((plVar12 != (longlong *)0x0) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  iVar18 = -0x7fffbffb;
  if (plVar17 != (longlong *)0x0) {
    iVar18 = *(int *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x10) = iVar18 + 1;
    if (*(int *)(lVar11 + 0x14) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar18);
    }
    plVar15 = (longlong *)((longlong)iVar18 * 0x10 + *plVar15);
    *plVar15 = *param_3;
    lVar11 = param_3[1];
    plVar15[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    iVar18 = (int)param_1[0x74];
    *(int *)(param_1 + 0x74) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0x3a4) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x73,iVar18);
    }
    puVar10 = (undefined8 *)((longlong)iVar18 * 0x10 + param_1[0x73]);
    *puVar10 = plVar17;
    puVar10[1] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar15 = plVar13 + 1;
      lVar11 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    pplVar2 = (longlong **)(plVar17 + 0xc);
    plVar15 = (longlong *)FMemory::Realloc(0,0x30);
    local_68[0] = plVar15;
    if (plVar15 != (longlong *)0x0) {
      plVar15[1] = (longlong)param_1;
      *plVar15 = (longlong)&DAT_143f3ed00;
      plVar15[2] = (longlong)FUN_140557710;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar15[4] = lVar11;
      *plVar15 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_68 != pplVar2) {
      if (plVar15 == (longlong *)0x0) {
        if (((int)plVar17[0xd] != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x28))(plVar12,0);
          if (*pplVar2 != (longlong *)0x0) {
            plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
            *pplVar2 = plVar12;
          }
          *(undefined4 *)(plVar17 + 0xd) = 0;
        }
      }
      else {
        (**(code **)(*plVar15 + 0x30))(plVar15,pplVar2);
      }
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x28))(plVar15,0);
      local_68[0] = (longlong *)FMemory::Realloc(plVar15,0,0);
      if (local_68[0] != (longlong *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
    FUN_140565000(plVar17);
    iVar18 = 0x3e5;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    lVar11 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_14055c95e:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar7 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if ((iVar18 == 0) || (iVar18 == 0x3e5)) {
LAB_14055c9af:
    iVar6 = *(int *)(lVar16 + 0xf8);
    *(int *)(lVar16 + 0xf8) = iVar6 + 1;
    if (*(int *)(lVar16 + 0xfc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar16 + 0xf0),iVar6);
    }
    plVar13 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar16 + 0xf0));
    *plVar13 = *param_3;
    lVar11 = param_3[1];
    plVar13[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    *(int *)(lVar16 + 0xb4) = *(int *)(lVar16 + 0x30) - *(int *)(lVar16 + 0xf8);
    if (*(int *)(lVar16 + 0x110) == 4) {
      plVar13 = (longlong *)(lVar16 + 0x100);
      iVar6 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
              IndexOfByPredicate<FUniqueNetIdMatcher>(plVar13,lVar3);
      if (iVar6 == -1) {
        iVar6 = *(int *)(lVar16 + 0x108);
        *(int *)(lVar16 + 0x108) = iVar6 + 1;
        if (*(int *)(lVar16 + 0x10c) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar6);
        }
        plVar13 = (longlong *)((longlong)iVar6 * 0x10 + *plVar13);
        *plVar13 = *param_3;
        lVar16 = param_3[1];
        plVar13[1] = lVar16;
        if (lVar16 != 0) {
          LOCK();
          *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
          UNLOCK();
        }
      }
    }
    if (iVar18 == 0x3e5) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3,(iVar18 != 0) + '\x01');
  return;
}



// FUNCTION 14055cdb0 FUN_14055cdb0 body=316 status=ok
// SIG undefined FUN_14055cdb0(void)

undefined8 FUN_14055cdb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined1 local_res18 [8];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [96];
  undefined1 local_158 [336];
  
  if (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac) < *(int *)(param_1 + 0x120)) {
    FUN_140549500(param_1 + 0xd0,local_res8);
    lVar2 = 0;
    if (local_res8[0] != -1) {
      lVar2 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0xd0);
    }
    lVar1 = lVar2 + 0x10;
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    if (lVar1 == 0) {
      FUN_14056c420(local_1b8);
      local_1d8 = param_2;
      local_1d0 = FUN_1405373b0(local_158,local_1b8,param_2,0);
      FUN_140532010(param_1 + 0xd0,local_res18,&local_1d8,0);
      FUN_140539840(local_158);
      local_1c8 = *param_2;
      local_1c0 = param_2[1];
      if (local_1c0 != 0) {
        LOCK();
        *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
        UNLOCK();
      }
      FUN_140548d50(param_1,&local_1c8);
      FUN_140562c50(param_1,param_2);
      FUN_14056ed50(local_1b8);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14055cef0 FUN_14055cef0 body=664 status=ok
// SIG undefined FUN_14055cef0(void)

void FUN_14055cef0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar9 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar9;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar16 = 0;
      uVar18 = (ulonglong)uVar8;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar16;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar8 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar15 = local_68 + 1;
        bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar15;
        if (bVar7) goto LAB_14055d022;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar8 & uVar8;
      iVar15 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_54 = (iStack_50 - iVar15) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_14055d022:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        puVar17 = (undefined8 *)((longlong)iStack_2c * 0x38 + *param_1);
        plVar14 = (longlong *)puVar17[1];
        plVar5 = (longlong *)*puVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if (uVar8 < 4) {
          pbVar11 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5);
          uVar8 = (uint)*pbVar11;
        }
        else {
          pcVar6 = *(code **)(*plVar5 + 0x10);
          if (uVar8 < 8) {
            puVar12 = (uint *)(*pcVar6)();
            uVar8 = *puVar12;
          }
          else {
            puVar13 = (undefined8 *)(*pcVar6)(plVar5);
            uVar8 = (int)*puVar13 + (int)((ulonglong)*puVar13 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar17 + 0x34) = (int)*plVar2 - 1U & uVar8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar14 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(puVar17 + 6) =
             *(undefined4 *)
              ((longlong)plVar14 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x34)) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x34)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055d190 FUN_14055d190 body=676 status=ok
// SIG undefined FUN_14055d190(void)

void FUN_14055d190(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar9 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar9;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar16 = 0;
      uVar18 = (ulonglong)uVar8;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar16;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar8 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar15 = local_68 + 1;
        bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar15;
        if (bVar7) goto LAB_14055d2c2;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar8 & uVar8;
      iVar15 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_54 = (iStack_50 - iVar15) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_14055d2c2:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        puVar17 = (undefined8 *)((longlong)iStack_2c * 0x168 + *param_1);
        plVar14 = (longlong *)puVar17[1];
        plVar5 = (longlong *)*puVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if (uVar8 < 4) {
          pbVar11 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5);
          uVar8 = (uint)*pbVar11;
        }
        else {
          pcVar6 = *(code **)(*plVar5 + 0x10);
          if (uVar8 < 8) {
            puVar12 = (uint *)(*pcVar6)();
            uVar8 = *puVar12;
          }
          else {
            puVar13 = (undefined8 *)(*pcVar6)(plVar5);
            uVar8 = (int)*puVar13 + (int)((ulonglong)*puVar13 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar17 + 0x164) = (int)*plVar2 - 1U & uVar8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar14 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(puVar17 + 0x2c) =
             *(undefined4 *)
              ((longlong)plVar14 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x164)) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x164)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055d440 FUN_14055d440 body=664 status=ok
// SIG undefined FUN_14055d440(void)

void FUN_14055d440(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar9 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar9;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar16 = 0;
      uVar18 = (ulonglong)uVar8;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar16;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar8 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar15 = local_68 + 1;
        bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar15;
        if (bVar7) goto LAB_14055d572;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar8 & uVar8;
      iVar15 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_54 = (iStack_50 - iVar15) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_14055d572:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        puVar17 = (undefined8 *)((longlong)iStack_2c * 0x68 + *param_1);
        plVar14 = (longlong *)puVar17[1];
        plVar5 = (longlong *)*puVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if (uVar8 < 4) {
          pbVar11 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5);
          uVar8 = (uint)*pbVar11;
        }
        else {
          pcVar6 = *(code **)(*plVar5 + 0x10);
          if (uVar8 < 8) {
            puVar12 = (uint *)(*pcVar6)();
            uVar8 = *puVar12;
          }
          else {
            puVar13 = (undefined8 *)(*pcVar6)(plVar5);
            uVar8 = (int)*puVar13 + (int)((ulonglong)*puVar13 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar17 + 100) = (int)*plVar2 - 1U & uVar8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar14 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(puVar17 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar14 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 100)) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 100)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055d6e0 FUN_14055d6e0 body=669 status=ok
// SIG undefined FUN_14055d6e0(void)

void FUN_14055d6e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar10 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar10;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar17 = 0;
      uVar18 = (ulonglong)uVar9;
      do {
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)((longlong)plVar15 + uVar11 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar5 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar9 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        lVar10 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar16 = local_68 + 1;
        bVar8 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar16;
        if (bVar8) goto LAB_14055d812;
        uVar9 = puVar13[lVar10 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      iVar16 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = 0x1f - iVar16;
      }
      iStack_54 = (iStack_50 - iVar16) + 0x1f;
      if (iVar5 < iStack_54) {
LAB_14055d812:
        iStack_54 = iVar5;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        plVar15 = *(longlong **)(*param_1 + 8 + (longlong)iStack_2c * 0x28);
        puVar4 = (undefined8 *)(*param_1 + (longlong)iStack_2c * 0x28);
        plVar6 = (longlong *)*puVar4;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        uVar9 = (**(code **)(*plVar6 + 0x18))(plVar6);
        if (uVar9 < 4) {
          pbVar12 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6);
          uVar9 = (uint)*pbVar12;
        }
        else {
          pcVar7 = *(code **)(*plVar6 + 0x10);
          if (uVar9 < 8) {
            puVar13 = (uint *)(*pcVar7)();
            uVar9 = *puVar13;
          }
          else {
            puVar14 = (undefined8 *)(*pcVar7)(plVar6);
            uVar9 = (int)*puVar14 + (int)((ulonglong)*puVar14 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar4 + 0x24) = (int)*plVar2 - 1U & uVar9;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar15 + 1;
          lVar10 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        *(undefined4 *)(puVar4 + 4) =
             *(undefined4 *)
              ((longlong)plVar15 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar4 + 0x24)) * 4);
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        *(int *)((longlong)plVar15 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar4 + 0x24)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055d980 FUN_14055d980 body=664 status=ok
// SIG undefined FUN_14055d980(void)

void FUN_14055d980(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar9 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar9;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar16 = 0;
      uVar18 = (ulonglong)uVar8;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar16;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar8 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar15 = local_68 + 1;
        bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar15;
        if (bVar7) goto LAB_14055dab2;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar8 & uVar8;
      iVar15 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_54 = (iStack_50 - iVar15) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_14055dab2:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        puVar17 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        plVar14 = (longlong *)puVar17[1];
        plVar5 = (longlong *)*puVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if (uVar8 < 4) {
          pbVar11 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5);
          uVar8 = (uint)*pbVar11;
        }
        else {
          pcVar6 = *(code **)(*plVar5 + 0x10);
          if (uVar8 < 8) {
            puVar12 = (uint *)(*pcVar6)();
            uVar8 = *puVar12;
          }
          else {
            puVar13 = (undefined8 *)(*pcVar6)(plVar5);
            uVar8 = (int)*puVar13 + (int)((ulonglong)*puVar13 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar17 + 0x1c) = (int)*plVar2 - 1U & uVar8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar14 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(puVar17 + 3) =
             *(undefined4 *)
              ((longlong)plVar14 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x1c)) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x1c)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055dc20 FUN_14055dc20 body=543 status=ok
// SIG undefined FUN_14055dc20(void)

void FUN_14055dc20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14055dd4f;
        uVar5 = puVar14[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14055dd4f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x78 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x74) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xe) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055de40 FUN_14055de40 body=669 status=ok
// SIG undefined FUN_14055de40(void)

void FUN_14055de40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar10 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar10;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar17 = 0;
      uVar18 = (ulonglong)uVar9;
      do {
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)((longlong)plVar15 + uVar11 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar5 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar9 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        lVar10 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar16 = local_68 + 1;
        bVar8 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar16;
        if (bVar8) goto LAB_14055df72;
        uVar9 = puVar13[lVar10 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      iVar16 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = 0x1f - iVar16;
      }
      iStack_54 = (iStack_50 - iVar16) + 0x1f;
      if (iVar5 < iStack_54) {
LAB_14055df72:
        iStack_54 = iVar5;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        plVar15 = *(longlong **)(*param_1 + 8 + (longlong)iStack_2c * 0x18);
        puVar4 = (undefined8 *)(*param_1 + (longlong)iStack_2c * 0x18);
        plVar6 = (longlong *)*puVar4;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        uVar9 = (**(code **)(*plVar6 + 0x18))(plVar6);
        if (uVar9 < 4) {
          pbVar12 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6);
          uVar9 = (uint)*pbVar12;
        }
        else {
          pcVar7 = *(code **)(*plVar6 + 0x10);
          if (uVar9 < 8) {
            puVar13 = (uint *)(*pcVar7)();
            uVar9 = *puVar13;
          }
          else {
            puVar14 = (undefined8 *)(*pcVar7)(plVar6);
            uVar9 = (int)*puVar14 + (int)((ulonglong)*puVar14 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar4 + 0x14) = (int)*plVar2 - 1U & uVar9;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar15 + 1;
          lVar10 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        *(undefined4 *)(puVar4 + 2) =
             *(undefined4 *)
              ((longlong)plVar15 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar4 + 0x14)) * 4);
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        *(int *)((longlong)plVar15 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar4 + 0x14)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14055e0e0 FUN_14055e0e0 body=622 status=ok
// SIG undefined FUN_14055e0e0(void)

void FUN_14055e0e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *local_res20;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50 [2];
  undefined1 local_40 [24];
  
  lVar6 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_b8,param_2);
  if (local_b8 == 0) {
    (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,4);
  }
  else {
    cVar5 = FUN_142b54900();
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,7);
    }
    else {
      FUN_142b47dc0(local_b8,&local_98);
      if (local_98 == 0) {
        (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,6);
      }
      else {
        uVar8 = *param_2;
        lVar6 = param_2[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        lVar3 = param_3[1];
        plVar4 = (longlong *)*param_3;
        local_res20 = plVar4;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          local_res20 = (longlong *)*param_3;
        }
        local_a8 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_a0 = 0;
        local_88 = param_1;
        local_80 = uVar8;
        local_78 = lVar6;
        local_70 = plVar4;
        local_68 = lVar3;
        puVar7 = (undefined8 *)operator_new(0x40,&local_a8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_GetPoolName_143fc1930;
          puVar7[1] = param_1;
          puVar7[2] = uVar8;
          puVar7[3] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          puVar7[4] = plVar4;
          puVar7[5] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[7] = uVar8;
          *puVar7 = &PTR_GetPoolName_143fc1978;
        }
        uVar8 = (**(code **)(*local_res20 + 0x28))(local_res20,local_40);
        uVar9 = FUN_142b46360(local_b8,local_50);
        FUN_142ae5b20(local_98,uVar9,uVar8,&local_a8,&local_60);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        FUN_140537630(&local_88);
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_90 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 14055e350 Remove body=370 status=ok
// SIG undefined Remove(void)

int TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar7 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(longlong *)*param_1 != *param_2;
  lVar9 = 0;
  iVar11 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar12 = iVar11 + 1;
    if (lVar9 < lVar7) {
      plVar6 = (longlong *)(lVar9 * 0x10 + *param_1);
      do {
        if (bVar13 != (*plVar6 != *param_2)) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar9 < lVar7);
    }
    iVar8 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar8 != 0) {
        plVar6 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar6;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x10 + *param_1),
                   (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar8 << 4);
      }
      iVar10 = iVar10 + iVar8;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar7 <= lVar9) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 14055e4d0 FUN_14055e4d0 body=617 status=ok
// SIG undefined FUN_14055e4d0(void)

undefined8 FUN_14055e4d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar12 = (longlong *)*param_2;
  uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (uVar8 < 4) {
    pbVar9 = (byte *)(**(code **)(*plVar12 + 0x10))(plVar12);
    uVar8 = (uint)*pbVar9;
  }
  else {
    pcVar4 = *(code **)(*plVar12 + 0x10);
    if (uVar8 < 8) {
      puVar10 = (uint *)(*pcVar4)();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(*pcVar4)(plVar12);
      uVar8 = (int)((ulonglong)*puVar11 >> 0x20) * 0x17 + (int)*puVar11;
    }
  }
  lVar13 = (longlong)(int)((int)param_1[9] - 1U & uVar8);
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  plVar1 = (longlong *)((longlong)plVar12 + lVar13 * 4);
  iVar2 = *(int *)((longlong)plVar12 + lVar13 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    plVar17 = (longlong *)((longlong)iVar2 * 0x168 + *param_1);
    plVar5 = (longlong *)plVar17[1];
    puVar11 = (undefined8 *)*plVar17;
    plVar12 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    if ((puVar11 == (undefined8 *)*param_2) ||
       (cVar7 = (*(code *)**(undefined8 **)*param_2)(), cVar7 != '\0')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar13 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar14 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (bVar6) break;
    plVar1 = plVar17 + 0x2c;
    iVar2 = (int)*plVar1;
  }
  iVar2 = (int)*plVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar13 = *param_1;
    lVar16 = (longlong)iVar2 * 0x168;
    lVar15 = (longlong)(int)(*(uint *)(lVar16 + 0x164 + lVar13) & (int)param_1[9] - 1U);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    piVar14 = (int *)((longlong)plVar12 + lVar15 * 4);
    iVar3 = *(int *)((longlong)plVar12 + lVar15 * 4);
    while (iVar3 != -1) {
      if (iVar3 == iVar2) {
        *piVar14 = *(int *)(lVar16 + 0x160 + lVar13);
        break;
      }
      piVar14 = (int *)((longlong)iVar3 * 0x168 + 0x160 + lVar13);
      iVar3 = *piVar14;
    }
  }
  lVar13 = (longlong)iVar2 * 0x168 + *param_1;
  FUN_140539840(lVar13 + 0x10);
  plVar12 = *(longlong **)(lVar13 + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar14 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  FUN_14055eff0(param_1,iVar2,1);
  return 1;
}



// FUNCTION 14055e740 FUN_14055e740 body=559 status=ok
// SIG undefined FUN_14055e740(void)

undefined8 FUN_14055e740(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  byte *pbVar13;
  uint *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar16 = (longlong *)*param_2;
  uVar12 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (uVar12 < 4) {
    pbVar13 = (byte *)(**(code **)(*plVar16 + 0x10))(plVar16);
    uVar12 = (uint)*pbVar13;
  }
  else {
    pcVar7 = *(code **)(*plVar16 + 0x10);
    if (uVar12 < 8) {
      puVar14 = (uint *)(*pcVar7)();
      uVar12 = *puVar14;
    }
    else {
      puVar15 = (undefined8 *)(*pcVar7)(plVar16);
      uVar12 = (int)((ulonglong)*puVar15 >> 0x20) * 0x17 + (int)*puVar15;
    }
  }
  lVar17 = (longlong)(int)((int)param_1[9] - 1U & uVar12);
  plVar16 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar16 = param_1 + 7;
  }
  plVar2 = (longlong *)((longlong)plVar16 + lVar17 * 4);
  iVar5 = *(int *)((longlong)plVar16 + lVar17 * 4);
  while( true ) {
    if (iVar5 == -1) {
      return 0;
    }
    plVar8 = *(longlong **)(*param_1 + 8 + (longlong)iVar5 * 0x28);
    plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x28);
    puVar15 = (undefined8 *)*plVar3;
    plVar16 = plVar8 + 1;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar16 = (int)*plVar16 + 1;
      UNLOCK();
    }
    if ((puVar15 == (undefined8 *)*param_2) ||
       (cVar11 = (*(code *)**(undefined8 **)*param_2)(), cVar11 != '\0')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      lVar17 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (bVar10) break;
    iVar5 = (int)plVar3[4];
    plVar2 = plVar3 + 4;
  }
  iVar5 = (int)*plVar2;
  lVar17 = (longlong)iVar5;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar9 = *param_1;
    lVar18 = (longlong)(int)(*(uint *)(lVar9 + 0x24 + lVar17 * 0x28) & (int)param_1[9] - 1U);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    puVar4 = (undefined4 *)((longlong)plVar16 + lVar18 * 4);
    iVar6 = *(int *)((longlong)plVar16 + lVar18 * 4);
    while (iVar6 != -1) {
      if (iVar6 == iVar5) {
        *puVar4 = *(undefined4 *)(lVar9 + lVar17 * 0x28 + 0x20);
        break;
      }
      lVar18 = (longlong)iVar6 * 5 + 4;
      puVar4 = (undefined4 *)(lVar9 + lVar18 * 8);
      iVar6 = *(int *)(lVar9 + lVar18 * 8);
    }
  }
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
            (*param_1 + lVar17 * 0x28);
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar5,1);
  return 1;
}



// FUNCTION 14055e970 FUN_14055e970 body=627 status=ok
// SIG undefined FUN_14055e970(void)

undefined8 FUN_14055e970(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar14 = (longlong *)*param_2;
  uVar10 = (**(code **)(*plVar14 + 0x18))(plVar14);
  if (uVar10 < 4) {
    pbVar11 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14);
    uVar10 = (uint)*pbVar11;
  }
  else {
    pcVar5 = *(code **)(*plVar14 + 0x10);
    if (uVar10 < 8) {
      puVar12 = (uint *)(*pcVar5)();
      uVar10 = *puVar12;
    }
    else {
      puVar13 = (undefined8 *)(*pcVar5)(plVar14);
      uVar10 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13;
    }
  }
  lVar15 = (longlong)(int)((int)param_1[9] - 1U & uVar10);
  plVar14 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar14 = param_1 + 7;
  }
  plVar17 = (longlong *)((longlong)plVar14 + lVar15 * 4);
  iVar3 = *(int *)((longlong)plVar14 + lVar15 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    plVar6 = *(longlong **)(*param_1 + 8 + (longlong)iVar3 * 0x28);
    plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x28);
    puVar13 = (undefined8 *)*plVar2;
    plVar14 = plVar6 + 1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar14 = (int)*plVar14 + 1;
      UNLOCK();
    }
    if ((puVar13 == (undefined8 *)*param_2) ||
       (cVar9 = (*(code *)**(undefined8 **)*param_2)(), cVar9 != '\0')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      lVar15 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar16 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (bVar8) break;
    plVar17 = plVar2 + 4;
    iVar3 = (int)*plVar17;
  }
  iVar3 = (int)*plVar17;
  lVar15 = (longlong)iVar3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    piVar16 = (int *)((longlong)
                      (int)(*(uint *)(lVar7 + 0x24 + lVar15 * 0x28) & (int)param_1[9] - 1U) * 4 +
                     (longlong)plVar14);
    iVar4 = *piVar16;
    while (iVar4 != -1) {
      if (iVar4 == iVar3) {
        *piVar16 = *(int *)(lVar7 + lVar15 * 0x28 + 0x20);
        break;
      }
      lVar1 = (longlong)iVar4 * 5 + 4;
      piVar16 = (int *)(lVar7 + lVar1 * 8);
      iVar4 = *(int *)(lVar7 + lVar1 * 8);
    }
  }
  lVar7 = *param_1;
  if (*(longlong *)(lVar7 + 0x10 + lVar15 * 0x28) != 0) {
    FMemory::Free();
  }
  plVar14 = *(longlong **)(lVar7 + lVar15 * 0x28 + 8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar15 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar16 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 14055ebf0 FUN_14055ebf0 body=396 status=ok
// SIG undefined FUN_14055ebf0(void)

undefined8 FUN_14055ebf0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_140438070(puVar7);
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar2);
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar10 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar10 + lVar6 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0x78 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar9;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar7);
    if (iVar3 == 0) break;
    iVar3 = *(int *)(puVar9 + 0xe);
    piVar8 = (int *)(puVar9 + 0xe);
  }
  iVar3 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)iVar3 * 0x78;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 0x74 + lVar6));
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar10 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar10 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar8 = *(int *)(lVar11 + 0x70 + lVar6);
        break;
      }
      piVar8 = (int *)(lVar6 + 0x70 + (longlong)iVar1 * 0x78);
      iVar1 = *piVar8;
    }
  }
  plVar10 = (longlong *)((longlong)iVar3 * 0x78 + *param_1);
  FUN_140538430(plVar10 + 2);
  if (*plVar10 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 14055ed80 FUN_14055ed80 body=609 status=ok
// SIG undefined FUN_14055ed80(void)

undefined8 FUN_14055ed80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar14 = (longlong *)*param_2;
  uVar10 = (**(code **)(*plVar14 + 0x18))(plVar14);
  if (uVar10 < 4) {
    pbVar11 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14);
    uVar10 = (uint)*pbVar11;
  }
  else {
    pcVar5 = *(code **)(*plVar14 + 0x10);
    if (uVar10 < 8) {
      puVar12 = (uint *)(*pcVar5)();
      uVar10 = *puVar12;
    }
    else {
      puVar13 = (undefined8 *)(*pcVar5)(plVar14);
      uVar10 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13;
    }
  }
  lVar15 = (longlong)(int)((int)param_1[9] - 1U & uVar10);
  plVar14 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar14 = param_1 + 7;
  }
  plVar17 = (longlong *)((longlong)plVar14 + lVar15 * 4);
  iVar3 = *(int *)((longlong)plVar14 + lVar15 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    plVar6 = *(longlong **)(*param_1 + 8 + (longlong)iVar3 * 0x18);
    plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
    puVar13 = (undefined8 *)*plVar2;
    plVar14 = plVar6 + 1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar14 = (int)*plVar14 + 1;
      UNLOCK();
    }
    if ((puVar13 == (undefined8 *)*param_2) ||
       (cVar9 = (*(code *)**(undefined8 **)*param_2)(), cVar9 != '\0')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      lVar15 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar16 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (bVar8) break;
    plVar17 = plVar2 + 2;
    iVar3 = (int)*plVar17;
  }
  iVar3 = (int)*plVar17;
  lVar15 = (longlong)iVar3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    piVar16 = (int *)((longlong)
                      (int)(*(uint *)(lVar7 + 0x14 + lVar15 * 0x18) & (int)param_1[9] - 1U) * 4 +
                     (longlong)plVar14);
    iVar4 = *piVar16;
    while (iVar4 != -1) {
      if (iVar4 == iVar3) {
        *piVar16 = *(int *)(lVar7 + lVar15 * 0x18 + 0x10);
        break;
      }
      lVar1 = (longlong)iVar4 * 3 + 2;
      piVar16 = (int *)(lVar7 + lVar1 * 8);
      iVar4 = *(int *)(lVar7 + lVar1 * 8);
    }
  }
  plVar14 = *(longlong **)(*param_1 + 8 + lVar15 * 0x18);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar15 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar16 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 14055eff0 FUN_14055eff0 body=181 status=ok
// SIG undefined FUN_14055eff0(void)

void FUN_14055eff0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x168;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x168 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x168;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14055f0b0 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x78;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x78 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x78;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14055f160 FUN_14055f160 body=622 status=ok
// SIG undefined FUN_14055f160(void)

void FUN_14055f160(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *local_res20;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50 [2];
  undefined1 local_40 [24];
  
  lVar6 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_b8,param_2);
  if (local_b8 == 0) {
    (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,4);
  }
  else {
    cVar5 = FUN_142b54900();
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,7);
    }
    else {
      FUN_142b47dc0(local_b8,&local_98);
      if (local_98 == 0) {
        (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,6);
      }
      else {
        uVar8 = *param_2;
        lVar6 = param_2[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        lVar3 = param_3[1];
        plVar4 = (longlong *)*param_3;
        local_res20 = plVar4;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          local_res20 = (longlong *)*param_3;
        }
        local_a8 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_a0 = 0;
        local_88 = param_1;
        local_80 = uVar8;
        local_78 = lVar6;
        local_70 = plVar4;
        local_68 = lVar3;
        puVar7 = (undefined8 *)operator_new(0x40,&local_a8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_GetPoolName_143fc16f0;
          puVar7[1] = param_1;
          puVar7[2] = uVar8;
          puVar7[3] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          puVar7[4] = plVar4;
          puVar7[5] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[7] = uVar8;
          *puVar7 = &PTR_GetPoolName_143fc1738;
        }
        uVar8 = (**(code **)(*local_res20 + 0x28))(local_res20,local_40);
        uVar9 = FUN_142b46360(local_b8,local_50);
        FUN_142ae5b20(local_98,uVar9,uVar8,&local_a8,&local_60);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        FUN_140537630(&local_88);
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_90 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 14055f3d0 FUN_14055f3d0 body=80 status=ok
// SIG undefined FUN_14055f3d0(void)

void FUN_14055f3d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x288) < 1) {
    return;
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x280) + 0xb8);
  uVar3 = uVar2;
  do {
    if (*plVar1 == param_2) {
      FUN_1404f31b0((longlong *)(param_1 + 0x280),uVar3,1,1);
      return;
    }
    uVar3 = (ulonglong)((int)uVar3 + 1);
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 0x23;
  } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x288));
  return;
}



// FUNCTION 14055f420 FUN_14055f420 body=680 status=ok
// SIG undefined FUN_14055f420(void)

void FUN_14055f420(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(int *)(param_1 + 0x58) < 0) || (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x58))) {
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    if ((*(int *)(param_1 + 0x68) != 0) &&
       ((*(longlong **)(param_1 + 0x60) != (longlong *)0x0 &&
        (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(), cVar3 != '\0')))) {
      if (*(int *)(param_1 + 0x68) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x60);
      }
      (**(code **)(*plVar9 + 0x40))(plVar9,uVar8);
    }
    if (local_20 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar9 = local_20 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*local_20 + 8))(local_20,1);
    return;
  }
  lVar5 = operator_new(0x58);
  plVar9 = (longlong *)0x0;
  plVar6 = plVar9;
  if (lVar5 != 0) {
    plVar6 = (longlong *)
             FUN_140536030(lVar5,(longlong)*(int *)(param_1 + 0x58) * 0x10 +
                                 *(longlong *)(param_1 + 0x10),param_1 + 0x28);
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143fc21f0;
    plVar7[2] = (longlong)plVar6;
    plVar9 = plVar7;
  }
  pplVar1 = (longlong **)(param_1 + 0x48);
  local_48 = plVar6;
  local_40 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar2 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_14055f55e;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar6;
    plVar7 = (longlong *)plVar6[1];
    if (plVar9 != plVar7) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14055f55e:
  if (pplVar1 != &local_48) {
    *pplVar1 = plVar6;
    local_48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_40);
  }
  plVar9 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar9 = *pplVar1;
  if (plVar9 != (longlong *)0x0) {
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
    FUN_1405313f0(plVar9 + 9,uVar8,&LAB_140557ad0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    FUN_1405654a0(*pplVar1);
  }
  return;
}



// FUNCTION 14055f6d0 FUN_14055f6d0 body=158 status=ok
// SIG undefined FUN_14055f6d0(void)

void FUN_14055f6d0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty();
    return;
  }
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 8);
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14055f770 FUN_14055f770 body=138 status=ok
// SIG undefined FUN_14055f770(void)

void FUN_14055f770(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x168,0);
  iVar4 = (int)(uVar3 / 0x168);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x168,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14055f800 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x60,0);
  iVar4 = (int)(uVar3 / 0x60);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x60,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14055f890 FUN_14055f890 body=118 status=ok
// SIG undefined FUN_14055f890(void)

void FUN_14055f890(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x168,0);
    iVar3 = (int)(uVar1 / 0x168);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x168,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14055f910 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x68,0);
    iVar3 = (int)(uVar1 / 0x68);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x68,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14055f980 FUN_14055f980 body=1596 status=ok
// SIG undefined FUN_14055f980(void)

void FUN_14055f980(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong **pplVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff28;
  longlong *local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [16];
  
  if (0 < (int)param_4[1]) {
    uVar10 = 0;
    if (0 < (int)param_1[0x51]) {
      plVar5 = (longlong *)(param_1[0x50] + 0xb8);
      uVar13 = uVar10;
      do {
        if (*plVar5 == param_3) {
          lVar11 = (longlong)(int)uVar13 * 0x118 + param_1[0x50];
          if (((lVar11 != 0) && (plVar5 = *(longlong **)(lVar11 + 0xa0), plVar5 != (longlong *)0x0))
             && (*(char *)(lVar11 + 0x3a) == '\0')) {
            (**(code **)(*plVar5 + 0x38))(plVar5,local_58);
            puVar7 = (undefined8 *)*param_4;
            puVar14 = puVar7 + (longlong)(int)param_4[1] * 2;
            local_c8 = (longlong *)0x0;
            local_c0 = 0;
            for (; puVar7 != puVar14; puVar7 = puVar7 + 2) {
              plVar5 = (longlong *)*puVar7;
              plVar4 = (longlong *)FName::FName(local_res20,L"SPARK",1);
              plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_48);
              if (*plVar5 == *plVar4) {
                local_b8 = (void *)0x0;
                local_b0 = 0;
                (**(code **)(*(longlong *)param_1[0x4f] + 0x20))
                          ((longlong *)param_1[0x4f],&local_78);
                if (local_78 != (longlong *)0x0) {
                  in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
                  (**(code **)(*local_78 + 0x140))
                            (local_78,&local_88,param_2,puVar7,in_stack_ffffffffffffff28);
                  if (local_88 != (longlong *)0x0) {
                    local_a8 = 0;
                    local_a0 = 0xb;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
                    FGenericPlatformString::Memcpy(local_a8,L"session_id",0x16);
                    (**(code **)(*local_88 + 0x20))(local_88,&local_a8,&local_b8);
                    if (local_a8 != 0) {
                      FMemory::Free();
                    }
                  }
                  plVar5 = local_80;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = local_80 + 1;
                    lVar11 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*local_80)(local_80);
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
                uVar10 = local_c0;
                if (1 < (int)local_b0) {
                  lVar11 = (longlong)(int)local_c0;
                  iVar3 = (int)local_c0 + 1;
                  local_c0 = CONCAT44(local_c0._4_4_,iVar3);
                  if (local_c0._4_4_ < iVar3) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,uVar10 & 0xffffffff);
                  }
                  _Src = local_b8;
                  plVar5 = local_c8 + lVar11 * 2;
                  *plVar5 = 0;
                  lVar11 = (longlong)(int)local_b0;
                  *(int *)(plVar5 + 1) = (int)local_b0;
                  if ((int)local_b0 == 0) {
                    *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar5,local_b0 & 0xffffffff,0)
                    ;
                    _guard_xfg_dispatch_icall_nop((void *)*plVar5,_Src,lVar11 * 2);
                  }
                }
                plVar5 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = local_70 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_70)(local_70);
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
                if (local_b8 != (void *)0x0) {
                  FMemory::Free();
                }
              }
            }
            plVar5 = (longlong *)0x0;
            lVar11 = operator_new(0x40);
            if (lVar11 != 0) {
              plVar5 = (longlong *)FUN_140536a50(lVar11,param_2,param_3,&local_c8,local_58);
            }
            plVar6 = (longlong *)operator_new(0x18);
            plVar4 = (longlong *)0x0;
            if (plVar6 != (longlong *)0x0) {
              *(undefined4 *)(plVar6 + 1) = 1;
              *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
              *plVar6 = (longlong)&PTR_FUN_143fc2190;
              plVar6[2] = (longlong)plVar5;
              plVar4 = plVar6;
            }
            if (plVar5 == (longlong *)0x0) {
              iVar3 = -0x7fffbffb;
            }
            else {
              if ((*plVar5 == 0) || (plVar5[1] == 0)) {
LAB_14055fcb2:
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                }
                *plVar5 = (longlong)plVar5;
                plVar6 = (longlong *)plVar5[1];
                if (plVar4 != plVar6) {
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
                    UNLOCK();
                    plVar6 = (longlong *)plVar5[1];
                  }
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                    }
                  }
                  plVar5[1] = (longlong)plVar4;
                }
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar4 + 1;
                  lVar11 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
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
                  goto LAB_14055fd36;
                }
              }
              else {
                piVar1 = (int *)(plVar5[1] + 8);
                LOCK();
                iVar3 = *piVar1;
                if (iVar3 == 0) {
                  *piVar1 = 0;
                  iVar3 = 0;
                }
                UNLOCK();
                if (iVar3 < 1) goto LAB_14055fcb2;
LAB_14055fd36:
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                }
              }
              iVar3 = (int)param_1[0x7e];
              *(int *)(param_1 + 0x7e) = iVar3 + 1;
              if (*(int *)((longlong)param_1 + 0x3f4) < iVar3 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x7d,iVar3);
              }
              puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[0x7d]);
              *puVar7 = plVar5;
              puVar7[1] = plVar4;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                LOCK();
                plVar6 = plVar4 + 1;
                lVar11 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
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
              pplVar2 = (longlong **)(plVar5 + 6);
              plVar6 = (longlong *)FMemory::Realloc(0,0x30);
              local_68[0] = plVar6;
              if (plVar6 != (longlong *)0x0) {
                plVar6[1] = (longlong)param_1;
                *plVar6 = (longlong)&DAT_143f3ed00;
                plVar6[2] = (longlong)FUN_140557d90;
                lVar11 = FDelegateHandle::GenerateNewID();
                plVar6[4] = lVar11;
                *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
              }
              if (local_68 != pplVar2) {
                if (plVar6 == (longlong *)0x0) {
                  if (((int)plVar5[7] != 0) && (plVar8 = *pplVar2, plVar8 != (longlong *)0x0)) {
                    (**(code **)(*plVar8 + 0x28))(plVar8,0);
                    if (*pplVar2 != (longlong *)0x0) {
                      plVar8 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                      *pplVar2 = plVar8;
                    }
                    *(undefined4 *)(plVar5 + 7) = 0;
                  }
                }
                else {
                  (**(code **)(*plVar6 + 0x30))(plVar6,pplVar2);
                }
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x28))(plVar6,0);
                local_68[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
                if (local_68[0] != (longlong *)0x0) {
                  FMemory::Free(local_68[0]);
                }
              }
              lVar11 = plVar5[3];
              if (lVar11 != 0) {
                uVar9 = FUN_1405317f0(&local_98,plVar5,FUN_140553ce0);
                TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x78,uVar9);
                if (local_90 == 0) {
LAB_14055fedd:
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
                  goto LAB_14055fedd;
                }
                FUN_140563940(plVar5[3]);
              }
              iVar3 = 0x3e5;
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar4 + 1;
              lVar11 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            plVar5 = local_c8;
            for (iVar12 = (int)local_c0; iVar12 != 0; iVar12 = iVar12 + -1) {
              if (*plVar5 != 0) {
                FMemory::Free();
              }
              plVar5 = plVar5 + 2;
            }
            if (local_c8 != (longlong *)0x0) {
              FMemory::Free();
            }
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            if (iVar3 == 0x3e5) {
              return;
            }
          }
          break;
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
        uVar10 = uVar10 + 1;
        plVar5 = plVar5 + 0x23;
      } while ((longlong)uVar10 < (longlong)(int)param_1[0x51]);
    }
  }
  (**(code **)(*param_1 + 0x200))(param_1,param_3,2);
  return;
}



// FUNCTION 14055ffc0 FUN_14055ffc0 body=597 status=ok
// SIG undefined FUN_14055ffc0(void)

/* WARNING: Removing unreachable block (ram,0x000140560158) */
/* WARNING: Removing unreachable block (ram,0x000140560164) */
/* WARNING: Removing unreachable block (ram,0x00014056017c) */

void FUN_14055ffc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong local_b8 [2];
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [48];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 local_28 [16];
  
  if (1 < *(int *)(param_4 + 8)) {
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_a8,param_2);
    plVar6 = (longlong *)operator_new(0x28);
    plVar8 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_143fc15c0;
      plVar6[2] = 0;
      plVar6[3] = 0;
      *(undefined4 *)(plVar6 + 4) = 0;
      plVar8 = plVar6;
    }
    plVar6 = plVar8 + 2;
    local_98 = plVar6;
    local_90 = plVar8;
    TSharedRef<FStringTable,1>::Init<FStringTable>(&local_98,plVar6);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar8 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar4 = local_a0;
    plVar3 = (longlong *)*param_3;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    FString::FString(local_b8,param_4);
    local_48 = &LAB_140530c30;
    local_40 = &LAB_140530d80;
    local_38 = &LAB_140530c20;
    local_30 = UE4Tuple_Private::
               TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>
               ::
               ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>
    ;
    local_80 = plVar4;
    uVar9 = 0;
    FString::FString(local_78,local_b8);
    uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,local_28);
    FUN_140446e30(plVar6,*(undefined8 *)(local_a8 + 8),uVar7,local_88,uVar9);
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a0 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140560220 FUN_140560220 body=1022 status=ok
// SIG undefined FUN_140560220(void)

void FUN_140560220(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong *local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88 [3];
  longlong *plStack_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar10 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),local_68);
    FUN_14158ce90(param_2,local_68);
    puVar4 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x18),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar5 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x1a,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x1a,2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x1a) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    (**(code **)(*param_2 + 0x50))
              (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x1a));
  }
  else {
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_14158ce90(param_2,local_88);
    puVar7 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
    local_res18 = *puVar7;
    plVar8 = (longlong *)FUN_1404b0000(&local_res18);
    bVar11 = plVar8 != (longlong *)0x0;
    if (bVar11) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))(plVar8,local_58);
      local_res10 = (longlong *)*plVar8;
    }
    else {
      local_res10 = (longlong *)0x0;
      local_88[2] = 0;
      plStack_70 = (longlong *)0x0;
      plVar8 = local_88 + 2;
    }
    plVar3 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    if ((bVar11) && (local_50 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar8 = plStack_70;
    if ((!bVar11) && (plStack_70 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_70 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    if (local_res10 != (longlong *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*local_res10 + 0x60))(local_res10,local_48,local_88);
      local_90 = (longlong *)puVar7[1];
      local_98 = *puVar7;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(param_1 + 8) != &local_98) {
        *(undefined8 *)(param_1 + 8) = local_98;
        local_98 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_90);
      }
      plVar8 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_90 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    puVar4 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar5 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x1a,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x1a,2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x1a) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    if (*(ushort *)(param_1 + 0x1a) < 0x2001) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(uint *)(param_1 + 0x2c) != (uint)*(ushort *)(param_1 + 0x1a)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x20);
        iVar10 = *(int *)(param_1 + 0x28);
      }
      iVar9 = (uint)*(ushort *)(param_1 + 0x1a) + iVar10;
      *(int *)(param_1 + 0x28) = iVar9;
      if (*(int *)(param_1 + 0x2c) < iVar9) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar10);
      }
      (**(code **)(*param_2 + 0x50))
                (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x1a));
    }
    else {
      *(undefined2 *)(param_1 + 0x1a) = 0;
    }
    local_68[0] = local_88[0];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_68[0] = local_88[0];
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          local_68[0] = local_88[0];
        }
      }
    }
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140560620 FUN_140560620 body=274 status=ok
// SIG undefined FUN_140560620(void)

undefined8 * FUN_140560620(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  short sVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  lVar6 = operator_new(0x30);
  if (lVar6 == 0) {
    local_18 = (longlong *)0x0;
  }
  else {
    local_18 = (longlong *)FUN_1405374b0(lVar6);
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = (longlong)local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  (**(code **)(*local_18 + 0x38))(local_18,param_3);
  if ((*(char *)(param_3 + 0x28) < '\0') || (sVar5 = (**(code **)(*local_18 + 0x10))(), sVar5 == 0))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_18;
    param_2[1] = local_10;
    if (local_10 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
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
  return param_2;
}



// FUNCTION 140560760 FUN_140560760 body=172 status=ok
// SIG undefined FUN_140560760(void)

void FUN_140560760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_28,param_2);
  if (local_28 != 0) {
    FUN_1405466e0(local_18,param_3,param_4);
    FUN_142b6ad50(local_28,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140560810 FUN_140560810 body=238 status=ok
// SIG undefined FUN_140560810(void)

undefined8 FUN_140560810(longlong param_1,int param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return 0;
  }
  if (0.0 <= param_3) {
    if (param_3 <= 1.0) goto LAB_140560852;
    if (0.0 <= param_3) {
      if (1.0 <= param_3) {
        param_3 = 1.0;
      }
      goto LAB_140560852;
    }
  }
  param_3 = 0.0;
LAB_140560852:
  iVar1 = (int)ROUND(((param_3 * 35.0 - 10.0) + param_3 * 35.0) - 10.5) >> 1;
  if (param_3 <= 1e-08) {
    iVar1 = -0x32;
  }
  if (param_2 == 0) {
    plVar2 = (longlong *)FUN_14058b310();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
  }
  else if (param_2 == 1) {
    plVar2 = (longlong *)FUN_14058b310();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
  }
  else {
    if (param_2 != 2) {
      return 1;
    }
    plVar2 = (longlong *)FUN_14058b310();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x48))(plVar2,iVar1);
    plVar2 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
  }
  (**(code **)(*plVar2 + 0x48))(plVar2,iVar1);
  return 1;
}



// FUNCTION 140560900 FUN_140560900 body=411 status=ok
// SIG undefined FUN_140560900(void)

void FUN_140560900(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_48 [3];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_48[2] = *param_1;
  if (local_48[2] != 0) {
    local_30 = (longlong *)param_1[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,local_48 + 2);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_18 != 0) {
      FUN_142b4a0e0(local_18,&local_28,&DAT_146853558);
      if (local_28 != 0) {
        local_48[1] = 0x17;
        local_48[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        FGenericPlatformString::Memcpy(local_48[0],L"VoiceHeartbeatInterval",0x2e);
        uVar6 = FUN_142afb1f0(local_28,local_48,*(undefined4 *)((longlong)param_1 + 0x1c),0,
                              0x461c4000);
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140560aa0 FUN_140560aa0 body=135 status=ok
// SIG undefined FUN_140560aa0(void)

void FUN_140560aa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  FString::operator=(param_1 + 0xd0);
  if (1 < *(int *)(param_1 + 0xd8)) {
    lVar1 = FUN_142b45e90();
    plVar2 = (longlong *)FUN_142b495d0(*(undefined8 *)(lVar1 + 0x18),local_18);
    plVar3 = (longlong *)(param_1 + 0xc0);
    if (plVar3 != plVar2) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_1 + 200) = (int)plVar2[1];
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140560b30 FUN_140560b30 body=2245 status=ok
// SIG undefined FUN_140560b30(void)

undefined8 FUN_140560b30(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  longlong *plStack_170;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined1 local_150 [8];
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  local_d8 = *param_2;
  local_d0 = param_2[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  FUN_14054dd00(param_1,&local_178,&local_d8);
  local_c8 = *param_3;
  local_c0 = param_3[1];
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
  }
  FUN_14054dd00(param_1,&local_188,&local_c8);
  if ((local_178 != 0) && (CONCAT44(uStack_184,local_188) != 0)) {
    local_b8 = local_178;
    plStack_b0 = plStack_170;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xf8))
                      (*(longlong **)(param_1 + 0x48),&local_b8);
    plVar6 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_b0 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (cVar4 != '\0') {
      local_88 = local_178;
      plStack_80 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
      }
      FUN_140549500(param_1 + 0x78,&local_168,&local_88);
      plVar6 = plStack_170;
      lVar5 = 0;
      lVar10 = lVar5;
      if (local_168 != -1) {
        lVar10 = (longlong)local_168 * 0x168 + *(longlong *)(param_1 + 0x78);
      }
      lVar12 = lVar10 + 0x10;
      if (lVar10 == 0) {
        lVar12 = lVar5;
      }
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_170 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_170 + 8))(plStack_170,1);
          }
        }
      }
      if (lVar12 != 0) {
        if (CONCAT44(uStack_17c,uStack_180) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_17c,uStack_180) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140549500(param_1 + 0xd0,&local_164,local_78);
        lVar10 = lVar5;
        if (local_164 != -1) {
          lVar10 = (longlong)local_164 * 0x168 + *(longlong *)(param_1 + 0xd0);
        }
        lVar13 = lVar10 + 0x10;
        if (lVar10 == 0) {
          lVar13 = lVar5;
        }
        if (CONCAT44(uStack_17c,uStack_180) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_17c,uStack_180) + 8);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            puVar8 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
            (**(code **)*puVar8)(puVar8);
            LOCK();
            piVar1 = (int *)((longlong)puVar8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*(longlong *)CONCAT44(uStack_17c,uStack_180) + 8))
                        ((longlong *)CONCAT44(uStack_17c,uStack_180),1);
            }
          }
        }
        if (lVar13 != 0) {
          lVar5 = FUN_14054b210();
          lVar10 = CONCAT44(uStack_17c,uStack_180);
          if (param_4 == '\0') {
            if (lVar10 != 0) {
              LOCK();
              *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
              UNLOCK();
            }
            local_108 = local_178;
            plStack_100 = plStack_170;
            if (plStack_170 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
              UNLOCK();
            }
            FUN_140549690(param_1 + 0x128,&local_158,&local_108);
            if ((local_158 == -1) ||
               (lVar10 = (longlong)local_158 * 0x68 + *(longlong *)(param_1 + 0x128), lVar10 == 0))
            {
              local_140 = &local_108;
              FUN_140531950(param_1 + 0x128,&local_154,&local_140,0);
              lVar10 = (longlong)local_154 * 0x68 + *(longlong *)(param_1 + 0x128);
            }
            FUN_14055ed80(lVar10 + 0x10,local_58);
            plVar6 = plStack_100;
            if (plStack_100 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_100 + 1;
              lVar10 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plStack_100)(plStack_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            if (CONCAT44(uStack_17c,uStack_180) != 0) {
              LOCK();
              piVar1 = (int *)(CONCAT44(uStack_17c,uStack_180) + 8);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                puVar8 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
                (**(code **)*puVar8)(puVar8);
                LOCK();
                piVar1 = (int *)((longlong)puVar8 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*(longlong *)CONCAT44(uStack_17c,uStack_180) + 8))
                            ((longlong *)CONCAT44(uStack_17c,uStack_180),1);
                }
              }
            }
            if ((lVar5 != 0) && (lVar10 = *(longlong *)(lVar13 + 0xc0), lVar10 != 0)) {
              plVar6 = *(longlong **)(lVar13 + 200);
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              local_98 = local_178;
              plStack_90 = plStack_170;
              if (plStack_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
                UNLOCK();
              }
              local_f8 = lVar10;
              local_f0 = plVar6;
              FUN_1404de9e0(lVar5,&local_98,&local_f8);
              plVar7 = plStack_90;
              if (plStack_90 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_90 + 1;
                lVar10 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plStack_90)(plStack_90);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              plVar7 = local_f0;
              if (local_f0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_f0 + 1;
                lVar10 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_f0)(local_f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar6 + 1;
                lVar10 = *plVar7;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
            plVar6 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
            plVar7 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,lVar12);
            plVar6 = *(longlong **)(lVar13 + 200);
            uVar9 = *(undefined8 *)(lVar13 + 0xc0);
            local_res18[0] = 0;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_e8 = 0;
            local_e0 = 0;
            puVar8 = (undefined8 *)operator_new(0x28,&local_e8);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &PTR_GetPoolName_143fc1b40;
              puVar8[1] = uVar9;
              puVar8[2] = plVar6;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[4] = uVar9;
              *puVar8 = &PTR_GetPoolName_143fc1b88;
              plVar6 = (longlong *)0x0;
            }
            puVar8 = &local_e8;
            puVar11 = local_res18;
          }
          else {
            if (lVar10 != 0) {
              LOCK();
              *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
              UNLOCK();
            }
            local_138 = local_178;
            plStack_130 = plStack_170;
            if (plStack_170 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
              UNLOCK();
            }
            FUN_140549690(param_1 + 0x128,&local_160,&local_138);
            if ((local_160 == -1) ||
               (lVar10 = (longlong)local_160 * 0x68 + *(longlong *)(param_1 + 0x128), lVar10 == 0))
            {
              local_148 = &local_138;
              FUN_140531950(param_1 + 0x128,&local_15c,&local_148,0);
              lVar10 = (longlong)local_15c * 0x68 + *(longlong *)(param_1 + 0x128);
            }
            FUN_1405338d0(lVar10 + 0x10,local_150,local_68,0);
            plVar6 = plStack_130;
            if (plStack_130 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_130 + 1;
              lVar10 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plStack_130)(plStack_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            if (CONCAT44(uStack_17c,uStack_180) != 0) {
              LOCK();
              piVar1 = (int *)(CONCAT44(uStack_17c,uStack_180) + 8);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                puVar8 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
                (**(code **)*puVar8)(puVar8);
                LOCK();
                piVar1 = (int *)((longlong)puVar8 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*(longlong *)CONCAT44(uStack_17c,uStack_180) + 8))
                            ((longlong *)CONCAT44(uStack_17c,uStack_180),1);
                }
              }
            }
            if ((lVar5 != 0) && (lVar10 = *(longlong *)(lVar13 + 0xc0), lVar10 != 0)) {
              plVar6 = *(longlong **)(lVar13 + 200);
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              local_a8 = local_178;
              plStack_a0 = plStack_170;
              if (plStack_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
                UNLOCK();
              }
              local_128 = lVar10;
              local_120 = plVar6;
              FUN_1404c44a0(lVar5,&local_a8,&local_128);
              plVar7 = plStack_a0;
              if (plStack_a0 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_a0 + 1;
                lVar10 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plStack_a0)(plStack_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              plVar7 = local_120;
              if (local_120 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_120 + 1;
                lVar10 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_120)(local_120);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar6 + 1;
                lVar10 = *plVar7;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
            plVar6 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
            plVar7 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,lVar12);
            plVar6 = *(longlong **)(lVar13 + 200);
            uVar9 = *(undefined8 *)(lVar13 + 0xc0);
            local_res10[0] = 1;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_118 = 0;
            local_110 = 0;
            puVar8 = (undefined8 *)operator_new(0x28,&local_118);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &PTR_GetPoolName_143fc1b40;
              puVar8[1] = uVar9;
              puVar8[2] = plVar6;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[4] = uVar9;
              *puVar8 = &PTR_GetPoolName_143fc1b88;
              plVar6 = (longlong *)0x0;
            }
            puVar8 = &local_118;
            puVar11 = local_res10;
          }
          (**(code **)(*plVar7 + 0x78))(plVar7,lVar13,puVar11,puVar8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            lVar10 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          uVar9 = 1;
          goto LAB_14056133b;
        }
      }
    }
  }
  uVar9 = 0;
LAB_14056133b:
  if (CONCAT44(uStack_17c,uStack_180) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_17c,uStack_180) + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar1 = (int *)((longlong)puVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_17c,uStack_180) + 8))
                  ((longlong *)CONCAT44(uStack_17c,uStack_180),1);
      }
    }
  }
  plVar6 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_170 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_170 + 8))(plStack_170,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 140561400 FUN_140561400 body=476 status=ok
// SIG undefined FUN_140561400(void)

void FUN_140561400(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_res8 [2];
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [80];
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  lVar5 = 0;
  if (local_res8[0] != -1) {
    lVar5 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar9 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  if (((lVar9 != 0) && (*(byte *)(lVar9 + 0x100) = param_3, *(longlong *)(param_1 + 0x50) != 0)) &&
     (cVar4 = FUN_140584270(lVar9 + 0x60), cVar4 != '\0')) {
    plVar6 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,lVar9);
    plVar7 = (longlong *)(**(code **)(*plVar6 + 0x60))(plVar6,lVar9 + 0x60);
    cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (cVar4 == '\x02') {
      if ((param_3 != 0) && (*(char *)(param_1 + 0x188) == '\0')) {
        lVar5 = *(longlong *)(param_1 + 0x178);
        if (lVar5 != 0) {
          *(undefined1 *)(param_1 + 0x188) = 1;
          plVar7 = *(longlong **)(param_1 + 0x180);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          local_98[2] = lVar5;
          local_80 = plVar7;
          FUN_14053cb70((longlong *)(param_1 + 0x178),local_98 + 2);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
        local_98[0] = 0;
        local_98[1] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
        FGenericPlatformString::Memcpy(local_98[0],L"voice_sent",0x16);
        FUN_14055a380(param_1,local_98);
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
      lVar5 = *plVar6;
      uVar8 = FUN_14056c960(local_78);
      (**(code **)(lVar5 + 0xe8))(plVar6,(uint)param_3 + (uint)param_3,uVar8);
    }
  }
  return;
}



// FUNCTION 1405615e0 FUN_1405615e0 body=2034 status=ok
// SIG undefined FUN_1405615e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405615e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  void **ppvVar2;
  wchar_t _C;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *_Src;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 auStack_1f8 [32];
  void *local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  void *local_1c0;
  ulonglong local_1b8;
  void *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0 [4];
  undefined2 *local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  longlong *plStack_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148 [2];
  undefined1 local_138 [8];
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  longlong *local_108;
  longlong local_100 [2];
  void *local_f0 [2];
  longlong local_e0 [3];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [104];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  lVar20 = 0;
  local_1d8 = (void *)((ulonglong)local_1d8 & 0xffffffff00000000);
  local_170 = param_2;
  puVar10 = (undefined8 *)FUN_1404f8570(local_c8);
  if ((undefined8 *)(param_1 + 0x20) != puVar10) {
    *(undefined8 *)(param_1 + 0x20) = *puVar10;
    *puVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,puVar10 + 1);
  }
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^ (*(uint *)(param_1 + 0x30) ^ *(uint *)(puVar10 + 2)) & 1;
  uVar14 = (*(uint *)(puVar10 + 2) ^ *(uint *)(param_1 + 0x30)) & 2 ^ *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar14;
  uVar14 = (uVar14 ^ *(uint *)(puVar10 + 2)) & 4 ^ uVar14;
  *(uint *)(param_1 + 0x30) = uVar14;
  uVar14 = (uVar14 ^ *(uint *)(puVar10 + 2)) & 8 ^ uVar14;
  *(uint *)(param_1 + 0x30) = uVar14;
  plVar11 = puVar10 + 3;
  *(uint *)(param_1 + 0x30) = (uVar14 ^ *(uint *)(puVar10 + 2)) & 0x10 ^ uVar14;
  plVar19 = (longlong *)(param_1 + 0x38);
  if (plVar19 != plVar11) {
    if (*plVar19 != 0) {
      FMemory::Free();
    }
    *plVar19 = *plVar11;
    *plVar11 = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar10 + 4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)puVar10 + 0x24);
    puVar10[4] = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(puVar10 + 5);
  TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
  ::operator=(param_1 + 0x50,puVar10 + 6);
  FOnlineUserPresenceStatus::~FOnlineUserPresenceStatus(local_b0);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_c0 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  ppvVar2 = (void **)(param_1 + 0xb0);
  if (ppvVar2 != local_f0) {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar2 = (void *)0x0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  plVar11 = (longlong *)(param_1 + 0xe0);
  if (plVar11 != local_e0) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    *plVar11 = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_2 + 0x38) < 2) {
    return;
  }
  local_148[0] = 0;
  local_148[1] = 0;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_1b0 = (void *)0x0;
  bVar3 = false;
  local_1a8 = 0;
  TJsonReaderFactory<wchar_t>::Create(local_138,param_2 + 0x30);
  cVar6 = FUN_1404a7f60(local_138,&local_168);
  lVar17 = local_168;
  if ((cVar6 != '\0') && (local_168 != 0)) {
    local_1a0[0] = 0;
    local_1a0[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0,0);
    FGenericPlatformString::Memcpy(local_1a0[0],L"rich_presence",0x1c);
    FUN_1416b40a0(lVar17,local_1a0,local_148);
    if (local_1a0[0] != 0) {
      FMemory::Free();
    }
    local_1a0[2] = 0;
    local_1a0[3] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0 + 2,0);
    FGenericPlatformString::Memcpy(local_1a0[2],L"session_id",0x16);
    FUN_1416b40a0(lVar17,local_1a0 + 2,&local_1b0);
    if (local_1a0[2] != 0) {
      FMemory::Free();
    }
    bVar3 = true;
  }
  plVar11 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_130 + 1;
    lVar17 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  plVar11 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_160 + 1;
    lVar17 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_160 + 8))(plStack_160,1);
      }
    }
  }
  if (!bVar3) goto LAB_140561d8b;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 7;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FName::FName(local_118,L"SPARK",1);
  plVar11 = (longlong *)FUN_1404b0000();
  if (plVar11 == (longlong *)0x0) {
    plVar11 = &local_128;
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x70))(plVar11,local_110);
    local_150 = (longlong *)plVar11[1];
    lVar20 = *plVar11;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    plVar11 = &local_158;
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    local_158 = lVar20;
  }
  plVar19 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  plVar13 = plStack_120;
  *plVar11 = 0;
  if ((bVar3) && (plStack_120 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_120 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  plVar11 = local_150;
  if ((bVar4) && (local_150 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_150 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if ((bVar5) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_108 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  if (lVar20 != 0) {
    uVar12 = FUN_14053eed0(lVar20,local_100,local_148);
    FString::operator=(param_1 + 0x38,uVar12);
    if (local_100[0] != 0) {
      FMemory::Free();
    }
  }
  lVar20 = local_170;
  if (1 < *(int *)(local_170 + 0x28)) {
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    local_180 = (undefined2 *)0x0;
    local_178 = 0;
    cVar6 = FUN_1405418f0(local_170 + 0x20,&local_1c0,local_1a0 + 4);
    if ((cVar6 != '\0') && (1 < (int)local_1b8)) {
      puVar10 = (undefined8 *)operator_new();
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_FUN_143f74160;
        puVar10[3] = 0;
        lVar20 = (longlong)(int)local_1b8;
        local_1d8 = local_1c0;
        *(int *)(puVar10 + 4) = (int)local_1b8;
        if ((int)local_1b8 == 0) {
          *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
          puVar10[5] = DAT_146853460;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10 + 3,local_1b8 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar10[3],local_1d8,lVar20 * 2);
          puVar10[5] = DAT_146853460;
        }
      }
      plVar13 = (longlong *)operator_new(0x18);
      plVar11 = (longlong *)0x0;
      if (plVar13 != (longlong *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        *plVar13 = (longlong)&PTR_FUN_143f7de48;
        plVar13[2] = (longlong)puVar10;
        plVar11 = plVar13;
      }
      plVar13 = puVar10 + 1;
      if (puVar10 == (undefined8 *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      local_1d0 = puVar10;
      local_1c8 = plVar11;
      if (plVar13 != (longlong *)0x0) {
        if ((*plVar13 != 0) && (plVar13[1] != 0)) {
          piVar1 = (int *)(plVar13[1] + 8);
          LOCK();
          iVar9 = *piVar1;
          if (iVar9 == 0) {
            *piVar1 = 0;
            iVar9 = 0;
          }
          UNLOCK();
          if (0 < iVar9) goto LAB_140561c09;
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        *plVar13 = (longlong)puVar10;
        plVar15 = (longlong *)plVar13[1];
        if (plVar11 != plVar15) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar15 = (longlong *)plVar13[1];
          }
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
          plVar13[1] = (longlong)plVar11;
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          lVar20 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
LAB_140561c09:
      if ((undefined8 **)(param_1 + 0x20) != &local_1d0) {
        *(undefined8 **)(param_1 + 0x20) = puVar10;
        local_1d0 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_1c8);
      }
      plVar11 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_1c8 + 1;
        lVar20 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_1c8)(local_1c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_1c8 + 8))(local_1c8,1);
          }
        }
      }
      if (1 < (int)local_178) {
        pwVar16 = L"private";
        puVar18 = &DAT_143f3eda8;
        if ((int)local_178 != 0) {
          puVar18 = local_180;
        }
        do {
          _C = *(wchar_t *)((longlong)(puVar18 + -0xa1fde4cc) + (longlong)pwVar16);
          if ((_C == L'\0') && (*pwVar16 == L'\0')) break;
          if (_C != *pwVar16) {
            wVar7 = towlower(_C);
            wVar8 = towlower(*pwVar16);
            if (wVar7 != wVar8) goto LAB_140561cc3;
          }
          pwVar16 = pwVar16 + 1;
        } while( true );
      }
      goto LAB_140561cd5;
    }
    goto LAB_140561ce4;
  }
LAB_140561d02:
  _Src = local_1b0;
  if (ppvVar2 != &local_1b0) {
    lVar17 = (longlong)(int)local_1a8;
    *(int *)(param_1 + 0xb8) = (int)local_1a8;
    if (((int)local_1a8 == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_1a8 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar2,_Src,lVar17 * 2);
    }
  }
  FString::operator=(param_1 + 0xe0,lVar20);
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar19 + 1;
    lVar20 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19,1);
      }
    }
  }
LAB_140561d8b:
  if (local_1b0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  return;
LAB_140561cc3:
  if (wVar7 == wVar8) {
LAB_140561cd5:
    uVar14 = 0;
  }
  else {
    uVar14 = 8;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff7;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | uVar14;
  lVar20 = local_170;
LAB_140561ce4:
  if (local_180 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_1c0 != (void *)0x0) {
    FMemory::Free();
  }
  goto LAB_140561d02;
}



// FUNCTION 140561de0 FUN_140561de0 body=2328 status=ok
// SIG undefined FUN_140561de0(void)

void FUN_140561de0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined2 **ppuVar1;
  void *pvVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  undefined2 *puVar17;
  int iVar18;
  int *piVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined2 *puVar22;
  uint *puVar23;
  undefined2 *puVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined4 local_res20 [2];
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined2 *local_160;
  int local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  undefined8 local_140;
  int local_138;
  uint uStack_134;
  uint *puStack_130;
  undefined4 local_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int local_f0;
  longlong *local_e8;
  void *local_e0;
  int local_d8;
  void *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar10 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar10 + 0x18),&local_b0,param_2);
  if (((local_b0 == 0) || (*(char *)(local_b0 + 0x18) == '\0')) ||
     (cVar7 = FBuildPatchAppManifest::NeedsResaving(), cVar7 == '\0')) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,2);
    goto LAB_14056269e;
  }
  FText::FText(local_a0,&DAT_146853508);
  plVar25 = (longlong *)(param_3 + 0x18);
  local_178 = 0;
  local_170 = 0;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::FindId(plVar25,&local_150,&DAT_1461fca58);
  piVar11 = (int *)0x0;
  if (local_150 != -1) {
    piVar11 = (int *)((longlong)local_150 * 0x30 + *plVar25);
  }
  puVar24 = &DAT_143f3eda8;
  piVar19 = piVar11 + 4;
  if (piVar11 == (int *)0x0) {
    piVar19 = (int *)0x0;
  }
  if ((piVar19 != (int *)0x0) && (*piVar19 == 6)) {
    local_148 = 0;
    local_140 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"Presence",0x12);
    uVar12 = FUN_1404b73f0(piVar19,local_88);
    FUN_141606040(&local_148,uVar12,local_a0,0);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    puVar13 = (undefined8 *)FUN_1404b73f0(piVar19,local_78);
    iVar18 = 0;
    if (*(int *)(puVar13 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar13;
    }
    FString::PrintfImpl(&local_e0,L"?s=%s",puVar22);
    pvVar6 = local_e0;
    uVar5 = local_170;
    if (local_d8 != 0) {
      iVar18 = local_d8 + -1;
    }
    if (iVar18 != 0) {
      iVar16 = (int)local_170;
      lVar10 = (longlong)(int)local_170;
      iVar8 = (uint)((int)local_170 == 0) + iVar18 + (int)local_170;
      local_170 = CONCAT44(local_170._4_4_,iVar8);
      if (local_170._4_4_ < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,uVar5 & 0xffffffff);
      }
      pvVar2 = (void *)(local_178 + (lVar10 - (ulonglong)(iVar16 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar18 * 2);
      *(undefined2 *)((longlong)iVar18 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  iVar18 = *(int *)(param_3 + 0x40);
  puStack_130 = (uint *)(param_3 + 0x28);
  uStack_134 = 1;
  uVar21 = 0;
  local_138 = 0;
  uStack_124 = 0;
  if (iVar18 != 0) {
    puVar23 = *(uint **)(param_3 + 0x38);
    if (*(uint **)(param_3 + 0x38) == (uint *)0x0) {
      puVar23 = puStack_130;
    }
    uVar3 = *puVar23;
    while (uVar3 == 0) {
      lVar10 = (longlong)local_138;
      uVar21 = uVar21 + 0x20;
      iVar16 = local_138 + 1;
      uStack_124 = (ulonglong)uVar21 << 0x20;
      bVar4 = (int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_138;
      local_138 = iVar16;
      if (bVar4) goto LAB_1405620b4;
      uVar3 = puVar23[lVar10 + 1];
    }
    uStack_134 = -uVar3 & uVar3;
    local_f0 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> local_f0 == 0; local_f0 = local_f0 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - local_f0;
    }
    iVar16 = (uVar21 - iVar16) + 0x1f;
    uStack_124._4_4_ = (undefined4)((ulonglong)uStack_124 >> 0x20);
    uStack_124 = CONCAT44(uStack_124._4_4_,iVar16);
    if (iVar18 < iVar16) {
LAB_1405620b4:
      uStack_124 = CONCAT44(uStack_124._4_4_,iVar18);
    }
  }
  local_128 = 0xffffffff;
  uStack_110 = CONCAT44(uStack_134,local_138);
  uStack_50 = 0xffffffff;
  iStack_4c = (int)uStack_124;
  uStack_48 = uStack_124._4_4_;
  uStack_44 = uStack_11c;
  uStack_100 = CONCAT44((int)uStack_124,0xffffffff);
  local_f8 = uStack_124._4_4_;
  uStack_f4 = uStack_11c;
  local_118 = plVar25;
  local_108 = puStack_130;
  local_68 = plVar25;
  uStack_60 = uStack_110;
  puStack_58 = puStack_130;
  if ((int)uStack_124 < iVar18) {
    local_168 = param_1 + 9;
    iVar18 = (int)uStack_124;
    do {
      plVar25 = local_118;
      puVar13 = (undefined8 *)*local_168;
      puVar20 = puVar13 + (longlong)(int)local_168[1] * 2;
      lVar10 = *local_118;
      lVar26 = (longlong)iVar18 * 0x30;
      for (; puVar13 != puVar20; puVar13 = puVar13 + 2) {
        if (*(int *)(lVar10 + 8 + lVar26) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = *(undefined2 **)(lVar10 + lVar26);
        }
        if (*(int *)(puVar13 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar13;
        }
        iVar18 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar17,puVar22);
        if (iVar18 == 0) {
          if (*(int *)(lVar26 + 8 + *plVar25) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = *(undefined2 **)(lVar26 + *plVar25);
          }
          FString::PrintfImpl(&local_c0,L"%%%s%%",puVar22);
          uVar12 = FText::ToString(local_a0);
          puVar22 = &DAT_143f3eda8;
          if (local_b8 != 0) {
            puVar22 = local_c0;
          }
          iVar18 = FUN_141592950(uVar12,puVar22,1,0,0xffffffff);
          if (iVar18 != -1) {
            local_res20[0] = 0xffffffff;
            FVariantData::GetValue(*plVar25 + 0x10 + lVar26,local_res20);
            uVar9 = TArray<FString,FDefaultAllocator>::Find(local_168,*plVar25 + lVar26);
            FString::PrintfImpl(&local_d0,L"?p%d=%d",uVar9);
            pvVar6 = local_d0;
            uVar5 = local_170;
            if (local_c8 == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = local_c8 + -1;
            }
            if (iVar18 != 0) {
              iVar16 = (int)local_170;
              lVar10 = (longlong)(int)local_170;
              iVar8 = (uint)((int)local_170 == 0) + iVar18 + (int)local_170;
              local_170 = CONCAT44(local_170._4_4_,iVar8);
              if (local_170._4_4_ < iVar8) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,uVar5 & 0xffffffff);
              }
              pvVar2 = (void *)(local_178 + (lVar10 - (ulonglong)(iVar16 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar18 * 2);
              *(undefined2 *)((longlong)pvVar2 + (longlong)iVar18 * 2) = 0;
            }
            if (local_d0 != (void *)0x0) {
              FMemory::Free(local_d0);
            }
          }
          if (local_c0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          break;
        }
      }
      uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
      iVar18 = uStack_100._4_4_;
    } while (uStack_100._4_4_ < (int)local_108[6]);
  }
  uVar12 = FUN_1428b4040(local_b0);
  FUN_1405469a0(&local_160,&local_178,uVar12);
  FUN_140549810(param_1 + 0xb,&local_14c,param_2);
  if ((local_14c == -1) || (lVar10 = param_1[0xb] + (longlong)local_14c * 0x28, lVar10 == 0)) {
    local_e8 = param_2;
    FUN_140531d10(param_1 + 0xb,&local_168,&local_e8,0);
    lVar10 = param_1[0xb] + (longlong)(int)local_168 * 0x28;
  }
  ppuVar1 = (undefined2 **)(lVar10 + 0x10);
  puVar22 = &DAT_143f3eda8;
  if (local_158 != 0) {
    puVar22 = local_160;
  }
  if (*(int *)(lVar10 + 0x18) != 0) {
    puVar24 = *ppuVar1;
  }
  iVar16 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar24,puVar22);
  iVar18 = local_158;
  puVar24 = local_160;
  if (iVar16 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,1);
  }
  else {
    if (ppuVar1 != &local_160) {
      *(int *)(lVar10 + 0x18) = local_158;
      if ((local_158 == 0) && (*(int *)(lVar10 + 0x1c) == 0)) {
        *(undefined4 *)(lVar10 + 0x1c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar1,local_158);
        _guard_xfg_dispatch_icall_nop(*ppuVar1,puVar24,(longlong)iVar18 * 2);
      }
    }
    plVar25 = (longlong *)0x0;
    plVar14 = (longlong *)operator_new(0x58);
    puVar24 = local_160;
    if (plVar14 != (longlong *)0x0) {
      *plVar14 = 0;
      plVar14[1] = 0;
      plVar14[2] = *param_2;
      lVar10 = param_2[1];
      plVar14[3] = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      plVar14[4] = 0;
      *(int *)(plVar14 + 5) = local_158;
      if (local_158 == 0) {
        *(undefined4 *)((longlong)plVar14 + 0x2c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar14 + 4,local_158,0);
        _guard_xfg_dispatch_icall_nop((void *)plVar14[4],puVar24,(longlong)local_158 * 2);
      }
      *(undefined4 *)(plVar14 + 6) = 2;
      plVar14[7] = 0;
      plVar14[8] = 0;
      plVar14[9] = 0;
      *(undefined4 *)(plVar14 + 10) = 0;
      plVar25 = plVar14;
    }
    plVar14 = (longlong *)0x0;
    plVar15 = (longlong *)operator_new(0x18);
    if (plVar15 != (longlong *)0x0) {
      *(undefined4 *)(plVar15 + 1) = 1;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *plVar15 = (longlong)&PTR_FUN_143fc21f0;
      plVar15[2] = (longlong)plVar25;
      plVar14 = plVar15;
    }
    if (plVar25 != (longlong *)0x0) {
      if ((*plVar25 == 0) || (plVar25[1] == 0)) {
LAB_1405624a9:
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        *plVar25 = (longlong)plVar25;
        plVar15 = (longlong *)plVar25[1];
        if (plVar14 != plVar15) {
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
            UNLOCK();
            plVar15 = (longlong *)plVar25[1];
          }
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            piVar11 = (int *)((longlong)plVar15 + 0xc);
            iVar18 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
          plVar25[1] = (longlong)plVar14;
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar11 = (int *)((longlong)plVar14 + 0xc);
            iVar18 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
          goto LAB_140562534;
        }
      }
      else {
        piVar11 = (int *)(plVar25[1] + 8);
        LOCK();
        iVar18 = *piVar11;
        if (iVar18 == 0) {
          *piVar11 = 0;
          iVar18 = 0;
        }
        UNLOCK();
        if (iVar18 < 1) goto LAB_1405624a9;
LAB_140562534:
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
      }
      iVar18 = (int)param_1[0x16];
      *(int *)(param_1 + 0x16) = iVar18 + 1;
      if (*(int *)((longlong)param_1 + 0xb4) < iVar18 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x15,iVar18);
      }
      puVar13 = (undefined8 *)((longlong)iVar18 * 0x10 + param_1[0x15]);
      *puVar13 = plVar25;
      puVar13[1] = plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar14 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar11 = (int *)((longlong)plVar14 + 0xc);
          iVar18 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      FUN_1404b8b20(plVar25 + 9,param_1,FUN_140557fb0);
      FUN_140565fc0(plVar25);
    }
    plVar25 = plVar14 + 1;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      lVar10 = *plVar25;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar11 = (int *)((longlong)plVar14 + 0xc);
        iVar18 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  if (local_160 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_98 + 1;
    lVar10 = *plVar25;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar11 = (int *)((longlong)local_98 + 0xc);
      iVar18 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
LAB_14056269e:
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_a8 + 1;
    lVar10 = *plVar25;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar11 = (int *)((longlong)local_a8 + 0xc);
      iVar18 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  return;
}



// FUNCTION 140562700 FUN_140562700 body=208 status=ok
// SIG undefined FUN_140562700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140562700(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(param_1 + 0xc0);
  if ((*plVar2 == 0) && (local_38 = *param_2, local_38 != 0)) {
    uStack_30 = (longlong *)param_2[1];
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
      UNLOCK();
    }
    if (&local_38 != plVar2) {
      local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
      uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
      lVar5 = *plVar2;
      plVar4 = *(longlong **)(param_1 + 200);
      local_28 = (undefined4)local_38;
      uStack_24 = local_38._4_4_;
      uStack_20 = (undefined4)uStack_30;
      uStack_1c = uStack_30._4_4_;
      *(undefined4 *)plVar2 = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0xc4) = local_38._4_4_;
      *(undefined4 *)(param_1 + 200) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0xcc) = uStack_30._4_4_;
      local_38 = lVar5;
      uStack_30 = plVar4;
    }
    plVar2 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*uStack_30)(uStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*uStack_30 + 8))(uStack_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405627d0 FUN_1405627d0 body=1141 status=ok
// SIG undefined FUN_1405627d0(void)

void FUN_1405627d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong *local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_98[0] = (longlong *)0x0;
  lVar6 = FUN_14054eb60();
  puVar15 = *(undefined4 **)(lVar6 + 0x10);
  puVar7 = puVar15 + (longlong)*(int *)(lVar6 + 0x18) * 0x18;
  for (; puVar15 != puVar7; puVar15 = puVar15 + 0x18) {
    puVar10 = *(undefined8 **)(puVar15 + 8);
    iVar12 = puVar15[10];
    for (puVar13 = puVar10; puVar13 != puVar10 + (longlong)iVar12 * 2; puVar13 = puVar13 + 2) {
      puVar4 = (undefined8 *)*param_3;
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,local_58)
      ;
      cVar5 = (**(code **)*puVar4)(puVar4,*puVar8);
      plVar11 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (cVar5 != '\0') {
        uVar14 = (longlong)puVar13 - (longlong)puVar10 >> 4;
        iVar12 = (int)uVar14;
        if ((-1 < iVar12) && (iVar12 < (int)puVar15[10])) {
          local_a0 = (longlong *)((longlong)iVar12 * 0x10 + *(longlong *)(puVar15 + 8));
          local_70 = (longlong *)local_a0[1];
          local_a0 = (longlong *)*local_a0;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          local_78 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(local_98,&local_70);
          plVar11 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_70 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
              }
            }
          }
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (puVar15 + 8,uVar14 & 0xffffffff,1,1);
          (**(code **)(*param_1 + 0x28))(param_1,param_2,*puVar15,1);
          if (local_a0 != (longlong *)0x0) goto LAB_140562ac4;
          goto LAB_1405628f8;
        }
        break;
      }
    }
  }
LAB_1405628f8:
  plVar11 = (longlong *)0x0;
  plVar9 = (longlong *)operator_new(0x108);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143fc15a0;
    FUN_140534d00(plVar9 + 2,param_3,param_4);
    plVar11 = plVar9;
  }
  local_68 = plVar11 + 2;
  plStack_60 = plVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  plVar11 = local_68;
  plStack_80 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_a0 = local_68;
  local_88 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_98,&plStack_80);
  plVar9 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar9 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = local_98[0];
  if (plVar11 != (longlong *)0x0) {
LAB_140562ac4:
    plVar9 = local_98[0];
    if (param_4 == 2) {
      iVar12 = 5;
    }
    else if (param_4 == 3) {
      iVar12 = 4;
    }
    else if (param_4 == 4) {
      iVar12 = 3;
    }
    else {
      if (param_4 == 5) goto LAB_140562bdf;
      iVar12 = 0;
    }
    *(int *)(local_a0 + 0x1e) = param_4;
    if (local_98[0] != (longlong *)0x0) {
      LOCK();
      *(int *)(local_98[0] + 1) = (int)local_98[0][1] + 1;
      UNLOCK();
    }
    lVar6 = FUN_14054eb60(param_1,param_2);
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if (iVar12 == 3) {
      lVar6 = lVar6 + 0x60;
    }
    else if (iVar12 == 4) {
      lVar6 = lVar6 + 0x120;
    }
    else if (iVar12 == 5) {
      lVar6 = lVar6 + 0xc0;
    }
    iVar3 = *(int *)(lVar6 + 0x28);
    *(int *)(lVar6 + 0x28) = iVar3 + 1;
    if (*(int *)(lVar6 + 0x2c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar6 + 0x20),iVar3);
    }
    plVar11 = local_98[0];
    puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar6 + 0x20));
    *puVar10 = local_a0;
    puVar10[1] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar9 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = local_98[0];
      if ((int)lVar6 == 1) {
        (**(code **)*local_98[0])(local_98[0]);
        plVar9 = local_98[0];
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98[0] + 8))(local_98[0],1);
        }
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_2,iVar12,1);
  }
LAB_140562bdf:
  plVar11 = local_98[0];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98[0])(local_98[0]);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_98[0] + 8))(local_98[0],1);
      }
    }
  }
  return;
}



// FUNCTION 140562c50 FUN_140562c50 body=897 status=ok
// SIG undefined FUN_140562c50(void)

void FUN_140562c50(longlong param_1,undefined8 param_2)

{
  undefined2 **ppuVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined2 *_Src;
  int iVar16;
  undefined2 *local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  iVar11 = 0;
  uStack_a4 = 1;
  puStack_a0 = (uint *)(param_1 + 0x88);
  uVar2 = *(uint *)(param_1 + 0xa0);
  _Src = (undefined2 *)0x0;
  iVar16 = 0;
  local_b8 = (undefined2 *)0x0;
  local_ac = 0;
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  bVar4 = true;
  if (uVar2 != 0) {
    puVar15 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar15 = puStack_a0;
    }
    uVar14 = *puVar15;
    local_a8 = 0;
    iStack_90 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar13 = local_a8 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar13;
      if (bVar3) goto LAB_140562d2a;
      uVar14 = puVar15[lVar9 + 1];
    }
    uStack_a4 = -uVar14 & uVar14;
    iVar13 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_94 = (iStack_90 - iVar13) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_140562d2a:
      uStack_94 = uVar2;
    }
  }
  local_98 = 0xffffffff;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_88 = (longlong *)(param_1 + 0x78);
  uStack_74 = *(uint *)(param_1 + 0xa0);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar2 = *(uint *)(param_1 + 0xa0);
  uVar14 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = local_88;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar8 = uStack_74;
  if (uStack_74 != uVar2) {
    puVar15 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar15 = puStack_a0;
    }
    uVar8 = puVar15[(int)uStack_74 >> 5] & uStack_78;
    iVar13 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_140562e09;
      uVar8 = puVar15[(longlong)iVar13 + 1];
      uStack_78 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_74 = (uVar14 - iVar13) + 0x1f;
    uVar8 = uStack_74;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140562e09:
      uStack_74 = uVar2;
      uVar8 = uVar2;
    }
  }
  do {
    if (((uStack_44 == uVar8) && (local_50 == puStack_a0)) &&
       (local_60 == (longlong *)(param_1 + 0x78))) {
      if (_Src != (undefined2 *)0x0) {
        FMemory::Free(_Src);
      }
      return;
    }
    lVar9 = (longlong)(int)uStack_44 * 0x168 + *local_60;
    if (bVar4) {
      if (&local_b8 != (undefined2 **)(lVar9 + 0x100)) {
        local_b0 = *(int *)(lVar9 + 0x108);
        lVar12 = (longlong)local_b0;
        puVar10 = *(undefined2 **)(lVar9 + 0x100);
        if ((local_b0 == 0) && (iVar16 == 0)) {
          local_ac = iVar16;
          iVar11 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,iVar16);
          _Src = local_b8;
          _guard_xfg_dispatch_icall_nop(local_b8,puVar10,lVar12 * 2);
          iVar16 = local_ac;
          iVar11 = local_b0;
        }
      }
    }
    else {
      puVar6 = (undefined8 *)FUN_1405859b0(lVar9 + 0x70);
      puVar10 = &DAT_143f3eda8;
      if (iVar11 != 0) {
        puVar10 = _Src;
      }
      if (*(int *)(puVar6 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar6;
      }
      iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar10);
      if (iVar13 != 0) {
        ppuVar1 = (undefined2 **)(lVar9 + 0x100);
        *(undefined1 *)(lVar9 + 0xf8) = 1;
        if (ppuVar1 != &local_b8) {
          *(int *)(lVar9 + 0x108) = iVar11;
          if ((iVar11 == 0) && (*(int *)(lVar9 + 0x10c) == 0)) {
            *(undefined4 *)(lVar9 + 0x10c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar1,iVar11);
            _guard_xfg_dispatch_icall_nop(*ppuVar1,_Src,(longlong)iVar11 * 2);
          }
        }
      }
    }
    lVar12 = lVar9 + 0xc0;
    if (*(char *)(lVar9 + 0xf8) != '\0') {
      FUN_14053fd40(param_1,lVar12,lVar9 + 0x100);
    }
    cVar5 = FUN_140550d70(param_1,lVar12,param_2);
    if (cVar5 == '\0') {
      cVar5 = FUN_140551b30(param_1,lVar12,param_2);
      if (cVar5 != '\0') goto LAB_140562f73;
      cVar5 = FUN_14053dae0(lVar12,param_2);
      if (cVar5 == '\0') goto LAB_140562f73;
    }
    else {
LAB_140562f73:
      FUN_140560b30(param_1,lVar12,param_2,1);
    }
    bVar4 = false;
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 140562fe0 FUN_140562fe0 body=687 status=ok
// SIG undefined FUN_140562fe0(void)

undefined8 FUN_140562fe0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_1404b6a10();
  plVar3 = (longlong *)(param_1 + 0xc0);
  if (*plVar3 != 0) {
    if (*(longlong *)(param_1 + 200) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 200) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_50 = (longlong *)0x0;
    if (plVar3 != &local_58) {
      *plVar3 = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 200,&local_50);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0x90);
  if (*plVar3 != 0) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_40 = (longlong *)0x0;
    if (plVar3 != &local_48) {
      *plVar3 = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x98,&local_40);
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0xa0);
  if (*plVar3 != 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
    if (plVar3 != &local_38) {
      *plVar3 = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa8,&local_30);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
    if ((longlong *)(param_1 + 0x70) != &local_28) {
      *(longlong *)(param_1 + 0x70) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_20);
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0x80);
  if (*plVar3 != 0) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_10 = (longlong *)0x0;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&local_10);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140563290 FUN_140563290 body=804 status=ok
// SIG undefined FUN_140563290(void)

void FUN_140563290(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8 [5];
  undefined4 local_a0;
  void *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar5 = 0;
  lVar6 = FUN_142b45e90();
  plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_78,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x28);
  if (plVar1 != plVar7) {
    *plVar1 = *plVar7;
    *plVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,plVar7 + 1);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_70 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_88);
    if (local_88 != 0) {
      lVar6 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar6 + 0x18),&local_98);
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_c8[0] = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_c8[1] = 0;
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
      local_c8[4] = 0;
      local_a0 = 0;
      plVar7 = (longlong *)puVar8[1];
      uVar9 = *puVar8;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x30,local_c8 + 4);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc19c0;
        puVar8[1] = uVar9;
        puVar8[2] = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
        }
        puVar8[3] = FUN_140553200;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _Src = local_98;
      local_d8 = (void *)0x0;
      iVar5 = (int)local_90;
      local_d0 = iVar5;
      if (iVar5 == 0) {
        local_cc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_90 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_d8,_Src,(longlong)iVar5 * 2);
      }
      uVar9 = FUN_142b46360(*plVar1,local_58);
      iVar5 = FUN_142ae7100(local_88,uVar9,&local_d8,local_c8 + 4,local_c8,local_c8 + 2,&local_68);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      if (local_c8[2] != 0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (0 < iVar5) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x40,uVar9);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1405635c0 FUN_1405635c0 body=882 status=ok
// SIG undefined FUN_1405635c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405635c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_168 [32];
  undefined ***local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar6 = 0;
  lVar7 = FUN_142b45e90();
  plVar8 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),local_a8,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x48);
  if (plVar1 != plVar8) {
    *plVar1 = *plVar8;
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,plVar8 + 1);
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_f8);
    if (local_f8 != 0) {
      FUN_142b21820(local_e8);
      plVar8 = *(longlong **)(param_1 + 0x38);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)CONCAT44(uStack_d4,uStack_d8);
      local_128 = (undefined4)uVar9;
      uStack_124 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_120._0_4_ = SUB84(plVar8,0);
      uStack_120._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
      local_48 = local_128;
      uStack_44 = uStack_124;
      uStack_40 = (undefined4)uStack_120;
      uStack_3c = uStack_120._4_4_;
      local_e0 = local_128;
      uStack_dc = uStack_124;
      uStack_d8 = (undefined4)uStack_120;
      uStack_d4 = uStack_120._4_4_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          uStack_120 = plVar5;
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*uStack_120 + 8))(uStack_120,1);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      local_d0 = 5;
      lVar7 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar7 + 0x18),&local_108);
      _Src = local_108;
      local_c8 = &PTR_FUN_143fc0590;
      local_c0 = CONCAT44(uStack_dc,local_e0);
      local_b8 = CONCAT44(uStack_d4,uStack_d8);
      local_98 = 0;
      uStack_90 = 0;
      if (local_b8 != 0) {
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
        UNLOCK();
      }
      local_b0 = local_d0;
      local_118 = (void *)0x0;
      iVar6 = (int)local_100;
      local_110 = iVar6;
      if (iVar6 == 0) {
        local_10c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_100 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_118,_Src,(longlong)iVar6 * 2);
      }
      lVar7 = *plVar1;
      uVar9 = FUN_140531690(local_68,param_1,FUN_140553410);
      uVar10 = FString::FString(local_58,param_1 + 0x20);
      uVar11 = FUN_142b46360(lVar7,local_88);
      local_138 = &local_98;
      local_148 = &local_c8;
      local_140 = uVar9;
      iVar6 = FUN_142ae04e0(local_f8,uVar11,&local_118,uVar10);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_142b22960(local_e8);
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (0 < iVar6) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x58,uVar9);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 140563940 FUN_140563940 body=1030 status=ok
// SIG undefined FUN_140563940(void)

void FUN_140563940(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  void *local_118;
  ulonglong local_110;
  longlong local_108;
  longlong *local_100;
  undefined **local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 *local_98;
  ulonglong local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  
  iVar5 = 0;
  lVar6 = FUN_142b45e90();
  plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_88,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x68);
  if (plVar1 != plVar7) {
    *plVar1 = *plVar7;
    *plVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,plVar7 + 1);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_108);
    if (local_108 != 0) {
      FUN_142b21e50(local_c0);
      FString::operator=(local_a8,param_1 + 0x40);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_98,param_1 + 0x20);
      FString::operator=(local_b8,param_1 + 0x50);
      lVar6 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar6 + 0x18),&local_118);
      local_78 = 0;
      uStack_70 = 0;
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
      local_128 = 0;
      local_120 = 0;
      plVar1 = (longlong *)puVar8[1];
      uVar9 = *puVar8;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x30,&local_128);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc19c0;
        puVar8[1] = uVar9;
        puVar8[2] = plVar1;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
          UNLOCK();
        }
        puVar8[3] = FUN_1405538f0;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar1 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      local_f8 = &PTR_FUN_143fc0610;
      FString::FString(local_f0,local_b8);
      FString::FString(local_e0,local_a8);
      local_d0 = (undefined8 *)0x0;
      local_c8 = (int)local_90;
      if (local_c8 == 0) {
        local_c4 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_d0,local_90 & 0xffffffff,0);
        puVar8 = local_d0;
        do {
          *puVar8 = 0;
          iVar5 = *(int *)(local_98 + 1);
          pvVar4 = (void *)*local_98;
          *(int *)(puVar8 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar5,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar4,(longlong)iVar5 * 2);
          }
          puVar8 = puVar8 + 2;
          local_98 = local_98 + 2;
          uVar11 = (int)local_90 - 1;
          local_90 = (ulonglong)uVar11;
        } while (uVar11 != 0);
      }
      pvVar4 = local_118;
      local_138 = (void *)0x0;
      iVar5 = (int)local_110;
      local_130 = iVar5;
      if (iVar5 == 0) {
        local_12c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_110 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_138,pvVar4,(longlong)iVar5 * 2);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x68);
      uVar10 = FString::FString(local_38,param_1 + 0x30);
      uVar9 = FUN_142b46360(uVar9,local_68);
      iVar5 = FUN_142ae1230(local_108,uVar9,&local_138,uVar10,&local_f8,&local_128,&local_78);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_142b22e70(local_c0);
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (0 < iVar5) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x78,uVar9);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140563d50 FUN_140563d50 body=902 status=ok
// SIG undefined FUN_140563d50(void)

void FUN_140563d50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  void *local_118;
  ulonglong local_110;
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_68;
  undefined1 local_60 [16];
  longlong local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  iVar5 = 0;
  lVar6 = FUN_142b45e90();
  plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_b8,param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (plVar3 != plVar7) {
    *plVar3 = *plVar7;
    *plVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,plVar7 + 1);
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (*plVar3 != 0) {
    FUN_142b480d0(*plVar3,&local_108);
    if (local_108 != 0) {
      FUN_142b1dc40(local_f8);
      local_e0 = (longlong)*(int *)(param_1 + 0x20);
      FString::operator=(local_c8,param_1 + 0x28);
      FString::operator=(local_f0,param_1 + 0x38);
      FString::operator=(local_d8,param_1 + 0x48);
      lVar6 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar6 + 0x18),&local_118);
      local_a8 = 0;
      uStack_a0 = 0;
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_88);
      local_128 = 0;
      local_120 = 0;
      plVar7 = (longlong *)puVar8[1];
      uVar9 = *puVar8;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x30,&local_128);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc19c0;
        puVar8[1] = uVar9;
        puVar8[2] = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
        }
        puVar8[3] = FUN_1405537d0;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      local_68 = &PTR_FUN_143fc0570;
      FString::FString(local_60,local_f0);
      local_50 = local_e0;
      FString::FString(local_48,local_d8);
      FString::FString(local_38,local_c8);
      _Src = local_118;
      local_138 = (void *)0x0;
      iVar5 = (int)local_110;
      local_130 = iVar5;
      if (iVar5 == 0) {
        local_12c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_110 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_138,_Src,(longlong)iVar5 * 2);
      }
      uVar9 = FUN_142b46360(*plVar3,local_98);
      iVar5 = FUN_142ae1ec0(local_108,uVar9,&local_138,&local_68,&local_128,&local_a8);
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_142b1e0b0(local_f8);
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_100 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (0 < iVar5) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar9);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 1405640e0 FUN_1405640e0 body=568 status=ok
// SIG undefined FUN_1405640e0(void)

void FUN_1405640e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  iVar4 = 0;
  lVar5 = FUN_142b45e90();
  plVar6 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),local_78,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar6) {
    *plVar1 = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar6 + 1);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_88);
    if (local_88 != 0) {
      lVar5 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar5 + 0x18),&local_98);
      _Src = local_98;
      local_a8 = (void *)0x0;
      iVar4 = (int)local_90;
      local_68 = 0;
      uStack_60 = 0;
      local_a0 = iVar4;
      if (iVar4 == 0) {
        local_9c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_90 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_a8,_Src,(longlong)iVar4 * 2);
      }
      lVar5 = *plVar1;
      uVar7 = FUN_140531690(local_38,param_1,FUN_140554240);
      uVar8 = FString::FString(local_28,param_1 + 0x20);
      uVar9 = FUN_142b46360(lVar5,local_58);
      iVar4 = FUN_142ae21d0(local_88,uVar9,&local_a8,uVar8,uVar7,&local_68);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (0 < iVar4) {
      return;
    }
  }
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x48,uVar7);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140564320 FUN_140564320 body=978 status=ok
// SIG undefined FUN_140564320(void)

void FUN_140564320(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [13];
  longlong *local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),local_a8 + 0xc,param_1 + 0x10);
  if (local_a8[0xc] == 0) goto LAB_14056464c;
  plVar9 = (longlong *)0x0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                    (*(longlong **)(param_1 + 0x20),local_38);
  cVar3 = FUN_142b4b7a0(local_a8[0xc],uVar6,local_a8 + 2);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_b8 = 0;
    local_b0 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    cVar3 = FUN_1405418f0(local_a8 + 6,&local_b8,local_a8);
    if ((cVar3 != '\0') && (1 < (int)local_b0)) {
      lVar5 = operator_new(0x118);
      plVar7 = plVar9;
      if (lVar5 != 0) {
        plVar7 = (longlong *)FUN_140534960(lVar5,param_1 + 0x10,&local_b8);
      }
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_143fc2260;
        plVar8[2] = (longlong)plVar7;
        plVar9 = plVar8;
      }
      pplVar1 = (longlong **)(param_1 + 0x30);
      local_d8 = plVar7;
      local_d0 = plVar9;
      if (plVar7 != (longlong *)0x0) {
        if ((*plVar7 != 0) && (plVar7[1] != 0)) {
          piVar2 = (int *)(plVar7[1] + 8);
          LOCK();
          iVar4 = *piVar2;
          if (iVar4 == 0) {
            *piVar2 = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (0 < iVar4) goto LAB_140564507;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        *plVar7 = (longlong)plVar7;
        plVar8 = (longlong *)plVar7[1];
        if (plVar9 != plVar8) {
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
            UNLOCK();
            plVar8 = (longlong *)plVar7[1];
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          plVar7[1] = (longlong)plVar9;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
LAB_140564507:
      if (pplVar1 != &local_d8) {
        *pplVar1 = plVar7;
        local_d8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_d0);
      }
      plVar9 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_d0 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      plVar9 = *pplVar1;
      if (plVar9 != (longlong *)0x0) {
        uVar6 = FUN_1405317f0(&local_c8,param_1,FUN_140555200);
        TBaseDelegate<FSlateBrush_const_*>::operator=(plVar9 + 0x21,uVar6);
        if (local_c0 == 0) {
LAB_1405645c5:
          if (local_c8 != (longlong *)0x0) {
            FMemory::Free(local_c8);
          }
        }
        else if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x28))(local_c8,0);
          if (local_c8 != (longlong *)0x0) {
            local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
          }
          local_c0 = 0;
          goto LAB_1405645c5;
        }
        FUN_140564700(*pplVar1);
      }
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  if (local_a8[10] != 0) {
    FMemory::Free();
  }
  if (local_a8[8] != 0) {
    FMemory::Free();
  }
  if (local_a8[6] != 0) {
    FMemory::Free();
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
LAB_14056464c:
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x108,uVar6);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_20 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140564700 FUN_140564700 body=510 status=ok
// SIG undefined FUN_140564700(void)

void FUN_140564700(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar4 = operator_new(0x70);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140534c90(lVar4,param_1 + 0x10,param_1 + 0x20);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143fc21c0;
    plVar6[2] = (longlong)plVar5;
    plVar8 = plVar6;
  }
  pplVar1 = (longlong **)(param_1 + 0x30);
  local_38 = plVar5;
  local_30 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar2 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_140564823;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
    plVar6 = (longlong *)plVar5[1];
    if (plVar8 != plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
LAB_140564823:
  if (pplVar1 != &local_38) {
    *pplVar1 = plVar5;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_30);
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar8 = *pplVar1;
  if (plVar8 != (longlong *)0x0) {
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    FUN_1405313f0(plVar8 + 0xc,uVar7,FUN_140555880);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_20 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    FUN_140564900(*pplVar1);
  }
  return;
}



// FUNCTION 140564900 FUN_140564900 body=845 status=ok
// SIG undefined FUN_140564900(void)

void FUN_140564900(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8 [5];
  undefined4 local_b0;
  void *local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  
  iVar5 = 0;
  lVar6 = FUN_142b45e90();
  plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_88,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x48);
  if (plVar1 != plVar7) {
    *plVar1 = *plVar7;
    *plVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,plVar7 + 1);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_98);
    if (local_98 != 0) {
      lVar6 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar6 + 0x18),&local_a8);
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_d8[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_d8[1] = 0;
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
      local_d8[4] = 0;
      local_b0 = 0;
      plVar7 = (longlong *)puVar8[1];
      uVar9 = *puVar8;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x30,local_d8 + 4);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc19c0;
        puVar8[1] = uVar9;
        puVar8[2] = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
        }
        puVar8[3] = FUN_140555730;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _Src = local_a8;
      local_e8 = (void *)0x0;
      iVar5 = (int)local_a0;
      local_e0 = iVar5;
      if (iVar5 == 0) {
        local_dc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_e8,_Src,(longlong)iVar5 * 2);
      }
      lVar6 = *plVar1;
      uVar9 = FString::FString(local_38,param_1 + 0x20);
      uVar10 = FUN_142b46360(lVar6,local_68);
      iVar5 = FUN_142ae7d50(local_98,uVar10,&local_e8,uVar9,local_d8 + 4,local_d8,local_d8 + 2,
                            &local_78);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      if (local_d8[2] != 0) {
        FMemory::Free();
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (0 < iVar5) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar9);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140564c50 FUN_140564c50 body=943 status=ok
// SIG undefined FUN_140564c50(void)

void FUN_140564c50(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  iVar3 = *(int *)(param_1 + 0x20);
  plVar7 = (longlong *)0x0;
  local_58 = (wchar_t *)0x0;
  local_4c = 0;
  local_50 = 0;
  if (iVar3 == 3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,9);
    local_50 = local_50 + 9;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    builtin_wcsncpy(local_58,L"blocking",9);
  }
  else if (iVar3 == 4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,8);
    local_50 = local_50 + 8;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    builtin_wcsncpy(local_58,L"pending",8);
  }
  else if (iVar3 == 5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,5);
    local_50 = local_50 + 5;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    builtin_wcsncpy(local_58,L"sent",5);
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,7);
    local_50 = local_50 + 7;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    builtin_wcsncpy(local_58,L"friend",7);
  }
  plVar5 = (longlong *)operator_new(0x80);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc1590;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = *(longlong *)(param_1 + 0x10);
    lVar6 = *(longlong *)(param_1 + 0x18);
    plVar5[5] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar5[6] = 0;
    *(int *)(plVar5 + 7) = local_50;
    if (local_50 == 0) {
      *(undefined4 *)((longlong)plVar5 + 0x3c) = 0;
    }
    else {
      lVar6 = (longlong)local_50;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar5 + 6,local_50,0);
      _guard_xfg_dispatch_icall_nop((void *)plVar5[6],local_58,lVar6 * 2);
    }
    *(undefined4 *)(plVar5 + 8) = 0xffffffff;
    plVar5[9] = 0;
    plVar5[10] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 2;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    *(undefined4 *)(plVar5 + 0xf) = 0;
    plVar7 = plVar5;
  }
  plVar5 = plVar7 + 2;
  local_38 = plVar5;
  local_30 = plVar7;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_38,plVar5);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  pplVar1 = (longlong **)(param_1 + 0x28);
  local_48 = plVar5;
  local_40 = plVar7;
  if (pplVar1 != &local_48) {
    *pplVar1 = plVar5;
    local_48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_40);
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *pplVar1;
  plVar8 = plVar7 + 0xc;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_140554970;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_28 != plVar8) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)plVar7[0xd] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(plVar7 + 0xd) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar8);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  *(undefined4 *)(*pplVar1 + 6) = 1;
  FUN_14054c6f0();
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140565000 FUN_140565000 body=1177 status=ok
// SIG undefined FUN_140565000(void)

void FUN_140565000(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  void *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar8 = (longlong *)0x0;
  lVar3 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_68,param_1 + 0x20);
  iVar10 = -1;
  if (local_68 == 0) {
    uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar4);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    goto LAB_14056543f;
  }
  local_98 = (longlong *)0x0;
  local_90 = 1;
  uVar4 = FUN_1428b4040();
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,0);
  FString::FString(local_98,uVar4);
  plVar5 = (longlong *)operator_new(0x88);
  plVar11 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    local_78 = (void *)0x0;
    local_70 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"RegisterPlayer",0x1e);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    plVar5[3] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    iVar9 = (int)local_90;
    plVar5[4] = 0;
    *(int *)(plVar5 + 5) = (int)local_90;
    if ((int)local_90 == 0) {
      *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar5 + 4,local_90 & 0xffffffff,0);
      puVar7 = (undefined8 *)plVar5[4];
      plVar8 = local_98;
      do {
        iVar10 = iVar9;
        *puVar7 = 0;
        iVar9 = (int)plVar8[1];
        _Src = (void *)*plVar8;
        *(int *)(puVar7 + 1) = iVar9;
        if (iVar9 == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar9,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar9 * 2);
        }
        puVar7 = puVar7 + 2;
        plVar8 = plVar8 + 2;
        iVar9 = iVar10 + -1;
      } while (iVar9 != 0);
      iVar10 = iVar10 + -2;
    }
    FString::FString(plVar5 + 6,param_1 + 0x30);
    lVar3 = (longlong)(int)local_70;
    plVar5[8] = 0;
    *(int *)(plVar5 + 9) = (int)local_70;
    if ((int)local_70 == 0) {
      *(undefined4 *)((longlong)plVar5 + 0x4c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar5 + 8,local_70 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)plVar5[8],local_78,lVar3 * 2);
    }
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)(plVar5 + 0xc) = 2;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    *(undefined4 *)(plVar5 + 0x10) = 0;
    plVar8 = plVar5;
    plVar11 = (longlong *)0x1;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_143fc2230;
    plVar5[2] = (longlong)plVar8;
  }
  pplVar1 = (longlong **)(param_1 + 0x48);
  local_88 = plVar8;
  local_80 = plVar5;
  if (plVar8 != (longlong *)0x0) {
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar2 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar9 = *piVar2;
      if (iVar9 == 0) {
        *piVar2 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_1405652d0;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)plVar8;
    plVar6 = (longlong *)plVar8[1];
    if (plVar5 != plVar6) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar8[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + iVar10;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar8[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + iVar10;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + iVar10;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
LAB_1405652d0:
  if (pplVar1 != &local_88) {
    *pplVar1 = plVar8;
    local_88 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_80);
  }
  plVar8 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + iVar10;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + iVar10;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((plVar11 != (longlong *)0x0) && (local_78 != (void *)0x0)) {
    FMemory::Free();
  }
  plVar8 = *pplVar1;
  if (plVar8 != (longlong *)0x0) {
    uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
    FUN_1405313f0(plVar8 + 0xf,uVar4,FUN_140553bf0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + iVar10;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + iVar10;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_140563940(*pplVar1);
  }
  plVar8 = local_98;
  for (iVar9 = (int)local_90; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_14056543f:
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + iVar10;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + iVar10;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 1405654a0 FUN_1405654a0 body=923 status=ok
// SIG undefined FUN_1405654a0(void)

void FUN_1405654a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *local_e8;
  int local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  void *local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  
  iVar6 = 0;
  lVar7 = FUN_142b45e90();
  plVar8 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),local_88,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar8) {
    *plVar1 = *plVar8;
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar8 + 1);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_80 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_98);
    if (local_98 != 0) {
      puVar9 = (undefined8 *)FUN_1428b4040(*plVar1);
      local_e8 = (void *)0x0;
      local_e0 = *(int *)(puVar9 + 1);
      lVar7 = (longlong)local_e0;
      pvVar5 = (void *)*puVar9;
      if (local_e0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar5,lVar7 * 2);
      }
      lVar7 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar7 + 0x18),&local_a8);
      local_78 = 0;
      uStack_70 = 0;
      puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
      local_b8 = 0;
      local_b0 = 0;
      plVar8 = (longlong *)puVar9[1];
      uVar10 = *puVar9;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      puVar9 = (undefined8 *)operator_new(0x30,&local_b8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &PTR_GetPoolName_143fc19c0;
        puVar9[1] = uVar10;
        puVar9[2] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
        }
        puVar9[3] = FUN_140557a40;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[5] = uVar10;
        *puVar9 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      local_d8 = (void *)0x0;
      local_d0 = local_e0;
      if (local_e0 == 0) {
        local_cc = 0;
      }
      else {
        lVar7 = (longlong)local_e0;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_e0,0);
        _guard_xfg_dispatch_icall_nop(local_d8,local_e8,lVar7 * 2);
      }
      pvVar5 = local_a8;
      local_c8 = (void *)0x0;
      iVar6 = (int)local_a0;
      local_c0 = iVar6;
      if (iVar6 == 0) {
        local_bc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_c8,pvVar5,(longlong)iVar6 * 2);
      }
      lVar7 = *plVar1;
      uVar10 = FString::FString(local_38,param_1 + 0x20);
      uVar11 = FUN_142b46360(lVar7,local_68);
      iVar6 = FUN_142af2eb0(local_98,uVar11,&local_c8,uVar10,&local_d8,&local_b8,&local_78);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (0 < iVar6) {
      return;
    }
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x48,uVar10);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140565840 FUN_140565840 body=970 status=ok
// SIG undefined FUN_140565840(void)

void FUN_140565840(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  void *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined **local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  iVar5 = 0;
  lVar6 = FUN_142b45e90();
  plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_80,param_1 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (plVar2 != plVar7) {
    *plVar2 = *plVar7;
    *plVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,plVar7 + 1);
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_78 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (*plVar2 != 0) {
    FUN_142b480d0(*plVar2,&local_d8);
    if (local_d8 != 0) {
      lVar6 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar6 + 0x18),&local_e8);
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_50);
      local_f8 = 0;
      local_f0 = 0;
      plVar2 = (longlong *)puVar8[1];
      uVar9 = *puVar8;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x30,&local_f8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc19c0;
        puVar8[1] = uVar9;
        puVar8[2] = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
        }
        puVar8[3] = FUN_140557b90;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar2 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      local_c8 = &PTR_FUN_143fc05d0;
      FString::FString(local_c0,param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x40);
      lVar6 = *(longlong *)(param_1 + 0x38);
      local_b0 = 0;
      local_a8 = iVar5;
      if (iVar5 == 0) {
        local_a4 = 0;
      }
      else {
        TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar5,0);
        lVar10 = local_b0 + 8;
        lVar6 = lVar6 + 8;
        do {
          *(undefined ***)(lVar10 + -8) = &PTR_FUN_143fc05b0;
          FString::FString(lVar10,lVar6);
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
          lVar4 = *(longlong *)(lVar6 + 0x18);
          *(longlong *)(lVar10 + 0x18) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          FString::FString(lVar10 + 0x20,lVar6 + 0x20);
          lVar10 = lVar10 + 0x38;
          lVar6 = lVar6 + 0x38;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_a0 = *(undefined8 *)(param_1 + 0x48);
      local_98 = *(undefined8 *)(param_1 + 0x50);
      FString::FString(local_90,param_1 + 0x58);
      _Src = local_e8;
      local_108 = (void *)0x0;
      iVar5 = (int)local_e0;
      local_100 = iVar5;
      if (iVar5 == 0) {
        local_fc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_e0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_108,_Src,(longlong)iVar5 * 2);
      }
      uVar9 = FUN_142b46360(*(undefined8 *)(param_1 + 0x80),local_60);
      iVar5 = FUN_142af42a0(local_d8,uVar9,&local_108,&local_c8,&local_f8,&local_70);
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d0 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (0 < iVar5) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_40);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar9);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140565c10 FUN_140565c10 body=935 status=ok
// SIG undefined FUN_140565c10(void)

void FUN_140565c10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  void *local_128;
  ulonglong local_120;
  longlong local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [16];
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_78;
  undefined1 local_70 [16];
  longlong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  iVar5 = 0;
  lVar6 = FUN_142b45e90();
  plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_c8,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x70);
  if (plVar1 != plVar7) {
    *plVar1 = *plVar7;
    *plVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,plVar7 + 1);
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_c0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b480d0(*plVar1,&local_118);
    if (local_118 != 0) {
      FUN_142b21e10(local_108);
      local_f0 = (longlong)*(int *)(param_1 + 0x30);
      FString::operator=(local_d8,param_1 + 0x38);
      FString::operator=(local_e8,param_1 + 0x58);
      FString::operator=(local_100,param_1 + 0x48);
      lVar6 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar6 + 0x18),&local_128);
      local_b8 = 0;
      uStack_b0 = 0;
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_98);
      local_138 = 0;
      local_130 = 0;
      plVar7 = (longlong *)puVar8[1];
      uVar9 = *puVar8;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x30,&local_138);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc19c0;
        puVar8[1] = uVar9;
        puVar8[2] = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
        }
        puVar8[3] = FUN_140558230;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_GetPoolName_143fc1a08;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      local_78 = &PTR_FUN_143fc05f0;
      FString::FString(local_70,local_100);
      local_60 = local_f0;
      FString::FString(local_58,local_e8);
      FString::FString(local_48,local_d8);
      _Src = local_128;
      local_148 = (void *)0x0;
      iVar5 = (int)local_120;
      local_140 = iVar5;
      if (iVar5 == 0) {
        local_13c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_120 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_148,_Src,(longlong)iVar5 * 2);
      }
      lVar6 = *plVar1;
      uVar9 = FString::FString(local_38,param_1 + 0x20);
      uVar10 = FUN_142b46360(lVar6,local_a8);
      iVar5 = FUN_142af5060(local_118,uVar10,&local_148,uVar9,&local_78,&local_138,&local_b8);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_142b22e20(local_108);
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    if (0 < iVar5) {
      return;
    }
  }
  uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_88);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x80,uVar9);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140565fc0 FUN_140565fc0 body=483 status=ok
// SIG undefined FUN_140565fc0(void)

void FUN_140565fc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FUN_142b45e90();
  plVar6 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),local_38,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar6) {
    *plVar1 = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar6 + 1);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x48,uVar8);
    if (local_20 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_20 + 8))(local_20,1);
    return;
  }
  plVar6 = (longlong *)(lVar5 + 0xc0);
  plVar7 = (longlong *)FUN_1405317f0(&local_48,param_1,FUN_140557f30);
  if (((int)plVar7[1] != 0) && (*plVar7 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    if (((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    }
    iVar3 = *(int *)(lVar5 + 200);
    *(int *)(lVar5 + 200) = iVar3 + 1;
    if (*(int *)(lVar5 + 0xcc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
    }
    plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *plVar6);
    *plVar6 = 0;
    *plVar6 = *plVar7;
    *plVar7 = 0;
    *(int *)(plVar6 + 1) = (int)plVar7[1];
    *(undefined4 *)(plVar7 + 1) = 0;
  }
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_140566134;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_140566134:
  FUN_142b6d740(*plVar1,param_1 + 0x20);
  return;
}



// FUNCTION 1405661b0 FUN_1405661b0 body=457 status=ok
// SIG undefined FUN_1405661b0(void)

void FUN_1405661b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_48 [3];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FUN_142b45e90();
  plVar6 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),local_28,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar6) {
    *plVar1 = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar6 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*plVar1 != 0) {
    FUN_142b45fe0(*plVar1,local_48 + 2);
    if (local_48[2] != 0) {
      lVar5 = *(longlong *)(local_48[2] + 8);
      plVar1 = *(longlong **)(local_48[2] + 0x10);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        local_48[0] = 0;
        local_48[1] = 0x2f;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        FGenericPlatformString::Memcpy
                  (local_48[0],L"UserSearchPlatformLinksMaxServiceIdsPerRequest",0x5e);
        uVar4 = FUN_142afb390(lVar5,local_48,*(undefined4 *)(param_1 + 0x34),1,9999);
        *(undefined4 *)(param_1 + 0x34) = uVar4;
        if (local_48[0] != 0) {
          FMemory::Free(local_48[0]);
        }
      }
      plVar6 = plVar1 + 1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_14054ca10(param_1);
  return;
}



// FUNCTION 140566390 FUN_140566390 body=358 status=ok
// SIG undefined FUN_140566390(void)

void FUN_140566390(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if (0 < (int)param_1[0x51]) {
    plVar3 = (longlong *)(param_1[0x50] + 0xb8);
    uVar9 = uVar8;
    do {
      if (*plVar3 == param_2) {
        lVar4 = (longlong)(int)uVar9 * 0x118 + param_1[0x50];
        if ((lVar4 != 0) && ((*(int *)(lVar4 + 0x110) - 2U & 0xfffffffb) == 0)) {
          *(undefined4 *)(lVar4 + 0x110) = 4;
          if (*(char *)(lVar4 + 0x3a) == '\0') {
            puVar6 = *(undefined8 **)(lVar4 + 0xf0);
            puVar7 = puVar6 + (longlong)*(int *)(lVar4 + 0xf8) * 2;
            if (puVar6 != puVar7) {
              plVar3 = (longlong *)(lVar4 + 0x100);
              do {
                iVar2 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
                        IndexOfByPredicate<FUniqueNetIdMatcher>(plVar3,*puVar6);
                if (iVar2 == -1) {
                  iVar2 = *(int *)(lVar4 + 0x108);
                  *(int *)(lVar4 + 0x108) = iVar2 + 1;
                  if (*(int *)(lVar4 + 0x10c) < iVar2 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
                  }
                  puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar3);
                  *puVar5 = *puVar6;
                  lVar1 = puVar6[1];
                  puVar5[1] = lVar1;
                  if (lVar1 != 0) {
                    LOCK();
                    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
                    UNLOCK();
                  }
                }
                puVar6 = puVar6 + 2;
              } while (puVar6 != puVar7);
            }
          }
          else if (*(char *)(lVar4 + 0x39) == '\0') {
            FUN_1404b6bd0(param_1 + 0x56);
          }
          (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
          return;
        }
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar8 = uVar8 + 1;
      plVar3 = plVar3 + 0x23;
    } while ((longlong)uVar8 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,2);
  return;
}



// FUNCTION 140566500 FUN_140566500 body=1335 status=ok
// SIG undefined FUN_140566500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140566500(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  char cVar12;
  void *_Src_00;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong *plStack_270;
  int local_268 [2];
  longlong local_260 [2];
  void *local_250;
  int local_248;
  undefined8 local_240;
  longlong local_238;
  char *local_230;
  char *local_228;
  undefined8 local_220;
  longlong lStack_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined2 *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  char local_148;
  undefined1 local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 local_110;
  longlong local_108;
  longlong *plStack_100;
  undefined1 local_f8 [128];
  longlong local_78;
  char *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_238 = param_1;
  FUN_140549500(param_1 + 0x78,local_268,param_2);
  lVar8 = 0;
  if (local_268[0] != -1) {
    lVar8 = (longlong)local_268[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar13 = lVar8 + 0x10;
  if (lVar8 == 0) {
    lVar13 = 0;
  }
  if ((lVar13 != 0) && (lVar8 = FUN_14054b160(lVar13), lVar8 != 0)) {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x38,local_210);
    plVar5 = (longlong *)puVar9[1];
    local_240 = *puVar9;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_208 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)local_208 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    puVar9 = (undefined8 *)FUN_1405859b0(lVar13 + 0x60);
    _Src_00 = (void *)0x0;
    local_250 = (void *)0x0;
    local_248 = *(int *)(puVar9 + 1);
    lVar13 = (longlong)local_248;
    _Src = (void *)*puVar9;
    if (local_248 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_250,local_248,0);
      _Src_00 = local_250;
      _guard_xfg_dispatch_icall_nop(local_250,_Src,lVar13 * 2);
    }
    iVar4 = local_248;
    local_178 = (undefined2 *)0x0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_170 = local_248;
    if (local_248 == 0) {
      local_16c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_178,local_248,0);
      _guard_xfg_dispatch_icall_nop(local_178,_Src_00,(longlong)iVar4 * 2);
    }
    local_168 = 0;
    local_160 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = '\0';
    local_140 = 0;
    local_128 = 0;
    FUN_140447410(&local_178,&local_230);
    for (; local_230 < local_228; local_230 = local_230 + 1) {
      if (*local_230 < '\0') {
        lVar13 = CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
        lVar10 = local_160;
        uVar15 = local_158;
        uVar16 = uStack_154;
        cVar12 = local_148;
        goto LAB_140566759;
      }
    }
    puVar11 = &DAT_143f3eda8;
    if (local_170 != 0) {
      puVar11 = local_178;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_f8,puVar11);
    lVar13 = -1;
    do {
      lVar14 = lVar13;
      lVar13 = lVar14 + 1;
    } while (local_70[lVar14 + 1] != '\0');
    lVar10 = FMemory::Malloc(lVar14 + 2,0);
    local_160 = lVar10;
    lVar13 = lVar10 - (longlong)local_70;
    do {
      cVar12 = *local_70;
      local_70[lVar13] = cVar12;
      local_70 = local_70 + 1;
    } while (cVar12 != '\0');
    lVar13 = lVar10 + lVar14 + 1;
    local_148 = '\x01';
    local_220._0_4_ = (undefined4)lVar10;
    uVar15 = (undefined4)local_220;
    local_220._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
    uVar16 = local_220._4_4_;
    local_158 = (undefined4)local_220;
    uStack_154 = local_220._4_4_;
    uStack_150 = lVar13;
    cVar12 = '\x01';
    local_220 = lVar10;
    lStack_218 = lVar13;
    if (local_78 != 0) {
      FMemory::Free();
    }
LAB_140566759:
    local_110 = cVar12 != '\0';
    uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
    if ((bool)local_110) {
      local_120 = uVar15;
      uStack_11c = uVar16;
      uStack_118 = lVar13;
    }
    plVar6 = (longlong *)param_2[1];
    puVar9 = &local_200;
    if ((bool)local_110) {
      puVar9 = (undefined8 *)&local_120;
    }
    local_1e8 = *(undefined4 *)puVar9;
    uStack_1e4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1e0 = *(undefined4 *)(puVar9 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_1d8 = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      lVar10 = local_160;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      lVar10 = local_160;
    }
    local_198 = FUN_140530c50;
    local_190 = &LAB_140530d40;
    local_188 = &LAB_140530c70;
    local_180 = &LAB_140530c40;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      lVar10 = local_160;
    }
    local_1c8 = local_240;
    local_1d0 = plVar6;
    local_1c0 = plVar5;
    bifrost::social::voice::vivox::_guard_xfg_dispatch_icall_nop(lVar8,&local_1e8,&local_1d8);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_178 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    lVar13 = local_238;
    plVar6 = (longlong *)param_2[1];
    lVar8 = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)(local_238 + 0x178);
    if (*plVar3 == 0) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_278 = lVar8;
      plStack_270 = plVar6;
      if (&local_278 != plVar3) {
        local_278 = *plVar3;
        plStack_270 = *(longlong **)(local_238 + 0x180);
        *plVar3 = lVar8;
        *(longlong **)(local_238 + 0x180) = plVar6;
        local_108 = lVar8;
        plStack_100 = plVar6;
      }
      plVar7 = plStack_270;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_270 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_270 + 8))(plStack_270,1);
          }
        }
      }
      *(undefined1 *)(lVar13 + 0x188) = 0;
      *(undefined8 *)(lVar13 + 0x18c) = 0;
      FUN_140560900(plVar3);
      TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(lVar13 + 0x198,0);
      TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(lVar13 + 0x1a8,0);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_260[0] = 0;
    local_260[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_260,0);
    FGenericPlatformString::Memcpy(local_260[0],L"voice_started",0x1c);
    FUN_14055a380(lVar13,local_260);
    if (local_260[0] != 0) {
      FMemory::Free();
    }
    if (local_250 != (void *)0x0) {
      FMemory::Free(local_250);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140566a40 FUN_140566a40 body=469 status=ok
// SIG undefined FUN_140566a40(void)

void FUN_140566a40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int local_res8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  lVar7 = 0;
  if (local_res8[0] != -1) {
    lVar7 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar9 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  if ((lVar9 != 0) && (lVar7 = FUN_14054b160(), lVar7 != 0)) {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x38,local_98);
    plVar4 = (longlong *)puVar8[1];
    uVar5 = *puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    plVar6 = (longlong *)param_2[1];
    local_88 = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    local_48 = FUN_140530db0;
    local_40 = &LAB_140530d40;
    local_38 = &LAB_140530c70;
    local_30 = &LAB_140530c40;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_80 = plVar6;
    local_78 = uVar5;
    local_70 = plVar4;
    bifrost::social::voice::vivox::_guard_xfg_dispatch_icall_nop(lVar7,&local_88);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
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
  }
  return;
}



// FUNCTION 140566c30 FUN_140566c30 body=617 status=ok
// SIG undefined FUN_140566c30(void)

void FUN_140566c30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res8 [2];
  int local_res18 [4];
  longlong local_48 [3];
  longlong *local_30;
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  lVar9 = 0;
  lVar5 = lVar9;
  if (local_res8[0] != -1) {
    lVar5 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar7 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar7 = lVar9;
  }
  if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    cVar4 = FUN_140584270(lVar7 + 0x60);
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,lVar7);
      lVar7 = (**(code **)(*plVar6 + 0x60))(plVar6,lVar7 + 0x60);
      FUN_140549500(param_1 + 0x78,local_res18,param_2);
      lVar5 = lVar9;
      if (local_res18[0] != -1) {
        lVar5 = (longlong)local_res18[0] * 0x168 + *(longlong *)(param_1 + 0x78);
      }
      lVar8 = lVar5 + 0x10;
      if (lVar5 == 0) {
        lVar8 = lVar9;
      }
      if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x120) != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 8,*(undefined8 *)(lVar8 + 0x120));
          *(undefined8 *)(lVar8 + 0x120) = 0;
        }
        if (*(longlong *)(lVar8 + 0x128) != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 8,*(undefined8 *)(lVar8 + 0x128));
          *(undefined8 *)(lVar8 + 0x128) = 0;
        }
        if (*(longlong *)(lVar8 + 0x130) != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 8,*(undefined8 *)(lVar8 + 0x130));
          *(undefined8 *)(lVar8 + 0x130) = 0;
        }
        if (*(longlong *)(lVar8 + 0x138) != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 8,*(undefined8 *)(lVar8 + 0x138));
          *(undefined8 *)(lVar8 + 0x138) = 0;
        }
        if (*(longlong *)(lVar8 + 0x140) != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 8,*(undefined8 *)(lVar8 + 0x140));
          *(undefined8 *)(lVar8 + 0x140) = 0;
        }
        if (*(longlong *)(lVar8 + 0x148) != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar7 + 8,*(undefined8 *)(lVar8 + 0x148));
          *(undefined8 *)(lVar8 + 0x148) = 0;
        }
      }
    }
    local_48[0] = 0;
    local_48[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"voice_ended",0x18);
    FUN_14055a380(param_1,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_30 = (longlong *)0x0;
    if ((longlong *)(param_1 + 0x178) != local_48 + 2) {
      *(longlong *)(param_1 + 0x178) = 0;
      local_48[2] = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x180,&local_30);
      plVar6 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140566ea0 FUN_140566ea0 body=361 status=ok
// SIG undefined FUN_140566ea0(void)

void FUN_140566ea0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int local_res8 [2];
  ulonglong uVar8;
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  uVar8 = 0;
  uVar1 = uVar8;
  if (local_res8[0] != -1) {
    uVar1 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  uVar6 = uVar1 + 0x10;
  if (uVar1 == 0) {
    uVar6 = uVar8;
  }
  if ((uVar6 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    plVar2 = (longlong *)FUN_14058b310();
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar6);
    FUN_140549500(param_1 + 0x78,local_res8,param_2);
    uVar1 = uVar8;
    if (local_res8[0] != -1) {
      uVar1 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
    }
    uVar6 = uVar1 + 0x10;
    if (uVar1 == 0) {
      uVar6 = uVar8;
    }
    if ((uVar6 != 0) && (lVar5 = *(longlong *)(uVar6 + 0x118), lVar5 != 0)) {
      uVar1 = uVar8;
      if (0 < *(int *)(lVar3 + 0x40)) {
        do {
          plVar2 = (longlong *)(*(longlong *)(lVar3 + 0x38) + uVar1);
          if ((((int)plVar2[1] != 0) && (plVar4 = (longlong *)*plVar2, plVar4 != (longlong *)0x0))
             && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
                *plVar4 == lVar5)) {
            if (((int)plVar2[1] != 0) && (plVar4 = (longlong *)*plVar2, plVar4 != (longlong *)0x0))
            {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*plVar2 != 0) {
                lVar5 = FMemory::Realloc(*plVar2,0,0);
                *plVar2 = lVar5;
              }
              *(undefined4 *)(plVar2 + 1) = 0;
            }
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar1 = uVar1 + 0x10;
        } while ((int)uVar7 < *(int *)(lVar3 + 0x40));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x38,0);
      *(undefined8 *)(uVar6 + 0x118) = 0;
    }
  }
  return;
}



// FUNCTION 140567010 FUN_140567010 body=1226 status=ok
// SIG undefined FUN_140567010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140567010(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  void *_Src;
  wchar_t *pwVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  wchar_t *local_180;
  int local_178;
  undefined4 local_174;
  wchar_t *local_170;
  int local_168;
  undefined4 local_164;
  longlong local_160;
  longlong *plStack_158;
  longlong *local_150;
  longlong *local_148;
  int local_140 [2];
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  longlong *plStack_108;
  undefined1 local_f8 [128];
  longlong local_78;
  void *local_70;
  short local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_178 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_178;
  plVar5 = (longlong *)0x0;
  iVar8 = 0;
  _Src = (void *)*param_3;
  local_180 = (wchar_t *)0x0;
  local_188 = param_4;
  local_138 = param_1;
  if (local_178 == 0) {
    local_174 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_180,local_178,0);
    _guard_xfg_dispatch_icall_nop(local_180,_Src,lVar7 * 2);
  }
  FString::ReplaceInline(&local_180,&DAT_143fa4cc4,L"&lt;",1);
  FString::ReplaceInline(&local_180,&DAT_143fa4d64,L"&gt;",1);
  FUN_140549500(param_1 + 0xf,local_140,param_2);
  plVar3 = plVar5;
  if (local_140[0] != -1) {
    plVar3 = (longlong *)((longlong)local_140[0] * 0x168 + param_1[0xf]);
  }
  plVar9 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar9 = plVar5;
  }
  if (plVar9 != (longlong *)0x0) {
    lVar7 = operator_new(0x30);
    plVar3 = plVar5;
    if (lVar7 != 0) {
      plVar3 = (longlong *)FUN_1405374b0(lVar7);
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar3;
      plVar5 = plVar4;
    }
    local_150 = plVar3;
    local_148 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_150,plVar3,plVar3);
    if (local_150 != (longlong *)0x0) {
      plVar5 = (longlong *)plVar9[0x19];
      plVar3 = local_150 + 1;
      lVar7 = plVar9[0x18];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_160 = lVar7;
      plStack_158 = plVar5;
      if (&local_160 != plVar3) {
        local_160 = *plVar3;
        plStack_158 = (longlong *)local_150[2];
        *plVar3 = lVar7;
        local_150[2] = (longlong)plVar5;
        local_110 = lVar7;
        plStack_108 = plVar5;
      }
      plVar5 = plStack_158;
      if (plStack_158 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_158 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_158)(plStack_158);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_158 + 8))(plStack_158,1);
          }
        }
      }
      *(undefined1 *)(local_150 + 3) = param_4;
      if (local_178 == 0) {
        pwVar10 = L"";
        iVar6 = iVar8;
      }
      else {
        pwVar10 = local_180;
        iVar6 = local_178 + -1;
      }
      local_170 = (wchar_t *)0x0;
      local_164 = 0;
      if (0x80 < iVar6) {
        iVar6 = 0x80;
      }
      local_168 = iVar6 + 1;
      if (iVar6 == 0) {
        local_168 = 0;
      }
      if ((0 < local_168) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0), pwVar2 = local_170,
         0 < local_168)) {
        wcsncpy(local_170,pwVar10,(longlong)iVar6);
        pwVar2[iVar6] = L'\0';
      }
      plVar5 = local_150;
      pwVar10 = L"";
      if (local_168 != 0) {
        pwVar10 = local_170;
      }
      TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                (local_f8,pwVar10);
      *(ushort *)((longlong)plVar5 + 0x1a) = local_68 + 1U;
      *(undefined4 *)(plVar5 + 5) = 0;
      if (*(uint *)((longlong)plVar5 + 0x2c) != (uint)(ushort)(local_68 + 1U)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar5 + 4);
        iVar8 = (int)plVar5[5];
      }
      iVar6 = (uint)*(ushort *)((longlong)plVar5 + 0x1a) + iVar8;
      *(int *)(plVar5 + 5) = iVar6;
      if (*(int *)((longlong)plVar5 + 0x2c) < iVar6) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar5 + 4,iVar8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)plVar5[4],local_70,(ulonglong)*(ushort *)((longlong)plVar5 + 0x1a));
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (1 < local_178) {
        local_130 = *param_2;
        local_128 = (longlong *)param_2[1];
        if (local_128 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = (int)local_128[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_138 + 0xe0))(local_138,&local_130,&local_170,local_188);
        plVar5 = local_128;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_128 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      lVar7 = FUN_14054b210();
      plVar5 = local_148;
      if (lVar7 != 0) {
        if (local_148 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_148 + 1) = (int)local_148[1] + 1;
          UNLOCK();
        }
        local_120 = local_150;
        local_118 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_148 + 1) = (int)local_148[1] + 1;
          UNLOCK();
        }
        FUN_1404e05b0(lVar7,&local_120);
        plVar3 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_118 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      if (local_170 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    plVar5 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_148 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  if (local_180 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405674e0 FUN_1405674e0 body=1693 status=ok
// SIG undefined FUN_1405674e0(void)

void FUN_1405674e0(longlong *param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78 [2];
  longlong local_68 [6];
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FUN_1404b6d30(param_1 + 0x56);
  iVar18 = 0;
  if (0 < (int)param_1[0x55]) {
    plVar4 = param_1 + 0x54;
    lVar17 = 0;
    iVar20 = 1;
    do {
      uVar11 = *(undefined8 *)(lVar17 + *plVar4);
      uVar8 = (**(code **)(*param_1 + 0x20))(param_1,uVar11);
      if (1 < uVar8) {
        iVar15 = (int)param_1[0x55];
        iVar9 = (iVar15 - iVar18) + -1;
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar4 + (longlong)iVar18 * 8),
                     (void *)(*plVar4 + (longlong)iVar20 * 8),(longlong)iVar9 << 3);
          iVar15 = (int)param_1[0x55];
        }
        *(int *)(param_1 + 0x55) = iVar15 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar4);
        iVar18 = iVar18 + -1;
        iVar20 = iVar20 + -1;
        lVar17 = lVar17 + -8;
        (**(code **)(*param_1 + 0xd0))(param_1,uVar11);
      }
      iVar18 = iVar18 + 1;
      iVar20 = iVar20 + 1;
      lVar17 = lVar17 + 8;
    } while (iVar18 < (int)param_1[0x55]);
  }
  lVar17 = param_1[0x50];
  lVar19 = (longlong)(int)param_1[0x51] * 0x118 + lVar17;
  do {
    if (lVar17 == lVar19) {
      return;
    }
    lVar10 = *(longlong *)(lVar17 + 0xa0);
    if ((((lVar10 != 0) && (*(char *)(lVar17 + 0x3a) == '\0')) && (*(char *)(lVar17 + 0xd8) != '\0')
        ) && ((*(char *)(lVar17 + 0x38) != '\0' && (*(longlong *)(lVar17 + 0xe0) != 0)))) {
      plVar4 = *(longlong **)(lVar17 + 0xa8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((0.0 < *(float *)(lVar10 + 0x38)) &&
         (fVar21 = *(float *)(lVar10 + 0x38) - param_2, *(float *)(lVar10 + 0x38) = fVar21,
         fVar21 <= 0.0)) {
        FUN_14054bfd0(param_1,&local_a8,lVar17 + 0x28);
        if (local_a8 != 0) {
          lVar10 = operator_new(0x40);
          if (lVar10 == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)(lVar17 + 0xa0);
            bVar7 = true;
            bVar6 = true;
            bVar5 = true;
            local_88 = local_a8;
            plStack_80 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
              UNLOCK();
            }
            local_98 = *(undefined8 *)(lVar17 + 0xe0);
            local_90 = *(longlong **)(lVar17 + 0xe8);
            if (local_90 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_90 + 1) = (int)local_90[1] + 1;
              UNLOCK();
            }
            uVar11 = (**(code **)(*plVar12 + 0x38))(plVar12,local_68);
            plVar12 = (longlong *)
                      FUN_140535e60(lVar10,&local_98,*(undefined8 *)(lVar17 + 0xb8),uVar11,&local_88
                                   );
          }
          plVar16 = (longlong *)0x0;
          plVar13 = (longlong *)operator_new(0x18);
          if (plVar13 != (longlong *)0x0) {
            *(undefined4 *)(plVar13 + 1) = 1;
            *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
            *plVar13 = (longlong)&PTR_FUN_143fc2190;
            plVar13[2] = (longlong)plVar12;
            plVar16 = plVar13;
          }
          if (plVar12 != (longlong *)0x0) {
            if ((*plVar12 != 0) && (plVar12[1] != 0)) {
              piVar1 = (int *)(plVar12[1] + 8);
              LOCK();
              iVar18 = *piVar1;
              if (iVar18 == 0) {
                *piVar1 = 0;
                iVar18 = 0;
              }
              UNLOCK();
              if (0 < iVar18) goto LAB_140567803;
            }
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
            }
            *plVar12 = (longlong)plVar12;
            plVar13 = (longlong *)plVar12[1];
            if (plVar16 != plVar13) {
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
                UNLOCK();
                plVar13 = (longlong *)plVar12[1];
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
              plVar12[1] = (longlong)plVar16;
            }
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar16 + 1;
              lVar10 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
          }
LAB_140567803:
          plVar13 = local_90;
          if ((bVar5) && (bVar5 = false, local_90 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_90 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*local_90 + 8))(local_90,1);
              }
            }
          }
          if ((bVar6) && (bVar6 = false, local_68[0] != 0)) {
            FMemory::Free();
          }
          plVar13 = plStack_80;
          if ((bVar7) && (bVar7 = false, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plStack_80 + 8))(plStack_80,1);
              }
            }
          }
          if (plVar12 != (longlong *)0x0) {
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
            }
            iVar18 = (int)param_1[0x80];
            *(int *)(param_1 + 0x80) = iVar18 + 1;
            if (*(int *)((longlong)param_1 + 0x404) < iVar18 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x7f,iVar18);
            }
            puVar14 = (undefined8 *)((longlong)iVar18 * 0x10 + param_1[0x7f]);
            *puVar14 = plVar12;
            puVar14[1] = plVar16;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
              LOCK();
              plVar13 = plVar16 + 1;
              lVar10 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
            pplVar3 = (longlong **)(plVar12 + 6);
            plVar13 = (longlong *)FMemory::Realloc(0,0x30);
            local_78[0] = plVar13;
            if (plVar13 != (longlong *)0x0) {
              *plVar13 = (longlong)&DAT_143f3ed00;
              plVar13[1] = (longlong)param_1;
              plVar13[2] = (longlong)FUN_1405574a0;
              lVar10 = FDelegateHandle::GenerateNewID();
              plVar13[4] = lVar10;
              *plVar13 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            if (local_78 == pplVar3) {
LAB_14056799f:
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x28))(plVar13,0);
                local_78[0] = (longlong *)FMemory::Realloc(plVar13,0,0);
                if (local_78[0] != (longlong *)0x0) {
                  FMemory::Free(local_78[0]);
                }
              }
            }
            else {
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x30))(plVar13,pplVar3);
                goto LAB_14056799f;
              }
              if (((int)plVar12[7] != 0) && (plVar13 = *pplVar3, plVar13 != (longlong *)0x0)) {
                (**(code **)(*plVar13 + 0x28))(plVar13,0);
                if (*pplVar3 != (longlong *)0x0) {
                  plVar13 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
                  *pplVar3 = plVar13;
                }
                *(undefined4 *)(plVar12 + 7) = 0;
              }
            }
            lVar10 = plVar12[3];
            if (lVar10 != 0) {
              uVar11 = FUN_1405317f0(&local_b8,plVar12,FUN_1405536c0);
              TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x58,uVar11);
              if (local_b0 == 0) {
LAB_140567a6e:
                if (local_b8 != (longlong *)0x0) {
                  FMemory::Free(local_b8);
                }
              }
              else if (local_b8 != (longlong *)0x0) {
                (**(code **)(*local_b8 + 0x28))(local_b8,0);
                if (local_b8 != (longlong *)0x0) {
                  local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
                }
                local_b0 = 0;
                goto LAB_140567a6e;
              }
              FUN_1405635c0(plVar12[3]);
            }
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar16 + 1;
            lVar10 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
        }
        plVar12 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar16 = plStack_a0 + 1;
          lVar10 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
            }
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar4 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    lVar17 = lVar17 + 0x118;
  } while( true );
}



// FUNCTION 140567b80 FUN_140567b80 body=94 status=ok
// SIG undefined FUN_140567b80(void)

undefined1 FUN_140567b80(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_1404b7130();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1405674e0(*(longlong *)(param_1 + 0xa0),param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
  }
  return 1;
}



// FUNCTION 140567be0 FUN_140567be0 body=1479 status=ok
// SIG undefined FUN_140567be0(void)

void FUN_140567be0(longlong param_1,float param_2)

{
  longlong *plVar1;
  uint *puVar2;
  float *pfVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong local_158 [2];
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  uint uStack_124;
  uint *puStack_120;
  undefined4 local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  longlong *local_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  int local_b8;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  int local_98;
  int local_94;
  longlong *local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xe0))();
  if (cVar6 == '\0') {
    FUN_14054e7f0(param_1,local_res8,local_res10);
    FUN_140559eb0(param_1,local_res10[0]);
  }
  iVar9 = 0;
  uStack_144 = 1;
  plVar1 = (longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0x88);
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = *puVar13;
    iStack_130 = iVar9;
    local_148 = iVar9;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar8 = local_148 + 1;
      bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar8;
      if (bVar5) goto LAB_140567cfa;
      uVar11 = puVar13[lVar12 + 1];
    }
    uStack_144 = -uVar11 & uVar11;
    local_res18 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> local_res18 == 0; local_res18 = local_res18 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_res18;
    }
    uStack_134 = (iStack_130 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_134) {
LAB_140567cfa:
      uStack_134 = uVar4;
    }
  }
  local_138 = 0xffffffff;
  uStack_a4 = *(uint *)(param_1 + 0xa0);
  uStack_d8 = CONCAT44(uStack_144,local_148);
  uStack_78 = 0xffffffff;
  uStack_74 = uStack_134;
  uStack_c0 = CONCAT44(uStack_12c,iStack_130);
  local_b8 = (int)uStack_a4 >> 5;
  local_a8 = -1 << ((byte)uStack_a4 & 0x1f);
  local_a0 = uStack_a4 & 0xffffffe0;
  iStack_88 = local_148;
  uStack_84 = uStack_144;
  puStack_140 = puVar2;
  local_e0 = plVar1;
  puStack_d0 = puVar2;
  local_80 = puVar2;
  local_70 = uStack_c0;
  local_90 = plVar1;
  uStack_c8 = uStack_78;
  uStack_c4 = uStack_74;
  uVar11 = uStack_a4;
  if (uStack_a4 != uVar4) {
    puVar13 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = puVar13[local_b8] & local_a8;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_b8;
      local_a0 = local_a0 + 0x20;
      iVar8 = local_b8 + 1;
      bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar8;
      if (bVar5) goto LAB_140567de1;
      uVar11 = puVar13[lVar12 + 1];
      local_a8 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_res20 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_res20;
    }
    uStack_a4 = (local_a0 - iVar8) + 0x1f;
    uVar11 = uStack_a4;
    if ((int)uVar4 < (int)uStack_a4) {
LAB_140567de1:
      uStack_a4 = uVar4;
      uVar11 = uVar4;
    }
  }
  while (((uStack_74 != uVar11 || (local_80 != puVar2)) || (local_90 != plVar1))) {
    lVar12 = (longlong)(int)uStack_74 * 0x168 + *local_90;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(char *)(lVar12 + 0x111) != '\0')) {
      plVar7 = (longlong *)FUN_14058b310();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7,lVar12 + 0x10);
      cVar6 = (**(code **)(*plVar7 + 0x30))(plVar7);
      if (cVar6 == '\0') {
        fVar14 = param_2 + *(float *)(lVar12 + 0xe4);
        *(float *)(lVar12 + 0xe4) = fVar14;
        if (*(float *)(lVar12 + 0xe0) <= fVar14 && fVar14 != *(float *)(lVar12 + 0xe0)) {
          *(undefined4 *)(lVar12 + 0xe4) = 0;
          FUN_140566a40(param_1,lVar12 + 0xc0);
        }
      }
    }
    FUN_14056a360(param_1,lVar12 + 0x10,param_2);
    uStack_78 = uStack_78 & ~uStack_84;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
  }
  plVar1 = (longlong *)(param_1 + 0xd0);
  uStack_124 = 1;
  uVar4 = *(uint *)(param_1 + 0xf8);
  puVar2 = (uint *)(param_1 + 0xe0);
  local_128 = 0;
  uStack_114 = 0;
  iStack_110 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = *puVar13;
    iStack_110 = iVar9;
    local_128 = iVar9;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar9 = local_128 + 1;
      bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar9;
      if (bVar5) goto LAB_140567f55;
      uVar11 = puVar13[lVar12 + 1];
    }
    uStack_124 = -uVar11 & uVar11;
    local_98 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> local_98 == 0; local_98 = local_98 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - local_98;
    }
    uStack_114 = (iStack_110 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_114) {
LAB_140567f55:
      uStack_114 = uVar4;
    }
  }
  local_118 = 0xffffffff;
  uStack_f4 = *(uint *)(param_1 + 0xf8);
  uStack_100 = CONCAT44(uStack_124,local_128);
  uStack_c8 = 0xffffffff;
  uStack_c4 = uStack_114;
  uStack_e8 = CONCAT44(uStack_10c,iStack_110);
  local_108 = (int)uStack_f4 >> 5;
  uStack_104 = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_f8 = -1 << ((byte)uStack_f4 & 0x1f);
  uStack_f0 = uStack_f4 & 0xffffffe0;
  uStack_ec = uStack_114;
  uStack_d8 = CONCAT44(uStack_124,local_128);
  puStack_120 = puVar2;
  local_e0 = plVar1;
  puStack_d0 = puVar2;
  uStack_c0 = uStack_e8;
  uVar11 = uStack_f4;
  if (uStack_f4 != uVar4) {
    puVar13 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = puVar13[local_108] & uStack_f8;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_108;
      uStack_f0 = uStack_f0 + 0x20;
      iVar9 = local_108 + 1;
      bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
      local_108 = iVar9;
      if (bVar5) goto LAB_14056803e;
      uVar11 = puVar13[lVar12 + 1];
      uStack_f8 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_94 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_94 == 0; local_94 = local_94 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - local_94;
    }
    uStack_f4 = (uStack_f0 - iVar9) + 0x1f;
    uVar11 = uStack_f4;
    if ((int)uVar4 < (int)uStack_f4) {
LAB_14056803e:
      uStack_f4 = uVar4;
      uVar11 = uVar4;
    }
  }
  while (((uStack_c4 != uVar11 || (puStack_d0 != puVar2)) || (local_e0 != plVar1))) {
    lVar12 = *local_e0;
    lVar10 = (longlong)(int)uStack_c4 * 0x168;
    if ((*(char *)(lVar10 + 0x111 + lVar12) == '\0') && (*(longlong *)(lVar10 + 0xd0 + lVar12) == 0)
       ) {
      fVar14 = param_2 + *(float *)(lVar10 + 0xf4 + lVar12);
      pfVar3 = (float *)(lVar10 + 0xf0 + lVar12);
      *(float *)(lVar10 + 0xf4 + lVar12) = fVar14;
      if (*pfVar3 <= fVar14 && fVar14 != *pfVar3) {
        *(undefined4 *)(lVar10 + 0xf4 + lVar12) = 0;
        local_68 = *(undefined8 *)(lVar10 + 0xc0 + lVar12);
        local_60 = *(longlong *)(lVar10 + 200 + lVar12);
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        FUN_140548d50(param_1,&local_68);
      }
    }
    uStack_c8 = uStack_c8 & ~uStack_d8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    *(undefined1 *)(param_1 + 0x220) = 0;
    FUN_140568cd0(param_1);
  }
  fVar14 = param_2 + *(float *)(param_1 + 400);
  *(float *)(param_1 + 0x18c) = param_2 + *(float *)(param_1 + 0x18c);
  *(float *)(param_1 + 400) = fVar14;
  if (*(float *)(param_1 + 0x194) <= fVar14 && fVar14 != *(float *)(param_1 + 0x194)) {
    *(undefined4 *)(param_1 + 400) = 0;
    local_158[0] = 0;
    local_158[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"voice_heartbeat",0x20);
    FUN_14055a380(param_1,local_158);
    if (local_158[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405681b0 FUN_1405681b0 body=203 status=ok
// SIG undefined FUN_1405681b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1405681b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_138,*param_3);
  psVar1 = *(short **)(lVar2 + 0x108);
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar1[lVar2] != 0);
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar1,(longlong)iVar3 * 2);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140568280 FUN_140568280 body=62 status=ok
// SIG undefined FUN_140568280(void)

wchar_t * FUN_140568280(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return L"Disconnected";
  }
  if (param_2 == '\x01') {
    return L"Connecting";
  }
  if (param_2 == '\x02') {
    return L"Connected";
  }
  if (param_2 != '\x03') {
    return L"";
  }
  return L"Disconnecting";
}



// FUNCTION 1405682c0 FUN_1405682c0 body=62 status=ok
// SIG undefined FUN_1405682c0(void)

wchar_t * FUN_1405682c0(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return L"LoggedOut";
  }
  if (param_2 == '\x01') {
    return L"LoggingIn";
  }
  if (param_2 == '\x02') {
    return L"LoggedIn";
  }
  if (param_2 != '\x03') {
    return L"";
  }
  return L"LoggingOut";
}



// FUNCTION 140568300 FUN_140568300 body=842 status=ok
// SIG undefined FUN_140568300(void)

void FUN_140568300(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  void *local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [8];
  void *local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_d0,param_2);
  if (local_d0 == 0) {
    (**(code **)(*param_1 + 200))(param_1,param_2,param_3,4);
  }
  else {
    cVar4 = FUN_142b54900();
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 200))(param_1,param_2,param_3,7);
    }
    else {
      FUN_142b47dc0(local_d0,&local_88);
      if (local_88 == 0) {
        (**(code **)(*param_1 + 200))(param_1,param_2,param_3,6);
      }
      else {
        local_b8 = *param_2;
        lVar5 = param_2[1];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        lVar9 = param_3[1];
        local_a8 = *param_3;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        local_c0 = param_1;
        local_b0 = lVar5;
        local_a0 = lVar9;
        FTickAnimationPlayers::FTickAnimationPlayers(local_e8);
        local_f0 = 5;
        local_f8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        _Src = local_f8;
        FGenericPlatformString::Memcpy(local_f8,L"stop",10);
        lVar10 = (longlong)(int)local_f0;
        local_d8 = (int)local_f0;
        if (((int)local_f0 == 0) && (local_d4 == 0)) {
          local_d4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_f0 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(local_e0,_Src,lVar10 * 2);
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        plVar3 = (longlong *)*param_3;
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        uStack_70 = 0;
        puVar6 = (undefined8 *)operator_new(0x40,&local_98);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_GetPoolName_143fc1810;
          puVar6[1] = param_1;
          puVar6[2] = local_b8;
          puVar6[3] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            lVar9 = local_a0;
          }
          puVar6[4] = local_a8;
          puVar6[5] = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[7] = uVar7;
          *puVar6 = &PTR_GetPoolName_143fc1858;
        }
        local_58 = &PTR_FUN_143fc0690;
        FString::FString(local_50,&local_e0);
        uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,local_40);
        uVar8 = FUN_142b46360(local_d0,local_68);
        FUN_142ae4cd0(local_88,uVar8,uVar7,&local_58,&local_98,&local_78);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        FUN_142b1e1c0(local_e8);
        FUN_140537630(&local_c0);
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c8 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  return;
}



// FUNCTION 140568650 FUN_140568650 body=87 status=ok
// SIG undefined FUN_140568650(void)

void FUN_140568650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_14053dae0(param_2,param_3);
  if (cVar1 == '\0') {
    return;
  }
  FUN_140560b30(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 1405686b0 FUN_1405686b0 body=177 status=ok
// SIG undefined FUN_1405686b0(void)

undefined8 FUN_1405686b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_res8 [2];
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar4 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x50) == 0)) {
    uVar3 = 0;
  }
  else {
    FUN_140566ea0(param_1,param_2);
    plVar2 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
    (**(code **)(*plVar2 + 0x118))(plVar2);
    FUN_14055e4d0(param_1 + 0x78,param_2);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140568770 FUN_140568770 body=1329 status=ok
// SIG undefined FUN_140568770(void)

void FUN_140568770(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong **pplVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong *local_res18;
  longlong *local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar13 = (longlong *)0x0;
  iVar15 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  local_res18 = param_3;
  if (0 < (int)param_1[0x51]) {
    plVar7 = (longlong *)(param_1[0x50] + 0xb8);
    plVar14 = plVar13;
    plVar9 = plVar13;
    do {
      if (*plVar7 == param_2) {
        lVar12 = (longlong)(int)plVar9 * 0x118 + param_1[0x50];
        if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0xa0) != 0)) {
          local_res8 = *param_3;
          iVar5 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
                  IndexOfByPredicate<FUniqueNetIdMatcher>(lVar12 + 0xf0);
          if (iVar5 == -1) {
            (**(code **)(*param_1 + 0x318))(param_1,local_res10,param_3,2);
            return;
          }
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (lVar12 + 0xf0,iVar5,1,1);
          iVar5 = -0x7fffbffb;
          *(int *)(lVar12 + 0xb4) = *(int *)(lVar12 + 0x30) - *(int *)(lVar12 + 0xf8);
          if ((*(char *)(lVar12 + 0x3a) != '\0') ||
             (cVar4 = (**(code **)(*(longlong *)param_1[0x4f] + 0xf8))
                                ((longlong *)param_1[0x4f],param_3), cVar4 == '\0'))
          goto LAB_140568c67;
          plVar7 = *(longlong **)(lVar12 + 0xa8);
          plVar14 = *(longlong **)(lVar12 + 0xa0);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          iVar6 = FUN_1404bb3d0(plVar14 + 1,&local_res8);
          iVar15 = 0;
          if (0 < iVar6) {
            lVar12 = operator_new(0x50);
            plVar9 = plVar13;
            if (lVar12 != 0) {
              uVar8 = (**(code **)(*plVar14 + 0x38))(plVar14,local_58);
              plVar9 = (longlong *)FUN_140536d10(lVar12,local_res18,local_res10,uVar8);
            }
            plVar14 = (longlong *)operator_new(0x18);
            if (plVar14 != (longlong *)0x0) {
              *(undefined4 *)(plVar14 + 1) = 1;
              *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
              *plVar14 = (longlong)&PTR_FUN_143fc2170;
              plVar14[2] = (longlong)plVar9;
              plVar13 = plVar14;
            }
            if (plVar9 != (longlong *)0x0) {
              if ((*plVar9 != 0) && (plVar9[1] != 0)) {
                piVar1 = (int *)(plVar9[1] + 8);
                LOCK();
                iVar15 = *piVar1;
                if (iVar15 == 0) {
                  *piVar1 = 0;
                  iVar15 = 0;
                }
                UNLOCK();
                if (0 < iVar15) goto LAB_140568a0a;
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              *plVar9 = (longlong)plVar9;
              plVar14 = (longlong *)plVar9[1];
              if (plVar13 != plVar14) {
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
                  UNLOCK();
                  plVar14 = (longlong *)plVar9[1];
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
                plVar9[1] = (longlong)plVar13;
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar13 + 1;
                lVar3 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
            }
LAB_140568a0a:
            if ((lVar12 != 0) && (local_58[0] != 0)) {
              FMemory::Free();
            }
            if (plVar9 != (longlong *)0x0) {
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              iVar15 = (int)param_1[0x76];
              *(int *)(param_1 + 0x76) = iVar15 + 1;
              if (*(int *)((longlong)param_1 + 0x3b4) < iVar15 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x75,iVar15);
              }
              puVar10 = (undefined8 *)((longlong)iVar15 * 0x10 + param_1[0x75]);
              *puVar10 = plVar9;
              puVar10[1] = plVar13;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar14 = plVar13 + 1;
                lVar12 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              pplVar2 = (longlong **)(plVar9 + 8);
              plVar14 = (longlong *)FMemory::Realloc(0,0x30);
              local_68[0] = plVar14;
              if (plVar14 != (longlong *)0x0) {
                plVar14[1] = (longlong)param_1;
                *plVar14 = (longlong)&DAT_143f3ed00;
                plVar14[2] = (longlong)FUN_140558090;
                lVar12 = FDelegateHandle::GenerateNewID();
                plVar14[4] = lVar12;
                *plVar14 = (longlong)&PTR_GetPoolName_143f3ed48;
              }
              if (local_68 != pplVar2) {
                if (plVar14 == (longlong *)0x0) {
                  if (((int)plVar9[9] != 0) && (plVar11 = *pplVar2, plVar11 != (longlong *)0x0)) {
                    (**(code **)(*plVar11 + 0x28))(plVar11,0);
                    if (*pplVar2 != (longlong *)0x0) {
                      plVar11 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                      *pplVar2 = plVar11;
                    }
                    *(undefined4 *)(plVar9 + 9) = 0;
                  }
                }
                else {
                  (**(code **)(*plVar14 + 0x30))(plVar14,pplVar2);
                }
              }
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 0x28))(plVar14,0);
                local_68[0] = (longlong *)FMemory::Realloc(plVar14,0,0);
                if (local_68[0] != (longlong *)0x0) {
                  FMemory::Free(local_68[0]);
                }
              }
              lVar12 = plVar9[5];
              if (lVar12 != 0) {
                uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar9,local_48);
                FUN_1405313f0(lVar12 + 0x48,uVar8,FUN_140557af0);
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_40 + 1;
                  lVar12 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar12 == 1) {
                    (**(code **)*local_40)(local_40);
                    LOCK();
                    piVar1 = (int *)((longlong)local_40 + 0xc);
                    iVar15 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*local_40 + 8))(local_40,1);
                    }
                  }
                }
                FUN_1405654a0(plVar9[5]);
              }
              iVar5 = 0x3e5;
            }
            iVar15 = iVar5;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar13 + 1;
              lVar12 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar7 + 1;
            lVar12 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          param_3 = local_res18;
          if (iVar15 == 0x3e5) {
            return;
          }
LAB_140568c67:
          (**(code **)(*param_1 + 0x318))(param_1,local_res10,param_3,(iVar15 != 0) + '\x01');
          return;
        }
        break;
      }
      plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1);
      plVar14 = (longlong *)((longlong)plVar14 + 1);
      plVar7 = plVar7 + 0x23;
    } while ((longlong)plVar14 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3,2);
  return;
}



// FUNCTION 140568cb0 FUN_140568cb0 body=23 status=ok
// SIG undefined FUN_140568cb0(void)

undefined1 FUN_140568cb0(longlong param_1)

{
  FUN_14055e4d0(param_1 + 0xd0);
  return 1;
}



// FUNCTION 140568cd0 FUN_140568cd0 body=1762 status=ok
// SIG undefined FUN_140568cd0(void)

void FUN_140568cd0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined2 **ppuVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_50 = (longlong *)(param_1 + 0x78);
    uVar2 = *(uint *)(param_1 + 0xa0);
    puVar1 = (uint *)(param_1 + 0x88);
    local_98 = (undefined2 *)0x100000000;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar2 != 0) {
      puVar20 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar20 = puVar1;
      }
      uVar5 = *puVar20;
      iStack_80 = 0;
      iVar6 = 0;
      while (uVar5 == 0) {
        iStack_80 = iStack_80 + 0x20;
        uVar17 = (ulonglong)local_98 >> 0x20;
        local_98 = (undefined2 *)CONCAT44((int)uVar17,iVar6 + 1);
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140568daa;
        uVar5 = puVar20[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_98 = (undefined2 *)CONCAT44(uVar5,SUB84(local_98,0));
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (iStack_80 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_140568daa:
        uStack_84 = uVar2;
      }
    }
    uVar5 = *(uint *)(param_1 + 0xa0);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    local_88 = -1 << ((byte)uVar5 & 0x1f);
    uStack_48 = local_98;
    puVar16 = uStack_48;
    uVar19 = uVar5 & 0xffffffe0;
    uStack_48._0_4_ = SUB84(local_98,0);
    uStack_48._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    uStack_90 = puVar1;
    uStack_84 = uVar5;
    local_68 = puVar1;
    uStack_48 = puVar16;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    local_78 = local_50;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar5 != uVar2) {
      puVar20 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar20 = puVar1;
      }
      uVar15 = puVar20[(int)uVar5 >> 5] & local_88;
      iVar6 = (int)uVar5 >> 5;
      while (uVar15 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140568e72;
        uVar15 = puVar20[(longlong)iVar6 + 1];
        local_88 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar15 = -uVar15 & uVar15;
      iVar6 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uVar19 - iVar6) + 0x1f;
      uVar5 = uStack_84;
      if ((int)uVar2 < (int)uStack_84) {
LAB_140568e72:
        uStack_84 = uVar2;
        uVar5 = uVar2;
      }
    }
    while( true ) {
      if (((uStack_5c == uVar5) && (local_68 == puVar1)) &&
         (local_78 == (longlong *)(param_1 + 0x78))) break;
      lVar21 = *local_78 + (longlong)(int)uStack_5c * 0x168 + 0x10;
      lVar8 = FUN_142b45e90();
      lVar8 = *(longlong *)(lVar8 + 0x18);
      if ((*(int *)(lVar8 + 0x1a0) != 0) && (*(longlong **)(lVar8 + 0x198) != (longlong *)0x0)) {
        cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x198) + 0x18))();
        if (cVar4 != '\0') {
          plVar9 = (longlong *)0x0;
          local_98 = (undefined2 *)0x0;
          uStack_90 = (uint *)0x0;
          local_a8 = (undefined2 *)0x0;
          local_a0 = 0;
          if (*(int *)(lVar8 + 0x1a0) != 0) {
            plVar9 = *(longlong **)(lVar8 + 0x198);
          }
          cVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,lVar21 + 0xb0,&local_98,&local_a8);
          if (cVar4 != '\0') {
            if ((int)uStack_90 < 2) {
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9);
              puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
              if (&local_98 != puVar10) {
                iVar6 = *(int *)(puVar10 + 1);
                pvVar3 = (void *)*puVar10;
                uStack_90 = (uint *)CONCAT44(uStack_90._4_4_,iVar6);
                if ((iVar6 == 0) && (uStack_90._4_4_ == 0)) {
                  uStack_90 = (uint *)0x0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar6);
                  _guard_xfg_dispatch_icall_nop(local_98,pvVar3,(longlong)iVar6 * 2);
                }
              }
            }
            else {
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
              if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
                puVar16 = &DAT_143f3eda8;
                if ((int)uStack_90 != 0) {
                  puVar16 = local_98;
                }
                iVar6 = FUN_140438070(puVar16);
                plVar12 = (longlong *)plVar9[8];
                if ((longlong *)plVar9[8] == (longlong *)0x0) {
                  plVar12 = plVar9 + 7;
                }
                iVar6 = *(int *)((longlong)plVar12 +
                                ((longlong)(int)plVar9[9] - 1U & (longlong)iVar6) * 4);
                if (iVar6 != -1) {
                  lVar8 = *plVar9;
                  do {
                    lVar18 = (longlong)iVar6 * 0x20;
                    puVar16 = &DAT_143f3eda8;
                    if ((int)uStack_90 != 0) {
                      puVar16 = local_98;
                    }
                    if (*(int *)(lVar18 + 8 + lVar8) == 0) {
                      puVar14 = &DAT_143f3eda8;
                    }
                    else {
                      puVar14 = *(undefined2 **)(lVar18 + lVar8);
                    }
                    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
                    if (iVar7 == 0) {
                      if (iVar6 != -1) goto LAB_140569051;
                      break;
                    }
                    lVar8 = *plVar9;
                    iVar6 = *(int *)(lVar8 + 0x18 + lVar18);
                  } while (iVar6 != -1);
                }
              }
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9);
              puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
              if (&local_98 != puVar10) {
                iVar6 = *(int *)(puVar10 + 1);
                pvVar3 = (void *)*puVar10;
                uStack_90 = (uint *)CONCAT44(uStack_90._4_4_,iVar6);
                if ((iVar6 == 0) && (uStack_90._4_4_ == 0)) {
                  uStack_90 = (uint *)0x0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar6);
                  _guard_xfg_dispatch_icall_nop(local_98,pvVar3,(longlong)iVar6 * 2);
                }
              }
            }
LAB_140569051:
            plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
            lVar8 = *plVar9;
            uVar11 = FUN_140572be0(lVar21);
            plVar9 = (longlong *)(**(code **)(lVar8 + 0x78))(plVar9,uVar11);
            puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = (undefined2 *)*puVar10;
            }
            puVar14 = &DAT_143f3eda8;
            if ((int)uStack_90 != 0) {
              puVar14 = local_98;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
            if (iVar6 != 0) {
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
              lVar8 = *plVar9;
              uVar11 = FUN_140572be0(lVar21);
              (**(code **)(lVar8 + 0x68))(plVar9,uVar11,&local_98);
            }
            if ((int)local_a0 < 2) {
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9);
              ppuVar13 = (undefined2 **)(**(code **)(*plVar9 + 0x10))(plVar9);
              if (&local_a8 != ppuVar13) {
                iVar6 = *(int *)(ppuVar13 + 1);
                uVar17 = (ulonglong)iVar6;
                puVar16 = *ppuVar13;
                local_a0 = CONCAT44(local_a0._4_4_,iVar6);
                if ((iVar6 != 0) || (local_a0._4_4_ != 0)) goto LAB_14056929a;
                local_a0 = 0;
              }
            }
            else {
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
              if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
                puVar16 = &DAT_143f3eda8;
                if ((int)local_a0 != 0) {
                  puVar16 = local_a8;
                }
                iVar6 = FUN_140438070(puVar16);
                plVar12 = (longlong *)plVar9[8];
                if ((longlong *)plVar9[8] == (longlong *)0x0) {
                  plVar12 = plVar9 + 7;
                }
                iVar6 = *(int *)((longlong)plVar12 +
                                ((longlong)(int)plVar9[9] - 1U & (longlong)iVar6) * 4);
                if (iVar6 != -1) {
                  lVar8 = *plVar9;
                  do {
                    lVar18 = (longlong)iVar6 * 0x20;
                    puVar16 = &DAT_143f3eda8;
                    if ((int)local_a0 != 0) {
                      puVar16 = local_a8;
                    }
                    if (*(int *)(lVar18 + 8 + lVar8) == 0) {
                      puVar14 = &DAT_143f3eda8;
                    }
                    else {
                      puVar14 = *(undefined2 **)(lVar18 + lVar8);
                    }
                    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
                    if (iVar7 == 0) {
                      if (iVar6 != -1) goto LAB_1405692b7;
                      break;
                    }
                    lVar8 = *plVar9;
                    iVar6 = *(int *)(lVar18 + 0x18 + lVar8);
                  } while (iVar6 != -1);
                }
              }
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9);
              ppuVar13 = (undefined2 **)(**(code **)(*plVar9 + 0x10))(plVar9);
              if (&local_a8 != ppuVar13) {
                iVar6 = *(int *)(ppuVar13 + 1);
                uVar17 = (ulonglong)iVar6;
                puVar16 = *ppuVar13;
                local_a0 = CONCAT44(local_a0._4_4_,iVar6);
                if ((iVar6 == 0) && (local_a0._4_4_ == 0)) {
                  local_a0 = 0;
                }
                else {
LAB_14056929a:
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uVar17 & 0xffffffff);
                  _guard_xfg_dispatch_icall_nop(local_a8,puVar16,uVar17 * 2);
                }
              }
            }
LAB_1405692b7:
            plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
            lVar8 = *plVar9;
            uVar11 = FUN_140572be0(lVar21);
            plVar9 = (longlong *)(**(code **)(lVar8 + 0x78))(plVar9,uVar11);
            puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = (undefined2 *)*puVar10;
            }
            puVar14 = &DAT_143f3eda8;
            if ((int)local_a0 != 0) {
              puVar14 = local_a8;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
            if (iVar6 != 0) {
              plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
              lVar8 = *plVar9;
              uVar11 = FUN_140572be0(lVar21);
              (**(code **)(lVar8 + 0x70))(plVar9,uVar11,&local_a8);
            }
          }
          if (local_a8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_98 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return;
}



// FUNCTION 1405693c0 FUN_1405693c0 body=325 status=ok
// SIG undefined FUN_1405693c0(void)

void FUN_1405693c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  FUN_1404b6bd0(param_1 + 0x2b0);
  lVar3 = *(longlong *)(param_1 + 0x280);
  lVar4 = (longlong)*(int *)(param_1 + 0x288) * 0x118 + lVar3;
  if (lVar3 != lVar4) {
    while ((*(char *)(lVar3 + 0x38) == '\0' || (*(char *)(lVar3 + 0xd8) == '\0'))) {
      lVar3 = lVar3 + 0x118;
      if (lVar3 == lVar4) {
        return;
      }
    }
    local_18 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_10 = 3;
    local_18 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      plVar2[1] = param_1;
      *plVar2 = (longlong)&DAT_143f3ed00;
      plVar2[2] = (longlong)FUN_140559110;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    cVar1 = FUN_1404b0b90(param_1 + 0x2b0,&local_18);
    if (cVar1 == '\0') {
      FUN_1404b6bd0(param_1 + 0x2b0);
    }
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140569510 FUN_140569510 body=3425 status=ok
// SIG undefined FUN_140569510(void)

void FUN_140569510(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong **pplVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *local_128;
  longlong *local_118;
  longlong *local_110;
  int local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  plVar17 = (longlong *)0x0;
  iVar6 = 0;
  if (0 < (int)param_1[0x51]) {
    plVar12 = (longlong *)(param_1[0x50] + 0xb8);
    plVar20 = plVar17;
    plVar19 = plVar17;
    do {
      if ((longlong *)*plVar12 == param_2) {
        lVar21 = (longlong)(int)plVar19 * 0x118 + param_1[0x50];
        if ((((lVar21 != 0) && (*(longlong *)(lVar21 + 0xa0) != 0)) &&
            (1 < *(uint *)(lVar21 + 0x110))) && (*(uint *)(lVar21 + 0x110) != 7)) {
          cVar5 = *(char *)(lVar21 + 0x38);
          lVar1 = lVar21 + 0x28;
          if (lVar1 != param_3) {
            *(undefined4 *)(lVar21 + 0x30) = *(undefined4 *)(param_3 + 8);
            *(undefined4 *)(lVar21 + 0x34) = *(undefined4 *)(param_3 + 0xc);
            *(undefined1 *)(lVar21 + 0x38) = *(undefined1 *)(param_3 + 0x10);
            *(undefined1 *)(lVar21 + 0x39) = *(undefined1 *)(param_3 + 0x11);
            *(undefined1 *)(lVar21 + 0x3c) = *(undefined1 *)(param_3 + 0x14);
            *(undefined1 *)(lVar21 + 0x3d) = *(undefined1 *)(param_3 + 0x15);
            *(undefined1 *)(lVar21 + 0x3f) = *(undefined1 *)(param_3 + 0x17);
            *(undefined1 *)(lVar21 + 0x40) = *(undefined1 *)(param_3 + 0x18);
            *(undefined1 *)(lVar21 + 0x41) = *(undefined1 *)(param_3 + 0x19);
            *(undefined4 *)(lVar21 + 0x44) = *(undefined4 *)(param_3 + 0x1c);
            *(undefined4 *)(lVar21 + 0x48) = *(undefined4 *)(param_3 + 0x20);
            *(undefined4 *)(lVar21 + 0x4c) = *(undefined4 *)(param_3 + 0x24);
            TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
            ::operator=(lVar21 + 0x50,param_3 + 0x28);
          }
          iVar18 = -0x7fffbffb;
          local_118._0_4_ = -0x7fffbffb;
          if (*(char *)(lVar21 + 0x3a) != '\0') {
            if ((*(char *)(lVar21 + 0x38) == '\0') || (*(char *)(lVar21 + 0xd8) == '\0')) {
              FUN_1404b6bd0(param_1 + 0x56);
            }
            else if ((int)param_1[0x5c] == 0) {
              local_110 = (longlong *)0x0;
              plVar17 = (longlong *)FMemory::Realloc(0,0x30);
              local_108 = 3;
              local_110 = plVar17;
              if (plVar17 != (longlong *)0x0) {
                plVar17[1] = (longlong)param_1;
                *plVar17 = (longlong)&DAT_143f3ed00;
                plVar17[2] = (longlong)FUN_140559110;
                lVar21 = FDelegateHandle::GenerateNewID();
                plVar17[4] = lVar21;
                *plVar17 = (longlong)&PTR_GetPoolName_143f3ed48;
              }
              cVar5 = FUN_1404b0b90(param_1 + 0x56,&local_110);
              if (cVar5 == '\0') {
                FUN_1404b6bd0(param_1 + 0x56);
              }
              if (local_108 != 0) {
                if (local_110 == (longlong *)0x0) goto LAB_14056a236;
                (**(code **)(*local_110 + 0x28))(local_110,0);
                if (local_110 != (longlong *)0x0) {
                  local_110 = (longlong *)FMemory::Realloc(local_110,0,0);
                }
                local_108 = 0;
              }
              if (local_110 != (longlong *)0x0) {
                FMemory::Free(local_110);
              }
            }
            goto LAB_14056a236;
          }
          if (((param_4 == '\0') || (iVar6 = iVar18, *(longlong *)(lVar21 + 8) == 0)) ||
             ((*(undefined8 **)(lVar21 + 0xe0) == (undefined8 *)0x0 ||
              (cVar4 = (**(code **)**(undefined8 **)(lVar21 + 0xe0))(), cVar4 == '\0'))))
          goto LAB_14056a236;
          lVar7 = operator_new(0x70);
          plVar12 = plVar17;
          plVar20 = plVar17;
          if (lVar7 != 0) {
            plVar12 = *(longlong **)(lVar21 + 0xa0);
            local_d0 = *(undefined8 *)(lVar21 + 0xe0);
            iVar6 = *(int *)(lVar21 + 0x34);
            iVar18 = *(int *)(lVar21 + 0x30);
            local_c8 = *(longlong **)(lVar21 + 0xe8);
            if (local_c8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
              UNLOCK();
            }
            uVar8 = FUN_14054b850(param_1,local_80,lVar21);
            uVar9 = FUN_14054b760(param_1,local_90,lVar1);
            uVar10 = FUN_14054be90(param_1,local_a0,lVar1);
            uVar11 = (**(code **)(*plVar12 + 0x38))(plVar12,local_b0);
            plVar12 = (longlong *)
                      FUN_140536f30(lVar7,&local_d0,param_2,uVar11,iVar6 + iVar18,uVar10,uVar9,uVar8
                                   );
            plVar20 = (longlong *)0x1f;
          }
          plVar13 = (longlong *)operator_new(0x18);
          plVar19 = plVar17;
          if (plVar13 != (longlong *)0x0) {
            *(undefined4 *)(plVar13 + 1) = 1;
            *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
            *plVar13 = (longlong)&PTR_DestroyObject_143fc2220;
            plVar13[2] = (longlong)plVar12;
            plVar19 = plVar13;
          }
          if (plVar12 != (longlong *)0x0) {
            if ((*plVar12 != 0) && (plVar12[1] != 0)) {
              piVar2 = (int *)(plVar12[1] + 8);
              LOCK();
              iVar6 = *piVar2;
              if (iVar6 == 0) {
                *piVar2 = 0;
                iVar6 = 0;
              }
              UNLOCK();
              if (0 < iVar6) goto LAB_140569874;
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            *plVar12 = (longlong)plVar12;
            plVar13 = (longlong *)plVar12[1];
            if (plVar19 != plVar13) {
              if (plVar19 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
                UNLOCK();
                plVar13 = (longlong *)plVar12[1];
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
              plVar12[1] = (longlong)plVar19;
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar19 + 1;
              lVar1 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar1 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
          }
LAB_140569874:
          plVar13 = local_c8;
          if ((((ulonglong)plVar20 & 0x10) != 0) &&
             (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xffffffef),
             local_c8 != (longlong *)0x0)) {
            LOCK();
            plVar15 = local_c8 + 1;
            lVar1 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar1 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_c8 + 8))(local_c8,1);
              }
            }
          }
          if ((((ulonglong)plVar20 & 8) != 0) &&
             (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xfffffff7), local_b0[0] != 0)) {
            FMemory::Free();
          }
          if ((((ulonglong)plVar20 & 4) != 0) &&
             (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xfffffffb), local_a0[0] != 0)) {
            FMemory::Free();
          }
          if ((((ulonglong)plVar20 & 2) != 0) &&
             (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xfffffffd), local_90[0] != 0)) {
            FMemory::Free();
          }
          if ((((ulonglong)plVar20 & 1) != 0) &&
             (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xfffffffe), local_80[0] != 0)) {
            FMemory::Free();
          }
          if (plVar12 != (longlong *)0x0) {
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            lVar1 = param_1[0x70];
            iVar6 = (int)lVar1 + 1;
            *(int *)(param_1 + 0x70) = iVar6;
            if (*(int *)((longlong)param_1 + 900) < iVar6) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
            }
            puVar14 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + param_1[0x6f]);
            *puVar14 = plVar12;
            puVar14[1] = plVar19;
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
              LOCK();
              plVar13 = plVar19 + 1;
              lVar1 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar1 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
            if (cVar5 == '\0') {
              if (*(char *)(param_3 + 0x10) == '\0') goto LAB_140569faa;
LAB_140569c83:
              FUN_14054bfd0(param_1,&local_e0,lVar21 + 0x28);
              if (local_e0 != 0) {
                plVar16 = (longlong *)operator_new(0x68);
                plVar13 = local_d8;
                plVar15 = plVar17;
                plVar22 = param_2;
                local_128 = param_2;
                if (plVar16 != (longlong *)0x0) {
                  plVar15 = *(longlong **)(lVar21 + 0xa0);
                  plVar20 = (longlong *)(ulonglong)((uint)plVar20 | 0x380);
                  if (local_d8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
                    UNLOCK();
                  }
                  local_128 = *(longlong **)(lVar21 + 0xe8);
                  lVar21 = *(longlong *)(lVar21 + 0xe0);
                  if (local_128 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
                    UNLOCK();
                  }
                  uVar8 = (**(code **)(*plVar15 + 0x38))(plVar15,local_60);
                  *plVar16 = 0;
                  plVar16[1] = 0;
                  plVar16[2] = lVar21;
                  plVar16[3] = (longlong)local_128;
                  if (local_128 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
                    UNLOCK();
                  }
                  FString::FString(plVar16 + 4,uVar8);
                  plVar16[6] = local_e0;
                  plVar16[7] = (longlong)local_d8;
                  if (local_d8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
                    UNLOCK();
                  }
                  plVar16[8] = 2;
                  plVar16[9] = 0;
                  plVar16[10] = 0;
                  plVar16[0xb] = 0;
                  *(undefined4 *)(plVar16 + 0xc) = 0;
                  plVar15 = plVar16;
                  plVar22 = plVar13;
                }
                plVar13 = (longlong *)operator_new(0x18);
                if (plVar13 != (longlong *)0x0) {
                  *(undefined4 *)(plVar13 + 1) = 1;
                  *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
                  *plVar13 = (longlong)&PTR_FUN_143fc2270;
                  plVar13[2] = (longlong)plVar15;
                  plVar17 = plVar13;
                }
                local_f0 = plVar15;
                local_e8 = plVar17;
                if (plVar15 != (longlong *)0x0) {
                  if ((*plVar15 != 0) && (plVar15[1] != 0)) {
                    piVar2 = (int *)(plVar15[1] + 8);
                    LOCK();
                    iVar6 = *piVar2;
                    if (iVar6 == 0) {
                      *piVar2 = 0;
                      iVar6 = 0;
                    }
                    UNLOCK();
                    if (0 < iVar6) goto LAB_140569e72;
                  }
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                    UNLOCK();
                  }
                  *plVar15 = (longlong)plVar15;
                  plVar13 = (longlong *)plVar15[1];
                  if (plVar17 != plVar13) {
                    if (plVar17 != (longlong *)0x0) {
                      LOCK();
                      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
                      UNLOCK();
                      plVar13 = (longlong *)plVar15[1];
                    }
                    if (plVar13 != (longlong *)0x0) {
                      LOCK();
                      piVar2 = (int *)((longlong)plVar13 + 0xc);
                      iVar6 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                    plVar15[1] = (longlong)plVar17;
                  }
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = plVar17 + 1;
                    lVar21 = *plVar13;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)lVar21 == 1) {
                      (**(code **)*plVar17)(plVar17);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar17 + 0xc);
                      iVar6 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar17 + 8))(plVar17,1);
                      }
                    }
                  }
                }
LAB_140569e72:
                if ((longlong **)(plVar12 + 7) != &local_f0) {
                  plVar12[7] = (longlong)plVar15;
                  local_f0 = (longlong *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=(plVar12 + 8,&local_e8);
                }
                plVar17 = local_e8;
                if (local_e8 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_e8 + 1;
                  lVar21 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar21 == 1) {
                    (**(code **)*local_e8)(local_e8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar17 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*local_e8 + 8))(local_e8,1);
                    }
                  }
                }
                if (((uint)plVar20 >> 9 != 0) &&
                   (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xfffffdff),
                   local_128 != (longlong *)0x0)) {
                  LOCK();
                  plVar17 = local_128 + 1;
                  lVar21 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar21 == 1) {
                    (**(code **)*local_128)(local_128);
                    LOCK();
                    piVar2 = (int *)((longlong)local_128 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*local_128 + 8))(local_128,1);
                    }
                  }
                }
                if ((((uint)plVar20 >> 8 & 1) != 0) &&
                   (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xfffffeff), local_60[0] != 0)
                   ) {
                  FMemory::Free();
                }
                if (((char)plVar20 < '\0') && (plVar22 != (longlong *)0x0)) {
                  LOCK();
                  plVar17 = plVar22 + 1;
                  lVar21 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar21 == 1) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar22 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22,1);
                    }
                  }
                }
              }
              plVar17 = local_d8;
              if (local_d8 != (longlong *)0x0) {
                LOCK();
                plVar20 = local_d8 + 1;
                lVar21 = *plVar20;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)lVar21 == 1) {
                  (**(code **)*local_d8)(local_d8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar17 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    lVar21 = *local_d8;
                    goto LAB_140569fa2;
                  }
                }
              }
            }
            else {
              if (*(char *)(param_3 + 0x10) != '\0') goto LAB_140569c83;
              plVar15 = (longlong *)operator_new(0x58);
              plVar13 = plVar17;
              local_118 = param_2;
              if (plVar15 != (longlong *)0x0) {
                local_118 = *(longlong **)(lVar21 + 0xe8);
                plVar20 = (longlong *)0x60;
                lVar1 = *(longlong *)(lVar21 + 0xe0);
                plVar22 = *(longlong **)(lVar21 + 0xa0);
                plVar13 = local_118 + 1;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  UNLOCK();
                }
                uVar8 = (**(code **)(*plVar22 + 0x38))(plVar22,local_70);
                *plVar15 = 0;
                plVar15[1] = 0;
                plVar15[2] = lVar1;
                plVar15[3] = (longlong)local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  UNLOCK();
                }
                FString::FString(plVar15 + 4,uVar8);
                *(undefined4 *)(plVar15 + 6) = 2;
                plVar15[7] = 0;
                plVar15[8] = 0;
                plVar15[9] = 0;
                *(undefined4 *)(plVar15 + 10) = 0;
                plVar13 = plVar15;
              }
              plVar15 = (longlong *)operator_new(0x18);
              if (plVar15 != (longlong *)0x0) {
                *(undefined4 *)(plVar15 + 1) = 1;
                *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
                *plVar15 = (longlong)&PTR_FUN_143fc21f0;
                plVar15[2] = (longlong)plVar13;
                plVar17 = plVar15;
              }
              local_100 = plVar13;
              local_f8 = plVar17;
              if (plVar13 != (longlong *)0x0) {
                if ((*plVar13 != 0) && (plVar13[1] != 0)) {
                  piVar2 = (int *)(plVar13[1] + 8);
                  LOCK();
                  iVar6 = *piVar2;
                  if (iVar6 == 0) {
                    *piVar2 = 0;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  if (0 < iVar6) goto LAB_140569b66;
                }
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                }
                *plVar13 = (longlong)plVar13;
                plVar15 = (longlong *)plVar13[1];
                if (plVar17 != plVar15) {
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
                    UNLOCK();
                    plVar15 = (longlong *)plVar13[1];
                  }
                  if (plVar15 != (longlong *)0x0) {
                    LOCK();
                    piVar2 = (int *)((longlong)plVar15 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar15 + 8))(plVar15,1);
                    }
                  }
                  plVar13[1] = (longlong)plVar17;
                }
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar17 + 1;
                  lVar1 = *plVar15;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)lVar1 == 1) {
                    (**(code **)*plVar17)(plVar17);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar17 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar17 + 8))(plVar17,1);
                    }
                  }
                }
              }
LAB_140569b66:
              if ((longlong **)(plVar12 + 9) != &local_100) {
                plVar12[9] = (longlong)plVar13;
                local_100 = (longlong *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(plVar12 + 10,&local_f8);
              }
              plVar17 = local_f8;
              if (local_f8 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_f8 + 1;
                lVar1 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar1 == 1) {
                  (**(code **)*local_f8)(local_f8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar17 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_f8 + 8))(local_f8,1);
                  }
                }
              }
              if ((((ulonglong)plVar20 & 0x40) != 0) &&
                 (plVar20 = (longlong *)(ulonglong)((uint)plVar20 & 0xffffffbf),
                 local_118 != (longlong *)0x0)) {
                LOCK();
                plVar17 = local_118 + 1;
                lVar1 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar1 == 1) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)local_118 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_118 + 8))(local_118,1);
                  }
                }
              }
              if ((((ulonglong)plVar20 & 0x20) != 0) && (local_70[0] != 0)) {
                FMemory::Free();
              }
              plVar17 = *(longlong **)(lVar21 + 0xa8);
              lVar21 = *(longlong *)(lVar21 + 0xa0);
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
              }
              *(undefined4 *)(lVar21 + 0x38) = 0;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                plVar20 = plVar17 + 1;
                lVar21 = *plVar20;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)lVar21 != 1) goto LAB_140569faa;
                (**(code **)*plVar17)(plVar17);
                LOCK();
                piVar2 = (int *)((longlong)plVar17 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 != 1) goto LAB_140569faa;
                lVar21 = *plVar17;
                local_d8 = plVar17;
LAB_140569fa2:
                (**(code **)(lVar21 + 8))(local_d8,1);
              }
            }
LAB_140569faa:
            pplVar3 = (longlong **)(plVar12 + 0xc);
            plVar17 = (longlong *)FMemory::Realloc(0,0x30);
            local_c0[0] = plVar17;
            if (plVar17 != (longlong *)0x0) {
              *plVar17 = (longlong)&DAT_143f3ed00;
              plVar17[1] = (longlong)param_1;
              plVar17[2] = (longlong)FUN_140558490;
              lVar21 = FDelegateHandle::GenerateNewID();
              plVar17[4] = lVar21;
              *plVar17 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            if (local_c0 != pplVar3) {
              if (plVar17 == (longlong *)0x0) {
                if (((int)plVar12[0xd] != 0) && (plVar20 = *pplVar3, plVar20 != (longlong *)0x0)) {
                  (**(code **)(*plVar20 + 0x28))(plVar20,0);
                  if (*pplVar3 != (longlong *)0x0) {
                    plVar20 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
                    *pplVar3 = plVar20;
                  }
                  *(undefined4 *)(plVar12 + 0xd) = 0;
                }
              }
              else {
                (**(code **)(*plVar17 + 0x30))(plVar17,pplVar3);
              }
            }
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x28))(plVar17,0);
              local_c0[0] = (longlong *)FMemory::Realloc(plVar17,0,0);
              if (local_c0[0] != (longlong *)0x0) {
                FMemory::Free(local_c0[0]);
              }
            }
            lVar21 = plVar12[5];
            if (lVar21 != 0) {
              uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar12,local_50);
              FUN_1405313f0(lVar21 + 0x80,uVar8,FUN_1405582b0);
              if (local_48 != (longlong *)0x0) {
                LOCK();
                plVar17 = local_48 + 1;
                lVar21 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar21 == 1) {
                  (**(code **)*local_48)(local_48);
                  LOCK();
                  piVar2 = (int *)((longlong)local_48 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_48 + 8))(local_48,1);
                  }
                }
              }
              FUN_140565c10(plVar12[5]);
            }
            local_118._0_4_ = 0x3e5;
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar19 + 1;
            lVar21 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
          iVar6 = (int)local_118;
          if ((int)local_118 == 0x3e5) {
            return;
          }
LAB_14056a236:
          FUN_14054afd0(param_1,param_2,(iVar6 != 0) + '\x01');
          return;
        }
        break;
      }
      plVar19 = (longlong *)(ulonglong)((int)plVar19 + 1);
      plVar20 = (longlong *)((longlong)plVar20 + 1);
      plVar12 = plVar12 + 0x23;
    } while ((longlong)plVar20 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,2);
  return;
}



// FUNCTION 14056a280 FUN_14056a280 body=223 status=ok
// SIG undefined FUN_14056a280(void)

void FUN_14056a280(longlong *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  cVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  cVar1 = *(char *)(param_2 + 0x104);
  uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
  *(undefined1 *)(param_2 + 0x102) = uVar3;
  uVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  *(undefined1 *)(param_2 + 0x103) = uVar3;
  uVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  *(undefined1 *)(param_2 + 0x104) = uVar3;
  uVar3 = (**(code **)(*param_3 + 0x40))(param_3);
  *(undefined1 *)(param_2 + 0x105) = uVar3;
  uVar3 = (**(code **)(*param_3 + 0x50))(param_3);
  *(undefined1 *)(param_2 + 0x106) = uVar3;
  uVar3 = (**(code **)(*param_3 + 0x58))(param_3);
  *(undefined1 *)(param_2 + 0x107) = uVar3;
  uVar5 = (**(code **)(*param_3 + 0x28))(param_3);
  *(undefined8 *)(param_2 + 0x108) = uVar5;
  uVar4 = (**(code **)(*param_3 + 0x30))(param_3);
  *(undefined4 *)(param_2 + 0x110) = uVar4;
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x80))(param_1,param_2 + 0xb0,*(undefined1 *)(param_2 + 0x104));
  }
  return;
}



// FUNCTION 14056a360 FUN_14056a360 body=478 status=ok
// SIG undefined FUN_14056a360(void)

void FUN_14056a360(longlong param_1,longlong param_2,float param_3)

{
  void *_Src;
  int iVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  void *_Src_00;
  longlong lVar7;
  bool bVar8;
  void *local_38;
  int local_30;
  undefined8 local_28;
  longlong local_20;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(char *)(param_2 + 0x101) != '\0')) {
    param_3 = param_3 + *(float *)(param_2 + 0xdc);
    *(float *)(param_2 + 0xdc) = param_3;
    if (*(float *)(param_2 + 0xd8) <= param_3 && param_3 != *(float *)(param_2 + 0xd8)) {
      *(undefined4 *)(param_2 + 0xdc) = 0;
      local_28 = *(undefined8 *)(param_2 + 0xb0);
      local_20 = *(longlong *)(param_2 + 0xb8);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      cVar2 = FUN_14053db80(param_1,&local_28);
      bVar8 = false;
      cVar3 = FUN_140584270(param_2 + 0x60);
      if (cVar3 != '\0') {
        plVar4 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,param_2);
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x60))(plVar4,param_2 + 0x60);
        cVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
        bVar8 = cVar3 == '\x02';
      }
      if (cVar2 == '\0') {
        if (bVar8) {
          puVar5 = (undefined8 *)FUN_1405859b0(param_2 + 0x60);
          local_38 = (void *)0x0;
          local_30 = *(int *)(puVar5 + 1);
          lVar7 = (longlong)local_30;
          _Src = (void *)*puVar5;
          if (local_30 == 0) {
            _Src_00 = (void *)0x0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
            _Src_00 = local_38;
            _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 * 2);
          }
          iVar1 = local_30;
          FUN_1405426e0(param_1,param_2 + 0xb0);
          *(undefined1 *)(param_2 + 0xe8) = 1;
          ppvVar6 = (void **)(param_2 + 0xf0);
          if (ppvVar6 != &local_38) {
            *(int *)(param_2 + 0xf8) = iVar1;
            if ((iVar1 == 0) && (*(int *)(param_2 + 0xfc) == 0)) {
              *(undefined4 *)(param_2 + 0xfc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar6,iVar1);
              _guard_xfg_dispatch_icall_nop(*ppvVar6,_Src_00,(longlong)iVar1 * 2);
            }
          }
          if (_Src_00 != (void *)0x0) {
            FMemory::Free(_Src_00);
          }
        }
      }
      else if ((!bVar8) && (*(char *)(param_2 + 0xe8) != '\0')) {
        FUN_14053fd40(param_1,param_2 + 0xb0,param_2 + 0xf0);
      }
    }
  }
  return;
}



// FUNCTION 14056a540 FUN_14056a540 body=130 status=ok
// SIG undefined FUN_14056a540(void)

longlong FUN_14056a540(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  FString::FString(param_2,lVar1);
  FString::FString(param_2 + 0x10,lVar1 + 0x10);
  FString::FString(param_2 + 0x20,lVar1 + 0x20);
  *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(lVar1 + 0x30);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(param_2 + 0x40) = uVar3;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = *puVar2;
  lVar1 = puVar2[1];
  *(longlong *)(param_2 + 0x58) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14056a5d0 operator<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>_TTuple<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_> body=117 status=ok
// SIG undefined operator<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>_TTuple<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>(void)

undefined1 *
TPairInitializer<enum_ESubmixChannelFormat_&&,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_const_&>
::
operator<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>_TTuple<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>
          (undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined1 *)*param_1;
  *(undefined8 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2 + 8,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 8),_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 14056a650 Emplace<TTuple<FString,FTextRange>_const_&> body=379 status=ok
// SIG undefined Emplace<TTuple<FString,FTextRange>_const_&>(void)

int * TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,FTextRange>_const_&>
                (longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  bVar6 = false;
  local_30[2] = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar5,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14056a7a6;
    }
  }
  cVar2 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar4);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0x1c) = uVar3;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_14056a7a6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14056a7d0 FUN_14056a7d0 body=447 status=ok
// SIG undefined FUN_14056a7d0(void)

int * FUN_14056a7d0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Dst;
  bool bVar6;
  int local_38 [2];
  void *local_30;
  
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FUN_1405343b0(local_30,param_3);
  *(undefined4 *)((longlong)local_30 + 0x60) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar2 = GetTypeHash(local_30);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
      if (iVar2 != -1) {
        lVar5 = *param_1;
        do {
          cVar1 = AccountId::operator==(lVar5 + (longlong)iVar2 * 0x68,local_30);
          if (cVar1 != '\0') goto LAB_14056a8a7;
          lVar5 = *param_1;
          iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar5);
        } while (iVar2 != -1);
      }
    }
    iVar2 = -1;
LAB_14056a8a7:
    bVar6 = iVar2 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar2 * 0x68 + *param_1);
      FUN_14056ed50(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar2;
      goto LAB_14056a95f;
    }
  }
  cVar1 = TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar1 == '\0') {
    iVar2 = *param_2;
    uVar3 = GetTypeHash(local_30);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 100) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)((longlong)local_30 + 0x60) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar2
    ;
  }
LAB_14056a95f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14056a990 FUN_14056a990 body=348 status=ok
// SIG undefined FUN_14056a990(void)

longlong FUN_14056a990(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  FString::FString(local_20,param_2);
  local_20[2] = *param_3;
  *(undefined4 *)(local_20 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    if (local_res8[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar4,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_14056aac7;
    }
  }
  cVar1 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*local_20;
    }
    uVar2 = FUN_140438070(puVar3);
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)local_20 + 0x1c) = uVar2;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_28[0];
  }
LAB_14056aac7:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0x20;
}



// FUNCTION 14056aaf0 Emplace<TKeyInitializer<FString_const_&>_> body=377 status=ok
// SIG undefined Emplace<TKeyInitializer<FString_const_&>_>(void)

int * TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FString_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  bVar7 = false;
  local_30[2] = 0;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      plVar5 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar5,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14056ac46;
    }
  }
  cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar4 = FUN_140438070(puVar6);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)local_30 + 0x24) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) = iVar1
    ;
  }
LAB_14056ac46:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14056ac70 FUN_14056ac70 body=646 status=ok
// SIG undefined FUN_14056ac70(void)

uint * FUN_14056ac70(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined8 *_Src;
  bool bVar15;
  uint local_res8 [2];
  
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)(int)uVar11 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
  puVar4 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x20 + *param_1);
  puVar5 = (undefined8 *)param_3[1];
  *_Src = 0;
  *_Src = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  _Src[2] = *puVar5;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar12 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      plVar13 = (longlong *)(lVar12 * 0x20 + *param_1);
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar13,_Src,0x18);
      uVar8 = *param_2;
      bVar6 = (byte)uVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar8;
      }
      puVar10 = (undefined4 *)((longlong)(int)uVar8 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar10[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar8;
      plVar13 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_14056aed2;
    }
  }
  cVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*_Src;
    }
    uVar8 = FUN_140438070(puVar9);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)_Src + 0x1c) = uVar8;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(uint *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         uVar11;
  }
LAB_14056aed2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14056af00 FUN_14056af00 body=583 status=ok
// SIG undefined FUN_14056af00(void)

int * FUN_14056af00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  void *_Src;
  void *_Dst;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x78 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x78 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  _Src = (void *)((longlong)iVar6 * 0x78 + *param_1);
  FUN_1405343b0(_Src,*param_3);
  bVar10 = false;
  *(undefined8 *)((longlong)_Src + 0x60) = *puVar3;
  *(undefined8 *)((longlong)_Src + 0x68) = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)((longlong)_Src + 0x70) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = GetTypeHash(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar9 = *param_1;
        do {
          cVar4 = AccountId::operator==(lVar9 + (longlong)iVar6 * 0x78,_Src);
          if (cVar4 != '\0') goto LAB_14056b067;
          lVar9 = *param_1;
          iVar6 = *(int *)((longlong)iVar6 * 0x78 + 0x70 + lVar9);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14056b067:
    bVar10 = iVar6 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar6 * 0x78 + *param_1);
      FUN_14056ec60(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_14056b11e;
    }
  }
  cVar4 = FUN_14057b120(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar6 = *param_2;
    uVar7 = GetTypeHash(_Src);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x74) = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x70) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) = iVar6
    ;
  }
LAB_14056b11e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 14056b150 FUN_14056b150 body=672 status=ok
// SIG undefined FUN_14056b150(void)

int * FUN_14056b150(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  void *_Src;
  void *_Dst;
  int iVar12;
  bool local_res8;
  
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar11 * 0x78 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x78 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  _Src = (void *)((longlong)iVar11 * 0x78 + *param_1);
  FUN_1405343b0(_Src,*param_3);
  *(undefined8 *)((longlong)_Src + 0x60) = *puVar2;
  lVar10 = puVar2[1];
  *(longlong *)((longlong)_Src + 0x68) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)_Src + 0x70) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar12;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = GetTypeHash(_Src);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar10 = *param_1;
        do {
          cVar4 = AccountId::operator==(lVar10 + (longlong)iVar6 * 0x78,_Src);
          iVar11 = iVar6;
          if (cVar4 != '\0') break;
          lVar10 = *param_1;
          iVar6 = *(int *)((longlong)iVar6 * 0x78 + 0x70 + lVar10);
          iVar11 = iVar12;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x78 + *param_1);
      FUN_14056ec60(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x70);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x78 + *param_1) = iVar6;
      }
      puVar8 = (undefined4 *)((longlong)iVar6 * 0x78 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar8[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14056b3c7;
    }
  }
  cVar4 = FUN_14057b120(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar12 = *param_2;
    uVar7 = GetTypeHash(_Src);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x74) = uVar7;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x70) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar12;
  }
LAB_14056b3c7:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14056b3f0 FUN_14056b3f0 body=554 status=ok
// SIG undefined FUN_14056b3f0(void)

int * FUN_14056b3f0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  void *_Src;
  void *_Dst;
  bool bVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar5 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  _Src = (void *)((longlong)iVar5 * 0x68 + *param_1);
  FUN_14056a540(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x60) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = GetTypeHash(_Src);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar8 = *param_1;
        do {
          cVar3 = ChannelId::operator==(lVar8 + (longlong)iVar5 * 0x68,_Src);
          if (cVar3 != '\0') goto LAB_14056b539;
          lVar8 = *param_1;
          iVar5 = *(int *)((longlong)iVar5 * 0x68 + 0x60 + lVar8);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14056b539:
    bVar9 = iVar5 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar5 * 0x68 + *param_1);
      FUN_14056ecc0(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_14056b5f1;
    }
  }
  cVar3 = TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar5 = *param_2;
    uVar6 = GetTypeHash(_Src);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 100) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x60) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar5
    ;
  }
LAB_14056b5f1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 14056b620 FUN_14056b620 body=600 status=ok
// SIG undefined FUN_14056b620(void)

int * FUN_14056b620(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 *_Src;
  int iVar8;
  uint uVar9;
  char cVar10;
  longlong *plVar11;
  bool bVar12;
  int local_res8 [2];
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar6 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  FString::FString(_Src,*param_3);
  bVar12 = false;
  _Src[2] = *puVar4;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      plVar11 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar11,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14056b84f;
    }
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar9) {
    uVar5 = (uVar9 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar5 = (uVar9 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar10 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar9 = FUN_140438070(puVar7);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 0x1c) = uVar9;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_14056b84f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14056b880 FUN_14056b880 body=506 status=ok
// SIG undefined FUN_14056b880(void)

int * FUN_14056b880(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *_Src;
  bool bVar10;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar8 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  FString::FString(_Src,*param_3);
  bVar10 = false;
  _Src[2] = *puVar4;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      plVar9 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14056ba57;
    }
  }
  cVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar8 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar7);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x1c) = uVar6;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar8
    ;
  }
LAB_14056ba57:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 14056ba80 FUN_14056ba80 body=634 status=ok
// SIG undefined FUN_14056ba80(void)

int * FUN_14056ba80(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  void *_Dst;
  uint uVar10;
  int iVar11;
  byte *_Src;
  bool local_res8;
  
  uVar9 = 0xffffffff;
  iVar8 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar6 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (byte *)((longlong)iVar11 * 0x20 + *param_1);
  TPairInitializer<enum_ESubmixChannelFormat_&&,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_const_&>
  ::
  operator<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>_TTuple<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>
            (param_3,_Src);
  _Src[0x18] = 0xff;
  _Src[0x19] = 0xff;
  _Src[0x1a] = 0xff;
  _Src[0x1b] = 0xff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar11 != 1) {
    iVar7 = iVar8;
    if (iVar11 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(byte *)((longlong)iVar6 * 0x20 + *param_1) == *_Src) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar8;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar8 = *param_2;
      bVar2 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar5 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14056bcd6;
    }
  }
  cVar3 = TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar3 == '\0') {
    uVar10 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x1c) = uVar10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x18) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar10) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar10) * 4) = *param_2
    ;
  }
LAB_14056bcd6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14056bd00 FUN_14056bd00 body=534 status=ok
// SIG undefined FUN_14056bd00(void)

void FUN_14056bd00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar11 = (int)param_2[1];
  if (iVar11 != 0) {
    plVar8 = (longlong *)(*param_2 + 8);
    do {
      plVar5 = (longlong *)*plVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
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
      plVar8 = plVar8 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar12) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar12);
  }
  iVar11 = (int)param_1[5];
  local_68 = (uint *)(param_1 + 2);
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar11 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar4 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar12 = local_98 + 1;
      bVar6 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar12;
      if (bVar6) goto LAB_14056be3e;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_84 = (iStack_80 - iVar12) + 0x1f;
    if (iVar11 < iStack_84) {
LAB_14056be3e:
      iStack_84 = iVar11;
    }
  }
  uStack_70 = CONCAT44(uStack_94,local_98);
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  iStack_30 = iStack_80;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  local_58 = iStack_80;
  local_50 = param_1;
  uStack_48 = uStack_70;
  puStack_40 = local_68;
  if (iStack_84 < iVar11) {
    do {
      iVar12 = iStack_5c;
      iVar11 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
      }
      puVar10 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
      if (puVar10 != (undefined8 *)0x0) {
        lVar7 = *param_1;
        *puVar10 = *(undefined8 *)((longlong)iVar12 * 0x68 + 0x50 + lVar7);
        lVar7 = *(longlong *)((longlong)iVar12 * 0x68 + 0x58 + lVar7);
        puVar10[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return;
}



// FUNCTION 14056bf20 Join<TArray<FString,FDefaultAllocator>_> body=344 status=ok
// SIG undefined Join<TArray<FString,FDefaultAllocator>_>(void)

longlong *
FString::Join<TArray<FString,FDefaultAllocator>_>(longlong *param_1,longlong *param_2,void *param_3)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  bVar3 = true;
  puVar8 = (undefined8 *)*param_2;
  puVar7 = puVar8 + (longlong)(int)param_2[1] * 2;
  for (; puVar8 != puVar7; puVar8 = puVar8 + 2) {
    if (bVar3) {
      bVar3 = false;
    }
    else {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(short *)((longlong)param_3 + lVar6 * 2) != 0);
      iVar5 = (int)lVar6;
      if (iVar5 != 0) {
        iVar1 = (int)param_1[1];
        iVar4 = (uint)(iVar1 == 0) + iVar1 + iVar5;
        *(int *)(param_1 + 1) = iVar4;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
        }
        pvVar2 = (void *)(*param_1 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar2,param_3,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar2) = 0;
      }
    }
    iVar5 = *(int *)(puVar8 + 1) + -1;
    if (*(int *)(puVar8 + 1) == 0) {
      iVar5 = 0;
    }
    pvVar2 = (void *)*puVar8;
    if (iVar5 != 0) {
      iVar1 = (int)param_1[1];
      iVar4 = (uint)(iVar1 == 0) + iVar5 + iVar1;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      _Dst = (void *)(*param_1 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
  }
  return param_1;
}



// FUNCTION 14056c080 Stricmp<char,wchar_t> body=117 status=ok
// SIG undefined Stricmp<char,wchar_t>(void)

int FGenericPlatformStricmp::Stricmp<char,wchar_t>(char *param_1,ushort *param_2)

{
  char cVar1;
  wint_t wVar2;
  int iVar3;
  
  for (; (cVar1 = *param_1, cVar1 != '\0' || (*param_2 != 0)); param_2 = param_2 + 1) {
    if ((int)cVar1 != (uint)*param_2) {
      iVar3 = tolower((int)cVar1);
      wVar2 = towlower(*param_2);
      if ((int)(char)iVar3 != (uint)wVar2) {
        return (int)(char)iVar3 - (uint)wVar2;
      }
    }
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 14056c100 Stricmp<wchar_t,char> body=115 status=ok
// SIG undefined Stricmp<wchar_t,char>(void)

int FGenericPlatformStricmp::Stricmp<wchar_t,char>(ushort *param_1,char *param_2)

{
  ushort _C;
  wint_t wVar1;
  int iVar2;
  
  for (; (_C = *param_1, _C != 0 || (*param_2 != '\0')); param_2 = param_2 + 1) {
    if ((uint)_C != (int)*param_2) {
      wVar1 = towlower(_C);
      iVar2 = tolower((int)*param_2);
      if ((uint)wVar1 != (int)(char)iVar2) {
        return (uint)wVar1 - (int)(char)iVar2;
      }
    }
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 14056c180 FUN_14056c180 body=328 status=ok
// SIG undefined FUN_14056c180(void)

undefined8 * FUN_14056c180(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_GetPoolName_143fc5080;
  param_1[1] = *param_2;
  FString::FString(param_1 + 2,param_2 + 1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_14056fbf0(param_1 + 5,param_2 + 4);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14056fbf0(param_1 + 0xf,param_2 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_14056fbf0(param_1 + 0x19,param_2 + 0x18);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (((param_2 + 0x22 != param_1 + 0x23) && (*(int *)(param_2 + 0x23) != 0)) &&
     (plVar1 = (longlong *)param_2[0x22], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  param_1[0x25] = param_2[0x24];
  param_1[0x26] = param_2[0x25];
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[0x28] = uVar2;
  *param_1 = &PTR_GetPoolName_143fc50c8;
  return param_1;
}



// FUNCTION 14056c2d0 FUN_14056c2d0 body=324 status=ok
// SIG undefined FUN_14056c2d0(void)

undefined8 *
FUN_14056c2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_38 [2];
  
  iVar3 = 0;
  *param_1 = 0;
  plVar1 = param_1 + 8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *plVar1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FString::operator=();
  FString::operator=(param_1 + 2,param_3);
  FString::operator=(param_1,param_4);
  if (*(char *)(param_5 + 0x10) != '\0') {
    FString::operator=(param_1 + 6);
  }
  if ((*(char *)(param_6 + 0x10) != '\0') &&
     (TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 10),
     *(int *)(param_1 + 0xb) != 0)) {
    do {
      FString::RemoveSpacesInline((longlong)iVar3 * 0x10 + param_1[10]);
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(param_1 + 0xb));
  }
  plVar2 = (longlong *)AccountId::ToString(param_1,local_38);
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 9) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14056c420 FUN_14056c420 body=53 status=ok
// SIG undefined FUN_14056c420(void)

undefined8 * FUN_14056c420(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14056c460 FUN_14056c460 body=936 status=ok
// SIG undefined FUN_14056c460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14056c460(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  
  param_1[1] = 0;
  puVar1 = param_1 + 0xe;
  param_1[2] = 0;
  puVar2 = param_1 + 0x10;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  *param_1 = &PTR_FUN_143fc4440;
  param_1[0xd] = &PTR__scalar_deleting_destructor__143fc4420;
  *puVar1 = 0;
  param_1[0xf] = 0;
  *puVar2 = 0;
  param_1[0x11] = 0;
  uVar4 = _DAT_1461fcaf0;
  pvVar3 = DAT_1461fcae8;
  if ((void **)puVar1 != &DAT_1461fcae8) {
    iVar5 = (int)_DAT_1461fcaf0;
    *(int *)(param_1 + 0xf) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar5 * 2);
    }
  }
  uVar4 = _DAT_1461fcaf0;
  pvVar3 = DAT_1461fcae8;
  if ((void **)puVar2 != &DAT_1461fcae8) {
    iVar5 = (int)_DAT_1461fcaf0;
    *(int *)(param_1 + 0x11) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x8c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar5 * 2);
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  puVar1 = param_1 + 0x14;
  param_1[0x13] = &PTR__scalar_deleting_destructor__143fc4420;
  puVar2 = param_1 + 0x16;
  *puVar1 = 0;
  param_1[0x15] = 0;
  *puVar2 = 0;
  param_1[0x17] = 0;
  uVar4 = _DAT_1461fcb00;
  pvVar3 = DAT_1461fcaf8;
  if ((void **)puVar1 != &DAT_1461fcaf8) {
    iVar5 = (int)_DAT_1461fcb00;
    *(int *)(param_1 + 0x15) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xac) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar5 * 2);
    }
  }
  uVar4 = _DAT_1461fcb00;
  pvVar3 = DAT_1461fcaf8;
  if ((void **)puVar2 != &DAT_1461fcaf8) {
    iVar5 = (int)_DAT_1461fcb00;
    *(int *)(param_1 + 0x17) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar5 * 2);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 2;
  puVar1 = param_1 + 0x1a;
  param_1[0x19] = &PTR__scalar_deleting_destructor__143fc4420;
  puVar2 = param_1 + 0x1c;
  *puVar1 = 0;
  param_1[0x1b] = 0;
  *puVar2 = 0;
  param_1[0x1d] = 0;
  uVar4 = _DAT_1461fcb10;
  pvVar3 = DAT_1461fcb08;
  if ((void **)puVar1 != &DAT_1461fcb08) {
    iVar5 = (int)_DAT_1461fcb10;
    *(int *)(param_1 + 0x1b) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xdc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar5 * 2);
    }
  }
  uVar4 = _DAT_1461fcb10;
  pvVar3 = DAT_1461fcb08;
  if ((void **)puVar2 != &DAT_1461fcb08) {
    iVar5 = (int)_DAT_1461fcb10;
    *(int *)(param_1 + 0x1d) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xec) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar5 * 2);
    }
  }
  *(undefined1 *)(param_1 + 0x1e) = 3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16d) = param_2;
  return param_1;
}



// FUNCTION 14056c810 Channel3DProperties body=35 status=ok
// SIG undefined Channel3DProperties(void)

undefined4 * Channel3DProperties::Channel3DProperties(undefined4 *param_1)

{
  *param_1 = 0xa8c;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  param_1[1] = 0x5a;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 14056c840 ChannelId body=86 status=ok
// SIG undefined ChannelId(void)

longlong ChannelId::ChannelId(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}


