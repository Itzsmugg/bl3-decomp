// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b96ed0 FUN_140b96ed0 body=510 status=ok
// SIG undefined FUN_140b96ed0(void)

int FUN_140b96ed0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar9 = 0;
  iVar7 = 0;
  if ((*(longlong *)*param_1 == 0) ||
     (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
    bVar15 = 0;
    uVar14 = uVar9;
  }
  else {
    bVar15 = 1;
    uVar14 = uVar9;
  }
  do {
    iVar13 = (int)uVar14;
    uVar9 = uVar9 + 1;
    uVar14 = (ulonglong)(iVar13 + 1);
    if ((longlong)uVar9 < lVar11) {
      lVar8 = uVar9 * 0xe8;
      do {
        if ((*(longlong *)(lVar8 + *param_1) == 0) ||
           (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xe8;
      } while ((longlong)uVar9 < lVar11);
    }
    iVar10 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar10 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0xe8 + 0x18 + *param_1);
        do {
          FUN_1404bf650(plVar12 + 1);
          plVar4 = (longlong *)*plVar12;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar4 = (longlong *)plVar12[-2];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 0x1d;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0xe8 + *param_1),
                   (void *)((longlong)iVar13 * 0xe8 + *param_1),(longlong)iVar10 * 0xe8);
      }
      iVar7 = iVar7 + iVar10;
    }
    bVar15 = bVar15 ^ 1;
    if (lVar11 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar3 - iVar7;
    }
  } while( true );
}



// FUNCTION 140b970d0 FUN_140b970d0 body=287 status=ok
// SIG undefined FUN_140b970d0(void)

void FUN_140b970d0(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  FUN_1425da060(&local_118,param_4);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140b971f0 FUN_140b971f0 body=287 status=ok
// SIG undefined FUN_140b971f0(void)

void FUN_140b971f0(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  FUN_140daa0d0(&local_118,param_4);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140b97310 FUN_140b97310 body=287 status=ok
// SIG undefined FUN_140b97310(void)

void FUN_140b97310(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  FUN_140daa510(&local_118,param_4);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140b97430 FUN_140b97430 body=498 status=ok
// SIG undefined FUN_140b97430(void)

void FUN_140b97430(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  undefined1 local_138 [16];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar2 != '\0')) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar3 = plVar5 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((lVar4 != 0) &&
         (cVar2 = FUniqueNetIdWrapper::operator==(lVar4 + 0x158,param_2), cVar2 != '\0')) {
        plVar3 = (longlong *)FUN_1425bd330(lVar4,6);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = FUN_1404e6fc0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        local_res8[0] = param_4;
        FUN_1423e4ec0(&local_128,plVar3,0);
        local_40 = param_3 << 5 | local_40 & 0xdf;
        if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
          (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
          if ((local_ff & 0x10) != 0) {
            FArchive::ByteSwap(&local_128,local_res8,4);
          }
        }
        else {
          local_res8[0] = *(undefined4 *)*local_120;
          *local_120 = *local_120 + 4;
        }
        (**(code **)(*plVar3 + 0x2c8))(plVar3,local_138,&local_128,0);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_128);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b97630 FUN_140b97630 body=378 status=ok
// SIG undefined FUN_140b97630(void)

void FUN_140b97630(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_48;
  longlong local_40 [5];
  
  cVar3 = FUN_1407ce070();
  if (cVar3 != '\0') {
    plVar4 = (longlong *)(param_1 + 0xa8);
    if (*(longlong *)*param_2 != 0) {
      cVar3 = FUN_1407ce010((longlong *)*param_2 + 1);
      if (cVar3 != '\0') {
        plVar5 = (longlong *)*plVar4;
        plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0xb0) * 5;
        if (plVar5 != plVar1) {
          do {
            if ((*(longlong *)*plVar5 == *(longlong *)*param_2) &&
               (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
                *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
              FUN_14217e740(&local_48);
              FUN_142194380(&local_48,2,0,1,0);
              local_48 = CONCAT71(local_48._1_7_,*param_3);
              FUN_14217f450(plVar5 + 1,&local_48);
              plVar4 = &local_48;
              goto LAB_140b97742;
            }
            plVar5 = plVar5 + 5;
          } while (plVar5 != plVar1);
        }
        local_48 = *param_2;
        FUN_14217e740(local_40);
        FUN_142194380(local_40,2,0,1,0);
        local_40[0]._0_1_ = *param_3;
        iVar2 = *(int *)(param_1 + 0xb0);
        *(int *)(param_1 + 0xb0) = iVar2 + 1;
        if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
        }
        plVar4 = (longlong *)(*plVar4 + (longlong)iVar2 * 0x28);
        *plVar4 = local_48;
        FUN_14217e5b0(plVar4 + 1,local_40);
        plVar4 = local_40;
LAB_140b97742:
        FUN_14217f430(plVar4);
      }
    }
    FUN_1421957f0(param_1);
  }
  return;
}



// FUNCTION 140b977b0 FUN_140b977b0 body=2397 status=ok
// SIG undefined FUN_140b977b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140b977b0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [80];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  double local_48;
  ulonglong local_38;
  double dVar7;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((param_1 != param_2) && (puVar10 = param_1 + 0x1d, puVar10 != param_2)) {
    puVar14 = param_1 + 0x23;
    local_130 = param_2;
    do {
      local_128 = *puVar10;
      local_120 = (longlong *)puVar14[-5];
      puVar14[-5] = 0;
      *puVar10 = 0;
      local_118 = puVar14[-4];
      local_110 = (longlong *)puVar14[-3];
      puVar14[-3] = 0;
      puVar14[-4] = 0;
      local_100 = puVar14[-1];
      local_f8 = *puVar14;
      *puVar14 = 0;
      puVar14[-1] = 0;
      local_f0 = puVar14[1];
      puVar14[1] = 0;
      local_e8 = puVar14[2];
      puVar14[2] = 0;
      local_d8 = *(undefined4 *)(puVar14 + 4);
      local_d4 = *(undefined4 *)((longlong)puVar14 + 0x24);
      local_d0 = *(undefined1 *)(puVar14 + 5);
      local_cf = *(undefined1 *)((longlong)puVar14 + 0x29);
      local_ce = *(undefined1 *)((longlong)puVar14 + 0x2a);
      local_cd = *(undefined1 *)((longlong)puVar14 + 0x2b);
      local_cc = *(undefined1 *)((longlong)puVar14 + 0x2c);
      local_cb = *(undefined1 *)((longlong)puVar14 + 0x2d);
      local_ca = *(undefined1 *)((longlong)puVar14 + 0x2e);
      local_c9 = *(undefined1 *)((longlong)puVar14 + 0x2f);
      local_c8 = *(undefined1 *)(puVar14 + 6);
      local_c7 = *(undefined1 *)((longlong)puVar14 + 0x31);
      local_c4 = *(undefined4 *)((longlong)puVar14 + 0x34);
      local_c0 = *(undefined4 *)(puVar14 + 7);
      local_bc = *(undefined4 *)((longlong)puVar14 + 0x3c);
      local_108 = &PTR_FUN_143f769a8;
      local_e0 = &PTR_FUN_143f769a0;
      local_138 = puVar10;
      TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
      ::
      TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                (local_b8,puVar14 + 8);
      local_68 = puVar14[0x12];
      local_48 = (double)puVar14[0x16];
      dVar6 = (double)param_1[0x1c];
      dVar7 = (double)param_1[0x1c];
      local_60 = puVar14[0x13];
      puVar14[0x13] = 0;
      puVar14[0x12] = 0;
      local_58 = *(undefined4 *)(puVar14 + 0x14);
      local_54 = *(undefined4 *)((longlong)puVar14 + 0xa4);
      local_50 = *(undefined4 *)(puVar14 + 0x15);
      puVar12 = puVar10;
      if (local_48 < dVar7 || local_48 == dVar6) {
        if ((double)puVar14[-7] <= local_48 && local_48 != (double)puVar14[-7]) {
          puVar11 = puVar14 + -0x1b;
          puVar13 = puVar10;
          puVar9 = puVar14 + -0x23;
          do {
            puVar10 = puVar9;
            if (puVar13 != puVar10) {
              *puVar13 = *puVar10;
              *puVar10 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + 1,puVar11 + -7);
            }
            puVar12 = puVar11 + -6;
            if (puVar13 + 2 != puVar12) {
              puVar13[2] = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + 3,puVar11 + -5);
            }
            puVar12 = puVar11 + -3;
            if (puVar13 + 5 != puVar12) {
              puVar13[5] = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + 6,puVar11 + -2);
            }
            plVar1 = puVar13 + 7;
            plVar2 = puVar11 + -1;
            if (plVar1 != plVar2) {
              if (*plVar1 != 0) {
                FMemory::Free();
              }
              *plVar1 = *plVar2;
              *plVar2 = 0;
              *(undefined4 *)(puVar13 + 8) = *(undefined4 *)puVar11;
              *(undefined4 *)((longlong)puVar13 + 0x44) = *(undefined4 *)((longlong)puVar11 + 4);
              *puVar11 = 0;
            }
            *(undefined4 *)(puVar13 + 10) = *(undefined4 *)(puVar11 + 2);
            *(undefined4 *)((longlong)puVar13 + 0x54) = *(undefined4 *)((longlong)puVar11 + 0x14);
            *(undefined1 *)(puVar13 + 0xb) = *(undefined1 *)(puVar11 + 3);
            *(undefined1 *)((longlong)puVar13 + 0x59) = *(undefined1 *)((longlong)puVar11 + 0x19);
            *(undefined1 *)((longlong)puVar13 + 0x5a) = *(undefined1 *)((longlong)puVar11 + 0x1a);
            *(undefined1 *)((longlong)puVar13 + 0x5b) = *(undefined1 *)((longlong)puVar11 + 0x1b);
            *(undefined1 *)((longlong)puVar13 + 0x5c) = *(undefined1 *)((longlong)puVar11 + 0x1c);
            *(undefined1 *)((longlong)puVar13 + 0x5d) = *(undefined1 *)((longlong)puVar11 + 0x1d);
            *(undefined1 *)((longlong)puVar13 + 0x5e) = *(undefined1 *)((longlong)puVar11 + 0x1e);
            *(undefined1 *)((longlong)puVar13 + 0x5f) = *(undefined1 *)((longlong)puVar11 + 0x1f);
            *(undefined1 *)(puVar13 + 0xc) = *(undefined1 *)(puVar11 + 4);
            *(undefined1 *)((longlong)puVar13 + 0x61) = *(undefined1 *)((longlong)puVar11 + 0x21);
            *(undefined4 *)((longlong)puVar13 + 100) = *(undefined4 *)((longlong)puVar11 + 0x24);
            *(undefined4 *)(puVar13 + 0xd) = *(undefined4 *)(puVar11 + 5);
            *(undefined4 *)((longlong)puVar13 + 0x6c) = *(undefined4 *)((longlong)puVar11 + 0x2c);
            TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::operator=(puVar13 + 0xe,puVar11 + 6);
            puVar12 = puVar11 + 0x10;
            if (puVar13 + 0x18 != puVar12) {
              puVar13[0x18] = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + 0x19,puVar11 + 0x11)
              ;
            }
            *(undefined4 *)(puVar13 + 0x1a) = *(undefined4 *)(puVar11 + 0x12);
            *(undefined4 *)((longlong)puVar13 + 0xd4) = *(undefined4 *)((longlong)puVar11 + 0x94);
            *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(puVar11 + 0x13);
            puVar13[0x1c] = puVar11[0x14];
            pdVar4 = (double *)(puVar11 + -9);
            puVar11 = puVar11 + -0x1d;
            puVar12 = local_138;
            puVar13 = puVar10;
            puVar9 = puVar10 + -0x1d;
          } while (*pdVar4 <= local_48 && local_48 != *pdVar4);
        }
        if (puVar10 != &local_128) {
          *puVar10 = local_128;
          local_128 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar10 + 1,&local_120);
        }
        if (puVar10 + 2 != &local_118) {
          puVar10[2] = local_118;
          local_118 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar10 + 3,&local_110);
        }
        if (puVar10 + 5 != &local_100) {
          puVar10[5] = local_100;
          local_100 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar10 + 6,&local_f8);
        }
        plVar1 = puVar10 + 7;
        if (plVar1 != &local_f0) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          *plVar1 = local_f0;
          *(undefined4 *)(puVar10 + 8) = (undefined4)local_e8;
          *(undefined4 *)((longlong)puVar10 + 0x44) = local_e8._4_4_;
          local_e8 = 0;
          local_f0 = 0;
        }
        *(undefined4 *)(puVar10 + 10) = local_d8;
        *(undefined4 *)((longlong)puVar10 + 0x54) = local_d4;
        *(undefined1 *)(puVar10 + 0xb) = local_d0;
        *(undefined1 *)((longlong)puVar10 + 0x59) = local_cf;
        *(undefined1 *)((longlong)puVar10 + 0x5a) = local_ce;
        *(undefined1 *)((longlong)puVar10 + 0x5b) = local_cd;
        *(undefined1 *)((longlong)puVar10 + 0x5c) = local_cc;
        *(undefined1 *)((longlong)puVar10 + 0x5d) = local_cb;
        *(undefined1 *)((longlong)puVar10 + 0x5e) = local_ca;
        *(undefined1 *)((longlong)puVar10 + 0x5f) = local_c9;
        *(undefined1 *)(puVar10 + 0xc) = local_c8;
        *(undefined1 *)((longlong)puVar10 + 0x61) = local_c7;
        *(undefined4 *)((longlong)puVar10 + 100) = local_c4;
        *(undefined4 *)(puVar10 + 0xd) = local_c0;
        *(undefined4 *)((longlong)puVar10 + 0x6c) = local_bc;
        TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
        ::operator=(puVar10 + 0xe,local_b8);
        if (puVar10 + 0x18 != &local_68) {
          puVar10[0x18] = local_68;
          local_68 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar10 + 0x19,&local_60);
        }
        *(undefined4 *)(puVar10 + 0x1a) = local_58;
        *(undefined4 *)((longlong)puVar10 + 0xd4) = local_54;
        *(undefined4 *)(puVar10 + 0x1b) = local_50;
        puVar10[0x1c] = local_48;
      }
      else {
        puVar11 = puVar14 + 0x17;
        if (puVar10 != param_1) {
          puVar10 = puVar14 + -0x1b;
          puVar13 = puVar14 + 0x1d;
          do {
            puVar11 = puVar11 + -0x1d;
            puVar12 = puVar10 + -8;
            if (puVar11 != puVar12) {
              *puVar11 = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + -0x22,puVar10 + -7);
            }
            puVar12 = puVar10 + -6;
            if (puVar13 + -0x21 != puVar12) {
              puVar13[-0x21] = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + -0x20,puVar10 + -5);
            }
            puVar12 = puVar10 + -3;
            if (puVar13 + -0x1e != puVar12) {
              puVar13[-0x1e] = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + -0x1d,puVar10 + -2);
            }
            plVar1 = puVar13 + -0x1c;
            plVar2 = puVar10 + -1;
            if (plVar1 != plVar2) {
              if (*plVar1 != 0) {
                FMemory::Free();
              }
              *plVar1 = *plVar2;
              *plVar2 = 0;
              *(undefined4 *)(puVar13 + -0x1b) = *(undefined4 *)puVar10;
              *(undefined4 *)((longlong)puVar13 + -0xd4) = *(undefined4 *)((longlong)puVar10 + 4);
              *puVar10 = 0;
            }
            *(undefined4 *)(puVar13 + -0x19) = *(undefined4 *)(puVar10 + 2);
            *(undefined4 *)((longlong)puVar13 + -0xc4) = *(undefined4 *)((longlong)puVar10 + 0x14);
            *(undefined1 *)(puVar13 + -0x18) = *(undefined1 *)(puVar10 + 3);
            *(undefined1 *)((longlong)puVar13 + -0xbf) = *(undefined1 *)((longlong)puVar10 + 0x19);
            *(undefined1 *)((longlong)puVar13 + -0xbe) = *(undefined1 *)((longlong)puVar10 + 0x1a);
            *(undefined1 *)((longlong)puVar13 + -0xbd) = *(undefined1 *)((longlong)puVar10 + 0x1b);
            *(undefined1 *)((longlong)puVar13 + -0xbc) = *(undefined1 *)((longlong)puVar10 + 0x1c);
            *(undefined1 *)((longlong)puVar13 + -0xbb) = *(undefined1 *)((longlong)puVar10 + 0x1d);
            *(undefined1 *)((longlong)puVar13 + -0xba) = *(undefined1 *)((longlong)puVar10 + 0x1e);
            *(undefined1 *)((longlong)puVar13 + -0xb9) = *(undefined1 *)((longlong)puVar10 + 0x1f);
            *(undefined1 *)(puVar13 + -0x17) = *(undefined1 *)(puVar10 + 4);
            *(undefined1 *)((longlong)puVar13 + -0xb7) = *(undefined1 *)((longlong)puVar10 + 0x21);
            *(undefined4 *)((longlong)puVar13 + -0xb4) = *(undefined4 *)((longlong)puVar10 + 0x24);
            *(undefined4 *)(puVar13 + -0x16) = *(undefined4 *)(puVar10 + 5);
            *(undefined4 *)((longlong)puVar13 + -0xac) = *(undefined4 *)((longlong)puVar10 + 0x2c);
            TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::operator=(puVar13 + -0x15,puVar10 + 6);
            puVar12 = puVar10 + 0x10;
            if (puVar13 + -0xb != puVar12) {
              puVar13[-0xb] = *puVar12;
              *puVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + -10,puVar10 + 0x11);
            }
            *(undefined4 *)(puVar13 + -9) = *(undefined4 *)(puVar10 + 0x12);
            *(undefined4 *)((longlong)puVar13 + -0x44) = *(undefined4 *)((longlong)puVar10 + 0x94);
            *(undefined4 *)(puVar13 + -8) = *(undefined4 *)(puVar10 + 0x13);
            puVar13[-7] = puVar10[0x14];
            puVar9 = puVar10 + -8;
            puVar10 = puVar10 + -0x1d;
            puVar12 = local_138;
            puVar13 = puVar13 + -0x1d;
          } while (puVar9 != param_1);
        }
        if (param_1 != &local_128) {
          *param_1 = local_128;
          local_128 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_120);
        }
        if (param_1 + 2 != &local_118) {
          param_1[2] = local_118;
          local_118 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&local_110);
        }
        if (param_1 + 5 != &local_100) {
          param_1[5] = local_100;
          local_100 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,&local_f8);
        }
        plVar1 = param_1 + 7;
        if (plVar1 != &local_f0) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          *plVar1 = local_f0;
          *(undefined4 *)(param_1 + 8) = (undefined4)local_e8;
          *(undefined4 *)((longlong)param_1 + 0x44) = local_e8._4_4_;
          local_e8 = 0;
          local_f0 = 0;
        }
        *(undefined4 *)(param_1 + 10) = local_d8;
        *(undefined4 *)((longlong)param_1 + 0x54) = local_d4;
        *(undefined1 *)(param_1 + 0xb) = local_d0;
        *(undefined1 *)((longlong)param_1 + 0x59) = local_cf;
        *(undefined1 *)((longlong)param_1 + 0x5a) = local_ce;
        *(undefined1 *)((longlong)param_1 + 0x5b) = local_cd;
        *(undefined1 *)((longlong)param_1 + 0x5c) = local_cc;
        *(undefined1 *)((longlong)param_1 + 0x5d) = local_cb;
        *(undefined1 *)((longlong)param_1 + 0x5e) = local_ca;
        *(undefined1 *)((longlong)param_1 + 0x5f) = local_c9;
        *(undefined1 *)(param_1 + 0xc) = local_c8;
        *(undefined1 *)((longlong)param_1 + 0x61) = local_c7;
        *(undefined4 *)((longlong)param_1 + 100) = local_c4;
        *(undefined4 *)(param_1 + 0xd) = local_c0;
        *(undefined4 *)((longlong)param_1 + 0x6c) = local_bc;
        TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
        ::operator=(param_1 + 0xe,local_b8);
        if (param_1 + 0x18 != &local_68) {
          param_1[0x18] = local_68;
          local_68 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_60);
        }
        *(undefined4 *)(param_1 + 0x1a) = local_58;
        *(undefined4 *)((longlong)param_1 + 0xd4) = local_54;
        *(undefined4 *)(param_1 + 0x1b) = local_50;
        param_1[0x1c] = local_48;
      }
      FUN_1404bf650(&local_108);
      plVar1 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      plVar1 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_120 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      puVar10 = puVar12 + 0x1d;
      puVar14 = puVar14 + 0x1d;
      param_2 = local_130;
    } while (puVar10 != local_130);
  }
  return param_2;
}



// FUNCTION 140b98110 FUN_140b98110 body=692 status=ok
// SIG undefined FUN_140b98110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b98110(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined **local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [80];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar5 = (param_2 - param_1) / 0xe8;
  lVar9 = lVar5 >> 1;
  if (0 < lVar9) {
    puVar8 = (undefined8 *)(param_1 + 0x30 + lVar9 * 0xe8);
    do {
      puVar3 = puVar8 + -0x1d;
      local_118 = &PTR_FUN_143f769a8;
      local_138 = puVar8[-0x23];
      lVar9 = lVar9 + -1;
      local_130 = (longlong *)puVar8[-0x22];
      puVar8[-0x22] = 0;
      puVar8[-0x23] = 0;
      local_128 = puVar8[-0x21];
      local_120 = (longlong *)puVar8[-0x20];
      puVar8[-0x20] = 0;
      puVar8[-0x21] = 0;
      local_110 = puVar8[-0x1e];
      local_108 = *puVar3;
      *puVar3 = 0;
      puVar8[-0x1e] = 0;
      local_100 = puVar8[-0x1c];
      puVar8[-0x1c] = 0;
      local_f8 = *(undefined4 *)(puVar8 + -0x1b);
      local_f4 = *(undefined4 *)((longlong)puVar8 + -0xd4);
      puVar8[-0x1b] = 0;
      local_e8 = *(undefined4 *)(puVar8 + -0x19);
      local_e4 = *(undefined4 *)((longlong)puVar8 + -0xc4);
      local_e0 = *(undefined1 *)(puVar8 + -0x18);
      local_df = *(undefined1 *)((longlong)puVar8 + -0xbf);
      local_de = *(undefined1 *)((longlong)puVar8 + -0xbe);
      local_dd = *(undefined1 *)((longlong)puVar8 + -0xbd);
      local_dc = *(undefined1 *)((longlong)puVar8 + -0xbc);
      local_db = *(undefined1 *)((longlong)puVar8 + -0xbb);
      local_da = *(undefined1 *)((longlong)puVar8 + -0xba);
      local_d9 = *(undefined1 *)((longlong)puVar8 + -0xb9);
      local_d8 = *(undefined1 *)(puVar8 + -0x17);
      local_d7 = *(undefined1 *)((longlong)puVar8 + -0xb7);
      local_d4 = *(undefined4 *)((longlong)puVar8 + -0xb4);
      local_d0 = *(undefined4 *)(puVar8 + -0x16);
      local_cc = *(undefined4 *)((longlong)puVar8 + -0xac);
      local_f0 = &PTR_FUN_143f769a0;
      TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
      ::
      TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                (local_c8,puVar8 + -0x15);
      local_78 = puVar8[-0xb];
      local_58 = puVar8[-7];
      local_70 = puVar8[-10];
      puVar8[-10] = 0;
      puVar8[-0xb] = 0;
      local_68 = *(undefined4 *)(puVar8 + -9);
      local_64 = *(undefined4 *)((longlong)puVar8 + -0x44);
      local_60 = *(undefined4 *)(puVar8 + -8);
      local_148 = param_3;
      FUN_140b98c30(param_1,lVar9,lVar5,&local_138);
      FUN_1404bf650(&local_118);
      plVar7 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      puVar8 = puVar3;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 140b983d0 FUN_140b983d0 body=127 status=ok
// SIG undefined FUN_140b983d0(void)

void FUN_140b983d0(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0xe0);
  if (*(double *)(param_1 + 0xe0) <= dVar1 && dVar1 != *(double *)(param_1 + 0xe0)) {
    FUN_140b99380(param_2,param_1);
    dVar1 = *(double *)(param_2 + 0xe0);
  }
  if (dVar1 < *(double *)(param_3 + 0xe0)) {
    FUN_140b99380(param_3,param_2);
    if (*(double *)(param_1 + 0xe0) <= *(double *)(param_2 + 0xe0) &&
        *(double *)(param_2 + 0xe0) != *(double *)(param_1 + 0xe0)) {
      FUN_140b99380(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 140b98450 FUN_140b98450 body=2016 status=ok
// SIG undefined FUN_140b98450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b98450(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_718 [32];
  ulonglong local_6f8;
  ulonglong local_6f0;
  ulonglong *local_6e8;
  undefined1 local_6d8 [8];
  longlong *local_6d0;
  longlong *local_6c0;
  undefined1 local_6b8 [208];
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  longlong *local_5d0;
  undefined1 local_5c8 [208];
  undefined1 local_4f8 [8];
  longlong *local_4f0;
  longlong *local_4e0;
  undefined1 local_4d8 [208];
  undefined1 local_408 [8];
  longlong *local_400;
  longlong *local_3f0;
  undefined1 local_3e8 [208];
  undefined1 local_318 [8];
  longlong *local_310;
  longlong *local_300;
  undefined1 local_2f8 [208];
  undefined1 local_228 [8];
  longlong *local_220;
  longlong *local_210;
  undefined1 local_208 [208];
  undefined1 local_138 [8];
  longlong *local_130;
  longlong *local_120;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  lVar3 = param_3 - 0xe8;
  uVar12 = ((longlong)(param_3 - param_2) / 0xe8 >> 1) * 0xe8 + param_2;
  lVar4 = (longlong)(lVar3 - param_2) / 0xe8;
  local_6f8 = param_2;
  local_6f0 = param_3;
  local_6e8 = param_1;
  if (lVar4 < 0x29) {
    FUN_140b983d0(param_2,uVar12,lVar3);
  }
  else {
    lVar8 = lVar4 + 1 >> 3;
    lVar4 = lVar8 * 0xe8 + param_2;
    FUN_140b983d0(param_2,lVar4,lVar8 * 0x1d0 + param_2);
    FUN_140b983d0(uVar12 + lVar8 * -0xe8,uVar12,lVar8 * 0xe8 + uVar12,param_4);
    lVar9 = lVar3 + lVar8 * -0xe8;
    FUN_140b983d0(lVar3 + lVar8 * -0x1d0,lVar9,lVar3,param_4);
    FUN_140b983d0(lVar4,uVar12,lVar9,param_4);
    param_2 = local_6f8;
    param_3 = local_6f0;
  }
  uVar10 = uVar12 + 0xe8;
  for (; param_2 < uVar12; uVar12 = uVar12 - 0xe8) {
    if ((*(double *)(uVar12 + 0xe0) < *(double *)(uVar12 - 8)) ||
       (*(double *)(uVar12 - 8) < *(double *)(uVar12 + 0xe0))) break;
  }
  uVar11 = uVar10;
  uVar13 = uVar12;
  if (uVar10 < param_3) {
    do {
      uVar11 = uVar10;
      if ((*(double *)(uVar12 + 0xe0) < *(double *)(uVar10 + 0xe0)) ||
         (*(double *)(uVar10 + 0xe0) < *(double *)(uVar12 + 0xe0))) break;
      uVar10 = uVar10 + 0xe8;
      uVar11 = uVar10;
    } while (uVar10 < param_3);
  }
joined_r0x000140b985f9:
  do {
    uVar6 = uVar12;
    if (param_3 <= uVar10) {
joined_r0x000140b986f3:
      for (; param_2 < uVar12; uVar12 = uVar12 - 0xe8) {
        uVar14 = uVar6 - 0xe8;
        if (*(double *)(uVar6 - 8) <= *(double *)(uVar13 + 0xe0)) {
          param_3 = local_6f0;
          if (*(double *)(uVar6 - 8) < *(double *)(uVar13 + 0xe0)) break;
          uVar13 = uVar13 - 0xe8;
          if (uVar13 != uVar14) {
            FUN_140b9afc0(local_5e8,uVar13);
            FUN_140b9ef30(uVar13,uVar14);
            FUN_140b9ef30(uVar14,local_5e8);
            FUN_1404bf650(local_5c8);
            plVar7 = local_5d0;
            if (local_5d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_5d0 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_5d0)(local_5d0);
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
            plVar7 = local_5e0;
            if (local_5e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_5e0 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_5e0)(local_5e0);
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
        }
        uVar6 = uVar14;
        param_3 = local_6f0;
      }
      if (uVar12 == param_2) {
        if (uVar10 == param_3) {
          *local_6e8 = uVar13;
          local_6e8[1] = uVar11;
          return;
        }
        if (uVar11 != uVar10) {
          FUN_140b9afc0(local_4f8,uVar13);
          FUN_140b9ef30(uVar13,uVar11);
          FUN_140b9ef30(uVar11,local_4f8);
          FUN_1404bf650(local_4d8);
          plVar7 = local_4e0;
          if (local_4e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_4e0 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_4e0)(local_4e0);
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
          plVar7 = local_4f0;
          if (local_4f0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_4f0 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_4f0)(local_4f0);
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
        FUN_140b9afc0(local_408,uVar13);
        FUN_140b9ef30(uVar13,uVar10);
        FUN_140b9ef30(uVar10,local_408);
        FUN_1404bf650(local_3e8);
        plVar7 = local_3f0;
        if (local_3f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_3f0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_3f0)(local_3f0);
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
        plVar7 = local_400;
        if (local_400 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_400 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_400)(local_400);
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
        uVar10 = uVar10 + 0xe8;
        uVar11 = uVar11 + 0xe8;
        uVar13 = uVar13 + 0xe8;
      }
      else {
        uVar12 = uVar12 - 0xe8;
        if (uVar10 == param_3) {
          uVar13 = uVar13 - 0xe8;
          if (uVar12 != uVar13) {
            FUN_140b9afc0(local_318,uVar12);
            FUN_140b9ef30(uVar12,uVar13);
            FUN_140b9ef30(uVar13,local_318);
            FUN_1404bf650(local_2f8);
            plVar7 = local_300;
            if (local_300 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_300 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_300)(local_300);
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
            plVar7 = local_310;
            if (local_310 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_310 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_310)(local_310);
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
          uVar11 = uVar11 - 0xe8;
          FUN_140b9afc0(local_228,uVar13);
          FUN_140b9ef30(uVar13,uVar11);
          FUN_140b9ef30(uVar11,local_228);
          FUN_1404bf650(local_208);
          plVar7 = local_210;
          if (local_210 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_210 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_210)(local_210);
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
          plVar7 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_220 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_220)(local_220);
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
        else {
          FUN_140b9afc0(local_138,uVar10);
          FUN_140b9ef30(uVar10,uVar12);
          FUN_140b9ef30(uVar12,local_138);
          FUN_1404bf650(local_118);
          plVar7 = local_120;
          if (local_120 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_120 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_120)(local_120);
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
          plVar7 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_130 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_130)(local_130);
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
          uVar10 = uVar10 + 0xe8;
        }
      }
      goto joined_r0x000140b985f9;
    }
    if (*(double *)(uVar13 + 0xe0) <= *(double *)(uVar10 + 0xe0)) {
      if (*(double *)(uVar13 + 0xe0) < *(double *)(uVar10 + 0xe0)) goto joined_r0x000140b986f3;
      if (uVar11 != uVar10) {
        FUN_140b9afc0(local_6d8,uVar11);
        FUN_140b9ef30(uVar11,uVar10);
        FUN_140b9ef30(uVar10,local_6d8);
        FUN_1404bf650(local_6b8);
        plVar7 = local_6c0;
        if (local_6c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_6c0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_6c0)(local_6c0);
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
        plVar7 = local_6d0;
        if (local_6d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_6d0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_6d0)(local_6d0);
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
      uVar11 = uVar11 + 0xe8;
    }
    uVar10 = uVar10 + 0xe8;
  } while( true );
}



// FUNCTION 140b98c30 FUN_140b98c30 body=639 status=ok
// SIG undefined FUN_140b98c30(void)

void FUN_140b98c30(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  double *pdVar4;
  double dVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)(param_3 - 1) >> 1;
  lVar8 = param_2;
  while (lVar8 < lVar9) {
    dVar5 = *(double *)(lVar8 * 0x1d0 + 0x2b0 + param_1);
    pdVar4 = (double *)(lVar8 * 0x1d0 + 0x1c8 + param_1);
    lVar10 = lVar8 * 2 + 1;
    if (dVar5 < *pdVar4 || dVar5 == *pdVar4) {
      lVar10 = lVar8 * 2 + 2;
    }
    puVar6 = (undefined8 *)(lVar10 * 0xe8 + param_1);
    puVar7 = (undefined8 *)(lVar8 * 0xe8 + param_1);
    if (puVar7 != puVar6) {
      *puVar7 = *puVar6;
      *puVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 1,puVar6 + 1);
    }
    puVar1 = puVar6 + 2;
    if (puVar7 + 2 != puVar1) {
      puVar7[2] = *puVar1;
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 3,puVar6 + 3);
    }
    puVar1 = puVar6 + 5;
    if (puVar7 + 5 != puVar1) {
      puVar7[5] = *puVar1;
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 6,puVar6 + 6);
    }
    plVar2 = puVar6 + 7;
    plVar3 = puVar7 + 7;
    if (plVar3 != plVar2) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = *plVar2;
      *plVar2 = 0;
      *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar6 + 8);
      *(undefined4 *)((longlong)puVar7 + 0x44) = *(undefined4 *)((longlong)puVar6 + 0x44);
      puVar6[8] = 0;
    }
    *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar6 + 10);
    *(undefined4 *)((longlong)puVar7 + 0x54) = *(undefined4 *)((longlong)puVar6 + 0x54);
    *(undefined1 *)(puVar7 + 0xb) = *(undefined1 *)(puVar6 + 0xb);
    *(undefined1 *)((longlong)puVar7 + 0x59) = *(undefined1 *)((longlong)puVar6 + 0x59);
    *(undefined1 *)((longlong)puVar7 + 0x5a) = *(undefined1 *)((longlong)puVar6 + 0x5a);
    *(undefined1 *)((longlong)puVar7 + 0x5b) = *(undefined1 *)((longlong)puVar6 + 0x5b);
    *(undefined1 *)((longlong)puVar7 + 0x5c) = *(undefined1 *)((longlong)puVar6 + 0x5c);
    *(undefined1 *)((longlong)puVar7 + 0x5d) = *(undefined1 *)((longlong)puVar6 + 0x5d);
    *(undefined1 *)((longlong)puVar7 + 0x5e) = *(undefined1 *)((longlong)puVar6 + 0x5e);
    *(undefined1 *)((longlong)puVar7 + 0x5f) = *(undefined1 *)((longlong)puVar6 + 0x5f);
    *(undefined1 *)(puVar7 + 0xc) = *(undefined1 *)(puVar6 + 0xc);
    *(undefined1 *)((longlong)puVar7 + 0x61) = *(undefined1 *)((longlong)puVar6 + 0x61);
    *(undefined4 *)((longlong)puVar7 + 100) = *(undefined4 *)((longlong)puVar6 + 100);
    *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(puVar6 + 0xd);
    *(undefined4 *)((longlong)puVar7 + 0x6c) = *(undefined4 *)((longlong)puVar6 + 0x6c);
    TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::operator=(puVar7 + 0xe,puVar6 + 0xe);
    puVar1 = puVar6 + 0x18;
    if (puVar7 + 0x18 != puVar1) {
      puVar7[0x18] = *puVar1;
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 0x19,puVar6 + 0x19);
    }
    *(undefined4 *)(puVar7 + 0x1a) = *(undefined4 *)(puVar6 + 0x1a);
    *(undefined4 *)((longlong)puVar7 + 0xd4) = *(undefined4 *)((longlong)puVar6 + 0xd4);
    *(undefined4 *)(puVar7 + 0x1b) = *(undefined4 *)(puVar6 + 0x1b);
    puVar7[0x1c] = puVar6[0x1c];
    lVar8 = lVar10;
  }
  if ((lVar8 == lVar9) && ((param_3 & 1) == 0)) {
    FUN_140b9ef30(lVar8 * 0xe8 + param_1,param_1 + -0xe8 + param_3 * 0xe8);
    lVar8 = param_3 - 1;
  }
  FUN_140b98eb0(param_1,lVar8,param_2,param_4);
  return;
}



