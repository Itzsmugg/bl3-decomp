// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406c2bb0 FUN_1406c2bb0 body=725 status=ok
// SIG undefined FUN_1406c2bb0(void)

int * FUN_1406c2bb0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *_Src;
  bool local_res8;
  
  iVar15 = -1;
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
    iVar5 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar11 * 0x20 + *param_1);
  puVar10 = (undefined4 *)param_3[1];
  FString::FString(_Src,*param_3);
  puVar12 = &DAT_143f3eda8;
  *(undefined4 *)(_Src + 2) = *puVar10;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*_Src;
      }
      iVar4 = FUN_140438070(puVar9);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar7 = *param_1;
        do {
          lVar13 = (longlong)iVar4 * 0x20;
          if (*(int *)(_Src + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar13 + 8 + lVar7) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar13 + lVar7);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
          iVar11 = iVar4;
          if (iVar5 == 0) break;
          lVar7 = *param_1;
          iVar4 = *(int *)(lVar7 + 0x18 + lVar13);
          iVar11 = iVar15;
        } while (iVar4 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      plVar14 = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x18);
      iVar4 = *param_2;
      bVar2 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar4;
      }
      puVar10 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar10[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1406c2e5c;
    }
  }
  cVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar15 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar12 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar12);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x1c) = uVar6;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar15;
  }
LAB_1406c2e5c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1406c2e90 FUN_1406c2e90 body=159 status=ok
// SIG undefined FUN_1406c2e90(void)

undefined8 * FUN_1406c2e90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144051150;
    puVar1[3] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    if (*(int *)((longlong)puVar1 + 0x24) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 3,0);
    }
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    if (*(int *)((longlong)puVar1 + 0x3c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 6,0);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406c2f30 FUN_1406c2f30 body=155 status=ok
// SIG undefined FUN_1406c2f30(void)

undefined8 * FUN_1406c2f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR__FST_CargoObjects__pf2042859628_144051120;
    puVar1[3] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    if (*(int *)((longlong)puVar1 + 0x24) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 3,0);
    }
    *(undefined4 *)(puVar1 + 6) = 0;
    if (*(int *)((longlong)puVar1 + 0x34) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 5,0);
    }
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406c2fd0 FUN_1406c2fd0 body=195 status=ok
// SIG undefined FUN_1406c2fd0(void)

undefined8 * FUN_1406c2fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144051140;
    puVar1[3] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    if (*(int *)((longlong)puVar1 + 0x24) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 3,0);
    }
    *(undefined4 *)(puVar1 + 6) = 0;
    if (*(int *)((longlong)puVar1 + 0x34) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 5,0);
    }
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)(puVar1 + 9) = 0;
    if (*(int *)((longlong)puVar1 + 0x4c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 8,0);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406c30a0 FUN_1406c30a0 body=3206 status=ok
// SIG undefined FUN_1406c30a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1406c30a0(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined2 *puVar19;
  wchar_t *pwVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint *puVar27;
  undefined4 uVar28;
  undefined1 auStack_c18 [32];
  longlong *local_bf8;
  undefined8 local_bf0;
  char local_be8;
  undefined2 local_be0 [4];
  undefined2 local_bd8 [4];
  undefined2 local_bd0 [4];
  undefined2 local_bc8 [4];
  undefined2 local_bc0 [4];
  undefined2 local_bb8 [4];
  undefined2 local_bb0 [4];
  longlong local_ba8;
  int local_ba0;
  undefined4 local_b9c;
  undefined8 *local_b98;
  longlong *local_b90;
  char local_b88;
  undefined2 *local_b80;
  ulonglong local_b78;
  int local_b70;
  uint uStack_b6c;
  uint *puStack_b68;
  undefined4 local_b60;
  undefined8 uStack_b5c;
  undefined4 uStack_b54;
  undefined2 *local_b50;
  undefined8 local_b48;
  undefined2 *local_b40;
  undefined8 local_b38;
  longlong local_b30;
  int iStack_b28;
  uint uStack_b24;
  uint *puStack_b20;
  undefined8 uStack_b18;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  int local_b08;
  undefined2 *local_b00;
  int local_af8;
  undefined1 local_af0 [16];
  undefined8 local_ae0;
  uint uStack_ad8;
  int iStack_ad4;
  undefined4 local_ad0;
  undefined4 uStack_acc;
  longlong local_ac8 [2];
  longlong local_ab8 [2];
  longlong local_aa8 [2];
  undefined1 local_a98 [16];
  undefined1 local_a88 [2560];
  undefined1 *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_c18;
  lVar16 = *param_1;
  local_bf8 = (longlong *)0x0;
  local_bf0 = 1;
  local_be8 = param_3;
  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_bf8,0);
  plVar12 = local_bf8;
  FString::FString(local_bf8,lVar16);
  plVar12[2] = *(longlong *)(lVar16 + 0x10);
  lVar18 = *(longlong *)(lVar16 + 0x18);
  plVar12[3] = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(plVar12 + 4) = *(undefined1 *)(lVar16 + 0x20);
  do {
    if ((int)local_bf0 < 1) {
      if (local_be8 == '\0') {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
      }
      plVar12 = local_bf8;
      for (iVar21 = (int)local_bf0; iVar21 != 0; iVar21 = iVar21 + -1) {
        plVar4 = (longlong *)plVar12[3];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar22 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 5;
      }
      if (local_bf8 != (longlong *)0x0) {
        FMemory::Free(local_bf8);
      }
      return uVar10;
    }
    iVar21 = (int)local_bf0;
    iVar22 = (int)local_bf0 + -1;
    lVar16 = (longlong)iVar22;
    local_ba8 = local_bf8[lVar16 * 5];
    local_bf8[lVar16 * 5] = 0;
    local_ba0 = (int)local_bf8[lVar16 * 5 + 1];
    local_b9c = *(undefined4 *)((longlong)local_bf8 + lVar16 * 0x28 + 0xc);
    local_bf8[lVar16 * 5 + 1] = 0;
    local_b98 = (undefined8 *)local_bf8[lVar16 * 5 + 2];
    local_b90 = (longlong *)local_bf8[lVar16 * 5 + 3];
    local_bf8[lVar16 * 5 + 3] = 0;
    local_bf8[lVar16 * 5 + 2] = 0;
    local_b88 = (char)local_bf8[lVar16 * 5 + 4];
    plVar4 = (longlong *)local_bf8[lVar16 * 5 + 3];
    plVar12 = local_bf8 + lVar16 * 5;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
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
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    iVar11 = ((int)local_bf0 - iVar22) + -1;
    if (iVar11 != 0) {
      _guard_xfg_dispatch_icall_nop
                (plVar12,local_bf8 + (longlong)iVar21 * 5,(longlong)iVar11 * 0x28);
    }
    local_bf0 = CONCAT44(local_bf0._4_4_,iVar22);
    iVar11 = 0;
    uVar26 = 0;
    switch(*(undefined4 *)(local_b98 + 1)) {
    case 1:
      if (local_ba0 < 2) {
        lVar16 = *param_2;
        if (((*(int *)(lVar16 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(lVar16 + 0x20) == 10)) {
          local_bd0[0] = 0x2c;
          (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))(*(longlong **)(lVar16 + 8),local_bd0,2);
        }
        local_b50 = (undefined2 *)0x0;
        local_b48 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b50,0);
        puVar19 = local_b50;
        FGenericPlatformString::Memcpy(local_b50,L"null",10);
        if ((int)local_b48 == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          iVar11 = (int)local_b48 + -1;
          puVar17 = puVar19;
        }
        (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))
                  (*(longlong **)(lVar16 + 8),puVar17,(longlong)iVar11 * 2);
        if (puVar19 != (undefined2 *)0x0) {
          FMemory::Free(puVar19);
        }
        *(undefined4 *)(lVar16 + 0x20) = 0xb;
      }
      else {
        plVar12 = (longlong *)*param_2;
        if ((((int)plVar12[4] - 2U & 0xfffffff5) != 0) || ((int)plVar12[4] == 10)) {
          local_bc8[0] = 0x2c;
          (**(code **)(*(longlong *)plVar12[1] + 0x50))((longlong *)plVar12[1],local_bc8,2);
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_ba8);
        local_bc0[0] = 0x3a;
        (**(code **)(*(longlong *)plVar12[1] + 0x50))((longlong *)plVar12[1],local_bc0,2);
        local_b40 = (undefined2 *)0x0;
        local_b38 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b40,0);
        puVar19 = local_b40;
        FGenericPlatformString::Memcpy(local_b40,L"null",10);
        if ((int)local_b38 == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          iVar11 = (int)local_b38 + -1;
          puVar17 = puVar19;
        }
        (**(code **)(*(longlong *)plVar12[1] + 0x50))
                  ((longlong *)plVar12[1],puVar17,(longlong)iVar11 * 2);
        if (puVar19 != (undefined2 *)0x0) {
          FMemory::Free(puVar19);
        }
        *(undefined4 *)(plVar12 + 4) = 0xb;
      }
      break;
    case 2:
      lVar16 = *param_2;
      if (local_ba0 < 2) {
        uVar13 = FJsonValue::AsString(local_b98,local_ac8);
        FUN_1406d33c0(lVar16,uVar13);
        if (local_ac8[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        uVar13 = FJsonValue::AsString(local_b98,local_a98);
        FUN_1404f77b0(lVar16,&local_ba8,uVar13);
      }
      break;
    case 3:
      lVar16 = *param_2;
      if (local_ba0 < 2) {
        uVar13 = FJsonValue::AsNumber();
        if (((*(int *)(lVar16 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(lVar16 + 0x20) == 10)) {
          local_be0[0] = 0x2c;
          (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))(*(longlong **)(lVar16 + 8),local_be0,2);
        }
        FString::PrintfImpl(&local_b00,L"%.17g",uVar13);
        if (local_af8 == 0) {
          puVar19 = &DAT_143f3eda8;
        }
        else {
          iVar11 = local_af8 + -1;
          puVar19 = local_b00;
        }
        (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))
                  (*(longlong **)(lVar16 + 8),puVar19,(longlong)iVar11 * 2);
        if (local_b00 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *(undefined4 *)(lVar16 + 0x20) = 8;
      }
      else {
        uVar28 = FJsonValue::AsNumber();
        FUN_1406c3e30(lVar16,&local_ba8,uVar28);
      }
      break;
    case 4:
      if (local_ba0 < 2) {
        lVar16 = *param_2;
        cVar9 = FJsonValue::AsBool();
        if (((*(int *)(lVar16 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(lVar16 + 0x20) == 10)) {
          local_bd8[0] = 0x2c;
          (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))(*(longlong **)(lVar16 + 8),local_bd8,2);
        }
        pwVar20 = L"false";
        if (cVar9 != '\0') {
          pwVar20 = L"true";
        }
        puVar19 = (undefined2 *)0x0;
        uVar26 = 0;
        local_b80 = (undefined2 *)0x0;
        local_b78 = 0;
        if (*pwVar20 != L'\0') {
          lVar18 = -1;
          do {
            lVar3 = lVar18 + 1;
            lVar18 = lVar18 + 1;
          } while (pwVar20[lVar3] != L'\0');
          uVar23 = (int)lVar18 + 1;
          local_b78 = (ulonglong)uVar23;
          uVar26 = uVar23;
          if (0 < (int)uVar23) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b80,0);
            uVar26 = (uint)local_b78;
          }
          puVar19 = local_b80;
          FGenericPlatformString::Memcpy(local_b80,pwVar20,(longlong)(int)uVar23 * 2);
        }
        if (uVar26 == 0) {
          iVar21 = 0;
          puVar17 = &DAT_143f3eda8;
        }
        else {
          iVar21 = uVar26 - 1;
          puVar17 = puVar19;
        }
        (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))
                  (*(longlong **)(lVar16 + 8),puVar17,(longlong)iVar21 * 2);
        if (puVar19 != (undefined2 *)0x0) {
          FMemory::Free(puVar19);
        }
        *(uint *)(lVar16 + 0x20) = 10 - (uint)(cVar9 != '\0');
      }
      else {
        lVar16 = *param_2;
        uVar10 = FJsonValue::AsBool();
        FUN_1406c4290(lVar16,&local_ba8,uVar10);
      }
      break;
    case 5:
      if (local_b88 == '\0') {
        local_b88 = '\x01';
        local_bf0 = CONCAT44(local_bf0._4_4_,iVar21);
        if (local_bf0._4_4_ < iVar21) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_bf8,iVar22);
        }
        plVar12 = local_bf8 + (longlong)iVar22 * 5;
        FString::FString(plVar12);
        plVar12[2] = (longlong)local_b98;
        plVar12[3] = (longlong)local_b90;
        if (local_b90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b90 + 1) = (int)local_b90[1] + 1;
          UNLOCK();
        }
        *(char *)(plVar12 + 4) = local_b88;
        if (local_ba0 < 2) {
          FUN_1406d27b0();
        }
        else {
          FUN_1406d26e0(*param_2);
        }
        plVar12 = (longlong *)FJsonValue::AsArray(local_b98);
        iVar21 = (int)plVar12[1] + -1;
        lVar16 = (longlong)iVar21;
        if (-1 < iVar21) {
          lVar18 = lVar16 << 4;
          do {
            lVar3 = *(longlong *)(lVar18 + 8 + *plVar12);
            lVar25 = *(longlong *)(lVar18 + *plVar12);
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            lVar24 = (longlong)(int)local_bf0;
            iVar21 = (int)local_bf0 + 1;
            local_bf0 = CONCAT44(local_bf0._4_4_,iVar21);
            if (local_bf0._4_4_ < iVar21) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_bf8);
            }
            lVar18 = lVar18 + -0x10;
            lVar16 = lVar16 + -1;
            local_bf8[lVar24 * 5] = 0;
            local_bf8[lVar24 * 5 + 1] = 0;
            local_bf8[lVar24 * 5 + 2] = lVar25;
            local_bf8[lVar24 * 5 + 3] = lVar3;
            *(undefined1 *)(local_bf8 + lVar24 * 5 + 4) = 0;
          } while (-1 < lVar16);
        }
      }
      else {
        FUN_1406d25b0(*param_2);
      }
      break;
    case 6:
      if (local_b88 == '\0') {
        local_b88 = '\x01';
        local_bf0 = CONCAT44(local_bf0._4_4_,iVar21);
        if (local_bf0._4_4_ < iVar21) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_bf8,iVar22);
        }
        plVar12 = local_bf8 + (longlong)iVar22 * 5;
        FString::FString(plVar12,&local_ba8);
        plVar12[2] = (longlong)local_b98;
        plVar12[3] = (longlong)local_b90;
        if (local_b90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b90 + 1) = (int)local_b90[1] + 1;
          UNLOCK();
        }
        *(char *)(plVar12 + 4) = local_b88;
        if (local_ba0 < 2) {
          FUN_14068b290();
        }
        else {
          FUN_1406d2da0(*param_2,&local_ba8);
        }
        plVar12 = (longlong *)(**(code **)*local_b98)();
        local_88 = (undefined1 *)0x0;
        local_80 = 0;
        lVar16 = *plVar12;
        if (0 < *(int *)(lVar16 + 8) - *(int *)(lVar16 + 0x34)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>
          ::ResizeTo(local_a88);
          lVar16 = *plVar12;
        }
        iVar21 = *(int *)(lVar16 + 0x28);
        puStack_b68 = (uint *)(lVar16 + 0x10);
        uStack_b6c = 1;
        local_b70 = 0;
        uStack_b5c = 0;
        if (iVar21 != 0) {
          puVar27 = *(uint **)(lVar16 + 0x20);
          if (*(uint **)(lVar16 + 0x20) == (uint *)0x0) {
            puVar27 = puStack_b68;
          }
          uVar23 = *puVar27;
          while (uVar23 == 0) {
            lVar18 = (longlong)local_b70;
            uVar26 = uVar26 + 0x20;
            iVar22 = local_b70 + 1;
            uStack_b5c = (ulonglong)uVar26 << 0x20;
            bVar5 = (int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b70;
            local_b70 = iVar22;
            if (bVar5) goto LAB_1406c3971;
            uVar23 = puVar27[lVar18 + 1];
          }
          uStack_b6c = -uVar23 & uVar23;
          local_b08 = 0x1f;
          if (uStack_b6c != 0) {
            for (; uStack_b6c >> local_b08 == 0; local_b08 = local_b08 + -1) {
            }
          }
          if (uStack_b6c == 0) {
            iVar22 = 0x20;
          }
          else {
            iVar22 = 0x1f - local_b08;
          }
          iVar22 = (uVar26 - iVar22) + 0x1f;
          uStack_b5c._4_4_ = (undefined4)((ulonglong)uStack_b5c >> 0x20);
          uStack_b5c = CONCAT44(uStack_b5c._4_4_,iVar22);
          if (iVar21 < iVar22) {
LAB_1406c3971:
            uStack_b5c = CONCAT44(uStack_b5c._4_4_,iVar21);
          }
        }
        local_b60 = 0xffffffff;
        uStack_b18 = CONCAT44((int)uStack_b5c,0xffffffff);
        uStack_b10 = uStack_b5c._4_4_;
        uStack_b0c = uStack_b54;
        iStack_b28 = local_b70;
        uStack_b24 = uStack_b6c;
        local_af0._8_4_ = local_b70;
        local_af0._0_8_ = lVar16;
        local_af0._12_4_ = uStack_b6c;
        local_ad0 = uStack_b5c._4_4_;
        uStack_acc = uStack_b54;
        uStack_ad8 = 0xffffffff;
        iStack_ad4 = (int)uStack_b5c;
        local_b30 = lVar16;
        puStack_b20 = puStack_b68;
        local_ae0 = puStack_b68;
        puVar27 = puStack_b68;
        if ((int)uStack_b5c < iVar21) {
          do {
            uVar6 = local_80;
            uVar8 = uStack_acc;
            uVar28 = local_ad0;
            iVar21 = iStack_ad4;
            uVar26 = uStack_ad8;
            auVar7 = local_af0;
            lVar16 = (longlong)(int)local_80;
            iVar22 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar22);
            local_ae0 = puVar27;
            if (local_80._4_4_ < iVar22) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>
              ::ResizeGrow(local_a88,uVar6 & 0xffffffff);
            }
            puVar15 = local_a88;
            if (local_88 != (undefined1 *)0x0) {
              puVar15 = local_88;
            }
            *(undefined1 (*) [16])(puVar15 + lVar16 * 0x28) = auVar7;
            plVar12 = (longlong *)(puVar15 + lVar16 * 0x28 + 0x10);
            *plVar12 = (longlong)puVar27;
            *(uint *)(plVar12 + 1) = uVar26;
            *(int *)((longlong)plVar12 + 0xc) = iVar21;
            *(ulonglong *)(puVar15 + lVar16 * 0x28 + 0x20) = CONCAT44(uVar8,uVar28);
            uStack_ad8 = uVar26 & ~auVar7._12_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_af0 + 8);
            puVar27 = local_ae0;
          } while (iStack_ad4 < (int)local_ae0[6]);
        }
        lVar16 = (longlong)((int)local_80 + -1);
        if (-1 < (int)local_80 + -1) {
          lVar18 = lVar16 * 0x28;
          do {
            puVar15 = local_a88;
            if (local_88 != (undefined1 *)0x0) {
              puVar15 = local_88;
            }
            lVar3 = **(longlong **)(puVar15 + lVar18) +
                    (longlong)*(int *)(puVar15 + lVar18 + 0x1c) * 0x28;
            FString::FString(&local_b30,lVar3);
            uVar6 = local_bf0;
            puVar27 = *(uint **)(lVar3 + 0x10);
            lVar3 = *(longlong *)(lVar3 + 0x18);
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            lVar25 = (longlong)(int)local_bf0;
            iVar21 = (int)local_bf0 + 1;
            local_bf0 = CONCAT44(local_bf0._4_4_,iVar21);
            puStack_b20 = puVar27;
            uStack_b18 = lVar3;
            if (local_bf0._4_4_ < iVar21) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_bf8,uVar6 & 0xffffffff);
            }
            lVar18 = lVar18 + -0x28;
            lVar16 = lVar16 + -1;
            local_bf8[lVar25 * 5] = local_b30;
            *(int *)(local_bf8 + lVar25 * 5 + 1) = iStack_b28;
            *(uint *)((longlong)local_bf8 + lVar25 * 0x28 + 0xc) = uStack_b24;
            local_bf8[lVar25 * 5 + 2] = (longlong)puVar27;
            local_bf8[lVar25 * 5 + 3] = lVar3;
            *(undefined1 *)(local_bf8 + lVar25 * 5 + 4) = 0;
          } while (-1 < lVar16);
        }
        if (local_88 != (undefined1 *)0x0) {
          FMemory::Free(local_88);
        }
      }
      else {
        FUN_14068b240(*param_2);
      }
      break;
    case 7:
      plVar12 = (longlong *)*param_2;
      if (local_ba0 < 2) {
        uVar13 = FJsonValue::AsString(local_b98,local_ab8);
        FUN_1406d3330(plVar12,uVar13);
        if (local_ab8[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        puVar14 = (undefined8 *)FJsonValue::AsString(local_b98,local_aa8);
        if ((((int)plVar12[4] - 2U & 0xfffffff5) != 0) || ((int)plVar12[4] == 10)) {
          local_bb8[0] = 0x2c;
          (**(code **)(*(longlong *)plVar12[1] + 0x50))((longlong *)plVar12[1],local_bb8,2);
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_ba8);
        local_bb0[0] = 0x3a;
        (**(code **)(*(longlong *)plVar12[1] + 0x50))((longlong *)plVar12[1],local_bb0,2);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar19 = &DAT_143f3eda8;
        }
        else {
          puVar19 = (undefined2 *)*puVar14;
          uVar26 = *(int *)(puVar14 + 1) - 1;
        }
        (**(code **)(*(longlong *)plVar12[1] + 0x50))
                  ((longlong *)plVar12[1],puVar19,(longlong)(int)uVar26 * 2);
        *(undefined4 *)(plVar12 + 4) = 7;
        if (local_aa8[0] != 0) {
          FMemory::Free();
        }
      }
      break;
    default:
      LowLevelFatalErrorHandler("Unknown",0x24a,L"Could not print Json Value, unrecognized type.");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x24a,L"Could not print Json Value, unrecognized type.");
    }
    plVar12 = local_b90;
    if (local_b90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b90 + 1;
      lVar16 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_b90)(local_b90);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar21 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (local_ba8 != 0) {
      FMemory::Free();
    }
  } while( true );
}



// FUNCTION 1406c3d50 FUN_1406c3d50 body=219 status=ok
// SIG undefined FUN_1406c3d50(void)

void FUN_1406c3d50(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 local_res18 [8];
  undefined2 *local_18;
  int local_10;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res18[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  FString::PrintfImpl(&local_18,L"%lld",(longlong)param_3);
  if (local_10 == 0) {
    local_10 = 0;
    puVar1 = &DAT_143f3eda8;
  }
  else {
    local_10 = local_10 + -1;
    puVar1 = local_18;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))
            ((longlong *)param_1[1],puVar1,(longlong)local_10 * 2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 1406c3e30 FUN_1406c3e30 body=224 status=ok
// SIG undefined FUN_1406c3e30(void)

void FUN_1406c3e30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 local_res8 [4];
  undefined2 *local_28;
  int local_20;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  FString::PrintfImpl(&local_28,L"%.17g",param_3);
  if (local_20 == 0) {
    local_20 = 0;
    puVar1 = &DAT_143f3eda8;
  }
  else {
    local_20 = local_20 + -1;
    puVar1 = local_28;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))
            ((longlong *)param_1[1],puVar1,(longlong)local_20 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 1406c3f10 FUN_1406c3f10 body=305 status=ok
// SIG undefined FUN_1406c3f10(void)

void FUN_1406c3f10(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1406c4050 FUN_1406c4050 body=219 status=ok
// SIG undefined FUN_1406c4050(void)

void FUN_1406c4050(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 local_res8 [4];
  undefined2 *local_18;
  int local_10;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  FString::PrintfImpl(&local_18,L"%lld",param_3);
  if (local_10 == 0) {
    local_10 = 0;
    puVar1 = &DAT_143f3eda8;
  }
  else {
    local_10 = local_10 + -1;
    puVar1 = local_18;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))
            ((longlong *)param_1[1],puVar1,(longlong)local_10 * 2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 1406c4130 FUN_1406c4130 body=352 status=ok
// SIG undefined FUN_1406c4130(void)

void FUN_1406c4130(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  undefined2 *local_28;
  int local_20;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  FString::PrintfImpl(&local_28,L"%lld",param_3);
  if (local_20 == 0) {
    local_20 = 0;
    puVar2 = &DAT_143f3eda8;
  }
  else {
    local_20 = local_20 + -1;
    puVar2 = local_28;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))
            ((longlong *)param_1[1],puVar2,(longlong)local_20 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 1406c4290 FUN_1406c4290 body=321 status=ok
// SIG undefined FUN_1406c4290(void)

void FUN_1406c4290(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined2 local_res18 [8];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res18[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  pwVar6 = L"false";
  if (param_3 != 0) {
    pwVar6 = L"true";
  }
  puVar4 = (undefined2 *)0x0;
  iVar7 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  iVar5 = iVar7;
  if (*pwVar6 != L'\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pwVar6[lVar3] != L'\0');
    iVar2 = (int)lVar3 + 1;
    local_30 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar5 = local_30;
    puVar4 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar6,(longlong)iVar2 * 2);
  }
  if (iVar5 == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    iVar7 = iVar5 + -1;
    puVar1 = puVar4;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],puVar1,(longlong)iVar7 * 2);
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  *(uint *)(param_1 + 4) = (param_3 ^ 1) + 9;
  return;
}



// FUNCTION 1406c43e0 FUN_1406c43e0 body=700 status=ok
// SIG undefined FUN_1406c43e0(void)

undefined8 * FUN_1406c43e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  
  *param_1 = 0;
  puVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = param_1 + 0xc;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *puVar1 = 0;
  param_1[0xb] = 0;
  *puVar2 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  puVar3 = param_1 + 8;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  uVar5 = DAT_14622e550;
  pvVar4 = DAT_14622e548;
  if ((void **)puVar3 != &DAT_14622e548) {
    iVar6 = (int)DAT_14622e550;
    *(int *)(param_1 + 9) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,uVar5 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar4,(longlong)iVar6 * 2);
    }
  }
  uVar5 = DAT_14622e550;
  pvVar4 = DAT_14622e548;
  if ((void **)puVar1 != &DAT_14622e548) {
    iVar6 = (int)DAT_14622e550;
    *(int *)(param_1 + 0xb) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x5c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,uVar5 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar6 * 2);
    }
  }
  uVar5 = DAT_14622e560;
  pvVar4 = DAT_14622e558;
  if ((void **)puVar2 != &DAT_14622e558) {
    iVar6 = (int)DAT_14622e560;
    *(int *)(param_1 + 0xd) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,uVar5 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar6 * 2);
    }
  }
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 1406c46a0 FUN_1406c46a0 body=132 status=ok
// SIG undefined FUN_1406c46a0(void)

void FUN_1406c46a0(undefined8 *param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *param_1 = &PTR__scalar_deleting_destructor__144050ca8;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x11) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = local_resc;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FUN_1406ada20(param_1);
  return;
}



// FUNCTION 1406c4730 FUN_1406c4730 body=547 status=ok
// SIG undefined FUN_1406c4730(void)

void FUN_1406c4730(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x208,0);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1b8,0);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  FUN_1406c61e0(param_1 + 0x168,0);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FDataDrivenPlatformInfoRegistry::FPlatformInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xc0,0);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x70,0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 1406c4960 FUN_1406c4960 body=669 status=ok
// SIG undefined FUN_1406c4960(void)

void FUN_1406c4960(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res10 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (*(char *)*param_2 != '\0') {
    puVar6 = (undefined8 *)FName::FName(local_res10,"GbxMixer",1);
    uVar3 = *puVar6;
    uVar7 = FUN_14168dc80();
    FModuleManager::GetModule(uVar7,uVar3);
    lVar10 = *param_1;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar11 = 0;
    if (&local_48 != (void **)(lVar10 + 0xa0)) {
      uVar1 = *(uint *)(lVar10 + 0xa8);
      pvVar4 = *(void **)(lVar10 + 0xa0);
      local_40 = (ulonglong)uVar1;
      iVar11 = 0;
      if (uVar1 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,uVar1);
        _guard_xfg_dispatch_icall_nop(local_48,pvVar4,(longlong)(int)uVar1 * 2);
        lVar10 = *param_1;
        iVar11 = local_50._4_4_;
      }
    }
    if (&local_58 != (void **)(lVar10 + 0xb0)) {
      iVar2 = *(int *)(lVar10 + 0xb8);
      pvVar4 = *(void **)(lVar10 + 0xb0);
      local_50 = CONCAT44(local_50._4_4_,iVar2);
      if ((iVar2 == 0) && (iVar11 == 0)) {
        local_50 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar2);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar4,(longlong)iVar2 * 2);
      }
    }
    plVar8 = (longlong *)UWorldComposition::StaticClass();
    lVar10 = plVar8[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar10 = plVar8[0x1f];
    }
    if (&local_38 != (void **)(lVar10 + 0x48)) {
      iVar11 = *(int *)(lVar10 + 0x50);
      pvVar4 = *(void **)(lVar10 + 0x48);
      local_30 = CONCAT44(local_30._4_4_,iVar11);
      if ((iVar11 == 0) && (local_30._4_4_ == 0)) {
        local_30 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar11);
        _guard_xfg_dispatch_icall_nop(local_38,pvVar4,(longlong)iVar11 * 2);
      }
    }
    FUN_1406d1a10(param_1[1],&local_58,*param_2 + 8);
    local_68 = *param_1;
    plVar8 = (longlong *)param_1[1];
    uStack_60 = plVar8;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_144051440;
      *(undefined4 *)(plVar9 + 1) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_68._4_4_;
      *(undefined4 *)(plVar9 + 2) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)plVar9 + 0x14) = uStack_60._4_4_;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_144051488;
    }
    if (&local_68 != plVar8) {
      if (plVar9 == (longlong *)0x0) {
        if (((int)plVar8[1] != 0) && (plVar5 = (longlong *)*plVar8, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*plVar8 != 0) {
            lVar10 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar10;
          }
          *(undefined4 *)(plVar8 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar9 + 0x30))(plVar9,plVar8);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar10 = FMemory::Realloc(plVar9,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406c4c00 FUN_1406c4c00 body=759 status=ok
// SIG undefined FUN_1406c4c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406c4c00(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_f8;
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(char *)*param_2 == '\0') {
    return;
  }
  FString::operator=(*param_1 + 0xc0,(char *)*param_2 + 0x18);
  local_108 = *param_1;
  uStack_100 = param_1[1];
  local_c8 = (longlong *)0x0;
  local_b8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_108._4_4_;
    *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_100._4_4_;
  }
  local_f8 = (code *)&LAB_1406c5240;
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x88);
  lVar7 = *param_1;
  local_a8 = 0;
  local_a0 = 0;
  uVar1 = *(undefined8 *)(lVar5 + 0x90);
  FWeakObjectPtr::operator=(local_98,0);
  plVar8 = local_c8;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  if ((local_c8 == (longlong *)0x0) &&
     (_guard_xfg_dispatch_icall_nop(local_78,local_e8,0x20), local_58 != (longlong *)0x0)) {
    FMemory::Free();
    plVar8 = local_c8;
  }
  iVar3 = local_b8;
  local_58 = plVar8;
  local_c8 = (longlong *)0x0;
  local_48 = local_b8;
  local_b8 = 0;
  if (iVar3 != 0) {
    plVar6 = local_78;
    if (plVar8 != (longlong *)0x0) {
      plVar6 = plVar8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
      local_88 = local_f8;
      goto LAB_1406c4d4d;
    }
  }
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1406c4d4d:
  local_110 = 0xbf800000;
  local_118 = 1;
  local_f8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar1,lVar7 + 0xe0,&local_a8,0x40a00000);
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  local_108 = *param_1;
  lVar7 = param_1[1];
  plVar8 = (longlong *)(lVar7 + 0x10);
  uStack_100 = lVar7;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_144051290;
    *(undefined4 *)(plVar6 + 1) = (undefined4)local_108;
    *(undefined4 *)((longlong)plVar6 + 0xc) = local_108._4_4_;
    *(undefined4 *)(plVar6 + 2) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)plVar6 + 0x14) = uStack_100._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar5;
    *plVar6 = (longlong)&PTR_GetPoolName_1440512d8;
  }
  if (&local_108 != plVar8) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x18) != 0) && (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar5 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar5;
        }
        *(undefined4 *)(lVar7 + 0x18) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar8);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar7 = FMemory::Realloc(plVar6,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  if (local_b8 != 0) {
    plVar8 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar8 = local_c8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406c4f00 FUN_1406c4f00 body=203 status=ok
// SIG undefined FUN_1406c4f00(void)

void FUN_1406c4f00(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146858220;
  if ((DAT_146858220 != 0) && (DAT_1468c2185 == '\0')) {
    if (*(longlong *)(DAT_146858220 + 0x80) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x60);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x30);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x10);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
    FMemory::operator_delete(lVar1,0x90);
    DAT_146858220 = 0;
  }
  lVar1 = DAT_146858228;
  if ((DAT_146858228 != 0) && (DAT_1468c2185 == '\0')) {
    FUN_1406c4730(DAT_146858228);
    FMemory::operator_delete(lVar1,600);
    DAT_146858228 = 0;
  }
  return;
}



// FUNCTION 1406c4fd0 FUN_1406c4fd0 body=134 status=ok
// SIG undefined FUN_1406c4fd0(void)

undefined8 * FUN_1406c4fd0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_CanBeUsedOnAnyThread_144050f70;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1406c5060 FUN_1406c5060 body=134 status=ok
// SIG undefined FUN_1406c5060(void)

