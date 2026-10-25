// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140725150 FUN_140725150 body=1139 status=ok
// SIG undefined FUN_140725150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140725150(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_14072527f;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_14072527f:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14072533f;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_14072533f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140725150(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1407255d0 FUN_1407255d0 body=187 status=ok
// SIG undefined FUN_1407255d0(void)

undefined8 FUN_1407255d0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  lVar1 = FUN_142bbd600();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10),
     lVar2 = UBlackboardKeyType_Float::GetPrivateStaticClass(), lVar3 == lVar2)) {
    lVar1 = *(longlong *)(lVar1 + 8);
    bVar4 = *(byte *)(lVar1 + 0x2b) >> 1 & 1;
    if (bVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
    }
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)param_2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    if (lVar3 + (ulonglong)bVar4 * 4 != 0) {
      uVar5 = FUN_142bbf1b0(lVar1);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140725690 FUN_140725690 body=186 status=ok
// SIG undefined FUN_140725690(void)

undefined8 FUN_140725690(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  
  lVar1 = FUN_142bbd600();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10),
     lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass(), lVar4 == lVar2)) {
    lVar1 = *(longlong *)(lVar1 + 8);
    bVar5 = *(byte *)(lVar1 + 0x2b) >> 1 & 1;
    if (bVar5 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
    }
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)param_2)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    if (lVar4 + (ulonglong)bVar5 * 4 != 0) {
      uVar3 = UBlackboardKeyType_Object::GetValue(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140725750 FUN_140725750 body=285 status=ok
// SIG undefined FUN_140725750(void)

undefined8 * FUN_140725750(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined1 local_18 [16];
  
  lVar2 = FUN_142bbd600(param_1,param_3);
  uVar7 = DAT_146b2c5b0;
  uVar1 = DAT_146b2c5b8;
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10),
     lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass(), uVar7 = DAT_146b2c5b0,
     uVar1 = DAT_146b2c5b8, lVar5 == lVar3)) {
    lVar2 = *(longlong *)(lVar2 + 8);
    bVar6 = *(byte *)(lVar2 + 0x2b) >> 1 & 1;
    if (bVar6 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_3 * 8);
    }
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)param_3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_3 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    if (lVar5 + (ulonglong)bVar6 * 4 != 0) {
      puVar4 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(local_18,lVar2);
      uVar7 = *puVar4;
      uVar1 = *(undefined4 *)(puVar4 + 1);
    }
  }
  *param_2 = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140725870 FUN_140725870 body=970 status=ok
// SIG undefined FUN_140725870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140725870(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10),
     lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass(), lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = UBlackboardKeyType_Class::SetValue(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1407259dd;
  }
  lVar7 = lVar13;
LAB_1407259dd:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar7,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_140725a2b;
        bVar4 = true;
      }
      else {
LAB_140725a2b:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        lVar6 = FUN_142bbbf70(lVar7);
        if (lVar6 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(lVar6,lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          UBlackboardKeyType_Class::SetValue(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 140725c40 FUN_140725c40 body=970 status=ok
// SIG undefined FUN_140725c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140725c40(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar6 = FUN_1407a2860(),
     lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = FUN_14076c8f0(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140725dad;
  }
  lVar7 = lVar13;
LAB_140725dad:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar7,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_140725dfb;
        bVar4 = true;
      }
      else {
LAB_140725dfb:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        lVar6 = FUN_142bbbf70(lVar7);
        if (lVar6 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(lVar6,lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          FUN_14076c8f0(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 140726010 __Internal_AddDynamic<AHomeCharacter> body=195 status=ok
// SIG undefined __Internal_AddDynamic<AHomeCharacter>(void)

void TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(&local_18,param_2);
  local_10 = param_4;
  if (param_4 != 0) {
    lVar2 = FWeakObjectPtr::Get(&local_18);
    if (lVar2 != 0) {
      UObject::FindFunction(lVar2,local_10);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar3 = local_18;
  puVar3[1] = local_14;
  *(longlong *)(puVar3 + 2) = local_10;
  return;
}



// FUNCTION 1407260e0 FUN_1407260e0 body=294 status=ok
// SIG undefined FUN_1407260e0(void)

void FUN_1407260e0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_18;
  int local_14;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(&local_18,param_2);
  local_10 = param_4;
  if ((param_4 != 0) && (lVar3 = FWeakObjectPtr::Get(&local_18), lVar3 != 0)) {
    UObject::FindFunction(lVar3,local_10);
  }
  piVar4 = (int *)*param_1;
  lVar3 = param_1[1];
  piVar5 = piVar4;
  do {
    if (piVar5 == piVar4 + (longlong)(int)lVar3 * 4) {
LAB_1407261b0:
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      piVar4 = (int *)((longlong)iVar1 * 0x10 + *param_1);
      *piVar4 = local_18;
      piVar4[1] = local_14;
      *(longlong *)(piVar4 + 2) = local_10;
LAB_1407261e9:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1);
      return;
    }
    if ((((*piVar5 == local_18) && (piVar5[1] == local_14)) ||
        ((cVar2 = FWeakObjectPtr::IsValid(piVar5), cVar2 == '\0' &&
         (cVar2 = FWeakObjectPtr::IsValid(&local_18), cVar2 == '\0')))) &&
       (*(longlong *)(piVar5 + 2) == local_10)) {
      if ((int)((longlong)piVar5 - (longlong)piVar4 >> 4) != -1) goto LAB_1407261e9;
      goto LAB_1407261b0;
    }
    piVar5 = piVar5 + 4;
  } while( true );
}



// FUNCTION 140726210 FUN_140726210 body=418 status=ok
// SIG undefined FUN_140726210(void)

undefined8 * FUN_140726210(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  plVar1 = param_1 + 0x9f;
  *param_1 = &PTR_FUN_144077218;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x43000000;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x43000000;
  *(undefined2 *)(param_1 + 0x96) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x43800000;
  *(undefined1 *)((longlong)param_1 + 0x4b2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 10;
  *(undefined4 *)(param_1 + 0x97) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0x37;
  *(undefined4 *)(param_1 + 0x98) = 0x41800000;
  *(undefined4 *)(param_1 + 0x99) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x9a) = 10;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 10;
  *(undefined4 *)(param_1 + 0x9b) = 0x37;
  *plVar1 = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined4 *)(param_1 + 0x8f) = 0x43000000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x42800000;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RootComponent",1);
  uVar4 = *puVar2;
  uVar3 = FUN_1429ff160();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x2d] = uVar4;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0xa1] = param_1;
    param_1[0xa0] = &DAT_146858da0;
    *plVar1 = (longlong)DAT_146858da0;
    DAT_146858da0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1407263c0 FUN_1407263c0 body=282 status=ok
// SIG undefined FUN_1407263c0(void)

undefined4 * FUN_1407263c0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  param_1[5] = param_2[5];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_1[0x11] ^ (param_1[0x11] ^ param_2[0x11]) & 1;
  uVar1 = (param_2[0x11] ^ param_1[0x11]) & 2 ^ param_1[0x11];
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 4 ^ uVar1;
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 8 ^ uVar1;
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 0x10 ^ uVar1;
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 0x20 ^ uVar1;
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 0x40 ^ uVar1;
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 0x80 ^ uVar1;
  param_1[0x11] = uVar1;
  uVar1 = (param_2[0x11] ^ uVar1) & 0x100 ^ uVar1;
  param_1[0x11] = uVar1;
  param_1[0x11] = (param_2[0x11] ^ uVar1) & 0x200 ^ uVar1;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  return param_1;
}



// FUNCTION 1407264e0 FUN_1407264e0 body=92 status=ok
// SIG undefined FUN_1407264e0(void)

undefined8 * FUN_1407264e0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_142de2d20(param_1 + 1,0x3f800000,0);
  FUN_142de2c00(param_1 + 0x11,1,2);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 0x46;
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 1;
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 0x46;
  *(byte *)((longlong)param_1 + 0x8a) = *(byte *)((longlong)param_1 + 0x8a) | 1;
  return param_1;
}



// FUNCTION 140726540 FUN_140726540 body=124 status=ok
// SIG undefined FUN_140726540(void)

undefined8 * FUN_140726540(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  FUN_142de2b80(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  FUN_142de2b80(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 1407265c0 FUN_1407265c0 body=65 status=ok
// SIG undefined FUN_1407265c0(void)

undefined8 * FUN_1407265c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f400000;
  FUN_142de2eb0(param_1 + 5);
  FUN_142de2eb0(param_1 + 0x16);
  return param_1;
}



// FUNCTION 1407266b0 FUN_1407266b0 body=160 status=ok
// SIG undefined FUN_1407266b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1407266b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001468b5b78;
  *param_1 = _DAT_1468b5b70;
  param_1[1] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[2] = _DAT_1468b5b80;
  param_1[3] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[4] = _DAT_1468b5b90;
  param_1[5] = uVar1;
  uVar1 = _DAT_1464aa7d8;
  param_1[6] = _DAT_1464aa7d0;
  param_1[7] = uVar1;
  uVar1 = _DAT_1464aa7e8;
  param_1[8] = _DAT_1464aa7e0;
  param_1[9] = uVar1;
  uVar1 = _DAT_1464aa7f8;
  param_1[10] = _DAT_1464aa7f0;
  param_1[0xb] = uVar1;
  uVar1 = uRam00000001464aa808;
  param_1[0xc] = _DAT_1464aa800;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0xf;
  *(undefined4 *)(param_1 + 0x11) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x42700000;
  *(undefined4 *)(param_1 + 0x12) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x13) = 6;
  return param_1;
}



// FUNCTION 140726790 FUN_140726790 body=427 status=ok
// SIG undefined FUN_140726790(void)

void * FUN_140726790(void *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_88 [128];
  
  FUN_142de2eb0((longlong)param_1 + 8);
  FUN_142de2eb0((undefined1 *)((longlong)param_1 + 0x90));
  FUN_142de2eb0((undefined1 *)((longlong)param_1 + 0x118));
  FUN_14074c720((longlong)param_1 + 0x198);
  _guard_xfg_dispatch_icall_nop(param_1,0,0x2a8);
  puVar2 = (undefined1 *)FUN_142de2d20(local_88,0x3f800000,0);
  *(undefined1 *)((longlong)param_1 + 8) = *puVar2;
  *(undefined1 *)((longlong)param_1 + 9) = puVar2[1];
  *(undefined1 *)((longlong)param_1 + 10) = puVar2[2];
  *(undefined1 *)((longlong)param_1 + 0xb) = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(puVar2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)(puVar2 + 0x78);
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 0x46;
  *(undefined1 *)((longlong)param_1 + 0x93) = 2;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(undefined1 *)((longlong)param_1 + 0x118) = *(undefined1 *)((longlong)param_1 + 0x90);
  *(undefined1 *)((longlong)param_1 + 0x119) = *(undefined1 *)((longlong)param_1 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x11a) = *(undefined1 *)((longlong)param_1 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x11b) = *(undefined1 *)((longlong)param_1 + 0x93);
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)((longlong)param_1 + 0x94);
  *(undefined8 *)((longlong)param_1 + 0x128) = *(undefined8 *)((longlong)param_1 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_1 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0x138) = *(undefined8 *)((longlong)param_1 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_1 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0x148) = *(undefined8 *)((longlong)param_1 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 0x150) = *(undefined8 *)((longlong)param_1 + 200);
  *(undefined8 *)((longlong)param_1 + 0x158) = *(undefined8 *)((longlong)param_1 + 0xd0);
  *(undefined8 *)((longlong)param_1 + 0x160) = *(undefined8 *)((longlong)param_1 + 0xd8);
  *(undefined8 *)((longlong)param_1 + 0x168) = *(undefined8 *)((longlong)param_1 + 0xe0);
  *(undefined8 *)((longlong)param_1 + 0x170) = *(undefined8 *)((longlong)param_1 + 0xe8);
  *(undefined8 *)((longlong)param_1 + 0x178) = *(undefined8 *)((longlong)param_1 + 0xf0);
  *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)((longlong)param_1 + 0xf8);
  *(undefined4 *)((longlong)param_1 + 0x188) = *(undefined4 *)((longlong)param_1 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_1 + 0x104);
  *(undefined4 *)((longlong)param_1 + 400) = *(undefined4 *)((longlong)param_1 + 0x108);
  return param_1;
}



// FUNCTION 140726940 FTresEffectUnit body=36 status=ok
// SIG undefined FTresEffectUnit(void)

undefined8 * FTresEffectUnit::FTresEffectUnit(undefined8 *param_1)

{
  FUN_140726970(param_1 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140726970 FUN_140726970 body=496 status=ok
// SIG undefined FUN_140726970(void)

longlong * FUN_140726970(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x50);
  local_38 = 0;
  local_30 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"Transitions_Into_Cover",0x2e);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  local_38 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  local_30 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"Corner",0xe);
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  local_38 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  local_30 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"High",10);
  iVar1 = (int)param_1[7];
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[6]);
  local_38 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  local_30 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"High",10);
  iVar1 = (int)param_1[5];
  *(int *)(param_1 + 5) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[4]);
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  return param_1;
}



// FUNCTION 140726b90 FUN_140726b90 body=123 status=ok
// SIG undefined FUN_140726b90(void)

undefined8 * FUN_140726b90(undefined8 *param_1)

{
  FUN_142c8c8a0();
  *param_1 = &PTR_FUN_14407afe8;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x42340000;
  *(undefined4 *)(param_1 + 5) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x41c80000;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0x42340000;
  *(undefined4 *)(param_1 + 0x11) = 0x41c80000;
  return param_1;
}



// FUNCTION 140726c10 FUN_140726c10 body=100 status=ok
// SIG undefined FUN_140726c10(void)

undefined1 * FUN_140726c10(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  FUN_142de2b80(param_1 + 0x10,param_2 + 0x10);
  param_1[0x90] = param_2[0x90];
  FUN_142de2b80(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 140726c80 FUN_140726c80 body=154 status=ok
// SIG undefined FUN_140726c80(void)

longlong FUN_140726c80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffff8;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x50),0,0x90);
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xc) = 0x3c888889;
  *(undefined4 *)(param_1 + 0x10) = 0x42340000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f35c28f;
  return param_1;
}



// FUNCTION 140726d20 FUN_140726d20 body=1880 status=ok
// SIG undefined FUN_140726d20(void)

undefined4 * FUN_140726d20(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar4 = param_1 + 8;
  *param_1 = *param_2;
  puVar6 = (undefined8 *)(param_2 + 0x30);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar5 = 8;
  lVar7 = (longlong)param_1 - (longlong)param_2;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  do {
    *puVar4 = *(undefined4 *)(puVar6 + -0x14);
    *(undefined4 *)(lVar7 + -0x9c + (longlong)puVar6) = *(undefined4 *)((longlong)puVar6 + -0x9c);
    *(undefined4 *)(lVar7 + -0x98 + (longlong)puVar6) = *(undefined4 *)(puVar6 + -0x13);
    *(undefined8 *)(lVar7 + -0x94 + (longlong)puVar6) = *(undefined8 *)((longlong)puVar6 + -0x94);
    *(undefined4 *)(lVar7 + -0x8c + (longlong)puVar6) = *(undefined4 *)((longlong)puVar6 + -0x8c);
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x88) = puVar6[-0x11];
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x80) = *(undefined4 *)(puVar6 + -0x10);
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x78) = puVar6[-0xf];
    *(undefined1 *)((longlong)puVar6 + lVar7 + -0x70) = *(undefined1 *)(puVar6 + -0xe);
    *(undefined8 *)(lVar7 + -0x68 + (longlong)puVar6) = puVar6[-0xd];
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x60) = *(undefined4 *)(puVar6 + -0xc);
    puVar1 = (uint *)((longlong)puVar6 + lVar7 + -0x5c);
    *puVar1 = *puVar1 ^ (*(uint *)((longlong)puVar6 + lVar7 + -0x5c) ^
                        *(uint *)((longlong)puVar6 + -0x5c)) & 1;
    uVar3 = (*(uint *)((longlong)puVar6 + lVar7 + -0x5c) ^ *(uint *)((longlong)puVar6 + -0x5c)) & 2
            ^ *(uint *)((longlong)puVar6 + lVar7 + -0x5c);
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + -0x5c)) & 4 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + -0x5c)) & 8 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + -0x5c)) & 0x10 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + -0x5c)) & 0x20 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + -0x5c) ^ uVar3) & 0x40 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + -0x5c) ^ uVar3) & 0x80 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + -0x5c) ^ uVar3) & 0x100 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) = uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + -0x5c) =
         (*(uint *)((longlong)puVar6 + -0x5c) ^ uVar3) & 0x200 ^ uVar3;
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x58) = puVar6[-0xb];
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x50) = *(undefined4 *)(puVar6 + -10);
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x4c) = *(undefined4 *)((longlong)puVar6 + -0x4c);
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x48) = puVar6[-9];
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x40) = *(undefined4 *)(puVar6 + -8);
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x38) = *(undefined4 *)(puVar6 + -7);
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x34) = *(undefined4 *)((longlong)puVar6 + -0x34);
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x30) = *(undefined4 *)(puVar6 + -6);
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x2c) = *(undefined8 *)((longlong)puVar6 + -0x2c);
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x24) = *(undefined4 *)((longlong)puVar6 + -0x24);
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x20) = puVar6[-4];
    *(undefined4 *)((longlong)puVar6 + lVar7 + -0x18) = *(undefined4 *)(puVar6 + -3);
    *(undefined8 *)((longlong)puVar6 + lVar7 + -0x10) = puVar6[-2];
    *(undefined1 *)((longlong)puVar6 + lVar7 + -8) = *(undefined1 *)(puVar6 + -1);
    *(undefined8 *)(lVar7 + (longlong)puVar6) = *puVar6;
    *(undefined4 *)((longlong)puVar6 + lVar7 + 8) = *(undefined4 *)(puVar6 + 1);
    puVar1 = (uint *)((longlong)puVar6 + lVar7 + 0xc);
    *puVar1 = *puVar1 ^ (*(uint *)((longlong)puVar6 + lVar7 + 0xc) ^
                        *(uint *)((longlong)puVar6 + 0xc)) & 1;
    uVar3 = (*(uint *)((longlong)puVar6 + lVar7 + 0xc) ^ *(uint *)((longlong)puVar6 + 0xc)) & 2 ^
            *(uint *)((longlong)puVar6 + lVar7 + 0xc);
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 4 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 8 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 0x10 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 0x20 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 0x40 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 0x80 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    uVar3 = (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 0x100 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) = uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xc) =
         (*(uint *)((longlong)puVar6 + 0xc) ^ uVar3) & 0x200 ^ uVar3;
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0x10) = puVar6[2];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x18) = *(undefined4 *)(puVar6 + 3);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x1c) = *(undefined4 *)((longlong)puVar6 + 0x1c);
    *(undefined8 *)(lVar7 + 0x20 + (longlong)puVar6) = puVar6[4];
    *(undefined4 *)(lVar7 + 0x28 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 5);
    *(undefined4 *)(lVar7 + 0x30 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 6);
    *(undefined4 *)(lVar7 + 0x34 + (longlong)puVar6) = *(undefined4 *)((longlong)puVar6 + 0x34);
    *(undefined4 *)(lVar7 + 0x38 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 7);
    *(undefined8 *)(lVar7 + 0x3c + (longlong)puVar6) = *(undefined8 *)((longlong)puVar6 + 0x3c);
    *(undefined4 *)(lVar7 + 0x44 + (longlong)puVar6) = *(undefined4 *)((longlong)puVar6 + 0x44);
    *(undefined8 *)(lVar7 + 0x48 + (longlong)puVar6) = puVar6[9];
    *(undefined4 *)(lVar7 + 0x50 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 10);
    *(undefined8 *)(lVar7 + 0x58 + (longlong)puVar6) = puVar6[0xb];
    *(undefined1 *)(lVar7 + 0x60 + (longlong)puVar6) = *(undefined1 *)(puVar6 + 0xc);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0x68) = puVar6[0xd];
    *(undefined4 *)(lVar7 + 0x70 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 0xe);
    puVar1 = (uint *)(lVar7 + 0x74 + (longlong)puVar6);
    *puVar1 = *puVar1 ^ (*(uint *)(lVar7 + 0x74 + (longlong)puVar6) ^
                        *(uint *)((longlong)puVar6 + 0x74)) & 1;
    uVar3 = (*(uint *)(lVar7 + 0x74 + (longlong)puVar6) ^ *(uint *)((longlong)puVar6 + 0x74)) & 2 ^
            *(uint *)(lVar7 + 0x74 + (longlong)puVar6);
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 4 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 8 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 0x10 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 0x20 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 0x40 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 0x80 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 0x100 ^ uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) = uVar3;
    *(uint *)(lVar7 + 0x74 + (longlong)puVar6) =
         (uVar3 ^ *(uint *)((longlong)puVar6 + 0x74)) & 0x200 ^ uVar3;
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0x78) = puVar6[0xf];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x80) = *(undefined4 *)(puVar6 + 0x10);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x84) = *(undefined4 *)((longlong)puVar6 + 0x84);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0x88) = puVar6[0x11];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x90) = *(undefined4 *)(puVar6 + 0x12);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x98) = *(undefined4 *)(puVar6 + 0x13);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0x9c) = *(undefined4 *)((longlong)puVar6 + 0x9c);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xa0) = *(undefined4 *)(puVar6 + 0x14);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0xa4) = *(undefined8 *)((longlong)puVar6 + 0xa4);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xac) = *(undefined4 *)((longlong)puVar6 + 0xac);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0xb0) = puVar6[0x16];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xb8) = *(undefined4 *)(puVar6 + 0x17);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0xc0) = puVar6[0x18];
    *(undefined1 *)((longlong)puVar6 + lVar7 + 200) = *(undefined1 *)(puVar6 + 0x19);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0xd0) = puVar6[0x1a];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xd8) = *(undefined4 *)(puVar6 + 0x1b);
    puVar1 = (uint *)((longlong)puVar6 + lVar7 + 0xdc);
    *puVar1 = *puVar1 ^ (*(uint *)((longlong)puVar6 + lVar7 + 0xdc) ^
                        *(uint *)((longlong)puVar6 + 0xdc)) & 1;
    uVar3 = *(uint *)((longlong)puVar6 + lVar7 + 0xdc);
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 2 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 4 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 8 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 0x10 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 0x20 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 0x40 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 0x80 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    uVar3 = (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 0x100 ^ uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) = uVar3;
    *(uint *)((longlong)puVar6 + lVar7 + 0xdc) =
         (uVar3 ^ *(uint *)((longlong)puVar6 + 0xdc)) & 0x200 ^ uVar3;
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0xe0) = puVar6[0x1c];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xe8) = *(undefined4 *)(puVar6 + 0x1d);
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xec) = *(undefined4 *)((longlong)puVar6 + 0xec);
    *(undefined8 *)((longlong)puVar6 + lVar7 + 0xf0) = puVar6[0x1e];
    *(undefined4 *)((longlong)puVar6 + lVar7 + 0xf8) = *(undefined4 *)(puVar6 + 0x1f);
    puVar6 = puVar6 + 0x34;
    puVar4 = puVar4 + 0x68;
    lVar5 = lVar5 + -4;
  } while (lVar5 != 0);
  param_1[0xd8] = param_2[0xd8];
  *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(param_2 + 0xda);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined1 *)(param_1 + 0xde) = *(undefined1 *)(param_2 + 0xde);
  param_1[0xdf] = param_2[0xdf];
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined1 *)((longlong)param_1 + 0x381) = *(undefined1 *)((longlong)param_2 + 0x381);
  param_1[0xe1] = param_2[0xe1];
  param_1[0xe2] = param_2[0xe2];
  *(byte *)(param_1 + 0xe3) =
       *(byte *)(param_1 + 0xe3) ^ (*(byte *)(param_1 + 0xe3) ^ *(byte *)(param_2 + 0xe3)) & 1;
  bVar2 = (*(byte *)(param_2 + 0xe3) ^ *(byte *)(param_1 + 0xe3)) & 2 ^ *(byte *)(param_1 + 0xe3);
  *(byte *)(param_1 + 0xe3) = bVar2;
  *(byte *)(param_1 + 0xe3) = (bVar2 ^ *(byte *)(param_2 + 0xe3)) & 4 ^ bVar2;
  return param_1;
}



// FUNCTION 140727480 FUN_140727480 body=288 status=ok
// SIG undefined FUN_140727480(void)

undefined8 * FUN_140727480(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  FUN_1406d54c0();
  uStack_90 = CONCAT22(uStack_90._2_2_,0xff00);
  *param_1 = &PTR_FUN_144078e58;
  param_1[5] = &PTR_LAB_144057bc0;
  local_98 = (undefined4)DAT_146858d30;
  uStack_94 = (undefined4)((ulonglong)DAT_146858d30 >> 0x20);
  *(undefined4 *)(param_1 + 0x79) = local_98;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uStack_94;
  *(undefined4 *)(param_1 + 0x7a) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = uStack_8c;
  puVar2 = (undefined1 *)FUN_142de2d20(local_88,0x41700000,0);
  *(undefined1 *)(param_1 + 0x8b) = *puVar2;
  *(undefined1 *)((longlong)param_1 + 0x459) = puVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x45a) = puVar2[2];
  *(undefined1 *)((longlong)param_1 + 0x45b) = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0x45c) = *(undefined8 *)(puVar2 + 4);
  param_1[0x8d] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0x8e] = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  param_1[0x8f] = *(undefined8 *)(puVar2 + 0x20);
  param_1[0x90] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  param_1[0x91] = *(undefined8 *)(puVar2 + 0x30);
  param_1[0x92] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  param_1[0x93] = *(undefined8 *)(puVar2 + 0x40);
  param_1[0x94] = uVar1;
  param_1[0x95] = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  param_1[0x96] = *(undefined8 *)(puVar2 + 0x58);
  param_1[0x97] = uVar1;
  param_1[0x98] = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x99) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x4cc) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x9a) = *(undefined4 *)(puVar2 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x502) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return param_1;
}



// FUNCTION 1407275a0 FUN_1407275a0 body=104 status=ok
// SIG undefined FUN_1407275a0(void)

undefined8 * FUN_1407275a0(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_1440732e0;
  param_1[5] = &PTR_LAB_1440736e0;
  FUN_142de2c00(param_1 + 0x3d,1,2);
  FUN_142de2c00(param_1 + 0x4e,3,2);
  FUN_142de2c00(param_1 + 0x5f,2000,2);
  return param_1;
}



// FUNCTION 140727610 FUN_140727610 body=203 status=ok
// SIG undefined FUN_140727610(void)

undefined8 * FUN_140727610(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144079c98;
  param_1[5] = &PTR_LAB_14407a090;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0x34) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x269) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 1407276e0 FUN_1407276e0 body=69 status=ok
// SIG undefined FUN_1407276e0(void)

undefined8 * FUN_1407276e0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_1440736f8;
  param_1[5] = &PTR_LAB_144056c28;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return param_1;
}



// FUNCTION 140727730 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_144073ab8;
  return param_1;
}



// FUNCTION 140727760 FUN_140727760 body=429 status=ok
// SIG undefined FUN_140727760(void)

undefined8 * FUN_140727760(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = FUN_14178c940();
  FUN_142bd2550(param_1,uVar3);
  uStack_10 = 7;
  local_18 = (undefined1 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__144073d68;
  param_1[5] = &PTR_LAB_144074078;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar5 = (longlong)local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,7,"Random",7,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar5;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_10._4_4_;
  }
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = &LAB_1407391e0;
  plVar1 = param_1 + 0xf;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_14407c870;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_10._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
  }
  if (&local_18 != plVar1) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return param_1;
}



// FUNCTION 140727910 FUN_140727910 body=234 status=ok
// SIG undefined FUN_140727910(void)

undefined8 * FUN_140727910(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  uVar3 = FUN_14178c940();
  UBTDecorator::UBTDecorator(param_1,uVar3);
  local_10 = 0x13;
  *param_1 = &PTR__scalar_deleting_destructor__1440744b0;
  param_1[5] = &PTR_LAB_1440747b8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x13,"AIAction Decorator",0x13,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 3;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf;
  UBTDecorator::SetIsInversed(param_1,0);
  return param_1;
}



// FUNCTION 140727a00 FUN_140727a00 body=254 status=ok
// SIG undefined FUN_140727a00(void)

undefined8 * FUN_140727a00(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  uVar3 = FUN_14178c940();
  UBTDecorator::UBTDecorator(param_1,uVar3);
  *param_1 = &PTR_FUN_144074800;
  param_1[5] = &PTR_LAB_144074b08;
  FUN_142de2d20(param_1 + 0xd,0x40400000,2);
  FUN_142de2eb0(param_1 + 0x1e);
  local_10 = 8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,8,"GbxLoop",8,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x28;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb | 3;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return param_1;
}



// FUNCTION 140727b00 FUN_140727b00 body=723 status=ok
// SIG undefined FUN_140727b00(void)

undefined8 * FUN_140727b00(undefined8 *param_1)

{
  undefined2 **ppuVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  undefined4 in_stack_ffffffffffffffa8;
  undefined2 uVar8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffffa8 >> 0x10);
  uVar5 = FUN_14178c940();
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase(param_1,uVar5);
  *param_1 = &PTR_FUN_144074e60;
  param_1[5] = &PTR_LAB_144075170;
  FUN_142de2eb0(param_1 + 0x12);
  FUN_142df27a0(param_1 + 0x12,0x43160000);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 1;
  local_28 = (undefined2 *)0x0;
  local_20 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar7 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0xc,"Is In Range",0xc,CONCAT22(uVar8,0x3f))
  ;
  ppuVar1 = (undefined2 **)(param_1 + 6);
  if (ppuVar1 == &local_28) {
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  else {
    if (*ppuVar1 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *ppuVar1 = puVar7;
    *(int *)(param_1 + 7) = (int)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  pvVar4 = ThreadLocalStoragePointer;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  lVar3 = *(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x38) < DAT_146858e20) {
    _Init_thread_header(&DAT_146858e20);
    if (DAT_146858e20 == -1) {
      puVar6 = (undefined8 *)FName::FName(&local_res8,L"BlackboardKey",1);
      DAT_146858e18 = *puVar6;
      _Init_thread_footer(&DAT_146858e20);
    }
  }
  if (*(int *)(lVar3 + 0x38) < DAT_146858e30) {
    _Init_thread_header(&DAT_146858e30);
    if (DAT_146858e30 == -1) {
      puVar6 = (undefined8 *)FName::ToString(&DAT_146858e18,local_18);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_28,L"%s_TargetActorInfo",puVar7);
      puVar7 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar7 = local_28;
      }
      FName::FName(&DAT_146858e28,puVar7,1);
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146858e30);
    }
  }
  lVar3 = DAT_146858e28;
  local_res8 = 0;
  if (DAT_146858e28 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar5 = FUN_142dfd5b0();
  uVar5 = FUN_1417985e0(uVar5,param_1,lVar3,0,0,0,0,0,0);
  iVar2 = *(int *)(param_1 + 0xe);
  *(int *)(param_1 + 0xe) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xd,iVar2);
  }
  *(undefined8 *)(param_1[0xd] + (longlong)iVar2 * 8) = uVar5;
  uVar5 = FUN_1428dfc70();
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xd,param_1,DAT_146858e18,uVar5);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xd,param_1,DAT_146858e18);
  return param_1;
}



// FUNCTION 140727de0 FUN_140727de0 body=196 status=ok
// SIG undefined FUN_140727de0(void)

undefined8 * FUN_140727de0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTService_DefaultFocus::UBTService_DefaultFocus();
  local_10 = 0xf;
  *param_1 = &PTR__scalar_deleting_destructor__1440751b8;
  param_1[5] = &PTR_LAB_1440754a8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"Set game focus",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(undefined1 *)(param_1 + 0x13) = 2;
  return param_1;
}



// FUNCTION 140727eb0 FUN_140727eb0 body=68 status=ok
// SIG undefined FUN_140727eb0(void)

undefined8 * FUN_140727eb0(undefined8 *param_1)

{
  FUN_142bd4590();
  *param_1 = &PTR_FUN_1440754f0;
  param_1[5] = &PTR_LAB_1440757e0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  return param_1;
}



// FUNCTION 140727f00 FUN_140727f00 body=358 status=ok
// SIG undefined FUN_140727f00(void)

undefined8 * FUN_140727f00(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined1 uVar7;
  longlong local_18;
  undefined8 local_10;
  
  uVar4 = FUN_14178c940();
  UBTTaskNode::UBTTaskNode(param_1,uVar4);
  local_10 = 9;
  *param_1 = &PTR_FUN_1440740c0;
  param_1[5] = &PTR_LAB_1440743c0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar3 = local_18;
  uVar7 = 0;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,9,"AIAction",9,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar3;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  pvVar2 = ThreadLocalStoragePointer;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 6;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146858e40)
  {
    _Init_thread_header(&DAT_146858e40);
    if (DAT_146858e40 == -1) {
      puVar6 = (undefined8 *)FName::FName(local_res8,L"ActionDecorator",1);
      DAT_146858e38 = *puVar6;
      _Init_thread_footer(&DAT_146858e40);
    }
  }
  uVar4 = DAT_146858e38;
  uVar5 = FUN_1407a3100();
  uVar4 = FUN_141752410(param_1,uVar4,uVar5,uVar5,CONCAT11(uVar7,1),0,0);
  param_1[0xe] = uVar4;
  return param_1;
}



// FUNCTION 140728070 FUN_140728070 body=358 status=ok
// SIG undefined FUN_140728070(void)

undefined8 * FUN_140728070(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined8 local_20;
  
  UBTTaskNode::UBTTaskNode();
  local_20 = 8;
  *param_1 = &PTR_FUN_144075828;
  param_1[5] = &PTR_LAB_144075b18;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar2 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,8,"Look At",8,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_28) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 6;
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"TargetActorKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xf,param_1,*puVar4,uVar3);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"TurnSpeedKey",1);
  FBlackboardKeySelector::AddFloatFilter(param_1 + 0x14,param_1,*puVar4);
  return param_1;
}



// FUNCTION 1407281e0 FUN_1407281e0 body=456 status=ok
// SIG undefined FUN_1407281e0(void)

undefined8 * FUN_1407281e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase();
  local_10 = 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__144075b60;
  param_1[5] = &PTR_LAB_144075e50;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar4 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x12,"Move To Component",0x12,0x3f);
  plVar3 = param_1 + 6;
  if (plVar3 == &local_18) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 2;
  uVar1 = FUN_1429ff160();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar2,uVar1);
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar4 + 0x80);
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)(lVar4 + 0x8c);
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  *(undefined1 *)((longlong)param_1 + 0x9c) = *(undefined1 *)(lVar4 + 0x8e);
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  *(undefined1 *)((longlong)param_1 + 0x9e) = *(undefined1 *)(lVar4 + 0x8d);
  *(undefined1 *)((longlong)param_1 + 0x9f) = 1;
  return param_1;
}



// FUNCTION 1407283b0 FUN_1407283b0 body=275 status=ok
// SIG undefined FUN_1407283b0(void)

undefined8 * FUN_1407283b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  FUN_142bd4d10();
  local_18 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144075e98;
  local_10 = 0xd;
  param_1[5] = &PTR_LAB_144076190;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xd,"Move To Node",0xd,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 2;
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) & 0xfffffff6;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar4,uVar3);
  return param_1;
}



// FUNCTION 1407284d0 FUN_1407284d0 body=242 status=ok
// SIG undefined FUN_1407284d0(void)

undefined8 * FUN_1407284d0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_14237eb90();
  *param_1 = &PTR_FUN_1440768a8;
  param_1[5] = &PTR_LAB_144077190;
  param_1[0x5a] = &PTR_LAB_1440771c0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  FUN_1407266b0(param_1 + 0xe8);
  param_1[0x100] = 0;
  plVar1 = param_1 + 0x105;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *plVar1 = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x1c;
  *(undefined2 *)(param_1 + 0xdf) = 0x101;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x107] = param_1;
    param_1[0x106] = &DAT_146858db8;
    *plVar1 = (longlong)DAT_146858db8;
    DAT_146858db8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1407285d0 FUN_1407285d0 body=311 status=ok
// SIG undefined FUN_1407285d0(void)

undefined8 * FUN_1407285d0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14407a858;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xf;
  *(undefined4 *)(param_1 + 8) = 0xf;
  *(undefined4 *)(param_1 + 9) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42700000;
  *(undefined4 *)(param_1 + 10) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xb) = 6;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x43000000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x43000000;
  *(undefined2 *)(param_1 + 0x10) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x43800000;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 10;
  *(undefined4 *)(param_1 + 0x11) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x37;
  *(undefined4 *)(param_1 + 0x12) = 0x41800000;
  *(undefined4 *)(param_1 + 0x13) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x14) = 10;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 10;
  *(undefined4 *)(param_1 + 0x15) = 0x37;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 6) = 0x42800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42e00000;
  *(undefined4 *)(param_1 + 7) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x42c80000;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 10) = 0x43480000;
  *(undefined4 *)(param_1 + 9) = 0x42aa0000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x420c0000;
  *(undefined4 *)(param_1 + 0x18) = DAT_1464aa73c;
  return param_1;
}



// FUNCTION 140728710 FUN_140728710 body=43 status=ok
// SIG undefined FUN_140728710(void)

undefined8 * FUN_140728710(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined2 *)(param_1 + 8) = 0x101;
  *param_1 = &PTR_FUN_14407ad58;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 140728740 FUN_140728740 body=1071 status=ok
// SIG undefined FUN_140728740(void)

undefined8 * FUN_140728740(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_144077900;
  param_1[5] = &PTR_LAB_144077cf8;
  param_1[0x2f] = &PTR_LAB_144077d28;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x37));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x37),4000);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3f400000;
  FUN_142de2eb0(param_1 + 0x41);
  FUN_142de2eb0(param_1 + 0x52);
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x65) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3f400000;
  FUN_142de2eb0(param_1 + 0x67);
  FUN_142de2eb0(param_1 + 0x78);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined2 *)(param_1 + 0x8b) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3f400000;
  FUN_142de2eb0(param_1 + 0x8d);
  FUN_142de2eb0(param_1 + 0x9e);
  param_1[0xaf] = 0;
  plVar1 = param_1 + 0xca;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *plVar1 = 0;
  param_1[0xcb] = 0;
  FUN_142de2eb0(param_1 + 0xcc);
  FUN_142de2eb0(param_1 + 0xdc);
  FUN_142de2eb0(param_1 + 0xec);
  FUN_14074c720(param_1 + 0xfc);
  *(undefined2 *)(param_1 + 0x11d) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x8ea) = 1;
  param_1[0x11e] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined4 *)(param_1 + 0x11f) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xc5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xc4) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x8fc) = 0x443b8000;
  *(undefined4 *)(param_1 + 0xc6) = 0x437a0000;
  local_28 = 0;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Peek",10);
  iVar2 = *(int *)(param_1 + 0xcb);
  *(int *)(param_1 + 0xcb) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x65c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  local_28 = 0;
  *puVar4 = uVar3;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_20._4_4_;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Grenade",0x10);
  iVar2 = *(int *)(param_1 + 0xcb);
  *(int *)(param_1 + 0xcb) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x65c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar4 = uVar3;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_20._4_4_;
  *(undefined1 *)((longlong)param_1 + 0x663) = 2;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0x40200000;
  *(undefined4 *)(param_1 + 0xcd) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x661) = *(byte *)((longlong)param_1 + 0x661) | 0x40;
  *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)(param_1 + 0xcc);
  *(undefined1 *)((longlong)param_1 + 0x6e1) = *(undefined1 *)((longlong)param_1 + 0x661);
  *(undefined1 *)((longlong)param_1 + 0x6e2) = *(undefined1 *)((longlong)param_1 + 0x662);
  *(undefined1 *)((longlong)param_1 + 0x6e3) = *(undefined1 *)((longlong)param_1 + 0x663);
  *(undefined8 *)((longlong)param_1 + 0x6e4) = *(undefined8 *)((longlong)param_1 + 0x664);
  param_1[0xde] = param_1[0xce];
  param_1[0xdf] = param_1[0xcf];
  param_1[0xe0] = param_1[0xd0];
  param_1[0xe1] = param_1[0xd1];
  param_1[0xe2] = param_1[0xd2];
  param_1[0xe3] = param_1[0xd3];
  param_1[0xe4] = param_1[0xd4];
  param_1[0xe5] = param_1[0xd5];
  param_1[0xe6] = param_1[0xd6];
  param_1[0xe7] = param_1[0xd7];
  param_1[0xe8] = param_1[0xd8];
  param_1[0xe9] = param_1[0xd9];
  *(undefined4 *)(param_1 + 0xea) = *(undefined4 *)(param_1 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0x754) = *(undefined4 *)((longlong)param_1 + 0x6d4);
  *(undefined4 *)(param_1 + 0xeb) = *(undefined4 *)(param_1 + 0xdb);
  *(undefined1 *)((longlong)param_1 + 0x763) = 2;
  *(undefined4 *)((longlong)param_1 + 0x764) = 0x41200000;
  *(undefined4 *)(param_1 + 0xed) = 0x40a00000;
  *(byte *)((longlong)param_1 + 0x761) = *(byte *)((longlong)param_1 + 0x761) | 0x40;
  *(undefined2 *)(param_1 + 0x11d) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x8ea) = 1;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x33) = 0xbf800000;
  param_1[0x34] = DAT_1468c21b0;
  return param_1;
}