// FUNCTION 140b98eb0 FUN_140b98eb0 body=546 status=ok
// SIG undefined FUN_140b98eb0(void)

void FUN_140b98eb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  while (param_3 < param_2) {
    lVar5 = param_2 + -1 >> 1;
    puVar4 = (undefined8 *)(lVar5 * 0xe8 + param_1);
    if ((double)puVar4[0x1c] < *(double *)(param_4 + 0xe0) ||
        (double)puVar4[0x1c] == *(double *)(param_4 + 0xe0)) break;
    puVar6 = (undefined8 *)(param_2 * 0xe8 + param_1);
    if (puVar6 != puVar4) {
      *puVar6 = *puVar4;
      *puVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar6 + 1,puVar4 + 1);
    }
    puVar1 = puVar4 + 2;
    if (puVar6 + 2 != puVar1) {
      puVar6[2] = *puVar1;
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar6 + 3,puVar4 + 3);
    }
    puVar1 = puVar4 + 5;
    if (puVar6 + 5 != puVar1) {
      puVar6[5] = *puVar1;
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar6 + 6,puVar4 + 6);
    }
    plVar2 = puVar4 + 7;
    plVar3 = puVar6 + 7;
    if (plVar3 != plVar2) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = *plVar2;
      *plVar2 = 0;
      *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)((longlong)puVar6 + 0x44) = *(undefined4 *)((longlong)puVar4 + 0x44);
      puVar4[8] = 0;
    }
    *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(puVar4 + 10);
    *(undefined4 *)((longlong)puVar6 + 0x54) = *(undefined4 *)((longlong)puVar4 + 0x54);
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(puVar4 + 0xb);
    *(undefined1 *)((longlong)puVar6 + 0x59) = *(undefined1 *)((longlong)puVar4 + 0x59);
    *(undefined1 *)((longlong)puVar6 + 0x5a) = *(undefined1 *)((longlong)puVar4 + 0x5a);
    *(undefined1 *)((longlong)puVar6 + 0x5b) = *(undefined1 *)((longlong)puVar4 + 0x5b);
    *(undefined1 *)((longlong)puVar6 + 0x5c) = *(undefined1 *)((longlong)puVar4 + 0x5c);
    *(undefined1 *)((longlong)puVar6 + 0x5d) = *(undefined1 *)((longlong)puVar4 + 0x5d);
    *(undefined1 *)((longlong)puVar6 + 0x5e) = *(undefined1 *)((longlong)puVar4 + 0x5e);
    *(undefined1 *)((longlong)puVar6 + 0x5f) = *(undefined1 *)((longlong)puVar4 + 0x5f);
    *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(puVar4 + 0xc);
    *(undefined1 *)((longlong)puVar6 + 0x61) = *(undefined1 *)((longlong)puVar4 + 0x61);
    *(undefined4 *)((longlong)puVar6 + 100) = *(undefined4 *)((longlong)puVar4 + 100);
    *(undefined4 *)(puVar6 + 0xd) = *(undefined4 *)(puVar4 + 0xd);
    *(undefined4 *)((longlong)puVar6 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x6c);
    TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::operator=(puVar6 + 0xe,puVar4 + 0xe);
    puVar1 = puVar4 + 0x18;
    if (puVar6 + 0x18 != puVar1) {
      puVar6[0x18] = *puVar1;
      *puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar6 + 0x19,puVar4 + 0x19);
    }
    *(undefined4 *)(puVar6 + 0x1a) = *(undefined4 *)(puVar4 + 0x1a);
    *(undefined4 *)((longlong)puVar6 + 0xd4) = *(undefined4 *)((longlong)puVar4 + 0xd4);
    *(undefined4 *)(puVar6 + 0x1b) = *(undefined4 *)(puVar4 + 0x1b);
    puVar6[0x1c] = puVar4[0x1c];
    param_2 = lVar5;
  }
  FUN_140b9ef30(param_2 * 0xe8 + param_1,param_4);
  return;
}



// FUNCTION 140b990e0 FUN_140b990e0 body=664 status=ok
// SIG undefined FUN_140b990e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b990e0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_148;
  longlong local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  longlong *local_120;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar5 = param_2 - param_1;
  do {
    lVar5 = lVar5 / 0xe8;
    if (lVar5 < 0x21) {
LAB_140b991f9:
      if (1 < lVar5) {
        FUN_140b977b0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar5) {
        FUN_140b98110(param_1,param_2,param_4);
        lVar5 = (param_2 - param_1) / 0xe8;
        if (lVar5 < 2) {
          return;
        }
        param_2 = param_2 + -0xe8;
        if (lVar5 < 2) goto LAB_140b9934a;
        do {
          FUN_140b9afc0(local_138,param_2);
          FUN_140b9ef30(param_2,param_1);
          local_158 = param_4;
          FUN_140b98c30(param_1,0,(param_2 - param_1) / 0xe8,local_138);
          FUN_1404bf650(local_118);
          plVar4 = local_120;
          if (local_120 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_120 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_120)(local_120);
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
          plVar4 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_130 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_130)(local_130);
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
LAB_140b9934a:
          param_2 = param_2 + -0xe8;
        } while (1 < ((0xe8 - param_1) + param_2) / 0xe8);
        return;
      }
      goto LAB_140b991f9;
    }
    FUN_140b98450(&local_148,param_1,param_2,param_4);
    lVar5 = local_140;
    lVar6 = local_148;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_148 - param_1) / 0xe8 < (param_2 - local_140) / 0xe8) {
      FUN_140b990e0(param_1,local_148,param_3,param_4);
      param_1 = lVar5;
      lVar6 = param_2;
    }
    else {
      FUN_140b990e0(local_140,param_2,param_3,param_4);
    }
    lVar5 = lVar6 - param_1;
    param_2 = lVar6;
  } while( true );
}



// FUNCTION 140b99380 FUN_140b99380 body=227 status=ok
// SIG undefined FUN_140b99380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b99380(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  longlong *local_f0;
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_140b9afc0(local_108,param_1);
  FUN_140b9ef30(param_1,param_2);
  FUN_140b9ef30(param_2,local_108);
  FUN_1404bf650(local_e8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140b99470 FUN_140b99470 body=794 status=ok
// SIG undefined FUN_140b99470(void)

undefined8 * FUN_140b99470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *param_2 = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
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
  uVar1 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar1;
  uVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar1;
  uVar1 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar1;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  param_1[0x28] = 0;
  param_1[0x28] = param_2[0x28];
  param_2[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  param_2[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2a] = param_2[0x2a];
  param_2[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  param_2[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2c] = param_2[0x2c];
  param_2[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_2[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2e] = param_2[0x2e];
  param_2[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  param_2[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x30] = param_2[0x30];
  param_2[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  param_2[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  param_1[0x33] = 0;
  param_1[0x33] = param_2[0x33];
  param_2[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_2 + 0x1a4);
  param_2[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
  return param_1;
}



// FUNCTION 140b99790 TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_> body=163 status=ok
// SIG undefined TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>(void)

undefined8 *
TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
::
TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
          (undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140b9ea60();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140b99840 FUN_140b99840 body=170 status=ok
// SIG undefined FUN_140b99840(void)

undefined8 * FUN_140b99840(undefined8 *param_1)

{
  FUN_1424de090();
  *param_1 = &PTR_FUN_1443162e0;
  param_1[0x8b] = &PTR_LAB_1443169c8;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(undefined2 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 140b998f0 FUN_140b998f0 body=171 status=ok
// SIG undefined FUN_140b998f0(void)

undefined8 * FUN_140b998f0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Connection Error",L"OakGameInstance",L"BeaconErrorDialogCaption");
  *param_1 = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 1,uVar5);
  FText::FText(param_1 + 4,param_2);
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
  *param_1 = &PTR_FUN_1443170a0;
  return param_1;
}



// FUNCTION 140b999a0 FUN_140b999a0 body=171 status=ok
// SIG undefined FUN_140b999a0(void)

undefined8 * FUN_140b999a0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Connection Failed",L"OakGameInstance",L"ConnectionFailed");
  *param_1 = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 1,uVar5);
  FText::FText(param_1 + 4,param_2);
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
  *param_1 = &PTR_FUN_1443170a0;
  return param_1;
}



// FUNCTION 140b99a50 FUN_140b99a50 body=61 status=ok
// SIG undefined FUN_140b99a50(void)

undefined8 * FUN_140b99a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 1);
  FText::FText(param_1 + 4,param_3);
  return param_1;
}



// FUNCTION 140b99a90 FUN_140b99a90 body=87 status=ok
// SIG undefined FUN_140b99a90(void)

undefined8 * FUN_140b99a90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1404b03b0();
  uVar2 = FUN_1404b03b0();
  *param_1 = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 1,uVar2);
  FText::FText(param_1 + 4,uVar1);
  *param_1 = &PTR_FUN_1443170a0;
  return param_1;
}



// FUNCTION 140b99af0 FUN_140b99af0 body=614 status=ok
// SIG undefined FUN_140b99af0(void)

undefined1 * FUN_140b99af0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  FString::FString(param_1 + 8,param_2 + 8);
  FString::FString(param_1 + 0x18,param_2 + 0x18);
  FString::FString(param_1 + 0x28,param_2 + 0x28);
  FString::FString(param_1 + 0x38,param_2 + 0x38);
  FString::FString(param_1 + 0x48,param_2 + 0x48);
  FString::FString(param_1 + 0x58,param_2 + 0x58);
  FString::FString(param_1 + 0x68,param_2 + 0x68);
  FString::FString(param_1 + 0x78,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  FString::FString(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_140b945a0(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xb0),0,0);
  FString::FString(param_1 + 0xb8,param_2 + 0xb8);
  FString::FString(param_1 + 200,param_2 + 200);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_140b94450(param_1 + 0xd8,*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xe0),0,0);
  FString::FString(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0x108) = 0;
  iVar3 = *(int *)(param_2 + 0x110);
  puVar4 = *(undefined8 **)(param_2 + 0x108);
  *(int *)(param_1 + 0x110) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x108,iVar3,0);
    puVar2 = *(undefined8 **)(param_1 + 0x108);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FString::FString(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 140b99d60 FUN_140b99d60 body=518 status=ok
// SIG undefined FUN_140b99d60(void)

undefined8 * FUN_140b99d60(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_144317950;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x41700000;
  *(undefined4 *)(param_1 + 0xf) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x43960000;
  *(undefined4 *)(param_1 + 0x10) = 100;
  *(undefined4 *)((longlong)param_1 + 0x84) = 3;
  *(undefined4 *)(param_1 + 0x11) = 0x32;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x43960000;
  param_1[0x13] = 0x43340000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x40000000;
  *(undefined4 *)(param_1 + 0x17) = 0x3f000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  return param_1;
}



// FUNCTION 140b99f70 FUN_140b99f70 body=217 status=ok
// SIG undefined FUN_140b99f70(void)

longlong FUN_140b99f70(longlong param_1)

{
  FText::FText();
  FText::FText(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x40,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FText::FText(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined2 *)(param_1 + 0x84) = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return param_1;
}



// FUNCTION 140b9a050 FUN_140b9a050 body=267 status=ok
// SIG undefined FUN_140b9a050(void)

undefined8 * FUN_140b9a050(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = param_2 == '\0';
  if (bVar6) {
    uVar5 = FText::FText(local_38,&DAT_14686f648);
  }
  else {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Your connection to Gearbox Software SHiFT was lost.",
                       L"OakGameInstance",L"LoginStatusErrorMessage_Spark");
  }
  FUN_140b998f0(param_1,uVar5);
  if (bVar6) {
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
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  *param_1 = &PTR_FUN_1443170a0;
  return param_1;
}



// FUNCTION 140b9a160 FUN_140b9a160 body=460 status=ok
// SIG undefined FUN_140b9a160(void)

undefined8 * FUN_140b9a160(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_1[0x15] = 0;
  param_1[0x15] = param_2[0x15];
  param_2[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  param_2[0x16] = 0;
  return param_1;
}



// FUNCTION 140b9a330 FUN_140b9a330 body=1040 status=ok
// SIG undefined FUN_140b9a330(void)

undefined8 * FUN_140b9a330(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  longlong *local_90;
  int local_88;
  longlong *local_80;
  int local_78;
  longlong *local_70;
  longlong *local_60;
  
  uVar9 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  FText::FText(param_1 + 4);
  FText::FText(param_1 + 7);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  FWeakObjectPtr::operator=(param_1 + 3,param_2);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 3);
  if (cVar4 == '\0') {
    return param_1;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 3);
  plVar2 = (longlong *)(lVar5 + 0xc80);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_70 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = (longlong)param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140bd64b0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
    iVar3 = *(int *)(lVar5 + 0xc88);
    uVar9 = *puVar8;
    *(int *)(lVar5 + 0xc88) = iVar3 + 1;
    if (*(int *)(lVar5 + 0xc8c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  param_1[0xe] = uVar9;
  lVar5 = FWeakObjectPtr::Get(param_1 + 3);
  plVar2 = *(longlong **)(lVar5 + 0x4e8);
  lVar5 = *(longlong *)(lVar5 + 0x4e0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)(lVar5 + 0x440);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = (longlong)param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140bd1930;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  uVar9 = 0;
  if (plVar6 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res18);
    iVar3 = *(int *)(lVar5 + 0x448);
    uVar9 = *puVar8;
    *(int *)(lVar5 + 0x448) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x44c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar3);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar10);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  param_1[0xf] = uVar9;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 3);
  plVar2 = *(longlong **)(lVar5 + 0xae8);
  if (plVar2 == (longlong *)0x0) goto LAB_140b9a717;
  local_90 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_88 = 3;
  local_90 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)IDelegateInstance::vftable;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140bdadf0;
    plVar6[1] = (longlong)param_1;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar5;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,local_res20,&local_90);
  param_1[0x10] = *puVar8;
  if (local_88 == 0) {
LAB_140b9a650:
    if (local_90 != (longlong *)0x0) {
      FMemory::Free(local_90);
    }
  }
  else if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x28))(local_90,0);
    if (local_90 != (longlong *)0x0) {
      local_90 = (longlong *)FMemory::Realloc(local_90,0,0);
    }
    local_88 = 0;
    goto LAB_140b9a650;
  }
  local_80 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_78 = 3;
  local_80 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)IDelegateInstance::vftable;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140bd0770;
    plVar6[1] = (longlong)param_1;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar5;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0xd8))(plVar2,local_98,&local_80);
  param_1[0x11] = *puVar8;
  if (local_78 != 0) {
    if (local_80 == (longlong *)0x0) goto LAB_140b9a717;
    (**(code **)(*local_80 + 0x28))(local_80,0);
    if (local_80 != (longlong *)0x0) {
      local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
    }
    local_78 = 0;
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free(local_80);
  }
LAB_140b9a717:
  FUN_140bf6260(param_1);
  return param_1;
}



// FUNCTION 140b9a740 FUN_140b9a740 body=437 status=ok
// SIG undefined FUN_140b9a740(void)

undefined8 * FUN_140b9a740(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_143f73d18;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_143f740c8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &PTR_FUN_143f73d18;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x38);
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = &PTR_FUN_143f740c8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  FString::FString(param_1 + 0xd,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  FString::FString(param_1 + 0x10,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)(param_2 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)(param_2 + 0xa2);
  uVar5 = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)((longlong)param_1 + 0xac) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
  *(undefined1 *)((longlong)param_1 + 0xd5) = *(undefined1 *)(param_2 + 0xd5);
  *(undefined1 *)((longlong)param_1 + 0xd6) = *(undefined1 *)(param_2 + 0xd6);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  param_1[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x1c] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x1e] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0xfc);
  uVar3 = *(undefined4 *)(param_2 + 0x100);
  uVar4 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar4;
  FString::FString(param_1 + 0x21,param_2 + 0x108);
  return param_1;
}



// FUNCTION 140b9a900 FUN_140b9a900 body=164 status=ok
// SIG undefined FUN_140b9a900(void)

undefined8 * FUN_140b9a900(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_143f769a8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 3,param_2 + 0x18);
  FUN_1404e8890(param_1 + 5,param_2 + 0x28);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  param_1[0x15] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 140b9a9b0 FUN_140b9a9b0 body=221 status=ok
// SIG undefined FUN_140b9a9b0(void)

undefined4 * FUN_140b9a9b0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_2[6];
  FUN_140b9a900(param_1 + 8,param_2 + 8);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x3a) = 0;
  iVar4 = param_2[0x3c];
  puVar3 = *(undefined8 **)(param_2 + 0x3a);
  param_1[0x3c] = iVar4;
  if (iVar4 == 0) {
    param_1[0x3d] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x3a,iVar4,0);
    puVar2 = *(undefined8 **)(param_1 + 0x3a);
    do {
      *puVar2 = *puVar3;
      lVar1 = puVar3[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 140b9aa90 FUN_140b9aa90 body=182 status=ok
// SIG undefined FUN_140b9aa90(void)

undefined4 * FUN_140b9aa90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_143f769a8;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined ***)(param_1 + 0x12) = &PTR_FUN_143f769a0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 9999;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 140b9ab50 FUN_140b9ab50 body=328 status=ok
// SIG undefined FUN_140b9ab50(void)

undefined8 * FUN_140b9ab50(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar3 = *(undefined4 *)(param_2 + 9);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 9) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  if (*(char *)((longlong)param_2 + 100) != '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0xb);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xb) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 100) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_2 + 0xf) != '\0') {
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x6c);
    uVar3 = *(undefined4 *)(param_2 + 0xe);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x74);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0xe) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar4;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  if (*(char *)((longlong)param_2 + 0x8c) != '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
    uVar4 = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    *(undefined4 *)(param_1 + 0x11) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0x14) != '\0') {
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x94);
    uVar3 = *(undefined4 *)(param_2 + 0x13);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
    *(undefined4 *)(param_1 + 0x13) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  if (*(char *)((longlong)param_2 + 0xb4) != '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0x15);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x15) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0x16) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  }
  FString::FString(param_1 + 0x17,param_2 + 0x17);
  param_1[0x19] = param_2[0x19];
  FString::FString(param_1 + 0x1a,param_2 + 0x1a);
  return param_1;
}



// FUNCTION 140b9aca0 FUN_140b9aca0 body=448 status=ok
// SIG undefined FUN_140b9aca0(void)

/* WARNING: Removing unreachable block (ram,0x000140b9ae3a) */

undefined8 * FUN_140b9aca0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong *local_38;
  int local_30;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 2,param_2 + 2);
  puVar7 = (undefined8 *)0x0;
  plVar1 = param_1 + 4;
  *plVar1 = 0;
  puVar6 = puVar7;
  if (param_2[4] != 0) {
    puVar6 = *(undefined8 **)(param_2[4] + 0x10);
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      FGCObject::FGCObject(puVar5);
      puVar5[2] = puVar6;
      *puVar5 = &PTR__scalar_deleting_destructor__1440f8f50;
      puVar7 = puVar5;
    }
    if (plVar1 == &local_res8) {
      if (puVar7 == (undefined8 *)0x0) goto LAB_140b9ad54;
      puVar6 = (undefined8 *)*puVar7;
    }
    else {
      puVar5 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)puVar7;
      if (puVar5 == (undefined8 *)0x0) goto LAB_140b9ad54;
      puVar6 = (undefined8 *)*puVar5;
      puVar7 = puVar5;
    }
    (*(code *)*puVar6)(puVar7,1);
  }
LAB_140b9ad54:
  plVar1 = param_1 + 6;
  param_1[5] = param_2[5];
  *plVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  if (param_2 + 6 != plVar1) {
    FMulticastDelegateBase<FWeakObjectPtr>::Clear(plVar1);
    plVar9 = (longlong *)param_2[6];
    plVar8 = plVar9 + (longlong)*(int *)(param_2 + 7) * 2;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 2) {
      if (((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
          (**(code **)(*local_38 + 0x20))(local_38,local_res10);
        }
        iVar2 = *(int *)(param_1 + 7);
        *(int *)(param_1 + 7) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x3c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar7 = 0;
        *puVar7 = local_38;
        *(int *)(puVar7 + 1) = local_30;
      }
    }
  }
  return param_1;
}



// FUNCTION 140b9ae60 FUN_140b9ae60 body=346 status=ok
// SIG undefined FUN_140b9ae60(void)

/* WARNING: Removing unreachable block (ram,0x000140b9af7a) */

undefined8 * FUN_140b9ae60(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 3;
  param_1[2] = param_2[2];
  *plVar1 = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  if (param_2 + 3 == plVar1) {
    return param_1;
  }
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(plVar1);
  plVar7 = (longlong *)param_2[3];
  plVar6 = plVar7 + (longlong)*(int *)(param_2 + 4) * 2;
  for (; plVar7 != plVar6; plVar7 = plVar7 + 2) {
    if (((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0)) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_28);
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
        (**(code **)(*local_28 + 0x20))(local_28,local_res8);
      }
      iVar2 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 4) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x24) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = 0;
      *puVar5 = local_28;
      *(int *)(puVar5 + 1) = local_20;
    }
  }
  return param_1;
}



// FUNCTION 140b9afc0 FUN_140b9afc0 body=370 status=ok
// SIG undefined FUN_140b9afc0(void)

undefined8 * FUN_140b9afc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *param_2 = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[4] = &PTR_FUN_143f769a8;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_2[6] = 0;
  param_2[5] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  param_1[9] = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x5b);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  *(undefined1 *)((longlong)param_1 + 0x5e) = *(undefined1 *)((longlong)param_2 + 0x5e);
  *(undefined1 *)((longlong)param_1 + 0x5f) = *(undefined1 *)((longlong)param_2 + 0x5f);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
  ::
  TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            (param_1 + 0xe,param_2 + 0xe);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}



// FUNCTION 140b9b140 FUN_140b9b140 body=256 status=ok
// SIG undefined FUN_140b9b140(void)

undefined8 * FUN_140b9b140(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,
                     L"The trial is no longer available. To continue, please purchase the full version of the game."
                     ,L"OakGameInstance",L"TrialExpiredMessage");
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Trial Expired",L"OakGameInstance",L"TrialExpiredTitle");
  *param_1 = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 1,uVar6);
  FText::FText(param_1 + 4,uVar5);
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  *param_1 = &PTR_FUN_1443170a0;
  return param_1;
}



// FUNCTION 140b9b240 FUN_140b9b240 body=256 status=ok
// SIG undefined FUN_140b9b240(void)

undefined8 * FUN_140b9b240(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,
                     L"Unable to verify trial status. Please make sure that you are logged in and connected to the internet."
                     ,L"OakGameInstance",L"TrialFailureMessage");
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Trial Error",L"OakGameInstance",L"TrialFailureTitle");
  *param_1 = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 1,uVar6);
  FText::FText(param_1 + 4,uVar5);
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  *param_1 = &PTR_FUN_1443170a0;
  return param_1;
}



// FUNCTION 140b9b340 FUN_140b9b340 body=85 status=ok
// SIG undefined FUN_140b9b340(void)

undefined8 * FUN_140b9b340(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144317528;
  param_1[5] = &PTR_LAB_144317920;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 140b9b3a0 FUN_140b9b3a0 body=3540 status=ok
// SIG undefined FUN_140b9b3a0(void)

undefined8 * FUN_140b9b3a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  LARGE_INTEGER local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *local_48 [2];
  
  FUN_142d51cb0();
  puVar10 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1443170b8;
  puVar3 = param_1 + 0x86;
  param_1[0x3f] = 0;
  param_1[5] = &PTR_LAB_1443174a8;
  param_1[0x3e] = &PTR_LAB_1443174b8;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *puVar3 = 0;
  param_1[0x87] = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  uVar7 = FUN_1404b03b0();
  uVar8 = FUN_1404b03b0();
  param_1[0x95] = &PTR_FUN_1443170a0;
  FText::FText(param_1 + 0x96,uVar8);
  FText::FText(param_1 + 0x99,uVar7);
  param_1[0x95] = &PTR_FUN_1443170a0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  FUN_140da7c80(param_1 + 0xbe);
  FUN_1411c84d0(param_1 + 0xf4);
  param_1[300] = 0;
  param_1[0x12d] = 0;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  *(undefined1 *)(param_1 + 0x131) = 1;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 2;
  *(undefined1 *)(param_1 + 0x137) = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 2;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 2;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 2;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 2;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 2;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 2;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 2;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 2;
  param_1[0x153] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  puVar9 = (undefined8 *)operator_new(8);
  puVar11 = puVar10;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_144316150;
    puVar11 = puVar9;
  }
  puVar9 = (undefined8 *)operator_new(0x18);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = 1;
    *puVar9 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
    puVar9[2] = puVar11;
    puVar10 = puVar9;
  }
  param_1[0x15b] = puVar11;
  param_1[0x15c] = puVar10;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x15b,puVar11,puVar11);
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x165] = &PTR_FUN_143f740c8;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined2 *)(param_1 + 0x16f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7a) = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 2;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 2;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 2;
  param_1[0x17f] = 0;
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x182) = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 2;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 2;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 2;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 2;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 2;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 2;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 2;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 2;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 2;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd34) = 0;
  param_1[0x1a8] = 0;
  *(undefined4 *)(param_1 + 0x1a9) = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdb4) = 0;
  param_1[0x1b8] = 0;
  *(undefined4 *)(param_1 + 0x1b9) = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe04) = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  *(undefined4 *)(param_1 + 0x1cf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe7c) = 0;
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe9c) = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  *(undefined4 *)(param_1 + 0x1da) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xed4) = 0;
  param_1[0x1dc] = 0;
  *(undefined4 *)(param_1 + 0x1dd) = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  *(undefined4 *)(param_1 + 0x1eb) = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf94) = 0;
  *(undefined4 *)(param_1 + 499) = 0x44e10000;
  *(undefined4 *)((longlong)param_1 + 0xf9c) = 0x3f000000;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  *(undefined2 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x207) = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  *(undefined1 *)(param_1 + 0x20a) = 0;
  plVar4 = param_1 + 0x218;
  *(undefined4 *)((longlong)param_1 + 0x1054) = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  *(undefined1 *)(param_1 + 0x20d) = 0;
  param_1[0x20e] = 0;
  *(undefined4 *)(param_1 + 0x20f) = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  *plVar4 = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  *(undefined1 *)(param_1 + 0x229) = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  *(undefined1 *)(param_1 + 0x232) = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  *(undefined4 *)(param_1 + 0x236) = 0;
  param_1[0x237] = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x239) = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  *(undefined4 *)(param_1 + 0x23d) = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1244) = 0;
  param_1[0x24a] = 0;
  *(undefined4 *)(param_1 + 0x24b) = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  *(undefined4 *)(param_1 + 0x254) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x12a4) = 0;
  param_1[0x256] = 0;
  *(undefined4 *)(param_1 + 599) = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  *(undefined1 *)(param_1 + 0x25a) = 0;
  *(undefined1 *)(param_1 + 0x262) = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  *(undefined4 *)(param_1 + 0x267) = 0;
  param_1[0x268] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x269,0);
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  *(undefined2 *)(param_1 + 0x274) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13a2) = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  *(undefined4 *)(param_1 + 0x277) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13bc) = 0;
  *(undefined2 *)(param_1 + 0x278) = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  *(undefined1 *)(param_1 + 0x27d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13ec) = 0x9889f459;
  *(undefined4 *)(param_1 + 0x27e) = 0x210b469b;
  *(undefined4 *)((longlong)param_1 + 0x13f4) = 0xace63f3a;
  *(undefined4 *)(param_1 + 0x27f) = 0x711b718b;
  *(undefined4 *)((longlong)param_1 + 0x13fc) = 0x759b0940;
  *(undefined4 *)(param_1 + 0x280) = 0x61b74796;
  *(undefined4 *)((longlong)param_1 + 0x1404) = 0x868822a8;
  *(undefined4 *)(param_1 + 0x281) = 0xc582d10b;
  *(undefined4 *)((longlong)param_1 + 0x140c) = 0xb9c51145;
  *(undefined4 *)(param_1 + 0x282) = 0x3c5d44da;
  *(undefined4 *)((longlong)param_1 + 0x1414) = 0x8c8ebe51;
  *(undefined4 *)(param_1 + 0x283) = 0x24a566fc;
  *(undefined4 *)((longlong)param_1 + 0x141c) = 0xb361b464;
  *(undefined4 *)(param_1 + 0x284) = 0x9ee2431c;
  *(undefined4 *)((longlong)param_1 + 0x1424) = 0xa4abdffa;
  *(undefined4 *)(param_1 + 0x285) = 0x729259ef;
  *(undefined4 *)(param_1 + 0x286) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1434) = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  QueryPerformanceCounter(&local_res8);
  param_1[0x27b] = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  puVar10 = (undefined8 *)FName::FName(local_res18,"ManagedActorManager",1);
  uVar7 = *puVar10;
  uVar8 = FUN_141438950();
  uVar7 = FUN_141752410(param_1,uVar7,uVar8,uVar8,1,0,0);
  param_1[0x164] = uVar7;
  puVar10 = (undefined8 *)FName::FName(local_res20,"OakDialogSystemCustomization",1);
  uVar7 = *puVar10;
  uVar8 = FUN_141418890();
  uVar7 = FUN_141752410(param_1,uVar7,uVar8,uVar8,1,0,0);
  param_1[0x174] = uVar7;
  FUN_1405f1710(uVar7);
  puVar10 = (undefined8 *)FName::FName(local_68,L"ModifierManager_Mayhem",1);
  uVar7 = *puVar10;
  uVar8 = FUN_14143c410();
  uVar7 = FUN_141752410(param_1,uVar7,uVar8,uVar8,1,0,0);
  iVar5 = *(int *)(param_1 + 0x219);
  *(int *)(param_1 + 0x219) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x10cc) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar5);
  }
  *(undefined8 *)(*plVar4 + (longlong)iVar5 * 8) = uVar7;
  puVar10 = (undefined8 *)FName::FName(local_60,L"ModifierManager_Matchmaking",1);
  uVar7 = *puVar10;
  uVar8 = FUN_14143d800();
  uVar7 = FUN_141752410(param_1,uVar7,uVar8,uVar8,1,0,0);
  iVar5 = *(int *)(param_1 + 0x219);
  *(int *)(param_1 + 0x219) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x10cc) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar5);
  }
  *(undefined8 *)(*plVar4 + (longlong)iVar5 * 8) = uVar7;
  puVar10 = (undefined8 *)FName::FName(local_58,L"DiscordManager",1);
  uVar7 = *puVar10;
  uVar8 = FUN_14141a140();
  uVar7 = FUN_141752410(param_1,uVar7,uVar8,uVar8,1,0,0);
  param_1[0x21a] = uVar7;
  local_48[0] = (longlong *)0x0;
  if (puVar3 != &local_50) {
    *puVar3 = 0;
    local_50 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x87,local_48);
    plVar4 = local_48[0];
    if (local_48[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48[0] + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48[0])(local_48[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_48[0] + 8))(local_48[0],1);
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 0x88) = DAT_14686a12c;
  *(undefined2 *)(param_1 + 0x8b) = 0;
  if (param_1[0x210] != 0) {
    FUN_140d9fcc0(param_1[0x210],*(char *)(param_1 + 0x163) == '\0');
  }
  *(undefined1 *)(param_1 + 0x173) = 0;
  FUN_140be1d40(param_1);
  return param_1;
}