undefined8 * FUN_1406c5060(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_CanBeUsedOnAnyThread_144050ea0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1406c50f0 FUN_1406c50f0 body=43 status=ok
// SIG undefined FUN_1406c50f0(void)

undefined8 * FUN_1406c50f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1406c5120 FUN_1406c5120 body=43 status=ok
// SIG undefined FUN_1406c5120(void)

undefined8 * FUN_1406c5120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1406c5150 FUN_1406c5150 body=43 status=ok
// SIG undefined FUN_1406c5150(void)

undefined8 * FUN_1406c5150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1406c5180 FUN_1406c5180 body=134 status=ok
// SIG undefined FUN_1406c5180(void)

undefined8 * FUN_1406c5180(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_IsPromotedBuild_144050d90;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1406c5210 FUN_1406c5210 body=43 status=ok
// SIG undefined FUN_1406c5210(void)

undefined8 * FUN_1406c5210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1406c5260 FUN_1406c5260 body=276 status=ok
// SIG undefined FUN_1406c5260(void)

void FUN_1406c5260(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x30);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    FUN_140483870(uVar7,param_1);
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x38))();
    FUN_140483870(uVar7,param_1);
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x48))();
    FUN_140483870(uVar7,param_1);
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x40))();
    FUN_140483870(uVar7,param_1);
    cVar6 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
    if (cVar6 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0;
      (**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,1000,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    local_20 = (longlong *)0x0;
    if (plVar1 != &local_28) {
      *plVar1 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_20);
      plVar1 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1406c5380 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1406c5430 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1406c54e0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1406c5590 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1406c5640 FUN_1406c5640 body=440 status=ok
// SIG undefined FUN_1406c5640(void)

void FUN_1406c5640(void)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void **ppvVar5;
  void *local_18;
  ulonglong local_10;
  
  if (DAT_146858220 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x90);
    DAT_146858220 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      *(undefined4 *)(puVar3 + 7) = 0;
      puVar3[8] = 0;
      *(undefined4 *)(puVar3 + 9) = 0;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      puVar3[0xc] = 0;
      *(undefined4 *)(puVar3 + 0xd) = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      DAT_146858220 = puVar3;
    }
    local_18 = (void *)0x0;
    local_10 = 0x31;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    pvVar2 = local_18;
    FGenericPlatformString::Memcpy
              (local_18,L"86b8b0ea1a61ee07070f2bdced345875f92bd95bea971ccd",0x62);
    puVar3 = DAT_146858220;
    ppvVar5 = (void **)(DAT_146858220 + 0xe);
    if (ppvVar5 != &local_18) {
      lVar4 = (longlong)(int)local_10;
      piVar1 = (int *)((longlong)DAT_146858220 + 0x7c);
      *(int *)(DAT_146858220 + 0xf) = (int)local_10;
      if (((int)local_10 == 0) && (*piVar1 == 0)) {
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar5,local_10 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar5,pvVar2,lVar4 * 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    local_18 = (void *)0x0;
    local_10 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    pvVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"interactive:robot:self",0x2e);
    puVar3 = DAT_146858220;
    ppvVar5 = (void **)(DAT_146858220 + 0x10);
    if (ppvVar5 != &local_18) {
      lVar4 = (longlong)(int)local_10;
      piVar1 = (int *)((longlong)DAT_146858220 + 0x8c);
      *(int *)(DAT_146858220 + 0x11) = (int)local_10;
      if (((int)local_10 == 0) && (*piVar1 == 0)) {
        *(undefined4 *)((longlong)puVar3 + 0x8c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar5,local_10 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar5,pvVar2,lVar4 * 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  return;
}



// FUNCTION 1406c5800 FUN_1406c5800 body=66 status=ok
// SIG undefined FUN_1406c5800(void)

void FUN_1406c5800(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440513b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1440513f8;
  }
  return;
}



// FUNCTION 1406c5850 FUN_1406c5850 body=66 status=ok
// SIG undefined FUN_1406c5850(void)

void FUN_1406c5850(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1440514d0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_144051518;
  }
  return;
}



// FUNCTION 1406c58a0 FUN_1406c58a0 body=66 status=ok
// SIG undefined FUN_1406c58a0(void)

void FUN_1406c58a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144051290;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1440512d8;
  }
  return;
}



// FUNCTION 1406c58f0 FUN_1406c58f0 body=66 status=ok
// SIG undefined FUN_1406c58f0(void)

void FUN_1406c58f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144051320;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_144051368;
  }
  return;
}



// FUNCTION 1406c5940 FUN_1406c5940 body=66 status=ok
// SIG undefined FUN_1406c5940(void)

void FUN_1406c5940(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144051200;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144051248;
  }
  return;
}



// FUNCTION 1406c5990 FUN_1406c5990 body=66 status=ok
// SIG undefined FUN_1406c5990(void)

void FUN_1406c5990(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144051440;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_144051488;
  }
  return;
}



// FUNCTION 1406c59e0 FUN_1406c59e0 body=58 status=ok
// SIG undefined FUN_1406c59e0(void)

void FUN_1406c59e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144051170;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1440511b8;
  }
  return;
}



// FUNCTION 1406c5a20 DestroyObject body=48 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FTicket_FindFriendsRoom,1>::DestroyObject
               (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406c5a50 FUN_1406c5a50 body=87 status=ok
// SIG undefined FUN_1406c5a50(void)

void FUN_1406c5a50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1406c5ab0 ~FST_CargoObjects__pf2042859628 body=48 status=ok
// SIG undefined ~FST_CargoObjects__pf2042859628(void)

void FST_CargoObjects__pf2042859628::~FST_CargoObjects__pf2042859628(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406c5ae0 DestroyObject body=62 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<Artemis::FPilotSummary>::DestroyObject
               (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406c5b20 Empty body=100 status=ok
// SIG undefined Empty(void)

void TArray<FString,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1406c5b90 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1406c5c10 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1406c5c90 FUN_1406c5c90 body=117 status=ok
// SIG undefined FUN_1406c5c90(void)

void FUN_1406c5c90(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1406c5d10 FUN_1406c5d10 body=117 status=ok
// SIG undefined FUN_1406c5d10(void)

void FUN_1406c5d10(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1406c61e0();
  cVar1 = TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1406c5d90 FUN_1406c5d90 body=181 status=ok
// SIG undefined FUN_1406c5d90(void)

void FUN_1406c5d90(longlong param_1,int param_2)

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
  cVar1 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
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



// FUNCTION 1406c5e50 Empty body=406 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1406c5f21;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_1406c5f21:
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
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iStack_1c * 0x28) != 0) {
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



// FUNCTION 1406c5ff0 Empty body=482 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_1406c60c4;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_1406c60c4:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)(*param_1 + 0x18 + (longlong)iStack_2c * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1406c61e0 FUN_1406c61e0 body=485 status=ok
// SIG undefined FUN_1406c61e0(void)

void FUN_1406c61e0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_1406c62b4;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_1406c62b4:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x50 + *param_1 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1406c63d0 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FDataDrivenPlatformInfoRegistry::FPlatformInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_1406c64a1;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1406c64a1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x30 + *param_1);
      if (plVar6[3] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1406c65a0 FUN_1406c65a0 body=69 status=ok
// SIG undefined FUN_1406c65a0(void)

void FUN_1406c65a0(longlong param_1)

{
  longlong lVar1;
  undefined2 local_res8 [16];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res8[0] = 0x5d;
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x50))(*(longlong **)(lVar1 + 8),local_res8,2);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x20) = 5;
  return;
}



// FUNCTION 1406c6600 FUN_1406c6600 body=69 status=ok
// SIG undefined FUN_1406c6600(void)

void FUN_1406c6600(longlong param_1)

{
  longlong lVar1;
  undefined2 local_res8 [16];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res8[0] = 0x7d;
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x50))(*(longlong **)(lVar1 + 8),local_res8,2);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x20) = 3;
  return;
}



// FUNCTION 1406c66a0 FUN_1406c66a0 body=317 status=ok
// SIG undefined FUN_1406c66a0(void)

void FUN_1406c66a0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18 [2];
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\0') {
    lVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 8) + 0x88);
    lVar5 = *(longlong *)(param_1 + 8);
    FUN_142880530(*(undefined8 *)(lVar4 + 0x90),lVar5 + 0xe0);
    *(undefined8 *)(lVar5 + 0xe0) = 0;
  }
  else if (1 < *(int *)(pcVar1 + 0x10)) {
    FUN_1406cdcd0(*(undefined8 *)(param_1 + 0x10),pcVar1 + 8);
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    plVar6 = (longlong *)(lVar5 + 0x20);
    plVar3 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_144051200;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[3] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_144051248;
    }
    if (local_18 != plVar6) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(lVar5 + 0x28) != 0) &&
           (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar4 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar4;
          }
          *(undefined4 *)(lVar5 + 0x28) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar6);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar5 = FMemory::Realloc(plVar3,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406c67f0 FUN_1406c67f0 body=258 status=ok
// SIG undefined FUN_1406c67f0(void)

void FUN_1406c67f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 8) + 0x88);
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_142880530(*(undefined8 *)(lVar2 + 0x90),lVar1 + 0xe0);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  FString::operator=(*(longlong *)(param_1 + 8) + 0xa0,*param_2 + 8);
  FString::operator=(*(longlong *)(param_1 + 8) + 0xb0,*param_2 + 0x18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0xa8) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(*(longlong *)(param_1 + 8) + 0xa0);
  }
  FConfigCacheIni::SetString
            (DAT_1468b6148,PTR_u_MixerInteractiveStreamingService_14622e588,L"MixerAccessToken",
             puVar4,&DAT_1468e2420);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0xb8) != 0) {
    puVar3 = *(undefined2 **)(*(longlong *)(param_1 + 8) + 0xb0);
  }
  FConfigCacheIni::SetString
            (DAT_1468b6148,PTR_u_MixerInteractiveStreamingService_14622e588,L"MixerTokenType",puVar3
             ,&DAT_1468e2420);
  return;
}



// FUNCTION 1406c6910 FUN_1406c6910 body=124 status=ok
// SIG undefined FUN_1406c6910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406c6910(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))(), (char)in_RAX != '\0')) {
    if ((int)param_1[1] != 0) {
      uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))
                        ((longlong *)*param_1,param_2,param_3,param_4);
      return uVar1;
    }
    uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3,param_4);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406c6990 FUN_1406c6990 body=58 status=ok
// SIG undefined FUN_1406c6990(void)

undefined8 FUN_1406c6990(longlong param_1,undefined8 *param_2)

{
  if (*(char *)*param_2 != '\0') {
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
              (*(longlong *)(param_1 + 8) + 0x28,((char *)*param_2)[0x1c]);
    return 1;
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
            (*(longlong *)(param_1 + 8) + 0x28,(ulonglong)param_2 & 0xffffffffffffff00);
  return 1;
}



// FUNCTION 1406c69d0 FUN_1406c69d0 body=20 status=ok
// SIG undefined FUN_1406c69d0(void)

undefined1 FUN_1406c69d0(longlong param_1)

{
  FUN_1406c4960(param_1 + 8);
  return 1;
}



// FUNCTION 1406c69f0 FUN_1406c69f0 body=322 status=ok
// SIG undefined FUN_1406c69f0(void)

undefined8 FUN_1406c69f0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18 [2];
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\0') {
    lVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 8) + 0x88);
    lVar5 = *(longlong *)(param_1 + 8);
    FUN_142880530(*(undefined8 *)(lVar4 + 0x90),lVar5 + 0xe0);
    *(undefined8 *)(lVar5 + 0xe0) = 0;
  }
  else if (1 < *(int *)(pcVar1 + 0x10)) {
    FUN_1406cdcd0(*(undefined8 *)(param_1 + 0x10),pcVar1 + 8);
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    plVar6 = (longlong *)(lVar5 + 0x20);
    plVar3 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_144051200;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[3] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_144051248;
    }
    if (local_18 != plVar6) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(lVar5 + 0x28) != 0) &&
           (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar4 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar4;
          }
          *(undefined4 *)(lVar5 + 0x28) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar6);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar5 = FMemory::Realloc(plVar3,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 1406c6b40 FUN_1406c6b40 body=20 status=ok
// SIG undefined FUN_1406c6b40(void)

undefined1 FUN_1406c6b40(longlong param_1)

{
  FUN_1406c4c00(param_1 + 8);
  return 1;
}



// FUNCTION 1406c6b60 FUN_1406c6b60 body=260 status=ok
// SIG undefined FUN_1406c6b60(void)

undefined8 FUN_1406c6b60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 8) + 0x88);
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_142880530(*(undefined8 *)(lVar2 + 0x90),lVar1 + 0xe0);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  FString::operator=(*(longlong *)(param_1 + 8) + 0xa0,*param_2 + 8);
  FString::operator=(*(longlong *)(param_1 + 8) + 0xb0,*param_2 + 0x18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0xa8) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(*(longlong *)(param_1 + 8) + 0xa0);
  }
  FConfigCacheIni::SetString
            (DAT_1468b6148,PTR_u_MixerInteractiveStreamingService_14622e588,L"MixerAccessToken",
             puVar4,&DAT_1468e2420);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0xb8) != 0) {
    puVar3 = *(undefined2 **)(*(longlong *)(param_1 + 8) + 0xb0);
  }
  FConfigCacheIni::SetString
            (DAT_1468b6148,PTR_u_MixerInteractiveStreamingService_14622e588,L"MixerTokenType",puVar3
             ,&DAT_1468e2420);
  return 1;
}



// FUNCTION 1406c6c70 FUN_1406c6c70 body=20 status=ok
// SIG undefined FUN_1406c6c70(void)

undefined1 FUN_1406c6c70(longlong param_1)

{
  FUN_1406c4f00(param_1 + 8);
  return 1;
}



// FUNCTION 1406c6c90 FindId body=212 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if (((piVar1[1] == param_3[1] &&
             *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x28) == param_3[2]) &&
            piVar1[3] == param_3[3]) && *param_3 == *piVar1) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1406c6d70 FUN_1406c6d70 body=144 status=ok
// SIG undefined FUN_1406c6d70(void)

void FUN_1406c6d70(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 local_res10 [12];
  
  lVar4 = *param_2;
  local_res10[0] = 0x7d;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res10,2);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x20) = 3;
  (**(code **)(*(longlong *)*param_2 + 8))();
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 1406c6e00 FUN_1406c6e00 body=435 status=ok
// SIG undefined FUN_1406c6e00(void)

undefined8 FUN_1406c6e00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined **local_28;
  longlong local_20;
  longlong *local_18;
  
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  TJsonReaderFactory<wchar_t>::Create(local_38);
  cVar6 = FUN_1404a7f60(local_38,&local_48);
  plVar5 = plStack_40;
  plVar7 = plStack_40;
  if ((cVar6 == '\0') || (local_48 == 0)) {
    uVar8 = 0;
  }
  else {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    local_20 = local_48;
    local_28 = &PTR_IsPromotedBuild_144050d90;
    local_18 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        plVar7 = plStack_40;
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_28,0);
    plVar5 = local_18;
    local_28 = &PTR_IsPromotedBuild_144050d90;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_18 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = plStack_40;
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = plStack_40;
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          plVar7 = plStack_40;
        }
      }
    }
    uVar8 = 1;
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = plStack_40;
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_40;
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
        plVar7 = plStack_40;
      }
    }
  }
  plVar5 = plStack_40;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1406c6fc0 FUN_1406c6fc0 body=435 status=ok
// SIG undefined FUN_1406c6fc0(void)

undefined8 FUN_1406c6fc0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined **local_28;
  longlong local_20;
  longlong *local_18;
  
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  TJsonReaderFactory<wchar_t>::Create(local_38);
  cVar6 = FUN_1404a7f60(local_38,&local_48);
  plVar5 = plStack_40;
  plVar7 = plStack_40;
  if ((cVar6 == '\0') || (local_48 == 0)) {
    uVar8 = 0;
  }
  else {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    local_20 = local_48;
    local_28 = &PTR_IsPromotedBuild_144050d90;
    local_18 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        plVar7 = plStack_40;
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_28,0);
    plVar5 = local_18;
    local_28 = &PTR_IsPromotedBuild_144050d90;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_18 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = plStack_40;
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = plStack_40;
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          plVar7 = plStack_40;
        }
      }
    }
    uVar8 = 1;
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = plStack_40;
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_40;
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
        plVar7 = plStack_40;
      }
    }
  }
  plVar5 = plStack_40;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1406c7180 FUN_1406c7180 body=349 status=ok
// SIG undefined FUN_1406c7180(void)

undefined8 FUN_1406c7180(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined **local_28;
  longlong local_20;
  longlong *local_18;
  
  local_20 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (local_20 == 0) {
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
    uVar6 = 0;
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_28 = &PTR_IsPromotedBuild_144050d90;
    local_18 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    (**(code **)(*param_1 + 0x38))(param_1,&local_28,0);
    plVar4 = local_18;
    local_28 = &PTR_IsPromotedBuild_144050d90;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_18)(local_18);
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
    plVar4 = (longlong *)param_2[1];
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
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1406c72e0 FUN_1406c72e0 body=1136 status=ok
// SIG undefined FUN_1406c72e0(void)

bool FUN_1406c72e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108 [14];
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28 [2];
  
  puVar6 = local_58;
  uVar4 = FString::FString(local_78);
  FStringFormatArg::FStringFormatArg(puVar6,uVar4);
  uVar4 = FString::FString(local_68,param_3);
  FStringFormatArg::FStringFormatArg(local_38,uVar4);
  lVar9 = 2;
  local_120 = 2;
  local_128 = 0;
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_128,2,0);
  iVar11 = 2;
  lVar8 = local_128;
  do {
    FStringFormatArg::FStringFormatArg(lVar8,puVar6);
    lVar8 = lVar8 + 0x20;
    puVar6 = puVar6 + 0x20;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  FString::Format(local_88,&DAT_1440504f8,&local_128);
  if (local_120 != 0) {
    plVar7 = (longlong *)(local_128 + 0x10);
    iVar11 = local_120;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  puVar6 = &stack0xfffffffffffffff8;
  do {
    plVar7 = (longlong *)(puVar6 + -0x20);
    puVar6 = puVar6 + -0x20;
    lVar9 = lVar9 + -1;
    if (*plVar7 != 0) {
      FMemory::Free();
    }
  } while (lVar9 != 0);
  local_108[0xc] = 0;
  local_108[0xd] = 0;
  FUN_1404ae740(&local_98,local_108 + 0xc,0);
  FUN_1406d2fd0(local_98);
  local_108[0] = 0;
  local_108[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],0x144050508,0x14);
  if (*(int *)(param_1 + 0x78) == 0) {
    psVar10 = &DAT_143f3eda8;
  }
  else {
    psVar10 = *(short **)(param_1 + 0x70);
  }
  local_110 = 0;
  local_118 = 0;
  if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar10[lVar8] != 0);
    uVar5 = (int)lVar8 + 1;
    local_110 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    }
    FGenericPlatformString::Memcpy(local_118,psVar10,(longlong)(int)uVar5 * 2);
  }
  FUN_1406c3f10(local_98,local_108,&local_118);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  FUN_1406d2cf0(local_98);
  (**(code **)(*local_98 + 8))(local_98);
  plVar7 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar7 + 0x40))(plVar7,&local_138);
  local_108[2] = 0;
  local_108[3] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 2,0);
  FGenericPlatformString::Memcpy(local_108[2],0x144050520,8);
  (**(code **)(*local_138 + 0x48))(local_138,local_108 + 2);
  if (local_108[2] != 0) {
    FMemory::Free();
  }
  local_108[4] = 0;
  local_108[5] = 0x2c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 4,0);
  FGenericPlatformString::Memcpy(local_108[4],L"https://mixer.com/api/v1/broadcasts/current",0x58);
  (**(code **)(*local_138 + 0x50))(local_138,local_108 + 4);
  if (local_108[4] != 0) {
    FMemory::Free();
  }
  local_108[8] = 0;
  local_108[9] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 8,0);
  FGenericPlatformString::Memcpy(local_108[8],0x144050528,0x22);
  local_108[6] = 0;
  local_108[7] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 6,0);
  FGenericPlatformString::Memcpy(local_108[6],L"content-type",0x1a);
  (**(code **)(*local_138 + 0x68))(local_138,local_108 + 6,local_108 + 8);
  if (local_108[6] != 0) {
    FMemory::Free();
  }
  if (local_108[8] != 0) {
    FMemory::Free();
  }
  local_108[10] = 0;
  local_108[0xb] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 10,0);
  FGenericPlatformString::Memcpy(local_108[10],L"Authorization",0x1c);
  (**(code **)(*local_138 + 0x68))(local_138,local_108 + 10,local_88);
  if (local_108[10] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_138 + 0x60))(local_138,local_108 + 0xc);
  uVar4 = (**(code **)(*local_138 + 0x80))();
  FUN_1406c1b60(uVar4,param_1,FUN_1406ca760);
  cVar3 = (**(code **)(*local_138 + 0x78))();
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_130 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  plVar7 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_108[0xc] != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return cVar3 != '\0';
}



// FUNCTION 1406c7750 FUN_1406c7750 body=402 status=ok
// SIG undefined FUN_1406c7750(void)

undefined8 * FUN_1406c7750(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int **ppiVar8;
  int *piVar9;
  int *piVar10;
  int *local_28;
  longlong *local_20;
  int *local_18;
  longlong *plStack_10;
  
  piVar10 = (int *)0x0;
  if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
    lVar6 = *(longlong *)(param_1 + 0x248);
    if (*(longlong *)(param_1 + 0x248) == 0) {
      lVar6 = param_1 + 0x240;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)param_3) * 4);
    if (iVar5 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x208));
        if (*piVar9 == param_3) {
          if (iVar5 != -1) goto LAB_1406c77e1;
          break;
        }
        iVar5 = piVar9[6];
      } while (iVar5 != -1);
    }
  }
  piVar9 = piVar10;
LAB_1406c77e1:
  piVar7 = piVar9 + 2;
  if (piVar9 == (int *)0x0) {
    piVar7 = piVar10;
  }
  if (piVar7 == (int *)0x0) {
    ppiVar8 = &local_18;
    local_18 = (int *)0x0;
    plStack_10 = (longlong *)0x0;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_20 = *(longlong **)(piVar7 + 2);
    piVar10 = *(int **)piVar7;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    ppiVar8 = &local_28;
    bVar3 = true;
    bVar2 = false;
    local_28 = piVar10;
  }
  piVar9 = ppiVar8[1];
  ppiVar8[1] = (int *)0x0;
  *param_2 = piVar10;
  param_2[1] = piVar9;
  *ppiVar8 = (int *)0x0;
  plVar4 = plStack_10;
  if ((bVar2) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar10 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar4 = local_20;
  if ((bVar3) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar10 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1406c78f0 FUN_1406c78f0 body=794 status=ok
// SIG undefined FUN_1406c78f0(void)

bool FUN_1406c78f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88 [12];
  longlong *local_28;
  longlong *local_20;
  
  local_88[10] = 0;
  local_88[0xb] = 0;
  FUN_1404ae740(&local_28,local_88 + 10,0);
  FUN_1406d2fd0(local_28);
  local_88[0] = 0;
  local_88[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
  FGenericPlatformString::Memcpy(local_88[0],L"client_id",0x14);
  if (*(int *)(param_1 + 0x78) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = *(short **)(param_1 + 0x70);
  }
  local_90 = 0;
  local_98 = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar9[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_90 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    }
    FGenericPlatformString::Memcpy(local_98,psVar9,(longlong)(int)uVar7 * 2);
  }
  FUN_1406c3f10(local_28,local_88,&local_98);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  FUN_1406d2cf0(local_28);
  (**(code **)(*local_28 + 8))(local_28);
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_a8);
  local_88[2] = 0;
  local_88[3] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 2,0);
  FGenericPlatformString::Memcpy(local_88[2],&DAT_144050aa0,8);
  (**(code **)(*local_a8 + 0x48))(local_a8,local_88 + 2);
  if (local_88[2] != 0) {
    FMemory::Free();
  }
  local_88[4] = 0;
  local_88[5] = 0x2b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 4,0);
  FGenericPlatformString::Memcpy(local_88[4],L"https://mixer.com/api/v1/interactive/hosts",0x56);
  (**(code **)(*local_a8 + 0x50))(local_a8,local_88 + 4);
  if (local_88[4] != 0) {
    FMemory::Free();
  }
  local_88[8] = 0;
  local_88[9] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 8,0);
  FGenericPlatformString::Memcpy(local_88[8],L"application/json",0x22);
  local_88[6] = 0;
  local_88[7] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 6,0);
  FGenericPlatformString::Memcpy(local_88[6],L"content-type",0x1a);
  (**(code **)(*local_a8 + 0x68))(local_a8,local_88 + 6,local_88 + 8);
  if (local_88[6] != 0) {
    FMemory::Free();
  }
  if (local_88[8] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_a8 + 0x60))(local_a8,local_88 + 10);
  uVar6 = (**(code **)(*local_a8 + 0x80))();
  FUN_1406c1b60(uVar6,param_1,FUN_1406cab80);
  cVar4 = (**(code **)(*local_a8 + 0x78))();
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_88[10] != 0) {
    FMemory::Free();
  }
  return cVar4 != '\0';
}



// FUNCTION 1406c7c10 FUN_1406c7c10 body=643 status=ok
// SIG undefined FUN_1406c7c10(void)

undefined8 FUN_1406c7c10(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *local_res20;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined2 *local_40;
  undefined8 local_38;
  
  local_58 = 9;
  local_60 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  FGenericPlatformString::Memcpy(local_60,L"controls",0x12);
  cVar7 = FUN_1416b3850(param_2,&local_60,&local_res20);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (cVar7 == '\0') {
    return 1;
  }
  puVar10 = (undefined8 *)*local_res20;
  puVar11 = puVar10 + (longlong)(int)local_res20[1] * 2;
  for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
    plVar3 = (longlong *)puVar10[1];
    puVar4 = (undefined8 *)*puVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)(**(code **)*puVar4)();
    plVar5 = (longlong *)plVar8[1];
    lVar6 = *plVar8;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      local_40 = (undefined2 *)0x0;
      local_38 = 0;
      local_50 = 0;
      local_48 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      FGenericPlatformString::Memcpy(local_50,L"controlID",0x14);
      cVar7 = FUN_1416b40a0(lVar6,&local_50,&local_40);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (cVar7 != '\0') {
        puVar9 = &DAT_143f3eda8;
        if ((int)local_38 != 0) {
          puVar9 = local_40;
        }
        FName::FName(local_68,puVar9,1);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar5 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
          LOCK();
          plVar8 = plVar5 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
      }
      if (local_40 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1406c7ea0 FUN_1406c7ea0 body=685 status=ok
// SIG undefined FUN_1406c7ea0(void)

undefined8 FUN_1406c7ea0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *local_res8;
  longlong *local_res20;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined1 local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = (longlong *)0x0;
  plStack_80 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_StartProfileThreadUsage_144051100;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *(undefined1 *)(plVar6 + 2) = 0;
    plStack_80 = plVar6;
  }
  local_88 = plStack_80 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
  plVar6 = plStack_80;
  local_58 = local_88;
  plStack_50 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_80)(plStack_80);
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
  }
  *(undefined1 *)local_58 = 1;
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar5 != '\0')) {
    if ((int)param_1[1] != 0) {
      plVar8 = (longlong *)*param_1;
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_58);
  }
  local_60 = 1;
  local_68 = &PTR_FUN_144051050;
  local_a8 = 0;
  local_a0 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"ready",0xc);
  local_78 = 0;
  local_70 = 0;
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  FString::operator=(&local_40,&local_78);
  if (local_78 != 0) {
    FMemory::Free();
  }
  FUN_1406ce0d0(param_1,&local_a8,&local_48,&local_68);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  cVar5 = FUN_1416b3e60(param_2,&DAT_14622e578,&local_res8);
  if (cVar5 == '\0') {
    uVar10 = 0;
  }
  else {
    local_98 = 0;
    local_90 = 7;
    uVar10 = *local_res8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_98,7,"scenes",7,0x3f);
    cVar5 = FUN_1416b3850(uVar10,&local_98,&local_res20);
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (cVar5 == '\0') {
      uVar10 = 0;
    }
    else {
      puVar9 = (undefined8 *)*local_res20;
      puVar11 = puVar9 + (longlong)(int)local_res20[1] * 2;
      for (; puVar9 != puVar11; puVar9 = puVar9 + 2) {
        puVar7 = (undefined8 *)(*(code *)**(undefined8 **)*puVar9)();
        FUN_1406ccad0(param_1,*puVar7);
      }
      uVar10 = 1;
    }
  }
  plVar8 = plStack_50;
  local_68 = &PTR_FUN_144050e60;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
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
  return uVar10;
}



// FUNCTION 1406c8150 FUN_1406c8150 body=1999 status=ok
// SIG undefined FUN_1406c8150(void)

undefined8 FUN_1406c8150(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  wint_t *pwVar15;
  undefined8 uVar16;
  undefined2 *local_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128 [10];
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong local_98;
  longlong *local_90;
  longlong local_88 [4];
  undefined4 local_68;
  undefined1 local_64;
  longlong local_60;
  longlong *plStack_58;
  longlong local_50 [2];
  undefined4 local_40;
  undefined1 local_3c;
  
  local_88[0] = 0;
  local_88[1] = 0;
  local_128[0] = 0;
  local_128[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
  FGenericPlatformString::Memcpy(local_128[0],L"participantID",0x1c);
  cVar5 = FUN_1416b40a0(param_2,local_128,local_88);
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
LAB_1406c88c9:
    uVar16 = 0;
    goto LAB_1406c88cc;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  cVar5 = FUN_141678c50(local_88,&local_b8);
  if (cVar5 == '\0') goto LAB_1406c88c9;
  local_c8[0] = (undefined8 *)0x0;
  local_128[2] = 0;
  local_128[3] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 2,0);
  FGenericPlatformString::Memcpy(local_128[2],L"input",0xc);
  cVar5 = FUN_1416b3e60(param_2,local_128 + 2,local_c8);
  if (local_128[2] != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') goto LAB_1406c88c9;
  local_a8 = (int)local_b8;
  iStack_a4 = local_b8._4_4_;
  iStack_a0 = (int)uStack_b0;
  iStack_9c = uStack_b0._4_4_;
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    iVar8 = FCrc::MemCrc_DEPRECATED(&local_a8,0x10);
    lVar10 = *(longlong *)(param_1 + 0x1f8);
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      lVar10 = param_1 + 0x1f0;
    }
    iVar8 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (longlong)iVar8) * 4);
    if (iVar8 != -1) {
      do {
        plVar12 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar8 * 0x28);
        if ((((int)plVar12[1] == iStack_a0 &&
             *(int *)(*(longlong *)(param_1 + 0x1b8) + 0xc + (longlong)iVar8 * 0x28) == iStack_9c)
            && *(int *)((longlong)plVar12 + 4) == iStack_a4) && local_a8 == (int)*plVar12) {
          if (iVar8 != -1) goto LAB_1406c8330;
          break;
        }
        iVar8 = (int)plVar12[4];
      } while (iVar8 != -1);
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1406c8330:
  plVar9 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 == (longlong *)0x0) {
    local_130 = 0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    plVar12 = &local_60;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_90 = (longlong *)plVar9[1];
    local_130 = *plVar9;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    plVar12 = &local_98;
    bVar4 = true;
    bVar3 = false;
    local_98 = local_130;
  }
  plVar9 = (longlong *)plVar12[1];
  plVar12[1] = 0;
  plVar11 = plStack_58;
  *plVar12 = 0;
  if ((bVar3) && (plStack_58 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_58 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_58 + 8))(plStack_58,1);
      }
    }
  }
  plVar12 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_90 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  local_128[4] = 0;
  local_128[5] = 10;
  uVar16 = *local_c8[0];
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 4,0);
  FGenericPlatformString::Memcpy(local_128[4],L"controlID",0x14);
  cVar5 = FUN_1416b40a0(uVar16,local_128 + 4,local_128 + 10);
  if (local_128[4] != 0) {
    FMemory::Free();
  }
  if (cVar5 != '\0') {
    local_148 = (undefined2 *)0x0;
    local_140 = 0;
    local_128[6] = 0;
    local_128[7] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 6,0);
    FGenericPlatformString::Memcpy(local_128[6],L"event",0xc);
    cVar5 = FUN_1416b40a0(uVar16,local_128 + 6,&local_148);
    if (local_128[6] != 0) {
      FMemory::Free();
    }
    uVar16 = 0;
    if (cVar5 != '\0') {
      puVar13 = &DAT_143f3eda8;
      if ((int)local_d0 != 0) {
        puVar13 = local_d8;
      }
      FName::FName(&local_138,puVar13,1);
      pwVar14 = L"mousedown";
      puVar13 = &DAT_143f3eda8;
      if ((int)local_140 != 0) {
        puVar13 = local_148;
      }
      do {
        wVar2 = *(wchar_t *)((longlong)pwVar14 + (longlong)(puVar13 + -0xa2027994));
        if ((wVar2 == L'\0') && (*pwVar14 == L'\0')) goto LAB_1406c856e;
        if (wVar2 != *pwVar14) {
          wVar6 = towlower(wVar2);
          wVar7 = towlower(*pwVar14);
          if (wVar6 != wVar7) goto LAB_1406c8560;
        }
        pwVar14 = pwVar14 + 1;
      } while( true );
    }
    goto LAB_1406c8696;
  }
  uVar16 = 0;
  goto LAB_1406c86a5;
LAB_1406c8740:
  if (wVar6 != wVar7) {
    pwVar15 = &DAT_14404f370;
    puVar13 = &DAT_143f3eda8;
    if ((int)local_140 != 0) {
      puVar13 = local_148;
    }
    do {
      wVar6 = *(wint_t *)((longlong)pwVar15 + (longlong)(puVar13 + -0xa20279b8));
      if ((wVar6 == 0) && (*pwVar15 == 0)) goto LAB_1406c8696;
      if (wVar6 != *pwVar15) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar15);
        if (wVar6 != wVar7) goto LAB_1406c886b;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
LAB_1406c874e:
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar10 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      lVar10 = param_1 + 0x1a0;
    }
    iVar8 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)local_138 >> 0x20) + (int)local_138) &
                              (longlong)*(int *)(param_1 + 0x1b0) - 1U) * 4);
    if (iVar8 != -1) {
      do {
        plVar12 = (longlong *)((longlong)iVar8 * 0x50 + *(longlong *)(param_1 + 0x168));
        if (*plVar12 == local_138) {
          if (iVar8 != -1) goto LAB_1406c87d5;
          break;
        }
        iVar8 = (int)plVar12[9];
      } while (iVar8 != -1);
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1406c87d5:
  plVar11 = plVar12 + 1;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 != (longlong *)0x0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_3c = 0;
    local_40 = 0;
    FUN_1406c6910(param_1 + 0x10,local_138,*(undefined4 *)(local_130 + 0x10),local_50);
    lVar10 = local_50[0];
    goto LAB_1406c8687;
  }
  goto LAB_1406c8696;