// FUNCTION 140728b70 FUN_140728b70 body=183 status=ok
// SIG undefined FUN_140728b70(void)

undefined8 * FUN_140728b70(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14407aad8;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xf;
  *(undefined4 *)(param_1 + 8) = 0xf;
  *(undefined4 *)(param_1 + 9) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42700000;
  *(undefined4 *)(param_1 + 10) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xb) = 6;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x4180000041800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x41800000;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0x43800000;
  *(undefined4 *)(param_1 + 10) = 0x42a00000;
  *(undefined4 *)(param_1 + 9) = 0x42820000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42340000;
  return param_1;
}



// FUNCTION 140728c30 FUN_140728c30 body=173 status=ok
// SIG undefined FUN_140728c30(void)

undefined8 * FUN_140728c30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6050(param_1,uVar1);
  *param_1 = &PTR_FUN_14407b010;
  param_1[0xc] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xd);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0xc] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = 0x453b8000;
  return param_1;
}



// FUNCTION 140728ce0 FUN_140728ce0 body=99 status=ok
// SIG undefined FUN_140728ce0(void)

undefined8 * FUN_140728ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_14407b2b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xe);
  param_1[0x14] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x14] = uVar1;
  uVar1 = FUN_142c3ef00();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x13) = 0x459c4000;
  return param_1;
}



// FUNCTION 140728d50 FUN_140728d50 body=73 status=ok
// SIG undefined FUN_140728d50(void)

undefined8 * FUN_140728d50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14407b550;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  uVar1 = FUN_142c3ef00();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140728da0 FUN_140728da0 body=103 status=ok
// SIG undefined FUN_140728da0(void)

undefined8 * FUN_140728da0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14407b7e8;
  param_1[0x3b] = 0;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_142bf1f60(param_1,0);
  uVar1 = FUN_142c3ef00();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x41) = 1;
  return param_1;
}



// FUNCTION 140728e10 FUN_140728e10 body=103 status=ok
// SIG undefined FUN_140728e10(void)

undefined8 * FUN_140728e10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14407ba80;
  param_1[0x3b] = 0;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  uVar1 = FUN_142c3ef00();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x41) = 1;
  return param_1;
}



// FUNCTION 140728e80 FUN_140728e80 body=247 status=ok
// SIG undefined FUN_140728e80(void)

undefined8 * FUN_140728e80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14407bd18;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3e);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x40000000;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x4b);
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x51);
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x57);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x5d);
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  *(undefined1 *)((longlong)param_1 + 0x44) = 2;
  uVar1 = FUN_142c3ef00();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140728f80 FUN_140728f80 body=84 status=ok
// SIG undefined FUN_140728f80(void)

undefined8 * FUN_140728f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14407bfb0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_142bf1f60(param_1,0);
  uVar1 = FUN_142c3ef00();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140728fe0 FUN_140728fe0 body=118 status=ok
// SIG undefined FUN_140728fe0(void)

undefined8 * FUN_140728fe0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UGameplayTask::UGameplayTask();
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  *param_1 = &PTR_FUN_1440761d8;
  param_1[5] = &PTR_LAB_1440764f8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x40;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  uVar1 = FUN_1407aa1c0();
  FUN_142b78870(param_1,uVar1);
  return param_1;
}



// FUNCTION 140729060 FUN_140729060 body=64 status=ok
// SIG undefined FUN_140729060(void)

undefined8 * FUN_140729060(undefined8 *param_1)

{
  FUN_140728fe0();
  *param_1 = &PTR_FUN_144076540;
  param_1[5] = &PTR_LAB_144076860;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 1;
  return param_1;
}



// FUNCTION 1407290a0 FUN_1407290a0 body=117 status=ok
// SIG undefined FUN_1407290a0(void)

undefined8 * FUN_1407290a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_144077d40;
  param_1[5] = &PTR_LAB_144078060;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 140729120 FUN_140729120 body=117 status=ok
// SIG undefined FUN_140729120(void)

undefined8 * FUN_140729120(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_1440780b8;
  param_1[5] = &PTR_LAB_1440783d8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 1407291a0 FUN_1407291a0 body=138 status=ok
// SIG undefined FUN_1407291a0(void)

undefined8 * FUN_1407291a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_144078420;
  param_1[5] = &PTR_LAB_144078740;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 140729230 FUN_140729230 body=131 status=ok
// SIG undefined FUN_140729230(void)

undefined8 * FUN_140729230(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_144078788;
  param_1[5] = &PTR_LAB_144078aa8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 1407292c0 FUN_1407292c0 body=178 status=ok
// SIG undefined FUN_1407292c0(void)

undefined8 * FUN_1407292c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_144078af0;
  param_1[5] = &PTR_LAB_144078e10;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 140729380 FUN_140729380 body=242 status=ok
// SIG undefined FUN_140729380(void)

undefined8 * FUN_140729380(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_144079260;
  param_1[5] = &PTR_LAB_144079580;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = DAT_146858d28;
  *(undefined2 *)(param_1 + 0x26) = 0xff01;
  param_1[0x27] = DAT_146858d30;
  *(undefined2 *)(param_1 + 0x28) = 0xff01;
  param_1[0x29] = DAT_146858d38;
  *(undefined2 *)(param_1 + 0x2a) = 0xff01;
  param_1[0x2b] = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 140729480 FUN_140729480 body=131 status=ok
// SIG undefined FUN_140729480(void)

undefined8 * FUN_140729480(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_1440795c8;
  param_1[5] = &PTR_LAB_1440798e8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 140729510 FUN_140729510 body=182 status=ok
// SIG undefined FUN_140729510(void)

undefined8 * FUN_140729510(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140728fe0(param_1,uVar1);
  *param_1 = &PTR_FUN_144079930;
  param_1[5] = &PTR_LAB_144079c50;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 1407295d0 FUN_1407295d0 body=206 status=ok
// SIG undefined FUN_1407295d0(void)

undefined8 * FUN_1407295d0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  FUN_142c63600();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__14407c248;
  param_1[5] = &PTR_LAB_14407c4f8;
  param_1[0xc] = &PTR_LAB_14407c540;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  pvVar1 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3dcccccd;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar3 * 8) + 0x38) < DAT_146858e98) {
    _Init_thread_header(&DAT_146858e98);
    if (DAT_146858e98 == -1) {
      FName::FName(&DAT_146858e90,L"ADD_UpperBody",1);
      _Init_thread_footer(&DAT_146858e98);
    }
  }
  param_1[9] = DAT_146858e90;
  uVar2 = FUN_1407b0a30();
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 1407296a0 FUN_1407296a0 body=159 status=ok
// SIG undefined FUN_1407296a0(void)

undefined8 * FUN_1407296a0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  FUN_142c62e40();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14407c550;
  param_1[5] = &PTR_LAB_14407c7e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x38) <
      DAT_146858ea8) {
    _Init_thread_header(&DAT_146858ea8);
    if (DAT_146858ea8 == -1) {
      FName::FName(&DAT_146858ea0,L"Cover",1);
      _Init_thread_footer(&DAT_146858ea8);
    }
  }
  param_1[9] = DAT_146858ea0;
  uVar1 = FUN_1407b0ab0();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 140729740 FUN_140729740 body=143 status=ok
// SIG undefined FUN_140729740(void)

undefined8 * FUN_140729740(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14407a348;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  FUN_142de2c00(param_1 + 0x11,1,2);
  FUN_142de2d20(param_1 + 0x21,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 1407297d0 FUN_1407297d0 body=153 status=ok
// SIG undefined FUN_1407297d0(void)

undefined8 * FUN_1407297d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *param_1 = &PTR_FUN_14407a0c0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0xff00;
  FUN_142de2d20(param_1 + 0x13,0x43480000,0);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) | 0x40;
  *(byte *)((longlong)param_1 + 0x9a) = *(byte *)((longlong)param_1 + 0x9a) | 1;
  return param_1;
}



// FUNCTION 140729870 FUN_140729870 body=153 status=ok
// SIG undefined FUN_140729870(void)

undefined8 * FUN_140729870(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14407a5d0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  FUN_142de2d20(param_1 + 0x11,0x447a0000,0);
  FUN_142de2d20(param_1 + 0x21,0x3f800000,0);
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 0x46;
  *(byte *)((longlong)param_1 + 0x109) = *(byte *)((longlong)param_1 + 0x109) | 0x46;
  return param_1;
}



// FUNCTION 140729910 ~TArray<FPhaseNodeHandler,TSizedDefaultAllocator<32>_> body=112 status=ok
// SIG undefined ~TArray<FPhaseNodeHandler,TSizedDefaultAllocator<32>_>(void)

void TArray<FPhaseNodeHandler,TSizedDefaultAllocator<32>_>::
     ~TArray<FPhaseNodeHandler,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x11;
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



// FUNCTION 140729980 FUN_140729980 body=161 status=ok
// SIG undefined FUN_140729980(void)

void FUN_140729980(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x80);
    do {
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      puVar4 = puVar4 + 0x18;
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



// FUNCTION 140729a30 FUN_140729a30 body=162 status=ok
// SIG undefined FUN_140729a30(void)

void FUN_140729a30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x60);
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x58);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140729ae0 FUN_140729ae0 body=277 status=ok
// SIG undefined FUN_140729ae0(void)

void FUN_140729ae0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar3 = (longlong *)0x0;
  if (*(int *)(param_1 + 0xe8) == 0) {
    plVar4 = *(longlong **)(param_1 + 0xe0);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0xe0);
    plVar4 = plVar3;
  }
  if (plVar3 == (longlong *)0x0) {
    if ((*(int *)(param_1 + 0xe8) == 0) || (plVar4 == (longlong *)0x0)) goto LAB_140729b55;
    lVar1 = *plVar4;
  }
  else {
    lVar1 = *plVar3;
    plVar4 = plVar3;
  }
  (**(code **)(lVar1 + 0x28))(plVar4,0);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0xe0),0,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
LAB_140729b55:
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (iVar5 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140729c00 FUN_140729c00 body=103 status=ok
// SIG undefined FUN_140729c00(void)

void FUN_140729c00(longlong param_1)

{
  *(undefined ***)(param_1 + 0x188) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x158) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x128) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xf8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xc0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x90) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140729c70 FUN_140729c70 body=436 status=ok
// SIG undefined FUN_140729c70(void)

undefined8 * FUN_140729c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_2 + 0x2c);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  param_1[0xf] = param_2[0xf];
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_2 + 0xb1);
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_2 + 0xb2);
  *(undefined1 *)((longlong)param_1 + 0xb3) = *(undefined1 *)((longlong)param_2 + 0xb3);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  uVar1 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  uVar1 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar1;
  param_1[0x20] = param_2[0x20];
  uVar1 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar1;
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  return param_1;
}



// FUNCTION 140729e30 FUN_140729e30 body=233 status=ok
// SIG undefined FUN_140729e30(void)

undefined8 * FUN_140729e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  puVar1 = param_1 + 0xe;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  uVar5 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar5;
  if (puVar1 != param_2 + 0xe) {
    plVar6 = (longlong *)*puVar1;
    for (iVar7 = *(int *)(param_1 + 0xf); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    TArray<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>,FDefaultAllocator>::
    CopyToEmpty<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>_>
              (puVar1,param_2[0xe],*(undefined4 *)(param_2 + 0xf),
               *(undefined4 *)((longlong)param_1 + 0x7c),0);
  }
  uVar5 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar5;
  uVar5 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar5;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 140729f20 FUN_140729f20 body=229 status=ok
// SIG undefined FUN_140729f20(void)

byte * FUN_140729f20(byte *param_1,byte *param_2)

{
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) ^ (*(uint *)(param_2 + 8) ^ *(uint *)(param_1 + 8)) & 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 14072a010 FUN_14072a010 body=108 status=ok
// SIG undefined FUN_14072a010(void)

void FUN_14072a010(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_142bf3280();
  plVar2 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar2 + 0x156) & 1) == 0) {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    iVar3 = (int)param_1[1];
    param_1[3] = 0;
    *(byte *)((longlong)param_1 + 0x22) = *(byte *)((longlong)param_1 + 0x22) & 0xfd | 1;
    if (iVar3 < (int)plVar2[1]) {
      do {
        uVar1 = *(uint *)(*plVar2 + 4 + (longlong)iVar3 * 0xc);
        if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) {
          return;
        }
        iVar3 = iVar3 + 1;
        *(int *)(param_1 + 1) = iVar3;
      } while (iVar3 < (int)plVar2[1]);
    }
  }
  return;
}



// FUNCTION 14072a080 FUN_14072a080 body=122 status=ok
// SIG undefined FUN_14072a080(void)

undefined8 FUN_14072a080(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  
  if (param_3 != (longlong *)0x0) {
    cVar3 = (**(code **)(*param_3 + 0x2d0))(param_3);
    if (cVar3 != '\0') {
      iVar1 = *(int *)(*param_2 + 0x90);
      if ((*(int *)(param_3[2] + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)iVar1 * 8) != *param_2 + 0x88))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(longlong **)param_2[1] = param_3;
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14072a260 FUN_14072a260 body=168 status=ok
// SIG undefined FUN_14072a260(void)

longlong FUN_14072a260(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x508) != 0) {
    if (*(longlong *)(param_1 + 0x4f8) == 0) {
      **(longlong **)(param_1 + 0x500) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x500) = *(longlong *)(param_1 + 0x4f8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4f8) + 8) = *(undefined8 *)(param_1 + 0x500);
      *(undefined8 *)(param_1 + 0x4f8) = 0;
    }
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 14072a310 FUN_14072a310 body=43 status=ok
// SIG undefined FUN_14072a310(void)

undefined8 * FUN_14072a310(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ValueToString_14407aff8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14072a340 FUN_14072a340 body=100 status=ok
// SIG undefined FUN_14072a340(void)

undefined8 * FUN_14072a340(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14072a3b0 FUN_14072a3b0 body=43 status=ok
// SIG undefined FUN_14072a3b0(void)

undefined8 * FUN_14072a3b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14072a3e0 FUN_14072a3e0 body=43 status=ok
// SIG undefined FUN_14072a3e0(void)

undefined8 * FUN_14072a3e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14072a410 FUN_14072a410 body=43 status=ok
// SIG undefined FUN_14072a410(void)

undefined8 * FUN_14072a410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440732c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14072a440 FUN_14072a440 body=124 status=ok
// SIG undefined FUN_14072a440(void)

longlong FUN_14072a440(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 14072a4c0 FUN_14072a4c0 body=201 status=ok
// SIG undefined FUN_14072a4c0(void)

longlong FUN_14072a4c0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x228);
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
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 14072a590 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FArrayReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_140729a30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14072a5e0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14072a640 FUN_14072a640 body=81 status=ok
// SIG undefined FUN_14072a640(void)

longlong FUN_14072a640(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14072a6a0 FUN_14072a6a0 body=95 status=ok
// SIG undefined FUN_14072a6a0(void)

longlong FUN_14072a6a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14072a700 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTService_DefaultFocus::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14072a760 FUN_14072a760 body=52 status=ok
// SIG undefined FUN_14072a760(void)

undefined8 FUN_14072a760(undefined8 param_1,ulonglong param_2)

{
  FUN_140729ae0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14072a7a0 FUN_14072a7a0 body=95 status=ok
// SIG undefined FUN_14072a7a0(void)

longlong FUN_14072a7a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14072a800 FUN_14072a800 body=126 status=ok
// SIG undefined FUN_14072a800(void)

longlong FUN_14072a800(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 14072a880 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_RotateToFaceBBEntry::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14072a8f0 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_MoveTo::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14072a960 FUN_14072a960 body=294 status=ok
// SIG undefined FUN_14072a960(void)

longlong FUN_14072a960(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x838) != 0) {
    if (*(longlong *)(param_1 + 0x828) == 0) {
      **(longlong **)(param_1 + 0x830) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x830) = *(longlong *)(param_1 + 0x828);
      *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 8) = *(undefined8 *)(param_1 + 0x830);
      *(undefined8 *)(param_1 + 0x828) = 0;
    }
    *(undefined8 *)(param_1 + 0x830) = 0;
    *(undefined8 *)(param_1 + 0x838) = 0;
  }
  if (*(longlong *)(param_1 + 0x810) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x800) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x7b8);
  plVar2 = *(longlong **)(param_1 + 0x7b0);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x7b0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  FUN_140590de0(param_1 + 0x710);
  FUN_140729980(param_1 + 0x700);
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x840);
  }
  return param_1;
}



// FUNCTION 14072aa90 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FCPFUOWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 14072aae0 FUN_14072aae0 body=236 status=ok
// SIG undefined FUN_14072aae0(void)

longlong FUN_14072aae0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x658);
  plVar1 = *(longlong **)(param_1 + 0x650);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x650);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b8));
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x910);
  }
  return param_1;
}



// FUNCTION 14072abd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14072ac10 FUN_14072ac10 body=165 status=ok
// SIG undefined FUN_14072ac10(void)

longlong FUN_14072ac10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xc0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xa8);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x98);
  *(undefined ***)(param_1 + 0x68) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14072acc0 FUN_14072acc0 body=109 status=ok
// SIG undefined FUN_14072acc0(void)

longlong FUN_14072acc0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x70) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14072ad30 FUN_14072ad30 body=52 status=ok
// SIG undefined FUN_14072ad30(void)

undefined8 FUN_14072ad30(undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 14072ad70 FUN_14072ad70 body=66 status=ok
// SIG undefined FUN_14072ad70(void)

longlong FUN_14072ad70(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x1e0) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 14072adc0 FUN_14072adc0 body=101 status=ok
// SIG undefined FUN_14072adc0(void)

longlong FUN_14072adc0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2e8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x2b8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x288) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 600) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x220) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1f0) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14072ae30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 14072ae70 FUN_14072ae70 body=118 status=ok
// SIG undefined FUN_14072ae70(void)

longlong FUN_14072ae70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14072aef0 FUN_14072aef0 body=135 status=ok
// SIG undefined FUN_14072aef0(void)

longlong FUN_14072aef0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14072af80 FUN_14072af80 body=135 status=ok
// SIG undefined FUN_14072af80(void)

longlong FUN_14072af80(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14072b010 FUN_14072b010 body=152 status=ok
// SIG undefined FUN_14072b010(void)

longlong FUN_14072b010(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14072b0b0 FUN_14072b0b0 body=152 status=ok
// SIG undefined FUN_14072b0b0(void)

longlong FUN_14072b0b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14072b150 FUN_14072b150 body=152 status=ok
// SIG undefined FUN_14072b150(void)

longlong FUN_14072b150(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14072b1f0 FUN_14072b1f0 body=152 status=ok
// SIG undefined FUN_14072b1f0(void)

longlong FUN_14072b1f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14072b290 FUN_14072b290 body=203 status=ok
// SIG undefined FUN_14072b290(void)

longlong FUN_14072b290(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 14072b360 FUN_14072b360 body=152 status=ok
// SIG undefined FUN_14072b360(void)

longlong FUN_14072b360(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14072b400 FUN_14072b400 body=203 status=ok
// SIG undefined FUN_14072b400(void)

longlong FUN_14072b400(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 14072b4d0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FRCPassPostProcessDownsample::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FPhaseNodeHandler,TSizedDefaultAllocator<32>_>::
  ~TArray<FPhaseNodeHandler,TSizedDefaultAllocator<32>_>(param_1 + 0xb8);
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14072b520 FUN_14072b520 body=107 status=ok
// SIG undefined FUN_14072b520(void)

longlong FUN_14072b520(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14072b590 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDataTable::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14072b5f0 FUN_14072b5f0 body=96 status=ok
// SIG undefined FUN_14072b5f0(void)

longlong FUN_14072b5f0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14072b650 FUN_14072b650 body=96 status=ok
// SIG undefined FUN_14072b650(void)

longlong FUN_14072b650(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14072b6b0 FUN_14072b6b0 body=96 status=ok
// SIG undefined FUN_14072b6b0(void)

longlong FUN_14072b6b0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 14072b710 FUN_14072b710 body=290 status=ok
// SIG undefined FUN_14072b710(void)

void FUN_14072b710(longlong param_1)

{
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_110 [136];
  undefined1 local_88 [128];
  
  local_128 = 0;
  local_120 = 0x101;
  local_11c = 0x3f400000;
  local_138 = 0;
  uStack_130 = 0;
  FUN_142de2eb0(local_110);
  FUN_142de2eb0(local_88);
  FUN_140743c90(param_1,&local_138);
  local_128 = 0;
  local_120 = 0x101;
  local_138 = 0;
  uStack_130 = 0;
  local_11c = 0x3f400000;
  FUN_142de2eb0(local_110);
  FUN_142de2eb0(local_88);
  FUN_140743ac0(param_1,&local_138);
  FUN_140732200(param_1);
  FUN_140746a00(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858e78) {
    _Init_thread_header(&DAT_146858e78);
    if (DAT_146858e78 == -1) {
      FName::FName(&DAT_146858e70,L"Cover",1);
      _Init_thread_footer(&DAT_146858e78);
    }
  }
  FUN_142cad710(*(undefined8 *)(param_1 + 0x118),&DAT_146858e70);
  return;
}



// FUNCTION 14072b840 FUN_14072b840 body=94 status=ok
// SIG undefined FUN_14072b840(void)

void FUN_14072b840(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) && (*(int *)(param_1 + 0x68) == 0)) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    UGameplayTask::EndTask(param_1);
    return;
  }
  return;
}



// FUNCTION 14072b8a0 FUN_14072b8a0 body=217 status=ok
// SIG undefined FUN_14072b8a0(void)

undefined8 FUN_14072b8a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  if ((plVar4 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_2 + 0x188), lVar1 != 0)) {
    lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_3 != (undefined8 *)0x0)) {
      FUN_1406d48b0(local_38,lVar1,*param_3,param_3[1]);
      cVar3 = FUN_1406f7e60(plVar4,local_38,4);
      if (cVar3 == '\0') {
        return 3;
      }
      (**(code **)(*plVar4 + 0x300))(plVar4,local_38);
    }
  }
  return 2;
}



// FUNCTION 14072b980 FUN_14072b980 body=111 status=ok
// SIG undefined FUN_14072b980(void)

void FUN_14072b980(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[0x10];
  plVar3 = plVar1;
  if (plVar1 != plVar1 + (int)param_1[0x11]) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + (int)param_1[0x11]) {
        return;
      }
    }
    if ((int)((longlong)plVar3 - (longlong)plVar1 >> 3) != -1) {
      cVar2 = FUN_140744b60(param_1,param_2,CONCAT71((int7)(int3)((uint)(int)param_1[0x11] >> 8),1))
      ;
      if ((cVar2 != '\0') || (*(char *)((longlong)param_1 + 0x6d) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014072b9e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2f0))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14072b9f0 FUN_14072b9f0 body=386 status=ok
// SIG undefined FUN_14072b9f0(void)

void FUN_14072b9f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  
  (**(code **)(*param_1 + 0x2d0))();
  iVar11 = 0;
  if (0 < (int)param_1[0x11]) {
    lVar10 = 0;
    plVar1 = param_1 + 0x10;
    do {
      lVar2 = *(longlong *)(lVar10 + *plVar1);
      cVar5 = FUN_140744630(param_1,lVar2);
      if (cVar5 == '\0') {
        if (((iVar11 < 0) || ((int)param_1[0x11] <= iVar11)) ||
           (lVar3 = *plVar1, *(longlong *)(lVar10 + lVar3) != lVar2)) {
          plVar4 = (longlong *)*plVar1;
          iVar8 = (int)param_1[0x11];
          for (plVar9 = plVar4; plVar9 != plVar4 + iVar8; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar2) {
              iVar6 = (int)((longlong)plVar9 - (longlong)plVar4 >> 3);
              if ((-1 < iVar6) && (iVar6 < (int)param_1[0x11])) {
                iVar7 = (iVar8 - iVar6) + -1;
                if (0 < iVar7) {
                  iVar7 = 1;
                }
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar4 + iVar6,plVar4 + (iVar8 - iVar7),(longlong)iVar7 << 3);
                  iVar8 = (int)param_1[0x11];
                }
                *(int *)(param_1 + 0x11) = iVar8 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
                if (iVar6 <= iVar11) goto LAB_14072bb38;
              }
              break;
            }
          }
        }
        else {
          iVar8 = (int)param_1[0x11];
          iVar6 = (iVar8 - iVar11) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar3 + (longlong)iVar11 * 8),
                       (void *)(lVar3 + (longlong)(iVar8 - iVar6) * 8),(longlong)iVar6 << 3);
            iVar8 = (int)param_1[0x11];
          }
          *(int *)(param_1 + 0x11) = iVar8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
LAB_14072bb38:
          iVar11 = iVar11 + -1;
          lVar10 = lVar10 + -8;
        }
      }
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar11 < (int)param_1[0x11]);
  }
  return;
}



// FUNCTION 14072bb80 FUN_14072bb80 body=59 status=ok
// SIG undefined FUN_14072bb80(void)

void FUN_14072bb80(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 200,0,0);
  FUN_142c66150(param_1,param_2);
  return;
}



// FUNCTION 14072bbc0 FUN_14072bbc0 body=124 status=ok
// SIG undefined FUN_14072bbc0(void)

undefined8 FUN_14072bbc0(longlong param_1)

{
  if (((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
       ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) ||
      (((*(longlong *)(param_1 + 0x1e0) != 0 && (*(longlong *)(param_1 + 0x1e8) != 0)) &&
       ((*(longlong *)(param_1 + 0x1f0) != 0 || (*(char *)(param_1 + 0x1f8) == '\0')))))) &&
     ((((*(longlong *)(param_1 + 0x318) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x318) + 0x41) == '\0')) ||
       (*(char *)(param_1 + 0x571) != '\x02')) || (1 < (byte)(*(char *)(param_1 + 0x1b0) - 3U))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14072bc40 FUN_14072bc40 body=124 status=ok
// SIG undefined FUN_14072bc40(void)

undefined8 FUN_14072bc40(longlong param_1)

{
  if (((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
       ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) ||
      (((*(longlong *)(param_1 + 0x1e0) != 0 && (*(longlong *)(param_1 + 0x1e8) != 0)) &&
       ((*(longlong *)(param_1 + 0x1f0) != 0 || (*(char *)(param_1 + 0x1f8) == '\0')))))) &&
     ((((*(longlong *)(param_1 + 0x318) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x318) + 0x40) == '\0')) ||
       (*(char *)(param_1 + 0x571) != '\x02')) || (1 < (byte)(*(char *)(param_1 + 0x1b0) - 3U))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14072bcc0 FUN_14072bcc0 body=2110 status=ok
// SIG undefined FUN_14072bcc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14072bcc0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  void *_Src;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  void *local_168;
  int local_160;
  undefined4 local_15c;
  void *local_158;
  ulonglong local_150;
  undefined4 local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(char *)(param_1 + 0x78) != '\0') {
    *(undefined4 *)(param_1 + 0x30) = param_4;
    lVar10 = FUN_140737790(param_1,0);
    if (lVar10 != 0) {
      UObjectBaseUtility::GetFullName(lVar10,&local_158,0);
      uVar6 = FUN_1407403b0(&local_158,param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x68) = uVar6;
      cVar7 = FUN_1407403b0(&local_158,param_2 + 0x30);
      *(bool *)(param_1 + 0x34) = cVar7 != '\0';
      cVar7 = FUN_1407403b0(&local_158,param_2 + 0x20);
      _Src = local_158;
      iVar9 = (int)local_150;
      uVar12 = 0;
      *(bool *)(param_1 + 0x35) = cVar7 != '\0';
      local_168 = (void *)0x0;
      local_160 = iVar9;
      if (iVar9 == 0) {
        local_15c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,local_150 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_168,_Src,(longlong)iVar9 * 2);
      }
      FString::FString(&local_138,&local_168);
      lVar10 = FUN_140724a80(param_2 + 0x40,&local_138);
      if (local_168 != (void *)0x0) {
        FMemory::Free();
      }
      if (lVar10 != 0) {
        uVar12 = *(undefined8 *)(lVar10 + 0x10);
      }
      *(undefined8 *)(param_1 + 0x70) = uVar12;
      if (local_158 != (void *)0x0) {
        FMemory::Free();
      }
    }
    fVar25 = fRam00000001468b5b9c;
    fVar24 = fRam00000001468b5b98;
    fVar23 = fRam00000001468b5b94;
    fVar30 = _DAT_1468b5b90;
    fVar31 = fRam00000001468b5b88;
    fVar41 = fRam00000001468b5b84;
    fVar29 = _DAT_1468b5b80;
    fVar22 = fRam00000001468b5b7c;
    fVar21 = fRam00000001468b5b78;
    fVar20 = fRam00000001468b5b74;
    fVar17 = _DAT_1468b5b70;
    lVar10 = FUN_140737790(param_1,0,param_3);
    if (lVar10 != 0) {
      local_178 = 0;
      pfVar11 = (float *)FUN_142291830(lVar10,&local_128,0,0x7f7fffff);
      fVar17 = *pfVar11;
      fVar20 = pfVar11[1];
      fVar21 = pfVar11[2];
      fVar22 = pfVar11[3];
      fVar29 = pfVar11[4];
      fVar41 = pfVar11[5];
      fVar31 = pfVar11[6];
      fVar30 = pfVar11[8];
      fVar23 = pfVar11[9];
      fVar24 = pfVar11[10];
      fVar25 = pfVar11[0xb];
    }
    auVar19._4_4_ = fVar41;
    auVar19._0_4_ = fVar41;
    auVar19._8_4_ = fVar41;
    auVar19._12_4_ = fVar41;
    auVar18._4_12_ = auVar19._4_12_;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x84);
    auVar18._0_4_ = SQRT(fVar41 * fVar41 + fVar29 * fVar29) + (float)*(undefined8 *)(param_1 + 0x84)
    ;
    *(float *)(param_1 + 0x28) = auVar18._0_4_;
    if (*(char *)(param_1 + 0x34) == '\0') {
      uVar13 = 0x43340000;
    }
    else {
      uVar13 = 0;
    }
    local_168 = (void *)((ulonglong)uVar13 << 0x20);
    local_160 = 0;
    uVar8 = FRotator::Quaternion(&local_168,&local_138);
    fVar5 = fRam0000000146858bd8;
    fVar4 = fRam0000000146858bd4;
    fVar3 = _DAT_146858bd0;
    fVar50 = (float)((uint)_DAT_146858bd0 & _DAT_146858be0);
    fVar51 = (float)((uint)fRam0000000146858bd4 & uRam0000000146858be4);
    fVar52 = (float)((uint)fRam0000000146858bd8 & uRam0000000146858be8);
    auVar14._4_4_ = -(uint)(fRam0000000146858c74 < (float)((uint)fVar23 & uRam0000000146858c44));
    auVar14._0_4_ = -(uint)(_DAT_146858c70 < (float)((uint)fVar30 & _DAT_146858c40));
    auVar14._8_4_ = -(uint)(fRam0000000146858c78 < (float)((uint)fVar24 & uRam0000000146858c48));
    auVar14._12_4_ = -(uint)(fRam0000000146858c7c < (float)((uint)fVar25 & uRam0000000146858c4c));
    iVar9 = movmskps(uVar8,auVar14);
    fVar38 = _DAT_1468b5b80;
    fVar39 = fRam00000001468b5b84;
    fVar40 = fRam00000001468b5b88;
    fVar42 = _DAT_1468b5b90;
    fVar43 = fRam00000001468b5b94;
    fVar44 = fRam00000001468b5b98;
    fVar45 = fRam00000001468b5b9c;
    fVar46 = _DAT_1468b5b70;
    fVar47 = fRam00000001468b5b74;
    fVar48 = fRam00000001468b5b78;
    fVar49 = fRam00000001468b5b7c;
    if (iVar9 != 0) {
      fVar46 = fVar17 * _DAT_146858c80;
      fVar47 = fVar20 * fRam0000000146858c84;
      fVar48 = fVar21 * fRam0000000146858c88;
      fVar49 = fVar22 * fRam0000000146858c8c;
      auVar1._4_4_ = fVar23;
      auVar1._0_4_ = fVar30;
      auVar1._8_4_ = fVar24;
      auVar1._12_4_ = fVar25;
      auVar19 = rcpps(auVar18,auVar1);
      fVar17 = auVar19._0_4_;
      fVar20 = auVar19._4_4_;
      fVar21 = auVar19._8_4_;
      fVar22 = auVar19._12_4_;
      fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar30;
      fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar23;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar24;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar25;
      fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar30;
      fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar23;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar24;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar25;
      fVar42 = (float)(((uint)fVar17 &
                        -(uint)((float)((uint)fVar30 & _DAT_146858c40) <= _DAT_146858c70) ^
                       (uint)fVar17) & _DAT_146858be0);
      fVar43 = (float)(((uint)fVar20 &
                        -(uint)((float)((uint)fVar23 & uRam0000000146858c44) <= fRam0000000146858c74
                               ) ^ (uint)fVar20) & uRam0000000146858be4);
      fVar44 = (float)(((uint)fVar21 &
                        -(uint)((float)((uint)fVar24 & uRam0000000146858c48) <= fRam0000000146858c78
                               ) ^ (uint)fVar21) & uRam0000000146858be8);
      fVar29 = fVar42 * fVar29;
      fVar30 = fVar43 * fVar41;
      fVar31 = fVar44 * fVar31;
      fVar17 = fVar31 * fVar47 - fVar30 * fVar48;
      fVar20 = fVar29 * fVar48 - fVar31 * fVar46;
      fVar21 = fVar30 * fVar46 - fVar29 * fVar47;
      fVar17 = fVar17 + fVar17;
      fVar20 = fVar20 + fVar20;
      fVar21 = fVar21 + fVar21;
      fVar38 = (float)((uint)(0.0 - ((fVar21 * fVar47 - fVar20 * fVar48) + fVar49 * fVar17 + fVar29)
                             ) & _DAT_146858be0);
      fVar39 = (float)((uint)(0.0 - ((fVar17 * fVar48 - fVar21 * fVar46) + fVar49 * fVar20 + fVar30)
                             ) & uRam0000000146858be4);
      fVar40 = (float)((uint)(0.0 - ((fVar20 * fVar46 - fVar17 * fVar47) + fVar49 * fVar21 + fVar31)
                             ) & uRam0000000146858be8);
      fVar45 = (float)(((uint)fVar22 &
                        -(uint)((float)((uint)fVar25 & uRam0000000146858c4c) <= fRam0000000146858c7c
                               ) ^ (uint)fVar22) & uRam0000000146858bec);
    }
    auVar15._4_4_ = fVar43;
    auVar15._0_4_ = fVar42;
    auVar15._8_4_ = fVar44;
    auVar15._12_4_ = fVar45;
    auVar2._4_4_ = fVar51;
    auVar2._0_4_ = fVar50;
    auVar2._8_4_ = fVar52;
    auVar2._12_4_ = (uint)fRam0000000146858bdc & uRam0000000146858bec;
    auVar19 = minps(auVar15,auVar2);
    auVar16._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146858cc4);
    auVar16._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146858cc0);
    auVar16._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146858cc8);
    auVar16._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146858ccc);
    iVar9 = movmskps(iVar9,auVar16);
    if (iVar9 != 0) {
      fVar20 = fStack_134 + fStack_134;
      fVar21 = fStack_130 + fStack_130;
      fVar30 = (local_138 + local_138) * local_138;
      fVar17 = (local_138 + local_138) * fStack_12c;
      fVar31 = fVar47 + fVar47;
      fVar22 = fVar48 + fVar48;
      fVar35 = (fVar21 * fStack_12c + fVar20 * local_138) * fVar50;
      fVar36 = (fVar17 + fVar21 * fStack_134) * fVar51;
      fVar37 = (fVar20 * fStack_12c + fVar21 * local_138) * fVar52;
      fVar24 = fVar51 * (fVar20 * local_138 - fVar21 * fStack_12c);
      fVar26 = fVar52 * (fVar21 * fStack_134 - fVar17);
      fVar28 = fVar50 * (fVar21 * local_138 - fVar20 * fStack_12c);
      fVar23 = (fVar46 + fVar46) * fVar46;
      fVar17 = (float)((uint)((_DAT_146858bd0 - (fVar21 * fStack_130 + fVar20 * fStack_134)) *
                             fVar50) & _DAT_146858be0);
      fVar21 = (float)((uint)((fRam0000000146858bd4 - (fVar21 * fStack_130 + fVar30)) * fVar51) &
                      uRam0000000146858be4);
      fVar29 = (float)((uint)((fRam0000000146858bd8 - (fVar20 * fStack_134 + fVar30)) * fVar52) &
                      uRam0000000146858be8);
      fVar30 = (float)((uint)((fRam0000000146858bdc - (fVar30 + fVar30)) *
                             (float)((uint)fRam0000000146858bdc & uRam0000000146858bec)) &
                      uRam0000000146858bec);
      local_138 = 0.0;
      fStack_134 = 0.0;
      fStack_130 = 0.0;
      fStack_12c = fRam0000000146858bdc;
      fVar20 = (fVar46 + fVar46) * fVar49;
      fVar32 = (fVar22 * fVar49 + fVar31 * fVar46) * fVar42;
      fVar33 = (fVar20 + fVar22 * fVar47) * fVar43;
      fVar34 = (fVar31 * fVar49 + fVar22 * fVar46) * fVar44;
      fVar25 = fVar43 * (fVar31 * fVar46 - fVar22 * fVar49);
      fVar27 = fVar44 * (fVar22 * fVar47 - fVar20);
      fVar46 = fVar42 * (fVar22 * fVar46 - fVar31 * fVar49);
      fVar20 = (float)((uint)((_DAT_146858bd0 - (fVar22 * fVar48 + fVar31 * fVar47)) * fVar42) &
                      _DAT_146858be0);
      fVar22 = (float)((uint)((fRam0000000146858bd4 - (fVar22 * fVar48 + fVar23)) * fVar43) &
                      uRam0000000146858be4);
      fVar31 = (float)((uint)((fRam0000000146858bd8 - (fVar31 * fVar47 + fVar23)) * fVar44) &
                      uRam0000000146858be8);
      fVar23 = (float)((uint)((fRam0000000146858bdc - (fVar23 + fVar23)) * fVar45) &
                      uRam0000000146858bec);
      local_128 = fVar32 * fVar24 + fVar20 * fVar17 + fVar46 * fVar37 + fVar23 * 0.0;
      fStack_124 = fVar32 * fVar21 + fVar20 * fVar35 + fVar46 * fVar26 + fVar23 * 0.0;
      fStack_120 = fVar32 * fVar36 + fVar20 * fVar28 + fVar46 * fVar29 + fVar23 * 0.0;
      fStack_11c = fVar32 * fVar30 + fVar20 * fVar30 + fVar46 * fVar30 +
                   fVar23 * fRam0000000146858bdc;
      local_118 = fVar22 * fVar24 + fVar25 * fVar17 + fVar33 * fVar37 + fVar23 * 0.0;
      fStack_114 = fVar22 * fVar21 + fVar25 * fVar35 + fVar33 * fVar26 + fVar23 * 0.0;
      fStack_110 = fVar22 * fVar36 + fVar25 * fVar28 + fVar33 * fVar29 + fVar23 * 0.0;
      fStack_10c = fVar22 * fVar30 + fVar25 * fVar30 + fVar33 * fVar30 +
                   fVar23 * fRam0000000146858bdc;
      local_108 = fVar27 * fVar24 + fVar34 * fVar17 + fVar31 * fVar37 + fVar23 * 0.0;
      fStack_104 = fVar27 * fVar21 + fVar34 * fVar35 + fVar31 * fVar26 + fVar23 * 0.0;
      fStack_100 = fVar27 * fVar36 + fVar34 * fVar28 + fVar31 * fVar29 + fVar23 * 0.0;
      fStack_fc = fVar27 * fVar30 + fVar34 * fVar30 + fVar31 * fVar30 +
                  fVar23 * fRam0000000146858bdc;
      local_f8 = fVar39 * fVar24 + fVar38 * fVar17 + fVar40 * fVar37 + fRam0000000146858bdc * 0.0;
      fStack_f4 = fVar39 * fVar21 + fVar38 * fVar35 + fVar40 * fVar26 + fRam0000000146858bdc * 0.0;
      fStack_f0 = fVar39 * fVar36 + fVar38 * fVar28 + fVar40 * fVar29 + fRam0000000146858bdc * 0.0;
      fStack_ec = fVar39 * fVar30 + fVar38 * fVar30 + fVar40 * fVar30 +
                  fRam0000000146858bdc * fRam0000000146858bdc;
      FMatrix::RemoveScaling(&local_128);
      fVar17 = (float)(-(uint)(_DAT_146858cc0 <= fVar42 * fVar50) & (_DAT_146858cb0 ^ (uint)fVar3) ^
                      _DAT_146858cb0);
      fVar20 = (float)(-(uint)(fRam0000000146858cc4 <= fVar43 * fVar51) &
                       (uRam0000000146858cb4 ^ (uint)fVar4) ^ uRam0000000146858cb4);
      fVar21 = (float)(-(uint)(fRam0000000146858cc8 <= fVar44 * fVar52) &
                       (uRam0000000146858cb8 ^ (uint)fVar5) ^ uRam0000000146858cb8);
      local_128 = local_128 * fVar17;
      fStack_124 = fStack_124 * fVar17;
      fStack_120 = fStack_120 * fVar17;
      fStack_110 = fStack_110 * fVar20;
      fStack_114 = fStack_114 * fVar20;
      local_118 = local_118 * fVar20;
      fStack_100 = fStack_100 * fVar21;
      local_108 = local_108 * fVar21;
      fStack_104 = fStack_104 * fVar21;
      FQuat::FQuat(&local_158,&local_128);
      local_148 = 0x322bcc77;
    }
    fVar17 = (float)FGenericPlatformMath::Atan2();
    fVar17 = fVar17 * 57.295776 + (float)*(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x7c);
    if (*(char *)(param_1 + 0x68) != '\0') {
      if (fVar41 < 0.0) {
        fVar20 = 1.0;
      }
      else {
        fVar20 = -1.0;
      }
      fVar21 = *(float *)(param_1 + 0x24) * 0.5;
      *(float *)(param_1 + 0x24) = fVar21;
      fVar17 = fVar21 * fVar20 + fVar17;
    }
    fVar20 = (float)(int)(fVar17 * 0.0027777778) * 360.0;
    if (ABS(fVar17) < ABS(fVar20)) {
      fVar20 = fVar17;
    }
    fVar17 = fVar17 - fVar20;
    if (fVar17 < 0.0) {
      fVar17 = fVar17 + 360.0;
    }
    if (180.0 < fVar17) {
      fVar17 = fVar17 - 360.0;
    }
    *(float *)(param_1 + 0x20) = fVar17;
  }
  return;
}