// FUNCTION 140b9c180 FUN_140b9c180 body=210 status=ok
// SIG undefined FUN_140b9c180(void)

void FUN_140b9c180(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140b9c260 FUN_140b9c260 body=135 status=ok
// SIG undefined FUN_140b9c260(void)

void FUN_140b9c260(undefined8 *param_1)

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



// FUNCTION 140b9c2f0 FUN_140b9c2f0 body=391 status=ok
// SIG undefined FUN_140b9c2f0(void)

void FUN_140b9c2f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x108);
    do {
      if (puVar2[2] != 0) {
        FMemory::Free();
      }
      iVar4 = *(int *)(puVar2 + 1);
      plVar5 = (longlong *)*puVar2;
      if (iVar4 != 0) {
        do {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar5 = (longlong *)*puVar2;
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      if (puVar2[-4] != 0) {
        FMemory::Free();
      }
      FUN_140b9c480(puVar2 + -6);
      if (puVar2[-8] != 0) {
        FMemory::Free();
      }
      if (puVar2[-10] != 0) {
        FMemory::Free();
      }
      FUN_140b9c620(puVar2 + -0xc);
      if (puVar2[-0xe] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x12] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x14] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x16] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x18] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x1a] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x1c] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x1e] != 0) {
        FMemory::Free();
      }
      if (puVar2[-0x20] != 0) {
        FMemory::Free();
      }
      puVar2 = puVar2 + 0x25;
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



// FUNCTION 140b9c480 FUN_140b9c480 body=123 status=ok
// SIG undefined FUN_140b9c480(void)

void FUN_140b9c480(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FUN_140b9c500(plVar1 + 6);
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140b9c500 FUN_140b9c500 body=123 status=ok
// SIG undefined FUN_140b9c500(void)

void FUN_140b9c500(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
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



// FUNCTION 140b9c580 ~TArray<FKeyBindMenuEntry,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<FKeyBindMenuEntry,FDefaultAllocator>(void)

void TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
               (longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
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
      plVar7 = plVar7 + 6;
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



// FUNCTION 140b9c620 FUN_140b9c620 body=238 status=ok
// SIG undefined FUN_140b9c620(void)

void FUN_140b9c620(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x28);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
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
      plVar4 = (longlong *)plVar7[-3];
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
      plVar7 = plVar7 + 9;
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



// FUNCTION 140b9c710 FUN_140b9c710 body=242 status=ok
// SIG undefined FUN_140b9c710(void)

void FUN_140b9c710(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    do {
      plVar4 = *(longlong **)(lVar7 + 0xd8);
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
      plVar4 = *(longlong **)(lVar7 + 0xc0);
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
      FUN_140b9d680(lVar7);
      lVar7 = lVar7 + 0xe8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    return;
  }
  FMemory::Free(lVar7);
  return;
}



// FUNCTION 140b9c810 ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_> body=173 status=ok
// SIG undefined ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(void)

void TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>::
     ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
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
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b9c8c0 FUN_140b9c8c0 body=100 status=ok
// SIG undefined FUN_140b9c8c0(void)

void FUN_140b9c8c0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[3] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140b9c930 FUN_140b9c930 body=99 status=ok
// SIG undefined FUN_140b9c930(void)

void FUN_140b9c930(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_1404bf980(lVar1 + 0x28);
      FUN_1404bf980(lVar1);
      lVar1 = lVar1 + 0x60;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b9c9a0 FUN_140b9c9a0 body=201 status=ok
// SIG undefined FUN_140b9c9a0(void)

void FUN_140b9c9a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  lVar6 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar8 = (longlong *)(lVar6 + 0x20);
    do {
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(plVar8 + 2);
      puVar4 = (undefined8 *)*plVar8;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      if (plVar8[-2] != 0) {
        FMemory::Free();
      }
      plVar5 = (longlong *)plVar8[-3];
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
      plVar8 = plVar8 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar6 = *param_1;
  }
  if (lVar6 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b9ca70 FUN_140b9ca70 body=168 status=ok
// SIG undefined FUN_140b9ca70(void)

void FUN_140b9ca70(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(plVar7 + 2);
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
      plVar7 = plVar7 + 6;
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



// FUNCTION 140b9cb20 FUN_140b9cb20 body=236 status=ok
// SIG undefined FUN_140b9cb20(void)

void FUN_140b9cb20(longlong *param_1)

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
      FUN_1404bf650(plVar7 + 1);
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
      plVar4 = (longlong *)plVar7[-2];
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
      plVar7 = plVar7 + 0x1d;
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



// FUNCTION 140b9cc10 ~TArray<FBartenderPOIPhrase,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FBartenderPOIPhrase,TSizedDefaultAllocator<32>_>(void)

void TArray<FBartenderPOIPhrase,TSizedDefaultAllocator<32>_>::
     ~TArray<FBartenderPOIPhrase,TSizedDefaultAllocator<32>_>(undefined8 *param_1)

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
      plVar7 = plVar7 + 5;
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



// FUNCTION 140b9ccb0 FUN_140b9ccb0 body=141 status=ok
// SIG undefined FUN_140b9ccb0(void)

void FUN_140b9ccb0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x108) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x80) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x68) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar1 + 0x28);
      FUN_1404bf980(lVar1);
      lVar1 = lVar1 + 0x118;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 140b9cd40 FUN_140b9cd40 body=129 status=ok
// SIG undefined FUN_140b9cd40(void)

void FUN_140b9cd40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1404bf650(param_1 + 5);
  plVar4 = (longlong *)param_1[3];
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 140b9cdd0 FUN_140b9cdd0 body=152 status=ok
// SIG undefined FUN_140b9cdd0(void)

void FUN_140b9cdd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1443170a0;
  plVar4 = (longlong *)param_1[5];
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
  return;
}



// FUNCTION 140b9ce70 FUN_140b9ce70 body=117 status=ok
// SIG undefined FUN_140b9ce70(void)

void FUN_140b9ce70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140b9cef0 FUN_140b9cef0 body=98 status=ok
// SIG undefined FUN_140b9cef0(void)

void FUN_140b9cef0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  FUN_1404bebc0(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x20);
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



// FUNCTION 140b9cf60 FUN_140b9cf60 body=574 status=ok
// SIG undefined FUN_140b9cf60(void)

void FUN_140b9cf60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x180);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x168);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x138);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x120);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x108);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe0);
  plVar7 = *(longlong **)(param_1 + 0xd0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar7 = *(longlong **)(param_1 + 0xc0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar7 = *(longlong **)(param_1 + 0x78);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x58);
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x50);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b9d1a0 FUN_140b9d1a0 body=266 status=ok
// SIG undefined FUN_140b9d1a0(void)

void FUN_140b9d1a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
            (param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140b9d2b0 FUN_140b9d2b0 body=121 status=ok
// SIG undefined FUN_140b9d2b0(void)

void FUN_140b9d2b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 140b9d330 FUN_140b9d330 body=676 status=ok
// SIG undefined FUN_140b9d330(void)

void FUN_140b9d330(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x488);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x478);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x468);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x458);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x440);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x428);
  FUN_1404bebc0(param_1 + 0x358);
  plVar3 = *(longlong **)(param_1 + 0x348);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x330);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x318);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  FUN_1404bf650(param_1 + 0x200);
  FUN_1404bf650(param_1 + 0x128);
  iVar4 = *(int *)(param_1 + 0x120);
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (iVar4 != 0) {
    lVar5 = lVar5 + 8;
    do {
      FUN_1404bf980(lVar5);
      lVar5 = lVar5 + 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = *(longlong *)(param_1 + 0x118);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 140b9d5e0 FUN_140b9d5e0 body=155 status=ok
// SIG undefined FUN_140b9d5e0(void)

void FUN_140b9d5e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  FUN_140b9d680(param_1);
  return;
}



// FUNCTION 140b9d680 FUN_140b9d680 body=228 status=ok
// SIG undefined FUN_140b9d680(void)

void FUN_140b9d680(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_140b9c620(param_1 + 0x15);
  TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>::
  ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(param_1 + 0x12);
  iVar2 = (int)param_1[0x11];
  plVar1 = (longlong *)param_1[0x10];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_140b9c8c0(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
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



// FUNCTION 140b9d770 FUN_140b9d770 body=683 status=ok
// SIG undefined FUN_140b9d770(void)

void FUN_140b9d770(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x70);
    iVar7 = 0;
    if (0 < *(int *)(lVar3 + 0xc88)) {
      lVar8 = 0;
      do {
        plVar9 = (longlong *)(*(longlong *)(lVar3 + 0xc80) + lVar8);
        if ((((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8), *plVar4 == lVar5)
           ) {
          if (((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar9 != 0) {
              lVar5 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar5;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar7 < *(int *)(lVar3 + 0xc88));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0xc80,0);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
    plVar9 = *(longlong **)(lVar5 + 0x4e8);
    lVar5 = *(longlong *)(lVar5 + 0x4e0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    lVar3 = *(longlong *)(param_1 + 0x78);
    iVar7 = 0;
    if (0 < *(int *)(lVar5 + 0x448)) {
      lVar8 = 0;
      do {
        plVar4 = (longlong *)(*(longlong *)(lVar5 + 0x440) + lVar8);
        if ((((int)plVar4[1] != 0) && (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) &&
           (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10), *plVar6 == lVar3
           )) {
          if (((int)plVar4[1] != 0) && (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*plVar4 != 0) {
              lVar3 = FMemory::Realloc(*plVar4,0,0);
              *plVar4 = lVar3;
            }
            *(undefined4 *)(plVar4 + 1) = 0;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar7 < *(int *)(lVar5 + 0x448));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x440,0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
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
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
    plVar9 = *(longlong **)(lVar5 + 0xae8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,param_1 + 0x80);
      (**(code **)(*plVar9 + 0xe0))(plVar9,param_1 + 0x88);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  plVar9 = *(longlong **)(param_1 + 0x40);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  plVar9 = *(longlong **)(param_1 + 0x28);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1);
  return;
}



// FUNCTION 140b9da20 FUN_140b9da20 body=101 status=ok
// SIG undefined FUN_140b9da20(void)

void FUN_140b9da20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe8);
  FUN_1404bf650(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 140b9da90 FUN_140b9da90 body=148 status=ok
// SIG undefined FUN_140b9da90(void)

void FUN_140b9da90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  FUN_140b9c2f0(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 140b9db30 FUN_140b9db30 body=122 status=ok
// SIG undefined FUN_140b9db30(void)

void FUN_140b9db30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 140b9dbb0 ~FEOSUserInterface_CandidateEOSAccount body=89 status=ok
// SIG undefined ~FEOSUserInterface_CandidateEOSAccount(void)

void FEOSUserInterface_CandidateEOSAccount::~FEOSUserInterface_CandidateEOSAccount(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140b9dc10 FUN_140b9dc10 body=151 status=ok
// SIG undefined FUN_140b9dc10(void)

void FUN_140b9dc10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1404bf650(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140b9dcb0 FUN_140b9dcb0 body=102 status=ok
// SIG undefined FUN_140b9dcb0(void)

void FUN_140b9dcb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FExec::~FExec(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140b9dd20 FUN_140b9dd20 body=189 status=ok
// SIG undefined FUN_140b9dd20(void)

void FUN_140b9dd20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  lVar2 = 4;
  lVar3 = param_1 + 0x128;
  do {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd0);
  FUN_140b9dcb0(param_1);
  return;
}



// FUNCTION 140b9dde0 FUN_140b9dde0 body=2459 status=ok
// SIG undefined FUN_140b9dde0(void)

void FUN_140b9dde0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1458);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1440);
  plVar5 = *(longlong **)(param_1 + 0x1398);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1328) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x1320);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x1310) != '\0') {
    *(undefined1 *)(param_1 + 0x1310) = 0;
    FUN_140b9da90();
  }
  *(undefined4 *)(param_1 + 0x12b8) = 0;
  if (*(longlong *)(param_1 + 0x12b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1270);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x1260);
  *(undefined4 *)(param_1 + 0x1258) = 0;
  if (*(longlong *)(param_1 + 0x1250) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1210,0);
  if (*(longlong *)(param_1 + 0x1230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1210) != 0) {
    FMemory::Free();
  }
  TArray<FBartenderPOIPhrase,TSizedDefaultAllocator<32>_>::
  ~TArray<FBartenderPOIPhrase,TSizedDefaultAllocator<32>_>(param_1 + 0x1200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x11e0);
  if (*(char *)(param_1 + 0x1190) != '\0') {
    *(undefined1 *)(param_1 + 0x1190) = 0;
    FEOSUserInterface_CandidateEOSAccount::~FEOSUserInterface_CandidateEOSAccount();
  }
  FUN_140b9ca70(param_1 + 0x1150);
  if (*(char *)(param_1 + 0x1148) != '\0') {
    *(undefined1 *)(param_1 + 0x1148) = 0;
    FUN_140b9db30();
  }
  FUN_140b9c9a0(param_1 + 0x10f0);
  plVar5 = *(longlong **)(param_1 + 0x10e8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x10c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1058) != 0) {
    FMemory::Free();
  }
  FUN_1404bebc0(param_1 + 0x1040);
  if (*(char *)(param_1 + 0x1038) != '\0') {
    *(undefined1 *)(param_1 + 0x1038) = 0;
    FUN_140da92c0();
  }
  FUN_1404bebc0(param_1 + 0xfd8);
  plVar5 = *(longlong **)(param_1 + 0xf78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_140b9ce70(param_1 + 0xf18);
  plVar5 = *(longlong **)(param_1 + 0xf08);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0xef8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xee8) = 0;
  if (*(longlong *)(param_1 + 0xee0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xea0,0);
  if (*(longlong *)(param_1 + 0xec0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xea0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xe90) = 0;
  if (*(longlong *)(param_1 + 0xe88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xe48,0);
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe38) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xe18) = 0;
  if (*(longlong *)(param_1 + 0xe10) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xdd0,0);
  if (*(longlong *)(param_1 + 0xdf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xdd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  if (*(longlong *)(param_1 + 0xdc0) != 0) {
    FMemory::Free();
  }
  FUN_140bb0cd0(param_1 + 0xd80,0);
  if (*(longlong *)(param_1 + 0xda0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd50);
  *(undefined4 *)(param_1 + 0xd48) = 0;
  if (*(longlong *)(param_1 + 0xd40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xd00,0);
  if (*(longlong *)(param_1 + 0xd20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd00) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xce8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xcd0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xcb8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc98);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc80);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc60);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc30);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc08);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xbe0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xbc8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xbb0);
  if (*(longlong *)(param_1 + 0xb88) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0xb68);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0xb58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_1404bf980(param_1 + 0xb28);
  if (*(longlong *)(param_1 + 0xb00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0xae0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xab8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xaa8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa98);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa80);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa68);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa38);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa20);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa08);
  FUN_1404bebc0(param_1 + 0x9f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x9d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x9c0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x9a0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x978);
  plVar5 = *(longlong **)(param_1 + 0x968);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_1411ca510(param_1 + 0x7a0);
  FUN_140da92e0(param_1 + 0x5f0);
  iVar4 = *(int *)(param_1 + 0x5e8);
  plVar5 = *(longlong **)(param_1 + 0x5e0);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x5e0);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x578) != '\0') {
    *(undefined1 *)(param_1 + 0x578) = 0;
    if (*(char *)(param_1 + 0x56c) != '\0') {
      *(undefined1 *)(param_1 + 0x56c) = 0;
    }
    if (*(char *)(param_1 + 0x564) != '\0') {
      *(undefined1 *)(param_1 + 0x564) = 0;
    }
    if (*(longlong *)(param_1 + 0x520) != 0) {
      FMemory::Free();
    }
  }
  FUN_140b9ccb0(param_1 + 0x4f0);
  plVar5 = *(longlong **)(param_1 + 0x4e8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_140b9cdd0(param_1 + 0x4a8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x498);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x488);
  plVar5 = *(longlong **)(param_1 + 0x480);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x468);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x450);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x438);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_140b9cb20(param_1 + 0x420);
  if (*(char *)(param_1 + 0x418) != '\0') {
    *(undefined1 *)(param_1 + 0x418) = 0;
    FUN_140b9da20();
  }
  if (*(char *)(param_1 + 0x318) != '\0') {
    *(undefined1 *)(param_1 + 0x318) = 0;
    FUN_140b9da20();
  }
  *(undefined ***)(param_1 + 0x1f0) = &PTR_FUN_1441b3948;
  FUN_140b9dd20(param_1);
  return;
}



// FUNCTION 140b9e780 FUN_140b9e780 body=396 status=ok
// SIG undefined FUN_140b9e780(void)

longlong * FUN_140b9e780(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x18);
      do {
        FUN_1404bf650(plVar7 + 1);
        plVar5 = (longlong *)*plVar7;
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
        plVar5 = (longlong *)plVar7[-2];
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
        plVar7 = plVar7 + 0x1d;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[1];
    lVar4 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FDCBlueprintSessionResult,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      plVar7 = (longlong *)*param_1;
      if (iVar6 != 0) {
        plVar5 = (longlong *)(lVar4 + 8);
        do {
          *plVar7 = plVar5[-1];
          lVar4 = *plVar5;
          plVar7[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar7[2] = plVar5[1];
          lVar4 = plVar5[2];
          plVar7[3] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          FUN_140b9a900(plVar7 + 4,plVar5 + 3);
          plVar1 = plVar5 + 0x1b;
          plVar5 = plVar5 + 0x1d;
          plVar7[0x1c] = *plVar1;
          plVar7 = plVar7 + 0x1d;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b9e910 operator= body=123 status=ok
// SIG undefined operator=(void)

longlong TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
         ::operator=(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140b9ea60();
    if (*(longlong *)(param_2 + 0x40) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),4);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 140b9e990 FUN_140b9e990 body=124 status=ok
// SIG undefined FUN_140b9e990(void)

undefined8 * FUN_140b9e990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  return param_1;
}



// FUNCTION 140b9ea10 FUN_140b9ea10 body=74 status=ok
// SIG undefined FUN_140b9ea10(void)

longlong FUN_140b9ea10(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0xf8) != '\0') {
      *(undefined1 *)(param_1 + 0xf8) = 0;
      FUN_140b9da20();
    }
    FUN_140b9a9b0(param_1,param_2);
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  return param_1;
}



// FUNCTION 140b9ea60 FUN_140b9ea60 body=673 status=ok
// SIG undefined FUN_140b9ea60(void)

longlong * FUN_140b9ea60(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140b9eb3d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140b9eb3d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140b9ebf3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140b9ebf3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      FVariantData::Empty((longlong)(int)uStack_3c * 0x30 + 8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140b9ed10 FUN_140b9ed10 body=364 status=ok
// SIG undefined FUN_140b9ed10(void)

undefined4 * FUN_140b9ed10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (param_2 + 10 != param_1 + 10) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (*(char *)(param_2 + 0xe) != '\0') {
      uVar1 = param_2[0xb];
      uVar2 = param_2[0xc];
      uVar3 = param_2[0xd];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar1;
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar3;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  if (param_2 + 0xf != param_1 + 0xf) {
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    if (*(char *)(param_2 + 0x13) != '\0') {
      uVar1 = param_2[0x10];
      uVar2 = param_2[0x11];
      uVar3 = param_2[0x12];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar2;
      param_1[0x12] = uVar3;
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
  }
  if (param_2 + 0x14 != param_1 + 0x14) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    if (*(char *)(param_2 + 0x18) != '\0') {
      uVar1 = param_2[0x15];
      uVar2 = param_2[0x16];
      uVar3 = param_2[0x17];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar1;
      param_1[0x16] = uVar2;
      param_1[0x17] = uVar3;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  if (param_2 + 0x19 != param_1 + 0x19) {
    if (*(char *)(param_1 + 0x1d) != '\0') {
      *(undefined1 *)(param_1 + 0x1d) = 0;
    }
    if (*(char *)(param_2 + 0x1d) != '\0') {
      uVar1 = param_2[0x1a];
      uVar2 = param_2[0x1b];
      uVar3 = param_2[0x1c];
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = uVar1;
      param_1[0x1b] = uVar2;
      param_1[0x1c] = uVar3;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  if (param_2 + 0x1e != param_1 + 0x1e) {
    if (*(char *)(param_1 + 0x22) != '\0') {
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
    if (*(char *)(param_2 + 0x22) != '\0') {
      uVar1 = param_2[0x1f];
      uVar2 = param_2[0x20];
      uVar3 = param_2[0x21];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar1;
      param_1[0x20] = uVar2;
      param_1[0x21] = uVar3;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
  }
  if (param_2 + 0x23 != param_1 + 0x23) {
    if (*(char *)(param_1 + 0x27) != '\0') {
      *(undefined1 *)(param_1 + 0x27) = 0;
    }
    if (*(char *)(param_2 + 0x27) != '\0') {
      uVar1 = param_2[0x24];
      uVar2 = param_2[0x25];
      uVar3 = param_2[0x26];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = uVar1;
      param_1[0x25] = uVar2;
      param_1[0x26] = uVar3;
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
  }
  FString::operator=(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  FString::operator=(param_1 + 0x2e,param_2 + 0x2e);
  return param_1;
}



// FUNCTION 140b9ee80 FUN_140b9ee80 body=164 status=ok
// SIG undefined FUN_140b9ee80(void)

undefined1 * FUN_140b9ee80(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x18);
    _Src = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return param_1;
}



// FUNCTION 140b9ef30 FUN_140b9ef30 body=418 status=ok
// SIG undefined FUN_140b9ef30(void)

undefined8 * FUN_140b9ef30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,param_2 + 1);
  }
  puVar1 = param_2 + 2;
  if (param_1 + 2 != puVar1) {
    param_1[2] = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,param_2 + 3);
  }
  puVar1 = param_2 + 5;
  if (param_1 + 5 != puVar1) {
    param_1[5] = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,param_2 + 6);
  }
  plVar2 = param_2 + 7;
  plVar3 = param_1 + 7;
  if (plVar3 != plVar2) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar2;
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x5b);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  *(undefined1 *)((longlong)param_1 + 0x5e) = *(undefined1 *)((longlong)param_2 + 0x5e);
  *(undefined1 *)((longlong)param_1 + 0x5f) = *(undefined1 *)((longlong)param_2 + 0x5f);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  TMap<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
  ::operator=(param_1 + 0xe,param_2 + 0xe);
  puVar1 = param_2 + 0x18;
  if (param_1 + 0x18 != puVar1) {
    param_1[0x18] = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,param_2 + 0x19);
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}



// FUNCTION 140b9f0e0 FUN_140b9f0e0 body=6191 status=ok
// SIG undefined FUN_140b9f0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b9f0e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  short *psVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  undefined1 auStack_168 [32];
  undefined2 local_148;
  short *local_138;
  undefined8 local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108 [2];
  undefined4 local_f8;
  uint uStack_f4;
  undefined1 *puStack_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_110 = 10;
  local_118 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"player_id",0x14);
  (**(code **)*param_3)(param_3,&local_118,param_1);
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  psVar6 = local_138;
  local_148 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_138,8,"Windows");
  local_120 = 0;
  psVar11 = &DAT_143f3eda8;
  if ((int)local_130 != 0) {
    psVar11 = psVar6;
  }
  local_128 = 0;
  if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar11[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar11,(longlong)(int)uVar9 * 2);
  }
  local_118 = 0;
  local_110 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"result_platform",0x20);
  (**(code **)(*param_3 + 8))(param_3,&local_118,&local_128);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (psVar6 != (short *)0x0) {
    FMemory::Free(psVar6);
  }
  local_138 = (short *)0x0;
  local_130 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"{{DateTime}}",0x1a);
  puVar4 = (undefined8 *)FUN_14247e410(local_108,&local_138);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_118 = 0;
  local_110 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"result_date_time",0x22);
  (**(code **)(*param_3 + 8))(param_3,&local_118,&local_128);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_changelist",0x24);
  lVar10 = *param_3;
  uVar5 = FEngineVersion::Current();
  uVar3 = FEngineVersionBase::GetChangelist(uVar5);
  (**(code **)(lVar10 + 0x18))(param_3,&local_138,uVar3);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  uVar5 = FEngineVersion::Current();
  puVar4 = (undefined8 *)FUN_1405859b0(uVar5);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_branchdesc",0x24);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x200) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = *(short **)(*(longlong *)(param_1 + 0x10) + 0x1f8);
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_analytics_tag",0x2a);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_commandline_used",0x30);
  (**(code **)(*param_3 + 0x40))
            (param_3,&local_138,*(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13a2));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_fps_avg",0x1e);
  (**(code **)(*param_3 + 0x38))
            (param_3,&local_138,(float)(1000.0 / *(double *)(DAT_146af4a80 + 0x88)));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_frametime_ms_avg",0x30);
  (**(code **)(*param_3 + 0x38))(param_3,&local_138,(float)*(double *)(DAT_146af4a80 + 0x88));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"result_loadtime_seconds",0x30);
  (**(code **)(*param_3 + 0x38))(param_3,&local_138,*(undefined4 *)(param_1 + 0x20));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = *(short **)(param_1 + 0x28);
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_operating_system_name",0x3c);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x40) + -1 < 1)) {
    pwVar12 = L"Unknown";
  }
  else {
    pwVar12 = *(wchar_t **)(param_1 + 0x38);
  }
  local_120 = 0;
  local_128 = 0;
  if ((pwVar12 != (wchar_t *)0x0) && (*pwVar12 != L'\0')) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (pwVar12[lVar10] != L'\0');
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,pwVar12,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_operating_system_version",0x42);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_14169d9a0(local_108);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_cpu_name",0x22);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_cpu_cores_physical",0x36);
  lVar10 = *param_3;
  uVar3 = FUN_1416a5660();
  (**(code **)(lVar10 + 0x18))(param_3,&local_138,uVar3);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_cpu_cores_logical",0x34);
  lVar10 = *param_3;
  uVar3 = FUN_1416a5810();
  (**(code **)(lVar10 + 0x18))(param_3,&local_138,uVar3);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_cpu_synthbench_result",0x3c);
  (**(code **)(*param_3 + 0x38))(param_3,&local_138,*(undefined4 *)(param_1 + 0x48));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_ram_mb",0x1e);
  (**(code **)(*param_3 + 0x18))
            (param_3,&local_138,*(longlong *)(param_1 + 0x50) + 0xfffffU >> 0x14);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_120 = 0;
  psVar6 = &DAT_143f3eda8;
  if (DAT_146ab6af0 != 0) {
    psVar6 = DAT_146ab6ae8;
  }
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_name",0x22);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_vram_dedicated_video_mb",0x48);
  lVar10 = *(longlong *)(param_1 + 0xd8) + 0xfffff;
  (**(code **)(*param_3 + 0x18))
            (param_3,&local_138,
             (longlong)((ulonglong)((uint)(lVar10 >> 0x3f) & 0xfffff) + lVar10) >> 0x14);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_vram_dedicated_system_mb",0x4a);
  lVar10 = *(longlong *)(param_1 + 0xe0) + 0xfffff;
  (**(code **)(*param_3 + 0x18))
            (param_3,&local_138,
             (longlong)((ulonglong)((uint)(lVar10 >> 0x3f) & 0xfffff) + lVar10) >> 0x14);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_vram_shared_system_mb",0x44);
  lVar10 = *(longlong *)(param_1 + 0xe8) + 0xfffff;
  (**(code **)(*param_3 + 0x18))
            (param_3,&local_138,
             (longlong)((ulonglong)((uint)(lVar10 >> 0x3f) & 0xfffff) + lVar10) >> 0x14);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = *(short **)(param_1 + 0x170);
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_driver_version_user",0x40);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x168) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = *(short **)(param_1 + 0x160);
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_driver_version_internal",0x48);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FGPUDriverInfo::GetUnifiedDriverVersion(param_1 + 0x138,local_108);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_driver_version_unified",0x46);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_120 = 0;
  psVar6 = &DAT_143f3eda8;
  if (DAT_146ab6b20 != 0) {
    psVar6 = DAT_146ab6b18;
  }
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_driver_date",0x30);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_gpu_synthbench_result",0x3c);
  (**(code **)(*param_3 + 0x38))(param_3,&local_138,*(undefined4 *)(param_1 + 400));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x1a0) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = *(short **)(param_1 + 0x198);
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_audio_channel_config",0x3a);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sysinfo_audio_supports_spatial",0x3e);
  (**(code **)(*param_3 + 0x18))(param_3,&local_138,*(undefined4 *)(param_1 + 0x1a8));
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  psVar6 = (short *)(**(code **)(*DAT_146ab6358 + 0x20))();
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"usercfg_graphics_api",0x2a);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"{{ScreenResolution}}",0x2a);
  puVar4 = (undefined8 *)FUN_14247e410(local_108,&local_118);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"usercfg_resolution_output",0x34);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"{{RenderResolution}}",0x2a);
  puVar4 = (undefined8 *)FUN_14247e410(local_108,&local_118);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"usercfg_resolution_scene",0x32);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"{{ScreenPercentage}}",0x2a);
  puVar4 = (undefined8 *)FUN_14247e410(local_108,&local_118);
  if (*(int *)(puVar4 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar4;
  }
  local_120 = 0;
  local_128 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar6[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_120 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
  }
  local_138 = (short *)0x0;
  local_130 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"usercfg_resolution_percentage",0x3c);
  (**(code **)(*param_3 + 8))(param_3,&local_138,&local_128);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_138 = (short *)0x0;
  local_130 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"usercfg_hdr",0x18);
  lVar10 = *param_3;
  uVar2 = FUN_141ee42d0();
  (**(code **)(lVar10 + 0x40))(param_3,&local_138,uVar2);
  if (local_138 != (short *)0x0) {
    FMemory::Free();
  }
  local_88[0] = 0;
  local_88[1] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_78,0,0);
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x318))
            (*(longlong **)(param_1 + 0x10),local_88,1,0);
  puStack_f0 = local_78;
  local_f8 = 0;
  uStack_f4 = 1;
  local_e8 = 0xffffffff;
  iStack_e4 = 0;
  uStack_e0 = 0;
  iVar8 = local_60;
  if (local_60 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
    iVar8 = local_60;
  }
  uStack_c0 = local_e8;
  iStack_bc = iStack_e4;
  local_b8 = CONCAT44(uStack_dc,uStack_e0);
  local_b0 = local_88;
  uStack_a8 = CONCAT44(uStack_f4,local_f8);
  local_e8 = -1 << ((byte)iVar8 & 0x1f);
  puStack_a0 = puStack_f0;
  uStack_d0 = local_f8;
  uStack_cc = uStack_f4;
  local_c8 = puStack_f0;
  uStack_90 = local_b8;
  local_d8 = local_b0;
  uStack_98 = uStack_c0;
  iStack_94 = iStack_bc;
  while( true ) {
    if (((iStack_bc == iVar8) && (local_c8 == local_78)) && (local_d8 == local_88)) break;
    lVar10 = *local_d8 + (longlong)iStack_bc * 0x28;
    if (*(int *)(*local_d8 + 0x18 + (longlong)iStack_bc * 0x28) == 0) {
      psVar6 = &DAT_143f3eda8;
    }
    else {
      psVar6 = *(short **)(lVar10 + 0x10);
    }
    local_110 = 0;
    local_118 = 0;
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
      lVar7 = -1;
      do {
        lVar1 = lVar7 + 1;
        lVar7 = lVar7 + 1;
      } while (psVar6[lVar1] != 0);
      uVar9 = (int)lVar7 + 1;
      local_110 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
      }
      FGenericPlatformString::Memcpy(local_118,psVar6,(longlong)(int)uVar9 * 2);
    }
    puVar4 = (undefined8 *)FString::ToLower(lVar10,&local_f8);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_138,L"usercfg_%s",puVar13);
    puVar4 = (undefined8 *)FUN_142b67320(local_108,&local_138);
    if (*(int *)(puVar4 + 1) == 0) {
      psVar6 = &DAT_143f3eda8;
    }
    else {
      psVar6 = (short *)*puVar4;
    }
    local_120 = 0;
    local_128 = 0;
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
      lVar10 = -1;
      do {
        lVar7 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (psVar6[lVar7] != 0);
      uVar9 = (int)lVar10 + 1;
      local_120 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      }
      FGenericPlatformString::Memcpy(local_128,psVar6,(longlong)(int)uVar9 * 2);
    }
    (**(code **)(*param_3 + 8))(param_3,&local_128,&local_118);
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    if (local_138 != (short *)0x0) {
      FMemory::Free();
    }
    if (CONCAT44(uStack_f4,local_f8) != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_88,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ba0910 FUN_140ba0910 body=177 status=ok
// SIG undefined FUN_140ba0910(void)

uint FUN_140ba0910(void)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  bool bVar7;
  longlong local_18 [2];
  
  bVar7 = false;
  lVar3 = FWeakObjectPtr::Get();
  uVar2 = (uint)lVar3;
  if (lVar3 == 0) goto LAB_140ba09b4;
  if (*(int *)(lVar3 + 0xe40) < 2) {
LAB_140ba0983:
    bVar1 = false;
  }
  else {
    puVar4 = (undefined8 *)FUN_140bbbfc0(lVar3,local_18);
    puVar5 = &DAT_143f3eda8;
    if (*(int *)(lVar3 + 0xe40) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(lVar3 + 0xe38);
    }
    if (*(int *)(puVar4 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar4;
    }
    bVar7 = true;
    uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
    if (uVar2 == 0) goto LAB_140ba0983;
    bVar1 = true;
  }
  if ((bVar7) && (local_18[0] != 0)) {
    uVar2 = FMemory::Free();
  }
  if (bVar1) {
    uVar2 = FUN_140bcb680(lVar3,lVar3 + 0xe38);
  }
LAB_140ba09b4:
  return uVar2 & 0xffffff00;
}



// FUNCTION 140ba09d0 FUN_140ba09d0 body=316 status=ok
// SIG undefined FUN_140ba09d0(void)

void FUN_140ba09d0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  int local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(param_1 + 3);
  puVar5 = (undefined8 *)param_1[2];
  local_38 = (undefined8 *)0x0;
  local_30 = iVar4;
  if (iVar4 == 0) {
    local_2c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4,0);
    puVar3 = local_38;
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 1);
  puVar5 = (undefined8 *)*param_1;
  local_28 = (undefined8 *)0x0;
  local_20 = iVar4;
  if (iVar4 == 0) {
    local_1c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,iVar4,0);
    puVar3 = local_28;
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_141200600(param_1[4] + 0x7a0,&local_28,&local_38);
  return;
}