LAB_1406c886b:
  if (wVar6 != wVar7) {
    pwVar14 = L"submit";
    puVar13 = &DAT_143f3eda8;
    if ((int)local_140 != 0) {
      puVar13 = local_148;
    }
    for (; (wVar2 = *(wchar_t *)((longlong)pwVar14 + (longlong)(puVar13 + -0xa20279c0)),
           wVar2 != L'\0' || (*pwVar14 != L'\0')); pwVar14 = pwVar14 + 1) {
      if (wVar2 != *pwVar14) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar14);
        if (wVar6 != wVar7) break;
      }
    }
  }
  goto LAB_1406c8696;
LAB_1406c8560:
  if (wVar6 != wVar7) {
    pwVar14 = L"mouseup";
    puVar13 = &DAT_143f3eda8;
    if ((int)local_140 != 0) {
      puVar13 = local_148;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)pwVar14 + (longlong)(puVar13 + -0xa20279b0));
      if ((wVar2 == L'\0') && (*pwVar14 == L'\0')) goto LAB_1406c874e;
      if (wVar2 != *pwVar14) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar14);
        if (wVar6 != wVar7) goto LAB_1406c8740;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1406c856e:
  local_88[2] = 0;
  local_88[3] = 0;
  local_64 = 1;
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar10 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      lVar10 = param_1 + 0x1a0;
    }
    iVar8 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)local_138 >> 0x20) + (int)local_138) &
                              (longlong)*(int *)(param_1 + 0x1b0) - 1U) * 4);
    if (iVar8 != -1) {
      do {
        plVar12 = (longlong *)((longlong)iVar8 * 0x50 + *(longlong *)(param_1 + 0x168));
        if (*plVar12 == local_138) {
          if (iVar8 != -1) goto LAB_1406c85f7;
          break;
        }
        iVar8 = (int)plVar12[9];
      } while (iVar8 != -1);
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1406c85f7:
  plVar11 = plVar12 + 1;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 != (longlong *)0x0) {
    if ((int)plVar11[3] == 0) {
      local_68 = 0;
    }
    else {
      local_128[8] = 0;
      local_128[9] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 8,0);
      FGenericPlatformString::Memcpy(local_128[8],L"transactionID",0x1c);
      FUN_1416b40a0(param_2,local_128 + 8,local_88 + 2);
      if (local_128[8] != 0) {
        FMemory::Free();
      }
      local_68 = (undefined4)plVar11[3];
    }
  }
  FUN_1406c6910(param_1 + 0x10,local_138,*(undefined4 *)(local_130 + 0x10),local_88 + 2);
  lVar10 = local_88[2];
LAB_1406c8687:
  uVar16 = 1;
  if (lVar10 != 0) {
    FMemory::Free();
  }
LAB_1406c8696:
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1406c86a5:
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_1406c88cc:
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return uVar16;
}



// FUNCTION 1406c8920 FUN_1406c8920 body=676 status=ok
// SIG undefined FUN_1406c8920(void)

undefined8 FUN_1406c8920(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_res20 [2];
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined1 *local_38;
  
  bVar6 = false;
  bVar5 = false;
  local_res20[0] = 0;
  local_a8 = 0;
  local_a0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"groups",0xe);
  cVar8 = FUN_1416b3850(param_2,&local_a8,&local_58);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (cVar8 == '\0') {
    return 0;
  }
  puVar11 = (undefined8 *)*local_58;
  puVar12 = puVar11 + (longlong)(int)local_58[1] * 2;
  do {
    if (puVar11 == puVar12) {
      return 1;
    }
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
    plVar9 = (longlong *)(*(code *)**(undefined8 **)*puVar11)();
    plVar3 = (longlong *)plVar9[1];
    lVar4 = *plVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) {
LAB_1406c8a9e:
      bVar7 = false;
    }
    else {
      local_88 = 0;
      local_80 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      FGenericPlatformString::Memcpy(local_88,L"groupID",0x10);
      bVar6 = true;
      cVar8 = FUN_1416b40a0(lVar4,&local_88,&local_68);
      if (cVar8 == '\0') goto LAB_1406c8a9e;
      local_98 = 0;
      local_90 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,L"sceneID",0x10);
      bVar6 = true;
      bVar5 = true;
      cVar8 = FUN_1416b40a0(lVar4,&local_98,&local_78);
      if (cVar8 == '\0') goto LAB_1406c8a9e;
      bVar7 = true;
    }
    if ((bVar5) && (bVar5 = false, local_98 != 0)) {
      FMemory::Free();
    }
    if ((bVar6) && (bVar6 = false, local_88 != 0)) {
      FMemory::Free();
    }
    if (bVar7) {
      puVar10 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar10 = local_78;
      }
      FName::FName(local_48,puVar10,1);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_60 != 0) {
        puVar10 = local_68;
      }
      FName::FName(local_50,puVar10,1);
      local_40 = local_50;
      local_38 = local_48;
      TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>
                (param_1 + 0x118,local_res20,&local_40,0);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar11 = puVar11 + 2;
  } while( true );
}



// FUNCTION 1406c8bd0 FUN_1406c8bd0 body=774 status=ok
// SIG undefined FUN_1406c8bd0(void)

undefined8 FUN_1406c8bd0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_res20;
  undefined4 uStackX_24;
  longlong *local_88;
  undefined1 local_80 [8];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res20 = 0;
  local_78 = 0;
  local_70 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"groups",0xe);
  cVar5 = FUN_1416b3850(param_2,&local_78,&local_res20);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    return 0;
  }
  puVar12 = *(undefined8 **)CONCAT44(uStackX_24,local_res20);
  puVar13 = puVar12 + (longlong)(int)((longlong *)CONCAT44(uStackX_24,local_res20))[1] * 2;
  uVar11 = 0;
  do {
    if (puVar12 == puVar13) {
      return 1;
    }
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    plVar7 = (longlong *)(*(code *)**(undefined8 **)*puVar12)();
    plVar2 = (longlong *)plVar7[1];
    lVar3 = *plVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (lVar3 == 0) {
LAB_1406c8d4e:
      bVar4 = false;
    }
    else {
      local_58 = 0;
      local_50 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"groupID",0x10);
      uVar11 = (ulonglong)((uint)uVar11 | 1);
      cVar5 = FUN_1416b40a0(lVar3,&local_58,&local_38);
      if (cVar5 == '\0') goto LAB_1406c8d4e;
      local_68 = 0;
      local_60 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"sceneID",0x10);
      uVar11 = 3;
      cVar5 = FUN_1416b40a0(lVar3,&local_68,&local_48);
      if (cVar5 == '\0') goto LAB_1406c8d4e;
      bVar4 = true;
    }
    if (((uVar11 & 2) != 0) && (uVar11 = (ulonglong)((uint)uVar11 & 0xfffffffd), local_68 != 0)) {
      FMemory::Free();
    }
    if (((uVar11 & 1) != 0) && (uVar11 = (ulonglong)((uint)uVar11 & 0xfffffffe), local_58 != 0)) {
      FMemory::Free();
    }
    if (bVar4) {
      puVar9 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar9 = local_48;
      }
      FName::FName(&local_88,puVar9,1);
      puVar9 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar9 = local_38;
      }
      plVar7 = (longlong *)FName::FName(local_80,puVar9,1);
      lVar3 = *plVar7;
      if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
        lVar8 = *(longlong *)(param_1 + 0x158);
        if (*(longlong *)(param_1 + 0x158) == 0) {
          lVar8 = param_1 + 0x150;
        }
        iVar6 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                 (longlong)*(int *)(param_1 + 0x160) - 1U) * 4);
        if (iVar6 != -1) {
          do {
            uVar10 = *(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 0x18;
            if (*(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 0x18) == lVar3) {
              if (iVar6 != -1) goto LAB_1406c8e43;
              break;
            }
            iVar6 = *(int *)(uVar10 + 0x10);
          } while (iVar6 != -1);
        }
      }
      uVar10 = 0;
LAB_1406c8e43:
      *(longlong **)(uVar10 + 8) = local_88;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar2 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar12 = puVar12 + 2;
  } while( true );
}



// FUNCTION 1406c8ee0 FUN_1406c8ee0 body=408 status=ok
// SIG undefined FUN_1406c8ee0(void)

undefined8 FUN_1406c8ee0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_a8 [4];
  code *local_88;
  longlong local_80 [4];
  int *local_60;
  code **local_58;
  undefined8 local_48;
  longlong *plStack_40;
  code *local_38;
  longlong local_30 [3];
  undefined8 local_18;
  longlong *plStack_10;
  
  local_a8[1] = 10;
  local_a8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"getScenes",0x14);
  local_80[2] = 0;
  local_88 = FUN_1406c7ea0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  FString::operator=(local_80,local_80 + 2);
  if (local_80[2] != 0) {
    FMemory::Free();
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  FUN_1406d1eb0(param_1,&local_48,local_a8,local_a8 + 2);
  local_18 = local_48;
  plStack_10 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_1406c6d70(param_1,&local_18);
  local_38 = local_88;
  FString::FString(local_30,local_80);
  local_58 = &local_38;
  piVar1 = (int *)(param_1 + 0x110);
  local_60 = piVar1;
  FUN_1406c21d0(param_1 + 0x70,local_res8,&local_60,0);
  plVar3 = *(longlong **)(param_1 + 0x30);
  *piVar1 = *piVar1 + 1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8 + 2);
  }
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1406c9080 FUN_1406c9080 body=1689 status=ok
// SIG undefined FUN_1406c9080(void)

undefined8 FUN_1406c9080(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  void **ppvVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 local_res20 [2];
  void **local_178;
  longlong *plStack_170;
  void *local_168;
  ulonglong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  undefined2 *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *pvStack_b0;
  void **local_a8;
  longlong *plStack_a0;
  void **local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60;
  longlong *local_58;
  void **local_50;
  void ***local_48;
  undefined4 *local_40;
  void ***local_38;
  
  local_128 = 0xd;
  local_130 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
  FGenericPlatformString::Memcpy(local_130,L"participants",0x1a);
  cVar4 = FUN_1416b3850(param_2,&local_130,&local_60);
  if (local_130 != 0) {
    FMemory::Free();
  }
  if (cVar4 == '\0') {
LAB_1406c96e9:
    uVar8 = 0;
  }
  else {
    puVar14 = (undefined8 *)*local_60;
    puVar13 = puVar14 + (longlong)(int)local_60[1] * 2;
    for (; puVar14 != puVar13; puVar14 = puVar14 + 2) {
      plVar7 = (longlong *)0x0;
      puVar5 = (undefined8 *)(*(code *)**(undefined8 **)*puVar14)();
      local_120 = 0;
      local_118 = 9;
      uVar8 = *puVar5;
      local_168 = (void *)0x0;
      local_160 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
      FGenericPlatformString::Memcpy(local_120,L"username",0x12);
      cVar4 = FUN_1416b40a0(uVar8,&local_120,&local_168);
      if (local_120 != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') {
LAB_1406c96da:
        if (local_168 != (void *)0x0) {
          FMemory::Free();
        }
        goto LAB_1406c96e9;
      }
      local_110 = 0;
      local_108 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
      FGenericPlatformString::Memcpy(local_110,L"userID",0xe);
      cVar4 = FUN_1416b3b00(uVar8,&local_110,local_res20);
      if (local_110 != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') goto LAB_1406c96da;
      local_140 = (undefined2 *)0x0;
      local_138 = 0;
      local_100 = 0;
      local_f8 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
      FGenericPlatformString::Memcpy(local_100,L"groupID",0x10);
      cVar4 = FUN_1416b40a0(uVar8,&local_100,&local_140);
      if (local_100 != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') {
LAB_1406c96cb:
        if (local_140 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        goto LAB_1406c96da;
      }
      local_c8 = 0;
      local_c0 = 0;
      local_f0 = 0;
      local_e8 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
      FGenericPlatformString::Memcpy(local_f0,L"sessionID",0x14);
      cVar4 = FUN_1416b40a0(uVar8,&local_f0,&local_c8);
      if (local_f0 != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') {
LAB_1406c96bd:
        if (local_c8 != 0) {
          FMemory::Free();
        }
        goto LAB_1406c96cb;
      }
      local_b8 = (void *)0x0;
      pvStack_b0 = (void *)0x0;
      cVar4 = FUN_141678c50(&local_c8,&local_b8);
      if (cVar4 == '\0') goto LAB_1406c96bd;
      FUN_1406c7750(param_1,&local_178,local_res20[0]);
      if (local_178 == (void **)0x0) {
        plVar6 = (longlong *)operator_new(0x58);
        if (plVar6 != (longlong *)0x0) {
          *(undefined4 *)(plVar6 + 1) = 1;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)&PTR_FUN_144051110;
          plVar6[2] = 0;
          plVar6[3] = 0;
          plVar6[4] = 0;
          plVar6[5] = 0;
          plVar6[6] = 0;
          plVar6[7] = 0;
          plVar6[8] = 0;
          plVar6[9] = 0;
          *(undefined1 *)(plVar6 + 10) = 0;
          plVar7 = plVar6;
        }
        local_98 = (void **)(plVar7 + 2);
        plStack_90 = plVar7;
        SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
        plStack_d0 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        local_178 = local_98;
        local_d8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&plStack_d0);
        plVar7 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_d0 + 1;
          lVar12 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_d0)(plStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
            }
          }
        }
        plVar7 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_90 + 1;
          lVar12 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar7 = plStack_170;
        ppvVar10 = local_178;
        local_a8 = local_178;
        plStack_a0 = plStack_170;
        *(undefined4 *)(local_178 + 2) = local_res20[0];
        local_178[5] = local_b8;
        local_178[6] = pvStack_b0;
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
          UNLOCK();
        }
        local_50 = local_178 + 5;
        local_48 = &local_a8;
        FUN_1406c2680(param_1 + 0x1b8,local_68,&local_50,0);
        local_148[0] = *(undefined4 *)(local_a8 + 2);
        local_40 = local_148;
        local_38 = &local_a8;
        FUN_1406c2410(param_1 + 0x208,local_64,&local_40);
        plVar6 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_a0 + 1;
          lVar12 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          ppvVar10 = local_178;
          plVar7 = plStack_170;
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            ppvVar10 = local_178;
            plVar7 = plStack_170;
            if (iVar11 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
              ppvVar10 = local_178;
              plVar7 = plStack_170;
            }
          }
        }
        local_78 = (void *)0x0;
        local_6c = 0;
        local_158 = 0;
        local_150 = 0;
        FString::AppendInt(&local_158,local_res20[0]);
        local_88 = local_158;
        pvVar2 = local_168;
        lVar12 = (longlong)(int)local_160;
        local_80 = (undefined4)local_150;
        local_158 = 0;
        local_7c = local_150._4_4_;
        local_150 = 0;
        local_70 = (int)local_160;
        iVar11 = 0;
        if ((int)local_160 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_160 & 0xffffffff,0);
          pvVar3 = local_78;
          _guard_xfg_dispatch_icall_nop(local_78,pvVar2,lVar12 * 2);
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          iVar11 = (int)local_160;
        }
        if (local_88 != 0) {
          FMemory::Free();
          iVar11 = (int)local_160;
        }
      }
      else {
        ppvVar10 = local_178;
        plVar7 = plStack_170;
        iVar11 = (int)local_160;
      }
      pvVar2 = local_168;
      if (ppvVar10 != &local_168) {
        *(int *)(ppvVar10 + 1) = iVar11;
        if ((iVar11 == 0) && (*(int *)((longlong)ppvVar10 + 0xc) == 0)) {
          *(undefined4 *)((longlong)ppvVar10 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar10,iVar11);
          _guard_xfg_dispatch_icall_nop(*ppvVar10,pvVar2,(longlong)iVar11 * 2);
        }
      }
      puVar9 = &DAT_143f3eda8;
      if ((int)local_138 != 0) {
        puVar9 = local_140;
      }
      FName::FName(&local_58,puVar9,1);
      plVar6 = plStack_170;
      ppvVar10[7] = local_58;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar7 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_170 + 8))();
          }
        }
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_140 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_168 != (void *)0x0) {
        FMemory::Free();
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1406c9720 FUN_1406c9720 body=699 status=ok
// SIG undefined FUN_1406c9720(void)

undefined8 FUN_1406c9720(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  void **ppvVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_res20 [2];
  longlong *local_98;
  void **local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  undefined8 local_38;
  
  local_68 = 0xd;
  local_70 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
  FGenericPlatformString::Memcpy(local_70,L"participants",0x1a);
  cVar6 = FUN_1416b3850(param_2,&local_70,&local_98);
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (cVar6 == '\0') {
LAB_1406c99ab:
    uVar8 = 0;
  }
  else {
    puVar11 = (undefined8 *)*local_98;
    puVar12 = puVar11 + (longlong)(int)local_98[1] * 2;
    for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
      puVar7 = (undefined8 *)(*(code *)**(undefined8 **)*puVar11)();
      local_60 = 0;
      local_58 = 7;
      uVar8 = *puVar7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Memcpy(local_60,L"userID",0xe);
      cVar6 = FUN_1416b3b00(uVar8,&local_60,local_res20);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (cVar6 == '\0') goto LAB_1406c99ab;
      FUN_1406c7750(param_1,&local_90,local_res20[0]);
      plVar9 = local_88;
      ppvVar10 = local_90;
      if (local_90 != (void **)0x0) {
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
        }
        FUN_1406cda60(param_1 + 0x1b8,local_90 + 5);
        FUN_1406cd900(param_1 + 0x208,*(undefined4 *)(ppvVar10 + 2));
        plVar4 = local_88;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = local_88;
          ppvVar10 = local_90;
          if ((int)lVar3 == 1) {
            (**(code **)*local_88)(local_88);
            plVar9 = local_88;
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            ppvVar10 = local_90;
            if (iVar2 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
              ppvVar10 = local_90;
            }
          }
        }
        local_40 = (void *)0x0;
        local_38 = 0;
        local_80 = 0;
        local_78 = 0;
        FString::AppendInt(&local_80);
        local_48 = (undefined4)local_78;
        local_44 = local_78._4_4_;
        local_50 = local_80;
        local_80 = 0;
        local_78 = 0;
        if (&local_40 != ppvVar10) {
          iVar2 = *(int *)(ppvVar10 + 1);
          _Src = *ppvVar10;
          local_38 = CONCAT44(local_38._4_4_,iVar2);
          if (iVar2 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,iVar2,0);
            pvVar5 = local_40;
            _guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar2 * 2);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
          }
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
      }
      plVar4 = local_88;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar9 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_88 + 8))();
          }
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1406c99e0 FUN_1406c99e0 body=1067 status=ok
// SIG undefined FUN_1406c99e0(void)

undefined8 FUN_1406c99e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  void *pvVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_res20 [2];
  longlong local_108;
  undefined8 local_100;
  void *local_f8;
  ulonglong local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_d0 = 0xd;
  local_d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"participants",0x1a);
  cVar6 = FUN_1416b3850(param_2,&local_d8,&local_38);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (cVar6 == '\0') {
LAB_1406c9de3:
    uVar8 = 0;
  }
  else {
    puVar11 = (undefined8 *)*local_38;
    puVar12 = puVar11 + (longlong)(int)local_38[1] * 2;
    for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
      puVar7 = (undefined8 *)(*(code *)**(undefined8 **)*puVar11)();
      local_c8 = 0;
      local_c0 = 7;
      uVar8 = *puVar7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      FGenericPlatformString::Memcpy(local_c8,L"userID",0xe);
      cVar6 = FUN_1416b3b00(uVar8,&local_c8,local_res20);
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (cVar6 == '\0') goto LAB_1406c9de3;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_b8 = 0;
      local_b0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"username",0x12);
      cVar6 = FUN_1416b40a0(uVar8,&local_b8,&local_f8);
      if (local_b8 != 0) {
        FMemory::Free();
      }
      if (cVar6 == '\0') {
LAB_1406c9dd4:
        if (local_f8 != (void *)0x0) {
          FMemory::Free();
        }
        goto LAB_1406c9de3;
      }
      local_e8 = (undefined2 *)0x0;
      local_e0 = 0;
      local_a8 = 0;
      local_a0 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"groupID",0x10);
      cVar6 = FUN_1416b40a0(uVar8,&local_a8,&local_e8);
      if (local_a8 != 0) {
        FMemory::Free();
      }
      if (cVar6 == '\0') {
LAB_1406c9dc5:
        if (local_e8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        goto LAB_1406c9dd4;
      }
      local_88 = 0;
      local_80 = 0;
      local_98 = 0;
      local_90 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,L"sessionID",0x14);
      cVar6 = FUN_1416b40a0(uVar8,&local_98,&local_88);
      if (local_98 != 0) {
        FMemory::Free();
      }
      if (cVar6 == '\0') {
LAB_1406c9db7:
        if (local_88 != 0) {
          FMemory::Free();
        }
        goto LAB_1406c9dc5;
      }
      local_78 = 0;
      uStack_70 = 0;
      cVar6 = FUN_141678c50(&local_88,&local_78);
      if (cVar6 == '\0') goto LAB_1406c9db7;
      FUN_1406c7750(param_1,&local_68,local_res20[0]);
      lVar10 = local_68;
      if (local_68 != 0) {
        *(undefined4 *)(local_68 + 0x10) = local_res20[0];
        *(undefined4 *)(local_68 + 0x28) = (undefined4)local_78;
        *(undefined4 *)(local_68 + 0x2c) = local_78._4_4_;
        *(undefined4 *)(local_68 + 0x30) = (undefined4)uStack_70;
        *(undefined4 *)(local_68 + 0x34) = uStack_70._4_4_;
        FString::operator=(local_68,&local_f8);
        puVar9 = &DAT_143f3eda8;
        if ((int)local_e0 != 0) {
          puVar9 = local_e8;
        }
        FName::FName(&local_30,puVar9,1);
        *(undefined8 *)(lVar10 + 0x38) = local_30;
        local_48 = (void *)0x0;
        local_3c = 0;
        local_108 = 0;
        local_100 = 0;
        FString::AppendInt(&local_108);
        _Src = local_f8;
        lVar10 = (longlong)(int)local_f0;
        local_50 = (undefined4)local_100;
        local_4c = local_100._4_4_;
        local_100 = 0;
        local_58 = local_108;
        local_108 = 0;
        local_40 = (int)local_f0;
        if ((int)local_f0 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_f0 & 0xffffffff,0);
          pvVar5 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar10 * 2);
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
      plVar4 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))();
          }
        }
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (local_e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1406c9e10 FUN_1406c9e10 body=126 status=ok
// SIG undefined FUN_1406c9e10(void)

undefined1 FUN_1406c9e10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_res20 [8];
  longlong local_18 [2];
  
  local_res20[0] = 0;
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"IsReady",0x10);
  cVar1 = FUN_1416b3900(param_2,local_18,local_res20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 == '\0') {
    local_res20[0] = 0;
  }
  return local_res20[0];
}



// FUNCTION 1406c9e90 FUN_1406c9e90 body=963 status=ok
// SIG undefined FUN_1406c9e90(void)

void FUN_1406c9e90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_1406cce20();
  local_58 = 4;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_60 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  lVar8 = local_60;
  FGenericPlatformString::Memcpy(local_60,&DAT_14404ec48,8);
  lVar11 = (longlong)(int)local_78;
  iVar2 = (int)local_78 + 1;
  if (local_78._4_4_ < iVar2) {
    uVar10 = local_78 & 0xffffffff;
    local_78._0_4_ = iVar2;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80,uVar10);
    iVar2 = (int)local_78;
  }
  local_78._0_4_ = iVar2;
  plVar5 = local_80 + lVar11 * 2;
  local_50 = 0;
  local_48 = 3;
  *plVar5 = lVar8;
  *(undefined4 *)(plVar5 + 1) = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar5 + 0xc) = local_58._4_4_;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  lVar8 = local_50;
  FGenericPlatformString::Memcpy(local_50,&DAT_14404ec50,6);
  iVar2 = (int)local_78;
  lVar11 = (longlong)(int)local_78;
  local_78._0_4_ = (int)local_78 + 1;
  if (local_78._4_4_ < (int)local_78) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80,iVar2);
  }
  plVar5 = local_80 + lVar11 * 2;
  *plVar5 = lVar8;
  *(undefined4 *)(plVar5 + 1) = (undefined4)local_48;
  *(undefined4 *)((longlong)plVar5 + 0xc) = local_48._4_4_;
  puVar3 = (undefined8 *)FName::FName(local_res8,"WebSockets",1);
  uVar9 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar9);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5,local_40,param_2,&local_80,param_3);
  local_68 = (longlong *)plVar5[1];
  local_70 = *plVar5;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)(param_1 + 0x30);
  if (plVar5 != &local_70) {
    *plVar5 = local_70;
    local_70 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_68);
  }
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if ((longlong *)*plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x30))();
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
      iVar2 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
      *puVar3 = plVar7;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    uVar9 = (**(code **)(*(longlong *)*plVar5 + 0x38))();
    FUN_140634b70(uVar9,local_98,param_1,FUN_1406cbe80);
    uVar9 = (**(code **)(*(longlong *)*plVar5 + 0x48))();
    FUN_140634b70(uVar9,local_90,param_1,FUN_1406cbee0);
    plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x40))();
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_1406cbe80;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_88);
      iVar2 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
      *puVar3 = plVar7;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    (**(code **)(*(longlong *)*plVar5 + 8))();
  }
  plVar5 = local_80;
  for (iVar2 = (int)local_78; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}



// FUNCTION 1406ca260 FUN_1406ca260 body=317 status=ok
// SIG undefined FUN_1406ca260(void)

undefined8 * FUN_1406ca260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar1 + 2,0,0xe0);
    *puVar1 = &PTR__scalar_deleting_destructor__144050c68;
    puVar1[1] = &PTR_FUN_14404bb60;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x10,0);
    FGenericPlatformString::Memcpy(puVar1[0x10],&DAT_143f3edc8,10);
    FWeakObjectPtr::operator=(puVar1 + 0x12,0);
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[1] = &PTR__scalar_deleting_destructor__144050ca8;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406ca3a0 FUN_1406ca3a0 body=959 status=ok
// SIG undefined FUN_1406ca3a0(void)

bool FUN_1406ca3a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  short *psVar10;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8 [16];
  longlong *local_38;
  longlong *local_30;
  
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  FUN_1404ae740(&local_38,local_b8 + 0xe,0);
  FUN_1406d2fd0(local_38);
  local_b8[0] = 0;
  local_b8[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"client_id",0x14);
  psVar10 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x78) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = *(short **)(param_1 + 0x70);
  }
  local_c0 = 0;
  local_c8 = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar9[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_c0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    FGenericPlatformString::Memcpy(local_c8,psVar9,(longlong)(int)uVar7 * 2);
  }
  FUN_1406c3f10(local_38,local_b8,&local_c8);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  local_b8[4] = 0;
  local_b8[5] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 4,0);
  FGenericPlatformString::Memcpy(local_b8[4],L"scope",0xc);
  if (*(int *)(param_1 + 0x88) != 0) {
    psVar10 = *(short **)(param_1 + 0x80);
  }
  local_b8[3] = 0;
  local_b8[2] = 0;
  if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar10[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_b8[3] = (longlong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
    }
    FGenericPlatformString::Memcpy(local_b8[2],psVar10,(longlong)(int)uVar7 * 2);
  }
  FUN_1406c3f10(local_38,local_b8 + 4,local_b8 + 2);
  if (local_b8[4] != 0) {
    FMemory::Free();
  }
  FUN_1406d2cf0(local_38);
  (**(code **)(*local_38 + 8))(local_38);
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_d8);
  local_b8[6] = 0;
  local_b8[7] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 6,0);
  FGenericPlatformString::Memcpy(local_b8[6],L"POST",10);
  (**(code **)(*local_d8 + 0x48))(local_d8,local_b8 + 6);
  if (local_b8[6] != 0) {
    FMemory::Free();
  }
  local_b8[8] = 0;
  local_b8[9] = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 8,0);
  FGenericPlatformString::Memcpy(local_b8[8],L"https://mixer.com/api/v1/oauth/shortcode",0x52);
  (**(code **)(*local_d8 + 0x50))(local_d8,local_b8 + 8);
  if (local_b8[8] != 0) {
    FMemory::Free();
  }
  local_b8[0xc] = 0;
  local_b8[0xd] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 0xc,0);
  FGenericPlatformString::Memcpy(local_b8[0xc],L"application/json",0x22);
  local_b8[10] = 0;
  local_b8[0xb] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 10,0);
  FGenericPlatformString::Memcpy(local_b8[10],L"content-type",0x1a);
  (**(code **)(*local_d8 + 0x68))(local_d8,local_b8 + 10,local_b8 + 0xc);
  if (local_b8[10] != 0) {
    FMemory::Free();
  }
  if (local_b8[0xc] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_d8 + 0x60))(local_d8,local_b8 + 0xe);
  uVar6 = (**(code **)(*local_d8 + 0x80))();
  FUN_1406c1b60(uVar6,param_1,FUN_1406cb730);
  cVar4 = (**(code **)(*local_d8 + 0x78))();
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d0 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_b8[0xe] != 0) {
    FMemory::Free();
  }
  return cVar4 != '\0';
}



// FUNCTION 1406ca760 FUN_1406ca760 body=1054 status=ok
// SIG undefined FUN_1406ca760(void)

void FUN_1406ca760(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong local_b8 [11];
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  plStack_50 = (longlong *)FUN_1406c2e90();
  local_58 = plStack_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  plVar8 = plStack_50;
  local_c8 = local_58;
  plStack_c0 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
  }
  plVar8 = (longlong *)0x0;
  if ((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar6 - 200U < 7) {
      *(undefined1 *)local_c8 = 1;
      uVar7 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_38);
      TJsonReaderFactory<wchar_t>::Create(local_48,uVar7);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_b8[10] = 0;
      plStack_60 = (longlong *)0x0;
      cVar5 = FUN_1404a7f60(local_48,local_b8 + 10);
      lVar4 = local_b8[10];
      if ((cVar5 != '\0') && (local_b8[10] != 0)) {
        local_b8[0] = 0;
        local_b8[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
        FGenericPlatformString::Memcpy(local_b8[0],&DAT_14404f424,6);
        FUN_1416b40a0(lVar4,local_b8,local_c8 + 1);
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        local_b8[2] = 0;
        local_b8[3] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
        FGenericPlatformString::Memcpy(local_b8[2],L"channelId",0x14);
        FUN_1416b3b00(lVar4,local_b8 + 2,local_c8 + 3);
        if (local_b8[2] != 0) {
          FMemory::Free();
        }
        local_b8[4] = 0;
        local_b8[5] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 4,0);
        FGenericPlatformString::Memcpy(local_b8[4],L"online",0xe);
        FUN_1416b3900(lVar4,local_b8 + 4,(undefined1 *)((longlong)local_c8 + 0x1c));
        if (local_b8[4] != 0) {
          FMemory::Free();
        }
        local_b8[6] = 0;
        local_b8[7] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 6,0);
        FGenericPlatformString::Memcpy(local_b8[6],L"isTestStream",0x1a);
        FUN_1416b3900(lVar4,local_b8 + 6,(undefined1 *)((longlong)local_c8 + 0x1d));
        if (local_b8[6] != 0) {
          FMemory::Free();
        }
        local_b8[8] = 0;
        local_b8[9] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 8,0);
        FGenericPlatformString::Memcpy(local_b8[8],L"startedAt",0x14);
        FUN_1416b40a0(lVar4,local_b8 + 8,local_c8 + 4);
        if (local_b8[8] != 0) {
          FMemory::Free();
        }
      }
      plVar1 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x38) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x30);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_c8);
    }
  }
  plVar8 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
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
  plVar8 = *(longlong **)(param_2 + 8);
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = (longlong *)param_3[1];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1406cab80 FUN_1406cab80 body=999 status=ok
// SIG undefined FUN_1406cab80(void)