// FUNCTION 14072c500 FUN_14072c500 body=880 status=ok
// SIG undefined FUN_14072c500(void)

void FUN_14072c500(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  longlong local_208;
  longlong local_200;
  code *local_1f8;
  undefined4 uStack_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  longlong local_1d8 [2];
  undefined1 local_1c8 [49];
  undefined1 local_197;
  undefined1 local_f8 [208];
  
  if ((param_1[0x23] != 0) && (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0x251) = *(undefined1 *)((longlong)param_1 + 0x269);
    *(undefined1 *)(param_1 + 0x4a) = 1;
    (**(code **)(*param_1 + 0x260))();
  }
  cVar10 = '\0';
  plVar2 = param_1 + 0x44;
  plVar9 = (longlong *)0x0;
  if ((*plVar2 != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if ((0 < iVar4) && (param_1[0x3e] != 0)) {
      local_200 = param_1[0x45];
      local_208 = 0;
      if (local_200 != 0) {
        LOCK();
        iVar4 = *(int *)(local_200 + 8);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(local_200 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar4 == *(int *)(local_200 + 8);
          if (bVar11) {
            *(int *)(local_200 + 8) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_200 != 0) {
              local_208 = *plVar2;
            }
            goto LAB_14072c5bc;
          }
          LOCK();
          iVar4 = *(int *)(local_200 + 8);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(local_200 + 8) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        local_200 = 0;
      }
LAB_14072c5bc:
      FUN_142c84750(param_1[0x3e],&local_208);
    }
  }
  if (plVar2 != local_1d8) {
    *plVar2 = 0;
    plVar7 = (longlong *)param_1[0x45];
    param_1[0x45] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (param_1[0x3a] != 0) {
    lVar5 = FUN_142e20fc0();
    for (lVar3 = param_1[0x3a]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar5) {
        if (((param_1[0x3a] != 0) && (param_1[0x3e] != 0)) &&
           (*(char *)((longlong)param_1 + 0x269) != '\0')) {
          FUN_142c62180(local_1c8);
          local_197 = 2;
          uVar6 = FUN_1405e0fd0(local_f8,local_1c8);
          plVar7 = (longlong *)FUN_142c7bb40(param_1[0x3e],local_1e8,param_1[0x3a],uVar6,0);
          *plVar2 = *plVar7;
          plVar7 = (longlong *)plVar7[1];
          plVar8 = (longlong *)param_1[0x45];
          if (plVar7 != plVar8) {
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)param_1[0x45];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            param_1[0x45] = (longlong)plVar7;
          }
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_1e0 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_1e0)(local_1e0);
              LOCK();
              piVar1 = (int *)((longlong)local_1e0 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_1e0 + 8))(local_1e0,1);
              }
            }
          }
          if ((*plVar2 == 0) || (param_1[0x45] == 0)) goto LAB_14072c7f9;
          piVar1 = (int *)(param_1[0x45] + 8);
          LOCK();
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            *piVar1 = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (iVar4 < 1) goto LAB_14072c7f9;
          plVar7 = (longlong *)param_1[0x45];
          cVar10 = (char)param_1[0x3c];
          local_1f8 = FUN_14073e2a0;
          uStack_1f0 = 0;
          plVar8 = plVar7;
          if (plVar7 == (longlong *)0x0) goto LAB_14072c7b2;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar7 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          goto joined_r0x00014072c790;
        }
        break;
      }
    }
  }
LAB_14072c810:
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN_140733cd0(param_1);
LAB_14072c81f:
  if ((*(char *)((longlong)param_1 + 0x1e3) != '\0') && (param_1[0x3e] != 0)) {
    FUN_142dafbc0(param_1[0x3e] + 0x288,&DAT_146858d98);
  }
  return;
joined_r0x00014072c790:
  plVar8 = plVar9;
  if (bVar11) goto LAB_14072c7b2;
  LOCK();
  bVar11 = iVar4 == (int)plVar7[1];
  if (bVar11) {
    *(int *)(plVar7 + 1) = iVar4 + 1;
  }
  UNLOCK();
  if (bVar11) {
    plVar8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar9 = (longlong *)*plVar2;
    }
    goto LAB_14072c7b2;
  }
  LOCK();
  iVar4 = (int)plVar7[1];
  bVar11 = iVar4 == 0;
  if (bVar11) {
    *(int *)(plVar7 + 1) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  goto joined_r0x00014072c790;
LAB_14072c7b2:
  FUN_140722940(plVar9 + 0xb,local_res10,param_1,&local_1f8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_14072c7f9:
  FUN_142c63c50(local_1c8);
  if (cVar10 != '\0') goto LAB_14072c81f;
  goto LAB_14072c810;
}



// FUNCTION 14072c870 FUN_14072c870 body=709 status=ok
// SIG undefined FUN_14072c870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14072c870(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  BOOL BVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined1 local_1a8 [304];
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b8));
  }
  cVar1 = *(char *)(param_1 + 0x1b1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b8));
  if (cVar1 != *(char *)(param_1 + 0x1b0)) {
    FUN_140743910(param_1,cVar1);
    cVar2 = *(char *)(param_1 + 0x1b0);
    bVar8 = 0;
    cVar3 = *(char *)(param_1 + 0x570);
    if (cVar2 == '\0') {
      uVar5 = FUN_1407265c0(local_1a8);
      FUN_140743ac0(param_1,uVar5);
      *(undefined4 *)(param_1 + 0x198) = 0xbf800000;
      *(undefined8 *)(param_1 + 0x1a0) = DAT_1468c21b0;
      *(undefined1 *)(param_1 + 0x570) = 0;
      FUN_140732200(param_1);
      FUN_140746a00(param_1);
    }
    else if (cVar2 == '\x01') {
      lVar7 = *(longlong *)(param_1 + 0x588);
      if (lVar7 != 0) {
        uVar5 = UDamageableInterface::GetPrivateStaticClass();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x50))(plVar6,0,0);
        }
      }
      if ((*(longlong *)(param_1 + 0x588) != 0) && (*(longlong *)(param_1 + 0x310) != 0)) {
        local_1b8._0_1_ = 4;
        FUN_140738830(param_1,local_78,*(longlong *)(param_1 + 0x310),&DAT_1468b5b70);
        local_1b8 = (ulonglong)local_1b8._1_7_ << 8;
        FUN_14223d270(*(undefined8 *)(param_1 + 0x588),local_68,0,0);
      }
      FUN_1407441b0(param_1,1);
      if (cVar3 != '\0') {
        if ((*(longlong *)(param_1 + 0x118) == 0) ||
           (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) != '\x03')) {
          if (*(longlong *)(param_1 + 0x310) == *(longlong *)(param_1 + 0x1e0)) {
            FUN_140729c70();
          }
        }
        else {
          FUN_140729c70(param_1 + 0x440,param_1 + 0x310);
          FUN_140732b90(param_1);
          uVar5 = FUN_140726c10(local_1a8,param_1 + 0x328);
          local_1b8 = 0;
          lVar7 = FUN_140730010(param_1,*(undefined8 *)(param_1 + 0x310),
                                *(undefined8 *)(param_1 + 800),uVar5);
          if (lVar7 == 0) {
            lVar7 = *(longlong *)(param_1 + 0x448);
          }
          if (lVar7 != *(longlong *)(param_1 + 0x318)) {
            *(longlong *)(param_1 + 0x318) = lVar7;
            FUN_1407466f0(param_1);
          }
          FUN_140732790(param_1);
        }
      }
    }
    else if ((cVar2 == '\x03') || (cVar2 == '\x06')) {
      FUN_1407441b0(param_1,2);
    }
    else if (cVar2 == '\a') {
      uVar5 = FUN_140726540(local_1a8,param_1 + 0x1e0);
      FUN_140743ac0(param_1,uVar5);
    }
    *(bool *)(*(longlong *)(param_1 + 0x588) + 0x8ac) = cVar1 != '\0';
    if (*(char *)(param_1 + 0x1b0) != '\a') {
      bVar8 = 0x10;
    }
    *(byte *)(*(longlong *)(param_1 + 0x588) + 0x90) =
         bVar8 | *(byte *)(*(longlong *)(param_1 + 0x588) + 0x90) & 0xef;
  }
  return;
}



// FUNCTION 14072cb40 FUN_14072cb40 body=946 status=ok
// SIG undefined FUN_14072cb40(void)

void FUN_14072cb40(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  longlong local_208;
  longlong local_200;
  code *local_1f8;
  undefined4 uStack_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  longlong local_1d8 [2];
  undefined1 local_1c8 [49];
  undefined1 local_197;
  undefined1 local_f8 [208];
  
  if ((param_1[0x23] != 0) && (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0x251) = *(undefined1 *)((longlong)param_1 + 0x269);
    *(undefined1 *)(param_1 + 0x4a) = 0;
    (**(code **)(*param_1 + 0x260))();
  }
  cVar10 = '\0';
  plVar2 = param_1 + 0x44;
  plVar9 = (longlong *)0x0;
  if ((*plVar2 != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if ((0 < iVar4) && (param_1[0x3e] != 0)) {
      local_200 = param_1[0x45];
      local_208 = 0;
      if (local_200 != 0) {
        LOCK();
        iVar4 = *(int *)(local_200 + 8);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(local_200 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar4 == *(int *)(local_200 + 8);
          if (bVar11) {
            *(int *)(local_200 + 8) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_200 != 0) {
              local_208 = *plVar2;
            }
            goto LAB_14072cbfd;
          }
          LOCK();
          iVar4 = *(int *)(local_200 + 8);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(local_200 + 8) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        local_200 = 0;
      }
LAB_14072cbfd:
      FUN_142c84750(param_1[0x3e],&local_208);
    }
  }
  if ((*(char *)((longlong)param_1 + 0x1e3) != '\0') && (param_1[0x3e] != 0)) {
    FUN_142dbb5d0(param_1[0x3e] + 0x288,&DAT_146858d98);
  }
  if (plVar2 != local_1d8) {
    *plVar2 = 0;
    plVar7 = (longlong *)param_1[0x45];
    param_1[0x45] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (param_1[0x3b] != 0) {
    lVar5 = FUN_142e20fc0();
    for (lVar3 = param_1[0x3b]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar5) {
        if (((param_1[0x3b] != 0) && (param_1[0x3e] != 0)) &&
           (*(char *)((longlong)param_1 + 0x269) != '\0')) {
          FUN_142c62180(local_1c8);
          local_197 = 2;
          uVar6 = FUN_1405e0fd0(local_f8,local_1c8);
          plVar7 = (longlong *)FUN_142c7bb40(param_1[0x3e],local_1e8,param_1[0x3b],uVar6,0);
          *plVar2 = *plVar7;
          plVar7 = (longlong *)plVar7[1];
          plVar8 = (longlong *)param_1[0x45];
          if (plVar7 != plVar8) {
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)param_1[0x45];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            param_1[0x45] = (longlong)plVar7;
          }
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_1e0 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_1e0)(local_1e0);
              LOCK();
              piVar1 = (int *)((longlong)local_1e0 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_1e0 + 8))(local_1e0,1);
              }
            }
          }
          if ((*plVar2 == 0) || (param_1[0x45] == 0)) goto LAB_14072ce6a;
          piVar1 = (int *)(param_1[0x45] + 8);
          LOCK();
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            *piVar1 = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (iVar4 < 1) goto LAB_14072ce6a;
          plVar7 = (longlong *)param_1[0x45];
          cVar10 = *(char *)((longlong)param_1 + 0x1e1);
          local_1f8 = FUN_14073f450;
          uStack_1f0 = 0;
          plVar8 = plVar7;
          if (plVar7 == (longlong *)0x0) goto LAB_14072ce23;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar7 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          goto joined_r0x00014072ce00;
        }
        break;
      }
    }
  }
LAB_14072ce81:
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_140734240(param_1);
LAB_14072ce90:
  if (((*(char *)((longlong)param_1 + 0x1e3) != '\0') && (param_1[0x3e] != 0)) &&
     ((*plVar2 != 0 && (param_1[0x45] != 0)))) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      FUN_142dafbc0(param_1[0x3e] + 0x288,&DAT_146858d98);
    }
  }
  return;
joined_r0x00014072ce00:
  plVar8 = plVar9;
  if (bVar11) goto LAB_14072ce23;
  LOCK();
  bVar11 = iVar4 == (int)plVar7[1];
  if (bVar11) {
    *(int *)(plVar7 + 1) = iVar4 + 1;
  }
  UNLOCK();
  if (bVar11) {
    plVar9 = (longlong *)0x0;
    plVar8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar9 = (longlong *)*plVar2;
    }
    goto LAB_14072ce23;
  }
  LOCK();
  iVar4 = (int)plVar7[1];
  bVar11 = iVar4 == 0;
  if (bVar11) {
    *(int *)(plVar7 + 1) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  goto joined_r0x00014072ce00;
LAB_14072ce23:
  FUN_140722940(plVar9 + 0xb,local_res10,param_1,&local_1f8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_14072ce6a:
  FUN_142c63c50(local_1c8);
  if (cVar10 != '\0') goto LAB_14072ce90;
  goto LAB_14072ce81;
}



// FUNCTION 14072cf00 FUN_14072cf00 body=45 status=ok
// SIG undefined FUN_14072cf00(void)

void FUN_14072cf00(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ca5540();
  if (cVar1 != '\0') {
    FUN_1407362a0(param_1);
    FUN_142c94330(param_1);
    return;
  }
  return;
}



// FUNCTION 14072cf50 FUN_14072cf50 body=300 status=ok
// SIG undefined FUN_14072cf50(void)

void FUN_14072cf50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  FUN_142c68170();
  plVar2 = (longlong *)FUN_142c6f130(param_1);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1407a6820();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x318);
      goto LAB_14072cf9c;
    }
  }
  lVar4 = 0;
LAB_14072cf9c:
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar7 = *(longlong *)(lVar1 + 0xb8);
  lVar8 = (longlong)*(int *)(lVar1 + 0xc0) * 0x88 + lVar7;
  if (lVar7 == lVar8) {
    return;
  }
  do {
    plVar6 = *(longlong **)(lVar7 + 0x78);
    plVar2 = plVar6 + *(int *)(lVar7 + 0x80);
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar4) {
        if (lVar7 == 0) {
          return;
        }
        uVar3 = FUN_142c62320(local_28);
        uVar3 = FUN_142c82380(uVar3,*(undefined4 *)(lVar1 + 200));
        uVar3 = FAIStimulus::SetExpirationAge(uVar3,*(undefined4 *)(lVar1 + 0xcc));
        puVar5 = (undefined4 *)
                 vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr
                           (uVar3,*(undefined8 *)(lVar1 + 0x48));
        local_48 = *puVar5;
        uStack_44 = puVar5[1];
        uStack_40 = puVar5[2];
        uStack_3c = puVar5[3];
        local_38 = puVar5[4];
        uStack_34 = puVar5[5];
        uStack_30 = puVar5[6];
        uStack_2c = puVar5[7];
        uVar3 = FDifficultyFloat::FDifficultyFloat(local_58);
        FUN_142c7c510(param_1,lVar7,&local_48,uVar3);
        return;
      }
    }
    lVar7 = lVar7 + 0x88;
  } while (lVar7 != lVar8);
  return;
}



// FUNCTION 14072d080 FUN_14072d080 body=14 status=ok
// SIG undefined FUN_14072d080(void)

void FUN_14072d080(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xe0,0);
  return;
}



// FUNCTION 14072d090 FUN_14072d090 body=673 status=ok
// SIG undefined FUN_14072d090(void)

void FUN_14072d090(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_142330a70();
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if (lVar6 != 0) {
      cVar5 = UWorld::IsGameWorld(lVar6);
      if (cVar5 != '\0') {
        uVar7 = FUN_142e27720();
        uVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
        *(undefined8 *)(param_1 + 0x1f0) = uVar7;
        uVar7 = FUN_142e79d90();
        uVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
        *(undefined8 *)(param_1 + 0x1f8) = uVar7;
        uVar7 = UScrollBox::GetPrivateStaticClass();
        uVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
        *(undefined8 *)(param_1 + 0x218) = uVar7;
        uVar7 = FUN_142e39920();
        uVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
        *(undefined8 *)(param_1 + 0x208) = uVar7;
        uVar7 = FUN_142e75af0();
        uVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
        *(undefined8 *)(param_1 + 0x210) = uVar7;
        uStack_20 = 0;
        plVar1 = plVar3 + 0x76;
        local_28 = FUN_14073ee40;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_28._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_20;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1c;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar6;
          *plVar8 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
          iVar2 = (int)plVar3[0x77];
          *(int *)(plVar3 + 0x77) = iVar2 + 1;
          if (*(int *)((longlong)plVar3 + 0x3bc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          lVar6 = *plVar1;
          *(longlong **)(lVar6 + (longlong)iVar2 * 0x10) = plVar8;
          *(undefined4 *)(lVar6 + 8 + (longlong)iVar2 * 0x10) = 3;
        }
        lVar6 = (**(code **)(*plVar3 + 0x668))(plVar3);
        if (lVar6 != 0) {
          lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar6 = *(longlong *)(lVar6 + 0x628);
            *(longlong *)(param_1 + 0x200) = lVar6;
            if (lVar6 != 0) {
              local_28 = (code *)&LAB_14073ed70;
              uStack_20 = 0;
              FUN_140722860(lVar6 + 0x228,local_res8,param_1,&local_28);
              local_28 = (code *)&LAB_14073ed70;
              uStack_20 = 0;
              FUN_140722860(*(longlong *)(param_1 + 0x200) + 0x240,local_res8,param_1,&local_28);
            }
          }
        }
        FUN_1407442a0(param_1);
        *(char *)(param_1 + 0x268) = *(char *)(param_1 + 0x1a9);
        if (*(char *)(param_1 + 0x1a9) != '\0') {
          FUN_140733cd0();
          return;
        }
        FUN_140734240(param_1);
      }
    }
  }
  return;
}



// FUNCTION 14072d340 FUN_14072d340 body=869 status=ok
// SIG undefined FUN_14072d340(void)

void FUN_14072d340(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_142330a70();
  pwVar6 = *(wchar_t **)(param_1 + 0x118);
  pwVar10 = (wchar_t *)0x0;
  if (pwVar6 == (wchar_t *)0x0) {
LAB_14072d394:
    pwVar6 = pwVar10;
  }
  else {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14072d394;
  }
  *(wchar_t **)(param_1 + 0x588) = pwVar6;
  if (pwVar6 == (wchar_t *)0x0) {
    return;
  }
  pwVar6 = *(wchar_t **)(pwVar6 + 0x248);
  if (pwVar6 == (wchar_t *)0x0) {
LAB_14072d3ee:
    pwVar6 = pwVar10;
  }
  else {
    lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14072d3ee;
  }
  *(wchar_t **)(param_1 + 0x590) = pwVar6;
  plVar11 = *(longlong **)(param_1 + 0x588);
  uVar5 = UScrollBox::GetPrivateStaticClass();
  uVar5 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar5);
  plVar11 = *(longlong **)(param_1 + 0x588);
  *(undefined8 *)(param_1 + 0x598) = uVar5;
  uVar5 = APostProcessVolume::GetPrivateStaticClass();
  uVar5 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar5);
  *(undefined8 *)(param_1 + 0x5b8) = uVar5;
  pwVar6 = (wchar_t *)(**(code **)(**(longlong **)(param_1 + 0x588) + 0x6e8))();
  if (pwVar6 != (wchar_t *)0x0) {
    lVar4 = FUN_142fc0410();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14072d48b;
  }
  pwVar6 = pwVar10;
LAB_14072d48b:
  *(wchar_t **)(param_1 + 0x5c0) = pwVar6;
  plVar11 = *(longlong **)(param_1 + 0x588);
  uVar5 = FUN_142e75af0();
  uVar5 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar5);
  *(undefined8 *)(param_1 + 0x5a8) = uVar5;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UCoverUserComponent::OnMovementModeChanged",L"::");
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar10 = pwVar3;
  }
  FName::FName(&local_res10,pwVar10 + 2,1);
  lVar4 = *(longlong *)(param_1 + 0x588);
  plVar11 = (longlong *)(lVar4 + 0x5b0);
  FWeakObjectPtr::operator=(&local_28,0);
  uStack_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  uStack_20 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,uStack_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
  iVar1 = *(int *)(lVar4 + 0x5b8);
  *(int *)(lVar4 + 0x5b8) = iVar1 + 1;
  if (*(int *)(lVar4 + 0x5bc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
  }
  puVar9 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
  *puVar9 = (undefined4)local_28;
  puVar9[1] = local_28._4_4_;
  *(ulonglong *)(puVar9 + 2) = uStack_20;
  plVar11 = *(longlong **)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x4c0);
  if (plVar11 != (longlong *)0x0) {
    *(longlong *)(param_1 + 0x5a0) = plVar11[0xc5];
    uVar5 = FUN_142e79600();
    uVar5 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar5);
    *(undefined8 *)(param_1 + 0x5b0) = uVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x5c0);
  if (lVar4 != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_14073f2d0;
    plVar12 = (longlong *)(lVar4 + 0x888);
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_20._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar7;
      *plVar11 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
      iVar1 = *(int *)(lVar4 + 0x890);
      *(int *)(lVar4 + 0x890) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x894) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar12);
      *puVar8 = plVar11;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 14072d6b0 FUN_14072d6b0 body=212 status=ok
// SIG undefined FUN_14072d6b0(void)

longlong FUN_14072d6b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar4 = FUN_140765020();
  if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x488), plVar1 != (longlong *)0x0)) {
    uVar5 = FUN_1407a6820();
    lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if ((lVar6 != 0) && (param_2 != 0)) {
      plVar7 = *(longlong **)(param_2 + 0x488);
      plVar1 = plVar7 + *(int *)(param_2 + 0x490);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar2 = *plVar7;
        if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x6f0) != 0)) &&
            (*(char *)(lVar2 + 0x6fa) != '\0')) && (0 < *(int *)(lVar2 + 0x708))) {
          cVar3 = FUN_140731380(lVar6,lVar2);
          if (cVar3 == '\0') {
            return 0;
          }
          lVar4 = FUN_140722ae0(lVar4);
          if (lVar4 == 0) {
            return 0;
          }
          *(longlong *)(lVar4 + 0xd0) = lVar2;
          *(longlong *)(lVar4 + 0xd8) = lVar6;
          return lVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14072d790 FUN_14072d790 body=111 status=ok
// SIG undefined FUN_14072d790(void)

longlong FUN_14072d790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_142dd9fb0(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_140765020(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_140722ca0(lVar2);
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0xd0) = lVar1;
        *(undefined8 *)(lVar2 + 0xd8) = param_3;
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14072d800 FUN_14072d800 body=39 status=ok
// SIG undefined FUN_14072d800(void)

longlong FUN_14072d800(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (lVar1 = FUN_140765020(), lVar1 != 0)) &&
     (lVar1 = FUN_140722e60(lVar1), lVar1 != 0)) {
    return lVar1;
  }
  return 0;
}



// FUNCTION 14072d830 FUN_14072d830 body=122 status=ok
// SIG undefined FUN_14072d830(void)

longlong FUN_14072d830(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (lVar1 = FUN_142dd9fb0(param_3), lVar1 != 0)) &&
      (lVar2 = FUN_140765020(param_1), lVar2 != 0)) && (lVar2 = FUN_140723020(lVar2), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0xf0) = param_4;
    *(longlong *)(lVar2 + 0xe0) = param_2;
    *(longlong *)(lVar2 + 0xe8) = lVar1;
    return lVar2;
  }
  return 0;
}



// FUNCTION 14072d8b0 FUN_14072d8b0 body=696 status=ok
// SIG undefined FUN_14072d8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14072d8b0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108 [20];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_110 = param_5;
  local_128 = param_4;
  lVar3 = FUN_140765020();
  if (lVar3 != 0) {
    local_138 = param_5;
    FUN_14072db70(lVar3,param_2,param_3,param_4);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  lVar3 = FUN_1407b4160();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  uVar5 = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  lVar3 = UCableComponent::GetAttachedActor(param_1);
  if (lVar3 == 0) {
    iVar4 = (int)local_60;
    goto LAB_14072dac6;
  }
  iVar2 = FUN_1407c9b90(lVar3,0,1);
  local_120 = (undefined8 *)0x0;
  local_118 = 0;
  if (0 < iVar2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_120,iVar2);
  }
  FUN_1407c7b00(lVar3,&local_120,0,1);
  uVar8 = local_60;
  if ((int)local_60 < iVar2) {
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    iVar4 = iVar2;
    if (local_60._4_4_ < iVar2) {
      FUN_140741560(local_108,uVar8 & 0xffffffff);
LAB_14072da39:
      iVar4 = (int)local_60;
    }
  }
  else {
    iVar4 = (int)local_60;
    if ((iVar2 < (int)local_60) && (iVar6 = (int)local_60 - iVar2, iVar6 != 0)) {
      iVar4 = ((int)local_60 - iVar6) - iVar2;
      if (iVar4 != 0) {
        plVar7 = local_108;
        if (local_68 != (longlong *)0x0) {
          plVar7 = local_68;
        }
        _guard_xfg_dispatch_icall_nop(plVar7 + iVar2,plVar7 + (iVar6 + iVar2),(longlong)iVar4 << 3);
      }
      local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar6);
      FUN_1407417a0(local_108);
      goto LAB_14072da39;
    }
  }
  plVar7 = local_108;
  if (local_68 != (longlong *)0x0) {
    plVar7 = local_68;
  }
  uVar8 = (ulonglong)((longlong)(local_120 + (int)local_118) + (7 - (longlong)local_120)) >> 3;
  if (local_120 + (int)local_118 < local_120) {
    uVar8 = uVar5;
  }
  puVar9 = local_120;
  uVar10 = uVar5;
  if (uVar8 != 0) {
    do {
      lVar3 = FUN_140765020(*puVar9);
      uVar10 = uVar10 + 1;
      *plVar7 = lVar3;
      plVar7 = plVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 != uVar8);
    iVar4 = (int)local_60;
  }
  param_5 = local_110;
  param_4 = local_128;
  if (local_120 != (undefined8 *)0x0) {
    FMemory::Free(local_120);
    iVar4 = (int)local_60;
    param_5 = local_110;
    param_4 = local_128;
  }
LAB_14072dac6:
  plVar7 = local_108;
  if (local_68 != (longlong *)0x0) {
    plVar7 = local_68;
  }
  uVar8 = (longlong)iVar4 & 0x1fffffffffffffff;
  if (plVar7 + iVar4 < plVar7) {
    uVar8 = uVar5;
  }
  if (uVar8 != 0) {
    do {
      if (*plVar7 != 0) {
        local_138 = param_5;
        FUN_14072db70(*plVar7,param_2,param_3,param_4);
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 14072db70 FUN_14072db70 body=897 status=ok
// SIG undefined FUN_14072db70(void)

void FUN_14072db70(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar7 = *(longlong *)(param_1 + 0x608);
  local_58 = DAT_146858d60;
  local_48 = DAT_146858d68;
  local_38 = DAT_146858d70;
  uStack_50 = CONCAT22(uStack_50._2_2_,0xff00);
  uStack_40 = CONCAT22(uStack_40._2_2_,0xff00);
  uStack_30 = CONCAT22(uStack_30._2_2_,0xff00);
  if (lVar7 == 0) goto LAB_14072de7d;
  plVar2 = *(longlong **)(lVar7 + 0x240);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  plVar5 = (longlong *)USafeZone::GetPrivateStaticClass();
  plVar9 = plVar2;
  while (plVar9 != plVar5) {
    plVar9 = (longlong *)plVar9[6];
    if (plVar9 == (longlong *)0x0) {
      return;
    }
  }
  plVar9 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  cVar4 = FUN_14071ba40(lVar7,1,*(undefined8 *)(lVar7 + 0x240),&local_68,0);
  if (local_60 == 0) {
LAB_14072dc6d:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_14072dc6d;
  }
  if (cVar4 == '\0') {
    return;
  }
  plVar6 = (longlong *)USafeZone::GetPrivateStaticClass();
  plVar5 = plVar2;
  do {
    plVar10 = plVar2;
    if (plVar5 == plVar6) break;
    plVar5 = (longlong *)plVar5[6];
    plVar10 = plVar9;
  } while (plVar5 != (longlong *)0x0);
  lVar7 = UStruct::FindPropertyByName(plVar10,DAT_146858d78);
  if (lVar7 != 0) {
    lVar8 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar8 = FUN_142e36290(), *(longlong *)(lVar7 + 0x70) == lVar8)) &&
       (*(int *)(lVar7 + 0x30) == 1)) {
      lVar8 = plVar2[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar8 = plVar2[0x1f];
        if (lVar8 == 0) goto LAB_14072dd2d;
      }
      puVar1 = (undefined8 *)(*(int *)(lVar7 + 0x44) + lVar8);
      local_58 = *puVar1;
      uStack_50 = *(undefined4 *)(puVar1 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
    }
  }
LAB_14072dd2d:
  plVar6 = (longlong *)USafeZone::GetPrivateStaticClass();
  plVar5 = plVar2;
  do {
    plVar10 = plVar2;
    if (plVar5 == plVar6) break;
    plVar5 = (longlong *)plVar5[6];
    plVar10 = plVar9;
  } while (plVar5 != (longlong *)0x0);
  lVar7 = UStruct::FindPropertyByName(plVar10,DAT_146858d80);
  if (lVar7 != 0) {
    lVar8 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar8 = FUN_142e36290(), *(longlong *)(lVar7 + 0x70) == lVar8)) &&
       (*(int *)(lVar7 + 0x30) == 1)) {
      lVar8 = plVar2[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar8 = plVar2[0x1f];
        if (lVar8 == 0) goto LAB_14072ddd2;
      }
      puVar1 = (undefined8 *)(*(int *)(lVar7 + 0x44) + lVar8);
      local_48 = *puVar1;
      uStack_40 = *(undefined4 *)(puVar1 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    }
  }
LAB_14072ddd2:
  plVar6 = (longlong *)USafeZone::GetPrivateStaticClass();
  plVar5 = plVar2;
  do {
    plVar10 = plVar2;
    if (plVar5 == plVar6) break;
    plVar5 = (longlong *)plVar5[6];
    plVar10 = plVar9;
  } while (plVar5 != (longlong *)0x0);
  lVar7 = UStruct::FindPropertyByName(plVar10,DAT_146858d88);
  if (lVar7 != 0) {
    lVar8 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar8 = FUN_142e36290(), *(longlong *)(lVar7 + 0x70) == lVar8)) &&
       (*(int *)(lVar7 + 0x30) == 1)) {
      lVar8 = plVar2[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar8 = plVar2[0x1f];
        if (lVar8 == 0) goto LAB_14072de7d;
      }
      puVar1 = (undefined8 *)(*(int *)(lVar7 + 0x44) + lVar8);
      local_38 = *puVar1;
      uStack_30 = *(undefined4 *)(puVar1 + 1);
      uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
    }
  }
LAB_14072de7d:
  lVar7 = FUN_142dd6c60(param_1);
  if (lVar7 != 0) {
    FUN_142ddc5e0(lVar7,3,param_5);
  }
  FUN_142cd0a60(&local_58,*(undefined8 *)(param_1 + 0x568),param_2);
  FUN_142cd0450(&local_48,*(undefined8 *)(param_1 + 0x568),param_3);
  FUN_142cd0450(&local_38,*(undefined8 *)(param_1 + 0x568),param_4);
  return;
}



// FUNCTION 14072df00 FUN_14072df00 body=44 status=ok
// SIG undefined FUN_14072df00(void)

void FUN_14072df00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14072df30(param_1,param_2,0,0,0,param_3,0,0);
  return;
}



// FUNCTION 14072df30 FUN_14072df30 body=408 status=ok
// SIG undefined FUN_14072df30(void)

longlong FUN_14072df30(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                      undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = FUN_140765020(param_1);
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar3 = FUN_1407b4160();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar7 = FUN_1407231e0(param_1,param_3,param_4,param_5);
LAB_14072e08d:
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0xe8) = param_6;
      *(undefined8 *)(lVar7 + 0xf0) = param_7;
      *(undefined1 *)(lVar7 + 0xf8) = param_8;
      *(longlong **)(lVar7 + 0xe0) = param_2;
      return lVar7;
    }
  }
  else {
    if (*(longlong *)(lVar3 + 0x568) == 0) {
      return 0;
    }
    plVar4 = (longlong *)FUN_1407ab0a0();
    plVar5 = (longlong *)plVar4[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
LAB_14072e018:
        lVar7 = FUN_140724390(lVar3 + 0x510);
        if (lVar7 == 0) {
          return 0;
        }
        FUN_14073b940(lVar7,lVar3);
        goto LAB_14072e08d;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5,local_res10,lVar3);
    if (*plVar5 != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*plVar5 == 0) {
            return 0;
          }
          goto LAB_14072e018;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14072e0d0 FUN_14072e0d0 body=513 status=ok
// SIG undefined FUN_14072e0d0(void)

longlong FUN_14072e0d0(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                      undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_140765020(param_1);
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = FUN_1407b4160();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar8 = FUN_140723620(param_1,param_3,param_4,param_7);
LAB_14072e237:
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x11c) = param_6;
      *(undefined8 *)(lVar8 + 0xf0) = param_8;
      *(undefined8 *)(lVar8 + 0xf8) = param_9;
      *(undefined4 *)(lVar8 + 0x118) = param_5;
      *(longlong *)(lVar8 + 0xe8) = lVar3;
      *(undefined8 *)(lVar8 + 0x100) = param_10;
      *(longlong *)(lVar8 + 0xe0) = param_1;
      uVar2 = FUN_142fc5d60();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
      if (plVar6 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
        *(undefined8 *)(lVar8 + 0x108) = uVar2;
        uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
        *(undefined8 *)(lVar8 + 0x110) = uVar2;
        return lVar8;
      }
      return lVar8;
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x568) == 0) {
      return 0;
    }
    plVar5 = (longlong *)UGMapIconAnimatorComponent::GetPrivateStaticClass();
    plVar6 = (longlong *)plVar5[0x1f];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      plVar6 = (longlong *)plVar5[0x1f];
      if (plVar6 == (longlong *)0x0) {
LAB_14072e1c2:
        lVar8 = FUN_1407244d0(lVar4 + 0x510);
        if (lVar8 == 0) {
          return 0;
        }
        FUN_14073b940(lVar8,lVar4);
        goto LAB_14072e237;
      }
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x318))(plVar6,local_res10,lVar4);
    if (*plVar6 != 0) {
      lVar7 = USafeZone::GetPrivateStaticClass();
      for (lVar8 = *plVar6; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar7) {
          if (*plVar6 == 0) {
            return 0;
          }
          goto LAB_14072e1c2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14072e2e0 FUN_14072e2e0 body=135 status=ok
// SIG undefined FUN_14072e2e0(void)

void FUN_14072e2e0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 *local_18;
  undefined4 local_10;
  
  local_10 = 1;
  local_18 = &local_res8;
  local_res8 = param_1;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UGameplayTaskOwnerInterface::StaticClass();
    uVar1 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  }
  lVar2 = FUN_140723a60(uVar1,&local_18,1);
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x118) = param_2;
    *(undefined1 *)(lVar2 + 0x120) = param_3;
    *(undefined8 *)(lVar2 + 0x158) = param_4;
  }
  return;
}