// FUNCTION 140ba0b10 FUN_140ba0b10 body=351 status=ok
// SIG undefined FUN_140ba0b10(void)

longlong FUN_140ba0b10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  
  lVar8 = 0;
  plVar12 = *(longlong **)(*param_1 + 0x38);
  plVar1 = plVar12 + *(int *)(*param_1 + 0x40);
  do {
    if (plVar12 == plVar1) {
      return lVar8;
    }
    if ((*plVar12 != 0) && (plVar2 = *(longlong **)(*plVar12 + 0x30), plVar2 != (longlong *)0x0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar6 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar6 != 0)) {
        uVar7 = FUN_14134c430();
        cVar4 = FUN_142ef5b10(lVar6,uVar7);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(lVar6 + 0x48);
          iVar11 = 0;
          lVar10 = 0;
          if (0 < iVar5) {
            do {
              if ((lVar10 < 0) || (iVar5 <= iVar11)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((bVar3) &&
                  (plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + lVar10 * 8),
                  plVar2 != (longlong *)0x0)) &&
                 (lVar8 = (**(code **)(*plVar2 + 0x278))(), lVar8 != 0)) {
                lVar9 = FUN_14134c430();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) break;
              }
              iVar5 = *(int *)(lVar6 + 0x48);
              lVar8 = 0;
              iVar11 = iVar11 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar11 < iVar5);
          }
        }
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
}



// FUNCTION 140ba0c70 FUN_140ba0c70 body=270 status=ok
// SIG undefined FUN_140ba0c70(void)

undefined8 FUN_140ba0c70(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  
  plVar3 = *(longlong **)*param_1;
  plVar4 = (longlong *)((longlong *)*param_1)[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
LAB_140ba0cdf:
    bVar5 = false;
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if ((cVar7 == '\0') || (plVar3 == (longlong *)0x0)) goto LAB_140ba0cdf;
    cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (cVar7 == '\0') goto LAB_140ba0cdf;
    bVar5 = true;
  }
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
LAB_140ba0cf5:
    if (plVar3 != (longlong *)0x0) {
      cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar7 != '\0') goto LAB_140ba0d07;
    }
LAB_140ba0d21:
    uVar8 = 1;
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar7 == '\0') goto LAB_140ba0cf5;
LAB_140ba0d07:
    if (bVar5) {
      cVar7 = (**(code **)*plVar3)(plVar3,*(undefined8 *)(param_2 + 8));
      if (cVar7 != '\0') goto LAB_140ba0d21;
    }
    uVar8 = 0;
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 140ba0d80 FUN_140ba0d80 body=152 status=ok
// SIG undefined FUN_140ba0d80(void)

void FUN_140ba0d80(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_68 [2];
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  FSoftObjectPath::ToString(param_1 + 0x10,local_68);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  lVar2 = FUN_141796df0(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
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
      local_28 = 0;
      local_18 = 0;
      local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142081b30(lVar2,local_58);
    }
  }
  return;
}



// FUNCTION 140ba0e20 FUN_140ba0e20 body=271 status=ok
// SIG undefined FUN_140ba0e20(void)

ulonglong FUN_140ba0e20(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar5 = FUN_142547b50(param_2,local_38);
  local_48 = *(undefined8 *)(lVar5 + 8);
  local_40 = *(longlong **)(lVar5 + 0x10);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_38[0] = &PTR_FUN_143f740c8;
  if (local_20 != 0) {
    FMemory::Free();
  }
  local_38[0] = &PTR_FUN_143f73d18;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  uVar6 = FUN_140bb88c0(*param_1,&local_48);
  plVar1 = local_40;
  uVar7 = uVar6 & 0xffffffff;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    uVar6 = uVar7;
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140ba0f30 FUN_140ba0f30 body=795 status=ok
// SIG undefined FUN_140ba0f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ba0f30(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar7 = FUN_140dbd1c0(local_f0);
  FText::operator=(*param_1 + 0x20,uVar7);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_e8 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  cVar6 = FText::IsEmpty(*param_1 + 0x20);
  if (cVar6 == '\0') {
    lVar8 = FText::FText(local_80,*param_1 + 0x20);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,L"{0} Matchmaking",L"MatchmakingWidget",L"TitleFormat");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar7);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_128 = *puVar9;
    local_138 = local_68;
    puStack_130 = local_38;
    local_120 = puVar9[1];
    local_40 = '\x01';
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_138);
    uVar7 = FText::Format(local_d8,&local_128,uVar7);
    FText::FText(local_108,uVar7);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_118);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = *(longlong **)(lVar8 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    FText::operator=(*param_1 + 0x20,local_108);
    local_a0 = local_b8;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_a0 = local_b8;
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
          local_a0 = local_b8;
        }
      }
    }
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"Matchmaking",L"MatchmakingWidget",L"DefaultTitle");
    FText::operator=(*param_1 + 0x20,uVar7);
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return;
}



// FUNCTION 140ba1250 FUN_140ba1250 body=173 status=ok
// SIG undefined FUN_140ba1250(void)

undefined8 FUN_140ba1250(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = FUN_142b45e90();
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  uVar6 = FUN_142b54910(uVar7,param_2);
  if ((char)uVar6 == '\0') {
    return uVar6;
  }
  FUN_142b48170(uVar7,&local_18,param_2);
  if (local_18 != 0) {
    cVar4 = FUN_142b547a0();
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_140ba12b0;
    }
  }
  uVar7 = 0;
LAB_140ba12b0:
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
  return uVar7;
}



// FUNCTION 140ba1300 FUN_140ba1300 body=441 status=ok
// SIG undefined FUN_140ba1300(void)

void FUN_140ba1300(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  cVar5 = FWeakObjectPtr::IsValid();
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar5 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  lVar8 = lVar6 + 0x48;
  lVar7 = FWeakObjectPtr::Get(lVar8);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar6 + 0x50)) || (*(longlong *)(lVar6 + 0x58) == 0))
    goto LAB_140ba1446;
    lVar7 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar8,lVar7);
    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar6 + 0x50) = DAT_1464b56f4;
    }
    lVar7 = FWeakObjectPtr::Get(lVar8);
    if (lVar7 == 0) goto LAB_140ba1446;
  }
  lVar8 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    lVar8 = lVar7;
    do {
      if (lVar8 == lVar6) {
        lVar8 = FUN_142f2cf80();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_140ba1449;
        break;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
LAB_140ba1446:
  lVar7 = 0;
LAB_140ba1449:
  lVar8 = FWeakObjectPtr::Get(param_1);
  plVar1 = (longlong *)(lVar8 + 0x1370);
  plVar3 = (longlong *)*plVar1;
  iVar2 = *(int *)(lVar8 + 0x1378);
  plVar9 = plVar3;
  do {
    if (plVar9 == plVar3 + iVar2) {
LAB_140ba148f:
      *(int *)(lVar8 + 0x1378) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x137c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      return;
    }
    if (*plVar9 == lVar7) {
      if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) {
        return;
      }
      goto LAB_140ba148f;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 140ba14c0 FUN_140ba14c0 body=442 status=ok
// SIG undefined FUN_140ba14c0(void)

undefined8 FUN_140ba14c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_res10;
  longlong local_18;
  longlong local_10;
  
  plVar10 = (longlong *)0x0;
  local_res10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar3 = DAT_146852c58;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FModuleManager::GetModule(uVar6,uVar3);
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x50))(plVar7,local_res10);
  plVar7 = plVar10;
  if (plVar8 != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,&local_res10);
    lVar1 = *param_1;
    lVar2 = *plVar7;
    if (*(int *)(lVar1 + 0xd88) != *(int *)(lVar1 + 0xdb4)) {
      lVar9 = *(longlong *)(lVar1 + 0xdc0);
      if (*(longlong *)(lVar1 + 0xdc0) == 0) {
        lVar9 = lVar1 + 0xdb8;
      }
      iVar5 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(lVar1 + 0xdc8) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar5 * 0x30 + *(longlong *)(lVar1 + 0xd80));
          if (*plVar8 == lVar2) {
            if (iVar5 != -1) goto LAB_140ba15d3;
            goto LAB_140ba15d0;
          }
          iVar5 = (int)plVar8[5];
        } while (iVar5 != -1);
        plVar7 = (longlong *)0x0;
        goto LAB_140ba15e3;
      }
    }
LAB_140ba15d0:
    plVar8 = plVar10;
LAB_140ba15d3:
    plVar7 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar7 = plVar10;
    }
  }
LAB_140ba15e3:
  if (plVar7 != (longlong *)0x0) {
    local_18 = *plVar7;
    local_10 = plVar7[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    cVar4 = FUN_140bca7d0(*param_1,&local_18);
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ba16b0 FUN_140ba16b0 body=52 status=ok
// SIG undefined FUN_140ba16b0(void)

undefined8 FUN_140ba16b0(undefined8 param_1,ulonglong param_2)

{
  FUN_140b9cd40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 140ba16f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_fee03d9838c5c1a2f8909b77cb588ace>,1>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140537930();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140ba1730 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_ec1f6a91f7f823408d9544c27a32f674>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140537630(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140ba1780 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMagicLeapEyeTrackerModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140ba1810 FUN_140ba1810 body=66 status=ok
// SIG undefined FUN_140ba1810(void)

undefined8 * FUN_140ba1810(undefined8 *param_1,ulonglong param_2)

{
  FUN_140b9c180(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 140ba1860 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEventTemplateBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140ba18b0 FUN_140ba18b0 body=97 status=ok
// SIG undefined FUN_140ba18b0(void)

undefined8 * FUN_140ba18b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144319540;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140ba1920 FUN_140ba1920 body=97 status=ok
// SIG undefined FUN_140ba1920(void)

undefined8 * FUN_140ba1920(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144319550;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140ba1990 FUN_140ba1990 body=97 status=ok
// SIG undefined FUN_140ba1990(void)

undefined8 * FUN_140ba1990(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144318d30;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140ba1a00 FUN_140ba1a00 body=97 status=ok
// SIG undefined FUN_140ba1a00(void)

undefined8 * FUN_140ba1a00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1443194f8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140ba1a70 FUN_140ba1a70 body=97 status=ok
// SIG undefined FUN_140ba1a70(void)

undefined8 * FUN_140ba1a70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1443194e8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140ba1ae0 FUN_140ba1ae0 body=97 status=ok
// SIG undefined FUN_140ba1ae0(void)

undefined8 * FUN_140ba1ae0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144319508;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140ba1b50 FUN_140ba1b50 body=183 status=ok
// SIG undefined FUN_140ba1b50(void)

longlong FUN_140ba1b50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x4c0);
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
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b3948;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e8);
  }
  return param_1;
}



// FUNCTION 140ba1c10 FUN_140ba1c10 body=52 status=ok
// SIG undefined FUN_140ba1c10(void)

undefined8 FUN_140ba1c10(undefined8 param_1,ulonglong param_2)

{
  FUN_140b9cdd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140ba1c50 FUN_140ba1c50 body=186 status=ok
// SIG undefined FUN_140ba1c50(void)

undefined8 * FUN_140ba1c50(undefined8 *param_1,ulonglong param_2)

{
  param_1[0xf] = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x14,0);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd);
  *param_1 = &PTR_FUN_1443179d0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 140ba1d10 FUN_140ba1d10 body=165 status=ok
// SIG undefined FUN_140ba1d10(void)

longlong FUN_140ba1d10(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  FUN_140bb06e0(param_1 + 0xd0,0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xa8);
  FUN_140b9cef0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 140ba1dc0 FUN_140ba1dc0 body=398 status=ok
// SIG undefined FUN_140ba1dc0(void)

longlong FUN_140ba1dc0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x218,0);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_140bb0a80(param_1 + 0x1c0,0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  FUN_140b9c930(param_1 + 400);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140bb06e0(param_1 + 0x140,0);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  FUN_140bb0060(param_1 + 0xf0,0);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  FUN_140b9cef0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 140ba1f50 FUN_140ba1f50 body=43 status=ok
// SIG undefined FUN_140ba1f50(void)

undefined8 * FUN_140ba1f50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144316150;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140ba1f80 FUN_140ba1f80 body=104 status=ok
// SIG undefined FUN_140ba1f80(void)

undefined8 * FUN_140ba1f80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd);
  *param_1 = &PTR_FUN_1443179d0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140ba1ff0 FUN_140ba1ff0 body=43 status=ok
// SIG undefined FUN_140ba1ff0(void)

undefined8 * FUN_140ba1ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144317b10;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140ba2020 FUN_140ba2020 body=81 status=ok
// SIG undefined FUN_140ba2020(void)

undefined8 * FUN_140ba2020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1443179d0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140ba2080 FUN_140ba2080 body=139 status=ok
// SIG undefined FUN_140ba2080(void)

longlong FUN_140ba2080(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2a8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x290);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x278);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x260);
  FUN_1404bf300(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 140ba2110 FUN_140ba2110 body=81 status=ok
// SIG undefined FUN_140ba2110(void)

undefined8 * FUN_140ba2110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1443179d0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140ba2170 FUN_140ba2170 body=43 status=ok
// SIG undefined FUN_140ba2170(void)

undefined8 * FUN_140ba2170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1443170a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140ba21a0 FUN_140ba21a0 body=90 status=ok
// SIG undefined FUN_140ba21a0(void)

longlong FUN_140ba21a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 140ba2200 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FNVAnselCameraPhotographyPrivate::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140b9dde0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1470);
  }
  return param_1;
}



// FUNCTION 140ba2240 FUN_140ba2240 body=356 status=ok
// SIG undefined FUN_140ba2240(void)

void FUN_140ba2240(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_28 [4];
  
  plVar2 = (longlong *)UGameInstance::GetGameViewportClient();
  if ((((*(char *)(param_1 + 0x13a0) == '\0') && (*(char *)(param_1 + 0x13a1) != '\0')) &&
      (plVar2 != (longlong *)0x0)) && (DAT_146af4a80 != 0)) {
    FUN_142472a90(DAT_146af4a80,1);
    local_28[1] = 0x12;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"DelayedCmd -empty",0x24);
    (**(code **)(*plVar2 + 0x2e8))(plVar2,local_28 + 2,local_28);
    if (local_28[2] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    lVar3 = UGameInstance::GetFirstGamePlayer(param_1);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      lVar4 = FUN_14145f370();
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
        FUN_140d12e80(lVar3);
      }
    }
    *(undefined2 *)(param_1 + 0x13a0) = 0;
    *(undefined8 *)(param_1 + 0x13a8) = 0;
    *(undefined8 *)(param_1 + 0x13b0) = 0;
    *(undefined4 *)(param_1 + 0x13bc) = 0;
    *(undefined4 *)(param_1 + 0x13b8) = 0xffffffff;
    if (*(char *)(param_1 + 0x13a2) != '\0') {
      FUN_1416a8180(0);
      return;
    }
    FUN_140be5070(param_1);
  }
  return;
}



// FUNCTION 140ba23b0 FUN_140ba23b0 body=898 status=ok
// SIG undefined FUN_140ba23b0(void)

void FUN_140ba23b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar4 = (longlong *)(param_1 + 0x460);
  if (*plVar4 != 0) {
    if ((((*(int *)(param_1 + 0x11e8) != 0) && (*(longlong **)(param_1 + 0x11e0) != (longlong *)0x0)
         ) && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x11e0) + 0x18))(), cVar6 != '\0')) &&
       ((*(int *)(param_1 + 0x11e8) != 0 &&
        (plVar8 = *(longlong **)(param_1 + 0x11e0), plVar8 != (longlong *)0x0)))) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      if (*(longlong *)(param_1 + 0x11e0) != 0) {
        uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x11e0),0,0);
        *(undefined8 *)(param_1 + 0x11e0) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x11e8) = 0;
    }
    if ((*(longlong *)(param_1 + 0x1f8) != 0) &&
       (plVar8 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar8 != (longlong *)0x0)) {
      TBaseMulticastDelegate<void>::Remove(plVar8 + 7,*(undefined8 *)(param_1 + 0xfb8));
      local_70 = *(longlong **)(param_1 + 0x468);
      local_78 = *plVar4;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar8 + 0x50))(plVar8,&local_78);
      plVar3 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_70)(local_70);
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
      local_68 = *plVar4;
      local_60 = *(longlong **)(param_1 + 0x468);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_140d29080(plVar8,&local_68);
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
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
      local_58 = *plVar4;
      local_50 = *(longlong **)(param_1 + 0x468);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_140d29120(plVar8,&local_58);
      plVar8 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    lVar9 = FUN_142b45e90();
    uVar7 = *(undefined8 *)(lVar9 + 0x18);
    local_48 = *plVar4;
    local_40 = *(longlong **)(param_1 + 0x468);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_142b41880(uVar7,&local_48);
    plVar8 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    local_38 = *plVar4;
    local_30 = *(longlong **)(param_1 + 0x468);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_142b41f30(uVar7,&local_38);
    plVar8 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    TBaseMulticastDelegate<void>::Remove(param_1 + 0x668,*(undefined8 *)(param_1 + 0xfc0));
    plVar8 = *(longlong **)(param_1 + 0xae8);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x100))(plVar8,param_1 + 0xf60);
    }
    uVar7 = FUN_14164ab60();
    FUN_141597530(uVar7,*(undefined8 *)(param_1 + 4000));
    *(undefined8 *)(param_1 + 4000) = 0;
    FUN_140bc3630(param_1);
    local_80 = (longlong *)0x0;
    if (plVar4 != &local_88) {
      *plVar4 = 0;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x468,&local_80);
      plVar4 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ba2740 FUN_140ba2740 body=134 status=ok
// SIG undefined FUN_140ba2740(void)

void FUN_140ba2740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  Online::GetSessionInterface(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x158))(local_18,param_2,param_3);
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



// FUNCTION 140ba27d0 FUN_140ba27d0 body=161 status=ok
// SIG undefined FUN_140ba27d0(void)

void FUN_140ba27d0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
      ((lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 == 0 ||
       (iVar1 = FUN_1428cf800(lVar2), iVar1 != 3)))) &&
     ((param_4 != (longlong *)0x0 && (*(longlong *)(param_1 + 0xb20) != 0)))) {
    plVar3 = (longlong *)(**(code **)(*param_4 + 0x680))(param_4);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_4;
    }
    (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x278))
              (*(longlong **)(param_1 + 0xb20),param_3,param_2,plVar3);
  }
  return;
}



// FUNCTION 140ba2880 FUN_140ba2880 body=1097 status=ok
// SIG undefined FUN_140ba2880(void)

void FUN_140ba2880(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68;
  longlong *local_58;
  longlong local_50;
  
  plVar4 = (longlong *)param_2[1];
  local_118 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_110 = plVar4;
  lVar7 = FUN_140bbb190(param_1,&local_118);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((lVar7 != 0) && (lVar7 = FUN_140cff230(lVar7), lVar7 != 0)) {
    FUN_140bbb2b0(param_1,local_88,param_2);
    FUN_140bbc6f0(param_1,local_98,param_2);
    puVar10 = *(undefined8 **)(param_1 + 0x38);
    uVar11 = 0;
    uVar9 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
    if (puVar10 + *(int *)(param_1 + 0x40) < puVar10) {
      uVar9 = uVar11;
    }
    if (uVar9 != 0) {
      do {
        lVar8 = FUN_142547b50(*puVar10);
        plVar4 = *(longlong **)(lVar8 + 0x10);
        lVar8 = *(longlong *)(lVar8 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_68 = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar5 = local_58;
        local_68 = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_58 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        if ((lVar8 == 0) || (lVar8 != *param_2)) {
          local_128 = (undefined4)lVar8;
          uStack_124 = (undefined4)((ulonglong)lVar8 >> 0x20);
          uStack_120 = SUB84(plVar4,0);
          uStack_11c = (undefined4)((ulonglong)plVar4 >> 0x20);
          local_108 = local_128;
          uStack_104 = uStack_124;
          uStack_100 = uStack_120;
          uStack_fc = uStack_11c;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          FUN_140bbb2b0(param_1,local_c8,&local_108);
          plVar5 = (longlong *)CONCAT44(uStack_fc,uStack_100);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
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
          local_f8 = local_128;
          uStack_f4 = uStack_124;
          uStack_f0 = uStack_120;
          uStack_ec = uStack_11c;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          FUN_140bbc6f0(param_1,local_d8,&local_f8);
          plVar5 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
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
          FUN_140d27140(lVar7,local_c8,local_d8);
          lVar8 = FUN_140bbb190(param_1);
          if ((lVar8 != 0) && (lVar8 = FUN_140cff230(lVar8), lVar8 != 0)) {
            FUN_140d27140(lVar8,local_88,local_98);
            local_e8 = 0;
            local_e0 = 0;
            local_78 = local_128;
            uStack_74 = uStack_124;
            uStack_70 = uStack_120;
            uStack_6c = uStack_11c;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            FUN_140bea370(param_1,&local_78,&local_e8);
          }
          plVar5 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_d0 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
          plVar5 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_c0 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
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
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        puVar10 = puVar10 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
    }
    local_a8 = *param_2;
    local_a0 = param_2[1];
    local_b8 = 0;
    local_b0 = 0;
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    FUN_140bea370(param_1,&local_a8,&local_b8);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ba2cd0 FUN_140ba2cd0 body=261 status=ok
// SIG undefined FUN_140ba2cd0(void)

/* WARNING: Removing unreachable block (ram,0x000140ba2d9a) */

undefined8 * FUN_140ba2cd0(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x278);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x280);
    *(int *)(param_1 + 0x280) = iVar2 + 1;
    if (*(int *)(param_1 + 0x284) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 140ba2de0 FUN_140ba2de0 body=261 status=ok
// SIG undefined FUN_140ba2de0(void)

/* WARNING: Removing unreachable block (ram,0x000140ba2eaa) */

undefined8 * FUN_140ba2de0(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x2f0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x2f8);
    *(int *)(param_1 + 0x2f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2fc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 140ba2ef0 FUN_140ba2ef0 body=85 status=ok
// SIG undefined FUN_140ba2ef0(void)

undefined8 * FUN_140ba2ef0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x290,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 140ba2f50 FUN_140ba2f50 body=261 status=ok
// SIG undefined FUN_140ba2f50(void)

/* WARNING: Removing unreachable block (ram,0x000140ba301a) */

undefined8 * FUN_140ba2f50(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x2d8);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 140ba3060 FUN_140ba3060 body=261 status=ok
// SIG undefined FUN_140ba3060(void)

/* WARNING: Removing unreachable block (ram,0x000140ba312a) */

undefined8 * FUN_140ba3060(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x2a8);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x2b0);
    *(int *)(param_1 + 0x2b0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2b4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 140ba3170 FUN_140ba3170 body=85 status=ok
// SIG undefined FUN_140ba3170(void)

undefined8 * FUN_140ba3170(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x2c0,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 140ba31d0 FUN_140ba31d0 body=125 status=ok
// SIG undefined FUN_140ba31d0(void)

void FUN_140ba31d0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  if (((param_2 != 0) && (param_3 != 0)) && (*(int *)(param_1 + 0x1360) < 10)) {
    FWeakObjectPtr::operator=(&local_18);
    iVar1 = *(int *)(param_1 + 0x1360);
    *(int *)(param_1 + 0x1360) = iVar1 + 1;
    local_10 = param_3;
    if (*(int *)(param_1 + 0x1364) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x1358),iVar1);
    }
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1358));
    *puVar2 = local_18;
    puVar2[1] = local_14;
    *(longlong *)(puVar2 + 2) = local_10;
  }
  return;
}



// FUNCTION 140ba3250 FUN_140ba3250 body=336 status=ok
// SIG undefined FUN_140ba3250(void)

void FUN_140ba3250(longlong *param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  longlong local_10;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) && (lVar4 != 0)) {
    bVar1 = false;
    UWorld::GetPlayerControllerIterator(lVar4,&local_18);
    iVar3 = (int)local_10;
    while ((-1 < iVar3 && (iVar3 < (int)((longlong *)CONCAT44(uStack_14,local_18))[1]))) {
      plVar5 = (longlong *)
               FWeakObjectPtr::Get(*(longlong *)CONCAT44(uStack_14,local_18) + (longlong)iVar3 * 8);
      if (plVar5 == (longlong *)0x0) {
LAB_140ba330d:
        iVar3 = (int)local_10 + 1;
        local_10 = CONCAT44(local_10._4_4_,iVar3);
      }
      else {
        if ((bVar1) ||
           ((cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 != '\0' &&
            (cVar2 = (**(code **)(*param_2 + 0x838))(param_2,plVar5), cVar2 != '\0')))) {
          bVar1 = true;
          goto LAB_140ba330d;
        }
        bVar1 = false;
        iVar3 = (int)local_10 + 1;
        local_10 = CONCAT44(local_10._4_4_,iVar3);
      }
    }
    if ((bVar1) && ((int)param_1[0x26c] < 10)) {
      FWeakObjectPtr::operator=(&local_18,param_2);
      iVar3 = (int)param_1[0x26c];
      *(int *)(param_1 + 0x26c) = iVar3 + 1;
      local_10 = param_3;
      if (*(int *)((longlong)param_1 + 0x1364) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x26b,iVar3);
      }
      puVar6 = (undefined4 *)((longlong)iVar3 * 0x10 + param_1[0x26b]);
      *puVar6 = local_18;
      puVar6[1] = uStack_14;
      *(longlong *)(puVar6 + 2) = local_10;
    }
  }
  return;
}



// FUNCTION 140ba33a0 FUN_140ba33a0 body=369 status=ok
// SIG undefined FUN_140ba33a0(void)

void FUN_140ba33a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  cVar5 = FUN_140ba5820();
  if (cVar5 != '\0') {
    FUN_140bbc6f0(param_1,&local_38,param_3);
    plVar7 = plStack_30;
    if (local_38 != 0) {
      puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
      Online::GetSessionInterface(&local_28,*puVar6);
      plVar7 = plStack_30;
      if (local_28 != (longlong *)0x0) {
        local_18 = local_38;
        plStack_10 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_28 + 0x158))(plStack_30,param_2,&local_18);
        plVar4 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_10 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = plStack_30;
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = plStack_30;
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
              plVar7 = plStack_30;
            }
          }
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_20 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = plStack_30;
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = plStack_30;
          if (iVar2 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            plVar7 = plStack_30;
          }
        }
      }
    }
    plVar4 = plStack_30;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ba3520 FUN_140ba3520 body=479 status=ok
// SIG undefined FUN_140ba3520(void)

bool FUN_140ba3520(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  bVar5 = false;
  bVar4 = false;
  local_res8[0] = 0;
  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_res8);
  lVar3 = *plVar8;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_res18);
  if (lVar3 != *plVar8) {
    iVar7 = FUN_140bb67f0(param_2);
    if (iVar7 == 1) {
      return false;
    }
    if (iVar7 == 2) {
      FUN_140bbc950(param_1,&local_58,param_3);
      if (local_58 == 0) {
        bVar9 = false;
      }
      else {
        local_48 = *param_2;
        local_40 = (longlong *)param_2[1];
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_38 = local_58;
        plStack_30 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        bVar5 = true;
        bVar4 = true;
        cVar6 = FUN_140bcacb0(param_1,&local_48,&local_38);
        bVar9 = cVar6 != '\0';
      }
      plVar8 = plStack_30;
      if (bVar4) {
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      plVar8 = local_40;
      if ((bVar5) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar8 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      return bVar9;
    }
  }
  return true;
}



// FUNCTION 140ba3700 FUN_140ba3700 body=894 status=ok
// SIG undefined FUN_140ba3700(void)

void FUN_140ba3700(longlong *param_1)

{
  wchar_t _C;
  int iVar1;
  bool bVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 **ppuVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined1 local_res8 [8];
  undefined2 *local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x830) >> 2 & 1) != 0)) {
    lVar7 = FUN_14244f490(param_1,0);
    if (lVar7 == 0) {
      return;
    }
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    lVar7 = FUN_140cfbfb0(lVar7);
    if (lVar7 == 0) {
      return;
    }
    iVar6 = (int)param_1[0x20f];
    if ((int)param_1[0x20f] < 1) {
      iVar6 = 0;
    }
    lVar8 = FUN_140d3b050(lVar7,*(undefined4 *)(lVar7 + 0x140));
    *(int *)(lVar8 + 4) = iVar6;
    iVar6 = rand();
    lVar7 = FUN_140d3b050(lVar7,*(undefined4 *)(lVar7 + 0x140));
    *(int *)(lVar7 + 8) = iVar6;
    return;
  }
  if ((int)param_1[0x20f] < 1) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b579c0(uVar9);
  }
  else {
    uVar9 = (**(code **)(*param_1 + 0x148))();
    cVar3 = FUN_140b60d90(uVar9);
    if (cVar3 != '\0') {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar6 = FUN_140b5d0c0(uVar9);
      if (iVar6 == (int)param_1[0x20f]) goto LAB_140ba383f;
    }
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b50900(uVar9,(int)param_1[0x20f],0);
  }