void FUN_1406cab80(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong local_98 [2];
  undefined8 *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  
  plStack_60 = (longlong *)operator_new(0x28);
  if (plStack_60 == (longlong *)0x0) {
    plStack_60 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_60 + 1) = 1;
    *plStack_60 = (longlong)&PTR_FUN_144051160;
    *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
    plStack_60[2] = 0;
    plStack_60[3] = 0;
    plStack_60[4] = 0;
  }
  plVar10 = (longlong *)0x0;
  local_68 = plStack_60 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  plVar14 = plStack_60;
  local_78 = local_68;
  plStack_70 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  if (((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (iVar7 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar7 - 200U < 7)) {
    *(undefined1 *)local_78 = 1;
    TArray<FString,FDefaultAllocator>::Empty(local_78 + 1,0);
    uVar8 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_48);
    TJsonReaderFactory<wchar_t>::Create(local_58,uVar8);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    cVar6 = FUN_1406c1c50(local_58);
    plVar14 = local_78;
    if (cVar6 != '\0') {
      iVar5 = (int)local_80;
      uVar12 = local_80 & 0xffffffff;
      iVar7 = (int)local_78[2];
      if (iVar7 < (int)local_80) {
        *(int *)(local_78 + 2) = (int)local_80;
        iVar11 = (int)local_80 - iVar7;
        if (*(int *)((longlong)local_78 + 0x14) < (int)local_80) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_78 + 1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + plVar14[1]),0,(longlong)iVar11 << 4);
      }
      else if ((int)local_80 < iVar7) {
        TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                  (local_78 + 1,uVar12,iVar7 - (int)local_80,1);
      }
      puVar13 = local_88;
      plVar14 = plVar10;
      if (0 < iVar5) {
        do {
          puVar9 = (undefined8 *)(*(code *)**(undefined8 **)*puVar13)();
          plVar3 = (longlong *)puVar9[1];
          uVar8 = *puVar9;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_98[0] = 0;
          local_98[1] = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
          FGenericPlatformString::Memcpy(local_98[0],L"address",0x10);
          FUN_1416b40a0(uVar8,local_98,local_78[1] + (longlong)plVar14);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + 2;
          plVar14 = plVar14 + 2;
        } while (uVar12 != 0);
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
    plVar14 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x68) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x60);
    }
    (**(code **)(*plVar10 + 0x40))(plVar10,&local_78);
  }
  plVar10 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_70 + 1;
    lVar4 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = *(longlong **)(param_2 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar10 + 1;
    lVar4 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_3[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar10 + 1;
    lVar4 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 1406caf70 FUN_1406caf70 body=1125 status=ok
// SIG undefined FUN_1406caf70(void)

void FUN_1406caf70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  short *psVar11;
  short *psVar12;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong local_c8 [8];
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [6];
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  longlong *local_38;
  longlong *local_30;
  
  local_78[4] = 0;
  local_78[5] = 0;
  FUN_1404ae740(&local_38,local_78 + 4,0);
  FUN_1406d2fd0(local_38);
  local_c8[0] = 0;
  local_c8[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Memcpy(local_c8[0],L"client_id",0x14);
  psVar12 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x78) == 0) {
    psVar11 = &DAT_143f3eda8;
  }
  else {
    psVar11 = *(short **)(param_1 + 0x70);
  }
  local_d8 = 0;
  local_d0 = 0;
  if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar11[lVar10] != 0);
    uVar8 = (int)lVar10 + 1;
    local_d0 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    }
    FGenericPlatformString::Memcpy(local_d8,psVar11,(longlong)(int)uVar8 * 2);
  }
  FUN_1406c3f10(local_38,local_c8,&local_d8);
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  local_c8[4] = 0;
  local_c8[5] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 4,0);
  FGenericPlatformString::Memcpy(local_c8[4],L"scope",0xc);
  if (*(int *)(param_1 + 0x88) != 0) {
    psVar12 = *(short **)(param_1 + 0x80);
  }
  local_c8[2] = 0;
  local_c8[3] = 0;
  if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar12[lVar10] != 0);
    uVar8 = (int)lVar10 + 1;
    local_c8[3] = (longlong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 2,0);
    }
    FGenericPlatformString::Memcpy(local_c8[2],psVar12,(longlong)(int)uVar8 * 2);
  }
  FUN_1406c3f10(local_38,local_c8 + 4,local_c8 + 2);
  if (local_c8[4] != 0) {
    FMemory::Free();
  }
  FUN_1406d2cf0(local_38);
  (**(code **)(*local_38 + 8))(local_38);
  plVar6 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_e8);
  local_c8[6] = 0;
  local_c8[7] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 6,0);
  FGenericPlatformString::Memcpy(local_c8[6],&DAT_144050108,8);
  (**(code **)(*local_e8 + 0x48))(local_e8,local_c8 + 6);
  if (local_c8[6] != 0) {
    FMemory::Free();
  }
  plVar6 = local_e8;
  iVar9 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar9 = 0;
  }
  local_88 = (wchar_t *)0x0;
  local_7c = 0;
  local_80 = iVar9 + 0x30;
  if (0 < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  }
  uVar5 = local_7c;
  iVar4 = local_80;
  pwVar3 = local_88;
  builtin_wcsncpy(local_88,L"https://mixer.com/api/v1/oauth/shortcode/check/",0x2f);
  _guard_xfg_dispatch_icall_nop(local_88 + 0x2f,(void *)*param_2,(longlong)iVar9 * 2);
  pwVar3[(longlong)iVar9 + 0x2f] = L'\0';
  local_48 = pwVar3;
  local_40 = iVar4;
  local_3c = uVar5;
  (**(code **)(*plVar6 + 0x50))(plVar6,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_78[3] = 0x11;
  local_78[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
  FGenericPlatformString::Memcpy(local_78[2],L"application/json",0x22);
  local_78[0] = 0;
  local_78[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"content-type",0x1a);
  (**(code **)(*local_e8 + 0x68))(local_e8,local_78,local_78 + 2);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_e8 + 0x60))(local_e8,local_78 + 4);
  uVar7 = (**(code **)(*local_e8 + 0x80))();
  FUN_1406c1b60(uVar7,param_1,FUN_1406cb3e0);
  (**(code **)(*local_e8 + 0x78))();
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_e0 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cb3e0 FUN_1406cb3e0 body=835 status=ok
// SIG undefined FUN_1406cb3e0(void)

void FUN_1406cb3e0(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_88 [3];
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  plStack_50 = (longlong *)operator_new(0x28);
  plVar8 = (longlong *)0x0;
  if (plStack_50 == (longlong *)0x0) {
    plStack_50 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_50 + 1) = 1;
    *(undefined4 *)((longlong)plStack_50 + 0xc) = 1;
    *plStack_50 = (longlong)&PTR_FUN_144051130;
    plStack_50[3] = 0;
    *(undefined4 *)((longlong)plStack_50 + 0x24) = 0;
    *(undefined1 *)(plStack_50 + 2) = 0;
    *(undefined4 *)(plStack_50 + 4) = 0;
    if (*(int *)((longlong)plStack_50 + 0x24) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plStack_50 + 3,0);
    }
  }
  local_58 = plStack_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  plVar3 = plStack_50;
  local_68 = local_58;
  plStack_60 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if ((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar6 == 200) {
      *(undefined1 *)local_68 = 1;
      uVar7 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_38);
      TJsonReaderFactory<wchar_t>::Create(local_48,uVar7);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_88[2] = 0;
      plStack_70 = (longlong *)0x0;
      cVar5 = FUN_1404a7f60(local_48,local_88 + 2);
      lVar4 = local_88[2];
      if ((cVar5 != '\0') && (local_88[2] != 0)) {
        local_88[0] = 0;
        local_88[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
        FGenericPlatformString::Memcpy(local_88[0],L"code",10);
        FUN_1416b40a0(lVar4,local_88,local_68 + 1);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
      }
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    else if (iVar6 == 0xcc) {
      *(undefined1 *)local_68 = 1;
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_68);
    }
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_60)(plStack_60);
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
  plVar8 = *(longlong **)(param_2 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 1406cb730 FUN_1406cb730 body=894 status=ok
// SIG undefined FUN_1406cb730(void)

void FUN_1406cb730(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_a8 [6];
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  plStack_50 = (longlong *)FUN_1406c2f30();
  local_58 = plStack_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  plVar8 = plStack_50;
  local_78 = local_58;
  plStack_70 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
  }
  plVar8 = (longlong *)0x0;
  if ((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar6 - 200U < 7) {
      *(undefined1 *)local_78 = 1;
      uVar7 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_38);
      TJsonReaderFactory<wchar_t>::Create(local_48,uVar7);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      cVar5 = FUN_1404a7f60(local_48,&local_68);
      lVar4 = local_68;
      if ((cVar5 != '\0') && (local_68 != 0)) {
        local_a8[0] = 0;
        local_a8[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
        FGenericPlatformString::Memcpy(local_a8[0],L"code",10);
        FUN_1416b40a0(lVar4,local_a8,local_78 + 1);
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        local_a8[2] = 0;
        local_a8[3] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
        FGenericPlatformString::Memcpy(local_a8[2],L"handle",0xe);
        FUN_1416b40a0(lVar4,local_a8 + 2,local_78 + 3);
        if (local_a8[2] != 0) {
          FMemory::Free();
        }
        local_a8[4] = 0;
        local_a8[5] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
        FGenericPlatformString::Memcpy(local_a8[4],L"expires_in",0x16);
        FUN_1416b3b00(lVar4,local_a8 + 4,local_78 + 5);
        if (local_a8[4] != 0) {
          FMemory::Free();
        }
      }
      plVar1 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar5 != '\0') {
      if ((int)param_1[1] != 0) {
        plVar8 = (longlong *)*param_1;
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_78);
    }
  }
  plVar8 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
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
  plVar8 = *(longlong **)(param_2 + 8);
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = (longlong *)param_3[1];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1406cbab0 FUN_1406cbab0 body=975 status=ok
// SIG undefined FUN_1406cbab0(void)

void FUN_1406cbab0(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8 [9];
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  plStack_50 = (longlong *)FUN_1406c2fd0();
  local_58 = plStack_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  plVar8 = plStack_50;
  local_b8 = local_58;
  plStack_b0 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
  }
  plVar8 = (longlong *)0x0;
  if ((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar6 - 200U < 7) {
      *(undefined1 *)local_b8 = 1;
      uVar7 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_38);
      TJsonReaderFactory<wchar_t>::Create(local_48,uVar7);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_a8[8] = 0;
      plStack_60 = (longlong *)0x0;
      cVar5 = FUN_1404a7f60(local_48,local_a8 + 8);
      lVar4 = local_a8[8];
      if ((cVar5 != '\0') && (local_a8[8] != 0)) {
        local_a8[0] = 0;
        local_a8[1] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
        FGenericPlatformString::Memcpy(local_a8[0],L"access_token",0x1a);
        FUN_1416b40a0(lVar4,local_a8,local_b8 + 1);
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        local_a8[2] = 0;
        local_a8[3] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
        FGenericPlatformString::Memcpy(local_a8[2],L"token_type",0x16);
        FUN_1416b40a0(lVar4,local_a8 + 2,local_b8 + 3);
        if (local_a8[2] != 0) {
          FMemory::Free();
        }
        local_a8[4] = 0;
        local_a8[5] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
        FGenericPlatformString::Memcpy(local_a8[4],L"expires_in",0x16);
        FUN_1416b3b00(lVar4,local_a8 + 4,local_b8 + 5);
        if (local_a8[4] != 0) {
          FMemory::Free();
        }
        local_a8[6] = 0;
        local_a8[7] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 6,0);
        FGenericPlatformString::Memcpy(local_a8[6],L"refresh_token",0x1c);
        FUN_1416b40a0(lVar4,local_a8 + 6,local_b8 + 6);
        if (local_a8[6] != 0) {
          FMemory::Free();
        }
      }
      plVar1 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x20);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_b8);
    }
  }
  plVar8 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
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
  plVar8 = *(longlong **)(param_2 + 8);
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = (longlong *)param_3[1];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1406cbe80 FUN_1406cbe80 body=96 status=ok
// SIG undefined FUN_1406cbe80(void)

void FUN_1406cbe80(longlong param_1)

{
  FUN_1406c5260();
  TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x70,0);
  FUN_1406c5d10(param_1 + 0x168,0);
  FUN_1406c5d90(param_1 + 0x118,0);
  FUN_1406c5c90(param_1 + 0x1b8,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x208,0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 1406cbee0 FUN_1406cbee0 body=204 status=ok
// SIG undefined FUN_1406cbee0(void)

void FUN_1406cbee0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  TJsonReaderFactory<wchar_t>::Create(local_18);
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  cVar6 = FUN_1404a7f60(local_18,&local_28);
  if ((cVar6 != '\0') && (local_28 != 0)) {
    FUN_1406cbfb0(param_1);
  }
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
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



// FUNCTION 1406cbfb0 FUN_1406cbfb0 body=1555 status=ok
// SIG undefined FUN_1406cbfb0(void)

undefined8 FUN_1406cbfb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  wchar_t _C;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  wint_t wVar9;
  wint_t wVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  wchar_t *pwVar17;
  undefined8 uVar18;
  longlong *plVar19;
  undefined2 *puVar20;
  int local_res18;
  undefined4 uStackX_1c;
  int local_res20 [2];
  longlong local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  int local_b0 [2];
  undefined8 *local_a8;
  longlong local_a0 [7];
  longlong *local_68;
  longlong local_60 [3];
  longlong *plStack_48;
  
  uVar18 = 0;
  plVar19 = (longlong *)0x0;
  local_res18 = 0;
  local_c0 = (undefined2 *)0x0;
  local_b8 = 0;
  local_a0[0] = 0;
  local_a0[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_a0[0],5,&DAT_14404f124,5,0x3f);
  cVar8 = FUN_1416b40a0(param_2,local_a0,&local_c0);
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  if (cVar8 != '\0') {
    pwVar17 = L"reply";
    puVar16 = &DAT_143f3eda8;
    if ((int)local_b8 != 0) {
      puVar16 = local_c0;
    }
    do {
      _C = *(wchar_t *)((longlong)(puVar16 + -0xa2027c28) + (longlong)pwVar17);
      if ((_C == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cc0c2;
      if (_C != *pwVar17) {
        wVar9 = towlower(_C);
        wVar10 = towlower(*pwVar17);
        if (wVar9 != wVar10) goto LAB_1406cc0b3;
      }
      pwVar17 = pwVar17 + 1;
    } while( true );
  }
LAB_1406cc574:
  uVar18 = 0;
LAB_1406cc577:
  if (local_c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar18;
LAB_1406cc0b3:
  if (wVar9 == wVar10) {
LAB_1406cc0c2:
    local_a0[2] = 0;
    local_a0[3] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a0[2],3,&DAT_14404ebe4,3,0x3f);
    cVar8 = FUN_1416b3b00(param_2,local_a0 + 2,&local_res18);
    if (local_a0[2] != 0) {
      FMemory::Free();
    }
    if (cVar8 != '\0') {
      local_60[0] = 0;
      local_60[1] = 0;
      local_d0 = 0;
      local_c8 = 0;
      FString::operator=(&local_d0,local_60);
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
        lVar12 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar12 = param_1 + 0xa8;
        }
        iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)local_res18)
                                   * 4);
        if (iVar11 != -1) {
          lVar12 = *(longlong *)(param_1 + 0x70);
          do {
            lVar15 = (longlong)iVar11;
            if (*(int *)(lVar12 + lVar15 * 0x28) == local_res18) {
              if (iVar11 != -1) {
                lVar3 = lVar12 + lVar15 * 0x28;
                pcVar4 = *(code **)(lVar12 + 8 + lVar15 * 0x28);
                plVar19 = (longlong *)(lVar3 + 0x10);
                if (&local_d0 != plVar19) {
                  if (local_d0 != 0) {
                    FMemory::Free();
                  }
                  local_d0 = *plVar19;
                  *plVar19 = 0;
                  local_c8 = *(undefined8 *)(lVar3 + 0x18);
                  *(undefined8 *)(lVar3 + 0x18) = 0;
                }
                TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                ::Remove(param_1 + 0x70,iVar11);
                if (pcVar4 != (code *)0x0) {
                  (*pcVar4)(param_1,param_2,&local_d0);
                }
                uVar18 = 1;
              }
              break;
            }
            iVar11 = *(int *)(lVar12 + 0x20 + lVar15 * 0x28);
          } while (iVar11 != -1);
        }
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
      goto LAB_1406cc577;
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = *(undefined2 **)(param_1 + 0x40);
    }
    puVar20 = &DAT_143f3eda8;
    if ((int)local_b8 != 0) {
      puVar20 = local_c0;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,puVar16);
    if (iVar11 != 0) goto LAB_1406cc577;
    local_a0[4] = 0;
    local_a0[5] = 0;
    cVar8 = FUN_1416b40a0(param_2,param_1 + 0x50,local_a0 + 4);
    if (cVar8 != '\0') {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(param_2,local_res20,param_1 + 0x60);
      plVar14 = plVar19;
      if (local_res20[0] != -1) {
        plVar14 = (longlong *)(*param_2 + (longlong)local_res20[0] * 0x28);
      }
      plVar13 = plVar14 + 2;
      if (plVar14 == (longlong *)0x0) {
        plVar13 = plVar19;
      }
      if ((plVar13 == (longlong *)0x0) ||
         (plVar14 = (longlong *)*plVar13, plVar14 == (longlong *)0x0)) {
        plVar13 = local_60 + 2;
        local_60[2] = 0;
        plStack_48 = (longlong *)0x0;
        bVar7 = false;
        bVar6 = true;
        plVar14 = plVar19;
      }
      else {
        local_68 = (longlong *)plVar13[1];
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        plVar13 = local_a0 + 6;
        bVar7 = true;
        bVar6 = false;
        local_a0[6] = (longlong)plVar14;
      }
      plVar5 = (longlong *)plVar13[1];
      plVar13[1] = 0;
      *plVar13 = 0;
      plVar13 = plStack_48;
      if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_48 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_48)(plStack_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_48 + 8))(plStack_48,1);
          }
        }
      }
      plVar13 = local_68;
      if ((bVar7) && (local_68 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      if ((plVar14 != (longlong *)0x0) &&
         ((local_a8 = (undefined8 *)0x0, *(uint *)(plVar14 + 1) < 2 ||
          (cVar8 = (**(code **)(*plVar14 + 0x28))(plVar14,&local_a8), cVar8 != '\0')))) {
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0xc0,local_b0,local_a0 + 4);
        plVar14 = plVar19;
        if (local_b0[0] != -1) {
          plVar14 = (longlong *)((longlong)local_b0[0] * 0x30 + *(longlong *)(param_1 + 0xc0));
        }
        plVar13 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar13 = plVar19;
        }
        if (plVar13 == (longlong *)0x0) {
          if (local_a8 == (undefined8 *)0x0) {
            plVar14 = (longlong *)CONCAT44(uStackX_1c,local_res18);
            bVar6 = false;
          }
          else {
            plVar14 = (longlong *)local_a8[1];
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            bVar6 = true;
            plVar19 = plVar14;
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            LOCK();
            plVar13 = plVar19 + 1;
            lVar12 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
          if ((bVar6) && (plVar14 != (longlong *)0x0)) {
            LOCK();
            plVar19 = plVar14 + 1;
            lVar12 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
        }
        else if ((code *)*plVar13 != (code *)0x0) {
          if (local_a8 != (undefined8 *)0x0) {
            plVar19 = (longlong *)*local_a8;
          }
          (*(code *)*plVar13)(param_1,plVar19,plVar13 + 1);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar5 + 1;
          lVar12 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        uVar18 = 1;
        if (local_a0[4] != 0) {
          FMemory::Free();
        }
        goto LAB_1406cc577;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar5 + 1;
        lVar12 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    if (local_a0[4] != 0) {
      FMemory::Free();
    }
  }
  goto LAB_1406cc574;
}



// FUNCTION 1406cc5d0 FUN_1406cc5d0 body=1272 status=ok
// SIG undefined FUN_1406cc5d0(void)

undefined8 FUN_1406cc5d0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t wVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  wint_t wVar8;
  wint_t wVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  longlong local_f8 [10];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_f8[1] = 5;
  local_118 = (undefined2 *)0x0;
  local_110 = 0;
  local_f8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
  FGenericPlatformString::Memcpy(local_f8[0],L"kind",10);
  cVar7 = FUN_1416b40a0(*param_3,local_f8,&local_118);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (cVar7 == '\0') {
    if (local_118 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)param_3[1];
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
    return 0;
  }
  local_108 = (undefined2 *)0x0;
  local_100 = 0;
  local_f8[2] = 0;
  local_f8[3] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 2,0);
  FGenericPlatformString::Memcpy(local_f8[2],L"controlID",0x14);
  cVar7 = FUN_1416b40a0(*param_3,local_f8 + 2,&local_108);
  if (local_f8[2] != 0) {
    FMemory::Free();
  }
  if (cVar7 == '\0') {
    if (local_108 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_118 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    return 0;
  }
  pwVar12 = L"button";
  puVar11 = &DAT_143f3eda8;
  if ((int)local_110 != 0) {
    puVar11 = local_118;
  }
  do {
    wVar4 = *(wchar_t *)((longlong)(puVar11 + -0xa2027e28) + (longlong)pwVar12);
    if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) goto LAB_1406cc7c4;
    if (wVar4 != *pwVar12) {
      wVar8 = towlower(wVar4);
      wVar9 = towlower(*pwVar12);
      if (wVar8 != wVar9) break;
    }
    pwVar12 = pwVar12 + 1;
  } while( true );
  if (wVar8 != wVar9) {
    pwVar12 = L"joystick";
    puVar11 = &DAT_143f3eda8;
    if ((int)local_110 != 0) {
      puVar11 = local_118;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar11 + -0xa2027e40) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) goto LAB_1406cc96b;
      if (wVar4 != *pwVar12) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar12);
        if (wVar8 != wVar9) goto LAB_1406cca02;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
LAB_1406cc7c4:
  FText::FText(local_a8);
  local_f8[5] = 5;
  local_70 = 0;
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[4] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 4,0);
  FGenericPlatformString::Memcpy(local_f8[4],L"text",10);
  FUN_1416b40a0(*param_3,local_f8 + 4,local_f8 + 8);
  if (local_f8[4] != 0) {
    FMemory::Free();
  }
  uVar10 = FText::FromString(local_58,local_f8 + 8);
  FText::operator=(local_a8,uVar10);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  local_f8[6] = 0;
  local_f8[7] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 6,0);
  FGenericPlatformString::Memcpy(local_f8[6],L"cost",10);
  FUN_1416b3bf0(*param_3,local_f8 + 6,local_90);
  if (local_f8[6] != 0) {
    FMemory::Free();
  }
  local_80 = 0;
  puVar11 = &DAT_143f3eda8;
  if ((int)local_100 != 0) {
    puVar11 = local_108;
  }
  local_78 = 0;
  local_74 = 1;
  local_88 = 0;
  local_70 = param_2;
  FName::FName(local_res20,puVar11,1);
  local_68 = local_res20;
  local_60 = local_a8;
  FUN_1406c1ed0(param_1 + 0x168,local_res18,&local_68,0);
  if (local_f8[8] != 0) {
    FMemory::Free();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  goto LAB_1406cc96b;
LAB_1406cca02:
  if (wVar8 != wVar9) {
    pwVar12 = L"label";
    puVar11 = &DAT_143f3eda8;
    if ((int)local_110 != 0) {
      puVar11 = local_118;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar11 + -0xa2027e4c) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar4 != *pwVar12) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar12);
        if (wVar8 != wVar9) goto LAB_1406cca66;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_1406cc96b;
LAB_1406cca66:
  if (wVar8 != wVar9) {
    pwVar12 = L"textbox";
    puVar11 = &DAT_143f3eda8;
    if ((int)local_110 != 0) {
      puVar11 = local_118;
    }
    for (; (wVar4 = *(wchar_t *)((longlong)(puVar11 + -0xa2027e54) + (longlong)pwVar12),
           wVar4 != L'\0' || (*pwVar12 != L'\0')); pwVar12 = pwVar12 + 1) {
      if (wVar4 != *pwVar12) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar12);
        if (wVar8 != wVar9) break;
      }
    }
  }
LAB_1406cc96b:
  if (local_108 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return 1;
}



// FUNCTION 1406ccad0 FUN_1406ccad0 body=845 status=ok
// SIG undefined FUN_1406ccad0(void)

ulonglong FUN_1406ccad0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  
  bVar14 = false;
  local_res18[0] = 0;
  local_d8 = 0;
  local_d0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"controls",0x12);
  uVar7 = FUN_1416b3850(param_2,&local_d8,&local_78);
  cVar6 = (char)uVar7;
  if (local_d8 != 0) {
    uVar7 = FMemory::Free();
  }
  if (cVar6 == '\0') {
    return uVar7 & 0xffffffffffffff00;
  }
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  local_c8 = 0;
  local_c0 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"sceneID",0x10);
  cVar6 = FUN_1416b40a0(param_2,&local_c8,&local_88);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (cVar6 == '\0') {
    bVar11 = 0;
  }
  else {
    puVar10 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar10 = local_88;
    }
    FName::FName(&local_res20,puVar10,1);
    puVar12 = (undefined8 *)*local_78;
    puVar13 = puVar12 + (longlong)(int)local_78[1] * 2;
    for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
      puVar8 = (undefined8 *)(*(code *)**(undefined8 **)*puVar12)();
      local_60 = *puVar8;
      local_58 = puVar8[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      FUN_1406cc5d0(param_1,local_res20,&local_60);
    }
    local_b8 = 0;
    local_b0 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"groups",0xe);
    cVar6 = FUN_1416b3850(param_2,&local_b8,&local_70);
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (cVar6 != '\0') {
      puVar12 = (undefined8 *)*local_70;
      puVar13 = puVar12 + (longlong)(int)local_70[1] * 2;
      for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
        local_98 = (undefined2 *)0x0;
        local_90 = 0;
        plVar9 = (longlong *)(*(code *)**(undefined8 **)*puVar12)();
        plVar3 = (longlong *)plVar9[1];
        lVar4 = *plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar4 == 0) {
LAB_1406ccd2f:
          bVar5 = false;
        }
        else {
          local_a8 = 0;
          local_a0 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          FGenericPlatformString::Memcpy(local_a8,L"groupId",0x10);
          bVar14 = true;
          cVar6 = FUN_1416b40a0(lVar4,&local_a8,&local_98);
          if (cVar6 == '\0') goto LAB_1406ccd2f;
          bVar5 = true;
        }
        if ((bVar14) && (bVar14 = false, local_a8 != 0)) {
          FMemory::Free();
        }
        if (bVar5) {
          puVar10 = &DAT_143f3eda8;
          if ((int)local_90 != 0) {
            puVar10 = local_98;
          }
          FName::FName(local_68,puVar10,1);
          local_50 = local_68;
          local_48 = &local_res20;
          TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>
                    (param_1 + 0x118,local_res18,&local_50,0);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3);
            }
          }
        }
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    bVar11 = 1;
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar11;
}



// FUNCTION 1406cce20 FUN_1406cce20 body=1505 status=ok
// SIG undefined FUN_1406cce20(void)

void FUN_1406cce20(longlong param_1)

{
  undefined1 local_res8 [8];
  longlong local_48 [2];
  longlong *local_38;
  code **local_30;
  code *local_28;
  longlong local_20 [3];
  
  local_48[1] = 6;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"hello",0xc);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c8ee0;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  param_1 = param_1 + 0xc0;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"giveInput",0x14);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c8150;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onParticipantJoin",0x24);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c9080;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onParticipantLeave",0x26);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c9720;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onParticipantUpdate",0x28);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c99e0;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onReady",0x10);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c9e10;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onControlUpdate",0x20);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c7c10;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onGroupCreate",0x1c);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c8920;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"onGroupUpdate",0x1c);
  local_38 = (longlong *)0x0;
  local_28 = FUN_1406c8bd0;
  local_30 = (code **)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  FString::operator=(local_20,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = local_48;
  local_30 = &local_28;
  FUN_1406c28b0(param_1,local_res8,&local_38,0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cd410 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1406cd54f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1406cd54f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1406cd630 Rehash body=534 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1406cd76f;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_1406cd76f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x50 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x4c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 9) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1406cd850 Remove body=166 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x28;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x20);
        break;
      }
      lVar6 = (longlong)iVar3 * 5 + 4;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1406cd900 FUN_1406cd900 body=339 status=ok
// SIG undefined FUN_1406cd900(void)

undefined8 FUN_1406cd900(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar7 + ((longlong)param_2 & uVar8) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while( true ) {
    lVar4 = (longlong)iVar6 * 0x20;
    if (*(int *)(lVar4 + lVar3) == param_2) break;
    iVar6 = *(int *)(lVar4 + 0x18 + lVar3);
    if (iVar6 == -1) {
      return 0;
    }
  }
  lVar4 = (longlong)iVar6 * 0x20;
  uVar8 = (longlong)*(int *)(lVar4 + 0x1c + lVar3) & uVar8;
  piVar5 = (int *)((longlong)plVar7 + uVar8 * 4);
  iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
  do {
    if (iVar2 == -1) {
LAB_1406cd9d0:
      plVar7 = *(longlong **)(lVar4 + 0x10 + *param_1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar5 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      return 1;
    }
    if (iVar2 == iVar6) {
      *piVar5 = *(int *)(lVar4 + lVar3 + 0x18);
      goto LAB_1406cd9d0;
    }
    piVar5 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
    iVar2 = *piVar5;
  } while( true );
}



// FUNCTION 1406cda60 FUN_1406cda60 body=424 status=ok
// SIG undefined FUN_1406cda60(void)

undefined8 FUN_1406cda60(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar7 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  iVar7 = *(int *)((longlong)plVar9 + ((longlong)iVar7 & uVar10) * 4);
  if (iVar7 == -1) {
    return 0;
  }
  lVar6 = *param_1;
  while( true ) {
    lVar8 = (longlong)iVar7;
    piVar3 = (int *)(lVar6 + lVar8 * 0x28);
    if (((*(int *)(lVar6 + 4 + lVar8 * 0x28) == param_2[1] &&
         *(int *)(lVar6 + 8 + lVar8 * 0x28) == param_2[2]) && piVar3[3] == param_2[3]) &&
        *param_2 == *piVar3) break;
    iVar7 = piVar3[8];
    if (iVar7 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar10 = (longlong)*(int *)(lVar6 + 0x24 + lVar8 * 0x28) & uVar10;
    puVar4 = (undefined4 *)((longlong)plVar9 + uVar10 * 4);
    iVar5 = *(int *)((longlong)plVar9 + uVar10 * 4);
    while (iVar5 != -1) {
      if (iVar5 == iVar7) {
        *puVar4 = *(undefined4 *)(lVar6 + lVar8 * 0x28 + 0x20);
        break;
      }
      lVar2 = (longlong)iVar5 * 5 + 4;
      puVar4 = (undefined4 *)(lVar6 + lVar2 * 8);
      iVar5 = *(int *)(lVar6 + lVar2 * 8);
    }
  }
  plVar9 = *(longlong **)(*param_1 + 0x18 + lVar8 * 0x28);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar7,1);
  return 1;
}



// FUNCTION 1406cdc10 RemoveAtImpl body=184 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x10);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + *param_1),(longlong)iVar1 << 4);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1406cdcd0 FUN_1406cdcd0 body=1012 status=ok
// SIG undefined FUN_1406cdcd0(void)

bool FUN_1406cdcd0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8 [18];
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  local_d8[0x10] = 0;
  local_d8[0x11] = 0;
  FUN_1404ae740(&local_48,local_d8 + 0x10,0);
  FUN_1406d2fd0(local_48);
  local_d8[0] = 0;
  local_d8[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
  FGenericPlatformString::Memcpy(local_d8[0],L"client_id",0x14);
  if (*(int *)(param_1 + 0x78) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = *(short **)(param_1 + 0x70);
  }
  local_e0 = 0;
  local_e8 = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar9[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_e0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    }
    FGenericPlatformString::Memcpy(local_e8,psVar9,(longlong)(int)uVar7 * 2);
  }
  FUN_1406c3f10(local_48,local_d8,&local_e8);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  local_d8[2] = 0;
  local_d8[3] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
  FGenericPlatformString::Memcpy(local_d8[2],L"grant_type",0x16);
  local_d8[0xe] = 0;
  local_d8[0xf] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0xe,0);
  FGenericPlatformString::Memcpy(local_d8[0xe],L"authorization_code",0x26);
  FUN_1406c3f10(local_48,local_d8 + 2,local_d8 + 0xe);
  if (local_d8[2] != 0) {
    FMemory::Free();
  }
  local_d8[4] = 0;
  local_d8[5] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 4,0);
  FGenericPlatformString::Memcpy(local_d8[4],L"code",10);
  uVar5 = FString::FString(local_38,param_2);
  FUN_1406c3f10(local_48,local_d8 + 4,uVar5);
  if (local_d8[4] != 0) {
    FMemory::Free();
  }
  FUN_1406d2cf0(local_48);
  (**(code **)(*local_48 + 8))(local_48);
  plVar6 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_f8);
  local_d8[6] = 0;
  local_d8[7] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 6,0);
  FGenericPlatformString::Memcpy(local_d8[6],L"POST",10);
  (**(code **)(*local_f8 + 0x48))(local_f8,local_d8 + 6);
  if (local_d8[6] != 0) {
    FMemory::Free();
  }
  local_d8[8] = 0;
  local_d8[9] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 8,0);
  FGenericPlatformString::Memcpy(local_d8[8],L"https://mixer.com/api/v1/oauth/token",0x4a);
  (**(code **)(*local_f8 + 0x50))(local_f8,local_d8 + 8);
  if (local_d8[8] != 0) {
    FMemory::Free();
  }
  local_d8[0xc] = 0;
  local_d8[0xd] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0xc,0);
  FGenericPlatformString::Memcpy(local_d8[0xc],L"application/json",0x22);
  local_d8[10] = 0;
  local_d8[0xb] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 10,0);
  FGenericPlatformString::Memcpy(local_d8[10],L"content-type",0x1a);
  (**(code **)(*local_f8 + 0x68))(local_f8,local_d8 + 10,local_d8 + 0xc);
  if (local_d8[10] != 0) {
    FMemory::Free();
  }
  if (local_d8[0xc] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_f8 + 0x60))(local_f8,local_d8 + 0x10);
  uVar5 = (**(code **)(*local_f8 + 0x80))();
  FUN_1406c1b60(uVar5,param_1,FUN_1406cbab0);
  cVar4 = (**(code **)(*local_f8 + 0x78))();
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f0 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_d8[0x10] != 0) {
    FMemory::Free();
  }
  return cVar4 != '\0';
}



// FUNCTION 1406ce0d0 FUN_1406ce0d0 body=402 status=ok
// SIG undefined FUN_1406ce0d0(void)