// FUNCTION 14072e370 FUN_14072e370 body=127 status=ok
// SIG undefined FUN_14072e370(void)

void FUN_14072e370(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UGameplayTaskOwnerInterface::StaticClass();
    uVar1 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  }
  lVar2 = FUN_140723a60(uVar1,&local_18,1);
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x118) = param_2;
    *(undefined1 *)(lVar2 + 0x120) = param_3;
    *(undefined8 *)(lVar2 + 0x158) = param_4;
  }
  return;
}



// FUNCTION 14072e3f0 FUN_14072e3f0 body=343 status=ok
// SIG undefined FUN_14072e3f0(void)

longlong FUN_14072e3f0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_140765020();
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN_1407b4160();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar6 = FUN_140723d90(param_1,param_3,param_4,param_5);
LAB_14072e523:
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0xe8) = param_6;
      *(longlong *)(lVar6 + 0xe0) = param_2;
      return lVar6;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x568) == 0) {
      return 0;
    }
    plVar3 = (longlong *)UAISense_Hearing::GetPrivateStaticClass();
    plVar4 = (longlong *)plVar3[0x1f];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar4 = (longlong *)plVar3[0x1f];
      if (plVar4 == (longlong *)0x0) {
LAB_14072e4ae:
        lVar6 = FUN_140724610(lVar2 + 0x510);
        if (lVar6 == 0) {
          return 0;
        }
        FUN_14073b940(lVar6,lVar2);
        goto LAB_14072e523;
      }
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x318))(plVar4,local_res10,lVar2);
    if (*plVar4 != 0) {
      lVar5 = USafeZone::GetPrivateStaticClass();
      for (lVar6 = *plVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) {
          if (*plVar4 == 0) {
            return 0;
          }
          goto LAB_14072e4ae;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14072e550 FUN_14072e550 body=349 status=ok
// SIG undefined FUN_14072e550(void)

longlong FUN_14072e550(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_140765020();
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN_1407b4160();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar6 = FUN_140723d90(param_1,0,0,0);
LAB_14072e68e:
    if (lVar6 != 0) {
      *(longlong *)(lVar6 + 0xe0) = param_2;
      *(undefined8 *)(lVar6 + 0xe8) = param_3;
      return lVar6;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x568) == 0) {
      return 0;
    }
    plVar3 = (longlong *)UAISense_Hearing::GetPrivateStaticClass();
    plVar4 = (longlong *)plVar3[0x1f];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar4 = (longlong *)plVar3[0x1f];
      if (plVar4 == (longlong *)0x0) {
LAB_14072e61f:
        lVar6 = FUN_140724610(lVar2 + 0x510);
        if (lVar6 == 0) {
          return 0;
        }
        FUN_14073b940(lVar6,lVar2);
        goto LAB_14072e68e;
      }
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x318))(plVar4,local_res10,lVar2);
    if (*plVar4 != 0) {
      lVar5 = USafeZone::GetPrivateStaticClass();
      for (lVar6 = *plVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) {
          if (*plVar4 == 0) {
            return 0;
          }
          goto LAB_14072e61f;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14072e6b0 FUN_14072e6b0 body=645 status=ok
// SIG undefined FUN_14072e6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14072e6b0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8 [20];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar3 = FUN_140765020();
  if (lVar3 != 0) {
    FUN_14072e940(lVar3,param_2);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  lVar3 = FUN_1407b4160();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  uVar5 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar3 = UCableComponent::GetAttachedActor(param_1);
  if (lVar3 != 0) {
    iVar2 = FUN_1407c9b90(lVar3,0,1);
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0;
    if (0 < iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_f8,iVar2);
    }
    FUN_1407c7b00(lVar3,&local_f8,0,1);
    uVar8 = local_40;
    if ((int)local_40 < iVar2) {
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      iVar4 = iVar2;
      if (local_40._4_4_ < iVar2) {
        FUN_140741560(local_e8,uVar8 & 0xffffffff);
LAB_14072e81d:
        iVar4 = (int)local_40;
      }
    }
    else {
      iVar4 = (int)local_40;
      if ((iVar2 < (int)local_40) && (iVar6 = (int)local_40 - iVar2, iVar6 != 0)) {
        iVar4 = ((int)local_40 - iVar6) - iVar2;
        if (iVar4 != 0) {
          plVar7 = local_e8;
          if (local_48 != (longlong *)0x0) {
            plVar7 = local_48;
          }
          _guard_xfg_dispatch_icall_nop
                    (plVar7 + iVar2,plVar7 + (iVar6 + iVar2),(longlong)iVar4 << 3);
        }
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar6);
        FUN_1407417a0(local_e8);
        goto LAB_14072e81d;
      }
    }
    plVar7 = local_e8;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    uVar8 = (ulonglong)((longlong)(local_f8 + (int)local_f0) + (7 - (longlong)local_f8)) >> 3;
    if (local_f8 + (int)local_f0 < local_f8) {
      uVar8 = uVar5;
    }
    puVar9 = local_f8;
    uVar10 = uVar5;
    if (uVar8 != 0) {
      do {
        lVar3 = FUN_140765020(*puVar9);
        uVar10 = uVar10 + 1;
        *plVar7 = lVar3;
        plVar7 = plVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 != uVar8);
      iVar4 = (int)local_40;
    }
    if (local_f8 == (undefined8 *)0x0) goto LAB_14072e8ab;
    FMemory::Free(local_f8);
  }
  iVar4 = (int)local_40;
LAB_14072e8ab:
  plVar7 = local_e8;
  if (local_48 != (longlong *)0x0) {
    plVar7 = local_48;
  }
  uVar8 = (longlong)iVar4 & 0x1fffffffffffffff;
  if (plVar7 + iVar4 < plVar7) {
    uVar8 = uVar5;
  }
  if (uVar8 != 0) {
    do {
      if (*plVar7 != 0) {
        FUN_14072e940(*plVar7,param_2);
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 14072e940 FUN_14072e940 body=267 status=ok
// SIG undefined FUN_14072e940(void)

void FUN_14072e940(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x608);
  if (lVar3 == 0) {
LAB_14072ea1c:
    lVar3 = FUN_142dd6c60(param_1);
    if (lVar3 != 0) {
      FUN_142ddc5e0(lVar3,3,param_2);
    }
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x248);
    if (lVar4 != 0) {
      lVar2 = USafeZone::GetPrivateStaticClass();
      do {
        if (lVar4 == lVar2) {
          local_18 = (longlong *)0x0;
          local_10 = 0;
          cVar1 = FUN_14071ba40(lVar3,1,*(undefined8 *)(lVar3 + 0x248),&local_18,0);
          if (local_10 == 0) {
LAB_14072ea06:
            if (local_18 != (longlong *)0x0) {
              FMemory::Free(local_18);
            }
          }
          else if (local_18 != (longlong *)0x0) {
            (**(code **)(*local_18 + 0x28))(local_18,0);
            if (local_18 != (longlong *)0x0) {
              local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
            }
            local_10 = 0;
            goto LAB_14072ea06;
          }
          if (cVar1 == '\0') {
            return;
          }
          goto LAB_14072ea1c;
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14072ea50 FUN_14072ea50 body=367 status=ok
// SIG undefined FUN_14072ea50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14072ea50(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68 [3];
  undefined1 local_50 [56];
  
  lVar3 = FUN_140765020();
  if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x630) != 0)) && (param_2 != (longlong *)0x0)) &&
     (lVar1 = *(longlong *)(lVar3 + 0x488), lVar1 != 0)) {
    uVar4 = ALoreItem::GetPrivateStaticClass();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 != 0) {
      local_68[0] = 0;
      cVar2 = FUN_14075f8b0(lVar5,param_3,local_68);
      if ((cVar2 != '\0') && (lVar3 = FUN_1407241d0(lVar3), lVar3 != 0)) {
        lVar1 = *(longlong *)(lVar1 + 0x168);
        if (lVar1 == 0) {
          local_88 = _DAT_1468b5d90;
          local_80 = DAT_1468b5d98;
        }
        else {
          local_88 = *(undefined8 *)(lVar1 + 0x220);
          local_80 = *(undefined4 *)(lVar1 + 0x228);
        }
        local_78 = local_88;
        local_70 = local_80;
        puVar6 = (undefined4 *)FUN_14074c9d0(local_50,lVar5,param_3,&local_78);
        *(undefined4 *)(lVar3 + 0x110) = *puVar6;
        *(undefined4 *)(lVar3 + 0x114) = puVar6[1];
        uVar4 = *(undefined8 *)(puVar6 + 4);
        *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(lVar3 + 0x120) = uVar4;
        *(undefined8 *)(lVar3 + 0x128) = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)(lVar3 + 0x130) = *(undefined8 *)(puVar6 + 8);
        *(undefined4 *)(lVar3 + 0x138) = puVar6[10];
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14072ebc0 FUN_14072ebc0 body=171 status=ok
// SIG undefined FUN_14072ebc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14072ebc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  float local_20;
  undefined4 local_1c;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x378) != '\0') {
    local_28 = *(undefined8 *)(*param_2 + 0x568);
    local_38 = &local_28;
    FUN_142df1760(param_1 + 0x2f8,&local_20,*param_2,0);
    if (local_18 == '\x01') {
      *(undefined4 *)(lVar1 + 0xf4) = local_1c;
    }
    else {
      local_20 = (float)FUN_142cc4350(&local_20,0);
      local_20 = local_20 * 0.5;
      *(float *)(lVar1 + 0xf4) = local_20;
    }
    *(float *)(lVar1 + 0xf0) = local_20;
  }
  return;
}



// FUNCTION 14072ec70 FUN_14072ec70 body=1414 status=ok
// SIG undefined FUN_14072ec70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14072ec70(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_EAX;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar14 [16];
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar30 = fRam0000000146858cc8;
  fVar23 = fRam0000000146858cc4;
  fVar22 = _DAT_146858cc0;
  fVar45 = fRam0000000146858bd8;
  fVar44 = fRam0000000146858bd4;
  fVar43 = _DAT_146858bd0;
  auVar10 = *(undefined1 (*) [16])(param_1 + 0x30);
  fVar2 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar6 = auVar10._8_4_;
  fVar8 = auVar10._12_4_;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar10 = minps(auVar1,auVar10);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146858cc4);
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146858cc0);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146858cc8);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146858ccc);
  iVar9 = movmskps(in_EAX,auVar11);
  if (iVar9 == 0) {
    fVar43 = *(float *)(param_1 + 0x10);
    fVar44 = *(float *)(param_1 + 0x14);
    fVar45 = *(float *)(param_1 + 0x18);
    fVar22 = *(float *)(param_1 + 0x1c);
    fVar23 = *(float *)(param_1 + 0x40);
    fVar30 = *(float *)(param_1 + 0x44);
    fVar16 = *(float *)(param_1 + 0x48);
    fVar19 = *(float *)(param_1 + 0x4c);
    fVar12 = *(float *)(param_1 + 0x50) * fVar2;
    fVar26 = *(float *)(param_1 + 0x54) * fVar4;
    fVar27 = *(float *)(param_1 + 0x58) * fVar6;
    fVar28 = *(float *)(param_1 + 0x5c) * fVar8;
    fVar13 = fVar19 * fVar43 * _DAT_146858c30 + fVar23 * fVar22 + fVar44 * fVar16 * _DAT_146858c20 +
             fVar45 * fVar30 * _DAT_146858c10;
    fVar20 = fVar16 * fVar43 * fRam0000000146858c34 + fVar30 * fVar22 +
             fVar44 * fVar19 * fRam0000000146858c24 + fVar45 * fVar23 * fRam0000000146858c14;
    fVar17 = fVar30 * fVar43 * fRam0000000146858c38 + fVar16 * fVar22 +
             fVar44 * fVar23 * fRam0000000146858c28 + fVar45 * fVar19 * fRam0000000146858c18;
    fVar21 = fVar23 * fVar43 * fRam0000000146858c3c + fVar19 * fVar22 +
             fVar44 * fVar30 * fRam0000000146858c2c + fVar45 * fVar16 * fRam0000000146858c1c;
    fVar30 = fVar27 * fVar44 - fVar26 * fVar45;
    fVar16 = fVar12 * fVar45 - fVar27 * fVar43;
    fVar19 = fVar26 * fVar43 - fVar12 * fVar44;
    fVar25 = fVar28 * fVar22 - fVar28 * fVar22;
    fVar30 = fVar30 + fVar30;
    fVar16 = fVar16 + fVar16;
    fVar19 = fVar19 + fVar19;
    fVar25 = fVar25 + fVar25;
    fVar23 = (fVar19 * fVar44 - fVar16 * fVar45) + fVar30 * fVar22 + fVar12 +
             *(float *)(param_1 + 0x20);
    fVar45 = (fVar30 * fVar45 - fVar19 * fVar43) + fVar16 * fVar22 + fVar26 +
             *(float *)(param_1 + 0x24);
    fVar43 = (fVar16 * fVar43 - fVar30 * fVar44) + fVar19 * fVar22 + fVar27 +
             *(float *)(param_1 + 0x28);
    fVar44 = (fVar25 * fVar22 - fVar25 * fVar22) + fVar25 * fVar22 + fVar28 +
             *(float *)(param_1 + 0x2c);
  }
  else {
    fVar16 = *(float *)(param_1 + 0x10);
    fVar19 = *(float *)(param_1 + 0x14);
    fVar25 = *(float *)(param_1 + 0x18);
    fVar12 = *(float *)(param_1 + 0x1c);
    fVar15 = fVar19 + fVar19;
    fVar18 = fVar25 + fVar25;
    fVar26 = *(float *)(param_1 + 0x20);
    fVar27 = *(float *)(param_1 + 0x24);
    fVar28 = *(float *)(param_1 + 0x28);
    fVar29 = fVar16 * (fVar16 + fVar16);
    fVar24 = fVar12 * (fVar16 + fVar16);
    fVar13 = *(float *)(param_1 + 0x40);
    fVar20 = *(float *)(param_1 + 0x44);
    fVar17 = *(float *)(param_1 + 0x48);
    fVar21 = *(float *)(param_1 + 0x4c);
    fVar31 = fVar4 * (fVar16 * fVar15 - fVar12 * fVar18);
    fVar33 = fVar6 * (fVar19 * fVar18 - fVar24);
    fVar35 = fVar2 * (fVar16 * fVar18 - fVar12 * fVar15);
    fVar40 = (fVar12 * fVar18 + fVar16 * fVar15) * fVar2;
    fVar41 = (fVar24 + fVar19 * fVar18) * fVar4;
    fVar42 = (fVar12 * fVar15 + fVar16 * fVar18) * fVar6;
    fVar12 = (float)((uint)((_DAT_146858bd0 - (fVar25 * fVar18 + fVar19 * fVar15)) * fVar2) &
                    _DAT_146858be0);
    fVar18 = (float)((uint)((fRam0000000146858bd4 - (fVar25 * fVar18 + fVar29)) * fVar4) &
                    uRam0000000146858be4);
    fVar15 = (float)((uint)((fRam0000000146858bd8 - (fVar19 * fVar15 + fVar29)) * fVar6) &
                    uRam0000000146858be8);
    fVar24 = (float)((uint)((fRam0000000146858bdc - (fVar29 + fVar29)) * fVar8) &
                    uRam0000000146858bec);
    fVar16 = fVar20 + fVar20;
    fVar19 = fVar17 + fVar17;
    fVar29 = fVar13 * (fVar13 + fVar13);
    fVar25 = fVar21 * (fVar13 + fVar13);
    fVar37 = (fVar21 * fVar19 + fVar16 * fVar13) * fVar3;
    fVar38 = (fVar25 + fVar19 * fVar20) * fVar5;
    fVar39 = (fVar21 * fVar16 + fVar19 * fVar13) * fVar7;
    fVar32 = fVar5 * (fVar16 * fVar13 - fVar21 * fVar19);
    fVar34 = fVar7 * (fVar19 * fVar20 - fVar25);
    fVar36 = fVar3 * (fVar19 * fVar13 - fVar21 * fVar16);
    fVar13 = (float)((uint)((_DAT_146858bd0 - (fVar17 * fVar19 + fVar20 * fVar16)) * fVar3) &
                    _DAT_146858be0);
    fVar17 = (float)((uint)((fRam0000000146858bd4 - (fVar17 * fVar19 + fVar29)) * fVar5) &
                    uRam0000000146858be4);
    fVar20 = (float)((uint)((fRam0000000146858bd8 - (fVar20 * fVar16 + fVar29)) * fVar7) &
                    uRam0000000146858be8);
    fVar21 = (float)((uint)((fRam0000000146858bdc - (fVar29 + fVar29)) * auVar1._12_4_) &
                    uRam0000000146858bec);
    fVar16 = *(float *)(param_1 + 0x50);
    fVar19 = *(float *)(param_1 + 0x54);
    fVar25 = *(float *)(param_1 + 0x58);
    local_e8 = fVar37 * fVar31 + fVar13 * fVar12 + fVar36 * fVar42 + fVar21 * fVar26;
    fStack_e4 = fVar37 * fVar18 + fVar13 * fVar40 + fVar36 * fVar33 + fVar21 * fVar27;
    fStack_e0 = fVar37 * fVar41 + fVar13 * fVar35 + fVar36 * fVar15 + fVar21 * fVar28;
    fStack_dc = fVar37 * fVar24 + fVar13 * fVar24 + fVar36 * fVar24 + fVar21 * fRam0000000146858bdc;
    local_d8 = fVar17 * fVar31 + fVar32 * fVar12 + fVar38 * fVar42 + fVar21 * fVar26;
    fStack_d4 = fVar17 * fVar18 + fVar32 * fVar40 + fVar38 * fVar33 + fVar21 * fVar27;
    fStack_d0 = fVar17 * fVar41 + fVar32 * fVar35 + fVar38 * fVar15 + fVar21 * fVar28;
    fStack_cc = fVar17 * fVar24 + fVar32 * fVar24 + fVar38 * fVar24 + fVar21 * fRam0000000146858bdc;
    local_c8 = fVar34 * fVar31 + fVar39 * fVar12 + fVar20 * fVar42 + fVar21 * fVar26;
    fStack_c4 = fVar34 * fVar18 + fVar39 * fVar40 + fVar20 * fVar33 + fVar21 * fVar27;
    fStack_c0 = fVar34 * fVar41 + fVar39 * fVar35 + fVar20 * fVar15 + fVar21 * fVar28;
    fStack_bc = fVar34 * fVar24 + fVar39 * fVar24 + fVar20 * fVar24 + fVar21 * fRam0000000146858bdc;
    local_b8 = fVar19 * fVar31 + fVar16 * fVar12 + fVar25 * fVar42 + fRam0000000146858bdc * fVar26;
    fStack_b4 = fVar19 * fVar18 + fVar16 * fVar40 + fVar25 * fVar33 + fRam0000000146858bdc * fVar27;
    fStack_b0 = fVar19 * fVar41 + fVar16 * fVar35 + fVar25 * fVar15 + fRam0000000146858bdc * fVar28;
    fStack_ac = fVar19 * fVar24 + fVar16 * fVar24 + fVar25 * fVar24 +
                fRam0000000146858bdc * fRam0000000146858bdc;
    FMatrix::RemoveScaling(&local_e8);
    fVar43 = (float)(-(uint)(fVar22 <= fVar3 * fVar2) & (_DAT_146858cb0 ^ (uint)fVar43) ^
                    _DAT_146858cb0);
    fVar44 = (float)(-(uint)(fVar23 <= fVar5 * fVar4) & (uRam0000000146858cb4 ^ (uint)fVar44) ^
                    uRam0000000146858cb4);
    fVar45 = (float)(-(uint)(fVar30 <= fVar7 * fVar6) & (uRam0000000146858cb8 ^ (uint)fVar45) ^
                    uRam0000000146858cb8);
    local_e8 = local_e8 * fVar43;
    fStack_e4 = fStack_e4 * fVar43;
    fStack_e0 = fStack_e0 * fVar43;
    fStack_d4 = fStack_d4 * fVar44;
    fStack_d0 = fStack_d0 * fVar44;
    local_d8 = local_d8 * fVar44;
    fStack_c4 = fStack_c4 * fVar45;
    fStack_c0 = fStack_c0 * fVar45;
    local_c8 = local_c8 * fVar45;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar14._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar14._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar14._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar14._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar30 = auVar14._4_4_ + auVar14._0_4_;
    fVar16 = auVar14._8_4_ + auVar14._4_4_;
    fVar19 = auVar14._12_4_ + auVar14._8_4_;
    fVar25 = auVar14._0_4_ + auVar14._12_4_;
    auVar10._4_4_ = fVar16;
    auVar10._0_4_ = fVar30;
    auVar10._8_4_ = fVar19;
    auVar10._12_4_ = fVar25;
    auVar10 = rsqrtps(auVar14,auVar10);
    fVar43 = auVar10._0_4_;
    fVar45 = auVar10._4_4_;
    fVar22 = auVar10._8_4_;
    fVar23 = auVar10._12_4_;
    fVar43 = (_DAT_146858ca0 - fVar43 * fVar43 * fVar30 * _DAT_146858ca0) * fVar43 + fVar43;
    fVar45 = (fRam0000000146858ca4 - fVar45 * fVar45 * fVar16 * fRam0000000146858ca4) * fVar45 +
             fVar45;
    fVar22 = (fRam0000000146858ca8 - fVar22 * fVar22 * fVar19 * fRam0000000146858ca8) * fVar22 +
             fVar22;
    fVar23 = (fRam0000000146858cac - fVar23 * fVar23 * fVar25 * fRam0000000146858cac) * fVar23 +
             fVar23;
    fVar44 = 0.0;
    fVar13 = (float)(((uint)(((_DAT_146858ca0 - fVar43 * fVar43 * fVar30 * _DAT_146858ca0) * fVar43
                             + fVar43) * local_f8) ^ _DAT_146858c90) & -(uint)(1e-08 <= fVar30) ^
                    _DAT_146858c90);
    fVar20 = (float)(((uint)(((fRam0000000146858ca4 -
                              fVar45 * fVar45 * fVar16 * fRam0000000146858ca4) * fVar45 + fVar45) *
                            fStack_f4) ^ uRam0000000146858c94) & -(uint)(1e-08 <= fVar16) ^
                    uRam0000000146858c94);
    fVar17 = (float)(((uint)(((fRam0000000146858ca8 -
                              fVar22 * fVar22 * fVar19 * fRam0000000146858ca8) * fVar22 + fVar22) *
                            fStack_f0) ^ uRam0000000146858c98) & -(uint)(1e-08 <= fVar19) ^
                    uRam0000000146858c98);
    fVar21 = (float)(((uint)(((fRam0000000146858cac -
                              fVar23 * fVar23 * fVar25 * fRam0000000146858cac) * fVar23 + fVar23) *
                            fStack_ec) ^ uRam0000000146858c9c) & -(uint)(1e-08 <= fVar25) ^
                    uRam0000000146858c9c);
    fVar23 = local_b8;
    fVar45 = fStack_b4;
    fVar43 = fStack_b0;
  }
  *(float *)(param_2 + 0x10) = fVar13;
  *(float *)(param_2 + 0x14) = fVar20;
  *(float *)(param_2 + 0x18) = fVar17;
  *(float *)(param_2 + 0x1c) = fVar21;
  *(float *)(param_2 + 0x20) = fVar23;
  *(float *)(param_2 + 0x24) = fVar45;
  *(float *)(param_2 + 0x28) = fVar43;
  *(float *)(param_2 + 0x2c) = fVar44;
  *(float *)(param_2 + 0x30) = fVar3 * fVar2;
  *(float *)(param_2 + 0x34) = fVar5 * fVar4;
  *(float *)(param_2 + 0x38) = fVar7 * fVar6;
  *(float *)(param_2 + 0x3c) = auVar1._12_4_ * fVar8;
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x120) == 0) {
    FUN_1423407b0();
  }
  return;
}



// FUNCTION 14072f200 FUN_14072f200 body=478 status=ok
// SIG undefined FUN_14072f200(void)

void FUN_14072f200(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  int local_7c;
  undefined8 local_28;
  
  lVar10 = (longlong)param_2;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x808) <= param_2)) {
    iVar5 = param_2 + 1;
    plVar1 = (longlong *)(param_1 + 0x800);
    iVar2 = *(int *)(param_1 + 0x808);
    if (iVar2 < iVar5) {
      *(int *)(param_1 + 0x808) = iVar5;
      iVar9 = iVar5 - iVar2;
      if (*(int *)(param_1 + 0x80c) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined1 *)(*plVar1 + (longlong)iVar2 * 0x18);
      if (iVar9 != 0) {
        puVar7 = (undefined8 *)(puVar8 + 4);
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 0x18;
          *puVar7 = DAT_14622e780;
          *(undefined4 *)(puVar7 + 1) = DAT_14622e788;
          *(undefined8 *)((longlong)puVar7 + 0xc) = 0xffffffffffffffff;
          iVar9 = iVar9 + -1;
          puVar7 = puVar7 + 3;
        } while (iVar9 != 0);
      }
    }
    else if ((iVar5 < iVar2) && (iVar5 != iVar2)) {
      *(int *)(param_1 + 0x808) = iVar5;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x800);
  if ((*(char *)(lVar3 + lVar10 * 0x18) == '\0') &&
     (*(undefined1 *)(lVar3 + lVar10 * 0x18) = 1, *(longlong *)(param_1 + 0x6f0) != 0)) {
    FUN_142f88ab0(&local_98);
    local_98 = *(undefined8 *)(param_1 + 0x220);
    local_a0 = *(float *)(param_1 + 0x228);
    lVar4 = *(longlong *)(param_1 + 0x6f0);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x720) == '\0') {
        fVar11 = *(float *)(lVar4 + 0x34);
      }
      else {
        fVar11 = *(float *)(lVar4 + 0x38);
      }
      local_a0 = local_a0 - fVar11 * 0.5;
    }
    local_90 = local_a0;
    local_8c = *(undefined4 *)(lVar4 + 0xc4);
    lVar6 = *(longlong *)(param_1 + 0x120);
    local_88 = *(undefined4 *)(lVar4 + 0x30);
    local_84 = *(float *)(lVar4 + 0x38) * 0.5;
    local_7c = param_2;
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    local_28 = FUN_142f9cfb0(lVar6,0);
    FUN_142f9e4d0(&local_98,lVar3 + 4 + lVar10 * 0x18,lVar3 + 0x10 + lVar10 * 0x18);
  }
  return;
}



// FUNCTION 14072f3e0 FUN_14072f3e0 body=478 status=ok
// SIG undefined FUN_14072f3e0(void)

void FUN_14072f3e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  float local_84;
  int local_7c;
  undefined8 local_28;
  
  lVar10 = (longlong)param_2;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x818) <= param_2)) {
    iVar5 = param_2 + 1;
    plVar1 = (longlong *)(param_1 + 0x810);
    iVar2 = *(int *)(param_1 + 0x818);
    if (iVar2 < iVar5) {
      *(int *)(param_1 + 0x818) = iVar5;
      iVar9 = iVar5 - iVar2;
      if (*(int *)(param_1 + 0x81c) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined1 *)(*plVar1 + (longlong)iVar2 * 0x18);
      if (iVar9 != 0) {
        puVar7 = (undefined8 *)(puVar8 + 4);
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 0x18;
          *puVar7 = DAT_14622e780;
          *(undefined4 *)(puVar7 + 1) = DAT_14622e788;
          *(undefined8 *)((longlong)puVar7 + 0xc) = 0xffffffffffffffff;
          iVar9 = iVar9 + -1;
          puVar7 = puVar7 + 3;
        } while (iVar9 != 0);
      }
    }
    else if ((iVar5 < iVar2) && (iVar5 != iVar2)) {
      *(int *)(param_1 + 0x818) = iVar5;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x810);
  if ((*(char *)(lVar3 + lVar10 * 0x18) == '\0') &&
     (*(undefined1 *)(lVar3 + lVar10 * 0x18) = 1, *(longlong *)(param_1 + 0x6f0) != 0)) {
    FUN_142f88b40(&local_a8);
    local_a8 = *(undefined8 *)(param_1 + 0x220);
    local_b0 = *(float *)(param_1 + 0x228);
    lVar4 = *(longlong *)(param_1 + 0x6f0);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x720) == '\0') {
        fVar11 = *(float *)(lVar4 + 0x34);
      }
      else {
        fVar11 = *(float *)(lVar4 + 0x38);
      }
      local_b0 = local_b0 - fVar11 * 0.5;
    }
    local_a0 = local_b0;
    local_9c = *(undefined4 *)(lVar4 + 0xc4);
    lVar6 = *(longlong *)(param_1 + 0x120);
    local_88 = *(undefined4 *)(lVar4 + 0x30);
    local_84 = *(float *)(lVar4 + 0x38) * 0.5;
    local_7c = param_2;
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    local_28 = FUN_142f9cfb0(lVar6,0);
    FUN_142f9e730(&local_a8,lVar3 + 4 + lVar10 * 0x18,lVar3 + 0x10 + lVar10 * 0x18);
  }
  return;
}