LAB_140ba383f:
  puVar14 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  iVar6 = 0;
  local_30 = (ulonglong)(uint)local_30;
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    ppuVar10 = (undefined2 **)FUN_1428cc8c0(lVar7,local_28);
    iVar15 = iVar6;
    if (&local_38 != ppuVar10) {
      iVar1 = *(int *)(ppuVar10 + 1);
      puVar16 = *ppuVar10;
      local_30 = CONCAT44(local_30._4_4_,iVar1);
      puVar14 = (undefined2 *)0x0;
      iVar15 = 0;
      if (iVar1 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
        puVar14 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,puVar16,(longlong)iVar1 * 2);
        iVar15 = (uint)local_30;
      }
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    puVar16 = puVar14;
    if (iVar15 != 0) goto LAB_140ba38cf;
  }
  puVar16 = &DAT_143f3eda8;
LAB_140ba38cf:
  pwVar13 = L"Sanctuary3_P";
  do {
    _C = *(wchar_t *)((longlong)pwVar13 + (longlong)(puVar16 + -0xa2185b3c));
    if ((_C == L'\0') && (*pwVar13 == L'\0')) goto LAB_140ba391f;
    if (_C != *pwVar13) {
      wVar4 = towlower(_C);
      wVar5 = towlower(*pwVar13);
      if (wVar4 != wVar5) {
        iVar6 = (uint)wVar4 - (uint)wVar5;
LAB_140ba391f:
        if (puVar14 != (undefined2 *)0x0) {
          FMemory::Free(puVar14);
        }
        if (iVar6 == 0) {
          local_38 = (undefined2 *)0x0;
          local_30 = 0x5f;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          FGenericPlatformString::Memcpy
                    (local_38,
                     L"/Game/Maps/Sanctuary3/Sanctuary3_Mission.Sanctuary3_Mission:PersistentLevel.IO_MayhemStation_2"
                     ,0xbe);
          puVar11 = (undefined8 *)FName::FName(local_res8,L"IO_MayhemStation_2",1);
          plVar12 = (longlong *)StaticFindObjectFastExplicit(0,*puVar11,&local_38,0,0);
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (plVar12 != (longlong *)0x0) {
            lVar7 = FUN_1428dfc70();
            if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x38) < DAT_14686a800) &&
                 (_Init_thread_header(&DAT_14686a800), DAT_14686a800 == -1)) {
                FName::FName(&DAT_14686a7f8,L"OnMayhemStateChanged",1);
                _Init_thread_footer(&DAT_14686a800);
              }
              lVar7 = UObject::FindFunction(plVar12,DAT_14686a7f8);
              if (lVar7 != 0) {
                (**(code **)(*plVar12 + 0x208))(plVar12,lVar7,0);
              }
            }
          }
        }
        return;
      }
    }
    pwVar13 = pwVar13 + 1;
  } while( true );
}



// FUNCTION 140ba3a80 FUN_140ba3a80 body=1644 status=ok
// SIG undefined FUN_140ba3a80(void)

void FUN_140ba3a80(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_1b8;
  longlong *local_1b0;
  undefined **local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  undefined8 *local_180;
  int local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  longlong *local_150;
  longlong *local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined8 local_128;
  longlong local_120 [2];
  undefined **local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined **local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar6 = FUN_1428cf800(uVar8);
    if (iVar6 == 3) {
      return;
    }
  }
  lVar7 = FUN_140bb6170(param_1);
  if (lVar7 != 0) {
    return;
  }
  puVar13 = (undefined8 *)0x0;
  iVar6 = 0;
  local_180 = (undefined8 *)0x0;
  local_178 = 0;
  if (param_2 == '\x01') {
    ppuVar9 = (undefined8 **)FUN_140bb8480(param_1,local_120,2);
    if (&local_180 != ppuVar9) {
      puVar13 = *ppuVar9;
      *ppuVar9 = (undefined8 *)0x0;
      iVar6 = *(int *)(ppuVar9 + 1);
      ppuVar9[1] = (undefined8 *)0x0;
      local_180 = puVar13;
      local_178 = iVar6;
    }
    if (local_120[0] != 0) {
      FMemory::Free(local_120[0]);
    }
    if (iVar6 < 1) goto LAB_140ba3f23;
    puVar3 = puVar13 + iVar6;
    for (; puVar13 != puVar3; puVar13 = puVar13 + 1) {
      FUN_142547b50(*puVar13,&local_1a8);
      if ((local_1a0 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*local_1a0 + 0x20))(), cVar5 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (local_1a0 != (longlong *)0x0)) {
        FUN_1404cf2e0(&local_1b8,0);
        plVar12 = local_1b8;
        if ((local_1b8 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*local_1b8 + 0x10))(local_1b8,2), cVar5 != '\0')) {
          local_150 = local_1a0;
          local_170 = 0;
          local_168 = 0;
          local_148 = local_198;
          if (local_198 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_198 + 1) = (int)local_198[1] + 1;
            UNLOCK();
            plVar12 = local_1b8;
          }
          (**(code **)(*plVar12 + 0x30))(plVar12,&local_150,2,&local_170);
          plVar12 = local_148;
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_148 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_148)(local_148);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          if (local_170 != 0) {
            FMemory::Free();
          }
          plVar12 = local_1b0;
          if (local_1b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1b0 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_1b0)(local_1b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_1b0 + 8))(local_1b0,1);
              }
            }
          }
          FUN_1404bf980(&local_1a8);
          break;
        }
        plVar12 = local_1b0;
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1b0 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1b0 + 8))(local_1b0,1);
            }
          }
        }
      }
      local_1a8 = &PTR_FUN_143f740c8;
      if (local_190 != 0) {
        FMemory::Free();
      }
      plVar12 = local_198;
      local_1a8 = &PTR_FUN_143f73d18;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_198 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    FWeakObjectPtr::operator=(local_res18,0);
    FWeakObjectPtr::operator=(local_res20,0);
    FWeakObjectPtr::operator=(local_140,0);
    local_138 = 0;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,
                       L"Cross-play cannot be enabled because not all players have cross-play permissions."
                       ,L"OakGameInstance",L"NoCrossplayPrivilege");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a0,L"Network Error",L"OakGameInstance",L"NetworkError");
    local_110 = &PTR_FUN_1443170a0;
    FText::FText(local_108,uVar10);
    FText::FText(local_f0,uVar8);
    FUN_140c23780(2,&local_110,local_140,local_res20,local_res18,2);
    local_110 = &PTR_FUN_1443170a0;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_e8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_100 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    plVar12 = local_80;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar12 = local_80;
        if (iVar6 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
          plVar12 = local_80;
        }
      }
    }
  }
  else {
LAB_140ba3f23:
    cVar5 = FUN_140ba5120(param_1);
    if (cVar5 == '\0') {
      lVar7 = FUN_14244f490(param_1,0);
      if (lVar7 != 0) {
        lVar11 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar7 = FUN_140cff230(lVar7), lVar7 != 0)) {
          *(char *)(lVar7 + 0x1e2) = param_2;
          *(undefined1 *)(lVar7 + 0x28) = 1;
        }
      }
      if ((char)param_1[0x8b] != param_2) {
        FUN_140bcc940(param_1,4);
        FUN_140beace0(param_1,param_2);
        FUN_140bf2810(param_1);
      }
      goto LAB_140ba40b1;
    }
    FWeakObjectPtr::operator=(local_160);
    FWeakObjectPtr::operator=(local_158,0);
    FWeakObjectPtr::operator=(local_130,0);
    local_128 = 0;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,
                       L"Cross-play is temporarily unavailable and will be disabled in settings.",
                       L"OakGameInstance",L"GlobalCrossplayDisabled");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_70,L"Cross-play Unavailable",L"OakGameInstance",L"CrossplayUnavilable"
                       );
    local_d8 = &PTR_FUN_1443170a0;
    FText::FText(local_d0,uVar10);
    FText::FText(local_b8,uVar8);
    FUN_140c23780(2,&local_d8,local_130,local_158,local_160,2);
    FUN_140b9cdd0(&local_d8);
    plVar12 = local_50;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar12 = local_50;
        if (iVar6 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
          plVar12 = local_50;
        }
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
LAB_140ba40b1:
  if (local_180 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ba40f0 FUN_140ba40f0 body=248 status=ok
// SIG undefined FUN_140ba40f0(void)

undefined8 FUN_140ba40f0(longlong param_1,byte *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x418) != '\0') || (*(char *)(param_1 + 0x318) != '\0')) {
    return 0;
  }
  lVar3 = FUN_14244f490(param_1,0);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = FUN_140cff230(lVar3), lVar3 != 0)) {
      FUN_140d4c970(lVar3,param_2);
    }
  }
  cVar2 = FUN_140bc9f60(param_1);
  if (cVar2 != '\0') {
    FUN_140bec2c0(param_1,param_2);
    return 0;
  }
  if (*(char *)(param_1 + 0x440) == '\x02') {
    if (1 < *param_2) goto LAB_140ba41b5;
  }
  else if ((*(char *)(param_1 + 0x440) != '\x01') || ((*param_2 & 0xfd) != 0)) goto LAB_140ba41b5;
  FUN_140bcc940(param_1,4);
LAB_140ba41b5:
  FUN_140ba4250(param_1,param_2,1);
  return 1;
}



// FUNCTION 140ba41f0 AssignReferenceController body=81 status=ok
// SIG undefined AssignReferenceController(void)

void SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
               (longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (param_2 != plVar3) {
    if (param_2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
      UNLOCK();
      plVar3 = (longlong *)*param_1;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    *param_1 = (longlong)param_2;
  }
  return;
}



// FUNCTION 140ba4250 FUN_140ba4250 body=356 status=ok
// SIG undefined FUN_140ba4250(void)

void FUN_140ba4250(longlong param_1,char *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  char local_res8 [8];
  code *local_38;
  undefined4 uStack_30;
  undefined1 local_28 [16];
  longlong *local_18;
  
  if ((((*(longlong *)(param_1 + 0x430) == 0) && (*(char *)(param_1 + 0xd73) == '\0')) &&
      ((*(char *)(param_1 + 0x318) == '\0' || (*(int *)(param_1 + 0x300) != 2)))) &&
     (*(char *)(param_1 + 0xb79) == '\0')) {
    FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
    if ((local_res8[0] == '\x02') || (*param_2 != '\x02')) {
      uVar6 = FAtomCueNameTrackKeyframe::FAtomCueNameTrackKeyframe(local_28);
      FUN_140ba43c0(param_1,param_2,param_3,uVar6);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
    else if (((*(int *)(param_1 + 0x11e8) == 0) ||
             (*(longlong **)(param_1 + 0x11e0) == (longlong *)0x0)) ||
            (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x11e0) + 0x18))(), cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 0xd70) = param_3;
      *(undefined2 *)(param_1 + 0xd71) = *(undefined2 *)param_2;
      local_38 = FUN_140bd1040;
      uStack_30 = 0;
      FUN_14058c4b0(param_1 + 0x11e0,param_1,&local_38);
      *(undefined1 *)(param_1 + 0xd73) = 1;
      FUN_140ba5a60(param_1,0,param_3);
    }
  }
  return;
}



// FUNCTION 140ba43c0 FUN_140ba43c0 body=1188 status=ok
// SIG undefined FUN_140ba43c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ba43c0(longlong param_1,char *param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 **ppuVar8;
  undefined1 auStack_c8 [32];
  char local_a8;
  char local_a7;
  undefined2 local_a4;
  undefined8 *local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_140dbc5d0(param_1 + 0x5f0,&local_a8);
  if (param_3 != '\0') {
    FUN_140bec2c0(param_1,param_2);
  }
  local_98 = (undefined8 *)0x0;
  plStack_90 = (longlong *)0x0;
  if ((local_a8 != *param_2) || (local_a7 != param_2[1])) {
    if ((*param_2 == '\x02') &&
       (((local_a8 != '\x02' || (param_2[1] != local_a7)) &&
        (cVar5 = FUN_140ba6320(param_1,param_4,param_3), cVar5 != '\0')))) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        local_a4 = CONCAT11(param_2[1],2);
        *(undefined2 *)(puVar6 + 1) = local_a4;
        *(char *)((longlong)puVar6 + 10) = param_3;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 2;
        puVar6[2] = param_1;
        *puVar6 = &PTR_FUN_144317b38;
      }
      local_70 = (longlong *)operator_new(0x18);
      if (local_70 != (longlong *)0x0) {
        *(undefined4 *)(local_70 + 1) = 1;
        *local_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)local_70 + 0xc) = 1;
        local_70[2] = (longlong)puVar6;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,puVar6,puVar6);
      local_78 = 0;
      local_98 = puVar6;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_70);
      plVar7 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
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
    if (((*param_2 == '\x01') ||
        (((*param_2 == '\x02' && (param_3 == '\0')) && (local_98 == (undefined8 *)0x0)))) &&
       ((local_a8 != '\x01' && (cVar5 = FUN_140ba5eb0(param_1,param_3), cVar5 != '\0')))) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_144317b10;
        *(undefined2 *)(puVar6 + 1) = DAT_146297e30;
        *(char *)((longlong)puVar6 + 10) = param_3;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 2;
        puVar6[2] = param_1;
        *puVar6 = &PTR_FUN_144317b60;
      }
      local_60 = (longlong *)operator_new(0x18);
      if (local_60 != (longlong *)0x0) {
        *(undefined4 *)(local_60 + 1) = 1;
        *local_60 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)local_60 + 0xc) = 1;
        local_60[2] = (longlong)puVar6;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_68,puVar6,puVar6);
      local_68 = 0;
      local_98 = puVar6;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_60);
      plVar7 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
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
    if (((*param_2 == '\0') || ((param_3 == '\0' && (local_98 == (undefined8 *)0x0)))) &&
       (local_a8 != '\0')) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_144317b10;
        *(undefined2 *)(puVar6 + 1) = DAT_14686a12c;
        *(char *)((longlong)puVar6 + 10) = param_3;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 2;
        puVar6[2] = param_1;
        *puVar6 = &PTR_FUN_144317b88;
      }
      local_50 = (longlong *)operator_new(0x18);
      if (local_50 != (longlong *)0x0) {
        *(undefined4 *)(local_50 + 1) = 1;
        *local_50 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)local_50 + 0xc) = 1;
        local_50[2] = (longlong)puVar6;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_58,puVar6,puVar6);
      local_58 = 0;
      local_98 = puVar6;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_50);
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
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
  }
  FUN_142d6f280(param_1);
  if (local_98 == (undefined8 *)0x0) {
    FUN_140bd70a0(param_1,&local_a8);
    plVar7 = plStack_90;
  }
  else {
    ppuVar8 = (undefined8 **)(param_1 + 0x430);
    local_88 = local_98;
    plStack_80 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    if (&local_88 != ppuVar8) {
      local_88 = *ppuVar8;
      plStack_80 = *(longlong **)(param_1 + 0x438);
      local_48 = local_98;
      plStack_40 = plStack_90;
      *ppuVar8 = local_98;
      *(longlong **)(param_1 + 0x438) = plStack_90;
    }
    plVar7 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    plVar7 = plStack_90;
    (**(code **)(**ppuVar8 + 8))();
  }
  plVar1 = plStack_90;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return;
}



// FUNCTION 140ba4870 FUN_140ba4870 body=246 status=ok
// SIG undefined FUN_140ba4870(void)

void FUN_140ba4870(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x26f) = 0;
  if (*(int *)((longlong)param_1 + 0x137c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x26e,0);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_1[0x3f] != 0) {
    FUN_140c06310(param_1[0x3f],param_2);
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  FString::operator=(param_1 + 0xb2,param_2);
  FUN_1411fbe40(param_1 + 0xf4,param_2);
  uVar2 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar2,8);
  FUN_140be3520(param_1);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar2);
    if (iVar1 == 3) goto LAB_140ba4947;
  }
  lVar3 = FUN_140bb6170(param_1);
  if (lVar3 == 0) {
    lVar3 = FUN_140b825a0(param_1);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x638) = 0;
    }
  }
LAB_140ba4947:
  if (param_1[0xb6] != 0) {
    FUN_140f05440(param_1[0xb6],param_2);
  }
  return;
}



// FUNCTION 140ba4970 FUN_140ba4970 body=239 status=ok
// SIG undefined FUN_140ba4970(void)

void FUN_140ba4970(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142223710();
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = FUN_142f6c9f0(uVar4);
  if (lVar5 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar4 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
    FUN_142f690f0(lVar5,&local_18,0);
  }
  lVar5 = FUN_1422312c0(param_1);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      iVar2 = *(int *)(lVar5 + 0xd68);
      *(int *)(lVar5 + 0xd68) = iVar2 + 1;
      if (*(int *)(lVar5 + 0xd6c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(lVar5 + 0xd60),iVar2);
      }
      puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 0xd60) + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
    }
  }
  return;
}



// FUNCTION 140ba4a60 FUN_140ba4a60 body=931 status=ok
// SIG undefined FUN_140ba4a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ba4a60(longlong param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0 [2];
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a8 = param_1;
  FUN_142330a70();
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  cVar6 = '\0';
  lVar9 = FUN_1429ba1d0();
  lVar10 = *(longlong *)(param_1 + 0x120);
  if (lVar10 == 0) {
    lVar10 = FUN_1423407b0(param_1);
  }
  if (lVar9 != 0) {
    lVar11 = FUN_1429ba1d0();
    lVar14 = lVar9;
    do {
      if (lVar14 == lVar11) goto LAB_140ba4ae1;
      lVar14 = *(longlong *)(lVar14 + 0x30);
    } while (lVar14 != 0);
  }
  lVar9 = 0;
LAB_140ba4ae1:
  local_90[0] = 5;
  local_38 = '\0';
  local_b8 = lVar9;
  local_b0 = lVar10;
  FUN_14044bc80(&local_88,&local_b0,&local_b8);
  FUN_14045a130(local_90);
  uVar8 = 0;
joined_r0x000140ba4b12:
  if (local_6c == '\0') {
    local_b0 = *(longlong *)(local_60 + 0x18);
    FName::ToString(&local_b0,local_a0);
    local_c8 = 0xffffffff;
    puVar17 = &DAT_143f3eda8;
    if (DAT_1462982d8 != 0) {
      puVar17 = DAT_1462982d0;
    }
    iVar7 = FUN_141592950(local_a0,puVar17,1,0);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    lVar10 = local_88;
    uVar8 = uVar8 & 0xff;
    if (iVar7 != -1) {
      uVar8 = 1;
    }
    local_b8 = CONCAT44(local_b8._4_4_,uVar8);
    iVar7 = local_70 + 1;
    if (iVar7 < local_50 + local_78) {
      lVar9 = (longlong)iVar7 * 8;
      iVar18 = local_50;
      iVar15 = local_78;
      do {
        if (iVar7 < iVar15) {
          lVar14 = *(longlong *)(local_80 + lVar9);
        }
        else {
          lVar14 = *(longlong *)(local_58 + (longlong)(iVar7 - iVar15) * 8);
        }
        local_68 = local_68 + 1;
        if ((lVar14 != 0) &&
           (lVar11 = AActor::GetLevel(lVar14), iVar18 = local_50, iVar15 = local_78, lVar11 != 0)) {
          if ((local_90[0] & 1) != 0) {
            iVar1 = *(int *)(lVar14 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar16 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar16;
              lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_140ba4d3c;
          }
          if (((local_90[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar14), iVar18 = local_50,
             iVar15 = local_78, cVar6 != '\0')) {
            if ((local_90[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar2 == piVar13)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar18 = local_50;
              iVar15 = local_78;
              if ((!bVar5) || (!bVar3)) goto LAB_140ba4d3c;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            iVar18 = local_50;
            iVar15 = local_78;
            if (lVar11 == lVar10) {
              lVar11 = AActor::GetLevel(lVar14);
              if (lVar11 == *(longlong *)(lVar10 + 0x30)) goto LAB_140ba4de8;
              lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar18 = local_50;
              iVar15 = local_78;
              if (!bVar5) goto LAB_140ba4de8;
            }
          }
        }
LAB_140ba4d3c:
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 8;
        if (iVar18 + iVar15 <= iVar7) break;
      } while( true );
    }
    cVar6 = (char)local_b8;
    local_60 = 0;
    local_6c = '\x01';
    param_1 = local_a8;
  }
  if (local_38 != '\0') {
    local_38 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  if (cVar6 == '\0') {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfd;
  }
  return;
LAB_140ba4de8:
  cVar6 = (char)local_b8;
  param_1 = local_a8;
  uVar8 = (uint)local_b8;
  local_70 = iVar7;
  local_60 = lVar14;
  goto joined_r0x000140ba4b12;
}



// FUNCTION 140ba4e10 FUN_140ba4e10 body=784 status=ok
// SIG undefined FUN_140ba4e10(void)

void FUN_140ba4e10(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_res20;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined **local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  cVar7 = FUN_140ba5c70();
  if (cVar7 != '\0') {
    FWeakObjectPtr::operator=(&local_d8,0);
    local_d0 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBlockUserConfirmed",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_a8,pwVar6 + 2,1);
    FWeakObjectPtr::operator=(&local_d8,param_1);
    local_d0 = local_a8;
    local_res20 = 0;
    if ((local_a8 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_d8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_d0);
    }
    local_c0 = (longlong *)param_2[1];
    local_c8 = *param_2;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0xb50) != &local_c8) {
      *(undefined8 *)(param_1 + 0xb50) = local_c8;
      local_c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb58,&local_c0);
    }
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    local_b0 = (longlong *)param_3[1];
    local_b8 = *param_3;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0xb60) != &local_b8) {
      *(undefined8 *)(param_1 + 0xb60) = local_b8;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb68,&local_b0);
    }
    plVar3 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_38,
                        L"Are you sure you want to block this user? If you are friends with this user, they will be removed from your friends list."
                        ,L"OakGameInstance",L"BlockUserConfirmationMessage");
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_50,L"Block User?",L"OakGameInstance",L"BlockUserConfirmationHeader");
    local_88 = &PTR_FUN_1443170a0;
    FText::FText(local_80,uVar11);
    FText::FText(local_68,uVar10);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    FWeakObjectPtr::operator=(&local_res20,0);
    FWeakObjectPtr::operator=(local_a0,0);
    local_98 = local_d8;
    local_94 = local_d4;
    local_90 = local_d0;
    FUN_140c23780(3,&local_88,&local_98,local_a0,&local_res20,2);
    FUN_140b9cdd0(&local_88);
  }
  return;
}



// FUNCTION 140ba5120 FUN_140ba5120 body=273 status=ok
// SIG undefined FUN_140ba5120(void)

undefined8 FUN_140ba5120(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int local_res10 [2];
  undefined1 local_res18 [16];
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  int local_10;
  
  FUN_140bb86f0(param_1,&local_18);
  if (0 < local_10) {
    puVar6 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
    FUN_1404cf890(&local_28,*puVar6);
    if (local_28 != (longlong *)0x0) {
      local_res10[0] = 1;
      (**(code **)(*local_28 + 0x140))(local_28,local_18,2,local_res10);
      plVar5 = local_20;
      if (local_res10[0] == 1) {
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
        uVar7 = 1;
        goto LAB_140ba5219;
      }
    }
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
  uVar7 = 0;
LAB_140ba5219:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return uVar7;
}



// FUNCTION 140ba5240 FUN_140ba5240 body=168 status=ok
// SIG undefined FUN_140ba5240(void)

void FUN_140ba5240(longlong *param_1,undefined8 param_2)

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
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140ba52a0:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        if (cVar3 == '\0') goto LAB_140ba52a0;
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



// FUNCTION 140ba52f0 FUN_140ba52f0 body=179 status=ok
// SIG undefined FUN_140ba52f0(void)

void FUN_140ba52f0(longlong *param_1,undefined1 param_2,undefined1 param_3)

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
LAB_140ba535a:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_140ba535a;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140ba53b0 FUN_140ba53b0 body=620 status=ok
// SIG undefined FUN_140ba53b0(void)

void FUN_140ba53b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  double dVar11;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  cVar6 = FUN_140becb30();
  lVar3 = DAT_14686a5e0;
  if ((cVar6 != '\0') &&
     (((*(char *)(param_1 + 0x13c1) == '\0' || (*(char *)(param_1 + 0x13c0) != '\0')) &&
      (*(char *)(param_1 + 0x13c0) == '\0')))) {
    DAT_146298614 = DAT_146298614 + 1;
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
      lVar8 = 4;
    }
    else {
      lVar8 = 0;
    }
    if (*(int *)(lVar8 + lVar3) == DAT_146298614) {
      QueryPerformanceCounter(&local_res10);
      dVar11 = (double)local_res10.QuadPart * DAT_1468b02f8;
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      *(undefined1 *)(param_1 + 0x13c1) = 1;
      *(double *)(param_1 + 0x13c8) = dVar11 + 16777216.0;
      if ((*(int *)(lVar3 + 0x38) < DAT_14686a8f8) &&
         (_Init_thread_header(&DAT_14686a8f8), DAT_14686a8f8 == -1)) {
        FName::FName(&DAT_14686a8f0,L"Boot",1);
        _Init_thread_footer(&DAT_14686a8f8);
      }
      if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
        if ((DAT_146ac3ac5 != '\0') ||
           (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
            (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))) {
          plVar10 = (longlong *)FUN_140bad6d0(local_28,0,0xff);
          *(longlong *)(*plVar10 + 0x10) = param_1;
          lVar3 = *plVar10;
          lVar5 = plVar10[2];
          lVar8 = plVar10[1];
          lVar4 = *(longlong *)(lVar3 + 0x20);
          piVar1 = (int *)(lVar4 + 0x48);
          if (lVar4 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_res18 = lVar4;
          FUN_140445100(lVar3,lVar8,(int)lVar5,1);
          if (lVar4 == 0) {
            return;
          }
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          FGraphEvent::Recycle(local_res18);
          return;
        }
        FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1419e5460();
        uVar9 = FName::ToString(&DAT_14686a8f0,local_38);
        FShaderPipelineCache::OpenPipelineFileCache(uVar9,DAT_146ab62cc);
        local_48[0] = local_38[0];
      }
      else {
        FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1419e5460();
        uVar9 = FName::ToString(&DAT_14686a8f0,local_48);
        FShaderPipelineCache::OpenPipelineFileCache(uVar9,DAT_146ab62cc);
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      FUN_141a0cce0(2);
      FUN_141a0a7b0();
      return;
    }
  }
  return;
}



// FUNCTION 140ba5630 FUN_140ba5630 body=110 status=ok
// SIG undefined FUN_140ba5630(void)

void FUN_140ba5630(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"nat_type",0x12);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ba56c0 FUN_140ba56c0 body=351 status=ok
// SIG undefined FUN_140ba56c0(void)

undefined8 FUN_140ba56c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong *local_10;
  
  Online::GetSessionInterface(&local_38,0);
  if (local_38 != (longlong *)0x0) {
    cVar5 = (**(code **)(*local_38 + 0x150))(local_38,0);
    if (cVar5 != '\0') {
      cVar5 = FUN_140ba7eb0(param_1,param_3);
      if (cVar5 == '\0') {
        uVar6 = FUN_140bb74b0(param_1);
        FUN_140d7da70(uVar6,&local_18,param_2,param_3,0);
        if (local_18 == 0) {
          local_28 = *param_3;
          local_20 = param_3[1];
          if (local_20 != 0) {
            LOCK();
            *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
            UNLOCK();
          }
          lVar7 = FUN_14244c070(param_1,&local_28);
          if (lVar7 != 0) goto LAB_140ba5787;
          uVar6 = 1;
        }
        else {
LAB_140ba5787:
          uVar6 = 0;
        }
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        goto LAB_140ba57c7;
      }
    }
  }
  uVar6 = 0;
LAB_140ba57c7:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140ba5820 FUN_140ba5820 body=575 status=ok
// SIG undefined FUN_140ba5820(void)

ulonglong FUN_140ba5820(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong in_RAX;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar7 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  Online::GetSessionInterface(&local_58,*puVar7);
  if (local_58 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_58 + 0x150))(local_58,0);
    if (cVar6 != '\0') {
      local_48 = *param_3;
      local_40 = param_3[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      lVar8 = FUN_14244c070(param_1,&local_48);
      if (lVar8 == 0) {
        FUN_140bbc6f0(param_1,&local_68,param_3);
        if (local_68 == 0) {
LAB_140ba59c7:
          uVar9 = 0;
        }
        else {
          plVar5 = (longlong *)param_2[1];
          local_38 = *param_2;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_28 = local_68;
          plStack_20 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
            UNLOCK();
          }
          local_30 = plVar5;
          cVar6 = FUN_140bcacb0(param_1,&local_38,&local_28);
          plVar3 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_20 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_20)(plStack_20);
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
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if (cVar6 != '\0') goto LAB_140ba59c7;
          uVar9 = 1;
        }
        plVar5 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_60 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_60 + 8))(plStack_60,1);
            }
          }
        }
        goto LAB_140ba5a0e;
      }
    }
  }
  uVar9 = 0;
LAB_140ba5a0e:
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 140ba5a60 FUN_140ba5a60 body=528 status=ok
// SIG undefined FUN_140ba5a60(void)

void FUN_140ba5a60(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong local_78;
  undefined8 local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  uVar8 = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x38);
  local_78 = 0;
  local_70 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar11 + *(int *)(param_1 + 0x40) < puVar11) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      lVar6 = FUN_142547b50(*puVar11,local_68);
      plVar3 = *(longlong **)(lVar6 + 0x10);
      lVar6 = *(longlong *)(lVar6 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_68[0] = &PTR_FUN_143f740c8;
      if (local_50 != 0) {
        FMemory::Free();
      }
      plVar7 = local_58;
      local_68[0] = &PTR_FUN_143f73d18;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_58)(local_58);
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
      uVar4 = local_70;
      if (lVar6 == 0) {
LAB_140ba5bc1:
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar3 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
      else {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar9 = (longlong)(int)local_70;
        iVar5 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar5);
        if (local_70._4_4_ < iVar5) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,uVar4 & 0xffffffff);
        }
        plVar7 = (longlong *)(lVar9 * 0x10 + local_78);
        *plVar7 = lVar6;
        plVar7[1] = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar3 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
          goto LAB_140ba5bc1;
        }
      }
      puVar11 = puVar11 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  FUN_140ba73a0(param_1,&local_78,param_2,param_3,0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
  return;
}



// FUNCTION 140ba5c70 FUN_140ba5c70 body=573 status=ok
// SIG undefined FUN_140ba5c70(void)

ulonglong FUN_140ba5c70(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *local_10;
  
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  Online::GetSessionInterface(&local_48,*puVar6);
  if ((local_48 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*local_48 + 0x150))(local_48,2), cVar5 != '\0')) {
    local_38 = *param_3;
    local_30 = param_3[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar7 = FUN_14244c070(param_1,&local_38);
    if (lVar7 == 0) {
      FUN_140bbc6f0(param_1,&local_58,param_3);
      if (local_58 == 0) {
        bVar9 = false;
      }
      else {
        local_28 = local_58;
        plStack_20 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        uVar8 = FUN_140bb74b0(param_1);
        FUN_140d7da70(uVar8,&local_18,param_2,&local_28,3);
        plVar2 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_20)(plStack_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        bVar9 = local_18 == 0;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_10 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar3 = (int *)((longlong)local_10 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
      plVar2 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      goto LAB_140ba5e50;
    }
  }
  bVar9 = false;
LAB_140ba5e50:
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return (ulonglong)bVar9;
}



// FUNCTION 140ba5eb0 FUN_140ba5eb0 body=1133 status=ok
// SIG undefined FUN_140ba5eb0(void)

undefined8 FUN_140ba5eb0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res20 [8];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined **local_e8 [2];
  longlong *local_d8;
  longlong local_d0;
  undefined **local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  uVar7 = 1;
  FText::FText(local_100);
  Online::GetIdentityInterface(&local_128,0);
  if ((local_128 == (longlong *)0x0) || (cVar5 = (**(code **)(*local_128 + 0x10))(), cVar5 != '\0'))
  {
    puVar9 = *(undefined8 **)(param_1 + 0x38);
    puVar4 = puVar9 + *(int *)(param_1 + 0x40);
    for (; puVar9 != puVar4; puVar9 = puVar9 + 1) {
      lVar8 = FUN_142547b50(*puVar9,local_e8);
      local_138 = *(undefined8 *)(lVar8 + 8);
      local_130 = *(longlong **)(lVar8 + 0x10);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      local_e8[0] = &PTR_FUN_143f740c8;
      if (local_d0 != 0) {
        FMemory::Free();
      }
      plVar1 = local_d8;
      local_e8[0] = &PTR_FUN_143f73d18;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d8 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      iVar6 = FUN_140bb88c0(param_1,&local_138);
      plVar1 = local_130;
      if (iVar6 == 0) {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_70,
                           L"At least one controller has a gamer profile that is not signed in. To continue, sign in gamer profiles for all controllers."
                           ,L"OakGameInstance",L"CannotPlayLan_NotLoggedIn");
        FText::operator=(local_100,uVar7);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        plVar1 = local_130;
        if (local_130 == (longlong *)0x0) goto LAB_140ba6128;
        LOCK();
        plVar3 = local_130 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) goto LAB_140ba6128;
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) goto LAB_140ba6128;
        lVar8 = *local_130;
        local_80 = local_130;
        goto LAB_140ba6120;
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_130 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"This action is unavailable without a valid network connection.",
                       L"OakGameInstance",L"CannotPlayOnline_NoLinkConnection");
    FText::operator=(local_100,uVar7);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          lVar8 = *local_80;
LAB_140ba6120:
          (**(code **)(lVar8 + 8))(local_80,1);
        }
      }
    }