void FUN_1406ce0d0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 local_res8 [8];
  undefined2 local_res18 [4];
  undefined1 local_res20 [8];
  longlong local_88 [2];
  longlong *local_78;
  longlong *plStack_70;
  int *local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_1406d1eb0(param_1,&local_78,param_2,local_88);
  plVar3 = local_78;
  if ((((int)local_78[4] - 2U & 0xfffffff5) != 0) || ((int)local_78[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)local_78[1] + 0x50))((longlong *)local_78[1],local_res8,2);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,&DAT_14622e558);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)plVar3[1] + 0x50))((longlong *)plVar3[1],local_res18,2);
  *(undefined4 *)(plVar3 + 4) = 0xc;
  (**(code **)(*param_4 + 8))(param_4,&local_78,0);
  local_58 = local_78;
  plStack_50 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  FUN_1406c6d70(param_1,&local_58);
  local_48 = *param_3;
  FString::FString(local_40,param_3 + 1);
  local_60 = &local_48;
  piVar1 = (int *)(param_1 + 0x110);
  local_68 = piVar1;
  FUN_1406c21d0(param_1 + 0x70,local_res20,&local_68,0);
  plVar3 = *(longlong **)(param_1 + 0x30);
  *piVar1 = *piVar1 + 1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,local_88);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_70 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plStack_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (param_3[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce270 FUN_1406ce270 body=171 status=ok
// SIG undefined FUN_1406ce270(void)

void FUN_1406ce270(longlong param_1,short *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c3d50(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce320 FUN_1406ce320 body=171 status=ok
// SIG undefined FUN_1406ce320(void)

void FUN_1406ce320(longlong param_1,short *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c4050(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce3d0 FUN_1406ce3d0 body=347 status=ok
// SIG undefined FUN_1406ce3d0(void)

void FUN_1406ce3d0(longlong param_1,short *param_2,float *param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 local_res8 [4];
  longlong local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  
  iVar6 = 0;
  local_40 = 0;
  local_48 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_40 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar4 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  fVar1 = *param_3;
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  FString::PrintfImpl(&local_38,&DAT_144050d74,(double)fVar1);
  if (local_30 == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    iVar6 = local_30 + -1;
    puVar3 = local_38;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar3,(longlong)iVar6 * 2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce530 FUN_1406ce530 body=172 status=ok
// SIG undefined FUN_1406ce530(void)

void FUN_1406ce530(longlong param_1,short *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c3e30(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce5e0 FUN_1406ce5e0 body=187 status=ok
// SIG undefined FUN_1406ce5e0(void)

void FUN_1406ce5e0(longlong param_1,short *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  if (0 < *param_3) {
    local_28 = 0;
    local_20 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_20 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = FDateTime::ToIso8601(param_3,local_18);
    FUN_1404f77b0(uVar1,&local_28,uVar2);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406ce6a0 FUN_1406ce6a0 body=297 status=ok
// SIG undefined FUN_1406ce6a0(void)

void FUN_1406ce6a0(longlong param_1,short *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 local_res8 [4];
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  plVar2 = (longlong *)FString::FString(local_18,param_3);
  if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
  *(undefined4 *)(plVar1 + 4) = 7;
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce7d0 FUN_1406ce7d0 body=305 status=ok
// SIG undefined FUN_1406ce7d0(void)

void FUN_1406ce7d0(longlong param_1,short *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 local_res8 [4];
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_20 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar4 * 2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = FText::ToString(param_3);
  plVar3 = (longlong *)FString::FString(local_18,uVar2);
  if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  (**(code **)(*plVar1 + 0x18))(plVar1,plVar3);
  *(undefined4 *)(plVar1 + 4) = 7;
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce910 FUN_1406ce910 body=171 status=ok
// SIG undefined FUN_1406ce910(void)

void FUN_1406ce910(longlong param_1,short *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c4050(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ce9c0 FUN_1406ce9c0 body=172 status=ok
// SIG undefined FUN_1406ce9c0(void)

void FUN_1406ce9c0(longlong param_1,short *param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c4290(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cea70 FUN_1406cea70 body=449 status=ok
// SIG undefined FUN_1406cea70(void)

void FUN_1406cea70(longlong param_1,short *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  longlong local_38;
  ulonglong local_30;
  undefined2 *local_28;
  int local_20;
  
  iVar7 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar5 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  iVar1 = *param_3;
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  FUN_1404b7a80(plVar2[1]);
  plVar3 = (longlong *)plVar2[1];
  if (0 < (int)*(uint *)((longlong)plVar2 + 0x24)) {
    uVar8 = (ulonglong)*(uint *)((longlong)plVar2 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  FString::PrintfImpl(&local_28,L"%lld",(longlong)iVar1);
  if (local_20 == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    iVar7 = local_20 + -1;
    puVar4 = local_28;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar4,(longlong)iVar7 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cec40 FUN_1406cec40 body=171 status=ok
// SIG undefined FUN_1406cec40(void)

void FUN_1406cec40(longlong param_1,short *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c4130(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cecf0 FUN_1406cecf0 body=450 status=ok
// SIG undefined FUN_1406cecf0(void)

void FUN_1406cecf0(longlong param_1,short *param_2,float *param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  longlong local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  
  iVar7 = 0;
  local_40 = 0;
  local_48 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_40 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar5 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  fVar1 = *param_3;
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  FUN_1404b7a80(plVar2[1]);
  plVar3 = (longlong *)plVar2[1];
  if (0 < (int)*(uint *)((longlong)plVar2 + 0x24)) {
    uVar8 = (ulonglong)*(uint *)((longlong)plVar2 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  FString::PrintfImpl(&local_38,&DAT_144050d74,(double)fVar1);
  if (local_30 == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    iVar7 = local_30 + -1;
    puVar4 = local_38;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar4,(longlong)iVar7 * 2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ceec0 FUN_1406ceec0 body=446 status=ok
// SIG undefined FUN_1406ceec0(void)

void FUN_1406ceec0(longlong param_1,short *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  longlong local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  
  iVar7 = 0;
  local_40 = 0;
  local_48 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_40 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar5 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar1 = *param_3;
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  FUN_1404b7a80(plVar2[1]);
  plVar3 = (longlong *)plVar2[1];
  if (0 < (int)*(uint *)((longlong)plVar2 + 0x24)) {
    uVar8 = (ulonglong)*(uint *)((longlong)plVar2 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  FString::PrintfImpl(&local_38,L"%.17g",uVar1);
  if (local_30 == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    iVar7 = local_30 + -1;
    puVar4 = local_38;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar4,(longlong)iVar7 * 2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cf080 FUN_1406cf080 body=187 status=ok
// SIG undefined FUN_1406cf080(void)

void FUN_1406cf080(longlong param_1,short *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  if (0 < *param_3) {
    local_28 = 0;
    local_20 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_20 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = FDateTime::ToIso8601(param_3,local_18);
    FUN_1406c3f10(uVar1,&local_28,uVar2);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cf140 Serialize body=183 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
               (longlong param_1,short *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FString::FString(local_18,param_3);
  FUN_1406c3f10(uVar1,&local_28,uVar2);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cf200 Serialize body=191 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
               (longlong param_1,short *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FText::ToString(param_3);
  uVar2 = FString::FString(local_18,uVar2);
  FUN_1406c3f10(uVar1,&local_28,uVar2);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cf2c0 FUN_1406cf2c0 body=171 status=ok
// SIG undefined FUN_1406cf2c0(void)

void FUN_1406cf2c0(longlong param_1,short *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1406c4130(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cf370 FUN_1406cf370 body=172 status=ok
// SIG undefined FUN_1406cf370(void)

void FUN_1406cf370(longlong param_1,short *param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1404ab790(*(undefined8 *)(param_1 + 8),&local_18,*param_3);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406cf420 Serialize body=348 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = -1;
  plVar8 = plVar5;
  if ((param_2 != (short *)0x0) && (lVar7 = lVar4, plVar8 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_38);
  plVar3 = plVar5;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
    }
    FUN_1416b3b00(*(undefined8 *)(param_1 + 8),&local_38,param_3);
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cf580 Serialize body=348 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = -1;
  plVar8 = plVar5;
  if ((param_2 != (short *)0x0) && (lVar7 = lVar4, plVar8 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_38);
  plVar3 = plVar5;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
    }
    FUN_1416b3bf0(*(undefined8 *)(param_1 + 8),&local_38,param_3);
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cf6e0 Serialize body=358 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,float *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  double dVar9;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = -1;
  plVar8 = plVar5;
  if ((param_2 != (short *)0x0) && (lVar7 = lVar4, plVar8 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_38);
  plVar3 = plVar5;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
    }
    dVar9 = (double)FJsonObject::GetNumberField(*(undefined8 *)(param_1 + 8),&local_38);
    *param_3 = (float)dVar9;
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cf850 Serialize body=351 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined8 *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = -1;
  plVar8 = plVar5;
  if ((param_2 != (short *)0x0) && (lVar7 = lVar4, plVar8 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_38);
  plVar3 = plVar5;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
    }
    uVar9 = FJsonObject::GetNumberField(*(undefined8 *)(param_1 + 8),&local_38);
    *param_3 = uVar9;
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cf9b0 Serialize body=398 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  plVar7 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar6 = -1;
  plVar10 = plVar7;
  if ((param_2 != (short *)0x0) && (lVar9 = lVar6, plVar10 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_40 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    plVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_48);
  plVar4 = plVar7;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = plVar7;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  if (bVar1) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar6 = lVar6 + 1;
      } while (param_2[lVar6] != 0);
      uVar8 = (int)lVar6 + 1;
      local_40 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
    }
    puVar3 = (undefined8 *)
             FJsonObject::GetStringField(*(undefined8 *)(param_1 + 8),local_38,&local_48);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    FDateTime::ParseIso8601(puVar5,param_3);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cfb40 Serialize body=420 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,longlong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  plVar8 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar7 = -1;
  plVar3 = plVar8;
  if ((param_2 != (short *)0x0) && (lVar6 = lVar7, plVar3 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_40 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    plVar3 = local_48;
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar5 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_48);
  plVar4 = plVar8;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = plVar8;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (bVar1) {
    local_40 = 0;
    local_48 = (longlong *)0x0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      uVar5 = (int)lVar7 + 1;
      local_40 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar5 * 2);
    }
    plVar3 = (longlong *)
             FJsonObject::GetStringField(*(undefined8 *)(param_1 + 8),local_38,&local_48);
    if (param_3 != plVar3) {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = *plVar3;
      *plVar3 = 0;
      *(int *)(param_3 + 1) = (int)plVar3[1];
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
      plVar3[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cfcf0 Serialize body=458 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int local_res8 [2];
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar10 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  lVar9 = -1;
  plVar11 = plVar10;
  if ((param_2 != (short *)0x0) && (lVar8 = lVar9, plVar11 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_60 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    plVar11 = local_68;
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar7 * 2);
  }
  plVar4 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_res8,&local_68);
  plVar6 = plVar10;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)(*plVar4 + (longlong)local_res8[0] * 0x28);
  }
  plVar4 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar4 = plVar10;
  }
  if (((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) || (*(int *)(*plVar4 + 8) != 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  if (bVar3) {
    local_78 = 0;
    local_70 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar7 = (int)lVar9 + 1;
      local_70 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,param_2,(longlong)(int)uVar7 * 2);
    }
    uVar5 = FJsonObject::GetStringField(*(undefined8 *)(param_1 + 8),local_58,&local_78);
    uVar5 = FText::FromString(local_48,uVar5);
    FText::operator=(param_3,uVar5);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406cfec0 Serialize body=348 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = -1;
  plVar8 = plVar5;
  if ((param_2 != (short *)0x0) && (lVar7 = lVar4, plVar8 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_38);
  plVar3 = plVar5;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) || (*(int *)(*plVar2 + 8) != 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
    }
    FUN_1416b3d70(*(undefined8 *)(param_1 + 8),&local_38,param_3);
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406d0020 Serialize body=349 status=ok
// SIG undefined Serialize(void)

void FJsonSerializerReader::Serialize(longlong param_1,short *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar6 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar5 = -1;
  plVar9 = plVar6;
  if ((param_2 != (short *)0x0) && (lVar8 = lVar5, plVar9 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_30 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar9 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar7 * 2);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res8,&local_38);
  plVar4 = plVar6;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(*plVar3 + (longlong)local_res8[0] * 0x28);
  }
  plVar3 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = plVar6;
  }
  if (((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) || (*(int *)(*plVar3 + 8) != 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      uVar7 = (int)lVar5 + 1;
      local_30 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar7 * 2);
    }
    uVar2 = FUN_1416b2ba0(*(undefined8 *)(param_1 + 8),&local_38);
    *param_3 = uVar2;
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406d0180 FUN_1406d0180 body=89 status=ok
// SIG undefined FUN_1406d0180(void)

void FUN_1406d0180(longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x68))(param_2,L"isReady",param_1 + 8);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 1406d01e0 FUN_1406d01e0 body=222 status=ok
// SIG undefined FUN_1406d01e0(void)

void FUN_1406d01e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined2 local_res8 [4];
  
  FUN_1406d27b0(*(undefined8 *)(param_1 + 8));
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < (int)param_2[1])); iVar3 = iVar3 + 1) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar2 = *param_2;
    if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,(longlong)iVar3 * 0x10 + lVar2);
    *(undefined4 *)(plVar1 + 4) = 7;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  local_res8[0] = 0x5d;
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x50))(*(longlong **)(lVar2 + 8),local_res8,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 5;
  return;
}



// FUNCTION 1406d02c0 FUN_1406d02c0 body=323 status=ok
// SIG undefined FUN_1406d02c0(void)

void FUN_1406d02c0(longlong param_1,short *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 local_res8 [4];
  longlong local_28;
  ulonglong local_20;
  
  iVar2 = 0;
  local_28 = 0;
  local_20 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
  }
  FUN_1406d26e0(*(undefined8 *)(param_1 + 8),&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  for (; (-1 < iVar2 && (iVar2 < (int)param_3[1])); iVar2 = iVar2 + 1) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar4 = *param_3;
    if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,(longlong)iVar2 * 0x10 + lVar4);
    *(undefined4 *)(plVar1 + 4) = 7;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  local_res8[0] = 0x5d;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res8,2);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x20) = 5;
  return;
}



// FUNCTION 1406d0410 FUN_1406d0410 body=254 status=ok
// SIG undefined FUN_1406d0410(void)

void FUN_1406d0410(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 local_res8 [4];
  
  FUN_1406d29a0(*(undefined8 *)(param_1 + 8));
  for (iVar4 = 0; (-1 < iVar4 && (iVar4 < (int)param_2[1])); iVar4 = iVar4 + 1) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar2 = *param_2;
    if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
    }
    FUN_1404b7a80(plVar1[1]);
    plVar3 = (longlong *)plVar1[1];
    if (0 < (int)*(uint *)((longlong)plVar1 + 0x24)) {
      uVar5 = (ulonglong)*(uint *)((longlong)plVar1 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,(longlong)iVar4 * 0x10 + lVar2);
    *(undefined4 *)(plVar1 + 4) = 7;
  }
  FUN_1406d2600(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1406d0510 FUN_1406d0510 body=352 status=ok
// SIG undefined FUN_1406d0510(void)

void FUN_1406d0510(longlong param_1,short *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined2 local_res8 [4];
  longlong local_38;
  ulonglong local_30;
  
  iVar6 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar3 * 2);
  }
  FUN_1406d2860(*(undefined8 *)(param_1 + 8),&local_38);
  if (local_38 != 0) {
    FMemory::Free();
  }
  for (; (-1 < iVar6 && (iVar6 < (int)param_3[1])); iVar6 = iVar6 + 1) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar4 = *param_3;
    if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
    }
    FUN_1404b7a80(plVar1[1]);
    plVar2 = (longlong *)plVar1[1];
    if (0 < (int)*(uint *)((longlong)plVar1 + 0x24)) {
      uVar5 = (ulonglong)*(uint *)((longlong)plVar1 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,(longlong)iVar6 * 0x10 + lVar4);
    *(undefined4 *)(plVar1 + 4) = 7;
  }
  FUN_1406d2600(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1406d0670 FUN_1406d0670 body=586 status=ok
// SIG undefined FUN_1406d0670(void)

void FUN_1406d0670(longlong param_1,short *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int local_res8 [2];
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  plVar14 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar10 = -1;
  plVar4 = plVar14;
  if ((param_2 != (short *)0x0) && (lVar13 = lVar10, plVar4 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar13 = lVar13 + 1;
    } while (param_2[lVar13] != 0);
    uVar11 = (int)lVar13 + 1;
    local_40 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    plVar4 = local_48;
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar11 * 2);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res8,&local_48);
  plVar6 = plVar14;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)(*plVar3 + (longlong)local_res8[0] * 0x28);
  }
  plVar3 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar3 = plVar14;
  }
  if (((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) || (*(int *)(*plVar3 + 8) != 5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (bVar2) {
    local_60 = 0;
    local_68 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      uVar11 = (int)lVar10 + 1;
      local_60 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar11 * 2);
    }
    plVar4 = (longlong *)FUN_1416b2a60(*(undefined8 *)(param_1 + 8),&local_68);
    iVar9 = 0;
    local_58 = (undefined8 *)0x0;
    iVar12 = (int)plVar4[1];
    lVar10 = *plVar4;
    local_50 = iVar12;
    if (iVar12 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar12,0);
      puVar7 = local_58;
      do {
        *puVar7 = *(undefined8 *)((lVar10 - (longlong)local_58) + (longlong)puVar7);
        lVar13 = *(longlong *)((lVar10 - (longlong)local_58) + 8 + (longlong)puVar7);
        puVar7[1] = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar12 = local_50;
    puVar7 = local_58;
    if (local_68 != 0) {
      FMemory::Free();
    }
    for (; (-1 < iVar9 && (iVar9 < iVar12)); iVar9 = iVar9 + 1) {
      puVar5 = (undefined8 *)FJsonValue::AsString(puVar7[(longlong)iVar9 * 2],local_38);
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar8 = 0;
      *puVar8 = *puVar5;
      *puVar5 = 0;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0xc);
      puVar5[1] = 0;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return;
}



// FUNCTION 1406d08c0 FUN_1406d08c0 body=600 status=ok
// SIG undefined FUN_1406d08c0(void)

void FUN_1406d08c0(longlong *param_1,short *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined2 local_res8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    uStack_80 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,param_2,(longlong)(int)uVar5 * 2);
  }
  FUN_1406d2da0(param_1[1],&local_88);
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_3[5];
  puStack_38 = (uint *)(param_3 + 2);
  local_88._0_4_ = 0;
  local_88._4_4_ = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar7 = puStack_38;
    }
    uVar5 = *puVar7;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar4 = (int)local_88 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88._0_4_ = iVar4;
      if (bVar2) goto LAB_1406d09fb;
      uVar5 = puVar7[lVar6 + 1];
    }
    local_88._4_4_ = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (local_88._4_4_ != 0) {
      for (; local_88._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_88._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1406d09fb:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = (int)local_88;
  uStack_3c = local_88._4_4_;
  local_50 = 0;
  local_20._0_4_ = SUB84(param_3,0);
  local_20._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_80._0_4_ = (int)local_88;
  uStack_80._4_4_ = local_88._4_4_;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar2 = local_78._4_4_ < (int)param_3[5];
  local_88 = param_3;
  local_58 = param_3;
  local_48 = param_3;
  local_20 = param_3;
  local_78 = puStack_38;
  if (bVar2) {
    do {
      lVar3 = (longlong)iStack_6c * 0x20;
      lVar6 = *local_88;
      if (*(int *)(lVar3 + 8 + lVar6) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar3 + lVar6);
      }
      (**(code **)(*param_1 + 0x80))(param_1,puVar8,lVar6 + 0x10 + lVar3);
      uStack_70 = uStack_70 & ~uStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  lVar6 = param_1[1];
  local_res8[0] = 0x7d;
  *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar6 + 8) + 0x50))(*(longlong **)(lVar6 + 8),local_res8,2);
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar6 + 0x10);
  *(undefined4 *)(lVar6 + 0x20) = 3;
  return;
}



// FUNCTION 1406d0b20 FUN_1406d0b20 body=598 status=ok
// SIG undefined FUN_1406d0b20(void)

void FUN_1406d0b20(longlong *param_1,short *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined2 local_res8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    uStack_80 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,param_2,(longlong)(int)uVar5 * 2);
  }
  FUN_1406d2da0(param_1[1],&local_88);
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_3[5];
  puStack_38 = (uint *)(param_3 + 2);
  local_88._0_4_ = 0;
  local_88._4_4_ = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar7 = puStack_38;
    }
    uVar5 = *puVar7;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar4 = (int)local_88 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88._0_4_ = iVar4;
      if (bVar2) goto LAB_1406d0c5b;
      uVar5 = puVar7[lVar6 + 1];
    }
    local_88._4_4_ = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (local_88._4_4_ != 0) {
      for (; local_88._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_88._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1406d0c5b:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = (int)local_88;
  uStack_3c = local_88._4_4_;
  local_50 = 0;
  local_20._0_4_ = SUB84(param_3,0);
  local_20._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_80._0_4_ = (int)local_88;
  uStack_80._4_4_ = local_88._4_4_;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar2 = local_78._4_4_ < (int)param_3[5];
  local_88 = param_3;
  local_58 = param_3;
  local_48 = param_3;
  local_20 = param_3;
  local_78 = puStack_38;
  if (bVar2) {
    do {
      lVar3 = (longlong)iStack_6c;
      lVar6 = *local_88;
      if (*(int *)(lVar6 + 8 + lVar3 * 0x28) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar6 + lVar3 * 0x28);
      }
      (**(code **)(*param_1 + 0x60))(param_1,puVar8,lVar6 + 0x10 + lVar3 * 0x28);
      uStack_70 = uStack_70 & ~uStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  lVar6 = param_1[1];
  local_res8[0] = 0x7d;
  *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar6 + 8) + 0x50))(*(longlong **)(lVar6 + 8),local_res8,2);
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar6 + 0x10);
  *(undefined4 *)(lVar6 + 0x20) = 3;
  return;
}



// FUNCTION 1406d0d80 SerializeMap body=566 status=ok
// SIG undefined SerializeMap(void)

void FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
               (longlong *param_1,short *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    uStack_80 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,param_2,(longlong)(int)uVar5 * 2);
  }
  FUN_1406d2e70(param_1[1],&local_88);
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_3[5];
  puStack_38 = (uint *)(param_3 + 2);
  local_88._0_4_ = 0;
  local_88._4_4_ = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar7 = puStack_38;
    }
    uVar5 = *puVar7;
    local_88._0_4_ = 0;
    uStack_70 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar4 = (int)local_88 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88._0_4_ = iVar4;
      if (bVar2) goto LAB_1406d0ebb;
      uVar5 = puVar7[lVar6 + 1];
    }
    local_88._4_4_ = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (local_88._4_4_ != 0) {
      for (; local_88._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_88._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1406d0ebb:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = (int)local_88;
  uStack_3c = local_88._4_4_;
  local_20._0_4_ = SUB84(param_3,0);
  local_20._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_50 = 0;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80._0_4_ = (int)local_88;
  uStack_80._4_4_ = local_88._4_4_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar2 = local_78._4_4_ < (int)param_3[5];
  local_88 = param_3;
  local_58 = param_3;
  local_48 = param_3;
  local_20 = param_3;
  local_78 = puStack_38;
  if (bVar2) {
    do {
      lVar3 = (longlong)iStack_6c * 0x20;
      lVar6 = *local_88;
      if (*(int *)(lVar3 + 8 + lVar6) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar3 + lVar6);
      }
      (**(code **)(*param_1 + 0x80))(param_1,puVar8,lVar6 + 0x10 + lVar3);
      uStack_70 = uStack_70 & ~uStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  FUN_1406d2cf0(param_1[1]);
  return;
}



// FUNCTION 1406d0fc0 SerializeMap body=564 status=ok
// SIG undefined SerializeMap(void)

void FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
               (longlong *param_1,short *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    uStack_80 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,param_2,(longlong)(int)uVar5 * 2);
  }
  FUN_1406d2e70(param_1[1],&local_88);
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_3[5];
  puStack_38 = (uint *)(param_3 + 2);
  local_88._0_4_ = 0;
  local_88._4_4_ = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar7 = puStack_38;
    }
    uVar5 = *puVar7;
    local_88._0_4_ = 0;
    uStack_70 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar4 = (int)local_88 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88._0_4_ = iVar4;
      if (bVar2) goto LAB_1406d10fb;
      uVar5 = puVar7[lVar6 + 1];
    }
    local_88._4_4_ = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (local_88._4_4_ != 0) {
      for (; local_88._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_88._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1406d10fb:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = (int)local_88;
  uStack_3c = local_88._4_4_;
  local_20._0_4_ = SUB84(param_3,0);
  local_20._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_50 = 0;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80._0_4_ = (int)local_88;
  uStack_80._4_4_ = local_88._4_4_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar2 = local_78._4_4_ < (int)param_3[5];
  local_88 = param_3;
  local_58 = param_3;
  local_48 = param_3;
  local_20 = param_3;
  local_78 = puStack_38;
  if (bVar2) {
    do {
      lVar3 = (longlong)iStack_6c;
      lVar6 = *local_88;
      if (*(int *)(lVar6 + 8 + lVar3 * 0x28) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar6 + lVar3 * 0x28);
      }
      (**(code **)(*param_1 + 0x60))(param_1,puVar8,lVar6 + 0x10 + lVar3 * 0x28);
      uStack_70 = uStack_70 & ~uStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  FUN_1406d2cf0(param_1[1]);
  return;
}



// FUNCTION 1406d1200 FUN_1406d1200 body=761 status=ok
// SIG undefined FUN_1406d1200(void)

void FUN_1406d1200(longlong param_1,short *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  uint local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  int iStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined1 local_80 [8];
  longlong local_78;
  int *local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  
  plVar8 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  lVar11 = -1;
  plVar13 = plVar8;
  if ((param_2 != (short *)0x0) && (lVar10 = lVar11, plVar13 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_d0 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    }
    plVar13 = local_d8;
    FGenericPlatformString::Memcpy(local_d8,param_2,(longlong)(int)uVar9 * 2);
  }
  plVar6 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar6,local_res8,&local_d8);
  plVar7 = plVar8;
  if (local_res8[0] != -1) {
    plVar7 = (longlong *)(*plVar6 + (longlong)local_res8[0] * 0x28);
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) || (*(int *)(*plVar6 + 8) != 6)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  if (bVar4) {
    local_e8 = 0;
    local_e0 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar11 = lVar11 + 1;
      } while (param_2[lVar11] != 0);
      uVar9 = (int)lVar11 + 1;
      local_e0 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      }
      FGenericPlatformString::Memcpy(local_e8,param_2,(longlong)(int)uVar9 * 2);
    }
    plVar6 = (longlong *)FUN_1416b2cb0(*(undefined8 *)(param_1 + 8),&local_e8);
    plVar13 = (longlong *)plVar6[1];
    plVar6 = (longlong *)*plVar6;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    iVar2 = (int)plVar6[5];
    puStack_c0 = (uint *)(plVar6 + 2);
    local_c8 = 0;
    uStack_c4 = 1;
    iStack_b4 = 0;
    uStack_b0 = 0;
    if (iVar2 != 0) {
      puVar12 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar12 = puStack_c0;
      }
      uVar9 = *puVar12;
      plVar7 = plVar8;
      while (uVar9 == 0) {
        iVar5 = (int)plVar7;
        uStack_b0 = (int)plVar8 + 0x20;
        plVar8 = (longlong *)(ulonglong)uStack_b0;
        local_c8 = iVar5 + 1;
        plVar7 = (longlong *)(ulonglong)local_c8;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1406d13fe;
        uVar9 = puVar12[(longlong)iVar5 + 1];
      }
      uStack_c4 = -uVar9 & uVar9;
      iVar5 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_b4 = (uStack_b0 - iVar5) + 0x1f;
      if (iVar2 < iStack_b4) {
LAB_1406d13fe:
        iStack_b4 = iVar2;
      }
    }
    local_b8 = 0xffffffff;
    uStack_a0 = local_c8;
    uStack_9c = uStack_c4;
    uStack_50 = 0xffffffff;
    iStack_4c = iStack_b4;
    uStack_48 = uStack_b0;
    uStack_44 = uStack_ac;
    uStack_90 = 0xffffffff;
    iStack_8c = iStack_b4;
    local_88 = uStack_b0;
    uStack_84 = uStack_ac;
    local_a8 = plVar6;
    local_98 = puStack_c0;
    local_68 = plVar6;
    puStack_58 = puStack_c0;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    if (iStack_b4 < iVar2) {
      local_70 = local_res10;
      do {
        plVar8 = local_a8;
        lVar11 = (longlong)iStack_8c;
        dVar3 = (double)FJsonObject::GetNumberField(plVar6,*local_a8 + lVar11 * 0x28);
        local_res10[0] = (int)dVar3;
        local_78 = *plVar8 + lVar11 * 0x28;
        FUN_1406c2bb0(param_3,local_80,&local_78,0);
        uStack_90 = uStack_90 & ~uStack_9c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar13 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1406d1500 FUN_1406d1500 body=778 status=ok
// SIG undefined FUN_1406d1500(void)

void FUN_1406d1500(longlong param_1,short *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  longlong *plVar12;
  int local_res8 [2];
  int local_res10;
  undefined1 local_res20 [8];
  longlong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  uint local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  uint uStack_90;
  int iStack_8c;
  uint local_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  plVar7 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  lVar10 = -1;
  plVar12 = plVar7;
  if ((param_2 != (short *)0x0) && (lVar9 = lVar10, plVar12 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_d0 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    }
    plVar12 = local_d8;
    FGenericPlatformString::Memcpy(local_d8,param_2,(longlong)(int)uVar8 * 2);
  }
  plVar5 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar5,local_res8,&local_d8);
  plVar6 = plVar7;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)(*plVar5 + (longlong)local_res8[0] * 0x28);
  }
  plVar5 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) || (*(int *)(*plVar5 + 8) != 6)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  if (bVar3) {
    local_e8 = 0;
    local_e0 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      uVar8 = (int)lVar10 + 1;
      local_e0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      }
      FGenericPlatformString::Memcpy(local_e8,param_2,(longlong)(int)uVar8 * 2);
    }
    plVar5 = (longlong *)FUN_1416b2cb0(*(undefined8 *)(param_1 + 8),&local_e8);
    plVar12 = (longlong *)plVar5[1];
    plVar5 = (longlong *)*plVar5;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    iVar2 = (int)plVar5[5];
    puStack_c0 = (uint *)(plVar5 + 2);
    local_c8 = 0;
    uStack_c4 = 1;
    iStack_b4 = 0;
    uStack_b0 = 0;
    if (iVar2 != 0) {
      puVar11 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar11 = puStack_c0;
      }
      uVar8 = *puVar11;
      plVar6 = plVar7;
      while (uVar8 == 0) {
        iVar4 = (int)plVar6;
        uStack_b0 = (int)plVar7 + 0x20;
        plVar7 = (longlong *)(ulonglong)uStack_b0;
        local_c8 = iVar4 + 1;
        plVar6 = (longlong *)(ulonglong)local_c8;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1406d16fe;
        uVar8 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_c4 = -uVar8 & uVar8;
      local_res10 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> local_res10 == 0; local_res10 = local_res10 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - local_res10;
      }
      iStack_b4 = (uStack_b0 - iVar4) + 0x1f;
      if (iVar2 < iStack_b4) {
LAB_1406d16fe:
        iStack_b4 = iVar2;
      }
    }
    local_b8 = 0xffffffff;
    uStack_a0 = CONCAT44(uStack_c4,local_c8);
    uStack_48 = 0xffffffff;
    iStack_44 = iStack_b4;
    uStack_40 = uStack_b0;
    uStack_3c = uStack_ac;
    uStack_90 = 0xffffffff;
    iStack_8c = iStack_b4;
    local_88 = uStack_b0;
    uStack_84 = uStack_ac;
    local_a8 = plVar5;
    local_98 = puStack_c0;
    local_60 = plVar5;
    uStack_58 = uStack_a0;
    puStack_50 = puStack_c0;
    if (iStack_b4 < iVar2) {
      local_78 = local_70;
      do {
        plVar7 = local_a8;
        lVar10 = (longlong)iStack_8c;
        FJsonObject::GetStringField(plVar5,local_70,*local_a8 + lVar10 * 0x28);
        local_80 = *plVar7 + lVar10 * 0x28;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  (param_3,local_res20,&local_80,0);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar12 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1406d1810 SerializeSimpleMap body=433 status=ok
// SIG undefined SerializeSimpleMap(void)

void FJsonSerializerReader::SerializeSimpleMap(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  uint *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  longlong local_78 [2];
  longlong *local_68;
  undefined8 uStack_60;
  uint *local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  longlong lStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  local_68 = *(longlong **)(param_1 + 8);
  iVar1 = (int)local_68[5];
  puStack_90 = (uint *)(local_68 + 2);
  local_98 = 0x100000000;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)local_68[4];
    if ((uint *)local_68[4] == (uint *)0x0) {
      puVar9 = puStack_90;
    }
    uVar6 = *puVar9;
    iStack_80 = 0;
    iVar7 = 0;
    while (uVar6 == 0) {
      iStack_80 = iStack_80 + 0x20;
      uVar3 = (ulonglong)local_98 >> 0x20;
      local_98 = CONCAT44((int)uVar3,iVar7 + 1);
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1406d18cf;
      uVar6 = puVar9[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_98 = CONCAT44(uVar6,(undefined4)local_98);
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_84 = (iStack_80 - iVar7) + 0x1f;
    if (iVar1 < iStack_84) {
LAB_1406d18cf:
      iStack_84 = iVar1;
    }
  }
  local_88 = 0xffffffff;
  uStack_28 = 0xffffffff;
  iStack_24 = iStack_84;
  iStack_20 = iStack_80;
  lStack_38 = local_98;
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_84;
  uStack_60 = local_98;
  local_48 = iStack_80;
  local_58 = puStack_90;
  local_40 = local_68;
  puStack_30 = puStack_90;
  if (iStack_84 < iVar1) {
    do {
      plVar4 = local_68;
      lVar8 = (longlong)iStack_4c;
      local_78[0] = 0;
      local_78[1] = 0;
      plVar2 = *(longlong **)(*local_68 + 0x10 + lVar8 * 0x28);
      cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,local_78);
      if (cVar5 != '\0') {
        puStack_90 = (uint *)local_78;
        local_98 = *plVar4 + lVar8 * 0x28;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  (param_2,local_res8,&local_98,0);
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      uStack_50 = uStack_50 & ~uStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 1406d1a10 FUN_1406d1a10 body=1181 status=ok
// SIG undefined FUN_1406d1a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1406d1a10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  void *local_120;
  int local_118;
  undefined4 local_114;
  longlong *local_110;
  longlong **local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  longlong local_a8 [4];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((int)param_3[1] == 0) {
    uVar2 = 0;
  }
  else {
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_78 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_158[0] = 0;
    local_68 = 0xffffffff;
    local_158[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"Authorization",0x1c);
    uVar2 = FString::FString(local_100,param_2);
    FStringFormatArg::FStringFormatArg(local_d8,uVar2);
    uVar2 = FString::FString(local_f0,param_2 + 0x10);
    FStringFormatArg::FStringFormatArg(local_b8,uVar2);
    lVar6 = 2;
    local_140 = 0;
    local_138 = CONCAT44(local_138._4_4_,2);
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_140,2,0);
    puVar3 = local_d8;
    iVar7 = 2;
    lVar5 = local_140;
    do {
      FStringFormatArg::FStringFormatArg(lVar5,puVar3);
      lVar5 = lVar5 + 0x20;
      puVar3 = puVar3 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FString::Format(&local_130,L"{0} {1}",&local_140);
    if ((int)local_138 != 0) {
      plVar4 = (longlong *)(local_140 + 0x10);
      iVar7 = (int)local_138;
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    puVar3 = local_88;
    do {
      plVar4 = (longlong *)(puVar3 + -0x20);
      puVar3 = puVar3 + -0x20;
      lVar6 = lVar6 + -1;
      if (*plVar4 != 0) {
        FMemory::Free();
      }
    } while (lVar6 != 0);
    local_110 = local_158;
    local_108 = &local_130;
    FUN_140497620(local_a8 + 2,local_148,&local_110,0);
    if (local_130 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    local_158[1] = 0x16;
    local_158[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"X-Interactive-Version",0x2c);
    local_130 = local_158;
    local_128 = (longlong *)(param_2 + 0x20);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(local_a8 + 2,local_148,&local_130,0);
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    local_140 = 0;
    local_138 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
    FGenericPlatformString::Memcpy(local_140,&DAT_14404ea10,8);
    local_158[0] = 0;
    local_158[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"X-Protocol-Version",0x26);
    local_130 = local_158;
    local_128 = &local_140;
    FUN_140497620(local_a8 + 2,local_148,&local_130,0);
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (1 < *(int *)(param_2 + 0x38)) {
      local_158[0] = 0;
      local_158[1] = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
      FGenericPlatformString::Memcpy(local_158[0],L"X-Interactive-Sharecode",0x30);
      local_130 = local_158;
      local_128 = (longlong *)(param_2 + 0x30);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(local_a8 + 2,local_148,&local_130,0);
      if (local_158[0] != 0) {
        FMemory::Free();
      }
    }
    plVar4 = (longlong *)*param_3;
    local_120 = (void *)0x0;
    local_118 = (int)plVar4[1];
    lVar5 = (longlong)local_118;
    _Src = (void *)*plVar4;
    if (local_118 == 0) {
      local_114 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_118,0);
      _guard_xfg_dispatch_icall_nop(local_120,_Src,lVar5 * 2);
      plVar4 = (longlong *)*param_3;
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    iVar7 = (int)param_3[1];
    iVar1 = iVar7 + -1;
    if (0 < iVar1) {
      iVar1 = 1;
    }
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*param_3,(void *)((longlong)(iVar7 - iVar1) * 0x10 + *param_3),
                 (longlong)iVar1 << 4);
      iVar7 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar7 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_3);
    FUN_1406c9e90(param_1,&local_120,local_a8 + 2);
    if (local_120 != (void *)0x0) {
      FMemory::Free();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_a8 + 2,0);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_a8[2] != 0) {
      FMemory::Free();
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1406d1eb0 FUN_1406d1eb0 body=594 status=ok
// SIG undefined FUN_1406d1eb0(void)

longlong * FUN_1406d1eb0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined2 local_res8 [4];
  longlong local_48 [4];
  
  FUN_1404ae740(param_2,param_4,0);
  FUN_14068b290(*param_2);
  local_48[3] = 5;
  local_48[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
  FGenericPlatformString::Memcpy(local_48[2],L"type",10);
  plVar1 = (longlong *)*param_2;
  local_48[0] = 0;
  local_48[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"method",0xe);
  if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,local_48 + 2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
  *(undefined4 *)(plVar1 + 4) = 7;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  local_48[2] = 0;
  local_48[3] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
  FGenericPlatformString::Memcpy(local_48[2],L"method",0xe);
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)FString::FString(local_48,param_3);
  if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,local_48 + 2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
  *(undefined4 *)(plVar1 + 4) = 7;
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  local_48[2] = 0;
  local_48[3] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
  FGenericPlatformString::Memcpy(local_48[2],&DAT_14404f058,6);
  FUN_1406c3d50(*param_2,local_48 + 2,*(undefined4 *)(param_1 + 0x110));
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1406d2150 FUN_1406d2150 body=639 status=ok
// SIG undefined FUN_1406d2150(void)

undefined8 * FUN_1406d2150(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  undefined **local_30;
  longlong *local_28;
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    FUN_1404ae740(&local_58,param_2,0);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_30 = &PTR_CanBeUsedOnAnyThread_144050f70;
    local_28 = local_58;
    local_20 = local_50;
    plVar6 = local_50;
    plVar7 = local_58;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        plVar6 = local_50;
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = local_58;
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          plVar7 = local_58;
        }
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_30,0);
    (**(code **)(*plVar7 + 8))(plVar7);
    plVar5 = local_20;
    local_30 = &PTR_CanBeUsedOnAnyThread_144050f70;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = local_50;
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar6 = local_50;
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          plVar6 = local_50;
        }
      }
    }
    plVar5 = local_50;
    if (plVar6 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar6 = plVar6 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return param_2;
    }
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    FUN_1404ae740(&local_68,param_2,0);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_48 = &PTR_CanBeUsedOnAnyThread_144050ea0;
    local_40 = local_68;
    local_38 = local_60;
    plVar6 = local_60;
    plVar7 = local_68;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        plVar6 = local_60;
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = local_68;
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
          plVar7 = local_68;
        }
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_48,0);
    (**(code **)(*plVar7 + 8))(plVar7);
    plVar5 = local_38;
    local_48 = &PTR_CanBeUsedOnAnyThread_144050ea0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = local_60;
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar6 = local_60;
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          plVar6 = local_60;
        }
      }
    }
    plVar5 = local_60;
    if (plVar6 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar6 = plVar6 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return param_2;
    }
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    local_50 = local_60;
  }
  if (iVar3 == 1) {
    (**(code **)(*local_50 + 8))(local_50,1);
  }
  return param_2;
}



// FUNCTION 1406d23d0 ToJson body=230 status=ok
// SIG undefined ToJson(void)

void FJsonSerializable::ToJson(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **local_28;
  undefined8 local_20;
  longlong *local_18;
  
  plVar4 = (longlong *)param_2[1];
  local_20 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_28 = &PTR_CanBeUsedOnAnyThread_144050f70;
  local_18 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  (**(code **)(*param_1 + 0x38))(param_1,&local_28,param_3);
  plVar4 = local_18;
  local_28 = &PTR_CanBeUsedOnAnyThread_144050f70;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
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



// FUNCTION 1406d24c0 ToJson body=230 status=ok
// SIG undefined ToJson(void)

void FJsonSerializable::ToJson(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **local_28;
  undefined8 local_20;
  longlong *local_18;
  
  plVar4 = (longlong *)param_2[1];
  local_20 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_28 = &PTR_CanBeUsedOnAnyThread_144050ea0;
  local_18 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  (**(code **)(*param_1 + 0x38))(param_1,&local_28,param_3);
  plVar4 = local_18;
  local_28 = &PTR_CanBeUsedOnAnyThread_144050ea0;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
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



// FUNCTION 1406d25b0 FUN_1406d25b0 body=68 status=ok
// SIG undefined FUN_1406d25b0(void)

void FUN_1406d25b0(longlong param_1)

{
  undefined2 local_res8 [16];
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  local_res8[0] = 0x5d;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 5;
  return;
}



// FUNCTION 1406d2600 FUN_1406d2600 body=220 status=ok
// SIG undefined FUN_1406d2600(void)

void FUN_1406d2600(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  iVar1 = *(int *)(param_1 + 0x20);
  if (((iVar1 - 3U & 0xfffffff9) == 0) && (iVar1 != 9)) {
    FUN_1404b7a80(*(undefined8 *)(param_1 + 8));
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar1 != 4) {
    local_res8[0] = 0x20;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  }
  local_res8[0] = 0x5d;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 5;
  return;
}



// FUNCTION 1406d26e0 FUN_1406d26e0 body=207 status=ok
// SIG undefined FUN_1406d26e0(void)

void FUN_1406d26e0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x5b;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}



// FUNCTION 1406d27b0 FUN_1406d27b0 body=161 status=ok
// SIG undefined FUN_1406d27b0(void)

void FUN_1406d27b0(longlong param_1)

{
  int iVar1;
  undefined2 local_res8 [4];
  
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1015U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  }
  local_res8[0] = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  return;
}



// FUNCTION 1406d2860 FUN_1406d2860 body=314 status=ok
// SIG undefined FUN_1406d2860(void)

void FUN_1406d2860(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar2 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x5b;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}



// FUNCTION 1406d29a0 FUN_1406d29a0 body=242 status=ok
// SIG undefined FUN_1406d29a0(void)

void FUN_1406d29a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((((iVar2 != 0) && (iVar2 != 2)) && (iVar2 != 4)) && (iVar2 != 0xc)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    FUN_1404b7a80(*(undefined8 *)(param_1 + 8));
    plVar1 = *(longlong **)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  local_res8[0] = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  return;
}



// FUNCTION 1406d2aa0 FUN_1406d2aa0 body=236 status=ok
// SIG undefined FUN_1406d2aa0(void)

void FUN_1406d2aa0(longlong param_1,short *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 local_res8 [4];
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_10 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar2 * 2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  *(undefined4 *)(plVar1 + 4) = 0xc;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406d2b90 FUN_1406d2b90 body=346 status=ok
// SIG undefined FUN_1406d2b90(void)

void FUN_1406d2b90(longlong param_1,short *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 local_res8 [4];
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar3 * 2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if ((((int)plVar1[4] - 2U & 0xfffffff5) != 0) || ((int)plVar1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  }
  FUN_1404b7a80(plVar1[1]);
  plVar2 = (longlong *)plVar1[1];
  if (0 < (int)*(uint *)((longlong)plVar1 + 0x24)) {
    uVar5 = (ulonglong)*(uint *)((longlong)plVar1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)plVar1[1] + 0x50))((longlong *)plVar1[1],local_res8,2);
  *(undefined4 *)(plVar1 + 4) = 0xc;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406d2cf0 FUN_1406d2cf0 body=169 status=ok
// SIG undefined FUN_1406d2cf0(void)

void FUN_1406d2cf0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined2 local_res8 [4];
  
  FUN_1404b7a80(*(undefined8 *)(param_1 + 8));
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  plVar1 = *(longlong **)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 8);
  }
  local_res8[0] = 0x7d;
  (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 3;
  return;
}



// FUNCTION 1406d2da0 FUN_1406d2da0 body=207 status=ok
// SIG undefined FUN_1406d2da0(void)

void FUN_1406d2da0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x7b;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  return;
}



// FUNCTION 1406d2e70 FUN_1406d2e70 body=341 status=ok
// SIG undefined FUN_1406d2e70(void)

void FUN_1406d2e70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar3 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  FUN_1404b7a80(param_1[1]);
  plVar3 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    plVar3 = (longlong *)param_1[1];
  }
  local_res8[0] = 0x7b;
  (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  return;
}



// FUNCTION 1406d2fd0 FUN_1406d2fd0 body=242 status=ok
// SIG undefined FUN_1406d2fd0(void)

void FUN_1406d2fd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((((iVar2 != 0) && (iVar2 != 2)) && (iVar2 != 4)) && (iVar2 != 0xc)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    FUN_1404b7a80(*(undefined8 *)(param_1 + 8));
    plVar1 = *(longlong **)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  local_res8[0] = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  return;
}



// FUNCTION 1406d30d0 FUN_1406d30d0 body=259 status=ok
// SIG undefined FUN_1406d30d0(void)

void FUN_1406d30d0(longlong param_1,short *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 local_res8 [4];
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_28 = (undefined2 *)0x0;
  iVar6 = 0;
  local_1c = 0;
  puVar5 = (undefined2 *)0x0;
  iVar4 = iVar6;
  if ((param_2 != (short *)0x0) && (puVar5 = (undefined2 *)0x0, iVar4 = 0, *param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    local_20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_20;
    puVar5 = local_28;
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)iVar2 * 2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (((*(int *)(lVar3 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(lVar3 + 0x20) == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))(*(longlong **)(lVar3 + 8),local_res8,2);
  }
  if (iVar4 == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    iVar6 = iVar4 + -1;
    puVar1 = puVar5;
  }
  (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))
            (*(longlong **)(lVar3 + 8),puVar1,(longlong)iVar6 * 2);
  *(undefined4 *)(lVar3 + 0x20) = 7;
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 1406d31e0 FUN_1406d31e0 body=331 status=ok
// SIG undefined FUN_1406d31e0(void)

void FUN_1406d31e0(longlong param_1,short *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 local_res8 [4];
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_28 = (undefined2 *)0x0;
  iVar6 = 0;
  local_1c = 0;
  puVar5 = (undefined2 *)0x0;
  iVar4 = iVar6;
  if ((param_2 != (short *)0x0) && (puVar5 = (undefined2 *)0x0, iVar4 = 0, *param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    local_20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_20;
    puVar5 = local_28;
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)iVar2 * 2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 0x20);
  if (((iVar2 != 2) && (iVar2 != 4)) && (iVar2 != 0xc)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))(*(longlong **)(lVar3 + 8),local_res8,2);
    iVar2 = *(int *)(lVar3 + 0x20);
  }
  if ((iVar2 - 9U < 2) || (iVar2 == 4)) {
    local_res8[0] = 0x20;
    (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))(*(longlong **)(lVar3 + 8),local_res8,2);
  }
  else {
    FUN_1404b7a80(*(undefined8 *)(lVar3 + 8));
    FUN_1404b7fc0(*(undefined8 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x24));
  }
  if (iVar4 == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    iVar6 = iVar4 + -1;
    puVar1 = puVar5;
  }
  (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))
            (*(longlong **)(lVar3 + 8),puVar1,(longlong)iVar6 * 2);
  *(undefined4 *)(lVar3 + 0x20) = 7;
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 1406d3330 FUN_1406d3330 body=129 status=ok
// SIG undefined FUN_1406d3330(void)

void FUN_1406d3330(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 local_res8 [4];
  
  if (((*(int *)(param_1 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(param_1 + 0x20) == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  }
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
            (*(longlong **)(param_1 + 8),puVar2,(longlong)iVar1 * 2);
  *(undefined4 *)(param_1 + 0x20) = 7;
  return;
}



// FUNCTION 1406d33c0 FUN_1406d33c0 body=95 status=ok
// SIG undefined FUN_1406d33c0(void)

void FUN_1406d33c0(longlong *param_1,undefined8 param_2)

{
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  *(undefined4 *)(param_1 + 4) = 7;
  return;
}



// FUNCTION 1406d3420 FUN_1406d3420 body=47 status=ok
// SIG undefined FUN_1406d3420(void)

longlong FUN_1406d3420(void)

{
  if (DAT_146858318 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146858318,&PTR_s__Script_GbxMixer_144051710);
  }
  return DAT_146858318;
}



// FUNCTION 1406d3450 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UWorldComposition::StaticClass(void)

{
  if (DAT_146858328 == 0) {
    FUN_14171ccd0(L"/Script/GbxMixer",L"GbxMixerSettings",&DAT_146858328,FUN_140447710,0x68,
                  0x10000004,0,L"Engine",InternalConstructor<UPersistentUserData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146858328;
}



// FUNCTION 1406d3510 InternalConstructor<UPersistentUserData> body=72 status=ok
// SIG undefined InternalConstructor<UPersistentUserData>(void)

void InternalConstructor<UPersistentUserData>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144051738;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  return;
}



// FUNCTION 1406d3560 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPlayFabAuthenticationContext::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1406d35d0 FUN_1406d35d0 body=47 status=ok
// SIG undefined FUN_1406d35d0(void)

longlong FUN_1406d35d0(void)

{
  if (DAT_146858320 == 0) {
    FUN_141786440(&DAT_146858320,&PTR_StaticClass_1440515c0);
  }
  return DAT_146858320;
}



// FUNCTION 1406d3600 TArray<wchar_t,FDefaultAllocator><wchar_t> body=67 status=ok
// SIG undefined TArray<wchar_t,FDefaultAllocator><wchar_t>(void)

undefined8 *
TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
          (undefined8 *param_1,undefined8 *param_2,int param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_1 + 1) + param_3) {
    ResizeTo(param_1);
  }
  return param_1;
}



// FUNCTION 1406d3650 FUN_1406d3650 body=877 status=ok
// SIG undefined FUN_1406d3650(void)

int * FUN_1406d3650(longlong *param_1,int *param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong *_Src;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  bool local_res8;
  
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  lVar9 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar10 + lVar9);
  *puVar17 = *puVar17 | 1 << ((byte)iVar12 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  lVar1 = (longlong)iVar12 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)((longlong)_Src + 4) = uVar4;
  *(undefined4 *)(_Src + 1) = uVar5;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != 1) {
    iVar8 = iVar18;
    if (iVar16 != 0) {
      iVar14 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar11 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar11 ^ uVar11 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 0x10;
      uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar11 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 10;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar10 +
                       (((longlong)(int)((uVar11 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar8 = iVar14;
          if (*(ulonglong *)(*param_1 + (longlong)iVar14 * 0x18) == *_Src) break;
          iVar14 = *(int *)(*param_1 + 0x10 + (longlong)iVar14 * 0x18);
          iVar8 = iVar18;
        } while (iVar14 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar10 + lVar9);
      *puVar17 = *puVar17 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1406d398e;
    }
  }
  cVar7 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar16,0);
  if (cVar7 == '\0') {
    iVar18 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar15 = -(uVar13 + iVar18) ^ uVar13 >> 0xd;
    uVar11 = (iVar18 - uVar13) - uVar15 ^ uVar15 >> 0xc;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar13 >> 5;
    uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar15 >> 3;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar13) - uVar11 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1406d398e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1406d39c0 FUN_1406d39c0 body=853 status=ok
// SIG undefined FUN_1406d39c0(void)

uint * FUN_1406d39c0(longlong param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  longlong lVar13;
  undefined8 *_Src;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_res8 [2];
  uint local_res10;
  
  uVar15 = 0xffffffff;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    uVar14 = *(uint *)(param_1 + 0x188);
    *(uint *)(param_1 + 0x188) = uVar14 + 1;
    if (*(int *)(param_1 + 0x18c) < (int)(uVar14 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
      ::ResizeGrow(param_1,uVar14);
    }
    FUN_1406dc2a0(param_1 + 400,0,1);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x1a8);
    lVar9 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar9 = param_1;
    }
    iVar3 = *(int *)(param_1 + 0x1ac) + -1;
    iVar7 = *(int *)(lVar9 + 4 + (longlong)(int)uVar14 * 0x18);
    *(int *)(param_1 + 0x1a8) = iVar7;
    *(int *)(param_1 + 0x1ac) = iVar3;
    if (iVar3 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar9 = param_1;
      }
      *(undefined4 *)(lVar9 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  *param_2 = uVar14;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  lVar9 = *(longlong *)(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar9 = param_1 + 400;
  }
  puVar11 = (uint *)(lVar9 + lVar6);
  *puVar11 = *puVar11 | 1 << ((byte)uVar14 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  lVar9 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar9 = param_1;
  }
  _Src = (undefined8 *)(lVar9 + (longlong)(int)uVar14 * 0x18);
  uVar2 = *(undefined8 *)*param_3;
  *_Src = uVar2;
  _Src[1] = *puVar1;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac);
  if (local_res10 != 1) {
    FUN_1406e9740(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      lVar13 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar13 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar13 + lVar9 * 0x18),_Src,0x10);
      bVar4 = (byte)uVar14 & 0x1f;
      if (*(int *)(param_1 + 0x1ac) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar9 = param_1;
        }
        *(uint *)(lVar9 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = uVar14;
      }
      lVar9 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar9 = param_1;
      }
      puVar8 = (undefined4 *)(lVar9 + (longlong)(int)uVar14 * 0x18);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x1ac)) {
        uVar15 = *(undefined4 *)(param_1 + 0x1a8);
      }
      puVar8[1] = uVar15;
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      *(uint *)(param_1 + 0x1a8) = uVar14;
      lVar9 = *(longlong *)(param_1 + 0x198);
      *param_2 = uVar5;
      if (lVar9 == 0) {
        lVar9 = param_1 + 400;
      }
      puVar11 = (uint *)(lVar9 + lVar6);
      *puVar11 = *puVar11 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1406d3ce6;
    }
  }
  uVar5 = local_res10 >> 1;
  iVar3 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar7 = 0x20;
  if (uVar5 != 0) {
    iVar7 = 0x1f - iVar3;
  }
  uVar5 = uVar5 - 1;
  iVar3 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (uVar5 == 0) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x1f' - (char)iVar3;
  }
  uVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  uVar5 = 8;
  if ((7 < uVar10) && (uVar5 = uVar10, local_res10 < 4)) {
    uVar5 = 8;
  }
  if (((int)local_res10 < 1) ||
     ((*(int *)(param_1 + 0x1d8) != 0 && ((int)uVar5 <= *(int *)(param_1 + 0x1d8))))) {
    uVar5 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & *(int *)(param_1 + 0x1d8) - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar5;
    lVar9 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar9 = param_1 + 0x1b0;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          (lVar9 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)uVar5) * 4);
    lVar9 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar9 = param_1 + 0x1b0;
    }
    *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)uVar5) * 4) =
         uVar14;
  }
  else {
    *(uint *)(param_1 + 0x1d8) = uVar5;
    FUN_1406f40c0(param_1);
  }