// FUNCTION 14072f5c0 FUN_14072f5c0 body=2625 status=ok
// SIG undefined FUN_14072f5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14072f5c0(float *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar6 = uRam00000001468b5b88;
  uVar5 = _DAT_1468b5b80;
  uVar4 = uRam00000001468b5b78;
  fVar36 = fRam0000000146858bd8;
  fVar32 = fRam0000000146858bd4;
  fVar28 = _DAT_146858bd0;
  lVar1 = *(longlong *)(param_2 + 0x88);
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x6f0), lVar2 == 0)) {
    *(undefined8 *)param_1 = _DAT_1468b5b70;
    *(undefined8 *)(param_1 + 2) = uVar4;
    uVar4 = uRam00000001468b5b98;
    *(undefined8 *)(param_1 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(param_1 + 10) = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar6;
    return param_1;
  }
  fVar16 = *(float *)(lVar1 + 0x210);
  fVar17 = *(float *)(lVar1 + 0x214);
  fVar19 = *(float *)(lVar1 + 0x218);
  fVar20 = *(float *)(lVar1 + 0x21c);
  auVar12 = *(undefined1 (*) [16])(lVar1 + 0x230);
  fVar24 = auVar12._0_4_;
  fVar29 = auVar12._4_4_;
  fVar33 = auVar12._8_4_;
  fVar37 = auVar12._12_4_;
  local_108 = *(float *)(lVar1 + 0x220);
  fStack_104 = *(float *)(lVar1 + 0x224);
  fStack_100 = *(float *)(lVar1 + 0x228);
  fStack_fc = *(float *)(lVar1 + 0x22c);
  if (*param_2 == '\x02') {
    fVar44 = *(float *)(param_2 + 0x7c);
    fVar45 = *(float *)(param_2 + 0x80);
    fVar47 = (float)((uint)_DAT_146858bd0 & _DAT_146858be0);
    fVar48 = (float)((uint)fRam0000000146858bd4 & uRam0000000146858be4);
    fVar49 = (float)((uint)fRam0000000146858bd8 & uRam0000000146858be8);
    fVar50 = (float)((uint)fRam0000000146858bdc & uRam0000000146858bec);
    fVar46 = *(float *)(param_2 + 0x84);
    auVar11._4_4_ = fVar48;
    auVar11._0_4_ = fVar47;
    auVar11._8_4_ = fVar49;
    auVar11._12_4_ = fVar50;
    auVar12 = minps(auVar11,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146858cc4);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146858cc0);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146858cc8);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146858ccc);
    iVar8 = movmskps((int)lVar1,auVar13);
    if (iVar8 == 0) {
      fVar44 = fVar44 * fVar24;
      fVar45 = fVar45 * fVar29;
      fVar46 = fVar46 * fVar33;
      fVar47 = fVar47 * fVar24;
      fVar48 = fVar48 * fVar29;
      fVar49 = fVar49 * fVar33;
      fVar50 = fVar50 * fVar37;
      fVar29 = fRam0000000146858bdc * fVar16 * _DAT_146858c30 + fVar20 * 0.0 +
               fVar17 * 0.0 * _DAT_146858c20 + fVar19 * 0.0 * _DAT_146858c10;
      fVar33 = fVar16 * 0.0 * fRam0000000146858c34 + fVar20 * 0.0 +
               fRam0000000146858bdc * fVar17 * fRam0000000146858c24 +
               fVar19 * 0.0 * fRam0000000146858c14;
      fVar37 = fVar16 * 0.0 * fRam0000000146858c38 + fVar20 * 0.0 +
               fVar17 * 0.0 * fRam0000000146858c28 +
               fRam0000000146858bdc * fVar19 * fRam0000000146858c18;
      fVar21 = fVar16 * 0.0 * fRam0000000146858c3c + fVar20 * fRam0000000146858bdc +
               fVar17 * 0.0 * fRam0000000146858c2c + fVar19 * 0.0 * fRam0000000146858c1c;
      fVar28 = fVar46 * fVar17 - fVar45 * fVar19;
      fVar32 = fVar44 * fVar19 - fVar46 * fVar16;
      fVar36 = fVar45 * fVar16 - fVar44 * fVar17;
      fVar28 = fVar28 + fVar28;
      fVar32 = fVar32 + fVar32;
      fVar36 = fVar36 + fVar36;
      local_b8 = (fVar36 * fVar17 - fVar32 * fVar19) + fVar28 * fVar20 + fVar44 + local_108;
      fStack_b4 = (fVar28 * fVar19 - fVar36 * fVar16) + fVar32 * fVar20 + fVar45 + fStack_104;
      fStack_b0 = (fVar32 * fVar16 - fVar28 * fVar17) + fVar36 * fVar20 + fVar46 + fStack_100;
      goto LAB_14072ff11;
    }
    fVar21 = fVar17 + fVar17;
    fVar23 = fVar19 + fVar19;
    fVar25 = (fVar16 + fVar16) * fVar16;
    fVar22 = (fVar16 + fVar16) * fVar20;
    fVar41 = (fVar23 * fVar20 + fVar21 * fVar16) * fVar24;
    fVar42 = (fVar22 + fVar23 * fVar17) * fVar29;
    fVar43 = (fVar21 * fVar20 + fVar23 * fVar16) * fVar33;
    fVar26 = fVar29 * (fVar21 * fVar16 - fVar23 * fVar20);
    fVar30 = fVar33 * (fVar23 * fVar17 - fVar22);
    fVar34 = fVar24 * (fVar23 * fVar16 - fVar21 * fVar20);
    fVar16 = (float)((uint)((_DAT_146858bd0 - (fVar23 * fVar19 + fVar21 * fVar17)) * fVar24) &
                    _DAT_146858be0);
    fVar19 = (float)((uint)((fRam0000000146858bd4 - (fVar23 * fVar19 + fVar25)) * fVar29) &
                    uRam0000000146858be4);
    fVar21 = (float)((uint)((fRam0000000146858bd8 - (fVar21 * fVar17 + fVar25)) * fVar33) &
                    uRam0000000146858be8);
    fVar23 = (float)((uint)((fRam0000000146858bdc - (fVar25 + fVar25)) * fVar37) &
                    uRam0000000146858bec);
    fVar38 = (fRam0000000146858bdc * 0.0 + 0.0) * fVar47;
    fVar39 = (fRam0000000146858bdc * 0.0 + 0.0) * fVar48;
    fVar40 = (fRam0000000146858bdc * 0.0 + 0.0) * fVar49;
    fVar27 = fVar48 * (0.0 - fRam0000000146858bdc * 0.0);
    fVar31 = fVar49 * (0.0 - fRam0000000146858bdc * 0.0);
    fVar35 = fVar47 * (0.0 - fRam0000000146858bdc * 0.0);
    fVar17 = (float)((uint)((_DAT_146858bd0 - 0.0) * fVar47) & _DAT_146858be0);
    fVar20 = (float)((uint)((fRam0000000146858bd4 - 0.0) * fVar48) & uRam0000000146858be4);
    fVar22 = (float)((uint)((fRam0000000146858bd8 - 0.0) * fVar49) & uRam0000000146858be8);
    fVar25 = (float)((uint)((fRam0000000146858bdc - 0.0) * fVar50) & uRam0000000146858bec);
    local_e8 = fVar38 * fVar26 + fVar17 * fVar16 + fVar35 * fVar43 + fVar25 * local_108;
    fStack_e4 = fVar38 * fVar19 + fVar17 * fVar41 + fVar35 * fVar30 + fVar25 * fStack_104;
    fStack_e0 = fVar38 * fVar42 + fVar17 * fVar34 + fVar35 * fVar21 + fVar25 * fStack_100;
    fStack_dc = fVar38 * fVar23 + fVar17 * fVar23 + fVar35 * fVar23 + fVar25 * fRam0000000146858bdc;
    local_d8 = fVar20 * fVar26 + fVar27 * fVar16 + fVar39 * fVar43 + fVar25 * local_108;
    fStack_d4 = fVar20 * fVar19 + fVar27 * fVar41 + fVar39 * fVar30 + fVar25 * fStack_104;
    fStack_d0 = fVar20 * fVar42 + fVar27 * fVar34 + fVar39 * fVar21 + fVar25 * fStack_100;
    fStack_cc = fVar20 * fVar23 + fVar27 * fVar23 + fVar39 * fVar23 + fVar25 * fRam0000000146858bdc;
    local_c8 = fVar31 * fVar26 + fVar40 * fVar16 + fVar22 * fVar43 + fVar25 * local_108;
    fStack_c4 = fVar31 * fVar19 + fVar40 * fVar41 + fVar22 * fVar30 + fVar25 * fStack_104;
    fStack_c0 = fVar31 * fVar42 + fVar40 * fVar34 + fVar22 * fVar21 + fVar25 * fStack_100;
    fStack_bc = fVar31 * fVar23 + fVar40 * fVar23 + fVar22 * fVar23 + fVar25 * fRam0000000146858bdc;
    local_b8 = fVar45 * fVar26 + fVar44 * fVar16 + fVar46 * fVar43 +
               fRam0000000146858bdc * local_108;
    fStack_b4 = fVar45 * fVar19 + fVar44 * fVar41 + fVar46 * fVar30 +
                fRam0000000146858bdc * fStack_104;
    fStack_b0 = fVar45 * fVar42 + fVar44 * fVar34 + fVar46 * fVar21 +
                fRam0000000146858bdc * fStack_100;
    fStack_ac = fVar45 * fVar23 + fVar44 * fVar23 + fVar46 * fVar23 +
                fRam0000000146858bdc * fRam0000000146858bdc;
    FMatrix::RemoveScaling(&local_e8);
    auVar10._0_4_ = _DAT_146858cb0 ^ (uint)fVar28;
    auVar10._4_4_ = uRam0000000146858cb4 ^ (uint)fVar32;
    auVar10._8_4_ = uRam0000000146858cb8 ^ (uint)fVar36;
  }
  else {
    if (*(char *)(lVar1 + 0x720) == '\0') {
      cVar7 = param_2[0x90];
    }
    else if (*(float *)(param_2 + 0x80) <= 0.0 && *(float *)(param_2 + 0x80) != 0.0) {
      cVar7 = param_2[0x92];
    }
    else {
      cVar7 = param_2[0x91];
    }
    fVar28 = *(float *)(lVar2 + 0x30) * 0.5 - *(float *)(param_2 + 0xa0);
    if (cVar7 == '\0') {
      local_114 = 0;
    }
    else {
      local_114 = 0x43340000;
    }
    local_118 = 0;
    local_110 = 0;
    uVar9 = FRotator::Quaternion(&local_118,&local_f8);
    fVar44 = fRam0000000146858bd8;
    fVar36 = fRam0000000146858bd4;
    fVar32 = _DAT_146858bd0;
    fVar49 = DAT_1464aa790;
    fVar48 = DAT_1464aa788._4_4_;
    fVar47 = (float)DAT_1464aa788;
    fVar50 = 0.0;
    auVar14._4_4_ = DAT_1464aa788._4_4_;
    auVar14._0_4_ = (float)DAT_1464aa788;
    auVar14._8_4_ = DAT_1464aa790;
    auVar14._12_4_ = 0;
    auVar12 = minps(auVar14,auVar12);
    auVar15._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146858cc4);
    auVar15._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146858cc0);
    auVar15._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146858cc8);
    auVar15._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146858ccc);
    iVar8 = movmskps(uVar9,auVar15);
    if (iVar8 == 0) {
      fVar28 = fVar24 * fVar28;
      fVar44 = fVar29 * 0.0;
      fVar45 = fVar33 * 0.0;
      fVar47 = fVar24 * (float)DAT_1464aa788;
      fVar48 = fVar29 * DAT_1464aa788._4_4_;
      fVar49 = fVar33 * DAT_1464aa790;
      fVar50 = fVar37 * 0.0;
      fVar29 = fVar16 * fStack_ec * _DAT_146858c30 + local_f8 * fVar20 +
               fVar17 * fStack_f0 * _DAT_146858c20 + fVar19 * fStack_f4 * _DAT_146858c10;
      fVar33 = fVar16 * fStack_f0 * fRam0000000146858c34 + fStack_f4 * fVar20 +
               fVar17 * fStack_ec * fRam0000000146858c24 + fVar19 * local_f8 * fRam0000000146858c14;
      fVar37 = fVar16 * fStack_f4 * fRam0000000146858c38 + fStack_f0 * fVar20 +
               fVar17 * local_f8 * fRam0000000146858c28 + fVar19 * fStack_ec * fRam0000000146858c18;
      fVar21 = fVar16 * local_f8 * fRam0000000146858c3c + fStack_ec * fVar20 +
               fVar17 * fStack_f4 * fRam0000000146858c2c + fVar19 * fStack_f0 * fRam0000000146858c1c
      ;
      fVar32 = fVar45 * fVar17 - fVar44 * fVar19;
      fVar36 = fVar28 * fVar19 - fVar45 * fVar16;
      fVar24 = fVar44 * fVar16 - fVar28 * fVar17;
      fVar32 = fVar32 + fVar32;
      fVar36 = fVar36 + fVar36;
      fVar24 = fVar24 + fVar24;
      local_b8 = (fVar24 * fVar17 - fVar36 * fVar19) + fVar20 * fVar32 + fVar28 + local_108;
      fStack_b4 = (fVar32 * fVar19 - fVar24 * fVar16) + fVar20 * fVar36 + fVar44 + fStack_104;
      fStack_b0 = (fVar36 * fVar16 - fVar32 * fVar17) + fVar20 * fVar24 + fVar45 + fStack_100;
      goto LAB_14072ff11;
    }
    fVar45 = fVar17 + fVar17;
    fVar46 = fVar19 + fVar19;
    fVar22 = (fVar16 + fVar16) * fVar16;
    fVar21 = (fVar16 + fVar16) * fVar20;
    fVar23 = fVar29 * (fVar45 * fVar16 - fVar46 * fVar20);
    fVar26 = fVar33 * (fVar46 * fVar17 - fVar21);
    fVar30 = fVar24 * (fVar46 * fVar16 - fVar45 * fVar20);
    fVar39 = (fVar45 * fVar16 + fVar46 * fVar20) * fVar24;
    fVar40 = (fVar46 * fVar17 + fVar21) * fVar29;
    fVar41 = (fVar46 * fVar16 + fVar45 * fVar20) * fVar33;
    fVar16 = (float)((uint)((_DAT_146858bd0 - (fVar46 * fVar19 + fVar45 * fVar17)) * fVar24) &
                    _DAT_146858be0);
    fVar19 = (float)((uint)((fRam0000000146858bd4 - (fVar46 * fVar19 + fVar22)) * fVar29) &
                    uRam0000000146858be4);
    fVar21 = (float)((uint)((fRam0000000146858bd8 - (fVar45 * fVar17 + fVar22)) * fVar33) &
                    uRam0000000146858be8);
    fVar46 = (float)((uint)((fRam0000000146858bdc - (fVar22 + fVar22)) * fVar37) &
                    uRam0000000146858bec);
    fStack_fc = fRam0000000146858bdc;
    fVar20 = fStack_f4 + fStack_f4;
    fVar45 = fStack_f0 + fStack_f0;
    fVar22 = local_f8 * (local_f8 + local_f8);
    fVar17 = fStack_ec * (local_f8 + local_f8);
    fVar34 = (fStack_ec * fVar45 + local_f8 * fVar20) * (float)DAT_1464aa788;
    fVar35 = (fVar17 + fStack_f4 * fVar45) * DAT_1464aa788._4_4_;
    fVar38 = (fStack_ec * fVar20 + local_f8 * fVar45) * DAT_1464aa790;
    fVar25 = DAT_1464aa788._4_4_ * (local_f8 * fVar20 - fStack_ec * fVar45);
    fVar27 = DAT_1464aa790 * (fStack_f4 * fVar45 - fVar17);
    fVar31 = (float)DAT_1464aa788 * (local_f8 * fVar45 - fStack_ec * fVar20);
    fVar17 = (float)((uint)((_DAT_146858bd0 - (fStack_f0 * fVar45 + fStack_f4 * fVar20)) *
                           (float)DAT_1464aa788) & _DAT_146858be0);
    fVar45 = (float)((uint)((fRam0000000146858bd4 - (fStack_f0 * fVar45 + fVar22)) *
                           DAT_1464aa788._4_4_) & uRam0000000146858be4);
    fVar20 = (float)((uint)((fRam0000000146858bd8 - (fStack_f4 * fVar20 + fVar22)) * DAT_1464aa790)
                    & uRam0000000146858be8);
    fVar22 = (float)((uint)((fRam0000000146858bdc - (fVar22 + fVar22)) * 0.0) & uRam0000000146858bec
                    );
    local_e8 = fVar34 * fVar23 + fVar17 * fVar16 + fVar31 * fVar41 + fVar22 * local_108;
    fStack_e4 = fVar34 * fVar19 + fVar17 * fVar39 + fVar31 * fVar26 + fVar22 * fStack_104;
    fStack_e0 = fVar34 * fVar40 + fVar17 * fVar30 + fVar31 * fVar21 + fVar22 * fStack_100;
    fStack_dc = fVar34 * fVar46 + fVar17 * fVar46 + fVar31 * fVar46 + fVar22 * fRam0000000146858bdc;
    local_d8 = fVar45 * fVar23 + fVar25 * fVar16 + fVar35 * fVar41 + fVar22 * local_108;
    fStack_d4 = fVar45 * fVar19 + fVar25 * fVar39 + fVar35 * fVar26 + fVar22 * fStack_104;
    fStack_d0 = fVar45 * fVar40 + fVar25 * fVar30 + fVar35 * fVar21 + fVar22 * fStack_100;
    fStack_cc = fVar45 * fVar46 + fVar25 * fVar46 + fVar35 * fVar46 + fVar22 * fRam0000000146858bdc;
    local_c8 = fVar27 * fVar23 + fVar38 * fVar16 + fVar20 * fVar41 + fVar22 * local_108;
    fStack_c4 = fVar27 * fVar19 + fVar38 * fVar39 + fVar20 * fVar26 + fVar22 * fStack_104;
    fStack_c0 = fVar27 * fVar40 + fVar38 * fVar30 + fVar20 * fVar21 + fVar22 * fStack_100;
    fStack_bc = fVar27 * fVar46 + fVar38 * fVar46 + fVar20 * fVar46 + fVar22 * fRam0000000146858bdc;
    local_b8 = fVar23 * 0.0 + fVar28 * fVar16 + fVar41 * 0.0 + fRam0000000146858bdc * local_108;
    fStack_b4 = fVar19 * 0.0 + fVar28 * fVar39 + fVar26 * 0.0 + fRam0000000146858bdc * fStack_104;
    fStack_b0 = fVar40 * 0.0 + fVar28 * fVar30 + fVar21 * 0.0 + fRam0000000146858bdc * fStack_100;
    fStack_ac = fVar46 * 0.0 + fVar28 * fVar46 + fVar46 * 0.0 +
                fRam0000000146858bdc * fRam0000000146858bdc;
    FMatrix::RemoveScaling(&local_e8);
    auVar10._0_4_ = _DAT_146858cb0 ^ (uint)fVar32;
    auVar10._4_4_ = uRam0000000146858cb4 ^ (uint)fVar36;
    auVar10._8_4_ = uRam0000000146858cb8 ^ (uint)fVar44;
  }
  fVar50 = fVar37 * fVar50;
  fVar49 = fVar33 * fVar49;
  fVar48 = fVar29 * fVar48;
  fVar47 = fVar24 * fVar47;
  fVar28 = (float)(-(uint)(_DAT_146858cc0 <= fVar47) & auVar10._0_4_ ^ _DAT_146858cb0);
  fVar32 = (float)(-(uint)(fRam0000000146858cc4 <= fVar48) & auVar10._4_4_ ^ uRam0000000146858cb4);
  fVar36 = (float)(-(uint)(fRam0000000146858cc8 <= fVar49) & auVar10._8_4_ ^ uRam0000000146858cb8);
  local_e8 = local_e8 * fVar28;
  fStack_e4 = fStack_e4 * fVar28;
  fStack_e0 = fStack_e0 * fVar28;
  fStack_d4 = fStack_d4 * fVar32;
  fStack_d0 = fStack_d0 * fVar32;
  local_d8 = local_d8 * fVar32;
  fStack_c4 = fStack_c4 * fVar36;
  fStack_c0 = fStack_c0 * fVar36;
  local_c8 = local_c8 * fVar36;
  FQuat::FQuat(&local_108,&local_e8);
  auVar18._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
  auVar18._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
  auVar18._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
  auVar18._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
  fVar29 = auVar18._4_4_ + auVar18._0_4_;
  fVar33 = auVar18._8_4_ + auVar18._4_4_;
  fVar37 = auVar18._12_4_ + auVar18._8_4_;
  fVar16 = auVar18._0_4_ + auVar18._12_4_;
  auVar12._4_4_ = fVar33;
  auVar12._0_4_ = fVar29;
  auVar12._8_4_ = fVar37;
  auVar12._12_4_ = fVar16;
  auVar12 = rsqrtps(auVar18,auVar12);
  fVar28 = auVar12._0_4_;
  fVar32 = auVar12._4_4_;
  fVar36 = auVar12._8_4_;
  fVar24 = auVar12._12_4_;
  fVar28 = (_DAT_146858ca0 - fVar28 * fVar28 * fVar29 * _DAT_146858ca0) * fVar28 + fVar28;
  fVar32 = (fRam0000000146858ca4 - fVar32 * fVar32 * fVar33 * fRam0000000146858ca4) * fVar32 +
           fVar32;
  fVar36 = (fRam0000000146858ca8 - fVar36 * fVar36 * fVar37 * fRam0000000146858ca8) * fVar36 +
           fVar36;
  fVar24 = (fRam0000000146858cac - fVar24 * fVar24 * fVar16 * fRam0000000146858cac) * fVar24 +
           fVar24;
  fVar29 = (float)(((uint)(((_DAT_146858ca0 - fVar28 * fVar28 * fVar29 * _DAT_146858ca0) * fVar28 +
                           fVar28) * local_108) ^ _DAT_146858c90) & -(uint)(1e-08 <= fVar29) ^
                  _DAT_146858c90);
  fVar33 = (float)(((uint)(((fRam0000000146858ca4 - fVar32 * fVar32 * fVar33 * fRam0000000146858ca4)
                            * fVar32 + fVar32) * fStack_104) ^ uRam0000000146858c94) &
                   -(uint)(1e-08 <= fVar33) ^ uRam0000000146858c94);
  fVar37 = (float)(((uint)(((fRam0000000146858ca8 - fVar36 * fVar36 * fVar37 * fRam0000000146858ca8)
                            * fVar36 + fVar36) * fStack_100) ^ uRam0000000146858c98) &
                   -(uint)(1e-08 <= fVar37) ^ uRam0000000146858c98);
  fVar21 = (float)(((uint)(((fRam0000000146858cac - fVar24 * fVar24 * fVar16 * fRam0000000146858cac)
                            * fVar24 + fVar24) * fStack_fc) ^ uRam0000000146858c9c) &
                   -(uint)(1e-08 <= fVar16) ^ uRam0000000146858c9c);
LAB_14072ff11:
  if (*(char *)(*(longlong *)(param_2 + 0x88) + 0x720) == '\x01') {
    fVar28 = *(float *)(lVar2 + 0x38);
  }
  else {
    fVar28 = *(float *)(lVar2 + 0x34);
  }
  fVar32 = *(float *)(param_2 + 0xa4);
  *param_1 = fVar29;
  param_1[1] = fVar33;
  param_1[2] = fVar37;
  param_1[3] = fVar21;
  param_1[8] = fVar47;
  param_1[9] = fVar48;
  param_1[10] = fVar49;
  param_1[0xb] = fVar50;
  auVar3._4_4_ = fStack_b4;
  auVar3._0_4_ = local_b8;
  auVar3._8_4_ = (fVar32 - fVar28 * 0.5) + fStack_b0;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 4) = auVar3;
  return param_1;
}



// FUNCTION 140730010 FUN_140730010 body=1175 status=ok
// SIG undefined FUN_140730010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140730010(longlong param_1,longlong param_2,undefined8 param_3,char *param_4,
                      longlong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  void *_Src;
  undefined8 uVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  longlong local_328;
  ulonglong local_320;
  int local_318 [2];
  float local_310;
  float local_30c;
  float local_308;
  undefined1 local_300 [8];
  longlong *local_2f8;
  ulonglong *local_2f0;
  undefined1 local_2e8 [288];
  float local_1c8;
  char local_1c4;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_180;
  undefined4 local_178;
  undefined1 local_168 [64];
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118 [64];
  longlong local_d8;
  undefined1 local_c8 [64];
  longlong local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_320 = local_320 & 0xffffffff00000000;
  if (((param_2 == 0) || (*(longlong *)(param_1 + 0x588) == 0)) ||
     (*(longlong *)(param_1 + 0x590) == 0)) {
    param_5 = 0;
  }
  else {
    lVar5 = FUN_14075eaf0();
    local_328 = 0;
    lVar10 = lVar5 + 0x48;
    if (lVar5 == 0) {
      lVar10 = 0;
    }
    FUN_140778ce0(&local_310,*(undefined8 *)(param_1 + 0x118),param_3,0);
    if (((local_310 == (float)DAT_14622e780) && (local_30c == DAT_14622e780._4_4_)) &&
       (local_308 == DAT_14622e788)) {
      bVar3 = false;
      _Src = (void *)FUN_14073a800(param_2,local_118);
      bVar2 = false;
      bVar1 = true;
    }
    else {
      bVar3 = true;
      _Src = (void *)FUN_14073a8a0(param_2,local_c8,&local_310);
      bVar2 = true;
      bVar1 = false;
    }
    local_128 = 0;
    if (*(longlong *)((longlong)_Src + 0x40) == 0) {
      _guard_xfg_dispatch_icall_nop(local_168,_Src,0x40);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    local_128 = *(longlong *)((longlong)_Src + 0x40);
    *(undefined8 *)((longlong)_Src + 0x40) = 0;
    local_120 = *(undefined4 *)((longlong)_Src + 0x48);
    local_11c = *(undefined4 *)((longlong)_Src + 0x4c);
    *(undefined8 *)((longlong)_Src + 0x48) = 0;
    if ((bVar1) && (local_d8 != 0)) {
      FMemory::Free();
    }
    if ((bVar2) && (local_88 != 0)) {
      FMemory::Free();
    }
    plVar9 = *(longlong **)(param_1 + 0x640);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 0x55) {
      if (*plVar9 == param_5) {
        if ((plVar9 != (longlong *)0x0) &&
           (cVar4 = FUN_140731df0(param_1,plVar9,local_168,lVar10), cVar4 != '\0'))
        goto LAB_140730460;
        break;
      }
    }
    local_1c0 = 0;
    local_1c8 = 0.0;
    local_1b8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_18c = 0;
    local_180 = 0;
    local_178 = 0;
    local_1c4 = '\0';
    local_190 = 0xffffffff;
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(&local_1c0,*(undefined4 *)(param_1 + 0x648));
    local_328 = 0;
    plVar9 = *(longlong **)(param_1 + 0x640);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 0x55) {
      cVar4 = FUN_140731df0(param_1,plVar9,local_168,lVar10);
      if (cVar4 != '\0') {
        if (plVar9[0x54] == 0) {
          local_320 = *(ulonglong *)(*(longlong *)(param_1 + 0x590) + 0x568);
          fVar11 = (float)FUN_142de77e0(plVar9 + 1,*(undefined8 *)(param_1 + 0x588),0,&local_320);
          local_320 = CONCAT44(local_320._4_4_,fVar11);
          if ((1e-08 < fVar11) || (local_1c4 != '\0')) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(&local_1c0,local_318,*plVar9);
            if (local_318[0] == -1) {
              lVar5 = 0;
            }
            else {
              lVar5 = local_1c0 + (longlong)local_318[0] * 0x18;
            }
            pfVar7 = (float *)(lVar5 + 8);
            if (lVar5 == 0) {
              pfVar7 = (float *)0x0;
            }
            if (pfVar7 != (float *)0x0) {
              local_1c8 = local_1c8 - *pfVar7;
            }
            local_1c8 = local_1c8 + fVar11;
            local_2f0 = &local_320;
            local_2f8 = plVar9;
            TSet<TTuple<FFlareResourceDescription_*,float>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,float,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,float_const_&>_>
                      (&local_1c0,local_300,&local_2f8,0);
          }
        }
        else {
          cVar4 = FUN_142c48f90(plVar9[0x54],*(undefined8 *)(param_1 + 0x118));
          if (cVar4 != '\0') {
            local_328 = *plVar9;
            param_5 = local_328;
            if (local_328 != 0) goto LAB_14073042b;
            break;
          }
        }
      }
    }
    cVar4 = FUN_1407436b0(&local_1c8,&local_328,0xbf800000);
    param_5 = local_328;
    if (((cVar4 == '\0') && (bVar3)) && (*param_4 == '\0')) {
      uVar6 = FUN_140726c10(local_2e8,param_4);
      local_338 = 0;
      param_5 = FUN_140730010(param_1,param_2,0,uVar6);
    }
LAB_14073042b:
    local_178 = 0;
    if (local_180 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1c0);
LAB_140730460:
    if (local_128 != 0) {
      FMemory::Free();
    }
  }
  return param_5;
}



// FUNCTION 1407304b0 FUN_1407304b0 body=989 status=ok
// SIG undefined FUN_1407304b0(void)

void FUN_1407304b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  
  lVar1 = *(longlong *)(param_3 + 0x168);
  if (lVar1 == 0) {
    local_b0 = DAT_1468b5d98;
    local_b8._0_4_ = DAT_1468b5d90;
    local_b8._4_4_ = DAT_1468b5d94;
  }
  else {
    local_b0 = *(float *)(lVar1 + 0x228);
    local_b8._0_4_ = *(float *)(lVar1 + 0x220);
    local_b8._4_4_ = *(float *)(lVar1 + 0x224);
  }
  fVar12 = local_b0;
  fVar8 = local_b8._4_4_;
  fVar10 = (float)local_b8;
  lVar2 = *(longlong *)(param_2 + 0x168);
  if (lVar2 == 0) {
    local_b0 = DAT_1468b5d98;
    local_b8._0_4_ = DAT_1468b5d90;
    local_b8._4_4_ = DAT_1468b5d94;
  }
  else {
    local_b0 = *(float *)(lVar2 + 0x228);
    local_b8._0_4_ = *(float *)(lVar2 + 0x220);
    local_b8._4_4_ = *(float *)(lVar2 + 0x224);
  }
  fVar10 = (float)local_b8 - fVar10;
  fVar8 = local_b8._4_4_ - fVar8;
  fVar12 = local_b0 - fVar12;
  fVar4 = fVar8 * fVar8 + fVar10 * fVar10 + fVar12 * fVar12;
  fVar9 = fVar8;
  fVar11 = fVar10;
  fVar5 = fVar12;
  if ((fVar4 != 1.0) &&
     (fVar9 = DAT_1468b5d94, fVar11 = DAT_1468b5d90, fVar5 = DAT_1468b5d98, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar7._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar9 = fVar8 * fVar5;
    fVar11 = fVar10 * fVar5;
    fVar5 = fVar12 * fVar5;
  }
  if (lVar1 == 0) {
    local_b0 = (float)DAT_1464aa7b0;
    puVar3 = &local_b8;
    local_b8 = DAT_1464aa7a8;
  }
  else {
    puVar3 = (undefined8 *)FUN_142369f10(lVar1,&local_b8);
  }
  local_b8 = *puVar3;
  local_b0 = *(float *)(puVar3 + 1);
  fVar10 = (float)((ulonglong)local_b8 >> 0x20);
  fVar12 = fVar10 * fVar5 - local_b0 * fVar9;
  fVar4 = local_b0 * fVar11 - (float)local_b8 * fVar5;
  local_c0 = (float)local_b8 * fVar9 - fVar10 * fVar11;
  fVar8 = fVar4 * fVar4 + fVar12 * fVar12 + local_c0 * local_c0;
  if (fVar8 != 1.0) {
    if (fVar8 < 1e-08) {
      local_c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_c0 = DAT_1468b5d98;
      goto LAB_140730800;
    }
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar12 * fVar6;
    fVar4 = fVar4 * fVar6;
    local_c0 = local_c0 * fVar6;
  }
  local_c8 = CONCAT44(fVar4,fVar12);
LAB_140730800:
  *param_4 = local_c8;
  *(float *)(param_4 + 1) = local_c0;
  fVar8 = (float)local_b8 * fVar11 + fVar10 * fVar9 + local_b0 * fVar5;
  fVar10 = -1.0;
  if ((-1.0 <= fVar8) && (fVar10 = fVar8, 1.0 <= fVar8)) {
    fVar10 = 1.0;
  }
  fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
  *param_5 = fVar10;
  return;
}



// FUNCTION 140730890 FUN_140730890 body=159 status=ok
// SIG undefined FUN_140730890(void)

ulonglong FUN_140730890(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  
  plVar2 = (longlong *)UBTAuxiliaryNode::GetMyNode();
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = UBTTask_GameplayTaskBase::StaticClass();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      local_res20[0] = 0;
      uVar4 = (**(code **)(*plVar2 + 0x2f8))
                        (plVar2,param_2,
                         ((ulonglong)*(ushort *)((longlong)plVar2 + 0x52) -
                         (ulonglong)*(ushort *)(param_1 + 0x52)) + param_3,local_res20);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140730980 thunk_FUN_140730990 body=8 status=ok
// SIG undefined thunk_FUN_140730990(void)

void thunk_FUN_140730990(undefined8 param_1,undefined8 param_2)

{
  FUN_140730990(param_1,param_2,1);
  return;
}



// FUNCTION 140730990 FUN_140730990 body=292 status=ok
// SIG undefined FUN_140730990(void)

undefined8 FUN_140730990(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x7f8);
  lVar8 = 0;
  if ((lVar6 != 0) && (lVar6 != param_2)) {
    iVar2 = *(int *)(lVar6 + 0xc);
    lVar6 = lVar8;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar5 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      return 0;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x7f0);
  if ((lVar6 != 0) && (lVar6 != param_2)) {
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar5 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar5;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
      return 0;
    }
  }
  if (param_3 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x728);
    plVar1 = plVar7 + *(int *)(param_1 + 0x730);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if ((*plVar7 != 0) && (cVar3 = FUN_140730990(*plVar7,param_2,0), cVar3 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140730ac0 FUN_140730ac0 body=844 status=ok
// SIG undefined FUN_140730ac0(void)

bool FUN_140730ac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_240 [128];
  undefined1 local_1c0;
  undefined1 local_1b8 [128];
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_110 [128];
  undefined1 local_90;
  undefined1 local_88 [128];
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  if ((((lVar6 != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
      (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x178) != 0)) {
    switch(*(undefined1 *)(param_1 + 0x38)) {
    case 0:
      return true;
    case 1:
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x1b8);
      BVar4 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar4 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      cVar3 = *(char *)(lVar6 + 0x1b1);
      LeaveCriticalSection(lpCriticalSection);
      if ((cVar3 == '\x01') || (*(char *)(*(longlong *)(param_1 + 0x60) + 0x1b0) == '\a')) {
        lVar6 = *(longlong *)(param_1 + 0x60);
        local_138 = *(undefined8 *)(lVar6 + 0x310);
        local_130 = *(longlong *)(lVar6 + 0x318);
        local_128 = *(undefined8 *)(lVar6 + 800);
        local_120 = *(undefined1 *)(lVar6 + 0x328);
        local_11f = *(undefined1 *)(lVar6 + 0x329);
        local_11c = *(undefined4 *)(lVar6 + 0x32c);
        local_118 = *(undefined1 *)(lVar6 + 0x330);
        FUN_142de2b80(local_110,lVar6 + 0x338);
        local_90 = *(undefined1 *)(lVar6 + 0x3b8);
        FUN_142de2b80(local_88,lVar6 + 0x3c0);
        if (local_130 == 0) {
          lVar6 = *(longlong *)(param_1 + 0x60);
          lVar7 = *(longlong *)(lVar6 + 0x1e8);
          FUN_142de2b80(local_240,lVar6 + 0x208);
          local_1c0 = *(undefined1 *)(lVar6 + 0x288);
          FUN_142de2b80(local_1b8,lVar6 + 0x290);
          local_130 = lVar7;
          if (local_130 == 0) {
            return true;
          }
        }
        if (*(longlong *)(local_130 + 0x38) != 0) {
          plVar5 = *(longlong **)(param_1 + 0x48);
          plVar1 = plVar5 + *(int *)(param_1 + 0x50);
          while( true ) {
            if (plVar5 == plVar1) {
              return false;
            }
            if (*plVar5 == *(longlong *)(local_130 + 0x38)) break;
            plVar5 = plVar5 + 1;
          }
        }
      }
      return true;
    case 2:
      if ((*(char *)(lVar6 + 0x1b0) != '\a') && (*(char *)(lVar6 + 0x571) == '\0')) {
        return true;
      }
      break;
    case 4:
    case 6:
      uVar2 = FUN_140730e30(param_1);
      return (bool)uVar2;
    case 5:
      if (*(char *)(lVar6 + 0x1b0) == '\a') {
        return true;
      }
      if (*(char *)(lVar6 + 0x571) != '\x02') {
        return true;
      }
      return false;
    case 7:
      if ((*(int *)(lVar6 + 0x578) != 0) || (*(int *)(lVar6 + 0x57c) != 0)) {
        cVar3 = FUN_140731750(lVar6,lVar6 + 0x1e0,1);
        return cVar3 != '\0';
      }
      break;
    case 8:
      lVar7 = *(longlong *)(lVar6 + 0x318);
      FUN_142de2b80(local_240,lVar6 + 0x338,param_3,param_4,*(undefined8 *)(lVar6 + 0x310),lVar7,
                    *(undefined8 *)(lVar6 + 800),*(undefined1 *)(lVar6 + 0x328),
                    *(undefined1 *)(lVar6 + 0x330));
      local_1c0 = *(undefined1 *)(lVar6 + 0x3b8);
      FUN_142de2b80(local_1b8,lVar6 + 0x3c0);
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = *(longlong *)(lVar7 + 0x38);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x1b0) == '\a') ||
         (*(char *)(*(longlong *)(param_1 + 0x60) + 0x571) != '\0')) {
        plVar5 = *(longlong **)(param_1 + 0x48);
        plVar1 = plVar5 + *(int *)(param_1 + 0x50);
        for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == lVar6) {
            return true;
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 140730e30 FUN_140730e30 body=229 status=ok
// SIG undefined FUN_140730e30(void)

ulonglong FUN_140730e30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined1 local_110 [128];
  undefined1 local_90;
  undefined1 local_88 [128];
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((*(char *)(lVar1 + 0x1b0) != '\a') && (*(char *)(lVar1 + 0x571) == '\x02')) {
    uVar2 = *(ulonglong *)(lVar1 + 0x318);
    FUN_142de2b80(local_110,lVar1 + 0x338,param_3,param_4,*(undefined8 *)(lVar1 + 0x310),uVar2,
                  *(undefined8 *)(lVar1 + 800),*(undefined1 *)(lVar1 + 0x328),
                  *(undefined1 *)(lVar1 + 0x330));
    local_90 = *(undefined1 *)(lVar1 + 0x3b8);
    FUN_142de2b80(local_88,lVar1 + 0x3c0);
    in_RAX = *(ulonglong *)(param_1 + 0x40);
    if (uVar2 == in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140730f20 FUN_140730f20 body=32 status=ok
// SIG undefined FUN_140730f20(void)

bool FUN_140730f20(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\a') {
    return false;
  }
  if (*(char *)(param_1 + 0x570) == '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x1b0) == '\x03';
}



// FUNCTION 140730f40 FUN_140730f40 body=183 status=ok
// SIG undefined FUN_140730f40(void)

undefined8 FUN_140730f40(longlong *param_1,longlong param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 != (uint *)0x0) {
    if (*param_3 != 0) {
      if (((char)param_1[0x1d] != '\0') && (param_3[1] <= *param_3)) {
        return 0;
      }
      if ((((char)param_1[0x2e] != '\0') && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0))
         && ((float)param_3[2] <= *(float *)(lVar2 + 0x790) - (float)param_3[3])) {
        return 0;
      }
    }
    if (((char)param_1[0x31] != '\0') && (param_1[0x2f] != 0)) {
      cVar1 = FUN_142c48f60(param_1[0x2f],*(undefined8 *)(param_2 + 0x188),0);
      bVar3 = cVar1 != (char)param_1[0x30];
      *(bool *)(param_3 + 4) = bVar3;
      if (!bVar3) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140731000 FUN_140731000 body=892 status=ok
// SIG undefined FUN_140731000(void)

undefined8 FUN_140731000(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_98;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  
  if ((((((*(longlong *)(param_2 + 10) == 0) || (*(longlong *)(param_2 + 0xc) == 0)) ||
        (*param_2 <= -(float)DAT_14622e780)) ||
       (((float)DAT_14622e780 <= *param_2 || (param_2[1] <= -DAT_14622e780._4_4_)))) ||
      ((DAT_14622e780._4_4_ <= param_2[1] ||
       ((param_2[2] <= -DAT_14622e788 || (DAT_14622e788 <= param_2[2])))))) ||
     ((DAT_14622e760 == param_2[3] &&
      ((DAT_14622e764 == param_2[4] && (DAT_14622e768 == param_2[5])))))) goto LAB_140731303;
  if ((0.0001 < ABS(param_2[6])) || ((0.0001 < ABS(param_2[7]) || (0.0001 < ABS(param_2[8]))))) {
    local_98 = *(undefined8 *)param_2;
    local_90 = param_2[2];
    FRotator::Vector(param_2 + 3,&local_68);
    local_78 = (float)local_98;
    local_74 = local_98._4_4_;
    if (*(char *)(*(longlong *)(param_2 + 10) + 0x3c) == '\0') {
      fVar1 = *(float *)(*(longlong *)(param_2 + 10) + 0x30);
      local_78 = (float)local_98 + local_68 * fVar1 * 0.5;
      local_90 = local_90 + local_60 * fVar1 * 0.5;
      local_74 = local_98._4_4_ + local_64 * fVar1 * 0.5;
      local_98 = CONCAT44(local_74,local_78);
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      cVar3 = FUN_142fa8480(*(undefined8 *)(param_2 + 0xc));
      if (cVar3 != '\0') {
        uVar4 = FUN_142f952a0();
        return uVar4;
      }
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x448))
                        (*(longlong **)(param_2 + 0xc),&local_98,0);
      return uVar4;
    }
    fVar1 = param_2[7];
    local_78 = local_78 - (DAT_1464aa798._4_4_ * local_60 - local_64 * DAT_1464aa7a0) * fVar1;
    fVar2 = param_2[6];
    local_74 = local_74 - (DAT_1464aa7a0 * local_68 - (float)DAT_1464aa798 * local_60) * fVar1;
    local_70 = local_90 - (local_64 * (float)DAT_1464aa798 - DAT_1464aa798._4_4_ * local_68) * fVar1
    ;
    local_84 = local_74 - local_64 * fVar2;
    local_88 = local_78 - fVar2 * local_68;
    local_80 = local_70 - fVar2 * local_60;
    cVar3 = FUN_142fa8480(*(undefined8 *)(param_2 + 0xc));
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x448))
                        (*(longlong **)(param_2 + 0xc),&local_88,0);
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x440))
                            (*(longlong **)(param_2 + 0xc),&local_88,&local_78,0), cVar3 != '\0')) {
        cVar3 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x440))
                          (*(longlong **)(param_2 + 0xc),&local_78,&local_98,0);
        goto joined_r0x000140731376;
      }
    }
    else {
      cVar3 = FUN_142f952a0();
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x468))
                            (*(longlong **)(param_2 + 0xc),&local_88,&local_78,0,0), cVar3 != '\0'))
      {
        cVar3 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x468))
                          (*(longlong **)(param_2 + 0xc),&local_78,&local_98,0,0);
joined_r0x000140731376:
        if (cVar3 != '\0') goto LAB_140731378;
      }
    }
LAB_140731303:
    uVar4 = 0;
  }
  else {
LAB_140731378:
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 140731380 FUN_140731380 body=720 status=ok
// SIG undefined FUN_140731380(void)

ulonglong FUN_140731380(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  char cVar9;
  ulonglong in_RAX;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  int local_res10;
  float local_58;
  float fStack_54;
  
  if ((param_2 != 0) && (lVar11 = *(longlong *)(param_1 + 0x5a0), lVar11 != 0)) {
    fVar5 = *(float *)(param_2 + 0x220);
    fVar8 = *(float *)(param_2 + 0x224);
    fVar12 = *(float *)(param_2 + 0x228);
    lVar7 = *(longlong *)(param_2 + 0x6f0);
    if (lVar7 != 0) {
      if (*(char *)(param_2 + 0x720) == '\0') {
        fVar1 = *(float *)(lVar7 + 0x34);
      }
      else {
        fVar1 = *(float *)(lVar7 + 0x38);
      }
      fVar12 = fVar12 - fVar1 * 0.5;
    }
    fVar1 = *(float *)(param_1 + 0x620);
    fVar2 = *(float *)(param_1 + 0x61c);
    cVar9 = FUN_142fa8480(lVar11);
    if (cVar9 == '\0') {
      iVar4 = *(int *)(lVar11 + 0x6f4);
      lVar11 = (longlong)iVar4;
      if (iVar4 < 0) {
        uVar3 = CONCAT44(DAT_14622e780._4_4_,(float)DAT_14622e780);
        local_res10 = -1;
        uVar10 = 0xffffffffffffffff;
        fVar6 = DAT_14622e788;
      }
      else {
        FUN_14072f3e0(param_2,iVar4);
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x810) + 4 + lVar11 * 0x18);
        fVar6 = *(float *)(*(longlong *)(param_2 + 0x810) + 0xc + lVar11 * 0x18);
        FUN_14072f3e0(param_2,iVar4);
        uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x810) + 0x10 + lVar11 * 0x18);
        local_res10 = (int)uVar10;
      }
      local_58 = (float)uVar3;
      in_RAX = uVar10;
      if (((((-(float)DAT_14622e780 < local_58) && (local_58 < (float)DAT_14622e780)) &&
           (fStack_54 = (float)((ulonglong)uVar3 >> 0x20), -DAT_14622e780._4_4_ < fStack_54)) &&
          (((fStack_54 < DAT_14622e780._4_4_ && (-DAT_14622e788 < fVar6)) &&
           ((fVar6 < DAT_14622e788 &&
            ((-1 < local_res10 && (in_RAX = uVar10 >> 0x20, -1 < (longlong)uVar10)))))))) &&
         ((fStack_54 = fStack_54 - fVar8, local_58 = local_58 - fVar5,
          fStack_54 * fStack_54 + local_58 * local_58 <= fVar1 * fVar1 &&
          (ABS(fVar6 - fVar12) <= fVar2)))) {
LAB_140731509:
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
    else {
      iVar4 = *(int *)(lVar11 + 0x6f8);
      lVar11 = (longlong)iVar4;
      if (iVar4 < 0) {
        uVar3 = CONCAT44(DAT_14622e780._4_4_,(float)DAT_14622e780);
        local_res10 = -1;
        uVar10 = 0xffffffffffffffff;
        fVar5 = DAT_14622e788;
      }
      else {
        FUN_14072f200(param_2,iVar4);
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x800) + 4 + lVar11 * 0x18);
        fVar5 = *(float *)(*(longlong *)(param_2 + 0x800) + 0xc + lVar11 * 0x18);
        FUN_14072f200(param_2,iVar4);
        uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x800) + 0x10 + lVar11 * 0x18);
        local_res10 = (int)uVar10;
      }
      local_58 = (float)uVar3;
      in_RAX = uVar10;
      if ((((((-(float)DAT_14622e780 < local_58) && (local_58 < (float)DAT_14622e780)) &&
            (fStack_54 = (float)((ulonglong)uVar3 >> 0x20), -DAT_14622e780._4_4_ < fStack_54)) &&
           ((fStack_54 < DAT_14622e780._4_4_ && (-DAT_14622e788 < fVar5)))) &&
          (fVar5 < DAT_14622e788)) ||
         ((local_res10 < 0 || (in_RAX = uVar10 >> 0x20, (longlong)uVar10 < 0)))) goto LAB_140731509;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140731650 FUN_140731650 body=252 status=ok
// SIG undefined FUN_140731650(void)