LAB_140ba6128:
    uVar7 = 0;
    if (param_2 != '\0') {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Network Error",L"OakGameInstance",L"NetworkError");
      local_c0 = &PTR_FUN_1443170a0;
      FText::FText(local_b8,uVar7);
      FText::FText(local_a0,local_100);
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      FWeakObjectPtr::operator=(local_res20,0);
      FWeakObjectPtr::operator=(local_118,0);
      FWeakObjectPtr::operator=(local_110,0);
      local_108 = 0;
      FUN_140c23780(2,&local_c0,local_110,local_118,local_res20,2);
      local_c0 = &PTR_FUN_1443170a0;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      uVar7 = 0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
  }
  plVar1 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_120 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140ba6320 FUN_140ba6320 body=1157 status=ok
// SIG undefined FUN_140ba6320(void)

undefined1 FUN_140ba6320(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [8];
  char local_res18;
  undefined1 local_res20 [8];
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined **local_e0 [2];
  longlong *local_d0;
  longlong local_c8;
  undefined **local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar12 = 1;
  local_res18 = param_3;
  FText::FText(local_f8);
  if (*param_2 == 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x38);
    puVar4 = puVar13 + *(int *)(param_1 + 0x40);
    for (; puVar13 != puVar4; puVar13 = puVar13 + 1) {
      lVar10 = FUN_142547b50(*puVar13,local_e0);
      plVar6 = *(longlong **)(lVar10 + 0x10);
      lVar10 = *(longlong *)(lVar10 + 8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_e0[0] = &PTR_FUN_143f740c8;
      if (local_c8 != 0) {
        FMemory::Free();
      }
      plVar2 = local_d0;
      local_e0[0] = &PTR_FUN_143f73d18;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (lVar10 == 0) {
LAB_140ba6563:
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,
                           L"This feature requires all active players to be connected to Gearbox Software SHiFT."
                           ,L"OakGameInstance",L"CannotPlayOnline_SparkRequired");
        FText::operator=(local_f8,uVar9);
        goto LAB_140ba65c5;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_128 = lVar10;
      local_120 = plVar6;
      lVar10 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar10 + 0x18),&local_118,&local_128);
      plVar2 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (((local_118 == 0) || (*(char *)(local_118 + 0x18) == '\0')) ||
         (cVar8 = FBuildPatchAppManifest::NeedsResaving(), plVar2 = local_110, cVar8 == '\0')) {
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_110 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar3 = (int *)((longlong)local_110 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        goto LAB_140ba6563;
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  else {
    uVar9 = FUN_140dbb910(param_2,local_80);
    FText::operator=(local_f8,uVar9);
    local_60 = local_78;
LAB_140ba65c5:
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)local_60 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    uVar12 = 0;
    if (local_res18 != '\0') {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,L"Network Error",L"OakGameInstance",L"NetworkError");
      local_b8 = &PTR_FUN_1443170a0;
      FText::FText(local_b0,uVar9);
      FText::FText(local_98,local_f8);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)local_48 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      FWeakObjectPtr::operator=(local_res10,0);
      FWeakObjectPtr::operator=(local_res20,0);
      FWeakObjectPtr::operator=(local_108,0);
      local_100 = 0;
      FUN_140c23780(2,&local_b8,local_108,local_res20,local_res10,2);
      local_b8 = &PTR_FUN_1443170a0;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar3 = (int *)((longlong)local_90 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      uVar11 = 0;
      uVar12 = 0;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a8 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        uVar12 = uVar11;
        if ((int)lVar10 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar3 = (int *)((longlong)local_a8 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f0 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar3 = (int *)((longlong)local_f0 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return uVar12;
}



// FUNCTION 140ba67b0 FUN_140ba67b0 body=45 status=ok
// SIG undefined FUN_140ba67b0(void)

ulonglong FUN_140ba67b0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  uVar3 = 0;
  if ((lVar2 != 0) &&
     (uVar1 = *(uint *)(lVar2 + 0x830) >> 2, uVar3 = (ulonglong)uVar1 & 0xffffffffffffff01,
     (uVar1 & 1) != 0)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140ba67e0 FUN_140ba67e0 body=904 status=ok
// SIG undefined FUN_140ba67e0(void)

undefined8 FUN_140ba67e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [48];
  
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  lVar7 = FUN_14244c070(param_1,&local_58);
  if (((lVar7 == 0) && (*(char *)(param_1 + 0x440) == '\x02')) &&
     (cVar4 = FUN_140bca1f0(param_1,param_2,1), cVar4 == '\0')) {
    plVar8 = (longlong *)FUN_141424bc0();
    lVar7 = plVar8[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar7 = plVar8[0x1f];
    }
    iVar5 = FUN_142480900(lVar7);
    iVar6 = FUN_140bba270(param_1);
    if (iVar6 != iVar5) {
      uVar9 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res10);
      plVar8 = (longlong *)FUN_1404b0000(uVar9);
      if (((plVar8 != (longlong *)0x0) &&
          (cVar4 = (**(code **)(*plVar8 + 0x150))(plVar8), cVar4 == '\0')) &&
         ((lVar7 = FUN_14244f490(param_1,0), lVar7 != 0 &&
          (lVar7 = FUN_14270bb10(lVar7), lVar7 != 0)))) {
        lVar7 = FUN_142547b50(lVar7,local_48);
        plVar8 = *(longlong **)(lVar7 + 0x10);
        lVar7 = *(longlong *)(lVar7 + 8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FUN_1404bf980(local_48);
        if (((lVar7 != 0) && (lVar10 = *(longlong *)(param_1 + 0x1080), lVar10 != 0)) &&
           (*(longlong *)(param_1 + 0x1090) != 0)) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            lVar10 = *(longlong *)(param_1 + 0x1080);
          }
          local_88 = lVar7;
          local_80 = plVar8;
          FUN_140d7da70(lVar10,&local_68,&local_88,param_2,0);
          plVar3 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_80)(local_80);
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
          FUN_140d80bd0(*(undefined8 *)(param_1 + 0x1090),&local_78,param_2);
          if ((local_78 == 0) &&
             ((local_68 == (longlong *)0x0 ||
              (lVar7 = (**(code **)(*local_68 + 0x38))(), (*(byte *)(lVar7 + 0x10) & 4) == 0)))) {
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_70 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)local_70 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_70 + 8))(local_70,1);
                }
              }
            }
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_60 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)local_60 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                }
              }
            }
            if (plVar8 == (longlong *)0x0) {
              return 0;
            }
            LOCK();
            plVar3 = plVar8 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 != 1) {
              return 0;
            }
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 != 1) {
              return 0;
            }
            (**(code **)(*plVar8 + 8))(plVar8,1);
            return 0;
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_70 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)local_70 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
              }
            }
          }
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
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
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ba6b70 FUN_140ba6b70 body=360 status=ok
// SIG undefined FUN_140ba6b70(void)

ulonglong FUN_140ba6b70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  uVar5 = FUN_14244c070(param_1,&local_38);
  if (uVar5 != 0) {
LAB_140ba6cc6:
    return uVar5 & 0xffffffffffffff00;
  }
  uVar5 = FUN_140bca1f0(param_1,param_3,1);
  if ((char)uVar5 != '\0') goto LAB_140ba6cc6;
  uVar6 = FUN_140bb74b0(param_1);
  FUN_140d7da70(uVar6,&local_18,param_2,param_3,0);
  uVar6 = FUN_140bb7440(param_1);
  FUN_140d80bd0(uVar6,&local_28,param_3);
  if (local_28 == 0) {
LAB_140ba6c29:
    if (local_18 != (longlong *)0x0) {
      lVar7 = (**(code **)(*local_18 + 0x38))();
      bVar4 = *(byte *)(lVar7 + 0x10) & 8;
LAB_140ba6c38:
      if (bVar4 != 0) {
        uVar5 = 1;
        goto LAB_140ba6c42;
      }
    }
  }
  else if (local_18 != (longlong *)0x0) {
    if (*(char *)((longlong)local_18 + 9) == '\0') goto LAB_140ba6c29;
    bVar4 = *(byte *)(local_28 + 0x80);
    goto LAB_140ba6c38;
  }
  uVar5 = 0;
LAB_140ba6c42:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return uVar5;
}



// FUNCTION 140ba6ce0 FUN_140ba6ce0 body=156 status=ok
// SIG undefined FUN_140ba6ce0(void)

undefined8 FUN_140ba6ce0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  longlong local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar4);
    if (iVar2 == 3) {
      return 0;
    }
  }
  lVar3 = FUN_140bb6170(param_1);
  if (lVar3 == 0) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    lVar3 = FUN_14244c070(param_1,&local_18);
    if ((lVar3 == 0) && (cVar1 = FUN_140bca1f0(param_1,param_2,0), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ba6d80 FUN_140ba6d80 body=754 status=ok
// SIG undefined FUN_140ba6d80(void)

bool FUN_140ba6d80(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_res20 [2];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar11 = 0;
  local_res20[0] = 0;
  puVar8 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_140bbd560(&local_68,*puVar8);
  if (local_68 != (longlong *)0x0) {
    cVar7 = (**(code **)(*local_68 + 0x88))(local_68,param_2,param_3);
    if (cVar7 == '\0') {
      local_58 = *param_3;
      local_50 = param_3[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      lVar9 = FUN_14244c070(param_1,&local_58);
      if (lVar9 == 0) {
        cVar7 = FUN_140bca1f0(param_1,param_3,0);
        if (cVar7 != '\0') {
          FUN_140bbc6f0(param_1,&local_88,param_3);
          if (local_88 == 0) {
            bVar12 = true;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x1080);
            if (lVar9 == 0) {
              plVar10 = &local_78;
              local_78 = 0;
              plStack_70 = (longlong *)0x0;
              bVar6 = false;
              bVar5 = false;
              bVar12 = true;
            }
            else {
              local_48 = local_88;
              plStack_40 = plStack_80;
              if (plStack_80 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                UNLOCK();
                lVar9 = *(longlong *)(param_1 + 0x1080);
              }
              bVar6 = true;
              bVar5 = true;
              bVar12 = false;
              plVar10 = (longlong *)FUN_140d7da70(lVar9,local_38,param_2,&local_48,3);
              lVar11 = *plVar10;
            }
            plVar2 = plStack_70;
            plVar10 = (longlong *)plVar10[1];
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            if (bVar12) {
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_70 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_70)(plStack_70);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar2 + 0xc);
                  iVar4 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plStack_70 + 8))(plStack_70,1);
                  }
                }
              }
            }
            if (bVar5) {
              if (local_30 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_30 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_30)(local_30);
                  LOCK();
                  piVar3 = (int *)((longlong)local_30 + 0xc);
                  iVar4 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_30 + 8))(local_30,1);
                  }
                }
              }
            }
            plVar2 = plStack_40;
            if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_40 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
            bVar12 = lVar11 == 0;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar10 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar3 = (int *)((longlong)plVar10 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
          }
          plVar10 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_80 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar3 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_80 + 8))(plStack_80,1);
              }
            }
          }
          goto LAB_140ba7010;
        }
      }
    }
  }
  bVar12 = false;
LAB_140ba7010:
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return bVar12;
}



// FUNCTION 140ba7080 FUN_140ba7080 body=468 status=ok
// SIG undefined FUN_140ba7080(void)

bool FUN_140ba7080(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x3c);
    iVar2 = *(int *)(param_3 + 0x38);
    iVar3 = *(int *)(param_3 + 0x30);
    iVar4 = *(int *)(param_3 + 0x34);
    if ((((int)param_1[0x27e] == iVar4 && *(int *)((longlong)param_1 + 0x13f4) == iVar2) &&
        (int)param_1[0x27f] == iVar1) && *(int *)((longlong)param_1 + 0x13ec) == iVar3) {
      return true;
    }
    if ((((int)param_1[0x280] == iVar4 && *(int *)((longlong)param_1 + 0x1404) == iVar2) &&
        (int)param_1[0x281] == iVar1) && *(int *)((longlong)param_1 + 0x13fc) == iVar3) {
      return true;
    }
    if ((((int)param_1[0x282] == iVar4 && *(int *)((longlong)param_1 + 0x1414) == iVar2) &&
        (int)param_1[0x283] == iVar1) && iVar3 == *(int *)((longlong)param_1 + 0x140c)) {
      return true;
    }
    if ((((int)param_1[0x284] == iVar4 && *(int *)((longlong)param_1 + 0x1424) == iVar2) &&
        (int)param_1[0x285] == iVar1) && iVar3 == *(int *)((longlong)param_1 + 0x141c)) {
      return true;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a8c8) && (_Init_thread_header(&DAT_14686a8c8), DAT_14686a8c8 == -1))
  {
    FName::FName(&DAT_14686a8c0,L"Loader",1);
    _Init_thread_footer(&DAT_14686a8c8);
  }
  if (((((char)param_1[0xb1] == '\0') && (cVar5 = FUN_1411ea6c0(param_1 + 0xf4), cVar5 == '\0')) &&
      ((lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 == 0 ||
       ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)))) &&
     ((lVar6 = UGameInstance::GetGameViewportClient(param_1), lVar6 == 0 ||
      ((*(byte *)(lVar6 + 0x7c) & 4) == 0)))) {
    if (param_2 == 0) {
      return true;
    }
    return *(longlong *)(param_2 + 0x18) != DAT_14686a8c0;
  }
  return false;
}



// FUNCTION 140ba7260 FUN_140ba7260 body=318 status=ok
// SIG undefined FUN_140ba7260(void)

undefined8 FUN_140ba7260(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x830) >> 2 & 1) != 0)) {
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_140bca7d0(param_1,&local_28);
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = UWorld::GetWorldSettings(uVar4,0,1);
      if (lVar3 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = UWorld::GetWorldSettings(uVar4,0,1);
        lVar3 = *(longlong *)(lVar3 + 0x658);
        if (lVar3 != 0) {
          lVar5 = UTextureRenderTargetCube::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            local_18 = *param_2;
            local_10 = param_2[1];
            if (local_10 != 0) {
              LOCK();
              *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
              UNLOCK();
            }
            lVar3 = FUN_140cb9800(lVar3,&local_18);
            if (lVar3 != 0) {
              cVar2 = FUN_140e538f0(lVar3);
              if (cVar2 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ba73a0 FUN_140ba73a0 body=292 status=ok
// SIG undefined FUN_140ba73a0(void)

void FUN_140ba73a0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *local_38;
  undefined4 uStack_30;
  undefined4 local_28 [4];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x11f8) == 0) {
    if (*(int *)(param_2 + 8) < 1) {
      FAtomCueNameTrackKeyframe::FAtomCueNameTrackKeyframe(local_28);
      local_28[0] = 2;
      FUN_140bd1130(param_1,local_28);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
    else {
      lVar4 = operator_new(0x160);
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = FUN_140da79c0(lVar4,param_2,param_3,param_4,param_5,param_1);
      }
      local_38 = FUN_140bd1130;
      uStack_30 = 0;
      *(longlong *)(param_1 + 0x11f8) = lVar5;
      FUN_14058c4b0(lVar5 + 0x10,param_1,&local_38);
      FUN_140dcdb10(*(undefined8 *)(param_1 + 0x11f0),*(undefined8 *)(param_1 + 0x11f8));
    }
  }
  return;
}



// FUNCTION 140ba74d0 FUN_140ba74d0 body=151 status=ok
// SIG undefined FUN_140ba74d0(void)

void FUN_140ba74d0(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  *local_18 = *param_2;
  lVar1 = param_2[1];
  local_18[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_140ba73a0(param_1,&local_18,param_3,param_4,param_5);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 140ba7570 FUN_140ba7570 body=220 status=ok
// SIG undefined FUN_140ba7570(void)

undefined8 FUN_140ba7570(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong local_10;
  
  Online::GetSessionInterface(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    cVar5 = (**(code **)(*local_28 + 0x150))(local_28,1);
    if (cVar5 != '\0') {
      local_18 = *param_3;
      local_10 = param_3[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      lVar6 = FUN_14244c070(param_1,&local_18);
      if (lVar6 == 0) {
        uVar7 = 1;
        goto LAB_140ba75e3;
      }
    }
  }
  uVar7 = 0;
LAB_140ba75e3:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 140ba7650 FUN_140ba7650 body=579 status=ok
// SIG undefined FUN_140ba7650(void)

ulonglong FUN_140ba7650(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong in_RAX;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar7 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  Online::GetSessionInterface(&local_58,*puVar7);
  if (local_58 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_58 + 0x150))(local_58,1);
    if (cVar6 != '\0') {
      local_48 = *param_3;
      local_40 = param_3[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      lVar8 = FUN_14244c070(param_1,&local_48);
      if (lVar8 == 0) {
        FUN_140bbc6f0(param_1,&local_68,param_3);
        if (local_68 == 0) {
LAB_140ba77fb:
          uVar9 = 0;
        }
        else {
          plVar5 = (longlong *)param_2[1];
          local_38 = *param_2;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_28 = local_68;
          plStack_20 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
            UNLOCK();
          }
          local_30 = plVar5;
          cVar6 = FUN_140bcacb0(param_1,&local_38,&local_28);
          plVar3 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_20 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_20)(plStack_20);
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
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if (cVar6 == '\0') goto LAB_140ba77fb;
          uVar9 = 1;
        }
        plVar5 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_60 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_60 + 8))(plStack_60,1);
            }
          }
        }
        goto LAB_140ba7842;
      }
    }
  }
  uVar9 = 0;
LAB_140ba7842:
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 140ba78a0 FUN_140ba78a0 body=202 status=ok
// SIG undefined FUN_140ba78a0(void)

ulonglong FUN_140ba78a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong in_RAX;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(char *)(param_1 + 0x458) != '\0') || (*(char *)(param_1 + 0xb18) == '\0')) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    in_RAX = FUN_140bca7d0(param_1,&local_18);
    if ((char)in_RAX == '\0') {
      FUN_140bbc6f0(param_1,&local_28,param_2);
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
      return (ulonglong)(local_28 != 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ba7970 FUN_140ba7970 body=573 status=ok
// SIG undefined FUN_140ba7970(void)

ulonglong FUN_140ba7970(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *local_10;
  
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  Online::GetSessionInterface(&local_48,*puVar6);
  if ((local_48 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*local_48 + 0x150))(local_48,3), cVar5 != '\0')) {
    local_38 = *param_3;
    local_30 = param_3[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar7 = FUN_14244c070(param_1,&local_38);
    if (lVar7 == 0) {
      FUN_140bbc6f0(param_1,&local_58,param_3);
      if (local_58 == 0) {
        bVar9 = false;
      }
      else {
        local_28 = local_58;
        plStack_20 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        uVar8 = FUN_140bb74b0(param_1);
        FUN_140d7da70(uVar8,&local_18,param_2,&local_28,3);
        plVar2 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_20)(plStack_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        bVar9 = local_18 != 0;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_10 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar3 = (int *)((longlong)local_10 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
      plVar2 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      goto LAB_140ba7b50;
    }
  }
  bVar9 = false;
LAB_140ba7b50:
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return (ulonglong)bVar9;
}



// FUNCTION 140ba7bb0 FUN_140ba7bb0 body=754 status=ok
// SIG undefined FUN_140ba7bb0(void)

bool FUN_140ba7bb0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_res20 [2];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar11 = 0;
  local_res20[0] = 0;
  puVar8 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_140bbd560(&local_68,*puVar8);
  if (local_68 != (longlong *)0x0) {
    cVar7 = (**(code **)(*local_68 + 0x88))(local_68,param_2,param_3);
    if (cVar7 != '\0') {
      local_58 = *param_3;
      local_50 = param_3[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      lVar9 = FUN_14244c070(param_1,&local_58);
      if (lVar9 == 0) {
        cVar7 = FUN_140bca1f0(param_1,param_3,0);
        if (cVar7 != '\0') {
          FUN_140bbc6f0(param_1,&local_88,param_3);
          if (local_88 == 0) {
            bVar12 = true;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x1080);
            if (lVar9 == 0) {
              plVar10 = &local_78;
              local_78 = 0;
              plStack_70 = (longlong *)0x0;
              bVar6 = false;
              bVar5 = false;
              bVar12 = true;
            }
            else {
              local_48 = local_88;
              plStack_40 = plStack_80;
              if (plStack_80 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                UNLOCK();
                lVar9 = *(longlong *)(param_1 + 0x1080);
              }
              bVar6 = true;
              bVar5 = true;
              bVar12 = false;
              plVar10 = (longlong *)FUN_140d7da70(lVar9,local_38,param_2,&local_48,3);
              lVar11 = *plVar10;
            }
            plVar2 = plStack_70;
            plVar10 = (longlong *)plVar10[1];
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            if (bVar12) {
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_70 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_70)(plStack_70);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar2 + 0xc);
                  iVar4 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plStack_70 + 8))(plStack_70,1);
                  }
                }
              }
            }
            if (bVar5) {
              if (local_30 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_30 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_30)(local_30);
                  LOCK();
                  piVar3 = (int *)((longlong)local_30 + 0xc);
                  iVar4 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_30 + 8))(local_30,1);
                  }
                }
              }
            }
            plVar2 = plStack_40;
            if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_40 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
            bVar12 = lVar11 == 0;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar10 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar3 = (int *)((longlong)plVar10 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
          }
          plVar10 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_80 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar3 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_80 + 8))(plStack_80,1);
              }
            }
          }
          goto LAB_140ba7e40;
        }
      }
    }
  }
  bVar12 = false;
LAB_140ba7e40:
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return bVar12;
}



// FUNCTION 140ba7eb0 FUN_140ba7eb0 body=235 status=ok
// SIG undefined FUN_140ba7eb0(void)

undefined8 FUN_140ba7eb0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res10);
  cVar5 = FUN_140ba7fa0(param_1,*puVar6);
  if (cVar5 != '\0') {
    return 1;
  }
  FUN_140bb8140(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*local_18 + 8))(local_18,local_res18);
    cVar5 = FUN_140ba7fa0(param_1,*puVar6);
    if (cVar5 != '\0') {
      if (local_10 == (longlong *)0x0) {
        return 1;
      }
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return 1;
      }
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return 1;
      }
      (**(code **)(*local_10 + 8))(local_10,1);
      return 1;
    }
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
  return 0;
}



// FUNCTION 140ba7fa0 FUN_140ba7fa0 body=153 status=ok
// SIG undefined FUN_140ba7fa0(void)

undefined8 FUN_140ba7fa0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cf2e0(&local_18);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 0x10))(local_18,4);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_140ba7fd1;
    }
  }
  uVar7 = 0;
LAB_140ba7fd1:
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 140ba8040 FUN_140ba8040 body=381 status=ok
// SIG undefined FUN_140ba8040(void)

void FUN_140ba8040(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  longlong local_18 [2];
  
  if (1 < *(int *)(param_1 + 0x1060)) {
    plVar1 = (longlong *)(param_1 + 0x1058);
    if (plVar1 != local_18) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x1060) = 0;
    }
    TBaseMulticastDelegate<void>::Remove(param_1 + 0xc60,*(undefined8 *)(param_1 + 0x1070));
    *(undefined8 *)(param_1 + 0x1070) = 0;
    if (*(int *)(param_1 + 0x1054) != 0) {
      *(undefined4 *)(param_1 + 0x1054) = 0;
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xc80,0);
    }
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    cVar2 = FUN_140678610();
    cVar3 = FUN_140db2f20(*(undefined8 *)(param_1 + 0x4e0));
    if ((cVar3 != '\0') && (cVar2 == '\0')) {
      piVar4 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar4 < DAT_14686a7e0) && (_Init_thread_header(&DAT_14686a7e0), DAT_14686a7e0 == -1)) {
        FName::FName(&DAT_14686a7d8,L"MatchMaking_Cancel",1);
        _Init_thread_footer(&DAT_14686a7e0);
      }
      FUN_140be2cb0(param_1,&DAT_14686a7d8);
      if ((*piVar4 < DAT_14686a7f0) && (_Init_thread_header(&DAT_14686a7f0), DAT_14686a7f0 == -1)) {
        FName::FName(&DAT_14686a7e8,L"MatchMaking_Loop_Stop",1);
        _Init_thread_footer(&DAT_14686a7f0);
      }
      FUN_140be2cb0(param_1,&DAT_14686a7e8);
    }
  }
  return;
}



// FUNCTION 140ba81c0 FUN_140ba81c0 body=140 status=ok
// SIG undefined FUN_140ba81c0(void)

void FUN_140ba81c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_res8 [32];
  
  FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
  cVar2 = FUN_140bec900(param_1,local_res8);
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (lVar1 != 0) {
    if (cVar2 == '\0') {
      if (*(char *)(lVar1 + 0x10) != '\0') {
        cVar2 = FUN_140678610();
        if (cVar2 != '\0') {
          *(undefined4 *)(param_1 + 0x10d8) = 0;
          cVar2 = FUN_140bc9f60(param_1);
          if (cVar2 == '\0') {
            FUN_140ba8040(param_1);
          }
        }
      }
    }
    else if ((*(char *)(lVar1 + 0x10) == '\0') && (*(float *)(param_1 + 0x10d8) <= 0.0)) {
      *(undefined4 *)(param_1 + 0x10d8) = 0x40a00000;
      return;
    }
  }
  return;
}



// FUNCTION 140ba8250 FUN_140ba8250 body=1361 status=ok
// SIG undefined FUN_140ba8250(void)

void FUN_140ba8250(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  char local_res18 [8];
  int local_res20 [2];
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98 [2];
  longlong *local_88;
  longlong local_80;
  undefined1 local_70 [56];
  
  FUN_140dbc5d0(param_1 + 0x5f0,local_res18);
  if ((local_res18[0] != '\0') || (param_2 != '\0')) {
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    FUN_1404cf890(&local_f0,0);
    if (local_f0 != (longlong *)0x0) {
      local_100 = *(undefined8 **)(param_1 + 0x38);
      local_f8 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)((longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff);
      if (local_100 + *(int *)(param_1 + 0x40) < local_100) {
        local_d8 = (undefined1 *)0x0;
      }
      if (local_d8 != (undefined1 *)0x0) {
        do {
          lVar8 = FUN_142547b50(*local_100,local_98);
          plVar3 = *(longlong **)(lVar8 + 0x10);
          plVar10 = *(longlong **)(lVar8 + 8);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_98[0] = &PTR_FUN_143f740c8;
          if (local_80 != 0) {
            FMemory::Free();
          }
          plVar13 = local_88;
          local_98[0] = &PTR_FUN_143f73d18;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_88 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          if (plVar10 == (longlong *)0x0) {
LAB_140ba85b5:
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar3 + 1;
              lVar8 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          else {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_c0 = plVar10;
            local_b8 = plVar3;
            (**(code **)(*local_f0 + 0x140))(local_f0,&local_c0,3,local_res20);
            plVar13 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b8 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            if (local_res20[0] != 1) goto LAB_140ba85b5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar13 = (longlong *)(param_1 + 0x1040);
            lVar8 = *plVar13;
            iVar7 = *(int *)(param_1 + 0x1048);
            local_c8 = lVar8 + (longlong)iVar7 * 0x28;
            if (lVar8 != local_c8) {
              do {
                if (((*(longlong **)(lVar8 + 8) == (longlong *)0x0) ||
                    (cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar6 == '\0')) ||
                   (cVar6 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar6 == '\0')) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if ((((*(longlong **)(lVar8 + 8) == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar6 == '\0')) &&
                    (cVar6 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar6 == '\0')) ||
                   ((bVar4 && (cVar6 = (**(code **)*plVar10)(plVar10,*(undefined8 *)(lVar8 + 8)),
                              cVar6 != '\0')))) goto LAB_140ba8581;
                lVar8 = lVar8 + 0x28;
              } while (lVar8 != local_c8);
              iVar7 = *(int *)(param_1 + 0x1048);
            }
            *(int *)(param_1 + 0x1048) = iVar7 + 1;
            if (*(int *)(param_1 + 0x104c) < iVar7 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar13,iVar7);
            }
            uVar5 = local_110;
            lVar9 = (longlong)iVar7;
            lVar8 = *plVar13;
            *(undefined ***)(lVar8 + lVar9 * 0x28) = &PTR_FUN_143f73d18;
            *(longlong **)(lVar8 + 8 + lVar9 * 0x28) = plVar10;
            *(longlong **)(lVar8 + 0x10 + lVar9 * 0x28) = plVar3;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            *(undefined ***)(lVar8 + lVar9 * 0x28) = &PTR_FUN_143f740c8;
            *(undefined8 *)(lVar8 + 0x18 + lVar9 * 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x20 + lVar9 * 0x28) = 0;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            lVar8 = (longlong)(int)local_110;
            iVar7 = (int)local_110 + 1;
            local_110 = CONCAT44(local_110._4_4_,iVar7);
            if (local_110._4_4_ < iVar7) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_118,uVar5 & 0xffffffff);
            }
            plVar13 = (longlong *)(lVar8 * 0x10 + local_118);
            *plVar13 = (longlong)plVar10;
            plVar13[1] = (longlong)plVar3;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              plVar10 = plVar3 + 1;
              lVar8 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
LAB_140ba8581:
              plVar10 = plVar3 + 1;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                lVar8 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar7 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
                goto LAB_140ba85b5;
              }
            }
          }
          local_100 = local_100 + 1;
          local_f8 = local_f8 + 1;
        } while (local_f8 != local_d8);
      }
      if ((int)local_110 != 0) {
        plVar10 = (longlong *)FUN_140da7be0(local_70,&local_118);
        plVar3 = (longlong *)(param_1 + 0x1008);
        if (plVar10 != plVar3) {
          if (*(char *)(param_1 + 0x1038) != '\0') {
            *(undefined1 *)(param_1 + 0x1038) = 0;
            FUN_140da92c0(plVar3);
          }
          *plVar3 = 0;
          *(undefined4 *)(param_1 + 0x1010) = 0;
          if (((int)plVar10[1] != 0) && (plVar13 = (longlong *)*plVar10, plVar13 != (longlong *)0x0)
             ) {
            (**(code **)(*plVar13 + 0x30))(plVar13,plVar3);
          }
          *(undefined8 *)(param_1 + 0x1018) = 0;
          iVar7 = (int)plVar10[3];
          puVar12 = (undefined8 *)plVar10[2];
          *(int *)(param_1 + 0x1020) = iVar7;
          if (iVar7 == 0) {
            *(undefined4 *)(param_1 + 0x1024) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1018,iVar7,0);
            puVar11 = *(undefined8 **)(param_1 + 0x1018);
            do {
              *puVar11 = *puVar12;
              lVar8 = puVar12[1];
              puVar11[1] = lVar8;
              if (lVar8 != 0) {
                LOCK();
                *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                UNLOCK();
              }
              puVar11 = puVar11 + 2;
              puVar12 = puVar12 + 2;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(longlong *)(param_1 + 0x1028) = plVar10[4];
          *(int *)(param_1 + 0x1030) = (int)plVar10[5];
          *(undefined1 *)(param_1 + 0x1038) = 1;
        }
        FUN_140da92c0(local_70);
        uStack_d0 = 0;
        local_d8 = &LAB_140bd11f0;
        local_a8 = 0x40bd11f0;
        uStack_a4 = 1;
        uStack_a0 = 0;
        uStack_9c = uStack_cc;
        FUN_1407ffe80(plVar3,param_1,&local_a8);
        FUN_140dd2690(plVar3);
      }
    }
    plVar3 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_e8 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_118);
  }
  return;
}