LAB_1406d3ce6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1406d3d20 FUN_1406d3d20 body=902 status=ok
// SIG undefined FUN_1406d3d20(void)

uint * FUN_1406d3d20(longlong param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *_Src;
  uint uVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *_Dst;
  bool bVar14;
  uint local_res8 [2];
  
  uVar12 = 0xffffffff;
  if (*(int *)(param_1 + 0x22c) == 0) {
    uVar6 = *(uint *)(param_1 + 0x208);
    *(uint *)(param_1 + 0x208) = uVar6 + 1;
    if (*(int *)(param_1 + 0x20c) < (int)(uVar6 + 1)) {
      TArray<FReplayViewer,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1,uVar6);
    }
    FUN_1406dc2a0(param_1 + 0x210,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x228);
    lVar8 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar8 = param_1;
    }
    iVar2 = *(int *)(lVar8 + 4 + (longlong)(int)uVar6 * 0x20);
    iVar5 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x228) = iVar2;
    *(int *)(param_1 + 0x22c) = iVar5;
    if (iVar5 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar8 = param_1;
      }
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x20) = 0xffffffff;
    }
  }
  *param_2 = uVar6;
  lVar8 = *(longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    lVar8 = param_1 + 0x210;
  }
  puVar1 = (uint *)(lVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  lVar8 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = param_1;
  }
  puVar3 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)(lVar8 + (longlong)(int)uVar6 * 0x20);
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar3;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c) != 1) {
    FUN_1406e97f0(param_1,local_res8,_Src);
    uVar6 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      lVar13 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar13 = param_1;
      }
      _Dst = (longlong *)(lVar13 + lVar8 * 0x20);
      if (*_Dst != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      uVar11 = *param_2;
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)(param_1 + 0x22c) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar8 = param_1;
        }
        *(uint *)(lVar8 + (longlong)*(int *)(param_1 + 0x228) * 0x20) = uVar11;
      }
      lVar8 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar8 = param_1;
      }
      *(undefined4 *)(lVar8 + (longlong)(int)uVar11 * 0x20) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x22c)) {
        uVar12 = *(undefined4 *)(param_1 + 0x228);
      }
      *(undefined4 *)(lVar8 + 4 + (longlong)(int)uVar11 * 0x20) = uVar12;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      *(uint *)(param_1 + 0x228) = uVar11;
      lVar8 = *(longlong *)(param_1 + 0x218);
      *param_2 = uVar6;
      if (lVar8 == 0) {
        lVar8 = param_1 + 0x210;
      }
      puVar1 = (uint *)(lVar8 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1406d4081;
    }
  }
  uVar11 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c);
  uVar6 = uVar11 >> 1;
  iVar2 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar5 = 0x20;
  if (uVar6 != 0) {
    iVar5 = 0x1f - iVar2;
  }
  uVar6 = uVar6 - 1;
  iVar2 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar6 == 0) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x1f' - (char)iVar2;
  }
  uVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  uVar6 = 8;
  if ((7 < uVar9) && (uVar6 = uVar9, uVar11 < 4)) {
    uVar6 = 8;
  }
  if (((int)uVar11 < 1) ||
     ((*(int *)(param_1 + 600) != 0 && ((int)uVar6 <= *(int *)(param_1 + 600))))) {
    uVar6 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar11 = FUN_140438070(puVar7);
    uVar11 = *(int *)(param_1 + 600) - 1U & uVar11;
    *(uint *)((longlong)_Src + 0x1c) = uVar11;
    lVar8 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar8 = param_1 + 0x230;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)(int)uVar11) * 4);
    lVar8 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar8 = param_1 + 0x230;
    }
    *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)(int)uVar11) * 4) = uVar6;
  }
  else {
    *(uint *)(param_1 + 600) = uVar6;
    FUN_1406f4300(param_1);
  }
LAB_1406d4081:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1406d40b0 FUN_1406d40b0 body=638 status=ok
// SIG undefined FUN_1406d40b0(void)

void FUN_1406d40b0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_d8;
  undefined8 local_d0;
  undefined **local_c8 [5];
  byte local_9f;
  byte local_9e;
  longlong *local_30;
  undefined1 local_28;
  
  FUN_1406dac90(param_2,param_1);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_141755650(param_1,&local_d8);
  plVar1 = local_d8 + (int)local_d0;
  plVar10 = local_d8;
  if (local_d8 != plVar1) {
    do {
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        lVar7 = USoundBase::GetPrivateStaticClass();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) break;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  plVar2 = local_d8 + (int)local_d0;
joined_r0x0001406d416a:
  do {
    if (plVar10 == plVar2) {
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plVar4 = (longlong *)*plVar10;
    if ((*(uint *)(plVar4 + 1) >> 6 & 1) == 0) {
      iVar3 = *(int *)((longlong)plVar4 + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar9 = iVar3 >> 0x1f & 0xffff;
        uVar6 = iVar3 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
        FArchive::FArchive(local_c8);
        local_9e = local_9e | 8;
        local_c8[0] = &PTR_FUN_144060730;
        local_28 = 1;
        local_30 = plVar4;
        FArchive::SetIsPersistent(local_c8,0);
        local_9f = local_9f & 0xdf;
        (**(code **)(*plVar4 + 0xa8))(plVar4,local_c8);
        FArchive::~FArchive(local_c8);
        FUN_1406f3e40(plVar4);
        do {
          plVar11 = plVar4;
          plVar4 = (longlong *)plVar11[4];
          if (plVar4 == (longlong *)0x0) break;
          lVar8 = USoundBase::GetPrivateStaticClass();
          if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        } while (bVar5);
        (**(code **)(*plVar11 + 0x308))(plVar11);
      }
    }
    do {
      do {
        plVar10 = plVar10 + 1;
        if (plVar10 == plVar1) goto joined_r0x0001406d416a;
        lVar8 = *plVar10;
      } while (lVar8 == 0);
      lVar7 = USoundBase::GetPrivateStaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    } while (!bVar5);
  } while( true );
}



// FUNCTION 1406d4330 FUN_1406d4330 body=219 status=ok
// SIG undefined FUN_1406d4330(void)

longlong * FUN_1406d4330(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  uint uStackX_c;
  
  plVar4 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar6 = *(longlong **)(param_1 + 0x40);
      if (plVar6 == (longlong *)0x0) {
LAB_1406d4399:
        plVar5 = (longlong *)0x1;
        plVar7 = plVar4;
      }
      else {
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(plVar6 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar3 == (int)plVar6[1];
          if (bVar8) {
            *(int *)(plVar6 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (plVar6 != (longlong *)0x0) {
              plVar4 = *(longlong **)(param_1 + 0x38);
            }
            goto LAB_1406d4399;
          }
          LOCK();
          iVar3 = (int)plVar6[1];
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(plVar6 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        plVar5 = (longlong *)0x1;
        plVar6 = plVar4;
        plVar7 = plVar4;
      }
      goto LAB_1406d43ab;
    }
  }
  plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar4;
LAB_1406d43ab:
  if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
    return plVar7;
  }
  return plVar7;
}



// FUNCTION 1406d4410 FUN_1406d4410 body=1020 status=ok
// SIG undefined FUN_1406d4410(void)

void FUN_1406d4410(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1406d450d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_1406d450d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1406d45e5;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_1406d45e5:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = AGVersusPlayerState::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1406d4410(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 1406d4810 IsA<UMapProperty> body=69 status=ok
// SIG undefined IsA<UMapProperty>(void)

ulonglong UObjectBaseUtility::IsA<UMapProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UMapProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1406d4860 IsA<USetProperty> body=69 status=ok
// SIG undefined IsA<USetProperty>(void)

ulonglong UObjectBaseUtility::IsA<USetProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = USetProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1406d48b0 FUN_1406d48b0 body=86 status=ok
// SIG undefined FUN_1406d48b0(void)

undefined8 *
FUN_1406d48b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x8c8);
    uVar2 = *(undefined4 *)(lVar1 + 0x7b0);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1406d4910 FUN_1406d4910 body=114 status=ok
// SIG undefined FUN_1406d4910(void)

undefined8 * FUN_1406d4910(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_2);
  *param_1 = plVar1;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar2 + 0x8c8);
    uVar3 = *(undefined4 *)(lVar2 + 0x7b0);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined2 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1406d4990 FUN_1406d4990 body=11 status=ok
// SIG undefined FUN_1406d4990(void)

undefined8 * FUN_1406d4990(undefined8 *param_1)

{
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1406d49a0 FUN_1406d49a0 body=11 status=ok
// SIG undefined FUN_1406d49a0(void)

longlong FUN_1406d49a0(longlong param_1)

{
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  return param_1;
}



// FUNCTION 1406d49b0 FUN_1406d49b0 body=57 status=ok
// SIG undefined FUN_1406d49b0(void)

undefined8 * FUN_1406d49b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Target",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 1406d49f0 FUN_1406d49f0 body=25 status=ok
// SIG undefined FUN_1406d49f0(void)

undefined8 * FUN_1406d49f0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x50000;
  return param_1;
}



// FUNCTION 1406d4a10 FUN_1406d4a10 body=60 status=ok
// SIG undefined FUN_1406d4a10(void)

longlong FUN_1406d4a10(longlong param_1)

{
  undefined8 local_res8 [4];
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xff00;
  FName::FName(local_res8,L"TargetActorInfo",1);
  *(undefined8 *)(param_1 + 8) = local_res8[0];
  return param_1;
}



// FUNCTION 1406d4a50 FUN_1406d4a50 body=211 status=ok
// SIG undefined FUN_1406d4a50(void)

longlong FUN_1406d4a50(longlong param_1)

{
  FUN_142de2f30(param_1,1);
  *(undefined1 *)(param_1 + 3) = 6;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x87;
  FUN_142de2f30(param_1 + 0x90,0,1);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x93) = 6;
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | 0x87;
  FUN_142de2f30(param_1 + 0x120,0,1);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x123) = 6;
  *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) | 0x87;
  FUN_142de2f30(param_1 + 0x1b0,1);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x1b3) = 6;
  *(byte *)(param_1 + 0x1b1) = *(byte *)(param_1 + 0x1b1) | 0x87;
  *(undefined4 *)(param_1 + 0x240) = 1;
  return param_1;
}



// FUNCTION 1406d4b30 FUN_1406d4b30 body=52 status=ok
// SIG undefined FUN_1406d4b30(void)

longlong FUN_1406d4b30(longlong param_1,undefined8 param_2)

{
  FUN_142de2f30(param_1,param_2,1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 3) = 6;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x87;
  return param_1;
}



// FUNCTION 1406d4b70 FUN_1406d4b70 body=129 status=ok
// SIG undefined FUN_1406d4b70(void)

longlong FUN_1406d4b70(longlong param_1)

{
  FUN_142de2d20(param_1,0x40000000,0);
  FUN_142de2d20(param_1 + 0x88,0x40000000,0);
  FUN_142de2d20(param_1 + 0x110,0x40000000,0);
  FUN_142de2d20(param_1 + 0x198,0x40000000,0);
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  return param_1;
}



// FUNCTION 1406d4c00 FUN_1406d4c00 body=56 status=ok
// SIG undefined FUN_1406d4c00(void)

longlong FUN_1406d4c00(longlong param_1)

{
  FUN_142de2f30(param_1,1);
  *(undefined1 *)(param_1 + 0x80) = 1;
  FUN_142de2f30(param_1 + 0x88,1);
  return param_1;
}



// FUNCTION 1406d4c40 FUN_1406d4c40 body=145 status=ok
// SIG undefined FUN_1406d4c40(void)

longlong FUN_1406d4c40(longlong param_1)

{
  FUN_142d2e580();
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0xff00;
  *(undefined2 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0xca) = 0;
  FUN_142d2e660(param_1 + 0xd0);
  FUN_142de2d20(param_1 + 0x310,0x3f800000,0);
  *(undefined2 *)(param_1 + 0x390) = 0x101;
  *(undefined1 *)(param_1 + 0x392) = 1;
  *(undefined4 *)(param_1 + 0x394) = 0x43800000;
  *(undefined1 *)(param_1 + 0x398) = 0;
  *(undefined2 *)(param_1 + 0x308) = 0x101;
  FUN_1406fbb20(param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 1406d4ce0 FUN_1406d4ce0 body=105 status=ok
// SIG undefined FUN_1406d4ce0(void)

undefined8 * FUN_1406d4ce0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  FUN_142d2e580(param_1 + 3);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  FUN_1406d4c40(param_1 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1b1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1be) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x59) = 0;
  return param_1;
}



// FUNCTION 1406d4d50 FUN_1406d4d50 body=278 status=ok
// SIG undefined FUN_1406d4d50(void)

undefined1 * FUN_1406d4d50(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  FUN_142de2b80(param_1 + 0x18,param_2 + 0x18);
  param_1[0x98] = param_2[0x98];
  FUN_142de2b80(param_1 + 0xa0,param_2 + 0xa0);
  param_1[0x120] = param_2[0x120];
  FUN_142de2b80(param_1 + 0x128,param_2 + 0x128);
  FUN_142de2b80(param_1 + 0x1a8,param_2 + 0x1a8);
  param_1[0x228] = param_2[0x228];
  param_1[0x230] = param_2[0x230];
  param_1[0x231] = param_2[0x231];
  param_1[0x232] = param_2[0x232];
  param_1[0x233] = param_2[0x233];
  return param_1;
}