ulonglong FUN_140731650(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_38 [8];
  longlong local_30;
  
  *param_4 = 0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  plVar4 = plVar2;
  if ((plVar2 != (longlong *)0x0) && (lVar5 = *(longlong *)(param_2 + 0x188), lVar5 != 0)) {
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar6 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      plVar4 = (longlong *)(uVar6 & 0xffffffffffffff00);
    }
    else {
      plVar4 = (longlong *)CONCAT71((int7)(uVar6 >> 8),1);
    }
    if (((char)plVar4 != '\0') && (param_3 != (undefined8 *)0x0)) {
      FUN_1406d48b0(local_38,lVar5,*param_3,param_3[1]);
      lVar5 = plVar2[0x1b];
      if (*(char *)(lVar5 + 0x28 + local_30) == '\x03') {
        (**(code **)(*plVar2 + 0x300))(plVar2,local_38);
        lVar5 = plVar2[0x1b];
      }
      if (*(char *)(lVar5 + 0x28 + local_30) == '\0') {
        uVar6 = FUN_1406de170(plVar2,local_38);
        return uVar6;
      }
      *param_4 = 1;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 140731750 FUN_140731750 body=260 status=ok
// SIG undefined FUN_140731750(void)

undefined8 FUN_140731750(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  
  if (((*param_2 != 0) && (*param_2 != *(longlong *)(param_1 + 0x310))) &&
     (*(char *)(param_1 + 0x1b0) != '\a')) {
    if ((((*(longlong *)(param_1 + 0x310) == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
        ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) &&
       (*(longlong *)(param_1 + 0x5c0) != 0)) {
      cVar1 = FUN_1407c3030(*(longlong *)(param_1 + 0x5c0) + 0x8b0);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x560))();
      if ((cVar1 == '\0') &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x570))(), cVar1 == '\0')) {
        return 0;
      }
    }
    if (((param_3 != '\0') && (cVar1 = FUN_14073cf40(param_1), cVar1 != '\0')) &&
       (*(char *)(param_1 + 0x1b0) != '\x01')) {
      return 0;
    }
    if ((((*(longlong *)(param_1 + 0x310) == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
        ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) ||
       (*(char *)(param_1 + 0x571) != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140731860 FUN_140731860 body=81 status=ok
// SIG undefined FUN_140731860(void)

undefined1 FUN_140731860(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 local_res18 [16];
  
  cVar1 = FUN_140731750(param_1,param_2,1);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_14073a420(param_1,local_res18,param_2);
    if ((*piVar2 != 0) || (piVar2[1] != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407318c0 FUN_1407318c0 body=1323 status=ok
// SIG undefined FUN_1407318c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407318c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  uint local_f8;
  float fStack_f4;
  uint local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_98 [144];
  
  if (((((*param_2 != 0) && (param_2[1] != 0)) && (lVar6 = param_2[2], lVar6 != 0)) &&
      ((param_2[4] != 0 && (param_2[6] != 0)))) &&
     ((param_2[7] != 0 && (*(char *)(param_2[4] + 0x720) == *(char *)(param_1 + 0x35))))) {
    if (*(int *)(param_1 + 0x40) < 1) {
LAB_140731985:
      if (*(int *)(param_1 + 0x60) < 1) {
LAB_1407319b0:
        if ((*(int *)(param_1 + 0x50) < 1) || (param_2[3] == 0)) {
LAB_1407319e7:
          plVar10 = *(longlong **)(param_1 + 0x70);
          if (plVar10 != (longlong *)0x0) {
            plVar9 = *(longlong **)(param_2[1] + 0x118);
            uVar5 = 0;
            if (plVar9 != (longlong *)0x0) {
              uVar5 = (**(code **)(*plVar9 + 0x688))(plVar9);
              plVar10 = *(longlong **)(param_1 + 0x70);
            }
            lVar6 = (**(code **)(*plVar10 + 0x280))(plVar10,uVar5);
            if (lVar6 != *param_2) {
              return 0;
            }
          }
          lVar6 = param_2[7];
          FUN_142fa2d40(lVar6 + 0x27b8,&local_128);
          lVar1 = param_2[4];
          fVar13 = *(float *)(lVar1 + 0x220);
          fVar3 = *(float *)(lVar1 + 0x224);
          fVar20 = *(float *)(lVar1 + 0x228);
          lVar2 = *(longlong *)(lVar1 + 0x6f0);
          if (lVar2 != 0) {
            if (*(char *)(lVar1 + 0x720) == '\0') {
              fVar17 = *(float *)(lVar2 + 0x34);
            }
            else {
              fVar17 = *(float *)(lVar2 + 0x38);
            }
            fVar20 = fVar20 - fVar17 * 0.5;
          }
          fVar17 = *(float *)(param_1 + 0x30);
          if (fVar17 <= 0.0) {
            fVar17 = *(float *)(lVar6 + 0x27bc);
          }
          if ((ABS(local_120 - fVar20) <= fVar17) &&
             (local_108 = fVar13, fStack_104 = fVar3, local_100 = fVar20,
             cVar4 = FUN_142c4a520(param_1 + 0x28,
                                   SQRT((local_128 - fVar13) * (local_128 - fVar13) +
                                        (local_124 - fVar3) * (local_124 - fVar3))), cVar4 != '\0'))
          {
            local_e8 = *(undefined8 *)(param_2[4] + 0x210);
            uStack_e0 = *(undefined8 *)(param_2[4] + 0x218);
            pfVar7 = (float *)FQuat::Rotator(&local_e8,&local_118);
            auVar11._4_4_ = DAT_14622e794 + pfVar7[1];
            auVar11._0_4_ = DAT_14622e790 + *pfVar7;
            auVar11._8_4_ = DAT_14622e798 + pfVar7[2];
            auVar11._12_4_ = 0;
            auVar11 = divps(auVar11,_DAT_146858c60);
            fVar14 = (float)DAT_146858c60;
            fVar15 = DAT_146858c60._4_4_;
            fVar16 = DAT_146858c60._8_4_;
            fVar17 = (DAT_14622e790 + *pfVar7) - (float)(int)auVar11._0_4_ * fVar14;
            fVar18 = (DAT_14622e794 + pfVar7[1]) - (float)(int)auVar11._4_4_ * fVar15;
            fVar19 = (DAT_14622e798 + pfVar7[2]) - (float)(int)auVar11._8_4_ * fVar16;
            fVar12 = (float)(((uint)(fVar17 + fVar14) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                            (uint)(fVar17 + fVar14));
            fVar17 = (float)(((uint)(fVar18 + fVar15) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                            (uint)(fVar18 + fVar15));
            fVar18 = (float)(((uint)(fVar19 + fVar16) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                            (uint)(fVar19 + fVar16));
            local_f8 = ((uint)(fVar12 - fVar14) ^ (uint)fVar12) & -(uint)(_DAT_146858c50 < fVar12) ^
                       (uint)fVar12;
            fVar17 = (float)(((uint)(fVar17 - fVar15) ^ (uint)fVar17) &
                             -(uint)(fRam0000000146858c54 < fVar17) ^ (uint)fVar17);
            local_f0 = ((uint)(fVar18 - fVar16) ^ (uint)fVar18) &
                       -(uint)(fRam0000000146858c58 < fVar18) ^ (uint)fVar18;
            local_118 = local_128 - fVar13;
            local_114 = local_124 - fVar3;
            local_110 = local_120 - fVar20;
            fStack_f4 = fVar17;
            lVar6 = FVector::Rotation(&local_118,&local_e8);
            fVar17 = *(float *)(lVar6 + 4) - fVar17;
            fVar13 = (float)(int)(fVar17 * 0.0027777778) * 360.0;
            if (ABS(fVar17) < ABS(fVar13)) {
              fVar13 = fVar17;
            }
            fVar17 = fVar17 - fVar13;
            if (fVar17 < 0.0) {
              fVar17 = fVar17 + 360.0;
            }
            if (180.0 < fVar17) {
              fVar17 = fVar17 - 360.0;
            }
            fVar17 = *(float *)(param_1 + 0x20) - fVar17;
            fVar13 = (float)(int)(fVar17 * 0.0027777778) * 360.0;
            if (ABS(fVar17) < ABS(fVar13)) {
              fVar13 = fVar17;
            }
            fVar17 = fVar17 - fVar13;
            if (fVar17 < 0.0) {
              fVar17 = fVar17 + 360.0;
            }
            if (180.0 < fVar17) {
              fVar17 = fVar17 - 360.0;
            }
            if (ABS(fVar17) < *(float *)(param_1 + 0x24) ||
                ABS(fVar17) == *(float *)(param_1 + 0x24)) {
              local_b0 = *(longlong *)(param_2[4] + 0x6f0);
              if ((param_2[5] == 0) || (*(char *)(local_b0 + 0x3c) == '\0')) {
                local_a8 = param_2[1];
                local_d8 = CONCAT44(fStack_104,local_108);
                local_cc = CONCAT44(fStack_f4,local_f8);
                local_d0 = local_100;
                local_c4 = local_f0;
                local_b4 = 0;
                lVar6 = FUN_140739240(param_1,local_98,param_2[6],0);
                local_c0 = SUB168(*(undefined1 (*) [16])(lVar6 + 0x10),0);
                local_110 = SUB164(*(undefined1 (*) [16])(lVar6 + 0x10),8);
                local_b8 = local_110;
                if (*(char *)(local_b0 + 0x3c) != '\0') {
                  cVar4 = FUN_142fa8480(param_2[1]);
                  if (cVar4 == '\0') {
                    puVar8 = (undefined8 *)
                             FUN_140739160(param_2[4],&local_e8,*(undefined4 *)(param_2[1] + 0x6f4))
                    ;
                  }
                  else {
                    puVar8 = (undefined8 *)
                             FUN_1407390e0(param_2[4],&local_e8,*(undefined4 *)(param_2[1] + 0x6f8))
                    ;
                  }
                  local_d8 = *puVar8;
                  local_d0 = *(float *)(puVar8 + 1);
                }
                cVar4 = FUN_140731000(param_1,&local_d8);
                if (cVar4 == '\0') {
                  return 0;
                }
              }
              return 1;
            }
          }
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x48);
          plVar10 = plVar9 + *(int *)(param_1 + 0x50);
          if (plVar9 != plVar10) {
            do {
              if (*plVar9 == *(longlong *)(param_2[3] + 0x38)) goto LAB_1407319e7;
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar10);
          }
        }
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x58);
        plVar10 = plVar9 + *(int *)(param_1 + 0x60);
        if (plVar9 != plVar10) {
          do {
            if (*plVar9 == *(longlong *)(lVar6 + 0x38)) goto LAB_1407319b0;
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar10);
        }
      }
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x38);
      plVar10 = plVar9 + *(int *)(param_1 + 0x40);
      for (; plVar9 != plVar10; plVar9 = plVar9 + 1) {
        if (*plVar9 == lVar6) goto LAB_140731985;
      }
    }
  }
  return 0;
}



// FUNCTION 140731df0 FUN_140731df0 body=226 status=ok
// SIG undefined FUN_140731df0(void)

undefined8 FUN_140731df0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  
  if ((*param_2 != 0) && (lVar2 = *(longlong *)(*param_2 + 0x38), lVar2 != 0)) {
    plVar4 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar4 = param_3;
    }
    plVar1 = plVar4 + (int)param_3[9];
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar2) {
        if ((param_2[0x53] != 0) && (param_4 != 0)) {
          local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x568);
          uVar5 = FUN_142de77e0(param_2 + 0x33,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x488),0,
                                &local_res10);
          cVar3 = FUN_140753a50(param_4,param_2[0x53],*(undefined8 *)(param_1 + 0x590),0,uVar5,0);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140731ee0 FUN_140731ee0 body=527 status=ok
// SIG undefined FUN_140731ee0(void)

void FUN_140731ee0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x310) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x318) == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 800) == 0) && (*(char *)(param_1 + 0x328) != '\0')) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x590);
  if (lVar4 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
    lVar4 = *(longlong *)(param_1 + 0x590);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x568);
  if (lVar4 == 0) {
    return;
  }
  cVar2 = FUN_140744520(param_1);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x571) = 0;
    FUN_1407466f0();
    return;
  }
  if (*(char *)(param_1 + 0x571) == '\x01') {
    *(undefined1 *)(param_1 + 0x571) = 2;
    FUN_1407466f0();
    if (*(char *)(param_1 + 0x3b8) != '\0') {
      plVar5 = (longlong *)(param_1 + 0x3c0);
      goto LAB_14073208c;
    }
    lVar1 = *(longlong *)(param_1 + 0x318);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x30) != '\x02')) {
      plVar5 = *(longlong **)(param_1 + 0x640);
      plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 0x55) {
        if (*plVar5 == lVar1) {
          if ((plVar5 != (longlong *)0x0) && ((char)plVar5[0x22] != '\0')) {
            plVar5 = plVar5 + 0x23;
            goto LAB_14073208c;
          }
          break;
        }
      }
      plVar5 = (longlong *)(param_1 + 0x6e0);
      goto LAB_14073208c;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x571) = 1;
    FUN_1407466f0();
    if (*(char *)(param_1 + 0x330) != '\0') {
      plVar5 = (longlong *)(param_1 + 0x338);
      goto LAB_14073208c;
    }
    if (*(longlong *)(param_1 + 0x318) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x640);
      plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 0x55) {
        if (*plVar5 == *(longlong *)(param_1 + 0x318)) {
          if ((plVar5 != (longlong *)0x0) && ((char)plVar5[0x11] != '\0')) {
            plVar5 = plVar5 + 0x12;
            goto LAB_14073208c;
          }
          break;
        }
      }
      plVar5 = (longlong *)(param_1 + 0x660);
      goto LAB_14073208c;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14073208c:
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(lVar3 + 0x790);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0x3dcccccd;
  }
  else {
    local_res8 = lVar4;
    uVar7 = FUN_142de77e0(plVar5,*(undefined8 *)(param_1 + 0x590),0,&local_res8);
  }
  *(undefined4 *)(param_1 + 400) = uVar7;
  return;
}



// FUNCTION 1407320f0 FUN_1407320f0 body=262 status=ok
// SIG undefined FUN_1407320f0(void)

ulonglong FUN_1407320f0(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  undefined8 local_res10;
  
  uVar2 = *param_2;
  lVar4 = *(longlong *)(uVar2 + 0x5e8);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x7540))) {
    FUN_14072ebc0();
    iVar5 = 0;
    lVar3 = *(longlong *)(lVar4 + 0x7538);
    if (*(longlong *)(lVar4 + 0x7538) == 0) {
      lVar3 = lVar4 + 0x338;
    }
    lVar4 = (longlong)*(int *)(lVar4 + 0x7540) * 0x390 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x390) {
      cVar1 = FUN_14073d500(param_1,param_2,lVar3);
      if (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
      }
    }
    if (*(char *)(param_1 + 0x268) == '\0') {
      uVar2 = 1;
    }
    else {
      local_res10 = *(undefined8 *)(*param_2 + 0x568);
      fVar6 = (float)FUN_142de77e0(param_1 + 0x1e8,*param_2,0,&local_res10);
      uVar2 = (ulonglong)(uint)((int)ROUND(fVar6 * 2.0 + 0.5) >> 1);
    }
    if ((int)uVar2 <= iVar5) {
      uVar2 = FUN_140707fc0(param_1,param_2);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140732200 FUN_140732200 body=681 status=ok
// SIG undefined FUN_140732200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140732200(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 *puVar8;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [192];
  ulonglong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  undefined1 *puVar7;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((((*(longlong *)(param_1 + 0x310) == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
      ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) ||
     ((*(char *)(param_1 + 0x1b0) != '\a' && (*(char *)(param_1 + 0x570) == '\0')))) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x5e8) != cVar5) {
    if (cVar5 == '\0') {
      FUN_142db61a0(param_1 + 0x5c8,1);
      if ((*(longlong *)(param_1 + 0x598) != 0) && (*(longlong *)(param_1 + 0x8f0) != 0)) {
        lVar4 = UAnimNotifyState::GetPrivateStaticClass();
        for (lVar2 = *(longlong *)(param_1 + 0x8f0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)
            ) {
          if (lVar2 == lVar4) {
            if (*(longlong *)(param_1 + 0x8f0) != 0) {
              FUN_142d6d130(*(longlong *)(param_1 + 0x598) + 0x3d0);
            }
            break;
          }
        }
      }
    }
    else {
      puVar8 = (undefined1 *)0x0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      if (*(longlong *)(param_1 + 0x588) != 0) {
        FUN_140725150(*(longlong *)(param_1 + 0x588),local_f8,0);
      }
      puVar7 = local_f8;
      if (local_38 != 0) {
        puVar7 = puVar8;
      }
      plVar6 = (longlong *)((ulonglong)puVar7 | local_38);
      puVar7 = (undefined1 *)((longlong)local_30 & 0x1fffffffffffffff);
      if (plVar6 + local_30 < plVar6) {
        puVar7 = puVar8;
      }
      if (puVar7 != (undefined1 *)0x0) {
        do {
          plVar1 = (longlong *)*plVar6;
          if (plVar1 != (longlong *)0x0) {
            FUN_142db9760(param_1 + 0x5c8,plVar1);
            puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x4d0))(plVar1);
            local_118 = *puVar3;
            uStack_114 = puVar3[1];
            uStack_110 = puVar3[2];
            uStack_10c = puVar3[3];
            local_108 = puVar3[4];
            uStack_104 = puVar3[5];
            uStack_100 = puVar3[6];
            uStack_fc = puVar3[7];
            FCollisionResponseContainer::SetResponse(&local_118,0,0);
            FCollisionResponseContainer::SetResponse(&local_118,1);
            FCollisionResponseContainer::SetResponse(&local_118,7);
            (**(code **)(*plVar1 + 0x840))(plVar1,&local_118);
          }
          plVar6 = plVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar7);
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if ((*(longlong *)(param_1 + 0x598) != 0) && (*(longlong *)(param_1 + 0x8f0) != 0)) {
        lVar4 = UAnimNotifyState::GetPrivateStaticClass();
        for (lVar2 = *(longlong *)(param_1 + 0x8f0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)
            ) {
          if (lVar2 == lVar4) {
            if (*(longlong *)(param_1 + 0x8f0) != 0) {
              FUN_142d55680(*(longlong *)(param_1 + 0x598) + 0x3d0);
            }
            break;
          }
        }
      }
    }
    *(char *)(param_1 + 0x5e8) = cVar5;
  }
  return;
}



// FUNCTION 1407324c0 FUN_1407324c0 body=654 status=ok
// SIG undefined FUN_1407324c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407324c0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [16];
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  char local_12f;
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_120 [128];
  undefined1 local_a0;
  undefined1 local_98 [128];
  
  if (((*(longlong *)(param_1 + 0x118) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) &&
     (*(longlong *)(param_1 + 0x5b0) != 0)) {
    *(undefined1 *)(param_1 + 0x618) = 0;
    local_148 = *(longlong *)(param_1 + 0x310);
    if (((local_148 != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
       ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) {
      local_12c = *(undefined4 *)(param_1 + 0x32c);
      local_140 = *(undefined8 *)(param_1 + 0x318);
      local_138 = *(undefined8 *)(param_1 + 800);
      local_130 = *(undefined1 *)(param_1 + 0x328);
      local_12f = *(char *)(param_1 + 0x329);
      local_128 = *(undefined1 *)(param_1 + 0x330);
      FUN_142de2b80(local_120,param_1 + 0x338);
      local_a0 = *(undefined1 *)(param_1 + 0x3b8);
      FUN_142de2b80(local_98,param_1 + 0x3c0);
      if (local_12f != '\0') {
        local_148 = *(longlong *)(param_1 + 0x310);
        local_12c = *(undefined4 *)(param_1 + 0x32c);
        local_140 = *(undefined8 *)(param_1 + 0x318);
        local_138 = *(undefined8 *)(param_1 + 800);
        local_130 = *(undefined1 *)(param_1 + 0x328);
        local_12f = *(undefined1 *)(param_1 + 0x329);
        local_128 = *(undefined1 *)(param_1 + 0x330);
        FUN_142de2b80(local_120,param_1 + 0x338);
        local_a0 = *(undefined1 *)(param_1 + 0x3b8);
        FUN_142de2b80(local_98,param_1 + 0x3c0);
        lVar1 = local_148;
        if (local_148 == 0) {
          uVar2 = 0;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x5b0);
          lVar5 = *(longlong *)(lVar6 + 0x7538);
          if (*(longlong *)(lVar6 + 0x7538) == 0) {
            lVar5 = lVar6 + 0x338;
          }
          lVar6 = (longlong)*(int *)(lVar6 + 0x7540) * 0x390 + lVar5;
          for (; lVar5 != lVar6; lVar5 = lVar5 + 0x390) {
            if (*(char *)(lVar5 + 0x380) != '\0') {
              puVar4 = (undefined8 *)FUN_142dcd3a0(lVar5,local_158,local_res8);
              local_168 = *puVar4;
              local_160 = *(undefined4 *)(puVar4 + 1);
              cVar3 = FUN_14073cb50(param_1,lVar1,&local_168);
              if (cVar3 != '\0') {
                uVar2 = 1;
                goto LAB_140732722;
              }
            }
          }
          uVar2 = 0;
        }
LAB_140732722:
        *(undefined1 *)(param_1 + 0x618) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 140732750 FUN_140732750 body=59 status=ok
// SIG undefined FUN_140732750(void)

undefined1 FUN_140732750(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140730990(param_1,param_2,1);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x7f8) = param_2;
  return 1;
}



// FUNCTION 140732790 FUN_140732790 body=269 status=ok
// SIG undefined FUN_140732790(void)

void FUN_140732790(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  
  plVar3 = *(longlong **)(param_1 + 0x640);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
  if (plVar3 != plVar2) {
    while (*plVar3 != *(longlong *)(param_1 + 0x318)) {
      plVar3 = plVar3 + 0x55;
      if (plVar3 == plVar2) {
        return;
      }
    }
    if (((plVar3 != (longlong *)0x0) && (plVar3[0x53] != 0)) &&
       (*(longlong *)(param_1 + 0x590) != 0)) {
      lVar1 = FUN_14075eaf0();
      lVar4 = lVar1 + 0x48;
      if (lVar1 == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x568);
        uVar5 = FUN_142de77e0(plVar3 + 0x33,*(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x488),
                              0,&local_res8);
        FUN_1407514c0(lVar4,plVar3[0x53],*(undefined8 *)(param_1 + 0x590),uVar5,0,0x7f7fffff,0);
      }
    }
  }
  return;
}



// FUNCTION 1407328a0 FUN_1407328a0 body=238 status=ok
// SIG undefined FUN_1407328a0(void)

void FUN_1407328a0(longlong *param_1,longlong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_48 [48];
  
  if (((param_4 == 0) && (param_3 != (longlong *)0x0)) && (*param_3 != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x2f0))();
    if ((lVar3 != 0) && (lVar1 = *(longlong *)(param_2 + 0x188), lVar1 != 0)) {
      lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = FUN_1406d48b0(local_48,lVar1,*param_3,param_3[1]);
        FUN_1406e7ff0(lVar3,uVar5);
      }
    }
    FUN_1406e9910(*param_3,param_3[1]);
    *param_3 = 0;
    param_3[1] = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1407329b0 FUN_1407329b0 body=41 status=ok
// SIG undefined FUN_1407329b0(void)

void FUN_1407329b0(undefined8 param_1,longlong *param_2)

{
  FUN_142bb5c30(param_2[1],&DAT_146858cd0);
  *(undefined1 *)(*param_2 + 0x600) = 0;
  return;
}



// FUNCTION 1407329e0 FUN_1407329e0 body=57 status=ok
// SIG undefined FUN_1407329e0(void)

void FUN_1407329e0(undefined8 param_1,longlong *param_2)

{
  FUN_142bb5c30(param_2[1],&DAT_146858cd8);
  FUN_142bb5c30(param_2[1],&DAT_146858ce0);
  *(undefined1 *)(*param_2 + 0x600) = 0;
  return;
}



// FUNCTION 140732a20 FUN_140732a20 body=46 status=ok
// SIG undefined FUN_140732a20(void)

void FUN_140732a20(undefined8 param_1,longlong param_2)

{
  FUN_142bb5c30(*(undefined8 *)(param_2 + 8),&DAT_146858ce8);
  FUN_142bb5c30(*(undefined8 *)(param_2 + 8),&DAT_146858cf0);
  return;
}



// FUNCTION 140732a50 FUN_140732a50 body=62 status=ok
// SIG undefined FUN_140732a50(void)

void FUN_140732a50(undefined8 param_1,longlong param_2)

{
  FUN_142bb5c30(*(undefined8 *)(param_2 + 8),&DAT_146858cf8);
  FUN_142bb5c30(*(undefined8 *)(param_2 + 8),&DAT_146858d00);
  FUN_142bb5c30(*(undefined8 *)(param_2 + 8),&DAT_146858d08);
  return;
}



// FUNCTION 140732a90 FUN_140732a90 body=74 status=ok
// SIG undefined FUN_140732a90(void)

void FUN_140732a90(longlong param_1,longlong param_2)

{
  FUN_142cbcc90(param_1 + 0x128,*(undefined8 *)(param_2 + 8));
  FUN_142cbcc90(param_1 + 0x138,*(undefined8 *)(param_2 + 8));
  FUN_142cbcc90(param_1 + 0x148,*(undefined8 *)(param_2 + 8));
  return;
}



// FUNCTION 140732b00 FUN_140732b00 body=34 status=ok
// SIG undefined FUN_140732b00(void)

void FUN_140732b00(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x26a) = 0;
  FUN_1407347f0();
  *(undefined1 *)(param_1 + 0x269) = 1;
  return;
}



// FUNCTION 140732b30 FUN_140732b30 body=87 status=ok
// SIG undefined FUN_140732b30(void)

void FUN_140732b30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  plVar3 = (longlong *)(*(longlong *)(param_2 + 8) + 8 + *(longlong *)(param_1 + 0xd8));
  if (((local_18 != plVar3) && ((int)plVar3[1] != 0)) &&
     (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*plVar3 != 0) {
      lVar2 = FMemory::Realloc(*plVar3,0,0);
      *plVar3 = lVar2;
    }
    *(undefined4 *)(plVar3 + 1) = 0;
  }
  return;
}



// FUNCTION 140732b90 FUN_140732b90 body=246 status=ok
// SIG undefined FUN_140732b90(void)

void FUN_140732b90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  
  plVar3 = *(longlong **)(param_1 + 0x640);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
  if (plVar3 != plVar2) {
    while (*plVar3 != *(longlong *)(param_1 + 0x448)) {
      plVar3 = plVar3 + 0x55;
      if (plVar3 == plVar2) {
        return;
      }
    }
    if (((plVar3 != (longlong *)0x0) && (plVar3[0x53] != 0)) &&
       (*(longlong *)(param_1 + 0x590) != 0)) {
      lVar1 = FUN_14075eaf0();
      lVar4 = lVar1 + 0x48;
      if (lVar1 == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x568);
        uVar5 = FUN_142de77e0(plVar3 + 0x43,*(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x488),
                              0,&local_res8);
        FUN_140754d30(lVar4,plVar3[0x53],*(undefined8 *)(param_1 + 0x590),uVar5,0);
      }
    }
  }
  return;
}



// FUNCTION 140732c90 FUN_140732c90 body=238 status=ok
// SIG undefined FUN_140732c90(void)

void FUN_140732c90(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x590) != 0) {
      lVar2 = FUN_14075eaf0();
    }
    lVar3 = lVar2 + 0x48;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      if ((0.0 < param_2) &&
         (cVar1 = FUN_140761b20(lVar3,*(undefined8 *)(param_1 + 0x8e0),
                                *(undefined8 *)(param_1 + 0x590),0,0), cVar1 != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0x120);
        if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = *(float *)(lVar2 + 0x790);
        }
        *(float *)(param_1 + 0x19c) = fVar4 + param_2;
      }
      FUN_140754d30(lVar3,*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x590),0,0);
    }
  }
  return;
}



// FUNCTION 140732d80 FUN_140732d80 body=94 status=ok
// SIG undefined FUN_140732d80(void)

void FUN_140732d80(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) && (*(int *)(param_1 + 0x68) == 0)) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    UGameplayTask::EndTask(param_1);
    return;
  }
  return;
}



// FUNCTION 140732de0 FUN_140732de0 body=1237 status=ok
// SIG undefined FUN_140732de0(void)

void FUN_140732de0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 local_98 [128];
  
  FUN_1406e06f0();
  uVar7 = 0;
  plVar3 = (longlong *)param_1[0x29];
  uVar8 = (longlong)(int)param_1[0x2a] & 0x1fffffffffffffff;
  if (plVar3 + (int)param_1[0x2a] < plVar3) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      lVar5 = *plVar3;
      plVar3 = plVar3 + 1;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(lVar5 + 0xd3) = 1;
    } while (uVar7 != uVar8);
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,"EnsureRotation",1);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x3d8))(param_1,*puVar2,0xffffffff);
  if (plVar3 != (longlong *)0x0) {
    *(undefined1 *)(plVar3 + 0x20) = 1;
    puVar2 = (undefined8 *)FName::FName(local_res10,"EnsureRotation",1);
    uVar1 = *puVar2;
    uVar4 = FUN_140793390();
    lVar5 = (**(code **)(*plVar3 + 0x388))(plVar3,uVar4,uVar1);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x100) = 1;
      *(undefined1 *)(lVar5 + 0x2c8) = 1;
      *(undefined1 *)(lVar5 + 0x648) = 1;
      *(undefined8 *)(lVar5 + 0x110) = DAT_146858d38;
      *(undefined1 *)(lVar5 + 0x1b0) = 1;
      puVar6 = (undefined1 *)FUN_142de2d20(local_98,0x3f800000,0);
      *(undefined1 *)(lVar5 + 0x130) = *puVar6;
      *(undefined1 *)(lVar5 + 0x131) = puVar6[1];
      *(undefined1 *)(lVar5 + 0x132) = puVar6[2];
      *(undefined1 *)(lVar5 + 0x133) = puVar6[3];
      *(undefined8 *)(lVar5 + 0x134) = *(undefined8 *)(puVar6 + 4);
      *(undefined8 *)(lVar5 + 0x140) = *(undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(lVar5 + 0x148) = *(undefined8 *)(puVar6 + 0x18);
      uVar1 = *(undefined8 *)(puVar6 + 0x28);
      *(undefined8 *)(lVar5 + 0x150) = *(undefined8 *)(puVar6 + 0x20);
      *(undefined8 *)(lVar5 + 0x158) = uVar1;
      uVar1 = *(undefined8 *)(puVar6 + 0x38);
      *(undefined8 *)(lVar5 + 0x160) = *(undefined8 *)(puVar6 + 0x30);
      *(undefined8 *)(lVar5 + 0x168) = uVar1;
      uVar1 = *(undefined8 *)(puVar6 + 0x48);
      *(undefined8 *)(lVar5 + 0x170) = *(undefined8 *)(puVar6 + 0x40);
      *(undefined8 *)(lVar5 + 0x178) = uVar1;
      *(undefined8 *)(lVar5 + 0x180) = *(undefined8 *)(puVar6 + 0x50);
      uVar1 = *(undefined8 *)(puVar6 + 0x60);
      *(undefined8 *)(lVar5 + 0x188) = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 *)(lVar5 + 400) = uVar1;
      *(undefined8 *)(lVar5 + 0x198) = *(undefined8 *)(puVar6 + 0x68);
      *(undefined4 *)(lVar5 + 0x1a0) = *(undefined4 *)(puVar6 + 0x70);
      *(undefined4 *)(lVar5 + 0x1a4) = *(undefined4 *)(puVar6 + 0x74);
      *(undefined4 *)(lVar5 + 0x1a8) = *(undefined4 *)(puVar6 + 0x78);
      *(undefined8 *)(lVar5 + 0x490) = DAT_146858d38;
      AK::MemoryMgr::StartProfileThreadUsage((int)lVar5 + 0x100);
    }
    puVar2 = (undefined8 *)FName::FName(local_res10,"Teleport",1);
    uVar1 = *puVar2;
    uVar4 = FUN_140797610();
    lVar5 = (**(code **)(*plVar3 + 0x388))(plVar3,uVar4,uVar1);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0xfc) = 0;
      puVar6 = (undefined1 *)FUN_142de2d20(local_98,0x3e800000,0);
      *(undefined1 *)(lVar5 + 0x128) = *puVar6;
      *(undefined1 *)(lVar5 + 0x129) = puVar6[1];
      *(undefined1 *)(lVar5 + 0x12a) = puVar6[2];
      *(undefined1 *)(lVar5 + 299) = puVar6[3];
      *(undefined8 *)(lVar5 + 300) = *(undefined8 *)(puVar6 + 4);
      *(undefined8 *)(lVar5 + 0x138) = *(undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(lVar5 + 0x140) = *(undefined8 *)(puVar6 + 0x18);
      uVar1 = *(undefined8 *)(puVar6 + 0x28);
      *(undefined8 *)(lVar5 + 0x148) = *(undefined8 *)(puVar6 + 0x20);
      *(undefined8 *)(lVar5 + 0x150) = uVar1;
      uVar1 = *(undefined8 *)(puVar6 + 0x38);
      *(undefined8 *)(lVar5 + 0x158) = *(undefined8 *)(puVar6 + 0x30);
      *(undefined8 *)(lVar5 + 0x160) = uVar1;
      uVar1 = *(undefined8 *)(puVar6 + 0x48);
      *(undefined8 *)(lVar5 + 0x168) = *(undefined8 *)(puVar6 + 0x40);
      *(undefined8 *)(lVar5 + 0x170) = uVar1;
      *(undefined8 *)(lVar5 + 0x178) = *(undefined8 *)(puVar6 + 0x50);
      uVar1 = *(undefined8 *)(puVar6 + 0x60);
      *(undefined8 *)(lVar5 + 0x180) = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 *)(lVar5 + 0x188) = uVar1;
      *(undefined8 *)(lVar5 + 400) = *(undefined8 *)(puVar6 + 0x68);
      *(undefined4 *)(lVar5 + 0x198) = *(undefined4 *)(puVar6 + 0x70);
      *(undefined4 *)(lVar5 + 0x19c) = *(undefined4 *)(puVar6 + 0x74);
      *(undefined4 *)(lVar5 + 0x1a0) = *(undefined4 *)(puVar6 + 0x78);
      local_a8 = (undefined4)DAT_146858d28;
      uStack_a4 = (undefined4)((ulonglong)DAT_146858d28 >> 0x20);
      *(undefined4 *)(lVar5 + 0x110) = 0x10000;
      *(undefined4 *)(lVar5 + 0x100) = local_a8;
      *(undefined4 *)(lVar5 + 0x104) = uStack_a4;
      *(uint *)(lVar5 + 0x108) = CONCAT22(uStack_9e,0xff00);
      *(undefined4 *)(lVar5 + 0x10c) = uStack_9c;
    }
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,"EnsureExactLocationAndRotation",1);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x3d8))(param_1,*puVar2,0xffffffff);
  if (plVar3 != (longlong *)0x0) {
    *(undefined1 *)(plVar3 + 0x20) = 1;
    puVar2 = (undefined8 *)FName::FName(local_res10,"Teleport",1);
    uVar1 = *puVar2;
    uVar4 = FUN_140797610();
    lVar5 = (**(code **)(*plVar3 + 0x388))(plVar3,uVar4,uVar1);
    if (lVar5 != 0) {
      puVar6 = (undefined1 *)FUN_142de2d20(local_98,0x3e800000,0);
      *(undefined1 *)(lVar5 + 0x128) = *puVar6;
      *(undefined1 *)(lVar5 + 0x129) = puVar6[1];
      *(undefined1 *)(lVar5 + 0x12a) = puVar6[2];
      *(undefined1 *)(lVar5 + 299) = puVar6[3];
      *(undefined8 *)(lVar5 + 300) = *(undefined8 *)(puVar6 + 4);
      *(undefined8 *)(lVar5 + 0x138) = *(undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(lVar5 + 0x140) = *(undefined8 *)(puVar6 + 0x18);
      uVar1 = *(undefined8 *)(puVar6 + 0x28);
      *(undefined8 *)(lVar5 + 0x148) = *(undefined8 *)(puVar6 + 0x20);
      *(undefined8 *)(lVar5 + 0x150) = uVar1;
      uVar1 = *(undefined8 *)(puVar6 + 0x38);
      *(undefined8 *)(lVar5 + 0x158) = *(undefined8 *)(puVar6 + 0x30);
      *(undefined8 *)(lVar5 + 0x160) = uVar1;
      uVar1 = *(undefined8 *)(puVar6 + 0x48);
      *(undefined8 *)(lVar5 + 0x168) = *(undefined8 *)(puVar6 + 0x40);
      *(undefined8 *)(lVar5 + 0x170) = uVar1;
      *(undefined8 *)(lVar5 + 0x178) = *(undefined8 *)(puVar6 + 0x50);
      uVar1 = *(undefined8 *)(puVar6 + 0x60);
      *(undefined8 *)(lVar5 + 0x180) = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 *)(lVar5 + 0x188) = uVar1;
      *(undefined8 *)(lVar5 + 400) = *(undefined8 *)(puVar6 + 0x68);
      *(undefined4 *)(lVar5 + 0x198) = *(undefined4 *)(puVar6 + 0x70);
      *(undefined4 *)(lVar5 + 0x19c) = *(undefined4 *)(puVar6 + 0x74);
      *(undefined4 *)(lVar5 + 0x1a0) = *(undefined4 *)(puVar6 + 0x78);
      *(undefined8 *)(lVar5 + 0x100) = DAT_146858d28;
      *(ulonglong *)(lVar5 + 0x108) = CONCAT44(uStack_9c,CONCAT22(uStack_9e,0xff00));
      uVar1 = DAT_146858d38;
      *(undefined4 *)(lVar5 + 0x110) = 0x1010000;
      *(undefined8 *)(lVar5 + 0x118) = uVar1;
      *(ulonglong *)(lVar5 + 0x120) = CONCAT44(uStack_9c,CONCAT22(uStack_9e,0xff00));
    }
  }
  return;
}



// FUNCTION 1407332c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407333e0 FUN_1407333e0 body=115 status=ok
// SIG undefined FUN_1407333e0(void)

longlong * FUN_1407333e0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x118);
  if (lVar3 != 0) {
    lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140733439;
  }
  lVar3 = 0;
LAB_140733439:
  *param_1 = lVar3;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 140733460 FUN_140733460 body=74 status=ok
// SIG undefined FUN_140733460(void)

void FUN_140733460(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14407c870;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1407334b0 FUN_1407334b0 body=74 status=ok
// SIG undefined FUN_1407334b0(void)

void FUN_1407334b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14407c830;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140733510 FUN_140733510 body=650 status=ok
// SIG undefined FUN_140733510(void)

/* WARNING: Removing unreachable block (ram,0x0001407336a5) */
/* WARNING: Removing unreachable block (ram,0x0001407335ba) */
/* WARNING: Removing unreachable block (ram,0x000140733766) */

void FUN_140733510(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [4];
  
  plVar10 = param_5;
  FUN_142bb97b0();
  if (param_3 != (undefined4 *)0x0) {
    if ((char)param_1[0x1d] != '\0') {
      FString::PrintfImpl(&local_58,L"LoopCount: %d / %d",*param_3,param_3[1],plVar10);
      iVar3 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar3);
      }
      puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_5);
      *puVar5 = 0;
      *puVar5 = local_58;
      local_58 = 0;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_50._4_4_;
      local_50 = 0;
    }
    puVar6 = &DAT_143f3eda8;
    if (((char)param_1[0x2e] != '\0') &&
       (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) {
      fVar1 = *(float *)(lVar4 + 0x790);
      fVar2 = (float)param_3[3];
      puVar5 = (undefined8 *)FString::SanitizeFloat(local_38,(double)(float)param_3[2],1);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)FString::SanitizeFloat(local_48,(double)(fVar1 - fVar2),1);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_58,L"LoopTime: %s / %s",puVar7,puVar9);
      iVar3 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar3);
      }
      puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_5);
      *puVar5 = 0;
      *puVar5 = local_58;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if ((char)param_1[0x31] != '\0') {
      puVar5 = (undefined8 *)
               (**(code **)(*(longlong *)param_1[0x2f] + 0x278))((longlong *)param_1[0x2f],local_38)
      ;
      if (*(int *)(puVar5 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar5;
      }
      pwVar8 = L"";
      if ((char)param_1[0x30] != '\0') {
        pwVar8 = L"Not ";
      }
      FString::PrintfImpl(&local_58,L"LoopCondition: %s%s",pwVar8,puVar6,plVar10);
      iVar3 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar3);
      }
      puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_5);
      *puVar5 = 0;
      *puVar5 = local_58;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1407337a0 FUN_1407337a0 body=673 status=ok
// SIG undefined FUN_1407337a0(void)

/* WARNING: Removing unreachable block (ram,0x00014073393e) */
/* WARNING: Removing unreachable block (ram,0x000140733a25) */