// FUNCTION 140ba87b0 FUN_140ba87b0 body=531 status=ok
// SIG undefined FUN_140ba87b0(void)

void FUN_140ba87b0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  char cVar11;
  wchar_t *local_res10;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  plVar9 = (longlong *)0x0;
  cVar11 = '\0';
  local_res10 = L"cusa08023_00";
  if ((DAT_146850158 == (longlong *)0x0) &&
     (plVar5 = (longlong *)operator_new(8), DAT_146850158 = plVar9, plVar5 != (longlong *)0x0)) {
    *plVar5 = (longlong)&PTR_FUN_143f3eef8;
    DAT_146850158 = plVar5;
  }
  (**(code **)(*DAT_146850158 + 0x58))(DAT_146850158,local_48 + 2);
  plVar5 = plVar9;
  do {
    puVar8 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar8 = local_38;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8);
    if (iVar4 == 0) {
      cVar11 = '\x01';
      break;
    }
    plVar5 = (longlong *)((longlong)plVar5 + 1);
  } while ((longlong)plVar5 < 1);
  local_48[0] = 0;
  local_48[1] = 0;
  if (cVar11 == '\0') {
    puVar6 = (undefined8 *)FPaths::ProjectDir(local_28);
    iVar4 = *(int *)(puVar6 + 1);
    local_58 = (wchar_t *)*puVar6;
    *puVar6 = 0;
    local_50 = *(int *)(puVar6 + 1);
    local_4c = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    iVar1 = local_50;
    if (local_4c < (int)((0x23 - (uint)(iVar4 != 0)) + local_50)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      iVar1 = local_50;
    }
    local_50 = (0x23 - (uint)(iVar1 != 0)) + iVar1;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
    }
    local_res10 = local_58;
    lVar7 = (longlong)iVar1 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy(local_58 + lVar7,L"Content/",8);
    pwVar10 = L"";
    if (local_50 != 0) {
      pwVar10 = local_58;
    }
    builtin_wcsncpy(local_58 + lVar7 + 8,L"OakTest/Extras/LowGore.txt",0x1b);
    plVar9 = (longlong *)0x3;
    cVar3 = FUN_141676530(local_48,pwVar10,0);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_140ba894c;
    }
  }
  bVar2 = false;
LAB_140ba894c:
  if ((((ulonglong)plVar9 & 2) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffffd), local_res10 != (wchar_t *)0x0)) {
    FMemory::Free(local_res10);
  }
  if ((((ulonglong)plVar9 & 1) != 0) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  if (bVar2) {
    cVar11 = '\x01';
  }
  FUN_1416595d0(cVar11);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ba89d0 FUN_140ba89d0 body=901 status=ok
// SIG undefined FUN_140ba89d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ba89d0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  longlong local_e8 [5];
  longlong *local_c0;
  longlong *local_b8;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar5 = FUN_14244f490(param_1,0);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = FUN_140cff230(lVar5);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x74) == '\x01')) {
        return;
      }
      goto LAB_140ba8a5b;
    }
  }
  lVar5 = 0;
LAB_140ba8a5b:
  local_e8[4] = 0;
  Online::GetIdentityInterface(&local_c0,0);
  if (local_c0 != (longlong *)0x0) {
    iVar4 = (**(code **)(*local_c0 + 0x38))();
    if (iVar4 == 3) {
      FUN_140baf4e0(param_1);
    }
    if ((DAT_14686a6fc != iVar4) && (lVar5 != 0)) {
      DAT_14686a6fc = iVar4;
      FUN_142dcf3a0(lVar5,&local_88);
      if (local_88 != 0) {
        local_48 = (longlong *)0x0;
        local_38 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_68);
        if (puVar7 != (undefined8 *)0x0) {
          *(int *)(puVar7 + 1) = iVar4;
          *puVar7 = &PTR_CopyToEmptyStorage_144319440;
        }
        local_e8[2] = 0;
        local_78[0] = FUN_140ba5630;
        local_e8[3] = 0x15;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 2,0);
        FGenericPlatformString::Memcpy(local_e8[2],L"nat_detection_result",0x2a);
        lVar5 = FUN_14244f490(param_1,0);
        if (lVar5 != 0) {
          lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_142dcf3a0(lVar5,&local_a8);
            if (local_a8 != 0) {
              local_e8[0] = 0;
              local_e8[1] = 10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
              FGenericPlatformString::Memcpy(local_e8[0],L"crossplay",0x14);
              local_98 = local_a8;
              plStack_90 = plStack_a0;
              if (plStack_a0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                UNLOCK();
              }
              FUN_142b62c30(&local_98,local_e8,local_e8 + 2,local_78);
              plVar8 = plStack_90;
              if (plStack_90 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_90 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plStack_90)(plStack_90);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              if (local_e8[0] != 0) {
                FMemory::Free();
              }
            }
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar8 = plStack_a0 + 1;
              lVar5 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar2 = (int *)((longlong)plStack_a0 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
                }
              }
            }
          }
        }
        if (local_e8[2] != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          plVar8 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar8 = local_48;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
  }
  plVar8 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  return;
}



// FUNCTION 140ba8d60 FUN_140ba8d60 body=189 status=ok
// SIG undefined FUN_140ba8d60(void)

void FUN_140ba8d60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_142aa72a0();
    *(undefined8 *)(param_1 + 0x4e0) = 0;
  }
  plVar3 = (longlong *)(param_1 + 0x4b8);
  if (*plVar3 != 0) {
    FUN_142833de0();
    local_10 = (longlong *)0x0;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4c0,&local_10);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 0x4c8) = 0;
  return;
}



// FUNCTION 140ba8e20 FUN_140ba8e20 body=508 status=ok
// SIG undefined FUN_140ba8e20(void)

void FUN_140ba8e20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_1404c9880(*(longlong *)(param_1 + 0xae8),DAT_14686a160);
    FUN_1404c9880(*(undefined8 *)(param_1 + 0xae8),DAT_14686a168);
    *(undefined4 *)(param_1 + 0xf8c) = 0;
  }
  puVar5 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_140bbd560(&local_38,*puVar5);
  plVar6 = local_30;
  if (local_38 != (longlong *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x488);
    puVar7 = puVar5 + (longlong)*(int *)(param_1 + 0x490) * 2;
    for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
      local_28 = *puVar5;
      local_20 = (longlong *)puVar5[1];
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        plVar6 = local_30;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plVar6 = local_30;
      }
      (**(code **)(*local_38 + 0x48))(local_38,&local_28);
      plVar4 = local_30;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar6 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_30;
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          plVar6 = local_30;
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_20 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_30;
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = local_30;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar6 = local_30;
          }
        }
      }
    }
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x488,0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x498,0);
  FUN_140bafdc0(param_1 + 0x4f0,0);
  plVar4 = local_30;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140ba9020 FUN_140ba9020 body=844 status=ok
// SIG undefined FUN_140ba9020(void)

void FUN_140ba9020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  lVar8 = 0;
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x448) != &local_28) {
    *(undefined8 *)(param_1 + 0x448) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x450,&local_20);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  *(undefined1 *)(param_1 + 0xba8) = 0;
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    thunk_FUN_140f069b0(*(longlong *)(param_1 + 0x5b0),&DAT_14686a610);
  }
  if (*(char *)(param_1 + 0x318) != '\0') {
    *(undefined1 *)(param_1 + 0x318) = 0;
    FUN_140b9da20();
  }
  *(undefined1 *)(param_1 + 0x11c0) = 0;
  FUN_140ba8040(param_1);
  if (*(longlong *)(param_1 + 0x11b8) != 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 0;
    uVar5 = FUN_14164ab60();
    FUN_141597530(uVar5,*(undefined8 *)(param_1 + 0x11b8));
    *(undefined8 *)(param_1 + 0x11b8) = 0;
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1318) != &local_18) {
    *(undefined8 *)(param_1 + 0x1318) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1320,&local_10);
    plVar3 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_140ba23b0(param_1);
  lVar7 = *(longlong *)(param_1 + 0x1088);
  if (lVar7 == 0) {
    lVar6 = operator_new(0x1a8);
    lVar7 = lVar8;
    if (lVar6 != 0) {
      lVar7 = FUN_140d64540(lVar6);
    }
    *(longlong *)(param_1 + 0x1088) = lVar7;
  }
  FUN_140d709d0(lVar7);
  lVar7 = *(longlong *)(param_1 + 0x1088);
  if (lVar7 == 0) {
    lVar6 = operator_new(0x1a8);
    lVar7 = lVar8;
    if (lVar6 != 0) {
      lVar7 = FUN_140d64540(lVar6);
    }
    *(longlong *)(param_1 + 0x1088) = lVar7;
  }
  FUN_140da0180(lVar7);
  iVar4 = FUN_14046e5c0(param_1);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    lVar7 = UGameInstance::GetLocalPlayerByIndex(param_1,iVar4);
    if ((lVar7 != 0) && (FUN_140ba9370(param_1,lVar7), 0 < iVar4)) {
      if (*(longlong *)(param_1 + 0x5b0) != 0) {
        FUN_140eea2b0(*(longlong *)(param_1 + 0x5b0),lVar7);
      }
      FUN_14245cc40(param_1,lVar7);
    }
  }
  lVar7 = FUN_142b45e90();
  FUN_142b68d00(*(undefined8 *)(lVar7 + 0x18));
  FUN_140bafce0(param_1 + 0xfd8,0);
  FUN_140d971b0(*(undefined8 *)(param_1 + 0x478));
  FUN_140d97400(*(longlong *)(param_1 + 0x478) + 0x1f8);
  lVar7 = *(longlong *)(param_1 + 0x1088);
  if (*(longlong *)(param_1 + 0x1088) == 0) {
    lVar7 = operator_new(0x1a8);
    if (lVar7 != 0) {
      lVar8 = FUN_140d64540(lVar7);
    }
    *(longlong *)(param_1 + 0x1088) = lVar8;
    lVar7 = lVar8;
  }
  FUN_140d87910(lVar7,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a690) && (_Init_thread_header(&DAT_14686a690), DAT_14686a690 == -1))
  {
    FName::FName(&DAT_14686a688,L"OnlineSubsystemUtils",1);
    _Init_thread_footer(&DAT_14686a690);
  }
  lVar8 = FModuleManager::GetModulePtr_Internal(DAT_14686a688);
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x18) != 0)) {
    FUN_1404d8bd0(*(longlong *)(lVar8 + 0x18),0);
  }
  FUN_140c0e000();
  *(undefined8 *)(param_1 + 0xb80) = 0;
  *(undefined2 *)(param_1 + 0xb79) = 0;
  *(undefined1 *)(param_1 + 0xb78) = 0;
  return;
}



// FUNCTION 140ba9370 FUN_140ba9370 body=1696 status=ok
// SIG undefined FUN_140ba9370(void)

void FUN_140ba9370(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *local_res18;
  undefined ***local_res20;
  longlong local_158;
  longlong *plStack_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined **local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x990);
    *(longlong *)(param_1 + 0x990) = param_2;
    FUN_140dce4e0(&DAT_14686a610);
    lVar6 = FUN_142547b50(param_2,local_60);
    local_158 = *(longlong *)(lVar6 + 8);
    plStack_150 = *(longlong **)(lVar6 + 0x10);
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
      UNLOCK();
    }
    local_60[0] = &PTR_FUN_143f740c8;
    if (local_48 != 0) {
      FMemory::Free();
    }
    local_60[0] = &PTR_FUN_143f73d18;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_158 != 0) {
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        plVar7 = (longlong *)UUGMenuManager::GetFadeHUD();
        if (plVar7 != (longlong *)0x0) {
          local_f8 = local_158;
          plStack_f0 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar7 + 0x58))(plVar7,&local_f8,0xffffffff);
          plVar3 = plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_f0 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_f0)(plStack_f0);
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
          local_e8 = local_158;
          plStack_e0 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
            UNLOCK();
          }
          FUN_140d29080(plVar7,&local_e8);
          plVar3 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_e0 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_e0)(plStack_e0);
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
          local_d8 = local_158;
          plStack_d0 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
            UNLOCK();
          }
          FUN_140d29120(plVar7,&local_d8);
          plVar7 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_d0 + 1;
            lVar6 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_d0)(plStack_d0);
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
        }
      }
      lVar6 = FUN_142b45e90();
      local_c8 = local_158;
      plStack_c0 = plStack_150;
      uVar8 = *(undefined8 *)(lVar6 + 0x18);
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      FUN_142b41880(uVar8,&local_c8);
      plVar7 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_c0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
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
      local_b8 = local_158;
      plStack_b0 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      FUN_142b41f30(uVar8,&local_b8);
      plVar7 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_b0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
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
      local_a8 = local_158;
      plStack_a0 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      uVar8 = FUN_140bb74b0(param_1);
      FUN_140d6f4c0(uVar8,&local_a8);
      plVar7 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
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
      local_res18 = &local_158;
      FUN_140b96ad0(param_1 + 0x420,&local_res18);
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 0xaa8);
      Online::GetExternalUIInterface(&local_138,0);
      if (local_138 != (longlong *)0x0) {
        local_98 = local_158;
        plStack_90 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_138 + 0x58))(plStack_150,&local_98);
        plVar7 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_90)(plStack_90);
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
      }
      plVar7 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      local_120 = local_158;
      local_118 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      local_res20 = &local_128;
      local_128 = &PTR_FUN_143f740c8;
      local_110 = 0;
      local_108 = 0;
      FUN_1404bb710(param_1 + 0xfd8,&local_res20);
      local_128 = &PTR_FUN_143f740c8;
      if (local_110 != 0) {
        FMemory::Free();
      }
      plVar3 = local_118;
      local_128 = &PTR_FUN_143f73d18;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_118 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_118)(local_118);
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      puVar9 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
      FUN_140bbd560(&local_148,*puVar9);
      if (local_148 != (longlong *)0x0) {
        local_88 = local_158;
        plStack_80 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_148 + 0x38))(plStack_150,&local_88);
        plVar7 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_80 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_80)(plStack_80);
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
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_1418c3ef0(DAT_1469f4590,0,0xffffffff,&local_70);
      plVar7 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_140 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      plVar7 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_130 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
    plVar7 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_150 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_150)(plStack_150);
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
    *(undefined8 *)(param_1 + 0x990) = uVar5;
  }
  return;
}



// FUNCTION 140ba9a10 FUN_140ba9a10 body=175 status=ok
// SIG undefined FUN_140ba9a10(void)

void FUN_140ba9a10(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar7 + *(int *)(param_1 + 0x40);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    if ((*plVar7 != 0) && (lVar6 = *(longlong *)(*plVar7 + 0x30), lVar6 != 0)) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = FUN_142f30760();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
        if ((plVar5 != (longlong *)0x0) &&
           (lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5), lVar6 != 0)) {
          FUN_142ee3cb0(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ba9ac0 FUN_140ba9ac0 body=190 status=ok
// SIG undefined FUN_140ba9ac0(void)

void FUN_140ba9ac0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x280)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x278) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x280));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x278),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140ba9b90 FUN_140ba9b90 body=190 status=ok
// SIG undefined FUN_140ba9b90(void)

void FUN_140ba9b90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2f8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x2f0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x2f8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2f0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140ba9c60 FUN_140ba9c60 body=37 status=ok
// SIG undefined FUN_140ba9c60(void)

void FUN_140ba9c60(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x290,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140ba9ca0 FUN_140ba9ca0 body=190 status=ok
// SIG undefined FUN_140ba9ca0(void)

void FUN_140ba9ca0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2e0)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x2d8) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x2e0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2d8),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140ba9d70 FUN_140ba9d70 body=190 status=ok
// SIG undefined FUN_140ba9d70(void)

void FUN_140ba9d70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2b0)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x2a8) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x2b0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2a8),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140ba9e40 FUN_140ba9e40 body=37 status=ok
// SIG undefined FUN_140ba9e40(void)

void FUN_140ba9e40(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x2c0,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140ba9e80 FUN_140ba9e80 body=14 status=ok
// SIG undefined FUN_140ba9e80(void)

void FUN_140ba9e80(longlong param_1)

{
  FUN_140bafce0(param_1 + 0x9f0,0);
  return;
}



// FUNCTION 140ba9e90 FUN_140ba9e90 body=212 status=ok
// SIG undefined FUN_140ba9e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ba9e90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = plVar4;
  FUN_140b96cd0(param_1 + 0x420,&local_18);
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
  if (((*(int *)(param_1 + 0xab0) != 0) && (*(longlong **)(param_1 + 0xaa8) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0xab0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ba9f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140ba9f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x40))();
    return;
  }
  return;
}



// FUNCTION 140ba9f70 FUN_140ba9f70 body=1377 status=ok
// SIG undefined FUN_140ba9f70(void)

void FUN_140ba9f70(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_68);
  FUN_140d7d990(*(undefined8 *)(param_1 + 0x1080),&local_78,uVar6);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_58);
  FUN_140d84960(*(undefined8 *)(param_1 + 0x1080),&local_88,uVar6);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_3 + 8,local_48);
  FUN_140d7d990(*(undefined8 *)(param_1 + 0x1080),&local_a8,uVar6);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_3 + 8,local_38);
  if ((*(longlong *)(param_1 + 0x1f8) == 0) || (lVar7 = UUGMenuManager::GetFadeHUD(), lVar7 == 0)) {
    local_98 = (undefined8 *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  else {
    FUN_140d3b970(lVar7,&local_98,uVar6);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  puVar4 = local_78;
  puVar11 = local_a8;
  if (local_78 != (undefined8 *)0x0) {
    puVar10 = local_78;
    if ((local_a8 != (undefined8 *)0x0) && (iVar9 = *(int *)(param_1 + 0x428) + -1, -1 < iVar9)) {
      lVar7 = (longlong)iVar9 * 0xe8;
      do {
        lVar3 = *(longlong *)(param_1 + 0x420);
        if ((((*(longlong *)(lVar3 + 0x10 + lVar7) == 0) ||
             ((cVar5 = (**(code **)*puVar4)(puVar4), cVar5 != '\0' &&
              (cVar5 = (**(code **)*puVar11)(puVar11,*(undefined8 *)(lVar3 + lVar7)), cVar5 != '\0')
              ))) && (-1 < iVar9)) && (iVar9 < *(int *)(param_1 + 0x428))) {
          FUN_140be7890(param_1 + 0x420,iVar9,1,1);
        }
        lVar7 = lVar7 + -0xe8;
        iVar9 = iVar9 + -1;
        puVar10 = local_78;
      } while (-1 < iVar9);
    }
    puVar4 = local_98;
    puVar11 = local_a8;
    if (((puVar10 != (undefined8 *)0x0) && (local_98 != (undefined8 *)0x0)) &&
       (iVar9 = *(int *)(param_1 + 0x428) + -1, -1 < iVar9)) {
      lVar7 = (longlong)iVar9 * 0xe8;
      do {
        lVar3 = *(longlong *)(param_1 + 0x420);
        if (((*(longlong *)(lVar3 + 0x10 + lVar7) == 0) ||
            ((cVar5 = (**(code **)*puVar10)(puVar10), cVar5 != '\0' &&
             (cVar5 = (**(code **)*puVar4)(puVar4,*(undefined8 *)(lVar3 + lVar7)), cVar5 != '\0'))))
           && ((-1 < iVar9 && (iVar9 < *(int *)(param_1 + 0x428))))) {
          FUN_140be7890(param_1 + 0x420,iVar9,1,1);
        }
        lVar7 = lVar7 + -0xe8;
        iVar9 = iVar9 + -1;
        puVar11 = local_a8;
      } while (-1 < iVar9);
    }
  }
  puVar4 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    puVar10 = local_88;
    if ((puVar11 != (undefined8 *)0x0) && (iVar9 = *(int *)(param_1 + 0x428) + -1, -1 < iVar9)) {
      lVar7 = (longlong)iVar9 * 0xe8;
      do {
        lVar3 = *(longlong *)(param_1 + 0x420);
        if (((*(longlong *)(lVar3 + 0x10 + lVar7) == 0) ||
            ((cVar5 = (**(code **)*puVar4)(puVar4), cVar5 != '\0' &&
             (cVar5 = (**(code **)*puVar11)(puVar11,*(undefined8 *)(lVar3 + lVar7)), cVar5 != '\0'))
            )) && ((-1 < iVar9 && (iVar9 < *(int *)(param_1 + 0x428))))) {
          FUN_140be7890(param_1 + 0x420,iVar9,1,1);
        }
        lVar7 = lVar7 + -0xe8;
        iVar9 = iVar9 + -1;
        puVar10 = local_88;
      } while (-1 < iVar9);
    }
    puVar11 = local_98;
    if (((puVar10 != (undefined8 *)0x0) && (local_98 != (undefined8 *)0x0)) &&
       (iVar9 = *(int *)(param_1 + 0x428) + -1, -1 < iVar9)) {
      lVar7 = (longlong)iVar9 * 0xe8;
      do {
        lVar3 = *(longlong *)(param_1 + 0x420);
        if ((((*(longlong *)(lVar3 + 0x10 + lVar7) == 0) ||
             ((cVar5 = (**(code **)*puVar10)(puVar10), cVar5 != '\0' &&
              (cVar5 = (**(code **)*puVar11)(puVar11,*(undefined8 *)(lVar3 + lVar7)), cVar5 != '\0')
              ))) && (-1 < iVar9)) && (iVar9 < *(int *)(param_1 + 0x428))) {
          FUN_140be7890(param_1 + 0x420,iVar9,1,1);
        }
        lVar7 = lVar7 + -0xe8;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  if (((*(int *)(param_1 + 0xab0) != 0) && (*(longlong **)(param_1 + 0xaa8) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x18))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0xab0) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0xaa8);
    }
    (**(code **)(*plVar8 + 0x40))();
  }
  plVar8 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
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
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
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
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
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



// FUNCTION 140baa4e0 FUN_140baa4e0 body=1656 status=ok
// SIG undefined FUN_140baa4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140baa5a5) */
/* WARNING: Removing unreachable block (ram,0x000140baa5b1) */
/* WARNING: Removing unreachable block (ram,0x000140baa5ca) */
/* WARNING: Removing unreachable block (ram,0x000140baa5d8) */

void FUN_140baa4e0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190;
  longlong local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong *local_170;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined **local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_168[0] = 0;
  plVar6 = *(longlong **)(param_1 + 0xae8);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x100))(plVar6,param_1 + 0xf60);
  }
  local_188 = 0;
  plStack_180 = (longlong *)0x0;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x460) != 0) {
      if ((*(longlong *)(param_1 + 0x1f8) != 0) &&
         (plVar6 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar6 != (longlong *)0x0)) {
        local_148 = *(undefined8 *)(param_1 + 0x460);
        local_140 = *(longlong **)(param_1 + 0x468);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_140 + 1) = (int)local_140[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar6 + 0x58))(plVar6,&local_148,0xffffffff);
        plVar1 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_140 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_140)(local_140);
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
        local_138 = *(undefined8 *)(param_1 + 0x460);
        local_130 = *(longlong **)(param_1 + 0x468);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        FUN_140d29080(plVar6,&local_138);
        plVar1 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_130 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_130)(local_130);
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
        local_128 = *(undefined8 *)(param_1 + 0x460);
        local_120 = *(longlong **)(param_1 + 0x468);
        if (local_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_120 + 1) = (int)local_120[1] + 1;
          UNLOCK();
        }
        FUN_140d29120(plVar6,&local_128);
        plVar6 = local_120;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_120 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_120)(local_120);
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
      lVar7 = FUN_142b45e90();
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      local_118 = *(undefined8 *)(param_1 + 0x460);
      local_110 = *(longlong **)(param_1 + 0x468);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_110 + 1) = (int)local_110[1] + 1;
        UNLOCK();
      }
      FUN_142b41880(uVar8,&local_118);
      plVar6 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_110)(local_110);
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
      local_108 = *(undefined8 *)(param_1 + 0x460);
      local_100 = *(longlong **)(param_1 + 0x468);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_142b41f30(uVar8,&local_108);
      plVar6 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_100)(local_100);
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
    cVar5 = FText::IsEmpty(param_3);
    bVar10 = cVar5 != '\0';
    if (bVar10) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,L"Unable to join at this time.",L"OakGameInstance",
                         L"SplitscreenJoinFailedDefaultMessage");
    }
    else {
      uVar8 = FText::FText(local_60,param_3);
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Splitscreen Join Failed",L"OakGameInstance",
                       L"SplitscreenJoinFailed");
    local_c8 = &PTR_FUN_1443170a0;
    FText::FText(local_c0,uVar9);
    FText::FText(local_a8,uVar8);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_88 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if ((bVar10) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_70 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if ((!bVar10) && (local_58 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_58 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_168,0);
    FWeakObjectPtr::operator=(local_150,0);
    FWeakObjectPtr::operator=(local_f8,0);
    local_198 = local_168;
    local_190 = 2;
    local_f0 = 0;
    FUN_140c23780(2,&local_c8,local_f8,local_150);
    FUN_140b9cdd0(&local_c8);
  }
  else {
    local_188 = *(longlong *)(param_1 + 0x460);
    plStack_180 = *(longlong **)(param_1 + 0x468);
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
      UNLOCK();
    }
    uStack_158 = 0;
    local_160 = 0;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
      UNLOCK();
    }
    local_d8 = local_188;
    plStack_d0 = plStack_180;
    local_48 = local_188;
    plStack_40 = plStack_180;
    FUN_140c236f0(1,0xd,&local_d8);
    if ((*(char *)(param_1 + 0x440) == '\x02') && (local_188 != 0)) {
      local_e8 = local_188;
      plStack_e0 = plStack_180;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
        UNLOCK();
      }
      FUN_140be6dd0(param_1,&local_e8);
      plVar6 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_e0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
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
  }
  local_170 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x460) != &local_178) {
    *(undefined8 *)(param_1 + 0x460) = 0;
    local_178 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x468,&local_170);
    plVar6 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  FUN_140bf3dd0(param_1);
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_140dc3270(*(longlong *)(param_1 + 0x4e0),&local_188);
  }
  FUN_140bc3630(param_1);
  plVar6 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_180)(plStack_180);
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
  return;
}



// FUNCTION 140baab60 FUN_140baab60 body=369 status=ok
// SIG undefined FUN_140baab60(void)

void FUN_140baab60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  
  plVar12 = (longlong *)*param_1;
  lVar8 = 0;
  plVar1 = plVar12 + (int)param_1[1];
  if (plVar12 != plVar1) {
    do {
      if ((*plVar12 != 0) && (plVar2 = *(longlong **)(*plVar12 + 0x30), plVar2 != (longlong *)0x0))
      {
        lVar6 = FUN_14145f370();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (lVar6 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar6 != 0)) {
          uVar7 = FUN_14134c430();
          cVar4 = FUN_142ef5b10(lVar6,uVar7);
          if (cVar4 != '\0') {
            iVar5 = *(int *)(lVar6 + 0x48);
            iVar11 = 0;
            lVar10 = 0;
            if (0 < iVar5) {
              do {
                if ((lVar10 < 0) || (iVar5 <= iVar11)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (((bVar3) &&
                    (plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + lVar10 * 8),
                    plVar2 != (longlong *)0x0)) &&
                   (lVar8 = (**(code **)(*plVar2 + 0x278))(), lVar8 != 0)) {
                  lVar9 = FUN_14134c430();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) break;
                }
                iVar5 = *(int *)(lVar6 + 0x48);
                lVar8 = 0;
                iVar11 = iVar11 + 1;
                lVar10 = lVar10 + 1;
              } while (iVar11 < iVar5);
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    if (lVar8 != 0) {
      FUN_140f29510(lVar8);
      return;
    }
  }
  return;
}



// FUNCTION 140baace0 FUN_140baace0 body=602 status=ok
// SIG undefined FUN_140baace0(void)

void FUN_140baace0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar13 = 0;
  if ((param_2 != 0) && (uVar11 = *(ulonglong *)(param_2 + 400), uVar11 != 0)) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140baad39;
  }
  uVar11 = uVar13;
LAB_140baad39:
  if ((0 < *(int *)(param_1 + 1)) && (uVar11 != 0)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)*param_1;
    }
    bVar6 = FToBoolHelper::FromCStringWide(puVar9);
    DAT_14686a050 = (uint)bVar6;
    if (DAT_14686a050 == 0) {
      plVar14 = *(longlong **)(uVar11 + 0xab8);
      uVar15 = (longlong)*(int *)(uVar11 + 0xac0) & 0x1fffffffffffffff;
      if (plVar14 + *(int *)(uVar11 + 0xac0) < plVar14) {
        uVar15 = uVar13;
      }
      if (uVar15 != 0) {
        do {
          lVar7 = *plVar14;
          if (lVar7 != 0) {
            local_28 = 0;
            local_20 = 0;
            uVar8 = thunk_FUN_1422ca050();
            FUN_1409f97d0(uVar8,&local_38,lVar7,&local_28);
            iVar12 = *(int *)(uVar11 + 0xd58);
            *(int *)(uVar11 + 0xd58) = iVar12 + 1;
            if (*(int *)(uVar11 + 0xd5c) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(uVar11 + 0xd50,iVar12);
            }
            plVar4 = local_30;
            puVar10 = (undefined8 *)((longlong)iVar12 * 0x10 + *(longlong *)(uVar11 + 0xd50));
            *puVar10 = local_38;
            puVar10[1] = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_30 + 1) = (int)local_30[1] + 1;
              UNLOCK();
              if (local_30 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_30 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_30)(local_30);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  iVar12 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
            }
          }
          plVar14 = plVar14 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar15);
      }
      FUN_1416f7d70(0xffffffff);
    }
    else {
      iVar12 = *(int *)(uVar11 + 0xd58);
      if (iVar12 != 0) {
        plVar14 = (longlong *)(*(longlong *)(uVar11 + 0xd50) + 8);
        do {
          plVar4 = (longlong *)*plVar14;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
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
          plVar14 = plVar14 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      *(undefined4 *)(uVar11 + 0xd58) = 0;
      if (*(int *)(uVar11 + 0xd5c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(uVar11 + 0xd50,0);
      }
    }
  }
  return;
}



// FUNCTION 140baaf40 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>_>,TDefaultMapHashableKeyFuncs<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>,0>,FDefaultSetAllocator>
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
      FUN_14055d980(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140baaff0 FUN_140baaff0 body=490 status=ok
// SIG undefined FUN_140baaff0(void)

void FUN_140baaff0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_38 [16];
  longlong *local_28;
  
  if (*(longlong *)(param_1 + 0x460) == 0) {
    uVar8 = FUN_1404b03b0();
    FUN_140baa4e0(param_1,0,uVar8);
    return;
  }
  pcVar7 = (char *)FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
  if (*pcVar7 == '\x02') {
    if (((*(int *)(param_1 + 0x11e8) == 0) || (*(longlong **)(param_1 + 0x11e0) == (longlong *)0x0))
       || (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x11e0) + 0x18))(), cVar6 == '\0')) {
      uStack_3c = uStack_50._4_4_;
      cVar6 = *(char *)(param_1 + 0x458);
      local_58 = FUN_140bd10c0;
      uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
      local_48 = 0x40bd10c0;
      uStack_44 = 1;
      uStack_40 = 0;
      FUN_14058c4b0(param_1 + 0x11e0,param_1,&local_48);
      plVar4 = *(longlong **)(param_1 + 0x468);
      uVar8 = *(undefined8 *)(param_1 + 0x460);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_58 = (code *)0x0;
      uStack_50 = 1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,0);
      *(undefined8 *)local_58 = uVar8;
      *(longlong **)(local_58 + 8) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      FUN_140ba73a0(param_1,&local_58,cVar6 == '\x01',1,0);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
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
  }
  else {
    uVar8 = FAtomCueNameTrackKeyframe::FAtomCueNameTrackKeyframe(local_38);
    FUN_140bab1e0(param_1,uVar8);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140bab1e0 FUN_140bab1e0 body=579 status=ok
// SIG undefined FUN_140bab1e0(void)

void FUN_140bab1e0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  code *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  local_78 = *(code **)(param_1 + 0x460);
  if (local_78 != (code *)0x0) {
    plStack_70 = *(longlong **)(param_1 + 0x468);
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_140bcaba0(param_1,&local_78,param_2);
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_70)(plStack_70);
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
    if (cVar6 == '\0') {
      cVar6 = FUN_140bc9f60(param_1);
      if (((cVar6 == '\0') && (*(int *)(param_1 + 0x1054) == 0)) && (*param_2 != 8)) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_140c236f0(1,0xe,&local_68);
        uStack_4c = (undefined4)((ulonglong)plStack_70 >> 0x20);
        plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
        local_78 = FUN_140bd61b0;
        local_58 = 0x40bd61b0;
        uStack_54 = 1;
        uStack_50 = 0;
        puVar7 = (undefined8 *)FUN_140722860(param_1 + 0x9a0,local_res18,param_1,&local_58);
        *(undefined8 *)(param_1 + 0xfb0) = *puVar7;
        FUN_140ba4250(param_1,&DAT_146297e30,0);
      }
      else {
        FText::FText(local_48);
        pcVar8 = (char *)FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
        if (*pcVar8 == '\x02') {
          if (*param_2 == 7) {
            FText::operator=(local_48,&DAT_14686f510);
          }
          else if (*param_2 == 8) {
            uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_30,
                               L"The current game requires all players to have cross-play permissions."
                               ,L"OakGameInstance",L"SplitscreenJoinFailed_NoCrossplayPermission");
            FText::operator=(local_48,uVar9);
            if (local_28 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_28 + 1;
              lVar5 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_28)(local_28);
                LOCK();
                piVar2 = (int *)((longlong)local_28 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_28 + 8))(local_28,1);
                }
              }
            }
          }
        }
        FUN_140baa4e0(param_1,0,local_48);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          lVar5 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
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
      }
    }
    else {
      FUN_140bc8970();
    }
  }
  return;
}



