// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a300c0 FUN_140a300c0 body=518 status=ok
// SIG undefined FUN_140a300c0(void)

undefined1
FUN_140a300c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,void **param_6,void **param_7,void **param_8)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  ulonglong local_70;
  longlong local_68;
  void *local_58;
  ulonglong local_50;
  undefined1 local_38 [8];
  longlong local_30;
  
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
  FUN_142fde710(local_38,param_1);
  cVar2 = FUN_143001780(local_a8,local_38);
  if (local_30 != 0) {
    FMemory::Free();
  }
  pvVar1 = local_88;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    *param_5 = local_a8[0];
    if (param_6 != &local_88) {
      iVar4 = (int)local_80;
      *(int *)(param_6 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_6 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_6 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (param_6,local_80 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_6,pvVar1,(longlong)iVar4 << 3);
      }
    }
    pvVar1 = local_78;
    if (param_7 != &local_78) {
      iVar4 = (int)local_70;
      *(int *)(param_7 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_7 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_7 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (param_7,local_70 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_7,pvVar1,(longlong)iVar4 << 3);
      }
    }
    pvVar1 = local_58;
    if (param_8 != &local_58) {
      iVar4 = (int)local_50;
      *(int *)(param_8 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_8 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_8 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (param_8,local_50 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_8,pvVar1,(longlong)iVar4 << 3);
      }
    }
    uVar3 = 1;
    *param_2 = local_90;
    *param_3 = local_98;
    *param_4 = local_a0;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 140a302d0 FUN_140a302d0 body=233 status=ok
// SIG undefined FUN_140a302d0(void)

void FUN_140a302d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x130) == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar2 = FUN_142956f50();
      uVar2 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
      *(undefined8 *)(param_1 + 0x130) = uVar2;
      FUN_14234b150(uVar2);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x130) + 0x1fc);
      *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x91) >> 5 ^
                          *(byte *)(*(longlong *)(param_1 + 0x130) + 0x1fc)) & 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 0x1f8) = *(undefined4 *)(param_1 + 300);
      FUN_140a2e090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x130));
    }
    else {
      FUN_142712050(param_2);
    }
    FUN_142713b70(param_2,*(undefined8 *)(param_1 + 0x130));
  }
  return;
}



// FUNCTION 140a303c0 FUN_140a303c0 body=97 status=ok
// SIG undefined FUN_140a303c0(void)

void FUN_140a303c0(longlong param_1,longlong param_2)

{
  undefined8 local_res10;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    if ((*(longlong *)(param_1 + 0x50) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x50) + 0x74) != '\0')) {
      *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x58);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x78) = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res10,0);
    *(undefined4 *)(param_1 + 0x70) = (undefined4)local_res10;
    *(undefined4 *)(param_1 + 0x74) = local_res10._4_4_;
  }
  return;
}



// FUNCTION 140a304d0 FUN_140a304d0 body=198 status=ok
// SIG undefined FUN_140a304d0(void)

void FUN_140a304d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_140a34fd0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x98));
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x668))(plVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = (**(code **)(*plVar4 + 0xfb8))(plVar4), cVar2 != '\0')) {
        return;
      }
    }
    puVar6 = (undefined8 *)FQuat::Rotator(param_1 + 0x1d0,local_18);
    local_28 = *puVar6;
    local_20 = *(undefined4 *)(puVar6 + 1);
    AActor::SetActorRotation(plVar3,&local_28,0);
  }
  return;
}



// FUNCTION 140a305a0 FUN_140a305a0 body=460 status=ok
// SIG undefined FUN_140a305a0(void)

void FUN_140a305a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar11;
  
  if (*param_2 != 0) {
    lVar1 = param_2[3];
    uVar13 = 0;
    if (0 < *(int *)(param_1 + 0x1af0)) {
      puVar9 = (undefined8 *)(param_1 + 0x1d0);
      uVar11 = uVar13;
      do {
        if (*(char *)((longlong)puVar9 + 0x5a) != '\0') {
          if (*(char *)((longlong)puVar9 + -0x44) == '\0') {
            iVar8 = *(int *)(puVar9 + -8);
          }
          else if (*(int *)(puVar9 + -9) == -1) {
            iVar8 = -1;
          }
          else {
            iVar8 = *(int *)(*(longlong *)(lVar1 + 0x80) + (longlong)*(int *)(puVar9 + -9) * 4);
          }
          *(int *)(puVar9 + -6) = iVar8;
          if (*(char *)((longlong)iVar8 + param_2[4]) == '\0') {
            FUN_14060c680(param_2 + 1);
          }
          puVar7 = (undefined4 *)((longlong)iVar8 * 0x30 + param_2[1]);
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          *(undefined4 *)(puVar9 + -4) = uVar2;
          *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar3;
          *(undefined4 *)(puVar9 + -3) = uVar4;
          *(undefined4 *)((longlong)puVar9 + -0x14) = uVar5;
          uVar6 = *(undefined8 *)(puVar7 + 6);
          puVar9[-2] = *(undefined8 *)(puVar7 + 4);
          puVar9[-1] = uVar6;
          uVar6 = *(undefined8 *)(puVar7 + 10);
          *puVar9 = *(undefined8 *)(puVar7 + 8);
          puVar9[1] = uVar6;
          *(undefined4 *)(puVar9 + 2) = uVar2;
          *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
          *(undefined4 *)(puVar9 + 3) = uVar4;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar9 + -2);
          *(undefined4 *)((longlong)puVar9 + 0x24) = *(undefined4 *)((longlong)puVar9 + -0xc);
          *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar9 + -1);
          *(undefined4 *)((longlong)puVar9 + 0x2c) = *(undefined4 *)((longlong)puVar9 + -4);
          *(undefined4 *)(puVar9 + 6) = *(undefined4 *)puVar9;
          *(undefined4 *)((longlong)puVar9 + 0x34) = *(undefined4 *)((longlong)puVar9 + 4);
          *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(puVar9 + 1);
          *(undefined4 *)((longlong)puVar9 + 0x3c) = *(undefined4 *)((longlong)puVar9 + 0xc);
          *(undefined2 *)(puVar9 + 0xb) = 1;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        puVar9 = puVar9 + 0x16;
      } while ((int)uVar10 < *(int *)(param_1 + 0x1af0));
    }
    FUN_140a3ddb0(param_1);
    FUN_140a3f7f0(param_1);
    FUN_140a3e5d0(param_1);
    plVar12 = *(longlong **)(param_1 + 0x1b00);
    uVar11 = (longlong)*(int *)(param_1 + 0x1b08) & 0x1fffffffffffffff;
    if (plVar12 + *(int *)(param_1 + 0x1b08) < plVar12) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      do {
        lVar1 = *plVar12;
        if (*(char *)(lVar1 + 0xa9) != '\0') {
          FUN_140a2efb0(lVar1);
          iVar8 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3,iVar8);
          }
          puVar7 = (undefined4 *)((longlong)iVar8 * 0x40 + *param_3);
          *puVar7 = *(undefined4 *)(lVar1 + 0x20);
          uVar6 = *(undefined8 *)(lVar1 + 0x38);
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined8 *)(puVar7 + 6) = uVar6;
          uVar6 = *(undefined8 *)(lVar1 + 0x48);
          *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar1 + 0x40);
          *(undefined8 *)(puVar7 + 10) = uVar6;
          uVar2 = *(undefined4 *)(lVar1 + 0x54);
          uVar3 = *(undefined4 *)(lVar1 + 0x58);
          uVar4 = *(undefined4 *)(lVar1 + 0x5c);
          puVar7[0xc] = *(undefined4 *)(lVar1 + 0x50);
          puVar7[0xd] = uVar2;
          puVar7[0xe] = uVar3;
          puVar7[0xf] = uVar4;
        }
        FUN_140a38c80(lVar1,param_3);
        plVar12 = plVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar11);
    }
  }
  return;
}



// FUNCTION 140a30770 FUN_140a30770 body=91 status=ok
// SIG undefined FUN_140a30770(void)

void FUN_140a30770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a307c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 140a307d0 FUN_140a307d0 body=49 status=ok
// SIG undefined FUN_140a307d0(void)

void FUN_140a307d0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a307fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2);
  return;
}



// FUNCTION 140a30810 FUN_140a30810 body=116 status=ok
// SIG undefined FUN_140a30810(void)

bool FUN_140a30810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,
               *(undefined1 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 140a30890 ExecuteIfSafe body=139 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UUGGameInstance,void___cdecl(FString_const_&,FString_const_&,FString_const_&,TArray<FString,FDefaultAllocator>_&)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140a30920 FUN_140a30920 body=90 status=ok
// SIG undefined FUN_140a30920(void)

undefined1 FUN_140a30920(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140a30980 FUN_140a30980 body=727 status=ok
// SIG undefined FUN_140a30980(void)

longlong * FUN_140a30980(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
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
  
  plVar9 = (longlong *)0x0;
  if (((*(char *)(param_1 + 0x180) != '\0') && (*(longlong *)(param_1 + 0x188) != 0)) &&
     (lVar8 = *(longlong *)(param_1 + 0x118), lVar8 != 0)) {
    plVar2 = (longlong *)(lVar8 + 0x2b0);
    uVar3 = *(uint *)(lVar8 + 0x2d8);
    puVar1 = (uint *)(lVar8 + 0x2c0);
    uStack_94 = 1;
    local_98 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar4 = *puVar14;
      plVar10 = plVar9;
      plVar12 = plVar9;
      while (uVar4 == 0) {
        iVar7 = (int)plVar10;
        uStack_80 = (int)plVar12 + 0x20;
        plVar12 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar7 + 1;
        plVar10 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140a30a8d;
        uVar4 = puVar14[(longlong)iVar7 + 1];
      }
      uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
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
      uStack_84 = (uStack_80 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_140a30a8d:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar8 + 0x2d8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar13 = uVar4 & 0xffffffe0;
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
      puVar14 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar7 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140a30b65;
        uVar11 = puVar14[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
      iVar7 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar13 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_140a30b65:
        uStack_84 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      plVar10 = *(longlong **)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
      if (plVar10 != (longlong *)0x0) {
        lVar8 = FUN_1429ff160();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
            != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) &&
           (cVar6 = (**(code **)(*plVar10 + 0x440))(plVar10,*(undefined8 *)(param_1 + 0x188)),
           cVar6 != '\0')) {
          return plVar10;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x168);
  }
  return plVar9;
}



// FUNCTION 140a30c60 FUN_140a30c60 body=27 status=ok
// SIG undefined FUN_140a30c60(void)

void FUN_140a30c60(undefined8 param_1)

{
  FUN_140a3c760();
  FUN_141755460(param_1);
  return;
}



// FUNCTION 140a30c80 FUN_140a30c80 body=651 status=ok
// SIG undefined FUN_140a30c80(void)

void FUN_140a30c80(undefined8 param_1,float *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 local_res10;
  void *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  if (param_2[8] == 0.0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_2 + 6);
  }
  lVar3 = FUN_1412e8780();
  local_res10 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res10,&local_38);
  puVar5 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar5 = local_38;
  }
  FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s",puVar5,(double)(*param_2 * 100.0),puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar4 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,2,&DAT_1441dcc44,2,0x3f);
  iVar2 = local_40;
  if (((int)local_30 != 0) && (iVar6 = (int)local_30 + -1, iVar6 != 0)) {
    lVar3 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar6;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar4,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  FUN_141f85ec0(param_1,&local_48);
  local_38 = (undefined2 *)0x0;
  local_30 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar4 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,2,&DAT_1441dcc84,2,0x3f);
  iVar2 = local_40;
  if (((int)local_30 != 0) && (iVar6 = (int)local_30 + -1, iVar6 != 0)) {
    lVar3 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar6;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar4,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  pvVar1 = local_48;
  lVar3 = (longlong)local_40;
  local_38 = (undefined2 *)0x0;
  local_30 = CONCAT44(local_30._4_4_,local_40);
  if (local_40 == 0) {
    local_30 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a30f10 FUN_140a30f10 body=777 status=ok
// SIG undefined FUN_140a30f10(void)

float * FUN_140a30f10(undefined8 param_1,float *param_2,float *param_3,float *param_4,float param_5,
                     undefined8 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [128];
  
  fVar1 = param_4[2];
  fVar6 = fVar1 + fVar1;
  fVar8 = -param_4[1];
  fVar8 = fVar8 + fVar8;
  local_d0 = param_4[3] * fVar8 + *param_4 * fVar6;
  local_d8 = CONCAT44(param_4[3] * fVar6 - *param_4 * fVar8,
                      (param_4[1] * fVar8 - fVar1 * fVar6) + 1.0);
  uVar4 = FVector::Rotation(&local_d8,&local_c8);
  uVar4 = FRotationMatrix::FRotationMatrix(local_88,uVar4);
  FMatrix::GetUnitAxes(uVar4,local_b8,local_98,local_a8);
  fVar1 = *param_4;
  fVar6 = param_4[1];
  fVar8 = param_4[2];
  fVar2 = param_4[3];
  fVar7 = fVar8 + fVar8;
  fVar9 = -fVar6 + -fVar6;
  local_d0 = fVar2 * fVar9 + fVar1 * fVar7;
  local_d8 = CONCAT44(fVar2 * fVar7 - fVar1 * fVar9,(fVar6 * fVar9 - fVar8 * fVar7) + 1.0);
  fVar9 = -fVar8 + -fVar8;
  fVar7 = fVar1 + fVar1;
  local_c8 = fVar9 * fVar2 + fVar7 * fVar6;
  local_c4 = (fVar9 * fVar8 - fVar7 * fVar1) + 1.0;
  local_c0 = fVar7 * fVar2 - fVar9 * fVar6;
  iVar3 = rand();
  puVar5 = (undefined8 *)
           FVector::RotateAngleAxis
                     (&local_d8,local_b8,(float)iVar3 * 3.051851e-05 * param_5,&local_c8);
  fVar1 = param_4[1];
  fVar8 = -*param_4;
  local_d8 = *puVar5;
  fVar8 = fVar8 + fVar8;
  local_d0 = *(float *)(puVar5 + 1);
  fVar6 = fVar1 + fVar1;
  local_c4 = fVar8 * param_4[3] + fVar6 * param_4[2];
  local_c0 = (fVar8 * *param_4 - fVar6 * fVar1) + 1.0;
  local_c8 = fVar6 * param_4[3] - fVar8 * param_4[2];
  iVar3 = rand();
  puVar5 = (undefined8 *)
           FVector::RotateAngleAxis
                     (&local_d8,local_b8,(float)iVar3 * 3.051851e-05 * param_5,&local_c8);
  uVar4 = *puVar5;
  fVar8 = *(float *)(puVar5 + 1);
  fVar1 = param_3[1];
  fVar6 = param_3[2];
  *param_2 = (float)uVar4 * param_7 + *param_3;
  param_2[2] = fVar8 * param_7 + fVar6;
  param_2[1] = (float)((ulonglong)uVar4 >> 0x20) * param_7 + fVar1;
  return param_2;
}



// FUNCTION 140a31220 GetAngleBetweenVectors body=201 status=ok
// SIG undefined GetAngleBetweenVectors(void)

void UIndianaMathStatics::GetAngleBetweenVectors(float *param_1,float *param_2)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = *param_2;
  fVar9 = fVar5 * fVar3 - fVar2 * fVar4;
  fVar8 = fVar2 * fVar6 - fVar5 * fVar1;
  fVar7 = fVar1 * fVar4 - fVar6 * fVar3;
  FGenericPlatformMath::Atan2
            (SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7),
             fVar6 * fVar1 + fVar4 * fVar3 + fVar5 * fVar2);
  return;
}



// FUNCTION 140a312f0 FUN_140a312f0 body=175 status=ok
// SIG undefined FUN_140a312f0(void)

float * FUN_140a312f0(longlong param_1,float *param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_1 = (ulonglong)param_3 * 0xb0 + param_1;
  FUN_140a2efb0(param_1);
  fVar1 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  fVar5 = -*(float *)(param_1 + 0x34);
  fVar4 = fVar2 + fVar2;
  fVar5 = fVar5 + fVar5;
  *param_2 = (fVar5 * *(float *)(param_1 + 0x34) - fVar4 * fVar2) + 1.0;
  param_2[2] = fVar5 * fVar3 + fVar4 * fVar1;
  param_2[1] = fVar4 * fVar3 - fVar5 * fVar1;
  return param_2;
}



// FUNCTION 140a313c0 FUN_140a313c0 body=2460 status=ok
// SIG undefined FUN_140a313c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a313c0(longlong param_1,longlong param_2,undefined8 *param_3,float *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined1 *local_270;
  undefined *local_268;
  undefined8 local_258;
  float local_250;
  undefined1 local_248 [8];
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_228;
  undefined1 local_218 [12];
  undefined4 local_20c;
  undefined8 local_1f8;
  float local_1f0;
  undefined1 local_188 [72];
  longlong local_140;
  longlong local_120;
  undefined8 local_108;
  float local_100 [8];
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146866678) && (_Init_thread_header(&DAT_146866678), DAT_146866678 == -1))
  {
    FName::FName(&DAT_146866670,L"VehicleLook_GroundDetection",1);
    _Init_thread_footer(&DAT_146866678);
  }
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (*(longlong **)(uVar5 + 0x98) == (longlong *)0x0) {
LAB_140a31cf2:
    return uVar5 & 0xffffffffffffff00;
  }
  lVar4 = (**(code **)(**(longlong **)(uVar5 + 0x98) + 0x148))();
  uVar5 = 0;
  if (lVar4 == 0) goto LAB_140a31cf2;
  local_278 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x98);
  FUN_1422ffb20(local_188,DAT_146866670,local_248,1);
  _guard_xfg_dispatch_icall_nop(local_218,0,0x90);
  local_20c = 0x3f800000;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98) + 0x168);
  if (lVar2 == 0) {
    fVar12 = 1.0;
    fVar18 = 0.0;
    fVar9 = 0.0;
    fVar19 = 0.0;
  }
  else {
    fVar18 = *(float *)(lVar2 + 0x210);
    fVar9 = *(float *)(lVar2 + 0x214);
    fVar19 = *(float *)(lVar2 + 0x218);
    fVar12 = *(float *)(lVar2 + 0x21c);
  }
  fVar15 = *(float *)(param_1 + 0x3c);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  local_258._0_4_ = (float)*(undefined8 *)(param_1 + 0x34);
  fVar14 = fVar15 * fVar9 - fVar10 * fVar19;
  fVar11 = (float)local_258 * fVar19 - fVar15 * fVar18;
  fVar14 = fVar14 + fVar14;
  fVar13 = fVar10 * fVar18 - (float)local_258 * fVar9;
  fVar11 = fVar11 + fVar11;
  fVar13 = fVar13 + fVar13;
  fVar17 = (float)local_258 + fVar12 * fVar14;
  if (lVar2 == 0) {
    local_258 = _DAT_1468b5d90;
    local_250 = DAT_1468b5d98;
  }
  else {
    local_258 = *(undefined8 *)(lVar2 + 0x220);
    local_250 = *(float *)(lVar2 + 0x228);
  }
  local_240 = fVar17 + (fVar9 * fVar13 - fVar19 * fVar11) + (float)local_258;
  local_23c = fVar10 + fVar12 * fVar11 + (fVar19 * fVar14 - fVar18 * fVar13) +
              (float)((ulonglong)local_258 >> 0x20);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  local_238 = fVar15 + fVar12 * fVar13 + (fVar18 * fVar11 - fVar9 * fVar14) + local_250;
  fVar15 = *(float *)(param_1 + 0x48);
  local_270 = local_188;
  local_268 = &DAT_146aefe68;
  fVar14 = fVar15 * fVar9 - fVar10 * fVar19;
  fVar14 = fVar14 + fVar14;
  local_258._0_4_ = (float)*(undefined8 *)(param_1 + 0x40);
  fVar13 = (float)local_258 * fVar19 - fVar15 * fVar18;
  fVar11 = fVar10 * fVar18 - (float)local_258 * fVar9;
  fVar13 = fVar13 + fVar13;
  fVar11 = fVar11 + fVar11;
  local_250 = (fVar18 * fVar13 - fVar14 * fVar9) + fVar15 + fVar11 * fVar12 + local_238;
  local_258 = CONCAT44((fVar14 * fVar19 - fVar18 * fVar11) + fVar10 + fVar13 * fVar12 + local_23c,
                       (fVar11 * fVar9 - fVar13 * fVar19) + (float)local_258 + fVar14 * fVar12 +
                       local_240);
  local_278._0_4_ = 4;
  local_230 = local_238;
  local_228 = local_240;
  cVar3 = UWorld::LineTraceSingleByChannel(lVar4,local_218,&local_240,&local_258);
  bVar8 = cVar3 != '\0';
  if (bVar8) {
    local_108 = local_1f8;
    local_100[0] = local_1f0;
  }
  uVar7 = (ulonglong)bVar8;
  fVar15 = *(float *)(param_1 + 0x54);
  local_258._0_4_ = (float)*(undefined8 *)(param_1 + 0x4c);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x4c) >> 0x20);
  local_270 = local_188;
  local_268 = &DAT_146aefe68;
  local_278._0_4_ = 4;
  fVar14 = fVar15 * fVar9 - fVar10 * fVar19;
  fVar13 = (float)local_258 * fVar19 - fVar15 * fVar18;
  fVar14 = fVar14 + fVar14;
  fVar11 = fVar10 * fVar18 - (float)local_258 * fVar9;
  fVar13 = fVar13 + fVar13;
  fVar11 = fVar11 + fVar11;
  local_250 = local_238 + (fVar18 * fVar13 - fVar14 * fVar9) + fVar15 + fVar11 * fVar12;
  local_258 = CONCAT44(local_23c + (fVar14 * fVar19 - fVar18 * fVar11) + fVar10 + fVar13 * fVar12,
                       local_240 +
                       (fVar11 * fVar9 - fVar13 * fVar19) + (float)local_258 + fVar14 * fVar12);
  cVar3 = UWorld::LineTraceSingleByChannel(lVar4,local_218,&local_240,&local_258);
  uVar5 = uVar7;
  if (cVar3 != '\0') {
    uVar5 = (ulonglong)(bVar8 + 1);
    *(undefined8 *)(local_100 + uVar7 * 3 + -2) = local_1f8;
    local_100[uVar7 * 3] = local_1f0;
  }
  iVar6 = (int)uVar5;
  fVar15 = *(float *)(param_1 + 0x60);
  local_258._0_4_ = (float)*(undefined8 *)(param_1 + 0x58);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  local_270 = local_188;
  local_268 = &DAT_146aefe68;
  local_278 = CONCAT44(local_278._4_4_,4);
  fVar13 = fVar15 * fVar9 - fVar10 * fVar19;
  fVar14 = (float)local_258 * fVar19 - fVar15 * fVar18;
  fVar13 = fVar13 + fVar13;
  fVar11 = fVar10 * fVar18 - (float)local_258 * fVar9;
  fVar14 = fVar14 + fVar14;
  fVar11 = fVar11 + fVar11;
  local_250 = local_238 + (fVar14 * fVar18 - fVar13 * fVar9) + fVar15 + fVar11 * fVar12;
  local_258 = CONCAT44(local_23c + (fVar13 * fVar19 - fVar11 * fVar18) + fVar10 + fVar14 * fVar12,
                       local_240 +
                       (fVar11 * fVar9 - fVar14 * fVar19) + (float)local_258 + fVar13 * fVar12);
  cVar3 = UWorld::LineTraceSingleByChannel(lVar4,local_218,&local_240,&local_258);
  if (cVar3 != '\0') {
    iVar6 = iVar6 + 1;
    *(undefined8 *)(local_100 + uVar5 * 3 + -2) = local_1f8;
    local_100[uVar5 * 3] = local_1f0;
  }
  if (iVar6 == 3) {
    *(ulonglong *)param_4 =
         CONCAT44((local_100[3] - local_100[0]) * (local_100[4] - (float)local_108) -
                  (local_100[1] - (float)local_108) * (local_100[6] - local_100[0]),
                  (local_100[2] - local_108._4_4_) * (local_100[6] - local_100[0]) -
                  (local_100[3] - local_100[0]) * (local_100[5] - local_108._4_4_));
    param_4[2] = (local_100[1] - (float)local_108) * (local_100[5] - local_108._4_4_) -
                 (local_100[2] - local_108._4_4_) * (local_100[4] - (float)local_108);
    fVar18 = param_4[1];
    fVar9 = *param_4;
    fVar19 = param_4[2];
    fVar12 = fVar9 * fVar9 + fVar18 * fVar18 + fVar19 * fVar19;
    if (1e-08 < fVar12) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar15 = auVar16._0_4_;
      fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
      fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
      *param_4 = fVar9 * fVar15;
      param_4[1] = fVar18 * fVar15;
      param_4[2] = fVar19 * fVar15;
    }
    uVar1 = *(undefined8 *)param_4;
    fVar18 = param_4[2];
    local_258 = uVar1;
    local_250 = fVar18;
    fVar9 = (float)UIndianaMathStatics::GetAngleBetweenVectors(&local_258,&DAT_1464aa798);
    if (*(float *)(param_1 + 100) <= fVar9 * 57.295776) {
      *param_3 = uVar1;
      *(float *)(param_3 + 1) = fVar18;
      uVar5 = 1;
      goto LAB_140a31cb8;
    }
  }
  uVar5 = 0;
LAB_140a31cb8:
  if (local_120 != 0) {
    FMemory::Free();
  }
  if (local_140 == 0) {
    return uVar5;
  }
  FMemory::Free();
  return uVar5;
}



// FUNCTION 140a31d60 FUN_140a31d60 body=2344 status=ok
// SIG undefined FUN_140a31d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a31d60(longlong param_1,undefined8 param_2,float *param_3,undefined8 *param_4,
                  longlong param_5,float *param_6,float *param_7)

{
  bool bVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  float local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [64];
  undefined1 local_118 [224];
  
  bVar1 = *(float *)(param_1 + 0x348) <= param_3[1];
  local_188 = *param_4;
  local_180 = *(float *)(param_4 + 1);
  uVar2 = FRotationMatrix::MakeFromZX(local_118,param_4,&DAT_1464aa7a8);
  pfVar3 = (float *)FMatrix::ToQuat(uVar2,local_168);
  local_res8 = 0.0;
  fVar5 = pfVar3[2];
  fVar8 = fVar5 + fVar5;
  fVar9 = -pfVar3[1];
  fVar9 = fVar9 + fVar9;
  fVar10 = *param_3 * 0.008726646;
  _local_198 = CONCAT44(pfVar3[3] * fVar8 - fVar9 * *pfVar3,
                        (pfVar3[1] * fVar9 - fVar5 * fVar8) + 1.0);
  fStack_190 = fVar8 * *pfVar3 + pfVar3[3] * fVar9;
  if (fVar10 < 0.0) {
    fVar5 = fVar10 * 0.15915494 - 0.5;
  }
  else {
    fVar5 = fVar10 * 0.15915494 + 0.5;
  }
  fVar8 = -1.0;
  fVar10 = fVar10 - (float)(int)fVar5 * 6.2831855;
  if (fVar10 <= 1.5707964) {
    if (-1.5707964 <= fVar10) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = -1.0;
      fVar10 = -3.1415927 - fVar10;
    }
  }
  else {
    fVar5 = -1.0;
    fVar10 = 3.1415927 - fVar10;
  }
  fVar9 = fVar10 * fVar10;
  fVar10 = (((((2.7525562e-06 - fVar9 * 2.3889859e-08) * fVar9 - 0.00019840874) * fVar9 +
             0.008333331) * fVar9 - 0.16666667) * fVar9 + 1.0) * fVar10;
  fVar20 = (float)local_188 * fVar10;
  fVar5 = (((((2.4760495e-05 - fVar9 * 2.6051615e-07) * fVar9 - 0.0013888378) * fVar9 + 0.041666638)
            * fVar9 - 0.5) * fVar9 + 1.0) * fVar5;
  fVar15 = local_188._4_4_ * fVar10;
  fVar10 = local_180 * fVar10;
  uVar2 = FRotationMatrix::MakeFromXZ(local_158,&local_198,&DAT_1464aa798);
  pfVar3 = (float *)FMatrix::ToQuat(uVar2,local_178);
  fVar9 = *pfVar3;
  fVar7 = pfVar3[1];
  fVar6 = pfVar3[2];
  fVar14 = pfVar3[3];
  fVar11 = fVar14 * fVar20 * _DAT_1468660d0 + fVar5 * fVar9 + fVar15 * fVar6 * _DAT_1468660c0 +
           fVar10 * fVar7 * _DAT_1468660b0;
  fVar12 = fVar6 * fVar20 * fRam00000001468660d4 + fVar5 * fVar7 +
           fVar15 * fVar14 * fRam00000001468660c4 + fVar10 * fVar9 * fRam00000001468660b4;
  fVar13 = fVar7 * fVar20 * fRam00000001468660d8 + fVar5 * fVar6 +
           fVar15 * fVar9 * fRam00000001468660c8 + fVar10 * fVar14 * fRam00000001468660b8;
  fVar10 = fVar9 * fVar20 * fRam00000001468660dc + fVar5 * fVar14 +
           fVar15 * fVar7 * fRam00000001468660cc + fVar10 * fVar6 * fRam00000001468660bc;
  fVar5 = -fVar13 + -fVar13;
  fVar9 = fVar11 + fVar11;
  *param_7 = fVar11;
  param_7[1] = fVar12;
  param_7[2] = fVar13;
  param_7[3] = fVar10;
  pfVar3 = (float *)(param_1 + 0x348);
  if (bVar1) {
    pfVar3 = param_3 + 1;
  }
  fVar7 = *pfVar3 * 0.008726646;
  if (fVar7 < 0.0) {
    fVar6 = fVar7 * 0.15915494 - 0.5;
  }
  else {
    fVar6 = fVar7 * 0.15915494 + 0.5;
  }
  fVar7 = fVar7 - (float)(int)fVar6 * 6.2831855;
  if (fVar7 <= 1.5707964) {
    if (-1.5707964 <= fVar7) {
      fVar8 = 1.0;
    }
    else {
      fVar7 = -3.1415927 - fVar7;
    }
  }
  else {
    fVar7 = 3.1415927 - fVar7;
  }
  fVar6 = fVar7 * fVar7;
  fVar7 = (((((2.7525562e-06 - fVar6 * 2.3889859e-08) * fVar6 - 0.00019840874) * fVar6 + 0.008333331
            ) * fVar6 - 0.16666667) * fVar6 + 1.0) * fVar7;
  fVar21 = (fVar5 * fVar10 + fVar9 * fVar12) * fVar7;
  fVar19 = ((fVar5 * fVar13 - fVar9 * fVar11) + 1.0) * fVar7;
  fVar7 = (fVar9 * fVar10 - fVar5 * fVar12) * fVar7;
  fStack_18c = (((((2.4760495e-05 - fVar6 * 2.6051615e-07) * fVar6 - 0.0013888378) * fVar6 +
                 0.041666638) * fVar6 - 0.5) * fVar6 + 1.0) * fVar8;
  fVar20 = fVar13 * fVar21 * fRam00000001468660d4;
  fVar16 = fVar12 * fVar21 * fRam00000001468660d8;
  fVar17 = fVar11 * fVar21 * fRam00000001468660dc;
  fVar5 = fVar10 * fVar19 * fRam00000001468660c4;
  fVar8 = fVar11 * fVar19 * fRam00000001468660c8;
  fVar9 = fVar12 * fVar19 * fRam00000001468660cc;
  fVar6 = fVar11 * fVar7 * fRam00000001468660b4;
  fVar14 = fVar10 * fVar7 * fRam00000001468660b8;
  fVar15 = fVar13 * fVar7 * fRam00000001468660bc;
  fVar7 = fVar10 * fVar21 * _DAT_1468660d0 + fStack_18c * fVar11 + fVar13 * fVar19 * _DAT_1468660c0
          + fVar12 * fVar7 * _DAT_1468660b0;
  *param_7 = fVar7;
  param_7[1] = fVar20 + fStack_18c * fVar12 + fVar5 + fVar6;
  param_7[2] = fVar16 + fStack_18c * fVar13 + fVar8 + fVar14;
  param_7[3] = fVar17 + fStack_18c * fVar10 + fVar9 + fVar15;
  fVar5 = param_7[2];
  fVar8 = -param_7[1];
  fVar8 = fVar8 + fVar8;
  fVar10 = fVar5 + fVar5;
  _local_198 = CONCAT44(fVar10 * param_7[3] - fVar8 * fVar7,
                        (fVar8 * param_7[1] - fVar10 * fVar5) + 1.0);
  fStack_190 = fVar8 * param_7[3] + fVar10 * fVar7;
  uVar2 = FRotationMatrix::MakeFromXZ(local_158,&local_198,&DAT_1464aa798);
  puVar4 = (undefined8 *)FMatrix::ToQuat(uVar2,local_178);
  uVar2 = puVar4[1];
  *(undefined8 *)param_7 = *puVar4;
  *(undefined8 *)(param_7 + 2) = uVar2;
  puVar4 = (undefined8 *)FUN_140a33340(param_1,&local_198,param_2,param_5,&DAT_1464aa810);
  *(undefined8 *)param_6 = *puVar4;
  param_6[2] = *(float *)(puVar4 + 1);
  fVar5 = param_7[2];
  fVar10 = param_3[2];
  fVar9 = (fVar5 + fVar5) * fVar10;
  fVar8 = -(param_7[1] * fVar10);
  fVar8 = fVar8 + fVar8;
  fVar13 = fVar8 * param_7[3] + *param_7 * fVar9 + param_6[2];
  fVar15 = (fVar9 * param_7[3] - fVar8 * *param_7) + param_6[1];
  fVar20 = fVar10 + (fVar8 * param_7[1] - fVar5 * fVar9) + *param_6;
  param_6[2] = fVar13;
  param_6[1] = fVar15;
  *param_6 = fVar20;
  fVar5 = param_7[1];
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x10) >> 0x20);
  fVar10 = param_7[2];
  fVar8 = *param_7;
  fVar7 = *(float *)(param_5 + 0x18);
  local_198 = (float)*(undefined8 *)(param_5 + 0x10);
  fVar12 = fVar5 * fVar7 - fVar10 * fVar6;
  fVar11 = fVar10 * local_198 - fVar8 * fVar7;
  fVar9 = param_7[3];
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar14 = fVar8 * fVar6 - fVar5 * local_198;
  fVar14 = fVar14 + fVar14;
  param_6[1] = fVar11 * fVar9 + fVar6 + (fVar12 * fVar10 - fVar14 * fVar8) + fVar15;
  *param_6 = fVar12 * fVar9 + local_198 + (fVar14 * fVar5 - fVar11 * fVar10) + fVar20;
  param_6[2] = fVar14 * fVar9 + fVar7 + (fVar11 * fVar8 - fVar12 * fVar5) + fVar13;
  if (!bVar1) {
    local_res8 = param_3[1] - *(float *)(param_1 + 0x348);
  }
  fStack_190 = *(float *)(param_5 + 0x24);
  _local_198 = CONCAT44(*(undefined4 *)(param_5 + 0x20),*(float *)(param_5 + 0x1c) - local_res8);
  pfVar3 = (float *)FRotator::Quaternion(&local_198,local_178);
  fVar5 = *param_7;
  fVar10 = param_7[1];
  fVar8 = param_7[2];
  fVar9 = param_7[3];
  fVar7 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar14 = pfVar3[2];
  fVar11 = pfVar3[3];
  fVar15 = fVar11 * fVar5 * _DAT_1468660d0 + fVar9 * fVar7 + fVar14 * fVar10 * _DAT_1468660c0 +
           fVar6 * fVar8 * _DAT_1468660b0;
  fVar20 = fVar14 * fVar5 * fRam00000001468660d4 + fVar9 * fVar6 +
           fVar11 * fVar10 * fRam00000001468660c4 + fVar7 * fVar8 * fRam00000001468660b4;
  fVar17 = fVar6 * fVar5 * fRam00000001468660d8 + fVar9 * fVar14 +
           fVar7 * fVar10 * fRam00000001468660c8 + fVar11 * fVar8 * fRam00000001468660b8;
  fVar21 = fVar7 * fVar5 * fRam00000001468660dc + fVar9 * fVar11 +
           fVar6 * fVar10 * fRam00000001468660cc + fVar14 * fVar8 * fRam00000001468660bc;
  *param_7 = fVar15;
  param_7[1] = fVar20;
  param_7[2] = fVar17;
  param_7[3] = fVar21;
  fVar5 = *(float *)(param_1 + 0x880);
  fVar10 = *(float *)(param_1 + 0x884);
  fVar8 = *(float *)(param_1 + 0x888);
  fVar9 = *(float *)(param_1 + 0x88c);
  fVar11 = fVar15 * fVar8 * fRam00000001468660d4;
  fVar12 = fVar15 * fVar10 * fRam00000001468660d8;
  fVar13 = fVar15 * fVar5 * fRam00000001468660dc;
  fVar7 = fVar20 * fVar9 * fRam00000001468660c4;
  fVar6 = fVar20 * fVar5 * fRam00000001468660c8;
  fVar14 = fVar20 * fVar10 * fRam00000001468660cc;
  fVar16 = fVar17 * fVar5 * fRam00000001468660b4;
  fVar19 = fVar17 * fVar9 * fRam00000001468660b8;
  fVar18 = fVar17 * fVar8 * fRam00000001468660bc;
  *param_7 = fVar15 * fVar9 * _DAT_1468660d0 + fVar21 * fVar5 + fVar20 * fVar8 * _DAT_1468660c0 +
             fVar17 * fVar10 * _DAT_1468660b0;
  param_7[1] = fVar11 + fVar21 * fVar10 + fVar7 + fVar16;
  param_7[2] = fVar12 + fVar21 * fVar8 + fVar6 + fVar19;
  param_7[3] = fVar13 + fVar21 * fVar9 + fVar14 + fVar18;
  return;
}



// FUNCTION 140a32690 FUN_140a32690 body=455 status=ok
// SIG undefined FUN_140a32690(void)

longlong * FUN_140a32690(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  longlong *local_28;
  undefined8 local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  puVar12 = &DAT_1468e2410;
  iVar3 = FConfigCacheIni::GetArray(DAT_1468b6148,puVar8,puVar10,&local_28,&DAT_1468e2410);
  if (iVar3 != 0) {
    plVar11 = local_28 + (longlong)(int)local_20 * 2;
    for (plVar9 = local_28; plVar9 != plVar11; plVar9 = plVar9 + 2) {
      uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
      if ((int)plVar9[1] == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*plVar9;
      }
      uVar4 = UObject::GetPrivateStaticClass();
      puVar12 = (undefined8 *)CONCAT44(uVar13,0x2002);
      lVar5 = FUN_141799c90(uVar4,0,puVar10,0,puVar12,0,1);
      if (lVar5 != 0) {
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar1 = (longlong *)*param_1;
          iVar3 = (int)param_1[1];
          for (plVar7 = plVar1; plVar7 != plVar1 + iVar3; plVar7 = plVar7 + 1) {
            if (*plVar7 == lVar5) {
              if ((int)((longlong)plVar7 - (longlong)plVar1 >> 3) != -1) goto LAB_140a327ef;
              break;
            }
          }
          *(int *)(param_1 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
          }
          *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar5;
        }
      }
LAB_140a327ef:
    }
  }
  plVar9 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return param_1;
}



// FUNCTION 140a32860 FUN_140a32860 body=6 status=ok
// SIG undefined FUN_140a32860(void)

undefined4 FUN_140a32860(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 140a32870 FUN_140a32870 body=91 status=ok
// SIG undefined FUN_140a32870(void)

undefined8 FUN_140a32870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_2);
    }
    lVar2 = (**(code **)(*(longlong *)(param_1 + -0x458) + 0x148))();
    if (lVar1 == lVar2) {
      return 0x3f800000;
    }
  }
  return 0;
}



// FUNCTION 140a328d0 FUN_140a328d0 body=283 status=ok
// SIG undefined FUN_140a328d0(void)

void FUN_140a328d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x50);
  if ((((lVar5 == 0) || (*(longlong *)(param_1 + 0x60) == 0)) ||
      (*(longlong *)(param_1 + 0x70) == 0)) || (*(longlong *)(param_1 + 0x80) == 0)) {
    lVar5 = *(longlong *)(param_1 + 8);
    if (lVar5 == 0) {
      return;
    }
    iVar2 = (int)param_2[1];
    iVar4 = iVar2 + 1;
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    bVar7 = SBORROW4(iVar4,iVar1);
    iVar3 = iVar4 - iVar1;
    bVar6 = iVar4 == iVar1;
    *(int *)(param_2 + 1) = iVar4;
  }
  else {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar5 + 0x28);
    iVar1 = (int)param_2[1];
    lVar5 = *(longlong *)(param_1 + 0x60);
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar5 + 0x28);
    iVar1 = (int)param_2[1];
    lVar5 = *(longlong *)(param_1 + 0x70);
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar5 + 0x28);
    lVar5 = *(longlong *)(param_1 + 0x80);
    iVar2 = (int)param_2[1];
    iVar4 = iVar2 + 1;
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    bVar7 = SBORROW4(iVar4,iVar1);
    iVar3 = iVar4 - iVar1;
    bVar6 = iVar4 == iVar1;
    *(int *)(param_2 + 1) = iVar4;
  }
  if (!bVar6 && bVar7 == iVar3 < 0) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar5 + 0x28);
  return;
}



// FUNCTION 140a329f0 FUN_140a329f0 body=204 status=ok
// SIG undefined FUN_140a329f0(void)

longlong FUN_140a329f0(longlong param_1,int param_2)

{
  float fVar1;
  float _Y;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x144);
  fVar1 = *(float *)(param_1 + 0x148);
  _Y = *(float *)(param_1 + 0x150);
  fVar2 = *(float *)(param_1 + 0x154);
  fVar3 = *(float *)(param_1 + 0x14c);
  fVar5 = _guard_xfg_dispatch_icall_nop((float)param_2 * fVar1 + fVar6,_Y);
  lVar4 = (longlong)((fVar5 + fVar2) * fVar3);
  if (lVar4 < 0) {
    lVar4 = 0x7fffffffffffffff;
  }
  else {
    fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 + fVar1,_Y);
    lVar4 = lVar4 - (longlong)((fVar6 + fVar2) * fVar3);
  }
  return lVar4;
}



// FUNCTION 140a32ac0 FUN_140a32ac0 body=136 status=ok
// SIG undefined FUN_140a32ac0(void)

int FUN_140a32ac0(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x13c);
  fVar1 = *(float *)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x138);
  fVar5 = _guard_xfg_dispatch_icall_nop((float)param_2,fVar6);
  fVar6 = _guard_xfg_dispatch_icall_nop(1.0,fVar6);
  iVar4 = (int)((fVar5 + fVar1) * fVar2) - (int)((fVar6 + fVar1) * fVar2);
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  return iVar3;
}



// FUNCTION 140a32b50 FUN_140a32b50 body=204 status=ok
// SIG undefined FUN_140a32b50(void)

longlong FUN_140a32b50(longlong param_1,int param_2)

{
  float fVar1;
  float _Y;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x158);
  fVar1 = *(float *)(param_1 + 0x15c);
  _Y = *(float *)(param_1 + 0x164);
  fVar2 = *(float *)(param_1 + 0x168);
  fVar3 = *(float *)(param_1 + 0x160);
  fVar5 = _guard_xfg_dispatch_icall_nop((float)param_2 * fVar1 + fVar6,_Y);
  lVar4 = (longlong)((fVar5 + fVar2) * fVar3);
  if (lVar4 < 0) {
    lVar4 = 0x7fffffffffffffff;
  }
  else {
    fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 + fVar1,_Y);
    lVar4 = lVar4 - (longlong)((fVar6 + fVar2) * fVar3);
  }
  return lVar4;
}



// FUNCTION 140a32c20 FUN_140a32c20 body=105 status=ok
// SIG undefined FUN_140a32c20(void)

undefined8 FUN_140a32c20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_3 + 0x28);
  if (lVar1 != 0) {
    lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0xb8) != 0)) {
      uVar4 = FUN_14307daf0();
      return uVar4;
    }
  }
  return 0x3f800000;
}



// FUNCTION 140a32c90 FUN_140a32c90 body=14 status=ok
// SIG undefined FUN_140a32c90(void)

undefined8 * FUN_140a32c90(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0xc0);
  return param_2;
}



// FUNCTION 140a32ca0 FUN_140a32ca0 body=903 status=ok
// SIG undefined FUN_140a32ca0(void)

void FUN_140a32ca0(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_2[1] / *(float *)(param_1 + 0x510);
  fVar10 = 1.0;
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x498);
  fVar8 = (float)FRichCurve::Eval(uVar5,fVar8,0);
  fVar9 = param_2[1] / *(float *)(param_1 + 0x5b8);
  if (0.0 <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x540);
  fVar9 = (float)FRichCurve::Eval(uVar5,fVar9,0);
  if ((fVar9 == 0.0) || (*(char *)(param_1 + 0x5e8) != '\0')) {
    fVar7 = *param_2 / *(float *)(param_1 + 0x668);
    if (-1.0 <= fVar7) {
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = -1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  if (fVar7 <= 0.0) {
    if (0.0 <= fVar7) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = -1.0;
    }
  }
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x5f0);
  fVar6 = (float)FRichCurve::Eval(uVar5,ABS(fVar7),0);
  fVar7 = *(float *)(param_1 + 0x5d0);
  fVar1 = *(float *)(param_1 + 0x5d4);
  fVar2 = *(float *)(param_1 + 0x528);
  fVar3 = *(float *)(param_1 + 0x52c);
  fVar4 = *(float *)(param_1 + 0x680);
  fVar6 = fVar6 * fVar10;
  fVar10 = *(float *)(param_1 + 0x684);
  *(float *)(param_3 + 0x10) =
       fVar8 * *(float *)(param_1 + 0x524) + fVar9 * *(float *)(param_1 + 0x5cc) +
       fVar6 * *(float *)(param_1 + 0x67c) + *(float *)(param_3 + 0x10);
  *(float *)(param_3 + 0x14) =
       fVar2 * fVar8 + fVar7 * fVar9 + fVar4 * fVar6 + *(float *)(param_3 + 0x14);
  *(float *)(param_3 + 0x18) =
       fVar3 * fVar8 + fVar1 * fVar9 + fVar10 * fVar6 + *(float *)(param_3 + 0x18);
  fVar10 = *(float *)(param_1 + 0x5c4);
  fVar7 = *(float *)(param_1 + 0x5c8);
  fVar1 = *(float *)(param_1 + 0x51c);
  fVar2 = *(float *)(param_1 + 0x520);
  fVar3 = *(float *)(param_1 + 0x674);
  fVar4 = *(float *)(param_1 + 0x678);
  *(float *)(param_3 + 4) =
       fVar9 * *(float *)(param_1 + 0x5c0) + fVar8 * *(float *)(param_1 + 0x518) +
       fVar6 * *(float *)(param_1 + 0x670) + *(float *)(param_3 + 4);
  *(float *)(param_3 + 8) = fVar1 * fVar8 + fVar10 * fVar9 + fVar3 * fVar6 + *(float *)(param_3 + 8)
  ;
  *(float *)(param_3 + 0xc) =
       fVar2 * fVar8 + fVar7 * fVar9 + fVar4 * fVar6 + *(float *)(param_3 + 0xc);
  *(float *)(param_3 + 0x28) =
       fVar9 * *(float *)(param_1 + 0x5e4) + fVar8 * *(float *)(param_1 + 0x53c) +
       fVar6 * *(float *)(param_1 + 0x694) + *(float *)(param_3 + 0x28);
  *(float *)(param_3 + 0x20) =
       fVar9 * *(float *)(param_1 + 0x5dc) + fVar8 * *(float *)(param_1 + 0x534) +
       fVar6 * *(float *)(param_1 + 0x68c) + *(float *)(param_3 + 0x20);
  *(float *)(param_3 + 0x1c) =
       fVar9 * *(float *)(param_1 + 0x5d8) + fVar8 * *(float *)(param_1 + 0x530) +
       fVar6 * *(float *)(param_1 + 0x688) + *(float *)(param_3 + 0x1c);
  *(float *)(param_3 + 0x24) =
       fVar9 * *(float *)(param_1 + 0x5e0) + fVar8 * *(float *)(param_1 + 0x538) +
       fVar6 * *(float *)(param_1 + 0x690) + *(float *)(param_3 + 0x24);
  return;
}



// FUNCTION 140a33030 FUN_140a33030 body=609 status=ok
// SIG undefined FUN_140a33030(void)

void FUN_140a33030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1426970a0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468666a8) && (_Init_thread_header(&DAT_1468666a8), DAT_1468666a8 == -1)) {
    uVar1 = USoUIInputKeySelector::GetPrivateStaticClass();
    USoUIInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bShouldUpdateCarnivoraTiltBasedOnGround",1);
    DAT_1468666a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468666a8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468666a0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468666a0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468666a0 + 0x30));
  }
  if ((*piVar5 < DAT_1468666b8) && (_Init_thread_header(&DAT_1468666b8), DAT_1468666b8 == -1)) {
    uVar1 = USoUIInputKeySelector::GetPrivateStaticClass();
    USoUIInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DesiredHeightAboveGround",1);
    DAT_1468666b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468666b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468666b0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468666b0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468666b0 + 0x30));
  }
  if ((*piVar5 < DAT_1468666c8) && (_Init_thread_header(&DAT_1468666c8), DAT_1468666c8 == -1)) {
    uVar1 = USoUIInputKeySelector::GetPrivateStaticClass();
    USoUIInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InitialCarnivoraLocation",1);
    DAT_1468666c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468666c8);
  }
  if (0 < *(int *)(DAT_1468666c0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468666c0 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468666c0 + 0x30));
  }
  return;
}



// FUNCTION 140a332a0 FUN_140a332a0 body=155 status=ok
// SIG undefined FUN_140a332a0(void)

undefined8 FUN_140a332a0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = AActor::GetWorldSettings();
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x658), lVar2 != 0)) {
      lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
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
        if ((param_2 < 0) || (*(int *)(lVar2 + 0xc0) <= param_2)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + (longlong)param_2 * 8);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a33340 FUN_140a33340 body=1077 status=ok
// SIG undefined FUN_140a33340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140a33340(longlong param_1,float *param_2,longlong param_3,longlong param_4,
                     float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [224];
  
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x168);
  if (lVar5 == 0) {
    local_120 = (float)DAT_1464aa7b0;
    puVar6 = &local_128;
    local_128 = DAT_1464aa7a8;
  }
  else {
    puVar6 = (undefined8 *)FUN_142369f10(lVar5,&local_128);
  }
  local_118 = *puVar6;
  local_110 = *(undefined4 *)(puVar6 + 1);
  uVar7 = FRotationMatrix::MakeFromXZ(local_f8,&local_118,&DAT_1464aa798);
  pfVar8 = (float *)FMatrix::ToQuat(uVar7,local_108);
  fVar3 = *pfVar8;
  fVar9 = pfVar8[1];
  fVar10 = pfVar8[2];
  fVar11 = pfVar8[3];
  fVar16 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xe4);
  fVar18 = *(float *)(param_1 + 0x914) + *(float *)(param_1 + 0xe8);
  fVar13 = *(float *)(param_1 + 0x90c) + *(float *)(param_1 + 0xe0);
  fVar12 = *param_5;
  fVar14 = param_5[1];
  fVar15 = param_5[2];
  fVar17 = param_5[3];
  fVar20 = fVar3 * fVar17 * _DAT_1468660d0 + fVar11 * fVar12 + fVar9 * fVar15 * _DAT_1468660c0 +
           fVar10 * fVar14 * _DAT_1468660b0;
  fVar21 = fVar3 * fVar15 * fRam00000001468660d4 + fVar11 * fVar14 +
           fVar9 * fVar17 * fRam00000001468660c4 + fVar10 * fVar12 * fRam00000001468660b4;
  fVar22 = fVar3 * fVar14 * fRam00000001468660d8 + fVar11 * fVar15 +
           fVar9 * fVar12 * fRam00000001468660c8 + fVar10 * fVar17 * fRam00000001468660b8;
  fVar23 = fVar3 * fVar12 * fRam00000001468660dc + fVar11 * fVar17 +
           fVar9 * fVar14 * fRam00000001468660cc + fVar10 * fVar15 * fRam00000001468660bc;
  fVar12 = fVar18 * fVar21 - fVar16 * fVar22;
  fVar11 = fVar13 * fVar22 - fVar18 * fVar20;
  fVar12 = fVar12 + fVar12;
  fVar10 = fVar16 * fVar20 - fVar13 * fVar21;
  fVar11 = fVar11 + fVar11;
  fVar10 = fVar10 + fVar10;
  local_128 = *(undefined8 *)(param_4 + 4);
  fVar3 = *(float *)(param_4 + 0xc);
  local_120 = fVar3;
  fVar9 = (float)((ulonglong)local_128 >> 0x20);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x168);
  fVar14 = fVar3 * fVar21 - fVar9 * fVar22;
  fVar14 = fVar14 + fVar14;
  fVar19 = (float)local_128 * fVar22 - fVar3 * fVar20;
  fVar17 = fVar9 * fVar20 - (float)local_128 * fVar21;
  fVar19 = fVar19 + fVar19;
  fVar17 = fVar17 + fVar17;
  fVar15 = fVar14 * fVar23 + (float)local_128;
  if (lVar5 == 0) {
    local_110 = DAT_1468b5d98;
    puVar6 = &local_118;
    local_118 = _DAT_1468b5d90;
  }
  else {
    puVar6 = &local_128;
    local_120 = (float)*(undefined4 *)(lVar5 + 0x228);
    local_128 = *(undefined8 *)(lVar5 + 0x220);
  }
  uVar7 = *puVar6;
  fVar4 = *(float *)(puVar6 + 1);
  fVar1 = *(float *)(param_1 + 0x874);
  fVar2 = *(float *)(param_1 + 0x870);
  *param_2 = fVar15 + (fVar21 * fVar17 - fVar22 * fVar19) + (float)uVar7 +
             fVar23 * fVar12 + fVar13 + (fVar21 * fVar10 - fVar22 * fVar11) +
             *(float *)(param_1 + 0x86c);
  param_2[2] = fVar17 * fVar23 + fVar3 + (fVar20 * fVar19 - fVar14 * fVar21) + fVar4 +
               fVar23 * fVar10 + fVar18 + (fVar20 * fVar11 - fVar21 * fVar12) + fVar1;
  param_2[1] = (fVar22 * fVar14 - fVar20 * fVar17) + fVar19 * fVar23 + fVar9 +
               (float)((ulonglong)uVar7 >> 0x20) +
               fVar23 * fVar11 + fVar16 + (fVar22 * fVar12 - fVar20 * fVar10) + fVar2;
  return param_2;
}



// FUNCTION 140a33780 FUN_140a33780 body=152 status=ok
// SIG undefined FUN_140a33780(void)

int FUN_140a33780(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = FUN_142cc0880();
  iVar3 = FUN_142cc2730(uVar4);
  fVar7 = *(float *)(param_1 + 0x13c);
  fVar1 = *(float *)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x138);
  fVar6 = _guard_xfg_dispatch_icall_nop((float)iVar3,fVar7);
  fVar7 = _guard_xfg_dispatch_icall_nop(1.0,fVar7);
  iVar5 = (int)((fVar6 + fVar1) * fVar2) - (int)((fVar7 + fVar1) * fVar2);
  iVar3 = 0;
  if (-1 < iVar5) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// FUNCTION 140a33820 FUN_140a33820 body=21 status=ok
// SIG undefined FUN_140a33820(void)

void FUN_140a33820(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142cc0880();
  FUN_142cc2730(uVar1);
  return;
}



// FUNCTION 140a33840 FUN_140a33840 body=171 status=ok
// SIG undefined FUN_140a33840(void)

undefined8 * FUN_140a33840(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
    lVar1 = ATrap::GetActivationShapeComponent(param_2);
    if (lVar1 != 0) {
      FUN_142ff3000(lVar1,local_78);
      FUN_142ff5c90(local_78,param_1,1);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 140a338f0 FUN_140a338f0 body=902 status=ok
// SIG undefined FUN_140a338f0(void)

void FUN_140a338f0(longlong param_1,float param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_38;
  
  iVar8 = *(int *)(param_1 + 0x340);
  lVar6 = (longlong)iVar8;
  if (iVar8 < 2) {
    if (iVar8 < 1) {
      local_38 = (float)((uint)local_38 & 0xffffff00);
      param_3[0] = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x338);
      uVar2 = puVar1[1];
      *(undefined8 *)param_3 = *puVar1;
      *(undefined8 *)(param_3 + 2) = uVar2;
      local_38 = *(float *)(puVar1 + 2);
    }
    param_3[4] = local_38;
    return;
  }
  fVar15 = -3.4028235e+38;
  iVar11 = 0;
  fVar16 = 3.4028235e+38;
  iVar4 = -1;
  iVar8 = -1;
  lVar7 = 0;
  if (3 < lVar6) {
    pfVar10 = (float *)(*(longlong *)(param_1 + 0x338) + 0x28);
    lVar9 = (lVar6 - 4U >> 2) + 1;
    lVar7 = lVar9 * 4;
    do {
      fVar12 = pfVar10[-10] - param_2;
      iVar3 = iVar11;
      iVar5 = iVar11;
      if (fVar12 < 0.0) {
        fVar13 = fVar12 + 360.0;
        fVar14 = fVar12;
        if (fVar12 <= fVar15) {
          fVar14 = fVar15;
          iVar5 = iVar4;
        }
        fVar12 = fVar16;
        if (fVar13 < fVar16) goto LAB_140a339d2;
      }
      else {
        fVar13 = fVar12;
        if (fVar16 <= fVar12) {
          fVar13 = fVar16;
        }
        if (fVar16 <= fVar12) {
          iVar3 = iVar8;
        }
        fVar14 = fVar12 - 360.0;
        if (fVar12 - 360.0 <= fVar15) {
          fVar14 = fVar15;
          iVar5 = iVar4;
        }
LAB_140a339d2:
        iVar8 = iVar3;
        fVar12 = fVar13;
      }
      iVar4 = iVar11 + 1;
      fVar15 = pfVar10[-5] - param_2;
      iVar3 = iVar4;
      if (fVar15 < 0.0) {
        fVar13 = fVar15 + 360.0;
        fVar16 = fVar15;
        if (fVar15 <= fVar14) {
          fVar16 = fVar14;
          iVar3 = iVar5;
        }
        if (fVar13 < fVar12) goto LAB_140a33a2f;
      }
      else {
        fVar13 = fVar15;
        if (fVar12 <= fVar15) {
          fVar13 = fVar12;
        }
        if (fVar12 <= fVar15) {
          iVar4 = iVar8;
        }
        fVar16 = fVar15 - 360.0;
        if (fVar15 - 360.0 <= fVar14) {
          fVar16 = fVar14;
          iVar3 = iVar5;
        }
LAB_140a33a2f:
        iVar8 = iVar4;
        fVar12 = fVar13;
      }
      iVar4 = iVar11 + 2;
      fVar15 = *pfVar10 - param_2;
      iVar5 = iVar4;
      if (fVar15 < 0.0) {
        fVar13 = fVar15 + 360.0;
        fVar14 = fVar15;
        if (fVar15 <= fVar16) {
          fVar14 = fVar16;
          iVar5 = iVar3;
        }
        if (fVar13 < fVar12) goto LAB_140a33a8b;
      }
      else {
        fVar13 = fVar15;
        if (fVar12 <= fVar15) {
          fVar13 = fVar12;
        }
        if (fVar12 <= fVar15) {
          iVar4 = iVar8;
        }
        fVar14 = fVar15 - 360.0;
        if (fVar15 - 360.0 <= fVar16) {
          fVar14 = fVar16;
          iVar5 = iVar3;
        }
LAB_140a33a8b:
        iVar8 = iVar4;
        fVar12 = fVar13;
      }
      fVar13 = pfVar10[5] - param_2;
      iVar4 = iVar11 + 3;
      if (fVar13 < 0.0) {
        fVar15 = fVar13;
        if (fVar13 <= fVar14) {
          fVar15 = fVar14;
          iVar4 = iVar5;
        }
        fVar16 = fVar12;
        if (fVar13 + 360.0 < fVar12) {
          iVar8 = iVar11 + 3;
          fVar16 = fVar13 + 360.0;
        }
      }
      else {
        fVar16 = fVar13;
        if (fVar12 <= fVar13) {
          fVar16 = fVar12;
        }
        iVar3 = iVar11 + 3;
        if (fVar12 <= fVar13) {
          iVar3 = iVar8;
        }
        iVar8 = iVar3;
        fVar15 = fVar13 - 360.0;
        if (fVar13 - 360.0 <= fVar14) {
          fVar15 = fVar14;
          iVar4 = iVar5;
        }
      }
      iVar11 = iVar11 + 4;
      pfVar10 = pfVar10 + 0x14;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (lVar7 < lVar6) {
    lVar6 = lVar6 - lVar7;
    pfVar10 = (float *)(*(longlong *)(param_1 + 0x338) + lVar7 * 0x14);
    do {
      fVar12 = *pfVar10 - param_2;
      iVar3 = iVar11;
      iVar5 = iVar11;
      if (fVar12 < 0.0) {
        fVar14 = fVar12 + 360.0;
        if (fVar12 <= fVar15) {
          iVar5 = iVar4;
          fVar12 = fVar15;
        }
        iVar4 = iVar5;
        if (fVar14 < fVar16) goto LAB_140a33b69;
      }
      else {
        fVar13 = fVar12 - 360.0;
        fVar14 = fVar12;
        if (fVar16 <= fVar12) {
          iVar3 = iVar8;
          fVar14 = fVar16;
        }
        fVar12 = fVar15;
        if (fVar15 <= fVar13) {
          fVar12 = fVar13;
        }
        if (fVar13 <= fVar15) {
          iVar5 = iVar4;
        }
LAB_140a33b69:
        iVar8 = iVar3;
        fVar16 = fVar14;
        iVar4 = iVar5;
      }
      iVar11 = iVar11 + 1;
      pfVar10 = pfVar10 + 5;
      lVar6 = lVar6 + -1;
      fVar15 = fVar12;
    } while (lVar6 != 0);
  }
  lVar6 = *(longlong *)(param_1 + 0x338);
  lVar7 = (longlong)iVar4;
  lVar9 = (longlong)iVar8;
  fVar15 = *(float *)(lVar6 + lVar7 * 0x14);
  fVar16 = *(float *)(lVar6 + lVar9 * 0x14);
  if (fVar15 <= param_2) {
    if (fVar16 < param_2) {
      fVar16 = fVar16 + 360.0;
    }
  }
  else {
    fVar15 = fVar15 + -360.0;
  }
  *param_3 = param_2;
  fVar15 = (param_2 - fVar15) / (fVar16 - fVar15);
  param_3[3] = (*(float *)(lVar6 + 0xc + lVar9 * 0x14) - *(float *)(lVar6 + 0xc + lVar7 * 0x14)) *
               fVar15 + *(float *)(lVar6 + 0xc + lVar7 * 0x14);
  param_3[1] = (*(float *)(lVar6 + 4 + lVar9 * 0x14) - *(float *)(lVar6 + 4 + lVar7 * 0x14)) *
               fVar15 + *(float *)(lVar6 + 4 + lVar7 * 0x14);
  param_3[2] = (*(float *)(lVar6 + 8 + lVar9 * 0x14) - *(float *)(lVar6 + 8 + lVar7 * 0x14)) *
               fVar15 + *(float *)(lVar6 + 8 + lVar7 * 0x14);
  return;
}



// FUNCTION 140a33c80 FUN_140a33c80 body=1645 status=ok
// SIG undefined FUN_140a33c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a33c80(longlong *param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                  float param_6)

{
  bool bVar1;
  ulonglong uVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_328 [32];
  longlong **local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2e8;
  float local_2e0;
  float local_2d8 [4];
  longlong *local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [336];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  longlong local_e8;
  undefined1 local_d4;
  undefined1 local_cc;
  undefined1 local_c0;
  longlong local_a8;
  ulonglong local_88;
  
  if (param_2 == 0) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  lVar7 = param_1[0x2d];
  if (lVar7 == 0) {
    local_2e8 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_2e0 = DAT_1468b5d98;
  }
  else {
    local_2e8 = *(longlong **)(lVar7 + 0x220);
    local_2e0 = *(float *)(lVar7 + 0x228);
  }
  fVar19 = SUB84(local_2e8,0);
  if (((SUB84(local_2e8,0) == DAT_1468b5d90) &&
      (fVar19 = local_2e8._4_4_, local_2e8._4_4_ == DAT_1468b5d94)) &&
     (fVar19 = local_2e0, local_2e0 == DAT_1468b5d98)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_2b8 = param_2;
  if ((*(char *)((longlong)param_1 + 0x554) != '\0') &&
     (pfVar5 = (float *)(**(code **)(*param_1 + 0x308))(fVar19,&local_2c8),
     *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] < 1.0)) {
    return;
  }
  fVar19 = param_4[1] - param_3[1];
  fVar21 = *param_4 - *param_3;
  fVar17 = fVar19 * fVar19 + fVar21 * fVar21;
  if (fVar17 == 1.0) {
    fVar20 = fVar19;
    fVar22 = fVar21;
    fVar16 = param_4[2] - param_3[2];
    if (param_4[2] - param_3[2] == 0.0) goto LAB_140a33e9d;
  }
  else {
    fVar20 = DAT_1468b5d94;
    fVar22 = DAT_1468b5d90;
    fVar16 = DAT_1468b5d98;
    if (fVar17 < 1e-08) goto LAB_140a33e9d;
    auVar18 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    local_2d8[0] = auVar18._0_4_;
    local_2d8[0] = local_2d8[0] + local_2d8[0] * (0.5 - fVar17 * 0.5 * local_2d8[0] * local_2d8[0]);
    local_2d8[0] = local_2d8[0] + local_2d8[0] * (0.5 - fVar17 * 0.5 * local_2d8[0] * local_2d8[0]);
    fVar19 = local_2d8[0] * fVar19;
    fVar21 = fVar21 * local_2d8[0];
  }
  fVar20 = fVar19;
  fVar22 = fVar21;
  fVar16 = 0.0;
LAB_140a33e9d:
  fVar19 = fVar20 * param_5[1] + fVar22 * *param_5 + fVar16 * param_5[2];
  if (*(char *)((longlong)param_1 + 0x555) != '\0') {
    local_2d8[0] = DAT_1464aa73c;
    if (param_6 < fVar19) {
      local_2d8[0] = DAT_1464aa738;
    }
    puVar6 = (undefined8 *)FLinearColor::FLinearColor(&local_2a8,local_2d8);
    local_2e8 = *(longlong **)param_3;
    local_2c8 = (longlong *)*puVar6;
    uStack_2c0 = puVar6[1];
    local_2e0 = param_3[2];
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    local_308 = &local_2c8;
    local_2f8 = 0x40a00000;
    local_300 = 0x42b40000;
    AK::MemoryMgr::StartProfileThreadUsage(lVar3);
    puVar6 = (undefined8 *)FLinearColor::FLinearColor(&local_2a8,local_2d8);
    local_2e8 = *(longlong **)param_4;
    local_2c8 = (longlong *)*puVar6;
    uStack_2c0._0_4_ = *(int *)(puVar6 + 1);
    uStack_2c0._4_4_ = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_2e0 = param_4[2];
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    local_2f8 = 0x40a00000;
    local_300 = 0x42b40000;
    local_308 = &local_2c8;
    AK::MemoryMgr::StartProfileThreadUsage(lVar3);
    puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_298,local_2d8);
    local_2e8 = *(longlong **)param_3;
    local_2a8 = *puVar6;
    uStack_2a0 = puVar6[1];
    local_2e0 = param_3[2];
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,param_4[2]);
    local_2c8 = *(longlong **)param_4;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    local_2f8 = 0x40a00000;
    local_300 = 0x42b40000;
    local_308 = (longlong **)&local_2a8;
    AK::MemoryMgr::StartProfileThreadUsage(lVar3);
  }
  if (param_6 < fVar19) {
    uVar12 = 0;
    local_2c8 = (longlong *)0x0;
    uStack_2c0 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    plVar15 = local_2c8;
    *local_2c8 = param_2;
    lVar7 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_141223c50(param_2,&local_2e8,0);
      uVar14 = (ulonglong)((longlong)(local_2e8 + (int)local_2e0) + (7 - (longlong)local_2e8)) >> 3;
      if (local_2e8 + (int)local_2e0 < local_2e8) {
        uVar14 = uVar12;
      }
      plVar11 = local_2e8;
      if (uVar14 != 0) {
        do {
          uVar2 = uStack_2c0;
          lVar13 = (longlong)(int)uStack_2c0;
          lVar7 = *plVar11;
          iVar4 = (int)uStack_2c0 + 1;
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,iVar4);
          if (uStack_2c0._4_4_ < iVar4) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_2c8,uVar2 & 0xffffffff);
            plVar15 = local_2c8;
          }
          plVar11 = plVar11 + 1;
          plVar15[lVar13] = lVar7;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar14);
      }
      param_2 = local_2b8;
      if (local_2e8 != (longlong *)0x0) {
        FMemory::Free(local_2e8);
        param_2 = local_2b8;
      }
    }
    if (*(char *)((longlong)param_1 + 0x556) != '\0') {
      lVar7 = (longlong)(int)uStack_2c0;
      for (plVar11 = plVar15; plVar11 != plVar15 + lVar7; plVar11 = plVar11 + 1) {
        plVar10 = (longlong *)*plVar11;
        if (plVar10 == (longlong *)0x0) {
LAB_140a341c1:
          uVar9 = UScrollBox::GetPrivateStaticClass();
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x628))(plVar10,uVar9);
          if (plVar10 != (longlong *)0x0) {
            local_308 = (longlong **)((ulonglong)local_308 & 0xffffffffffffff00);
            FUN_140a7aa40(local_288,param_2,param_1[0x23],0);
            fVar19 = (float)(**(code **)(*plVar10 + 0x408))(plVar10);
            FUN_142d32ae0(local_288,fVar19 * 100.0,0);
            if (local_a8 != 0) {
              FMemory::Free();
            }
            local_c0 = 0;
            local_cc = 0;
            local_d4 = 0;
            if (local_e8 != 0) {
              FMemory::Free();
            }
            if (local_108 != 0) {
              plVar10 = local_138;
              if (local_118 != (longlong *)0x0) {
                plVar10 = local_118;
              }
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x10))(plVar10,0);
              }
            }
            if (local_118 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
        else {
          lVar8 = FUN_1413f82e0();
          lVar13 = plVar10[2];
          if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140a341c1;
          (**(code **)(*plVar10 + 0xbc8))(plVar10,CONCAT71((int7)((ulonglong)lVar13 >> 8),3));
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
      FMemory::Free(plVar15);
    }
  }
  return;
}



// FUNCTION 140a34300 FUN_140a34300 body=256 status=ok
// SIG undefined FUN_140a34300(void)

undefined8 FUN_140a34300(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return *(undefined8 *)(lVar1 + 0x668);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar1 != 0) {
    lVar4 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_18 = (undefined8 *)0x0;
      local_10 = 0;
      FUN_140a24180(lVar1,&local_18,0);
      if (0 < (int)local_10) {
        uVar2 = *local_18;
        FMemory::Free();
        return uVar2;
      }
      if (local_18 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return 0;
}



// FUNCTION 140a34400 FUN_140a34400 body=197 status=ok
// SIG undefined FUN_140a34400(void)

ulonglong FUN_140a34400(float *param_1,float *param_2,float *param_3)

{
  ulonglong uVar1;
  
  uVar1 = UIndianaMathStatics::GetAngleBetweenVectors();
  if ((*param_1 * param_3[2] - *param_3 * param_1[2]) * param_2[1] +
      (param_3[1] * param_1[2] - param_3[2] * param_1[1]) * *param_2 +
      (*param_3 * param_1[1] - *param_1 * param_3[1]) * param_2[2] < 0.0) {
    uVar1 = uVar1 ^ 0x8000000080000000;
  }
  return uVar1;
}



// FUNCTION 140a344f0 GetUnitAxes body=610 status=ok
// SIG undefined GetUnitAxes(void)

void FMatrix::GetUnitAxes(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  *param_3 = param_1[4];
  param_3[1] = param_1[5];
  param_3[2] = param_1[6];
  *param_4 = param_1[8];
  param_4[1] = param_1[9];
  param_4[2] = param_1[10];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (1e-08 < fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    *param_2 = fVar1 * fVar5;
    param_2[1] = fVar2 * fVar5;
    param_2[2] = fVar3 * fVar5;
  }
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (1e-08 < fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    *param_3 = fVar2 * fVar5;
    param_3[1] = fVar1 * fVar5;
    param_3[2] = fVar3 * fVar5;
  }
  fVar1 = param_4[1];
  fVar2 = *param_4;
  fVar3 = param_4[2];
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (1e-08 < fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    *param_4 = fVar2 * fVar5;
    param_4[1] = fVar1 * fVar5;
    param_4[2] = fVar3 * fVar5;
  }
  return;
}



// FUNCTION 140a34760 FUN_140a34760 body=535 status=ok
// SIG undefined FUN_140a34760(void)

undefined4 * FUN_140a34760(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined1 local_res20;
  char local_res21;
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (param_3 != (longlong *)0x0) {
    lVar4 = ALevelScriptActor::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((**(code **)(*param_3 + 0x410))(param_3,&local_30), local_30 != 0)) {
      uVar5 = 0;
      local_20 = 0;
      uStack_18 = 0;
      local_10 = 0;
      if ((*(longlong *)(local_30 + 0x28) != 0) &&
         ((local_28 != 0 && (*(int *)(local_30 + 0x38) != *(int *)(local_30 + 100))))) {
        lVar4 = *(longlong *)(local_30 + 0x70);
        if (*(longlong *)(local_30 + 0x70) == 0) {
          lVar4 = local_30 + 0x68;
        }
        iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)local_28 >> 0x20) + (int)local_28) &
                                 (longlong)*(int *)(local_30 + 0x78) - 1U) * 4);
        if (iVar2 != -1) {
          lVar4 = *(longlong *)(local_30 + 0x30);
          do {
            lVar8 = (longlong)iVar2;
            if (*(longlong *)(lVar4 + lVar8 * 0x18) == local_28) {
              if (((iVar2 != -1) && (lVar4 = lVar4 + lVar8 * 0x18, lVar4 != 0)) &&
                 (puVar7 = (undefined8 *)(lVar4 + 8), puVar7 != (undefined8 *)0x0)) {
                uVar5 = *puVar7;
              }
              break;
            }
            iVar2 = *(int *)(lVar4 + 0x10 + lVar8 * 0x18);
          } while (iVar2 != -1);
        }
      }
      FUN_1424ab540(&local_res20,&DAT_146866478,1,&local_20,*(longlong *)(local_30 + 0x28),uVar5,0);
      if (local_res21 == '\0') {
        pbVar6 = (byte *)FUN_140a245e0(&local_20,local_38);
        if (pbVar6[1] == 0) {
          bVar10 = 0;
        }
        else {
          bVar10 = *pbVar6;
        }
        if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
          lVar4 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == 0) {
            lVar4 = param_1 + 0x60;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x70) - 1U & (ulonglong)bVar10) * 4
                          );
          if (iVar2 != -1) {
            lVar4 = *(longlong *)(param_1 + 0x28);
            do {
              lVar8 = (longlong)iVar2;
              if (*(byte *)(lVar4 + lVar8 * 0x10) == bVar10) {
                if (((iVar2 != -1) && (lVar4 = lVar8 * 0x10 + lVar4, lVar4 != 0)) &&
                   (puVar9 = (undefined4 *)(lVar4 + 4), puVar9 != (undefined4 *)0x0)) {
                  *(undefined1 *)(param_2 + 2) = 0xff;
                  uVar3 = *puVar9;
                  goto LAB_140a34940;
                }
                break;
              }
              iVar2 = *(int *)(lVar4 + 8 + lVar8 * 0x10);
            } while (iVar2 != -1);
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 2) = 0xff;
  uVar3 = *(undefined4 *)(param_1 + 0x78);
LAB_140a34940:
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140a34980 FUN_140a34980 body=29 status=ok
// SIG undefined FUN_140a34980(void)

undefined8 FUN_140a34980(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  return param_2;
}



// FUNCTION 140a349a0 FUN_140a349a0 body=216 status=ok
// SIG undefined FUN_140a349a0(void)

float * FUN_140a349a0(longlong param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        iVar2 = FUN_140cb6340(param_3);
        *param_2 = (float)iVar2;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      if (*(char *)(param_1 + 0x28) == '\x01') {
        iVar2 = FUN_140cb6910(param_3);
        *param_2 = (float)iVar2;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  return param_2;
}



// FUNCTION 140a34a80 FUN_140a34a80 body=197 status=ok
// SIG undefined FUN_140a34a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140a34a80(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 8) = 0xff;
  if ((((param_2 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) &&
      (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 != 0)) &&
     (((iVar1 = FHTTPChunkInstall::GetInstallSpeed(lVar2), 1 < iVar1 &&
       (param_3 = param_4, iVar1 != 2)) && (param_3 = param_6, iVar1 == 3)))) {
    param_3 = param_5;
  }
  uVar3 = FUN_142caac20(param_3,local_58,param_2);
  FUN_140a2f480(param_1,uVar3);
  return param_1;
}



// FUNCTION 140a34b50 FUN_140a34b50 body=86 status=ok
// SIG undefined FUN_140a34b50(void)

undefined4 FUN_140a34b50(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (param_2 == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 != DAT_1468c21c0) {
        return puVar1[1];
      }
    }
  }
  return *puVar1;
}



// FUNCTION 140a34bb0 FUN_140a34bb0 body=286 status=ok
// SIG undefined FUN_140a34bb0(void)

longlong FUN_140a34bb0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar3 != 0) {
    lVar2 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar3 != 0) {
    lVar2 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(lVar3 + 0x538);
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar3 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140c41820(lVar3);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140a34cd0 FUN_140a34cd0 body=683 status=ok
// SIG undefined FUN_140a34cd0(void)

float FUN_140a34cd0(undefined8 param_1,float *param_2,float *param_3)

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
  
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar1 = fVar3 + fVar3;
  fVar5 = param_3[3];
  fVar2 = fVar4 + fVar4;
  fVar10 = *param_3;
  fVar7 = -fVar10 + -fVar10;
  fVar6 = fVar1 * fVar5 - fVar7 * fVar4;
  fVar14 = fVar7 * fVar5 + fVar1 * fVar4;
  fVar8 = (fVar7 * fVar10 - fVar1 * fVar3) + 1.0;
  fVar1 = fVar14 * param_2[1] + fVar6 * *param_2 + fVar8 * param_2[2];
  fVar9 = -fVar3 + -fVar3;
  fVar13 = fVar1 * fVar8 - param_2[2];
  fVar12 = fVar1 * fVar6 - *param_2;
  fVar11 = fVar1 * fVar14 - param_2[1];
  fVar7 = (fVar9 * fVar3 - fVar2 * fVar4) + 1.0;
  fVar1 = fVar5 * fVar2 - fVar9 * fVar10;
  fVar10 = fVar9 * fVar5 + fVar2 * fVar10;
  fVar5 = fVar1 * fVar13 - fVar10 * fVar11;
  fVar4 = fVar10 * fVar12 - fVar7 * fVar13;
  fVar3 = fVar7 * fVar11 - fVar1 * fVar12;
  fVar3 = (float)FGenericPlatformMath::Atan2
                           (SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3),
                            fVar7 * fVar12 + fVar1 * fVar11 + fVar10 * fVar13);
  if ((fVar10 * fVar14 - fVar1 * fVar8) * fVar12 + (fVar7 * fVar8 - fVar10 * fVar6) * fVar11 +
      (fVar1 * fVar6 - fVar7 * fVar14) * fVar13 < 0.0) {
    fVar3 = -fVar3;
  }
  return fVar3 * 57.295776;
}



// FUNCTION 140a34f80 FUN_140a34f80 body=69 status=ok
// SIG undefined FUN_140a34f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a34f80(longlong param_1,undefined8 *param_2)

{
  if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x458))();
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 140a34fd0 FUN_140a34fd0 body=414 status=ok
// SIG undefined FUN_140a34fd0(void)

longlong * FUN_140a34fd0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar2 = FUN_14148cad0();
  lVar4 = param_2[2];
  if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar3 = (longlong *)FUN_141227a00(param_2,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
    if (plVar3 != (longlong *)0x0) {
      lVar4 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return plVar3;
      }
    }
    return (longlong *)0x0;
  }
  lVar4 = FUN_1414bbb50();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
    return plVar3;
  }
  lVar4 = FUN_14291fb80();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar3 = (longlong *)0x0;
    if (bVar1) {
      plVar3 = param_2;
    }
    return plVar3;
  }
  plVar3 = (longlong *)FUN_140a34fd0(param_1,param_2[0x91]);
  return plVar3;
}



// FUNCTION 140a35170 FUN_140a35170 body=815 status=ok
// SIG undefined FUN_140a35170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a35170(longlong param_1,longlong param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  longlong *local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [64];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)FUN_140a34fd0();
  if (plVar5 == (longlong *)0x0) {
    if (*(longlong *)(param_2 + 0x168) == 0) {
      puVar8 = (undefined8 *)&DAT_1468b5b70;
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x168) + 0x210);
    }
    uVar3 = *(undefined4 *)((longlong)puVar8 + 0x14);
    local_f8 = *(undefined4 *)(puVar8 + 3);
    uVar7 = *puVar8;
    uVar4 = puVar8[1];
    *param_3 = *(undefined4 *)(puVar8 + 2);
    param_3[1] = uVar3;
    param_3[2] = local_f8;
    *(undefined8 *)param_4 = uVar7;
    *(undefined8 *)(param_4 + 2) = uVar4;
  }
  else {
    FUN_1423111b0(&local_78,plVar5,*(undefined8 *)(param_1 + 0x130));
    local_e8 = local_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    local_114 = uStack_60;
    *param_3 = local_68;
    param_3[1] = uStack_64;
    param_3[2] = uStack_60;
    local_11c = local_68;
    uStack_118 = uStack_64;
    *param_4 = local_78;
    param_4[1] = fStack_74;
    param_4[2] = fStack_70;
    param_4[3] = fStack_6c;
    local_d8 = local_78;
    fStack_d4 = fStack_74;
    fStack_d0 = fStack_70;
    fStack_cc = fStack_6c;
    if (*(longlong *)(param_1 + 0x150) == 0) {
      local_f0 = FUN_142e27720();
      lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,local_f0);
      *(longlong *)(param_1 + 0x150) = lVar6;
      if (lVar6 == 0) goto LAB_140a35394;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866688) &&
       (_Init_thread_header(&DAT_146866688), DAT_146866688 == -1)) {
      FName::FName(&DAT_146866680,L"FullBody",1);
      _Init_thread_footer(&DAT_146866688);
    }
    FUN_142c6e430(*(undefined8 *)(param_1 + 0x150),&local_110,DAT_146866680);
    if (local_110 == (longlong *)0x0) {
      fVar9 = *(float *)(param_1 + 0x1c4) / *(float *)(param_1 + 0x148);
      fVar11 = 0.0;
      if ((0.0 <= fVar9) && (fVar11 = fVar9, 1.0 <= fVar9)) {
        fVar11 = 1.0;
      }
      if (*(float *)(param_1 + 0x1c0) <= fVar11 && fVar11 != *(float *)(param_1 + 0x1c0)) {
        *(float *)(param_1 + 0x1c0) = fVar11;
      }
    }
    else {
      fVar9 = (float)FUN_142c70270(local_110);
      fVar10 = (float)(**(code **)(*local_110 + 0x60))(local_110);
      fVar11 = *(float *)(param_1 + 0x1c0);
      if (*(float *)(param_1 + 0x1c0) < fVar9 / fVar10) {
        fVar11 = fVar9 / fVar10;
      }
      fVar9 = 0.0;
      if ((0.0 <= fVar11) && (fVar9 = fVar11, 1.0 <= fVar11)) {
        fVar9 = 1.0;
      }
      *(float *)(param_1 + 0x1c0) = fVar9;
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_108 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
  }
LAB_140a35394:
  fVar11 = param_4[2];
  fVar10 = -param_4[1];
  fVar10 = fVar10 + fVar10;
  fVar9 = fVar11 + fVar11;
  local_128 = (fVar10 * param_4[1] - fVar9 * fVar11) + 1.0;
  local_124 = fVar9 * param_4[3] - fVar10 * *param_4;
  local_120 = fVar10 * param_4[3] + fVar9 * *param_4;
  uVar7 = FRotationMatrix::MakeFromZX(local_b8,&DAT_1464aa798,&local_128);
  puVar8 = (undefined8 *)FMatrix::ToQuat(uVar7,local_c8);
  uVar7 = puVar8[1];
  *(undefined8 *)param_4 = *puVar8;
  *(undefined8 *)(param_4 + 2) = uVar7;
  return;
}



// FUNCTION 140a354a0 FUN_140a354a0 body=2771 status=ok
// SIG undefined FUN_140a354a0(void)

void FUN_140a354a0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  float *param_5)

{
  float *pfVar1;
  longlong **pplVar2;
  undefined4 uVar3;
  longlong lVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res10 [2];
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  float local_d0;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return;
  }
  lVar7 = param_3[0x24];
  lVar9 = *(longlong *)(param_2 + 200);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_3);
  }
  if (lVar9 != lVar7) {
    return;
  }
  if (*(longlong *)(param_2 + 0xd0) == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0xc0) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0xd8) != '\0') {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x210) == 0) {
    return;
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  if ((((*(char *)(*(longlong *)(param_1 + 0x90) + 0xa0) == '\0') ||
       (*(longlong *)(param_1 + 0x50) == 0)) || (*(longlong *)(param_1 + 0x60) == 0)) ||
     ((*(longlong *)(param_1 + 0x70) == 0 || (*(longlong *)(param_1 + 0x80) == 0)))) {
    if ((*(longlong *)(param_1 + 8) != 0) && (*(int *)(param_2 + 0x50) != 0)) {
      lVar7 = param_3[0x24];
      lVar9 = *(longlong *)(param_2 + 200);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_3);
      }
      if (lVar9 == lVar7) {
        local_d0 = *(float *)(param_3 + 0x5d);
        pplVar2 = (longlong **)param_3[0x5c];
        fVar21 = *(float *)(param_1 + 0x10);
        if (0.0001 < *(float *)(param_1 + 0x18)) {
          local_d8._0_4_ = SUB84(pplVar2,0);
          local_d8._4_4_ = (float)((ulonglong)pplVar2 >> 0x20);
          lVar7 = *(longlong *)(param_2 + 0x40);
          if (*(longlong *)(param_2 + 0x40) == 0) {
            lVar7 = param_2;
          }
          local_d8._0_4_ = (float)local_d8 - *(float *)(lVar7 + 0x10);
          local_d8._4_4_ = local_d8._4_4_ - *(float *)(lVar7 + 0x14);
          fVar14 = local_d0 - *(float *)(lVar7 + 0x18);
          fVar20 = SQRT(local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8 +
                        fVar14 * fVar14) * (1.0 / *(float *)(param_1 + 0x18));
          fVar14 = 0.0;
          if ((0.0 <= fVar20) && (fVar14 = fVar20, 1.0 <= fVar20)) {
            fVar14 = 1.0;
          }
          fVar21 = fVar14 * (fVar21 - *(float *)(param_1 + 0x14)) + *(float *)(param_1 + 0x14);
        }
        lVar7 = *(longlong *)(param_1 + 8);
        iVar6 = (int)param_4[1];
        lVar9 = (longlong)iVar6;
        *(int *)(param_4 + 1) = iVar6 + 1;
        local_d8 = pplVar2;
        if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
        }
        lVar4 = *param_4;
        uVar3 = *(undefined4 *)(lVar7 + 0x28);
        *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar21;
        *(float *)(lVar4 + 8 + lVar9 * 0xc) = 1.0 - fVar21;
        *(undefined4 *)(lVar4 + lVar9 * 0xc) = uVar3;
      }
    }
    goto LAB_140a35f1f;
  }
  lVar7 = (**(code **)(*param_3 + 0x548))(param_3);
  pfVar10 = *(float **)(param_2 + 0x290);
  if (*(float **)(param_2 + 0x290) == (float *)0x0) {
    pfVar10 = (float *)(param_2 + 0x150);
  }
  pfVar1 = pfVar10 + (longlong)*(int *)(param_2 + 0x298) * 10;
  for (; (pfVar11 = (float *)0x0, pfVar10 != pfVar1 &&
         (pfVar11 = pfVar10, *(longlong *)pfVar10 != lVar7)); pfVar10 = pfVar10 + 10) {
  }
  pfVar10 = pfVar11 + 2;
  if (pfVar11 == (float *)0x0) {
    pfVar10 = (float *)0x0;
  }
  if (pfVar10 == (float *)0x0) goto LAB_140a35f1f;
  fVar21 = SQRT(*(float *)(param_2 + 300));
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0xc0);
  if (lVar7 == 0) {
    fVar14 = 1.0;
  }
  else {
    fVar14 = (float)FRichCurve::Eval(lVar7 + 0x30,*(undefined4 *)((longlong)param_3 + 0x2d4),
                                     0x3f800000);
  }
  fVar14 = fVar14 * *(float *)(param_2 + 100);
  fVar15 = (float)FUN_140a37090(*pfVar10);
  lVar7 = *(longlong *)(param_1 + 0x90);
  fVar19 = (1.0 - *(float *)(lVar7 + 200)) * fVar15;
  fVar20 = *(float *)(lVar7 + 200) * *(float *)(param_2 + 100) + fVar15;
  if (fVar19 <= fVar20) {
    fVar20 = fVar19;
  }
  if (fVar20 <= fVar15) {
    fVar20 = fVar15;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FRichCurve::Eval(*(longlong *)(param_1 + 0x30) + 0x30,fVar21,
                     *(float *)(lVar7 + 0xa4) * *(float *)(param_2 + 0x6c));
    lVar7 = *(longlong *)(param_1 + 0x90);
  }
  fVar19 = 0.0;
  if (fVar20 < 0.0) {
    fVar20 = fVar20 * *(float *)(lVar7 + 0xa4) * *(float *)(param_2 + 0x6c);
  }
  fVar16 = (float)FUN_140a37090(pfVar10[1]);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0xb0);
  fVar16 = fVar14 * *(float *)(*(longlong *)(param_1 + 0x90) + 0xcc) + fVar16 + (fVar20 - fVar15);
  if (lVar7 != 0) {
    fVar16 = (float)FRichCurve::Eval(lVar7 + 0x30,fVar16,fVar16);
  }
  fVar16 = _guard_xfg_dispatch_icall_nop(10.0,fVar16 * 0.05);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = (float)FRichCurve::Eval(*(longlong *)(param_1 + 0x38) + 0x30,
                                     *(undefined4 *)((longlong)param_3 + 0x2d4),0);
  }
  if (0.0 <= fVar21) {
    fVar18 = *(float *)(param_1 + 0x48);
    if (fVar21 <= *(float *)(param_1 + 0x48)) {
      fVar18 = fVar21;
    }
  }
  else {
    fVar18 = 0.0;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (float)FRichCurve::Eval(*(longlong *)(param_1 + 0x40) + 0x30,fVar18,0);
  }
  fVar18 = (float)FUN_140a37090(pfVar10[2]);
  lVar7 = *(longlong *)(param_1 + 0x90);
  fVar14 = fVar14 * *(float *)(lVar7 + 0xd0) + fVar18 + (fVar20 - fVar15) + fVar21 * fVar17;
  if (*(longlong *)(lVar7 + 0xb8) != 0) {
    fVar14 = (float)FRichCurve::Eval(*(longlong *)(lVar7 + 0xb8) + 0x30,fVar14,fVar14);
    lVar7 = *(longlong *)(param_1 + 0x90);
  }
  fVar21 = _guard_xfg_dispatch_icall_nop(10.0,(fVar20 - fVar21 * fVar17) * 0.05);
  fVar20 = *(float *)(lVar7 + 0xa8) - *(float *)(lVar7 + 0xac);
  if (1e-08 < ABS(fVar20)) {
    fVar20 = (*pfVar10 - *(float *)(lVar7 + 0xac)) / fVar20;
    if (0.0 <= fVar20) goto LAB_140a358b3;
    fVar20 = 0.0;
  }
  else {
    if (*pfVar10 < *(float *)(lVar7 + 0xa8)) {
      fVar20 = 0.0;
    }
    else {
      fVar20 = 1.0;
    }
LAB_140a358b3:
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
  }
  fVar15 = *(float *)(param_3 + 0x5a);
  if (fVar15 <= 0.0001) {
    fVar15 = 0.0;
  }
  else if (0.0 <= fVar16) {
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    fVar15 = fVar16 / fVar15;
  }
  else {
    fVar15 = 0.0 / fVar15;
  }
  fVar15 = fVar15 * fVar21;
  fVar17 = fVar20 * fVar21;
  fVar16 = fVar15;
  if (fVar15 <= fVar17) {
    fVar16 = fVar17;
  }
  if (0.0 <= fVar16) {
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    if (0.0001 < fVar16) {
      fVar17 = fVar17 * (1.0 / fVar16);
      fVar15 = fVar15 * (1.0 / fVar16);
    }
  }
  else {
    fVar16 = 0.0;
  }
  if (local_res10 != param_5) {
    *param_5 = fVar16;
    *(undefined1 *)(param_5 + 1) = 1;
  }
  local_e8 = (**(code **)(*param_3 + 0x548))(param_3);
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x210);
  plVar13 = (longlong *)(lVar7 + 0xd0);
  if (*(int *)(lVar7 + 0xd8) != *(int *)(lVar7 + 0x104)) {
    lVar9 = *(longlong *)(lVar7 + 0x110);
    if (*(longlong *)(lVar7 + 0x110) == 0) {
      lVar9 = lVar7 + 0x108;
    }
    iVar6 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)local_e8 >> 0x20) * 0x17 + (int)local_e8)
                             & (longlong)*(int *)(lVar7 + 0x118) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar6 * 0x60 + *plVar13);
        if (*plVar8 == local_e8) {
          if ((iVar6 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_140a35a2c;
          break;
        }
        iVar6 = (int)plVar8[0xb];
      } while (iVar6 != -1);
    }
  }
  local_e0 = &local_e8;
  FUN_140a23a70(plVar13,local_res10,&local_e0,0);
  plVar8 = (longlong *)((longlong)(int)local_res10[0] * 0x60 + *plVar13);
LAB_140a35a2c:
  plVar13 = plVar8 + 1;
  local_e0 = *(longlong **)(param_2 + 0xd0);
  if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
    plVar12 = (longlong *)plVar8[9];
    if ((longlong *)plVar8[9] == (longlong *)0x0) {
      plVar12 = plVar8 + 8;
    }
    iVar6 = *(int *)((longlong)plVar12 +
                    ((longlong)((int)((ulonglong)local_e0 >> 0x20) * 0x17 + (int)local_e0) &
                    (longlong)(int)plVar8[10] - 1U) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *plVar13 + (longlong)iVar6 * 0x28;
        if (*(longlong **)(*plVar13 + (longlong)iVar6 * 0x28) == local_e0) {
          if ((iVar6 != -1) && (lVar7 != 0)) goto LAB_140a35ada;
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x20);
      } while (iVar6 != -1);
    }
  }
  local_d8 = &local_e0;
  FUN_140a23760(plVar13,local_res10,&local_d8,0);
  lVar7 = *plVar13 + (longlong)(int)local_res10[0] * 0x28;
LAB_140a35ada:
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_2 + 0xd0);
  *(float *)(lVar7 + 0x10) = pfVar10[4];
  fVar16 = pfVar10[5];
  *(float *)(lVar7 + 0x18) = fVar17;
  *(float *)(lVar7 + 0x1c) = fVar15;
  *(float *)(lVar7 + 0x14) = fVar16;
  fVar21 = fVar21 * (1.0 - fVar20);
  fVar20 = _guard_xfg_dispatch_icall_nop(10.0,(fVar14 + *(float *)(param_1 + 0x4c)) * 0.05);
  fVar14 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x78);
  if (1e-08 < ABS(fVar14)) {
    fVar14 = (pfVar10[3] - *(float *)(param_1 + 0x78)) / fVar14;
    fVar15 = fVar19;
    if (0.0 <= fVar14) goto LAB_140a35b6d;
  }
  else {
    fVar14 = fVar19;
    if (*(float *)(param_1 + 0x88) <= pfVar10[3]) {
      fVar14 = 1.0;
    }
LAB_140a35b6d:
    fVar15 = fVar14;
    if (1.0 <= fVar14) {
      fVar15 = 1.0;
    }
  }
  fVar14 = *(float *)((longlong)param_3 + 0x2d4);
  fVar16 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 0x7c) * 0.05);
  iVar6 = (int)param_4[1];
  lVar9 = (longlong)iVar6;
  lVar7 = *(longlong *)(param_1 + 0x70);
  *(int *)(param_4 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
  }
  lVar4 = *param_4;
  uVar3 = *(undefined4 *)(lVar7 + 0x28);
  *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar16 * fVar14 * (1.0 - fVar15) * fVar20;
  *(float *)(lVar4 + 8 + lVar9 * 0xc) = fVar21;
  *(undefined4 *)(lVar4 + lVar9 * 0xc) = uVar3;
  fVar16 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 0x8c) * 0.05);
  iVar6 = (int)param_4[1];
  lVar9 = (longlong)iVar6;
  lVar7 = *(longlong *)(param_1 + 0x80);
  *(int *)(param_4 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
  }
  lVar4 = *param_4;
  uVar3 = *(undefined4 *)(lVar7 + 0x28);
  *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar16 * (1.0 - (1.0 - fVar15)) * fVar14 * fVar20;
  *(float *)(lVar4 + 8 + lVar9 * 0xc) = fVar21;
  *(undefined4 *)(lVar4 + lVar9 * 0xc) = uVar3;
  fVar14 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x58);
  if (1e-08 < ABS(fVar14)) {
    fVar14 = (pfVar10[3] - *(float *)(param_1 + 0x58)) / fVar14;
    if (0.0 <= fVar14) goto LAB_140a35ccd;
  }
  else {
    if (pfVar10[3] < *(float *)(param_1 + 0x68)) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 1.0;
    }
LAB_140a35ccd:
    fVar19 = fVar14;
    if (1.0 <= fVar14) {
      fVar19 = 1.0;
    }
  }
  fVar15 = 1.0 - *(float *)((longlong)param_3 + 0x2d4);
  fVar14 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 0x5c) * 0.05);
  iVar6 = (int)param_4[1];
  lVar9 = (longlong)iVar6;
  lVar7 = *(longlong *)(param_1 + 0x50);
  *(int *)(param_4 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
  }
  lVar4 = *param_4;
  uVar3 = *(undefined4 *)(lVar7 + 0x28);
  *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar14 * fVar15 * (1.0 - fVar19) * fVar20;
  *(float *)(lVar4 + 8 + lVar9 * 0xc) = fVar21;
  *(undefined4 *)(lVar4 + lVar9 * 0xc) = uVar3;
  fVar14 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 0x6c) * 0.05);
  lVar7 = *(longlong *)(param_1 + 0x60);
  iVar6 = (int)param_4[1];
  lVar9 = (longlong)iVar6;
  *(int *)(param_4 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
  }
  lVar4 = *param_4;
  uVar3 = *(undefined4 *)(lVar7 + 0x28);
  *(float *)(lVar4 + 8 + lVar9 * 0xc) = fVar21;
  *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar14 * (1.0 - (1.0 - fVar19)) * fVar15 * fVar20;
  *(undefined4 *)(lVar4 + lVar9 * 0xc) = uVar3;
LAB_140a35f1f:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  return;
}



// FUNCTION 140a35f80 FUN_140a35f80 body=634 status=ok
// SIG undefined FUN_140a35f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a35f80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  fVar2 = *(float *)(param_1 + 0x1a0);
  fVar17 = *(float *)(param_1 + 0x1a4);
  fVar3 = *(float *)(param_1 + 0x1a8);
  uVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xb8);
  fVar6 = (float)FRichCurve::Eval(uVar4);
  fVar7 = *(float *)(param_1 + 0x3c);
  fVar1 = *(float *)(param_1 + 0x180);
  fVar10 = *(float *)(param_1 + 0x184);
  fVar17 = fVar10 + fVar17;
  if (fVar17 <= fVar7) {
    fVar7 = *(float *)(param_1 + 0x38);
    if (fVar17 < fVar7) {
      *(float *)(param_1 + 0x184) = (fVar7 - fVar17) + fVar10;
      fVar17 = fVar7;
    }
  }
  else {
    *(float *)(param_1 + 0x184) = fVar10 - (fVar17 - fVar7);
    fVar17 = fVar7;
  }
  uVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x40);
  fVar7 = (float)FRichCurve::Eval(uVar4);
  if (0.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
      goto LAB_140a36099;
    }
  }
  else {
    fVar7 = 0.0;
  }
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
LAB_140a36099:
  local_a8 = *(undefined4 *)(param_1 + 400);
  uStack_a4 = *(undefined4 *)(param_1 + 0x194);
  uStack_a0 = *(undefined4 *)(param_1 + 0x198);
  uStack_9c = *(undefined4 *)(param_1 + 0x19c);
  puVar5 = (undefined8 *)FQuat::Slerp_NotNormalized(local_98,&local_a8,&DAT_1464aa810,fVar7);
  local_b8 = (float)*puVar5;
  fStack_b4 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_b0 = (float)puVar5[1];
  fStack_ac = (float)((ulonglong)puVar5[1] >> 0x20);
  auVar8._0_4_ = local_b8 * local_b8 + fStack_b0 * fStack_b0;
  auVar8._4_4_ = fStack_b4 * fStack_b4 + fStack_ac * fStack_ac;
  auVar8._8_4_ = fStack_b0 * fStack_b0 + local_b8 * local_b8;
  auVar8._12_4_ = fStack_ac * fStack_ac + fStack_b4 * fStack_b4;
  fVar13 = auVar8._4_4_ + auVar8._0_4_;
  fVar14 = auVar8._8_4_ + auVar8._4_4_;
  fVar15 = auVar8._12_4_ + auVar8._8_4_;
  fVar16 = auVar8._0_4_ + auVar8._12_4_;
  auVar9._4_4_ = fVar14;
  auVar9._0_4_ = fVar13;
  auVar9._8_4_ = fVar15;
  auVar9._12_4_ = fVar16;
  auVar9 = rsqrtps(auVar8,auVar9);
  fVar7 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar12 = auVar9._12_4_;
  fVar7 = (_DAT_146866080 - fVar7 * fVar7 * fVar13 * _DAT_146866080) * fVar7 + fVar7;
  fVar10 = (fRam0000000146866084 - fVar10 * fVar10 * fVar14 * fRam0000000146866084) * fVar10 +
           fVar10;
  fVar11 = (fRam0000000146866088 - fVar11 * fVar11 * fVar15 * fRam0000000146866088) * fVar11 +
           fVar11;
  fVar12 = (fRam000000014686608c - fVar12 * fVar12 * fVar16 * fRam000000014686608c) * fVar12 +
           fVar12;
  local_78._4_4_ = fVar17;
  local_78._0_4_ = fVar2 + fVar1;
  local_78._8_4_ = (1.0 - fVar6) * fVar3;
  local_78._12_4_ = 0;
  local_88 = ((uint)(((_DAT_146866080 - fVar7 * fVar7 * fVar13 * _DAT_146866080) * fVar7 + fVar7) *
                    local_b8) ^ _DAT_146866070) & -(uint)(1e-08 <= fVar13) ^ _DAT_146866070;
  uStack_84 = ((uint)(((fRam0000000146866084 - fVar10 * fVar10 * fVar14 * fRam0000000146866084) *
                       fVar10 + fVar10) * fStack_b4) ^ uRam0000000146866074) &
              -(uint)(1e-08 <= fVar14) ^ uRam0000000146866074;
  uStack_80 = ((uint)(((fRam0000000146866088 - fVar11 * fVar11 * fVar15 * fRam0000000146866088) *
                       fVar11 + fVar11) * fStack_b0) ^ uRam0000000146866078) &
              -(uint)(1e-08 <= fVar15) ^ uRam0000000146866078;
  uStack_7c = ((uint)(((fRam000000014686608c - fVar12 * fVar12 * fVar16 * fRam000000014686608c) *
                       fVar12 + fVar12) * fStack_ac) ^ uRam000000014686607c) &
              -(uint)(1e-08 <= fVar16) ^ uRam000000014686607c;
  local_68._4_4_ = DAT_1464aa788._4_4_;
  local_68._0_4_ = (undefined4)DAT_1464aa788;
  local_68._8_4_ = DAT_1464aa790;
  local_68._12_4_ = 0;
  FUN_140a3ac00(param_1,&local_88,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a36200 FUN_140a36200 body=1476 status=ok
// SIG undefined FUN_140a36200(void)

void FUN_140a36200(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  float fVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_res8 [2];
  undefined8 *in_stack_fffffffffffffc58;
  undefined4 uVar17;
  undefined8 *in_stack_fffffffffffffc60;
  undefined8 local_368;
  float local_360;
  undefined8 local_358;
  float local_350;
  undefined8 local_348;
  float local_340;
  float local_338;
  float local_334;
  float local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined8 local_318;
  float local_310;
  undefined8 local_308;
  float local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  undefined8 local_2d8;
  float local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  float local_280;
  undefined8 local_278;
  undefined4 local_270;
  float local_260;
  undefined1 local_25c [12];
  undefined1 local_250 [24];
  undefined **local_238;
  undefined8 local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_21c;
  float local_214;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1d8;
  undefined8 local_1d0;
  float local_190;
  undefined4 local_18c;
  longlong local_168;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined1 local_f8 [192];
  
  if (((char)param_1[0xad] != '\0') && ((char)param_1[0x25] == '\x03')) {
    pcVar9 = (char *)param_1[0xab];
    pcVar11 = pcVar9 + (longlong)(int)param_1[0xac] * 0x60;
    if (pcVar9 != pcVar11) {
      pcVar8 = pcVar9 + 0x10;
      fVar12 = (float)local_358;
      fVar13 = (float)((ulonglong)local_358 >> 0x20);
      fVar15 = fVar12;
      fVar16 = fVar13;
      fVar10 = local_350;
      fVar14 = local_350;
      do {
        cVar3 = FUN_140a39e00(param_1,param_2,pcVar9);
        if (cVar3 != '\0') {
          FUN_140a25850(&local_238);
          (**(code **)(*(longlong *)param_1[0xa1] + 0x428))
                    ((longlong *)param_1[0xa1],&local_368,*(undefined8 *)pcVar8);
          uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffc58 >> 0x20);
          local_res8[0] = 0;
          if (*pcVar9 == '\0') {
            plVar1 = *(longlong **)(pcVar8 + 0x38);
            lVar2 = plVar1[0x2d];
            if (lVar2 == 0) {
              puVar6 = &local_2b8;
              local_2b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              local_2b0 = DAT_1468b5d98;
            }
            else {
              puVar6 = (undefined8 *)&local_328;
              local_328 = *(undefined4 *)(lVar2 + 0x220);
              local_320 = *(undefined4 *)(lVar2 + 0x228);
              uStack_324 = *(undefined4 *)(lVar2 + 0x224);
            }
            local_340 = *(float *)(puVar6 + 1);
            local_348 = *puVar6;
            puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x308))(plVar1,local_250);
            local_2a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            local_288 = *puVar7;
            fVar15 = (float)local_288;
            fVar16 = (float)((ulonglong)local_288 >> 0x20);
            fVar10 = *(float *)(puVar7 + 1);
            local_270 = *(undefined4 *)(puVar6 + 1);
            local_350 = local_360;
            in_stack_fffffffffffffc60 = &local_288;
            local_298 = DAT_1468b5da0;
            local_278 = *puVar6;
            local_2a0 = DAT_1468b5d98;
            local_358 = local_368;
            in_stack_fffffffffffffc58 = &local_278;
            local_290 = DAT_1468b5da8;
            local_280 = fVar10;
            FUN_14306d000(param_1,&local_338,local_res8,&local_358,in_stack_fffffffffffffc58,
                          in_stack_fffffffffffffc60,*(undefined4 *)(pcVar8 + 0x14),
                          *(undefined4 *)(pcVar8 + 0x10),0,&local_298,&local_2a8);
            fVar14 = DAT_1468b5d98;
            fVar13 = DAT_1468b5d94;
            fVar12 = DAT_1468b5d90;
            iVar4 = rand();
            if (*(float *)(pcVar8 + 0x2c) <= (float)iVar4 * 3.051851e-05 &&
                (float)iVar4 * 3.051851e-05 != *(float *)(pcVar8 + 0x2c)) {
              fVar14 = *(float *)(pcVar8 + 0x24);
              iVar4 = rand();
              fVar14 = (float)iVar4 * fVar14 * 6.103702e-05 - fVar14;
              fVar13 = *(float *)(pcVar8 + 0x24);
              iVar4 = rand();
              fVar13 = (float)iVar4 * fVar13 * 6.103702e-05 - fVar13;
              fVar12 = *(float *)(pcVar8 + 0x24);
              iVar4 = rand();
              fVar12 = (float)iVar4 * fVar12 * 6.103702e-05 - fVar12;
            }
            fVar12 = (float)local_348 + fVar12;
            fVar14 = local_340 + fVar14;
            fVar13 = local_348._4_4_ + fVar13;
            local_260 = fVar14;
          }
          else if (*pcVar9 == '\x01') {
            local_310 = local_360;
            local_318 = local_368;
            uVar5 = (**(code **)(*(longlong *)param_1[0xa1] + 0x420))
                              ((longlong *)param_1[0xa1],local_f8,*(undefined8 *)pcVar8,0);
            puVar6 = (undefined8 *)
                     FUN_140a30f10(param_1,local_25c,&local_318,uVar5,
                                   CONCAT44(uVar17,*(undefined4 *)(pcVar8 + 0x30)),
                                   (ulonglong)in_stack_fffffffffffffc60 & 0xffffffff00000000,
                                   *(undefined4 *)(pcVar8 + 0x20));
            local_308 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            local_2d8 = *puVar6;
            fVar12 = (float)local_2d8;
            fVar13 = (float)((ulonglong)local_2d8 >> 0x20);
            fVar14 = *(float *)(puVar6 + 1);
            local_2c0 = local_360;
            in_stack_fffffffffffffc60 = &local_2e8;
            local_2f8 = DAT_1468b5da0;
            local_300 = DAT_1468b5d98;
            local_2c8 = local_368;
            in_stack_fffffffffffffc58 = &local_2d8;
            local_2f0 = DAT_1468b5da8;
            local_2e8 = CONCAT44(fVar16,fVar15);
            local_2e0 = fVar10;
            local_2d0 = fVar14;
            FUN_14306d000(param_1,&local_338,local_res8,&local_2c8,in_stack_fffffffffffffc58,
                          in_stack_fffffffffffffc60,*(undefined4 *)(pcVar8 + 0x14),
                          *(undefined4 *)(pcVar8 + 0x10),0,&local_2f8,&local_308);
          }
          local_230 = *(undefined8 *)(pcVar8 + 8);
          local_228 = local_368;
          local_220 = local_360;
          local_1d0 = *(undefined8 *)(pcVar8 + 0x18);
          local_21c = CONCAT44(fVar13,fVar12);
          local_18c = local_res8[0];
          local_190 = SQRT(local_338 * local_338 + local_334 * local_334 + local_330 * local_330);
          local_214 = fVar14;
          local_200 = param_1;
          local_1f8 = param_1;
          local_1d8 = param_1;
          FUN_143040df0(&local_238);
          if (pcVar8[0x34] != '\0') {
            (**(code **)(*param_1 + 0x148))(param_1);
          }
          local_238 = &PTR_FUN_1441f17f0;
          FWeakObjectPtr::operator=(local_110,0);
          local_108 = 0;
          if (local_168 != 0) {
            FMemory::Free();
          }
        }
        pcVar9 = pcVar9 + 0x60;
        pcVar8 = pcVar8 + 0x60;
      } while (pcVar9 != pcVar11);
    }
  }
  return;
}



// FUNCTION 140a367d0 FUN_140a367d0 body=13 status=ok
// SIG undefined FUN_140a367d0(void)

void FUN_140a367d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 140a367e0 FUN_140a367e0 body=355 status=ok
// SIG undefined FUN_140a367e0(void)

void FUN_140a367e0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)ATestBeaconClient::ClientPing_Implementation(param_2);
    if (plVar1 == (longlong *)0x0) {
      FCollisionQueryParams::AddIgnoredActor(param_3,param_2);
      uVar2 = 0;
      local_18 = (undefined8 *)0x0;
      local_10 = 0;
      FUN_14222e300(param_2,&local_18);
      (**(code **)(*param_2 + 0x4b8))(param_2,&local_18,1);
      uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
      if (local_18 + (int)local_10 < local_18) {
        uVar3 = uVar2;
      }
      puVar4 = local_18;
      if (uVar3 != 0) {
        do {
          FCollisionQueryParams::AddIgnoredActor(param_3,*puVar4);
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 != uVar3);
      }
    }
    else {
      FCollisionQueryParams::AddIgnoredActor(param_3,plVar1);
      uVar2 = 0;
      local_18 = (undefined8 *)0x0;
      local_10 = 0;
      FUN_14222e300(plVar1,&local_18);
      (**(code **)(*plVar1 + 0x4b8))(plVar1,&local_18,1);
      uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
      if (local_18 + (int)local_10 < local_18) {
        uVar3 = uVar2;
      }
      puVar4 = local_18;
      if (uVar3 != 0) {
        do {
          FCollisionQueryParams::AddIgnoredActor(param_3,*puVar4);
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 != uVar3);
      }
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140a36960 FUN_140a36960 body=1022 status=ok
// SIG undefined FUN_140a36960(void)

void FUN_140a36960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x1970)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x1970));
  }
  plVar1 = (longlong *)(param_1 + 0x1980);
  *(undefined4 *)(param_1 + 0x1988) = 0;
  if (*(int *)(param_1 + 0x198c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x1970)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x1988);
          *(int *)(param_1 + 0x1988) = iVar8 + 1;
          if (*(int *)(param_1 + 0x198c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_140a36b9c;
            }
          }
          lVar4 = 0xffffffff;
LAB_140a36b9c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_140a36bdd;
              }
            }
            lVar4 = 0xffffffff;
LAB_140a36bdd:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x1988);
            *(int *)(param_1 + 0x1988) = iVar8 + 1;
            if (*(int *)(param_1 + 0x198c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x1970));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x1988),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x1970)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x1970));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 140a36d60 FUN_140a36d60 body=42 status=ok
// SIG undefined FUN_140a36d60(void)

void FUN_140a36d60(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x1b10) = *param_2;
  return;
}



// FUNCTION 140a36d90 IsChildOf body=25 status=ok
// SIG undefined IsChildOf(void)

undefined1 UStruct::IsChildOf(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(longlong *)(param_1 + 0x30);
  }
  return 1;
}



// FUNCTION 140a36db0 FUN_140a36db0 body=48 status=ok
// SIG undefined FUN_140a36db0(void)

undefined4 FUN_140a36db0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x698);
  }
  if (lVar2 != 0) {
    iVar1 = FUN_1409649c0();
    if (iVar1 < 1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a36de0 FUN_140a36de0 body=43 status=ok
// SIG undefined FUN_140a36de0(void)

undefined1 FUN_140a36de0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x269) != '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x3a0);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a36e10 FUN_140a36e10 body=119 status=ok
// SIG undefined FUN_140a36e10(void)

undefined8 FUN_140a36e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1af0)) {
    do {
      cVar1 = FBoneReference::IsValidToEvaluate((longlong)iVar2 * 0xb0 + param_1 + 0x180,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1af0));
  }
  return 1;
}



// FUNCTION 140a36e90 FUN_140a36e90 body=504 status=ok
// SIG undefined FUN_140a36e90(void)

bool FUN_140a36e90(undefined8 param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_3 - param_2[4];
  fVar7 = param_3[1] - param_2[5];
  fVar8 = param_3[2] - param_2[6];
  fVar1 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar5 = fVar6;
  fVar4 = fVar7;
  fVar2 = fVar8;
  if ((fVar1 != 1.0) &&
     (fVar5 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, fVar2 = DAT_1468b5d98, 1e-08 <= fVar1)) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar5 = fVar6 * fVar2;
    fVar4 = fVar7 * fVar2;
    fVar2 = fVar8 * fVar2;
  }
  fVar1 = param_2[2];
  fVar7 = -param_2[1];
  fVar6 = fVar1 + fVar1;
  fVar7 = fVar7 + fVar7;
  fVar4 = (fVar6 * param_2[3] - fVar7 * *param_2) * fVar4 +
          ((fVar7 * param_2[1] - fVar6 * fVar1) + 1.0) * fVar5 +
          (fVar7 * param_2[3] + fVar6 * *param_2) * fVar2;
  fVar5 = -1.0;
  if ((-1.0 <= fVar4) && (fVar5 = fVar4, 1.0 <= fVar4)) {
    fVar5 = 1.0;
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
  return fVar5 * 57.295776 <= param_4;
}



// FUNCTION 140a37090 FUN_140a37090 body=249 status=ok
// SIG undefined FUN_140a37090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140a37090(float param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_1468665e4) {
    _Init_thread_header(&DAT_1468665e4);
    if (DAT_1468665e4 == -1) {
      _DAT_1468665e0 = 9.999997e-11;
      _Init_thread_footer(&DAT_1468665e4);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468665ec) {
    _Init_thread_header(&DAT_1468665ec);
    if (DAT_1468665ec == -1) {
      _DAT_1468665e8 = 0.4342945;
      _Init_thread_footer(&DAT_1468665ec);
    }
  }
  if (param_1 < _DAT_1468665e0) {
    return -200.0;
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(param_1);
  return fVar2 * 20.0 * _DAT_1468665e8;
}



// FUNCTION 140a37190 FUN_140a37190 body=450 status=ok
// SIG undefined FUN_140a37190(void)

void FUN_140a37190(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  float local_30;
  undefined8 local_28;
  float fStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)(param_2 + 0x28);
  if ((*(int *)(param_2 + 0x30) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
    if (cVar4 != '\0') goto LAB_140a372af;
  }
  uVar2 = *param_2;
  local_28 = FUN_140a38ad0;
  fStack_20 = 0.0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_1441f1988;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
    *(float *)(plVar5 + 3) = fStack_20;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
    *(undefined1 *)(plVar5 + 4) = uVar2;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_1441f19d0;
  }
  if (&local_28 != plVar1) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(param_2 + 0x30) != 0) &&
         (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        *(undefined4 *)(param_2 + 0x30) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
LAB_140a372af:
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x428))
            (*(longlong **)(param_2 + 0x20),local_38,*(undefined8 *)(param_2 + 0x10));
  fStack_20 = local_30 - *(float *)(param_2 + 0x1c);
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142330140(uVar7,local_res8,1,local_38,&local_28,param_1 + 0xb6,param_1 + 0xb7,plVar1,0);
  return;
}



// FUNCTION 140a37360 FUN_140a37360 body=275 status=ok
// SIG undefined FUN_140a37360(void)

void FUN_140a37360(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_20;
  longlong local_18;
  
  if (param_2 == 0) {
LAB_140a37394:
    local_18 = 0;
  }
  else {
    uVar2 = thunk_FUN_142f71d80();
    cVar1 = UStruct::IsChildOf(param_2,uVar2);
    local_18 = param_2;
    if (cVar1 == '\0') goto LAB_140a37394;
  }
  plVar3 = (longlong *)(param_1 + 0x58);
  if (*plVar3 != 0) {
    uVar2 = thunk_FUN_142f71d80();
    cVar1 = UStruct::IsChildOf(*plVar3,uVar2);
    if (cVar1 != '\0') {
      local_20 = *plVar3;
      goto LAB_140a373f6;
    }
  }
  local_20 = 0;
LAB_140a373f6:
  if ((local_18 == local_20) && ((param_3 == '\x04' || (param_3 == '\x05')))) {
    *(undefined4 *)(param_1 + 0x28) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x3c) = 100;
    *(undefined1 *)(param_1 + 0x69) = 1;
    if (*(int *)(param_1 + 0x40) == 1) {
      (**(code **)(*(longlong *)(param_1 + -0x2d0) + 0x3b0))(param_1 + -0x2d0,0);
    }
  }
  return;
}



// FUNCTION 140a37480 FUN_140a37480 body=87 status=ok
// SIG undefined FUN_140a37480(void)

void FUN_140a37480(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 100;
  *(undefined1 *)(param_1 + 0x69) = 1;
  FUN_140a393c0(param_1 + 0x48,0);
  return;
}



// FUNCTION 140a374e0 FUN_140a374e0 body=82 status=ok
// SIG undefined FUN_140a374e0(void)

void FUN_140a374e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 100;
  *(undefined1 *)(param_1 + 0x69) = 1;
  FUN_140a393c0(param_1 + 0x48,0);
  return;
}



// FUNCTION 140a37540 FUN_140a37540 body=593 status=ok
// SIG undefined FUN_140a37540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a37540(longlong param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 extraout_EAX;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  float local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_58 = 0;
  local_50 = 0.0;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x118), lVar5 != 0)) {
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      uVar7 = (undefined4)DAT_1468b5da0;
      uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_50 = DAT_1468b5da8;
    }
    else {
      fVar2 = *(float *)(lVar5 + 0x210);
      local_38 = *(undefined8 *)(lVar5 + 0x210);
      fStack_30 = *(float *)(lVar5 + 0x218);
      fStack_2c = *(float *)(lVar5 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != *(float *)(lVar5 + 0x214));
      auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != fVar2);
      auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_30);
      auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_2c);
      iVar3 = movmskps(extraout_EAX,auVar1);
      if (iVar3 != 0) {
        *(float *)(lVar5 + 0x250) = fVar2;
        *(float *)(lVar5 + 0x254) = *(float *)(lVar5 + 0x214);
        *(float *)(lVar5 + 600) = fStack_30;
        *(float *)(lVar5 + 0x25c) = fStack_2c;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_38,&local_28);
        *(undefined8 *)(lVar5 + 0x260) = *puVar4;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      uVar7 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      local_50 = *(float *)(lVar5 + 0x268);
    }
    local_38 = CONCAT44(uVar8,uVar7);
    local_58 = CONCAT44(uVar8,uVar7);
    fStack_30 = local_50;
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    lVar5 = UWidgetComponent::GetRenderTarget();
    if (lVar5 != 0) {
      plVar6 = (longlong *)USignificanceManager::GetWorld(param_1);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x428))(plVar6,&local_38,*(undefined8 *)(param_1 + 0x540));
        lVar5 = *(longlong *)(lVar5 + 0x168);
        if (lVar5 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar5 + 0x220);
          local_40 = *(float *)(lVar5 + 0x228);
        }
        local_20 = local_40;
        local_28 = local_48;
        local_40 = local_40 - fStack_30;
        local_48 = CONCAT44((float)((ulonglong)local_48 >> 0x20) - local_38._4_4_,
                            (float)local_48 - (float)local_38);
        puVar4 = (undefined8 *)FVector::Rotation(&local_48,&local_28);
        local_58 = *puVar4;
        local_50 = *(float *)(puVar4 + 1);
      }
    }
  }
  if (*(char *)(param_1 + 0x558) != '\0') {
    local_50 = local_50 + 180.0;
  }
  puVar4 = (undefined8 *)
           FMath::RInterpConstantTo
                     (&local_28,param_1 + 0x548,&local_58,param_2,*(undefined4 *)(param_1 + 0x554));
  *(undefined8 *)(param_1 + 0x548) = *puVar4;
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(puVar4 + 1);
  return;
}



// FUNCTION 140a377a0 FUN_140a377a0 body=522 status=ok
// SIG undefined FUN_140a377a0(void)

void FUN_140a377a0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == param_1) {
    iVar1 = *(int *)(param_1 + 0x598);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x590) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = (longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x588);
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar4 + 8)) {
          return;
        }
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          return;
        }
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar4 + 8) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar4);
        if (lVar3 == 0) {
          return;
        }
      }
      lVar4 = UUGRichTextBlock::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = (longlong)*(int *)(param_1 + 0x598) * 0x58 + *(longlong *)(param_1 + 0x588);
        lVar3 = FWeakObjectPtr::Get(lVar4);
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if (DAT_1464b56f4 == *(int *)(lVar4 + 8)) {
            return;
          }
          if (*(longlong *)(lVar4 + 0x10) == 0) {
            return;
          }
          lVar3 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar3);
          if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar4 + 8) = DAT_1464b56f4;
          }
          lVar3 = FWeakObjectPtr::Get(lVar4);
          if (lVar3 == 0) {
            return;
          }
        }
        lVar4 = UUGRichTextBlock::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1407665e0(*(longlong *)(lVar3 + 0x460) + 0x180,param_1);
          *(undefined4 *)(param_1 + 0x598) =
               *(undefined4 *)
                ((longlong)*(int *)(param_1 + 0x598) * 0x58 + 0x54 + *(longlong *)(param_1 + 0x588))
          ;
          FUN_140a3b250(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a379b0 FUN_140a379b0 body=122 status=ok
// SIG undefined FUN_140a379b0(void)

void FUN_140a379b0(longlong param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)(param_3 + 0x100);
  pbVar4 = pbVar2 + (longlong)*(int *)(param_3 + 0x108) * 0x90;
  if (pbVar2 != pbVar4) {
    pbVar3 = pbVar2 + 0x14;
    do {
      if (((*pbVar2 & 1) != 0) && ((*pbVar2 & 2) == 0)) {
        lVar1 = *(longlong *)(param_1 + 0x640);
        *(undefined8 *)(lVar1 + (ulonglong)param_4 * 0xc) = *(undefined8 *)pbVar3;
        *(undefined4 *)(lVar1 + (ulonglong)param_4 * 0xc + 8) = *(undefined4 *)(pbVar3 + 8);
      }
      pbVar2 = pbVar2 + 0x90;
      pbVar3 = pbVar3 + 0x90;
    } while (pbVar2 != pbVar4);
  }
  return;
}



// FUNCTION 140a37a40 FUN_140a37a40 body=42 status=ok
// SIG undefined FUN_140a37a40(void)

void FUN_140a37a40(undefined8 param_1,undefined1 param_2)

{
  FUN_140a3c760();
  FUN_1423931c0(param_1,param_2);
  return;
}



// FUNCTION 140a37a70 FUN_140a37a70 body=1232 status=ok
// SIG undefined FUN_140a37a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a37a70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_1468666d8) {
    _Init_thread_header(&DAT_1468666d8);
    if (DAT_1468666d8 == -1) {
      FName::FName(&DAT_1468666d0,L"StaticSocket_Tire3",1);
      _Init_thread_footer(&DAT_1468666d8);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468666e8) {
    _Init_thread_header(&DAT_1468666e8);
    if (DAT_1468666e8 == -1) {
      FName::FName(&DAT_1468666e0,L"StaticSocket_Tire1",1);
      _Init_thread_footer(&DAT_1468666e8);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468666f8) {
    _Init_thread_header(&DAT_1468666f8);
    if (DAT_1468666f8 == -1) {
      FName::FName(&DAT_1468666f0,L"CollisionWithVehicle_FrontWheel",1);
      _Init_thread_footer(&DAT_1468666f8);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x420))
            (*(longlong **)(param_1 + 0x510),&local_d8,DAT_1468666d0,0);
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x420))
            (*(longlong **)(param_1 + 0x510),&local_a8,DAT_1468666e0,0);
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x420))
            (*(longlong **)(param_1 + 0x510),&local_108,DAT_1468666f0,0);
  fVar2 = *(float *)(param_4 + 0x220);
  fVar3 = *(float *)(param_4 + 0x224);
  local_138 = *(undefined8 *)(param_4 + 0x220);
  local_130 = *(undefined4 *)(param_4 + 0x228);
  fVar4 = SQRT((fStack_c4 - fVar3) * (fStack_c4 - fVar3) + (local_c8 - fVar2) * (local_c8 - fVar2));
  fVar5 = SQRT((fStack_94 - fVar3) * (fStack_94 - fVar3) + (local_98 - fVar2) * (local_98 - fVar2));
  fVar2 = SQRT((fStack_f4 - fVar3) * (fStack_f4 - fVar3) + (local_f8 - fVar2) * (local_f8 - fVar2));
  if (fVar5 <= fVar4) {
    if (fVar5 < fVar2) {
      fVar4 = fStack_a0 + fStack_a0;
      fVar2 = -fStack_a4 + -fStack_a4;
      local_110 = fVar2 * fStack_9c;
      fVar3 = (fVar2 * fStack_a4 - fVar4 * fStack_a0) + 1.0;
      fVar2 = fVar4 * fStack_9c - fVar2 * local_a8;
      local_140 = *(undefined4 *)(param_1 + 0x548);
      local_d8 = local_a8;
      goto LAB_140a37ddc;
    }
  }
  else if (fVar4 < fVar2) {
    fVar4 = fStack_d0 + fStack_d0;
    fVar2 = -fStack_d4 + -fStack_d4;
    local_110 = fVar2 * fStack_cc;
    fVar3 = (fVar2 * fStack_d4 - fVar4 * fStack_d0) + 1.0;
    fVar2 = fVar4 * fStack_cc - fVar2 * local_d8;
    local_140 = *(undefined4 *)(param_1 + 0x54c);
    goto LAB_140a37ddc;
  }
  fVar4 = fStack_100 + fStack_100;
  fVar2 = -fStack_104 + -fStack_104;
  local_110 = fVar2 * fStack_fc;
  fVar3 = (fVar2 * fStack_104 - fVar4 * fStack_100) + 1.0;
  fVar2 = fVar4 * fStack_fc - fVar2 * local_108;
  local_140 = *(undefined4 *)(param_1 + 0x550);
  local_d8 = local_108;
LAB_140a37ddc:
  local_118 = CONCAT44(fVar2,fVar3);
  local_110 = local_110 + fVar4 * local_d8;
  local_148 = &local_118;
  FUN_140a33c80(param_1,param_3,local_128,&local_138);
  return;
}



// FUNCTION 140a37f40 FUN_140a37f40 body=1147 status=ok
// SIG undefined FUN_140a37f40(void)

void FUN_140a37f40(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_d8;
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [120];
  
  if ((((param_2 != 0) &&
       (lVar9 = (**(code **)(*param_1 + 0x148))(), lVar7 = DAT_1468536c8, param_2 == lVar9)) &&
      (DAT_1468536c6 == '\0')) &&
     (((DAT_1468536c5 != '\0' && (DAT_1468536c8 != 0)) &&
      (*(longlong *)(DAT_1468536c8 + 0x210) != 0)))) {
    bVar5 = false;
    bVar6 = false;
    puVar16 = (undefined8 *)param_3[6];
    if ((undefined8 *)param_3[6] == (undefined8 *)0x0) {
      puVar16 = param_3;
    }
    puVar14 = puVar16 + (longlong)*(int *)(param_3 + 7) * 3;
    local_b8 = puVar14;
    if (puVar16 != puVar14) {
      do {
        plVar10 = (longlong *)FUN_14059a2d0(lVar7,*puVar16);
        if (plVar10 != (longlong *)0x0) {
          lVar9 = plVar10[0x24];
          if (lVar9 == 0) {
            lVar9 = FUN_1423407b0(plVar10);
          }
          if (lVar9 == param_2) {
            if (0 < (int)param_5[1]) {
              plVar4 = (longlong *)*param_5;
              fVar23 = 0.0;
              fVar24 = 0.0;
              fVar25 = 0.0;
              fVar26 = 0.0;
              uVar18 = 0;
              uVar20 = 0;
              uVar21 = 0;
              uVar22 = 0;
              lVar9 = 4;
              pfVar11 = (float *)((longlong)plVar4 + 0x14);
              do {
                fVar17 = pfVar11[2];
                fVar1 = *pfVar11;
                fVar2 = pfVar11[-2];
                fVar3 = pfVar11[-4];
                pfVar11 = pfVar11 + 8;
                uVar18 = uVar18 + 1 & -(uint)(0.0 < fVar3) | ~-(uint)(0.0 < fVar3) & uVar18;
                uVar20 = uVar20 + 1 & -(uint)(0.0 < fVar2) | ~-(uint)(0.0 < fVar2) & uVar20;
                uVar21 = uVar21 + 1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & uVar21;
                uVar22 = uVar22 + 1 & -(uint)(0.0 < fVar17) | ~-(uint)(0.0 < fVar17) & uVar22;
                fVar23 = fVar23 + fVar3 * fVar3;
                fVar24 = fVar24 + fVar2 * fVar2;
                fVar25 = fVar25 + fVar1 * fVar1;
                fVar26 = fVar26 + fVar17 * fVar17;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
              iVar19 = uVar18 + uVar21 + uVar20 + uVar22;
              if (iVar19 < 1) {
                fVar17 = 1.0;
              }
              else {
                fVar17 = (float)iVar19;
              }
              *(float *)(plVar10 + 0x5a) = SQRT((fVar25 + fVar23 + fVar26 + fVar24) / fVar17);
              local_c8 = (**(code **)(*plVar10 + 0x548))(plVar10);
              lVar9 = *(longlong *)(lVar7 + 0x210);
              plVar15 = (longlong *)(lVar9 + 0x120);
              if (*(int *)(lVar9 + 0x128) != *(int *)(lVar9 + 0x154)) {
                lVar12 = *(longlong *)(lVar9 + 0x160);
                if (*(longlong *)(lVar9 + 0x160) == 0) {
                  lVar12 = lVar9 + 0x158;
                }
                iVar19 = *(int *)(lVar12 + ((longlong)
                                            ((int)((ulonglong)local_c8 >> 0x20) * 0x17 +
                                            (int)local_c8) & (longlong)*(int *)(lVar9 + 0x168) - 1U)
                                           * 4);
                if (iVar19 != -1) {
                  do {
                    plVar13 = (longlong *)((longlong)iVar19 * 0x90 + *plVar15);
                    if (*plVar13 == local_c8) {
                      if ((iVar19 != -1) && (plVar13 != (longlong *)0x0)) goto LAB_140a38229;
                      break;
                    }
                    iVar19 = (int)plVar13[0x11];
                  } while (iVar19 != -1);
                }
              }
              local_c0 = &local_c8;
              FUN_140a233e0(plVar15,&local_d8,&local_c0,0);
              plVar13 = (longlong *)((longlong)local_d8 * 0x90 + *plVar15);
LAB_140a38229:
              lVar9 = plVar4[1];
              plVar13[1] = *plVar4;
              plVar13[2] = lVar9;
              lVar9 = plVar4[3];
              plVar13[3] = plVar4[2];
              plVar13[4] = lVar9;
              lVar9 = plVar4[5];
              plVar13[5] = plVar4[4];
              plVar13[6] = lVar9;
              lVar9 = plVar4[7];
              plVar13[7] = plVar4[6];
              plVar13[8] = lVar9;
              lVar9 = plVar4[9];
              plVar13[9] = plVar4[8];
              plVar13[10] = lVar9;
              lVar9 = plVar4[0xb];
              plVar13[0xb] = plVar4[10];
              plVar13[0xc] = lVar9;
              lVar9 = plVar4[0xd];
              plVar13[0xd] = plVar4[0xc];
              plVar13[0xe] = lVar9;
              lVar9 = plVar4[0xf];
              plVar13[0xf] = plVar4[0xe];
              plVar13[0x10] = lVar9;
              puVar14 = local_b8;
              bVar5 = bVar6;
            }
            if (((0 < *(int *)(param_4 + 1)) &&
                (*(undefined4 *)((longlong)plVar10 + 0x2d4) = *(undefined4 *)*param_4, !bVar5)) &&
               (cVar8 = FUN_1428c5af0(param_2), cVar8 != '\0')) {
              bVar5 = true;
              bVar6 = true;
              FUN_1405aa060(*(undefined8 *)(param_1[0x9d] + 0x1d8));
            }
            plVar4 = *(longlong **)(param_2 + 0x1b8);
            if (plVar4 != (longlong *)0x0) {
              local_a8 = (undefined4)plVar10[0x5d];
              local_b0 = plVar10[0x5c];
              (**(code **)(*plVar4 + 0x1c0))(plVar4,&local_b0,local_a0,local_d4,local_cc,local_d0);
            }
          }
        }
        puVar16 = puVar16 + 3;
      } while (puVar16 != puVar14);
    }
    FUN_1405aa060(*(undefined8 *)(param_1[0x9d] + 0x250));
  }
  return;
}



// FUNCTION 140a383c0 FUN_140a383c0 body=878 status=ok
// SIG undefined FUN_140a383c0(void)

void FUN_140a383c0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  undefined4 extraout_EAX;
  longlong lVar8;
  undefined4 extraout_var;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined *puVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if ((((param_1[0x95] != 0) && (param_1[0x97] != 0)) && (param_1[0x99] != 0)) &&
     (param_1[0x9b] != 0)) {
    lVar8 = (**(code **)(*param_1 + 0x148))();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866630) &&
       (_Init_thread_header(&DAT_146866630), DAT_146866630 == -1)) {
      atexit((_func_5014 *)&LAB_143e473e0);
      _Init_thread_footer(&DAT_146866630);
    }
    DAT_146866628 = 0;
    if (DAT_14686662c < (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
      FUN_1405a8780();
    }
    uVar3 = *(uint *)(param_2 + 5);
    puVar1 = (uint *)(param_2 + 2);
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar15 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar11 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar9 = local_88 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar9;
        if (bVar6) goto LAB_140a3851c;
        uVar4 = puVar15[lVar11 + 1];
      }
      uStack_84 = -uVar4 & uVar4;
      iVar9 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_74 = (iStack_70 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_140a3851c:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_2 + 5);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    iStack_38 = local_88;
    uStack_34 = uStack_84;
    uVar14 = uVar4 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = param_2;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar4;
    if (uVar4 != uVar3) {
      puVar15 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar10 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar10 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_140a385e2;
        uVar10 = puVar15[(longlong)iVar9 + 1];
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
      uStack_74 = (uVar14 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_140a385e2:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
      plVar5 = *(longlong **)(*param_2 + (longlong)(int)uStack_4c * 0x10);
      lVar11 = plVar5[0x24];
      if (lVar11 == 0) {
        lVar11 = FUN_1423407b0(plVar5);
      }
      if (lVar11 == lVar8) {
        (**(code **)(*plVar5 + 0x548))(plVar5);
        lVar11 = plVar5[0x5c];
        lVar7 = plVar5[0x5d];
        lVar13 = (longlong)DAT_146866628;
        DAT_146866628 = DAT_146866628 + 1;
        if (DAT_14686662c < DAT_146866628) {
          TArray<FCompactPose,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(&DAT_1468665f0);
        }
        uStack_80 = (undefined4)lVar11;
        uStack_7c = (undefined4)((ulonglong)lVar11 >> 0x20);
        puVar12 = DAT_146866620;
        if (DAT_146866620 == (undefined *)0x0) {
          puVar12 = &DAT_1468665f0;
        }
        puVar2 = (undefined4 *)(puVar12 + lVar13 * 0x18);
        *puVar2 = extraout_EAX;
        puVar2[1] = extraout_var;
        puVar2[2] = uStack_80;
        puVar2[3] = uStack_7c;
        *(ulonglong *)(puVar12 + lVar13 * 0x18 + 0x10) = CONCAT44(uStack_74,(int)lVar7);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
    FUN_1405a6ac0(lVar8,&DAT_1468665f0);
  }
  return;
}



// FUNCTION 140a38730 FUN_140a38730 body=710 status=ok
// SIG undefined FUN_140a38730(void)

void FUN_140a38730(longlong param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if ((((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (plVar2 = (longlong *)FUN_14110ceb0(), plVar2 != (longlong *)0x0)) &&
     (cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x5c0), *plVar2 != 0)) {
    uVar5 = 0;
    local_60 = 0x40000000;
    local_5c = 2;
    local_68 = 0x3e99999a;
    local_64 = 10;
    local_4c = 0x40000000;
    local_48 = 2;
    local_54 = 0x3e99999a;
    local_50 = 10;
    local_3c = 0x40000000;
    local_38 = 2;
    local_44 = 0x3e99999a;
    local_40 = 10;
    puVar3 = (undefined4 *)FUN_14110ce90(*(undefined8 *)(param_1 + 0x30),cVar1);
    if (puVar3 != (undefined4 *)0x0) {
      local_68 = *puVar3;
      local_64 = *(undefined1 *)(puVar3 + 1);
      local_60 = puVar3[2];
      local_5c = puVar3[3];
      local_54 = puVar3[5];
      local_50 = *(undefined1 *)(puVar3 + 6);
      local_4c = puVar3[7];
      local_58 = local_58 ^ (*(byte *)(puVar3 + 4) ^ local_58) & 3;
      local_48 = puVar3[8];
      local_44 = puVar3[9];
      local_40 = *(undefined1 *)(puVar3 + 10);
      local_3c = puVar3[0xb];
      local_38 = puVar3[0xc];
    }
    bVar4 = local_58;
    if (cVar1 != *(char *)(param_1 + 0x41)) {
      if ((*(char *)(param_1 + 0x59) == '\0') || (cVar1 != *(char *)(param_1 + 0x40))) {
        puVar3 = (undefined4 *)
                 FUN_14110c8b0(*(undefined8 *)(param_1 + 0x30),*(char *)(param_1 + 0x41),cVar1);
        if (puVar3 != (undefined4 *)0x0) {
          local_68 = *puVar3;
          local_64 = *(undefined1 *)(puVar3 + 1);
          local_60 = puVar3[2];
          local_5c = puVar3[3];
          local_54 = puVar3[5];
          local_50 = *(undefined1 *)(puVar3 + 6);
          local_4c = puVar3[7];
          bVar4 = bVar4 ^ (*(byte *)(puVar3 + 4) ^ bVar4) & 3;
          local_48 = puVar3[8];
          local_44 = puVar3[9];
          local_40 = *(undefined1 *)(puVar3 + 10);
          local_3c = puVar3[0xb];
          local_38 = puVar3[0xc];
          local_58 = bVar4;
        }
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_1 + 0x41);
      *(undefined1 *)(param_1 + 0x59) = 1;
      *(char *)(param_1 + 0x41) = cVar1;
    }
    if (param_2 == 0.0) {
      local_58 = bVar4 & 0xfc;
      local_64 = 10;
      uVar5 = 0;
      local_60 = 0x40000000;
      local_5c = 2;
      local_54 = 0x3e99999a;
      local_50 = 10;
      local_4c = 0x40000000;
      local_48 = 2;
      local_44 = 0x3e99999a;
      local_40 = 10;
      local_3c = 0x40000000;
      local_38 = 2;
      local_68 = 0;
      FUN_140a2e190(param_1,param_1 + 0xd24,param_1 + 0xd20);
    }
    FUN_140a397c0(param_1,*plVar2,&local_68,uVar5,param_2);
  }
  return;
}



// FUNCTION 140a38a00 FUN_140a38a00 body=197 status=ok
// SIG undefined FUN_140a38a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a38a00(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  float local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(float *)(lVar1 + 0x228);
  }
  fVar3 = (float)local_18 - *(float *)(param_1 + 0x574);
  local_10 = local_10 - *(float *)(param_1 + 0x57c);
  fVar2 = (float)((ulonglong)local_18 >> 0x20) - *(float *)(param_1 + 0x578);
  if ((*(char *)(param_1 + 0x580) != '\0') &&
     (local_10 = local_10 * local_10, fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + local_10,
     fVar2 < *(float *)(param_1 + 0x56c) || fVar2 == *(float *)(param_1 + 0x56c))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x580) = 1;
  FUN_14223c850(local_10,(float *)(param_1 + 0x574),0,0,0);
  return;
}



// FUNCTION 140a38ad0 FUN_140a38ad0 body=279 status=ok
// SIG undefined FUN_140a38ad0(void)

void FUN_140a38ad0(longlong param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 local_18 [8];
  float local_10;
  
  pbVar5 = *(byte **)(param_1 + 0x630);
  pbVar4 = pbVar5 + (longlong)*(int *)(param_1 + 0x638) * 0x38;
  if (pbVar5 != pbVar4) {
    while (*pbVar5 != param_4) {
      pbVar5 = pbVar5 + 0x38;
      if (pbVar5 == pbVar4) {
        return;
      }
    }
    if ((*(int *)(pbVar5 + 0x30) != 0) &&
       (plVar1 = *(longlong **)(pbVar5 + 0x28), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(pbVar5 + 0x28) != 0) {
        uVar2 = FMemory::Realloc(*(longlong *)(pbVar5 + 0x28),0,0);
        *(undefined8 *)(pbVar5 + 0x28) = uVar2;
      }
      pbVar5[0x30] = 0;
      pbVar5[0x31] = 0;
      pbVar5[0x32] = 0;
      pbVar5[0x33] = 0;
    }
    pbVar4 = *(byte **)(param_3 + 0x100);
    pbVar3 = pbVar4 + (longlong)*(int *)(param_3 + 0x108) * 0x90;
    for (; pbVar4 != pbVar3; pbVar4 = pbVar4 + 0x90) {
      if (((*pbVar4 & 1) != 0) && ((*pbVar4 & 2) == 0)) {
        (**(code **)(**(longlong **)(pbVar5 + 0x20) + 0x428))
                  (*(longlong **)(pbVar5 + 0x20),local_18,*(undefined8 *)(pbVar5 + 0x10));
        *(float *)(*(longlong *)(param_1 + 0x4f0) + (ulonglong)*pbVar5 * 4) =
             *(float *)(pbVar5 + 0x18) - (local_10 - *(float *)(pbVar4 + 0x1c));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a38bf0 FUN_140a38bf0 body=135 status=ok
// SIG undefined FUN_140a38bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a38bf0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x168);
    local_1c = _DAT_1468b5d90;
    local_14 = DAT_1468b5d98;
    if (lVar1 != 0) {
      local_1c = *(undefined8 *)(lVar1 + 0x220);
      local_14 = *(undefined4 *)(lVar1 + 0x228);
    }
    FUN_1405cdd60(*(undefined8 *)(param_1 + 0x460),&local_1c,*(undefined4 *)(param_1 + 0x470),
                  param_4,local_1c,local_14);
  }
  return;
}



// FUNCTION 140a38c80 FUN_140a38c80 body=236 status=ok
// SIG undefined FUN_140a38c80(void)

void FUN_140a38c80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (*(char *)(param_1 + 0xaa) != '\0') {
    uVar8 = 0;
    plVar9 = *(longlong **)(param_1 + 0x98);
    uVar10 = (longlong)*(int *)(param_1 + 0xa0) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_1 + 0xa0) < plVar9) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      do {
        lVar2 = *plVar9;
        if (*(char *)(lVar2 + 0xa9) != '\0') {
          FUN_140a2efb0(lVar2);
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar1);
          }
          puVar7 = (undefined4 *)((longlong)iVar1 * 0x40 + *param_2);
          *puVar7 = *(undefined4 *)(lVar2 + 0x20);
          uVar6 = *(undefined8 *)(lVar2 + 0x38);
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)(puVar7 + 6) = uVar6;
          uVar6 = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar2 + 0x40);
          *(undefined8 *)(puVar7 + 10) = uVar6;
          uVar3 = *(undefined4 *)(lVar2 + 0x54);
          uVar4 = *(undefined4 *)(lVar2 + 0x58);
          uVar5 = *(undefined4 *)(lVar2 + 0x5c);
          puVar7[0xc] = *(undefined4 *)(lVar2 + 0x50);
          puVar7[0xd] = uVar3;
          puVar7[0xe] = uVar4;
          puVar7[0xf] = uVar5;
        }
        FUN_140a38c80(lVar2,param_2);
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar10);
    }
  }
  return;
}



// FUNCTION 140a38d70 FUN_140a38d70 body=516 status=ok
// SIG undefined FUN_140a38d70(void)

void FUN_140a38d70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x4f0) == '\0') {
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      FUN_1405a3cc0(DAT_1468536c8,param_1);
    }
    uVar6 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    uVar5 = uVar6;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40a383c0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1461fd010,1);
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1461fd018;
      lVar3 = (longlong)DAT_1461fd018;
      uVar5 = *puVar4;
      DAT_1461fd018 = DAT_1461fd018 + 1;
      if (DAT_1461fd01c < DAT_1461fd018) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1461fd010,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1461fd010);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x4f8) = uVar5;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_1441f1868;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40a37f40;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_1441f18b0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1461fcff8,1);
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1461fd000;
      lVar3 = (longlong)DAT_1461fd000;
      uVar6 = *puVar4;
      DAT_1461fd000 = DAT_1461fd000 + 1;
      if (DAT_1461fd004 < DAT_1461fd000) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1461fcff8,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1461fcff8);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x500) = uVar6;
    uVar5 = FUN_140a08d00();
    *(undefined8 *)(param_1 + 0x4e8) = uVar5;
    *(undefined1 *)(param_1 + 0x4f0) = 1;
  }
  return;
}



// FUNCTION 140a38f80 Rehash body=543 status=ok
// SIG undefined Rehash(void)

void TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_140a390bf;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_140a390bf:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x90 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x8c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0x11) =
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



// FUNCTION 140a391a0 FUN_140a391a0 body=538 status=ok
// SIG undefined FUN_140a391a0(void)

void FUN_140a391a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
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
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_140a392df;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_140a392df:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140a393c0 FUN_140a393c0 body=17 status=ok
// SIG undefined FUN_140a393c0(void)

void FUN_140a393c0(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar1 = 0;
    if (param_2 != 0) {
      uVar2 = FMemory::QuantizeSize((longlong)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < param_2) {
        iVar1 = 0x7fffffff;
      }
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 5,0);
        *param_1 = lVar3;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140a393e0 FUN_140a393e0 body=59 status=ok
// SIG undefined FUN_140a393e0(void)

void FUN_140a393e0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  switch(cVar1) {
  case '\0':
    bVar2 = cVar1 == '\0';
    break;
  case '\x01':
    bVar2 = cVar1 == '\x01';
    break;
  case '\x02':
    bVar2 = cVar1 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar2 = cVar1 == '\x03';
    break;
  default:
    goto switchD_140a393fd_default;
  }
  if (bVar2) {
    *(undefined1 *)(param_1 + 8) = 0xff;
  }
switchD_140a393fd_default:
  return;
}



// FUNCTION 140a39440 FUN_140a39440 body=11 status=ok
// SIG undefined FUN_140a39440(void)

void FUN_140a39440(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1974) = 0x25;
  return;
}



// FUNCTION 140a39450 FUN_140a39450 body=56 status=ok
// SIG undefined FUN_140a39450(void)

undefined4 FUN_140a39450(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x78) & 2) != 0)) {
    return *(undefined4 *)(param_2 + 0x80);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x94) & 1) != 0)) {
    return *(undefined4 *)(lVar1 + 0x574);
  }
  return 0xbf800000;
}



// FUNCTION 140a39490 FUN_140a39490 body=59 status=ok
// SIG undefined FUN_140a39490(void)

undefined4 FUN_140a39490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x78) & 8) != 0)) {
    return *(undefined4 *)(param_2 + 0x88);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x90) & 0x40000000) != 0)) {
    return *(undefined4 *)(lVar1 + 0x56c);
  }
  return 0xbf800000;
}



// FUNCTION 140a394d0 FUN_140a394d0 body=56 status=ok
// SIG undefined FUN_140a394d0(void)

undefined4 FUN_140a394d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x78) & 4) != 0)) {
    return *(undefined4 *)(param_2 + 0x84);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x90) < 0)) {
    return *(undefined4 *)(lVar1 + 0x570);
  }
  return 0xbf800000;
}



// FUNCTION 140a39510 FUN_140a39510 body=179 status=ok
// SIG undefined FUN_140a39510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_140a39510(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_142caac20(param_1 + 8,local_58);
  fVar2 = (float)FUN_142cc4350(uVar1,0);
  uVar1 = FUN_142caac20(param_1 + 0x40,local_58,param_3);
  fVar3 = (float)FUN_142cc4350(uVar1,0);
  uVar1 = FUN_142caac20(param_1 + 0x78,local_58,param_3);
  fVar4 = (float)FUN_142cc4350(uVar1,0);
  *param_2 = fVar3 * fVar2 + fVar4;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140a395d0 FUN_140a395d0 body=136 status=ok
// SIG undefined FUN_140a395d0(void)

undefined8 FUN_140a395d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_140c13370(param_3);
  if (iVar1 < 2) {
    lVar4 = param_1 + 0xb0;
    lVar3 = param_1 + 0x78;
    lVar2 = param_1 + 0x40;
    param_1 = param_1 + 8;
  }
  else {
    lVar4 = param_1 + 400;
    lVar3 = param_1 + 0x158;
    lVar2 = param_1 + 0x120;
    param_1 = param_1 + 0xe8;
  }
  FUN_140a34a80(param_2,param_3,param_1,lVar2,lVar3,lVar4);
  return param_2;
}



// FUNCTION 140a39660 FUN_140a39660 body=61 status=ok
// SIG undefined FUN_140a39660(void)

undefined8 FUN_140a39660(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140a34a80(param_2,param_3,param_1 + 8,param_1 + 0x40,param_1 + 0x78,param_1 + 0xb0);
  return param_2;
}



// FUNCTION 140a396a0 FUN_140a396a0 body=75 status=ok
// SIG undefined FUN_140a396a0(void)

undefined8 FUN_140a396a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140c13370(param_3);
  lVar2 = param_1 + 8;
  if (1 < iVar1) {
    lVar2 = param_1 + 0x40;
  }
  FUN_142caac20(lVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 140a396f0 FUN_140a396f0 body=68 status=ok
// SIG undefined FUN_140a396f0(void)

void FUN_140a396f0(longlong *param_1)

{
  FUN_14234fe40(param_1,0);
  (**(code **)(*param_1 + 0x640))(param_1,DAT_146aefc58);
  FUN_1423974f0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000140a3972d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x648))(param_1,1);
  return;
}



// FUNCTION 140a39740 FUN_140a39740 body=124 status=ok
// SIG undefined FUN_140a39740(void)

void FUN_140a39740(longlong param_1,undefined1 param_2)

{
  AActor::SetActorTickEnabled();
  AActor::SetActorTickEnabled(*(undefined8 *)(param_1 + 0x518),param_2);
  AActor::SetActorTickEnabled(*(undefined8 *)(param_1 + 0x520),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x5a0) + 0x358))(*(longlong **)(param_1 + 0x5a0),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x358))(*(longlong **)(param_1 + 0x510),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140a397b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x508) + 0x358))(*(longlong **)(param_1 + 0x508),param_2);
  return;
}



// FUNCTION 140a397c0 FUN_140a397c0 body=910 status=ok
// SIG undefined FUN_140a397c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a397c0(longlong param_1,longlong param_2,float *param_3,char param_4,float param_5)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined1 uVar9;
  float fVar10;
  undefined1 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_6c8 [32];
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  uint local_674;
  undefined1 local_670;
  undefined4 local_66c;
  undefined1 local_668 [1496];
  longlong local_90;
  longlong local_80;
  undefined8 local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (lVar6 != param_2) {
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x460) != 0)) {
      FUN_140a296b0(param_1 + 0x120,*(longlong *)(lVar6 + 0x460) + 0x300);
    }
    *(longlong *)(param_1 + 0x48) = param_2;
    if (param_4 == '\0') {
      *(undefined1 *)(param_1 + 0x58) = 0;
      fVar1 = *param_3;
      uVar3 = *(undefined1 *)(param_3 + 1);
      fVar2 = param_3[2];
      fVar4 = param_3[3];
      fVar12 = fVar1;
      fVar14 = fVar2;
      fVar8 = fVar4;
      uVar9 = uVar3;
      if (((uint)param_3[4] & 1) != 0) {
        fVar12 = param_3[5];
        fVar14 = param_3[7];
        fVar8 = param_3[8];
        uVar9 = *(undefined1 *)(param_3 + 6);
      }
      fVar13 = fVar1;
      fVar15 = fVar2;
      fVar10 = fVar4;
      uVar11 = uVar3;
      if (((uint)param_3[4] & 2) != 0) {
        fVar13 = param_3[9];
        fVar15 = param_3[0xb];
        fVar10 = param_3[0xc];
        uVar11 = *(undefined1 *)(param_3 + 10);
      }
      if (0.0 <= param_5) {
        fVar12 = param_5;
      }
      bVar7 = param_5 < 0.0;
      *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
      uVar5 = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x70) = uVar5;
      *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x7c) = uVar5;
      *(float *)(param_1 + 0x84) = fVar12;
      *(undefined1 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x8c) = uVar9;
      *(float *)(param_1 + 0x90) = fVar14;
      *(float *)(param_1 + 0x94) = fVar8;
      if (!bVar7) {
        fVar13 = param_5;
      }
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_1 + 0xa4);
      uVar5 = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0xac) = uVar5;
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xb8) = uVar5;
      *(float *)(param_1 + 0xc0) = fVar13;
      *(undefined1 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined1 *)(param_1 + 200) = uVar11;
      *(float *)(param_1 + 0xcc) = fVar15;
      *(float *)(param_1 + 0xd0) = fVar10;
      fVar12 = fVar1;
      if (!bVar7) {
        fVar12 = param_5;
      }
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd8);
      uVar5 = *(undefined4 *)(param_1 + 0xd8);
      *(float *)(param_1 + 0xe4) = fVar12;
      *(undefined4 *)(param_1 + 0xd8) = uVar5;
      *(undefined4 *)(param_1 + 0xdc) = uVar5;
      *(undefined1 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined1 *)(param_1 + 0xec) = uVar3;
      *(float *)(param_1 + 0xf0) = fVar2;
      *(float *)(param_1 + 0xf4) = fVar4;
      if (bVar7) {
        param_5 = fVar1;
      }
      *(float *)(param_1 + 0x108) = param_5;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined1 *)(param_1 + 0x10c) = 0;
      *(undefined1 *)(param_1 + 0x110) = uVar3;
      *(float *)(param_1 + 0x114) = fVar2;
      *(float *)(param_1 + 0x118) = fVar4;
    }
    else {
      *(bool *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) == '\0';
      *(bool *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) == '\0';
      *(bool *)(param_1 + 0xc4) = *(char *)(param_1 + 0xc4) == '\0';
      *(bool *)(param_1 + 0xe8) = *(char *)(param_1 + 0xe8) == '\0';
      *(bool *)(param_1 + 0x10c) = *(char *)(param_1 + 0x10c) == '\0';
    }
    local_6a8 = 0;
    uStack_6a0 = 0;
    local_674 = local_674 & 0xfffffffe | 2;
    local_690 = 0x42b40000;
    local_678 = 0x3faaaaab;
    local_698 = 0;
    local_688 = 0x42b40000;
    uStack_684 = 0x44000000;
    uStack_680 = 0;
    uStack_67c = 0x4a000000;
    local_670 = 0;
    local_66c = 0;
    FUN_142741540(local_668);
    local_60 = local_60 & 0xfffffffe;
    local_68 = 0;
    FUN_140a3d5e0(param_1,0,param_2,&local_6a8);
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a39b50 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_TechUnitHiddenDoor_C__pf239202814::bpf__StartSelectBuild__pf
               (longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x538) = param_2;
  return;
}



// FUNCTION 140a39b60 SetScrollType body=7 status=ok
// SIG undefined SetScrollType(void)

void SScrollBox::SetScrollType(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x568) = param_2;
  return;
}



// FUNCTION 140a39b70 FUN_140a39b70 body=7 status=ok
// SIG undefined FUN_140a39b70(void)

void FUN_140a39b70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x570) = param_2;
  return;
}



// FUNCTION 140a39b80 FUN_140a39b80 body=488 status=ok
// SIG undefined FUN_140a39b80(void)

void FUN_140a39b80(longlong *param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_res10 [24];
  
  if (param_2 != 0) {
    param_1[0x98] = param_2;
    uVar2 = UTextBlock::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    param_1[0xb4] = lVar3;
    if (lVar3 != 0) {
      FUN_140ec0410(lVar3,*(undefined8 *)(param_1[0x98] + 0x460));
      FUN_140ebf640(param_1[0xb4],param_3);
      FUN_142350b20(param_1[0xb4],1);
    }
  }
  uVar2 = UUGStartScreenUW::GetPrivateStaticClass();
  puVar4 = (undefined8 *)FName::FName(local_res10,L"TreadLeft",1);
  lVar3 = FUN_14222fa10(param_1,uVar2,*puVar4);
  if (lVar3 != 0) {
    lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = *(longlong *)(lVar3 + 0x2d8);
      if (lVar3 == 0) {
LAB_140a39ca2:
        lVar3 = 0;
      }
      else {
        lVar5 = FUN_1412f24d0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140a39ca2;
      }
      param_1[0xa3] = lVar3;
    }
  }
  uVar2 = UUGStartScreenUW::GetPrivateStaticClass();
  puVar4 = (undefined8 *)FName::FName(local_res10,L"TreadRight",1);
  lVar3 = FUN_14222fa10(param_1,uVar2,*puVar4);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x2d8);
  if (lVar3 != 0) {
    lVar5 = FUN_1412f24d0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a39d56;
  }
  lVar3 = 0;
LAB_140a39d56:
  param_1[0xa4] = lVar3;
  return;
}



// FUNCTION 140a39d70 FUN_140a39d70 body=136 status=ok
// SIG undefined FUN_140a39d70(void)

ulonglong FUN_140a39d70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar3 = FUN_142c48f90(*(longlong *)(param_1 + 0x50),
                          *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x98),0);
    if ((char)uVar3 == '\0') goto LAB_140a39df0;
  }
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(uVar3 + 0x98);
  if (lVar2 != 0) {
    lVar4 = FUN_1413f82e0();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (((char)uVar3 != '\0') && (*(char *)(lVar2 + 0x1138) != '\0')) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
LAB_140a39df0:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a39e00 FUN_140a39e00 body=560 status=ok
// SIG undefined FUN_140a39e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a39e00(longlong param_1,float param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float extraout_XMM0_Da;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [48];
  
  cVar3 = param_3[0x5c];
  uVar7 = 0;
  fVar1 = *(float *)(param_3 + 0x50);
  fVar2 = *(float *)(param_3 + 0x54);
  *(float *)(param_3 + 0x50) = param_2 + fVar1;
  *(float *)(param_3 + 0x54) = param_2 + fVar2;
  if (cVar3 == '\0') {
    if (param_2 + fVar2 < *(float *)(param_3 + 4)) goto LAB_140a39e43;
  }
  else if ((cVar3 == '\x01') && (param_2 + fVar1 < *(float *)(param_3 + 8))) goto LAB_140a39e43;
  if (*param_3 != '\x01') {
    lVar6 = *(longlong *)(param_1 + 0x168);
    if (lVar6 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar6 + 0x220);
      local_60 = *(undefined4 *)(lVar6 + 0x228);
    }
    local_5c = local_68;
    local_54 = local_60;
    lVar6 = FUN_140b7fd60(local_68,&local_5c);
    uVar7 = 0;
    if ((lVar6 != 0) &&
       (uVar7 = FUN_142231340(lVar6,param_1), extraout_XMM0_Da < *(float *)(param_3 + 0x30))) {
      lVar4 = *(longlong *)(lVar6 + 0x168);
      if (lVar4 == 0) {
        local_54 = DAT_1468b5d98;
        puVar8 = &local_5c;
        local_5c = _DAT_1468b5d90;
      }
      else {
        puVar8 = &local_68;
        local_60 = *(undefined4 *)(lVar4 + 0x228);
        local_68 = *(undefined8 *)(lVar4 + 0x220);
      }
      local_48 = *puVar8;
      local_40 = *(undefined4 *)(puVar8 + 1);
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x420))
                        (*(longlong **)(param_1 + 0x508),local_38,*(undefined8 *)(param_3 + 0x10),0)
      ;
      uVar7 = FUN_140a36e90(param_1,uVar9,&local_48,*(undefined4 *)(param_3 + 0x38));
      if ((char)uVar7 != '\0') {
        *(longlong *)(param_3 + 0x48) = lVar6;
        param_3[0x50] = '\0';
        param_3[0x51] = '\0';
        param_3[0x52] = '\0';
        param_3[0x53] = '\0';
        if (param_3[0x5c] == '\0') {
          param_3[0x5c] = '\x01';
          return 1;
        }
        fVar1 = *(float *)(param_3 + 0x58);
        uVar7 = (ulonglong)(*(int *)(param_3 + 0xc) - 1U);
        *(float *)(param_3 + 0x58) = fVar1 + 1.0;
        if ((float)(int)(*(int *)(param_3 + 0xc) - 1U) <= fVar1) {
          param_3[0x54] = '\0';
          param_3[0x55] = '\0';
          param_3[0x56] = '\0';
          param_3[0x57] = '\0';
          param_3[0x58] = '\0';
          param_3[0x59] = '\0';
          param_3[0x5a] = '\0';
          param_3[0x5b] = '\0';
          param_3[0x5c] = '\0';
        }
        goto LAB_140a3a029;
      }
    }
LAB_140a39e43:
    return uVar7 & 0xffffffffffffff00;
  }
  param_3[0x50] = '\0';
  param_3[0x51] = '\0';
  param_3[0x52] = '\0';
  param_3[0x53] = '\0';
  if (cVar3 == '\0') {
    param_3[0x5c] = '\x01';
    return 1;
  }
  fVar1 = *(float *)(param_3 + 0x58);
  uVar5 = *(int *)(param_3 + 0xc) - 1;
  uVar7 = (ulonglong)uVar5;
  *(float *)(param_3 + 0x58) = fVar1 + 1.0;
  if ((float)(int)uVar5 <= fVar1) {
    param_3[0x54] = '\0';
    param_3[0x55] = '\0';
    param_3[0x56] = '\0';
    param_3[0x57] = '\0';
    param_3[0x58] = '\0';
    param_3[0x59] = '\0';
    param_3[0x5a] = '\0';
    param_3[0x5b] = '\0';
    param_3[0x5c] = '\0';
    return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
  }
LAB_140a3a029:
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 140a3a040 FUN_140a3a040 body=522 status=ok
// SIG undefined FUN_140a3a040(void)

float * FUN_140a3a040(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = -1.0;
  fVar8 = fVar9 * fVar2 + fVar10 * fVar1 + fVar11 * fVar3;
  if (-1.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 < -1.0) goto LAB_140a3a0ed;
  }
  else {
    fVar8 = -1.0;
  }
  fVar4 = fVar8;
  if (1.0 <= fVar8) {
    fVar4 = 1.0;
  }
LAB_140a3a0ed:
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
  fVar9 = fVar9 - fVar2 * fVar8;
  fVar11 = fVar11 - fVar3 * fVar8;
  fVar10 = fVar10 - fVar1 * fVar8;
  fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
  if (1e-08 < fVar8) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
    fVar9 = fVar9 * fVar6;
    fVar10 = fVar10 * fVar6;
    fVar11 = fVar11 * fVar6;
  }
  uVar5 = __libm_sse2_sincosf_(fVar4 * param_4);
  fVar8 = (float)((ulonglong)uVar5 >> 0x20);
  fVar4 = (float)uVar5;
  *param_1 = fVar4 * fVar9 + fVar8 * fVar2;
  param_1[1] = fVar4 * fVar10 + fVar8 * fVar1;
  param_1[2] = fVar4 * fVar11 + fVar8 * fVar3;
  return param_1;
}



// FUNCTION 140a3a250 FUN_140a3a250 body=222 status=ok
// SIG undefined FUN_140a3a250(void)

undefined8 FUN_140a3a250(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  FUN_142fde710(local_98,param_1);
  FUN_143001780(local_78,local_98);
  if (local_90 != 0) {
    FMemory::Free();
  }
  uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  uVar1 = FUN_143019ed0(uVar1,local_78,1,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 140a3a330 FUN_140a3a330 body=487 status=ok
// SIG undefined FUN_140a3a330(void)

undefined8 *
FUN_140a3a330(undefined8 *param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 **ppuStack_a0;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if ((param_2 == (longlong *)0x0) || (param_4 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_d8 = 0;
    local_d0 = 0;
    (**(code **)(*param_2 + 0x280))(param_2,&local_d8);
    local_98 = &local_b8;
    local_b8 = 0;
    ppuStack_a0 = &local_98;
    local_b0 = 0;
    local_a8 = FUN_1409fc860;
    local_90 = param_3;
    local_88 = param_4;
    FUN_142ff36a0(&local_d8,param_4,&local_a8);
    if ((int)local_b0 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_1409f5880(&local_b8);
      if ((int)local_d0 != 0) {
        plVar1 = (longlong *)(local_d8 + 0x78);
        iVar2 = (int)local_d0;
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 0x11;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
      FUN_143019ca0(param_4,0,local_b8,local_78);
      local_c8 = 0;
      local_c0 = 0;
      FUN_142ff5c90(local_78,&local_c8,1);
      *param_1 = local_c8;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_c0;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_c0._4_4_;
      local_c0 = 0;
      local_c8 = 0;
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      FUN_1409f5880(&local_b8);
      if ((int)local_d0 != 0) {
        plVar1 = (longlong *)(local_d8 + 0x78);
        iVar2 = (int)local_d0;
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 0x11;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 140a3a520 FUN_140a3a520 body=388 status=ok
// SIG undefined FUN_140a3a520(void)

void FUN_140a3a520(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,0);
  if ((lVar2 != 0) && (cVar1 = FUN_1428c5af0(lVar2), cVar1 != '\0')) {
    uVar3 = UWorld::GetWorldSettings(lVar2,0,1);
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_28 = 0;
    uVar4 = FUN_1414c1ff0();
    uVar6 = 0;
    plVar5 = (longlong *)FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    if (plVar5 != (longlong *)0x0) {
      FUN_14234b270(plVar5,lVar2);
      local_20 = *(undefined4 *)(param_3 + 1);
      local_28 = *param_3;
      FUN_1423990b0(plVar5,&local_28,0,0,uVar6 & 0xffffff00);
      plVar5[0x5c] = param_7;
      plVar5[0x5d] = param_8;
      plVar5[0x5e] = param_9;
      *(undefined4 *)(plVar5 + 0x5f) = param_4;
      *(undefined4 *)((longlong)plVar5 + 0x2fc) = param_5;
      *(undefined4 *)(plVar5 + 0x60) = param_6;
      plVar5[0x5a] = param_2;
      (**(code **)(*plVar5 + 0x280))(plVar5,0);
    }
  }
  return;
}



// FUNCTION 140a3a6b0 FUN_140a3a6b0 body=1349 status=ok
// SIG undefined FUN_140a3a6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3a6b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float *pfVar3;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [192];
  
  local_d8 = param_1[4];
  fStack_d4 = param_1[5];
  fStack_d0 = param_1[6];
  fStack_cc = param_1[7];
  local_e8 = ZEXT416((uint)(float)DAT_1464aa798);
  fVar8 = -fStack_d4 * 0.5;
  if (fVar8 < 0.0) {
    fVar4 = fVar8 * 0.15915494 - 0.5;
  }
  else {
    fVar4 = fVar8 * 0.15915494 + 0.5;
  }
  fVar12 = -1.0;
  fVar8 = fVar8 - (float)(int)fVar4 * 6.2831855;
  if (fVar8 <= 1.5707964) {
    if (-1.5707964 <= fVar8) {
      fStack_ec = 1.0;
    }
    else {
      fStack_ec = -1.0;
      fVar8 = -3.1415927 - fVar8;
    }
  }
  else {
    fStack_ec = -1.0;
    fVar8 = 3.1415927 - fVar8;
  }
  fVar4 = fVar8 * fVar8;
  fVar8 = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 + 0.008333331
            ) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar8;
  fVar20 = DAT_1464aa7c0 * fVar8;
  fVar19 = DAT_1464aa7b8._4_4_ * fVar8;
  fVar8 = (float)DAT_1464aa7b8 * fVar8;
  fVar7 = local_d8 * 0.5;
  fStack_ec = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 +
                0.041666638) * fVar4 - 0.5) * fVar4 + 1.0) * fStack_ec;
  if (fVar7 < 0.0) {
    fVar4 = fVar7 * 0.15915494 - 0.5;
  }
  else {
    fVar4 = fVar7 * 0.15915494 + 0.5;
  }
  fVar7 = fVar7 - (float)(int)fVar4 * 6.2831855;
  if (fVar7 <= 1.5707964) {
    if (-1.5707964 <= fVar7) {
      fVar12 = 1.0;
    }
    else {
      fVar7 = -3.1415927 - fVar7;
    }
  }
  else {
    fVar7 = 3.1415927 - fVar7;
  }
  fVar5 = fVar7 * fVar7;
  fVar7 = (((((2.7525562e-06 - fVar5 * 2.3889859e-08) * fVar5 - 0.00019840874) * fVar5 + 0.008333331
            ) * fVar5 - 0.16666667) * fVar5 + 1.0) * fVar7;
  fVar4 = *param_4;
  fVar16 = param_4[1];
  fVar17 = param_4[2];
  fVar6 = param_4[3];
  fVar15 = (float)DAT_1464aa798 * fVar7;
  fVar18 = DAT_1464aa798._4_4_ * fVar7;
  fVar7 = DAT_1464aa7a0 * fVar7;
  fVar12 = (((((2.4760495e-05 - fVar5 * 2.6051615e-07) * fVar5 - 0.0013888378) * fVar5 + 0.041666638
             ) * fVar5 - 0.5) * fVar5 + 1.0) * fVar12;
  fVar5 = fVar4 * fVar12 * _DAT_1468660d0 + fVar6 * fVar15 + fVar16 * fVar7 * _DAT_1468660c0 +
          fVar17 * fVar18 * _DAT_1468660b0;
  fVar13 = fVar4 * fVar7 * fRam00000001468660d4 + fVar6 * fVar18 +
           fVar16 * fVar12 * fRam00000001468660c4 + fVar17 * fVar15 * fRam00000001468660b4;
  fVar14 = fVar4 * fVar18 * fRam00000001468660d8 + fVar6 * fVar7 +
           fVar16 * fVar15 * fRam00000001468660c8 + fVar17 * fVar12 * fRam00000001468660b8;
  fVar4 = fVar4 * fVar15 * fRam00000001468660dc + fVar6 * fVar12 +
          fVar16 * fVar18 * fRam00000001468660cc + fVar17 * fVar7 * fRam00000001468660bc;
  fVar7 = fStack_ec * fVar5 * _DAT_1468660d0 + fVar4 * fVar8 + fVar20 * fVar13 * _DAT_1468660c0 +
          fVar19 * fVar14 * _DAT_1468660b0;
  fVar16 = fVar20 * fVar5 * fRam00000001468660d4 + fVar4 * fVar19 +
           fStack_ec * fVar13 * fRam00000001468660c4 + fVar8 * fVar14 * fRam00000001468660b4;
  fVar17 = fVar19 * fVar5 * fRam00000001468660d8 + fVar4 * fVar20 +
           fVar8 * fVar13 * fRam00000001468660c8 + fStack_ec * fVar14 * fRam00000001468660b8;
  fVar19 = fVar8 * fVar5 * fRam00000001468660dc + fVar4 * fStack_ec +
           fVar19 * fVar13 * fRam00000001468660cc + fVar20 * fVar14 * fRam00000001468660bc;
  fVar8 = fVar17 + fVar17;
  fVar4 = -fVar16;
  fVar4 = fVar4 + fVar4;
  fVar12 = fVar19 * fVar8 - fVar7 * fVar4;
  fVar20 = (fVar16 * fVar4 - fVar17 * fVar8) + 1.0;
  fVar8 = fVar19 * fVar4 + fVar7 * fVar8;
  fStack_f4 = -fVar12;
  local_f8 = -fVar20;
  fStack_f0 = -fVar8;
  auVar1._4_4_ = fVar12 * fStack_d0 + param_3[1];
  auVar1._0_4_ = fVar20 * fStack_d0 + *param_3;
  auVar1._8_4_ = fVar8 * fStack_d0 + param_3[2];
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar1;
  fVar8 = *param_1;
  fVar4 = param_1[1];
  fVar12 = param_1[2];
  fVar7 = param_1[3];
  uVar2 = FRotationMatrix::MakeFromXZ(local_c8,&local_f8,&DAT_1464aa798);
  pfVar3 = (float *)FMatrix::ToQuat(uVar2,&local_d8);
  fVar19 = *pfVar3;
  fVar20 = pfVar3[1];
  fVar16 = pfVar3[2];
  fVar17 = pfVar3[3];
  fVar9 = fVar19 * fVar12 * fRam00000001468660d4;
  fVar10 = fVar19 * fVar4 * fRam00000001468660d8;
  fVar11 = fVar19 * fVar8 * fRam00000001468660dc;
  fVar6 = fVar20 * fVar7 * fRam00000001468660c4;
  fVar5 = fVar20 * fVar8 * fRam00000001468660c8;
  fVar13 = fVar20 * fVar4 * fRam00000001468660cc;
  fVar14 = fVar16 * fVar8 * fRam00000001468660b4;
  fVar15 = fVar16 * fVar7 * fRam00000001468660b8;
  fVar18 = fVar16 * fVar12 * fRam00000001468660bc;
  *param_2 = fVar19 * fVar7 * _DAT_1468660d0 + fVar17 * fVar8 + fVar20 * fVar12 * _DAT_1468660c0 +
             fVar16 * fVar4 * _DAT_1468660b0;
  param_2[1] = fVar9 + fVar17 * fVar4 + fVar6 + fVar14;
  param_2[2] = fVar10 + fVar17 * fVar12 + fVar5 + fVar15;
  param_2[3] = fVar11 + fVar17 * fVar7 + fVar13 + fVar18;
  return;
}



// FUNCTION 140a3ac00 FUN_140a3ac00 body=1607 status=ok
// SIG undefined FUN_140a3ac00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3ac00(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
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
  float fVar18;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [224];
  
  local_108 = param_2[4];
  fStack_104 = param_2[5];
  fStack_100 = param_2[6];
  fStack_fc = param_2[7];
  fVar7 = fStack_104 * 0.5;
  if (fVar7 < 0.0) {
    fVar5 = fVar7 * 0.15915494 - 0.5;
  }
  else {
    fVar5 = fVar7 * 0.15915494 + 0.5;
  }
  fVar13 = -1.0;
  fVar7 = fVar7 - (float)(int)fVar5 * 6.2831855;
  if (fVar7 <= 1.5707964) {
    if (-1.5707964 <= fVar7) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = -1.0;
      fVar7 = -3.1415927 - fVar7;
    }
  }
  else {
    fVar5 = -1.0;
    fVar7 = 3.1415927 - fVar7;
  }
  fVar9 = fVar7 * fVar7;
  fVar7 = (((((2.7525562e-06 - fVar9 * 2.3889859e-08) * fVar9 - 0.00019840874) * fVar9 + 0.008333331
            ) * fVar9 - 0.16666667) * fVar9 + 1.0) * fVar7;
  fVar15 = DAT_1464aa7c0 * fVar7;
  fVar6 = fVar15 + fVar15;
  fVar5 = (((((2.4760495e-05 - fVar9 * 2.6051615e-07) * fVar9 - 0.0013888378) * fVar9 + 0.041666638)
            * fVar9 - 0.5) * fVar9 + 1.0) * fVar5;
  fVar11 = -(DAT_1464aa7b8._4_4_ * fVar7);
  fVar11 = fVar11 + fVar11;
  fVar9 = local_108 * 0.5;
  fVar12 = fVar11 * fVar5 + fVar6 * (float)DAT_1464aa7b8 * fVar7;
  fVar15 = (fVar11 * DAT_1464aa7b8._4_4_ * fVar7 - fVar6 * fVar15) + 1.0;
  fVar7 = fVar6 * fVar5 - fVar11 * (float)DAT_1464aa7b8 * fVar7;
  if (fVar9 < 0.0) {
    fVar5 = fVar9 * 0.15915494 - 0.5;
  }
  else {
    fVar5 = fVar9 * 0.15915494 + 0.5;
  }
  fVar9 = fVar9 - (float)(int)fVar5 * 6.2831855;
  if (fVar9 <= 1.5707964) {
    if (-1.5707964 <= fVar9) {
      fVar13 = 1.0;
    }
    else {
      fVar9 = -3.1415927 - fVar9;
    }
  }
  else {
    fVar9 = 3.1415927 - fVar9;
  }
  fVar11 = fVar9 * fVar9;
  fVar5 = param_5[2];
  fVar9 = (((((2.7525562e-06 - fVar11 * 2.3889859e-08) * fVar11 - 0.00019840874) * fVar11 +
            0.008333331) * fVar11 - 0.16666667) * fVar11 + 1.0) * fVar9;
  fVar6 = *param_5;
  fVar16 = DAT_1464aa7a0 * fVar9;
  fVar14 = (float)DAT_1464aa798 * fVar9;
  fVar9 = DAT_1464aa798._4_4_ * fVar9;
  fVar13 = (((((2.4760495e-05 - fVar11 * 2.6051615e-07) * fVar11 - 0.0013888378) * fVar11 +
             0.041666638) * fVar11 - 0.5) * fVar11 + 1.0) * fVar13;
  fVar10 = fVar9 * fVar12 - fVar16 * fVar7;
  fVar17 = fVar16 * fVar15 - fVar14 * fVar12;
  fVar10 = fVar10 + fVar10;
  fVar8 = fVar14 * fVar7 - fVar9 * fVar15;
  fVar17 = fVar17 + fVar17;
  fVar8 = fVar8 + fVar8;
  fVar11 = param_5[1];
  fVar15 = (fVar8 * fVar9 - fVar17 * fVar16) + fVar10 * fVar13 + fVar15;
  fVar18 = (fVar17 * fVar14 - fVar10 * fVar9) + fVar8 * fVar13 + fVar12;
  fVar8 = (fVar10 * fVar16 - fVar8 * fVar14) + fVar17 * fVar13 + fVar7;
  fVar7 = param_5[3];
  fVar9 = fVar18 * fVar11 - fVar8 * fVar5;
  fVar12 = fVar15 * fVar5 - fVar18 * fVar6;
  fVar9 = fVar9 + fVar9;
  fVar13 = fVar8 * fVar6 - fVar15 * fVar11;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar13;
  local_118 = (fVar13 * fVar11 - fVar12 * fVar5) + fVar9 * fVar7 + fVar15;
  local_114 = (fVar9 * fVar5 - fVar13 * fVar6) + fVar12 * fVar7 + fVar8;
  local_110 = (fVar12 * fVar6 - fVar9 * fVar11) + fVar13 * fVar7 + fVar18;
  auVar1._4_4_ = local_114;
  auVar1._0_4_ = local_118;
  auVar1._8_4_ = local_110;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_3 + 4) = auVar1;
  local_118 = -local_118;
  local_110 = -local_110;
  local_114 = -local_114;
  uVar4 = FRotationMatrix::MakeFromXZ(local_e8,&local_118,&DAT_1464aa798);
  FMatrix::ToQuat(uVar4,&local_f8);
  fVar7 = param_3[4];
  auVar3._4_4_ = param_3[5] * fStack_100;
  auVar3._0_4_ = fVar7 * fStack_100;
  auVar3._8_4_ = param_3[6] * fStack_100;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_3 + 4) = auVar3;
  auVar2._4_4_ = param_4[1] + param_3[5] * fStack_100;
  auVar2._0_4_ = *param_4 + fVar7 * fStack_100;
  auVar2._8_4_ = param_4[2] + param_3[6] * fStack_100;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_3 + 4) = auVar2;
  fVar7 = *param_2;
  fVar5 = param_2[1];
  fVar13 = param_2[2];
  fVar6 = param_2[3];
  fVar15 = fVar13 * local_f8 * fRam00000001468660d4;
  fVar8 = fVar5 * local_f8 * fRam00000001468660d8;
  fVar10 = fVar7 * local_f8 * fRam00000001468660dc;
  fVar9 = fVar6 * fStack_f4 * fRam00000001468660c4;
  fVar11 = fVar7 * fStack_f4 * fRam00000001468660c8;
  fVar12 = fVar5 * fStack_f4 * fRam00000001468660cc;
  fVar14 = fVar7 * fStack_f0 * fRam00000001468660b4;
  fVar16 = fVar6 * fStack_f0 * fRam00000001468660b8;
  fVar17 = fVar13 * fStack_f0 * fRam00000001468660bc;
  *param_3 = fVar6 * local_f8 * _DAT_1468660d0 + fStack_ec * fVar7 +
             fVar13 * fStack_f4 * _DAT_1468660c0 + fVar5 * fStack_f0 * _DAT_1468660b0;
  param_3[1] = fVar15 + fStack_ec * fVar5 + fVar9 + fVar14;
  param_3[2] = fVar8 + fStack_ec * fVar13 + fVar11 + fVar16;
  param_3[3] = fVar10 + fStack_ec * fVar6 + fVar12 + fVar17;
  return;
}



// FUNCTION 140a3b250 FUN_140a3b250 body=1071 status=ok
// SIG undefined FUN_140a3b250(void)

void FUN_140a3b250(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res20;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x590) <= param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x598) * 0x58 + 0x28 + *(longlong *)(param_1 + 0x588);
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar6 + 8)) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar6 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar6 = ALoreItem::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar7 = (longlong)param_2 * 0x58;
  lVar6 = *(longlong *)(param_1 + 0x588) + 0x28 + lVar7;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar6 + 8)) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar6 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar6 = ALoreItem::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  FUN_140a39b80(param_1,lVar3,*(undefined1 *)(lVar7 + 0x50 + *(longlong *)(param_1 + 0x588)));
  FUN_140ec2ee0(*(undefined8 *)(param_1 + 0x5a0));
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FName::FName(&local_res20,L"NotifyTriggerTouched",1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  lVar6 = *(longlong *)(param_1 + 0x588) + lVar7;
  local_30 = local_res20;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar6 + 8)) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar6 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar6 = UUGRichTextBlock::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x588) + lVar7;
  lVar3 = FWeakObjectPtr::Get(lVar7);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar7 + 8)) {
      return;
    }
    if (*(longlong *)(lVar7 + 0x10) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar7);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar6 = UUGRichTextBlock::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_1407665e0(*(longlong *)(lVar3 + 0x460) + 0x180,param_1);
    lVar3 = *(longlong *)(lVar3 + 0x460);
    plVar5 = (longlong *)(lVar3 + 0x180);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
    iVar1 = *(int *)(lVar3 + 0x188);
    *(int *)(lVar3 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
    }
    puVar4 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar5);
    *puVar4 = local_38;
    puVar4[1] = local_34;
    *(undefined8 *)(puVar4 + 2) = local_30;
    *(int *)(param_1 + 0x598) = param_2;
  }
  return;
}



// FUNCTION 140a3b680 FUN_140a3b680 body=1758 status=ok
// SIG undefined FUN_140a3b680(void)

void FUN_140a3b680(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong lVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulonglong local_res10;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x3c);
    lVar8 = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x44);
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0xa0);
    lVar6 = lVar8;
    lVar11 = lVar8;
    if (lVar7 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar6 = *(longlong *)(lVar7 + 0x1850);
        lVar11 = lVar7;
      }
    }
    *(longlong *)(param_1 + 0x40) = lVar6;
    if (lVar6 == 0) {
      lVar7 = 0;
      lVar6 = lVar8;
    }
    else {
      lVar6 = FUN_140ad6100(lVar6,lVar11);
      lVar7 = *(longlong *)(param_1 + 0x40);
    }
    *(longlong *)(param_1 + 0x48) = lVar6;
    lVar5 = lVar8;
    if (lVar7 != 0) {
      lVar5 = *(longlong *)(lVar7 + 0x550);
    }
    *(longlong *)(param_1 + 0x50) = lVar5;
    if (lVar6 == 0) {
      local_res10 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar6 + 0x4c8);
    }
    *(longlong *)(param_1 + 0x68) = lVar8;
    if ((((lVar7 != 0) && (lVar5 != 0)) && (lVar6 != 0)) &&
       (lVar7 = FUN_140ad4e30(lVar5,*(undefined8 *)(lVar6 + 0x4c8)), lVar7 != 0)) {
      local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_70 = DAT_1468b5d98;
      local_68 = DAT_1468b5da0;
      local_60 = DAT_1468b5da8;
      cVar12 = '\0';
      if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
        cVar12 = *(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
      }
      local_res10 = local_res10 & 0xffffffff00000000;
      if (cVar12 != '\0') {
        FUN_142710360(lVar11,&local_res10);
      }
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x4d0);
      lVar8 = FUN_140ad4b90(*(undefined8 *)(param_1 + 0x50),uVar1);
      if (lVar8 == 0) {
        local_78 = *(undefined8 *)(param_2 + 0x30);
        uVar14 = (undefined4)local_78;
        uVar22 = (undefined4)((ulonglong)local_78 >> 0x20);
        local_70 = *(float *)(param_2 + 0x38);
        uVar25 = (undefined4)*(undefined8 *)(param_2 + 0x3c);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x3c) >> 0x20);
        uVar15 = *(undefined4 *)(param_2 + 0x44);
      }
      else {
        uVar9 = FUN_140ad67f0(lVar7,local_58,cVar12,local_res10 & 0xffffffff);
        FUN_140a2ed40(param_1,lVar8 + 0x10,uVar9,*(undefined8 *)(param_1 + 0x48),&local_78,&local_68
                     );
        uVar14 = (undefined4)local_78;
        uVar22 = (undefined4)((ulonglong)local_78 >> 0x20);
        uVar25 = (undefined4)local_68;
        uVar26 = (undefined4)((ulonglong)local_68 >> 0x20);
        uVar15 = local_60;
      }
      fVar16 = local_70;
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x738))();
      uVar13 = FUN_140ae1db0(*(undefined8 *)(param_1 + 0x50),uVar1);
      lVar8 = *(longlong *)(param_1 + 0x50);
      *(ulonglong *)(param_1 + 0x7c) = CONCAT44(uVar22,uVar14);
      *(ulonglong *)(param_1 + 0x88) = CONCAT44(uVar22,uVar14);
      *(ulonglong *)(param_1 + 0x94) = CONCAT44(uVar22,uVar14);
      *(undefined4 *)(param_1 + 0xa8) = uVar13;
      *(float *)(param_1 + 0x84) = fVar16;
      *(float *)(param_1 + 0x90) = fVar16;
      *(float *)(param_1 + 0x9c) = fVar16;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar8 + 0x58);
      uVar14 = FUN_140ae1de0(*(undefined8 *)(param_1 + 0x50),uVar1);
      lVar8 = *(longlong *)(param_1 + 0x50);
      *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uVar26,uVar25);
      *(ulonglong *)(param_1 + 0xc4) = CONCAT44(uVar26,uVar25);
      *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uVar26,uVar25);
      *(undefined4 *)(param_1 + 0xc0) = uVar15;
      *(undefined4 *)(param_1 + 0xcc) = uVar15;
      *(undefined4 *)(param_1 + 0xd8) = uVar15;
      *(undefined8 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xe4) = uVar14;
      *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar8 + 0x58);
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x748))();
      FWeakObjectPtr::operator=(param_1 + 0x70,uVar9);
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x748))();
      pfVar10 = (float *)FUN_140ad67f0(lVar7,local_58,cVar12,local_res10 & 0xffffffff);
      fVar16 = *(float *)(lVar8 + 0x210);
      fVar2 = *(float *)(lVar8 + 0x214);
      fVar17 = *(float *)(lVar8 + 0x218);
      fVar3 = *(float *)(lVar8 + 0x21c);
      fVar21 = *pfVar10 * *(float *)(lVar8 + 0x230);
      fVar23 = pfVar10[1] * *(float *)(lVar8 + 0x234);
      fVar24 = pfVar10[2] * *(float *)(lVar8 + 0x238);
      fVar18 = fVar24 * fVar2 - fVar23 * fVar17;
      fVar19 = fVar21 * fVar17 - fVar24 * fVar16;
      fVar20 = fVar23 * fVar16 - fVar21 * fVar2;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar21 = (float)local_78 -
               ((fVar20 * fVar2 - fVar19 * fVar17) + fVar3 * fVar18 + fVar21 +
               *(float *)(lVar8 + 0x220));
      fVar17 = local_78._4_4_ -
               ((fVar18 * fVar17 - fVar20 * fVar16) + fVar3 * fVar19 + fVar23 +
               *(float *)(lVar8 + 0x224));
      fVar16 = local_70 -
               ((fVar19 * fVar16 - fVar18 * fVar2) + fVar3 * fVar20 + fVar24 +
               *(float *)(lVar8 + 0x228));
      fVar16 = SQRT(fVar21 * fVar21 + fVar17 * fVar17 + fVar16 * fVar16);
      if ((*(byte *)(lVar7 + 0x78) & 1) != 0) {
        fVar16 = *(float *)(lVar7 + 0x7c);
      }
      lVar8 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(lVar8 + 0x680);
      *(float *)(param_1 + 0x160) = fVar16;
      *(float *)(param_1 + 0x164) = fVar16;
      *(float *)(param_1 + 0x168) = fVar16;
      *(undefined8 *)(param_1 + 0x16c) = 0;
      *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar8 + 0x58);
      lVar8 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(lVar8 + 0x680);
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(lVar8 + 0x58);
      lVar8 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar8 + 0x680);
      *(undefined8 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar8 + 0x58);
      lVar8 = *(longlong *)(param_1 + 0x50);
      uVar15 = *(undefined4 *)(lVar8 + 0x680);
      uVar14 = FUN_140a39450(param_1,lVar7);
      *(undefined4 *)(param_1 + 0x184) = uVar14;
      *(undefined4 *)(param_1 + 0x188) = uVar14;
      *(undefined4 *)(param_1 + 0x18c) = uVar14;
      *(undefined4 *)(param_1 + 0x198) = uVar15;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined1 *)(param_1 + 0x19c) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar8 + 0x58);
      lVar8 = *(longlong *)(param_1 + 0x50);
      uVar15 = *(undefined4 *)(lVar8 + 0x680);
      uVar14 = FUN_140a394d0(param_1,lVar7);
      *(undefined4 *)(param_1 + 0x1a8) = uVar14;
      *(undefined4 *)(param_1 + 0x1ac) = uVar14;
      *(undefined4 *)(param_1 + 0x1b0) = uVar14;
      *(undefined4 *)(param_1 + 0x1bc) = uVar15;
      *(undefined8 *)(param_1 + 0x1b4) = 0;
      *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(lVar8 + 0x58);
      lVar8 = *(longlong *)(param_1 + 0x50);
      uVar15 = *(undefined4 *)(lVar8 + 0x680);
      uVar14 = FUN_140a39490(param_1,lVar7);
      *(undefined4 *)(param_1 + 0x1cc) = uVar14;
      *(undefined4 *)(param_1 + 0x1d0) = uVar14;
      *(undefined4 *)(param_1 + 0x1d4) = uVar14;
      *(undefined4 *)(param_1 + 0x1e0) = uVar15;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)(lVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(lVar8 + 0x58);
      uVar15 = FUN_140ae1e10(*(undefined8 *)(param_1 + 0x50),uVar1);
      lVar7 = *(longlong *)(param_1 + 0x50);
      uVar1 = *(undefined4 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xf4) = uVar1;
      *(undefined4 *)(param_1 + 0xf8) = uVar1;
      *(undefined4 *)(param_1 + 0xfc) = uVar1;
      *(undefined4 *)(param_1 + 0x108) = uVar15;
      *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(lVar7 + 0x50);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar7 + 0x54);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar7 + 0x58);
      lVar7 = *(longlong *)(param_1 + 0x50);
      uVar1 = *(undefined4 *)(lVar7 + 0x684);
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      *(undefined4 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x204) = uVar1;
      *(undefined1 *)(param_1 + 0x208) = *(undefined1 *)(lVar7 + 0x50);
      *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(lVar7 + 0x54);
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar7 + 0x58);
    }
  }
  return;
}



// FUNCTION 140a3bd60 FUN_140a3bd60 body=298 status=ok
// SIG undefined FUN_140a3bd60(void)

void FUN_140a3bd60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  longlong lVar7;
  
  if (param_2 != 0) {
    FUN_142fcdcc0();
    *(undefined8 *)(param_1 + 0x1e0) = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0x1e8) = DAT_1468b5da8;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
    if (lVar1 != 0) {
      lVar6 = FUN_1413f82e0();
      iVar4 = *(int *)(lVar6 + 0x90);
      lVar7 = (longlong)iVar4;
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < iVar4) ||
         (lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88),
         *(longlong *)(lVar7 + (longlong)iVar4 * 8) != lVar6 + 0x88)) {
        uVar3 = (uint)lVar7 & 0xffffff00;
      }
      else {
        uVar3 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      }
      if ((char)uVar3 != '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x168);
        if (lVar1 == 0) {
          uVar9 = (undefined4)DAT_1468b5da0;
          uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          uVar5 = DAT_1468b5da8;
        }
        else {
          local_18 = *(float *)(lVar1 + 0x210);
          fStack_14 = *(float *)(lVar1 + 0x214);
          fStack_10 = *(float *)(lVar1 + 0x218);
          fStack_c = *(float *)(lVar1 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
          auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
          auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
          auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
          iVar4 = movmskps(uVar3,auVar2);
          if (iVar4 != 0) {
            *(float *)(lVar1 + 0x250) = local_18;
            *(float *)(lVar1 + 0x254) = fStack_14;
            *(float *)(lVar1 + 600) = fStack_10;
            *(float *)(lVar1 + 0x25c) = fStack_c;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
            *(undefined8 *)(lVar1 + 0x260) = *puVar8;
            *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
          uVar5 = *(undefined4 *)(lVar1 + 0x268);
        }
        *(ulonglong *)(param_1 + 0x1e0) = CONCAT44(uVar10,uVar9);
        *(undefined4 *)(param_1 + 0x1e8) = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 140a3be90 FUN_140a3be90 body=316 status=ok
// SIG undefined FUN_140a3be90(void)

void FUN_140a3be90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd8);
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x12a0) = uVar1;
  if (0.0 < *(float *)(param_2 + 0xdc)) {
    *(undefined4 *)(param_1 + 0x678) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined1 *)(param_1 + 0x675) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined1 *)(param_1 + 0x676) = *(undefined1 *)(param_2 + 0xe1);
    FUN_140a296b0(param_1 + 0x680,param_2 + 0xf0);
    *(uint *)(param_1 + 0x690) = *(uint *)(param_1 + 0x690) & 0xbf7fffff;
    FUN_142fc8dc0(param_2,param_2 + 0xf0,0x3f800000);
    *(undefined4 *)(param_2 + 0xdc) = 0;
  }
  if (*(float *)(param_1 + 0x630) <= 0.0) {
    uVar5 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xc80) = uVar5;
  *(undefined8 *)(param_1 + 0xc88) = 0;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (lVar2 != 0) {
    lVar4 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar2 + 0xc3) != '\0')) {
      *(undefined1 *)(param_1 + 0xc84) = 1;
      *(undefined4 *)(param_1 + 0xc8c) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 140a3bfd0 Begin body=27 status=ok
// SIG undefined Begin(void)

void UWatcherBState::Begin(longlong param_1)

{
  FUN_142fcdcc0();
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  return;
}



// FUNCTION 140a3bff0 FUN_140a3bff0 body=181 status=ok
// SIG undefined FUN_140a3bff0(void)

void FUN_140a3bff0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    uVar2 = FUN_140a2e230();
    uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x120);
    fVar3 = (float)FRichCurve::Eval(uVar1,uVar2,0);
    uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa8);
    fVar4 = (float)FRichCurve::Eval(uVar1,uVar2,0);
    fVar5 = *(float *)(param_1 + 0x38);
    if (*(float *)(param_1 + 0x38) <= fVar3) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(param_1 + 0x3c);
    if (fVar4 <= *(float *)(param_1 + 0x3c)) {
      fVar6 = fVar4;
    }
    *(float *)(param_1 + 0x1a0) = fVar3;
    *(float *)(param_1 + 0x1a4) = fVar4;
    *(undefined1 *)(param_1 + 0x19c) = 1;
    *(float *)(param_1 + 0x38) = fVar5;
    *(float *)(param_1 + 0x3c) = fVar6;
    FUN_142fcdcc0(param_1,param_2);
  }
  return;
}



// FUNCTION 140a3c0b0 FUN_140a3c0b0 body=572 status=ok
// SIG undefined FUN_140a3c0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a3c0b0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  char local_64;
  longlong local_58;
  longlong local_50;
  undefined8 local_38;
  char local_30;
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
    plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xa0);
    if ((plVar5 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar5 + 0x148))(), lVar3 != 0)) {
      local_90 = AGGatewayActor::GetPrivateStaticClass();
      if (local_90 != 0) {
        lVar4 = AGGatewayActor::GetPrivateStaticClass();
        lVar6 = local_90;
        do {
          if (lVar6 == lVar4) goto LAB_140a3c130;
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
      }
      local_90 = 0;
LAB_140a3c130:
      local_88[0] = 5;
      local_30 = '\0';
      local_98 = lVar3;
      FUN_14044bc80(&local_80,&local_98,&local_90);
      FUN_14045a130(local_88);
      while (local_64 == '\0') {
        if (local_58 != 0) {
          *(longlong *)(param_1 + 0x38) = local_58;
          break;
        }
        FUN_14045a130(local_88);
      }
      if (local_30 != '\0') {
        local_30 = '\0';
        UWorld::RemoveOnActorSpawnedHandler(local_80,local_38);
        if (local_50 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (lVar3 != 0) {
      plVar8 = (longlong *)(lVar3 + 0x490);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_1441f18f8;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)FUN_140a38730;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_1441f1940;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_98);
        iVar2 = *(int *)(lVar3 + 0x498);
        *(int *)(lVar3 + 0x498) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x49c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x5c0);
        *(undefined1 *)(param_1 + 0x41) = uVar1;
        *(undefined1 *)(param_1 + 0x40) = uVar1;
        *(undefined1 *)(param_1 + 0x59) = 0;
        FUN_140a38730(param_1,0);
        FUN_140a296b0(param_1 + 0x120,param_1 + 0x720);
      }
    }
  }
  return;
}



// FUNCTION 140a3c310 FUN_140a3c310 body=247 status=ok
// SIG undefined FUN_140a3c310(void)

void FUN_140a3c310(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (0.0 < *(float *)(param_2 + 0xdc)) {
      *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0xdc);
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0xe0);
      FUN_140a296b0(param_1 + 0x40,param_2 + 0xf0);
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xbf7fffff;
      FUN_142fc8dc0(param_2,param_2 + 0xf0,0x3f800000);
      *(undefined4 *)(param_2 + 0xdc) = 0;
    }
    *(undefined8 *)(param_1 + 0xc5c) = 0;
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (lVar1 != 0) {
      lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(char *)(lVar1 + 0xc3) != '\0')) {
        *(undefined1 *)(param_1 + 0xc58) = 1;
        *(undefined4 *)(param_1 + 0xc60) = 0x3f800000;
      }
    }
  }
  return;
}



// FUNCTION 140a3c410 FUN_140a3c410 body=120 status=ok
// SIG undefined FUN_140a3c410(void)

void FUN_140a3c410(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar1 != 0) {
      lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(lVar1 + 0xb8) != 0)) {
        uVar4 = FUN_14307dab0();
        *(undefined4 *)(param_1 + 0x30) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 140a3c4b0 FUN_140a3c4b0 body=136 status=ok
// SIG undefined FUN_140a3c4b0(void)

void FUN_140a3c4b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0xa0);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140cff230(lVar3);
      if (lVar3 != 0) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x70);
      }
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 140a3c540 FUN_140a3c540 body=416 status=ok
// SIG undefined FUN_140a3c540(void)

void FUN_140a3c540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 0xa14) = 0x14;
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0xa0);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = FUN_1429e18b0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar3 != 0) {
    lVar4 = FUN_14216ee80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a3c603;
  }
  lVar3 = 0;
LAB_140a3c603:
  *(bool *)(param_1 + 0x981) = lVar3 != 0;
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)FUN_1426e1ca0(*(undefined8 *)(lVar1 + 0x528),local_28);
    *(undefined8 *)(param_1 + 0x9c4) = *puVar5;
    *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(puVar5 + 1);
    uVar6 = FUN_1426e1d20(*(undefined8 *)(lVar1 + 0x528),local_28);
    puVar5 = (undefined8 *)FRotator::Quaternion(uVar6,local_18);
    uVar6 = puVar5[1];
    *(undefined8 *)(param_1 + 0x9f0) = *puVar5;
    *(undefined8 *)(param_1 + 0x9f8) = uVar6;
    lVar1 = *(longlong *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(lVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(lVar1 + 0x58);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x488);
    if (lVar1 != 0) {
      lVar3 = FUN_14148cad0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined1 *)(lVar1 + 0x12e8) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140a3c6e0 FUN_140a3c6e0 body=111 status=ok
// SIG undefined FUN_140a3c6e0(void)

void FUN_140a3c6e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 0x180) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x184) = DAT_1468b5d88._4_4_;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_142fcadd0(param_2,param_1 + 0x158,local_28);
  puVar2 = (undefined8 *)FRotator::Quaternion(local_28,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x170) = *puVar2;
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  return;
}



// FUNCTION 140a3c750 thunk_FUN_142f71d80 body=5 status=ok
// SIG undefined thunk_FUN_142f71d80(void)

longlong thunk_FUN_142f71d80(void)

{
  if (DAT_146b43150 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"Mission",&DAT_146b43150,
                  UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary,0x408,0x10000000,0,
                  L"Engine",&LAB_142f70e00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b43150;
}



// FUNCTION 140a3c760 FUN_140a3c760 body=326 status=ok
// SIG undefined FUN_140a3c760(void)

void FUN_140a3c760(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  longlong local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1405973c0();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  cVar2 = FUN_14059ee90(param_1 + 800);
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (cVar2 == '\0') {
    if (lVar1 != 0) {
      local_48 = *(undefined4 *)(param_1 + 0x220);
      uStack_44 = *(undefined4 *)(param_1 + 0x224);
      local_40 = *(undefined4 *)(param_1 + 0x228);
      local_58 = 0;
      local_50 = 0;
      local_20 = CONCAT44(local_20._4_4_,local_40);
      FUN_1405a1e30(&local_28,param_1,lVar1,&local_48,0x42480000,&local_58);
      FUN_140591060(&local_28);
    }
  }
  else if (lVar1 == 0) {
    FUN_1405ac8f0(param_1 + 800,0,4);
  }
  else {
    local_28 = 0;
    local_20 = 0;
    FUN_1405a2d20(*(undefined8 *)(param_1 + 800),&local_48,lVar1,0,0,&local_28);
    FUN_140591060(&local_48);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a3c8b0 FUN_140a3c8b0 body=1146 status=ok
// SIG undefined FUN_140a3c8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3c8b0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_88 [8];
  float local_80;
  undefined1 local_78 [8];
  float local_70;
  undefined1 local_68 [8];
  float local_60;
  undefined1 local_58 [8];
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [32];
  
  FUN_1422406d0();
  if ((char)param_1[0x25] == '\x03') {
    lVar3 = param_1[0x2d];
    if (lVar3 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = (float)DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar3 + 0x220);
      local_40 = *(float *)(lVar3 + 0x228);
    }
    *(undefined8 *)((longlong)param_1 + 0x574) = local_48;
    *(float *)((longlong)param_1 + 0x57c) = local_40;
  }
  FUN_140a411a0(param_1);
  uVar10 = *(uint *)(param_1 + 0x99);
  lVar3 = param_1[199];
  iVar5 = UMeshComponent::GetNumOverrideMaterials(param_1[0xa4]);
  iVar6 = UMeshComponent::GetNumOverrideMaterials(param_1[0xa3]);
  uVar7 = iVar6 + (int)lVar3 + iVar5;
  if ((uVar10 == 0xffffffff) || ((int)uVar7 < (int)uVar10)) {
    uVar10 = uVar7;
  }
  if (0 < (int)uVar10) {
    uVar9 = (ulonglong)uVar10;
    do {
      cVar4 = *(char *)((longlong)param_1 + 0x5ac);
      if (cVar4 == '\0') {
        lVar3 = param_1[0xb5];
        *(int *)(param_1 + 0xb5) = (int)lVar3 + 1;
        FUN_140a37190(param_1,(longlong)(int)lVar3 * 0x38 + param_1[0xc6]);
        if ((int)param_1[0xb5] == (int)param_1[199]) {
          *(undefined4 *)(param_1 + 0xb5) = 0;
          *(undefined1 *)((longlong)param_1 + 0x5ac) = 1;
        }
      }
      else if (cVar4 == '\x01') {
        cVar4 = FUN_140a5ef60(param_1[0xa3]);
        if (cVar4 != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x5ac) = 2;
        }
      }
      else if (cVar4 == '\x02') {
        cVar4 = FUN_140a5ef60(param_1[0xa4]);
        if (cVar4 != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x5ac) = 0;
        }
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140a36200(param_1,param_2);
  FUN_140a407d0(param_1);
  FUN_140a772e0(param_1[0xa3],param_2,1);
  FUN_140a772e0(param_1[0xa4],param_2,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146866708) {
    _Init_thread_header(&DAT_146866708);
    if (DAT_146866708 == -1) {
      FName::FName(&DAT_146866700,L"Baseframe_Entrance",1);
      _Init_thread_footer(&DAT_146866708);
    }
  }
  (**(code **)(*(longlong *)param_1[0xa1] + 0x428))
            ((longlong *)param_1[0xa1],local_38,DAT_146866700);
  (**(code **)(*(longlong *)param_1[0xa1] + 0x428))
            ((longlong *)param_1[0xa1],local_88,param_1[0xa5]);
  (**(code **)(*(longlong *)param_1[0xa1] + 0x428))
            ((longlong *)param_1[0xa1],local_78,param_1[0xa6]);
  (**(code **)(*(longlong *)param_1[0xa1] + 0x428))
            ((longlong *)param_1[0xa1],local_68,param_1[0xa7]);
  (**(code **)(*(longlong *)param_1[0xa1] + 0x428))
            ((longlong *)param_1[0xa1],local_58,param_1[0xa8]);
  plVar1 = param_1 + 0xb7;
  plVar2 = param_1 + 0xb6;
  local_40 = local_80 - 5000.0;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142330140(uVar8,local_res8,1,local_88,&local_48,plVar2,plVar1,param_1 + 0xd0,0);
  local_40 = local_70 - 5000.0;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142330140(uVar8,local_res8,1,local_78,&local_48,plVar2,plVar1,param_1 + 0xca,0);
  local_40 = local_60 - 5000.0;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142330140(uVar8,local_res8,1,local_68,&local_48,plVar2,plVar1,param_1 + 0xce,0);
  local_40 = local_50 - 5000.0;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142330140(uVar8,local_res8,1,local_58,&local_48,plVar2,plVar1,param_1 + 0xcc,0);
  return;
}



// FUNCTION 140a3cd30 FUN_140a3cd30 body=867 status=ok
// SIG undefined FUN_140a3cd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3cd30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined8 local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  float local_6c;
  
  FUN_1422406d0();
  uVar7 = 0;
  plVar8 = *(longlong **)(param_1 + 0x458);
  fVar14 = 1.0;
  uVar9 = (longlong)*(int *)(param_1 + 0x460) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x460) < plVar8) {
    uVar9 = uVar7;
  }
  if (uVar9 != 0) {
    do {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x168);
        local_108 = 0;
        local_100 = 0.0;
        local_res8[0] = 0;
        if (lVar2 == 0) {
          local_b4 = DAT_1468b5d98;
          puVar4 = &local_bc;
          local_bc = _DAT_1468b5d90;
        }
        else {
          puVar4 = (undefined8 *)&local_f8;
          local_f8 = *(undefined4 *)(lVar2 + 0x220);
          local_f0 = *(undefined4 *)(lVar2 + 0x228);
          uStack_f4 = *(undefined4 *)(lVar2 + 0x224);
        }
        local_a8 = *puVar4;
        local_a0 = *(undefined4 *)(puVar4 + 1);
        FUN_14059b680(lVar1,&local_a8,&local_108,local_res8);
        lVar2 = *(longlong *)(lVar1 + 0x460);
        lVar3 = *(longlong *)(lVar1 + 0x168);
        if (lVar3 == 0) {
          local_98 = _DAT_1468b5d90;
          puVar4 = &local_98;
          local_90 = DAT_1468b5d98;
        }
        else {
          puVar4 = (undefined8 *)&local_ec;
          local_ec = *(undefined4 *)(lVar3 + 0x220);
          local_e4 = *(undefined4 *)(lVar3 + 0x228);
          uStack_e8 = *(undefined4 *)(lVar3 + 0x224);
        }
        if (lVar3 == 0) {
          local_8c = _DAT_1468b5d90;
          puVar5 = &local_8c;
          local_84 = DAT_1468b5d98;
        }
        else {
          puVar5 = (undefined8 *)&local_e0;
          local_e0 = *(undefined4 *)(lVar3 + 0x220);
          local_d8 = *(undefined4 *)(lVar3 + 0x228);
          local_dc = *(undefined4 *)(lVar3 + 0x224);
        }
        if (lVar3 == 0) {
          local_80 = _DAT_1468b5d90;
          puVar6 = &local_80;
          local_78 = DAT_1468b5d98;
        }
        else {
          puVar6 = (undefined8 *)&local_d4;
          local_d4 = *(undefined4 *)(lVar3 + 0x220);
          local_cc = *(undefined4 *)(lVar3 + 0x228);
          local_d0 = *(undefined4 *)(lVar3 + 0x224);
        }
        local_6c = *(float *)(puVar6 + 1);
        fVar12 = 1.0 / *(float *)(lVar1 + 0x468);
        fVar13 = (ABS(local_100 - local_6c) - *(float *)(lVar2 + 0x238) * *(float *)(lVar2 + 0x718))
                 * fVar12;
        if (0.0 <= fVar13) {
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
        }
        else {
          fVar13 = 0.0;
        }
        fVar10 = fVar12 * (ABS(local_108._4_4_ - *(float *)((longlong)puVar5 + 4)) -
                          *(float *)(lVar2 + 0x234) * *(float *)(lVar2 + 0x714));
        if (0.0 <= fVar10) {
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
        }
        else {
          fVar10 = 0.0;
        }
        fVar12 = fVar12 * (ABS((float)local_108 - (float)*puVar4) -
                          *(float *)(lVar2 + 0x230) * *(float *)(lVar2 + 0x710));
        if (0.0 <= fVar12) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
        if (fVar10 <= fVar12) {
          fVar10 = fVar12;
        }
        if (fVar10 <= fVar13) {
          fVar10 = fVar13;
        }
        *(float *)(lVar1 + 0x46c) = fVar10;
        if (fVar10 < fVar14) {
          fVar14 = fVar10;
        }
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar9);
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    uVar11 = FUN_1405a9460(*(longlong *)(param_1 + 0x468),fVar14,0x3f80000000000000);
    FUN_1405aa060(*(undefined8 *)(param_1 + 0x468),uVar11,0,4);
  }
  return;
}



// FUNCTION 140a3d0a0 FUN_140a3d0a0 body=56 status=ok
// SIG undefined FUN_140a3d0a0(void)

void FUN_140a3d0a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_142357eb0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a3d0e0 FUN_140a3d0e0 body=505 status=ok
// SIG undefined FUN_140a3d0e0(void)

void FUN_140a3d0e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_38;
  int local_30;
  
  FUN_142357eb0();
  if (param_1[0x5b] != 0) {
    if (param_1[0x24] == 0) {
      lVar2 = FUN_1423407b0(param_1);
      if (lVar2 == 0) goto LAB_140a3d2c5;
    }
    if ((param_1[0x5c] != 0) && (0.0001 < *(float *)((longlong)param_1 + 0x2fc))) {
      lVar2 = param_1[0x24];
      fVar7 = -1.0;
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      UWorld::GetPlayerControllerIterator(lVar2,&local_38);
      while( true ) {
        if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar2 = FWeakObjectPtr::Get();
        if (lVar2 != 0) {
          lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar2 = FUN_140599e90();
            if (lVar2 != 0) {
              fVar5 = (float)*(undefined8 *)(lVar2 + 0x2e0) - *(float *)(param_1 + 0x44);
              fVar6 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x2e0) >> 0x20) -
                      *(float *)((longlong)param_1 + 0x224);
              fVar4 = *(float *)(lVar2 + 0x2e8) - *(float *)(param_1 + 0x45);
              fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
              if ((fVar4 < fVar7) || (fVar7 < 0.0)) {
                fVar7 = fVar4;
              }
            }
          }
        }
        local_30 = local_30 + 1;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if ((SQRT(fVar7) < *(float *)(param_1 + 0x5f)) ||
         (fVar7 = (SQRT(fVar7) - *(float *)(param_1 + 0x5f)) / *(float *)((longlong)param_1 + 0x2fc)
         , fVar7 < 0.0)) {
        fVar7 = 0.0;
      }
      else if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      FUN_1405aa060(param_1[0x5c],fVar7,0,4);
      return;
    }
  }
LAB_140a3d2c5:
                    /* WARNING: Could not recover jumptable at 0x000140a3d2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  return;
}



// FUNCTION 140a3d2e0 FUN_140a3d2e0 body=755 status=ok
// SIG undefined FUN_140a3d2e0(void)

void FUN_140a3d2e0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    fVar8 = 0.0;
    fVar9 = 0.0;
    if ((*(char *)(param_1 + 0x41) == '\x04') && (*(longlong *)(param_1 + 0x38) != 0)) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x5c4);
      iVar5 = 0;
      if (iVar2 != -1) {
        iVar5 = iVar2;
      }
      lVar4 = FUN_140a332a0(param_1,iVar5);
      if ((lVar4 != 0) && (lVar4 = FUN_140e50ff0(lVar4), lVar4 != 0)) {
        if (iVar2 == -1) {
          fVar9 = *(float *)(lVar4 + 0x130);
          fVar8 = *(float *)(lVar4 + 0x134);
        }
        else {
          fVar9 = *(float *)(lVar4 + 0x128);
          fVar8 = *(float *)(lVar4 + 300);
        }
      }
    }
    if (*(char *)(param_1 + 0x88) == '\0') {
      bVar3 = *(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x80);
    }
    else {
      bVar3 = *(float *)(param_1 + 0x80) <= 0.0;
    }
    if (bVar3) {
      uVar6 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0xd24),fVar9,param_2,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      *(undefined4 *)(param_1 + 0xd24) = uVar6;
      uVar6 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0xd20),fVar8,param_2,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      *(undefined4 *)(param_1 + 0xd20) = uVar6;
    }
    else {
      if ((*(longlong *)(param_1 + 0x38) == 0) || (lVar4 = FUN_14110d710(), lVar4 == 0)) {
        if (*(float *)(param_1 + 0x84) <= 0.0) {
          fVar7 = 1.0;
        }
        else {
          fVar7 = *(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x84);
          if (0.0 <= fVar7) {
            if (1.0 <= fVar7) {
              fVar7 = 1.0;
            }
          }
          else {
            fVar7 = 0.0;
          }
        }
        local_res8[0] = *(undefined1 *)(param_1 + 0x8c);
        fVar7 = (float)UKismetMathLibrary::Ease
                                 (0,0x3f800000,fVar7,local_res8,*(undefined4 *)(param_1 + 0x90),
                                  *(undefined4 *)(param_1 + 0x94));
        if (*(char *)(param_1 + 0x88) != '\0') {
          fVar7 = 1.0 - fVar7;
        }
        if (fVar7 < 0.5) {
          return;
        }
        uVar6 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0xd24),fVar9,param_2,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
        *(undefined4 *)(param_1 + 0xd24) = uVar6;
        uVar6 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0xd20),fVar8,param_2,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      }
      else {
        if (*(char *)(param_1 + 0x88) == '\0') {
          fVar7 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x80);
        }
        else {
          fVar7 = *(float *)(param_1 + 0x80);
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        fVar1 = *(float *)(param_1 + 0xd20);
        uVar6 = FMath::FInterpConstantTo
                          (*(float *)(param_1 + 0xd24),fVar9,param_2,
                           ABS(*(float *)(param_1 + 0xd24) - fVar9) * (1.0 / fVar7));
        *(undefined4 *)(param_1 + 0xd24) = uVar6;
        uVar6 = FMath::FInterpConstantTo
                          (*(undefined4 *)(param_1 + 0xd20),fVar8,param_2,
                           ABS(fVar1 - fVar8) * (1.0 / fVar7));
      }
      *(undefined4 *)(param_1 + 0xd20) = uVar6;
    }
  }
  return;
}



// FUNCTION 140a3d5e0 FUN_140a3d5e0 body=1965 status=ok
// SIG undefined FUN_140a3d5e0(void)

void FUN_140a3d5e0(longlong param_1,undefined8 param_2,longlong param_3,float *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 local_res18 [16];
  float local_88;
  float local_84;
  float local_80;
  float local_70;
  
  fVar7 = (float)param_2;
  if (param_3 != 0) {
    lVar6 = FUN_14290f280();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (plVar1 = *(longlong **)(param_3 + 0x460), plVar1 != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0x30) != 0)) {
      (**(code **)(*plVar1 + 0x548))(plVar1,fVar7,param_4);
      if (*(char *)(param_1 + 0x58) == '\0') {
        *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)param_4;
        *(float *)(param_1 + 0x7c) = param_4[2];
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_4 + 3);
        *(float *)(param_1 + 0xb8) = param_4[5];
        *(float *)(param_1 + 0xdc) = param_4[6];
        lVar6 = 0x720;
      }
      else {
        *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)param_4;
        *(float *)(param_1 + 100) = param_4[2];
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_4 + 3);
        *(float *)(param_1 + 0xa0) = param_4[5];
        *(float *)(param_1 + 0xd4) = param_4[6];
        lVar6 = 0x120;
      }
      FUN_140a296b0(param_1 + lVar6,param_4 + 0x10);
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
      if (*(char *)(param_1 + 0x88) == '\0') {
        bVar2 = *(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x80);
      }
      else {
        bVar2 = *(float *)(param_1 + 0x80) <= 0.0;
      }
      if (*(char *)(param_1 + 0x88) == '\0') {
        fVar8 = *(float *)(param_1 + 0x80) + fVar7;
      }
      else {
        fVar8 = *(float *)(param_1 + 0x80) - fVar7;
      }
      *(float *)(param_1 + 0x80) = fVar8;
      if (*(float *)(param_1 + 0x84) <= 0.0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = fVar8 / *(float *)(param_1 + 0x84);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
      }
      local_res18[0] = *(undefined1 *)(param_1 + 0x8c);
      fVar8 = (float)UKismetMathLibrary::Ease
                               (0,0x3f800000,fVar8,local_res18,*(undefined4 *)(param_1 + 0x90),
                                *(undefined4 *)(param_1 + 0x94));
      local_70 = *(float *)(param_1 + 100) +
                 (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 100)) * fVar8;
      *(ulonglong *)(param_1 + 0x68) =
           CONCAT44(*(float *)(param_1 + 0x60) +
                    (*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x60)) * fVar8,
                    *(float *)(param_1 + 0x5c) +
                    (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x5c)) * fVar8);
      *(float *)(param_1 + 0x70) = local_70;
      if (*(char *)(param_1 + 0xc4) == '\0') {
        fVar8 = *(float *)(param_1 + 0xbc) + fVar7;
      }
      else {
        fVar8 = *(float *)(param_1 + 0xbc) - fVar7;
      }
      *(float *)(param_1 + 0xbc) = fVar8;
      if (*(float *)(param_1 + 0xc0) <= 0.0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = fVar8 / *(float *)(param_1 + 0xc0);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
      }
      local_res18[0] = *(undefined1 *)(param_1 + 200);
      uVar9 = UKismetMathLibrary::Ease
                        (0,0x3f800000,fVar8,local_res18,*(undefined4 *)(param_1 + 0xcc),
                         *(undefined4 *)(param_1 + 0xd0));
      FUN_140a22ed0(uVar9,param_1 + 0x98);
      FUN_140a24b70(param_2,param_1 + 0xd4);
      FUN_140a24b70(param_2,param_1 + 0xf8);
      if (*(char *)(param_1 + 0x88) == '\0') {
        bVar3 = *(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x80);
      }
      else {
        bVar3 = *(float *)(param_1 + 0x80) <= 0.0;
      }
      if (((!bVar2) && (bVar3)) && (*(longlong *)(param_1 + 0x38) != 0)) {
        FUN_141112f50();
      }
      *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x68);
      param_4[2] = *(float *)(param_1 + 0x70);
      *(undefined8 *)(param_4 + 3) = *(undefined8 *)(param_1 + 0xa4);
      param_4[5] = *(float *)(param_1 + 0xac);
      param_4[6] = *(float *)(param_1 + 0xd8);
      FUN_140a296b0(param_4 + 0x10,*(longlong *)(param_1 + 0x30) + 0x1c0);
      FUN_140a3d2e0(param_1,fVar7);
      FRotator::Vector(param_4 + 3,&local_88);
      param_4[2] = *(float *)(param_1 + 0xd24) + param_4[2];
      fVar7 = *(float *)(param_1 + 0xd20);
      *param_4 = *param_4 - local_88 * fVar7;
      param_4[1] = param_4[1] - local_84 * fVar7;
      param_4[2] = param_4[2] - local_80 * fVar7;
      uVar4 = *(uint *)(param_1 + 0x130);
      if ((uVar4 >> 0x17 & 1) == 0) {
        uVar4 = ((uint)param_4[0x14] ^ uVar4) & 0x800000 ^ uVar4;
        *(uint *)(param_1 + 0x130) = uVar4;
        *(float *)(param_1 + 0x600) = param_4[0x148];
      }
      uVar5 = *(uint *)(param_1 + 0x730);
      if ((uVar5 >> 0x17 & 1) == 0) {
        uVar5 = ((uint)param_4[0x14] ^ uVar5) & 0x800000 ^ uVar5;
        *(uint *)(param_1 + 0x730) = uVar5;
        *(float *)(param_1 + 0xc00) = param_4[0x148];
      }
      fVar7 = param_4[0x14];
      fVar7 = (float)(((uVar4 | uVar5 | (uint)fVar7) ^ (uint)fVar7) & 0x800000 ^ (uint)fVar7);
      param_4[0x14] = fVar7;
      if (((uint)fVar7 >> 0x17 & 1) != 0) {
        param_4[0x148] =
             (*(float *)(param_1 + 0xc00) - *(float *)(param_1 + 0x600)) *
             *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x600);
      }
      uVar4 = *(uint *)(param_1 + 0x134);
      if ((uVar4 & 0x10) == 0) {
        uVar4 = ((uint)param_4[0x15] ^ uVar4) & 0x10 ^ uVar4;
        *(uint *)(param_1 + 0x134) = uVar4;
        *(float *)(param_1 + 0x624) = param_4[0x151];
      }
      uVar5 = *(uint *)(param_1 + 0x734);
      if ((uVar5 & 0x10) == 0) {
        uVar5 = ((uint)param_4[0x15] ^ uVar5) & 0x10 ^ uVar5;
        *(uint *)(param_1 + 0x734) = uVar5;
        *(float *)(param_1 + 0xc24) = param_4[0x151];
      }
      fVar7 = param_4[0x15];
      fVar7 = (float)(((uVar5 | uVar4 | (uint)fVar7) ^ (uint)fVar7) & 0x10 ^ (uint)fVar7);
      param_4[0x15] = fVar7;
      if (((uint)fVar7 & 0x10) != 0) {
        param_4[0x151] =
             (*(float *)(param_1 + 0xc24) - *(float *)(param_1 + 0x624)) *
             *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x624);
      }
      uVar4 = *(uint *)(param_1 + 0x134);
      if ((uVar4 & 8) == 0) {
        uVar4 = ((uint)fVar7 ^ uVar4) & 8 ^ uVar4;
        *(uint *)(param_1 + 0x134) = uVar4;
        *(float *)(param_1 + 0x620) = param_4[0x150];
      }
      uVar5 = *(uint *)(param_1 + 0x734);
      if ((uVar5 & 8) == 0) {
        uVar5 = ((uint)param_4[0x15] ^ uVar5) & 8 ^ uVar5;
        *(uint *)(param_1 + 0x734) = uVar5;
        *(float *)(param_1 + 0xc20) = param_4[0x150];
      }
      fVar7 = param_4[0x15];
      fVar7 = (float)(((uVar4 | (uint)fVar7 | uVar5) ^ (uint)fVar7) & 8 ^ (uint)fVar7);
      param_4[0x15] = fVar7;
      if (((uint)fVar7 & 8) != 0) {
        param_4[0x150] =
             (*(float *)(param_1 + 0xc20) - *(float *)(param_1 + 0x620)) *
             *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x620);
      }
      uVar4 = *(uint *)(param_1 + 0x130);
      if ((uVar4 >> 0x1e & 1) == 0) {
        uVar4 = ((uint)param_4[0x14] ^ uVar4) & 0x40000000 ^ uVar4;
        *(uint *)(param_1 + 0x130) = uVar4;
        *(float *)(param_1 + 0x60c) = param_4[0x14b];
      }
      uVar5 = *(uint *)(param_1 + 0x730);
      if ((uVar5 >> 0x1e & 1) == 0) {
        uVar5 = ((uint)param_4[0x14] ^ uVar5) & 0x40000000 ^ uVar5;
        *(uint *)(param_1 + 0x730) = uVar5;
        *(float *)(param_1 + 0xc0c) = param_4[0x14b];
      }
      fVar7 = param_4[0x14];
      fVar7 = (float)(((uVar5 | uVar4 | (uint)fVar7) ^ (uint)fVar7) & 0x40000000 ^ (uint)fVar7);
      param_4[0x14] = fVar7;
      if (((uint)fVar7 >> 0x1e & 1) != 0) {
        param_4[0x14b] =
             (*(float *)(param_1 + 0xc0c) - *(float *)(param_1 + 0x60c)) *
             *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x60c);
      }
      uVar4 = *(uint *)(param_1 + 0x130);
      if (-1 < (int)uVar4) {
        uVar4 = (uVar4 ^ (uint)fVar7) & 0x7fffffff ^ (uint)fVar7;
        *(uint *)(param_1 + 0x130) = uVar4;
        *(float *)(param_1 + 0x610) = param_4[0x14c];
      }
      uVar5 = *(uint *)(param_1 + 0x730);
      if (-1 < (int)uVar5) {
        uVar5 = (uVar5 ^ (uint)param_4[0x14]) & 0x7fffffff ^ (uint)param_4[0x14];
        *(uint *)(param_1 + 0x730) = uVar5;
        *(float *)(param_1 + 0xc10) = param_4[0x14c];
      }
      fVar7 = param_4[0x14];
      fVar7 = (float)(((uVar5 | uVar4 | (uint)fVar7) ^ (uint)fVar7) & 0x7fffffff ^
                     (uVar5 | uVar4 | (uint)fVar7));
      param_4[0x14] = fVar7;
      if ((int)fVar7 < 0) {
        param_4[0x14c] =
             (*(float *)(param_1 + 0xc10) - *(float *)(param_1 + 0x610)) *
             *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x610);
      }
      uVar4 = *(uint *)(param_1 + 0x134);
      if ((uVar4 & 1) == 0) {
        uVar4 = ((uint)param_4[0x15] ^ uVar4) & 1 ^ uVar4;
        *(uint *)(param_1 + 0x134) = uVar4;
        *(float *)(param_1 + 0x614) = param_4[0x14d];
      }
      uVar5 = *(uint *)(param_1 + 0x734);
      if ((uVar5 & 1) == 0) {
        uVar5 = ((uint)param_4[0x15] ^ uVar5) & 1 ^ uVar5;
        *(uint *)(param_1 + 0x734) = uVar5;
        *(float *)(param_1 + 0xc14) = param_4[0x14d];
      }
      fVar7 = param_4[0x15];
      fVar7 = (float)(((uVar5 | (uint)fVar7 | uVar4) ^ (uint)fVar7) & 1 ^ (uint)fVar7);
      param_4[0x15] = fVar7;
      if (((uint)fVar7 & 1) != 0) {
        param_4[0x14d] =
             (*(float *)(param_1 + 0xc14) - *(float *)(param_1 + 0x614)) *
             *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x614);
      }
    }
  }
  return;
}



// FUNCTION 140a3dd90 FUN_140a3dd90 body=23 status=ok
// SIG undefined FUN_140a3dd90(void)

void FUN_140a3dd90(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 100;
  return;
}



// FUNCTION 140a3ddb0 FUN_140a3ddb0 body=2071 status=ok
// SIG undefined FUN_140a3ddb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3ddb0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  float fVar18;
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
  
  fVar13 = *(float *)(param_1 + 0x1b18);
  FUN_140a2efb0(param_1 + 0x440);
  fVar13 = SUB164(*(undefined1 (*) [16])(param_1 + 0x480),8) + fVar13;
  *(undefined1 *)(param_1 + 0x4e9) = 1;
  *(bool *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e0) == 0;
  uVar2 = SUB168(*(undefined1 (*) [16])(param_1 + 0x480),0);
  auVar1._8_4_ = fVar13;
  auVar1._0_8_ = uVar2;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x480) = auVar1;
  if (*(int *)(param_1 + 0x4e0) == 0) {
    *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x478);
    auVar3._8_4_ = fVar13;
    auVar3._0_8_ = uVar2;
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x4b0) = auVar3;
    *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x498);
  }
  fVar13 = *(float *)(param_1 + 0x1b20);
  FUN_140a2efb0(param_1 + 0x700);
  fVar13 = SUB164(*(undefined1 (*) [16])(param_1 + 0x740),8) + fVar13;
  *(undefined1 *)(param_1 + 0x7a9) = 1;
  *(bool *)(param_1 + 0x7a8) = *(int *)(param_1 + 0x7a0) == 0;
  uVar2 = SUB168(*(undefined1 (*) [16])(param_1 + 0x740),0);
  auVar4._8_4_ = fVar13;
  auVar4._0_8_ = uVar2;
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x740) = auVar4;
  if (*(int *)(param_1 + 0x7a0) == 0) {
    *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x730);
    *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x738);
    auVar5._8_4_ = fVar13;
    auVar5._0_8_ = uVar2;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x770) = auVar5;
    *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_1 + 0x750);
    *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_1 + 0x758);
  }
  fVar13 = *(float *)(param_1 + 0x1b1c);
  FUN_140a2efb0(param_1 + 0x5a0);
  uVar2 = *(undefined8 *)(param_1 + 0x5e0);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x5e8) + fVar13;
  *(undefined1 *)(param_1 + 0x649) = 1;
  *(bool *)(param_1 + 0x648) = *(int *)(param_1 + 0x640) == 0;
  auVar6._8_4_ = fVar13;
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x5e0) = auVar6;
  if (*(int *)(param_1 + 0x640) == 0) {
    *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(param_1 + 0x5d0);
    *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_1 + 0x5d8);
    auVar7._8_4_ = fVar13;
    auVar7._0_8_ = uVar2;
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x610) = auVar7;
    *(undefined8 *)(param_1 + 0x620) = *(undefined8 *)(param_1 + 0x5f0);
    *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_1 + 0x5f8);
  }
  fVar13 = *(float *)(param_1 + 0x1b34) * 0.008726646;
  if (fVar13 < 0.0) {
    fVar14 = fVar13 * 0.15915494 - 0.5;
  }
  else {
    fVar14 = fVar13 * 0.15915494 + 0.5;
  }
  fVar28 = -1.0;
  fVar13 = fVar13 - (float)(int)fVar14 * 6.2831855;
  if (fVar13 <= 1.5707964) {
    if (-1.5707964 <= fVar13) {
      fVar14 = 1.0;
    }
    else {
      fVar14 = -1.0;
      fVar13 = -3.1415927 - fVar13;
    }
  }
  else {
    fVar14 = -1.0;
    fVar13 = 3.1415927 - fVar13;
  }
  fVar15 = fVar13 * fVar13;
  fVar13 = (((((2.7525562e-06 - fVar15 * 2.3889859e-08) * fVar15 - 0.00019840874) * fVar15 +
             0.008333331) * fVar15 - 0.16666667) * fVar15 + 1.0) * fVar13;
  fVar27 = (float)DAT_1464aa7a8 * fVar13;
  fVar14 = (((((2.4760495e-05 - fVar15 * 2.6051615e-07) * fVar15 - 0.0013888378) * fVar15 +
             0.041666638) * fVar15 - 0.5) * fVar15 + 1.0) * fVar14;
  fVar30 = DAT_1464aa7a8._4_4_ * fVar13;
  fVar13 = DAT_1464aa7b0 * fVar13;
  FUN_140a2efb0(param_1 + 0x440);
  fVar15 = *(float *)(param_1 + 0x470);
  fVar25 = *(float *)(param_1 + 0x474);
  fVar8 = *(float *)(param_1 + 0x478);
  fVar19 = *(float *)(param_1 + 0x47c);
  *(undefined1 *)(param_1 + 0x4e9) = 1;
  *(bool *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e0) == 0;
  fVar17 = fVar15 * fVar14 * _DAT_1468660d0 + fVar19 * fVar27 + fVar25 * fVar13 * _DAT_1468660c0 +
           fVar8 * fVar30 * _DAT_1468660b0;
  fVar20 = fVar15 * fVar13 * fRam00000001468660d4 + fVar19 * fVar30 +
           fVar25 * fVar14 * fRam00000001468660c4 + fVar8 * fVar27 * fRam00000001468660b4;
  fVar22 = fVar15 * fVar30 * fRam00000001468660d8 + fVar19 * fVar13 +
           fVar25 * fVar27 * fRam00000001468660c8 + fVar8 * fVar14 * fRam00000001468660b8;
  fVar15 = fVar15 * fVar27 * fRam00000001468660dc + fVar19 * fVar14 +
           fVar25 * fVar30 * fRam00000001468660cc + fVar8 * fVar13 * fRam00000001468660bc;
  *(float *)(param_1 + 0x470) = fVar17;
  *(float *)(param_1 + 0x474) = fVar20;
  *(float *)(param_1 + 0x478) = fVar22;
  *(float *)(param_1 + 0x47c) = fVar15;
  if (*(int *)(param_1 + 0x4e0) == 0) {
    *(float *)(param_1 + 0x4a0) = fVar17;
    *(float *)(param_1 + 0x4a4) = fVar20;
    *(float *)(param_1 + 0x4a8) = fVar22;
    *(float *)(param_1 + 0x4ac) = fVar15;
    *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0x488);
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x490);
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x494);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x498);
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x49c);
  }
  FUN_140a2efb0(param_1 + 0x5a0);
  fVar15 = *(float *)(param_1 + 0x5d0);
  fVar25 = *(float *)(param_1 + 0x5d4);
  fVar8 = *(float *)(param_1 + 0x5d8);
  fVar19 = *(float *)(param_1 + 0x5dc);
  *(undefined1 *)(param_1 + 0x649) = 1;
  fVar17 = fVar15 * fVar14 * _DAT_1468660d0;
  fVar20 = fVar15 * fVar13 * fRam00000001468660d4;
  fVar22 = fVar15 * fVar30 * fRam00000001468660d8;
  fVar24 = fVar15 * fVar27 * fRam00000001468660dc;
  *(bool *)(param_1 + 0x648) = *(int *)(param_1 + 0x640) == 0;
  fVar15 = fVar17 + fVar19 * fVar27 + fVar25 * fVar13 * _DAT_1468660c0 +
           fVar8 * fVar30 * _DAT_1468660b0;
  fVar17 = fVar20 + fVar19 * fVar30 + fVar25 * fVar14 * fRam00000001468660c4 +
           fVar8 * fVar27 * fRam00000001468660b4;
  fVar20 = fVar22 + fVar19 * fVar13 + fVar25 * fVar27 * fRam00000001468660c8 +
           fVar8 * fVar14 * fRam00000001468660b8;
  fVar25 = fVar24 + fVar19 * fVar14 + fVar25 * fVar30 * fRam00000001468660cc +
           fVar8 * fVar13 * fRam00000001468660bc;
  *(float *)(param_1 + 0x5d0) = fVar15;
  *(float *)(param_1 + 0x5d4) = fVar17;
  *(float *)(param_1 + 0x5d8) = fVar20;
  *(float *)(param_1 + 0x5dc) = fVar25;
  if (*(int *)(param_1 + 0x640) == 0) {
    *(float *)(param_1 + 0x600) = fVar15;
    *(float *)(param_1 + 0x604) = fVar17;
    *(float *)(param_1 + 0x608) = fVar20;
    *(float *)(param_1 + 0x60c) = fVar25;
    *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x5e0);
    *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_1 + 0x5e8);
    *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_1 + 0x5f0);
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_1 + 0x5f4);
    *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_1 + 0x5f8);
    *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x5fc);
  }
  FUN_140a2efb0(param_1 + 0x700);
  fVar15 = *(float *)(param_1 + 0x730);
  fVar25 = *(float *)(param_1 + 0x734);
  fVar8 = *(float *)(param_1 + 0x738);
  fVar19 = *(float *)(param_1 + 0x73c);
  *(undefined1 *)(param_1 + 0x7a9) = 1;
  *(bool *)(param_1 + 0x7a8) = *(int *)(param_1 + 0x7a0) == 0;
  fVar12 = fRam00000001468660cc;
  fVar11 = fRam00000001468660c8;
  fVar10 = fRam00000001468660c4;
  fVar9 = _DAT_1468660c0;
  fVar24 = fRam00000001468660bc;
  fVar22 = fRam00000001468660b8;
  fVar20 = fRam00000001468660b4;
  fVar17 = _DAT_1468660b0;
  fVar18 = fVar15 * fVar14 * _DAT_1468660d0 + fVar19 * fVar27 + fVar25 * fVar13 * _DAT_1468660c0 +
           fVar8 * fVar30 * _DAT_1468660b0;
  fVar21 = fVar15 * fVar13 * fRam00000001468660d4 + fVar19 * fVar30 +
           fVar25 * fVar14 * fRam00000001468660c4 + fVar8 * fVar27 * fRam00000001468660b4;
  fVar23 = fVar15 * fVar30 * fRam00000001468660d8 + fVar19 * fVar13 +
           fVar25 * fVar27 * fRam00000001468660c8 + fVar8 * fVar14 * fRam00000001468660b8;
  fVar13 = fVar15 * fVar27 * fRam00000001468660dc + fVar19 * fVar14 +
           fVar25 * fVar30 * fRam00000001468660cc + fVar8 * fVar13 * fRam00000001468660bc;
  *(float *)(param_1 + 0x730) = fVar18;
  *(float *)(param_1 + 0x734) = fVar21;
  *(float *)(param_1 + 0x738) = fVar23;
  *(float *)(param_1 + 0x73c) = fVar13;
  if (*(int *)(param_1 + 0x7a0) == 0) {
    *(float *)(param_1 + 0x760) = fVar18;
    *(float *)(param_1 + 0x764) = fVar21;
    *(float *)(param_1 + 0x768) = fVar23;
    *(float *)(param_1 + 0x76c) = fVar13;
    *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x740);
    *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_1 + 0x748);
    *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_1 + 0x750);
    *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_1 + 0x758);
  }
  fVar13 = *(float *)(param_1 + 0x1b40) * 0.008726646;
  if (fVar13 < 0.0) {
    fVar14 = fVar13 * 0.15915494 - 0.5;
  }
  else {
    fVar14 = fVar13 * 0.15915494 + 0.5;
  }
  fVar13 = fVar13 - (float)(int)fVar14 * 6.2831855;
  if (fVar13 <= 1.5707964) {
    if (-1.5707964 <= fVar13) {
      fVar28 = 1.0;
    }
    else {
      fVar13 = -3.1415927 - fVar13;
    }
  }
  else {
    fVar13 = 3.1415927 - fVar13;
  }
  fVar14 = fVar13 * fVar13;
  fVar13 = (((((2.7525562e-06 - fVar14 * 2.3889859e-08) * fVar14 - 0.00019840874) * fVar14 +
             0.008333331) * fVar14 - 0.16666667) * fVar14 + 1.0) * fVar13;
  fVar26 = DAT_1464aa7c0 * fVar13;
  fVar29 = (float)DAT_1464aa7b8 * fVar13;
  fVar13 = DAT_1464aa7b8._4_4_ * fVar13;
  fVar28 = (((((2.4760495e-05 - fVar14 * 2.6051615e-07) * fVar14 - 0.0013888378) * fVar14 +
             0.041666638) * fVar14 - 0.5) * fVar14 + 1.0) * fVar28;
  FUN_140a2efb0(param_1 + 0x4f0);
  fVar18 = fRam00000001468660dc;
  fVar30 = fRam00000001468660d8;
  fVar27 = fRam00000001468660d4;
  fVar19 = _DAT_1468660d0;
  fVar14 = *(float *)(param_1 + 0x520);
  fVar15 = *(float *)(param_1 + 0x524);
  fVar25 = *(float *)(param_1 + 0x528);
  fVar8 = *(float *)(param_1 + 0x52c);
  *(undefined2 *)(param_1 + 0x598) = 0x101;
  fVar21 = fVar14 * fVar28 * fVar19 + fVar8 * fVar29 + fVar15 * fVar26 * fVar9 +
           fVar25 * fVar13 * fVar17;
  fVar23 = fVar14 * fVar26 * fVar27 + fVar8 * fVar13 + fVar15 * fVar28 * fVar10 +
           fVar25 * fVar29 * fVar20;
  fVar16 = fVar14 * fVar13 * fVar30 + fVar8 * fVar26 + fVar15 * fVar29 * fVar11 +
           fVar25 * fVar28 * fVar22;
  fVar14 = fVar14 * fVar29 * fVar18 + fVar8 * fVar28 + fVar15 * fVar13 * fVar12 +
           fVar25 * fVar26 * fVar24;
  *(float *)(param_1 + 0x520) = fVar21;
  *(float *)(param_1 + 0x524) = fVar23;
  *(float *)(param_1 + 0x528) = fVar16;
  *(float *)(param_1 + 0x52c) = fVar14;
  *(float *)(param_1 + 0x550) = fVar21;
  *(float *)(param_1 + 0x554) = fVar23;
  *(float *)(param_1 + 0x558) = fVar16;
  *(float *)(param_1 + 0x55c) = fVar14;
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x538);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x540);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x544);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0x548);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x54c);
  FUN_140a2efb0(param_1 + 0x650);
  fVar14 = *(float *)(param_1 + 0x680);
  fVar15 = *(float *)(param_1 + 0x684);
  fVar25 = *(float *)(param_1 + 0x688);
  fVar8 = *(float *)(param_1 + 0x68c);
  *(undefined2 *)(param_1 + 0x6f8) = 0x101;
  fVar21 = fVar14 * fVar28 * fVar19 + fVar8 * fVar29 + fVar15 * fVar26 * fVar9 +
           fVar25 * fVar13 * fVar17;
  fVar23 = fVar14 * fVar26 * fVar27 + fVar8 * fVar13 + fVar15 * fVar28 * fVar10 +
           fVar25 * fVar29 * fVar20;
  fVar16 = fVar14 * fVar13 * fVar30 + fVar8 * fVar26 + fVar15 * fVar29 * fVar11 +
           fVar25 * fVar28 * fVar22;
  fVar14 = fVar14 * fVar29 * fVar18 + fVar8 * fVar28 + fVar15 * fVar13 * fVar12 +
           fVar25 * fVar26 * fVar24;
  *(float *)(param_1 + 0x680) = fVar21;
  *(float *)(param_1 + 0x684) = fVar23;
  *(float *)(param_1 + 0x688) = fVar16;
  *(float *)(param_1 + 0x68c) = fVar14;
  *(float *)(param_1 + 0x6b0) = fVar21;
  *(float *)(param_1 + 0x6b4) = fVar23;
  *(float *)(param_1 + 0x6b8) = fVar16;
  *(float *)(param_1 + 0x6bc) = fVar14;
  *(undefined8 *)(param_1 + 0x6c0) = *(undefined8 *)(param_1 + 0x690);
  *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_1 + 0x698);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_1 + 0x6ac);
  FUN_140a2efb0(param_1 + 0x7b0);
  fVar14 = *(float *)(param_1 + 0x7e0);
  fVar15 = *(float *)(param_1 + 0x7e4);
  fVar25 = *(float *)(param_1 + 0x7e8);
  fVar8 = *(float *)(param_1 + 0x7ec);
  *(undefined2 *)(param_1 + 0x858) = 0x101;
  fVar19 = fVar14 * fVar28 * fVar19 + fVar8 * fVar29 + fVar15 * fVar26 * fVar9 +
           fVar25 * fVar13 * fVar17;
  fVar17 = fVar14 * fVar26 * fVar27 + fVar8 * fVar13 + fVar15 * fVar28 * fVar10 +
           fVar25 * fVar29 * fVar20;
  fVar20 = fVar14 * fVar13 * fVar30 + fVar8 * fVar26 + fVar15 * fVar29 * fVar11 +
           fVar25 * fVar28 * fVar22;
  fVar13 = fVar14 * fVar29 * fVar18 + fVar8 * fVar28 + fVar15 * fVar13 * fVar12 +
           fVar25 * fVar26 * fVar24;
  *(float *)(param_1 + 0x7e0) = fVar19;
  *(float *)(param_1 + 0x7e4) = fVar17;
  *(float *)(param_1 + 0x7e8) = fVar20;
  *(float *)(param_1 + 0x7ec) = fVar13;
  *(float *)(param_1 + 0x810) = fVar19;
  *(float *)(param_1 + 0x814) = fVar17;
  *(float *)(param_1 + 0x818) = fVar20;
  *(float *)(param_1 + 0x81c) = fVar13;
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x7f0);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_1 + 0x7f8);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_1 + 0x808);
  return;
}



// FUNCTION 140a3e5d0 FUN_140a3e5d0 body=4626 status=ok
// SIG undefined FUN_140a3e5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3e5d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [224];
  
  fStack_1c0 = *(float *)(param_1 + 0x1b44) * 0.008726646;
  if (fStack_1c0 < 0.0) {
    fVar15 = fStack_1c0 * 0.15915494 - 0.5;
  }
  else {
    fVar15 = fStack_1c0 * 0.15915494 + 0.5;
  }
  fVar30 = -1.0;
  fStack_1c0 = fStack_1c0 - (float)(int)fVar15 * 6.2831855;
  if (fStack_1c0 <= 1.5707964) {
    if (-1.5707964 <= fStack_1c0) {
      fStack_1bc = 1.0;
    }
    else {
      fStack_1bc = -1.0;
      fStack_1c0 = -3.1415927 - fStack_1c0;
    }
  }
  else {
    fStack_1bc = -1.0;
    fStack_1c0 = 3.1415927 - fStack_1c0;
  }
  fVar15 = *(float *)(param_1 + 0x1b44) * -0.008726646;
  fVar22 = fStack_1c0 * fStack_1c0;
  fStack_1c0 = (((((2.7525562e-06 - fVar22 * 2.3889859e-08) * fVar22 - 0.00019840874) * fVar22 +
                 0.008333331) * fVar22 - 0.16666667) * fVar22 + 1.0) * fStack_1c0;
  fStack_1c4 = DAT_1464aa798._4_4_ * fStack_1c0;
  local_1c8 = fStack_1c0 * (float)DAT_1464aa798;
  fStack_1c0 = DAT_1464aa7a0 * fStack_1c0;
  fStack_1bc = (((((2.4760495e-05 - fVar22 * 2.6051615e-07) * fVar22 - 0.0013888378) * fVar22 +
                 0.041666638) * fVar22 - 0.5) * fVar22 + 1.0) * fStack_1bc;
  if (fVar15 < 0.0) {
    fVar22 = fVar15 * 0.15915494 - 0.5;
  }
  else {
    fVar22 = fVar15 * 0.15915494 + 0.5;
  }
  fVar15 = fVar15 - (float)(int)fVar22 * 6.2831855;
  if (fVar15 <= 1.5707964) {
    if (-1.5707964 <= fVar15) {
      fVar22 = 1.0;
    }
    else {
      fVar22 = -1.0;
      fVar15 = -3.1415927 - fVar15;
    }
  }
  else {
    fVar22 = -1.0;
    fVar15 = 3.1415927 - fVar15;
  }
  fVar20 = fVar15 * fVar15;
  fVar15 = (((((2.7525562e-06 - fVar20 * 2.3889859e-08) * fVar20 - 0.00019840874) * fVar20 +
             0.008333331) * fVar20 - 0.16666667) * fVar20 + 1.0) * fVar15;
  fVar16 = (float)DAT_1464aa798 * fVar15;
  fVar17 = DAT_1464aa798._4_4_ * fVar15;
  fVar15 = DAT_1464aa7a0 * fVar15;
  fVar22 = (((((2.4760495e-05 - fVar20 * 2.6051615e-07) * fVar20 - 0.0013888378) * fVar20 +
             0.041666638) * fVar20 - 0.5) * fVar20 + 1.0) * fVar22;
  FUN_140a2efb0(param_1 + 0xc80);
  fVar13 = fStack_1bc;
  fVar12 = fStack_1c0;
  fVar11 = fStack_1c4;
  fVar10 = local_1c8;
  fVar9 = fRam00000001468660dc;
  fVar8 = fRam00000001468660d8;
  fVar7 = fRam00000001468660d4;
  fVar6 = _DAT_1468660d0;
  fVar29 = fRam00000001468660cc;
  fVar28 = fRam00000001468660c8;
  fVar26 = fRam00000001468660c4;
  fVar23 = _DAT_1468660c0;
  fVar20 = *(float *)(param_1 + 0xcb0);
  fVar4 = *(float *)(param_1 + 0xcb4);
  fVar27 = *(float *)(param_1 + 0xcb8);
  fVar24 = *(float *)(param_1 + 0xcbc);
  auVar3._4_4_ = fStack_1c4;
  auVar3._0_4_ = local_1c8;
  auVar3._8_4_ = fStack_1c0;
  auVar3._12_4_ = fStack_1bc;
  fStack_1cc = local_1c8;
  fStack_1d0 = fStack_1c4;
  fStack_1d4 = fStack_1c0;
  fVar25 = fVar20 * fStack_1c0;
  *(undefined1 *)(param_1 + 0xd29) = 1;
  local_1d8 = fStack_1bc;
  *(bool *)(param_1 + 0xd28) = *(int *)(param_1 + 0xd20) == 0;
  fVar18 = fVar24 * fStack_1c0;
  fVar19 = fVar4 * fStack_1c0;
  fVar21 = fVar27 * fStack_1c0;
  fStack_1b0 = local_1c8;
  local_1b8 = auVar3._8_8_;
  fStack_1ac = fStack_1c4;
  fStack_1c0 = fStack_1bc;
  fVar19 = fVar20 * fStack_1bc * fVar6 + fVar24 * local_1c8 + fVar19 * fVar23 +
           fVar27 * fStack_1c4 * _DAT_1468660b0;
  fVar25 = fVar25 * fVar7 + fVar24 * fStack_1c4 + fVar4 * fStack_1bc * fVar26 +
           fVar27 * local_1c8 * fRam00000001468660b4;
  fVar27 = fVar20 * fStack_1c4 * fVar8 + fVar18 + fVar4 * local_1c8 * fVar28 +
           fVar27 * fStack_1bc * fRam00000001468660b8;
  fVar20 = fVar20 * local_1c8 * fVar9 + fVar24 * fStack_1bc + fVar4 * fStack_1c4 * fVar29 +
           fVar21 * fRam00000001468660bc;
  *(float *)(param_1 + 0xcb0) = fVar19;
  *(float *)(param_1 + 0xcb4) = fVar25;
  *(float *)(param_1 + 0xcb8) = fVar27;
  *(float *)(param_1 + 0xcbc) = fVar20;
  if (*(int *)(param_1 + 0xd20) == 0) {
    *(float *)(param_1 + 0xce0) = fVar19;
    *(float *)(param_1 + 0xce4) = fVar25;
    *(float *)(param_1 + 0xce8) = fVar27;
    *(float *)(param_1 + 0xcec) = fVar20;
    *(undefined8 *)(param_1 + 0xcf0) = *(undefined8 *)(param_1 + 0xcc0);
    *(undefined8 *)(param_1 + 0xcf8) = *(undefined8 *)(param_1 + 0xcc8);
    *(undefined4 *)(param_1 + 0xd00) = *(undefined4 *)(param_1 + 0xcd0);
    *(undefined4 *)(param_1 + 0xd04) = *(undefined4 *)(param_1 + 0xcd4);
    *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_1 + 0xcd8);
    *(undefined4 *)(param_1 + 0xd0c) = *(undefined4 *)(param_1 + 0xcdc);
  }
  local_1c8 = fStack_1d0;
  fStack_1c4 = fStack_1cc;
  fStack_1bc = fStack_1d4;
  FUN_140a2efb0(param_1 + 0xff0);
  fVar20 = *(float *)(param_1 + 0x1020);
  fVar4 = *(float *)(param_1 + 0x1024);
  fVar27 = *(float *)(param_1 + 0x1028);
  fVar24 = *(float *)(param_1 + 0x102c);
  *(undefined1 *)(param_1 + 0x1099) = 1;
  *(bool *)(param_1 + 0x1098) = *(int *)(param_1 + 0x1090) == 0;
  fVar18 = fVar20 * local_1d8 * fVar6 + fVar24 * fVar10 + fVar4 * (float)local_1b8._0_4_ * fVar23 +
           fVar27 * local_1c8 * _DAT_1468660b0;
  fVar19 = fVar20 * fStack_1d4 * fVar7 + fVar24 * fVar11 + fVar4 * (float)local_1b8._4_4_ * fVar26 +
           fVar27 * fStack_1c4 * fRam00000001468660b4;
  fVar21 = fVar20 * fStack_1d0 * fVar8 + fVar24 * fVar12 + fVar4 * fStack_1b0 * fVar28 +
           fVar27 * fStack_1c0 * fRam00000001468660b8;
  fVar20 = fVar20 * fStack_1cc * fVar9 + fVar24 * fVar13 + fVar4 * fStack_1ac * fVar29 +
           fVar27 * fStack_1bc * fRam00000001468660bc;
  *(float *)(param_1 + 0x1020) = fVar18;
  *(float *)(param_1 + 0x1024) = fVar19;
  *(float *)(param_1 + 0x1028) = fVar21;
  *(float *)(param_1 + 0x102c) = fVar20;
  if (*(int *)(param_1 + 0x1090) == 0) {
    *(float *)(param_1 + 0x1050) = fVar18;
    *(float *)(param_1 + 0x1054) = fVar19;
    *(float *)(param_1 + 0x1058) = fVar21;
    *(float *)(param_1 + 0x105c) = fVar20;
    *(undefined8 *)(param_1 + 0x1060) = *(undefined8 *)(param_1 + 0x1030);
    *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_1 + 0x1038);
    *(undefined4 *)(param_1 + 0x1070) = *(undefined4 *)(param_1 + 0x1040);
    *(undefined4 *)(param_1 + 0x1074) = *(undefined4 *)(param_1 + 0x1044);
    *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_1 + 0x1048);
    *(undefined4 *)(param_1 + 0x107c) = *(undefined4 *)(param_1 + 0x104c);
  }
  FUN_140a2efb0(param_1 + 0x14c0);
  fVar20 = *(float *)(param_1 + 0x14f0);
  fVar4 = *(float *)(param_1 + 0x14f4);
  fVar27 = *(float *)(param_1 + 0x14f8);
  fVar24 = *(float *)(param_1 + 0x14fc);
  *(undefined1 *)(param_1 + 0x1569) = 1;
  *(bool *)(param_1 + 0x1568) = *(int *)(param_1 + 0x1560) == 0;
  fVar23 = fVar20 * local_1d8 * fVar6 + fVar24 * fVar10 + fVar4 * (float)local_1b8._0_4_ * fVar23 +
           fVar27 * local_1c8 * _DAT_1468660b0;
  fVar26 = fVar20 * fStack_1d4 * fVar7 + fVar24 * fVar11 + fVar4 * (float)local_1b8._4_4_ * fVar26 +
           fVar27 * fStack_1c4 * fRam00000001468660b4;
  fVar28 = fVar20 * fStack_1d0 * fVar8 + fVar24 * fVar12 + fVar4 * fStack_1b0 * fVar28 +
           fVar27 * fStack_1c0 * fRam00000001468660b8;
  fVar20 = fVar20 * fStack_1cc * fVar9 + fVar24 * fVar13 + fVar4 * fStack_1ac * fVar29 +
           fVar27 * fStack_1bc * fRam00000001468660bc;
  *(float *)(param_1 + 0x14f0) = fVar23;
  *(float *)(param_1 + 0x14f4) = fVar26;
  *(float *)(param_1 + 0x14f8) = fVar28;
  *(float *)(param_1 + 0x14fc) = fVar20;
  if (*(int *)(param_1 + 0x1560) == 0) {
    *(float *)(param_1 + 0x1520) = fVar23;
    *(float *)(param_1 + 0x1524) = fVar26;
    *(float *)(param_1 + 0x1528) = fVar28;
    *(float *)(param_1 + 0x152c) = fVar20;
    *(undefined8 *)(param_1 + 0x1530) = *(undefined8 *)(param_1 + 0x1500);
    *(undefined8 *)(param_1 + 0x1538) = *(undefined8 *)(param_1 + 0x1508);
    *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_1 + 0x1510);
    *(undefined4 *)(param_1 + 0x1544) = *(undefined4 *)(param_1 + 0x1514);
    *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)(param_1 + 0x1518);
    *(undefined4 *)(param_1 + 0x154c) = *(undefined4 *)(param_1 + 0x151c);
  }
  lVar1 = param_1 + 0x9c0;
  FUN_140a2efb0(lVar1);
  fVar20 = *(float *)(param_1 + 0x9f0);
  fVar4 = *(float *)(param_1 + 0x9f4);
  fVar27 = *(float *)(param_1 + 0x9f8);
  fVar24 = *(float *)(param_1 + 0x9fc);
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar15;
  auVar5._12_4_ = fVar22;
  *(undefined1 *)(param_1 + 0xa69) = 1;
  *(bool *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa60) == 0;
  fStack_160 = fVar16;
  local_168 = (undefined1  [8])auVar5._8_8_;
  fStack_15c = fVar17;
  fVar23 = fVar20 * fVar22 * fVar6 + fVar24 * fVar16 + fVar4 * fVar15 * _DAT_1468660c0 +
           fVar27 * fVar17 * _DAT_1468660b0;
  fVar26 = fVar20 * fVar15 * fVar7 + fVar24 * fVar17 + fVar4 * fVar22 * fRam00000001468660c4 +
           fVar27 * fVar16 * fRam00000001468660b4;
  fVar28 = fVar20 * fVar17 * fVar8 + fVar24 * fVar15 + fVar4 * fVar16 * fRam00000001468660c8 +
           fVar27 * fVar22 * fRam00000001468660b8;
  fVar20 = fVar20 * fVar16 * fVar9 + fVar24 * fVar22 + fVar4 * fVar17 * fRam00000001468660cc +
           fVar27 * fVar15 * fRam00000001468660bc;
  *(float *)(param_1 + 0x9f0) = fVar23;
  *(float *)(param_1 + 0x9f4) = fVar26;
  *(float *)(param_1 + 0x9f8) = fVar28;
  *(float *)(param_1 + 0x9fc) = fVar20;
  if (*(int *)(param_1 + 0xa60) == 0) {
    *(float *)(param_1 + 0xa20) = fVar23;
    *(float *)(param_1 + 0xa24) = fVar26;
    *(float *)(param_1 + 0xa28) = fVar28;
    *(float *)(param_1 + 0xa2c) = fVar20;
    *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(param_1 + 0xa00);
    *(undefined8 *)(param_1 + 0xa38) = *(undefined8 *)(param_1 + 0xa08);
    *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_1 + 0xa10);
    *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(param_1 + 0xa14);
    *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(param_1 + 0xa18);
    *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0xa1c);
  }
  local_158 = fVar17;
  fStack_154 = fVar16;
  fStack_150 = fVar22;
  fStack_14c = fVar15;
  FUN_140a2efb0(param_1 + 0xf40);
  fVar20 = *(float *)(param_1 + 0xf70);
  fVar4 = *(float *)(param_1 + 0xf74);
  fVar27 = *(float *)(param_1 + 0xf78);
  fVar24 = *(float *)(param_1 + 0xf7c);
  *(undefined2 *)(param_1 + 0xfe8) = 0x101;
  fVar23 = fVar20 * local_1d8 * fVar6 + fVar24 * fVar10 +
           fVar4 * (float)local_1b8._0_4_ * _DAT_1468660c0 + fVar27 * local_1c8 * _DAT_1468660b0;
  fVar26 = fVar20 * fStack_1d4 * fVar7 + fVar24 * fVar11 +
           fVar4 * (float)local_1b8._4_4_ * fRam00000001468660c4 +
           fVar27 * fStack_1c4 * fRam00000001468660b4;
  fVar28 = fVar20 * fStack_1d0 * fVar8 + fVar24 * fVar12 + fVar4 * fStack_1b0 * fRam00000001468660c8
           + fVar27 * fStack_1c0 * fRam00000001468660b8;
  fVar20 = fVar20 * fStack_1cc * fVar9 + fVar24 * fVar13 + fVar4 * fStack_1ac * fRam00000001468660cc
           + fVar27 * fStack_1bc * fRam00000001468660bc;
  *(float *)(param_1 + 0xf70) = fVar23;
  *(float *)(param_1 + 0xf74) = fVar26;
  *(float *)(param_1 + 0xf78) = fVar28;
  *(float *)(param_1 + 0xf7c) = fVar20;
  *(float *)(param_1 + 4000) = fVar23;
  *(float *)(param_1 + 0xfa4) = fVar26;
  *(float *)(param_1 + 0xfa8) = fVar28;
  *(float *)(param_1 + 0xfac) = fVar20;
  *(undefined8 *)(param_1 + 0xfb0) = *(undefined8 *)(param_1 + 0xf80);
  *(undefined8 *)(param_1 + 0xfb8) = *(undefined8 *)(param_1 + 0xf88);
  *(undefined4 *)(param_1 + 0xfc0) = *(undefined4 *)(param_1 + 0xf90);
  *(undefined4 *)(param_1 + 0xfc4) = *(undefined4 *)(param_1 + 0xf94);
  *(undefined4 *)(param_1 + 0xfc8) = *(undefined4 *)(param_1 + 0xf98);
  *(undefined4 *)(param_1 + 0xfcc) = *(undefined4 *)(param_1 + 0xf9c);
  FUN_140a2efb0(param_1 + 0x1360);
  fVar20 = *(float *)(param_1 + 0x1390);
  fVar4 = *(float *)(param_1 + 0x1394);
  fVar27 = *(float *)(param_1 + 0x1398);
  fVar24 = *(float *)(param_1 + 0x139c);
  *(undefined2 *)(param_1 + 0x1408) = 0x101;
  fVar23 = fVar20 * local_1d8 * fVar6 + fVar24 * fVar10 +
           fVar4 * (float)local_1b8._0_4_ * _DAT_1468660c0 + fVar27 * local_1c8 * _DAT_1468660b0;
  fVar26 = fVar20 * fStack_1d4 * fVar7 + fVar24 * fVar11 +
           fVar4 * (float)local_1b8._4_4_ * fRam00000001468660c4 +
           fVar27 * fStack_1c4 * fRam00000001468660b4;
  fVar28 = fVar20 * fStack_1d0 * fVar8 + fVar24 * fVar12 + fVar4 * fStack_1b0 * fRam00000001468660c8
           + fVar27 * fStack_1c0 * fRam00000001468660b8;
  fVar20 = fVar20 * fStack_1cc * fVar9 + fVar24 * fVar13 + fVar4 * fStack_1ac * fRam00000001468660cc
           + fVar27 * fStack_1bc * fRam00000001468660bc;
  *(float *)(param_1 + 0x1390) = fVar23;
  *(float *)(param_1 + 0x1394) = fVar26;
  *(float *)(param_1 + 0x1398) = fVar28;
  *(float *)(param_1 + 0x139c) = fVar20;
  *(float *)(param_1 + 0x13c0) = fVar23;
  *(float *)(param_1 + 0x13c4) = fVar26;
  *(float *)(param_1 + 0x13c8) = fVar28;
  *(float *)(param_1 + 0x13cc) = fVar20;
  *(undefined8 *)(param_1 + 0x13d0) = *(undefined8 *)(param_1 + 0x13a0);
  *(undefined8 *)(param_1 + 0x13d8) = *(undefined8 *)(param_1 + 0x13a8);
  *(undefined4 *)(param_1 + 0x13e0) = *(undefined4 *)(param_1 + 0x13b0);
  *(undefined4 *)(param_1 + 0x13e4) = *(undefined4 *)(param_1 + 0x13b4);
  *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13b8);
  *(undefined4 *)(param_1 + 0x13ec) = *(undefined4 *)(param_1 + 0x13bc);
  FUN_140a2efb0(param_1 + 0x1780);
  fVar20 = *(float *)(param_1 + 0x17b0);
  fVar4 = *(float *)(param_1 + 0x17b4);
  fVar27 = *(float *)(param_1 + 0x17b8);
  fVar24 = *(float *)(param_1 + 0x17bc);
  *(undefined2 *)(param_1 + 0x1828) = 0x101;
  fVar23 = fVar20 * local_1d8 * fVar6 + fVar24 * fVar10 +
           fVar4 * (float)local_1b8._0_4_ * _DAT_1468660c0 + fVar27 * local_1c8 * _DAT_1468660b0;
  fVar26 = fVar20 * fStack_1d4 * fVar7 + fVar24 * fVar11 +
           fVar4 * (float)local_1b8._4_4_ * fRam00000001468660c4 +
           fVar27 * fStack_1c4 * fRam00000001468660b4;
  fVar28 = fVar20 * fStack_1d0 * fVar8 + fVar24 * fVar12 + fVar4 * fStack_1b0 * fRam00000001468660c8
           + fVar27 * fStack_1c0 * fRam00000001468660b8;
  fVar20 = fVar20 * fStack_1cc * fVar9 + fVar24 * fVar13 + fVar4 * fStack_1ac * fRam00000001468660cc
           + fVar27 * fStack_1bc * fRam00000001468660bc;
  *(float *)(param_1 + 0x17b0) = fVar23;
  *(float *)(param_1 + 0x17b4) = fVar26;
  *(float *)(param_1 + 0x17b8) = fVar28;
  *(float *)(param_1 + 0x17bc) = fVar20;
  *(float *)(param_1 + 0x17e0) = fVar23;
  *(float *)(param_1 + 0x17e4) = fVar26;
  *(float *)(param_1 + 0x17e8) = fVar28;
  *(float *)(param_1 + 0x17ec) = fVar20;
  *(undefined8 *)(param_1 + 0x17f0) = *(undefined8 *)(param_1 + 0x17c0);
  *(undefined8 *)(param_1 + 0x17f8) = *(undefined8 *)(param_1 + 0x17c8);
  *(undefined4 *)(param_1 + 0x1800) = *(undefined4 *)(param_1 + 0x17d0);
  *(undefined4 *)(param_1 + 0x1804) = *(undefined4 *)(param_1 + 0x17d4);
  *(undefined4 *)(param_1 + 0x1808) = *(undefined4 *)(param_1 + 0x17d8);
  *(undefined4 *)(param_1 + 0x180c) = *(undefined4 *)(param_1 + 0x17dc);
  FUN_140a2efb0(param_1 + 0xbd0);
  fVar20 = *(float *)(param_1 + 0xc00);
  fVar4 = *(float *)(param_1 + 0xc04);
  fVar27 = *(float *)(param_1 + 0xc08);
  fVar24 = *(float *)(param_1 + 0xc0c);
  *(undefined2 *)(param_1 + 0xc78) = 0x101;
  fVar23 = fVar20 * fVar22 * fVar6 + fVar24 * fVar16 +
           fVar4 * (float)local_168._0_4_ * _DAT_1468660c0 + fVar27 * local_158 * _DAT_1468660b0;
  fVar26 = fVar20 * fVar15 * fVar7 + fVar24 * fVar17 +
           fVar4 * (float)local_168._4_4_ * fRam00000001468660c4 +
           fVar27 * fStack_154 * fRam00000001468660b4;
  fVar15 = fVar20 * fVar17 * fVar8 + fVar24 * fVar15 + fVar4 * fStack_160 * fRam00000001468660c8 +
           fVar27 * fStack_150 * fRam00000001468660b8;
  fVar22 = fVar20 * fVar16 * fVar9 + fVar24 * fVar22 + fVar4 * fStack_15c * fRam00000001468660cc +
           fVar27 * fStack_14c * fRam00000001468660bc;
  *(float *)(param_1 + 0xc00) = fVar23;
  *(float *)(param_1 + 0xc04) = fVar26;
  *(float *)(param_1 + 0xc08) = fVar15;
  *(float *)(param_1 + 0xc0c) = fVar22;
  *(float *)(param_1 + 0xc30) = fVar23;
  *(float *)(param_1 + 0xc34) = fVar26;
  *(float *)(param_1 + 0xc38) = fVar15;
  *(float *)(param_1 + 0xc3c) = fVar22;
  *(undefined8 *)(param_1 + 0xc40) = *(undefined8 *)(param_1 + 0xc10);
  *(undefined8 *)(param_1 + 0xc48) = *(undefined8 *)(param_1 + 0xc18);
  *(undefined8 *)(param_1 + 0xc50) = *(undefined8 *)(param_1 + 0xc20);
  *(undefined8 *)(param_1 + 0xc58) = *(undefined8 *)(param_1 + 0xc28);
  fVar15 = *(float *)(param_1 + 0x1b48) * 0.008726646;
  if (fVar15 < 0.0) {
    fVar22 = fVar15 * 0.15915494 - 0.5;
  }
  else {
    fVar22 = fVar15 * 0.15915494 + 0.5;
  }
  fVar15 = fVar15 - (float)(int)fVar22 * 6.2831855;
  if (fVar15 <= 1.5707964) {
    if (-1.5707964 <= fVar15) {
      fVar22 = 1.0;
    }
    else {
      fVar22 = -1.0;
      fVar15 = -3.1415927 - fVar15;
    }
  }
  else {
    fVar22 = -1.0;
    fVar15 = 3.1415927 - fVar15;
  }
  fVar20 = fVar15 * fVar15;
  fVar15 = (((((2.7525562e-06 - fVar20 * 2.3889859e-08) * fVar20 - 0.00019840874) * fVar20 +
             0.008333331) * fVar20 - 0.16666667) * fVar20 + 1.0) * fVar15;
  fVar21 = fVar15 * (float)DAT_1464aa798;
  fVar19 = fVar15 * DAT_1464aa798._4_4_;
  fVar15 = fVar15 * DAT_1464aa7a0;
  fVar22 = (((((2.4760495e-05 - fVar20 * 2.6051615e-07) * fVar20 - 0.0013888378) * fVar20 +
             0.041666638) * fVar20 - 0.5) * fVar20 + 1.0) * fVar22;
  FUN_140a2efb0(param_1 + 0x1150);
  fVar9 = fRam00000001468660cc;
  fVar8 = fRam00000001468660c8;
  fVar7 = fRam00000001468660c4;
  fVar6 = _DAT_1468660c0;
  fVar20 = *(float *)(param_1 + 0x1180);
  fVar4 = *(float *)(param_1 + 0x1184);
  fVar27 = *(float *)(param_1 + 0x1188);
  fVar24 = *(float *)(param_1 + 0x118c);
  *(undefined1 *)(param_1 + 0x11f9) = 1;
  fVar13 = fRam00000001468660dc;
  fVar12 = fRam00000001468660d8;
  fVar11 = fRam00000001468660d4;
  fVar10 = _DAT_1468660d0;
  *(bool *)(param_1 + 0x11f8) = *(int *)(param_1 + 0x11f0) == 0;
  fVar29 = fRam00000001468660bc;
  fVar28 = fRam00000001468660b8;
  fVar26 = fRam00000001468660b4;
  fVar23 = _DAT_1468660b0;
  local_168._4_4_ = fVar22;
  local_168._0_4_ = fVar15;
  fStack_160 = fVar21;
  fStack_15c = fVar19;
  fVar16 = fVar20 * fVar22 * fVar10 + fVar24 * fVar21 + fVar4 * fVar15 * fVar6 +
           fVar27 * fVar19 * _DAT_1468660b0;
  fVar17 = fVar20 * fVar15 * fVar11 + fVar24 * fVar19 + fVar4 * fVar22 * fVar7 +
           fVar27 * fVar21 * fRam00000001468660b4;
  fVar18 = fVar20 * fVar19 * fVar12 + fVar24 * fVar15 + fVar4 * fVar21 * fVar8 +
           fVar27 * fVar22 * fRam00000001468660b8;
  fVar20 = fVar20 * fVar21 * fVar13 + fVar24 * fVar22 + fVar4 * fVar19 * fVar9 +
           fVar27 * fVar15 * fRam00000001468660bc;
  *(float *)(param_1 + 0x1180) = fVar16;
  *(float *)(param_1 + 0x1184) = fVar17;
  *(float *)(param_1 + 0x1188) = fVar18;
  *(float *)(param_1 + 0x118c) = fVar20;
  if (*(int *)(param_1 + 0x11f0) == 0) {
    *(float *)(param_1 + 0x11b0) = fVar16;
    *(float *)(param_1 + 0x11b4) = fVar17;
    *(float *)(param_1 + 0x11b8) = fVar18;
    *(float *)(param_1 + 0x11bc) = fVar20;
    *(undefined8 *)(param_1 + 0x11c0) = *(undefined8 *)(param_1 + 0x1190);
    *(undefined8 *)(param_1 + 0x11c8) = *(undefined8 *)(param_1 + 0x1198);
    *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11a0);
    *(undefined4 *)(param_1 + 0x11d4) = *(undefined4 *)(param_1 + 0x11a4);
    *(undefined4 *)(param_1 + 0x11d8) = *(undefined4 *)(param_1 + 0x11a8);
    *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)(param_1 + 0x11ac);
  }
  local_158 = fVar22;
  fStack_154 = fVar15;
  fStack_150 = fVar19;
  fStack_14c = fVar21;
  FUN_140a2efb0(param_1 + 0x1410);
  fVar20 = *(float *)(param_1 + 0x1440);
  fVar4 = *(float *)(param_1 + 0x1444);
  fVar27 = *(float *)(param_1 + 0x1448);
  fVar24 = *(float *)(param_1 + 0x144c);
  *(undefined1 *)(param_1 + 0x14b9) = 1;
  *(bool *)(param_1 + 0x14b8) = *(int *)(param_1 + 0x14b0) == 0;
  fVar23 = fVar20 * local_158 * fVar10 + fVar24 * fVar21 + fVar4 * (float)local_168._0_4_ * fVar6 +
           fVar27 * fVar19 * fVar23;
  fVar26 = fVar20 * fStack_154 * fVar11 + fVar24 * fVar19 + fVar4 * (float)local_168._4_4_ * fVar7 +
           fVar27 * fVar21 * fVar26;
  fVar28 = fVar20 * fStack_150 * fVar12 + fVar24 * fVar15 + fVar4 * fStack_160 * fVar8 +
           fVar27 * fVar22 * fVar28;
  fVar15 = fVar20 * fStack_14c * fVar13 + fVar24 * fVar22 + fVar4 * fStack_15c * fVar9 +
           fVar27 * fVar15 * fVar29;
  *(float *)(param_1 + 0x1440) = fVar23;
  *(float *)(param_1 + 0x1444) = fVar26;
  *(float *)(param_1 + 0x1448) = fVar28;
  *(float *)(param_1 + 0x144c) = fVar15;
  if (*(int *)(param_1 + 0x14b0) == 0) {
    *(float *)(param_1 + 0x1470) = fVar23;
    *(float *)(param_1 + 0x1474) = fVar26;
    *(float *)(param_1 + 0x1478) = fVar28;
    *(float *)(param_1 + 0x147c) = fVar15;
    *(undefined8 *)(param_1 + 0x1480) = *(undefined8 *)(param_1 + 0x1450);
    *(undefined8 *)(param_1 + 0x1488) = *(undefined8 *)(param_1 + 0x1458);
    *(undefined8 *)(param_1 + 0x1490) = *(undefined8 *)(param_1 + 0x1460);
    *(undefined8 *)(param_1 + 0x1498) = *(undefined8 *)(param_1 + 0x1468);
  }
  fVar15 = *(float *)(param_1 + 0x1b4c) * 0.008726646;
  if (fVar15 < 0.0) {
    fVar22 = fVar15 * 0.15915494 - 0.5;
  }
  else {
    fVar22 = fVar15 * 0.15915494 + 0.5;
  }
  fVar15 = fVar15 - (float)(int)fVar22 * 6.2831855;
  if (fVar15 <= 1.5707964) {
    if (-1.5707964 <= fVar15) {
      fVar30 = 1.0;
    }
    else {
      fVar15 = -3.1415927 - fVar15;
    }
  }
  else {
    fVar15 = 3.1415927 - fVar15;
  }
  fVar22 = fVar15 * fVar15;
  fVar15 = (((((2.7525562e-06 - fVar22 * 2.3889859e-08) * fVar22 - 0.00019840874) * fVar22 +
             0.008333331) * fVar22 - 0.16666667) * fVar22 + 1.0) * fVar15;
  fVar29 = fVar15 * (float)DAT_1464aa798;
  fVar28 = fVar15 * DAT_1464aa798._4_4_;
  fVar15 = fVar15 * DAT_1464aa7a0;
  fVar30 = (((((2.4760495e-05 - fVar22 * 2.6051615e-07) * fVar22 - 0.0013888378) * fVar22 +
             0.041666638) * fVar22 - 0.5) * fVar22 + 1.0) * fVar30;
  FUN_140a2efb0(param_1 + 0x18e0);
  fVar22 = *(float *)(param_1 + 0x1910);
  fVar20 = *(float *)(param_1 + 0x1914);
  fVar4 = *(float *)(param_1 + 0x1918);
  fVar27 = *(float *)(param_1 + 0x191c);
  *(undefined1 *)(param_1 + 0x1989) = 1;
  *(bool *)(param_1 + 0x1988) = *(int *)(param_1 + 0x1980) == 0;
  fVar24 = fVar30 * fVar22 * fVar10 + fVar27 * fVar29 + fVar15 * fVar20 * _DAT_1468660c0 +
           fVar28 * fVar4 * _DAT_1468660b0;
  fVar23 = fVar15 * fVar22 * fVar11 + fVar27 * fVar28 + fVar30 * fVar20 * fRam00000001468660c4 +
           fVar29 * fVar4 * fRam00000001468660b4;
  fVar26 = fVar28 * fVar22 * fVar12 + fVar27 * fVar15 + fVar29 * fVar20 * fRam00000001468660c8 +
           fVar30 * fVar4 * fRam00000001468660b8;
  fVar15 = fVar29 * fVar22 * fVar13 + fVar27 * fVar30 + fVar28 * fVar20 * fRam00000001468660cc +
           fVar15 * fVar4 * fRam00000001468660bc;
  *(float *)(param_1 + 0x1910) = fVar24;
  *(float *)(param_1 + 0x1914) = fVar23;
  *(float *)(param_1 + 0x1918) = fVar26;
  *(float *)(param_1 + 0x191c) = fVar15;
  if (*(int *)(param_1 + 0x1980) == 0) {
    *(float *)(param_1 + 0x1940) = fVar24;
    *(float *)(param_1 + 0x1944) = fVar23;
    *(float *)(param_1 + 0x1948) = fVar26;
    *(float *)(param_1 + 0x194c) = fVar15;
    *(undefined8 *)(param_1 + 0x1950) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x1958) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x1930);
    *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x1934);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x1938);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x193c);
  }
  lVar2 = param_1 + 0xd30;
  FUN_140a2efb0(lVar2);
  fVar15 = *(float *)(param_1 + 0xd70);
  fVar30 = *(float *)(param_1 + 0xd74);
  fVar22 = *(float *)(param_1 + 0xd78);
  FUN_140a2efb0(param_1 + 0xde0);
  local_1a8 = *(float *)(param_1 + 0xe20) - fVar15;
  local_1a4 = *(float *)(param_1 + 0xe24) - fVar30;
  local_1a0 = *(float *)(param_1 + 0xe28) - fVar22;
  FUN_140a2efb0(lVar2);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0xd60);
  fVar15 = auVar3._8_4_;
  fVar30 = fVar15 + fVar15;
  fVar22 = -auVar3._4_4_;
  fVar22 = fVar22 + fVar22;
  local_1d8 = (auVar3._4_4_ * fVar22 - fVar15 * fVar30) + 1.0;
  fStack_1d4 = auVar3._12_4_ * fVar30 - auVar3._0_4_ * fVar22;
  fStack_1d0 = auVar3._12_4_ * fVar22 + auVar3._0_4_ * fVar30;
  uVar14 = FRotationMatrix::MakeFromZX(local_108,&local_1a8,&local_1d8);
  FMatrix::ToQuat(uVar14,&local_148);
  FUN_140a2efb0(lVar2);
  *(undefined8 *)(param_1 + 0xd60) = local_148;
  *(undefined8 *)(param_1 + 0xd68) = uStack_140;
  *(bool *)(param_1 + 0xdd8) = *(int *)(param_1 + 0xdd0) == 0;
  *(undefined1 *)(param_1 + 0xdd9) = 1;
  if (*(int *)(param_1 + 0xdd0) == 0) {
    *(undefined8 *)(param_1 + 0xd90) = local_148;
    *(undefined8 *)(param_1 + 0xd98) = uStack_140;
    *(undefined8 *)(param_1 + 0xda0) = *(undefined8 *)(param_1 + 0xd70);
    *(undefined8 *)(param_1 + 0xda8) = *(undefined8 *)(param_1 + 0xd78);
    *(undefined8 *)(param_1 + 0xdb0) = *(undefined8 *)(param_1 + 0xd80);
    *(undefined8 *)(param_1 + 0xdb8) = *(undefined8 *)(param_1 + 0xd88);
  }
  FUN_140a2efb0(param_1 + 0xf40);
  *(undefined8 *)(param_1 + 0xf70) = local_148;
  *(undefined8 *)(param_1 + 0xf78) = uStack_140;
  *(bool *)(param_1 + 0xfe8) = *(int *)(param_1 + 0xfe0) == 0;
  *(undefined1 *)(param_1 + 0xfe9) = 1;
  if (*(int *)(param_1 + 0xfe0) == 0) {
    *(undefined8 *)(param_1 + 4000) = local_148;
    *(undefined8 *)(param_1 + 0xfa8) = uStack_140;
    *(undefined8 *)(param_1 + 0xfb0) = *(undefined8 *)(param_1 + 0xf80);
    *(undefined8 *)(param_1 + 0xfb8) = *(undefined8 *)(param_1 + 0xf88);
    *(undefined8 *)(param_1 + 0xfc0) = *(undefined8 *)(param_1 + 0xf90);
    *(undefined8 *)(param_1 + 0xfc8) = *(undefined8 *)(param_1 + 0xf98);
  }
  lVar2 = param_1 + 0x10a0;
  FUN_140a2efb0(lVar2);
  fVar15 = *(float *)(param_1 + 0x10e0);
  fVar30 = *(float *)(param_1 + 0x10e4);
  fVar22 = *(float *)(param_1 + 0x10e8);
  FUN_140a2efb0(param_1 + 0x1200);
  local_198 = *(float *)(param_1 + 0x1240) - fVar15;
  local_194 = *(float *)(param_1 + 0x1244) - fVar30;
  local_190 = *(float *)(param_1 + 0x1248) - fVar22;
  FUN_140a2efb0(lVar2);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x10d0);
  fVar15 = auVar3._8_4_;
  fVar30 = fVar15 + fVar15;
  fVar22 = -auVar3._4_4_;
  fVar22 = fVar22 + fVar22;
  local_1d8 = (auVar3._4_4_ * fVar22 - fVar15 * fVar30) + 1.0;
  fStack_1d4 = auVar3._12_4_ * fVar30 - auVar3._0_4_ * fVar22;
  fStack_1d0 = auVar3._12_4_ * fVar22 + auVar3._0_4_ * fVar30;
  uVar14 = FRotationMatrix::MakeFromZX(local_108,&local_198,&local_1d8);
  FMatrix::ToQuat(uVar14,&local_138);
  FUN_140a2efb0(lVar2);
  *(undefined8 *)(param_1 + 0x10d0) = local_138;
  *(undefined8 *)(param_1 + 0x10d8) = uStack_130;
  *(bool *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1140) == 0;
  *(undefined1 *)(param_1 + 0x1149) = 1;
  if (*(int *)(param_1 + 0x1140) == 0) {
    *(undefined8 *)(param_1 + 0x1100) = local_138;
    *(undefined8 *)(param_1 + 0x1108) = uStack_130;
    *(undefined8 *)(param_1 + 0x1110) = *(undefined8 *)(param_1 + 0x10e0);
    *(undefined8 *)(param_1 + 0x1118) = *(undefined8 *)(param_1 + 0x10e8);
    *(undefined8 *)(param_1 + 0x1120) = *(undefined8 *)(param_1 + 0x10f0);
    *(undefined8 *)(param_1 + 0x1128) = *(undefined8 *)(param_1 + 0x10f8);
  }
  FUN_140a2efb0(param_1 + 0x1360);
  *(undefined8 *)(param_1 + 0x1390) = local_138;
  *(undefined8 *)(param_1 + 0x1398) = uStack_130;
  *(bool *)(param_1 + 0x1408) = *(int *)(param_1 + 0x1400) == 0;
  *(undefined1 *)(param_1 + 0x1409) = 1;
  if (*(int *)(param_1 + 0x1400) == 0) {
    *(undefined8 *)(param_1 + 0x13c0) = local_138;
    *(undefined8 *)(param_1 + 0x13c8) = uStack_130;
    *(undefined8 *)(param_1 + 0x13d0) = *(undefined8 *)(param_1 + 0x13a0);
    *(undefined8 *)(param_1 + 0x13d8) = *(undefined8 *)(param_1 + 0x13a8);
    *(undefined8 *)(param_1 + 0x13e0) = *(undefined8 *)(param_1 + 0x13b0);
    *(undefined8 *)(param_1 + 0x13e8) = *(undefined8 *)(param_1 + 0x13b8);
  }
  FUN_140a2efb0(param_1 + 0x1570);
  fVar15 = *(float *)(param_1 + 0x15b0);
  fVar30 = *(float *)(param_1 + 0x15b4);
  fVar22 = *(float *)(param_1 + 0x15b8);
  FUN_140a2efb0(param_1 + 0x1620);
  local_188 = *(float *)(param_1 + 0x1660) - fVar15;
  local_184 = *(float *)(param_1 + 0x1664) - fVar30;
  local_180 = *(float *)(param_1 + 0x1668) - fVar22;
  uVar14 = FUN_140a312f0(param_1 + 0x180,&local_1d8,0x1d);
  uVar14 = FRotationMatrix::MakeFromZX(local_108,&local_188,uVar14);
  FMatrix::ToQuat(uVar14,&local_128);
  FUN_140a2efb0(param_1 + 0x1570);
  *(undefined8 *)(param_1 + 0x15a0) = local_128;
  *(undefined8 *)(param_1 + 0x15a8) = uStack_120;
  *(bool *)(param_1 + 0x1618) = *(int *)(param_1 + 0x1610) == 0;
  *(undefined1 *)(param_1 + 0x1619) = 1;
  if (*(int *)(param_1 + 0x1610) == 0) {
    *(undefined8 *)(param_1 + 0x15d0) = local_128;
    *(undefined8 *)(param_1 + 0x15d8) = uStack_120;
    *(undefined8 *)(param_1 + 0x15e0) = *(undefined8 *)(param_1 + 0x15b0);
    *(undefined8 *)(param_1 + 0x15e8) = *(undefined8 *)(param_1 + 0x15b8);
    *(undefined8 *)(param_1 + 0x15f0) = *(undefined8 *)(param_1 + 0x15c0);
    *(undefined8 *)(param_1 + 0x15f8) = *(undefined8 *)(param_1 + 0x15c8);
  }
  FUN_140a2efb0(param_1 + 0x1780);
  *(undefined8 *)(param_1 + 0x17b0) = local_128;
  *(undefined8 *)(param_1 + 0x17b8) = uStack_120;
  *(bool *)(param_1 + 0x1828) = *(int *)(param_1 + 0x1820) == 0;
  *(undefined1 *)(param_1 + 0x1829) = 1;
  if (*(int *)(param_1 + 0x1820) == 0) {
    *(undefined8 *)(param_1 + 0x17e0) = local_128;
    *(undefined8 *)(param_1 + 0x17e8) = uStack_120;
    *(undefined8 *)(param_1 + 0x17f0) = *(undefined8 *)(param_1 + 0x17c0);
    *(undefined8 *)(param_1 + 0x17f8) = *(undefined8 *)(param_1 + 0x17c8);
    *(undefined8 *)(param_1 + 0x1800) = *(undefined8 *)(param_1 + 0x17d0);
    *(undefined8 *)(param_1 + 0x1808) = *(undefined8 *)(param_1 + 0x17d8);
  }
  FUN_140a2efb0(lVar1);
  fVar15 = *(float *)(param_1 + 0xa00);
  fVar30 = *(float *)(param_1 + 0xa04);
  fVar22 = *(float *)(param_1 + 0xa08);
  FUN_140a2efb0(param_1 + 0xa70);
  local_178 = *(float *)(param_1 + 0xab0) - fVar15;
  local_174 = *(float *)(param_1 + 0xab4) - fVar30;
  local_170 = *(float *)(param_1 + 0xab8) - fVar22;
  uVar14 = FUN_140a312f0(param_1 + 0x180,&local_1d8,0xc);
  uVar14 = FRotationMatrix::MakeFromZX(local_108,&local_178,uVar14);
  FMatrix::ToQuat(uVar14,&local_118);
  FUN_140a2efb0(lVar1);
  *(undefined8 *)(param_1 + 0x9f0) = local_118;
  *(undefined8 *)(param_1 + 0x9f8) = uStack_110;
  *(bool *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa60) == 0;
  *(undefined1 *)(param_1 + 0xa69) = 1;
  if (*(int *)(param_1 + 0xa60) == 0) {
    *(undefined8 *)(param_1 + 0xa20) = local_118;
    *(undefined8 *)(param_1 + 0xa28) = uStack_110;
    *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(param_1 + 0xa00);
    *(undefined8 *)(param_1 + 0xa38) = *(undefined8 *)(param_1 + 0xa08);
    *(undefined8 *)(param_1 + 0xa40) = *(undefined8 *)(param_1 + 0xa10);
    *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(param_1 + 0xa18);
  }
  FUN_140a2efb0(param_1 + 0xbd0);
  *(undefined8 *)(param_1 + 0xc00) = local_118;
  *(undefined8 *)(param_1 + 0xc08) = uStack_110;
  *(bool *)(param_1 + 0xc78) = *(int *)(param_1 + 0xc70) == 0;
  *(undefined1 *)(param_1 + 0xc79) = 1;
  if (*(int *)(param_1 + 0xc70) == 0) {
    *(undefined8 *)(param_1 + 0xc30) = local_118;
    *(undefined8 *)(param_1 + 0xc38) = uStack_110;
    *(undefined8 *)(param_1 + 0xc40) = *(undefined8 *)(param_1 + 0xc10);
    *(undefined8 *)(param_1 + 0xc48) = *(undefined8 *)(param_1 + 0xc18);
    *(undefined8 *)(param_1 + 0xc50) = *(undefined8 *)(param_1 + 0xc20);
    *(undefined8 *)(param_1 + 0xc58) = *(undefined8 *)(param_1 + 0xc28);
  }
  return;
}



// FUNCTION 140a3f7f0 FUN_140a3f7f0 body=2850 status=ok
// SIG undefined FUN_140a3f7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a3f7f0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  
  fVar19 = *(float *)(param_1 + 0x1b24);
  FUN_140a2efb0(param_1 + 0x1620);
  fVar19 = SUB164(*(undefined1 (*) [16])(param_1 + 0x1660),8) + fVar19;
  *(undefined1 *)(param_1 + 0x16c9) = 1;
  *(bool *)(param_1 + 0x16c8) = *(int *)(param_1 + 0x16c0) == 0;
  uVar2 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1660),0);
  auVar1._8_4_ = fVar19;
  auVar1._0_8_ = uVar2;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1660) = auVar1;
  if (*(int *)(param_1 + 0x16c0) == 0) {
    *(undefined8 *)(param_1 + 0x1680) = *(undefined8 *)(param_1 + 0x1650);
    *(undefined8 *)(param_1 + 0x1688) = *(undefined8 *)(param_1 + 0x1658);
    auVar3._8_4_ = fVar19;
    auVar3._0_8_ = uVar2;
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1690) = auVar3;
    *(undefined8 *)(param_1 + 0x16a0) = *(undefined8 *)(param_1 + 0x1670);
    *(undefined8 *)(param_1 + 0x16a8) = *(undefined8 *)(param_1 + 0x1678);
  }
  fVar19 = *(float *)(param_1 + 0x1b28);
  FUN_140a2efb0(param_1 + 0x1200);
  fVar19 = SUB164(*(undefined1 (*) [16])(param_1 + 0x1240),8) + fVar19;
  *(undefined1 *)(param_1 + 0x12a9) = 1;
  *(bool *)(param_1 + 0x12a8) = *(int *)(param_1 + 0x12a0) == 0;
  uVar2 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1240),0);
  auVar4._8_4_ = fVar19;
  auVar4._0_8_ = uVar2;
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1240) = auVar4;
  if (*(int *)(param_1 + 0x12a0) == 0) {
    *(undefined8 *)(param_1 + 0x1260) = *(undefined8 *)(param_1 + 0x1230);
    *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x1238);
    auVar5._8_4_ = fVar19;
    auVar5._0_8_ = uVar2;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1270) = auVar5;
    *(undefined8 *)(param_1 + 0x1280) = *(undefined8 *)(param_1 + 0x1250);
    *(undefined8 *)(param_1 + 0x1288) = *(undefined8 *)(param_1 + 0x1258);
  }
  fVar19 = *(float *)(param_1 + 0x1b2c);
  FUN_140a2efb0(param_1 + 0xde0);
  fVar19 = SUB164(*(undefined1 (*) [16])(param_1 + 0xe20),8) + fVar19;
  *(undefined1 *)(param_1 + 0xe89) = 1;
  *(bool *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe80) == 0;
  uVar2 = SUB168(*(undefined1 (*) [16])(param_1 + 0xe20),0);
  auVar6._8_4_ = fVar19;
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe20) = auVar6;
  if (*(int *)(param_1 + 0xe80) == 0) {
    *(undefined8 *)(param_1 + 0xe40) = *(undefined8 *)(param_1 + 0xe10);
    *(undefined8 *)(param_1 + 0xe48) = *(undefined8 *)(param_1 + 0xe18);
    auVar7._8_4_ = fVar19;
    auVar7._0_8_ = uVar2;
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe50) = auVar7;
    *(undefined8 *)(param_1 + 0xe60) = *(undefined8 *)(param_1 + 0xe30);
    *(undefined8 *)(param_1 + 0xe68) = *(undefined8 *)(param_1 + 0xe38);
  }
  fVar19 = *(float *)(param_1 + 0x1b30);
  FUN_140a2efb0(param_1 + 0xa70);
  uVar2 = *(undefined8 *)(param_1 + 0xab0);
  fVar19 = (float)*(undefined8 *)(param_1 + 0xab8) + fVar19;
  *(undefined1 *)(param_1 + 0xb19) = 1;
  *(bool *)(param_1 + 0xb18) = *(int *)(param_1 + 0xb10) == 0;
  auVar8._8_4_ = fVar19;
  auVar8._0_8_ = uVar2;
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xab0) = auVar8;
  if (*(int *)(param_1 + 0xb10) == 0) {
    *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 0xaa0);
    *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0xaa8);
    auVar9._8_4_ = fVar19;
    auVar9._0_8_ = uVar2;
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xae0) = auVar9;
    *(undefined8 *)(param_1 + 0xaf0) = *(undefined8 *)(param_1 + 0xac0);
    *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_1 + 0xac8);
  }
  fVar19 = *(float *)(param_1 + 0x1b38) * 0.008726646;
  if (fVar19 < 0.0) {
    fVar20 = fVar19 * 0.15915494 - 0.5;
  }
  else {
    fVar20 = fVar19 * 0.15915494 + 0.5;
  }
  fVar34 = -1.0;
  fVar19 = fVar19 - (float)(int)fVar20 * 6.2831855;
  if (fVar19 <= 1.5707964) {
    if (-1.5707964 <= fVar19) {
      fVar20 = 1.0;
    }
    else {
      fVar20 = -1.0;
      fVar19 = -3.1415927 - fVar19;
    }
  }
  else {
    fVar20 = -1.0;
    fVar19 = 3.1415927 - fVar19;
  }
  fVar22 = fVar19 * fVar19;
  fVar19 = (((((2.7525562e-06 - fVar22 * 2.3889859e-08) * fVar22 - 0.00019840874) * fVar22 +
             0.008333331) * fVar22 - 0.16666667) * fVar22 + 1.0) * fVar19;
  fVar33 = (float)DAT_1464aa798 * fVar19;
  fVar20 = (((((2.4760495e-05 - fVar22 * 2.6051615e-07) * fVar22 - 0.0013888378) * fVar22 +
             0.041666638) * fVar22 - 0.5) * fVar22 + 1.0) * fVar20;
  fVar36 = DAT_1464aa798._4_4_ * fVar19;
  fVar19 = DAT_1464aa7a0 * fVar19;
  FUN_140a2efb0(param_1 + 0x1620);
  fVar22 = *(float *)(param_1 + 0x1650);
  fVar31 = *(float *)(param_1 + 0x1654);
  fVar32 = *(float *)(param_1 + 0x1658);
  fVar27 = *(float *)(param_1 + 0x165c);
  *(undefined1 *)(param_1 + 0x16c9) = 1;
  *(bool *)(param_1 + 0x16c8) = *(int *)(param_1 + 0x16c0) == 0;
  fVar26 = fVar22 * fVar20 * _DAT_1468660d0 + fVar27 * fVar33 + fVar31 * fVar19 * _DAT_1468660c0 +
           fVar32 * fVar36 * _DAT_1468660b0;
  fVar28 = fVar22 * fVar19 * fRam00000001468660d4 + fVar27 * fVar36 +
           fVar31 * fVar20 * fRam00000001468660c4 + fVar32 * fVar33 * fRam00000001468660b4;
  fVar29 = fVar22 * fVar36 * fRam00000001468660d8 + fVar27 * fVar19 +
           fVar31 * fVar33 * fRam00000001468660c8 + fVar32 * fVar20 * fRam00000001468660b8;
  fVar22 = fVar22 * fVar33 * fRam00000001468660dc + fVar27 * fVar20 +
           fVar31 * fVar36 * fRam00000001468660cc + fVar32 * fVar19 * fRam00000001468660bc;
  *(float *)(param_1 + 0x1650) = fVar26;
  *(float *)(param_1 + 0x1654) = fVar28;
  *(float *)(param_1 + 0x1658) = fVar29;
  *(float *)(param_1 + 0x165c) = fVar22;
  if (*(int *)(param_1 + 0x16c0) == 0) {
    *(float *)(param_1 + 0x1680) = fVar26;
    *(float *)(param_1 + 0x1684) = fVar28;
    *(float *)(param_1 + 0x1688) = fVar29;
    *(float *)(param_1 + 0x168c) = fVar22;
    *(undefined8 *)(param_1 + 0x1690) = *(undefined8 *)(param_1 + 0x1660);
    *(undefined8 *)(param_1 + 0x1698) = *(undefined8 *)(param_1 + 0x1668);
    *(undefined4 *)(param_1 + 0x16a0) = *(undefined4 *)(param_1 + 0x1670);
    *(undefined4 *)(param_1 + 0x16a4) = *(undefined4 *)(param_1 + 0x1674);
    *(undefined4 *)(param_1 + 0x16a8) = *(undefined4 *)(param_1 + 0x1678);
    *(undefined4 *)(param_1 + 0x16ac) = *(undefined4 *)(param_1 + 0x167c);
  }
  FUN_140a2efb0(param_1 + 0x1200);
  fVar22 = *(float *)(param_1 + 0x1230);
  fVar31 = *(float *)(param_1 + 0x1234);
  fVar32 = *(float *)(param_1 + 0x1238);
  fVar27 = *(float *)(param_1 + 0x123c);
  *(undefined1 *)(param_1 + 0x12a9) = 1;
  fVar26 = fVar22 * fVar20 * _DAT_1468660d0;
  fVar28 = fVar22 * fVar19 * fRam00000001468660d4;
  fVar29 = fVar22 * fVar36 * fRam00000001468660d8;
  fVar30 = fVar22 * fVar33 * fRam00000001468660dc;
  *(bool *)(param_1 + 0x12a8) = *(int *)(param_1 + 0x12a0) == 0;
  fVar22 = fVar26 + fVar27 * fVar33 + fVar31 * fVar19 * _DAT_1468660c0 +
           fVar32 * fVar36 * _DAT_1468660b0;
  fVar26 = fVar28 + fVar27 * fVar36 + fVar31 * fVar20 * fRam00000001468660c4 +
           fVar32 * fVar33 * fRam00000001468660b4;
  fVar28 = fVar29 + fVar27 * fVar19 + fVar31 * fVar33 * fRam00000001468660c8 +
           fVar32 * fVar20 * fRam00000001468660b8;
  fVar31 = fVar30 + fVar27 * fVar20 + fVar31 * fVar36 * fRam00000001468660cc +
           fVar32 * fVar19 * fRam00000001468660bc;
  *(float *)(param_1 + 0x1230) = fVar22;
  *(float *)(param_1 + 0x1234) = fVar26;
  *(float *)(param_1 + 0x1238) = fVar28;
  *(float *)(param_1 + 0x123c) = fVar31;
  if (*(int *)(param_1 + 0x12a0) == 0) {
    *(float *)(param_1 + 0x1260) = fVar22;
    *(float *)(param_1 + 0x1264) = fVar26;
    *(float *)(param_1 + 0x1268) = fVar28;
    *(float *)(param_1 + 0x126c) = fVar31;
    *(undefined8 *)(param_1 + 0x1270) = *(undefined8 *)(param_1 + 0x1240);
    *(undefined8 *)(param_1 + 0x1278) = *(undefined8 *)(param_1 + 0x1248);
    *(undefined4 *)(param_1 + 0x1280) = *(undefined4 *)(param_1 + 0x1250);
    *(undefined4 *)(param_1 + 0x1284) = *(undefined4 *)(param_1 + 0x1254);
    *(undefined4 *)(param_1 + 0x1288) = *(undefined4 *)(param_1 + 0x1258);
    *(undefined4 *)(param_1 + 0x128c) = *(undefined4 *)(param_1 + 0x125c);
  }
  FUN_140a2efb0(param_1 + 0xde0);
  fVar22 = *(float *)(param_1 + 0xe10);
  fVar31 = *(float *)(param_1 + 0xe14);
  fVar32 = *(float *)(param_1 + 0xe18);
  fVar27 = *(float *)(param_1 + 0xe1c);
  *(undefined1 *)(param_1 + 0xe89) = 1;
  fVar26 = fVar22 * fVar20 * _DAT_1468660d0;
  fVar28 = fVar22 * fVar19 * fRam00000001468660d4;
  fVar29 = fVar22 * fVar36 * fRam00000001468660d8;
  fVar30 = fVar22 * fVar33 * fRam00000001468660dc;
  *(bool *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe80) == 0;
  fVar22 = fVar26 + fVar27 * fVar33 + fVar31 * fVar19 * _DAT_1468660c0 +
           fVar32 * fVar36 * _DAT_1468660b0;
  fVar26 = fVar28 + fVar27 * fVar36 + fVar31 * fVar20 * fRam00000001468660c4 +
           fVar32 * fVar33 * fRam00000001468660b4;
  fVar28 = fVar29 + fVar27 * fVar19 + fVar31 * fVar33 * fRam00000001468660c8 +
           fVar32 * fVar20 * fRam00000001468660b8;
  fVar31 = fVar30 + fVar27 * fVar20 + fVar31 * fVar36 * fRam00000001468660cc +
           fVar32 * fVar19 * fRam00000001468660bc;
  *(float *)(param_1 + 0xe10) = fVar22;
  *(float *)(param_1 + 0xe14) = fVar26;
  *(float *)(param_1 + 0xe18) = fVar28;
  *(float *)(param_1 + 0xe1c) = fVar31;
  if (*(int *)(param_1 + 0xe80) == 0) {
    *(float *)(param_1 + 0xe40) = fVar22;
    *(float *)(param_1 + 0xe44) = fVar26;
    *(float *)(param_1 + 0xe48) = fVar28;
    *(float *)(param_1 + 0xe4c) = fVar31;
    *(undefined8 *)(param_1 + 0xe50) = *(undefined8 *)(param_1 + 0xe20);
    *(undefined8 *)(param_1 + 0xe58) = *(undefined8 *)(param_1 + 0xe28);
    *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0xe30);
    *(undefined4 *)(param_1 + 0xe64) = *(undefined4 *)(param_1 + 0xe34);
    *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe38);
    *(undefined4 *)(param_1 + 0xe6c) = *(undefined4 *)(param_1 + 0xe3c);
  }
  FUN_140a2efb0(param_1 + 0xa70);
  fVar22 = *(float *)(param_1 + 0xaa0);
  fVar31 = *(float *)(param_1 + 0xaa4);
  fVar32 = *(float *)(param_1 + 0xaa8);
  fVar27 = *(float *)(param_1 + 0xaac);
  *(undefined1 *)(param_1 + 0xb19) = 1;
  fVar26 = fVar22 * fVar20 * _DAT_1468660d0;
  fVar28 = fVar22 * fVar19 * fRam00000001468660d4;
  fVar29 = fVar22 * fVar36 * fRam00000001468660d8;
  fVar30 = fVar22 * fVar33 * fRam00000001468660dc;
  *(bool *)(param_1 + 0xb18) = *(int *)(param_1 + 0xb10) == 0;
  fVar22 = fVar26 + fVar27 * fVar33 + fVar31 * fVar19 * _DAT_1468660c0 +
           fVar32 * fVar36 * _DAT_1468660b0;
  fVar26 = fVar28 + fVar27 * fVar36 + fVar31 * fVar20 * fRam00000001468660c4 +
           fVar32 * fVar33 * fRam00000001468660b4;
  fVar28 = fVar29 + fVar27 * fVar19 + fVar31 * fVar33 * fRam00000001468660c8 +
           fVar32 * fVar20 * fRam00000001468660b8;
  fVar19 = fVar30 + fVar27 * fVar20 + fVar31 * fVar36 * fRam00000001468660cc +
           fVar32 * fVar19 * fRam00000001468660bc;
  *(float *)(param_1 + 0xaa0) = fVar22;
  *(float *)(param_1 + 0xaa4) = fVar26;
  *(float *)(param_1 + 0xaa8) = fVar28;
  *(float *)(param_1 + 0xaac) = fVar19;
  if (*(int *)(param_1 + 0xb10) == 0) {
    *(float *)(param_1 + 0xad0) = fVar22;
    *(float *)(param_1 + 0xad4) = fVar26;
    *(float *)(param_1 + 0xad8) = fVar28;
    *(float *)(param_1 + 0xadc) = fVar19;
    *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(param_1 + 0xab0);
    *(undefined8 *)(param_1 + 0xae8) = *(undefined8 *)(param_1 + 0xab8);
    *(undefined8 *)(param_1 + 0xaf0) = *(undefined8 *)(param_1 + 0xac0);
    *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_1 + 0xac8);
  }
  fVar19 = *(float *)(param_1 + 0x1b3c) * 0.008726646;
  if (fVar19 < 0.0) {
    fVar20 = fVar19 * 0.15915494 - 0.5;
  }
  else {
    fVar20 = fVar19 * 0.15915494 + 0.5;
  }
  fVar19 = fVar19 - (float)(int)fVar20 * 6.2831855;
  if (fVar19 <= 1.5707964) {
    if (-1.5707964 <= fVar19) {
      fVar20 = 1.0;
    }
    else {
      fVar20 = -1.0;
      fVar19 = -3.1415927 - fVar19;
    }
  }
  else {
    fVar20 = -1.0;
    fVar19 = 3.1415927 - fVar19;
  }
  fVar32 = *(float *)(param_1 + 0x1b3c) * -0.008726646;
  fVar27 = fVar19 * fVar19;
  fVar19 = (((((2.7525562e-06 - fVar27 * 2.3889859e-08) * fVar27 - 0.00019840874) * fVar27 +
             0.008333331) * fVar27 - 0.16666667) * fVar27 + 1.0) * fVar19;
  fVar22 = (float)DAT_1464aa7b8 * fVar19;
  fVar31 = DAT_1464aa7b8._4_4_ * fVar19;
  fVar19 = DAT_1464aa7c0 * fVar19;
  fVar20 = (((((2.4760495e-05 - fVar27 * 2.6051615e-07) * fVar27 - 0.0013888378) * fVar27 +
             0.041666638) * fVar27 - 0.5) * fVar27 + 1.0) * fVar20;
  if (fVar32 < 0.0) {
    fVar27 = fVar32 * 0.15915494 - 0.5;
  }
  else {
    fVar27 = fVar32 * 0.15915494 + 0.5;
  }
  fVar32 = fVar32 - (float)(int)fVar27 * 6.2831855;
  if (fVar32 <= 1.5707964) {
    if (-1.5707964 <= fVar32) {
      fVar34 = 1.0;
    }
    else {
      fVar32 = -3.1415927 - fVar32;
    }
  }
  else {
    fVar32 = 3.1415927 - fVar32;
  }
  fVar27 = fVar32 * fVar32;
  fVar32 = (((((2.7525562e-06 - fVar27 * 2.3889859e-08) * fVar27 - 0.00019840874) * fVar27 +
             0.008333331) * fVar27 - 0.16666667) * fVar27 + 1.0) * fVar32;
  fVar21 = DAT_1464aa7c0 * fVar32;
  fVar35 = (float)DAT_1464aa7b8 * fVar32;
  fVar32 = DAT_1464aa7b8._4_4_ * fVar32;
  fVar34 = (((((2.4760495e-05 - fVar27 * 2.6051615e-07) * fVar27 - 0.0013888378) * fVar27 +
             0.041666638) * fVar27 - 0.5) * fVar27 + 1.0) * fVar34;
  FUN_140a2efb0(param_1 + 0x16d0);
  fVar18 = fRam00000001468660dc;
  fVar17 = fRam00000001468660d8;
  fVar16 = fRam00000001468660d4;
  fVar15 = _DAT_1468660d0;
  fVar14 = fRam00000001468660cc;
  fVar13 = fRam00000001468660c8;
  fVar12 = fRam00000001468660c4;
  fVar11 = _DAT_1468660c0;
  fVar10 = fRam00000001468660bc;
  fVar30 = fRam00000001468660b8;
  fVar36 = fRam00000001468660b4;
  fVar33 = _DAT_1468660b0;
  fVar27 = *(float *)(param_1 + 0x1700);
  fVar26 = *(float *)(param_1 + 0x1704);
  fVar28 = *(float *)(param_1 + 0x1708);
  fVar29 = *(float *)(param_1 + 0x170c);
  *(undefined2 *)(param_1 + 0x1778) = 0x101;
  fVar23 = fVar27 * fVar20 * fVar15 + fVar29 * fVar22 + fVar26 * fVar19 * fVar11 +
           fVar28 * fVar31 * fVar33;
  fVar24 = fVar27 * fVar19 * fVar16 + fVar29 * fVar31 + fVar26 * fVar20 * fVar12 +
           fVar28 * fVar22 * fVar36;
  fVar25 = fVar27 * fVar31 * fVar17 + fVar29 * fVar19 + fVar26 * fVar22 * fVar13 +
           fVar28 * fVar20 * fVar30;
  fVar27 = fVar27 * fVar22 * fVar18 + fVar29 * fVar20 + fVar26 * fVar31 * fVar14 +
           fVar28 * fVar19 * fVar10;
  *(float *)(param_1 + 0x1700) = fVar23;
  *(float *)(param_1 + 0x1704) = fVar24;
  *(float *)(param_1 + 0x1708) = fVar25;
  *(float *)(param_1 + 0x170c) = fVar27;
  *(float *)(param_1 + 0x1730) = fVar23;
  *(float *)(param_1 + 0x1734) = fVar24;
  *(float *)(param_1 + 0x1738) = fVar25;
  *(float *)(param_1 + 0x173c) = fVar27;
  *(undefined8 *)(param_1 + 0x1740) = *(undefined8 *)(param_1 + 0x1710);
  *(undefined8 *)(param_1 + 0x1748) = *(undefined8 *)(param_1 + 0x1718);
  *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(param_1 + 0x1720);
  *(undefined4 *)(param_1 + 0x1754) = *(undefined4 *)(param_1 + 0x1724);
  *(undefined4 *)(param_1 + 0x1758) = *(undefined4 *)(param_1 + 0x1728);
  *(undefined4 *)(param_1 + 0x175c) = *(undefined4 *)(param_1 + 0x172c);
  FUN_140a2efb0(param_1 + 0x12b0);
  fVar27 = *(float *)(param_1 + 0x12e0);
  fVar26 = *(float *)(param_1 + 0x12e4);
  fVar28 = *(float *)(param_1 + 0x12e8);
  fVar29 = *(float *)(param_1 + 0x12ec);
  *(undefined2 *)(param_1 + 0x1358) = 0x101;
  fVar23 = fVar27 * fVar20 * fVar15 + fVar29 * fVar22 + fVar26 * fVar19 * fVar11 +
           fVar28 * fVar31 * fVar33;
  fVar24 = fVar27 * fVar19 * fVar16 + fVar29 * fVar31 + fVar26 * fVar20 * fVar12 +
           fVar28 * fVar22 * fVar36;
  fVar25 = fVar27 * fVar31 * fVar17 + fVar29 * fVar19 + fVar26 * fVar22 * fVar13 +
           fVar28 * fVar20 * fVar30;
  fVar27 = fVar27 * fVar22 * fVar18 + fVar29 * fVar20 + fVar26 * fVar31 * fVar14 +
           fVar28 * fVar19 * fVar10;
  *(float *)(param_1 + 0x12e0) = fVar23;
  *(float *)(param_1 + 0x12e4) = fVar24;
  *(float *)(param_1 + 0x12e8) = fVar25;
  *(float *)(param_1 + 0x12ec) = fVar27;
  *(float *)(param_1 + 0x1310) = fVar23;
  *(float *)(param_1 + 0x1314) = fVar24;
  *(float *)(param_1 + 0x1318) = fVar25;
  *(float *)(param_1 + 0x131c) = fVar27;
  *(undefined8 *)(param_1 + 0x1320) = *(undefined8 *)(param_1 + 0x12f0);
  *(undefined8 *)(param_1 + 0x1328) = *(undefined8 *)(param_1 + 0x12f8);
  *(undefined4 *)(param_1 + 0x1330) = *(undefined4 *)(param_1 + 0x1300);
  *(undefined4 *)(param_1 + 0x1334) = *(undefined4 *)(param_1 + 0x1304);
  *(undefined4 *)(param_1 + 0x1338) = *(undefined4 *)(param_1 + 0x1308);
  *(undefined4 *)(param_1 + 0x133c) = *(undefined4 *)(param_1 + 0x130c);
  FUN_140a2efb0(param_1 + 0xe90);
  fVar27 = *(float *)(param_1 + 0xec0);
  fVar26 = *(float *)(param_1 + 0xec4);
  fVar28 = *(float *)(param_1 + 0xec8);
  fVar29 = *(float *)(param_1 + 0xecc);
  *(undefined2 *)(param_1 + 0xf38) = 0x101;
  fVar23 = fVar27 * fVar20 * fVar15 + fVar29 * fVar22 + fVar26 * fVar19 * fVar11 +
           fVar28 * fVar31 * fVar33;
  fVar24 = fVar27 * fVar19 * fVar16 + fVar29 * fVar31 + fVar26 * fVar20 * fVar12 +
           fVar28 * fVar22 * fVar36;
  fVar25 = fVar27 * fVar31 * fVar17 + fVar29 * fVar19 + fVar26 * fVar22 * fVar13 +
           fVar28 * fVar20 * fVar30;
  fVar19 = fVar27 * fVar22 * fVar18 + fVar29 * fVar20 + fVar26 * fVar31 * fVar14 +
           fVar28 * fVar19 * fVar10;
  *(float *)(param_1 + 0xec0) = fVar23;
  *(float *)(param_1 + 0xec4) = fVar24;
  *(float *)(param_1 + 0xec8) = fVar25;
  *(float *)(param_1 + 0xecc) = fVar19;
  *(float *)(param_1 + 0xef0) = fVar23;
  *(float *)(param_1 + 0xef4) = fVar24;
  *(float *)(param_1 + 0xef8) = fVar25;
  *(float *)(param_1 + 0xefc) = fVar19;
  *(undefined8 *)(param_1 + 0xf00) = *(undefined8 *)(param_1 + 0xed0);
  *(undefined8 *)(param_1 + 0xf08) = *(undefined8 *)(param_1 + 0xed8);
  *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_1 + 0xee0);
  *(undefined4 *)(param_1 + 0xf14) = *(undefined4 *)(param_1 + 0xee4);
  *(undefined4 *)(param_1 + 0xf18) = *(undefined4 *)(param_1 + 0xee8);
  *(undefined4 *)(param_1 + 0xf1c) = *(undefined4 *)(param_1 + 0xeec);
  FUN_140a2efb0(param_1 + 0xb20);
  fVar19 = *(float *)(param_1 + 0xb50);
  fVar20 = *(float *)(param_1 + 0xb54);
  fVar22 = *(float *)(param_1 + 0xb58);
  fVar31 = *(float *)(param_1 + 0xb5c);
  fVar27 = fVar34 * fVar19 * fVar15 + fVar31 * fVar35 + fVar21 * fVar20 * fVar11 +
           fVar32 * fVar22 * fVar33;
  fVar26 = fVar21 * fVar19 * fVar16 + fVar31 * fVar32 + fVar34 * fVar20 * fVar12 +
           fVar35 * fVar22 * fVar36;
  fVar28 = fVar32 * fVar19 * fVar17 + fVar31 * fVar21 + fVar35 * fVar20 * fVar13 +
           fVar34 * fVar22 * fVar30;
  fVar19 = fVar35 * fVar19 * fVar18 + fVar31 * fVar34 + fVar32 * fVar20 * fVar14 +
           fVar21 * fVar22 * fVar10;
  *(float *)(param_1 + 0xb50) = fVar27;
  *(float *)(param_1 + 0xb54) = fVar26;
  *(float *)(param_1 + 0xb58) = fVar28;
  *(float *)(param_1 + 0xb5c) = fVar19;
  *(undefined2 *)(param_1 + 0xbc8) = 0x101;
  *(float *)(param_1 + 0xb80) = fVar27;
  *(float *)(param_1 + 0xb84) = fVar26;
  *(float *)(param_1 + 0xb88) = fVar28;
  *(float *)(param_1 + 0xb8c) = fVar19;
  *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xb98) = *(undefined8 *)(param_1 + 0xb68);
  *(undefined8 *)(param_1 + 0xba0) = *(undefined8 *)(param_1 + 0xb70);
  *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(param_1 + 0xb78);
  return;
}



// FUNCTION 140a40320 FUN_140a40320 body=709 status=ok
// SIG undefined FUN_140a40320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a40320(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0x4f0) != '\0') {
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      FUN_1405adb00(DAT_1468536c8,param_1);
    }
    uVar7 = 0;
    lVar3 = *(longlong *)(param_1 + 0x4f8);
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar4 = DAT_1461fd018;
    if (0 < DAT_1461fd018) {
      do {
        plVar9 = (longlong *)(DAT_1461fd010 + uVar10);
        if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
           iVar4 = DAT_1461fd018, *plVar2 == lVar3)) {
          if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar9 != 0) {
              lVar3 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar3;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
            iVar4 = DAT_1461fd018;
          }
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar8 < iVar4);
    }
    if (DAT_1461fd024 < 1) {
      uVar6 = uVar7;
      uVar10 = uVar7;
      iVar5 = iVar4;
      if (0 < iVar4) {
        do {
          if (((*(int *)(uVar10 + 8 + DAT_1461fd010) == 0) ||
              (*(longlong **)(uVar10 + DAT_1461fd010) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar10 + DAT_1461fd010) + 0x10))(), cVar1 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1461fd010,uVar6,1,1);
          }
          else {
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar10 = uVar10 + 0x10;
          }
          iVar5 = DAT_1461fd018;
        } while ((int)uVar6 < DAT_1461fd018);
      }
      _DAT_1461fd020 = iVar5 * 2;
      if (_DAT_1461fd020 < 3) {
        _DAT_1461fd020 = 2;
      }
      if ((_DAT_1461fd020 < iVar4) && (DAT_1461fd01c != iVar5)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1461fd010);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x500);
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar4 = DAT_1461fd000;
    if (0 < DAT_1461fd000) {
      do {
        plVar9 = (longlong *)(DAT_1461fcff8 + uVar10);
        if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
           iVar4 = DAT_1461fd000, *plVar2 == lVar3)) {
          if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar9 != 0) {
              lVar3 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar3;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
            iVar4 = DAT_1461fd000;
          }
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar8 < iVar4);
    }
    if (DAT_1461fd00c < 1) {
      uVar6 = uVar7;
      iVar5 = iVar4;
      if (0 < iVar4) {
        do {
          if (((*(int *)(uVar7 + 8 + DAT_1461fcff8) == 0) ||
              (*(longlong **)(uVar7 + DAT_1461fcff8) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_1461fcff8) + 0x10))(), cVar1 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1461fcff8,uVar6,1,1);
          }
          else {
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar7 = uVar7 + 0x10;
          }
          iVar5 = DAT_1461fd000;
        } while ((int)uVar6 < DAT_1461fd000);
      }
      _DAT_1461fd008 = iVar5 * 2;
      if (_DAT_1461fd008 < 3) {
        _DAT_1461fd008 = 2;
      }
      if ((_DAT_1461fd008 < iVar4) && (DAT_1461fd004 != iVar5)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1461fcff8);
      }
    }
    *(undefined1 *)(param_1 + 0x4f0) = 0;
  }
  return;
}



// FUNCTION 140a405f0 FUN_140a405f0 body=51 status=ok
// SIG undefined FUN_140a405f0(void)

void FUN_140a405f0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2];
  fVar2 = param_2 * *param_1 + param_1[1];
  param_1[1] = fVar2;
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - fVar1;
    param_1[1] = fVar2;
  }
  if (fVar2 < 0.0) {
    param_1[1] = fVar1 + fVar2;
  }
  return;
}



// FUNCTION 140a40630 FUN_140a40630 body=402 status=ok
// SIG undefined FUN_140a40630(void)

void FUN_140a40630(longlong param_1,longlong param_2,float param_3,char param_4,float param_5,
                  undefined8 param_6,undefined8 param_7,char param_8,float *param_9)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (((param_8 == '\0') && (*param_9 != 0.0)) || (param_4 != '\0')) {
    bVar1 = true;
    if (((param_9 == (float *)(param_1 + 0x264)) && (*(longlong *)(param_2 + 0x6b8) != 0)) &&
       (*(longlong *)(param_2 + 0x6c0) == 0)) {
      fVar4 = *(float *)(*(longlong *)(param_2 + 0x6b8) + 0x1cc);
    }
    else {
      fVar4 = param_3 + *param_9;
    }
    if (0.0 <= fVar4) {
      if (param_5 <= fVar4) {
        fVar4 = param_5;
      }
    }
    else {
      fVar4 = 0.0;
    }
    *param_9 = fVar4;
    bVar2 = true;
    if (param_4 != '\0') goto LAB_140a40715;
  }
  else {
    bVar2 = false;
  }
  bVar1 = bVar2;
  if ((param_5 == *param_9) || ((param_8 != '\0' && (*param_9 != 0.0)))) {
    fVar4 = param_9[2];
    if (param_9[2] <= param_9[1]) {
      fVar4 = param_9[1];
    }
    *param_9 = 0.0;
    bVar1 = false;
    param_9[1] = 0.0;
    param_9[2] = fVar4;
    fVar4 = param_9[4];
    if (param_9[4] <= param_9[3]) {
      fVar4 = param_9[3];
    }
    param_9[3] = 0.0;
    param_9[4] = fVar4;
  }
LAB_140a40715:
  fVar4 = (float)FMath::FInterpTo(param_9[2],0,param_8,*(undefined4 *)(param_1 + 0x48));
  param_9[2] = fVar4;
  fVar4 = (float)FMath::FInterpTo(param_9[4],0,param_3,*(undefined4 *)(param_1 + 0x48));
  param_9[4] = fVar4;
  if (bVar1) {
    fVar4 = *param_9;
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_6);
    fVar5 = (float)FRichCurve::Eval(uVar3,(1.0 / param_5) * fVar4,0);
    fVar4 = *param_9;
    param_9[1] = fVar5;
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_7);
    fVar4 = (float)FRichCurve::Eval(uVar3,(1.0 / param_5) * fVar4,0);
    param_9[3] = fVar4;
  }
  return;
}



// FUNCTION 140a407d0 FUN_140a407d0 body=1433 status=ok
// SIG undefined FUN_140a407d0(void)

void FUN_140a407d0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
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
  float fVar18;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  
  if (param_1[0xb4] != 0) {
    if ((char)param_1[0xae] == '\0') {
      local_e0 = *(float *)(param_1 + 0x9c);
      local_e8 = 0;
      if (-30.0 <= local_e0) {
        if (30.0 <= local_e0) {
          local_e0 = 30.0;
        }
      }
      else {
        local_e0 = -30.0;
      }
      FUN_140ebfa50(param_1[0xb4],&local_e8,1,0,1);
      FUN_140ebfa40(param_1[0xb4],*(undefined4 *)((longlong)param_1 + 0x4dc));
      return;
    }
    puVar5 = (undefined8 *)param_1[200];
    uVar1 = *puVar5;
    uVar2 = *(undefined8 *)((longlong)puVar5 + 0xc);
    uVar3 = puVar5[3];
    local_c0 = *(float *)(puVar5 + 1);
    local_d0 = *(float *)((longlong)puVar5 + 0x14);
    local_c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_e0 = *(float *)(puVar5 + 4);
    uVar4 = *(undefined8 *)((longlong)puVar5 + 0x24);
    local_b0 = *(float *)((longlong)puVar5 + 0x2c);
    local_e8._4_4_ = (float)(uVar3 >> 0x20);
    fVar9 = ((float)uVar3 + (float)uVar4) * 0.5;
    local_b8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    local_d8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar15 = ((float)uVar1 + (float)uVar2) * 0.5;
    fVar11 = (local_e8._4_4_ + local_b8._4_4_) * 0.5;
    fVar6 = (local_e0 + local_c0) * 0.5;
    fVar8 = (local_c8._4_4_ + local_d8._4_4_) * 0.5;
    fVar17 = (local_d0 + local_c0) * 0.5;
    fVar16 = ((float)uVar3 + (float)uVar1) * 0.5;
    fVar12 = (local_e0 + local_b0) * 0.5;
    fVar13 = (local_b0 + local_d0) * 0.5;
    fVar18 = (local_e8._4_4_ + local_c8._4_4_) * 0.5;
    fVar14 = ((float)uVar4 + (float)uVar2) * 0.5;
    fVar10 = (local_b8._4_4_ + local_d8._4_4_) * 0.5;
    if ((((((0.0001 < ABS(fVar15)) || (0.0001 < ABS(fVar8))) || (0.0001 < ABS(fVar17))) &&
         (((0.0001 < ABS(fVar9) || (0.0001 < ABS(fVar11))) || (0.0001 < ABS(fVar12))))) &&
        (((0.0001 < ABS(fVar14) || (0.0001 < ABS(fVar10))) || (0.0001 < ABS(fVar13))))) &&
       (((0.0001 < ABS(fVar16) || (0.0001 < ABS(fVar18))) || (0.0001 < ABS(fVar6))))) {
      local_e8 = uVar3;
      local_d8 = uVar2;
      local_c8 = uVar1;
      local_b8 = uVar4;
      if (param_1[0x2d] != 0) {
        FUN_142369f10(param_1[0x2d],&local_b8);
      }
      fVar10 = fVar10 - fVar18;
      fVar14 = fVar14 - fVar16;
      fVar13 = fVar13 - fVar6;
      fVar10 = fVar10 * fVar10 + fVar14 * fVar14 + fVar13 * fVar13;
      fVar6 = fVar13;
      if ((fVar10 != 1.0) && (fVar6 = DAT_1468b5d98, 1e-08 <= fVar10)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar10 * 0.5 * fVar6 * fVar6);
        fVar6 = (fVar6 + fVar6 * (0.5 - fVar10 * 0.5 * fVar6 * fVar6)) * fVar13;
      }
      fVar8 = fVar8 - fVar11;
      fVar15 = fVar15 - fVar9;
      fVar10 = fVar17 - fVar12;
      fVar9 = fVar8 * fVar8 + fVar15 * fVar15 + fVar10 * fVar10;
      fVar8 = fVar10;
      if ((fVar9 != 1.0) && (fVar8 = DAT_1468b5d98, 1e-08 <= fVar9)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar8 = auVar7._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
        fVar8 = (fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8)) * fVar10;
      }
      local_e8 = local_e8 & 0xffffffff;
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
      local_e0 = fVar6 * 57.295776 + *(float *)(param_1 + 0x9c);
      if (-30.0 <= local_e0) {
        if (30.0 <= local_e0) {
          local_e0 = 30.0;
        }
      }
      else {
        local_e0 = -30.0;
      }
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar8);
      fVar6 = fVar6 * 57.295776 + *(float *)((longlong)param_1 + 0x4e4);
      if (-30.0 <= fVar6) {
        if (30.0 <= fVar6) {
          fVar6 = 30.0;
        }
        local_e8 = CONCAT44(local_e8._4_4_,fVar6);
      }
      else {
        local_e8 = CONCAT44(local_e8._4_4_,0xc1f00000);
      }
      FUN_140ebfa50(param_1[0xb4],&local_e8,1,0,1);
      FUN_140ebfa40(param_1[0xb4],(fVar12 + fVar17) * 0.5 + *(float *)((longlong)param_1 + 0x4dc));
      if ((char)param_1[0x9d] != '\0') {
        (**(code **)(*param_1 + 0x148))(param_1);
        (**(code **)(*param_1 + 0x148))(param_1);
        (**(code **)(*param_1 + 0x148))(param_1);
        (**(code **)(*param_1 + 0x148))(param_1);
        (**(code **)(*param_1 + 0x148))(param_1);
        FRotator::Quaternion(&local_e8,&local_b8);
        (**(code **)(*param_1 + 0x148))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140a40d70 FUN_140a40d70 body=1062 status=ok
// SIG undefined FUN_140a40d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140a40d70(longlong param_1,float *param_2,longlong param_3,undefined8 *param_4,
                     float *param_5,undefined4 param_6)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_2e8 [32];
  undefined4 *local_2c8;
  undefined4 local_2c0;
  undefined4 *local_2b8;
  undefined1 *local_2b0;
  undefined4 *local_2a8;
  undefined1 local_298 [8];
  undefined8 local_290;
  float local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_248 [12];
  undefined4 local_23c;
  float local_238;
  undefined1 local_1b8 [12];
  undefined4 local_1ac;
  float local_1a8;
  undefined1 local_128 [72];
  longlong local_e0;
  longlong local_c0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_290 = *param_4;
  local_288 = *(float *)(param_4 + 1);
  fVar4 = (float)((ulonglong)local_290 >> 0x20) - param_5[1];
  fVar5 = (float)local_290 - *param_5;
  fVar6 = local_288 - param_5[2];
  fVar9 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  if (0.0001 <= fVar9) {
    fVar7 = 1.0 / fVar9;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866668) &&
       (_Init_thread_header(&DAT_146866668), DAT_146866668 == -1)) {
      FName::FName(&DAT_146866660,L"CameraOffsetTrace",1);
      _Init_thread_footer(&DAT_146866668);
    }
    local_2c8 = *(undefined4 **)(*(longlong *)(param_3 + 0x28) + 0x98);
    FUN_1422ffb20(local_128,DAT_146866660,local_298,1);
    FUN_140a367e0(param_1,*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x98),local_128,0);
    _guard_xfg_dispatch_icall_nop(local_1b8,0,0x90);
    local_1ac = 0x3f800000;
    _guard_xfg_dispatch_icall_nop(local_248,0,0x90);
    local_23c = 0x3f800000;
    uVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x148))();
    fVar10 = 0.0;
    fVar8 = 0.0;
    local_270 = _DAT_146aefe68;
    uStack_26c = uRam0000000146aefe6c;
    uStack_268 = uRam0000000146aefe70;
    uStack_264 = uRam0000000146aefe74;
    local_260 = _DAT_146aefe78;
    uStack_25c = uRam0000000146aefe7c;
    uStack_258 = uRam0000000146aefe80;
    uStack_254 = uRam0000000146aefe84;
    FCollisionResponseContainer::SetResponse(&local_270,5);
    local_27c = *(undefined4 *)(param_1 + 0x3c);
    local_2a8 = &local_270;
    local_2b0 = local_128;
    local_2b8 = &local_280;
    local_280 = 2;
    local_2c0 = 4;
    local_2c8 = &DAT_1464aa810;
    cVar1 = UWorld::SweepSingleByChannel(uVar3,local_1b8,&local_290,param_5);
    local_27c = *(undefined4 *)(param_1 + 0x40);
    local_2a8 = &local_270;
    local_280 = 2;
    local_2b0 = local_128;
    local_2b8 = &local_280;
    local_2c0 = 4;
    local_2c8 = &DAT_1464aa810;
    cVar2 = UWorld::SweepSingleByChannel(uVar3,local_248,&local_290,param_5);
    if (cVar2 != '\0') {
      fVar8 = fVar9 - local_238;
    }
    if (cVar1 != '\0') {
      fVar10 = fVar9 - local_1a8;
    }
    fVar9 = *(float *)(param_1 + 0x48);
    if (fVar9 < fVar8) {
      *(float *)(param_1 + 0x48) = fVar8;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      fVar9 = fVar8;
    }
    local_2b8 = (undefined4 *)CONCAT44(local_2b8._4_4_,param_6);
    local_2c0 = 0x7f7fffff;
    local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(param_1 + 0x44));
    fVar10 = (float)FUN_140a2aed0(local_298,fVar9,fVar10);
    *(float *)(param_1 + 0x48) = fVar10;
    fVar9 = *param_5;
    fVar8 = param_5[1];
    param_2[2] = fVar7 * fVar6 * fVar10 + param_5[2];
    *param_2 = fVar7 * fVar5 * fVar10 + fVar9;
    param_2[1] = fVar10 * fVar7 * fVar4 + fVar8;
    if (local_c0 != 0) {
      FMemory::Free();
    }
    if (local_e0 != 0) {
      FMemory::Free();
    }
  }
  else {
    *(undefined8 *)param_2 = *(undefined8 *)param_5;
    param_2[2] = param_5[2];
  }
  return param_2;
}



// FUNCTION 140a411a0 FUN_140a411a0 body=538 status=ok
// SIG undefined FUN_140a411a0(void)

void FUN_140a411a0(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  undefined1 local_5c [84];
  
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    pfVar1 = (float *)FUN_140eadad0(*(longlong *)(param_1 + 0x5a0),&local_68,0);
    pfVar2 = (float *)FUN_140eadad0(*(undefined8 *)(param_1 + 0x5a0),local_5c,
                                    *(undefined4 *)(param_1 + 0x4cc));
    fVar8 = *pfVar2 - *pfVar1;
    fVar7 = pfVar2[1] - pfVar1[1];
    fVar9 = pfVar2[2] - pfVar1[2];
    fVar4 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
    if (1e-08 < fVar4) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar7 = fVar7 * fVar5;
      fVar8 = fVar8 * fVar5;
      fVar9 = fVar9 * fVar5;
    }
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_60 = (float)DAT_1464aa7c0;
      puVar3 = &local_68;
      local_68 = DAT_1464aa7b8;
    }
    else {
      puVar3 = (undefined8 *)FUN_14238d380(*(longlong *)(param_1 + 0x168),local_5c);
    }
    local_60 = *(float *)(puVar3 + 1);
    fVar7 = fVar7 * (float)((ulonglong)*puVar3 >> 0x20) + fVar8 * (float)*puVar3 + fVar9 * local_60;
    fVar4 = -1.0;
    if ((-1.0 <= fVar7) && (fVar4 = fVar7, 1.0 <= fVar7)) {
      fVar4 = 1.0;
    }
    fVar7 = _guard_xfg_dispatch_icall_nop(fVar4);
    fVar4 = *(float *)(param_1 + 0x4d0);
    fVar8 = ABS(fVar7) * 57.295776;
    fVar9 = 90.0 - fVar4;
    fVar7 = fVar9;
    if ((fVar9 <= fVar8) && (fVar7 = fVar4 + 90.0, fVar8 <= fVar4 + 90.0)) {
      fVar7 = fVar8;
    }
    fVar7 = (fVar7 - fVar9) * (0.5 / fVar4);
    *(float *)(param_1 + 0x4d8) = -(((fVar7 + fVar7) - 1.0) * fVar4 * *(float *)(param_1 + 0x4d4));
  }
  return;
}



// FUNCTION 140a413c0 FUN_140a413c0 body=139 status=ok
// SIG undefined FUN_140a413c0(void)

void FUN_140a413c0(undefined8 param_1,float param_2,float *param_3)

{
  float fVar1;
  undefined1 local_res10 [24];
  
  fVar1 = param_3[4];
  param_3[4] = param_2 + fVar1;
  if (param_3[5] <= 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (param_2 + fVar1) / param_3[5];
    if (0.0 <= fVar1) {
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
  local_res10[0] = *(undefined1 *)(param_3 + 6);
  fVar1 = (float)UKismetMathLibrary::Ease(0,0x3f800000,fVar1,local_res10,param_3[7],param_3[8]);
  param_3[1] = (param_3[2] - *param_3) * fVar1 + *param_3;
  return;
}



// FUNCTION 140a41710 FUN_140a41710 body=1164 status=ok
// SIG undefined FUN_140a41710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a41710(longlong param_1,longlong param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [144];
  
  fVar14 = *(float *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  local_f8 = uVar7;
  local_f0 = fVar14;
  FRotator::Quaternion(param_2 + 0x3c,local_e8);
  param_3 = param_3 + *(float *)(param_1 + 0x840);
  *(float *)(param_1 + 0x840) = param_3;
  fVar17 = *(float *)(param_4 + 8);
  if (param_3 < fVar17) {
    if (*(char *)(param_1 + 0x844) == '\0') {
      fVar14 = *(float *)(param_4 + 4);
      if (fVar14 <= param_3) {
        fVar17 = (param_3 - fVar14) / (fVar17 - fVar14);
        if (0.0 <= fVar17) {
          fVar14 = fVar17;
          if (1.0 <= fVar17) {
            fVar14 = 1.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        if (0.0 <= fVar17) {
          if (1.0 <= fVar17) {
            fVar17 = 1.0;
          }
        }
        else {
          fVar17 = 0.0;
        }
        fVar17 = 1.0 - (1.0 - fVar17) * (1.0 - fVar17);
        if (*(char *)(param_4 + 0xc) != '\0') {
          uVar7 = FRuntimeFloatCurve::GetRichCurve(param_4 + 0x10);
          fVar17 = (float)FRichCurve::Eval(uVar7,fVar14,0);
        }
        lVar1 = *(longlong *)(param_2 + 0x28);
        local_f0 = (local_f0 - *(float *)(lVar1 + 0x58)) * fVar17 + *(float *)(lVar1 + 0x58);
        *(ulonglong *)(param_2 + 0x30) =
             CONCAT44((local_f8._4_4_ - *(float *)(lVar1 + 0x54)) * fVar17 +
                      *(float *)(lVar1 + 0x54),
                      ((float)local_f8 - *(float *)(lVar1 + 0x50)) * fVar17 +
                      *(float *)(lVar1 + 0x50));
        *(float *)(param_2 + 0x38) = local_f0;
        pfVar6 = (float *)FRotator::Quaternion(lVar1 + 0x68,local_b8);
        fVar14 = pfVar6[2];
        fVar16 = fVar14 + fVar14;
        fVar11 = -pfVar6[1];
        fVar11 = fVar11 + fVar11;
        local_f0 = fVar11 * pfVar6[3] + *pfVar6 * fVar16;
        local_f8 = CONCAT44(fVar16 * pfVar6[3] - *pfVar6 * fVar11,
                            (fVar11 * pfVar6[1] - fVar16 * fVar14) + 1.0);
        pfVar6 = (float *)FQuat::Rotator(local_e8,local_d8);
        uVar7 = FRotationMatrix::MakeFromXZ(local_a8,&local_f8,&DAT_1464aa798);
        pfVar8 = (float *)FMatrix::Rotator(uVar7,local_c8);
        fVar9 = (float)DAT_146866060;
        fVar4 = DAT_146866060._4_4_;
        fVar11 = DAT_146866060._8_4_;
        auVar10._4_4_ = pfVar6[1] - pfVar8[1];
        auVar10._0_4_ = *pfVar6 - *pfVar8;
        auVar10._8_4_ = pfVar6[2] - pfVar8[2];
        auVar10._12_4_ = 0;
        auVar10 = divps(auVar10,_DAT_146866060);
        fVar14 = (*pfVar6 - *pfVar8) - (float)(int)auVar10._0_4_ * fVar9;
        fVar16 = (pfVar6[1] - pfVar8[1]) - (float)(int)auVar10._4_4_ * fVar4;
        fVar15 = (pfVar6[2] - pfVar8[2]) - (float)(int)auVar10._8_4_ * fVar11;
        fVar12 = (float)(((uint)(fVar14 + fVar9) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar9));
        fVar13 = (float)(((uint)(fVar16 + fVar4) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                        (uint)(fVar16 + fVar4));
        fVar15 = (float)(((uint)(fVar15 + fVar11) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar11));
        bVar2 = _DAT_146866050 < fVar12;
        bVar3 = fRam0000000146866054 < fVar13;
        fVar14 = *pfVar8;
        fVar16 = pfVar8[1];
        fVar11 = (float)(((uint)(fVar15 - fVar11) ^ (uint)fVar15) &
                         -(uint)(fRam0000000146866058 < fVar15) ^ (uint)fVar15) * fVar17 + pfVar8[2]
        ;
        *(float *)(param_2 + 0x74) = fVar17 * *(float *)(param_2 + 0x74);
        *(ulonglong *)(param_2 + 0x3c) =
             CONCAT44((float)(((uint)(fVar13 - fVar4) ^ (uint)fVar13) & -(uint)bVar3 ^ (uint)fVar13)
                      * fVar17 + fVar16,
                      (float)(((uint)(fVar12 - fVar9) ^ (uint)fVar12) & -(uint)bVar2 ^ (uint)fVar12)
                      * fVar17 + fVar14);
      }
      else {
        lVar1 = *(longlong *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar1 + 0x50);
        *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar1 + 0x58);
        pfVar6 = (float *)FRotator::Quaternion(lVar1 + 0x68,local_c8);
        fVar17 = pfVar6[2];
        fVar14 = fVar17 + fVar17;
        fVar16 = -pfVar6[1];
        fVar16 = fVar16 + fVar16;
        local_f0 = fVar14 * *pfVar6 + fVar16 * pfVar6[3];
        local_f8 = CONCAT44(fVar14 * pfVar6[3] - fVar16 * *pfVar6,
                            (fVar16 * pfVar6[1] - fVar14 * fVar17) + 1.0);
        uVar7 = FRotationMatrix::MakeFromXZ(local_a8,&local_f8,&DAT_1464aa798);
        puVar5 = (undefined8 *)FMatrix::Rotator(uVar7,local_d8);
        *(undefined8 *)(param_2 + 0x3c) = *puVar5;
        fVar11 = *(float *)(puVar5 + 1);
        *(undefined4 *)(param_2 + 0x74) = 0;
      }
    }
    else {
      fVar16 = *(float *)(param_1 + 0x848);
      fVar9 = (param_3 - fVar16) / (fVar17 - fVar16);
      fVar11 = 0.0;
      if ((0.0 <= fVar9) && (fVar11 = fVar9, 1.0 <= fVar9)) {
        fVar11 = 1.0;
      }
      fVar9 = *(float *)(param_1 + 0x84c);
      *(float *)(param_1 + 0x84c) = param_3;
      *(undefined8 *)(param_2 + 0x30) = uVar7;
      *(float *)(param_2 + 0x38) = fVar14;
      *(float *)(param_2 + 0x74) =
           ((((1.0 - (1.0 - fVar11) * (1.0 - fVar11)) * (fVar17 - fVar16) + fVar16) - fVar9) /
           (fVar17 - fVar9)) * *(float *)(param_2 + 0x74);
      puVar5 = (undefined8 *)FQuat::Rotator(local_e8,&local_f8);
      *(undefined8 *)(param_2 + 0x3c) = *puVar5;
      fVar11 = *(float *)(puVar5 + 1);
    }
    *(float *)(param_2 + 0x44) = fVar11;
  }
  return;
}



// FUNCTION 140a41ba0 FUN_140a41ba0 body=433 status=ok
// SIG undefined FUN_140a41ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a41ba0(undefined8 param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 in_RDX;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_res10 [6];
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  param_2 = param_2 + *(float *)(param_3 + 0x28);
  *(float *)(param_3 + 0x28) = param_2;
  if (*(float *)(param_3 + 0x2c) <= 0.0) {
    param_2 = 1.0;
  }
  else {
    param_2 = param_2 / *(float *)(param_3 + 0x2c);
    if (0.0 <= param_2) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
    }
    else {
      param_2 = 0.0;
    }
  }
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,*(undefined1 *)(param_3 + 0x30));
  uVar9 = UKismetMathLibrary::Ease
                    (0,in_RDX,param_2,local_res10,*(undefined4 *)(param_3 + 0x34),
                     *(undefined4 *)(param_3 + 0x38));
  uVar5 = FRotator::Quaternion(param_3 + 0x18,local_48);
  uVar6 = FRotator::Quaternion(param_3,local_38);
  pfVar7 = (float *)FQuat::Slerp_NotNormalized(local_28,uVar6,uVar5,uVar9);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[3];
  local_res10[0] = 0x322bcc77;
  auVar10._0_4_ = fVar1 * fVar1 + fVar3 * fVar3;
  auVar10._4_4_ = fVar2 * fVar2 + fVar4 * fVar4;
  auVar10._8_4_ = fVar3 * fVar3 + fVar1 * fVar1;
  auVar10._12_4_ = fVar4 * fVar4 + fVar2 * fVar2;
  fVar16 = auVar10._4_4_ + auVar10._0_4_;
  fVar17 = auVar10._8_4_ + auVar10._4_4_;
  fVar18 = auVar10._12_4_ + auVar10._8_4_;
  fVar19 = auVar10._0_4_ + auVar10._12_4_;
  auVar11._4_4_ = fVar17;
  auVar11._0_4_ = fVar16;
  auVar11._8_4_ = fVar18;
  auVar11._12_4_ = fVar19;
  auVar11 = rsqrtps(auVar10,auVar11);
  fVar12 = auVar11._0_4_;
  fVar13 = auVar11._4_4_;
  fVar14 = auVar11._8_4_;
  fVar15 = auVar11._12_4_;
  fVar12 = (_DAT_146866080 - fVar12 * fVar12 * _DAT_146866080 * fVar16) * fVar12 + fVar12;
  fVar13 = (fRam0000000146866084 - fVar13 * fVar13 * fRam0000000146866084 * fVar17) * fVar13 +
           fVar13;
  fVar14 = (fRam0000000146866088 - fVar14 * fVar14 * fRam0000000146866088 * fVar18) * fVar14 +
           fVar14;
  fVar15 = (fRam000000014686608c - fVar15 * fVar15 * fRam000000014686608c * fVar19) * fVar15 +
           fVar15;
  local_58 = ((uint)(((_DAT_146866080 - fVar12 * fVar12 * _DAT_146866080 * fVar16) * fVar12 + fVar12
                     ) * fVar1) ^ _DAT_146866070) & -(uint)(1e-08 <= fVar16) ^ _DAT_146866070;
  uStack_54 = ((uint)(((fRam0000000146866084 - fVar13 * fVar13 * fRam0000000146866084 * fVar17) *
                       fVar13 + fVar13) * fVar2) ^ uRam0000000146866074) & -(uint)(1e-08 <= fVar17)
              ^ uRam0000000146866074;
  uStack_50 = ((uint)(((fRam0000000146866088 - fVar14 * fVar14 * fRam0000000146866088 * fVar18) *
                       fVar14 + fVar14) * fVar3) ^ uRam0000000146866078) & -(uint)(1e-08 <= fVar18)
              ^ uRam0000000146866078;
  uStack_4c = ((uint)(((fRam000000014686608c - fVar15 * fVar15 * fRam000000014686608c * fVar19) *
                       fVar15 + fVar15) * fVar4) ^ uRam000000014686607c) & -(uint)(1e-08 <= fVar19)
              ^ uRam000000014686607c;
  puVar8 = (undefined8 *)FQuat::Rotator(&local_58,local_68);
  *(undefined8 *)(param_3 + 0xc) = *puVar8;
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(puVar8 + 1);
  return;
}



// FUNCTION 140a41d60 FUN_140a41d60 body=1545 status=ok
// SIG undefined FUN_140a41d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a41d60(longlong param_1,longlong param_2,char param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  longlong lVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float fVar18;
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
  ulonglong local_168;
  float fStack_160;
  float fStack_15c;
  ulonglong local_158;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  ulonglong local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  lVar15 = FUN_140a34bb0();
  lVar15 = *(longlong *)(lVar15 + 0x168);
  if (lVar15 == 0) {
    local_158 = _DAT_1468b5d90;
    fStack_150 = DAT_1468b5d98;
  }
  else {
    local_158 = *(ulonglong *)(lVar15 + 0x220);
    fStack_150 = *(float *)(lVar15 + 0x228);
  }
  fStack_160 = fStack_150;
  fStack_150 = fStack_150 + 100.0;
  local_168 = local_158;
  FRotator::Quaternion(param_2 + 0x3c,&local_168);
  uStack_110 = CONCAT44(fStack_15c,fStack_160);
  fVar2 = *(float *)(param_2 + 0x34);
  fVar3 = *(float *)*(undefined1 (*) [12])(param_2 + 0x30);
  local_118 = local_168;
  fVar4 = *(float *)(param_2 + 0x38);
  local_108._12_4_ = 0;
  local_108._0_12_ = *(undefined1 (*) [12])(param_2 + 0x30);
  local_128 = _DAT_146866090 & _DAT_1468660a0;
  uStack_124 = uRam0000000146866094 & uRam00000001468660a4;
  uStack_120 = uRam0000000146866098 & uRam00000001468660a8;
  uStack_11c = (uint)fRam000000014686609c & uRam00000001468660ac;
  local_148 = 0.0;
  fStack_144 = 0.0;
  fStack_140 = 0.0;
  fStack_13c = fRam000000014686609c;
  local_f8._4_4_ = DAT_1464aa788._4_4_;
  local_f8._0_4_ = (undefined4)DAT_1464aa788;
  local_f8._8_4_ = DAT_1464aa790;
  local_f8._12_4_ = 0;
  _local_138 = ZEXT816(0);
  FUN_140a4b990(&local_118,&local_148,&local_158,&DAT_1464aa810);
  fVar11 = fStack_13c;
  fVar10 = fStack_140;
  fVar9 = fStack_144;
  fVar8 = local_148;
  uVar12 = local_138._0_4_;
  uVar13 = local_138._4_4_;
  fVar14 = fStack_130;
  if (param_3 != '\0') {
    local_b8 = *(undefined8 *)(param_1 + 0x9f0);
    uStack_b0 = *(undefined8 *)(param_1 + 0x9f8);
    fVar32 = *(float *)(param_1 + 0x9cc);
    fVar24 = *(float *)*(undefined1 (*) [12])(param_1 + 0x9c4);
    fVar19 = *(float *)(param_1 + 0x9c8);
    local_e8 = 0.0;
    fStack_e4 = 0.0;
    fStack_e0 = 0.0;
    fStack_dc = fRam000000014686609c;
    local_a8._12_4_ = 0;
    local_a8._0_12_ = *(undefined1 (*) [12])(param_1 + 0x9c4);
    local_98._4_4_ = DAT_1464aa788._4_4_;
    local_98._0_4_ = (undefined4)DAT_1464aa788;
    local_98._8_4_ = DAT_1464aa790;
    local_98._12_4_ = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_140a4b990(&local_b8,&local_e8,&local_158,&DAT_1464aa810);
    fVar28 = -fVar8;
    fVar18 = -fVar9;
    fVar23 = -fVar10;
    local_168 = CONCAT44(fVar9,fVar8) ^ 0x8000000080000000;
    fStack_15c = fVar11;
    fVar25 = fStack_e0 * fVar28 * fRam00000001468660d4;
    fVar26 = fStack_e4 * fVar28 * fRam00000001468660d8;
    fVar27 = local_e8 * fVar28 * fRam00000001468660dc;
    fVar20 = fStack_dc * fVar18 * fRam00000001468660c4;
    fVar21 = local_e8 * fVar18 * fRam00000001468660c8;
    fVar22 = fStack_e4 * fVar18 * fRam00000001468660cc;
    fVar29 = local_e8 * fVar23 * fRam00000001468660b4;
    fVar30 = fStack_dc * fVar23 * fRam00000001468660b8;
    fVar31 = fStack_e0 * fVar23 * fRam00000001468660bc;
    *(float *)(param_1 + 0xa00) =
         fStack_dc * fVar28 * _DAT_1468660d0 + fVar11 * local_e8 +
         fStack_e0 * fVar18 * _DAT_1468660c0 + fStack_e4 * fVar23 * _DAT_1468660b0;
    *(float *)(param_1 + 0xa04) = fVar25 + fVar11 * fStack_e4 + fVar20 + fVar29;
    *(float *)(param_1 + 0xa08) = fVar26 + fVar11 * fStack_e0 + fVar21 + fVar30;
    *(float *)(param_1 + 0xa0c) = fVar27 + fVar11 * fStack_dc + fVar22 + fVar31;
    fStack_160 = (float)uStack_d0 - fVar14;
    *(ulonglong *)(param_1 + 0x9d0) =
         CONCAT44(local_d8._4_4_ - (float)uVar13,(float)local_d8 - (float)uVar12);
    *(float *)(param_1 + 0x9d8) = fStack_160;
    fVar20 = *(float *)(param_1 + 0x9d0) * 57.295776;
    fVar18 = (float)(int)(fVar20 * 0.0027777778) * 360.0;
    if (ABS(fVar20) < ABS(fVar18)) {
      fVar18 = fVar20;
    }
    fVar20 = fVar20 - fVar18;
    if (fVar20 < 0.0) {
      fVar20 = fVar20 + 360.0;
    }
    if (180.0 < fVar20) {
      fVar20 = fVar20 - 360.0;
    }
    *(float *)(param_1 + 0x9d0) = fVar20 * 0.017453292;
    *(undefined8 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0x9e4) = 0;
    *(undefined4 *)(param_1 + 0xa10) = 0;
    if ((*(char *)(param_1 + 0xa18) != '\0') ||
       (fVar24 = fVar24 - fVar3, fVar19 = fVar19 - fVar2, fVar32 = fVar32 - fVar4,
       2.25e+06 < fVar19 * fVar19 + fVar24 * fVar24 + fVar32 * fVar32)) {
      *(ulonglong *)(param_1 + 0x9d0) = _DAT_1468b5d90;
      *(float *)(param_1 + 0x9d8) = DAT_1468b5d98;
      uVar7 = DAT_1464aa81c;
      uVar6 = DAT_1464aa818;
      uVar5 = DAT_1464aa814;
      *(undefined4 *)(param_1 + 0xa00) = DAT_1464aa810;
      *(undefined4 *)(param_1 + 0xa04) = uVar5;
      *(undefined4 *)(param_1 + 0xa08) = uVar6;
      *(undefined4 *)(param_1 + 0xa0c) = uVar7;
    }
  }
  pfVar1 = (float *)(param_1 + 0x9d0);
  puVar16 = (undefined8 *)
            FUN_140a2f910(&local_168,pfVar1,&DAT_1468b5d90,param_1 + 0x9dc,0x3e99999a,0x447a0000,
                          param_4);
  *(undefined8 *)pfVar1 = *puVar16;
  *(undefined4 *)(param_1 + 0x9d8) = *(undefined4 *)(puVar16 + 1);
  pfVar17 = (float *)FUN_140a2fe60(&local_168,param_1 + 0xa00,&DAT_1464aa810,param_1 + 0xa10,
                                   0x3e99999a,0x447a0000,param_4);
  fVar2 = *pfVar17;
  fVar3 = pfVar17[1];
  fVar4 = pfVar17[2];
  fVar32 = pfVar17[3];
  *(float *)(param_1 + 0xa00) = fVar2;
  *(float *)(param_1 + 0xa04) = fVar3;
  *(float *)(param_1 + 0xa08) = fVar4;
  *(float *)(param_1 + 0xa0c) = fVar32;
  local_138._4_4_ = (float)uVar13 + *(float *)(param_1 + 0x9d4);
  local_138._0_4_ = (float)uVar12 + *pfVar1;
  fStack_130 = fVar14 + *(float *)(param_1 + 0x9d8);
  unique0x1000022c = 0;
  local_148 = fVar32 * fVar8 * _DAT_1468660d0 + fVar11 * fVar2 + fVar4 * fVar9 * _DAT_1468660c0 +
              fVar3 * fVar10 * _DAT_1468660b0;
  fStack_144 = fVar4 * fVar8 * fRam00000001468660d4 + fVar11 * fVar3 +
               fVar32 * fVar9 * fRam00000001468660c4 + fVar2 * fVar10 * fRam00000001468660b4;
  fStack_140 = fVar3 * fVar8 * fRam00000001468660d8 + fVar11 * fVar4 +
               fVar2 * fVar9 * fRam00000001468660c8 + fVar32 * fVar10 * fRam00000001468660b8;
  fStack_13c = fVar2 * fVar8 * fRam00000001468660dc + fVar11 * fVar32 +
               fVar3 * fVar9 * fRam00000001468660cc + fVar4 * fVar10 * fRam00000001468660bc;
  FUN_140a3a6b0(&local_148,&local_118,&local_158,&DAT_1464aa810);
  fStack_160 = (float)local_108._8_4_;
  *(undefined4 *)(param_2 + 0x30) = local_108._0_4_;
  *(undefined4 *)(param_2 + 0x34) = local_108._4_4_;
  local_158 = local_118;
  fStack_150 = (float)(undefined4)uStack_110;
  uStack_14c = uStack_110._4_4_;
  *(undefined4 *)(param_2 + 0x38) = local_108._8_4_;
  puVar16 = (undefined8 *)FQuat::Rotator(&local_158,&local_168);
  *(undefined8 *)(param_2 + 0x3c) = *puVar16;
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(puVar16 + 1);
  return;
}



// FUNCTION 140a42390 FUN_140a42390 body=3527 status=ok
// SIG undefined FUN_140a42390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a42390(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_7a8 [32];
  undefined8 *local_788;
  undefined8 *local_780;
  undefined1 local_778 [16];
  undefined8 local_768;
  float local_760;
  undefined4 local_758 [2];
  undefined1 local_750 [8];
  float local_748;
  undefined8 local_740;
  float local_738;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  undefined1 local_718 [16];
  undefined1 local_708 [48];
  undefined8 local_6d8;
  float local_6d0;
  undefined8 local_6cc;
  uint local_6c4;
  float local_2c8;
  undefined4 local_1f8;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1d8;
  float local_1d4;
  longlong local_100;
  longlong local_f0;
  longlong local_c0;
  longlong local_b0;
  ulonglong local_88;
  
  if (param_3 == 0) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  if (*(longlong *)(param_3 + 0x28) == 0) {
    return;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xa0);
  if (lVar9 == 0) {
LAB_140a42427:
    lVar9 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_140a42427;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar5 == 0) {
LAB_140a42485:
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_140a42485;
    lVar6 = FUN_142cc1670(lVar5);
  }
  if (lVar9 == 0) {
    return;
  }
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    return;
  }
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x748))();
  if (lVar7 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  lVar5 = FUN_140ad4e30(*(longlong *)(param_1 + 0x50),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x4c8));
  if (lVar5 == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (((plVar1 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (*(char *)((longlong)plVar1 + 0x4d4) != '\0')) {
    bVar12 = false;
  }
  else {
    bVar12 = *(float *)(*(longlong *)(param_1 + 0x40) + 0x56c) + *(float *)(plVar1 + 0x97) <
             *(float *)(*(longlong *)(param_3 + 0x28) + 0x28);
  }
  lVar7 = plVar1[0x99];
  if (lVar7 == *(longlong *)(param_1 + 0x68)) {
    uVar8 = (**(code **)(*plVar1 + 0x748))();
    cVar4 = FUN_1405dc8f0(param_1 + 0x70,uVar8);
    if ((cVar4 == '\0') && (bVar12 == (bool)*(char *)(param_1 + 0x78))) goto LAB_140a42908;
  }
  cVar4 = SCheckBox::SupportsKeyboardFocus();
  if (cVar4 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x738))();
  }
  if (bVar12 == false) {
    uVar23 = *(undefined4 *)(lVar5 + 0x74);
  }
  else {
    uVar23 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x568);
  }
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  uVar14 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = uVar14;
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x9c) = uVar14;
  *(undefined4 *)(param_1 + 0xa8) = uVar23;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar5 + 0x70);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0xc4);
  uVar14 = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xcc) = uVar14;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xd8) = uVar14;
  *(undefined4 *)(param_1 + 0xe4) = uVar23;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x160) = uVar14;
  *(undefined4 *)(param_1 + 0x164) = uVar14;
  *(undefined4 *)(param_1 + 0x168) = uVar14;
  *(undefined4 *)(param_1 + 0x174) = uVar23;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x118) = uVar14;
  *(undefined4 *)(param_1 + 0x11c) = uVar14;
  *(undefined4 *)(param_1 + 0x120) = uVar14;
  *(undefined4 *)(param_1 + 300) = uVar23;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x13c) = uVar14;
  *(undefined4 *)(param_1 + 0x140) = uVar14;
  *(undefined4 *)(param_1 + 0x144) = uVar14;
  *(undefined4 *)(param_1 + 0x150) = uVar23;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x184) = uVar14;
  *(undefined4 *)(param_1 + 0x188) = uVar14;
  *(undefined4 *)(param_1 + 0x18c) = uVar14;
  *(undefined4 *)(param_1 + 0x198) = uVar23;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x19c) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = uVar14;
  *(undefined4 *)(param_1 + 0x1ac) = uVar14;
  *(undefined4 *)(param_1 + 0x1b0) = uVar14;
  *(undefined4 *)(param_1 + 0x1bc) = uVar23;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1cc) = uVar14;
  *(undefined4 *)(param_1 + 0x1d0) = uVar14;
  *(undefined4 *)(param_1 + 0x1d4) = uVar14;
  *(undefined4 *)(param_1 + 0x1e0) = uVar23;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf4) = uVar14;
  *(undefined4 *)(param_1 + 0xf8) = uVar14;
  *(undefined4 *)(param_1 + 0xfc) = uVar14;
  *(undefined4 *)(param_1 + 0x108) = uVar23;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar5 + 0x70);
  uVar14 = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_1 + 0x1f0) = uVar14;
  *(undefined4 *)(param_1 + 500) = uVar14;
  *(undefined4 *)(param_1 + 0x1f8) = uVar14;
  *(undefined4 *)(param_1 + 0x204) = uVar23;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined1 *)(param_1 + 0x208) = *(undefined1 *)(lVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(lVar5 + 0x6c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar5 + 0x70);
LAB_140a42908:
  *(bool *)(param_1 + 0x78) = bVar12;
  *(longlong *)(param_1 + 0x68) = lVar7;
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x748))();
  FWeakObjectPtr::operator=(param_1 + 0x70,uVar8);
  if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
  }
  local_758[0] = 0;
  if (cVar4 != '\0') {
    FUN_142710360(lVar9,local_758);
  }
  lVar9 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x748))();
  pfVar10 = (float *)FUN_140ad67f0(lVar5,local_750,cVar4,local_758[0]);
  fVar13 = *(float *)(lVar9 + 0x210);
  fVar15 = *(float *)(lVar9 + 0x214);
  fVar16 = *(float *)(lVar9 + 0x218);
  fVar22 = *(float *)(lVar9 + 0x21c);
  fVar21 = *pfVar10 * *(float *)(lVar9 + 0x230);
  fVar24 = pfVar10[1] * *(float *)(lVar9 + 0x234);
  fVar25 = pfVar10[2] * *(float *)(lVar9 + 0x238);
  fVar26 = *(float *)(lVar9 + 0x23c) * 0.0;
  local_738 = DAT_1468b5d98;
  local_760 = (float)DAT_1468b5da8;
  fVar17 = fVar25 * fVar15 - fVar24 * fVar16;
  fVar18 = fVar21 * fVar16 - fVar25 * fVar13;
  fVar19 = fVar24 * fVar13 - fVar21 * fVar15;
  fVar20 = fVar26 * fVar22 - fVar26 * fVar22;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  local_740 = _DAT_1468b5d90;
  local_768 = DAT_1468b5da0;
  local_728 = (fVar19 * fVar15 - fVar18 * fVar16) + fVar22 * fVar17 + fVar21 +
              *(float *)(lVar9 + 0x220);
  fStack_724 = (fVar17 * fVar16 - fVar19 * fVar13) + fVar22 * fVar18 + fVar24 +
               *(float *)(lVar9 + 0x224);
  fStack_720 = (fVar18 * fVar13 - fVar17 * fVar15) + fVar22 * fVar19 + fVar25 +
               *(float *)(lVar9 + 0x228);
  fStack_71c = (fVar20 * fVar22 - fVar20 * fVar22) + fVar22 * fVar20 + fVar26 +
               *(float *)(lVar9 + 0x22c);
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_140ad6700(lVar5,local_750,cVar4,local_758[0]);
    FUN_140ad67f0(lVar5,local_718,cVar4,local_758[0]);
    local_780 = &local_768;
    local_788 = &local_740;
    FUN_140a2ed40(param_1,local_750,local_718,*(undefined8 *)(param_1 + 0x48));
    fVar15 = (float)local_740;
    fVar16 = (float)((ulonglong)local_740 >> 0x20);
    uVar23 = (undefined4)local_768;
    uVar14 = (undefined4)((ulonglong)local_768 >> 0x20);
    fVar22 = local_738;
    fVar13 = local_760;
  }
  else {
    FUN_140a25a20(&local_6d8);
    lVar9 = *(longlong *)(lVar6 + 0x180);
    if (lVar9 == 0) {
      local_768 = _DAT_1468b5d90;
      local_760 = DAT_1468b5d98;
    }
    else {
      local_768 = *(undefined8 *)(lVar9 + 0x220);
      local_760 = *(float *)(lVar9 + 0x228);
    }
    local_6d8 = local_768;
    local_6cc = *(ulonglong *)(param_1 + 0x58);
    local_6d0 = local_760;
    local_6c4 = *(uint *)(param_1 + 0x60);
    lVar9 = FUN_142cb7f20(lVar6,local_708,&local_6d8);
    local_768 = *(undefined8 *)(lVar6 + 0x4a8);
    fVar15 = *(float *)(lVar9 + 0x10);
    fVar16 = *(float *)(lVar9 + 0x14);
    fVar22 = *(float *)(lVar9 + 0x18);
    local_760 = *(float *)(lVar6 + 0x4b0);
    pfVar10 = (float *)FRotator::RotateVector(param_1 + 0x58,local_750,&local_768);
    uVar23 = (undefined4)*(undefined8 *)(param_1 + 0x58);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
    fVar13 = *(float *)(param_1 + 0x60);
    fVar15 = fVar15 + *pfVar10;
    fVar16 = fVar16 + pfVar10[1];
    fVar22 = fVar22 + pfVar10[2];
    local_748 = fVar22;
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
  }
  *(ulonglong *)(param_1 + 0x94) = CONCAT44(fVar16,fVar15);
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uVar14,uVar23);
  *(float *)(param_1 + 0x9c) = fVar22;
  *(float *)(param_1 + 0xd8) = fVar13;
  fVar15 = *(float *)(param_3 + 0x30) - local_728;
  fVar16 = *(float *)(param_3 + 0x34) - fStack_724;
  fVar13 = *(float *)(param_3 + 0x38) - fStack_720;
  fVar13 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13);
  if ((*(byte *)(lVar5 + 0x78) & 1) != 0) {
    fVar13 = *(float *)(lVar5 + 0x7c);
  }
  *(float *)(param_1 + 0x168) = fVar13;
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar23 = 0xbf800000;
    lVar9 = *(longlong *)(param_1 + 0x50);
    if ((*(byte *)(lVar5 + 0x78) & 0x10) == 0) {
      if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x94) & 0x10) == 0)) {
        uVar14 = 0xbf800000;
      }
      else {
        uVar14 = *(undefined4 *)(lVar9 + 0x584);
      }
    }
    else {
      uVar14 = *(undefined4 *)(lVar5 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0x120) = uVar14;
    if ((*(byte *)(lVar5 + 0x78) & 0x20) == 0) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x94) & 8) == 0)) {
        uVar14 = 0xbf800000;
      }
      else {
        uVar14 = *(undefined4 *)(lVar9 + 0x580);
      }
    }
    else {
      uVar14 = *(undefined4 *)(lVar5 + 0x90);
    }
    *(undefined4 *)(param_1 + 0x144) = uVar14;
    uVar14 = FUN_140a39450(param_1,lVar5);
    *(undefined4 *)(param_1 + 0x18c) = uVar14;
    uVar14 = FUN_140a394d0(param_1,lVar5);
    *(undefined4 *)(param_1 + 0x1b0) = uVar14;
    uVar14 = FUN_140a39490(param_1,lVar5);
    *(undefined4 *)(param_1 + 0x1d4) = uVar14;
    if ((*(byte *)(lVar5 + 0x78) & 0x40) == 0) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x8c) & 4) != 0)) {
        uVar23 = *(undefined4 *)(lVar9 + 0x490);
      }
    }
    else {
      uVar23 = *(undefined4 *)(lVar5 + 0x94);
    }
    *(undefined4 *)(param_1 + 0x1f8) = uVar23;
    uVar23 = FUN_140ad6680(lVar9,cVar4,local_758[0]);
  }
  else {
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    uVar23 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x48);
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar23;
  fVar13 = param_2 + *(float *)(param_1 + 0xa4);
  *(float *)(param_1 + 0xa4) = fVar13;
  if (*(float *)(param_1 + 0xa8) <= 0.0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = fVar13 / *(float *)(param_1 + 0xa8);
    if (0.0 <= fVar13) {
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar13 = 0.0;
    }
  }
  local_778[0] = *(undefined1 *)(param_1 + 0xac);
  local_780 = (undefined8 *)CONCAT44(local_780._4_4_,*(undefined4 *)(param_1 + 0xb4));
  local_788 = (undefined8 *)CONCAT44(local_788._4_4_,*(undefined4 *)(param_1 + 0xb0));
  fVar13 = (float)UKismetMathLibrary::Ease(0,0x3f800000,fVar13,local_778);
  local_748 = *(float *)(param_1 + 0x84) +
              (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x84)) * fVar13;
  *(ulonglong *)(param_1 + 0x88) =
       CONCAT44(*(float *)(param_1 + 0x80) +
                (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x80)) * fVar13,
                *(float *)(param_1 + 0x7c) +
                (*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x7c)) * fVar13);
  *(float *)(param_1 + 0x90) = local_748;
  FUN_140a41ba0(param_1,param_2,param_1 + 0xb8);
  FUN_140a413c0(param_1,param_2,param_1 + 0x160);
  FUN_140a413c0(param_1,param_2,param_1 + 0x118);
  FUN_140a413c0(param_1,param_2,param_1 + 0x13c);
  FUN_140a413c0(param_1,param_2,param_1 + 0x184);
  FUN_140a413c0(param_1,param_2,param_1 + 0x1a8);
  FUN_140a413c0(param_1,param_2,param_1 + 0x1cc);
  FUN_140a413c0(param_1,param_2,param_1 + 0xf4);
  FUN_140a413c0(param_1,param_2,param_1 + 0x1f0);
  cVar4 = SCheckBox::SupportsKeyboardFocus(*(undefined8 *)(param_1 + 0x48));
  if (((cVar4 != '\0') &&
      (*(float *)(param_1 + 0xa8) < *(float *)(param_1 + 0xa4) ||
       *(float *)(param_1 + 0xa8) == *(float *)(param_1 + 0xa4))) &&
     (*(float *)(param_1 + 0xe4) < *(float *)(param_1 + 0xe0) ||
      *(float *)(param_1 + 0xe4) == *(float *)(param_1 + 0xe0))) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x740))();
  }
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_1 + 0xc4);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_1 + 0xcc);
  pfVar10 = (float *)FRotator::RotateVector(param_3 + 0x3c,local_750,param_1 + 0x30);
  local_760 = pfVar10[2] + *(float *)(param_3 + 0x38);
  local_768 = CONCAT44(pfVar10[1] + *(float *)(param_3 + 0x34),*pfVar10 + *(float *)(param_3 + 0x30)
                      );
  local_748 = local_760;
  FUN_142ccf800(lVar6,&local_768);
  local_768 = *(undefined8 *)(param_3 + 0x3c);
  local_760 = *(float *)(param_3 + 0x44);
  FUN_142ccf7e0(lVar6,&local_768);
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_3 + 0x28) != 0)) {
    FUN_140a25aa0(&local_6d8,*(longlong *)(param_1 + 0x50) + 0x80);
    uVar2 = local_6cc;
    uVar3 = local_6cc._4_4_;
    uVar11 = local_6cc._4_4_ | 0x800000;
    local_6cc = local_6cc | 0x80000000000000;
    local_1f8 = *(undefined4 *)(param_1 + 0x164);
    if (0.0 <= *(float *)(param_1 + 0x11c)) {
      local_6c4 = local_6c4 | 0x10;
      local_1d4 = *(float *)(param_1 + 0x11c);
    }
    if (0.0 <= *(float *)(param_1 + 0x140)) {
      local_6c4 = local_6c4 | 8;
      local_1d8 = *(float *)(param_1 + 0x140);
    }
    if (0.0 <= *(float *)(param_1 + 0x188)) {
      local_6c4 = local_6c4 | 1;
      local_1e4 = *(float *)(param_1 + 0x188);
    }
    if (0.0 <= *(float *)(param_1 + 0x1ac)) {
      uVar11 = uVar3 | 0x80800000;
      local_6cc = uVar2 | 0x8080000000000000;
      local_1e8 = *(float *)(param_1 + 0x1ac);
    }
    if (0.0 <= *(float *)(param_1 + 0x1d0)) {
      local_6cc = CONCAT44(uVar11,(undefined4)local_6cc) | 0x4000000000000000;
      local_1ec = *(float *)(param_1 + 0x1d0);
    }
    if (0.0 <= *(float *)(param_1 + 500)) {
      local_6cc = local_6cc | 4;
      local_2c8 = *(float *)(param_1 + 500);
    }
    FUN_142fc8dc0(param_3,&local_6d8,0x3f800000);
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a43160 FUN_140a43160 body=2546 status=ok
// SIG undefined FUN_140a43160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a43160(longlong param_1,float param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float fStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  
  if (param_3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_3 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  plVar8 = *(longlong **)(lVar3 + 0xa0);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_14145f370();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar6 = (**(code **)(*plVar8 + 0x148))(plVar8);
  if (lVar6 == 0) {
    return;
  }
  if ((*(byte *)(plVar8 + 200) & 2) != 0) {
    FUN_140d13010(plVar8,0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x3c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x44);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_3 + 0x30);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_3 + 0x38);
    return;
  }
  lVar7 = FUN_140cfd6a0(plVar8);
  if (lVar7 != *(longlong *)(param_1 + 0x40)) {
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar6 + 0x790);
    }
    else {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x3c);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x44);
      *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_3 + 0x30);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
    }
    *(longlong *)(param_1 + 0x40) = lVar7;
  }
  local_d8 = *(undefined8 *)(param_3 + 0x40);
  local_e8 = *(undefined8 *)(param_3 + 0x30);
  uStack_e0 = *(undefined8 *)(param_3 + 0x38);
  if (lVar7 == 0) {
    fVar22 = *(float *)(param_1 + 0x4c);
    if ((0.0 < fVar22) && (fVar22 <= *(float *)(lVar6 + 0x790))) {
      fVar22 = (*(float *)(lVar6 + 0x790) - fVar22) / *(float *)(param_1 + 0x30);
      if (0.0 <= fVar22) {
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
      }
      else {
        fVar22 = 0.0;
      }
      fVar23 = (*(float *)(param_3 + 0x48) - *(float *)(param_1 + 0x48)) * fVar22 +
               *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x48) = fVar23;
      *(float *)(param_3 + 0x48) = fVar23;
      fVar23 = *(float *)(param_1 + 0x58);
      fVar17 = *(float *)(param_3 + 0x3c) - *(float *)(param_1 + 0x50);
      fVar24 = *(float *)(param_3 + 0x44) - fVar23;
      fVar21 = *(float *)(param_3 + 0x40) - *(float *)(param_1 + 0x54);
      fVar12 = (float)DAT_146866060;
      fVar2 = DAT_146866060._4_4_;
      fVar15 = DAT_146866060._8_4_;
      auVar14._4_4_ = fVar21;
      auVar14._0_4_ = fVar17;
      auVar14._8_4_ = fVar24;
      auVar14._12_4_ = 0;
      auVar14 = divps(auVar14,_DAT_146866060);
      fVar17 = fVar17 - (float)(int)auVar14._0_4_ * fVar12;
      fVar21 = fVar21 - (float)(int)auVar14._4_4_ * fVar2;
      fVar24 = fVar24 - (float)(int)auVar14._8_4_ * fVar15;
      fVar17 = (float)(((uint)(fVar17 + fVar12) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                      (uint)(fVar17 + fVar12));
      fVar21 = (float)(((uint)(fVar21 + fVar2) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                      (uint)(fVar21 + fVar2));
      fVar24 = (float)(((uint)(fVar24 + fVar15) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                      (uint)(fVar24 + fVar15));
      bVar4 = fRam0000000146866058 < fVar24;
      *(ulonglong *)(param_3 + 0x3c) =
           CONCAT44(*(float *)(param_1 + 0x54) +
                    (float)(((uint)(fVar21 - fVar2) ^ (uint)fVar21) &
                            -(uint)(fRam0000000146866054 < fVar21) ^ (uint)fVar21) * fVar22,
                    *(float *)(param_1 + 0x50) +
                    (float)(((uint)(fVar17 - fVar12) ^ (uint)fVar17) &
                            -(uint)(_DAT_146866050 < fVar17) ^ (uint)fVar17) * fVar22);
      *(float *)(param_3 + 0x44) =
           fVar23 + (float)(((uint)(fVar24 - fVar15) ^ (uint)fVar24) & -(uint)bVar4 ^ (uint)fVar24)
                    * fVar22;
      fStack_100 = *(float *)(param_1 + 100) +
                   (*(float *)(param_3 + 0x38) - *(float *)(param_1 + 100)) * fVar22;
      *(ulonglong *)(param_3 + 0x30) =
           CONCAT44(*(float *)(param_1 + 0x60) +
                    (*(float *)(param_3 + 0x34) - *(float *)(param_1 + 0x60)) * fVar22,
                    *(float *)(param_1 + 0x5c) +
                    (*(float *)(param_3 + 0x30) - *(float *)(param_1 + 0x5c)) * fVar22);
      *(float *)(param_3 + 0x38) = fStack_100;
      fVar22 = *(float *)(lVar6 + 0x790) - *(float *)(param_1 + 0x4c);
      if (*(float *)(param_1 + 0x30) <= fVar22 && fVar22 != *(float *)(param_1 + 0x30)) {
        *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
      }
    }
    goto LAB_140a439c1;
  }
  plVar8 = (longlong *)FUN_140a30980(lVar7);
  if (plVar8 == (longlong *)0x0) {
    local_108 = 0;
    puVar9 = &local_108;
    fStack_100 = 0.0;
  }
  else {
    puVar9 = (undefined8 *)
             (**(code **)(*plVar8 + 0x428))(plVar8,&local_108,*(undefined8 *)(lVar7 + 0x188));
  }
  uVar1 = *puVar9;
  fVar2 = *(float *)(puVar9 + 1);
  fVar22 = *(float *)(lVar7 + 0x17c);
  local_128 = (float)uVar1 - *(float *)(param_3 + 0x30);
  fVar23 = *(float *)(lVar7 + 400);
  fVar12 = *(float *)(lVar7 + 0x178);
  local_120 = fVar2 - *(float *)(param_3 + 0x38);
  local_108._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar15 = local_108._4_4_;
  local_124 = local_108._4_4_ - *(float *)(param_3 + 0x34);
  fVar24 = SQRT(local_124 * local_124 + local_128 * local_128 + local_120 * local_120);
  local_108 = uVar1;
  fStack_100 = fVar2;
  FVector::Rotation(&local_128,&local_138);
  uVar11 = *(undefined4 *)(param_3 + 0x48);
  if (0.0 <= *(float *)(param_1 + 0x48)) {
    _guard_xfg_dispatch_icall_nop(fVar23 / fVar24);
    uVar11 = FMath::FInterpTo();
  }
  *(undefined4 *)(param_1 + 0x48) = uVar11;
  *(undefined4 *)(param_3 + 0x48) = uVar11;
  local_138 = local_138 + *(float *)(param_1 + 0x48) * fVar22;
  local_130 = local_130 - *(float *)(param_1 + 0x58);
  local_134 = local_134 + *(float *)(param_1 + 0x48) * fVar12;
  fVar18 = local_138 - *(float *)(param_1 + 0x50);
  fVar16 = local_134 - *(float *)(param_1 + 0x54);
  fVar22 = (float)DAT_146866060;
  fVar12 = DAT_146866060._4_4_;
  fVar21 = DAT_146866060._8_4_;
  fVar17 = DAT_146866060._12_4_;
  auVar13._4_4_ = fVar16;
  auVar13._0_4_ = fVar18;
  auVar13._8_4_ = local_130;
  auVar13._12_4_ = 0;
  auVar14 = divps(auVar13,_DAT_146866060);
  fVar18 = fVar18 - (float)(int)auVar14._0_4_ * fVar22;
  fVar16 = fVar16 - (float)(int)auVar14._4_4_ * fVar12;
  local_130 = local_130 - (float)(int)auVar14._8_4_ * fVar21;
  fVar19 = 0.0 - (float)(int)auVar14._12_4_ * fVar17;
  fVar18 = (float)(((uint)(fVar18 + fVar22) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                  (uint)(fVar18 + fVar22));
  fVar16 = (float)(((uint)(fVar16 + fVar12) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                  (uint)(fVar16 + fVar12));
  fStack_100 = (float)(((uint)(local_130 + fVar21) ^ (uint)local_130) & -(uint)(0.0 <= local_130) ^
                      (uint)(local_130 + fVar21));
  fVar19 = (float)(((uint)(fVar19 + fVar17) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                  (uint)(fVar19 + fVar17));
  fVar18 = (float)(((uint)(fVar18 - fVar22) ^ (uint)fVar18) & -(uint)(_DAT_146866050 < fVar18) ^
                  (uint)fVar18);
  fVar16 = (float)(((uint)(fVar16 - fVar12) ^ (uint)fVar16) & -(uint)(fRam0000000146866054 < fVar16)
                  ^ (uint)fVar16);
  fStack_100 = (float)(((uint)(fStack_100 - fVar21) ^ (uint)fStack_100) &
                       -(uint)(fRam0000000146866058 < fStack_100) ^ (uint)fStack_100);
  local_108 = CONCAT44(fVar16,fVar18);
  uStack_fc = ((uint)(fVar19 - fVar17) ^ (uint)fVar19) & -(uint)(fRam000000014686605c < fVar19) ^
              (uint)fVar19;
  if (SQRT(fVar16 * fVar16 + fVar18 * fVar18) < *(float *)(param_1 + 0x34)) {
    fVar22 = *(float *)(param_1 + 0x3c);
  }
  else {
    fVar22 = *(float *)(param_1 + 0x38);
  }
  fVar12 = fVar22 * param_2;
  if (0.0 <= fVar12) {
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
  }
  else {
    fVar12 = 0.0;
  }
  fVar18 = fVar18 * fVar12;
  fVar16 = fVar16 * fVar12;
  fVar12 = fStack_100 * fVar12;
  fVar21 = (float)(int)(fVar18 * 0.0027777778) * 360.0;
  if (ABS(fVar18) < ABS(fVar21)) {
    fVar21 = fVar18;
  }
  fVar18 = fVar18 - fVar21;
  if (fVar18 < 0.0) {
    fVar18 = fVar18 + 360.0;
  }
  if (fVar18 == 0.0) {
    fVar21 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
    if (ABS(fVar16) < ABS(fVar21)) {
      fVar21 = fVar16;
    }
    fVar16 = fVar16 - fVar21;
    if (fVar16 < 0.0) {
      fVar16 = fVar16 + 360.0;
    }
    if (fVar16 != 0.0) goto LAB_140a4362f;
    fVar21 = (float)(int)(fVar12 * 0.0027777778) * 360.0;
    if (ABS(fVar12) < ABS(fVar21)) {
      fVar21 = fVar12;
    }
    fVar12 = fVar12 - fVar21;
    if (fVar12 < 0.0) {
      fVar12 = fVar12 + 360.0;
    }
    if (fVar12 != 0.0) goto LAB_140a4362f;
    bVar4 = true;
  }
  else {
LAB_140a4362f:
    bVar4 = false;
  }
  if (bVar4) {
    fStack_100 = *(float *)(param_1 + 0x58);
    puVar9 = &local_108;
    local_108 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    puVar9 = (undefined8 *)FMath::RInterpTo(&local_108,param_1 + 0x50,&local_138,param_2,fVar22);
  }
  *(undefined8 *)(param_3 + 0x3c) = *puVar9;
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(puVar9 + 1);
  fVar12 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar3 + 0x48) * 0.008726646);
  local_110 = *(float *)(param_3 + 0x38);
  fVar23 = fVar23 / fVar12;
  local_118 = *(undefined8 *)(param_3 + 0x30);
  if (fVar24 < fVar23) {
    fVar17 = local_124 * local_124 + local_128 * local_128 + local_120 * local_120;
    fVar12 = local_128;
    fVar24 = local_124;
    fVar21 = local_120;
    if ((fVar17 != 1.0) &&
       (fVar12 = DAT_1468b5d90, fVar24 = DAT_1468b5d94, fVar21 = DAT_1468b5d98, 1e-08 <= fVar17)) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = CONCAT44(0,fVar17);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,fVar17);
      auVar14 = rsqrtss(auVar20,auVar5);
      fVar21 = auVar14._0_4_;
      fVar21 = fVar21 + fVar21 * (0.5 - fVar17 * 0.5 * fVar21 * fVar21);
      fVar21 = fVar21 + fVar21 * (0.5 - fVar17 * 0.5 * fVar21 * fVar21);
      fVar12 = local_128 * fVar21;
      fVar24 = local_124 * fVar21;
      fVar21 = local_120 * fVar21;
    }
    local_110 = fVar2 - fVar21 * fVar23;
    local_118 = CONCAT44(fVar15 - fVar24 * fVar23,(float)uVar1 - fVar12 * fVar23);
    fStack_100 = local_110;
  }
  puVar9 = (undefined8 *)FMath::VInterpTo(&local_108,param_1 + 0x5c,&local_118,param_2,fVar22);
  *(undefined8 *)(param_3 + 0x30) = *puVar9;
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(puVar9 + 1);
LAB_140a439c1:
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x44);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_3 + 0x30);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_3 + 0x38);
  *(float *)(param_3 + 0x90) =
       (*(float *)(param_3 + 0x30) - (float)local_e8) + *(float *)(param_3 + 0x90);
  *(float *)(param_3 + 0x94) =
       (*(float *)(param_3 + 0x34) - local_e8._4_4_) + *(float *)(param_3 + 0x94);
  *(float *)(param_3 + 0x98) =
       (*(float *)(param_3 + 0x38) - (float)uStack_e0) + *(float *)(param_3 + 0x98);
  puVar9 = (undefined8 *)FRotator::Quaternion(param_3 + 0x9c,&local_108);
  local_f8 = *puVar9;
  uStack_f0 = puVar9[1];
  fStack_100 = *(float *)(param_3 + 0x44) - local_d8._4_4_;
  local_108 = CONCAT44(*(float *)(param_3 + 0x40) - (float)local_d8,
                       *(float *)(param_3 + 0x3c) - uStack_e0._4_4_);
  pfVar10 = (float *)FRotator::Quaternion(&local_108,&local_118);
  fVar22 = *pfVar10;
  fVar23 = pfVar10[1];
  fVar12 = pfVar10[2];
  fVar2 = pfVar10[3];
  fVar21 = fVar23 * (float)local_f8;
  fVar17 = fVar22 * (float)local_f8;
  fVar15 = fVar22 * local_f8._4_4_;
  fVar24 = fVar23 * local_f8._4_4_;
  local_f8 = CONCAT44(fVar12 * (float)local_f8 * fRam00000001468660d4 + uStack_f0._4_4_ * fVar23 +
                      fVar2 * local_f8._4_4_ * fRam00000001468660c4 +
                      fVar22 * (float)uStack_f0 * fRam00000001468660b4,
                      fVar2 * (float)local_f8 * _DAT_1468660d0 + uStack_f0._4_4_ * fVar22 +
                      fVar12 * local_f8._4_4_ * _DAT_1468660c0 +
                      fVar23 * (float)uStack_f0 * _DAT_1468660b0);
  uStack_f0 = CONCAT44(fVar17 * fRam00000001468660dc + uStack_f0._4_4_ * fVar2 +
                       fVar24 * fRam00000001468660cc +
                       fVar12 * (float)uStack_f0 * fRam00000001468660bc,
                       fVar21 * fRam00000001468660d8 + uStack_f0._4_4_ * fVar12 +
                       fVar15 * fRam00000001468660c8 +
                       fVar2 * (float)uStack_f0 * fRam00000001468660b8);
  puVar9 = (undefined8 *)FQuat::Rotator(&local_f8,&local_108);
  *(undefined8 *)(param_3 + 0x9c) = *puVar9;
  *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(puVar9 + 1);
  return;
}



// FUNCTION 140a43b60 FUN_140a43b60 body=583 status=ok
// SIG undefined FUN_140a43b60(void)

void FUN_140a43b60(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined1 local_50 [24];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((param_3 != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0x98), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_14148cad0();
    iVar3 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar3;
    if ((*(int *)(plVar1[2] + 0x90) < iVar3) ||
       (uVar5 = *(ulonglong *)(plVar1[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar3 * 8) != lVar4 + 0x88)) {
      pfVar6 = (float *)(uVar5 & 0xffffffffffffff00);
    }
    else {
      pfVar6 = (float *)CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)pfVar6 != '\0') {
      if ((((*(byte *)(param_1 + 0x38) & 1) == 0) &&
          (pfVar6 = (float *)FUN_1430d8750(plVar1), (char)pfVar6 != '\0')) ||
         ((((*(byte *)(param_1 + 0x38) & 2) == 0 ||
           (pfVar6 = (float *)FUN_14122e820(plVar1), (char)pfVar6 == '\0')) &&
          (((0.0 < *(float *)(param_1 + 0x3c) &&
            (pfVar6 = (float *)(**(code **)(*plVar1 + 0x308))(plVar1,local_60),
            SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2]) * 0.036 <
            *(float *)(param_1 + 0x3c))) ||
           ((0.0 < *(float *)(param_1 + 0x40) &&
            (pfVar6 = (float *)(**(code **)(*plVar1 + 0x148))(plVar1),
            pfVar6[0x1e4] - *(float *)(plVar1 + 0x13a) < *(float *)(param_1 + 0x40))))))))) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      else {
        fVar8 = *(float *)(param_1 + 0x44);
        if (fVar8 < 1.0) {
          fVar8 = param_2 * *(float *)(param_1 + 0x34) + fVar8;
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
          *(float *)(param_1 + 0x44) = fVar8;
        }
        lVar4 = plVar1[0x2d];
        if (lVar4 == 0) {
          uVar9 = (undefined4)DAT_1468b5da0;
          uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_64 = DAT_1468b5da8;
        }
        else {
          local_38 = *(float *)(lVar4 + 0x210);
          fStack_34 = *(float *)(lVar4 + 0x214);
          fStack_30 = *(float *)(lVar4 + 0x218);
          fStack_2c = *(float *)(lVar4 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_34);
          auVar2._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_38);
          auVar2._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_30);
          auVar2._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_2c);
          iVar3 = movmskps((int)pfVar6,auVar2);
          if (iVar3 != 0) {
            *(float *)(lVar4 + 0x250) = local_38;
            *(float *)(lVar4 + 0x254) = fStack_34;
            *(float *)(lVar4 + 600) = fStack_30;
            *(float *)(lVar4 + 0x25c) = fStack_2c;
            puVar7 = (undefined8 *)FQuat::Rotator(&local_38,local_50);
            *(undefined8 *)(lVar4 + 0x260) = *puVar7;
            *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar7 + 1);
            fVar8 = *(float *)(param_1 + 0x44);
          }
          uVar9 = (undefined4)*(undefined8 *)(lVar4 + 0x260);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
          local_64 = *(undefined4 *)(lVar4 + 0x268);
        }
        local_6c = CONCAT44(uVar10,uVar9);
        FMath::RInterpTo(local_60,param_3 + 0x3c,&local_6c,param_2,
                         fVar8 * *(float *)(param_1 + 0x30));
        *(undefined4 *)(param_3 + 0x40) = local_5c;
      }
    }
  }
  return;
}



// FUNCTION 140a43db0 FUN_140a43db0 body=715 status=ok
// SIG undefined FUN_140a43db0(void)

void FUN_140a43db0(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar3 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = *(longlong *)(lVar3 + 0xe68);
      goto LAB_140a43e41;
    }
  }
  lVar3 = 0;
  lVar2 = 0;
LAB_140a43e41:
  if ((lVar3 != 0) && (lVar2 != 0)) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      local_88 = 0;
      uStack_80 = 0;
      local_78._0_4_ = (uint)local_78 & 0xffff0000;
      local_78 = CONCAT44(0x41200000,(uint)local_78);
      uStack_70 = 0;
      local_68 = local_68 & 0xffffff0000000000;
      uStack_60 = 0;
      local_58 = local_58 & 0xffffffff00000000;
      uStack_50 = 0;
      local_48._0_4_ = (uint)local_48 & 0xffff0000;
      local_48 = CONCAT44(0x41200000,(uint)local_48);
      uStack_40 = 0;
      local_38 = local_38 & 0xffffff0000000000;
      uStack_30 = 0;
      local_28 = local_28 & 0xffffffff00000000;
      if (*(char *)(lVar2 + 0x13a0) == '\x04') {
        local_88 = (uint)*(undefined8 *)(param_1 + 0xa8);
        uStack_80 = *(undefined8 *)(param_1 + 0xb0);
        local_78 = *(undefined8 *)(param_1 + 0xb8);
        uStack_70 = *(undefined8 *)(param_1 + 0xc0);
        local_68 = *(ulonglong *)(param_1 + 200);
        uStack_60 = *(undefined8 *)(param_1 + 0xd0);
        local_58 = *(ulonglong *)(param_1 + 0xd8);
        uStack_50 = *(undefined8 *)(param_1 + 0xe0);
        local_48 = *(undefined8 *)(param_1 + 0xe8);
        uStack_40 = *(undefined8 *)(param_1 + 0xf0);
        local_38 = *(ulonglong *)(param_1 + 0xf8);
        uStack_30 = *(undefined8 *)(param_1 + 0x100);
        local_28 = *(ulonglong *)(param_1 + 0x108);
      }
      else if (*(char *)(lVar2 + 0x13a0) == '\x02') {
        local_88 = (uint)*(undefined8 *)(param_1 + 0x110);
        uStack_80 = *(undefined8 *)(param_1 + 0x118);
        local_78 = *(undefined8 *)(param_1 + 0x120);
        uStack_70 = *(undefined8 *)(param_1 + 0x128);
        local_68 = *(ulonglong *)(param_1 + 0x130);
        uStack_60 = *(undefined8 *)(param_1 + 0x138);
        local_58 = *(ulonglong *)(param_1 + 0x140);
        uStack_50 = *(undefined8 *)(param_1 + 0x148);
        local_48 = *(undefined8 *)(param_1 + 0x150);
        uStack_40 = *(undefined8 *)(param_1 + 0x158);
        local_38 = *(ulonglong *)(param_1 + 0x160);
        uStack_30 = *(undefined8 *)(param_1 + 0x168);
        local_28 = *(ulonglong *)(param_1 + 0x170);
      }
      else if (((*(longlong *)(lVar2 + 0x1188) == 0) || (*(float *)(lVar2 + 0x1378) <= 0.0)) ||
              (*(float *)(lVar2 + 0x1378) + *(float *)(*(longlong *)(lVar2 + 0x1188) + 0x40) <
               *(float *)(*(longlong *)(param_3 + 0x28) + 0x28))) {
        *(undefined1 *)(param_1 + 0xa1) = 1;
      }
      else {
        local_88 = (uint)*(undefined8 *)(param_1 + 0x178);
        uStack_80 = *(undefined8 *)(param_1 + 0x180);
        local_78 = *(undefined8 *)(param_1 + 0x188);
        uStack_70 = *(undefined8 *)(param_1 + 400);
        local_68 = *(ulonglong *)(param_1 + 0x198);
        uStack_60 = *(undefined8 *)(param_1 + 0x1a0);
        local_58 = *(ulonglong *)(param_1 + 0x1a8);
        uStack_50 = *(undefined8 *)(param_1 + 0x1b0);
        local_48 = *(undefined8 *)(param_1 + 0x1b8);
        uStack_40 = *(undefined8 *)(param_1 + 0x1c0);
        local_38 = *(ulonglong *)(param_1 + 0x1c8);
        uStack_30 = *(undefined8 *)(param_1 + 0x1d0);
        local_28 = *(ulonglong *)(param_1 + 0x1d8);
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | local_88 & 0xf;
      *(undefined8 *)(param_1 + 0x38) = uStack_80;
      *(undefined8 *)(param_1 + 0x40) = local_78;
      *(undefined8 *)(param_1 + 0x48) = uStack_70;
      *(ulonglong *)(param_1 + 0x50) = local_68;
      *(undefined8 *)(param_1 + 0x58) = uStack_60;
      *(ulonglong *)(param_1 + 0x60) = local_58;
      *(undefined8 *)(param_1 + 0x68) = uStack_50;
      *(undefined8 *)(param_1 + 0x70) = local_48;
      *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0x7c) = uStack_40._4_4_;
      *(undefined4 *)(param_1 + 0x80) = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0x84) = local_38._4_4_;
      *(undefined8 *)(param_1 + 0x88) = uStack_30;
      *(ulonglong *)(param_1 + 0x90) = local_28;
    }
    FUN_142fd1880(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140a44080 FUN_140a44080 body=6759 status=ok
// SIG undefined FUN_140a44080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a44080(longlong param_1,float param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
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
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined1 auStack_e78 [32];
  undefined1 *local_e58;
  undefined1 local_e50;
  undefined1 *local_e48;
  char local_e38;
  char local_e37;
  undefined8 local_e30;
  float local_e28;
  float local_e20;
  undefined4 local_e18;
  float local_e08;
  float fStack_e04;
  float fStack_e00;
  float fStack_dfc;
  undefined8 local_df8;
  float fStack_df0;
  float fStack_dec;
  undefined8 local_de8;
  float fStack_de0;
  float fStack_ddc;
  float local_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  float local_dc8;
  float fStack_dc4;
  float fStack_dc0;
  float fStack_dbc;
  float local_db8;
  float fStack_db4;
  float fStack_db0;
  float fStack_dac;
  float local_da8;
  float fStack_da4;
  float fStack_da0;
  float fStack_d9c;
  float local_d98;
  float fStack_d94;
  float fStack_d90;
  float fStack_d8c;
  float local_d88;
  float fStack_d84;
  float fStack_d80;
  float fStack_d7c;
  float local_d78;
  float fStack_d74;
  float fStack_d70;
  float fStack_d6c;
  float local_d68;
  float fStack_d64;
  float fStack_d60;
  float fStack_d5c;
  float local_d58;
  float fStack_d54;
  float fStack_d50;
  float fStack_d4c;
  float local_d48;
  float fStack_d44;
  float fStack_d40;
  float fStack_d3c;
  float local_d38;
  float fStack_d34;
  float fStack_d30;
  float fStack_d2c;
  float local_d28;
  float fStack_d24;
  float fStack_d20;
  float fStack_d1c;
  float local_d18;
  float fStack_d14;
  float fStack_d10;
  float fStack_d0c;
  float local_d08;
  float fStack_d04;
  float fStack_d00;
  float fStack_cfc;
  undefined1 local_cf8 [16];
  undefined1 local_ce8 [20];
  uint local_cd4;
  float local_808;
  float local_7fc;
  float local_7f8;
  float local_7f4;
  float local_7f0;
  float local_7e8;
  float local_7e4;
  undefined4 local_7dc;
  float local_7b0;
  undefined1 local_6e8 [12];
  uint local_6dc;
  uint local_6d8;
  float local_6d4;
  float local_6d0;
  float local_6cc;
  float local_2d8;
  undefined4 local_2d4;
  float local_208;
  float local_1fc;
  float local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  float local_11c;
  float local_118;
  longlong local_110;
  longlong local_100;
  ulonglong local_e8;
  
  if (param_3 == 0) {
    return;
  }
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_e78;
  bVar6 = false;
  *(undefined1 *)(param_1 + 0xc90) = 0;
  lVar16 = *(longlong *)(param_3 + 0x28);
  uVar58 = 0;
  if (lVar16 != 0) {
    lVar11 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) && (*(longlong *)(lVar16 + 0xa0) != 0)) && (*DAT_1468664a0 == 0)) {
      if (*(longlong *)(lVar16 + 0xb8) == 0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = (float)FUN_14307dab0();
      }
      local_e20 = fVar19;
      FUN_140a25aa0(local_ce8,param_1 + 0x30);
      plVar18 = *(longlong **)(lVar16 + 0xa0);
      if (plVar18 == (longlong *)0x0) {
LAB_140a441ec:
        plVar18 = (longlong *)0x0;
      }
      else {
        lVar11 = FUN_14145f370();
        if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_140a441ec;
      }
      if ((0.0 < *(float *)(param_1 + 0x678)) && (0.0 < *(float *)(param_1 + 0x67c))) {
        fVar35 = *(float *)(param_1 + 0x678) - param_2 / *(float *)(param_1 + 0x67c);
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        *(float *)(param_1 + 0x678) = fVar35;
        if ((0.0 < fVar35) &&
           (FUN_142fc8dc0(param_3,param_1 + 0x680), *(char *)(param_1 + 0x676) != '\0')) {
          *(uint *)(param_3 + 0xb4) = *(uint *)(param_3 + 0xb4) | 0x10;
        }
      }
      if ((*(float *)(param_1 + 0xc80) < 1.0) && (0.0 < *(float *)(param_1 + 0x630))) {
        fVar35 = param_2 / *(float *)(param_1 + 0x630) + *(float *)(param_1 + 0xc80);
        if (1.0 <= fVar35) {
          fVar35 = 1.0;
        }
        *(float *)(param_1 + 0xc80) = fVar35;
      }
      if (*(char *)(lVar16 + 0xc3) == '\0') {
LAB_140a442df:
        if (*(char *)(param_1 + 0xc84) != '\0') {
          fVar35 = *(float *)(lVar16 + 0xc4);
          *(float *)(param_1 + 0xc88) = -fVar35;
          if (-fVar35 == 0.0) {
            *(undefined4 *)(param_1 + 0xc8c) = 0;
            *(undefined1 *)(param_1 + 0xc84) = 0;
          }
          goto LAB_140a44311;
        }
      }
      else {
        if (*(char *)(param_1 + 0xc84) == '\0') {
          *(undefined1 *)(param_1 + 0xc84) = 1;
          fVar35 = *(float *)(lVar16 + 0xc4);
          *(float *)(param_1 + 0xc88) = fVar35;
          if (fVar35 <= 0.0) {
            *(undefined4 *)(param_1 + 0xc8c) = 0x3f800000;
          }
          else {
            *(undefined4 *)(param_1 + 0xc8c) = 0;
          }
        }
        else if (*(char *)(lVar16 + 0xc3) == '\0') goto LAB_140a442df;
LAB_140a44311:
        if ((*(char *)(param_1 + 0xc84) != '\0') &&
           (fVar35 = *(float *)(param_1 + 0xc88), fVar35 != 0.0)) {
          fVar20 = param_2 / fVar35 + *(float *)(param_1 + 0xc8c);
          if (0.0 <= fVar20) {
            if (1.0 <= fVar20) {
              fVar20 = 1.0;
            }
          }
          else {
            fVar20 = 0.0;
          }
          *(float *)(param_1 + 0xc8c) = fVar20;
          if ((0.0 <= fVar35) || (fVar20 != 0.0)) {
            if ((0.0 < fVar35) && (fVar20 == 1.0)) {
              *(undefined4 *)(param_1 + 0xc88) = 0;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0xc84) = 0;
          }
        }
      }
      lVar11 = DAT_1468664b8;
      lVar17 = 1;
      bVar5 = true;
      if ((*(char *)(param_1 + 0x64c) != '\0') &&
         ((plVar18 == (longlong *)0x0 || ((char)plVar18[0x28d] != '\0')))) {
        cVar8 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar8 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))) {
          lVar12 = 1;
        }
        else {
          lVar12 = 0;
        }
        if (*(int *)(lVar11 + lVar12 * 4) == 0) {
          fVar35 = *(float *)(param_1 + 0x654);
          *(undefined4 *)(param_1 + 0x12a4) = *(undefined4 *)(param_1 + 0x650);
          plVar15 = *(longlong **)(lVar16 + 0x98);
          uVar13 = FUN_1430a76d0();
          lVar11 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar13);
          if ((lVar11 != 0) &&
             (lVar11 = FUN_143049330(lVar11,*(undefined8 *)(lVar16 + 0xb8),1), lVar11 != 0)) {
            if (0.0 < *(float *)(lVar11 + 0x58)) {
              *(float *)(param_1 + 0x12a4) = *(float *)(lVar11 + 0x58);
            }
            if (0.0 < *(float *)(lVar11 + 0x5c)) {
              fVar35 = *(float *)(lVar11 + 0x5c);
            }
          }
          local_808 = *(float *)(param_1 + 0x12a4);
          fVar35 = local_808 * fVar35;
          if ((*(longlong *)(lVar16 + 0xb8) != 0) && (0.0 < fVar19)) {
            FUN_142fcadd0(param_3,&local_de8,&local_df8);
            FUN_14307d930(*(undefined8 *)(lVar16 + 0xb8),&local_e30);
            pfVar14 = (float *)FRotator::Vector(&local_df8,&local_e08);
            fVar46 = local_e30._4_4_ - local_de8._4_4_;
            fVar21 = (float)local_e30 - (float)local_de8;
            fVar28 = local_e28 - fStack_de0;
            fVar20 = pfVar14[1];
            fVar39 = *pfVar14;
            fVar42 = pfVar14[2];
            fVar23 = *(float *)(param_1 + 0x658);
            fVar22 = (float)UStaticMeshComponent::GetDiffuseBoost(*(undefined8 *)(lVar16 + 0xb8));
            if (0.0 < fVar22) {
              fVar23 = (float)UStaticMeshComponent::GetDiffuseBoost(*(undefined8 *)(lVar16 + 0xb8));
            }
            fVar35 = (fVar23 - fVar35) * fVar19 + fVar35;
            local_808 = ((fVar46 * fVar20 + fVar21 * fVar39 + fVar28 * fVar42) -
                        *(float *)(param_1 + 0x12a4)) * fVar19 + *(float *)(param_1 + 0x12a4);
            *(float *)(param_1 + 0x12a4) = local_808;
          }
          local_7fc = 1e+10;
          local_7f8 = fVar35;
          if (*(char *)(param_1 + 0x638) == '\0') {
            local_7e4 = 0.0;
            bVar6 = bVar5;
          }
          else {
            bVar6 = true;
          }
        }
      }
      bVar7 = bVar6;
      if ((*(char *)(param_1 + 0x638) != '\0') && (bVar7 = bVar5, bVar6)) {
        local_7fc = (*(float *)(param_1 + 0x510) - local_808) + *(float *)(param_1 + 0x51c);
      }
      if ((*(char *)(param_1 + 0x639) != '\0') && (0.0 < fVar19)) {
        (**(code **)(**(longlong **)(lVar16 + 0xa0) + 0x648))
                  (*(longlong **)(lVar16 + 0xa0),&local_e30,&local_e08);
        fVar19 = *(float *)(param_1 + 0x63c);
        pfVar14 = (float *)FRotator::Vector(&local_e08);
        fVar20 = fVar19 * pfVar14[2] + local_e28;
        fVar35 = fVar19 * pfVar14[1] + local_e30._4_4_;
        fVar19 = (float)local_e30 + fVar19 * *pfVar14;
        fStack_df0 = fVar20;
        _guard_xfg_dispatch_icall_nop(local_6e8,0,0x90);
        fStack_de0 = fStack_df0;
        local_de8 = CONCAT44(fVar35,fVar19);
        fStack_df0 = local_e28;
        local_e48 = local_6e8;
        local_e50 = 0;
        local_df8 = local_e30;
        local_6dc = 0x3f800000;
        local_e58 = (undefined1 *)CONCAT44(local_e58._4_4_,0xf);
        cVar8 = FUN_142fc9c40(param_3,&local_df8,&local_de8,0);
        if (cVar8 == '\0') {
          local_6d4 = fVar19;
          local_6d0 = fVar35;
          local_6cc = fVar20;
        }
        fVar35 = SQRT((local_6d0 - local_e30._4_4_) * (local_6d0 - local_e30._4_4_) +
                      (local_6d4 - (float)local_e30) * (local_6d4 - (float)local_e30) +
                      (local_6cc - local_e28) * (local_6cc - local_e28));
        if (*(float *)(param_1 + 0x12a0) <= 0.0) {
          *(float *)(param_1 + 0x12a0) = fVar35;
        }
        else {
          fVar35 = (float)FMath::FInterpTo();
          *(float *)(param_1 + 0x12a0) = fVar35;
        }
        if (bVar6) {
          local_7fc = (fVar35 - local_808) + *(float *)(param_1 + 0x51c);
        }
        else {
          if (0.0 < *(float *)(param_1 + 0x644)) {
            local_7f8 = *(float *)(param_1 + 0x644) * fVar35;
          }
          local_7f0 = local_e20 * *(float *)(param_1 + 0x528);
          local_808 = fVar35;
        }
        local_7e4 = local_e20 * *(float *)(param_1 + 0x534);
        fVar19 = local_e20;
        if (*(float *)(param_1 + 0x648) <= 0.0) {
          bVar7 = true;
        }
        else {
          local_7f4 = fVar35 * *(float *)(param_1 + 0x648);
          bVar7 = bVar5;
        }
      }
      fVar35 = *(float *)(param_1 + 0xc8c);
      if (0.0 < fVar35) {
        local_7fc = (*(float *)(lVar16 + 0x5b0) - local_808) + *(float *)(lVar16 + 0x5bc);
        bVar7 = bVar5;
        if (local_7b0 != *(float *)(lVar16 + 0x608)) {
          local_cd4 = local_cd4 | 0x40000;
          local_7b0 = *(float *)(lVar16 + 0x608);
        }
      }
      fVar20 = *(float *)(param_1 + 0xc80);
      if (fVar20 < 1.0) {
        local_7e8 = local_7e8 * fVar20;
        local_7e4 = local_7e4 * fVar20;
      }
      fVar20 = *(float *)(param_1 + 0x678);
      if ((0.0 < fVar20) && (*(char *)(param_1 + 0x675) == *(char *)(param_1 + 0x64c))) {
        fVar39 = *(float *)(param_1 + 0xb84);
        if (0.0 < fVar39) {
          if (local_7e4 <= 0.0) {
            if (0.0 < fVar39) {
              local_7dc = *(undefined4 *)(param_1 + 0xb8c);
              local_7fc = *(float *)(param_1 + 0xb6c);
              local_7f4 = *(float *)(param_1 + 0xb74);
            }
          }
          else {
            local_7fc = (*(float *)(param_1 + 0xb6c) - local_7fc) * fVar20 + local_7fc;
          }
        }
        local_7e4 = (fVar39 - local_7e4) * fVar20 + local_7e4;
        local_808 = (*(float *)(param_1 + 0xb60) - local_808) * fVar20 + local_808;
        local_7f8 = (*(float *)(param_1 + 0xb70) - local_7f8) * fVar20 + local_7f8;
        local_7f4 = (*(float *)(param_1 + 0xb74) - local_7f4) * fVar20 + local_7f4;
        local_7e8 = (*(float *)(param_1 + 0xb80) - local_7e8) * fVar20 + local_7e8;
      }
      if (bVar7) {
        local_e58 = local_ce8;
        FUN_1412f0a50(param_1,param_3);
        fVar35 = *(float *)(param_1 + 0xc8c);
      }
      if (0.0 < fVar35) {
        FUN_140a25aa0(local_6e8,lVar16 + 0xd0);
        fVar35 = local_208 - local_808;
        local_6d8 = local_6d8 | 0x40000000;
        local_208 = local_808;
        local_1fc = local_1fc + fVar35;
        FUN_142fc8dc0(param_3,local_6e8,*(undefined4 *)(param_1 + 0xc8c));
        if (local_100 != 0) {
          FMemory::Free();
        }
        if (local_110 != 0) {
          FMemory::Free();
        }
      }
      if ((0.0 < fVar19) && (*DAT_1468664d0 == 0)) {
        lVar11 = FUN_14307d8d0(*(longlong *)(lVar16 + 0xb8),
                               *(undefined1 *)(*(longlong *)(lVar16 + 0xb8) + 0x690));
        if (((*(uint *)(lVar11 + 0x218) & 1) != 0) || (0.0 < *DAT_1468664e8)) {
          local_e38 = '\x01';
        }
        else {
          local_e38 = '\0';
        }
        if (((*(uint *)(lVar11 + 0x218) & 8) != 0) || (0.0 < *DAT_146866530)) {
          local_e37 = '\x01';
        }
        else {
          local_e37 = '\0';
        }
        if ((local_e38 != '\0') || (local_e37 != '\0')) {
          FUN_142741540(local_6e8);
          local_e30 = DAT_1468664e8;
          if (*DAT_1468664e8 <= 0.0) {
            fVar35 = *(float *)(lVar11 + 0x21c);
          }
          else {
            cVar8 = FUN_1415ad720(&DAT_1468e2448);
            if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
               (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)) {
              fVar35 = local_e30[1];
            }
            else {
              fVar35 = *local_e30;
            }
          }
          local_e30 = DAT_146866530;
          if (*DAT_146866530 < 0.0) {
            fVar20 = *(float *)(lVar11 + 0x228);
          }
          else {
            cVar8 = FUN_1415ad720(&DAT_1468e2448);
            if (((cVar8 != '\0') || (DAT_1468c21ae == '\0')) ||
               (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)) {
              lVar17 = 0;
            }
            fVar20 = local_e30[lVar17];
          }
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x1058))(plVar18,&local_e30);
            plVar18 = *(longlong **)(lVar16 + 0x98);
            if (plVar18 == (longlong *)0x0) {
LAB_140a44c57:
              plVar18 = (longlong *)0x0;
            }
            else {
              lVar17 = FUN_1413f82e0();
              if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
                  lVar17 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_140a44c57;
            }
            if ((((fVar19 < 1.0) || (cVar8 = FUN_14309f7d0(lVar11,0), cVar8 == '\0')) ||
                (cVar8 = FUN_14309f3d0(lVar11), cVar8 == '\0')) ||
               ((plVar18 == (longlong *)0x0 ||
                (*(longlong *)(*(longlong *)(lVar16 + 0xb8) + 0x7f8) == DAT_146b479c8)))) {
LAB_140a45859:
              fVar39 = (float)local_e30;
              fVar42 = local_e30._4_4_;
            }
            else {
              plVar15 = (longlong *)(**(code **)(*plVar18 + 0xa58))(plVar18);
              lVar16 = FUN_142cc1670(plVar18);
              if ((lVar16 == 0) || ((plVar15 == (longlong *)0x0 || (plVar15[0xe3] == 0))))
              goto LAB_140a45859;
              (**(code **)(*plVar15 + 0x420))(plVar15,&local_d48,*(undefined8 *)(lVar16 + 0x198),2);
              (**(code **)(*plVar15 + 0x420))(plVar15,&local_d18,*(undefined8 *)(lVar16 + 0x1a0),2);
              uVar13 = FRotator::GetInverse(param_3 + 0x9c,&local_e08);
              pfVar14 = (float *)FRotator::Quaternion(uVar13,&local_dd8);
              fVar43 = fRam0000000146866098;
              fVar41 = fRam0000000146866094;
              fVar38 = _DAT_146866090;
              fVar21 = *pfVar14;
              fVar22 = pfVar14[1];
              fVar28 = pfVar14[2];
              fVar46 = pfVar14[3];
              fVar50 = fVar21 * fStack_d14;
              fVar51 = fVar21 * local_d18;
              fVar33 = fVar22 * local_d18;
              fVar34 = fVar22 * fStack_d14;
              fVar36 = fVar28 * local_d18;
              fVar37 = fVar28 * fStack_d10;
              fVar19 = local_cf8._0_4_;
              fVar39 = local_cf8._4_4_;
              fVar42 = local_cf8._8_4_;
              fVar23 = local_cf8._12_4_;
              local_d18 = fVar21 * fStack_d0c * _DAT_1468660d0 + fVar46 * local_d18 +
                          fVar22 * fStack_d10 * _DAT_1468660c0 +
                          fVar28 * fStack_d14 * _DAT_1468660b0;
              fStack_d14 = fVar21 * fStack_d10 * fRam00000001468660d4 + fVar46 * fStack_d14 +
                           fVar22 * fStack_d0c * fRam00000001468660c4 +
                           fVar36 * fRam00000001468660b4;
              fStack_d10 = fVar50 * fRam00000001468660d8 + fVar46 * fStack_d10 +
                           fVar33 * fRam00000001468660c8 +
                           fVar28 * fStack_d0c * fRam00000001468660b8;
              fStack_d0c = fVar51 * fRam00000001468660dc + fVar46 * fStack_d0c +
                           fVar34 * fRam00000001468660cc + fVar37 * fRam00000001468660bc;
              local_d08 = local_d08 + -*(float *)(param_3 + 0x90);
              fStack_d04 = fStack_d04 + -*(float *)(param_3 + 0x94);
              fStack_d00 = fStack_d00 + -*(float *)(param_3 + 0x98);
              fStack_cfc = fStack_cfc + 0.0;
              auVar29._0_4_ = (float)((uint)fVar19 & _DAT_146866130);
              auVar29._4_4_ = (float)((uint)fVar39 & uRam0000000146866134);
              auVar29._8_4_ = (float)((uint)fVar42 & uRam0000000146866138);
              auVar29._12_4_ = (float)((uint)fVar23 & uRam000000014686613c);
              auVar30._4_4_ = -(uint)(fRam0000000146866144 < auVar29._4_4_);
              auVar30._0_4_ = -(uint)(_DAT_146866140 < auVar29._0_4_);
              auVar30._8_4_ = -(uint)(fRam0000000146866148 < auVar29._8_4_);
              auVar30._12_4_ = -(uint)(fRam000000014686614c < auVar29._12_4_);
              iVar10 = movmskps((int)pfVar14,auVar30);
              fVar21 = _DAT_1468b5b90;
              fVar22 = fRam00000001468b5b94;
              fVar28 = fRam00000001468b5b98;
              fVar46 = fRam00000001468b5b9c;
              fVar33 = _DAT_1468b5b70;
              fVar34 = fRam00000001468b5b74;
              fVar36 = fRam00000001468b5b78;
              fVar37 = fRam00000001468b5b7c;
              fVar50 = _DAT_1468b5b80;
              fVar51 = fRam00000001468b5b84;
              fVar44 = fRam00000001468b5b88;
              fVar45 = fRam00000001468b5b8c;
              if (iVar10 != 0) {
                fVar33 = local_d18 * _DAT_146866150;
                fVar34 = fStack_d14 * fRam0000000146866154;
                fVar36 = fStack_d10 * fRam0000000146866158;
                fVar37 = fStack_d0c * fRam000000014686615c;
                auVar30 = rcpps(auVar29,local_cf8);
                fVar21 = auVar30._0_4_;
                fVar22 = auVar30._4_4_;
                fVar28 = auVar30._8_4_;
                fVar46 = auVar30._12_4_;
                fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar19;
                fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar39;
                fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar42;
                fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * fVar23;
                fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar19;
                fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar39;
                fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar42;
                fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * fVar23;
                fVar21 = (float)((-(uint)((float)((uint)fVar19 & _DAT_146866130) <= _DAT_146866140)
                                  & (uint)fVar21 ^ (uint)fVar21) & _DAT_1468660a0);
                fVar22 = (float)((-(uint)((float)((uint)fVar39 & uRam0000000146866134) <=
                                         fRam0000000146866144) & (uint)fVar22 ^ (uint)fVar22) &
                                uRam00000001468660a4);
                fVar28 = (float)((-(uint)((float)((uint)fVar42 & uRam0000000146866138) <=
                                         fRam0000000146866148) & (uint)fVar28 ^ (uint)fVar28) &
                                uRam00000001468660a8);
                fVar46 = (float)((-(uint)((float)((uint)fVar23 & uRam000000014686613c) <=
                                         fRam000000014686614c) & (uint)fVar46 ^ (uint)fVar46) &
                                uRam00000001468660ac);
                fVar50 = fVar21 * local_d08;
                fVar51 = fVar22 * fStack_d04;
                fVar44 = fVar28 * fStack_d00;
                fVar45 = fVar46 * fStack_cfc;
                fVar19 = fVar44 * fVar34 - fVar51 * fVar36;
                fVar39 = fVar50 * fVar36 - fVar44 * fVar33;
                fVar42 = fVar51 * fVar33 - fVar50 * fVar34;
                fVar23 = fVar45 * fVar37 - fVar45 * fVar37;
                fVar19 = fVar19 + fVar19;
                fVar39 = fVar39 + fVar39;
                fVar42 = fVar42 + fVar42;
                fVar23 = fVar23 + fVar23;
                fVar50 = (float)((uint)(0.0 - ((fVar42 * fVar34 - fVar39 * fVar36) +
                                              fVar37 * fVar19 + fVar50)) & _DAT_1468660a0);
                fVar51 = (float)((uint)(0.0 - ((fVar19 * fVar36 - fVar42 * fVar33) +
                                              fVar37 * fVar39 + fVar51)) & uRam00000001468660a4);
                fVar44 = (float)((uint)(0.0 - ((fVar39 * fVar33 - fVar19 * fVar34) +
                                              fVar37 * fVar42 + fVar44)) & uRam00000001468660a8);
                fVar45 = (float)((uint)(0.0 - ((fVar23 * fVar37 - fVar23 * fVar37) +
                                              fVar37 * fVar23 + fVar45)) & uRam00000001468660ac);
              }
              auVar4._4_4_ = fStack_d24;
              auVar4._0_4_ = local_d28;
              auVar4._8_4_ = fStack_d20;
              auVar4._12_4_ = fStack_d1c;
              auVar2._4_4_ = fVar22;
              auVar2._0_4_ = fVar21;
              auVar2._8_4_ = fVar28;
              auVar2._12_4_ = fVar46;
              auVar30 = minps(auVar4,auVar2);
              auVar24._4_4_ = -(uint)(auVar30._4_4_ < fRam00000001468660f4);
              auVar24._0_4_ = -(uint)(auVar30._0_4_ < _DAT_1468660f0);
              auVar24._8_4_ = -(uint)(auVar30._8_4_ < fRam00000001468660f8);
              auVar24._12_4_ = -(uint)(auVar30._12_4_ < fRam00000001468660fc);
              iVar10 = movmskps(iVar10,auVar24);
              if (iVar10 == 0) {
                fStack_de0 = fStack_d44 * fVar33 * fRam00000001468660d8 + fStack_d40 * fVar37 +
                             local_d48 * fVar34 * fRam00000001468660c8 +
                             fStack_d3c * fVar36 * fRam00000001468660b8;
                fStack_ddc = local_d48 * fVar33 * fRam00000001468660dc + fStack_d3c * fVar37 +
                             fStack_d44 * fVar34 * fRam00000001468660cc +
                             fStack_d40 * fVar36 * fRam00000001468660bc;
                local_de8 = CONCAT44(fStack_d40 * fVar33 * fRam00000001468660d4 +
                                     fStack_d44 * fVar37 +
                                     fStack_d3c * fVar34 * fRam00000001468660c4 +
                                     local_d48 * fVar36 * fRam00000001468660b4,
                                     fStack_d3c * fVar33 * _DAT_1468660d0 + local_d48 * fVar37 +
                                     fStack_d40 * fVar34 * _DAT_1468660c0 +
                                     fStack_d44 * fVar36 * _DAT_1468660b0);
                local_d38 = local_d38 * fVar21;
                fStack_d34 = fStack_d34 * fVar22;
                fStack_d30 = fStack_d30 * fVar28;
                fStack_d2c = fStack_d2c * fVar46;
                fVar19 = fStack_d30 * fVar34 - fStack_d34 * fVar36;
                fVar39 = local_d38 * fVar36 - fStack_d30 * fVar33;
                fVar42 = fStack_d34 * fVar33 - local_d38 * fVar34;
                fVar23 = fStack_d2c * fVar37 - fStack_d2c * fVar37;
                fVar19 = fVar19 + fVar19;
                fVar39 = fVar39 + fVar39;
                fVar42 = fVar42 + fVar42;
                fVar23 = fVar23 + fVar23;
                fVar21 = local_d28 * fVar21;
                fVar22 = fStack_d24 * fVar22;
                fVar28 = fStack_d20 * fVar28;
                fVar46 = fStack_d1c * fVar46;
                fVar50 = (fVar42 * fVar34 - fVar39 * fVar36) + fVar19 * fVar37 + local_d38 + fVar50;
                fVar51 = (fVar19 * fVar36 - fVar42 * fVar33) + fVar39 * fVar37 + fStack_d34 + fVar51
                ;
                fVar44 = (fVar39 * fVar33 - fVar19 * fVar34) + fVar42 * fVar37 + fStack_d30 + fVar44
                ;
                fVar45 = (fVar23 * fVar37 - fVar23 * fVar37) + fVar23 * fVar37 + fStack_d2c + fVar45
                ;
                local_e08 = fVar21;
                fStack_e04 = fVar22;
                fStack_e00 = fVar28;
                fStack_dfc = fVar46;
              }
              else {
                fVar39 = fVar34 + fVar34;
                fVar42 = fVar36 + fVar36;
                local_e08 = local_d28 * fVar21;
                fStack_e04 = fStack_d24 * fVar22;
                fStack_e00 = fStack_d20 * fVar28;
                fStack_dfc = fStack_d1c * fVar46;
                fVar23 = (fVar33 + fVar33) * fVar33;
                fVar19 = (fVar33 + fVar33) * fVar37;
                fVar52 = (fVar42 * fVar37 + fVar39 * fVar33) * fVar21;
                fVar54 = (fVar19 + fVar42 * fVar34) * fVar22;
                fVar56 = (fVar39 * fVar37 + fVar42 * fVar33) * fVar28;
                fVar45 = fVar22 * (fVar39 * fVar33 - fVar42 * fVar37);
                fVar40 = fVar28 * (fVar42 * fVar34 - fVar19);
                fVar33 = fVar21 * (fVar42 * fVar33 - fVar39 * fVar37);
                fVar19 = (float)((uint)((_DAT_146866090 - (fVar42 * fVar36 + fVar39 * fVar34)) *
                                       fVar21) & _DAT_1468660a0);
                fVar42 = (float)((uint)((fRam0000000146866094 - (fVar42 * fVar36 + fVar23)) * fVar22
                                       ) & uRam00000001468660a4);
                fVar22 = (float)((uint)((fRam0000000146866098 - (fVar39 * fVar34 + fVar23)) * fVar28
                                       ) & uRam00000001468660a8);
                fVar28 = (float)((uint)((fRam000000014686609c - (fVar23 + fVar23)) * fVar46) &
                                uRam00000001468660ac);
                fVar23 = fStack_d44 + fStack_d44;
                fVar21 = fStack_d40 + fStack_d40;
                fVar46 = local_d48 * (local_d48 + local_d48);
                fVar39 = fStack_d3c * (local_d48 + local_d48);
                fVar47 = (fStack_d3c * fVar21 + local_d48 * fVar23) * local_d28;
                fVar48 = (fVar39 + fStack_d44 * fVar21) * fStack_d24;
                fVar49 = (fStack_d3c * fVar23 + local_d48 * fVar21) * fStack_d20;
                fVar34 = fStack_d24 * (local_d48 * fVar23 - fStack_d3c * fVar21);
                fVar36 = fStack_d20 * (fStack_d44 * fVar21 - fVar39);
                fVar37 = local_d28 * (local_d48 * fVar21 - fStack_d3c * fVar23);
                fVar39 = (float)((uint)((_DAT_146866090 -
                                        (fStack_d40 * fVar21 + fStack_d44 * fVar23)) * local_d28) &
                                _DAT_1468660a0);
                fVar21 = (float)((uint)((fRam0000000146866094 - (fStack_d40 * fVar21 + fVar46)) *
                                       fStack_d24) & uRam00000001468660a4);
                fVar23 = (float)((uint)((fRam0000000146866098 - (fStack_d44 * fVar23 + fVar46)) *
                                       fStack_d20) & uRam00000001468660a8);
                fVar46 = (float)((uint)((fRam000000014686609c - (fVar46 + fVar46)) * fStack_d1c) &
                                uRam00000001468660ac);
                local_d88 = fVar47 * fVar45 + fVar39 * fVar19 + fVar37 * fVar56 + fVar46 * fVar50;
                fStack_d84 = fVar47 * fVar42 + fVar39 * fVar52 + fVar37 * fVar40 + fVar46 * fVar51;
                fStack_d80 = fVar47 * fVar54 + fVar39 * fVar33 + fVar37 * fVar22 + fVar46 * fVar44;
                fStack_d7c = fVar47 * fVar28 + fVar39 * fVar28 + fVar37 * fVar28 +
                             fVar46 * fRam000000014686609c;
                local_d78 = fVar21 * fVar45 + fVar34 * fVar19 + fVar48 * fVar56 + fVar46 * fVar50;
                fStack_d74 = fVar21 * fVar42 + fVar34 * fVar52 + fVar48 * fVar40 + fVar46 * fVar51;
                fStack_d70 = fVar21 * fVar54 + fVar34 * fVar33 + fVar48 * fVar22 + fVar46 * fVar44;
                fStack_d6c = fVar21 * fVar28 + fVar34 * fVar28 + fVar48 * fVar28 +
                             fVar46 * fRam000000014686609c;
                local_d68 = fVar36 * fVar45 + fVar49 * fVar19 + fVar23 * fVar56 + fVar46 * fVar50;
                fStack_d64 = fVar36 * fVar42 + fVar49 * fVar52 + fVar23 * fVar40 + fVar46 * fVar51;
                fStack_d60 = fVar36 * fVar54 + fVar49 * fVar33 + fVar23 * fVar22 + fVar46 * fVar44;
                fStack_d5c = fVar36 * fVar28 + fVar49 * fVar28 + fVar23 * fVar28 +
                             fVar46 * fRam000000014686609c;
                local_d58 = fStack_d34 * fVar45 + local_d38 * fVar19 + fStack_d30 * fVar56 +
                            fRam000000014686609c * fVar50;
                fStack_d54 = fStack_d34 * fVar42 + local_d38 * fVar52 + fStack_d30 * fVar40 +
                             fRam000000014686609c * fVar51;
                fStack_d50 = fStack_d34 * fVar54 + local_d38 * fVar33 + fStack_d30 * fVar22 +
                             fRam000000014686609c * fVar44;
                fStack_d4c = fStack_d34 * fVar28 + local_d38 * fVar28 + fStack_d30 * fVar28 +
                             fRam000000014686609c * fRam000000014686609c;
                FMatrix::RemoveScaling(&local_d88);
                fVar46 = fStack_dfc;
                fVar28 = fStack_e00;
                fVar22 = fStack_e04;
                fVar21 = local_e08;
                fVar19 = (float)(-(uint)(_DAT_1468660f0 <= local_e08) &
                                 (_DAT_1468660e0 ^ (uint)fVar38) ^ _DAT_1468660e0);
                fVar39 = (float)(-(uint)(fRam00000001468660f4 <= fStack_e04) &
                                 (uRam00000001468660e4 ^ (uint)fVar41) ^ uRam00000001468660e4);
                fVar42 = (float)(-(uint)(fRam00000001468660f8 <= fStack_e00) &
                                 (uRam00000001468660e8 ^ (uint)fVar43) ^ uRam00000001468660e8);
                local_d88 = local_d88 * fVar19;
                fStack_d80 = fStack_d80 * fVar19;
                fStack_d84 = fStack_d84 * fVar19;
                fStack_d70 = fStack_d70 * fVar39;
                fStack_d74 = fStack_d74 * fVar39;
                local_d78 = local_d78 * fVar39;
                fStack_d60 = fStack_d60 * fVar42;
                local_d68 = local_d68 * fVar42;
                fStack_d64 = fStack_d64 * fVar42;
                FQuat::FQuat(&local_dd8,&local_d88);
                local_e18 = 0x322bcc77;
                auVar31._0_4_ = local_dd8 * local_dd8 + fStack_dd0 * fStack_dd0;
                auVar31._4_4_ = fStack_dd4 * fStack_dd4 + fStack_dcc * fStack_dcc;
                auVar31._8_4_ = fStack_dd0 * fStack_dd0 + local_dd8 * local_dd8;
                auVar31._12_4_ = fStack_dcc * fStack_dcc + fStack_dd4 * fStack_dd4;
                fVar38 = auVar31._4_4_ + auVar31._0_4_;
                fVar41 = auVar31._8_4_ + auVar31._4_4_;
                fVar43 = auVar31._12_4_ + auVar31._8_4_;
                fVar33 = auVar31._0_4_ + auVar31._12_4_;
                auVar1._4_4_ = fVar41;
                auVar1._0_4_ = fVar38;
                auVar1._8_4_ = fVar43;
                auVar1._12_4_ = fVar33;
                auVar30 = rsqrtps(auVar31,auVar1);
                fVar19 = auVar30._0_4_;
                fVar39 = auVar30._4_4_;
                fVar42 = auVar30._8_4_;
                fVar23 = auVar30._12_4_;
                fVar19 = (_DAT_146866080 - fVar19 * fVar19 * fVar38 * _DAT_146866080) * fVar19 +
                         fVar19;
                fVar39 = (fRam0000000146866084 - fVar39 * fVar39 * fVar41 * fRam0000000146866084) *
                         fVar39 + fVar39;
                fVar42 = (fRam0000000146866088 - fVar42 * fVar42 * fVar43 * fRam0000000146866088) *
                         fVar42 + fVar42;
                fVar23 = (fRam000000014686608c - fVar23 * fVar23 * fVar33 * fRam000000014686608c) *
                         fVar23 + fVar23;
                fVar45 = 0.0;
                fStack_de0 = (float)(((uint)(((fRam0000000146866088 -
                                              fVar42 * fVar42 * fVar43 * fRam0000000146866088) *
                                              fVar42 + fVar42) * fStack_dd0) ^ uRam0000000146866078)
                                     & -(uint)(1e-08 <= fVar43) ^ uRam0000000146866078);
                fStack_ddc = (float)(((uint)(((fRam000000014686608c -
                                              fVar23 * fVar23 * fVar33 * fRam000000014686608c) *
                                              fVar23 + fVar23) * fStack_dcc) ^ uRam000000014686607c)
                                     & -(uint)(1e-08 <= fVar33) ^ uRam000000014686607c);
                local_de8 = CONCAT44(((uint)(((fRam0000000146866084 -
                                              fVar39 * fVar39 * fVar41 * fRam0000000146866084) *
                                              fVar39 + fVar39) * fStack_dd4) ^ uRam0000000146866074)
                                     & -(uint)(1e-08 <= fVar41) ^ uRam0000000146866074,
                                     ((uint)(((_DAT_146866080 -
                                              fVar19 * fVar19 * fVar38 * _DAT_146866080) * fVar19 +
                                             fVar19) * local_dd8) ^ _DAT_146866070) &
                                     -(uint)(1e-08 <= fVar38) ^ _DAT_146866070);
                fVar50 = local_d58;
                fVar51 = fStack_d54;
                fVar44 = fStack_d50;
              }
              local_dd8 = fVar50;
              fStack_dd4 = fVar51;
              fStack_dd0 = fVar44;
              fStack_dcc = fVar45;
              pfVar14 = (float *)FUN_142cc1550(lVar16,&local_d88,0);
              fVar43 = fRam0000000146866098;
              fVar41 = fRam0000000146866094;
              fVar38 = _DAT_146866090;
              auVar30 = *(undefined1 (*) [16])(pfVar14 + 8);
              fVar19 = auVar30._0_4_;
              fVar39 = auVar30._4_4_;
              fVar42 = auVar30._8_4_;
              fVar23 = auVar30._12_4_;
              auVar32._0_4_ = (float)((uint)fVar19 & _DAT_146866130);
              auVar32._4_4_ = (float)((uint)fVar39 & uRam0000000146866134);
              auVar32._8_4_ = (float)((uint)fVar42 & uRam0000000146866138);
              auVar32._12_4_ = (float)((uint)fVar23 & uRam000000014686613c);
              auVar25._4_4_ = -(uint)(fRam0000000146866144 < auVar32._4_4_);
              auVar25._0_4_ = -(uint)(_DAT_146866140 < auVar32._0_4_);
              auVar25._8_4_ = -(uint)(fRam0000000146866148 < auVar32._8_4_);
              auVar25._12_4_ = -(uint)(fRam000000014686614c < auVar32._12_4_);
              iVar10 = movmskps((int)lVar16,auVar25);
              fVar33 = _DAT_1468b5b80;
              fVar34 = fRam00000001468b5b84;
              fVar36 = fRam00000001468b5b88;
              fVar37 = fRam00000001468b5b8c;
              fVar40 = _DAT_1468b5b70;
              fVar47 = fRam00000001468b5b74;
              fVar48 = fRam00000001468b5b78;
              fVar49 = fRam00000001468b5b7c;
              fVar52 = _DAT_1468b5b90;
              fVar54 = fRam00000001468b5b94;
              fVar56 = fRam00000001468b5b98;
              fVar59 = fRam00000001468b5b9c;
              if (iVar10 != 0) {
                fVar40 = *pfVar14 * _DAT_146866150;
                fVar47 = pfVar14[1] * fRam0000000146866154;
                fVar48 = pfVar14[2] * fRam0000000146866158;
                fVar49 = pfVar14[3] * fRam000000014686615c;
                auVar30 = rcpps(auVar32,auVar30);
                fVar33 = auVar30._0_4_;
                fVar34 = auVar30._4_4_;
                fVar36 = auVar30._8_4_;
                fVar37 = auVar30._12_4_;
                fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar19;
                fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar39;
                fVar36 = (fVar36 + fVar36) - fVar36 * fVar36 * fVar42;
                fVar37 = (fVar37 + fVar37) - fVar37 * fVar37 * fVar23;
                fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar19;
                fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar39;
                fVar36 = (fVar36 + fVar36) - fVar36 * fVar36 * fVar42;
                fVar37 = (fVar37 + fVar37) - fVar37 * fVar37 * fVar23;
                fVar52 = (float)((-(uint)((float)((uint)fVar19 & _DAT_146866130) <= _DAT_146866140)
                                  & (uint)fVar33 ^ (uint)fVar33) & _DAT_1468660a0);
                fVar54 = (float)((-(uint)((float)((uint)fVar39 & uRam0000000146866134) <=
                                         fRam0000000146866144) & (uint)fVar34 ^ (uint)fVar34) &
                                uRam00000001468660a4);
                fVar56 = (float)((-(uint)((float)((uint)fVar42 & uRam0000000146866138) <=
                                         fRam0000000146866148) & (uint)fVar36 ^ (uint)fVar36) &
                                uRam00000001468660a8);
                fVar59 = (float)((-(uint)((float)((uint)fVar23 & uRam000000014686613c) <=
                                         fRam000000014686614c) & (uint)fVar37 ^ (uint)fVar37) &
                                uRam00000001468660ac);
                fVar33 = pfVar14[4] * fVar52;
                fVar34 = pfVar14[5] * fVar54;
                fVar36 = pfVar14[6] * fVar56;
                fVar37 = pfVar14[7] * fVar59;
                fVar19 = fVar36 * fVar47 - fVar34 * fVar48;
                fVar39 = fVar33 * fVar48 - fVar36 * fVar40;
                fVar42 = fVar34 * fVar40 - fVar33 * fVar47;
                fVar23 = fVar37 * fVar49 - fVar37 * fVar49;
                fVar19 = fVar19 + fVar19;
                fVar39 = fVar39 + fVar39;
                fVar42 = fVar42 + fVar42;
                fVar23 = fVar23 + fVar23;
                fVar33 = (float)((uint)(0.0 - ((fVar42 * fVar47 - fVar39 * fVar48) +
                                              fVar49 * fVar19 + fVar33)) & _DAT_1468660a0);
                fVar34 = (float)((uint)(0.0 - ((fVar19 * fVar48 - fVar42 * fVar40) +
                                              fVar49 * fVar39 + fVar34)) & uRam00000001468660a4);
                fVar36 = (float)((uint)(0.0 - ((fVar39 * fVar40 - fVar19 * fVar47) +
                                              fVar49 * fVar42 + fVar36)) & uRam00000001468660a8);
                fVar37 = (float)((uint)(0.0 - ((fVar23 * fVar49 - fVar23 * fVar49) +
                                              fVar49 * fVar23 + fVar37)) & uRam00000001468660ac);
              }
              auVar26._4_4_ = fVar22;
              auVar26._0_4_ = fVar21;
              auVar26._8_4_ = fVar28;
              auVar26._12_4_ = fVar46;
              auVar3._4_4_ = fVar54;
              auVar3._0_4_ = fVar52;
              auVar3._8_4_ = fVar56;
              auVar3._12_4_ = fVar59;
              auVar30 = minps(auVar26,auVar3);
              auVar27._4_4_ = -(uint)(auVar30._4_4_ < fRam00000001468660f4);
              auVar27._0_4_ = -(uint)(auVar30._0_4_ < _DAT_1468660f0);
              auVar27._8_4_ = -(uint)(auVar30._8_4_ < fRam00000001468660f8);
              auVar27._12_4_ = -(uint)(auVar30._12_4_ < fRam00000001468660fc);
              iVar10 = movmskps((int)pfVar14,auVar27);
              if (iVar10 == 0) {
                fVar52 = fVar52 * fVar50;
                fVar54 = fVar54 * fVar51;
                fVar56 = fVar56 * fVar44;
                fVar59 = fVar59 * fVar45;
                fVar19 = fVar56 * fVar47 - fVar54 * fVar48;
                fVar39 = fVar52 * fVar48 - fVar56 * fVar40;
                fVar42 = fVar54 * fVar40 - fVar52 * fVar47;
                fVar23 = fVar59 * fVar49 - fVar59 * fVar49;
                fVar19 = fVar19 + fVar19;
                fVar39 = fVar39 + fVar39;
                fVar42 = fVar42 + fVar42;
                fVar23 = fVar23 + fVar23;
                local_e08 = (fVar42 * fVar47 - fVar39 * fVar48) + fVar49 * fVar19 + fVar52 + fVar33;
                fStack_e04 = (fVar19 * fVar48 - fVar42 * fVar40) + fVar49 * fVar39 + fVar54 + fVar34
                ;
                fStack_e00 = (fVar39 * fVar40 - fVar19 * fVar47) + fVar49 * fVar42 + fVar56 + fVar36
                ;
                fStack_dfc = (fVar23 * fVar49 - fVar23 * fVar49) + fVar49 * fVar23 + fVar59 + fVar37
                ;
              }
              else {
                fVar39 = fVar47 + fVar47;
                fVar42 = fVar48 + fVar48;
                fVar23 = (fVar40 + fVar40) * fVar40;
                fVar19 = fVar49 * (fVar40 + fVar40);
                fVar53 = (fVar49 * fVar42 + fVar40 * fVar39) * fVar52;
                fVar55 = (fVar19 + fVar47 * fVar42) * fVar54;
                fVar57 = (fVar49 * fVar39 + fVar40 * fVar42) * fVar56;
                fVar37 = fVar54 * (fVar40 * fVar39 - fVar49 * fVar42);
                fVar51 = fVar56 * (fVar47 * fVar42 - fVar19);
                fVar45 = fVar52 * (fVar40 * fVar42 - fVar49 * fVar39);
                fVar19 = (float)((uint)((_DAT_146866090 - (fVar42 * fVar48 + fVar39 * fVar47)) *
                                       fVar52) & _DAT_1468660a0);
                fVar42 = (float)((uint)((fRam0000000146866094 - (fVar42 * fVar48 + fVar23)) * fVar54
                                       ) & uRam00000001468660a4);
                fVar21 = (float)((uint)((fRam0000000146866098 - (fVar39 * fVar47 + fVar23)) * fVar56
                                       ) & uRam00000001468660a8);
                fVar28 = (float)((uint)((fRam000000014686609c - (fVar23 + fVar23)) * fVar59) &
                                uRam00000001468660ac);
                fVar22 = local_de8._4_4_ + local_de8._4_4_;
                fVar23 = fStack_de0 + fStack_de0;
                local_df8 = (float *)CONCAT44(fVar34,fVar33);
                fStack_dec = fRam000000014686609c;
                fVar46 = ((float)local_de8 + (float)local_de8) * (float)local_de8;
                fVar39 = ((float)local_de8 + (float)local_de8) * fStack_ddc;
                fVar47 = (fVar23 * fStack_ddc + fVar22 * (float)local_de8) * local_e08;
                fVar48 = (fVar39 + fVar23 * local_de8._4_4_) * fStack_e04;
                fVar49 = (fVar22 * fStack_ddc + fVar23 * (float)local_de8) * fStack_e00;
                fVar50 = fStack_e04 * (fVar22 * (float)local_de8 - fVar23 * fStack_ddc);
                fVar44 = fStack_e00 * (fVar23 * local_de8._4_4_ - fVar39);
                fVar40 = local_e08 * (fVar23 * (float)local_de8 - fVar22 * fStack_ddc);
                fVar39 = (float)((uint)((_DAT_146866090 -
                                        (fVar23 * fStack_de0 + fVar22 * local_de8._4_4_)) *
                                       local_e08) & _DAT_1468660a0);
                fVar23 = (float)((uint)((fRam0000000146866094 - (fVar23 * fStack_de0 + fVar46)) *
                                       fStack_e04) & uRam00000001468660a4);
                fVar22 = (float)((uint)((fRam0000000146866098 - (fVar22 * local_de8._4_4_ + fVar46))
                                       * fStack_e00) & uRam00000001468660a8);
                fVar46 = (float)((uint)((fRam000000014686609c - (fVar46 + fVar46)) * fStack_dfc) &
                                uRam00000001468660ac);
                local_dc8 = fVar47 * fVar37 + fVar39 * fVar19 + fVar40 * fVar57 + fVar46 * fVar33;
                fStack_dc4 = fVar47 * fVar42 + fVar39 * fVar53 + fVar40 * fVar51 + fVar46 * fVar34;
                fStack_dc0 = fVar47 * fVar55 + fVar39 * fVar45 + fVar40 * fVar21 + fVar46 * fVar36;
                fStack_dbc = fVar47 * fVar28 + fVar39 * fVar28 + fVar40 * fVar28 +
                             fVar46 * fRam000000014686609c;
                local_db8 = fVar23 * fVar37 + fVar50 * fVar19 + fVar48 * fVar57 + fVar46 * fVar33;
                fStack_db4 = fVar23 * fVar42 + fVar50 * fVar53 + fVar48 * fVar51 + fVar46 * fVar34;
                fStack_db0 = fVar23 * fVar55 + fVar50 * fVar45 + fVar48 * fVar21 + fVar46 * fVar36;
                fStack_dac = fVar23 * fVar28 + fVar50 * fVar28 + fVar48 * fVar28 +
                             fVar46 * fRam000000014686609c;
                local_da8 = fVar44 * fVar37 + fVar49 * fVar19 + fVar22 * fVar57 + fVar46 * fVar33;
                fStack_da4 = fVar44 * fVar42 + fVar49 * fVar53 + fVar22 * fVar51 + fVar46 * fVar34;
                fStack_da0 = fVar44 * fVar55 + fVar49 * fVar45 + fVar22 * fVar21 + fVar46 * fVar36;
                fStack_d9c = fVar44 * fVar28 + fVar49 * fVar28 + fVar22 * fVar28 +
                             fVar46 * fRam000000014686609c;
                local_d98 = fStack_dd4 * fVar37 + local_dd8 * fVar19 + fStack_dd0 * fVar57 +
                            fRam000000014686609c * fVar33;
                fStack_d94 = fStack_dd4 * fVar42 + local_dd8 * fVar53 + fStack_dd0 * fVar51 +
                             fRam000000014686609c * fVar34;
                fStack_d90 = fStack_dd4 * fVar55 + local_dd8 * fVar45 + fStack_dd0 * fVar21 +
                             fRam000000014686609c * fVar36;
                fStack_d8c = fStack_dd4 * fVar28 + local_dd8 * fVar28 + fStack_dd0 * fVar28 +
                             fRam000000014686609c * fRam000000014686609c;
                fStack_df0 = fVar36;
                FMatrix::RemoveScaling(&local_dc8);
                fVar19 = (float)(-(uint)(_DAT_1468660f0 <= fVar52 * local_e08) &
                                 (_DAT_1468660e0 ^ (uint)fVar38) ^ _DAT_1468660e0);
                fVar39 = (float)(-(uint)(fRam00000001468660f4 <= fVar54 * fStack_e04) &
                                 (uRam00000001468660e4 ^ (uint)fVar41) ^ uRam00000001468660e4);
                fVar42 = (float)(-(uint)(fRam00000001468660f8 <= fVar56 * fStack_e00) &
                                 (uRam00000001468660e8 ^ (uint)fVar43) ^ uRam00000001468660e8);
                local_dc8 = local_dc8 * fVar19;
                fStack_dc4 = fStack_dc4 * fVar19;
                fStack_dc0 = fStack_dc0 * fVar19;
                fStack_db0 = fStack_db0 * fVar39;
                fStack_db4 = fStack_db4 * fVar39;
                local_db8 = local_db8 * fVar39;
                fStack_da0 = fStack_da0 * fVar42;
                local_da8 = local_da8 * fVar42;
                fStack_da4 = fStack_da4 * fVar42;
                FQuat::FQuat(&local_dd8,&local_dc8);
                fStack_dfc = 0.0;
                local_e18 = 0x322bcc77;
                local_e08 = local_d98;
                fStack_e04 = fStack_d94;
                fStack_e00 = fStack_d90;
              }
              if ((char)*(uint *)(lVar11 + 0x218) < '\0') {
                fVar19 = *(float *)(lVar11 + 0x238);
              }
              else {
                fVar19 = *(float *)(param_1 + 0x670);
              }
              if ((*(uint *)(lVar11 + 0x218) & 0x40) == 0) {
                fVar39 = *(float *)(param_1 + 0x66c);
              }
              else {
                fVar39 = *(float *)(lVar11 + 0x234);
              }
              fVar20 = fVar20 * (1.0 - local_e08 * fVar39);
              fVar35 = fVar35 * (local_e08 * fVar39 + 1.0);
              fVar39 = (float)local_e30 - fStack_e04 * fVar19;
              fVar42 = local_e30._4_4_ + fStack_e00 * fVar19;
              fVar19 = local_e20;
            }
            local_6d4 = (float)((uint)local_6d4 | 0x2000000);
            local_11c = fVar39 * 2.0 - 1.0;
            local_118 = fVar42 * 2.0 - 1.0;
          }
          if (local_e38 != '\0') {
            if (*(char *)(param_1 + 0x674) != '\0') {
              fVar39 = *(float *)(param_1 + 0x660);
              if (*DAT_146866500 <= 0.0) {
                if ((*(byte *)(lVar11 + 0x218) & 2) != 0) {
                  fVar39 = *(float *)(lVar11 + 0x220);
                }
              }
              else {
                fVar39 = (float)FUN_140a34b50(&DAT_1468664f0,0);
              }
              fVar35 = (fVar35 - fVar39) * fVar19 + fVar39;
            }
            local_1b4 = *(undefined4 *)(param_1 + 0x65c);
            if (*DAT_146866518 <= 0.0) {
              if ((*(byte *)(lVar11 + 0x218) & 4) != 0) {
                local_1b4 = *(undefined4 *)(lVar11 + 0x224);
              }
            }
            else {
              local_1b4 = FUN_140a34b50(&DAT_146866508,0);
            }
            local_6d4 = (float)((uint)local_6d4 | 0x70000);
            local_1b0 = *DAT_146866578;
            local_1b8 = fVar35;
          }
          if (local_e37 != '\0') {
            if (*(char *)(param_1 + 0x674) != '\0') {
              fVar35 = *(float *)(param_1 + 0x668);
              if (0.0 < *DAT_146866548) {
                if ((*(byte *)(lVar11 + 0x218) & 0x10) != 0) {
                  fVar35 = *(float *)(lVar11 + 0x22c);
                }
              }
              else {
                fVar35 = (float)FUN_140a34b50(&DAT_146866538,0);
              }
              fVar20 = (fVar20 - fVar35) * fVar19 + fVar35;
            }
            local_2d4 = *(undefined4 *)(param_1 + 0x664);
            if (*DAT_146866560 <= 0.0) {
              if ((*(byte *)(lVar11 + 0x218) & 0x20) != 0) {
                local_2d4 = *(undefined4 *)(lVar11 + 0x230);
              }
            }
            else {
              local_2d4 = FUN_140a34b50(&DAT_146866550,0);
            }
            local_6dc = local_6dc | 0xc;
            local_2d8 = fVar20;
          }
          FUN_142fc8dc0(param_3,local_6e8,0x3f800000);
          FUN_140a294c0(local_6e8);
        }
      }
      FUN_140a294c0(local_ce8);
      if (bVar7) {
        uVar58 = *(undefined4 *)(param_1 + 0x12a0);
        goto LAB_140a45a99;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x12a0) = 0;
LAB_140a45a99:
  *(undefined4 *)(param_3 + 0xd8) = uVar58;
  return;
}



// FUNCTION 140a45af0 FUN_140a45af0 body=744 status=ok
// SIG undefined FUN_140a45af0(void)

void FUN_140a45af0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  if (param_3 == 0) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 0xe68);
  if (lVar1 == 0) {
    return;
  }
  if (((*(char *)(lVar1 + 0x248) == '\x06') && (*(char *)(lVar1 + 0x249) == '\0')) &&
     (*(longlong *)(lVar1 + 0x178) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    return;
  }
  if (*(char *)(lVar1 + 0x13a0) == '\x03') {
    cVar3 = '\x02';
  }
  else if (*(char *)(lVar1 + 0x13a0) == '\x01') {
    cVar3 = '\x03';
  }
  else {
    if ((*(byte *)(lVar1 + 0x2ac0) & 0x20) == 0) {
LAB_140a45bf4:
      bVar2 = false;
    }
    else {
      if (((*(char *)(lVar1 + 0x248) == '\x06') && (*(char *)(lVar1 + 0x249) == '\0')) &&
         (*(longlong *)(lVar1 + 0x178) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) goto LAB_140a45bf4;
      bVar2 = true;
    }
    cVar3 = '\x01';
    if (bVar2) {
      cVar3 = '\x04';
    }
  }
  if (*(char *)(param_1 + 0x1e0) == cVar3) goto LAB_140a45da8;
  local_88 = 0;
  uStack_70 = 0;
  local_68 = local_68 & 0xffffff0000000000;
  uStack_60 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  uStack_50 = 0;
  local_48._0_4_ = (uint)local_48 & 0xffff0000;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_30 = 0;
  local_28 = local_28 & 0xffffffff00000000;
  *(char *)(param_1 + 0x1e0) = cVar3;
  *(undefined2 *)(param_1 + 0xa0) = 1;
  uStack_80 = 0;
  local_78._0_4_ = (uint)local_78 & 0xffff0000;
  local_78 = CONCAT44(0x41200000,(uint)local_78);
  local_48 = CONCAT44(0x41200000,(uint)local_48);
  if (cVar3 == '\x02') {
    local_88 = (uint)*(undefined8 *)(param_1 + 0x110);
    uStack_80 = *(undefined8 *)(param_1 + 0x118);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(ulonglong *)(param_1 + 0x130);
    uStack_60 = *(undefined8 *)(param_1 + 0x138);
    local_58 = *(ulonglong *)(param_1 + 0x140);
    uStack_50 = *(undefined8 *)(param_1 + 0x148);
    local_48 = *(undefined8 *)(param_1 + 0x150);
    uStack_40 = *(undefined8 *)(param_1 + 0x158);
    local_38 = *(undefined4 *)(param_1 + 0x160);
    uStack_34 = *(uint *)(param_1 + 0x164);
    uVar7 = *(undefined4 *)(param_1 + 0x168);
    uVar8 = *(undefined4 *)(param_1 + 0x16c);
    uVar5 = (undefined4)*(undefined8 *)(param_1 + 0x170);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x170) >> 0x20);
LAB_140a45d5f:
    uStack_30 = CONCAT44(uVar8,uVar7);
    local_28 = CONCAT44(uVar6,uVar5);
  }
  else {
    if (cVar3 == '\x03') {
      local_88 = (uint)*(undefined8 *)(param_1 + 0xa8);
      uStack_80 = *(undefined8 *)(param_1 + 0xb0);
      local_78 = *(undefined8 *)(param_1 + 0xb8);
      uStack_70 = *(undefined8 *)(param_1 + 0xc0);
      local_68 = *(ulonglong *)(param_1 + 200);
      uStack_60 = *(undefined8 *)(param_1 + 0xd0);
      local_58 = *(ulonglong *)(param_1 + 0xd8);
      uStack_50 = *(undefined8 *)(param_1 + 0xe0);
      local_48 = *(undefined8 *)(param_1 + 0xe8);
      uStack_40 = *(undefined8 *)(param_1 + 0xf0);
      local_38 = *(undefined4 *)(param_1 + 0xf8);
      uStack_34 = *(uint *)(param_1 + 0xfc);
      uVar7 = *(undefined4 *)(param_1 + 0x100);
      uVar8 = *(undefined4 *)(param_1 + 0x104);
      uVar5 = (undefined4)*(undefined8 *)(param_1 + 0x108);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x108) >> 0x20);
      goto LAB_140a45d5f;
    }
    if (cVar3 == '\x04') {
      local_88 = (uint)*(undefined8 *)(param_1 + 0x178);
      uStack_80 = *(undefined8 *)(param_1 + 0x180);
      local_78 = *(undefined8 *)(param_1 + 0x188);
      uStack_70 = *(undefined8 *)(param_1 + 400);
      local_68 = *(ulonglong *)(param_1 + 0x198);
      uStack_60 = *(undefined8 *)(param_1 + 0x1a0);
      local_58 = *(ulonglong *)(param_1 + 0x1a8);
      uStack_50 = *(undefined8 *)(param_1 + 0x1b0);
      local_48 = *(undefined8 *)(param_1 + 0x1b8);
      uStack_40 = *(undefined8 *)(param_1 + 0x1c0);
      local_38 = *(undefined4 *)(param_1 + 0x1c8);
      uStack_34 = *(uint *)(param_1 + 0x1cc);
      uVar7 = *(undefined4 *)(param_1 + 0x1d0);
      uVar8 = *(undefined4 *)(param_1 + 0x1d4);
      uVar5 = (undefined4)*(undefined8 *)(param_1 + 0x1d8);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
      goto LAB_140a45d5f;
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | local_88 & 0xf;
  *(undefined8 *)(param_1 + 0x38) = uStack_80;
  *(undefined8 *)(param_1 + 0x40) = local_78;
  *(undefined8 *)(param_1 + 0x48) = uStack_70;
  *(ulonglong *)(param_1 + 0x50) = local_68;
  *(undefined8 *)(param_1 + 0x58) = uStack_60;
  *(ulonglong *)(param_1 + 0x60) = local_58;
  *(undefined8 *)(param_1 + 0x68) = uStack_50;
  *(undefined8 *)(param_1 + 0x70) = local_48;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x7c) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 0x80) = local_38;
  *(uint *)(param_1 + 0x84) = uStack_34;
  *(undefined8 *)(param_1 + 0x88) = uStack_30;
  *(ulonglong *)(param_1 + 0x90) = local_28;
LAB_140a45da8:
  FUN_142fd1880(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a45de0 FUN_140a45de0 body=510 status=ok
// SIG undefined FUN_140a45de0(void)

void FUN_140a45de0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_142fd1880();
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0xb4) & 0x40) == 0)) {
    uVar2 = FUN_140a2e230(param_1,param_3);
    uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x120);
    fVar3 = (float)FRichCurve::Eval(uVar1,uVar2,0);
    uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa8);
    fVar4 = (float)FRichCurve::Eval(uVar1,uVar2,0);
    fVar6 = *(float *)(param_3 + 0x3c);
    fVar5 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
    if (ABS(fVar6) < ABS(fVar5)) {
      fVar5 = fVar6;
    }
    fVar6 = fVar6 - fVar5;
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + 360.0;
    }
    if (180.0 < fVar6) {
      fVar6 = fVar6 - 360.0;
    }
    if (*(char *)(param_1 + 0x19c) == '\0') {
      uVar2 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1a0),fVar3,param_2,
                               *(undefined4 *)(param_1 + 0x198));
      *(undefined4 *)(param_1 + 0x1a0) = uVar2;
      fVar5 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1a4),fVar4,param_2,
                                      *(undefined4 *)(param_1 + 0x198));
    }
    else {
      *(undefined1 *)(param_1 + 0x19c) = 0;
      fVar5 = fVar6;
      if (fVar3 <= fVar6) {
        fVar5 = fVar3;
      }
      *(float *)(param_1 + 0x1a0) = fVar5;
      fVar5 = fVar6;
      if (fVar6 <= fVar4) {
        fVar5 = fVar4;
      }
    }
    *(float *)(param_1 + 0x1a4) = fVar5;
    fVar3 = *(float *)(param_1 + 0x1a0);
    if ((*(float *)(param_1 + 0x1a0) <= fVar6) && (fVar3 = fVar5, fVar6 <= fVar5)) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(param_3 + 0x68);
    fVar5 = fVar6 + fVar3;
    *(float *)(param_3 + 0x3c) = fVar3;
    if (*(float *)(param_1 + 0x1a4) < fVar5) {
      *(float *)(param_3 + 0x68) = fVar6 - (fVar5 - *(float *)(param_1 + 0x1a4));
      return;
    }
    if (fVar5 < *(float *)(param_1 + 0x1a0)) {
      *(float *)(param_3 + 0x68) = (*(float *)(param_1 + 0x1a0) - fVar5) + fVar6;
    }
  }
  return;
}



// FUNCTION 140a45fe0 FUN_140a45fe0 body=781 status=ok
// SIG undefined FUN_140a45fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a45fe0(longlong param_1,float param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_cc8 [32];
  undefined8 local_ca8;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  undefined4 uStack_c98;
  undefined4 uStack_c94;
  undefined4 local_c90;
  undefined4 local_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 local_c78;
  uint local_c74;
  undefined1 local_c70;
  undefined4 local_c6c;
  undefined1 local_c68 [1496];
  longlong local_690;
  longlong local_680;
  undefined8 local_668;
  uint local_660;
  undefined1 local_658 [1280];
  float local_158;
  float local_154;
  longlong local_80;
  longlong local_70;
  ulonglong local_58;
  
  if (param_3 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_cc8;
  local_ca8 = 0;
  uStack_ca0 = 0;
  uStack_c9c = 0;
  local_c90 = 0x42b40000;
  local_c74 = local_c74 & 0xfffffffe | 2;
  local_c78 = 0x3faaaaab;
  uStack_c98 = 0;
  uStack_c94 = 0;
  local_c88 = 0x42b40000;
  uStack_c84 = 0x44000000;
  uStack_c80 = 0;
  uStack_c7c = 0x4a000000;
  local_c70 = 0;
  local_c6c = 0;
  FUN_142741540(local_c68);
  local_660 = local_660 & 0xfffffffe;
  local_668 = 0;
  FUN_140a3d5e0(param_1,param_2,*(undefined8 *)(param_1 + 0x48),&local_ca8);
  *(uint *)(param_3 + 0xb4) = *(uint *)(param_3 + 0xb4) & 0xfffffffe;
  *(undefined8 *)(param_3 + 0x30) = local_ca8;
  *(undefined4 *)(param_3 + 0x38) = uStack_ca0;
  *(ulonglong *)(param_3 + 0x3c) = CONCAT44(uStack_c98,uStack_c9c);
  *(undefined4 *)(param_3 + 0x44) = uStack_c94;
  *(undefined4 *)(param_3 + 0x48) = local_c90;
  *(uint *)(param_3 + 0xb4) = *(uint *)(param_3 + 0xb4) | local_c74 & 1;
  *(undefined4 *)(param_3 + 0xb0) = local_c78;
  FUN_142fc8dc0(param_3,local_c68,0x3f800000);
  *(float *)(param_1 + 0x54) = param_2 + *(float *)(param_1 + 0x54);
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    cVar2 = FUN_141111730();
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x50) != '\0') {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(float *)(lVar3 + 0xdc4) == 0.0) goto LAB_140a46240;
      fVar4 = *(float *)(param_1 + 0x54) / *(float *)(lVar3 + 0xdc4);
      if (0.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = 0.0;
      }
      fVar4 = 1.0 - fVar4;
    }
    else {
      if (*(char *)(param_1 + 0x50) == '\0') {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(float *)(lVar3 + 0xdc0) == 0.0) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = *(float *)(param_1 + 0x54) / *(float *)(lVar3 + 0xdc0);
        if (0.0 <= fVar4) {
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 0.0;
        }
      }
    }
    if (0.0 < fVar4) {
      FUN_140a25aa0(local_658,lVar3 + 0x7c0);
      local_158 = local_158 * fVar4;
      local_154 = local_154 * fVar4;
      FUN_142fc8dc0(param_3,local_658,0x3f800000);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
  }
LAB_140a46240:
  if (*(char *)(param_1 + 0x59) != '\0') {
    if (*(char *)(param_1 + 0x88) == '\0') {
      bVar1 = *(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x80);
    }
    else {
      bVar1 = *(float *)(param_1 + 0x80) <= 0.0;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        bVar1 = *(float *)(param_1 + 0xc0) <= *(float *)(param_1 + 0xbc);
      }
      else {
        bVar1 = *(float *)(param_1 + 0xbc) <= 0.0;
      }
      if (bVar1) {
        *(undefined1 *)(param_1 + 0x59) = 0;
      }
    }
  }
  if (local_680 != 0) {
    FMemory::Free();
  }
  if (local_690 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a462f0 FUN_140a462f0 body=1770 status=ok
// SIG undefined FUN_140a462f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a462f0(longlong param_1,float param_2,longlong param_3)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  float local_490;
  undefined8 local_488;
  float local_480;
  float local_478;
  undefined1 local_468 [16];
  undefined1 local_458 [880];
  char local_e8;
  ulonglong local_d8;
  
  if (param_3 == 0) {
    return;
  }
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  if (*(longlong *)(param_3 + 0x28) == 0) {
    return;
  }
  plVar7 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
    plVar8 = plVar7;
    if (lVar5 != 0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar8 = *(longlong **)(lVar5 + 0x938);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_142dc1ad0(local_468);
      cVar3 = FUN_142dcd6e0(plVar8,local_468,0);
      if (((cVar3 != '\0') && (local_e8 == '\x02')) &&
         (lVar5 = FWeakObjectPtr::Get(local_458), lVar5 != 0)) {
        lVar4 = FWeakObjectPtr::Get(local_458);
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x118) + 0x168);
        if (lVar5 == 0) {
          local_490 = DAT_1468b5d98;
          puVar6 = &local_498;
          local_498 = _DAT_1468b5d90;
        }
        else {
          puVar6 = &local_488;
          local_480 = *(float *)(lVar5 + 0x228);
          local_488 = *(undefined8 *)(lVar5 + 0x220);
        }
        local_498 = *puVar6;
        fVar12 = *(float *)(param_3 + 0x30) - (float)local_498;
        fVar14 = *(float *)(param_3 + 0x34) - (float)((ulonglong)local_498 >> 0x20);
        local_490 = *(float *)(puVar6 + 1);
        fVar11 = *(float *)(param_3 + 0x38) - *(float *)(puVar6 + 1);
        if (fVar14 * fVar14 + fVar12 * fVar12 + fVar11 * fVar11 <
            *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8)) {
          *(longlong *)(param_1 + 0xa0) = *(longlong *)(lVar4 + 0x118);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    fVar11 = local_478;
    fVar12 = local_478;
    fVar14 = local_478;
    fVar10 = local_488._4_4_;
    fVar16 = (float)local_488;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x168);
    if (lVar5 == 0) {
      local_490 = DAT_1468b5d98;
      puVar6 = &local_498;
      local_498 = _DAT_1468b5d90;
    }
    else {
      puVar6 = &local_488;
      local_480 = (float)*(undefined4 *)(lVar5 + 0x228);
      local_488 = *(undefined8 *)(lVar5 + 0x220);
    }
    local_498 = *puVar6;
    local_490 = *(float *)(puVar6 + 1);
    local_480 = local_490 - *(float *)(param_3 + 0x38);
    local_488 = CONCAT44((float)((ulonglong)local_498 >> 0x20) - *(float *)(param_3 + 0x34),
                         (float)local_498 - *(float *)(param_3 + 0x30));
    puVar6 = (undefined8 *)FVector::Rotation(&local_488,&local_498);
    local_488 = *(undefined8 *)(param_3 + 0x3c);
    fVar10 = (float)((ulonglong)local_488 >> 0x20);
    local_498 = *puVar6;
    local_490 = *(float *)(puVar6 + 1);
    local_480 = *(float *)(param_3 + 0x44);
    fVar14 = (float)local_498 - (float)local_488;
    fVar11 = local_490 - local_480;
    fVar12 = (float)((ulonglong)local_498 >> 0x20) - fVar10;
    if (180.0 < fVar14) {
      fVar14 = fVar14 - 360.0;
    }
    if (fVar14 < -180.0) {
      fVar14 = fVar14 + 360.0;
    }
    if (180.0 < fVar12) {
      fVar12 = fVar12 - 360.0;
    }
    if (fVar12 < -180.0) {
      fVar12 = fVar12 + 360.0;
    }
    if (180.0 < fVar11) {
      fVar11 = fVar11 - 360.0;
    }
    fVar16 = (float)local_488;
    if (fVar11 < -180.0) {
      fVar11 = fVar11 + 360.0;
    }
  }
  fVar2 = local_480;
  plVar8 = *(longlong **)(param_1 + 0xa0);
  lVar5 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar9 = plVar7;
    if (bVar1) {
      plVar7 = (longlong *)plVar8[0x121];
      plVar9 = plVar8;
    }
    if (((plVar7 == (longlong *)0x0) || (cVar3 = FUN_140a36de0(), cVar3 != '\0')) &&
       ((plVar9 == (longlong *)0x0 ||
        (cVar3 = (**(code **)(*plVar9 + 0x950))(plVar9), cVar3 == '\0')))) {
      lVar5 = *(longlong *)(param_1 + 0xa0);
      lVar4 = *(longlong *)(lVar5 + 0x168);
      if (lVar4 == 0) {
        local_498 = _DAT_1468b5d90;
        local_490 = DAT_1468b5d98;
      }
      else {
        local_498 = *(undefined8 *)(lVar4 + 0x220);
        local_490 = *(float *)(lVar4 + 0x228);
      }
      fVar15 = *(float *)(param_3 + 0x30) - (float)local_498;
      fVar13 = *(float *)(param_3 + 0x34) - (float)((ulonglong)local_498 >> 0x20);
      local_490 = *(float *)(param_3 + 0x38) - local_490;
      if (((fVar15 * fVar15 + fVar13 * fVar13 + local_490 * local_490 <=
            *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0xb4)) &&
          (ABS(fVar12) < *(float *)(param_1 + 0xac) || ABS(fVar12) == *(float *)(param_1 + 0xac)))
         && (ABS(fVar14) < *(float *)(param_1 + 0xb0) || ABS(fVar14) == *(float *)(param_1 + 0xb0)))
      goto LAB_140a467e7;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    lVar5 = 0;
  }
LAB_140a467e7:
  if (lVar5 != 0) {
    param_2 = param_2 * *(float *)(param_1 + 0xb8);
    fVar13 = -param_2;
    fVar15 = fVar13;
    if ((fVar13 <= fVar14) && (fVar15 = fVar14, param_2 <= fVar14)) {
      fVar15 = param_2;
    }
    fVar14 = fVar13;
    if ((fVar13 <= fVar12) && (fVar14 = fVar12, param_2 <= fVar12)) {
      fVar14 = param_2;
    }
    if ((fVar13 <= fVar11) && (fVar13 = fVar11, param_2 <= fVar11)) {
      fVar13 = param_2;
    }
    fVar15 = fVar15 + fVar16;
    fVar11 = (float)(int)(fVar15 * 0.0027777778) * 360.0;
    if (ABS(fVar15) < ABS(fVar11)) {
      fVar11 = fVar15;
    }
    fVar15 = fVar15 - fVar11;
    if (fVar15 < 0.0) {
      fVar15 = fVar15 + 360.0;
    }
    if (180.0 < fVar15) {
      fVar15 = fVar15 - 360.0;
    }
    fVar14 = fVar14 + fVar10;
    fVar11 = (float)(int)(fVar14 * 0.0027777778) * 360.0;
    if (ABS(fVar14) < ABS(fVar11)) {
      fVar11 = fVar14;
    }
    fVar14 = fVar14 - fVar11;
    if (fVar14 < 0.0) {
      fVar14 = fVar14 + 360.0;
    }
    if (180.0 < fVar14) {
      fVar14 = fVar14 - 360.0;
    }
    fVar13 = fVar13 + fVar2;
    local_488 = CONCAT44(fVar14,fVar15);
    fVar11 = (float)(int)(fVar13 * 0.0027777778) * 360.0;
    if (ABS(fVar13) < ABS(fVar11)) {
      fVar11 = fVar13;
    }
    fVar13 = fVar13 - fVar11;
    if (fVar13 < 0.0) {
      fVar13 = fVar13 + 360.0;
    }
    if (180.0 < fVar13) {
      fVar13 = fVar13 - 360.0;
    }
    *(undefined8 *)(param_3 + 0x3c) = local_488;
    *(float *)(param_3 + 0x44) = fVar13;
  }
  return;
}



// FUNCTION 140a469e0 FUN_140a469e0 body=278 status=ok
// SIG undefined FUN_140a469e0(void)

void FUN_140a469e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_48 [4];
  undefined1 local_38 [48];
  
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_142fcadd0(param_3,local_38,local_48);
    fVar3 = (float)(int)(local_48[0] * 0.0027777778) * 360.0;
    if (ABS(local_48[0]) < ABS(fVar3)) {
      fVar3 = local_48[0];
    }
    local_48[0] = local_48[0] - fVar3;
    if (local_48[0] < 0.0) {
      local_48[0] = local_48[0] + 360.0;
    }
    if (180.0 < local_48[0]) {
      local_48[0] = local_48[0] - 360.0;
    }
    fVar3 = *(float *)(param_1 + 0x40);
    if ((*(float *)(param_1 + 0x40) <= local_48[0]) &&
       (fVar3 = *(float *)(param_1 + 0x44), local_48[0] <= *(float *)(param_1 + 0x44))) {
      fVar3 = local_48[0];
    }
    fVar1 = (float)UCurveFloat::GetFloatValue
                             (*(undefined8 *)(param_1 + 0x30),
                              *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x48));
    fVar3 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x38),fVar3);
    fVar2 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
    FUN_142fcd3e0(param_3,fVar2 + fVar1 * fVar3,0);
  }
  return;
}



// FUNCTION 140a46b00 FUN_140a46b00 body=542 status=ok
// SIG undefined FUN_140a46b00(void)

void FUN_140a46b00(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_3 != 0) {
    dVar6 = _guard_xfg_dispatch_icall_nop
                      ((double)(*(float *)(*(longlong *)(param_3 + 0x28) + 0x30) *
                                *(float *)(param_1 + 0x38) * param_2 + *(float *)(param_1 + 0x58)),
                       360.0);
    *(float *)(param_1 + 0x58) = (float)dVar6;
    fVar5 = *(float *)(*(longlong *)(param_3 + 0x28) + 0x2c) + *(float *)(param_1 + 0x5c);
    fVar9 = *(float *)(param_1 + 0x44);
    if ((*(float *)(param_1 + 0x44) <= fVar5) &&
       (fVar9 = fVar5, *(float *)(param_1 + 0x48) <= fVar5)) {
      fVar9 = *(float *)(param_1 + 0x48);
    }
    *(float *)(param_1 + 0x5c) = fVar9;
    fVar8 = *(float *)(param_1 + 0x60) -
            *(float *)(*(longlong *)(param_3 + 0x28) + 0x34) * *(float *)(param_1 + 0x40) * param_2;
    fVar5 = 1.0;
    if ((1.0 <= fVar8) && (fVar5 = fVar8, *(float *)(param_1 + 0x3c) <= fVar8)) {
      fVar5 = *(float *)(param_1 + 0x3c);
    }
    *(float *)(param_1 + 0x60) = fVar5;
    dVar6 = _guard_xfg_dispatch_icall_nop((double)(float)dVar6,360.0);
    fVar5 = 0.0;
    fVar8 = 0.0;
    *(float *)(param_1 + 0x58) = (float)dVar6;
    *(ulonglong *)(param_3 + 0x3c) = CONCAT44((float)dVar6,fVar9);
    *(undefined4 *)(param_3 + 0x44) = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
    if (lVar2 != 0) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar2 = *(longlong *)(lVar2 + 0x1d18), lVar2 != 0)) {
        lVar4 = FUN_1413ffd50();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          fVar5 = *(float *)(param_1 + 0x4c);
          fVar8 = *(float *)(param_1 + 0x54);
        }
      }
    }
    uVar7 = __libm_sse2_sincosf_(*(float *)(param_1 + 0x58) * 0.017453292);
    fVar9 = *(float *)(param_1 + 0x34);
    lVar2 = *(longlong *)(param_3 + 0x28);
    fVar10 = -(fVar5 + *(float *)(param_1 + 0x30));
    fVar5 = *(float *)(param_1 + 0x60);
    fVar1 = *(float *)(lVar2 + 0x58);
    *(ulonglong *)(param_3 + 0x30) =
         CONCAT44(fVar5 * fVar10 * (float)uVar7 + *(float *)(lVar2 + 0x54),
                  fVar5 * fVar10 * (float)((ulonglong)uVar7 >> 0x20) + *(float *)(lVar2 + 0x50));
    *(float *)(param_3 + 0x38) = fVar5 * (fVar8 + fVar9) + fVar1;
  }
  return;
}



// FUNCTION 140a46d20 FUN_140a46d20 body=680 status=ok
// SIG undefined FUN_140a46d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a46d20(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_668 [32];
  undefined1 local_648 [1280];
  float local_148;
  float local_144;
  longlong local_70;
  longlong local_60;
  ulonglong local_48;
  
  if (param_3 == 0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  *(undefined1 *)(param_1 + 0x640) = 0;
  lVar1 = *(longlong *)(param_3 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if ((0.0 < *(float *)(param_1 + 0x38)) && (0.0 < *(float *)(param_1 + 0x3c))) {
    fVar5 = *(float *)(param_1 + 0x38) - param_2 / *(float *)(param_1 + 0x3c);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x38) = fVar5;
    if (0.0 < fVar5) {
      FUN_142fc8dc0(param_3);
    }
  }
  if (*(char *)(lVar1 + 0xc3) != '\0') {
    if (*(char *)(param_1 + 0xc58) == '\0') {
      *(undefined1 *)(param_1 + 0xc58) = 1;
      fVar5 = *(float *)(lVar1 + 0xc4);
      *(float *)(param_1 + 0xc5c) = fVar5;
      if (fVar5 <= 0.0) {
        *(undefined4 *)(param_1 + 0xc60) = 0x3f800000;
      }
      else {
        *(undefined4 *)(param_1 + 0xc60) = 0;
      }
      goto LAB_140a46e80;
    }
    if (*(char *)(lVar1 + 0xc3) != '\0') goto LAB_140a46e80;
  }
  if ((*(char *)(param_1 + 0xc58) != '\0') &&
     (fVar5 = *(float *)(lVar1 + 0xc4), *(float *)(param_1 + 0xc5c) = -fVar5, -fVar5 == 0.0)) {
    *(undefined4 *)(param_1 + 0xc60) = 0;
    *(undefined1 *)(param_1 + 0xc58) = 0;
  }
LAB_140a46e80:
  cVar3 = *(char *)(param_1 + 0xc58);
  if ((cVar3 != '\0') && (fVar5 = *(float *)(param_1 + 0xc5c), fVar5 != 0.0)) {
    fVar6 = param_2 / fVar5 + *(float *)(param_1 + 0xc60);
    if (0.0 <= fVar6) {
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
    }
    else {
      fVar6 = 0.0;
    }
    *(float *)(param_1 + 0xc60) = fVar6;
    if ((0.0 <= fVar5) || (fVar6 != 0.0)) {
      if ((0.0 < fVar5) && (fVar6 == 1.0)) {
        *(undefined4 *)(param_1 + 0xc5c) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xc58) = 0;
      cVar3 = '\0';
    }
  }
  if (cVar3 != '\0') {
    FUN_140a25aa0(local_648,lVar1 + 0xd0);
    fVar5 = *(float *)(param_1 + 0xc60);
    if (fVar5 < 1.0) {
      local_148 = local_148 * fVar5;
      local_144 = local_144 * fVar5;
    }
    *(undefined1 *)(param_1 + 0x640) = 1;
    FUN_142fc8dc0(param_3,local_648,0x3f800000);
    FUN_140a296b0(param_1 + 0x650,local_648);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a46fd0 FUN_140a46fd0 body=1138 status=ok
// SIG undefined FUN_140a46fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a46fd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_478 [32];
  float local_458;
  float local_454;
  float local_450;
  float local_448;
  float local_444;
  float local_438;
  float local_434;
  float local_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [880];
  char local_98;
  ulonglong local_88;
  
  if (param_3 == 0) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  lVar6 = *(longlong *)(param_3 + 0x28);
  if (lVar6 == 0) {
    return;
  }
  lVar4 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = *(longlong *)(lVar6 + 0xa0);
  if (lVar4 == 0) {
LAB_140a47408:
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140a47408;
  cVar3 = FUN_140d01d50(lVar4);
  if (cVar3 == '\0') {
    return;
  }
  lVar5 = *(longlong *)(lVar4 + 0x910);
  if ((lVar5 == 0) || (*(longlong *)(lVar6 + 0xb8) == 0)) goto LAB_140a47408;
  fVar9 = (float)FUN_14307dab0();
  bVar2 = true;
  if ((fVar9 <= 1.0) && (*(float *)(param_1 + 0x30) <= fVar9 && fVar9 != *(float *)(param_1 + 0x30))
     ) {
    FUN_142dc1ad0(local_418);
    cVar3 = FUN_142dcd6e0(lVar5,local_418,0);
    if (((cVar3 != '\0') && (local_98 == '\x02')) &&
       (lVar6 = FWeakObjectPtr::Get(local_408), lVar6 != 0)) {
      lVar6 = FWeakObjectPtr::Get(local_408);
      cVar3 = *(char *)(lVar6 + 0x479);
      if (cVar3 != '\x01') {
        fVar10 = 0.0;
        fVar12 = 0.0;
        lVar6 = FUN_140d00370(lVar4,0);
        if (lVar6 != 0) {
          fVar10 = *(float *)(lVar6 + 0x8c);
          fVar12 = *(float *)(lVar6 + 0x90);
        }
        if (cVar3 == '\x02') {
          fVar11 = 0.0;
        }
        else {
          fVar11 = fVar10;
          if ((cVar3 == '\x03') && (fVar11 = fVar12, fVar12 <= fVar10)) {
            fVar11 = fVar10;
            fVar12 = fVar10;
          }
        }
        uVar7 = FWeakObjectPtr::Get(local_408);
        uVar8 = FRotator::Vector(param_3 + 0x3c,&local_458);
        FUN_142dce5a0(uVar7,&local_438,param_3 + 0x30,uVar8);
        local_458 = local_438 - *(float *)(param_3 + 0x30);
        local_454 = local_434 - *(float *)(param_3 + 0x34);
        local_450 = local_430 - *(float *)(param_3 + 0x38);
        FVector::Rotation(&local_458,&local_448);
        cVar3 = FUN_140d01800(lVar4);
        if (cVar3 != '\0') {
          FUN_140cff3c0(lVar4,*(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x48),local_428,
                        &local_458);
          fVar10 = (float)(int)(local_458 * 0.0027777778) * 360.0;
          if (ABS(local_458) < ABS(fVar10)) {
            fVar10 = local_458;
          }
          fVar10 = local_458 - fVar10;
          if (fVar10 < 0.0) {
            fVar10 = fVar10 + 360.0;
          }
          if (180.0 < fVar10) {
            fVar10 = fVar10 - 360.0;
          }
          local_448 = local_448 - fVar10;
        }
        fVar10 = (fVar9 - *(float *)(param_1 + 0x30)) / (1.0 - *(float *)(param_1 + 0x30));
        if (0.0 <= fVar10) {
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
        }
        else {
          fVar10 = 0.0;
        }
        fVar10 = (float)FUN_141f86520(fVar10,1);
        if (0.0 < fVar11) {
          bVar2 = false;
          fVar1 = *(float *)(param_3 + 0x3c);
          fVar11 = fVar11 - *(float *)(param_1 + 0x34);
          if (fVar11 < ABS(local_448 - fVar1)) {
            if (local_448 - fVar1 <= 0.0) {
              local_448 = fVar1 - fVar11;
            }
            else {
              local_448 = fVar11 + fVar1;
            }
          }
          fVar11 = (local_448 - fVar1) * fVar10 + fVar1;
          *(float *)(param_3 + 0x3c) = fVar11;
          *(float *)(param_1 + 0x34) = ABS(fVar11 - fVar1) + *(float *)(param_1 + 0x34);
        }
        if ((0.0 < fVar12) &&
           (fVar11 = *(float *)(param_3 + 0x40), ABS(local_444 - fVar11) < fVar12)) {
          *(float *)(param_3 + 0x40) = (local_444 - fVar11) * fVar10 + fVar11;
        }
        if (!bVar2) goto LAB_140a473ef;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
LAB_140a473ef:
  *(float *)(param_1 + 0x30) = fVar9;
  return;
}



// FUNCTION 140a47450 FUN_140a47450 body=558 status=ok
// SIG undefined FUN_140a47450(void)

void FUN_140a47450(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  if (param_3 == 0) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = *(longlong *)(lVar1 + 0x10e8);
  if (lVar4 == 0) {
    return;
  }
  cVar3 = FUN_140c491e0(lVar1);
  if ((cVar3 == '\0') &&
     ((((cVar3 = FUN_140c469f0(lVar1), cVar3 == '\0' ||
        (*(longlong **)(lVar1 + 0x4c8) == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x4c8) + 0x558))(), cVar3 == '\0')) ||
      (*(char *)(param_1 + 0x38) == '\0')))) {
    cVar3 = FUN_140c491e0(lVar1);
    if (((cVar3 != '\0') ||
        ((*(longlong **)(lVar1 + 0x4c8) != (longlong *)0x0 &&
         (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x4c8) + 0x558))(), cVar3 != '\0')))) &&
       ((*(char *)(param_1 + 0x38) != '\0' || (*(float *)(param_1 + 0x34) <= 0.0))))
    goto LAB_140a475f2;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (ABS(*(float *)(lVar4 + 0x44)) <= 1e-08) {
      fVar9 = 0.0;
      uVar8 = 0;
    }
    else {
      fVar9 = 1.0 / *(float *)(lVar4 + 0x44);
      uVar8 = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 1;
    fVar5 = param_2 + *(float *)(param_1 + 0x30);
    fVar9 = 0.0;
    *(float *)(param_1 + 0x30) = fVar5;
    if ((fVar5 < *(float *)(lVar4 + 0x48)) && (*(float *)(param_1 + 0x34) <= 0.0))
    goto LAB_140a475f2;
    if (1e-08 < ABS(*(float *)(lVar4 + 0x40))) {
      fVar9 = 1.0 / *(float *)(lVar4 + 0x40);
    }
    uVar8 = 0x3f800000;
  }
  uVar8 = FMath::FInterpConstantTo(*(undefined4 *)(param_1 + 0x34),uVar8,param_2,fVar9);
  *(undefined4 *)(param_1 + 0x34) = uVar8;
LAB_140a475f2:
  fVar5 = *(float *)(param_1 + 0x34);
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    fVar5 = (float)UCurveFloat::GetFloatValue(*(longlong *)(lVar4 + 0x30),fVar5);
  }
  fVar9 = *(float *)(lVar4 + 0x3c);
  if (*(char *)(lVar4 + 0x38) != '\0') {
    fVar6 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
    fVar7 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
    fVar9 = (fVar6 + fVar9) / fVar7;
  }
  fVar6 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
  FUN_142fcd3e0(param_3,fVar6 * ((fVar9 - 1.0) * fVar5 + 1.0),0);
  return;
}



// FUNCTION 140a47680 FUN_140a47680 body=421 status=ok
// SIG undefined FUN_140a47680(void)

void FUN_140a47680(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_68 [96];
  
  if (param_3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x48) * 0x24;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x24) {
      pfVar4 = (float *)FUN_142dac080(lVar5,local_68,*(undefined4 *)(param_1 + 0x70));
      fVar7 = fVar7 + *pfVar4;
      fVar9 = fVar9 + pfVar4[1];
      fVar8 = fVar8 + pfVar4[2];
    }
    fVar2 = *(float *)(param_1 + 0x34);
    fVar3 = *(float *)(param_1 + 0x38);
    *(float *)(param_3 + 0x5c) = fVar7 * *(float *)(param_1 + 0x30) + *(float *)(param_3 + 0x5c);
    fVar7 = 0.0;
    *(float *)(param_3 + 0x60) = fVar2 * fVar9 + *(float *)(param_3 + 0x60);
    *(float *)(param_3 + 100) = fVar8 * fVar3 + *(float *)(param_3 + 100);
    fVar8 = 0.0;
    lVar5 = *(longlong *)(param_1 + 0x60);
    lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x68) * 0x24;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x24) {
      pfVar4 = (float *)FUN_142dac080(lVar5,local_68,*(undefined4 *)(param_1 + 0x70));
      fVar6 = fVar6 + *pfVar4;
      fVar7 = fVar7 + pfVar4[1];
      fVar8 = fVar8 + pfVar4[2];
    }
    fVar9 = *(float *)(param_1 + 0x50);
    fVar2 = *(float *)(param_1 + 0x58);
    *(float *)(param_3 + 0x68) = fVar7 * *(float *)(param_1 + 0x54) + *(float *)(param_3 + 0x68);
    *(float *)(param_3 + 0x6c) = fVar8 * fVar2 + *(float *)(param_3 + 0x6c);
    *(float *)(param_3 + 0x70) = fVar9 * fVar6 + *(float *)(param_3 + 0x70);
    *(float *)(param_1 + 0x70) = param_2 + *(float *)(param_1 + 0x70);
  }
  return;
}



// FUNCTION 140a47830 FUN_140a47830 body=1540 status=ok
// SIG undefined FUN_140a47830(void)

void FUN_140a47830(longlong param_1,undefined4 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  float *pfVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float local_88;
  undefined1 local_78 [112];
  
  if (param_3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar3 == 0) {
    return;
  }
  lVar7 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    *(undefined1 *)(param_1 + 0x2ac) = 1;
    FUN_141271820(lVar3,param_1,param_1 + 0x250);
  }
  cVar5 = FUN_14122e820(lVar3);
  if ((cVar5 == '\0') && (cVar5 = FUN_14122ec10(lVar3), cVar5 == '\0')) {
    cVar5 = FUN_14122e8d0(lVar3);
    bVar4 = false;
    if (cVar5 == '\0') goto LAB_140a478f1;
  }
  bVar4 = true;
LAB_140a478f1:
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (bVar4) {
      uVar13 = 0x3f800000;
      uVar20 = *(undefined4 *)(param_1 + 0x44);
      if (*(longlong *)(lVar3 + 0x6b8) != 0) {
        uVar13 = FUN_1430d50b0();
      }
    }
    else {
      uVar20 = *(undefined4 *)(param_1 + 0x48);
      uVar13 = 0;
    }
    fVar10 = (float)FMath::FInterpConstantTo(*(undefined4 *)(param_1 + 0x260),uVar13,param_2,uVar20)
    ;
    *(float *)(param_1 + 0x260) = fVar10;
    if (0.0 < fVar10) {
      fVar19 = *(float *)(param_1 + 0x30);
      fVar12 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
      FUN_142fcd3e0(param_3,fVar12 * ((fVar19 - 1.0) * fVar10 + 1.0),0);
      fVar10 = *(float *)(param_1 + 0x260);
      fVar19 = *(float *)(param_1 + 0x38);
      fVar12 = *(float *)(param_1 + 0x3c);
      *(float *)(param_3 + 0x78) = fVar10 * *(float *)(param_1 + 0x34) + *(float *)(param_3 + 0x78);
      *(float *)(param_3 + 0x7c) = fVar10 * fVar19 + *(float *)(param_3 + 0x7c);
      *(float *)(param_3 + 0x80) = fVar10 * fVar12 + *(float *)(param_3 + 0x80);
    }
  }
  else {
    cVar5 = FUN_14122e820(lVar3);
    if (((cVar5 == '\0') && (cVar5 = FUN_14122e8d0(lVar3), cVar5 == '\0')) &&
       ((*(char *)(param_1 + 0x151) != '\0' || (cVar5 = FUN_14122ec10(lVar3), cVar5 == '\0')))) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    uVar6 = FUN_14122ec10(lVar3);
    FUN_140a40630(param_1,lVar3,param_2,uVar9,*(undefined4 *)(param_1 + 0x50),param_1 + 0x58,
                  param_1 + 0xd8,*(undefined1 *)(param_1 + 0x150),param_1 + 0x264);
    if (*(char *)(param_1 + 0x151) == '\0') {
      fVar10 = *(float *)(param_1 + 0x26c);
      fVar19 = *(float *)(param_1 + 0x268);
      fVar12 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
      if (fVar10 <= fVar19) {
        fVar10 = fVar19;
      }
      FUN_142fcd3e0(param_3,fVar12 + fVar10 * *(float *)(param_1 + 0xd0),0);
      pfVar8 = (float *)FRotator::Quaternion(param_3 + 0x3c,local_78);
      fVar2 = *(float *)(param_1 + 0x3c);
      fVar14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      fVar10 = pfVar8[1];
      fVar19 = *pfVar8;
      fVar12 = pfVar8[2];
      fVar1 = pfVar8[3];
      local_88 = (float)*(undefined8 *)(param_1 + 0x34);
      fVar18 = fVar2 * fVar10 - fVar14 * fVar12;
      fVar17 = local_88 * fVar12 - fVar2 * fVar19;
      fVar18 = fVar18 + fVar18;
      fVar15 = fVar14 * fVar19 - local_88 * fVar10;
      fVar17 = fVar17 + fVar17;
      fVar15 = fVar15 + fVar15;
      fVar16 = *(float *)(param_1 + 0x274);
      if (*(float *)(param_1 + 0x274) <= *(float *)(param_1 + 0x270)) {
        fVar16 = *(float *)(param_1 + 0x270);
      }
      *(float *)(param_3 + 0x30) =
           ((fVar10 * fVar15 - fVar12 * fVar17) + local_88 + fVar1 * fVar18) * fVar16 +
           *(float *)(param_3 + 0x30);
      *(float *)(param_3 + 0x38) =
           ((fVar19 * fVar17 - fVar10 * fVar18) + fVar2 + fVar1 * fVar15) * fVar16 +
           *(float *)(param_3 + 0x38);
      *(float *)(param_3 + 0x34) =
           ((fVar12 * fVar18 - fVar19 * fVar15) + fVar14 + fVar1 * fVar17) * fVar16 +
           *(float *)(param_3 + 0x34);
    }
    else {
      FUN_140a40630(param_1,lVar3,param_2,uVar6,*(undefined4 *)(param_1 + 0x154),param_1 + 0x158,
                    param_1 + 0x1d0,*(undefined1 *)(param_1 + 0x248),param_1 + 0x288);
      fVar10 = *(float *)(param_1 + 0x26c);
      if (*(float *)(param_1 + 0x26c) <= *(float *)(param_1 + 0x268)) {
        fVar10 = *(float *)(param_1 + 0x268);
      }
      fVar19 = *(float *)(param_1 + 0x290);
      if (*(float *)(param_1 + 0x290) <= *(float *)(param_1 + 0x28c)) {
        fVar19 = *(float *)(param_1 + 0x28c);
      }
      if (fVar19 <= fVar10) {
        fVar19 = fVar10;
      }
      fVar10 = (float)UGizmoAxisScaleParameterSource::GetParameter(param_3);
      FUN_142fcd3e0(param_3,fVar10 + fVar19 * *(float *)(param_1 + 0xd0),0);
      pfVar8 = (float *)FRotator::Quaternion(param_3 + 0x3c,local_78);
      fVar2 = *(float *)(param_1 + 0x3c);
      fVar14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      fVar10 = pfVar8[1];
      fVar19 = pfVar8[2];
      fVar12 = *pfVar8;
      local_88 = (float)*(undefined8 *)(param_1 + 0x34);
      fVar18 = fVar2 * fVar10 - fVar14 * fVar19;
      fVar17 = local_88 * fVar19 - fVar2 * fVar12;
      fVar18 = fVar18 + fVar18;
      fVar15 = fVar14 * fVar12 - local_88 * fVar10;
      fVar17 = fVar17 + fVar17;
      fVar15 = fVar15 + fVar15;
      fVar1 = pfVar8[3];
      fVar16 = *(float *)(param_1 + 0x298);
      if (*(float *)(param_1 + 0x298) <= *(float *)(param_1 + 0x294)) {
        fVar16 = *(float *)(param_1 + 0x294);
      }
      fVar11 = *(float *)(param_1 + 0x274);
      if (*(float *)(param_1 + 0x274) <= *(float *)(param_1 + 0x270)) {
        fVar11 = *(float *)(param_1 + 0x270);
      }
      if (fVar16 <= fVar11) {
        fVar16 = fVar11;
      }
      *(float *)(param_3 + 0x30) =
           ((fVar10 * fVar15 - fVar19 * fVar17) + local_88 + fVar18 * fVar1) * fVar16 +
           *(float *)(param_3 + 0x30);
      *(float *)(param_3 + 0x34) =
           ((fVar19 * fVar18 - fVar12 * fVar15) + fVar14 + fVar17 * fVar1) * fVar16 +
           *(float *)(param_3 + 0x34);
      *(float *)(param_3 + 0x38) =
           ((fVar12 * fVar17 - fVar10 * fVar18) + fVar2 + fVar15 * fVar1) * fVar16 +
           *(float *)(param_3 + 0x38);
    }
  }
  return;
}



// FUNCTION 140a47e40 FUN_140a47e40 body=370 status=ok
// SIG undefined FUN_140a47e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a47e40(longlong *param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x690))();
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(lVar2 + 0x1389) == '\0') {
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x168);
      if (lVar2 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar2 + 0x220);
        local_30 = *(float *)(lVar2 + 0x228);
      }
      local_20 = local_30;
      local_28 = local_38;
      local_30 = local_30 + *(float *)(param_1 + 7);
      local_38 = CONCAT44((float)((ulonglong)local_38 >> 0x20) +
                          *(float *)((longlong)param_1 + 0x34),
                          (float)local_38 + *(float *)(param_1 + 6));
      puVar4 = (undefined8 *)
               FUN_140a40d70(param_1,&local_28,param_3,&local_38,(undefined8 *)(param_3 + 0x30),
                             param_2,0);
      *(undefined8 *)(param_3 + 0x30) = *puVar4;
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(puVar4 + 1);
      return;
    }
  }
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



// FUNCTION 140a47fc0 FUN_140a47fc0 body=152 status=ok
// SIG undefined FUN_140a47fc0(void)

void FUN_140a47fc0(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xa0);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140cff230(lVar3);
      if (lVar3 != 0) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x70);
      }
    }
  }
  FUN_142fd1680(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a48060 FUN_140a48060 body=9323 status=ok
// SIG undefined FUN_140a48060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a48060(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  float *pfVar13;
  undefined8 uVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_6a8 [32];
  float *local_688;
  float *local_680;
  float *local_678;
  float local_668;
  float local_664;
  float local_660;
  undefined1 local_658;
  undefined8 local_650;
  float local_648;
  float local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  float local_610;
  float local_608;
  float local_604;
  undefined4 local_600;
  undefined8 local_5f8;
  float local_5f0;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  uint local_5d8;
  float local_5d0;
  float fStack_5cc;
  float local_5c8;
  float local_5c0;
  float fStack_5bc;
  float local_5b8;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  undefined8 local_5a0;
  float local_598;
  undefined8 *local_590;
  undefined8 local_588;
  undefined8 local_580;
  float local_578;
  undefined8 *local_570;
  undefined8 local_568;
  uint local_558;
  uint uStack_554;
  uint uStack_550;
  uint uStack_54c;
  uint local_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  float local_538;
  undefined4 local_534;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined8 local_518;
  float local_510;
  float local_508;
  float local_504;
  float local_500;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  uint local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  uint local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  float local_488;
  undefined8 local_484;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_44c;
  undefined4 local_444;
  longlong *local_440;
  longlong *local_438;
  undefined4 local_428 [4];
  undefined1 local_418 [16];
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined1 local_3f8 [12];
  undefined1 local_3ec [12];
  undefined1 local_3e0 [12];
  undefined1 local_3d4 [12];
  undefined1 local_3c8 [12];
  undefined1 local_3bc [12];
  undefined1 local_3b0 [12];
  undefined1 local_3a4 [12];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [12];
  undefined1 local_36c [12];
  undefined1 local_360 [24];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [64];
  undefined1 local_278 [64];
  undefined1 local_238 [64];
  undefined1 local_1f8 [64];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined1 local_1ac;
  undefined1 local_1a8 [120];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_118 [40];
  float local_f0;
  ulonglong local_e8;
  
  if (param_3 == 0) {
    return;
  }
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  if (param_2 <= 0.0) {
    return;
  }
  if (*(char *)(param_1 + 0x981) != '\0') {
    return;
  }
  plVar7 = (longlong *)FUN_140a34bb0(param_1,param_3);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if ((char)plVar7[0x25d] != '\0') {
    *(undefined4 *)(param_1 + 0xa14) = 0;
    *(undefined1 *)(param_1 + 0xa18) = 1;
    *(undefined1 *)(plVar7 + 0x25d) = 0;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  bVar19 = true;
  if (lVar9 == 0) {
LAB_140a4818c:
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
    if (lVar9 != 0) {
      lVar8 = AGTutorialStepVideo::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        local_570 = (undefined8 *)0x0;
        local_568 = 0;
        FUN_140a24180(lVar9,&local_570,0);
        puVar10 = local_570;
        if (0 < (int)local_568) {
          lVar9 = FUN_142ceeb40(*local_570,1);
          FMemory::Free(puVar10);
          goto LAB_140a48218;
        }
        goto LAB_140a4830d;
      }
    }
LAB_140a48317:
    fVar33 = 0.0;
  }
  else {
    lVar8 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar19 = false;
    }
    if (!bVar19) goto LAB_140a4818c;
    lVar9 = FUN_142ceeb40(*(undefined8 *)(lVar9 + 0x668),1);
LAB_140a48218:
    if (lVar9 == 0) goto LAB_140a48317;
    local_590 = (undefined8 *)0x0;
    local_588 = 0;
    FUN_140a23d80(lVar9,&local_590,0);
    puVar10 = local_590;
    if ((int)local_588 == 0) {
LAB_140a4830d:
      if (puVar10 != (undefined8 *)0x0) goto LAB_140a48312;
      goto LAB_140a48317;
    }
    puVar10 = (undefined8 *)FName::FName(&local_518,L"FullBody",1);
    FUN_142c6e430(*local_590,&local_440,*puVar10);
    if (local_440 == (longlong *)0x0) {
      puVar10 = local_590;
      if (local_438 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_438 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_438)(local_438);
          LOCK();
          piVar2 = (int *)((longlong)local_438 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar10 = local_590;
          if (iVar6 == 1) {
            (**(code **)(*local_438 + 8))(local_438,1);
            puVar10 = local_590;
          }
        }
      }
LAB_140a48312:
      FMemory::Free(puVar10);
      goto LAB_140a48317;
    }
    fVar33 = (float)(**(code **)(*local_440 + 0x58))();
    if (local_438 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_438 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_438)(local_438);
        LOCK();
        piVar2 = (int *)((longlong)local_438 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_438 + 8))(local_438,1);
        }
      }
    }
    FMemory::Free(local_590);
  }
  if (*(int *)(param_1 + 0xa14) != 0) {
    if (fVar33 == 0.0) {
      *(int *)(param_1 + 0xa14) = *(int *)(param_1 + 0xa14) + -1;
      *(undefined1 *)((longlong)plVar7 + 0x1389) = 0;
      *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x9c4);
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x9cc);
      puVar10 = (undefined8 *)FQuat::Rotator(param_1 + 0x9f0,local_3b0);
      *(undefined8 *)(param_3 + 0x3c) = *puVar10;
      *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(puVar10 + 1);
      return;
    }
    *(undefined4 *)(param_1 + 0xa14) = 0;
  }
  *(undefined1 *)((longlong)plVar7 + 0x1389) = 1;
  lVar9 = FUN_140a34300(param_1,param_3);
  bVar19 = *(longlong *)(param_1 + 0xa20) != lVar9;
  *(longlong *)(param_1 + 0xa20) = lVar9;
  local_658 = bVar19;
  if (bVar19) {
    FUN_141271820(plVar7,param_1,param_1 + 0x798);
  }
  lVar9 = *(longlong *)(param_3 + 0x28);
  local_640 = *(float *)(lVar9 + 0x2c);
  fVar39 = *(float *)(lVar9 + 0x30);
  local_5d8 = FUN_141229150(plVar7);
  lVar8 = FUN_140a34300(param_1,param_3);
  if (lVar8 == 0) {
LAB_140a48457:
    uVar17 = 0;
  }
  else if (*(char *)(lVar8 + 0x6ba) == '\0') {
    if (*(char *)(lVar8 + 0x6a8) == '\0') goto LAB_140a48457;
    uVar17 = 2;
  }
  else {
    uVar17 = 1;
    if (*(char *)(lVar8 + 0x6a8) != '\0') {
      uVar17 = 3;
    }
  }
  if (*(int *)(param_1 + 0x750) != *(int *)(param_1 + 0x77c)) {
    lVar8 = *(longlong *)(param_1 + 0x788);
    if (*(longlong *)(param_1 + 0x788) == 0) {
      lVar8 = param_1 + 0x780;
    }
    iVar6 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x790) - 1U & uVar17) * 4);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x748);
      do {
        lVar16 = (longlong)iVar6 * 0xa8;
        if (*(char *)(lVar16 + lVar8) == (char)uVar17) {
          if (((iVar6 != -1) && (lVar8 = (longlong)iVar6 * 0xa8 + lVar8, lVar8 != 0)) &&
             ((float *)(lVar8 + 8) != (float *)0x0)) {
            local_1b8 = *(float *)(lVar8 + 8);
            local_1b4 = *(float *)(lVar8 + 0xc);
            local_1b0 = *(float *)(lVar8 + 0x10);
            local_1ac = *(undefined1 *)(lVar8 + 0x14);
            FRuntimeFloatCurve::FRuntimeFloatCurve(local_1a8,lVar8 + 0x18);
            local_130 = *(undefined4 *)(lVar8 + 0x90);
            local_12c = *(undefined4 *)(lVar8 + 0x94);
            local_128 = *(undefined4 *)(lVar8 + 0x98);
            goto LAB_140a48541;
          }
          break;
        }
        iVar6 = *(int *)(lVar16 + 0xa0 + lVar8);
      } while (iVar6 != -1);
    }
  }
  local_1b8 = *(float *)(param_1 + 0x6b0);
  local_1b4 = *(float *)(param_1 + 0x6b4);
  local_1ac = *(undefined1 *)(param_1 + 0x6bc);
  local_1b0 = *(float *)(param_1 + 0x6b8);
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_1a8,param_1 + 0x6c0);
  local_130 = *(undefined4 *)(param_1 + 0x738);
  local_12c = *(undefined4 *)(param_1 + 0x73c);
  local_128 = *(undefined4 *)(param_1 + 0x740);
LAB_140a48541:
  if (fVar33 == 0.0) {
    *(undefined1 *)(param_1 + 0xa18) = 1;
  }
  else {
    local_1b0 = local_1b0 * fVar33;
    local_1b4 = local_1b4 * fVar33;
    local_1b8 = local_1b8 * fVar33;
  }
  if (*(float *)(param_1 + 0x840) <= local_1b8 && local_1b8 != *(float *)(param_1 + 0x840)) {
    local_640 = 0.0;
    fVar39 = 0.0;
  }
  if (*(char *)(lVar9 + 0xc0) != '\0') {
    *(undefined1 *)(plVar7 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x980) = 1;
    *(undefined4 *)(param_1 + 0x928) = 0;
    *(undefined4 *)(param_1 + 0x918) = 0;
  }
  local_668 = (float)DAT_1464aa798;
  local_608 = DAT_1464aa798._4_4_;
  local_664 = DAT_1464aa798._4_4_;
  local_604 = DAT_1464aa7a0;
  local_660 = DAT_1464aa7a0;
  local_5b0 = (float)DAT_1464aa798;
  local_5ac = DAT_1464aa798._4_4_;
  local_5a8 = DAT_1464aa7a0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_140a313c0(param_1,param_3,&local_668,&local_5b0);
  }
  fVar34 = local_5b0;
  local_608 = local_5ac;
  local_604 = local_5a8;
  uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x68);
  fVar33 = (float)FRichCurve::Eval(uVar11);
  local_678 = (float *)CONCAT44(local_678._4_4_,param_2);
  local_680 = (float *)CONCAT44(local_680._4_4_,0x41200000);
  local_688 = (float *)CONCAT44(local_688._4_4_,fVar33 * *(float *)(param_1 + 0x904));
  puVar10 = (undefined8 *)FUN_140a2fa20(local_36c,param_1 + 0x8c0,&local_668,param_1 + 0x934);
  *(undefined8 *)(param_1 + 0x8c0) = *puVar10;
  *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(puVar10 + 1);
  local_518 = *puVar10;
  local_660 = *(float *)(puVar10 + 1);
  local_668 = (float)local_518;
  local_664 = (float)((ulonglong)local_518 >> 0x20);
  local_510 = local_660;
  pauVar12 = (undefined1 (*) [16])
             (**(code **)(*(longlong *)plVar7[0x2d] + 0x420))
                       ((longlong *)plVar7[0x2d],local_118,*(undefined8 *)(param_1 + 0x460),2);
  auVar28 = *pauVar12;
  fVar33 = auVar28._0_4_;
  fVar25 = auVar28._4_4_;
  fVar27 = auVar28._8_4_;
  fVar32 = auVar28._12_4_;
  fVar31 = -fVar25 + -fVar25;
  fVar26 = fVar27 + fVar27;
  local_508 = (fVar25 * fVar31 - fVar27 * fVar26) + 1.0;
  local_500 = fVar33 * fVar26 + fVar32 * fVar31;
  local_504 = fVar32 * fVar26 - fVar33 * fVar31;
  uVar11 = FRotationMatrix::MakeFromX(local_2b8,&local_508);
  FMatrix::ToQuat(uVar11,local_428);
  fVar26 = fVar33 + fVar33;
  fVar31 = -fVar27 + -fVar27;
  local_4d8 = fVar25 * fVar26 + fVar32 * fVar31;
  local_4d4 = (fVar27 * fVar31 - fVar33 * fVar26) + 1.0;
  local_4d0 = fVar32 * fVar26 - fVar25 * fVar31;
  uVar11 = FRotationMatrix::MakeFromYZ(local_278,&local_4d8,&DAT_1464aa798);
  FMatrix::ToQuat(uVar11,local_418);
  uVar11 = FRotationMatrix::MakeFromZX(local_238,&local_668,&DAT_1464aa7a8);
  pfVar13 = (float *)FMatrix::ToQuat(uVar11,local_2c8);
  fVar33 = pfVar13[2];
  fVar25 = fVar33 + fVar33;
  fVar27 = -pfVar13[1];
  fVar27 = fVar27 + fVar27;
  local_4f0 = (pfVar13[1] * fVar27 - fVar33 * fVar25) + 1.0;
  local_4ec = pfVar13[3] * fVar25 - *pfVar13 * fVar27;
  local_4e8 = *pfVar13 * fVar25 + pfVar13[3] * fVar27;
  uVar11 = FRotationMatrix::MakeFromXZ(local_1f8,&local_4f0,&DAT_1464aa798);
  FMatrix::ToQuat(uVar11,&local_5e8);
  if (plVar7[0x2d] == 0) {
    local_444 = DAT_1464aa7b0;
    puVar10 = &local_44c;
    local_44c = DAT_1464aa7a8;
  }
  else {
    puVar10 = (undefined8 *)FUN_142369f10(plVar7[0x2d],local_360);
  }
  local_458 = *puVar10;
  local_450 = *(undefined4 *)(puVar10 + 1);
  local_600 = FUN_140a34cd0(param_1,&local_458,&local_5e8);
  if (bVar19) {
    lVar8 = plVar7[0x2d];
    if (local_1b0 == 0.0) {
      if (lVar8 == 0) {
        local_578 = DAT_1468b5d98;
        puVar10 = &local_580;
        local_580 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        puVar10 = &local_5f8;
        local_5f0 = *(float *)(lVar8 + 0x228);
        local_5f8 = *(undefined8 *)(lVar8 + 0x220);
      }
      local_580 = *puVar10;
      fVar33 = (float)((ulonglong)local_580 >> 0x20);
      local_578 = *(float *)(puVar10 + 1);
      fVar38 = (float)local_580 - *(float *)(param_3 + 0x30);
      fVar37 = fVar33 - *(float *)(param_3 + 0x34);
      fVar36 = local_578 - *(float *)(param_3 + 0x38);
      *(float *)(param_1 + 0x8a4) = -SQRT(fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36);
      fVar25 = fVar38 * local_668 + fVar37 * local_664 + fVar36 * local_660;
      fVar27 = fStack_5e0 + fStack_5e0;
      fVar37 = fVar37 - fVar25 * local_664;
      fVar38 = fVar38 - fVar25 * local_668;
      fVar36 = fVar36 - fVar25 * local_660;
      fVar25 = -fStack_5e4 + -fStack_5e4;
      fVar26 = fVar27 * local_5e8 + fVar25 * fStack_5dc;
      fVar35 = fVar27 * fStack_5dc - fVar25 * local_5e8;
      fVar31 = (fVar25 * fStack_5e4 - fVar27 * fStack_5e0) + 1.0;
      fVar32 = fVar36 * fVar35 - fVar37 * fVar26;
      fVar27 = fVar38 * fVar26 - fVar36 * fVar31;
      fVar25 = fVar37 * fVar31 - fVar38 * fVar35;
      fVar33 = (float)FGenericPlatformMath::Atan2
                                (SQRT(fVar32 * fVar32 + fVar27 * fVar27 + fVar25 * fVar25),
                                 CONCAT44(fVar33,fVar38 * fVar31 + fVar37 * fVar35 + fVar36 * fVar26
                                         ));
      if (fVar38 * (fVar26 * local_664 - fVar35 * local_660) +
          fVar37 * (fVar31 * local_660 - fVar26 * local_668) +
          fVar36 * (fVar35 * local_668 - fVar31 * local_664) < 0.0) {
        fVar33 = -fVar33;
      }
      *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x204);
    }
    else {
      if (lVar8 == 0) {
        local_47c = DAT_1464aa7b0;
        puVar10 = &local_484;
        local_484 = DAT_1464aa7a8;
      }
      else {
        puVar10 = (undefined8 *)FUN_142369f10(lVar8,local_3f8);
      }
      local_5f8 = *puVar10;
      fVar33 = (float)((ulonglong)local_5f8 >> 0x20);
      local_5f0 = *(float *)(puVar10 + 1);
      fVar25 = fVar33 * local_664 + (float)local_5f8 * local_668 + local_5f0 * local_660;
      fVar36 = (float)local_5f8 - fVar25 * local_668;
      fVar37 = local_5f0 - fVar25 * local_660;
      fVar35 = fVar33 - fVar25 * local_664;
      fVar25 = -fStack_5e4 + -fStack_5e4;
      fVar27 = fStack_5e0 + fStack_5e0;
      fVar32 = fVar27 * local_5e8 + fVar25 * fStack_5dc;
      auVar28._4_4_ = fVar33;
      auVar28._0_4_ = fVar35;
      auVar28._8_4_ = fVar33;
      auVar28._12_4_ = fVar33;
      fVar31 = fVar27 * fStack_5dc - fVar25 * local_5e8;
      fVar26 = (fVar25 * fStack_5e4 - fVar27 * fStack_5e0) + 1.0;
      auVar22._4_12_ = auVar28._4_12_;
      fVar27 = fVar37 * fVar31 - fVar32 * fVar35;
      fVar25 = fVar32 * fVar36 - fVar37 * fVar26;
      fVar33 = fVar35 * fVar26 - fVar31 * fVar36;
      auVar22._0_4_ = fVar35 * fVar31 + fVar26 * fVar36 + fVar32 * fVar37;
      fVar33 = (float)FGenericPlatformMath::Atan2
                                (SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar33 * fVar33),
                                 auVar22._0_8_);
      if ((fVar26 * local_660 - fVar32 * local_668) * fVar35 +
          (fVar32 * local_664 - fVar31 * local_660) * fVar36 +
          (fVar31 * local_668 - fVar26 * local_664) * fVar37 < 0.0) {
        fVar33 = -fVar33;
      }
      *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x204);
      *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x1fc);
    }
    *(float *)(param_1 + 0x89c) = fVar33 * 57.295776;
  }
  (**(code **)(*plVar7 + 0x308))(plVar7,&local_5c0);
  fVar26 = local_604;
  fVar32 = local_608;
  fVar33 = local_608 * fStack_5bc + fVar34 * local_5c0 + local_604 * local_5b8;
  local_5c0 = local_5c0 - fVar33 * fVar34;
  fStack_5bc = fStack_5bc - fVar33 * local_608;
  local_5b8 = local_5b8 - fVar33 * local_604;
  FUN_140a36db0(param_1,plVar7);
  pfVar13 = (float *)(param_1 + 0x890);
  fVar33 = *(float *)(param_1 + 0x894);
  fVar25 = *pfVar13;
  fVar27 = *(float *)(param_1 + 0x898);
  if (10000.0 < fVar25 * fVar25 + fVar33 * fVar33 + fVar27 * fVar27) {
    fVar33 = fVar25 * fVar34 + fVar33 * fVar32 + fVar27 * fVar26;
    *pfVar13 = fVar25 - fVar33 * fVar34;
    *(float *)(param_1 + 0x894) = *(float *)(param_1 + 0x894) - fVar33 * fVar32;
    *(float *)(param_1 + 0x898) = *(float *)(param_1 + 0x898) - fVar33 * fVar26;
    FUN_140a34400(pfVar13,&local_5c0,&local_5b0);
  }
  *(ulonglong *)pfVar13 = CONCAT44(fStack_5bc,local_5c0);
  local_688._0_4_ = 0x461c4000;
  *(float *)(param_1 + 0x898) = local_5b8;
  local_680._0_4_ = param_2;
  uVar20 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x838));
  *(undefined4 *)(param_1 + 0x838) = uVar20;
  local_680 = (float *)CONCAT44(local_680._4_4_,param_2);
  local_688 = (float *)CONCAT44(local_688._4_4_,0x447a0000);
  uVar20 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x83c));
  fVar33 = local_640;
  local_638 = *(undefined8 *)(param_1 + 0x468);
  uStack_630 = *(undefined8 *)(param_1 + 0x470);
  local_610 = *(float *)(param_1 + 0x490);
  *(undefined4 *)(param_1 + 0x83c) = uVar20;
  local_628 = *(undefined8 *)(param_1 + 0x478);
  uStack_620 = *(undefined8 *)(param_1 + 0x480);
  local_618 = *(undefined8 *)(param_1 + 0x488);
  if ((*(char *)(param_1 + 0x980) == '\0') &&
     (((local_640 != 0.0 || (fVar39 != 0.0)) || (*(char *)(lVar9 + 0xc1) != '\0')))) {
    *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x214);
  }
  else {
    *(float *)(param_1 + 0x918) = *(float *)(param_1 + 0x918) - param_2;
  }
  cVar4 = FUN_14122ebf0(plVar7);
  if (((cVar4 != '\0') || (*(char *)(param_1 + 0x34c) == '\0')) ||
     (0.0 < *(float *)(param_1 + 0x918))) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  local_5f8 = *(undefined8 *)pfVar13;
  fVar25 = (float)((ulonglong)local_5f8 >> 0x20);
  local_5f0 = *(float *)(param_1 + 0x898);
  fVar25 = fVar25 * fVar25 + (float)local_5f8 * (float)local_5f8 + local_5f0 * local_5f0;
  if (1e-08 < fVar25) {
    auVar28 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
    local_604 = auVar28._0_4_;
    local_604 = local_604 + local_604 * (0.5 - fVar25 * 0.5 * local_604 * local_604);
    local_604 = local_604 + local_604 * (0.5 - fVar25 * 0.5 * local_604 * local_604);
  }
  if (bVar19) {
    uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x350);
    fVar33 = (float)FRichCurve::Eval(uVar11);
    if ((*(char *)(param_1 + 0x980) != '\0') ||
       (((*(char *)(param_1 + 0x450) != '\0' ||
         (cVar4 = FUN_140a36db0(param_1,plVar7), cVar4 == '\0')) &&
        (fVar33 < *(float *)(param_1 + 0x838) || fVar33 == *(float *)(param_1 + 0x838))))) {
      if (plVar7[0x2d] == 0) {
        local_470 = DAT_1464aa7b0;
        puVar10 = &local_478;
        local_478 = DAT_1464aa7a8;
      }
      else {
        puVar10 = (undefined8 *)FUN_142369f10(plVar7[0x2d],local_3e0);
      }
      fVar27 = (float)((ulonglong)*puVar10 >> 0x20);
      local_5a0._0_4_ = (float)*puVar10;
      fVar33 = fVar27 * local_664 + (float)local_5a0 * local_668 +
               *(float *)(puVar10 + 1) * local_660;
      fVar34 = *(float *)(puVar10 + 1) - fVar33 * local_660;
      local_5a0._0_4_ = (float)local_5a0 - fVar33 * local_668;
      fVar27 = fVar27 - fVar33 * local_664;
      fVar32 = fVar27 * fVar27 + (float)local_5a0 * (float)local_5a0 + fVar34 * fVar34;
      fVar33 = fVar27;
      fVar39 = fVar34;
      fVar25 = (float)local_5a0;
      if ((fVar32 != 1.0) &&
         (fVar33 = DAT_1468b5d94, fVar39 = DAT_1468b5d98, fVar25 = DAT_1468b5d90, 1e-08 <= fVar32))
      {
        auVar28 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
        local_608 = auVar28._0_4_;
        local_608 = local_608 + local_608 * (0.5 - fVar32 * 0.5 * local_608 * local_608);
        local_608 = local_608 + local_608 * (0.5 - fVar32 * 0.5 * local_608 * local_608);
        fVar33 = fVar27 * local_608;
        fVar39 = fVar34 * local_608;
        fVar25 = (float)local_5a0 * local_608;
      }
      local_5a0 = CONCAT44(fVar33,fVar25);
      fStack_5cc = (float)((ulonglong)*(undefined8 *)pfVar13 >> 0x20);
      local_650._0_4_ = (float)*(undefined8 *)pfVar13;
      local_5c8 = *(float *)(param_1 + 0x898);
      fVar27 = fStack_5cc * fStack_5cc + (float)local_650 * (float)local_650 + local_5c8 * local_5c8
      ;
      if (fVar27 == 1.0) {
        local_5d0 = (float)local_650;
      }
      else if (1e-08 <= fVar27) {
        auVar28 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
        local_640 = auVar28._0_4_;
        local_640 = local_640 + local_640 * (0.5 - fVar27 * 0.5 * local_640 * local_640);
        local_640 = local_640 + local_640 * (0.5 - fVar27 * 0.5 * local_640 * local_640);
        fStack_5cc = local_640 * fStack_5cc;
        local_5c8 = local_640 * local_5c8;
        local_5d0 = local_640 * (float)local_650;
      }
      else {
        fStack_5cc = DAT_1468b5d94;
        local_5c8 = DAT_1468b5d98;
        local_5d0 = DAT_1468b5d90;
      }
      local_650 = CONCAT44(fStack_5cc,local_5d0);
      local_648 = local_5c8;
      local_598 = fVar39;
      local_4f4 = fVar39;
      puVar10 = (undefined8 *)FUN_140a3a040(local_3d4,&local_650,&local_5a0);
      local_650._4_4_ = fVar33;
      local_650._0_4_ = fVar25;
      if (*(char *)(param_1 + 0x980) == '\0') {
        local_650._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
        local_650._0_4_ = (float)*puVar10;
        fVar39 = *(float *)(puVar10 + 1);
      }
      fVar33 = local_650._4_4_ * local_664 + (float)local_650 * local_668 + fVar39 * local_660;
      local_648 = fVar39 - fVar33 * local_660;
      local_650._0_4_ = (float)local_650 - fVar33 * local_668;
      local_650._4_4_ = local_650._4_4_ - fVar33 * local_664;
      fVar33 = local_650._4_4_ * local_650._4_4_ + (float)local_650 * (float)local_650 +
               local_648 * local_648;
      if (1e-08 < fVar33) {
        auVar28 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        local_488 = auVar28._0_4_;
        local_488 = local_488 + local_488 * (0.5 - fVar33 * 0.5 * local_488 * local_488);
        local_488 = local_488 + local_488 * (0.5 - fVar33 * 0.5 * local_488 * local_488);
        local_648 = local_648 * local_488;
        local_650 = CONCAT44(local_650._4_4_ * local_488,local_488 * (float)local_650);
      }
      fVar33 = fStack_5e0 + fStack_5e0;
      fVar39 = -fStack_5e4 + -fStack_5e4;
      local_4dc = fVar33 * local_5e8 + fVar39 * fStack_5dc;
      local_4e0 = fVar33 * fStack_5dc - fVar39 * local_5e8;
      local_4e4 = (fVar39 * fStack_5e4 - fVar33 * fStack_5e0) + 1.0;
      fVar39 = (float)FUN_140a34400(&local_4e4,&local_650,&local_668);
      pfVar13 = (float *)(param_1 + 0x89c);
      fVar33 = *pfVar13;
      fVar25 = fVar33 - fVar39 * 57.295776;
      if (fVar25 <= 180.0) {
        if (fVar25 < -180.0) {
          fVar33 = fVar33 + 360.0;
          goto LAB_140a4978e;
        }
      }
      else {
        fVar33 = fVar33 - 360.0;
LAB_140a4978e:
        *pfVar13 = fVar33;
      }
      if (*(char *)(param_1 + 0x980) == '\0') {
        uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x3d0);
        FRichCurve::Eval(uVar11);
        fVar33 = (float)FMath::FInterpTo(*pfVar13);
      }
      else {
        local_680 = (float *)CONCAT44(local_680._4_4_,param_2);
        local_688 = (float *)CONCAT44(local_688._4_4_,0x447a0000);
        fVar33 = (float)FUN_1408d8300();
      }
      *pfVar13 = fVar33;
      local_680 = (float *)CONCAT44(local_680._4_4_,param_2);
      local_688 = (float *)CONCAT44(local_688._4_4_,0x447a0000);
      uVar20 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x8a0));
      *(undefined4 *)(param_1 + 0x8a0) = uVar20;
      if ((*(char *)(param_1 + 0x980) != '\0') && (ABS(*pfVar13 - fVar39 * 57.295776) < 5.0)) {
        *(undefined1 *)(param_1 + 0x980) = 0;
      }
    }
  }
  else {
    fVar33 = *(float *)(param_1 + 0x8a0) - fVar33;
    *(undefined4 *)(param_1 + 0x924) = 0;
    fVar25 = (float)(int)(fVar33 * 0.0027777778) * 360.0;
    if (ABS(fVar33) < ABS(fVar25)) {
      fVar25 = fVar33;
    }
    fVar33 = fVar33 - fVar25;
    if (fVar33 < 0.0) {
      fVar33 = fVar33 + 360.0;
    }
    if (180.0 < fVar33) {
      fVar33 = fVar33 - 360.0;
    }
    fVar39 = fVar39 + *(float *)(param_1 + 0x89c);
    *(float *)(param_1 + 0x8a0) = fVar33;
    fVar33 = (float)(int)(fVar39 * 0.0027777778) * 360.0;
    if (ABS(fVar39) < ABS(fVar33)) {
      fVar33 = fVar39;
    }
    fVar39 = fVar39 - fVar33;
    if (fVar39 < 0.0) {
      fVar39 = fVar39 + 360.0;
    }
    if (180.0 < fVar39) {
      fVar39 = fVar39 - 360.0;
    }
    *(float *)(param_1 + 0x89c) = fVar39;
  }
  uVar20 = local_130;
  fVar33 = *(float *)(param_1 + 0x8a0);
  fVar39 = *(float *)(param_1 + 0x208);
  if ((*(float *)(param_1 + 0x208) <= fVar33) &&
     (fVar39 = *(float *)(param_1 + 0x20c), fVar33 <= *(float *)(param_1 + 0x20c))) {
    fVar39 = fVar33;
  }
  *(float *)(param_1 + 0x8a0) = fVar39;
  local_688._0_4_ = 0x447a0000;
  local_680._0_4_ = param_2;
  uVar21 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x8a4));
  local_680._0_4_ = 1000.0;
  local_688._0_4_ = uVar20;
  *(undefined4 *)(param_1 + 0x8a4) = uVar21;
  local_678._0_4_ = param_2;
  puVar10 = (undefined8 *)FUN_140a2f910(local_3c8,param_1 + 0x86c,&DAT_1468b5d90,param_1 + 0x938);
  local_678 = (float *)CONCAT44(local_678._4_4_,param_2);
  local_680 = (float *)CONCAT44(local_680._4_4_,0x447a0000);
  *(undefined8 *)(param_1 + 0x86c) = *puVar10;
  local_688 = (float *)CONCAT44(local_688._4_4_,local_12c);
  *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(puVar10 + 1);
  puVar10 = (undefined8 *)FUN_140a2fe60(local_348,param_1 + 0x880,&DAT_1464aa810,param_1 + 0x944);
  uVar11 = puVar10[1];
  *(undefined8 *)(param_1 + 0x880) = *puVar10;
  *(undefined8 *)(param_1 + 0x888) = uVar11;
  if ((bVar19) || (*(char *)(param_1 + 0x244) != '\0')) {
    local_538 = *(float *)(param_1 + 0x83c) * 57.295776;
    local_534 = *(undefined4 *)(param_1 + 0x838);
    FUN_140a32ca0(param_1,&local_538,&local_638);
    if (bVar19) goto LAB_140a49bdb;
    if (*(char *)(param_1 + 0x244) != '\0') {
      local_f0 = local_610;
      fVar33 = (float)local_618;
      uVar17 = (ulonglong)local_618 >> 0x20;
      local_610 = *(float *)(param_1 + 0x240) + local_610;
      local_638 = CONCAT44(*(float *)(param_1 + 0x21c) + local_638._4_4_,
                           *(undefined4 *)(param_1 + 0x218));
      local_618._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x238) >> 0x20);
      uStack_630 = CONCAT44(*(float *)(param_1 + 0x224) + uStack_630._4_4_,
                            *(float *)(param_1 + 0x220) + (float)uStack_630);
      local_628 = CONCAT44(*(float *)(param_1 + 0x22c) + local_628._4_4_,
                           *(float *)(param_1 + 0x228) + (float)local_628);
      uStack_620 = CONCAT44(*(float *)(param_1 + 0x234) + uStack_620._4_4_,
                            *(float *)(param_1 + 0x230) + (float)uStack_620);
      local_618 = CONCAT44(local_618._4_4_ + (float)uVar17,
                           (float)*(undefined8 *)(param_1 + 0x238) + fVar33);
      goto LAB_140a49bdb;
    }
  }
  local_638 = *(undefined8 *)(param_1 + 0x218);
  uStack_630 = *(undefined8 *)(param_1 + 0x220);
  local_610 = *(float *)(param_1 + 0x240);
  local_628 = *(undefined8 *)(param_1 + 0x228);
  uStack_620 = *(undefined8 *)(param_1 + 0x230);
  local_618 = *(undefined8 *)(param_1 + 0x238);
LAB_140a49bdb:
  uVar20 = *(undefined4 *)(param_1 + 0x210);
  local_688._0_4_ = 0x461c4000;
  local_680._0_4_ = param_2;
  uVar21 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x8f4));
  local_680._0_4_ = 10000.0;
  *(undefined4 *)(param_1 + 0x8f4) = uVar21;
  local_678._0_4_ = param_2;
  local_688._0_4_ = uVar20;
  puVar10 = (undefined8 *)
            FUN_140a2f910(local_3bc,param_1 + 0x8d0,(longlong)&local_638 + 4,param_1 + 0x95c);
  local_680._0_4_ = 10000.0;
  *(undefined8 *)(param_1 + 0x8d0) = *puVar10;
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(puVar10 + 1);
  local_678._0_4_ = param_2;
  local_688._0_4_ = uVar20;
  puVar10 = (undefined8 *)FUN_140a2f910(local_3ec,param_1 + 0x8dc,&local_628,param_1 + 0x968);
  *(undefined8 *)(param_1 + 0x8dc) = *puVar10;
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(puVar10 + 1);
  uVar11 = FRotator::Quaternion((longlong)&uStack_620 + 4,local_338);
  uVar14 = FRotator::Quaternion(param_1 + 0x8e8,local_328);
  local_680._0_4_ = 10000.0;
  local_678._0_4_ = param_2;
  local_688._0_4_ = uVar20;
  uVar11 = FUN_140a2fe60(local_318,uVar14,uVar11,param_1 + 0x974);
  puVar10 = (undefined8 *)FQuat::Rotator(uVar11,local_3a4);
  *(undefined8 *)(param_1 + 0x8e8) = *puVar10;
  *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(puVar10 + 1);
  local_638 = *(undefined8 *)(param_1 + 0x8cc);
  uStack_630 = *(undefined8 *)(param_1 + 0x8d4);
  local_610 = *(float *)(param_1 + 0x8f4);
  local_628 = *(undefined8 *)(param_1 + 0x8dc);
  uStack_620 = *(undefined8 *)(param_1 + 0x8e4);
  local_618 = *(undefined8 *)(param_1 + 0x8ec);
  FUN_140a338f0(param_1);
  uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x248);
  fVar33 = (float)FRichCurve::Eval(uVar11);
  local_628 = CONCAT44(local_628._4_4_,(float)local_628 + fVar33 * *(float *)(param_1 + 0x8fc));
  uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x2c0);
  fVar33 = (float)FRichCurve::Eval(uVar11);
  uStack_630 = CONCAT44(uStack_630._4_4_ + fVar33 * *(float *)(param_1 + 0x900),(float)uStack_630);
  cVar4 = FUN_1430d8750(plVar7);
  if (cVar4 == '\0') {
    uVar20 = *(undefined4 *)(param_1 + 0xfc);
  }
  else {
    uVar20 = *(undefined4 *)(param_1 + 0xf8);
  }
  cVar4 = FUN_1430d8750(plVar7);
  puVar18 = (undefined4 *)(param_1 + 0xec);
  if (cVar4 == '\0') {
    puVar18 = &DAT_1468b5d90;
  }
  local_678 = (float *)CONCAT44(local_678._4_4_,param_2);
  local_680 = (float *)CONCAT44(local_680._4_4_,0x447a0000);
  local_688 = (float *)CONCAT44(local_688._4_4_,uVar20);
  puVar10 = (undefined8 *)FUN_140a2f910(local_398,param_1 + 0x90c,puVar18,param_1 + 0x94c);
  *(undefined8 *)(param_1 + 0x90c) = *puVar10;
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(puVar10 + 1);
  if ((bVar19) || (local_5d8 < 2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_680 = &local_1b8;
  local_688 = (float *)CONCAT71(local_688._1_7_,uVar5);
  FUN_140a2e780(param_1,param_3,&local_668,&local_638);
  if (*(char *)(param_1 + 0x100) == '\0') {
    puVar15 = &local_4c8;
    local_4c8 = DAT_1464aa810;
    local_4c4 = DAT_1464aa814;
    local_4c0 = DAT_1464aa818;
    local_4bc = DAT_1464aa81c;
    cVar4 = '\0';
  }
  else {
    FUN_140a23120(*(float *)((longlong)plVar7 + 0x784) * 0.01,0xc,0xe);
    uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x108);
    FRichCurve::Eval(uVar11);
    pfVar13 = (float *)FQuat::Slerp_NotNormalized(local_308,&DAT_1464aa810,local_428);
    cVar4 = *(char *)(param_1 + 0x100);
    local_5d8 = 0x322bcc77;
    fVar33 = *pfVar13;
    fVar39 = pfVar13[1];
    fVar25 = pfVar13[2];
    fVar27 = pfVar13[3];
    puVar15 = &local_548;
    auVar23._0_4_ = fVar33 * fVar33 + fVar25 * fVar25;
    auVar23._4_4_ = fVar39 * fVar39 + fVar27 * fVar27;
    auVar23._8_4_ = fVar25 * fVar25 + fVar33 * fVar33;
    auVar23._12_4_ = fVar27 * fVar27 + fVar39 * fVar39;
    auVar29._0_4_ = auVar23._4_4_ + auVar23._0_4_;
    auVar29._4_4_ = auVar23._8_4_ + auVar23._4_4_;
    auVar29._8_4_ = auVar23._12_4_ + auVar23._8_4_;
    auVar29._12_4_ = auVar23._0_4_ + auVar23._12_4_;
    auVar28 = rsqrtps(auVar23,auVar29);
    fVar32 = auVar28._0_4_;
    fVar34 = auVar28._4_4_;
    fVar26 = auVar28._8_4_;
    fVar31 = auVar28._12_4_;
    fVar32 = (_DAT_146866080 - fVar32 * fVar32 * auVar29._0_4_ * _DAT_146866080) * fVar32 + fVar32;
    fVar34 = (fRam0000000146866084 - fVar34 * fVar34 * auVar29._4_4_ * fRam0000000146866084) *
             fVar34 + fVar34;
    fVar26 = (fRam0000000146866088 - fVar26 * fVar26 * auVar29._8_4_ * fRam0000000146866088) *
             fVar26 + fVar26;
    fVar31 = (fRam000000014686608c - fVar31 * fVar31 * auVar29._12_4_ * fRam000000014686608c) *
             fVar31 + fVar31;
    local_548 = ((uint)(((_DAT_146866080 - fVar32 * fVar32 * auVar29._0_4_ * _DAT_146866080) *
                         fVar32 + fVar32) * fVar33) ^ _DAT_146866070) &
                -(uint)(1e-08 <= auVar29._0_4_) ^ _DAT_146866070;
    uStack_544 = ((uint)(((fRam0000000146866084 -
                          fVar34 * fVar34 * auVar29._4_4_ * fRam0000000146866084) * fVar34 + fVar34)
                        * fVar39) ^ uRam0000000146866074) & -(uint)(1e-08 <= auVar29._4_4_) ^
                 uRam0000000146866074;
    uStack_540 = ((uint)(((fRam0000000146866088 -
                          fVar26 * fVar26 * auVar29._8_4_ * fRam0000000146866088) * fVar26 + fVar26)
                        * fVar25) ^ uRam0000000146866078) & -(uint)(1e-08 <= auVar29._8_4_) ^
                 uRam0000000146866078;
    uStack_53c = ((uint)(((fRam000000014686608c -
                          fVar31 * fVar31 * auVar29._12_4_ * fRam000000014686608c) * fVar31 + fVar31
                         ) * fVar27) ^ uRam000000014686607c) & -(uint)(1e-08 <= auVar29._12_4_) ^
                 uRam000000014686607c;
  }
  local_4a8 = *(undefined8 *)puVar15;
  uStack_4a0 = *(undefined8 *)(puVar15 + 2);
  if (cVar4 == '\0') {
    local_4b8 = DAT_1464aa810;
    puVar15 = &local_4b8;
    local_4b4 = DAT_1464aa814;
    local_4b0 = DAT_1464aa818;
    local_4ac = DAT_1464aa81c;
  }
  else {
    FUN_140a23120(*(float *)((longlong)plVar7 + 0x784) * 0.01,0xc,0xe);
    uVar11 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x180);
    FRichCurve::Eval(uVar11);
    pfVar13 = (float *)FQuat::Slerp_NotNormalized(local_2f8,&DAT_1464aa810,local_418);
    local_600 = 0x322bcc77;
    fVar33 = *pfVar13;
    fVar39 = pfVar13[1];
    fVar25 = pfVar13[2];
    fVar27 = pfVar13[3];
    puVar15 = &local_558;
    auVar24._0_4_ = fVar33 * fVar33 + fVar25 * fVar25;
    auVar24._4_4_ = fVar39 * fVar39 + fVar27 * fVar27;
    auVar24._8_4_ = fVar25 * fVar25 + fVar33 * fVar33;
    auVar24._12_4_ = fVar27 * fVar27 + fVar39 * fVar39;
    auVar30._0_4_ = auVar24._4_4_ + auVar24._0_4_;
    auVar30._4_4_ = auVar24._8_4_ + auVar24._4_4_;
    auVar30._8_4_ = auVar24._12_4_ + auVar24._8_4_;
    auVar30._12_4_ = auVar24._0_4_ + auVar24._12_4_;
    auVar28 = rsqrtps(auVar24,auVar30);
    fVar32 = auVar28._0_4_;
    fVar34 = auVar28._4_4_;
    fVar26 = auVar28._8_4_;
    fVar31 = auVar28._12_4_;
    fVar32 = (_DAT_146866080 - fVar32 * fVar32 * auVar30._0_4_ * _DAT_146866080) * fVar32 + fVar32;
    fVar34 = (fRam0000000146866084 - fVar34 * fVar34 * auVar30._4_4_ * fRam0000000146866084) *
             fVar34 + fVar34;
    fVar26 = (fRam0000000146866088 - fVar26 * fVar26 * auVar30._8_4_ * fRam0000000146866088) *
             fVar26 + fVar26;
    fVar31 = (fRam000000014686608c - fVar31 * fVar31 * auVar30._12_4_ * fRam000000014686608c) *
             fVar31 + fVar31;
    local_558 = ((uint)(((_DAT_146866080 - fVar32 * fVar32 * auVar30._0_4_ * _DAT_146866080) *
                         fVar32 + fVar32) * fVar33) ^ _DAT_146866070) &
                -(uint)(1e-08 <= auVar30._0_4_) ^ _DAT_146866070;
    uStack_554 = ((uint)(((fRam0000000146866084 -
                          fVar34 * fVar34 * auVar30._4_4_ * fRam0000000146866084) * fVar34 + fVar34)
                        * fVar39) ^ uRam0000000146866074) & -(uint)(1e-08 <= auVar30._4_4_) ^
                 uRam0000000146866074;
    uStack_550 = ((uint)(((fRam0000000146866088 -
                          fVar26 * fVar26 * auVar30._8_4_ * fRam0000000146866088) * fVar26 + fVar26)
                        * fVar25) ^ uRam0000000146866078) & -(uint)(1e-08 <= auVar30._8_4_) ^
                 uRam0000000146866078;
    uStack_54c = ((uint)(((fRam000000014686608c -
                          fVar31 * fVar31 * auVar30._12_4_ * fRam000000014686608c) * fVar31 + fVar31
                         ) * fVar27) ^ uRam000000014686607c) & -(uint)(1e-08 <= auVar30._12_4_) ^
                 uRam000000014686607c;
  }
  local_498 = *(undefined8 *)puVar15;
  uStack_490 = *(undefined8 *)(puVar15 + 2);
  pfVar13 = (float *)(param_1 + 0x990);
  local_680._0_4_ = 1000.0;
  local_678._0_4_ = param_2;
  local_688._0_4_ = *(undefined4 *)(param_1 + 0x1f8);
  puVar10 = (undefined8 *)FUN_140a2fe60(local_2e8,pfVar13,&local_4a8,param_1 + 0x9b0);
  local_678 = (float *)CONCAT44(local_678._4_4_,param_2);
  pfVar3 = (float *)(param_1 + 0x9a0);
  local_680 = (float *)CONCAT44(local_680._4_4_,0x447a0000);
  uVar11 = puVar10[1];
  *(undefined8 *)pfVar13 = *puVar10;
  *(undefined8 *)(param_1 + 0x998) = uVar11;
  local_688 = (float *)CONCAT44(local_688._4_4_,*(undefined4 *)(param_1 + 0x1f8));
  puVar10 = (undefined8 *)FUN_140a2fe60(local_2d8,pfVar3,&local_498,param_1 + 0x9b4);
  uVar11 = puVar10[1];
  *(undefined8 *)pfVar3 = *puVar10;
  *(undefined8 *)(param_1 + 0x9a8) = uVar11;
  if (*pfVar3 * *pfVar13 + *(float *)(param_1 + 0x9a4) * *(float *)(param_1 + 0x994) +
      *(float *)(param_1 + 0x9a8) * *(float *)(param_1 + 0x998) +
      *(float *)(param_1 + 0x9ac) * *(float *)(param_1 + 0x99c) < 0.0) {
    fVar33 = -0.5;
  }
  else {
    fVar33 = 0.5;
  }
  local_678 = &local_5e8;
  local_680 = (float *)&local_468;
  local_528 = fVar33 * *pfVar13 + *pfVar3 * 0.5;
  local_688 = (float *)&local_638;
  fStack_524 = fVar33 * *(float *)(param_1 + 0x994) + *(float *)(param_1 + 0x9a4) * 0.5;
  fStack_520 = fVar33 * *(float *)(param_1 + 0x998) + *(float *)(param_1 + 0x9a8) * 0.5;
  fStack_51c = fVar33 * *(float *)(param_1 + 0x99c) + *(float *)(param_1 + 0x9ac) * 0.5;
  FUN_140a31d60(param_1,param_3,param_1 + 0x89c,&local_668);
  local_688 = &local_528;
  FUN_140a33340(param_1,local_388,param_3,&local_638);
  *(undefined8 *)(param_3 + 0x30) = local_468;
  *(undefined4 *)(param_3 + 0x38) = local_460;
  local_408 = fStack_51c * local_5e8 * _DAT_1468660d0 + fStack_5dc * local_528 +
              fStack_520 * fStack_5e4 * _DAT_1468660c0 + fStack_524 * fStack_5e0 * _DAT_1468660b0;
  fStack_404 = fStack_520 * local_5e8 * fRam00000001468660d4 + fStack_5dc * fStack_524 +
               fStack_51c * fStack_5e4 * fRam00000001468660c4 +
               local_528 * fStack_5e0 * fRam00000001468660b4;
  fStack_400 = fStack_524 * local_5e8 * fRam00000001468660d8 + fStack_5dc * fStack_520 +
               local_528 * fStack_5e4 * fRam00000001468660c8 +
               fStack_51c * fStack_5e0 * fRam00000001468660b8;
  fStack_3fc = local_528 * local_5e8 * fRam00000001468660dc + fStack_5dc * fStack_51c +
               fStack_524 * fStack_5e4 * fRam00000001468660cc +
               fStack_520 * fStack_5e0 * fRam00000001468660bc;
  puVar10 = (undefined8 *)FQuat::Rotator(&local_408,local_378);
  *(undefined8 *)(param_3 + 0x3c) = *puVar10;
  uVar20 = *(undefined4 *)(puVar10 + 1);
  *(float *)(param_3 + 0x74) = local_610;
  *(undefined4 *)(param_3 + 0x44) = uVar20;
  FUN_140a41710(param_1,param_3);
  local_688 = &local_1b8;
  FUN_140a41d60(param_1,param_3,local_658);
  FRichCurve::~FRichCurve(local_1a8);
  return;
}



// FUNCTION 140a4a4d0 FUN_140a4a4d0 body=592 status=ok
// SIG undefined FUN_140a4a4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a4a4d0(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x150) == 0) {
      FUN_140a35170(param_1,lVar1,local_68,&local_58);
      local_48 = *(undefined8 *)(param_1 + 0x170);
      uStack_40 = *(undefined8 *)(param_1 + 0x178);
      local_38._12_4_ = 0;
      local_38._0_12_ = *(undefined1 (*) [12])(param_1 + 0x158);
      local_28._4_4_ = DAT_1464aa788._4_4_;
      local_28._0_4_ = (undefined4)DAT_1464aa788;
      local_28._8_4_ = DAT_1464aa790;
      local_28._12_4_ = 0;
      FUN_140a4bea0(param_1,&local_48,param_1 + 400,local_68,&local_58);
      *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x158);
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x160);
      puVar2 = (undefined8 *)FQuat::Rotator(param_1 + 0x170,local_68);
    }
    else {
      *(float *)(param_1 + 0x1c4) = param_2 + *(float *)(param_1 + 0x1c4);
      fVar3 = *(float *)(*(longlong *)(param_3 + 0x28) + 0x2c);
      if (ABS(fVar3) <= 0.1) {
        fVar3 = 0.0;
      }
      fVar4 = *(float *)(*(longlong *)(param_3 + 0x28) + 0x30);
      if (ABS(fVar4) <= 0.1) {
        fVar4 = 0.0;
      }
      fVar4 = param_2 * fVar4 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x184) =
           fVar3 * param_2 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x184);
      *(float *)(param_1 + 0x180) = fVar4;
      FUN_140a35170(fVar4,*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x98),local_68,&local_58);
      local_28._4_4_ = uRam0000000146866094 & uRam00000001468660a4;
      local_28._0_4_ = _DAT_146866090 & _DAT_1468660a0;
      local_28._8_4_ = uRam0000000146866098 & uRam00000001468660a8;
      local_28._12_4_ = uRam000000014686609c & uRam00000001468660ac;
      local_48 = 0;
      uStack_40._0_4_ = 0;
      uStack_40._4_4_ = uRam000000014686609c;
      local_38 = ZEXT816(0);
      FUN_140a35f80(param_1,&local_48,local_68,&local_58);
      *(undefined4 *)(param_1 + 0x1d0) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x1d4) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0x1d8) = (undefined4)uStack_40;
      *(uint *)(param_1 + 0x1dc) = uStack_40._4_4_;
      local_58 = (undefined4)local_48;
      uStack_54 = local_48._4_4_;
      uStack_50 = (undefined4)uStack_40;
      uStack_4c = uStack_40._4_4_;
      local_60 = local_38._8_4_;
      *(undefined4 *)(param_3 + 0x30) = local_38._0_4_;
      *(undefined4 *)(param_3 + 0x34) = local_38._4_4_;
      *(undefined4 *)(param_3 + 0x38) = local_38._8_4_;
      puVar2 = (undefined8 *)FQuat::Rotator(&local_58,local_68);
    }
    *(undefined8 *)(param_3 + 0x3c) = *puVar2;
    *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(puVar2 + 1);
  }
  return;
}



// FUNCTION 140a4a720 FUN_140a4a720 body=270 status=ok
// SIG undefined FUN_140a4a720(void)

void FUN_140a4a720(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x28);
    fVar6 = *(float *)(param_3 + 0xa8);
    fVar7 = 1.0;
    if (lVar1 != 0) {
      lVar4 = AGPoisonSplashProjectile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(char *)(lVar1 + 0xc2) == '\0')) &&
         (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
        if (0.0 < *(float *)(lVar1 + 0x584)) {
          fVar6 = *(float *)(lVar1 + 0x584);
        }
        plVar5 = (longlong *)FUN_14307d8d0(lVar1,*(undefined1 *)(lVar1 + 0x690));
        if (plVar5 != (longlong *)0x0) {
          fVar7 = (float)(**(code **)(*plVar5 + 0x3f8))(plVar5);
        }
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xa0);
    if (lVar1 != 0) {
      cVar3 = FUN_142710360(lVar1,0);
      if (cVar3 != '\0') {
        fVar6 = fVar6 * *(float *)(param_1 + 0x30);
      }
    }
    *(float *)(param_3 + 0xac) = fVar6;
    *(float *)(param_3 + 0xa8) = fVar7 * fVar6;
  }
  return;
}



// FUNCTION 140a4a830 FUN_140a4a830 body=3265 status=ok
// SIG undefined FUN_140a4a830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a4a830(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar21;
  float fVar23;
  float fVar26;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_1b8 [32];
  float local_198 [4];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  float local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_118 [16];
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  if (param_3 == 0) {
    return;
  }
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FUN_142fd3370();
  lVar10 = *(longlong *)(param_3 + 0x28);
  if (lVar10 == 0) {
LAB_140a4a8bd:
    lVar10 = 0;
  }
  else {
    lVar5 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140a4a8bd;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    fVar39 = *(float *)(param_3 + 0xa8);
    fVar46 = 1.0;
    if (((lVar10 != 0) && (*(char *)(lVar10 + 0xc2) == '\0')) &&
       (lVar5 = *(longlong *)(lVar10 + 0xb8), lVar5 != 0)) {
      if (0.0 < *(float *)(lVar5 + 0x584)) {
        fVar39 = *(float *)(lVar5 + 0x584);
      }
      plVar6 = (longlong *)FUN_14307d8d0(lVar5,*(undefined1 *)(lVar5 + 0x690));
      if (plVar6 != (longlong *)0x0) {
        fVar46 = (float)(**(code **)(*plVar6 + 0x3f8))(plVar6);
      }
    }
    lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xa0);
    if ((lVar5 != 0) && (cVar3 = FUN_142710360(lVar5,local_198), cVar3 != '\0')) {
      if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) {
        bVar4 = 0;
LAB_140a4a9e5:
        switch(bVar4) {
        default:
          goto switchD_140a4a9f8_caseD_0;
        case 1:
          fVar35 = *(float *)(param_1 + 0x74);
          break;
        case 3:
          if (local_198[0] != 0.0) goto switchD_140a4a9f8_caseD_7;
          fVar35 = *(float *)(param_1 + 0x74);
          break;
        case 4:
          if (local_198[0] != 2.8026e-45) goto switchD_140a4a9f8_caseD_7;
          fVar35 = *(float *)(param_1 + 0x74);
          break;
        case 5:
          if (local_198[0] != 0.0) goto switchD_140a4a9f8_caseD_7;
        case 2:
          fVar35 = *(float *)(param_1 + 0x78);
          break;
        case 6:
          if (local_198[0] != 2.8026e-45) goto switchD_140a4a9f8_caseD_7;
          fVar35 = *(float *)(param_1 + 0x78);
          break;
        case 7:
switchD_140a4a9f8_caseD_7:
          fVar35 = *(float *)(param_1 + 0x7c);
        }
      }
      else {
        bVar4 = *(byte *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
        if (bVar4 < 8) goto LAB_140a4a9e5;
switchD_140a4a9f8_caseD_0:
        fVar35 = 1.0;
      }
      fVar39 = fVar39 * fVar35;
    }
    *(float *)(param_3 + 0xac) = fVar39;
    *(float *)(param_3 + 0xa8) = fVar46 * fVar39;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98);
  if (lVar5 == 0) {
    return;
  }
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar7 = FUN_140c46a10(lVar5,0);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = FUN_14149b100();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar8 = FUN_142231800(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x98));
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140d01800(lVar8);
      if (((cVar3 == '\0') && (lVar10 != 0)) && (*(char *)(lVar10 + 0xc2) == '\0')) {
        *(float *)(param_3 + 0x90) = *(float *)(param_3 + 0x90) + *(float *)(lVar7 + 0x910);
        *(float *)(param_3 + 0x94) = *(float *)(lVar7 + 0x914) + *(float *)(param_3 + 0x94);
        *(float *)(param_3 + 0x98) = *(float *)(lVar7 + 0x918) + *(float *)(param_3 + 0x98);
        *(float *)(param_3 + 0x9c) = *(float *)(param_3 + 0x9c) + *(float *)(lVar7 + 0x91c);
        *(float *)(param_3 + 0xa0) = *(float *)(lVar7 + 0x920) + *(float *)(param_3 + 0xa0);
        *(float *)(param_3 + 0xa4) = *(float *)(lVar7 + 0x924) + *(float *)(param_3 + 0xa4);
      }
      goto LAB_140a4abbd;
    }
  }
  lVar8 = 0;
LAB_140a4abbd:
  lVar10 = FUN_14307d8d0(lVar7,*(undefined1 *)(lVar7 + 0x690));
  if (((lVar10 != 0) && (fVar39 = (float)FUN_14309ee20(lVar10), 0.0 < fVar39)) &&
     (cVar3 = FUN_14309f3d0(lVar10), cVar3 != '\0')) {
    pfVar11 = (float *)FUN_140c42b90(lVar5,local_108,0);
    fVar49 = pfVar11[4];
    fVar22 = pfVar11[5];
    fVar25 = pfVar11[6];
    fStack_17c = pfVar11[7];
    fVar47 = *pfVar11;
    fVar48 = pfVar11[1];
    fVar51 = pfVar11[2];
    fVar53 = pfVar11[3];
    auVar19 = *(undefined1 (*) [16])(pfVar11 + 8);
    fVar39 = auVar19._0_4_;
    fVar46 = auVar19._4_4_;
    fVar35 = auVar19._8_4_;
    local_188 = fVar49;
    fStack_184 = fVar22;
    fStack_180 = fVar25;
    if ((lVar8 != 0) && (cVar3 = FUN_140d01800(lVar8), cVar3 != '\0')) {
      FUN_140cff3c0(lVar8);
      pfVar11 = (float *)FRotator::Quaternion(&local_178,local_118);
      fVar28 = *pfVar11;
      fVar30 = pfVar11[1];
      fVar33 = pfVar11[2];
      fVar29 = pfVar11[3];
      fVar50 = fVar48 * fVar28;
      fVar52 = fVar47 * fVar28;
      fVar23 = fVar47 * fVar30;
      fVar26 = fVar48 * fVar30;
      fVar41 = fVar47 * fVar33;
      fVar44 = fVar51 * fVar33;
      fVar47 = fVar53 * fVar28 * _DAT_1468660d0 + fVar29 * fVar47 + fVar51 * fVar30 * _DAT_1468660c0
               + fVar48 * fVar33 * _DAT_1468660b0;
      fVar48 = fVar51 * fVar28 * fRam00000001468660d4 + fVar29 * fVar48 +
               fVar53 * fVar30 * fRam00000001468660c4 + fVar41 * fRam00000001468660b4;
      fVar51 = fVar50 * fRam00000001468660d8 + fVar29 * fVar51 + fVar23 * fRam00000001468660c8 +
               fVar53 * fVar33 * fRam00000001468660b8;
      fVar53 = fVar52 * fRam00000001468660dc + fVar29 * fVar53 + fVar26 * fRam00000001468660cc +
               fVar44 * fRam00000001468660bc;
    }
    lVar5 = lVar10;
    pfVar11 = (float *)FUN_14309e640(lVar10,local_108);
    fVar41 = fRam0000000146866098;
    fVar26 = fRam0000000146866094;
    fVar23 = _DAT_146866090;
    auVar17 = *(undefined1 (*) [16])(pfVar11 + 8);
    fVar28 = auVar17._0_4_;
    fVar30 = auVar17._4_4_;
    fVar33 = auVar17._8_4_;
    fVar29 = auVar17._12_4_;
    auVar16._0_4_ = (float)((uint)fVar28 & _DAT_146866130);
    auVar16._4_4_ = (float)((uint)fVar30 & uRam0000000146866134);
    auVar16._8_4_ = (float)((uint)fVar33 & uRam0000000146866138);
    auVar16._12_4_ = (float)((uint)fVar29 & uRam000000014686613c);
    auVar13._4_4_ = -(uint)(fRam0000000146866144 < auVar16._4_4_);
    auVar13._0_4_ = -(uint)(_DAT_146866140 < auVar16._0_4_);
    auVar13._8_4_ = -(uint)(fRam0000000146866148 < auVar16._8_4_);
    auVar13._12_4_ = -(uint)(fRam000000014686614c < auVar16._12_4_);
    iVar12 = movmskps((int)lVar5,auVar13);
    fVar44 = _DAT_1468b5b70;
    fVar50 = fRam00000001468b5b74;
    fVar52 = fRam00000001468b5b78;
    fVar45 = fRam00000001468b5b7c;
    fVar15 = _DAT_1468b5b90;
    fVar21 = fRam00000001468b5b94;
    fVar24 = fRam00000001468b5b98;
    fVar27 = fRam00000001468b5b9c;
    fVar36 = _DAT_1468b5b80;
    fVar37 = fRam00000001468b5b84;
    fVar38 = fRam00000001468b5b88;
    if (iVar12 != 0) {
      fVar44 = *pfVar11 * _DAT_146866150;
      fVar50 = pfVar11[1] * fRam0000000146866154;
      fVar52 = pfVar11[2] * fRam0000000146866158;
      fVar45 = pfVar11[3] * fRam000000014686615c;
      auVar17 = rcpps(auVar16,auVar17);
      fVar15 = auVar17._0_4_;
      fVar21 = auVar17._4_4_;
      fVar24 = auVar17._8_4_;
      fVar27 = auVar17._12_4_;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar28;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar30;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar33;
      fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar29;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar28;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar30;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar33;
      fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar29;
      fVar15 = (float)((-(uint)((float)((uint)fVar28 & _DAT_146866130) <= _DAT_146866140) &
                        (uint)fVar15 ^ (uint)fVar15) & _DAT_1468660a0);
      fVar21 = (float)((-(uint)((float)((uint)fVar30 & uRam0000000146866134) <= fRam0000000146866144
                               ) & (uint)fVar21 ^ (uint)fVar21) & uRam00000001468660a4);
      fVar24 = (float)((-(uint)((float)((uint)fVar33 & uRam0000000146866138) <= fRam0000000146866148
                               ) & (uint)fVar24 ^ (uint)fVar24) & uRam00000001468660a8);
      fVar36 = pfVar11[4] * fVar15;
      fVar37 = pfVar11[5] * fVar21;
      fVar38 = pfVar11[6] * fVar24;
      fVar28 = fVar38 * fVar50 - fVar37 * fVar52;
      fVar30 = fVar36 * fVar52 - fVar38 * fVar44;
      fVar33 = fVar37 * fVar44 - fVar36 * fVar50;
      fVar28 = fVar28 + fVar28;
      fVar30 = fVar30 + fVar30;
      fVar33 = fVar33 + fVar33;
      fVar27 = (float)((-(uint)((float)((uint)fVar29 & uRam000000014686613c) <= fRam000000014686614c
                               ) & (uint)fVar27 ^ (uint)fVar27) & uRam00000001468660ac);
      fVar36 = (float)((uint)(0.0 - ((fVar33 * fVar50 - fVar30 * fVar52) + fVar45 * fVar28 + fVar36)
                             ) & _DAT_1468660a0);
      fVar37 = (float)((uint)(0.0 - ((fVar28 * fVar52 - fVar33 * fVar44) + fVar45 * fVar30 + fVar37)
                             ) & uRam00000001468660a4);
      fVar38 = (float)((uint)(0.0 - ((fVar30 * fVar44 - fVar28 * fVar50) + fVar45 * fVar33 + fVar38)
                             ) & uRam00000001468660a8);
    }
    auVar17._4_4_ = fVar21;
    auVar17._0_4_ = fVar15;
    auVar17._8_4_ = fVar24;
    auVar17._12_4_ = fVar27;
    auVar17 = minps(auVar17,auVar19);
    auVar14._4_4_ = -(uint)(auVar17._4_4_ < fRam00000001468660f4);
    auVar14._0_4_ = -(uint)(auVar17._0_4_ < _DAT_1468660f0);
    auVar14._8_4_ = -(uint)(auVar17._8_4_ < fRam00000001468660f8);
    auVar14._12_4_ = -(uint)(auVar17._12_4_ < fRam00000001468660fc);
    iVar12 = movmskps((int)pfVar11,auVar14);
    if (iVar12 == 0) {
      fVar36 = fVar36 * fVar39;
      fVar37 = fVar37 * fVar46;
      fVar38 = fVar38 * fVar35;
      fVar28 = fVar47 * fVar45 * _DAT_1468660d0 + fVar44 * fVar53 + fVar48 * fVar52 * _DAT_1468660c0
               + fVar51 * fVar50 * _DAT_1468660b0;
      fVar30 = fVar47 * fVar52 * fRam00000001468660d4 + fVar50 * fVar53 +
               fVar48 * fVar45 * fRam00000001468660c4 + fVar51 * fVar44 * fRam00000001468660b4;
      fVar33 = fVar47 * fVar50 * fRam00000001468660d8 + fVar52 * fVar53 +
               fVar48 * fVar44 * fRam00000001468660c8 + fVar51 * fVar45 * fRam00000001468660b8;
      fVar29 = fVar47 * fVar44 * fRam00000001468660dc + fVar45 * fVar53 +
               fVar48 * fVar50 * fRam00000001468660cc + fVar51 * fVar52 * fRam00000001468660bc;
      fVar39 = fVar38 * fVar48 - fVar37 * fVar51;
      fVar46 = fVar36 * fVar51 - fVar38 * fVar47;
      fVar35 = fVar37 * fVar47 - fVar36 * fVar48;
      fVar39 = fVar39 + fVar39;
      fVar46 = fVar46 + fVar46;
      fVar35 = fVar35 + fVar35;
      fVar49 = (fVar35 * fVar48 - fVar46 * fVar51) + fVar39 * fVar53 + fVar36 + fVar49;
      fVar22 = (fVar39 * fVar51 - fVar35 * fVar47) + fVar46 * fVar53 + fVar37 + fVar22;
      fVar25 = (fVar46 * fVar47 - fVar39 * fVar48) + fVar35 * fVar53 + fVar38 + fVar25;
    }
    else {
      fVar22 = fVar48 + fVar48;
      fVar25 = fVar51 + fVar51;
      fVar30 = (fVar47 + fVar47) * fVar47;
      fVar49 = fVar53 * (fVar47 + fVar47);
      fVar54 = (fVar53 * fVar25 + fVar47 * fVar22) * fVar39;
      fVar55 = (fVar49 + fVar48 * fVar25) * fVar46;
      fVar56 = (fVar53 * fVar22 + fVar47 * fVar25) * fVar35;
      fVar33 = fVar46 * (fVar47 * fVar22 - fVar53 * fVar25);
      fVar31 = fVar35 * (fVar48 * fVar25 - fVar49);
      fVar34 = fVar39 * (fVar47 * fVar25 - fVar53 * fVar22);
      fVar28 = fVar50 + fVar50;
      fVar47 = fVar52 + fVar52;
      fVar49 = (float)((uint)((_DAT_146866090 - (fVar25 * fVar51 + fVar22 * fVar48)) * fVar39) &
                      _DAT_1468660a0);
      fVar25 = (float)((uint)((fRam0000000146866094 - (fVar25 * fVar51 + fVar30)) * fVar46) &
                      uRam00000001468660a4);
      fVar48 = (float)((uint)((fRam0000000146866098 - (fVar22 * fVar48 + fVar30)) * fVar35) &
                      uRam00000001468660a8);
      fVar53 = (float)((uint)((fRam000000014686609c - (fVar30 + fVar30)) * auVar19._12_4_) &
                      uRam00000001468660ac);
      fVar30 = (fVar44 + fVar44) * fVar44;
      fStack_17c = fRam000000014686609c;
      fVar22 = (fVar44 + fVar44) * fVar45;
      fVar40 = (fVar47 * fVar45 + fVar28 * fVar44) * fVar15;
      fVar42 = (fVar22 + fVar47 * fVar50) * fVar21;
      fVar43 = (fVar28 * fVar45 + fVar47 * fVar44) * fVar24;
      fVar29 = fVar21 * (fVar28 * fVar44 - fVar47 * fVar45);
      fVar32 = fVar24 * (fVar47 * fVar50 - fVar22);
      fVar44 = fVar15 * (fVar47 * fVar44 - fVar28 * fVar45);
      fVar22 = (float)((uint)((_DAT_146866090 - (fVar47 * fVar52 + fVar28 * fVar50)) * fVar15) &
                      _DAT_1468660a0);
      fVar47 = (float)((uint)((fRam0000000146866094 - (fVar47 * fVar52 + fVar30)) * fVar21) &
                      uRam00000001468660a4);
      fVar51 = (float)((uint)((fRam0000000146866098 - (fVar28 * fVar50 + fVar30)) * fVar24) &
                      uRam00000001468660a8);
      fVar28 = (float)((uint)((fRam000000014686609c - (fVar30 + fVar30)) * fVar27) &
                      uRam00000001468660ac);
      local_168 = fVar40 * fVar33 + fVar22 * fVar49 + fVar44 * fVar56 + fVar28 * local_188;
      fStack_164 = fVar40 * fVar25 + fVar22 * fVar54 + fVar44 * fVar31 + fVar28 * fStack_184;
      fStack_160 = fVar40 * fVar55 + fVar22 * fVar34 + fVar44 * fVar48 + fVar28 * fStack_180;
      fStack_15c = fVar40 * fVar53 + fVar22 * fVar53 + fVar44 * fVar53 +
                   fVar28 * fRam000000014686609c;
      local_158 = fVar47 * fVar33 + fVar29 * fVar49 + fVar42 * fVar56 + fVar28 * local_188;
      fStack_154 = fVar47 * fVar25 + fVar29 * fVar54 + fVar42 * fVar31 + fVar28 * fStack_184;
      fStack_150 = fVar47 * fVar55 + fVar29 * fVar34 + fVar42 * fVar48 + fVar28 * fStack_180;
      fStack_14c = fVar47 * fVar53 + fVar29 * fVar53 + fVar42 * fVar53 +
                   fVar28 * fRam000000014686609c;
      local_148 = fVar32 * fVar33 + fVar43 * fVar49 + fVar51 * fVar56 + fVar28 * local_188;
      fStack_144 = fVar32 * fVar25 + fVar43 * fVar54 + fVar51 * fVar31 + fVar28 * fStack_184;
      fStack_140 = fVar32 * fVar55 + fVar43 * fVar34 + fVar51 * fVar48 + fVar28 * fStack_180;
      fStack_13c = fVar32 * fVar53 + fVar43 * fVar53 + fVar51 * fVar53 +
                   fVar28 * fRam000000014686609c;
      local_138 = fVar37 * fVar33 + fVar36 * fVar49 + fVar38 * fVar56 +
                  fRam000000014686609c * local_188;
      fStack_134 = fVar37 * fVar25 + fVar36 * fVar54 + fVar38 * fVar31 +
                   fRam000000014686609c * fStack_184;
      fStack_130 = fVar37 * fVar55 + fVar36 * fVar34 + fVar38 * fVar48 +
                   fRam000000014686609c * fStack_180;
      fStack_12c = fVar37 * fVar53 + fVar36 * fVar53 + fVar38 * fVar53 +
                   fRam000000014686609c * fRam000000014686609c;
      FMatrix::RemoveScaling(&local_168);
      fVar39 = (float)(-(uint)(_DAT_1468660f0 <= fVar15 * fVar39) & (_DAT_1468660e0 ^ (uint)fVar23)
                      ^ _DAT_1468660e0);
      fVar46 = (float)(-(uint)(fRam00000001468660f4 <= fVar21 * fVar46) &
                       (uRam00000001468660e4 ^ (uint)fVar26) ^ uRam00000001468660e4);
      fVar35 = (float)(-(uint)(fRam00000001468660f8 <= fVar24 * fVar35) &
                       (uRam00000001468660e8 ^ (uint)fVar41) ^ uRam00000001468660e8);
      local_168 = local_168 * fVar39;
      fStack_164 = fStack_164 * fVar39;
      fStack_160 = fStack_160 * fVar39;
      fStack_150 = fStack_150 * fVar46;
      fStack_154 = fStack_154 * fVar46;
      local_158 = local_158 * fVar46;
      fStack_140 = fStack_140 * fVar35;
      local_148 = local_148 * fVar35;
      fStack_144 = fStack_144 * fVar35;
      FQuat::FQuat(&local_188,&local_168);
      local_198[0] = 1e-08;
      auVar18._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
      auVar18._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
      auVar18._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
      auVar18._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
      fVar22 = auVar18._4_4_ + auVar18._0_4_;
      fVar25 = auVar18._8_4_ + auVar18._4_4_;
      fVar47 = auVar18._12_4_ + auVar18._8_4_;
      fVar48 = auVar18._0_4_ + auVar18._12_4_;
      auVar19._4_4_ = fVar25;
      auVar19._0_4_ = fVar22;
      auVar19._8_4_ = fVar47;
      auVar19._12_4_ = fVar48;
      auVar19 = rsqrtps(auVar18,auVar19);
      fVar39 = auVar19._0_4_;
      fVar46 = auVar19._4_4_;
      fVar35 = auVar19._8_4_;
      fVar49 = auVar19._12_4_;
      fVar39 = (_DAT_146866080 - fVar39 * fVar39 * fVar22 * _DAT_146866080) * fVar39 + fVar39;
      fVar46 = (fRam0000000146866084 - fVar46 * fVar46 * fVar25 * fRam0000000146866084) * fVar46 +
               fVar46;
      fVar35 = (fRam0000000146866088 - fVar35 * fVar35 * fVar47 * fRam0000000146866088) * fVar35 +
               fVar35;
      fVar49 = (fRam000000014686608c - fVar49 * fVar49 * fVar48 * fRam000000014686608c) * fVar49 +
               fVar49;
      fVar28 = (float)(((uint)(((_DAT_146866080 - fVar39 * fVar39 * fVar22 * _DAT_146866080) *
                                fVar39 + fVar39) * local_188) ^ _DAT_146866070) &
                       -(uint)(1e-08 <= fVar22) ^ _DAT_146866070);
      fVar30 = (float)(((uint)(((fRam0000000146866084 -
                                fVar46 * fVar46 * fVar25 * fRam0000000146866084) * fVar46 + fVar46)
                              * fStack_184) ^ uRam0000000146866074) & -(uint)(1e-08 <= fVar25) ^
                      uRam0000000146866074);
      fVar33 = (float)(((uint)(((fRam0000000146866088 -
                                fVar35 * fVar35 * fVar47 * fRam0000000146866088) * fVar35 + fVar35)
                              * fStack_180) ^ uRam0000000146866078) & -(uint)(1e-08 <= fVar47) ^
                      uRam0000000146866078);
      fVar29 = (float)(((uint)(((fRam000000014686608c -
                                fVar49 * fVar49 * fVar48 * fRam000000014686608c) * fVar49 + fVar49)
                              * fStack_17c) ^ uRam000000014686607c) & -(uint)(1e-08 <= fVar48) ^
                      uRam000000014686607c);
      fVar49 = local_138;
      fVar22 = fStack_134;
      fVar25 = fStack_130;
    }
    fVar39 = (float)FUN_14309ee20(lVar10);
    fVar46 = fVar39 * 2.0;
    if (0.5 <= fVar39) {
      fVar39 = 1.0 - (fVar46 - 1.0);
      fVar46 = (1.0 - fVar39 * fVar39) + 1.0;
    }
    else {
      fVar46 = fVar46 * fVar46;
    }
    fVar46 = fVar46 * 0.5;
    if (0.0 < fVar46) {
      FRotator::Quaternion(param_3 + 0x9c,&local_188);
      fVar39 = *(float *)(param_3 + 0x98);
      fVar35 = *(float *)(param_3 + 0x94);
      fVar47 = *(float *)(param_3 + 0x90);
      fVar48 = local_188;
      fVar51 = fStack_184;
      fVar53 = fStack_180;
      fVar23 = fStack_17c;
      fVar26 = fVar47;
      fVar41 = fVar35;
      local_170 = fVar39;
      if ((1e-05 < fVar46) &&
         (fVar48 = fVar28, fVar51 = fVar30, fVar53 = fVar33, fVar23 = fVar29, fVar26 = fVar49,
         fVar41 = fVar22, local_170 = fVar25, fVar46 < 0.99999)) {
        fVar48 = local_188 * fVar28 + fStack_180 * fVar33;
        fVar51 = fStack_184 * fVar30 + fStack_17c * fVar29;
        fVar53 = fStack_180 * fVar33 + local_188 * fVar28;
        fVar23 = fStack_17c * fVar29 + fStack_184 * fVar30;
        fVar26 = (float)(-(uint)(0.0 <= fVar51 + fVar48) &
                         ((uint)local_188 ^ (uint)(0.0 - local_188)) ^ (uint)(0.0 - local_188)) *
                 (_DAT_146866090 - fVar46) + fVar28 * fVar46;
        fVar41 = (float)(-(uint)(0.0 <= fVar53 + fVar51) &
                         ((uint)fStack_184 ^ (uint)(0.0 - fStack_184)) ^ (uint)(0.0 - fStack_184)) *
                 (fRam0000000146866094 - fVar46) + fVar30 * fVar46;
        fVar44 = (float)(-(uint)(0.0 <= fVar23 + fVar53) &
                         ((uint)fStack_180 ^ (uint)(0.0 - fStack_180)) ^ (uint)(0.0 - fStack_180)) *
                 (fRam0000000146866098 - fVar46) + fVar33 * fVar46;
        fVar50 = (float)(-(uint)(0.0 <= fVar48 + fVar23) &
                         ((uint)fStack_17c ^ (uint)(0.0 - fStack_17c)) ^ (uint)(0.0 - fStack_17c)) *
                 (fRam000000014686609c - fVar46) + fVar29 * fVar46;
        auVar20._0_4_ = fVar26 * fVar26 + fVar44 * fVar44;
        auVar20._4_4_ = fVar41 * fVar41 + fVar50 * fVar50;
        auVar20._8_4_ = fVar44 * fVar44 + fVar26 * fVar26;
        auVar20._12_4_ = fVar50 * fVar50 + fVar41 * fVar41;
        fVar30 = auVar20._4_4_ + auVar20._0_4_;
        fVar33 = auVar20._8_4_ + auVar20._4_4_;
        fVar29 = auVar20._12_4_ + auVar20._8_4_;
        fVar23 = auVar20._0_4_ + auVar20._12_4_;
        auVar1._4_4_ = fVar33;
        auVar1._0_4_ = fVar30;
        auVar1._8_4_ = fVar29;
        auVar1._12_4_ = fVar23;
        auVar19 = rsqrtps(auVar20,auVar1);
        fVar48 = auVar19._0_4_;
        fVar51 = auVar19._4_4_;
        fVar53 = auVar19._8_4_;
        fVar28 = auVar19._12_4_;
        fVar48 = (_DAT_146866080 - fVar48 * fVar48 * fVar30 * _DAT_146866080) * fVar48 + fVar48;
        fVar51 = (fRam0000000146866084 - fVar51 * fVar51 * fVar33 * fRam0000000146866084) * fVar51 +
                 fVar51;
        fVar53 = (fRam0000000146866088 - fVar53 * fVar53 * fVar29 * fRam0000000146866088) * fVar53 +
                 fVar53;
        fVar28 = (fRam000000014686608c - fVar28 * fVar28 * fVar23 * fRam000000014686608c) * fVar28 +
                 fVar28;
        fVar48 = (float)(((uint)(((_DAT_146866080 - fVar48 * fVar48 * fVar30 * _DAT_146866080) *
                                  fVar48 + fVar48) * fVar26) ^ _DAT_146866070) &
                         -(uint)(_DAT_146866170 <= fVar30) ^ _DAT_146866070);
        fVar51 = (float)(((uint)(((fRam0000000146866084 -
                                  fVar51 * fVar51 * fVar33 * fRam0000000146866084) * fVar51 + fVar51
                                 ) * fVar41) ^ uRam0000000146866074) &
                         -(uint)(fRam0000000146866174 <= fVar33) ^ uRam0000000146866074);
        fVar53 = (float)(((uint)(((fRam0000000146866088 -
                                  fVar53 * fVar53 * fVar29 * fRam0000000146866088) * fVar53 + fVar53
                                 ) * fVar44) ^ uRam0000000146866078) &
                         -(uint)(fRam0000000146866178 <= fVar29) ^ uRam0000000146866078);
        fVar23 = (float)(((uint)(((fRam000000014686608c -
                                  fVar28 * fVar28 * fVar23 * fRam000000014686608c) * fVar28 + fVar28
                                 ) * fVar50) ^ uRam000000014686607c) &
                         -(uint)(fRam000000014686617c <= fVar23) ^ uRam000000014686607c);
        fVar26 = fVar47 + (fVar49 - fVar47) * fVar46;
        fVar41 = fVar35 + (fVar22 - fVar35) * fVar46;
        local_170 = fVar39 + (fVar25 - fVar39) * fVar46;
      }
      *(ulonglong *)(param_3 + 0x90) = CONCAT44(fVar41,fVar26);
      *(float *)(param_3 + 0x98) = local_170;
      local_198[0] = fVar46;
      local_188 = fVar48;
      fStack_184 = fVar51;
      fStack_180 = fVar53;
      fStack_17c = fVar23;
      FQuat::Rotator(&local_188,&local_178);
      *(undefined8 *)(param_3 + 0x9c) = local_178;
      *(float *)(param_3 + 0xa4) = local_170;
    }
  }
  return;
}



// FUNCTION 140a4b520 FUN_140a4b520 body=726 status=ok
// SIG undefined FUN_140a4b520(void)

void FUN_140a4b520(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [32];
  
  if (param_3 == 0) {
    return;
  }
  FUN_142fca220(param_1,&local_58);
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xa0);
  lVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar4 = UAnimMontage::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
  }
  fVar7 = (float)(int)(local_58 * 0.0027777778) * 360.0;
  if (ABS(local_58) < ABS(fVar7)) {
    fVar7 = local_58;
  }
  local_58 = local_58 - fVar7;
  if (local_58 < 0.0) {
    local_58 = local_58 + 360.0;
  }
  if (local_58 == 0.0) {
    fVar7 = (float)(int)(local_54 * 0.0027777778) * 360.0;
    if (ABS(local_54) < ABS(fVar7)) {
      fVar7 = local_54;
    }
    local_54 = local_54 - fVar7;
    if (local_54 < 0.0) {
      local_54 = local_54 + 360.0;
    }
    if (local_54 == 0.0) {
      fVar7 = (float)(int)(local_50 * 0.0027777778) * 360.0;
      if (ABS(local_50) < ABS(fVar7)) {
        fVar7 = local_50;
      }
      local_50 = local_50 - fVar7;
      if (local_50 < 0.0) {
        local_50 = local_50 + 360.0;
      }
      if (local_50 == 0.0) {
        bVar2 = true;
        goto LAB_140a4b663;
      }
    }
  }
  bVar2 = false;
LAB_140a4b663:
  if ((!bVar2) || ((lVar5 != 0 && (cVar3 = FUN_143095da0(lVar5), cVar3 != '\0')))) {
    if (lVar5 != 0) {
      FUN_14306aba0(lVar5,&local_58);
    }
    FUN_142fc90a0(param_1,param_3,&local_58);
  }
  lVar5 = *(longlong *)(param_3 + 0x28);
  if (lVar5 != 0) {
    lVar6 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (*(longlong *)(lVar5 + 0xb8) != 0)) &&
        (fVar7 = (float)FUN_14307daf0(), fVar7 != 1.0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xa0), lVar5 != 0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar3 = FUN_140d01800(lVar5), cVar3 != '\0')) {
        FUN_140cff3c0(lVar5,fVar7 * *(float *)(*(longlong *)(param_3 + 0x28) + 0x48),local_28,
                      &local_38);
        FUN_140cff3c0(lVar5,*(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x48),local_28,&local_48
                     );
        *(float *)(param_3 + 0x68) = (local_48 - local_38) + *(float *)(param_3 + 0x68);
        *(float *)(param_3 + 0x6c) = (local_44 - local_34) + *(float *)(param_3 + 0x6c);
        *(float *)(param_3 + 0x70) = (local_40 - local_30) + *(float *)(param_3 + 0x70);
      }
    }
  }
  return;
}



// FUNCTION 140a4b800 FUN_140a4b800 body=132 status=ok
// SIG undefined FUN_140a4b800(void)

void FUN_140a4b800(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  float local_18;
  float local_14;
  float local_10;
  
  if ((param_3 != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xa0), plVar1 != (longlong *)0x0)) {
    uVar2 = UAnimMontage::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_14307c4f0(lVar3,&local_18);
      *(float *)(param_3 + 0x68) = local_18 + *(float *)(param_3 + 0x68);
      *(float *)(param_3 + 0x6c) = local_14 + *(float *)(param_3 + 0x6c);
      *(float *)(param_3 + 0x70) = local_10 + *(float *)(param_3 + 0x70);
    }
  }
  return;
}



// FUNCTION 140a4b890 FUN_140a4b890 body=207 status=ok
// SIG undefined FUN_140a4b890(void)

void FUN_140a4b890(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float local_18;
  float local_14;
  float local_10;
  
  if ((param_3 != 0) && (lVar5 = *(longlong *)(param_3 + 0x28), lVar5 != 0)) {
    lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 != (longlong *)0x0)) {
      uVar4 = UUGBrightnessScreenUW::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar1 + 0x7f8))(plVar1,uVar4,(char)plVar1[0xd2]);
      if (lVar5 != 0) {
        FUN_14129e130(lVar5,&local_18);
        *(float *)(param_3 + 0x68) = local_18 + *(float *)(param_3 + 0x68);
        *(float *)(param_3 + 0x6c) = local_14 + *(float *)(param_3 + 0x6c);
        *(float *)(param_3 + 0x70) = local_10 + *(float *)(param_3 + 0x70);
      }
    }
  }
  return;
}



// FUNCTION 140a4b960 FUN_140a4b960 body=38 status=ok
// SIG undefined FUN_140a4b960(void)

void FUN_140a4b960(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  
  if (param_3 != 0) {
    fVar1 = (float)(**(code **)(*param_1 + 0x290))();
    *(float *)(param_3 + 0x48) = fVar1 * *(float *)(param_3 + 0x48);
  }
  return;
}



// FUNCTION 140a4b990 FUN_140a4b990 body=1281 status=ok
// SIG undefined FUN_140a4b990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a4b990(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float *pfVar2;
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
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [224];
  
  fVar8 = *param_1;
  fVar4 = param_1[1];
  fVar7 = param_1[2];
  fVar20 = param_1[3];
  fVar23 = param_1[4] - *param_3;
  fVar22 = param_1[5] - param_3[1];
  fVar21 = param_1[6] - param_3[2];
  local_108 = -fVar23;
  local_104 = -fVar22;
  local_100 = -fVar21;
  uVar1 = FRotationMatrix::MakeFromXZ(local_e8,&local_108,&DAT_1464aa798);
  pfVar2 = (float *)FMatrix::ToQuat(uVar1,local_f8);
  uVar24 = 0;
  fVar25 = 0.0;
  fVar12 = -*pfVar2;
  fVar3 = -pfVar2[1];
  fVar6 = pfVar2[3];
  fVar5 = -pfVar2[2];
  fVar13 = fVar7 * fVar12 * fRam00000001468660d4;
  fVar14 = fVar4 * fVar12 * fRam00000001468660d8;
  fVar15 = fVar8 * fVar12 * fRam00000001468660dc;
  fVar9 = fVar20 * fVar3 * fRam00000001468660c4;
  fVar10 = fVar8 * fVar3 * fRam00000001468660c8;
  fVar11 = fVar4 * fVar3 * fRam00000001468660cc;
  fVar17 = fVar8 * fVar5 * fRam00000001468660b4;
  fVar18 = fVar20 * fVar5 * fRam00000001468660b8;
  fVar19 = fVar7 * fVar5 * fRam00000001468660bc;
  *param_2 = fVar20 * fVar12 * _DAT_1468660d0 + fVar6 * fVar8 + fVar7 * fVar3 * _DAT_1468660c0 +
             fVar4 * fVar5 * _DAT_1468660b0;
  param_2[1] = fVar13 + fVar6 * fVar4 + fVar9 + fVar17;
  param_2[2] = fVar14 + fVar6 * fVar7 + fVar10 + fVar18;
  param_2[3] = fVar15 + fVar6 * fVar20 + fVar11 + fVar19;
  fVar6 = SQRT(fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21);
  if (1e-08 < fVar6) {
    fVar4 = 1.0 / fVar6;
    fVar8 = param_4[1];
    fVar7 = fVar8 + fVar8;
    fVar20 = -*param_4;
    fVar20 = fVar20 + fVar20;
    fVar11 = fVar7 * param_4[3] - fVar20 * param_4[2];
    fVar3 = fVar20 * param_4[3] + fVar7 * param_4[2];
    fVar5 = (fVar20 * *param_4 - fVar7 * fVar8) + 1.0;
    fVar20 = fVar3 * fVar22 * fVar4 + fVar11 * fVar23 * fVar4 + fVar5 * fVar21 * fVar4;
    fVar7 = fVar23 * fVar4 - fVar20 * fVar11;
    fVar10 = fVar22 * fVar4 - fVar20 * fVar3;
    fVar9 = fVar21 * fVar4 - fVar20 * fVar5;
    fVar4 = -1.0;
    if ((-1.0 <= fVar20) && (fVar4 = fVar20, 1.0 <= fVar20)) {
      fVar4 = 1.0;
    }
    fVar25 = _guard_xfg_dispatch_icall_nop(fVar4);
    fVar25 = 1.5707964 - fVar25;
    fVar4 = fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9;
    if (1e-08 < ABS(fVar4)) {
      if (1e-08 < fVar4) {
        auVar16 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar20 = auVar16._0_4_;
        fVar20 = fVar20 + fVar20 * (0.5 - fVar4 * 0.5 * fVar20 * fVar20);
        fVar20 = fVar20 + fVar20 * (0.5 - fVar4 * 0.5 * fVar20 * fVar20);
        fVar10 = fVar10 * fVar20;
        fVar7 = fVar20 * fVar7;
        fVar9 = fVar9 * fVar20;
      }
      fVar4 = param_4[2];
      fVar20 = -fVar8 + -fVar8;
      fVar8 = fVar4 + fVar4;
      fVar13 = (fVar20 * param_4[1] - fVar8 * fVar4) + 1.0;
      fVar14 = fVar20 * param_4[3] + fVar8 * *param_4;
      fVar12 = fVar8 * param_4[3] - fVar20 * *param_4;
      fVar20 = fVar12 * fVar9 - fVar14 * fVar10;
      fVar4 = fVar14 * fVar7 - fVar13 * fVar9;
      fVar8 = fVar13 * fVar10 - fVar12 * fVar7;
      uVar24 = FGenericPlatformMath::Atan2
                         (SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar8 * fVar8),
                          fVar12 * fVar10 + fVar13 * fVar7 + fVar14 * fVar9);
      if ((fVar5 * fVar13 - fVar11 * fVar14) * fVar10 + (fVar3 * fVar14 - fVar5 * fVar12) * fVar7 +
          (fVar11 * fVar12 - fVar3 * fVar13) * fVar9 < 0.0) {
        uVar24 = uVar24 ^ 0x80000000;
      }
    }
  }
  auVar16._4_4_ = fVar25;
  auVar16._0_4_ = uVar24;
  auVar16._8_4_ = fVar6;
  auVar16._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar16;
  return;
}



// FUNCTION 140a4bea0 FUN_140a4bea0 body=953 status=ok
// SIG undefined FUN_140a4bea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a4bea0(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [224];
  
  fVar10 = param_5[3];
  fVar8 = param_2[4] - *param_4;
  fVar12 = param_2[5] - param_4[1];
  fVar15 = -param_5[1];
  fVar14 = param_2[6] - param_4[2];
  fVar13 = -param_5[2];
  fVar16 = -*param_5;
  fVar11 = fVar14 * fVar15 - fVar12 * fVar13;
  fVar18 = fVar8 * fVar13 - fVar14 * fVar16;
  fVar11 = fVar11 + fVar11;
  fVar9 = fVar12 * fVar16 - fVar8 * fVar15;
  fVar18 = fVar18 + fVar18;
  fVar9 = fVar9 + fVar9;
  fVar19 = (fVar9 * fVar15 - fVar18 * fVar13) + fVar11 * fVar10 + fVar8;
  local_108 = -fVar19;
  fVar20 = (fVar11 * fVar13 - fVar9 * fVar16) + fVar18 * fVar10 + fVar12;
  fVar16 = (fVar18 * fVar16 - fVar11 * fVar15) + fVar9 * fVar10 + fVar14;
  fStack_104 = -fVar20;
  fStack_100 = -fVar16;
  uVar6 = FRotationMatrix::MakeFromXZ(local_e8,&local_108,&DAT_1464aa798);
  pfVar7 = (float *)FMatrix::ToQuat(uVar6,local_f8);
  fVar10 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  fVar11 = param_5[3];
  fVar12 = *pfVar7;
  fVar13 = pfVar7[1];
  fVar14 = pfVar7[2];
  fVar15 = pfVar7[3];
  uVar17 = 0;
  local_108 = fVar10 * fVar15 * _DAT_1468660d0 + fVar11 * fVar12 + fVar8 * fVar14 * _DAT_1468660c0 +
              fVar9 * fVar13 * _DAT_1468660b0;
  fStack_104 = fVar10 * fVar14 * fRam00000001468660d4 + fVar11 * fVar13 +
               fVar8 * fVar15 * fRam00000001468660c4 + fVar9 * fVar12 * fRam00000001468660b4;
  fStack_100 = fVar10 * fVar13 * fRam00000001468660d8 + fVar11 * fVar14 +
               fVar8 * fVar12 * fRam00000001468660c8 + fVar9 * fVar15 * fRam00000001468660b8;
  fStack_fc = fVar10 * fVar12 * fRam00000001468660dc + fVar11 * fVar15 +
              fVar8 * fVar13 * fRam00000001468660cc + fVar9 * fVar14 * fRam00000001468660bc;
  fVar10 = 0.0;
  fVar8 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16);
  if (0.0 < fVar8) {
    fVar10 = 1.0 / fVar8;
    uVar17 = FGenericPlatformMath::Atan2(fVar20 * fVar10,fVar19 * fVar10);
    fVar16 = fVar16 * fVar10;
    fVar10 = -1.0;
    if ((-1.0 <= fVar16) && (fVar10 = fVar16, 1.0 <= fVar16)) {
      fVar10 = 1.0;
    }
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    fVar10 = fVar10 - 1.5707964;
  }
  fVar5 = fRam00000001468660dc;
  fVar4 = fRam00000001468660d8;
  fVar3 = fRam00000001468660d4;
  fVar2 = _DAT_1468660d0;
  fVar20 = fRam00000001468660cc;
  fVar19 = fRam00000001468660c8;
  fVar18 = fRam00000001468660c4;
  fVar16 = _DAT_1468660c0;
  fVar15 = fRam00000001468660bc;
  fVar14 = fRam00000001468660b8;
  fVar13 = fRam00000001468660b4;
  fVar12 = _DAT_1468660b0;
  fStack_100 = -fStack_100;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = uVar17;
  auVar1._8_4_ = fVar8;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_3 + 4) = auVar1;
  fStack_104 = -fStack_104;
  fVar10 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar11 = param_2[3];
  local_108 = -local_108;
  *param_3 = fVar11 * local_108 * fVar2 + fStack_fc * fVar10 + fVar9 * fStack_104 * fVar16 +
             fVar8 * fStack_100 * fVar12;
  param_3[1] = fVar9 * local_108 * fVar3 + fStack_fc * fVar8 + fVar11 * fStack_104 * fVar18 +
               fVar10 * fStack_100 * fVar13;
  param_3[2] = fVar8 * local_108 * fVar4 + fStack_fc * fVar9 + fVar10 * fStack_104 * fVar19 +
               fVar11 * fStack_100 * fVar14;
  param_3[3] = fVar10 * local_108 * fVar5 + fStack_fc * fVar11 + fVar8 * fStack_104 * fVar20 +
               fVar9 * fStack_100 * fVar15;
  return;
}



// FUNCTION 140a4c260 FUN_140a4c260 body=674 status=ok
// SIG undefined FUN_140a4c260(void)

uint * FUN_140a4c260(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)(int)uVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar8 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  *(undefined4 *)(_Src + 1) = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar7 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar8,1);
      *param_2 = uVar4;
      goto LAB_140a4c4d4;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar9;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(uVar4 + iVar9) ^ uVar4 >> 0xd;
    uVar12 = (iVar9 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar12 ^ uVar4 >> 5;
    uVar12 = (uVar12 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 10;
    uVar12 = ((uVar11 - uVar4) - uVar12 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140a4c4d4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140a4c510 FUN_140a4c510 body=635 status=ok
// SIG undefined FUN_140a4c510(void)

int * FUN_140a4c510(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  longlong local_38;
  undefined4 local_30;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar7 * 0x20 + *param_1);
  lVar3 = *(longlong *)*param_3;
  plVar11[1] = local_38;
  *plVar11 = lVar3;
  *(undefined4 *)(plVar11 + 2) = local_30;
  *(undefined4 *)(plVar11 + 3) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x20 + *param_1) == lVar3) goto LAB_140a4c66d;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_140a4c66d:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x20 + *param_1),plVar11,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_140a4c762;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x1c) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140a4c762:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140a4c790 FUN_140a4c790 body=568 status=ok
// SIG undefined FUN_140a4c790(void)

int * FUN_140a4c790(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x14);
  puVar3 = (uint *)*param_3;
  puVar4 = (uint *)param_3[1];
  bVar12 = false;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = *puVar4;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140a4c9a7;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[4] = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140a4c9a7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140a4c9d0 Expand<char> body=175 status=ok
// SIG undefined Expand<char>(void)

void rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>
               (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong _NewSize;
  void *_Memory;
  
  _Memory = (void *)param_1[2];
  pvVar2 = (void *)0x0;
  if (_Memory == (void *)0x0) {
    _Memory = pvVar2;
    if (*param_1 == 0) {
      lVar1 = operator_new(1);
      _Memory = (void *)param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar1;
    }
    uVar3 = param_1[5];
  }
  else {
    uVar3 = (param_1[4] - (longlong)_Memory) + ((param_1[4] - (longlong)_Memory) + 1U >> 1);
  }
  lVar1 = param_1[3];
  _NewSize = param_2 + (lVar1 - (longlong)_Memory);
  if (_NewSize <= uVar3) {
    _NewSize = uVar3;
  }
  if (_NewSize == 0) {
    free(_Memory);
  }
  else {
    pvVar2 = realloc(_Memory,_NewSize);
  }
  param_1[2] = (longlong)pvVar2;
  param_1[3] = (longlong)pvVar2 + (lVar1 - (longlong)_Memory);
  param_1[4] = _NewSize + (longlong)pvVar2;
  return;
}



// FUNCTION 140a4ca80 FUN_140a4ca80 body=1117 status=ok
// SIG undefined FUN_140a4ca80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a4ca80(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_1c8 [32];
  char local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint local_190;
  int local_18c;
  uint local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  uint uStack_160;
  uint uStack_15c;
  uint *local_158;
  uint uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  longlong *local_140;
  undefined8 uStack_138;
  uint *puStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  iVar4 = *(int *)(param_1 + 0x2b8);
  local_1a0 = (longlong *)(param_1 + 0x2b0);
  iVar15 = *(int *)(param_1 + 0x2e4);
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 200) = 0;
  local_1a8 = param_3;
  if (*(int *)(param_2 + 0xcc) < iVar4 - iVar15) {
    FUN_140615c30(param_2);
  }
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_198 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  local_18c = 0;
  local_188 = 0;
  uStack_184 = 1;
  uStack_174 = 0;
  uStack_170 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_180;
    }
    uVar14 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar14 == 0) {
      iVar4 = (int)plVar6;
      uStack_170 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_170;
      local_188 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_188;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140a4cbb0;
      uVar14 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_184 = uVar14 - 1 & uVar14 ^ uVar14;
    iVar4 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_174 = (uStack_170 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_140a4cbb0:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar14 = *(uint *)(param_1 + 0x2d8);
  local_140 = (longlong *)(param_1 + 0x2b0);
  uStack_138 = CONCAT44(uStack_184,local_188);
  uStack_150 = 0xffffffff;
  uStack_14c = uStack_174;
  local_148 = CONCAT44(uStack_16c,uStack_170);
  uVar11 = uVar14 & 0xffffffe0;
  uStack_160 = local_188;
  uStack_15c = uStack_184;
  plVar6 = local_140;
  if (uVar14 != uVar1) {
    lVar9 = *(longlong *)(param_1 + 0x2d0);
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      lVar9 = param_1 + 0x2c0;
    }
    uVar7 = *(uint *)(lVar9 + (longlong)((int)uVar14 >> 5) * 4) & -1 << ((byte)uVar14 & 0x1f);
    iVar4 = (int)uVar14 >> 5;
    while (plVar6 = local_1a0, uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140a4cc8d;
      uVar7 = *(uint *)(lVar9 + 4 + (longlong)iVar4 * 4);
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
    uVar14 = (uVar11 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uVar14) {
LAB_140a4cc8d:
      uVar14 = uVar1;
    }
  }
  iVar4 = 0;
  plVar10 = plVar13;
  local_158 = puStack_180;
  puStack_130 = puStack_180;
  uStack_120 = local_148;
  local_168 = local_140;
  uStack_128 = uStack_150;
  uStack_124 = uStack_14c;
  while( true ) {
    if ((uStack_14c == uVar14) && (local_158 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_168 == plVar6)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar15 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_168 + (longlong)(int)uStack_14c * 0x10);
    if (lVar9 != 0) {
      iVar2 = *(int *)(param_2 + 200);
      *(int *)(param_2 + 200) = iVar2 + 1;
      if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
        TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
        ::ResizeGrow(param_2,iVar2);
      }
      lVar5 = *(longlong *)(param_2 + 0xc0);
      if (*(longlong *)(param_2 + 0xc0) == 0) {
        lVar5 = param_2;
      }
      *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar9;
      if (local_1a8 != '\0') {
        lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_190 = iVar15 + 1;
          if (iVar4 < (int)local_190) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_198,plVar10);
            plVar13 = local_198;
            iVar4 = local_18c;
          }
          plVar10 = (longlong *)(ulonglong)local_190;
          plVar13[iVar15] = lVar9;
        }
      }
    }
    uStack_150 = uStack_150 & ~uStack_15c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
    plVar6 = local_1a0;
  }
  if (local_1a8 != '\0') {
    uVar8 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar16 = (ulonglong)((longlong)(plVar13 + iVar15) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar15 < plVar13) {
      uVar16 = uVar8;
    }
    plVar6 = plVar13;
    if (uVar16 != 0) {
      do {
        if (*(longlong *)(*plVar6 + 0x2d8) != 0) {
          FUN_140a4ca80(*(longlong *)(*plVar6 + 0x2d8),local_118,1);
          iVar4 = (int)local_50;
          lVar9 = (longlong)(int)local_50;
          if ((int)local_50 != 0) {
            iVar15 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_50 + iVar15) {
              FUN_140615c30(param_2);
              iVar15 = *(int *)(param_2 + 200);
            }
            _Src = local_118;
            if (local_58 != (undefined1 *)0x0) {
              _Src = local_58;
            }
            lVar5 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar5 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)iVar15 * 8),_Src,lVar9 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar4;
            local_50 = local_50 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 1;
      } while (uVar8 != uVar16);
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 140a4cee0 FUN_140a4cee0 body=1139 status=ok
// SIG undefined FUN_140a4cee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a4cee0(longlong param_1,longlong param_2,char param_3)

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
      if (bVar3) goto LAB_140a4d00f;
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
LAB_140a4d00f:
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
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140a4d0cf;
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
LAB_140a4d0cf:
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
      lVar4 = FUN_142912e90();
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
          FUN_140a4cee0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
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



// FUNCTION 140a4d360 FUN_140a4d360 body=1089 status=ok
// SIG undefined FUN_140a4d360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a4d360(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  char local_e8;
  longlong *local_e0;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  longlong **local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 0x48) = 0;
  local_e8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x4c)) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_d4 = 1;
  local_e0 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_d0 = (uint *)(param_1 + 0x2c0);
  local_ac = 0;
  iVar13 = 0;
  local_d8 = 0;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar12 = *puVar10;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar5 = local_d8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar5;
      if (bVar3) goto LAB_140a4d47a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_d4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_c4 = (iStack_c0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_c4) {
LAB_140a4d47a:
      uStack_c4 = uVar1;
    }
  }
  local_c8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_78 = CONCAT44(uStack_d4,local_d8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_c4;
  local_88 = CONCAT44(uStack_bc,iStack_c0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_a0 = local_d8;
  uStack_9c = uStack_d4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140a4d53d;
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
LAB_140a4d53d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_98 = puStack_d0;
  local_80 = local_e0;
  puStack_70 = puStack_d0;
  uStack_60 = local_88;
  local_a8 = local_e0;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  while( true ) {
    if ((uStack_8c == uVar12) && (local_98 == puStack_d0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_a8 == local_e0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1429bed90();
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
        iVar2 = *(int *)(param_2 + 0x48);
        *(int *)(param_2 + 0x48) = iVar2 + 1;
        if (*(int *)(param_2 + 0x4c) < iVar2 + 1) {
          TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_e8 != '\0') && (lVar7 != 0)) {
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
        local_b0 = iVar13 + 1;
        if (iVar5 < local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar13);
          plVar11 = local_b8;
          iVar5 = local_ac;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_b0;
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  if (local_e8 != '\0') {
    uVar8 = 0;
    local_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140a4d360(*(longlong *)(*plVar14 + 0x2d8),&local_80,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x48);
            if (*(int *)(param_2 + 0x4c) < (int)local_38 + iVar5) {
              TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x48);
            }
            _Src = &local_80;
            if (local_40 != (longlong **)0x0) {
              _Src = local_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140a4d7b0 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 140a4d850 FUN_140a4d850 body=203 status=ok
// SIG undefined FUN_140a4d850(void)

void FUN_140a4d850(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar7 = lVar1;
  do {
    if (lVar7 == (longlong)(int)lVar2 * 0x10 + lVar1) {
LAB_140a4d8fb:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1);
      return;
    }
    if (((*(longlong *)(lVar7 + 8) == param_4) && (param_2 != 0)) &&
       (lVar3 = FWeakObjectPtr::GetEvenIfUnreachable(lVar7), param_2 == lVar3)) {
      iVar6 = (int)(lVar7 - lVar1 >> 4);
      if (iVar6 != -1) {
        iVar5 = (int)param_1[1];
        iVar4 = (iVar5 - iVar6) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *param_1),
                     (void *)((longlong)(iVar5 - iVar4) * 0x10 + *param_1),(longlong)iVar4 << 4);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
      }
      goto LAB_140a4d8fb;
    }
    lVar7 = lVar7 + 0x10;
  } while( true );
}



// FUNCTION 140a4d920 FUN_140a4d920 body=352 status=ok
// SIG undefined FUN_140a4d920(void)

undefined8 * FUN_140a4d920(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144205fd8;
  param_1[0x8c] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 3;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x45bb8000;
  *(undefined4 *)(param_1 + 0x96) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x97) = 0x40f00000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x461c4000;
  param_1[0x98] = 0x41200000;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x9a) = 0x4708b800;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SkullCannon",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  FUN_14234fe40(uVar3,0);
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Shell",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  FUN_140a396f0(uVar3);
  return param_1;
}



// FUNCTION 140a4da80 FUN_140a4da80 body=597 status=ok
// SIG undefined FUN_140a4da80(void)

undefined8 * FUN_140a4da80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8d) = 0x428c0000;
  *(undefined4 *)(param_1 + 0x90) = 0x457a0000;
  *param_1 = &PTR__scalar_deleting_destructor__14420a630;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x43480000;
  *(undefined4 *)(param_1 + 0x91) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x92) = 0x447a0000;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4bc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x96,0);
  }
  if ((undefined2 *)param_1[0x96] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x96] = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"BuilderSpline",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"BodySpline",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"LeftTreadSpline",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RightTreadSpline",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8f] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  return param_1;
}



// FUNCTION 140a4dce0 FUN_140a4dce0 body=618 status=ok
// SIG undefined FUN_140a4dce0(void)

undefined8 * FUN_140a4dce0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8b) = 0xc1f00000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x42960000;
  *param_1 = &PTR_FUN_14420ad18;
  *(undefined4 *)(param_1 + 0x8d) = 0x1e;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 4;
  *(undefined4 *)(param_1 + 0x94) = 5;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 6;
  *(undefined4 *)(param_1 + 0x95) = 7;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x43700000;
  *(undefined4 *)(param_1 + 0x96) = 0x43160000;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0x10000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9d] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x504) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4fe) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  local_res8 = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TreadSKComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x90] = uVar3;
  FUN_14223f010(param_1,uVar3);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"InstancedPlates",1);
  uVar3 = *puVar1;
  uVar2 = ACameraActor::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x92] = uVar3;
  FUN_140a396f0(uVar3);
  local_res8 = 0;
  FUN_142399e30(param_1[0x92],param_1[0x90],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TrackSpline",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x90],0);
  FCollisionQueryParams::AddIgnoredActor(param_1 + 0x9d,param_1);
  *(uint *)((longlong)param_1 + 0x4dc) = *(uint *)((longlong)param_1 + 0x4dc) | 1;
  return param_1;
}



// FUNCTION 140a4df50 FUN_140a4df50 body=121 status=ok
// SIG undefined FUN_140a4df50(void)

undefined8 * FUN_140a4df50(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144212218;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 4;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(uint *)(param_1 + 0x8f) = *(uint *)(param_1 + 0x8f) & 0xfffffffe;
  *(uint *)(param_1 + 0x8f) = *(uint *)(param_1 + 0x8f) | 2;
  *(undefined2 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x43480000;
  return param_1;
}



// FUNCTION 140a4dfd0 FUN_140a4dfd0 body=77 status=ok
// SIG undefined FUN_140a4dfd0(void)

undefined8 * FUN_140a4dfd0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144212e48;
  param_1[0x8b] = &PTR_LAB_144213530;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  return param_1;
}



// FUNCTION 140a4e020 FUN_140a4e020 body=465 status=ok
// SIG undefined FUN_140a4e020(void)

undefined8 * FUN_140a4e020(undefined8 *param_1)

{
  FUN_140ac4d50();
  *param_1 = &PTR_FUN_144207040;
  param_1[0x8b] = &PTR_LAB_1442077f0;
  param_1[0x8c] = &PTR_LAB_144207850;
  param_1[0x8d] = &PTR_LAB_144207878;
  param_1[0x8e] = &PTR_LAB_144207890;
  param_1[0x8f] = &PTR_LAB_1442078b8;
  param_1[0x90] = &PTR_LAB_1442078c8;
  param_1[0x92] = &PTR_LAB_144207908;
  param_1[0x93] = &PTR_LAB_144207920;
  param_1[0xcc] = &PTR_LAB_1442079f0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x694)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd1,0);
  }
  if ((undefined2 *)param_1[0xd1] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd1] = 0;
  }
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *param_1 = &PTR_FUN_144207a18;
  param_1[0x8b] = &PTR_LAB_1442081c8;
  param_1[0x8c] = &PTR_LAB_144208228;
  param_1[0x8d] = &PTR_LAB_144208250;
  param_1[0x8e] = &PTR_LAB_144208268;
  param_1[0x8f] = &PTR_LAB_144208290;
  param_1[0x90] = &PTR_LAB_1442082a0;
  param_1[0x92] = &PTR_LAB_1442082e0;
  param_1[0x93] = &PTR_LAB_1442082f8;
  param_1[0xcc] = &PTR_LAB_1442083c8;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xe3] = 0;
  param_1[0xdd] = 0;
  return param_1;
}



// FUNCTION 140a4e200 FUN_140a4e200 body=237 status=ok
// SIG undefined FUN_140a4e200(void)

undefined8 * FUN_140a4e200(undefined8 *param_1)

{
  FUN_140aeb790();
  *param_1 = &PTR_FUN_144209220;
  param_1[0x8b] = &PTR_LAB_144209990;
  param_1[0x8c] = &PTR_LAB_1442099f0;
  param_1[0x8d] = &PTR_LAB_144209a18;
  param_1[0x8e] = &PTR_LAB_144209a30;
  param_1[0x8f] = &PTR_LAB_144209a58;
  param_1[0x90] = &PTR_LAB_144209a68;
  param_1[0x92] = &PTR_LAB_144209aa8;
  param_1[0x93] = &PTR_LAB_144209ac0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) | 3;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 3;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  return param_1;
}



// FUNCTION 140a4e2f0 FUN_140a4e2f0 body=263 status=ok
// SIG undefined FUN_140a4e2f0(void)

undefined8 * FUN_140a4e2f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144208b10;
  param_1[0x8b] = &PTR_LAB_1442091f8;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0xffffffffffffffff;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  param_1[0x8f] = uVar1;
  return param_1;
}



// FUNCTION 140a4e400 FUN_140a4e400 body=288 status=ok
// SIG undefined FUN_140a4e400(void)

undefined8 * FUN_140a4e400(undefined8 *param_1)

{
  FUN_140ac4d50();
  *param_1 = &PTR_FUN_144207040;
  param_1[0x8b] = &PTR_LAB_1442077f0;
  param_1[0x8c] = &PTR_LAB_144207850;
  param_1[0x8d] = &PTR_LAB_144207878;
  param_1[0x8e] = &PTR_LAB_144207890;
  param_1[0x8f] = &PTR_LAB_1442078b8;
  param_1[0x90] = &PTR_LAB_1442078c8;
  param_1[0x92] = &PTR_LAB_144207908;
  param_1[0x93] = &PTR_LAB_144207920;
  param_1[0xcc] = &PTR_LAB_1442079f0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x694)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd1,0);
  }
  if ((undefined2 *)param_1[0xd1] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd1] = 0;
  }
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  return param_1;
}



// FUNCTION 140a4e520 FUN_140a4e520 body=128 status=ok
// SIG undefined FUN_140a4e520(void)

undefined8 * FUN_140a4e520(undefined8 *param_1)

{
  FUN_1430f2b50();
  *param_1 = &PTR_FUN_1442083f0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a4e5a0 FUN_140a4e5a0 body=519 status=ok
// SIG undefined FUN_140a4e5a0(void)

undefined8 * FUN_140a4e5a0(undefined8 *param_1)

{
  FUN_140c2e240();
  *param_1 = &PTR_FUN_144204bc8;
  param_1[0x8b] = &PTR_LAB_144205868;
  param_1[0x116] = &PTR_LAB_1442058c0;
  param_1[0x117] = &PTR_LAB_1442058e8;
  param_1[0x118] = &PTR_LAB_144205940;
  param_1[0x119] = &PTR_LAB_144205978;
  param_1[0x11a] = &PTR_LAB_144205990;
  param_1[0x11b] = &PTR_LAB_1442059d8;
  param_1[0x11c] = &PTR_LAB_144205a00;
  param_1[0x11d] = &PTR_LAB_144205a28;
  param_1[0x11e] = &PTR_LAB_144205a70;
  param_1[0x11f] = &PTR_LAB_144205a88;
  param_1[0x1af] = &PTR_LAB_144205aa0;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_144205ac0;
  param_1[0x1b1] = &PTR_LAB_144205af0;
  param_1[0x1b2] = &PTR_LAB_144205cc0;
  param_1[0x1b3] = &PTR_LAB_144205ce8;
  param_1[0x1b4] = &PTR_FUN_144205db8;
  param_1[0x1b5] = &PTR_LAB_144205dd0;
  param_1[0x1b6] = &PTR_LAB_144205e20;
  param_1[0x1b7] = &PTR_LAB_144205e38;
  param_1[0x1b8] = &PTR_LAB_144205e50;
  param_1[0x1b9] = &PTR_LAB_144205e70;
  param_1[0x1c4] = &PTR_LAB_144205ea8;
  param_1[0x1c5] = &PTR_LAB_144205ee8;
  param_1[0x1c6] = &PTR_LAB_144205f10;
  param_1[0x1c7] = &PTR_LAB_144205f28;
  param_1[0x1c8] = &PTR_LAB_144205f50;
  param_1[0x1c9] = &PTR_LAB_144205f80;
  param_1[0x1ca] = &PTR_LAB_144205fa8;
  param_1[0x453] = &PTR_LAB_144205fc0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  param_1[0x45b] = 0;
  param_1[0x45c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22ec) = 0;
  *(undefined4 *)(param_1 + 0x45d) = 0xffffffff;
  param_1[0x45f] = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x462) = 1;
  return param_1;
}



// FUNCTION 140a4e7b0 FUN_140a4e7b0 body=874 status=ok
// SIG undefined FUN_140a4e7b0(void)

undefined8 * FUN_140a4e7b0(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_140c2e240();
  *param_1 = &PTR__scalar_deleting_destructor__14420cdf0;
  param_1[0x8b] = &PTR_LAB_14420dab8;
  param_1[0x116] = &PTR_LAB_14420db10;
  param_1[0x117] = &PTR_LAB_14420db38;
  param_1[0x118] = &PTR_LAB_14420db90;
  param_1[0x119] = &PTR_LAB_14420dbc8;
  param_1[0x11a] = &PTR_LAB_14420dbe0;
  param_1[0x11b] = &PTR_LAB_14420dc28;
  param_1[0x11c] = &PTR_LAB_14420dc50;
  param_1[0x11d] = &PTR_LAB_14420dc78;
  param_1[0x11e] = &PTR_LAB_14420dcc0;
  param_1[0x11f] = &PTR_LAB_14420dcd8;
  param_1[0x1af] = &PTR_LAB_14420dcf0;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_14420dd10;
  param_1[0x1b1] = &PTR_LAB_14420dd40;
  param_1[0x1b2] = &PTR_LAB_14420df10;
  param_1[0x1b3] = &PTR_LAB_14420df38;
  param_1[0x1b4] = &PTR_FUN_14420e008;
  param_1[0x1b5] = &PTR_LAB_14420e020;
  param_1[0x1b6] = &PTR_LAB_14420e070;
  param_1[0x1b7] = &PTR_LAB_14420e088;
  param_1[0x1b8] = &PTR_LAB_14420e0a0;
  param_1[0x1b9] = &PTR_LAB_14420e0c0;
  param_1[0x1c4] = &PTR_LAB_14420e0f8;
  param_1[0x1c5] = &PTR_LAB_14420e138;
  param_1[0x1c6] = &PTR_LAB_14420e160;
  param_1[0x1c7] = &PTR_LAB_14420e178;
  param_1[0x1c8] = &PTR_LAB_14420e1a0;
  param_1[0x1c9] = &PTR_LAB_14420e1d0;
  param_1[0x1ca] = &PTR_LAB_14420e1f8;
  param_1[0x453] = 0;
  param_1[0x454] = 0;
  param_1[0x455] = 0;
  param_1[0x456] = 0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  param_1[0x45a] = 0;
  param_1[0x45b] = 0;
  param_1[0x45c] = 0;
  param_1[0x45d] = 0;
  param_1[0x460] = 0;
  param_1[0x461] = 0;
  param_1[0x462] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2394) = 0;
  param_1[0x475] = 0;
  param_1[0x476] = 0;
  FUN_140590080(param_1 + 0x478);
  FUN_140590080(param_1 + 0x47b);
  FUN_140590080(param_1 + 0x47e);
  *(undefined1 *)(param_1 + 0x483) = 0xff;
  param_1[0x484] = 0;
  *(undefined4 *)(param_1 + 0x485) = 0;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 4;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined1 *)((longlong)param_1 + 0x2461) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22f4) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x45f) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x2391) = 0;
  *(undefined1 *)(param_1 + 0x482) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c1) = 1;
  *(undefined1 *)(param_1 + 0x48e) = 0;
  if (param_1[0x1cd] != 0) {
    puVar1 = (uint *)(param_1[0x1cd] + 0x300);
    *puVar1 = *puVar1 | 0x80;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BalanceStateDefault",1);
  uVar4 = *puVar2;
  uVar3 = UAnimMontage::GetPrivateStaticClass();
  FUN_141752410(param_1,uVar4,uVar3,uVar3,0,0,0);
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar4 = *puVar2;
  uVar3 = FUN_142e43690();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x487] = uVar4;
  FUN_142350b20(uVar4,0);
  *(undefined2 *)(param_1 + 0x224) = 0x101;
  *(undefined1 *)(param_1 + 0x3b0) = 1;
  return param_1;
}



// FUNCTION 140a4eb20 FUN_140a4eb20 body=571 status=ok
// SIG undefined FUN_140a4eb20(void)

undefined8 * FUN_140a4eb20(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"BalanceStateDefault");
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BalanceStateDefault",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,0,param_2);
  FUN_140a4e7b0(param_1,param_2);
  *param_1 = &PTR_FUN_14420eb88;
  param_1[0x8b] = &PTR_LAB_14420f850;
  param_1[0x116] = &PTR_LAB_14420f8a8;
  param_1[0x117] = &PTR_LAB_14420f8d0;
  param_1[0x118] = &PTR_LAB_14420f928;
  param_1[0x119] = &PTR_LAB_14420f960;
  param_1[0x11a] = &PTR_LAB_14420f978;
  param_1[0x11b] = &PTR_LAB_14420f9c0;
  param_1[0x11c] = &PTR_LAB_14420f9e8;
  param_1[0x11d] = &PTR_LAB_14420fa10;
  param_1[0x11e] = &PTR_LAB_14420fa58;
  param_1[0x11f] = &PTR_LAB_14420fa70;
  param_1[0x1af] = &PTR_LAB_14420fa88;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_14420faa8;
  param_1[0x1b1] = &PTR_LAB_14420fad8;
  param_1[0x1b2] = &PTR_LAB_14420fca8;
  param_1[0x1b3] = &PTR_LAB_14420fcd0;
  param_1[0x1b4] = &PTR_FUN_14420fda0;
  param_1[0x1b5] = &PTR_LAB_14420fdb8;
  param_1[0x1b6] = &PTR_LAB_14420fe08;
  param_1[0x1b7] = &PTR_LAB_14420fe20;
  param_1[0x1b8] = &PTR_LAB_14420fe38;
  param_1[0x1b9] = &PTR_LAB_14420fe58;
  param_1[0x1c4] = &PTR_LAB_14420fe90;
  param_1[0x1c5] = &PTR_LAB_14420fed0;
  param_1[0x1c6] = &PTR_LAB_14420fef8;
  param_1[0x1c7] = &PTR_LAB_14420ff10;
  param_1[0x1c8] = &PTR_LAB_14420ff38;
  param_1[0x1c9] = &PTR_LAB_14420ff68;
  param_1[0x1ca] = &PTR_LAB_14420ff90;
  FUN_142d2e580(param_1 + 0x48f);
  *(undefined4 *)((longlong)param_1 + 0x2554) = 5;
  *(undefined1 *)((longlong)param_1 + 0x13c1) = 0;
  *(undefined1 *)(param_1 + 0x48e) = 1;
  if (param_1[0x1cd] != 0) {
    puVar1 = (uint *)(param_1[0x1cd] + 0x300);
    *puVar1 = *puVar1 & 0xffffff7f;
  }
  return param_1;
}



// FUNCTION 140a4ed60 FUN_140a4ed60 body=121 status=ok
// SIG undefined FUN_140a4ed60(void)

undefined8 * FUN_140a4ed60(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(undefined2 *)(param_1 + 0x8b) = 0;
  *param_1 = &PTR_FUN_144211b30;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xffffffff;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  return param_1;
}



// FUNCTION 140a4ede0 FUN_140a4ede0 body=89 status=ok
// SIG undefined FUN_140a4ede0(void)

byte * FUN_140a4ede0(byte *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x40;
  param_1[0xb] = 0x40;
  param_1[0x20] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf0;
  param_1[7] = 0x42;
  *param_1 = *param_1 & 0xfb | 3;
  return param_1;
}



// FUNCTION 140a4ee60 FUN_140a4ee60 body=11 status=ok
// SIG undefined FUN_140a4ee60(void)

undefined8 * FUN_140a4ee60(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 140a4ee70 FUN_140a4ee70 body=176 status=ok
// SIG undefined FUN_140a4ee70(void)

undefined1 * FUN_140a4ee70(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  local_38 = *(undefined8 *)(param_2 + 0x18);
  FString::FString(local_30,param_2 + 0x20);
  FSoftObjectPath::operator=(param_1 + 0x18,&local_38);
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140a4ef20 FUN_140a4ef20 body=192 status=ok
// SIG undefined FUN_140a4ef20(void)

undefined1 * FUN_140a4ef20(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_48 [32];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_2 != 0) {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
    FSoftObjectPath::operator=(param_1 + 0x18,uVar1);
    FWeakObjectPtr::operator=(param_1 + 8,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x10) = DAT_1464b56f4;
  }
  *param_1 = param_3;
  return param_1;
}



// FUNCTION 140a4efe0 FUN_140a4efe0 body=164 status=ok
// SIG undefined FUN_140a4efe0(void)

undefined4 * FUN_140a4efe0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  *param_1 = param_2;
  plVar1 = (longlong *)(param_1 + 2);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar2 = FSoftObjectPath::FSoftObjectPath(local_28,param_3);
  plVar3 = (longlong *)FSoftObjectPath::ToString(uVar2,local_38);
  if (plVar1 != plVar3) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    param_1[4] = (int)plVar3[1];
    param_1[5] = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140a4f090 FUN_140a4f090 body=509 status=ok
// SIG undefined FUN_140a4f090(void)

undefined8 * FUN_140a4f090(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_88 [2];
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x68);
  param_1[0xf] = 0;
  plVar1 = param_1 + 0xf;
  param_1[0x10] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1413b9340();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      param_2 = (longlong *)param_2[0xad];
    }
  }
  FUN_14301f8f0();
  lVar4 = (**(code **)(*param_2 + 0x628))(param_2);
  if (lVar4 != 0) {
    _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
    FUN_142ff3000(lVar4,local_78);
    FUN_142d979c0(local_a8);
    cVar3 = FUN_142ff5940(local_78,local_a8,1);
    if (cVar3 != '\0') {
      FUN_142ff1ff0(local_a8);
      FUN_143004080(local_a8,param_1);
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  uVar5 = FSoftObjectPath::FSoftObjectPath(local_a8,param_3);
  plVar6 = (longlong *)FSoftObjectPath::ToString(uVar5,local_88);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x10) = (int)plVar6[1];
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140a4f290 FUN_140a4f290 body=253 status=ok
// SIG undefined FUN_140a4f290(void)

undefined2 * FUN_140a4f290(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffa | 2;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x41800000;
  *(undefined4 *)(param_1 + 0x26) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x43340000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xfe;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0x40;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(code **)(param_1 + 0x60) = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  return param_1;
}



// FUNCTION 140a4f390 FUN_140a4f390 body=331 status=ok
// SIG undefined FUN_140a4f390(void)

undefined4 * FUN_140a4f390(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar2 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if (iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if (iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0xc,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar2 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if (iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x10,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar2 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x14,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x14),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  return param_1;
}



// FUNCTION 140a4f4e0 FUN_140a4f4e0 body=108 status=ok
// SIG undefined FUN_140a4f4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a4f4e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 1) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 2) = 0x3e800000;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 0x14) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  uVar1 = uRam00000001464aa6d8;
  param_1[5] = _DAT_1464aa6d0;
  param_1[6] = uVar1;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
  uVar1 = uRam00000001464aa6d8;
  param_1[10] = _DAT_1464aa6d0;
  param_1[0xb] = uVar1;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 100) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar1;
  uVar1 = uRam00000001464aa6d8;
  param_1[0xf] = _DAT_1464aa6d0;
  param_1[0x10] = uVar1;
  return param_1;
}



// FUNCTION 140a4f550 FUN_140a4f550 body=185 status=ok
// SIG undefined FUN_140a4f550(void)

undefined8 * FUN_140a4f550(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  _Src = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xc],_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 140a4f610 FUN_140a4f610 body=73 status=ok
// SIG undefined FUN_140a4f610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a4f610(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 1) = 0x3dcccccd;
  param_1[2] = 0x3e800000;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 0x1c) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar1;
  uVar1 = uRam00000001464aa6d8;
  param_1[6] = _DAT_1464aa6d0;
  param_1[7] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 140a4f660 FUN_140a4f660 body=75 status=ok
// SIG undefined FUN_140a4f660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a4f660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 1) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 2) = 0x3e800000;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 0x14) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  uVar1 = uRam00000001464aa6d8;
  param_1[5] = _DAT_1464aa6d0;
  param_1[6] = uVar1;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
  return param_1;
}



// FUNCTION 140a4f6b0 FUN_140a4f6b0 body=53 status=ok
// SIG undefined FUN_140a4f6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a4f6b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 1) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 2) = 0x3e800000;
  uVar1 = uRam00000001464aa6d8;
  *(undefined8 *)((longlong)param_1 + 0x14) = _DAT_1464aa6d0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  return param_1;
}



// FUNCTION 140a4f6f0 FUN_140a4f6f0 body=33 status=ok
// SIG undefined FUN_140a4f6f0(void)

undefined8 * FUN_140a4f6f0(undefined8 *param_1)

{
  UAnimNotify_WeaponFire::UAnimNotify_WeaponFire();
  *param_1 = &PTR_FUN_14420b720;
  return param_1;
}



// FUNCTION 140a4f720 FUN_140a4f720 body=68 status=ok
// SIG undefined FUN_140a4f720(void)

undefined8 * FUN_140a4f720(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR_FUN_144204390;
  FUN_14084bd40(param_1 + 0x88);
  param_1[0x88] = &PTR_FUN_144204318;
  return param_1;
}



// FUNCTION 140a4f770 FUN_140a4f770 body=323 status=ok
// SIG undefined FUN_140a4f770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a4f770(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_142327780();
  *param_1 = &PTR_FUN_1442066c0;
  param_1[5] = &PTR_LAB_144206fb0;
  param_1[0x5a] = &PTR_LAB_144206fe0;
  uVar1 = uRam000000014686676c;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  *(uint *)((longlong)param_1 + 0x73c) = uVar1;
  uVar1 = uRam0000000146866764 & uRam0000000146866774;
  uVar2 = uRam0000000146866768 & uRam0000000146866778;
  uVar3 = uRam000000014686676c & uRam000000014686677c;
  *(uint *)(param_1 + 0xea) = _DAT_146866760 & _DAT_146866770;
  *(uint *)((longlong)param_1 + 0x754) = uVar1;
  *(uint *)(param_1 + 0xeb) = uVar2;
  *(uint *)((longlong)param_1 + 0x75c) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf3) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0x3f800000;
  param_1[0xf5] = 0x3e800000;
  *(undefined4 *)(param_1 + 0xf6) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0x3e800000;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 2;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 0;
  FUN_140a723c0(param_1);
  *(undefined4 *)(param_1 + 0xec) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xf6) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf7) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a4f8c0 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14420b9d8;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140a4f8f0 FUN_140a4f8f0 body=2085 status=ok
// SIG undefined FUN_140a4f8f0(void)

undefined8 * FUN_140a4f8f0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res8 [4];
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14420bc58;
  puVar3 = param_1 + 0xc;
  lVar4 = 6;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar5 = 6;
  lVar2 = (longlong)param_1 + 0x25c;
  do {
    uVar1 = *(uint *)(lVar2 + -0x1d4);
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)(lVar2 + -0x1fb) = 0;
    *(uint *)(lVar2 + -0x1d4) = uVar1 & 0xfffffffa | 2;
    *(undefined8 *)(lVar2 + -500) = 0;
    *(undefined8 *)(lVar2 + -0x1e4) = 0;
    *(undefined8 *)(lVar2 + -0x1dc) = 0;
    *(undefined8 *)(lVar2 + -0x1cc) = 0;
    *(undefined8 *)(lVar2 + -0x1c4) = 0;
    *(undefined8 *)(lVar2 + -0x1bc) = 0;
    *(undefined4 *)(lVar2 + -0x1b4) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x1b0) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x1ac) = 0x41200000;
    *(undefined4 *)(lVar2 + -0x1a8) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0x1a4) = 0x3f800000;
    *(undefined1 *)(lVar2 + -0x1a0) = 0;
    *(undefined8 *)(lVar2 + -0x19c) = 0x43340000;
    *(undefined8 *)(lVar2 + -0x18c) = 0;
    *(undefined8 *)(lVar2 + -0x16c) = 0;
    *(undefined8 *)(lVar2 + -0x164) = 0;
    *(undefined8 *)(lVar2 + -0x15c) = 0;
    *(undefined8 *)(lVar2 + -0x154) = 0;
    *(byte *)(lVar2 + -0x143) = *(byte *)(lVar2 + -0x143) & 0xfe;
    *(undefined8 *)(lVar2 + -0x14c) = 0;
    *(undefined1 *)(lVar2 + -0x144) = 0x40;
    *(undefined8 *)(lVar2 + -0x10c) = 0;
    *(undefined4 *)(lVar2 + -0xfc) = 0;
    *(undefined8 *)(lVar2 + -0xec) = 0;
    *(undefined4 *)(lVar2 + -0xe4) = 0;
    *(code **)(lVar2 + -0x13c) = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(lVar2 + -0xe0) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0xdc) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0xd8) = 0x3f800000;
    *(undefined8 *)(lVar2 + -0xd4) = 0;
    *(undefined4 *)(lVar2 + -0xcc) = 0;
    *(undefined4 *)(lVar2 + -200) = 0x3f800000;
    *(undefined8 *)(lVar2 + -0xbc) = 0;
    *(undefined8 *)(lVar2 + -0xb4) = 0;
    *(undefined2 *)(lVar2 + -0xac) = 0;
    *(undefined8 *)(lVar2 + -0xa4) = 0;
    *(undefined8 *)(lVar2 + -0x94) = 0;
    *(undefined8 *)(lVar2 + -0x8c) = 0;
    *(uint *)(lVar2 + -0x84) = *(uint *)(lVar2 + -0x84) & 0xfffffffa | 2;
    *(undefined8 *)(lVar2 + -0x7c) = 0;
    *(undefined8 *)(lVar2 + -0x74) = 0;
    *(undefined8 *)(lVar2 + -0x6c) = 0;
    *(undefined4 *)(lVar2 + -100) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x60) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x5c) = 0x41200000;
    *(undefined4 *)(lVar2 + -0x58) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0x54) = 0x3f800000;
    *(undefined1 *)(lVar2 + -0x50) = 0;
    *(undefined8 *)(lVar2 + -0x4c) = 0x43340000;
    *(undefined8 *)(lVar2 + -0x3c) = 0;
    *(undefined8 *)(lVar2 + -0x1c) = 0;
    *(undefined8 *)(lVar2 + -0x14) = 0;
    *(undefined8 *)(lVar2 + -0xc) = 0;
    *(undefined8 *)(lVar2 + -4) = 0;
    *(undefined8 *)(lVar2 + 4) = 0;
    *(undefined1 *)(lVar2 + 0xc) = 0x40;
    *(byte *)(lVar2 + 0xd) = *(byte *)(lVar2 + 0xd) & 0xfe;
    *(undefined8 *)(lVar2 + 0x44) = 0;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined8 *)(lVar2 + 100) = 0;
    *(undefined4 *)(lVar2 + 0x6c) = 0;
    *(undefined4 *)(lVar2 + 0x70) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x74) = 0x3f800000;
    *(code **)(lVar2 + 0x14) = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(lVar2 + 0x78) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x7c) = 0;
    *(undefined4 *)(lVar2 + 0x84) = 0;
    *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x94) = 0;
    *(undefined8 *)(lVar2 + 0x9c) = 0;
    *(undefined2 *)(lVar2 + 0xa4) = 0;
    *(undefined8 *)(lVar2 + 0xac) = 0;
    *(undefined8 *)(lVar2 + 0xbc) = 0;
    puVar3 = puVar3 + 0x7e;
    *(undefined8 *)(lVar2 + 0xc4) = 0;
    *(uint *)(lVar2 + 0xcc) = *(uint *)(lVar2 + 0xcc) & 0xfffffffa | 2;
    *(undefined8 *)(lVar2 + 0xd4) = 0;
    *(undefined8 *)(lVar2 + 0xdc) = 0;
    *(undefined8 *)(lVar2 + 0xe4) = 0;
    *(undefined4 *)(lVar2 + 0xec) = 0x41800000;
    *(undefined4 *)(lVar2 + 0xf0) = 0x41800000;
    *(undefined4 *)(lVar2 + 0xf4) = 0x41200000;
    *(undefined4 *)(lVar2 + 0xf8) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0xfc) = 0x3f800000;
    *(undefined1 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x104) = 0x43340000;
    *(undefined8 *)(lVar2 + 0x114) = 0;
    *(undefined8 *)(lVar2 + 0x134) = 0;
    *(undefined8 *)(lVar2 + 0x13c) = 0;
    *(undefined8 *)(lVar2 + 0x144) = 0;
    *(undefined8 *)(lVar2 + 0x14c) = 0;
    *(undefined8 *)(lVar2 + 0x154) = 0;
    *(undefined1 *)(lVar2 + 0x15c) = 0x40;
    *(byte *)(lVar2 + 0x15d) = *(byte *)(lVar2 + 0x15d) & 0xfe;
    *(undefined8 *)(lVar2 + 0x194) = 0;
    *(undefined4 *)(lVar2 + 0x1a4) = 0;
    *(undefined8 *)(lVar2 + 0x1b4) = 0;
    *(undefined4 *)(lVar2 + 0x1bc) = 0;
    *(undefined4 *)(lVar2 + 0x1c0) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x1c4) = 0x3f800000;
    *(code **)(lVar2 + 0x164) = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(lVar2 + 0x1c8) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x1cc) = 0;
    *(undefined4 *)(lVar2 + 0x1d4) = 0;
    *(undefined4 *)(lVar2 + 0x1d8) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x1e4) = 0;
    *(undefined8 *)(lVar2 + 0x1ec) = 0;
    lVar5 = lVar5 + -3;
    lVar2 = lVar2 + 0x3f0;
  } while (lVar5 != 0);
  puVar3 = param_1 + 0x108;
  lVar2 = (longlong)param_1 + 0xa3c;
  do {
    uVar1 = *(uint *)(lVar2 + -0x1d4);
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)(lVar2 + -0x1fb) = 0;
    *(uint *)(lVar2 + -0x1d4) = uVar1 & 0xfffffffa | 2;
    *(undefined8 *)(lVar2 + -500) = 0;
    *(undefined8 *)(lVar2 + -0x1e4) = 0;
    *(undefined8 *)(lVar2 + -0x1dc) = 0;
    *(undefined8 *)(lVar2 + -0x1cc) = 0;
    *(undefined8 *)(lVar2 + -0x1c4) = 0;
    *(undefined8 *)(lVar2 + -0x1bc) = 0;
    *(undefined4 *)(lVar2 + -0x1b4) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x1b0) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x1ac) = 0x41200000;
    *(undefined4 *)(lVar2 + -0x1a8) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0x1a4) = 0x3f800000;
    *(undefined1 *)(lVar2 + -0x1a0) = 0;
    *(undefined8 *)(lVar2 + -0x19c) = 0x43340000;
    *(undefined8 *)(lVar2 + -0x18c) = 0;
    *(undefined8 *)(lVar2 + -0x16c) = 0;
    *(undefined8 *)(lVar2 + -0x164) = 0;
    *(undefined8 *)(lVar2 + -0x15c) = 0;
    *(undefined8 *)(lVar2 + -0x154) = 0;
    *(byte *)(lVar2 + -0x143) = *(byte *)(lVar2 + -0x143) & 0xfe;
    *(undefined8 *)(lVar2 + -0x14c) = 0;
    *(undefined1 *)(lVar2 + -0x144) = 0x40;
    *(undefined8 *)(lVar2 + -0x10c) = 0;
    *(undefined4 *)(lVar2 + -0xfc) = 0;
    *(undefined8 *)(lVar2 + -0xec) = 0;
    *(undefined4 *)(lVar2 + -0xe4) = 0;
    *(code **)(lVar2 + -0x13c) = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(lVar2 + -0xe0) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0xdc) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0xd8) = 0x3f800000;
    *(undefined8 *)(lVar2 + -0xd4) = 0;
    *(undefined4 *)(lVar2 + -0xcc) = 0;
    *(undefined4 *)(lVar2 + -200) = 0x3f800000;
    *(undefined8 *)(lVar2 + -0xbc) = 0;
    *(undefined8 *)(lVar2 + -0xb4) = 0;
    *(undefined2 *)(lVar2 + -0xac) = 0;
    *(undefined8 *)(lVar2 + -0xa4) = 0;
    *(undefined8 *)(lVar2 + -0x94) = 0;
    *(undefined8 *)(lVar2 + -0x8c) = 0;
    *(uint *)(lVar2 + -0x84) = *(uint *)(lVar2 + -0x84) & 0xfffffffa | 2;
    *(undefined8 *)(lVar2 + -0x7c) = 0;
    *(undefined8 *)(lVar2 + -0x74) = 0;
    *(undefined8 *)(lVar2 + -0x6c) = 0;
    *(undefined4 *)(lVar2 + -100) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x60) = 0x41800000;
    *(undefined4 *)(lVar2 + -0x5c) = 0x41200000;
    *(undefined4 *)(lVar2 + -0x58) = 0x3f800000;
    *(undefined4 *)(lVar2 + -0x54) = 0x3f800000;
    *(undefined1 *)(lVar2 + -0x50) = 0;
    *(undefined8 *)(lVar2 + -0x4c) = 0x43340000;
    *(undefined8 *)(lVar2 + -0x3c) = 0;
    *(undefined8 *)(lVar2 + -0x1c) = 0;
    *(undefined8 *)(lVar2 + -0x14) = 0;
    *(undefined8 *)(lVar2 + -0xc) = 0;
    *(undefined8 *)(lVar2 + -4) = 0;
    *(undefined8 *)(lVar2 + 4) = 0;
    *(undefined1 *)(lVar2 + 0xc) = 0x40;
    *(byte *)(lVar2 + 0xd) = *(byte *)(lVar2 + 0xd) & 0xfe;
    *(undefined8 *)(lVar2 + 0x44) = 0;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined8 *)(lVar2 + 100) = 0;
    *(undefined4 *)(lVar2 + 0x6c) = 0;
    *(undefined4 *)(lVar2 + 0x70) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x74) = 0x3f800000;
    *(code **)(lVar2 + 0x14) = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(lVar2 + 0x78) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x7c) = 0;
    *(undefined4 *)(lVar2 + 0x84) = 0;
    *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x94) = 0;
    *(undefined8 *)(lVar2 + 0x9c) = 0;
    *(undefined2 *)(lVar2 + 0xa4) = 0;
    *(undefined8 *)(lVar2 + 0xac) = 0;
    *(undefined8 *)(lVar2 + 0xbc) = 0;
    puVar3 = puVar3 + 0x7e;
    *(undefined8 *)(lVar2 + 0xc4) = 0;
    *(uint *)(lVar2 + 0xcc) = *(uint *)(lVar2 + 0xcc) & 0xfffffffa | 2;
    *(undefined8 *)(lVar2 + 0xd4) = 0;
    *(undefined8 *)(lVar2 + 0xdc) = 0;
    *(undefined8 *)(lVar2 + 0xe4) = 0;
    *(undefined4 *)(lVar2 + 0xec) = 0x41800000;
    *(undefined4 *)(lVar2 + 0xf0) = 0x41800000;
    *(undefined4 *)(lVar2 + 0xf4) = 0x41200000;
    *(undefined4 *)(lVar2 + 0xf8) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0xfc) = 0x3f800000;
    *(undefined1 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x104) = 0x43340000;
    *(undefined8 *)(lVar2 + 0x114) = 0;
    *(undefined8 *)(lVar2 + 0x134) = 0;
    *(undefined8 *)(lVar2 + 0x13c) = 0;
    *(undefined8 *)(lVar2 + 0x144) = 0;
    *(undefined8 *)(lVar2 + 0x14c) = 0;
    *(undefined8 *)(lVar2 + 0x154) = 0;
    *(undefined1 *)(lVar2 + 0x15c) = 0x40;
    *(byte *)(lVar2 + 0x15d) = *(byte *)(lVar2 + 0x15d) & 0xfe;
    *(undefined8 *)(lVar2 + 0x194) = 0;
    *(undefined4 *)(lVar2 + 0x1a4) = 0;
    *(undefined8 *)(lVar2 + 0x1b4) = 0;
    *(undefined4 *)(lVar2 + 0x1bc) = 0;
    *(undefined4 *)(lVar2 + 0x1c0) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x1c4) = 0x3f800000;
    *(code **)(lVar2 + 0x164) = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(lVar2 + 0x1c8) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x1cc) = 0;
    *(undefined4 *)(lVar2 + 0x1d4) = 0;
    *(undefined4 *)(lVar2 + 0x1d8) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x1e4) = 0;
    *(undefined8 *)(lVar2 + 0x1ec) = 0;
    lVar4 = lVar4 + -3;
    lVar2 = lVar2 + 0x3f0;
  } while (lVar4 != 0);
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  *(undefined4 *)(param_1 + 0x209) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x104c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x20a) = 0x42340000;
  *(uint *)(param_1 + 0x20f) = *(uint *)(param_1 + 0x20f) & 0xfffffffe;
  *(uint *)(param_1 + 0x20f) = *(uint *)(param_1 + 0x20f) | 2;
  *(undefined4 *)(param_1 + 0x20e) = 0x441d8000;
  *(undefined4 *)((longlong)param_1 + 0x1074) = 0x437a0000;
  *(undefined4 *)(param_1 + 6) = 0x3f666666;
  FName::FName(local_res8,L"L_Foot",1);
  param_1[8] = local_res8[0];
  FName::FName(local_res8,L"Root",1);
  param_1[0x206] = local_res8[0];
  FName::FName(local_res8,L"Speed",1);
  *(uint *)(param_1 + 0x20f) = *(uint *)(param_1 + 0x20f) | 3;
  param_1[0x207] = local_res8[0];
  *(undefined4 *)((longlong)param_1 + 0x1054) = 0x432f0000;
  *(undefined4 *)(param_1 + 0x20b) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x105c) = 0x42340000;
  *(undefined4 *)(param_1 + 0x20c) = 0xbf3504f3;
  *(undefined4 *)((longlong)param_1 + 0x1064) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x20d) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x107c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x106c) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x20e) = 0x4423c000;
  *(undefined4 *)((longlong)param_1 + 0x1074) = 0x43460000;
  *(undefined4 *)(param_1 + 0x210) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x1084) = 0x3f5db3d7;
  *(undefined4 *)(param_1 + 0x211) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x108c) = 0x41f00000;
  return param_1;
}



// FUNCTION 140a50120 FUN_140a50120 body=41 status=ok
// SIG undefined FUN_140a50120(void)

undefined8 * FUN_140a50120(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144212b88;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140a50150 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144209b90;
  return param_1;
}



// FUNCTION 140a50180 FUN_140a50180 body=273 status=ok
// SIG undefined FUN_140a50180(void)

undefined8 * FUN_140a50180(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_144213558;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x8c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if ((undefined2 *)param_1[0x10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x10] = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((*(int *)((longlong)param_1 + 0xcc) < 0) && (*(int *)((longlong)param_1 + 0xcc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  if ((undefined2 *)param_1[0x18] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x18] = 0;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 140a502a0 FUN_140a502a0 body=188 status=ok
// SIG undefined FUN_140a502a0(void)

undefined8 * FUN_140a502a0(undefined8 *param_1)

{
  FUN_142d0be80();
  *param_1 = &PTR_FUN_144209e50;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FText::FText(param_1 + 0x28);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x19c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x32,0);
  }
  if ((undefined2 *)param_1[0x32] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x32] = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 140a50360 USettleProspectCallbackProxyGen body=70 status=ok
// SIG undefined USettleProspectCallbackProxyGen(void)

undefined8 * USettleProspectCallbackProxyGen::USettleProspectCallbackProxyGen(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR__scalar_deleting_destructor__1442137d0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 140a503b0 FUN_140a503b0 body=110 status=ok
// SIG undefined FUN_140a503b0(void)

undefined8 * FUN_140a503b0(undefined8 *param_1)

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
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__144212900;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 140a50420 FUN_140a50420 body=58 status=ok
// SIG undefined FUN_140a50420(void)

undefined8 * FUN_140a50420(undefined8 *param_1)

{
  FUN_142327870();
  *param_1 = &PTR_FUN_14420e210;
  param_1[5] = &PTR_LAB_14420eb00;
  param_1[0x5a] = &PTR_LAB_14420eb30;
  return param_1;
}



// FUNCTION 140a50460 FUN_140a50460 body=33 status=ok
// SIG undefined FUN_140a50460(void)

undefined8 * FUN_140a50460(undefined8 *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_14420ffa8;
  return param_1;
}



// FUNCTION 140a50490 FUN_140a50490 body=1658 status=ok
// SIG undefined FUN_140a50490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a50490(undefined8 *param_1)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  code *local_38;
  undefined8 uStack_30;
  
  FUN_142f89d30();
  *param_1 = &PTR_FUN_14420bed8;
  param_1[5] = &PTR_LAB_14420cbe8;
  param_1[0x42] = &PTR_LAB_14420cc18;
  param_1[0x43] = &PTR_LAB_14420cc88;
  *(uint *)(param_1 + 0x515) = *(uint *)(param_1 + 0x515) & 0xfffffffe;
  *(uint *)(param_1 + 0x515) = *(uint *)(param_1 + 0x515) | 2;
  *(undefined4 *)(param_1 + 0x514) = 0x441d8000;
  *(undefined4 *)((longlong)param_1 + 0x28a4) = 0x437a0000;
  *(uint *)((longlong)param_1 + 0x28b4) = *(uint *)((longlong)param_1 + 0x28b4) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x28b4) = *(uint *)((longlong)param_1 + 0x28b4) | 2;
  *(undefined4 *)((longlong)param_1 + 0x28ac) = 0x441d8000;
  *(undefined4 *)(param_1 + 0x516) = 0x437a0000;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x28cc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x51b);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x28e4);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x51e);
  param_1[0x523] = 0;
  param_1[0x52d] = 0;
  FName::FName(param_1 + 0x52e,L"Speed",1);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x530);
  *(undefined1 *)(param_1 + 0x532) = 0;
  param_1[0x543] = 0;
  param_1[0x544] = 0;
  *(undefined1 *)(param_1 + 0x545) = 0;
  param_1[0x556] = 0;
  param_1[0x557] = 0;
  param_1[0x55c] = 0;
  param_1[0x55d] = 0;
  param_1[0x55e] = 0;
  param_1[0x55f] = 0;
  param_1[0x560] = 0;
  param_1[0x561] = 0;
  param_1[0x562] = 0;
  param_1[0x563] = 0;
  param_1[0x564] = 0;
  param_1[0x565] = 0;
  param_1[0x566] = 0;
  param_1[0x567] = 0;
  param_1[0x568] = 0;
  param_1[0x569] = 0;
  param_1[0x56a] = 2;
  param_1[0x56b] = 0;
  param_1[0x56c] = 0;
  param_1[0x56d] = 2;
  param_1[0x576] = 0;
  param_1[0x577] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c64) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58d) = 0;
  param_1[0x58e] = 0;
  param_1[0x58f] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x57e,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x2bfc) = 0x3f800000;
  param_1[0x591] = 0;
  param_1[0x592] = 0;
  param_1[0x593] = 0;
  param_1[0x595] = 0;
  *(undefined4 *)(param_1 + 0x596) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5aa) = 0;
  param_1[0x5ab] = 0;
  param_1[0x5ac] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x59b,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x2ce4) = 0x3f800000;
  param_1[0x5ae] = 0;
  param_1[0x5af] = 0;
  param_1[0x5b0] = 0;
  param_1[0x5b2] = 0;
  *(undefined4 *)(param_1 + 0x5b3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c7) = 0;
  param_1[0x5c8] = 0;
  param_1[0x5c9] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x5b8,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x2dcc) = 0x3f800000;
  param_1[0x5cb] = 0;
  param_1[0x5cc] = 0;
  param_1[0x5cd] = 0;
  param_1[0x5cf] = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined2 *)(param_1 + 0x5d3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ea4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2eac) = DAT_1468b5d98;
  param_1[0x5d6] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x5d7) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x2ebc) = 0;
  *(undefined1 *)(param_1 + 0x5d8) = 0;
  param_1[0x5d9] = 0;
  param_1[0x5da] = 0;
  param_1[0x5db] = 0;
  *(undefined1 *)(param_1 + 0x5dd) = 0;
  param_1[0x5ee] = 0;
  param_1[0x5ef] = 0;
  *(undefined1 *)(param_1 + 0x109) = 1;
  *(undefined4 *)(param_1 + 0x517) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x513) = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0x289c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ba4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x518) = 0x3f000000;
  FUN_14246fd50((longlong)param_1 + 0x28cc,*(float *)(param_1 + 0x4f) * 1.5);
  *(uint *)((longlong)param_1 + 0x2904) = *(uint *)((longlong)param_1 + 0x2904) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x28fc) = 0x42340000;
  FUN_14246fd40((longlong)param_1 + 0x28e4,param_1 + 0x50);
  FUN_14246fd50(param_1 + 0x51b,*(float *)(param_1 + 0x51d) + *(float *)(param_1 + 0x51d));
  FUN_14246fd40(param_1 + 0x51e,(longlong)param_1 + 0x28e4);
  uVar1 = *(undefined4 *)(param_1 + 0x56);
  *(float *)(param_1 + 0x521) = *(float *)((longlong)param_1 + 0x114c) * 1.5;
  *(undefined4 *)((longlong)param_1 + 0x290c) = uVar1;
  uStack_30._0_4_ = 0;
  *(undefined8 *)((longlong)param_1 + 0x2934) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x293c) = 0;
  *(undefined4 *)(param_1 + 0x522) = uVar1;
  *(undefined4 *)(param_1 + 0x511) = uVar1;
  *(undefined4 *)(param_1 + 0x526) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x288c) = 0x43020000;
  *(undefined4 *)((longlong)param_1 + 0x2ac4) = 0xffffffff;
  FUN_14246fd50(param_1 + 0x530);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  local_38 = FUN_140a69100;
  pwVar4 = _guard_xfg_dispatch_icall_nop
                     (L"&UOakCharacterMovementComponent::NotifyMantleStarted",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res8,pwVar3 + 2,1);
  TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
            (param_1 + 0x23a,param_1,&local_38,local_res8);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_38 = (code *)&LAB_140a690d0;
  pwVar4 = _guard_xfg_dispatch_icall_nop
                     (L"&UOakCharacterMovementComponent::NotifyMantleFinished",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res8,pwVar3 + 2,1);
  TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
            (param_1 + 0x23c,param_1,&local_38,local_res8);
  param_1[0x55a] = 0x3fc00000;
  param_1[0x55b] = 0;
  return param_1;
}



// FUNCTION 140a50b10 FUN_140a50b10 body=40 status=ok
// SIG undefined FUN_140a50b10(void)

undefined8 * FUN_140a50b10(undefined8 *param_1)

{
  FUN_142cb2a00();
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x1e;
  *param_1 = &PTR_FUN_144210228;
  return param_1;
}



// FUNCTION 140a50b40 FUN_140a50b40 body=87 status=ok
// SIG undefined FUN_140a50b40(void)

undefined8 * FUN_140a50b40(undefined8 *param_1)

{
  FUN_142cde610();
  *param_1 = &PTR_FUN_144210500;
  *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) & 0xfffffffe;
  *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) | 2;
  *(undefined4 *)(param_1 + 0x48) = 0x441d8000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x4a) = 0x3f34fdf4;
  return param_1;
}



// FUNCTION 140a50ba0 FUN_140a50ba0 body=236 status=ok
// SIG undefined FUN_140a50ba0(void)

undefined8 * FUN_140a50ba0(undefined8 *param_1)

{
  FUN_142cde890();
  *param_1 = &PTR_FUN_14420a108;
  param_1[5] = &PTR_LAB_14420a600;
  *(undefined4 *)(param_1 + 0xc5) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc6) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0xbf800000;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x684) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  FUN_140590080(param_1 + 0xd2);
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined2 *)(param_1 + 0xd7) = 1;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xffffffef | 8;
  *(undefined1 *)((longlong)param_1 + 0x6ba) = 0;
  param_1[0xd8] = 0;
  return param_1;
}



// FUNCTION 140a50c90 FUN_140a50c90 body=40 status=ok
// SIG undefined FUN_140a50c90(void)

undefined8 * FUN_140a50c90(undefined8 *param_1)

{
  FUN_142cb3950();
  *(undefined4 *)((longlong)param_1 + 0x44) = 5;
  *param_1 = &PTR__scalar_deleting_destructor__14420b400;
  return param_1;
}



// FUNCTION 140a50cc0 FUN_140a50cc0 body=263 status=ok
// SIG undefined FUN_140a50cc0(void)

undefined8 * FUN_140a50cc0(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR_FUN_144210788;
  param_1[5] = &PTR_LAB_144211108;
  param_1[0x5a] = &PTR_LAB_144211138;
  FName::FName(param_1 + 0xf5,L"Texture",1);
  FName::FName(param_1 + 0xf6,L"VoGSpeaker",1);
  FName::FName(param_1 + 0xf7,L"Mask Density",1);
  FName::FName(param_1 + 0xf8,L"Material",1);
  *(undefined4 *)(param_1 + 0xf9) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0x42d20000;
  *(undefined1 *)(param_1 + 0x101) = 1;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x83c) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  FUN_1423df280(param_1,DAT_146aefc58);
  return param_1;
}



// FUNCTION 140a50dd0 FUN_140a50dd0 body=71 status=ok
// SIG undefined FUN_140a50dd0(void)

undefined8 * FUN_140a50dd0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *param_1 = &PTR_FUN_144211190;
  param_1[5] = &PTR_LAB_1442116d8;
  *(undefined2 *)(param_1 + 0x5a) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 7) = 5;
  return param_1;
}



// FUNCTION 140a50e20 FUN_140a50e20 body=189 status=ok
// SIG undefined FUN_140a50e20(void)

undefined8 * FUN_140a50e20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_144211708;
  param_1[5] = &PTR_LAB_144211b00;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3e800000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  return param_1;
}



// FUNCTION 140a50ee0 FUN_140a50ee0 body=107 status=ok
// SIG undefined FUN_140a50ee0(void)

void FUN_140a50ee0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      FUN_1409c5510(plVar2 + 0xb);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x2a;
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



// FUNCTION 140a50f50 ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator> body=130 status=ok
// SIG undefined ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>(void)

void TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
     ::
     ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140a50fe0 FUN_140a50fe0 body=396 status=ok
// SIG undefined FUN_140a50fe0(void)

void FUN_140a50fe0(longlong *param_1)

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
      if (bVar4) goto LAB_140a510a1;
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
LAB_140a510a1:
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
      FRichCurve::~FRichCurve((longlong)iStack_1c * 0xa0 + 0x28 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140a51170 FUN_140a51170 body=256 status=ok
// SIG undefined FUN_140a51170(void)

void FUN_140a51170(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x628) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x5d8);
  lVar1 = *(longlong *)(param_1 + 0x5d0);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x5d0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x5c8);
  lVar1 = *(longlong *)(param_1 + 0x5c0);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x5c0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  return;
}



// FUNCTION 140a51270 FUN_140a51270 body=107 status=ok
// SIG undefined FUN_140a51270(void)

void FUN_140a51270(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140a512e0 FUN_140a512e0 body=177 status=ok
// SIG undefined FUN_140a512e0(void)

void FUN_140a512e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2440) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x23f0);
  FUN_140591060(param_1 + 0x23d8);
  FUN_140591060(param_1 + 0x23c0);
  if (*(longlong *)(param_1 + 0x23a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x22e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x22d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x22b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x22a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2298) != 0) {
    FMemory::Free();
  }
  FUN_1409c4bb0(param_1);
  return;
}



// FUNCTION 140a513a0 FUN_140a513a0 body=105 status=ok
// SIG undefined FUN_140a513a0(void)

void FUN_140a513a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 140a51410 FUN_140a51410 body=113 status=ok
// SIG undefined FUN_140a51410(void)

void FUN_140a51410(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x18;
    do {
      FUN_140591060(lVar1);
      lVar1 = lVar1 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0xb8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140a51490 FUN_140a51490 body=115 status=ok
// SIG undefined FUN_140a51490(void)

void FUN_140a51490(longlong param_1)

{
  FRichCurve::~FRichCurve(param_1 + 0x410);
  FRichCurve::~FRichCurve(param_1 + 0x318);
  FRichCurve::~FRichCurve(param_1 + 0x298);
  FRichCurve::~FRichCurve(param_1 + 0x218);
  FRichCurve::~FRichCurve(param_1 + 0x1a0);
  FRichCurve::~FRichCurve(param_1 + 0x128);
  FRichCurve::~FRichCurve(param_1 + 0xa8);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a51510 FUN_140a51510 body=1053 status=ok
// SIG undefined FUN_140a51510(void)

void FUN_140a51510(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x25b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x24c8) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x2380);
  *(undefined4 *)(param_1 + 0x2350) = 0;
  if (*(longlong *)(param_1 + 0x2348) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2308);
  *(undefined4 *)(param_1 + 0x22e0) = 0;
  if (*(longlong *)(param_1 + 0x22d8) != 0) {
    FMemory::Free();
  }
  FUN_140a50fe0(param_1 + 0x2298);
  *(undefined4 *)(param_1 + 0x2270) = 0;
  if (*(longlong *)(param_1 + 0x2268) != 0) {
    FMemory::Free();
  }
  FUN_140a50fe0(param_1 + 0x2228);
  if (*(longlong *)(param_1 + 0x2120) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x1940) != '\0') {
    *(undefined1 *)(param_1 + 0x1940) = 0;
  }
  if (*(char *)(param_1 + 0x1878) != '\0') {
    *(undefined1 *)(param_1 + 0x1878) = 0;
  }
  if (*(char *)(param_1 + 0x1768) != '\0') {
    *(undefined1 *)(param_1 + 0x1768) = 0;
  }
  if (*(longlong *)(param_1 + 0x1740) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x16a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1610) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1578) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1480);
  thunk_FUN_142478640(param_1 + 0x145c);
  thunk_FUN_142478640(param_1 + 0x13b8);
  thunk_FUN_142478640(param_1 + 0x13ac);
  plVar3 = *(longlong **)(param_1 + 0x1398);
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
  if (*(longlong *)(param_1 + 0x1348) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x1298);
  FRichCurve::~FRichCurve(param_1 + 0x1220);
  if (*(longlong *)(param_1 + 0x11e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1190) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1148);
  thunk_FUN_142478640(param_1 + 0x113c);
  thunk_FUN_142478640(param_1 + 0x112c);
  if (*(char *)(param_1 + 0x10e8) != '\0') {
    *(undefined1 *)(param_1 + 0x10e8) = 0;
  }
  if (*(longlong *)(param_1 + 0xfc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xdf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xcc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x888);
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x878);
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x860);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x828);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x818);
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x628) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x6c0);
  FUN_14074e810(param_1 + 0x630);
  FTickFunction::~FTickFunction(param_1 + 0x5b8);
  thunk_FUN_142478640(param_1 + 0x2a4);
  thunk_FUN_142478640(param_1 + 0x298);
  thunk_FUN_142478640(param_1 + 0x28c);
  thunk_FUN_142478640(param_1 + 0x280);
  thunk_FUN_142478640(param_1 + 0x274);
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_1442046d0;
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_14416af28;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140a51930 FUN_140a51930 body=421 status=ok
// SIG undefined FUN_140a51930(void)

void FUN_140a51930(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x100);
  lVar2 = *(longlong *)(param_1 + 0xf8);
  if (iVar6 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x28);
    do {
      iVar5 = (int)plVar4[1];
      lVar2 = *plVar4;
      if (iVar5 != 0) {
        plVar3 = (longlong *)(lVar2 + 8);
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar2 = *plVar4;
      }
      if (lVar2 != 0) {
        FMemory::Free();
      }
      iVar5 = (int)plVar4[-1];
      lVar2 = plVar4[-2];
      if (iVar5 != 0) {
        plVar3 = (longlong *)(lVar2 + 0x10);
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar2 = plVar4[-2];
      }
      if (lVar2 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar4 + -4);
      plVar4 = plVar4 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar2 = *(longlong *)(param_1 + 0xf8);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a51ae0 FUN_140a51ae0 body=451 status=ok
// SIG undefined FUN_140a51ae0(void)

void FUN_140a51ae0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x618) != 0) {
    if (*(longlong *)(param_1 + 0x608) == 0) {
      **(longlong **)(param_1 + 0x610) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x610) = *(longlong *)(param_1 + 0x608);
      *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 8) = *(undefined8 *)(param_1 + 0x610);
      *(undefined8 *)(param_1 + 0x608) = 0;
    }
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
  }
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x568);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x478);
  lVar2 = *(longlong *)(param_1 + 0x470);
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x18);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x470);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x438);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x428);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  FUN_140a51cb0(param_1);
  return;
}



// FUNCTION 140a51cb0 FUN_140a51cb0 body=438 status=ok
// SIG undefined FUN_140a51cb0(void)

void FUN_140a51cb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x3a8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x3a0);
  }
  if ((plVar6 != (longlong *)0x0) ||
     ((*(int *)(param_1 + 0x3a8) != 0 &&
      (plVar6 = *(longlong **)(param_1 + 0x3a0), plVar6 != (longlong *)0x0)))) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x3a0),0,0);
      *(undefined8 *)(param_1 + 0x3a0) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x388);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_1 + 0x268);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140a51e70 FUN_140a51e70 body=129 status=ok
// SIG undefined FUN_140a51e70(void)

void * FUN_140a51e70(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 8);
    iVar1 = *(int *)((longlong)param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x10) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_140a6fe10(param_1,iVar1);
      if (_Src == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 8);
      if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
        _Dst = param_1;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140a51f00 FUN_140a51f00 body=90 status=ok
// SIG undefined FUN_140a51f00(void)

undefined1 * FUN_140a51f00(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  local_28 = *(undefined8 *)(param_2 + 0x18);
  FString::FString(local_20,param_2 + 0x20);
  FSoftObjectPath::operator=(param_1 + 0x18,&local_28);
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140a51f60 FUN_140a51f60 body=48 status=ok
// SIG undefined FUN_140a51f60(void)

longlong FUN_140a51f60(longlong param_1,longlong param_2)

{
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=();
  FString::operator=(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 140a51f90 FUN_140a51f90 body=359 status=ok
// SIG undefined FUN_140a51f90(void)

longlong * FUN_140a51f90(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    plVar2 = (longlong *)*param_1;
    for (iVar4 = (int)param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (plVar2[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar2[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar2[10] != 0) {
        FMemory::Free();
      }
      if (plVar2[8] != 0) {
        FMemory::Free();
      }
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x11;
    }
    iVar4 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406f4a40(param_1,iVar4);
      puVar3 = (undefined8 *)*param_1;
      if (iVar4 != 0) {
        lVar5 = lVar5 + 0x10;
        do {
          *puVar3 = 0;
          iVar1 = *(int *)(lVar5 + -8);
          _Src = *(void **)(lVar5 + -0x10);
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1);
          }
          FUN_140a4f390(puVar3 + 2,lVar5);
          FString::FString(puVar3 + 0xf,lVar5 + 0x68);
          puVar3 = puVar3 + 0x11;
          lVar5 = lVar5 + 0x88;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140a52100 FUN_140a52100 body=218 status=ok
// SIG undefined FUN_140a52100(void)

undefined4 * FUN_140a52100(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  FString::operator=(param_1 + 6,param_2 + 6);
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  if (plVar1 != (longlong *)(param_2 + 2)) {
    iVar5 = param_1[4];
    if (iVar5 != 0) {
      plVar4 = (longlong *)(*plVar1 + 8);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = param_2[4];
    puVar2 = *(undefined4 **)(param_2 + 2);
    param_1[4] = iVar5;
    if ((iVar5 == 0) && (param_1[5] == 0)) {
      param_1[5] = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
      puVar3 = (undefined4 *)*plVar1;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = *puVar2;
        FString::FString(puVar3 + 2,puVar2 + 2);
        puVar3 = puVar3 + 6;
        puVar2 = puVar2 + 6;
      }
    }
  }
  return param_1;
}



// FUNCTION 140a521e0 FUN_140a521e0 body=119 status=ok
// SIG undefined FUN_140a521e0(void)

void FUN_140a521e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)uVar2;
    uStack_64 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    puVar1[2] = param_1 + 1;
  }
  local_58[0] = &LAB_140a5a530;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,*param_1,local_58);
  return;
}



// FUNCTION 140a52260 FUN_140a52260 body=327 status=ok
// SIG undefined FUN_140a52260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a52260(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_2 != 0) && (plVar3 = (longlong *)FUN_142ceeb40(param_2,1), plVar3 != (longlong *)0x0))
  {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = plVar3[0x2d];
      if (lVar4 == 0) {
        local_28 = _DAT_1468b5d90;
        local_20 = DAT_1468b5d98;
      }
      else {
        local_28 = *(undefined8 *)(lVar4 + 0x220);
        local_20 = *(undefined4 *)(lVar4 + 0x228);
      }
      cVar1 = *(char *)(param_2 + 0x418);
      local_18 = local_28;
      local_10 = local_20;
      FUN_142ce8a30(param_2,1);
      if ((*(char *)*param_1 != '\0') && (cVar1 == '\x01')) {
        FUN_14223c850(plVar3,&local_18,0,0,0);
      }
      if (*(char *)(param_1[1] + 0xec1) == '\x03') {
        uVar5 = 3;
      }
      else {
        if (*(char *)*param_1 == '\0') {
          return;
        }
        uVar5 = 4;
      }
      (**(code **)(*plVar3 + 0xbc8))(plVar3,uVar5);
    }
  }
  return;
}



// FUNCTION 140a523b0 FUN_140a523b0 body=761 status=ok
// SIG undefined FUN_140a523b0(void)

void FUN_140a523b0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res20;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  
  if (param_2 != 0) {
    lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakCharacterMovementComponent::OnSlidingImpactParticleSystemFinished",
                          L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res20,pwVar5 + 2,1);
      plVar12 = (longlong *)(param_2 + 0x8a8);
      uVar2 = *(undefined8 *)*param_1;
      FWeakObjectPtr::operator=(&local_78,0);
      local_70 = 0;
      FWeakObjectPtr::operator=(&local_78,uVar2);
      local_70 = local_res20;
      if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_78), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_70);
      }
      piVar9 = (int *)*plVar12;
      iVar1 = *(int *)(param_2 + 0x8b0);
      for (piVar11 = piVar9; piVar11 != piVar9 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
        if (((*piVar11 == local_78) && (piVar11[1] == local_74)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar11), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_78), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar11 + 2) == local_70)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar11 - (longlong)piVar9 >> 4) != -1) goto LAB_140a52569;
          break;
        }
      }
      iVar1 = *(int *)(param_2 + 0x8b0);
      *(int *)(param_2 + 0x8b0) = iVar1 + 1;
      if (*(int *)(param_2 + 0x8b4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar12);
      *piVar9 = local_78;
      piVar9[1] = local_74;
      *(longlong *)(piVar9 + 2) = local_70;
LAB_140a52569:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      local_58 = *(undefined1 *)param_1[1];
      local_68 = param_2;
      local_60 = param_3;
      FUN_140590080(local_50);
      lVar7 = *param_1;
      if ((*(longlong *)(lVar7 + 8) != 0) && (*(char *)param_1[2] == '\0')) {
        *(char *)param_1[2] = '\x01';
        FUN_140a6d950(*param_1,&local_68,param_2,0);
        lVar7 = *param_1;
      }
      iVar1 = *(int *)(lVar7 + 0xc0);
      *(int *)(lVar7 + 0xc0) = iVar1 + 1;
      if (*(int *)(lVar7 + 0xc4) < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(lVar7 + 0xb8),iVar1);
      }
      plVar12 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(lVar7 + 0xb8));
      *plVar12 = local_68;
      plVar12[1] = local_60;
      *(undefined1 *)(plVar12 + 2) = local_58;
      FUN_14058f8f0(plVar12 + 3,local_50);
      *(undefined4 *)(plVar12 + 5) = local_40;
      FUN_142397000(param_2,0,0,1);
      FUN_142398ea0(param_2,*(undefined8 *)param_1[3]);
      *(byte *)(param_2 + 0x24c) = *(byte *)(param_2 + 0x24c) & 0xef;
      if (*(char *)param_1[1] == '\0') {
        FUN_142398e60(param_2,2,1);
        puVar10 = (undefined8 *)param_1[6];
      }
      else {
        FUN_142398e60(param_2,1,1);
        puVar10 = (undefined8 *)param_1[4];
      }
      FUN_142382f60(param_2,*puVar10,&DAT_146532188,*(undefined8 *)param_1[5]);
      FUN_140591060(local_50);
    }
  }
  return;
}



// FUNCTION 140a52cb0 FUN_140a52cb0 body=43 status=ok
// SIG undefined FUN_140a52cb0(void)

undefined8 * FUN_140a52cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140a52ce0 FUN_140a52ce0 body=43 status=ok
// SIG undefined FUN_140a52ce0(void)

undefined8 * FUN_140a52ce0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140a52d10 FUN_140a52d10 body=52 status=ok
// SIG undefined FUN_140a52d10(void)

undefined8 FUN_140a52d10(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d8);
  }
  return param_1;
}



// FUNCTION 140a52d50 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AFGConveyorAttachmentHologram::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}