void FUN_1407337a0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar2 = param_5;
  FUN_142bb97b0();
  if (((*(longlong *)(param_2 + 0x120) != 0) || (lVar1 = FUN_1423407b0(param_2), lVar1 != 0)) &&
     (param_3 != 0)) {
    pwVar6 = L"Not In Range";
    if (*(char *)(param_3 + 0xc) != '\0') {
      pwVar6 = L"In Range";
    }
    lVar1 = 0;
    uVar8 = 0;
    uVar9 = 0;
    local_48 = 0;
    local_40 = (ulonglong)(uint)local_40;
    if (*pwVar6 != L'\0') {
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (pwVar6[lVar1] != L'\0');
      uVar4 = (int)lVar1 + 1;
      local_40 = (ulonglong)uVar4;
      uVar9 = uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar8 = local_40._4_4_;
        uVar9 = (uint)local_40;
      }
      lVar1 = local_48;
      FGenericPlatformString::Memcpy(local_48,pwVar6,(longlong)(int)uVar4 * 2,param_4,plVar2);
    }
    iVar5 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar5);
    }
    plVar2 = (longlong *)((longlong)iVar5 * 0x10 + *param_5);
    *plVar2 = lVar1;
    *(uint *)(plVar2 + 1) = uVar9;
    *(undefined4 *)((longlong)plVar2 + 0xc) = uVar8;
    puVar3 = (undefined8 *)FString::SanitizeFloat(local_38,(double)*(float *)(param_3 + 8),1);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_48,L"Distance: %s",puVar7);
    iVar5 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar5);
    }
    puVar7 = (undefined2 *)0x0;
    plVar2 = (longlong *)((longlong)iVar5 * 0x10 + *param_5);
    *plVar2 = 0;
    *plVar2 = local_48;
    *(uint *)(plVar2 + 1) = (uint)local_40;
    *(undefined4 *)((longlong)plVar2 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48 = 0;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_1 + 0x93) == '\x01') {
      plVar2 = (longlong *)FUN_142c4b1d0(param_3,local_38);
    }
    else if (*(char *)(param_1 + 0x93) == '\x02') {
      plVar2 = (longlong *)FUN_142c4b150(param_3);
    }
    else {
      plVar2 = (longlong *)FUN_142c4b240();
    }
    iVar5 = 0;
    if (&local_48 != plVar2) {
      puVar7 = (undefined2 *)*plVar2;
      *plVar2 = 0;
      iVar5 = (int)plVar2[1];
      plVar2[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    puVar10 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      puVar10 = puVar7;
    }
    FString::PrintfImpl(&local_48,L"Range: %s",puVar10);
    iVar5 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar5);
    }
    plVar2 = (longlong *)((longlong)iVar5 * 0x10 + *param_5);
    *plVar2 = 0;
    *plVar2 = local_48;
    *(uint *)(plVar2 + 1) = (uint)local_40;
    *(undefined4 *)((longlong)plVar2 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48 = 0;
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return;
}



// FUNCTION 140733a50 FUN_140733a50 body=553 status=ok
// SIG undefined FUN_140733a50(void)

void FUN_140733a50(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  void *_Dst;
  bool bVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  void *local_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  
  if (((param_3 != (undefined8 *)0x0) &&
      (plVar5 = (longlong *)(**(code **)(*param_1 + 0x2f0))(), plVar5 != (longlong *)0x0)) &&
     (lVar10 = *(longlong *)(param_2 + 0x188), lVar10 != 0)) {
    lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *plVar5;
      lVar3 = param_5[1];
      lVar9 = (longlong)(int)lVar3;
      uVar7 = FUN_1406d48b0(local_58,lVar10,*param_3,param_3[1]);
      (**(code **)(lVar6 + 0x358))(plVar5,uVar7,param_5,1);
      if ((int)lVar3 < (int)param_5[1]) {
        local_68 = (void *)0x0;
        local_60 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        FGenericPlatformString::Memcpy(local_68,L"Action_AIAction",0x20);
        lVar10 = lVar9 * 0x10;
        FString::RemoveFromStart(*param_5 + lVar10,&local_68,1);
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        local_68 = (void *)0x0;
        local_60 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        _Src = local_68;
        FGenericPlatformString::Memcpy(local_68,&DAT_14406c7d4,6);
        if (lVar9 < (int)param_5[1]) {
          lVar9 = (int)param_5[1] - lVar9;
          iVar4 = (int)local_60;
          do {
            puVar8 = (undefined8 *)(*param_5 + lVar10);
            if ((iVar4 != 0) && (iVar1 = iVar4 + -1, iVar1 != 0)) {
              if (*(int *)(puVar8 + 1) == 0) {
                *(int *)(puVar8 + 1) = iVar4;
                if (*(int *)((longlong)puVar8 + 0xc) < iVar4) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar8,0);
                }
                _Dst = (void *)*puVar8;
                _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 2);
                *(undefined2 *)((longlong)iVar1 * 2 + (longlong)_Dst) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::Insert(puVar8,_Src,iVar1,0);
              }
            }
            lVar10 = lVar10 + 0x10;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
    }
  }
  return;
}



// FUNCTION 140733c80 FUN_140733c80 body=74 status=ok
// SIG undefined FUN_140733c80(void)

void FUN_140733c80(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_2 + 0x42) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
    return;
  }
  return;
}



// FUNCTION 140733cd0 FUN_140733cd0 body=1381 status=ok
// SIG undefined FUN_140733cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140733cd0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198 [16];
  longlong *local_118;
  undefined8 local_110;
  longlong local_108 [16];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x168) != 0)) {
    uVar13 = 0;
    local_1a8 = lVar1;
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      local_1d8 = (longlong *)0x0;
      uStack_1d0 = 1;
      local_118 = (longlong *)0x0;
      local_110 = 0;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
      *local_1d8 = lVar1;
      FUN_14222dd40(lVar1,&local_1d8,1);
      uVar4 = UDamageableInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
      local_1b0 = local_1d8;
      local_1a0 = local_1d8 + (int)uStack_1d0;
      plVar9 = local_1d8;
      plVar12 = local_118;
      local_1b8 = plVar5;
      if (local_1d8 != local_1a0) {
        do {
          lVar1 = *plVar9;
          local_1b0 = plVar9;
          if ((plVar5 == (longlong *)0x0) || (lVar1 == 0)) {
LAB_140733de2:
            local_88 = (longlong *)0x0;
            local_80 = 0;
            FUN_140724ce0(lVar1,local_108,1);
            plVar5 = local_108;
            if (local_88 != (longlong *)0x0) {
              plVar5 = local_88;
            }
            uVar10 = (longlong)(int)local_80 & 0x1fffffffffffffff;
            if (plVar5 + (int)local_80 < plVar5) {
              uVar10 = uVar13;
            }
            plVar12 = local_118;
            uVar11 = uVar13;
            if (uVar10 != 0) {
              do {
                uVar2 = local_110;
                lVar1 = *plVar5;
                if (lVar1 != 0) {
                  plVar9 = local_198;
                  if (plVar12 != (longlong *)0x0) {
                    plVar9 = plVar12;
                  }
                  for (plVar7 = plVar9; plVar7 != plVar9 + (int)local_110; plVar7 = plVar7 + 1) {
                    if (*plVar7 == lVar1) {
                      if ((int)((longlong)plVar7 - (longlong)plVar9 >> 3) != -1) goto LAB_140733eb2;
                      break;
                    }
                  }
                  lVar6 = (longlong)(int)local_110;
                  iVar3 = (int)local_110 + 1;
                  local_110 = CONCAT44(local_110._4_4_,iVar3);
                  if (local_110._4_4_ < iVar3) {
                    TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                              (local_198,uVar2 & 0xffffffff);
                    plVar12 = local_118;
                  }
                  plVar9 = local_198;
                  if (plVar12 != (longlong *)0x0) {
                    plVar9 = plVar12;
                  }
                  plVar9[lVar6] = lVar1;
                  plVar12 = local_118;
                }
LAB_140733eb2:
                plVar5 = plVar5 + 1;
                uVar11 = uVar11 + 1;
                plVar9 = local_1b0;
              } while (uVar11 != uVar10);
            }
            plVar5 = local_1b8;
            if (local_88 != (longlong *)0x0) {
              FMemory::Free();
              plVar12 = local_118;
              plVar5 = local_1b8;
            }
          }
          else {
            uVar4 = UDamageableInterface::GetPrivateStaticClass();
            lVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
            plVar12 = local_118;
            if (lVar6 == 0) goto LAB_140733de2;
          }
          local_1b0 = plVar9 + 1;
          plVar9 = local_1b0;
        } while (local_1b0 != local_1a0);
      }
      plVar9 = local_198;
      if (plVar12 != (longlong *)0x0) {
        plVar9 = plVar12;
      }
      uVar10 = (longlong)(int)local_110 & 0x1fffffffffffffff;
      if (plVar9 + (int)local_110 < plVar9) {
        uVar10 = uVar13;
      }
      uVar11 = uVar13;
      if (uVar10 != 0) {
        do {
          FUN_14073aa70(param_1,*plVar9);
          uVar11 = uVar11 + 1;
          plVar9 = plVar9 + 1;
          plVar12 = local_118;
        } while (uVar11 != uVar10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x78))(plVar5,DAT_146858d98,0);
        plVar12 = local_118;
      }
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
      if (local_1d8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (*(char *)(param_1 + 0x1a1) == '\0') {
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_140725150(local_1a8,local_108,0);
      plVar9 = local_108;
      if (local_48 != (longlong *)0x0) {
        plVar9 = local_48;
      }
      uVar10 = (longlong)(int)local_40 & 0x1fffffffffffffff;
      if (plVar9 + (int)local_40 < plVar9) {
        uVar10 = uVar13;
      }
      if (uVar10 != 0) {
        do {
          plVar12 = (longlong *)*plVar9;
          if (plVar12 != (longlong *)0x0) {
            FUN_142db9760(param_1 + 0x230,plVar12);
            puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x4d0))(plVar12);
            local_1d8 = (longlong *)*puVar8;
            uStack_1d0 = puVar8[1];
            local_1c8 = *(undefined4 *)(puVar8 + 2);
            uStack_1c4 = *(undefined4 *)((longlong)puVar8 + 0x14);
            uStack_1c0 = *(undefined4 *)(puVar8 + 3);
            uStack_1bc = *(undefined4 *)((longlong)puVar8 + 0x1c);
            FCollisionResponseContainer::SetResponse(&local_1d8,2);
            FCollisionResponseContainer::SetResponse(&local_1d8,5);
            FCollisionResponseContainer::SetResponse(&local_1d8,6);
            FCollisionResponseContainer::SetResponse(&local_1d8,7);
            FCollisionResponseContainer::SetResponse(&local_1d8,0xf);
            FCollisionResponseContainer::SetResponse(&local_1d8,0xe);
            FCollisionResponseContainer::SetResponse(&local_1d8,0x10);
            (**(code **)(*plVar12 + 0x840))(plVar12,&local_1d8);
          }
          plVar9 = plVar9 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar10);
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if ((*(char *)(param_1 + 0x1a3) == '\0') && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      FUN_142ddcd30(*(longlong *)(param_1 + 0x1f8),1,DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a2) == '\0') && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x1f8) + 0x1c0,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a4) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x218) + 0x290,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a5) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x218) + 0x328,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a6) == '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x218) + 0x3d0,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a7) != '\0') && (*(longlong *)(param_1 + 0x208) != 0)) {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x208) + 0x8b0,&DAT_146858d98);
    }
    if ((*(longlong *)(param_1 + 0x1c8) != 0) && (*(longlong *)(param_1 + 0x210) != 0)) {
      FUN_142ddc5e0(*(longlong *)(param_1 + 0x210),1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x178,0);
  }
  return;
}



// FUNCTION 140734240 FUN_140734240 body=530 status=ok
// SIG undefined FUN_140734240(void)

void FUN_140734240(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x168) != 0)) {
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      puVar5 = *(undefined1 **)(param_1 + 600);
      puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x260) * 0x10;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 0x10) {
        if (*(longlong *)(puVar5 + 8) != 0) {
          FUN_142397540(*(longlong *)(puVar5 + 8),*puVar5,1);
        }
      }
      *(undefined4 *)(param_1 + 0x260) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x264)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 600,0);
      }
      uVar2 = UDamageableInterface::GetPrivateStaticClass();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x80))(plVar3,DAT_146858d98,0);
      }
    }
    if (*(char *)(param_1 + 0x1a1) == '\0') {
      FUN_142db61a0(param_1 + 0x230,1);
    }
    if ((*(char *)(param_1 + 0x1a3) == '\0') && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      FUN_142ddcd30(*(longlong *)(param_1 + 0x1f8),0,DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a2) == '\0') && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x1f8) + 0x1c0,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a4) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x218) + 0x290,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a5) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x218) + 0x328,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a6) == '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x218) + 0x3d0,&DAT_146858d98);
    }
    if ((*(char *)(param_1 + 0x1a7) != '\0') && (*(longlong *)(param_1 + 0x208) != 0)) {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x208) + 0x8b0,&DAT_146858d98);
    }
    if ((*(longlong *)(param_1 + 0x1c8) != 0) && (*(longlong *)(param_1 + 0x210) != 0)) {
      FUN_142dc77b0(*(longlong *)(param_1 + 0x210),1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x188,0);
  }
  return;
}



// FUNCTION 140734460 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 140734520 FUN_140734520 body=45 status=ok
// SIG undefined FUN_140734520(void)

void FUN_140734520(longlong param_1)

{
  FUN_142c6be70();
  FUN_142c84e30(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xcc),1);
  return;
}



// FUNCTION 140734550 FUN_140734550 body=91 status=ok
// SIG undefined FUN_140734550(void)

void FUN_140734550(longlong param_1)

{
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  FUN_142c6b9b0();
  if ((*(longlong *)(param_1 + 200) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    FWeakObjectPtr::operator=(&local_res8);
    local_res10[0] = local_res8;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Remove(*(longlong *)(param_1 + 0x18) + 0x238,local_res10);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 1407345b0 FUN_1407345b0 body=250 status=ok
// SIG undefined FUN_1407345b0(void)

void FUN_1407345b0(longlong param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_110 [136];
  undefined1 local_88 [128];
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UCoverUserComponent::OnMovementModeChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x588) + 0x5b0,param_1,local_res8);
  }
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 0x101;
  local_11c = 0x3f400000;
  FUN_142de2eb0(local_110);
  FUN_142de2eb0(local_88);
  FUN_140743ac0(param_1,&local_138);
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1407346b0 FUN_1407346b0 body=138 status=ok
// SIG undefined FUN_1407346b0(void)

void FUN_1407346b0(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = UAITask_RunEQS::GetPrivateStaticClass();
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = FUN_140765020(param_1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x570) != 0)) {
    lVar4 = FUN_142b79030(*(longlong *)(lVar3 + 0x570),uVar1);
    if (lVar4 != 0) {
      lVar5 = UAITask_RunEQS::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14072b980(lVar4,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140734740 FUN_140734740 body=167 status=ok
// SIG undefined FUN_140734740(void)

void FUN_140734740(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = FUN_1407adec0();
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar4 = FUN_140765020(param_1);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x570) != 0)) {
    lVar5 = FUN_142b79030(*(longlong *)(lVar4 + 0x570),uVar2);
    if (lVar5 != 0) {
      lVar6 = FUN_1407adec0();
      iVar1 = *(int *)(lVar6 + 0x90);
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(longlong *)(lVar4 + 0x608) != 0) {
          FUN_14071caf0(*(longlong *)(lVar4 + 0x608),CONCAT71((int7)(int3)((uint)iVar1 >> 8),3));
          return;
        }
        FUN_14072b980(lVar5,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1407347f0 FUN_1407347f0 body=495 status=ok
// SIG undefined FUN_1407347f0(void)

void FUN_1407347f0(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  
  if ((param_1[0x44] != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if ((0 < iVar4) && (*(char *)((longlong)param_1 + 0x1e2) == '\0')) {
      return;
    }
  }
  if (param_1[0x23] == 0) {
    return;
  }
  if (*(char *)(param_1[0x23] + 0x128) != '\x03') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x26a) != '\0') goto LAB_1407348cb;
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = 0.0;
  if (0.0 < fVar8) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
      fVar8 = *(float *)(param_1 + 0x38);
      if (lVar5 != 0) goto LAB_140734884;
    }
    else {
LAB_140734884:
      fVar9 = *(float *)(lVar5 + 0x790);
    }
    if (fVar9 - *(float *)((longlong)param_1 + 0x26c) <= fVar8) {
      return;
    }
  }
  if ((((char)param_1[0x35] == '\0') && (param_1[0x41] != 0)) &&
     (cVar2 = FUN_1407c3030(param_1[0x41] + 0x8b0), cVar2 != '\0')) {
    return;
  }
LAB_1407348cb:
  cVar2 = '\0';
  if (*(char *)((longlong)param_1 + 0x26a) == '\0') {
    lVar5 = param_1[0x3d];
    if ((lVar5 != 0) || (lVar5 = param_1[0x33], lVar5 != 0)) {
      cVar2 = *(char *)(lVar5 + 0x40);
      puVar7 = *(undefined8 **)(lVar5 + 0x30);
      puVar6 = puVar7 + (longlong)*(int *)(lVar5 + 0x38) * 2;
      for (; puVar7 != puVar6; puVar7 = puVar7 + 2) {
        cVar3 = FUN_142c48f90(*puVar7,param_1[0x23],0);
        if (cVar3 != '\0') {
          cVar2 = *(char *)(puVar7 + 1);
          break;
        }
      }
    }
  }
  else {
    cVar2 = *(char *)((longlong)param_1 + 0x26a) == '\x01';
  }
  cVar3 = (char)param_1[0x4d];
  if (cVar3 == cVar2) {
    if (((cVar3 != (char)param_1[0x4a]) && (param_1[0x23] != 0)) &&
       (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
      *(char *)(param_1 + 0x4a) = cVar3;
      *(undefined1 *)((longlong)param_1 + 0x251) = *(undefined1 *)((longlong)param_1 + 0x269);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    return;
  }
  FUN_1407442a0(param_1);
  if (cVar2 == '\0') {
    FUN_14072cb40(param_1);
    return;
  }
  FUN_14072c500();
  return;
}



// FUNCTION 1407349e0 FUN_1407349e0 body=85 status=ok
// SIG undefined FUN_1407349e0(void)

undefined1 FUN_1407349e0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxRuntime\\Public\\GbxCondition.h",
             0x4e,L"Pure virtual not implemented (%s)",L"UGbxCondition::EvaluateImpl");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxRuntime\\Public\\GbxCondition.h",
             0x4e,L"Pure virtual not implemented (%s)",L"UGbxCondition::EvaluateImpl");
  return 0;
}



// FUNCTION 140734a40 FUN_140734a40 body=789 status=ok
// SIG undefined FUN_140734a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x000140734ca8 : 6 cases all go to same destination
    */

ulonglong FUN_140734a40(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined1 local_80 [8];
  char local_78;
  undefined1 local_74 [8];
  char local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar3 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar9 = param_2;
    if (!bVar1) {
      lVar4 = FUN_1428e7a40();
      iVar8 = *(int *)(lVar4 + 0x90);
      uVar3 = (longlong)iVar8;
      if ((*(int *)(param_2[2] + 0x90) < iVar8) ||
         (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar8 * 8) != lVar4 + 0x88)) {
        uVar3 = uVar3 & 0xffffffffffffff00;
        bVar1 = false;
      }
      else {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
        bVar1 = true;
      }
      if ((!bVar1) ||
         (plVar9 = (longlong *)param_2[0x23], (longlong *)param_2[0x23] == (longlong *)0x0))
      goto LAB_140734d36;
    }
    lVar4 = (**(code **)(*plVar9 + 0x688))(plVar9);
    uVar3 = 0;
    if (lVar4 != 0) {
      lVar5 = (**(code **)(*plVar9 + 0x668))(plVar9);
      uVar3 = 0;
      if (lVar5 != 0) {
        lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
        uVar7 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          uVar3 = (ulonglong)uVar7 << 8;
          bVar1 = false;
        }
        else {
          uVar3 = CONCAT71(uVar7,1);
          bVar1 = true;
        }
        if (bVar1) {
          lVar5 = AIndianaUI::GetArmorComponent(lVar5);
          uVar3 = 0;
          if (lVar5 != 0) {
            iVar8 = 0;
            if (*(char *)(param_1 + 0x188) == '\0') {
              iVar8 = FUN_1407c9b90(lVar5,1);
              iVar8 = iVar8 + -1;
            }
            else {
              lVar5 = FUN_1407cb650(lVar5);
              if (lVar5 != 0) {
                local_98 = &local_88;
                FUN_142df1760(param_1 + 0x108,local_80,param_2,param_3);
                if (local_78 == '\x01') {
                  plVar9 = *(longlong **)(lVar5 + 0x70);
                  plVar10 = plVar9 + (longlong)*(int *)(lVar5 + 0x78) * 0x15;
                  for (; plVar9 != plVar10; plVar9 = plVar9 + 0x15) {
                    if ((*plVar9 != 0) && (*plVar9 != lVar4)) {
                      FUN_142230c20(lVar4);
                      cVar2 = FUN_142c4a520(local_80);
                      if (cVar2 != '\0') {
                        iVar8 = iVar8 + 1;
                      }
                    }
                  }
                }
                else {
                  fVar13 = (float)FUN_142cc4350(local_80);
                  if (0.0 < fVar13) {
                    plVar9 = *(longlong **)(lVar5 + 0x70);
                    plVar10 = plVar9 + (longlong)*(int *)(lVar5 + 0x78) * 0x15;
                    iVar8 = 0;
                    for (; plVar9 != plVar10; plVar9 = plVar9 + 0x15) {
                      if (((*plVar9 != 0) && (*plVar9 != lVar4)) &&
                         (fVar12 = (float)FUN_142230c20(lVar4), fVar12 <= fVar13)) {
                        iVar8 = iVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
            local_98 = &local_88;
            FUN_142df1760(param_1 + 0x88,local_74,param_2,param_3);
            if (local_6c == '\x01') {
              cVar2 = FUN_142c4a520();
              bVar11 = 0;
              if (cVar2 != '\0') {
                bVar11 = 1;
              }
            }
            else {
              fVar13 = (float)FUN_142cc4350(local_74);
              bVar11 = 0;
              if ((int)fVar13 <= iVar8) {
                bVar11 = 1;
              }
            }
            return (ulonglong)bVar11;
          }
        }
      }
    }
  }
LAB_140734d36:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140734d70 FUN_140734d70 body=747 status=ok
// SIG undefined FUN_140734d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140734d70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_a8;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  char local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = (**(code **)(*param_2 + 0xa48))(param_2);
        plVar5 = (longlong *)(**(code **)(param_2[0x8b] + 0x18))(param_2 + 0x8b,&local_a8);
        local_a8 = *plVar5;
        local_a0 = *(float *)(plVar5 + 1);
        fVar7 = (float)((ulonglong)local_a8 >> 0x20);
        fVar9 = (float)local_a8;
      }
      else {
        lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
            != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar4 = param_2[0xad];
          plVar5 = (longlong *)(**(code **)(param_2[0x8b] + 0x18))(param_2 + 0x8b,&local_a8);
          local_a8 = *plVar5;
          local_a0 = *(float *)(plVar5 + 1);
          fVar7 = (float)((ulonglong)local_a8 >> 0x20);
          fVar9 = (float)local_a8;
        }
        else {
          uVar6 = FUN_142c36280();
          lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
          lVar1 = param_2[0x2d];
          if (lVar1 == 0) {
            local_a8 = _DAT_1468b5d90;
            local_a0 = DAT_1468b5d98;
          }
          else {
            local_a8 = *(longlong *)(lVar1 + 0x220);
            local_a0 = *(float *)(lVar1 + 0x228);
          }
          fVar9 = (float)local_a8;
          fVar7 = (float)((ulonglong)local_a8 >> 0x20);
        }
      }
      fVar8 = local_a0;
      if ((lVar4 != 0) && (cVar3 = FUN_142cc54f0(param_1 + 0x88,lVar4,&local_98), cVar3 != '\0')) {
        local_b8 = &local_a8;
        fVar9 = (local_94 - fVar7) * (local_94 - fVar7) + (local_98 - fVar9) * (local_98 - fVar9) +
                (local_90 - fVar8) * (local_90 - fVar8);
        local_a8 = lVar4;
        FUN_142df1760(param_1 + 0x98,&local_88,param_2,param_3);
        if (local_80 == '\x01') {
          fVar7 = local_84 + local_88;
          fVar8 = (local_88 - local_84) * (local_88 - local_84);
        }
        else {
          fVar8 = 0.0;
          FUN_142cc4350(&local_88,0);
          fVar7 = extraout_XMM0_Da;
        }
        if ((fVar9 < fVar8) || (fVar7 * fVar7 < fVar9)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        return cVar3 != *(char *)(param_1 + 0x118);
      }
    }
  }
  return false;
}



// FUNCTION 140735060 FUN_140735060 body=220 status=ok
// SIG undefined FUN_140735060(void)

bool FUN_140735060(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *local_res20;
  undefined8 local_18;
  float local_10;
  
  local_18 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  lVar2 = FUN_140738ef0(param_2,&local_res20,&local_18);
  if (lVar2 != 0) {
    if (*(float *)(param_1 + 0x88) <= 0.0001 && *(float *)(param_1 + 0x88) != 0.0001) {
      iVar1 = FUN_142eb7a00(lVar2);
      return iVar1 == 3;
    }
    plVar3 = local_res20;
    if (local_res20 != (longlong *)0x0) {
LAB_1407350e9:
      (**(code **)(*plVar3 + 0x308))(plVar3,&local_18);
      return *(float *)(param_1 + 0x88) <=
             SQRT((float)local_18 * (float)local_18 + local_18._4_4_ * local_18._4_4_ +
                  local_10 * local_10);
    }
    plVar3 = local_18;
    if ((local_18 != (longlong *)0x0) ||
       (plVar3 = *(longlong **)(lVar2 + 0x118), plVar3 != (longlong *)0x0)) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x688))();
      if (plVar3 != (longlong *)0x0) goto LAB_1407350e9;
    }
  }
  return false;
}



// FUNCTION 140735140 FUN_140735140 body=407 status=ok
// SIG undefined FUN_140735140(void)

bool FUN_140735140(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  lVar6 = FUN_1428dfc70();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    lVar6 = FUN_142e20fc0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return false;
    }
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar7 = FUN_142c71720(uVar7);
    FUN_142c6e490(uVar7,&local_18,param_2);
    param_2 = (longlong *)FUN_142c6f130(local_18);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (param_2 == (longlong *)0x0) {
      return false;
    }
  }
  lVar6 = (**(code **)(*param_2 + 0x668))(param_2);
  if (lVar6 != 0) {
    lVar8 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar5 = FUN_142cd4660(param_1 + 0x11,*(undefined8 *)(lVar6 + 0x568));
      if ((char)param_1[0x13] != '\0') {
        return cVar5 == '\0';
      }
      return (bool)cVar5;
    }
  }
  return false;
}



// FUNCTION 1407352e0 FUN_1407352e0 body=425 status=ok
// SIG undefined FUN_1407352e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1407352e0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float extraout_XMM0_Da;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar8 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
      lVar4 = (**(code **)(*param_2 + 0x668))(param_2);
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar8 = *(longlong *)(lVar4 + 0x618);
        }
      }
      goto LAB_140735394;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140735394:
  if ((plVar5 != (longlong *)0x0) && (lVar8 != 0)) {
    lVar4 = plVar5[0x2d];
    local_2c = _DAT_1468b5d90;
    local_24 = DAT_1468b5d98;
    if (lVar4 != 0) {
      local_2c = *(undefined8 *)(lVar4 + 0x220);
      local_24 = *(undefined4 *)(lVar4 + 0x228);
    }
    cVar3 = FUN_142df43c0(lVar8,0,&local_2c,param_4,local_2c,local_24);
    if (cVar3 != '\0') {
      uVar7 = FUN_142e75af0();
      lVar8 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
      if (((lVar8 != 0) && (lVar4 = FUN_140eaf760(lVar8), lVar4 != 0)) &&
         (*(char *)(lVar4 + 0x88) != '\0')) {
        fVar1 = *(float *)(lVar4 + 0x8c);
        FUN_142dd0930(lVar8);
        return fVar1 < extraout_XMM0_Da;
      }
    }
  }
  return false;
}



// FUNCTION 140735490 FUN_140735490 body=250 status=ok
// SIG undefined FUN_140735490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140735490(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [896];
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = (**(code **)(*param_2 + 0x668))(param_2), lVar3 != 0)) {
      lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = *(longlong *)(lVar3 + 0x5e8);
        goto LAB_14073553e;
      }
    }
  }
  lVar3 = 0;
LAB_14073553e:
  FUN_142dc1ad0(local_3a8);
  if (((lVar3 != 0) && (cVar2 = FUN_142dcd6e0(lVar3,local_3a8,0), cVar2 != '\0')) &&
     (local_28 == '\x02')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140735590 FUN_140735590 body=250 status=ok
// SIG undefined FUN_140735590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140735590(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [896];
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = (**(code **)(*param_2 + 0x668))(param_2), lVar3 != 0)) {
      lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = *(longlong *)(lVar3 + 0x5e8);
        goto LAB_14073563e;
      }
    }
  }
  lVar3 = 0;
LAB_14073563e:
  FUN_142dc1ad0(local_3a8);
  if (((lVar3 != 0) && (cVar2 = FUN_142dcd6e0(lVar3,local_3a8,0), cVar2 != '\0')) &&
     (local_28 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140735690 FUN_140735690 body=248 status=ok
// SIG undefined FUN_140735690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140735690(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = (**(code **)(*param_2 + 0x668))(param_2), lVar2 != 0)) {
      lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = *(longlong *)(lVar2 + 0x5e8);
        goto LAB_14073573e;
      }
    }
  }
  lVar2 = 0;
LAB_14073573e:
  uVar4 = FUN_142dc1ad0(local_3a8);
  if ((lVar2 != 0) && (uVar4 = FUN_142dcd6e0(lVar2,local_3a8,0), (char)uVar4 != '\0')) {
    uVar4 = FUN_142dde310(local_3a8);
    return uVar4;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140735790 FUN_140735790 body=329 status=ok
// SIG undefined FUN_140735790(void)

bool FUN_140735790(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_res10;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0;
      lVar3 = (**(code **)(*param_2 + 0x668))(param_2);
      if (lVar3 != 0) {
        lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar5 = *(undefined8 *)(lVar3 + 0x568);
        }
      }
      local_res10 = uVar5;
      uVar6 = FUN_142de77e0(param_1 + 0x88,param_2,param_3,&local_res10);
      local_res10 = uVar5;
      fVar7 = (float)FUN_142de77e0(param_1 + 0x108,param_2,param_3,&local_res10);
      iVar2 = FUN_14077b910(param_2,uVar6);
      return (int)ROUND(fVar7 * 2.0 + 0.5) >> 1 <= iVar2;
    }
  }
  return false;
}



// FUNCTION 1407358e0 FUN_1407358e0 body=89 status=ok
// SIG undefined FUN_1407358e0(void)

ulonglong FUN_1407358e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar3 = FUN_140760c00(param_2);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140735940 FUN_140735940 body=123 status=ok
// SIG undefined FUN_140735940(void)

ulonglong FUN_140735940(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x688))(param_2);
      in_RAX = 0;
      if (((lVar2 != 0) && (in_RAX = *(ulonglong *)(lVar2 + 0x168), in_RAX != 0)) &&
         (*(longlong *)(in_RAX + 400) != 0)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407359c0 FUN_1407359c0 body=183 status=ok
// SIG undefined FUN_1407359c0(void)

undefined8 FUN_1407359c0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (plVar5 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2), plVar5 != (longlong *)0x0)) {
      UBorder::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x268) != '\0') {
          return 1;
        }
        if ((*(longlong *)(lVar4 + 0x220) != 0) && (*(longlong *)(lVar4 + 0x228) != 0)) {
          piVar1 = (int *)(*(longlong *)(lVar4 + 0x228) + 8);
          LOCK();
          iVar3 = *piVar1;
          if (iVar3 == 0) {
            *piVar1 = 0;
            iVar3 = 0;
          }
          UNLOCK();
          if (0 < iVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140735a80 FUN_140735a80 body=183 status=ok
// SIG undefined FUN_140735a80(void)

ulonglong FUN_140735a80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint7 uVar6;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
      in_RAX = 0;
      if (plVar4 != (longlong *)0x0) {
        uVar5 = FUN_1407a6820();
        lVar2 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
        in_RAX = 0;
        if (lVar2 != 0) {
          uVar6 = (uint7)((ulonglong)lVar2 >> 8);
          if (((*(longlong *)(lVar2 + 0x310) == 0) || (*(longlong *)(lVar2 + 0x318) == 0)) ||
             ((*(longlong *)(lVar2 + 800) == 0 && (*(char *)(lVar2 + 0x328) != '\0')))) {
            in_RAX = (ulonglong)uVar6 << 8;
          }
          else {
            in_RAX = CONCAT71(uVar6,1);
          }
          if ((char)in_RAX != '\0') {
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140735b40 FUN_140735b40 body=251 status=ok
// SIG undefined FUN_140735b40(void)

ulonglong FUN_140735b40(longlong param_1,longlong *param_2)

{
  int iVar1;
  float *in_RAX;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_18 [16];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = (float *)(uVar5 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (float *)CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
      in_RAX = (float *)0x0;
      if (plVar3 != (longlong *)0x0) {
        if (0.0 < *(float *)(param_1 + 0x90)) {
          in_RAX = (float *)(**(code **)(*plVar3 + 0x308))(plVar3,local_18);
          if (SQRT(*in_RAX * *in_RAX + in_RAX[1] * in_RAX[1] + in_RAX[2] * in_RAX[2]) <
              *(float *)(param_1 + 0x90)) goto LAB_140735c2e;
        }
        uVar4 = FUN_142e75af0();
        lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
        in_RAX = (float *)0x0;
        if (lVar2 != 0) {
          uVar5 = FUN_142dd3720(lVar2,*(undefined8 *)(param_1 + 0x88));
          return uVar5;
        }
      }
    }
  }
LAB_140735c2e:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140735c40 FUN_140735c40 body=101 status=ok
// SIG undefined FUN_140735c40(void)

void FUN_140735c40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140735ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140735cb0 FUN_140735cb0 body=87 status=ok
// SIG undefined FUN_140735cb0(void)

void FUN_140735cb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140735d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140735d10 FUN_140735d10 body=333 status=ok
// SIG undefined FUN_140735d10(void)

undefined8 FUN_140735d10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong local_30;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  if ((plVar4 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_2 + 0x188), lVar1 != 0)) {
    lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_3 != (undefined8 *)0x0)) {
      FUN_1406d48b0(local_38,lVar1,*param_3,param_3[1]);
      if (*(char *)(plVar4[0x1b] + 0x28 + local_30) == '\x03') {
        (**(code **)(*plVar4 + 0x300))(plVar4,local_38);
      }
      cVar3 = FUN_1406f70d0(plVar4,local_38,0);
      if (cVar3 != '\0') {
        return 3;
      }
      cVar3 = *(char *)(plVar4[0x1b] + 0x29 + local_30);
      if ((cVar3 == '\x02') && (*(char *)((longlong)plVar4 + 0xd3) != '\0')) {
        cVar3 = '\x01';
      }
      if (cVar3 == '\x01') {
        return 0;
      }
      if ((cVar3 == '\x03') || (cVar3 == '\x04')) {
        return 2;
      }
    }
  }
  return 1;
}



// FUNCTION 140735e60 FUN_140735e60 body=374 status=ok
// SIG undefined FUN_140735e60(void)

undefined8 FUN_140735e60(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float local_res10 [2];
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_2 + 0x180);
  if (lVar4 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if ((*(byte *)(param_1 + 0x98) == 0xff) ||
       (*(int *)(*(longlong *)(lVar4 + 0x180) + 0x40) <= (int)(uint)*(byte *)(param_1 + 0x98))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar6 = 1;
    if (bVar3) goto LAB_140735eb9;
  }
  iVar6 = 0;
LAB_140735eb9:
  if ((*(int *)(*(longlong *)(lVar4 + 0x180) + 0x40) <= iVar6) ||
     (*(longlong *)(param_2 + 0x188) == 0)) {
    return 1;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x488);
  if (lVar2 == 0) {
    return 1;
  }
  lVar4 = FUN_140725690(lVar4,*(undefined1 *)(param_1 + 0x98));
  if (lVar4 != 0) {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      fVar1 = *(float *)(param_1 + 0x70);
      FUN_1407304b0(param_1,lVar4,lVar2,local_28,local_res10);
      if (fVar1 * 0.017453292 <= local_res10[0]) {
        return 3;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140735fe0 FUN_140735fe0 body=238 status=ok
// SIG undefined FUN_140735fe0(void)

void FUN_140735fe0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_140746950();
  lVar1 = *(longlong *)(param_2 + 0x180);
  if (lVar1 != 0) {
    if (*(longlong *)(param_3 + 8) != 0) {
      FUN_142bcd200(lVar1,*(undefined1 *)(param_1 + 0x90),*(undefined8 *)(param_3 + 8));
    }
    local_28 = FUN_14073e000;
    uStack_20 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar2 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar2 + 1,param_1);
      *(undefined4 *)(puVar2 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_1c;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[5] = uVar3;
    }
    puVar2 = (undefined8 *)
             FUN_142bc77b0(lVar1,local_res10,*(undefined1 *)(param_1 + 0x90),param_1,&local_38);
    *(undefined8 *)(param_3 + 8) = *puVar2;
  }
  FUN_140743ed0(param_1,param_2,param_3);
  return;
}



// FUNCTION 1407360d0 FUN_1407360d0 body=428 status=ok
// SIG undefined FUN_1407360d0(void)

undefined8 FUN_1407360d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *(longlong *)(param_2 + 0x180);
  lVar2 = *(longlong *)(param_2 + 0x188);
  if (lVar1 == 0) {
LAB_14073624d:
    uVar8 = FUN_142be1080(param_1,param_2,param_3);
  }
  else {
    plVar6 = (longlong *)FUN_140725690(lVar1,*(undefined1 *)(param_1 + 0x90));
    if (plVar6 != (longlong *)0x0) {
      lVar7 = FUN_1428dfc70();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar8 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar8);
        if (lVar7 != 0) {
          lVar3 = *(longlong *)(param_3 + 0x30);
          *(longlong *)(param_3 + 0x38) = lVar7;
          uVar4 = *(ulonglong *)(lVar2 + 0x488);
          if ((lVar3 != 0) && (uVar4 != 0)) {
            local_38 = *(undefined8 *)(lVar3 + 0x118);
            local_30 = uVar4;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (lVar3 + 0x758,&local_38);
          }
          if (*(longlong *)(param_3 + 0x28) != 0) {
            FUN_142bcd200(lVar1,*(undefined1 *)(param_1 + 0x90),*(undefined8 *)(param_3 + 0x28));
          }
          local_28 = FUN_14073e0b0;
          uStack_20 = 0;
          local_38 = 0;
          local_30 = local_30 & 0xffffffff00000000;
          puVar9 = (undefined8 *)operator_new(0x30,&local_38);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_FUN_14407c830;
            FWeakObjectPtr::operator=(puVar9 + 1,param_1);
            *(undefined4 *)(puVar9 + 2) = (undefined4)local_28;
            *(undefined4 *)((longlong)puVar9 + 0x14) = local_28._4_4_;
            *(undefined4 *)(puVar9 + 3) = uStack_20;
            *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_1c;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar9[5] = uVar8;
          }
          puVar9 = (undefined8 *)
                   FUN_142bc77b0(lVar1,local_res10,*(undefined1 *)(param_1 + 0x90),param_1,&local_38
                                );
          *(undefined8 *)(param_3 + 0x28) = *puVar9;
          goto LAB_14073624d;
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1407362a0 FUN_1407362a0 body=1619 status=ok
// SIG undefined FUN_1407362a0(void)

void FUN_1407362a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint *puVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  undefined4 in_stack_fffffffffffffe58;
  undefined2 uVar28;
  undefined4 *local_198;
  uint local_190;
  int local_18c;
  ulonglong local_188;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint uStack_174;
  uint *puStack_170;
  undefined4 local_168;
  int iStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  longlong *local_148;
  undefined8 local_140;
  void *local_138;
  int local_130;
  longlong *local_128;
  undefined8 uStack_120;
  uint *local_118;
  uint uStack_110;
  int iStack_10c;
  uint local_108;
  undefined4 uStack_104;
  longlong local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar28 = (undefined2)((uint)in_stack_fffffffffffffe58 >> 0x10);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146858e58) &&
       (_Init_thread_header(&DAT_146858e58), DAT_146858e58 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622e7b0,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (DAT_14622e7b0,0x2a,"UGbxCoverTransitionTable::FillFromAnimSet",0x2a,
                 CONCAT22(uVar28,0x3f));
      atexit((_func_5014 *)&LAB_143e41870);
      _Init_thread_footer(&DAT_146858e58);
    }
    uVar13 = 0;
    local_148 = (longlong *)0x0;
    puVar14 = &DAT_143f3eda8;
    if (DAT_14622e7b8 != 0) {
      puVar14 = DAT_14622e7b0;
    }
    local_140 = 0;
    FUN_140724b20(lVar2,puVar14,&local_148);
    local_188 = 0;
    local_17c = 0;
    uVar17 = (ulonglong)((longlong)(local_148 + (int)local_140) + (7 - (longlong)local_148)) >> 3;
    if (local_148 + (int)local_140 < local_148) {
      uVar17 = uVar13;
    }
    plVar19 = local_148;
    uVar18 = uVar13;
    uVar25 = uVar13;
    uVar26 = uVar13;
    uVar24 = 0;
    if (uVar17 != 0) {
      do {
        lVar3 = *plVar19;
        iVar10 = (int)uVar25;
        local_180 = iVar10 + 1;
        if ((int)uVar13 < (int)local_180) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_188,uVar25);
          uVar13 = (ulonglong)local_17c;
          uVar18 = local_188;
        }
        uVar25 = (ulonglong)local_180;
        uVar4 = *(undefined4 *)(lVar3 + 0xc);
        uVar5 = *(undefined4 *)(lVar3 + 0x10);
        uVar6 = *(undefined4 *)(lVar3 + 0x14);
        plVar19 = plVar19 + 1;
        uVar26 = uVar26 + 1;
        puVar21 = (undefined4 *)(uVar18 + (longlong)iVar10 * 0x18);
        *puVar21 = *(undefined4 *)(lVar3 + 8);
        puVar21[1] = uVar4;
        puVar21[2] = uVar5;
        puVar21[3] = uVar6;
        *(undefined8 *)(uVar18 + 0x10 + (longlong)iVar10 * 0x18) = *(undefined8 *)(lVar3 + 0x18);
        uVar24 = local_180;
      } while (uVar26 != uVar17);
    }
    puVar21 = (undefined4 *)0x0;
    iVar27 = 0;
    local_198 = (undefined4 *)0x0;
    local_18c = 0;
    local_178 = 0;
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_128 = (longlong *)(lVar3 + 0x88);
    uStack_174 = 1;
    iVar10 = *(int *)(lVar3 + 0xb0);
    puStack_170 = (uint *)(lVar3 + 0x98);
    iStack_164 = 0;
    uStack_160 = 0;
    if (iVar10 != 0) {
      puVar23 = *(uint **)(lVar3 + 0xa8);
      if (*(uint **)(lVar3 + 0xa8) == (uint *)0x0) {
        puVar23 = puStack_170;
      }
      uVar1 = *puVar23;
      puVar12 = puVar21;
      puVar22 = puVar21;
      while (uVar1 == 0) {
        iVar9 = (int)puVar12;
        uStack_160 = (int)puVar22 + 0x20;
        puVar22 = (undefined4 *)(ulonglong)uStack_160;
        local_178 = iVar9 + 1;
        puVar12 = (undefined4 *)(ulonglong)local_178;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1407364a6;
        uVar1 = puVar23[(longlong)iVar9 + 1];
      }
      uStack_174 = -uVar1 & uVar1;
      iVar9 = 0x1f;
      if (uStack_174 != 0) {
        for (; uStack_174 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_174 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_164 = (uStack_160 - iVar9) + 0x1f;
      if (iVar10 < iStack_164) {
LAB_1407364a6:
        iStack_164 = iVar10;
      }
    }
    local_168 = 0xffffffff;
    uStack_120 = CONCAT44(uStack_174,local_178);
    uStack_d8 = 0xffffffff;
    iStack_d4 = iStack_164;
    uStack_d0 = uStack_160;
    uStack_cc = uStack_15c;
    uStack_110 = 0xffffffff;
    iStack_10c = iStack_164;
    local_108 = uStack_160;
    uStack_104 = uStack_15c;
    puVar12 = puVar21;
    local_118 = puStack_170;
    local_f0 = local_128;
    uStack_e8 = uStack_120;
    puStack_e0 = puStack_170;
    if (iStack_164 < iVar10) {
      do {
        plVar19 = local_128;
        lVar11 = (longlong)iStack_10c;
        lVar3 = *(longlong *)(*local_128 + 8 + lVar11 * 0x18);
        if (lVar3 != 0) {
          UObjectBaseUtility::GetFullName(lVar3,&local_138,*(undefined8 *)(param_1 + 0x48));
          _Src = local_138;
          lVar15 = (longlong)local_130;
          local_158 = (void *)0x0;
          local_150 = local_130;
          if (local_130 == 0) {
            local_14c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_130,0);
            _guard_xfg_dispatch_icall_nop(local_158,_Src,lVar15 * 2);
          }
          FString::FString(local_100,&local_158);
          puVar16 = *(undefined8 **)(param_1 + 0x50);
          puVar20 = puVar16 + (longlong)*(int *)(param_1 + 0x58) * 2;
          for (; puVar16 != puVar20; puVar16 = puVar16 + 2) {
            if (*(int *)(puVar16 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)*puVar16;
            }
            iVar10 = FUN_141592950(local_100,puVar14,1,0,0xffffffff);
            if (iVar10 != -1) {
              if (local_100[0] != 0) {
                FMemory::Free();
              }
              bVar7 = true;
              goto LAB_1407365e0;
            }
          }
          if (local_100[0] != 0) {
            FMemory::Free();
          }
          bVar7 = false;
LAB_1407365e0:
          if (local_158 != (void *)0x0) {
            FMemory::Free();
          }
          if (bVar7) {
            FUN_142c62230(&local_f0);
            FUN_142c821d0(&local_f0,*plVar19 + lVar11 * 0x18);
            FUN_142c62230(&local_178);
            FUN_142c821f0(&local_178,lVar3);
            uVar18 = local_188;
            uVar13 = local_188 + (longlong)(int)uVar24 * 0x18;
            for (uVar17 = local_188; uVar17 != uVar13; uVar17 = uVar17 + 0x18) {
              cVar8 = FUN_142c642c0(uVar17,&local_f0);
              if (cVar8 != '\0') goto LAB_140736872;
            }
            for (; uVar18 != uVar13; uVar18 = uVar18 + 0x18) {
              cVar8 = FUN_142c642c0(uVar18,&local_178);
              if (cVar8 != '\0') goto LAB_140736872;
            }
            iVar10 = (int)puVar12;
            local_190 = iVar10 + 1;
            if (local_18c < (int)local_190) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_198,puVar12);
            }
            puVar12 = (undefined4 *)(ulonglong)local_190;
            puVar21 = local_198 + (longlong)iVar10 * 6;
            *puVar21 = (undefined4)local_f0;
            puVar21[1] = local_f0._4_4_;
            puVar21[2] = (undefined4)uStack_e8;
            puVar21[3] = uStack_e8._4_4_;
            *(uint **)(local_198 + (longlong)iVar10 * 6 + 4) = puStack_e0;
LAB_140736872:
            puVar21 = local_198;
            if (local_138 != (void *)0x0) {
              FMemory::Free();
            }
          }
          else {
            puVar21 = local_198;
            if (local_138 != (void *)0x0) {
              FMemory::Free();
              puVar21 = local_198;
            }
          }
        }
        iVar27 = (int)puVar12;
        uStack_110 = uStack_110 & ~uStack_120._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
      } while (iStack_10c < (int)local_118[6]);
    }
    puVar22 = local_198;
    for (puVar12 = local_198; puVar12 != puVar21 + (longlong)iVar27 * 6; puVar12 = puVar12 + 6) {
      FUN_142c8c8a0(&local_c8);
      local_b0 = *(undefined8 *)(puVar12 + 4);
      local_a8 = 0x4234000000000000;
      uStack_a0 = 0x41c8000042480000;
      local_c0 = *puVar12;
      uStack_bc = puVar12[1];
      uStack_b8 = puVar12[2];
      uStack_b4 = puVar12[3];
      local_c8 = &PTR_FUN_14407afe8;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 1;
      local_4c = 0;
      local_48 = 0x42340000;
      local_40 = 0x41c80000;
      FUN_1423e7070(lVar2,*(undefined8 *)(puVar12 + 4),&local_c8);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
    if (puVar22 != (undefined4 *)0x0) {
      FMemory::Free(puVar22);
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140736900 FUN_140736900 body=18 status=ok
// SIG undefined FUN_140736900(void)

void FUN_140736900(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x26a) = 1;
  *(undefined1 *)(param_1 + 0x269) = param_2;
  FUN_1407347f0();
  return;
}



// FUNCTION 140736920 FUN_140736920 body=18 status=ok
// SIG undefined FUN_140736920(void)

void FUN_140736920(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x26a) = 2;
  *(undefined1 *)(param_1 + 0x269) = param_2;
  FUN_1407347f0();
  return;
}