// FUNCTION 140bab430 FUN_140bab430 body=1118 status=ok
// SIG undefined FUN_140bab430(void)

void FUN_140bab430(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  uint uStackX_c;
  uint in_stack_fffffffffffffed8;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined **local_c8 [2];
  longlong *local_b8;
  longlong local_b0;
  undefined **local_a0 [2];
  longlong *local_90;
  longlong local_88;
  undefined **local_78;
  longlong *local_70;
  undefined ***local_40;
  
  plVar13 = (longlong *)0x0;
  plVar7 = (longlong *)UGameInstance::FindLocalPlayerFromControllerId();
  iVar12 = -1;
  plVar10 = plVar13;
  if (plVar7 != (longlong *)0x0) {
    if ((longlong *)plVar7[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar7[6] + 0xce8))();
    }
    lVar8 = UGameInstance::FindLocalPlayerFromControllerId(param_1,0xffffffff);
    while (lVar8 != 0) {
      iVar12 = iVar12 + -1;
      lVar8 = UGameInstance::FindLocalPlayerFromControllerId(param_1,iVar12);
    }
    (**(code **)(*plVar7 + 0x2b8))(plVar7,iVar12);
    plVar10 = plVar7;
  }
  local_78 = &PTR_LAB_144319950;
  local_40 = &local_78;
  local_70 = param_1;
  FUN_140dcfb10(&DAT_14686a610,param_2,0,0,in_stack_fffffffffffffed8 & 0xffffff00,plVar10,&local_78)
  ;
  uVar6 = 0;
  if (param_1[0xb6] != 0) {
    if (plVar10 != (longlong *)0x0) {
      lVar8 = FUN_142547b50(plVar10,local_c8);
      local_108 = *(undefined8 *)(lVar8 + 8);
      local_100 = *(longlong **)(lVar8 + 0x10);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      local_c8[0] = &PTR_FUN_143f740c8;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      local_c8[0] = &PTR_FUN_143f73d18;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_b8 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      uVar6 = FUN_140bb88c0(param_1,&local_108);
      plVar7 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_100 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
    }
    FUN_140ee7e30(param_1[0xb6],&DAT_14686a610,param_1,plVar10,uVar6);
  }
  FUN_1404cf890(&local_f8,0);
  if (local_f8 != (longlong *)0x0) {
    uVar9 = (**(code **)(*local_f8 + 0x58))(local_f8,local_d8,param_2);
    FUN_1407fcc20(param_1 + 0x17c,param_2,uVar9);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_d0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  plVar7 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_f0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0)) ||
     ((lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0 &&
      ((lVar8 = UWorld::GetGameState<APVPGameState>(lVar8), lVar8 != 0 &&
       (*(int *)(lVar8 + 0x618) != 0)))))) {
    if (plVar10 == (longlong *)0x0) {
      plVar11 = (longlong *)((ulonglong)uStackX_c << 0x20);
      plVar7 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      plVar10 = (longlong *)0x0;
    }
    else {
      lVar8 = FUN_142547b50(plVar10,local_a0);
      plVar10 = *(longlong **)(lVar8 + 0x10);
      plVar13 = *(longlong **)(lVar8 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      plVar11 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
    }
    if ((bVar3) && (plVar7 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if ((bVar4) && (plVar11 != (longlong *)0x0)) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (bVar5) {
      local_a0[0] = &PTR_FUN_143f740c8;
      if (local_88 != 0) {
        FMemory::Free();
      }
      local_a0[0] = &PTR_FUN_143f73d18;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_90 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_e8 = plVar13;
    local_e0 = plVar10;
    FUN_140c236f0(1,10,&local_e8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bab890 FUN_140bab890 body=1117 status=ok
// SIG undefined FUN_140bab890(void)

void FUN_140bab890(longlong param_1,int param_2,longlong *param_3,char param_4,char param_5,
                  undefined1 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *local_128;
  int local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined **local_98;
  longlong local_90;
  undefined ***local_60;
  undefined1 local_58 [48];
  
  if ((param_2 < 0) && (param_4 != '\0')) {
    param_2 = 0;
  }
  local_100 = param_1;
  FUN_1404cf890(&local_f8,0);
  plVar7 = (longlong *)0x0;
  if (local_f8 == (longlong *)0x0) {
LAB_140bab996:
    if ((param_5 == '\0') ||
       ((*(longlong *)(param_1 + 0x1350) != 0 ||
        (iVar5 = FUN_140ba0e20(&local_100,plVar7), iVar5 != 0)))) goto LAB_140babb66;
    local_108 = 0;
    FUN_1404cf2e0(&local_118,0);
    if ((local_118 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*local_118 + 0x10))(local_118,8), cVar4 == '\0')) {
      plVar1 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      goto LAB_140babb66;
    }
    uStack_d0 = 0;
    local_128 = (longlong *)0x0;
    local_d8 = FUN_140be00d0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_120 = 3;
    local_128 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_144318d40;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)local_d8;
      plVar7[3] = CONCAT44(uStack_cc,uStack_d0);
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar9;
      *plVar7 = (longlong)&PTR_FUN_144318d88;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_118 + 0x218))(local_118,local_b8,&local_128);
    *(undefined8 *)(param_1 + 0x1350) = *puVar8;
    if (local_120 == 0) {
LAB_140babac3:
      if (local_128 != (longlong *)0x0) {
        FMemory::Free(local_128);
      }
    }
    else if (local_128 != (longlong *)0x0) {
      (**(code **)(*local_128 + 0x28))(local_128,0);
      if (local_128 != (longlong *)0x0) {
        local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
      }
      local_120 = 0;
      goto LAB_140babac3;
    }
    (**(code **)(*local_118 + 0x60))(local_118,param_2,1);
    plVar7 = local_110;
    if (local_110 == (longlong *)0x0) goto LAB_140babc92;
    LOCK();
    plVar1 = local_110 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_140babc92;
    (**(code **)*local_110)(local_110);
    LOCK();
    piVar3 = (int *)((longlong)plVar7 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_140babc92;
    lVar9 = *local_110;
  }
  else {
    if (param_3 == (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x58))(local_f8,&local_e8,param_2);
      local_a8 = local_e8;
      plStack_a0 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
        UNLOCK();
      }
      param_3 = (longlong *)FUN_14244c070(param_1,&local_a8);
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_e0 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar3 = (int *)((longlong)plStack_e0 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
          }
        }
      }
    }
    plVar7 = param_3;
    if ((param_3 == (longlong *)0x0) || (-1 < (int)param_3[0x21])) goto LAB_140bab996;
    (**(code **)(*param_3 + 0x2b8))(param_3,param_2);
LAB_140babb66:
    cVar4 = FUN_140dc10f0(&DAT_14686a610,plVar7);
    local_98 = &PTR_LAB_144319980;
    local_60 = &local_98;
    local_90 = param_1;
    FUN_140dcfb10(&DAT_14686a610,param_2,1,param_4,param_6,plVar7,&local_98);
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      uVar6 = FUN_140ba0e20(&local_100,plVar7);
      FUN_140ee7e30(*(undefined8 *)(param_1 + 0x5b0),&DAT_14686a610,param_1,plVar7,uVar6);
    }
    if ((((cVar4 != '\0') || (param_4 != '\0')) || (plVar7 == (longlong *)0x0)) ||
       (cVar4 = FUN_140dbfc10(&DAT_14686a610), cVar4 != '\0')) goto LAB_140babc92;
    lVar9 = FUN_142547b50(plVar7,local_58);
    plVar7 = *(longlong **)(lVar9 + 0x10);
    local_c8 = *(undefined8 *)(lVar9 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    FUN_1404bf980(local_58);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_c0 = plVar7;
    FUN_140c236f0(1,0xb,&local_c8);
    if (plVar7 == (longlong *)0x0) goto LAB_140babc92;
    LOCK();
    plVar1 = plVar7 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_140babc92;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar3 = (int *)((longlong)plVar7 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_140babc92;
    lVar9 = *plVar7;
    local_110 = plVar7;
  }
  (**(code **)(lVar9 + 8))(local_110,1);
LAB_140babc92:
  plVar7 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140babcf0 FUN_140babcf0 body=589 status=ok
// SIG undefined FUN_140babcf0(void)

undefined8 * FUN_140babcf0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_140438ef0(0x1b8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144319518;
    puVar6[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar6[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar6[3] = *(undefined8 *)(param_1 + 0x18);
    puVar6[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(param_1 + 0x28);
    FString::FString(puVar6 + 6,param_1 + 0x30);
    FString::FString(puVar6 + 8,param_1 + 0x40);
    *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_1 + 0x50);
    puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar6[0xc] = *(undefined8 *)(param_1 + 0x60);
    puVar6[0xd] = *(undefined8 *)(param_1 + 0x68);
    puVar6[0xe] = *(undefined8 *)(param_1 + 0x70);
    puVar6[0xf] = *(undefined8 *)(param_1 + 0x78);
    puVar6[0x10] = *(undefined8 *)(param_1 + 0x80);
    puVar6[0x11] = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(puVar6 + 0x12) = *(undefined4 *)(param_1 + 0x90);
    puVar6[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar6[0x14] = *(undefined8 *)(param_1 + 0xa0);
    puVar6[0x15] = *(undefined8 *)(param_1 + 0xa8);
    puVar6[0x16] = *(undefined8 *)(param_1 + 0xb0);
    puVar6[0x17] = *(undefined8 *)(param_1 + 0xb8);
    puVar6[0x18] = *(undefined8 *)(param_1 + 0xc0);
    puVar6[0x19] = *(undefined8 *)(param_1 + 200);
    puVar6[0x1a] = *(undefined8 *)(param_1 + 0xd0);
    puVar6[0x1b] = *(undefined8 *)(param_1 + 0xd8);
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    puVar6[0x1c] = *(undefined8 *)(param_1 + 0xe0);
    puVar6[0x1d] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xf8);
    puVar6[0x1e] = *(undefined8 *)(param_1 + 0xf0);
    puVar6[0x1f] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    puVar6[0x20] = *(undefined8 *)(param_1 + 0x100);
    puVar6[0x21] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x118);
    puVar6[0x22] = *(undefined8 *)(param_1 + 0x110);
    puVar6[0x23] = uVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x124);
    uVar3 = *(undefined4 *)(param_1 + 0x128);
    uVar4 = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(puVar6 + 0x24) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)((longlong)puVar6 + 0x124) = uVar2;
    *(undefined4 *)(puVar6 + 0x25) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 300) = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x134);
    uVar3 = *(undefined4 *)(param_1 + 0x138);
    uVar4 = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(puVar6 + 0x26) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)((longlong)puVar6 + 0x134) = uVar2;
    *(undefined4 *)(puVar6 + 0x27) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = uVar4;
    *(undefined4 *)(puVar6 + 0x28) = *(undefined4 *)(param_1 + 0x140);
    FString::FString(puVar6 + 0x29,param_1 + 0x148);
    FString::FString(puVar6 + 0x2b,param_1 + 0x158);
    FString::FString(puVar6 + 0x2d,param_1 + 0x168);
    FString::FString(puVar6 + 0x2f,param_1 + 0x178);
    FString::FString(puVar6 + 0x31,param_1 + 0x188);
    *(undefined4 *)(puVar6 + 0x33) = *(undefined4 *)(param_1 + 0x198);
    FString::FString(puVar6 + 0x34,param_1 + 0x1a0);
    *(undefined4 *)(puVar6 + 0x36) = *(undefined4 *)(param_1 + 0x1b0);
    return puVar6;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140babf40 CopyToEmptyStorage body=52 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_3d5d47135c039d13df68ed07cfe6582f>_>::
     CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144319440;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140babf80 FUN_140babf80 body=101 status=ok
// SIG undefined FUN_140babf80(void)

undefined8 * FUN_140babf80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1443187d8;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar1 + 1,param_1 + 8);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140babff0 FUN_140babff0 body=66 status=ok
// SIG undefined FUN_140babff0(void)

void FUN_140babff0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144318f30;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144318f78;
  }
  return;
}



// FUNCTION 140bac040 FUN_140bac040 body=132 status=ok
// SIG undefined FUN_140bac040(void)

void FUN_140bac040(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xf8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144319050;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    FUN_140b9a900(puVar2 + 5,param_1 + 0x28);
    puVar2[0x1e] = *(undefined8 *)(param_1 + 0xf0);
    *puVar2 = &PTR_GetPoolName_144319098;
  }
  return;
}



// FUNCTION 140bac0d0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144319860;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1443198a8;
  }
  return;
}



// FUNCTION 140bac120 FUN_140bac120 body=107 status=ok
// SIG undefined FUN_140bac120(void)

void FUN_140bac120(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144318fc0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_GetPoolName_144319008;
  }
  return;
}



// FUNCTION 140bac190 FUN_140bac190 body=126 status=ok
// SIG undefined FUN_140bac190(void)

void FUN_140bac190(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144319a40;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    *puVar2 = &PTR_GetPoolName_144319a88;
  }
  return;
}



// FUNCTION 140bac210 FUN_140bac210 body=89 status=ok
// SIG undefined FUN_140bac210(void)

void FUN_140bac210(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144318748;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144318790;
  }
  return;
}



// FUNCTION 140bac270 FUN_140bac270 body=76 status=ok
// SIG undefined FUN_140bac270(void)

void FUN_140bac270(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144318ef0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140bac2c0 FUN_140bac2c0 body=74 status=ok
// SIG undefined FUN_140bac2c0(void)

void FUN_140bac2c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318cb0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140bac310 FUN_140bac310 body=84 status=ok
// SIG undefined FUN_140bac310(void)

void FUN_140bac310(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443190e0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144319128;
  }
  return;
}



// FUNCTION 140bac370 FUN_140bac370 body=84 status=ok
// SIG undefined FUN_140bac370(void)

void FUN_140bac370(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318c20;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318c68;
  }
  return;
}



// FUNCTION 140bac3d0 FUN_140bac3d0 body=84 status=ok
// SIG undefined FUN_140bac3d0(void)

void FUN_140bac3d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443188c0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318908;
  }
  return;
}



// FUNCTION 140bac430 FUN_140bac430 body=84 status=ok
// SIG undefined FUN_140bac430(void)

void FUN_140bac430(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318830;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318878;
  }
  return;
}



// FUNCTION 140bac490 FUN_140bac490 body=84 status=ok
// SIG undefined FUN_140bac490(void)

void FUN_140bac490(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443197d0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144319818;
  }
  return;
}



// FUNCTION 140bac4f0 FUN_140bac4f0 body=84 status=ok
// SIG undefined FUN_140bac4f0(void)

void FUN_140bac4f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319740;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144319788;
  }
  return;
}



// FUNCTION 140bac550 FUN_140bac550 body=84 status=ok
// SIG undefined FUN_140bac550(void)

void FUN_140bac550(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443193b0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443193f8;
  }
  return;
}



// FUNCTION 140bac5b0 FUN_140bac5b0 body=84 status=ok
// SIG undefined FUN_140bac5b0(void)

void FUN_140bac5b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319200;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144319248;
  }
  return;
}



// FUNCTION 140bac610 FUN_140bac610 body=84 status=ok
// SIG undefined FUN_140bac610(void)

void FUN_140bac610(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319290;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443192d8;
  }
  return;
}



// FUNCTION 140bac670 FUN_140bac670 body=84 status=ok
// SIG undefined FUN_140bac670(void)

void FUN_140bac670(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319170;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443191b8;
  }
  return;
}



// FUNCTION 140bac6d0 FUN_140bac6d0 body=84 status=ok
// SIG undefined FUN_140bac6d0(void)

void FUN_140bac6d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319320;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144319368;
  }
  return;
}



// FUNCTION 140bac730 FUN_140bac730 body=84 status=ok
// SIG undefined FUN_140bac730(void)

void FUN_140bac730(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443195a0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443195e8;
  }
  return;
}



// FUNCTION 140bac790 FUN_140bac790 body=84 status=ok
// SIG undefined FUN_140bac790(void)

void FUN_140bac790(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318a70;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318ab8;
  }
  return;
}



// FUNCTION 140bac7f0 FUN_140bac7f0 body=84 status=ok
// SIG undefined FUN_140bac7f0(void)

void FUN_140bac7f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318950;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318998;
  }
  return;
}



// FUNCTION 140bac850 FUN_140bac850 body=84 status=ok
// SIG undefined FUN_140bac850(void)

void FUN_140bac850(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318b00;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318b48;
  }
  return;
}



// FUNCTION 140bac8b0 FUN_140bac8b0 body=84 status=ok
// SIG undefined FUN_140bac8b0(void)

void FUN_140bac8b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443189e0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318a28;
  }
  return;
}



// FUNCTION 140bac910 FUN_140bac910 body=84 status=ok
// SIG undefined FUN_140bac910(void)

void FUN_140bac910(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318d40;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318d88;
  }
  return;
}



// FUNCTION 140bac970 FUN_140bac970 body=84 status=ok
// SIG undefined FUN_140bac970(void)

void FUN_140bac970(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319458;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443194a0;
  }
  return;
}



// FUNCTION 140bac9d0 FUN_140bac9d0 body=84 status=ok
// SIG undefined FUN_140bac9d0(void)

void FUN_140bac9d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318e60;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318ea8;
  }
  return;
}



// FUNCTION 140baca30 CreateCopy body=91 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,AFlarePlayerController,TTypeWrapper<void>___cdecl(void),enum_EFlareCombatTactic::Type>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318dd0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318e18;
  }
  return;
}



// FUNCTION 140baca90 FUN_140baca90 body=84 status=ok
// SIG undefined FUN_140baca90(void)

void FUN_140baca90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318b90;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144318bd8;
  }
  return;
}



// FUNCTION 140bacaf0 FUN_140bacaf0 body=84 status=ok
// SIG undefined FUN_140bacaf0(void)

void FUN_140bacaf0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443196b0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443196f8;
  }
  return;
}



// FUNCTION 140bacb50 FUN_140bacb50 body=84 status=ok
// SIG undefined FUN_140bacb50(void)

void FUN_140bacb50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443199b0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1443199f8;
  }
  return;
}



// FUNCTION 140bacbb0 FUN_140bacbb0 body=74 status=ok
// SIG undefined FUN_140bacbb0(void)

void FUN_140bacbb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144318cf0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140bacc00 FUN_140bacc00 body=74 status=ok
// SIG undefined FUN_140bacc00(void)

void FUN_140bacc00(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319670;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140bacc50 FUN_140bacc50 body=74 status=ok
// SIG undefined FUN_140bacc50(void)

void FUN_140bacc50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319630;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140bacca0 FUN_140bacca0 body=74 status=ok
// SIG undefined FUN_140bacca0(void)

void FUN_140bacca0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144319560;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140baccf0 FUN_140baccf0 body=74 status=ok
// SIG undefined FUN_140baccf0(void)

void FUN_140baccf0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1443187f0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140bacd40 FUN_140bacd40 body=318 status=ok
// SIG undefined FUN_140bacd40(void)

void FUN_140bacd40(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 local_res8 [4];
  
  local_res8[0] = 0;
  if (*(undefined2 **)(param_1 + 0x448) != (undefined2 *)0x0) {
    local_res8[0] = **(undefined2 **)(param_1 + 0x448);
    goto LAB_140bace02;
  }
  lVar4 = FUN_14244f490(param_1,0);
  if (lVar4 == 0) {
LAB_140bacdbc:
    plVar2 = (longlong *)ANavVolume::GetPrivateStaticClass();
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar4 = plVar2[0x1f];
    }
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140bacdbc;
    lVar4 = FUN_140cff230(lVar4);
    if (lVar4 == 0) goto LAB_140bacdbc;
  }
  FUN_140d3ac40(lVar4,local_res8);
  FUN_140bec2c0(param_1,local_res8);
LAB_140bace02:
  if (((*(char *)(param_1 + 0x318) == '\0') ||
      (((*(int *)(param_1 + 0x220) != 0 && (*(int *)(param_1 + 0x220) != 3)) ||
       (*(int *)(param_1 + 0x300) == 0)))) &&
     ((*(longlong *)(param_1 + 0x218) == 0 && (*(char *)(param_1 + 0x440) == '\0')))) {
    FUN_140ba4250(param_1,local_res8,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x1088);
  if (lVar4 == 0) {
    lVar3 = operator_new(0x1a8);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = FUN_140d64540(lVar3);
    }
    *(longlong *)(param_1 + 0x1088) = lVar4;
  }
  FUN_140d74dd0(lVar4);
  return;
}



// FUNCTION 140bace80 FUN_140bace80 body=1199 status=ok
// SIG undefined FUN_140bace80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bace80(longlong param_1,undefined2 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_1d8 [32];
  undefined2 local_1b8 [2];
  undefined4 local_1b4;
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190 [5];
  undefined4 local_168;
  undefined4 local_164;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  int local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118 [2];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined **local_c8 [5];
  longlong local_a0 [4];
  longlong local_80;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  puVar8 = (undefined8 *)0x0;
  local_1b4 = 0;
  *(undefined1 *)(param_1 + 0xe98) = 0;
  puVar4 = (undefined8 *)FName::FName(local_108,L"SPARK",1);
  FUN_1404d0c50(&local_160,*puVar4);
  if (local_160 != (longlong *)0x0) {
    local_1a0 = 0x11f;
    lVar5 = (**(code **)(*local_160 + 0x10))(local_160,0x11f);
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(lVar5 + 0xa0);
      bVar10 = plVar6 == (longlong *)0x0;
      if (bVar10) {
        local_190[0] = 0;
        plVar6 = local_190;
        local_190[1] = 0;
      }
      else {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6,local_e8);
      }
      local_190[4] = *plVar6;
      *plVar6 = 0;
      local_168 = (int)plVar6[1];
      local_164 = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar6[1] = 0;
      if ((bVar10) && (local_190[0] != 0)) {
        FMemory::Free();
      }
      if ((!bVar10) && (local_e8[0] != 0)) {
        FMemory::Free();
      }
      local_1b8[0] = *param_2;
      if ((char)((ushort)local_1b8[0] >> 8) != '\0') {
        local_198 = 0;
        plVar6 = (longlong *)FUN_1404b0000(&local_198);
        if (plVar6 != (longlong *)0x0) {
          puVar4 = (undefined8 *)(**(code **)(*plVar6 + 8))(plVar6,local_100);
          FUN_140bbbda0(param_1,local_148,*puVar4);
          if (0 < local_140) {
            local_1b8[0] = DAT_146297e34;
            *(undefined1 *)(param_1 + 0xe98) = 1;
          }
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_148);
        }
      }
      FUN_140da8910(local_c8,local_1b8);
      FUN_1404ab4c0(local_c8,DAT_14686a630,local_190 + 4,2);
      if (1 < *(int *)(param_3 + 8)) {
        puVar4 = (undefined8 *)FName::FName(local_f8,L"FRIENDPASSCODE",1);
        FUN_1404ab4c0(local_c8,*puVar4,param_3,2);
      }
      local_1b4 = 0;
      FUN_1404a9610(lVar5 + 0x28,DAT_14686a578,&local_1b4);
      FUN_1404ab210(local_c8,DAT_14686a578,&local_1b4,2);
      FUN_140bb86f0(param_1,&local_1b0);
      iVar9 = local_1a8;
      if (0 < local_1a8) {
        plVar6 = (longlong *)(param_1 + 0xe38);
        if (plVar6 != local_d8) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          *plVar6 = 0;
          *(undefined8 *)(param_1 + 0xe40) = 0;
        }
        puVar4 = local_1b0;
        local_190[2] = 0;
        local_190[3] = 0;
        local_128 = *local_1b0;
        local_120 = (longlong *)local_1b0[1];
        if (local_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_120 + 1) = (int)local_120[1] + 1;
          UNLOCK();
          iVar9 = local_1a8;
        }
        FString::FString(local_118,local_190 + 2);
        plVar6 = (longlong *)*puVar4;
        local_138 = (**(code **)(*plVar6 + 8))(plVar6,local_f0);
        local_130 = &local_128;
        FUN_140b95120(param_1 + 0xd80,local_150,&local_138,0);
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        plVar6 = local_120;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_120 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar4 = local_1b0;
          iVar9 = local_1a8;
          if ((int)lVar5 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar4 = local_1b0;
            iVar9 = local_1a8;
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
              puVar4 = local_1b0;
              iVar9 = local_1a8;
            }
          }
        }
        if (local_190[2] != 0) {
          FMemory::Free();
        }
        puVar7 = (undefined8 *)operator_new(0xf0);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = 0;
          *(undefined4 *)(puVar7 + 2) = 0;
          *(undefined4 *)(puVar7 + 3) = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          *puVar7 = &PTR_FUN_144317a10;
          puVar7[0xd] = 0;
          *(int *)(puVar7 + 0xe) = iVar9;
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7 + 0xd,iVar9,0);
          puVar8 = (undefined8 *)puVar7[0xd];
          do {
            *puVar8 = *puVar4;
            lVar5 = puVar4[1];
            puVar8[1] = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            puVar8 = puVar8 + 2;
            puVar4 = puVar4 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          FUN_1404e8890(puVar7 + 0xf,local_c8);
          puVar8 = puVar7;
        }
        FUN_140be4f80(param_1,puVar8);
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1b0);
      local_c8[0] = &PTR_FUN_143f769a0;
      local_58 = 0;
      if (local_60 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(local_a0,0);
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
      if (local_190[4] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar6 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  return;
}



// FUNCTION 140bad330 FUN_140bad330 body=928 status=ok
// SIG undefined FUN_140bad330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bad330(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  uVar13 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_98 = 0;
  local_90 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0x40) < puVar9) {
    uVar10 = uVar13;
  }
  if (uVar10 != 0) {
    do {
      lVar7 = FUN_142547b50(*puVar9,local_68);
      plVar3 = *(longlong **)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_68[0] = &PTR_FUN_143f740c8;
      if (local_50 != 0) {
        FMemory::Free();
      }
      plVar8 = local_58;
      local_68[0] = &PTR_FUN_143f73d18;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_58)(local_58);
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
      uVar5 = local_90;
      if (lVar7 == 0) {
LAB_140bad488:
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar3)(plVar3);
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
      else {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar12 = (longlong)(int)local_90;
        iVar6 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar6);
        if (local_90._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,uVar5 & 0xffffffff);
        }
        plVar8 = (longlong *)(lVar12 * 0x10 + local_98);
        *plVar8 = lVar7;
        plVar8[1] = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar3 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          goto LAB_140bad488;
        }
      }
      puVar9 = puVar9 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar10);
  }
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x430) == 0) {
    FUN_142d5b8f0(param_1);
  }
  uStack_70 = 0;
  local_78 = FUN_140bd4160;
  plVar3 = (longlong *)(param_1 + 0x5f0);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_78._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_70;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_6c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar7;
    *plVar8 = (longlong)&PTR_FUN_1442cc168;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res18);
    iVar6 = *(int *)(param_1 + 0x5f8);
    uVar11 = *puVar9;
    *(int *)(param_1 + 0x5f8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x5fc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar6);
    }
    lVar7 = *plVar3;
    *(longlong **)(lVar7 + (longlong)iVar6 * 0x10) = plVar8;
    *(undefined4 *)(lVar7 + 8 + (longlong)iVar6 * 0x10) = 3;
  }
  pvVar4 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  *(undefined8 *)(param_1 + 0x200) = uVar11;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar10 * 8) + 0x38) < DAT_14686a6b4) &&
     (_Init_thread_header(&DAT_14686a6b4), DAT_14686a6b4 == -1)) {
    DAT_146298600 = (void *)0x0;
    _DAT_146298608 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298600,0);
    FGenericPlatformString::Memcpy(DAT_146298600,L"2cf9a2ba9e68496ebefefc9013f8b389",0x42);
    atexit((_func_5014 *)&LAB_143e4da70);
    _Init_thread_footer(&DAT_14686a6b4);
  }
  pvVar4 = DAT_146298600;
  lVar7 = (longlong)DAT_146298608;
  local_88 = (void *)0x0;
  local_80 = DAT_146298608;
  if (DAT_146298608 == 0) {
    local_7c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,_DAT_146298608 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_88,pvVar4,lVar7 * 2);
  }
  FUN_140db66c0(plVar3,param_1,&local_88,&local_98,param_2);
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_98);
  return;
}



// FUNCTION 140bad6d0 FUN_140bad6d0 body=332 status=ok
// SIG undefined FUN_140bad6d0(void)

undefined8 * FUN_140bad6d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144319540;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140bad820 FUN_140bad820 body=332 status=ok
// SIG undefined FUN_140bad820(void)

undefined8 * FUN_140bad820(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144319550;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140bad970 FUN_140bad970 body=332 status=ok
// SIG undefined FUN_140bad970(void)

undefined8 * FUN_140bad970(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144318d30;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140badac0 FUN_140badac0 body=332 status=ok
// SIG undefined FUN_140badac0(void)

undefined8 * FUN_140badac0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1443194f8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140badc10 FUN_140badc10 body=332 status=ok
// SIG undefined FUN_140badc10(void)

undefined8 * FUN_140badc10(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1443194e8;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140badd60 FUN_140badd60 body=332 status=ok
// SIG undefined FUN_140badd60(void)

undefined8 * FUN_140badd60(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144319508;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140badeb0 FUN_140badeb0 body=507 status=ok
// SIG undefined FUN_140badeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140badeb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((((((int)param_1[0x21f] < 1) && ((char)param_1[0x229] == '\0')) && ((int)param_1[0x22b] < 1))
      && ((char)param_1[0x232] == '\0')) || (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 == 0))
  {
    *(undefined1 *)(param_1 + 0x27d) = 4;
    DAT_1468c217e = 1;
  }
  else {
    local_98 = FUN_140badeb0;
    uStack_90 = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    FUN_142880af0(uVar3,&local_88);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140bae0b0 FUN_140bae0b0 body=654 status=ok
// SIG undefined FUN_140bae0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bae0b0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x27d) = 4;
    DAT_1468c217e = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x27d) = 1;
    lVar3 = UGameInstance::GetGameViewportClient(param_1);
    if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 200), plVar4 != (longlong *)0x0)) {
      LOCK();
      iVar2 = (int)plVar4[1];
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(plVar4 + 1) = 0;
        iVar2 = 0;
      }
      UNLOCK();
      while (!bVar7) {
        LOCK();
        bVar7 = iVar2 == (int)plVar4[1];
        if (bVar7) {
          *(int *)(plVar4 + 1) = iVar2 + 1;
        }
        UNLOCK();
        if (bVar7) {
          if (plVar4 != (longlong *)0x0) {
            if (*(longlong *)(lVar3 + 0xc0) != 0) {
              SWindow::HideWindow();
            }
            LOCK();
            plVar6 = plVar4 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
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
          break;
        }
        LOCK();
        iVar2 = (int)plVar4[1];
        bVar7 = iVar2 == 0;
        if (bVar7) {
          *(int *)(plVar4 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
      }
    }
    FUN_141890fb0(DAT_1469f4590,2);
    local_a0 = 0;
    local_98 = FUN_140bae340;
    uStack_90 = 0;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_8c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,&local_a0,&local_88,0x40000000);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar3 = FMemory::Realloc(plVar4,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140bae340 FUN_140bae340 body=41 status=ok
// SIG undefined FUN_140bae340(void)

void FUN_140bae340(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x13e8) = 2;
  FUN_140be97d0();
  *(undefined1 *)(param_1 + 0x13e8) = 3;
  FUN_140badeb0(param_1);
  return;
}



// FUNCTION 140bae370 FUN_140bae370 body=12 status=ok
// SIG undefined FUN_140bae370(void)

void FUN_140bae370(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1443170a8;
  return;
}