// FUNCTION 1406d4e70 FUN_1406d4e70 body=129 status=ok
// SIG undefined FUN_1406d4e70(void)

undefined4 * FUN_1406d4e70(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  param_1[0xd] = 0xff7fffff;
  FUN_14247fd00(param_1 + 0x12);
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  FUN_142d2e660(param_1 + 0x18);
  FUN_142193af0(param_1 + 0x12);
  param_1[0x15] = 0;
  param_1[0x14] = 0xffffffff;
  return param_1;
}



// FUNCTION 1406d4f00 FUN_1406d4f00 body=326 status=ok
// SIG undefined FUN_1406d4f00(void)

undefined4 * FUN_1406d4f00(undefined4 *param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  
  plVar7 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 0x12);
  param_1[1] = 0;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  param_1[0xd] = 0xff7fffff;
  *pplVar1 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0xffffffff;
  lVar4 = operator_new(200);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_142f89330(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_144060c70;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_28 = plVar5;
  local_20 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_28,plVar5,plVar5);
  if (pplVar1 != &local_28) {
    *pplVar1 = plVar5;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,&local_20);
    plVar7 = local_20;
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
  return param_1;
}



// FUNCTION 1406d5050 FUN_1406d5050 body=114 status=ok
// SIG undefined FUN_1406d5050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406d5050(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = DAT_14622e6d0;
  *(undefined4 *)(param_1 + 2) = DAT_14622e6d8;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14622e6d0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_14622e6d8;
  param_1[4] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 5) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f666666;
  *(undefined4 *)(param_1 + 6) = 2;
  FUN_1424b51e0((longlong)param_1 + 0x34);
  return param_1;
}



// FUNCTION 1406d50d0 FUN_1406d50d0 body=332 status=ok
// SIG undefined FUN_1406d50d0(void)

undefined8 * FUN_1406d50d0(undefined8 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  
  FUN_1417818c0();
  *param_1 = &PTR_FUN_144056048;
  param_1[5] = &PTR_LAB_1440563c0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 2;
  param_1[0x1a] = 1;
  uVar2 = *(uint *)(param_1 + 1);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(uint *)(param_1 + 1) = uVar2 | 0x20000008;
  if ((uVar2 & 0x40) == 0) {
    *(uint *)(param_1 + 1) = uVar2 | 0x20000009;
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar5 = USoundBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar1 = *(undefined1 *)(lVar3 + 0xf1);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x40020;
      *(undefined1 *)((longlong)param_1 + 0xf1) = uVar1;
    }
  }
  return param_1;
}



// FUNCTION 1406d5220 FUN_1406d5220 body=218 status=ok
// SIG undefined FUN_1406d5220(void)

undefined8 * FUN_1406d5220(undefined8 *param_1)

{
  FUN_1406d54c0();
  *param_1 = &PTR__scalar_deleting_destructor__144057bd8;
  param_1[5] = &PTR_LAB_144057fe0;
  FUN_1406fe690(param_1 + 500);
  FUN_1406ff280(param_1 + 0x23c);
  *(undefined1 *)((longlong)param_1 + 0x1731) = 2;
  *(undefined1 *)(param_1 + 0x143) = 1;
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  AK::MemoryMgr::StartProfileThreadUsage((long)(param_1 + 0x143));
  *(undefined2 *)((longlong)param_1 + 0x11d9) = 0x101;
  *(undefined1 *)(param_1 + 0x23c) = 1;
  *(undefined1 *)(param_1 + 0x275) = 0;
  *(undefined1 *)(param_1 + 0x2ad) = 0;
  *(undefined1 *)(param_1 + 0x2e5) = 1;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x11e0);
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  param_1[0x23e] = param_1[0x145];
  param_1[0x23f] = param_1[0x146];
  *(undefined1 *)((longlong)param_1 + 0x4dd) = 1;
  param_1[0x276] = param_1[0x17d];
  param_1[0x277] = param_1[0x17e];
  param_1[0x2ae] = param_1[0x1b5];
  param_1[0x2af] = param_1[0x1b6];
  return param_1;
}



// FUNCTION 1406d5300 FUN_1406d5300 body=109 status=ok
// SIG undefined FUN_1406d5300(void)

undefined8 * FUN_1406d5300(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_1406d54c0();
  *param_1 = &PTR_FUN_144057ff8;
  param_1[5] = &PTR_LAB_144058400;
  param_1[0x1f5] = 0;
  *(undefined2 *)(param_1 + 0x1f6) = 0xff00;
  FName::FName(local_res8,L"TargetActorInfo",1);
  param_1[0x1f5] = local_res8[0];
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4dd) = 1;
  return param_1;
}



// FUNCTION 1406d5370 FUN_1406d5370 body=159 status=ok
// SIG undefined FUN_1406d5370(void)

undefined8 * FUN_1406d5370(undefined8 *param_1)

{
  FUN_1407003e0();
  *param_1 = &PTR_FUN_144058418;
  param_1[5] = &PTR_LAB_144058820;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0xff00;
  FUN_1406fedb0(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_142f97b10((longlong)param_1 + 0x28c);
  param_1[0x2c] = 0;
  *param_1 = &PTR_FUN_144058838;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[5] = &PTR_LAB_144058820;
  FUN_142f97b10((longlong)param_1 + 0x28c);
  return param_1;
}



// FUNCTION 1406d5410 FUN_1406d5410 body=165 status=ok
// SIG undefined FUN_1406d5410(void)

undefined8 * FUN_1406d5410(undefined8 *param_1)

{
  FUN_1407003e0();
  *param_1 = &PTR_FUN_144059010;
  param_1[5] = &PTR_LAB_144059418;
  FUN_1406fe610(param_1 + 0x2e);
  FUN_1406fedb0(param_1 + 0x35);
  FUN_1406fe5a0(param_1 + 0x5d);
  *(undefined1 *)(param_1 + 0x61) = 1;
  param_1[0x62] = 0;
  *(undefined2 *)(param_1 + 99) = 0xff00;
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x65) = 0xff00;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 0xff00;
  param_1[0x68] = 0;
  *(undefined2 *)(param_1 + 0x69) = 0xff00;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 1406d54c0 FUN_1406d54c0 body=448 status=ok
// SIG undefined FUN_1406d54c0(void)

undefined8 * FUN_1406d54c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined6 uStack_e;
  
  FUN_1407004b0();
  *param_1 = &PTR_FUN_1440577b8;
  param_1[5] = &PTR_LAB_144057bc0;
  FUN_1406fea60(param_1 + 0x3d);
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0xff00;
  FUN_1406fedb0(param_1 + 0x7b);
  *(undefined1 *)(param_1 + 0xa3) = 1;
  FUN_142de2eb0(param_1 + 0xa5);
  FUN_142de2d20(param_1 + 0xb5,0x41200000,0);
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0;
  *(undefined2 *)(param_1 + 199) = 0xff00;
  FUN_1406d4c40(param_1 + 200);
  *(undefined4 *)((longlong)param_1 + 0x9ec) = 0;
  param_1[0x140] = 0;
  *(undefined2 *)(param_1 + 0x141) = 0xff00;
  FUN_1406ff280(param_1 + 0x143);
  pvVar3 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  *(undefined2 *)((longlong)param_1 + 0xf69) = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 2;
  *(undefined1 *)(param_1 + 499) = 7;
  if (*(int *)(lVar1 + 0x38) < DAT_146858678) {
    _Init_thread_header(&DAT_146858678);
    if (DAT_146858678 == -1) {
      FName::FName(&DAT_146858670,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858678);
    }
  }
  uVar2 = DAT_146858670;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x143) = 1;
  param_1[0x79] = uVar2;
  param_1[0x7a] = CONCAT62(uStack_e,0xff00);
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  param_1[0x140] = uVar2;
  param_1[0x141] = CONCAT62(uStack_e,0xff00);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0xa18);
  *(undefined1 *)((longlong)param_1 + 0x3c4) = 1;
  return param_1;
}



// FUNCTION 1406d5680 FUN_1406d5680 body=94 status=ok
// SIG undefined FUN_1406d5680(void)

undefined8 * FUN_1406d5680(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_144059430;
  param_1[5] = &PTR_LAB_144059830;
  FUN_1406fe5f0(param_1 + 0x3d);
  FUN_1406fe690(param_1 + 0x3f);
  FUN_1406fedb0(param_1 + 0x86);
  *(undefined1 *)((longlong)param_1 + 0x535) = 1;
  *(undefined1 *)((longlong)param_1 + 0x533) = 2;
  return param_1;
}



// FUNCTION 1406d56e0 FUN_1406d56e0 body=164 status=ok
// SIG undefined FUN_1406d56e0(void)

undefined8 * FUN_1406d56e0(undefined8 *param_1)

{
  FUN_1407003e0();
  *param_1 = &PTR_FUN_144059848;
  param_1[5] = &PTR_LAB_144059c50;
  FUN_1406fe970(param_1 + 0x2e);
  FUN_1406fedb0(param_1 + 0x38);
  FUN_1406fe5a0(param_1 + 0x60);
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x65) = 0xff00;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 0xff00;
  param_1[0x68] = 0;
  *(undefined2 *)(param_1 + 0x69) = 0xff00;
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0xff00;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  return param_1;
}



// FUNCTION 1406d5790 FUN_1406d5790 body=77 status=ok
// SIG undefined FUN_1406d5790(void)

undefined8 * FUN_1406d5790(undefined8 *param_1)

{
  FUN_1406d54c0();
  *param_1 = &PTR_FUN_14405a020;
  param_1[5] = &PTR_LAB_14405a428;
  FUN_1406fea20(param_1 + 500);
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4dd) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return param_1;
}



// FUNCTION 1406d57e0 FUN_1406d57e0 body=119 status=ok
// SIG undefined FUN_1406d57e0(void)

undefined8 * FUN_1406d57e0(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405a440;
  param_1[5] = &PTR_LAB_14405a808;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  FUN_1406fea20(param_1 + 0x29);
  FUN_1406d4c40(param_1 + 0x34);
  return param_1;
}



// FUNCTION 1406d5860 FUN_1406d5860 body=141 status=ok
// SIG undefined FUN_1406d5860(void)

undefined8 * FUN_1406d5860(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405a820;
  param_1[5] = &PTR_LAB_14405abe8;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  *(undefined4 *)(param_1 + 0x29) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x43340000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f000000;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0xff00;
  return param_1;
}



// FUNCTION 1406d58f0 FUN_1406d58f0 body=116 status=ok
// SIG undefined FUN_1406d58f0(void)

undefined8 * FUN_1406d58f0(undefined8 *param_1)

{
  FUN_1407003e0();
  *param_1 = &PTR_FUN_144058418;
  param_1[5] = &PTR_LAB_144058820;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0xff00;
  FUN_1406fedb0(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_142f97b10((longlong)param_1 + 0x28c);
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return param_1;
}



// FUNCTION 1406d5970 FUN_1406d5970 body=333 status=ok
// SIG undefined FUN_1406d5970(void)

undefined8 * FUN_1406d5970(undefined8 *param_1)

{
  undefined6 uStack_e;
  
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405ac00;
  param_1[5] = &PTR_LAB_14405afc8;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xff00;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0xff00;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x40400000;
  *(undefined4 *)(param_1 + 0x30) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x31) = 0x43c80000;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 1;
  *(undefined4 *)(param_1 + 0x32) = 0x447a0000;
  FUN_1406fedb0(param_1 + 0x33);
  FUN_142f97b10((longlong)param_1 + 0x2a4);
  param_1[0x29] = DAT_146858500;
  param_1[0x2a] = CONCAT62(uStack_e,0xff00);
  param_1[0x2b] = DAT_146858508;
  param_1[0x2c] = CONCAT62(uStack_e,0xff00);
  param_1[0x2d] = DAT_146858510;
  param_1[0x2e] = CONCAT62(uStack_e,0xff00);
  return param_1;
}



// FUNCTION 1406d5ac0 FUN_1406d5ac0 body=75 status=ok
// SIG undefined FUN_1406d5ac0(void)

undefined8 * FUN_1406d5ac0(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_14405afe0;
  param_1[5] = &PTR_LAB_14405b3e0;
  FUN_1406fe690(param_1 + 0x3e);
  FUN_1406fe690(param_1 + 0x85);
  *(undefined1 *)(param_1 + 0x3d) = 1;
  return param_1;
}



// FUNCTION 1406d5b10 FUN_1406d5b10 body=154 status=ok
// SIG undefined FUN_1406d5b10(void)

undefined8 * FUN_1406d5b10(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405b3f8;
  param_1[5] = &PTR_LAB_14405b7c0;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  FUN_1406feee0(param_1 + 0x29);
  FUN_1406fedb0(param_1 + 0x6d);
  FUN_1406ff280(param_1 + 0x95);
  *(undefined1 *)((longlong)param_1 + 0x46d) = 1;
  *(undefined1 *)(param_1 + 0x95) = 1;
  return param_1;
}



// FUNCTION 1406d5bb0 FUN_1406d5bb0 body=74 status=ok
// SIG undefined FUN_1406d5bb0(void)

undefined8 * FUN_1406d5bb0(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_14405b7d8;
  param_1[5] = &PTR_LAB_14405bbd8;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return param_1;
}



// FUNCTION 1406d5c00 FUN_1406d5c00 body=189 status=ok
// SIG undefined FUN_1406d5c00(void)

undefined8 * FUN_1406d5c00(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_14405bbf0;
  param_1[5] = &PTR_LAB_14405bff0;
  FUN_1406ff370(param_1 + 0x3d);
  FUN_1406fedb0(param_1 + 0x42);
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0xff00;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0xff00;
  param_1[0x6e] = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0xff00;
  param_1[0x70] = 0;
  *(undefined2 *)(param_1 + 0x71) = 0xff00;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x73) = 0xff00;
  param_1[0x74] = 0;
  *(undefined2 *)(param_1 + 0x75) = 0xff00;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x77) = 0xff00;
  *(undefined1 *)(param_1 + 0x78) = 1;
  return param_1;
}



// FUNCTION 1406d5cc0 FUN_1406d5cc0 body=835 status=ok
// SIG undefined FUN_1406d5cc0(void)

undefined8 * FUN_1406d5cc0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_88 [128];
  
  FUN_1407003e0();
  *(undefined1 *)((longlong)param_1 + 0x171) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__14405c008;
  param_1[5] = &PTR_LAB_14405c410;
  FUN_1406ffd20(param_1 + 0x2f);
  FUN_142d2e580(param_1 + 0x56);
  FUN_142d2e660(param_1 + 0x6d);
  FUN_1406ffe70(param_1 + 0xb4);
  FUN_1406fedb0(param_1 + 0x12e);
  FUN_1406ff280(param_1 + 0x156);
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9a) = 0;
  *(undefined1 *)(param_1 + 0x153) = 0;
  *(undefined1 *)((longlong)param_1 + 0x371) = 0;
  *(undefined1 *)(param_1 + 0x156) = 1;
  *(undefined2 *)(param_1 + 0x14e) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x37d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *param_1 = &PTR_FUN_14405c428;
  param_1[5] = &PTR_LAB_14405c830;
  FUN_142de2eb0(param_1 + 0x202);
  FUN_142de2eb0(param_1 + 0x212);
  FUN_142de2eb0(param_1 + 0x222);
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  *(undefined1 *)(param_1 + 0x237) = 1;
  *(undefined1 *)(param_1 + 0x201) = 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x202) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1011) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1012) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1013) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1014) = *(undefined8 *)(puVar5 + 4);
  param_1[0x204] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x205] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x206] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x207] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x208] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x209] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x20a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x20b] = uVar4;
  param_1[0x20c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x20d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x106c) = uVar1;
  *(undefined4 *)(param_1 + 0x20e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1074) = uVar3;
  param_1[0x20f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1084) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x211) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x212) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1091) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1092) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1093) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1094) = *(undefined8 *)(puVar5 + 4);
  param_1[0x214] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x215] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x216] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x217] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x218] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x219] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x21a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x21b] = uVar4;
  param_1[0x21c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x21d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x10ec) = uVar1;
  *(undefined4 *)(param_1 + 0x21e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10f4) = uVar3;
  param_1[0x21f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1104) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x221) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x222) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1111) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1112) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1113) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1114) = *(undefined8 *)(puVar5 + 4);
  param_1[0x224] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x225] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x226] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x227] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x228] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x229] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x22a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x22b] = uVar4;
  param_1[0x22c] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x22d] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x22e] = uVar4;
  param_1[0x22f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1184) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x231) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1011) = *(byte *)((longlong)param_1 + 0x1011) | 6;
  *(byte *)((longlong)param_1 + 0x1091) = *(byte *)((longlong)param_1 + 0x1091) | 6;
  *(byte *)((longlong)param_1 + 0x1111) = *(byte *)((longlong)param_1 + 0x1111) | 6;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return param_1;
}



// FUNCTION 1406d6010 FUN_1406d6010 body=2424 status=ok
// SIG undefined FUN_1406d6010(void)

undefined8 * FUN_1406d6010(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_1406d80a0();
  *param_1 = &PTR_FUN_14405cc68;
  param_1[5] = &PTR_LAB_14405d070;
  FUN_142de2eb0(param_1 + 0x280);
  FUN_142de2eb0(param_1 + 0x290);
  FUN_142de2eb0(param_1 + 0x2a0);
  puVar1 = param_1 + 0x2b0;
  FUN_142de2eb0(puVar1);
  FUN_142de2eb0(param_1 + 0x2c0);
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  FUN_142de2eb0(param_1 + 0x2d2);
  puVar7 = param_1 + 0x2e2;
  FUN_142de2eb0(puVar7);
  FUN_1406fe690();
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x33c] = 0;
  *(undefined1 *)(param_1 + 0x33e) = 1;
  puVar6 = (undefined1 *)FUN_142de2d20(&local_a8,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x280) = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1401) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1402) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1403) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1404) = *(undefined8 *)(puVar6 + 4);
  param_1[0x282] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x283] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x284] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x285] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x286] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x287] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x288] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x289] = uVar5;
  param_1[0x28a] = *(undefined8 *)(puVar6 + 0x50);
  uVar2 = *(undefined4 *)(puVar6 + 0x5c);
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  uVar4 = *(undefined4 *)(puVar6 + 100);
  *(undefined4 *)(param_1 + 0x28b) = *(undefined4 *)(puVar6 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x145c) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1464) = uVar4;
  param_1[0x28d] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x28e) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1474) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x28f) = *(undefined4 *)(puVar6 + 0x78);
  puVar6 = (undefined1 *)FUN_142de2d20(&local_a8,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x290) = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1481) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1482) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1483) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1484) = *(undefined8 *)(puVar6 + 4);
  param_1[0x292] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x293] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x294] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x295] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x296] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x297] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x298] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x299] = uVar5;
  param_1[0x29a] = *(undefined8 *)(puVar6 + 0x50);
  uVar2 = *(undefined4 *)(puVar6 + 0x5c);
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  uVar4 = *(undefined4 *)(puVar6 + 100);
  *(undefined4 *)(param_1 + 0x29b) = *(undefined4 *)(puVar6 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x14dc) = uVar2;
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14e4) = uVar4;
  param_1[0x29d] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x29e) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x14f4) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x29f) = *(undefined4 *)(puVar6 + 0x78);
  puVar6 = (undefined1 *)FUN_142de2d20(&local_a8,0x453b8000,0);
  *(undefined1 *)(param_1 + 0x2a0) = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1501) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1502) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1503) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1504) = *(undefined8 *)(puVar6 + 4);
  param_1[0x2a2] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x2a3] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x2a4] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x2a5] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x2a6] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x2a7] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x2a8] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x2a9] = uVar5;
  param_1[0x2aa] = *(undefined8 *)(puVar6 + 0x50);
  uVar2 = *(undefined4 *)(puVar6 + 0x5c);
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  uVar4 = *(undefined4 *)(puVar6 + 100);
  *(undefined4 *)(param_1 + 0x2ab) = *(undefined4 *)(puVar6 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x155c) = uVar2;
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1564) = uVar4;
  param_1[0x2ad] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x2ae) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1574) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x2af) = *(undefined4 *)(puVar6 + 0x78);
  puVar6 = (undefined1 *)FUN_142de2f30(&local_a8,1);
  *(undefined1 *)(param_1 + 0x2c0) = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1601) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1602) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1603) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1604) = *(undefined8 *)(puVar6 + 4);
  param_1[0x2c2] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x2c3] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x2c4] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x2c5] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x2c6] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x2c7] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x2c8] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x2c9] = uVar5;
  param_1[0x2ca] = *(undefined8 *)(puVar6 + 0x50);
  uVar2 = *(undefined4 *)(puVar6 + 0x5c);
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  uVar4 = *(undefined4 *)(puVar6 + 100);
  *(undefined4 *)(param_1 + 0x2cb) = *(undefined4 *)(puVar6 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x165c) = uVar2;
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1664) = uVar4;
  param_1[0x2cd] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x2ce) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1674) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x2cf) = *(undefined4 *)(puVar6 + 0x78);
  puVar6 = (undefined1 *)FUN_142de2d20(&local_a8,0,0);
  *(undefined1 *)puVar7 = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1711) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1712) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1713) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1714) = *(undefined8 *)(puVar6 + 4);
  param_1[0x2e4] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x2e5] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x2e6] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x2e7] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x2e8] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x2e9] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x2ea] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x2eb] = uVar5;
  param_1[0x2ec] = *(undefined8 *)(puVar6 + 0x50);
  uVar5 = *(undefined8 *)(puVar6 + 0x60);
  param_1[0x2ed] = *(undefined8 *)(puVar6 + 0x58);
  param_1[0x2ee] = uVar5;
  param_1[0x2ef] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1784) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x2f1) = *(undefined4 *)(puVar6 + 0x78);
  *(byte *)((longlong)param_1 + 0x1712) = *(byte *)((longlong)param_1 + 0x1712) | 1;
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)puVar7;
  *(undefined1 *)((longlong)param_1 + 0x1379) = *(undefined1 *)((longlong)param_1 + 0x1711);
  *(undefined1 *)((longlong)param_1 + 0x137a) = *(undefined1 *)((longlong)param_1 + 0x1712);
  *(undefined1 *)((longlong)param_1 + 0x137b) = *(undefined1 *)((longlong)param_1 + 0x1713);
  *(undefined8 *)((longlong)param_1 + 0x137c) = *(undefined8 *)((longlong)param_1 + 0x1714);
  param_1[0x271] = param_1[0x2e4];
  param_1[0x272] = param_1[0x2e5];
  param_1[0x273] = param_1[0x2e6];
  param_1[0x274] = param_1[0x2e7];
  param_1[0x275] = param_1[0x2e8];
  param_1[0x276] = param_1[0x2e9];
  param_1[0x277] = param_1[0x2ea];
  param_1[0x278] = param_1[0x2eb];
  param_1[0x279] = param_1[0x2ec];
  *(undefined4 *)(param_1 + 0x27a) = *(undefined4 *)(param_1 + 0x2ed);
  *(undefined4 *)((longlong)param_1 + 0x13d4) = *(undefined4 *)((longlong)param_1 + 0x176c);
  *(undefined4 *)(param_1 + 0x27b) = *(undefined4 *)(param_1 + 0x2ee);
  *(undefined4 *)((longlong)param_1 + 0x13dc) = *(undefined4 *)((longlong)param_1 + 0x1774);
  param_1[0x27c] = param_1[0x2ef];
  *(undefined4 *)(param_1 + 0x27d) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)((longlong)param_1 + 0x13ec) = *(undefined4 *)((longlong)param_1 + 0x1784);
  *(undefined4 *)(param_1 + 0x27e) = *(undefined4 *)(param_1 + 0x2f1);
  *(undefined1 *)(param_1 + 0x27f) = 1;
  puVar6 = (undefined1 *)FUN_142de2f30(&local_a8,0,1);
  *(undefined1 *)puVar1 = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1581) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1582) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1583) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1584) = *(undefined8 *)(puVar6 + 4);
  param_1[0x2b2] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x2b3] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x2b4] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x2b5] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x2b6] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x2b7] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x2b8] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x2b9] = uVar5;
  param_1[0x2ba] = *(undefined8 *)(puVar6 + 0x50);
  uVar5 = *(undefined8 *)(puVar6 + 0x60);
  param_1[699] = *(undefined8 *)(puVar6 + 0x58);
  param_1[700] = uVar5;
  param_1[0x2bd] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x2be) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x15f4) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x2bf) = *(undefined4 *)(puVar6 + 0x78);
  *(byte *)((longlong)param_1 + 0x1581) = *(byte *)((longlong)param_1 + 0x1581) | 2;
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined1 *)(param_1 + 0x1eb) = 1;
  *(undefined1 *)(param_1 + 0x1b3) = 1;
  *(undefined1 *)(param_1 + 0x17b) = 1;
  *(undefined1 *)(param_1 + 0x16b) = *(undefined1 *)puVar1;
  *(undefined1 *)((longlong)param_1 + 0xb59) = *(undefined1 *)((longlong)param_1 + 0x1581);
  *(undefined1 *)((longlong)param_1 + 0xb5a) = *(undefined1 *)((longlong)param_1 + 0x1582);
  *(undefined1 *)((longlong)param_1 + 0xb5b) = *(undefined1 *)((longlong)param_1 + 0x1583);
  *(undefined8 *)((longlong)param_1 + 0xb5c) = *(undefined8 *)((longlong)param_1 + 0x1584);
  param_1[0x16d] = param_1[0x2b2];
  param_1[0x16e] = param_1[0x2b3];
  param_1[0x16f] = param_1[0x2b4];
  param_1[0x170] = param_1[0x2b5];
  param_1[0x171] = param_1[0x2b6];
  param_1[0x172] = param_1[0x2b7];
  param_1[0x173] = param_1[0x2b8];
  param_1[0x174] = param_1[0x2b9];
  param_1[0x175] = param_1[0x2ba];
  param_1[0x176] = param_1[699];
  param_1[0x177] = param_1[700];
  param_1[0x178] = param_1[0x2bd];
  *(undefined4 *)(param_1 + 0x179) = *(undefined4 *)(param_1 + 0x2be);
  *(undefined4 *)((longlong)param_1 + 0xbcc) = *(undefined4 *)((longlong)param_1 + 0x15f4);
  *(undefined4 *)(param_1 + 0x17a) = *(undefined4 *)(param_1 + 0x2bf);
  *(undefined1 *)(param_1 + 0x1a3) = *(undefined1 *)puVar1;
  *(undefined1 *)((longlong)param_1 + 0xd19) = *(undefined1 *)((longlong)param_1 + 0x1581);
  *(undefined1 *)((longlong)param_1 + 0xd1a) = *(undefined1 *)((longlong)param_1 + 0x1582);
  *(undefined1 *)((longlong)param_1 + 0xd1b) = *(undefined1 *)((longlong)param_1 + 0x1583);
  *(undefined8 *)((longlong)param_1 + 0xd1c) = *(undefined8 *)((longlong)param_1 + 0x1584);
  param_1[0x1a5] = param_1[0x2b2];
  param_1[0x1a6] = param_1[0x2b3];
  param_1[0x1a7] = param_1[0x2b4];
  param_1[0x1a8] = param_1[0x2b5];
  param_1[0x1a9] = param_1[0x2b6];
  param_1[0x1aa] = param_1[0x2b7];
  param_1[0x1ab] = param_1[0x2b8];
  param_1[0x1ac] = param_1[0x2b9];
  param_1[0x1ad] = param_1[0x2ba];
  param_1[0x1ae] = param_1[699];
  param_1[0x1af] = param_1[700];
  param_1[0x1b0] = param_1[0x2bd];
  *(undefined4 *)(param_1 + 0x1b1) = *(undefined4 *)(param_1 + 0x2be);
  *(undefined4 *)((longlong)param_1 + 0xd8c) = *(undefined4 *)((longlong)param_1 + 0x15f4);
  *(undefined4 *)(param_1 + 0x1b2) = *(undefined4 *)(param_1 + 0x2bf);
  *(undefined1 *)(param_1 + 0x1db) = *(undefined1 *)puVar1;
  *(undefined1 *)((longlong)param_1 + 0xed9) = *(undefined1 *)((longlong)param_1 + 0x1581);
  *(undefined1 *)((longlong)param_1 + 0xeda) = *(undefined1 *)((longlong)param_1 + 0x1582);
  *(undefined1 *)((longlong)param_1 + 0xedb) = *(undefined1 *)((longlong)param_1 + 0x1583);
  *(undefined8 *)((longlong)param_1 + 0xedc) = *(undefined8 *)((longlong)param_1 + 0x1584);
  param_1[0x1dd] = param_1[0x2b2];
  param_1[0x1de] = param_1[0x2b3];
  param_1[0x1df] = param_1[0x2b4];
  param_1[0x1e0] = param_1[0x2b5];
  param_1[0x1e1] = param_1[0x2b6];
  param_1[0x1e2] = param_1[0x2b7];
  param_1[0x1e3] = param_1[0x2b8];
  param_1[0x1e4] = param_1[0x2b9];
  param_1[0x1e5] = param_1[0x2ba];
  *(undefined4 *)(param_1 + 0x1e6) = *(undefined4 *)(param_1 + 699);
  *(undefined4 *)((longlong)param_1 + 0xf34) = *(undefined4 *)((longlong)param_1 + 0x15dc);
  *(undefined4 *)(param_1 + 0x1e7) = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)((longlong)param_1 + 0xf3c) = *(undefined4 *)((longlong)param_1 + 0x15e4);
  param_1[0x1e8] = param_1[0x2bd];
  *(undefined4 *)(param_1 + 0x1e9) = *(undefined4 *)(param_1 + 0x2be);
  *(undefined4 *)((longlong)param_1 + 0xf4c) = *(undefined4 *)((longlong)param_1 + 0x15f4);
  *(undefined4 *)(param_1 + 0x1ea) = *(undefined4 *)(param_1 + 0x2bf);
  puVar6 = (undefined1 *)FUN_142de2c00(&local_a8,0,2);
  *(undefined1 *)(param_1 + 0x2d2) = *puVar6;
  *(undefined1 *)((longlong)param_1 + 0x1691) = puVar6[1];
  *(undefined1 *)((longlong)param_1 + 0x1692) = puVar6[2];
  *(undefined1 *)((longlong)param_1 + 0x1693) = puVar6[3];
  *(undefined8 *)((longlong)param_1 + 0x1694) = *(undefined8 *)(puVar6 + 4);
  param_1[0x2d4] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x2d5] = *(undefined8 *)(puVar6 + 0x18);
  uVar5 = *(undefined8 *)(puVar6 + 0x28);
  param_1[0x2d6] = *(undefined8 *)(puVar6 + 0x20);
  param_1[0x2d7] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x38);
  param_1[0x2d8] = *(undefined8 *)(puVar6 + 0x30);
  param_1[0x2d9] = uVar5;
  uVar5 = *(undefined8 *)(puVar6 + 0x48);
  param_1[0x2da] = *(undefined8 *)(puVar6 + 0x40);
  param_1[0x2db] = uVar5;
  param_1[0x2dc] = *(undefined8 *)(puVar6 + 0x50);
  uVar2 = *(undefined4 *)(puVar6 + 0x5c);
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  uVar4 = *(undefined4 *)(puVar6 + 100);
  *(undefined4 *)(param_1 + 0x2dd) = *(undefined4 *)(puVar6 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x16ec) = uVar2;
  *(undefined4 *)(param_1 + 0x2de) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x16f4) = uVar4;
  param_1[0x2df] = *(undefined8 *)(puVar6 + 0x68);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(puVar6 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1704) = *(undefined4 *)(puVar6 + 0x74);
  *(undefined4 *)(param_1 + 0x2e1) = *(undefined4 *)(puVar6 + 0x78);
  *(byte *)((longlong)param_1 + 0x1691) = *(byte *)((longlong)param_1 + 0x1691) | 0xce;
  *(undefined1 *)((longlong)param_1 + 0x725) = 2;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x709) = 1;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)(param_1 + 0xde) = 2;
  FUN_142de2f30(&local_a8,1);
  *(undefined1 *)(param_1 + 0x319) = local_a8;
  *(undefined1 *)((longlong)param_1 + 0x18c9) = local_a7;
  *(undefined1 *)((longlong)param_1 + 0x18ca) = local_a6;
  *(undefined1 *)((longlong)param_1 + 0x18cb) = local_a5;
  param_1[0x31b] = local_98;
  *(undefined4 *)((longlong)param_1 + 0x18cc) = local_a4;
  param_1[0x31c] = local_90;
  param_1[0x31d] = local_88;
  param_1[0x31e] = uStack_80;
  param_1[0x326] = local_40;
  *(undefined4 *)(param_1 + 0x31a) = local_a0;
  param_1[799] = local_78;
  param_1[800] = uStack_70;
  param_1[0x321] = local_68;
  param_1[0x322] = uStack_60;
  param_1[0x323] = local_58;
  param_1[0x324] = local_50;
  param_1[0x325] = uStack_48;
  *(undefined4 *)(param_1 + 0x327) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x193c) = local_34;
  *(undefined4 *)(param_1 + 0x328) = local_30;
  return param_1;
}



// FUNCTION 1406d6990 FUN_1406d6990 body=1059 status=ok
// SIG undefined FUN_1406d6990(void)