// FUNCTION 140736940 FUN_140736940 body=1673 status=ok
// SIG undefined FUN_140736940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140736940(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  float *pfVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined4 local_260;
  uint uStack_25c;
  uint local_258;
  longlong *local_250;
  float *local_248;
  undefined8 local_240;
  ulonglong local_238;
  undefined8 local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  float local_1f4;
  undefined1 local_1f0 [400];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_250 = param_2;
  plVar9 = (longlong *)FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if (plVar9 != (longlong *)0x0) {
    lVar10 = FUN_1428dfc70();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    local_268 = plVar9;
    if (!bVar5) {
      lVar10 = FUN_1428e7a40();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        return;
      }
      local_268 = (longlong *)plVar9[0x23];
      if ((longlong *)plVar9[0x23] == (longlong *)0x0) {
        return;
      }
    }
    local_238 = 0;
    if (*(char *)(param_1 + 0xf8) == '\0') {
      uVar11 = FUN_142c3f210();
      cVar7 = UObjectBaseUtility::IsIn(param_1,uVar11);
      if ((((cVar7 == '\0') &&
           (*(undefined1 *)(param_1 + 0xf8) = 1, (*(byte *)(param_1 + 0xb8) & 1) != 0)) &&
          (0 < *(int *)(param_1 + 0xb0))) && (*(int *)(param_1 + 0xe0) == 0)) {
        plVar1 = (longlong *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
        }
        lVar19 = *(longlong *)(param_1 + 0xa8);
        lVar10 = lVar19 + (longlong)*(int *)(param_1 + 0xb0) * 0x28;
        for (; lVar19 != lVar10; lVar19 = lVar19 + 0x28) {
          lVar12 = FUN_141796df0(lVar19 + 0x10);
          if (lVar12 != 0) {
            lVar13 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              iVar8 = *(int *)(param_1 + 0xe0);
              *(int *)(param_1 + 0xe0) = iVar8 + 1;
              if (*(int *)(param_1 + 0xe4) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
              }
              *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar12;
            }
          }
          param_2 = local_250;
        }
      }
    }
    uVar22 = 0;
    local_248 = (float *)0x0;
    local_240 = 0;
    uVar17 = uVar22;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      uVar14 = UEnvQueryContext::GetPrivateStaticClass();
      for (uVar4 = *(ulonglong *)(param_1 + 0x60);
          (uVar17 = uVar22, uVar4 != 0 && (uVar17 = *(ulonglong *)(param_1 + 0x60), uVar4 != uVar14)
          ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
      }
    }
    FUN_142bedad0(param_2,uVar17,&local_248);
    FAIDataProviderValue::BindData(param_1 + 0x68,plVar9,(int)param_2[6]);
    fVar23 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x68);
    local_60 = (undefined1 *)0x0;
    local_58 = 0;
    local_230 = (**(code **)(*local_268 + 0x148))();
    local_228 = &local_230;
    local_220 = FUN_14073d6c0(&local_230,DAT_1468590d0);
    puVar6 = local_228;
    local_218 = &local_230;
    local_210 = 0;
    plVar9 = (longlong *)FUN_14073d6c0(local_228,local_220);
    local_268 = (longlong *)FUN_14073d6c0(local_218,local_210);
    if (plVar9 != local_268) {
      do {
        lVar10 = plVar9[2];
        if (local_248 != local_248 + (longlong)(int)local_240 * 3) {
          lVar19 = *(longlong *)(lVar10 + 0x168);
          pfVar20 = local_248;
          do {
            if (lVar19 == 0) {
              local_208 = _DAT_1468b5d90;
              puVar15 = &local_208;
              local_200 = DAT_1468b5d98;
            }
            else {
              puVar15 = (undefined8 *)&local_260;
              local_260 = *(undefined4 *)(lVar19 + 0x220);
              local_258 = *(uint *)(lVar19 + 0x228);
              uStack_25c = *(uint *)(lVar19 + 0x224);
            }
            fVar24 = *pfVar20 - (float)*puVar15;
            local_1f4 = *(float *)(puVar15 + 1);
            fVar25 = pfVar20[1] - (float)((ulonglong)*puVar15 >> 0x20);
            if (fVar23 * fVar23 <
                fVar25 * fVar25 + fVar24 * fVar24 +
                (pfVar20[2] - local_1f4) * (pfVar20[2] - local_1f4)) goto LAB_140736e3e;
            pfVar20 = pfVar20 + 3;
          } while (pfVar20 != local_248 + (longlong)(int)local_240 * 3);
        }
        if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
LAB_140736d7b:
          if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
            plVar18 = *(longlong **)(param_1 + 0xe8);
            plVar1 = plVar18 + *(int *)(param_1 + 0xf0);
            if (plVar18 != plVar1) {
              do {
                iVar8 = *(int *)(*plVar18 + 0x90);
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar8) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)iVar8 * 8) !=
                    *plVar18 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_140736e3e;
                plVar18 = plVar18 + 1;
              } while (plVar18 != plVar1);
            }
          }
          if ((*(int *)(param_1 + 0xa0) < 1) ||
             (cVar7 = FUN_142def1c0(param_1 + 0x98,lVar10), cVar7 != '\0')) {
            uVar17 = local_58;
            lVar19 = (longlong)(int)local_58;
            iVar8 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            if (local_58._4_4_ < iVar8) {
              FUN_1407413c0(local_1f0,uVar17 & 0xffffffff);
            }
            puVar16 = local_1f0;
            if (local_60 != (undefined1 *)0x0) {
              puVar16 = local_60;
            }
            *(longlong *)(puVar16 + lVar19 * 8) = lVar10;
          }
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0xd8);
          plVar1 = plVar18 + *(int *)(param_1 + 0xe0);
          if (plVar18 != plVar1) {
            do {
              iVar8 = *(int *)(*plVar18 + 0x90);
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar8) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)iVar8 * 8) !=
                  *plVar18 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) goto LAB_140736d7b;
              plVar18 = plVar18 + 1;
            } while (plVar18 != plVar1);
          }
        }
LAB_140736e3e:
        plVar9 = (longlong *)FUN_14073d6c0(puVar6,*plVar9);
      } while (plVar9 != local_268);
    }
    FUN_142bef1a0(param_2,local_58 & 0xffffffff);
    puVar16 = local_1f0;
    if (local_60 != (undefined1 *)0x0) {
      puVar16 = local_60;
    }
    uVar17 = (longlong)(int)local_58 & 0x1fffffffffffffff;
    if (puVar16 + (longlong)(int)local_58 * 8 < puVar16) {
      uVar17 = uVar22;
    }
    if (uVar17 != 0) {
      plVar9 = param_2 + 3;
      uVar21 = local_258;
      do {
        FWeakObjectPtr::operator=(&local_268);
        uVar2 = *(ushort *)((longlong)param_2 + 0x154);
        uVar3 = *(uint *)(local_250 + 4);
        iVar8 = uVar3 + uVar2;
        *(int *)(local_250 + 4) = iVar8;
        if (*(int *)((longlong)local_250 + 0x24) < iVar8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar9);
        }
        _guard_xfg_dispatch_icall_nop((void *)(*plVar9 + (longlong)(int)uVar3),0,(ulonglong)uVar2);
        UEnvQueryItemType_Actor::SetValue(*plVar9 + (longlong)(int)uVar3,&local_268);
        param_2 = local_250;
        uVar21 = uVar21 & 0xfffffffe;
        local_260 = 0;
        uStack_25c = uVar3 & 0x7fffffff;
        iVar8 = (int)local_250[1];
        *(int *)(local_250 + 1) = iVar8 + 1;
        if (*(int *)((longlong)local_250 + 0xc) < iVar8 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(local_250,iVar8);
        }
        lVar10 = *param_2;
        *(ulonglong *)(lVar10 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_25c,local_260);
        *(uint *)(lVar10 + 8 + (longlong)iVar8 * 0xc) = uVar21;
        local_238 = local_238 + 1;
      } while (local_238 != uVar17);
    }
    if (local_60 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_248 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140736fd0 FUN_140736fd0 body=1352 status=ok
// SIG undefined FUN_140736fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140736fd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  undefined8 **ppuVar19;
  float fVar20;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  uint local_120;
  longlong local_118;
  undefined8 *local_110;
  undefined4 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98 [12];
  float *local_68;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (((0 < *(int *)(param_1 + 0x68)) &&
      (local_f0 = param_1, plVar7 = (longlong *)FWeakObjectPtr::Get((longlong)param_2 + 0x34),
      plVar7 != (longlong *)0x0)) &&
     (local_e8 = plVar7, lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,plVar7,1),
     lVar8 != 0)) {
    local_118 = lVar8;
    lVar9 = FUN_1429d7ab0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x678))(plVar7), plVar7 != (longlong *)0x0)) {
      uVar10 = FUN_1407a6820();
      local_b8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar10);
      if (local_b8 != 0) {
        pfVar14 = (float *)0x0;
        local_100 = (longlong *)0x0;
        local_f8 = 0;
        pfVar15 = pfVar14;
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          pfVar11 = (float *)UEnvQueryContext::GetPrivateStaticClass();
          for (pfVar16 = *(float **)(param_1 + 0xa0);
              (pfVar15 = pfVar14, pfVar16 != (float *)0x0 &&
              (pfVar15 = *(float **)(param_1 + 0xa0), pfVar16 != pfVar11));
              pfVar16 = *(float **)(pfVar16 + 0xc)) {
          }
        }
        FUN_142bed6b0(param_2,pfVar15,&local_100);
        local_68 = (float *)0x0;
        local_60 = 0;
        local_5c = 0;
        pfVar15 = (float *)((ulonglong)
                            ((longlong)(local_100 + (int)local_f8) + (7 - (longlong)local_100)) >> 3
                           );
        if (local_100 + (int)local_f8 < local_100) {
          pfVar15 = pfVar14;
        }
        plVar7 = local_100;
        pfVar16 = pfVar14;
        pfVar11 = pfVar14;
        pfVar17 = pfVar14;
        if (pfVar15 != (float *)0x0) {
          do {
            if (*plVar7 != 0) {
              lVar8 = *(longlong *)(*plVar7 + 0x168);
              if (lVar8 == 0) {
                ppuVar19 = &local_128;
                local_128 = _DAT_1468b5d90;
                local_120 = DAT_1468b5d98;
              }
              else {
                ppuVar19 = &local_110;
                local_108 = *(undefined4 *)(lVar8 + 0x228);
                local_110 = *(undefined8 **)(lVar8 + 0x220);
              }
              iVar6 = (int)pfVar16;
              local_60 = iVar6 + 1U;
              if ((int)pfVar14 < (int)(iVar6 + 1U)) {
                TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_98,pfVar16);
                pfVar17 = local_68;
              }
              pfVar14 = local_98;
              if (pfVar17 != (float *)0x0) {
                pfVar14 = pfVar17;
              }
              fVar20 = *(float *)(ppuVar19 + 1);
              *(undefined8 **)(pfVar14 + (longlong)iVar6 * 3) = *ppuVar19;
              pfVar14[(longlong)iVar6 * 3 + 2] = fVar20;
              pfVar14 = (float *)(ulonglong)local_5c;
              pfVar16 = (float *)(ulonglong)local_60;
              pfVar17 = local_68;
            }
            pfVar11 = (float *)((longlong)pfVar11 + 1);
            plVar7 = plVar7 + 1;
            lVar8 = local_118;
            param_1 = local_f0;
          } while (pfVar11 != pfVar15);
        }
        plVar7 = local_e8;
        FAIDataProviderValue::BindData(param_1 + 0x70,local_e8,(int)param_2[6]);
        fVar20 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x70);
        local_d8 = &local_e0;
        local_e0 = lVar8;
        local_d0 = FUN_14073d760(&local_e0,DAT_146858db8);
        local_c8 = &local_e0;
        local_b0 = local_d8;
        local_c0 = 0;
        puVar12 = (undefined8 *)FUN_14073d760(local_d8,local_d0);
        local_110 = (undefined8 *)FUN_14073d760(local_c8,local_c0);
        uVar18 = local_120;
        if (puVar12 != local_110) {
          do {
            lVar8 = puVar12[2];
            lVar9 = *(longlong *)(lVar8 + 0x6f0);
            if (((lVar9 == 0) || (*(char *)(lVar8 + 0x6fa) == '\0')) ||
               (*(int *)(lVar8 + 0x708) < 1)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (*(char *)(lVar8 + 0x6f8) != '\0')) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              plVar13 = *(longlong **)(param_1 + 0x60);
              plVar1 = plVar13 + *(int *)(param_1 + 0x68);
              for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
                if (*plVar13 == lVar9) {
                  cVar5 = FUN_140730990(lVar8,plVar7,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
                  if (cVar5 != '\0') {
                    local_a8 = *(float *)(lVar8 + 0x220);
                    fStack_a4 = *(float *)(lVar8 + 0x224);
                    fStack_a0 = *(float *)(lVar8 + 0x228);
                    uStack_9c = *(undefined4 *)(lVar8 + 0x22c);
                    pfVar15 = local_98;
                    if (local_68 != (float *)0x0) {
                      pfVar15 = local_68;
                    }
                    pfVar14 = pfVar15 + (longlong)(int)local_60 * 3;
                    goto joined_r0x00014073737d;
                  }
                  break;
                }
              }
            }
LAB_140737498:
            puVar12 = (undefined8 *)FUN_14073d760(local_b0,*puVar12);
          } while (puVar12 != local_110);
        }
        if (local_68 != (float *)0x0) {
          FMemory::Free();
        }
        if (local_100 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
joined_r0x00014073737d:
  if (pfVar15 == pfVar14) goto LAB_140737498;
  if ((pfVar15[1] - fStack_a4) * (pfVar15[1] - fStack_a4) +
      (*pfVar15 - local_a8) * (*pfVar15 - local_a8) +
      (pfVar15[2] - fStack_a0) * (pfVar15[2] - fStack_a0) <= fVar20 * fVar20) {
    cVar5 = FUN_140744dd0(local_b8,lVar8);
    if (cVar5 != '\0') {
      FWeakObjectPtr::operator=(&local_118);
      uVar2 = *(ushort *)((longlong)param_2 + 0x154);
      uVar3 = *(uint *)(param_2 + 4);
      iVar6 = uVar2 + uVar3;
      *(int *)(param_2 + 4) = iVar6;
      if (*(int *)((longlong)param_2 + 0x24) < iVar6) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
      }
      _guard_xfg_dispatch_icall_nop((void *)(param_2[3] + (longlong)(int)uVar3),0,(ulonglong)uVar2);
      FUN_142c15730(param_2[3] + (longlong)(int)uVar3,&local_118);
      iVar6 = (int)param_2[1];
      uVar18 = uVar18 & 0xfffffffe;
      local_128 = (undefined8 *)(((ulonglong)uVar3 & 0x7fffffff) << 0x20);
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      lVar8 = *param_2;
      *(undefined8 **)(lVar8 + (longlong)iVar6 * 0xc) = local_128;
      *(uint *)(lVar8 + 8 + (longlong)iVar6 * 0xc) = uVar18;
      plVar7 = local_e8;
      param_1 = local_f0;
    }
    goto LAB_140737498;
  }
  pfVar15 = pfVar15 + 3;
  goto joined_r0x00014073737d;
}



// FUNCTION 140737520 FUN_140737520 body=85 status=ok
// SIG undefined FUN_140737520(void)

undefined8 FUN_140737520(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxAI\\Source\\GbxAI\\Public\\BehaviorTrees/BTTask_AIAction.h"
             ,0x23,L"Pure virtual not implemented (%s)",L"UBTTask_AIAction::GetAIAction");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxAI\\Source\\GbxAI\\Public\\BehaviorTrees/BTTask_AIAction.h"
             ,0x23,L"Pure virtual not implemented (%s)",L"UBTTask_AIAction::GetAIAction");
  return 0;
}



// FUNCTION 140737580 FUN_140737580 body=11 status=ok
// SIG undefined FUN_140737580(void)

undefined8 * FUN_140737580(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140737610 FUN_140737610 body=55 status=ok
// SIG undefined FUN_140737610(void)

undefined8 * FUN_140737610(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  if (*(longlong **)(param_3 + 0x608) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_3 + 0x608) + 0x458))();
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140737670 FUN_140737670 body=111 status=ok
// SIG undefined FUN_140737670(void)

longlong * FUN_140737670(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar2 = USafeZone::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x100);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (lVar3 != 0) goto LAB_1407376c9;
        break;
      }
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x608) + 0x230);
LAB_1407376c9:
  *param_2 = lVar3;
  return param_2;
}



// FUNCTION 1407376e0 FUN_1407376e0 body=26 status=ok
// SIG undefined FUN_1407376e0(void)

undefined8 * FUN_1407376e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407aa810();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140737740 FUN_140737740 body=73 status=ok
// SIG undefined FUN_140737740(void)

undefined1 FUN_140737740(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  BOOL BVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1b8);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x1b1);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 140737790 FUN_140737790 body=363 status=ok
// SIG undefined FUN_140737790(void)

longlong FUN_140737790(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_res8;
  
  local_res8 = 0;
  FUN_142c81650(param_1 + 8,&local_res8,param_2);
  lVar1 = local_res8;
  if (local_res8 != 0) {
    lVar4 = UAnimMontage::GetPrivateStaticClass();
    lVar6 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  if (((param_3 != 0) && (*(char *)(param_1 + 8) == '\x02')) &&
     (lVar1 = *(longlong *)(param_1 + 0x18), *(int *)(param_3 + 0x90) != *(int *)(param_3 + 0xbc)))
  {
    lVar6 = *(longlong *)(param_3 + 200);
    if (*(longlong *)(param_3 + 200) == 0) {
      lVar6 = param_3 + 0xc0;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_3 + 0xd0) - 1U) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_3 + 0x88);
      do {
        lVar4 = (longlong)iVar3;
        if (*(longlong *)(lVar6 + lVar4 * 0x18) == lVar1) {
          if (iVar3 == -1) {
            return 0;
          }
          lVar6 = lVar6 + lVar4 * 0x18;
          if (lVar6 != 0) {
            plVar5 = (longlong *)(lVar6 + 8);
            if (plVar5 == (longlong *)0x0) {
              return 0;
            }
            lVar1 = *plVar5;
            if (lVar1 != 0) {
              lVar6 = UAnimMontage::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                return lVar1;
              }
            }
            return 0;
          }
          return 0;
        }
        iVar3 = *(int *)(lVar6 + 0x10 + lVar4 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 140737900 FUN_140737900 body=85 status=ok
// SIG undefined FUN_140737900(void)

undefined4 FUN_140737900(void)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  puVar1 = DAT_146858df8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return puVar1[1];
    }
  }
  return *puVar1;
}



// FUNCTION 140737960 FUN_140737960 body=349 status=ok
// SIG undefined FUN_140737960(void)

void FUN_140737960(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar8 = 0;
  }
  if (lVar8 != 0) {
    if (*(int *)((longlong)param_2 + 0xc) < *(int *)(lVar8 + 0x150) + 1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    }
    plVar7 = *(longlong **)(lVar8 + 0x148);
    plVar1 = plVar7 + *(int *)(lVar8 + 0x150);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) break;
      }
    }
    lVar4 = *(longlong *)(lVar8 + 0x148);
    iVar2 = *(int *)(lVar8 + 0x150);
joined_r0x000140737a23:
    if (plVar7 != (longlong *)(lVar4 + (longlong)iVar2 * 8)) {
      iVar3 = (int)param_2[1];
      lVar8 = *plVar7;
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar8;
      do {
        do {
          plVar7 = plVar7 + 1;
          if (plVar7 == plVar1) goto joined_r0x000140737a23;
          lVar8 = *plVar7;
        } while (lVar8 == 0);
        lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      } while (!bVar5);
      goto joined_r0x000140737a23;
    }
  }
  return;
}



// FUNCTION 140737ac0 FUN_140737ac0 body=225 status=ok
// SIG undefined FUN_140737ac0(void)

undefined8 FUN_140737ac0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_128 [288];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar4 = param_2[1];
    lVar3 = *(longlong *)(param_1 + 0x1e8);
    if ((((lVar3 != 0) && (*(longlong *)(param_1 + 0x1e0) == lVar1)) &&
        (((*(char *)(param_1 + 0x1f8) == '\0' && ((char)param_2[3] == '\0')) ||
         (*(longlong *)(param_1 + 0x1f0) == param_2[2])))) ||
       (((lVar3 = *(longlong *)(param_1 + 0x318), lVar3 != 0 &&
         (*(longlong *)(param_1 + 0x310) == lVar1)) &&
        (((*(char *)(param_1 + 0x328) == '\0' && ((char)param_2[3] == '\0')) ||
         (*(longlong *)(param_1 + 800) == param_2[2])))))) {
      lVar4 = lVar3;
    }
    uVar2 = FUN_140726c10(local_128,param_2 + 3);
    uVar2 = FUN_140730010(param_1,*param_2,param_2[2],uVar2,lVar4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140737bb0 FUN_140737bb0 body=1263 status=ok
// SIG undefined FUN_140737bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140737bb0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte bVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  float local_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [912];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  lVar8 = *(longlong *)(param_2 + 0x180);
  if (lVar8 == 0) {
    return 0;
  }
  lVar11 = 0;
  lVar5 = lVar11;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar3 = UBlackboardKeyType::GetPrivateStaticClass();
    for (lVar4 = *(longlong *)(param_1 + 0x80);
        (lVar5 = lVar11, lVar4 != 0 && (lVar5 = *(longlong *)(param_1 + 0x80), lVar4 != lVar3));
        lVar4 = *(longlong *)(lVar4 + 0x30)) {
    }
  }
  lVar4 = FUN_142dfd5b0();
  if (lVar5 != lVar4) {
    lVar5 = lVar11;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar3 = UBlackboardKeyType::GetPrivateStaticClass();
      for (lVar4 = *(longlong *)(param_1 + 0x80);
          (lVar5 = lVar11, lVar4 != 0 && (lVar5 = *(longlong *)(param_1 + 0x80), lVar4 != lVar3));
          lVar4 = *(longlong *)(lVar4 + 0x30)) {
      }
    }
    lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar5 != lVar4) {
      lVar5 = lVar11;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar3 = UBlackboardKeyType::GetPrivateStaticClass();
        for (lVar4 = *(longlong *)(param_1 + 0x80);
            (lVar5 = lVar11, lVar4 != 0 && (lVar5 = *(longlong *)(param_1 + 0x80), lVar4 != lVar3));
            lVar4 = *(longlong *)(lVar4 + 0x30)) {
        }
      }
      lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
      if (lVar5 != lVar4) {
        return 0;
      }
      bVar1 = *(byte *)(param_1 + 0x88);
      lVar5 = FUN_142bbd600(lVar8,bVar1);
      fVar12 = DAT_146b2c5b8;
      fVar13 = (float)DAT_146b2c5b0;
      fVar14 = DAT_146b2c5b0._4_4_;
      if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10),
         lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass(), fVar12 = DAT_146b2c5b8,
         fVar13 = (float)DAT_146b2c5b0, fVar14 = DAT_146b2c5b0._4_4_, lVar4 == lVar3)) {
        lVar5 = *(longlong *)(lVar5 + 8);
        bVar10 = *(byte *)(lVar5 + 0x2b) >> 1 & 1;
        if (bVar10 != 0) {
          lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x1a8) + (ulonglong)bVar1 * 8);
        }
        if ((*(int *)(lVar8 + 400) != 0) && ((int)(uint)bVar1 < *(int *)(lVar8 + 0x1a0))) {
          lVar11 = (ulonglong)*(ushort *)(*(longlong *)(lVar8 + 0x198) + (ulonglong)bVar1 * 2) +
                   *(longlong *)(lVar8 + 0x188);
        }
        if (lVar11 + (ulonglong)bVar10 * 4 == 0) {
          local_410 = DAT_146b2c5b8;
          puVar9 = &local_418;
          local_418 = CONCAT44(DAT_146b2c5b0._4_4_,(float)DAT_146b2c5b0);
        }
        else {
          puVar9 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(&local_418,lVar5);
        }
        fVar12 = *(float *)(puVar9 + 1);
        fVar13 = (float)*puVar9;
        fVar14 = (float)((ulonglong)*puVar9 >> 0x20);
      }
      if (((fVar13 <= -(float)DAT_14622e780) || ((float)DAT_14622e780 <= fVar13)) ||
         ((fVar14 <= -DAT_14622e780._4_4_ ||
          (((DAT_14622e780._4_4_ <= fVar14 || (fVar12 <= -DAT_14622e788)) ||
           (DAT_14622e788 <= fVar12)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return 0;
      }
      *param_3 = CONCAT44(fVar14,fVar13);
      *(float *)(param_3 + 1) = fVar12;
      *param_4 = 0;
      return 1;
    }
    plVar7 = (longlong *)FUN_140725690(lVar8,*(undefined1 *)(param_1 + 0x88));
    if (plVar7 == (longlong *)0x0) {
      return 0;
    }
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar8 = plVar7[0x2d];
    if (lVar8 == 0) {
      local_418 = _DAT_1468b5d90;
      local_410 = (float)DAT_1468b5d98;
    }
    else {
      local_418 = *(undefined8 *)(lVar8 + 0x220);
      local_410 = *(float *)(lVar8 + 0x228);
    }
    *param_3 = local_418;
    *(float *)(param_3 + 1) = local_410;
    (**(code **)(*plVar7 + 0x570))(plVar7,param_4,local_408,0);
    return 1;
  }
  bVar1 = *(byte *)(param_1 + 0x88);
  lVar5 = FUN_142bbd600(lVar8,bVar1);
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar3 = FUN_142dfd5b0(),
     lVar4 == lVar3)) {
    lVar5 = *(longlong *)(lVar5 + 8);
    bVar10 = *(byte *)(lVar5 + 0x2b) >> 1 & 1;
    if (bVar10 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x1a8) + (ulonglong)bVar1 * 8);
    }
    if ((*(int *)(lVar8 + 400) != 0) && ((int)(uint)bVar1 < *(int *)(lVar8 + 0x1a0))) {
      lVar11 = (ulonglong)*(ushort *)(*(longlong *)(lVar8 + 0x198) + (ulonglong)bVar1 * 2) +
               *(longlong *)(lVar8 + 0x188);
    }
    if (lVar11 + (ulonglong)bVar10 * 4 != 0) {
      puVar6 = (undefined *)FUN_1404d0e40(lVar5);
      goto LAB_140737cde;
    }
  }
  puVar6 = &DAT_146b30fb0;
LAB_140737cde:
  FUN_140726d20(local_3f8,puVar6);
  plVar7 = (longlong *)FUN_142dd0030(local_3f8);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  lVar8 = plVar7[0x2d];
  if (lVar8 == 0) {
    local_418 = _DAT_1468b5d90;
    local_410 = (float)DAT_1468b5d98;
  }
  else {
    local_418 = *(undefined8 *)(lVar8 + 0x220);
    local_410 = *(float *)(lVar8 + 0x228);
  }
  *param_3 = local_418;
  *(float *)(param_3 + 1) = local_410;
  (**(code **)(*plVar7 + 0x570))(plVar7,param_4,local_408,0);
  return 1;
}



// FUNCTION 1407380a0 FUN_1407380a0 body=20 status=ok
// SIG undefined FUN_1407380a0(void)

longlong FUN_1407380a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x198);
  }
  return lVar1;
}



// FUNCTION 1407380c0 FUN_1407380c0 body=609 status=ok
// SIG undefined FUN_1407380c0(void)

longlong * FUN_1407380c0(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_38 = *(undefined4 *)(param_2 + 0x10);
  uStack_34 = *(undefined4 *)(param_2 + 0x14);
  uStack_30 = *(undefined4 *)(param_2 + 0x18);
  uStack_2c = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *param_2;
  FQuat::Rotator(&local_38,param_1);
  lVar2 = *(longlong *)(param_2 + 0x88);
  if (lVar2 == 0) {
    return param_1;
  }
  if (cVar1 == '\x05') {
    local_38 = *(undefined4 *)(lVar2 + 0x210);
    uStack_34 = *(undefined4 *)(lVar2 + 0x214);
    uStack_30 = *(undefined4 *)(lVar2 + 0x218);
    uStack_2c = *(undefined4 *)(lVar2 + 0x21c);
    FQuat::Rotator(&local_38,&local_48);
    local_44 = local_44 + 180.0;
    fVar4 = (float)(int)(local_44 * 0.0027777778) * 360.0;
    if (ABS(local_44) < ABS(fVar4)) {
      fVar4 = local_44;
    }
    local_44 = local_44 - fVar4;
    if (local_44 < 0.0) {
      local_44 = local_44 + 360.0;
    }
    if (180.0 < local_44) {
      local_44 = local_44 - 360.0;
    }
    *param_1 = (ulonglong)(uint)local_44 << 0x20;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    local_44 = *(float *)(lVar2 + 0x224) - *(float *)(param_2 + 0x24);
    local_48 = *(float *)(lVar2 + 0x220) - *(float *)(param_2 + 0x20);
    local_40 = *(float *)(lVar2 + 0x228) - *(float *)(param_2 + 0x28);
    fVar4 = local_44 * local_44 + local_48 * local_48;
    if (fVar4 == 1.0) {
      if (local_40 != 0.0) {
        local_40 = 0.0;
      }
    }
    else if (1e-08 <= fVar4) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      local_40 = 0.0;
      local_48 = local_48 * fVar5;
      local_44 = local_44 * fVar5;
    }
    else {
      local_48 = DAT_1468b5d90;
      local_44 = DAT_1468b5d94;
      local_40 = DAT_1468b5d98;
    }
    plVar3 = (longlong *)FVector::Rotation(&local_48,&local_38);
    *param_1 = *plVar3;
    *(int *)(param_1 + 1) = (int)plVar3[1];
  }
  return param_1;
}



// FUNCTION 140738330 GetOldPlayerName body=33 status=ok
// SIG undefined GetOldPlayerName(void)

undefined8 APlayerState::GetOldPlayerName(longlong param_1,undefined8 param_2)

{
  FUN_140726540(param_2,param_1 + 0x310);
  return param_2;
}



// FUNCTION 140738360 FUN_140738360 body=97 status=ok
// SIG undefined FUN_140738360(void)

undefined8 FUN_140738360(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1e;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Retrieves all allowed AINodes",0x3c);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407383d0 FUN_1407383d0 body=97 status=ok
// SIG undefined FUN_1407383d0(void)

undefined8 FUN_1407383d0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x2f;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Finds all nearby cover that uses the slot type",0x5e)
  ;
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140738440 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UEnvQueryTest_Outside::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"AINodes",0x10);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407384b0 GetDescriptionDetails body=97 status=ok
// SIG undefined GetDescriptionDetails(void)

undefined8 UEnvQueryTest_Cover::GetDescriptionDetails(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Cover",0xc);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}