undefined8 * FUN_1406d6990(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_98 [128];
  
  FUN_1406d5220();
  *param_1 = &PTR_FUN_14405d088;
  param_1[5] = &PTR_LAB_14405d490;
  param_1[0x2e7] = 0;
  FUN_1406fe690(param_1 + 0x2e8);
  FUN_142de2eb0(param_1 + 0x330);
  FUN_142de2eb0(param_1 + 0x340);
  FUN_142de2eb0(param_1 + 0x351);
  FUN_142de2eb0(param_1 + 0x362);
  FUN_142de2eb0(param_1 + 0x372);
  *(undefined1 *)((longlong)param_1 + 0x1c11) = 2;
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x42c80000,0);
  *(undefined1 *)(param_1 + 0x330) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1981) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1982) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1983) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1984) = *(undefined8 *)(puVar5 + 4);
  param_1[0x332] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x333] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x334] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x335] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x336] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x337] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x338] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x339] = uVar4;
  param_1[0x33a] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x33b) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x19dc) = uVar1;
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x19e4) = uVar3;
  param_1[0x33d] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x33e) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x19f4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x33f) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1981) = *(byte *)((longlong)param_1 + 0x1981) | 0x46;
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x42c80000,0);
  *(undefined1 *)(param_1 + 0x340) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1a01) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1a02) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1a03) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1a04) = *(undefined8 *)(puVar5 + 4);
  param_1[0x342] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x343] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x344] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x345] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x346] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x347] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x348] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x349] = uVar4;
  param_1[0x34a] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x34b) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1a5c) = uVar1;
  *(undefined4 *)(param_1 + 0x34c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1a64) = uVar3;
  param_1[0x34d] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x34e) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1a74) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x34f) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1a01) = *(byte *)((longlong)param_1 + 0x1a01) | 0x46;
  puVar5 = (undefined1 *)FUN_142de2c00(local_98,1,2);
  *(undefined1 *)(param_1 + 0x362) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1b11) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1b12) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1b13) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1b14) = *(undefined8 *)(puVar5 + 4);
  param_1[0x364] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x365] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x366] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x367] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x368] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x369] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x36a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x36b] = uVar4;
  param_1[0x36c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x36d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1b6c) = uVar1;
  *(undefined4 *)(param_1 + 0x36e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1b74) = uVar3;
  param_1[0x36f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1b84) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x371) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1b11) = *(byte *)((longlong)param_1 + 0x1b11) | 0x46;
  *(byte *)((longlong)param_1 + 0x1b12) = *(byte *)((longlong)param_1 + 0x1b12) | 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x372) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1b91) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1b92) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1b93) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1b94) = *(undefined8 *)(puVar5 + 4);
  param_1[0x374] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x375] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x376] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x377] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x378] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x379] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x37a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x37b] = uVar4;
  param_1[0x37c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x37d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1bec) = uVar1;
  *(undefined4 *)(param_1 + 0x37e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1bf4) = uVar3;
  param_1[0x37f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1c04) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x381) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1b91) = *(byte *)((longlong)param_1 + 0x1b91) | 0x46;
  *(byte *)((longlong)param_1 + 0x1b92) = *(byte *)((longlong)param_1 + 0x1b92) | 1;
  *(undefined1 *)(param_1 + 0x350) = 2;
  *(undefined1 *)(param_1 + 0x32f) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1b0b) = 0;
  *(undefined1 *)(param_1 + 0x361) = 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x41f00000,0);
  *(undefined1 *)(param_1 + 0x351) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1a89) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1a8a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1a8b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1a8c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x353] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x354] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x355] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x356] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x357] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x358] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x359] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x35a] = uVar4;
  param_1[0x35b] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x35c] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x35d] = uVar4;
  param_1[0x35e] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x35f) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1afc) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1a89) = *(byte *)((longlong)param_1 + 0x1a89) | 6;
  *(undefined2 *)((longlong)param_1 + 0x1b09) = 1;
  *(undefined1 *)(param_1 + 0x143) = 1;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  AK::MemoryMgr::StartProfileThreadUsage((long)(param_1 + 0x143));
  return param_1;
}



// FUNCTION 1406d6dc0 FUN_1406d6dc0 body=1507 status=ok
// SIG undefined FUN_1406d6dc0(void)

undefined8 * FUN_1406d6dc0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_a8 [128];
  
  FUN_1406d5220();
  *param_1 = &PTR_FUN_14405d848;
  param_1[5] = &PTR_LAB_14405dc50;
  FUN_142de2eb0(param_1 + 0x2e7);
  FUN_142de2eb0(param_1 + 0x2f7);
  FUN_142de2eb0(param_1 + 0x307);
  FUN_142de2eb0(param_1 + 0x317);
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  FUN_142de2eb0(param_1 + 0x32a);
  FUN_142de2eb0(param_1 + 0x33a);
  FUN_142de2eb0(param_1 + 0x34a);
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  *(undefined1 *)(param_1 + 0x364) = 6;
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x2e7) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1739) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x173a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x173b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x173c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2e9] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2ea] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2eb] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2ec] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2ed] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2ee] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2ef] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2f0] = uVar4;
  param_1[0x2f1] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2f2) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1794) = uVar1;
  *(undefined4 *)(param_1 + 0x2f3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x179c) = uVar3;
  param_1[0x2f4] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x2f5) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x17ac) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2f6) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x2f7) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x17b9) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x17ba) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x17bb) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x17bc) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2f9] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2fa] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2fb] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2fc] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2fd] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2fe] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2ff] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x300] = uVar4;
  param_1[0x301] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x302) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1814) = uVar1;
  *(undefined4 *)(param_1 + 0x303) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x181c) = uVar3;
  param_1[0x304] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x305) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x182c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x306) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x307) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1839) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x183a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x183b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x183c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x309] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x30a] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x30b] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x30c] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x30d] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x30e] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x30f] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x310] = uVar4;
  param_1[0x311] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x312) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1894) = uVar1;
  *(undefined4 *)(param_1 + 0x313) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x189c) = uVar3;
  param_1[0x314] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x315) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x18ac) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x316) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0,0);
  *(undefined1 *)(param_1 + 0x317) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x18b9) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x18ba) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x18bb) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x18bc) = *(undefined8 *)(puVar5 + 4);
  param_1[0x319] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x31a] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x31b] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x31c] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x31d] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x31e] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[799] = *(undefined8 *)(puVar5 + 0x40);
  param_1[800] = uVar4;
  param_1[0x321] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x322] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x323] = uVar4;
  param_1[0x324] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x325) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x192c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x326) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1739) = *(byte *)((longlong)param_1 + 0x1739) | 6;
  *(byte *)((longlong)param_1 + 0x17b9) = *(byte *)((longlong)param_1 + 0x17b9) | 6;
  *(byte *)((longlong)param_1 + 0x1839) = *(byte *)((longlong)param_1 + 0x1839) | 6;
  *(undefined2 *)((longlong)param_1 + 0x1ad2) = 1;
  *(undefined1 *)(param_1 + 0x143) = 1;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  AK::MemoryMgr::StartProfileThreadUsage((long)(param_1 + 0x143));
  *(undefined1 *)((longlong)param_1 + 0x709) = 1;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x942) = 1;
  *(undefined1 *)(param_1 + 0xde) = 2;
  *(undefined1 *)((longlong)param_1 + 0x725) = 2;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x194c) = 0;
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x32a) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1951) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1952) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1953) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1954) = *(undefined8 *)(puVar5 + 4);
  param_1[0x32c] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x32d] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x32e] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x32f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x330] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x331] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x332] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x333] = uVar4;
  param_1[0x334] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x335) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x19ac) = uVar1;
  *(undefined4 *)(param_1 + 0x336) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x19b4) = uVar3;
  param_1[0x337] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x19c4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x339) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1951) = *(byte *)((longlong)param_1 + 0x1951) | 0x6e;
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0,0);
  *(undefined1 *)(param_1 + 0x33a) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x19d1) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x19d2) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x19d3) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x19d4) = *(undefined8 *)(puVar5 + 4);
  param_1[0x33c] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x33d] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x33e] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x33f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x340] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x341] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x342] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x343] = uVar4;
  param_1[0x344] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x345) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1a2c) = uVar1;
  *(undefined4 *)(param_1 + 0x346) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1a34) = uVar3;
  param_1[0x347] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1a44) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x349) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x19d1) = *(byte *)((longlong)param_1 + 0x19d1) | 0x6e;
  *(undefined4 *)(param_1 + 0x329) = 0x41200000;
  *(undefined1 *)(param_1 + 0x35a) = 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_a8,0x41f00000,0);
  *(undefined1 *)(param_1 + 0x34a) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1a51) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1a52) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1a53) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1a54) = *(undefined8 *)(puVar5 + 4);
  param_1[0x34c] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x34d] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x34e] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x34f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x350] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x351] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x352] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x353] = uVar4;
  param_1[0x354] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x355] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x356] = uVar4;
  param_1[0x357] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1ac4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x359) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1a51) = *(byte *)((longlong)param_1 + 0x1a51) | 6;
  *(undefined1 *)((longlong)param_1 + 0x1ad1) = 2;
  return param_1;
}



// FUNCTION 1406d73b0 FUN_1406d73b0 body=2207 status=ok
// SIG undefined FUN_1406d73b0(void)

undefined8 * FUN_1406d73b0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_b8 [144];
  
  FUN_1406d80a0();
  *param_1 = &PTR_FUN_14405dc68;
  param_1[5] = &PTR_LAB_14405e070;
  FUN_142de2eb0(param_1 + 0x280);
  FUN_142de2eb0(param_1 + 0x291);
  FUN_142de2eb0(param_1 + 0x2a1);
  FUN_142de2eb0(param_1 + 0x2b1);
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c4] = 0;
  FUN_142de2eb0(param_1 + 0x2c5);
  FUN_142de2eb0(param_1 + 0x2d5);
  FUN_142de2eb0(param_1 + 0x2e6);
  FUN_142de2eb0(param_1 + 0x2f7);
  FUN_142de2eb0(param_1 + 0x308);
  FUN_142de2eb0(param_1 + 0x319);
  FUN_142de2eb0();
  param_1[0x33b] = 0;
  param_1[0x33c] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  param_1[0x340] = 0;
  *(undefined1 *)(param_1 + 0x343) = 4;
  puVar5 = (undefined1 *)FUN_142de2f30(local_b8,1);
  *(undefined1 *)(param_1 + 0x280) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1401) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1402) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1403) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1404) = *(undefined8 *)(puVar5 + 4);
  param_1[0x282] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x283] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x284] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x285] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x286] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x287] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x288] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x289] = uVar4;
  param_1[0x28a] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x28b) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x145c) = uVar1;
  *(undefined4 *)(param_1 + 0x28c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1464) = uVar3;
  param_1[0x28d] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x28e) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1474) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x28f) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined1 *)(param_1 + 0x290) = 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x291) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1489) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x148a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x148b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x148c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x293] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x294] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x295] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x296] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x297] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x298] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x299] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x29a] = uVar4;
  param_1[0x29b] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x14e4) = uVar1;
  *(undefined4 *)(param_1 + 0x29d) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14ec) = uVar3;
  param_1[0x29e] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x29f) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x14fc) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x2a1) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1509) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x150a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x150b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x150c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2a3] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2a4] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2a5] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2a6] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2a7] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2a8] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2a9] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2aa] = uVar4;
  param_1[0x2ab] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1564) = uVar1;
  *(undefined4 *)(param_1 + 0x2ad) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x156c) = uVar3;
  param_1[0x2ae] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x2af) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x157c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x2b1) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1589) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x158a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x158b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x158c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2b3] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2b4] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2b5] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2b6] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2b7] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2b8] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2b9] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2ba] = uVar4;
  param_1[699] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x15e4) = uVar1;
  *(undefined4 *)(param_1 + 0x2bd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x15ec) = uVar3;
  param_1[0x2be] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x2bf) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x15fc) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x18c1) = 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x43960000,0);
  *(undefined1 *)(param_1 + 0x319) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x18c9) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x18ca) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x18cb) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x18cc) = *(undefined8 *)(puVar5 + 4);
  param_1[0x31b] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x31c] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x31d] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x31e] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[799] = *(undefined8 *)(puVar5 + 0x30);
  param_1[800] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x321] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x322] = uVar4;
  param_1[0x323] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1924) = uVar1;
  *(undefined4 *)(param_1 + 0x325) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x192c) = uVar3;
  param_1[0x326] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x327) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x193c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x40a00000,0);
  *(undefined1 *)(param_1 + 0x32a) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1951) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1952) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1953) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1954) = *(undefined8 *)(puVar5 + 4);
  param_1[0x32c] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x32d] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x32e] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x32f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x330] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x331] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x332] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x333] = uVar4;
  param_1[0x334] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x335) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x19ac) = uVar1;
  *(undefined4 *)(param_1 + 0x336) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x19b4) = uVar3;
  param_1[0x337] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x19c4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x339) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1489) = *(byte *)((longlong)param_1 + 0x1489) | 6;
  *(byte *)((longlong)param_1 + 0x1509) = *(byte *)((longlong)param_1 + 0x1509) | 6;
  *(byte *)((longlong)param_1 + 0x1589) = *(byte *)((longlong)param_1 + 0x1589) | 6;
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x2d5) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x16a9) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x16aa) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x16ab) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x16ac) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2d7] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2d8] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2d9] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2da] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2db] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2dc] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2dd] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2de] = uVar4;
  param_1[0x2df] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1704) = uVar1;
  *(undefined4 *)(param_1 + 0x2e1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x170c) = uVar3;
  param_1[0x2e2] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x2e3) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x171c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x2e6) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1731) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1732) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1733) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1734) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2e8] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2e9] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2ea] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2eb] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2ec] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2ed] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2ee] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2ef] = uVar4;
  param_1[0x2f0] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2f1) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x178c) = uVar1;
  *(undefined4 *)(param_1 + 0x2f2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1794) = uVar3;
  param_1[0x2f3] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x17a4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2f5) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x2f7) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x17b9) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x17ba) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x17bb) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x17bc) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2f9] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2fa] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2fb] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2fc] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2fd] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2fe] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2ff] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x300] = uVar4;
  param_1[0x301] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x302) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1814) = uVar1;
  *(undefined4 *)(param_1 + 0x303) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x181c) = uVar3;
  param_1[0x304] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x305) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x182c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x306) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_b8,0x41700000,0);
  *(undefined1 *)(param_1 + 0x308) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1841) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1842) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1843) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1844) = *(undefined8 *)(puVar5 + 4);
  param_1[0x30a] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x30b] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x30c] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x30d] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x30e] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x30f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x310] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x311] = uVar4;
  param_1[0x312] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x313] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x314] = uVar4;
  param_1[0x315] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x316) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x18b4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x317) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined4 *)(param_1 + 0x309) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x1843) = 2;
  *(byte *)((longlong)param_1 + 0x1842) = *(byte *)((longlong)param_1 + 0x1842) | 1;
  *(undefined1 *)(param_1 + 0x143) = 1;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  AK::MemoryMgr::StartProfileThreadUsage((long)(param_1 + 0x143));
  puVar5 = (undefined1 *)FUN_142de2c00(local_b8,0,2);
  *(undefined1 *)(param_1 + 0x2c5) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1629) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x162a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x162b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x162c) = *(undefined8 *)(puVar5 + 4);
  param_1[0x2c7] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x2c8] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x2c9] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x2ca] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x2cb] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x2cc] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2cd] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2ce] = uVar4;
  param_1[0x2cf] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x2d0] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x2d1] = uVar4;
  param_1[0x2d2] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x2d3) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x169c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x1629) = *(byte *)((longlong)param_1 + 0x1629) | 0xce;
  *(undefined1 *)((longlong)param_1 + 0x725) = 2;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x709) = 1;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x942) = 1;
  *(undefined1 *)(param_1 + 0xde) = 2;
  return param_1;
}



// FUNCTION 1406d7c50 FUN_1406d7c50 body=187 status=ok
// SIG undefined FUN_1406d7c50(void)

undefined8 * FUN_1406d7c50(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405b3f8;
  param_1[5] = &PTR_LAB_14405b7c0;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  FUN_1406feee0(param_1 + 0x29);
  FUN_1406fedb0(param_1 + 0x6d);
  FUN_1406ff280(param_1 + 0x95);
  *(undefined1 *)((longlong)param_1 + 0x46d) = 1;
  *param_1 = &PTR_FUN_14405e088;
  *(undefined1 *)(param_1 + 0x95) = 1;
  param_1[5] = &PTR_LAB_14405e450;
  FUN_1406ff3c0(param_1 + 0x13f);
  return param_1;
}



// FUNCTION 1406d7d10 FUN_1406d7d10 body=118 status=ok
// SIG undefined FUN_1406d7d10(void)

undefined8 * FUN_1406d7d10(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_14405e468;
  param_1[5] = &PTR_LAB_14405e868;
  FUN_1406ff550(param_1 + 0x3d);
  FUN_1406fedb0(param_1 + 0xa1);
  FUN_1406ff280(param_1 + 0xc9);
  FUN_1406ff280(param_1 + 0x174);
  FUN_1406ff280(param_1 + 0x21f);
  *(undefined1 *)((longlong)param_1 + 0x60d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x60b) = 2;
  return param_1;
}



// FUNCTION 1406d7d90 FUN_1406d7d90 body=261 status=ok
// SIG undefined FUN_1406d7d90(void)

undefined8 * FUN_1406d7d90(undefined8 *param_1)

{
  undefined6 uStack_e;
  
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405e880;
  param_1[5] = &PTR_LAB_14405ec48;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xff00;
  FUN_1406ffa60(param_1 + 0x2b);
  FUN_1406d4c40(param_1 + 0x52);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858778) {
    _Init_thread_header(&DAT_146858778);
    if (DAT_146858778 == -1) {
      FName::FName(&DAT_146858770,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858778);
    }
  }
  param_1[0x29] = DAT_146858770;
  param_1[0x2a] = CONCAT62(uStack_e,0xff00);
  return param_1;
}



// FUNCTION 1406d7ea0 FUN_1406d7ea0 body=210 status=ok
// SIG undefined FUN_1406d7ea0(void)

undefined8 * FUN_1406d7ea0(undefined8 *param_1)

{
  FUN_1407003e0();
  *(undefined1 *)((longlong)param_1 + 0x171) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__14405c008;
  param_1[5] = &PTR_LAB_14405c410;
  FUN_1406ffd20(param_1 + 0x2f);
  FUN_142d2e580(param_1 + 0x56);
  FUN_142d2e660(param_1 + 0x6d);
  FUN_1406ffe70(param_1 + 0xb4);
  FUN_1406fedb0(param_1 + 0x12e);
  FUN_1406ff280(param_1 + 0x156);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)(param_1 + 0x156) = 1;
  *(undefined2 *)(param_1 + 0x14e) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xa9a) = 0;
  *(undefined1 *)(param_1 + 0x153) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x371) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return param_1;
}



// FUNCTION 1406d7f80 FUN_1406d7f80 body=279 status=ok
// SIG undefined FUN_1406d7f80(void)

undefined8 * FUN_1406d7f80(undefined8 *param_1)

{
  FUN_1407004b0();
  *param_1 = &PTR_FUN_14405ec60;
  param_1[5] = &PTR_LAB_14405f060;
  FUN_1406d4ce0(param_1 + 0x3d);
  FUN_1406fedb0(param_1 + 0xcc);
  FUN_1406ff280(param_1 + 0xf4);
  FUN_1406d4c40(param_1 + 0x19e);
  param_1[0x213] = 0;
  *(undefined2 *)(param_1 + 0x214) = 0xff00;
  param_1[0x215] = 0;
  *(undefined2 *)(param_1 + 0x216) = 0xff00;
  param_1[0x217] = 0;
  *(undefined2 *)(param_1 + 0x218) = 0xff00;
  param_1[0x219] = 0;
  *(undefined2 *)(param_1 + 0x21a) = 0xff00;
  param_1[0x21b] = 0;
  *(undefined2 *)(param_1 + 0x21c) = 0xff00;
  param_1[0x21d] = 0;
  *(undefined2 *)(param_1 + 0x21e) = 0xff00;
  FUN_1406feb60(param_1 + 0x21f);
  FUN_142d2e580(param_1 + 0x220);
  *(undefined1 *)(param_1 + 0x237) = 6;
  *(undefined1 *)(param_1 + 0xb9) = 3;
  FUN_1406fbb20(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78d) = 0;
  return param_1;
}



// FUNCTION 1406d80a0 FUN_1406d80a0 body=145 status=ok
// SIG undefined FUN_1406d80a0(void)

undefined8 * FUN_1406d80a0(undefined8 *param_1)

{
  FUN_1406d54c0();
  *(undefined1 *)(param_1 + 500) = 1;
  *param_1 = &PTR_FUN_14405c848;
  param_1[5] = &PTR_LAB_14405cc50;
  FUN_1406ffe70(param_1 + 0x1f5);
  FUN_142de2d20(param_1 + 0x26f,0x40000000,0);
  *(undefined2 *)(param_1 + 0x27f) = 0x301;
  *(undefined1 *)(param_1 + 0x143) = 1;
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  AK::MemoryMgr::StartProfileThreadUsage((long)(param_1 + 0x143));
  *(undefined1 *)((longlong)param_1 + 0x4dd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x709) = 1;
  return param_1;
}



// FUNCTION 1406d8140 FUN_1406d8140 body=149 status=ok
// SIG undefined FUN_1406d8140(void)

undefined8 * FUN_1406d8140(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_14405f078;
  param_1[5] = &PTR_LAB_14405f440;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  FUN_1406ffe70(param_1 + 0x29);
  FUN_1406ff280(param_1 + 0xa3);
  *(undefined1 *)(param_1 + 0xa3) = 1;
  FUN_14071c2d0(param_1 + 0xa3,5);
  return param_1;
}



// FUNCTION 1406d81e0 FUN_1406d81e0 body=129 status=ok
// SIG undefined FUN_1406d81e0(void)

undefined8 * FUN_1406d81e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__14405f660;
  param_1[5] = &PTR_LAB_14405fa00;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Target",1);
  param_1[0x20] = *puVar1;
  *(undefined2 *)(param_1 + 0x21) = 0xff00;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined2 *)(param_1 + 0x1f) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 1;
  return param_1;
}



// FUNCTION 1406d8270 FUN_1406d8270 body=92 status=ok
// SIG undefined FUN_1406d8270(void)

undefined8 * FUN_1406d8270(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_14405fa18;
  param_1[5] = &PTR_LAB_14405fdb8;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0;
  return param_1;
}



// FUNCTION 1406d82d0 FUN_1406d82d0 body=165 status=ok
// SIG undefined FUN_1406d82d0(void)

undefined8 * FUN_1406d82d0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_1440573e8;
  param_1[5] = &PTR_LAB_1440577a0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0xff00;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x4a) = 0x44bb8000;
  return param_1;
}



// FUNCTION 1406d8380 FUN_1406d8380 body=172 status=ok
// SIG undefined FUN_1406d8380(void)

undefined8 * FUN_1406d8380(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_144059c68;
  param_1[5] = &PTR_LAB_14405a008;
  FUN_1406d4ce0(param_1 + 0x20);
  param_1[0xaf] = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0xff00;
  param_1[0xb1] = 0;
  *(undefined2 *)(param_1 + 0xb2) = 0xff00;
  param_1[0xb3] = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0xff00;
  param_1[0xb5] = 0;
  *(undefined2 *)(param_1 + 0xb6) = 0xff00;
  param_1[0xb7] = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0xff00;
  param_1[0xb9] = 0;
  *(undefined2 *)(param_1 + 0xba) = 0xff00;
  return param_1;
}



// FUNCTION 1406d8430 FUN_1406d8430 body=215 status=ok
// SIG undefined FUN_1406d8430(void)

undefined8 * FUN_1406d8430(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__14405fdd0;
  param_1[5] = &PTR_LAB_144060170;
  FUN_142de2d20(param_1 + 0x20,0x40000000,0);
  FUN_142de2d20(param_1 + 0x31,0x40000000,0);
  FUN_142de2d20(param_1 + 0x42,0x40000000,0);
  FUN_142de2d20(param_1 + 0x53,0x40000000,0);
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0;
  return param_1;
}



// FUNCTION 1406d8510 FUN_1406d8510 body=137 status=ok
// SIG undefined FUN_1406d8510(void)

undefined8 * FUN_1406d8510(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144060188;
  param_1[5] = &PTR_LAB_144060528;
  FUN_142de2f30(param_1 + 0x20,1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_142de2f30(param_1 + 0x31,1);
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 1406d85a0 FUN_1406d85a0 body=78 status=ok
// SIG undefined FUN_1406d85a0(void)

undefined8 * FUN_1406d85a0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_14405d4a8;
  param_1[5] = &PTR_LAB_144056c28;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0;
  return param_1;
}



// FUNCTION 1406d85f0 FUN_1406d85f0 body=60 status=ok
// SIG undefined FUN_1406d85f0(void)

undefined8 * FUN_1406d85f0(undefined8 *param_1)

{
  FUN_140701590();
  *param_1 = &PTR_FUN_144058c40;
  param_1[5] = &PTR_LAB_144058ff8;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return param_1;
}



// FUNCTION 1406d8630 FUN_1406d8630 body=136 status=ok
// SIG undefined FUN_1406d8630(void)

undefined8 * FUN_1406d8630(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_144056c58;
  param_1[5] = &PTR_LAB_144057000;
  FUN_1406d4c40(param_1 + 0x20);
  param_1[0x94] = 0;
  *(undefined2 *)(param_1 + 0x95) = 0xff00;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  puVar2 = (undefined8 *)FUN_142cc7850(local_18,DAT_146858610,param_1);
  uVar1 = puVar2[1];
  param_1[0x94] = *puVar2;
  param_1[0x95] = uVar1;
  return param_1;
}



// FUNCTION 1406d86c0 FUN_1406d86c0 body=258 status=ok
// SIG undefined FUN_1406d86c0(void)

undefined8 * FUN_1406d86c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  FUN_1406d89b0();
  *param_1 = &PTR_FUN_144055620;
  param_1[5] = &PTR_LAB_1440558d0;
  param_1[0xc] = &PTR_LAB_144055918;
  param_1[0x1a] = 0;
  FUN_142c62280(param_1 + 0x1b,0x11);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TargetActorInfo",1);
  param_1[0x2c] = *puVar1;
  *(undefined2 *)(param_1 + 0x2d) = 0xff00;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 2;
  param_1[0x30] = 0x43fa0000;
  FUN_142c62230(param_1 + 0x32);
  uVar2 = FUN_1407b0b30();
  param_1[0xb] = uVar2;
  FName::FName(local_res8,L"FullBody",1);
  param_1[0x1a] = local_res8[0];
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined2 *)(param_1 + 0x2a) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6f) = 1;
  return param_1;
}



// FUNCTION 1406d87d0 FUN_1406d87d0 body=341 status=ok
// SIG undefined FUN_1406d87d0(void)

undefined8 * FUN_1406d87d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  FUN_1406d89b0();
  *param_1 = &PTR_FUN_144055948;
  param_1[5] = &PTR_LAB_144055bf8;
  param_1[0xc] = &PTR_LAB_144055c40;
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TargetActorInfo",1);
  param_1[0x19] = *puVar1;
  *(undefined2 *)(param_1 + 0x1a) = 0xff00;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 2;
  param_1[0x1d] = 0x43fa0000;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x100;
  param_1[0x20] = 0;
  FUN_142c62280(param_1 + 0x21,0x11);
  FUN_142c62280(param_1 + 0x30,0x11);
  FUN_142c62280(param_1 + 0x3f,0x11);
  *(undefined1 *)(param_1 + 0x4e) = 2;
  *(undefined2 *)((longlong)param_1 + 0x272) = 0x302;
  FUN_142c62230(param_1 + 0x54);
  FUN_142c62230(param_1 + 0x57);
  FUN_142c62230(param_1 + 0x5a);
  FName::FName(local_res8,L"FullBody",1);
  param_1[0x20] = local_res8[0];
  *(undefined4 *)(param_1 + 0x1e) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x271) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x284) = 1;
  uVar2 = FAnimNode_DragonSpineSolver::StaticStruct();
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 1406d8930 FUN_1406d8930 body=115 status=ok
// SIG undefined FUN_1406d8930(void)

undefined8 * FUN_1406d8930(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1406d89b0();
  *(undefined1 *)(param_1 + 0x18) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144055d40;
  param_1[5] = &PTR_LAB_144055ff0;
  param_1[0xc] = &PTR_LAB_144056038;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x44000000;
  *(undefined4 *)(param_1 + 0x19) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
  uVar1 = FUN_1407b0cb0();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1406d89b0 FUN_1406d89b0 body=140 status=ok
// SIG undefined FUN_1406d89b0(void)

undefined8 * FUN_1406d89b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_142c63600();
  *(undefined1 *)(param_1 + 0x17) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144055318;
  param_1[5] = &PTR_LAB_1440555c8;
  param_1[0xc] = &PTR_LAB_144055610;
  uVar2 = FUN_1407b0d30();
  param_1[0xb] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar1);
  }
  *(undefined1 *)((longlong)iVar1 + param_1[0xf]) = 2;
  return param_1;
}



// FUNCTION 1406d8a40 ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_> body=122 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
               (longlong param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 400,0);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406d8ac0 FUN_1406d8ac0 body=167 status=ok
// SIG undefined FUN_1406d8ac0(void)

void FUN_1406d8ac0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 10) & 1) == 0) {
      lVar1 = *(longlong *)(lVar1 + 0x120);
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0();
      }
      lVar1 = FUN_1406e9c50(lVar1);
      if ((lVar1 != 0) && (param_1[2] != 0)) {
        if ((char)param_1[4] != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x21) = 1;
          return;
        }
        *(longlong *)(*param_1 + 8) = param_1[1];
        *(longlong *)param_1[1] = *param_1;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
        return;
      }
    }
    else {
      *(longlong *)(*param_1 + 8) = param_1[1];
      *(longlong *)param_1[1] = *param_1;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return;
}



// FUNCTION 1406d8b70 FUN_1406d8b70 body=119 status=ok
// SIG undefined FUN_1406d8b70(void)

void FUN_1406d8b70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406d8bf0 FUN_1406d8bf0 body=116 status=ok
// SIG undefined FUN_1406d8bf0(void)

void FUN_1406d8bf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  *(undefined1 *)(param_1 + 0x42) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  return;
}



// FUNCTION 1406d8c70 FUN_1406d8c70 body=137 status=ok
// SIG undefined FUN_1406d8c70(void)

void FUN_1406d8c70(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055c50;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1406d8d00 FUN_1406d8d00 body=143 status=ok
// SIG undefined FUN_1406d8d00(void)

void FUN_1406d8d00(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf80);
  if (*(longlong *)(param_1 + 0xf70) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x640);
  FUN_1406d8b70(param_1 + 0x280);
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
  return;
}



// FUNCTION 1406d8d90 FUN_1406d8d90 body=119 status=ok
// SIG undefined FUN_1406d8d90(void)

void FUN_1406d8d90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x2b0);
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
  return;
}



// FUNCTION 1406d8e10 FUN_1406d8e10 body=98 status=ok
// SIG undefined FUN_1406d8e10(void)

void FUN_1406d8e10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_143fddd00;
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
  return;
}



// FUNCTION 1406d8e80 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 * TArray<FName,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1406d8f00 FUN_1406d8f00 body=159 status=ok
// SIG undefined FUN_1406d8f00(void)

longlong * FUN_1406d8f00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[1];
  lVar3 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  FUN_1406f4a40(param_1,iVar1);
  lVar2 = *param_1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_142de2880(lVar2,lVar3);
    lVar2 = lVar2 + 0x88;
    lVar3 = lVar3 + 0x88;
  }
  return param_1;
}



// FUNCTION 1406d8fa0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1406d90fb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1406d90fb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_1406d3650(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1406d91a0 FUN_1406d91a0 body=441 status=ok
// SIG undefined FUN_1406d91a0(void)

longlong FUN_1406d91a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_1406da240();
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_2 + 0xc9);
  *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(param_2 + 0xca);
  FUN_1406da410(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
  *(undefined1 *)(param_1 + 0x309) = *(undefined1 *)(param_2 + 0x309);
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x310);
  *(undefined1 *)(param_1 + 0x311) = *(undefined1 *)(param_2 + 0x311);
  *(undefined1 *)(param_1 + 0x312) = *(undefined1 *)(param_2 + 0x312);
  *(undefined1 *)(param_1 + 0x313) = *(undefined1 *)(param_2 + 0x313);
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_2 + 0x314);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  uVar4 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x338) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x348) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x358) = uVar4;
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  uVar4 = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = uVar4;
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x390) = *(undefined1 *)(param_2 + 0x390);
  *(undefined1 *)(param_1 + 0x391) = *(undefined1 *)(param_2 + 0x391);
  *(undefined1 *)(param_1 + 0x392) = *(undefined1 *)(param_2 + 0x392);
  *(undefined1 *)(param_1 + 0x393) = *(undefined1 *)(param_2 + 0x393);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_2 + 0x394);
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x398);
  *(undefined1 *)(param_1 + 0x399) = *(undefined1 *)(param_2 + 0x399);
  return param_1;
}



// FUNCTION 1406d9360 FUN_1406d9360 body=859 status=ok
// SIG undefined FUN_1406d9360(void)

undefined8 * FUN_1406d9360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  *(undefined1 *)((longlong)param_1 + 0x3b) = *(undefined1 *)((longlong)param_2 + 0x3b);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar1;
  param_1[0x11] = param_2[0x11];
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  param_1[0x14] = param_2[0x14];
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  uVar1 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar1;
  uVar1 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar1;
  uVar1 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar1;
  param_1[0x21] = param_2[0x21];
  uVar1 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar1;
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x139) = *(undefined1 *)((longlong)param_2 + 0x139);
  *(undefined1 *)((longlong)param_1 + 0x13a) = *(undefined1 *)((longlong)param_2 + 0x13a);
  *(undefined1 *)((longlong)param_1 + 0x13b) = *(undefined1 *)((longlong)param_2 + 0x13b);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  uVar1 = param_2[0x2c];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = uVar1;
  uVar1 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar1;
  uVar1 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar1;
  param_1[0x31] = param_2[0x31];
  uVar1 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar1;
  param_1[0x34] = param_2[0x34];
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  *(undefined1 *)((longlong)param_1 + 0x1b9) = *(undefined1 *)((longlong)param_2 + 0x1b9);
  *(undefined1 *)((longlong)param_1 + 0x1ba) = *(undefined1 *)((longlong)param_2 + 0x1ba);
  *(undefined1 *)((longlong)param_1 + 0x1bb) = *(undefined1 *)((longlong)param_2 + 0x1bb);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = *(undefined8 *)((longlong)param_2 + 0x1bc);
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  uVar1 = param_2[0x3c];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = uVar1;
  uVar1 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = uVar1;
  uVar1 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = uVar1;
  param_1[0x41] = param_2[0x41];
  uVar1 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar1;
  param_1[0x44] = param_2[0x44];
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)((longlong)param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  return param_1;
}


