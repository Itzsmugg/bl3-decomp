// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140cc07f0 FUN_140cc07f0 body=231 status=ok
// SIG undefined FUN_140cc07f0(void)

undefined1 FUN_140cc07f0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = FUN_142efbe80();
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_14686c690 == *param_2) {
      return 1;
    }
    if (DAT_14686c6d0 == *param_2) {
      fVar4 = (float)FUN_1420ffc90(*(undefined8 *)(param_1 + 0x48));
      fVar4 = fVar4 - 1.0;
    }
    else {
      if (DAT_14686c6c8 != *param_2) {
        return uVar1;
      }
      fVar4 = (float)FUN_1420ffc90(*(undefined8 *)(param_1 + 0x48));
      fVar4 = fVar4 + 1.0;
    }
    uVar3 = (int)ROUND(fVar4 + fVar4 + 0.5) >> 1;
    uVar2 = (uint)*(ushort *)(param_1 + 0xfc);
    if (((int)(uint)*(ushort *)(param_1 + 0xfc) <= (int)uVar3) &&
       (uVar2 = (uint)*(ushort *)(param_1 + 0xfe),
       (int)uVar3 < (int)(uint)*(ushort *)(param_1 + 0xfe))) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xf8) = uVar2;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1421366c0();
    }
  }
  return uVar1;
}



// FUNCTION 140cc08e0 FUN_140cc08e0 body=439 status=ok
// SIG undefined FUN_140cc08e0(void)

void FUN_140cc08e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  
  if (param_2 != 0) {
    lVar3 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_2 + 0x2e8) == 0) {
        cVar2 = '\x02';
        lVar3 = 0;
      }
      else {
        cVar2 = UCheckBox::GetCheckedState();
        lVar3 = *(longlong *)(param_2 + 0x2e8);
      }
      if (lVar3 != 0) {
        UCheckBox::SetCheckedState(lVar3,cVar2 != '\x01');
      }
      uVar4 = 0;
      if ((longlong)*(int *)(param_1 + 0x348) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x340) + 8 + (longlong)(int)uVar4 * 0x18) ==
              param_2) {
            *(bool *)(*(longlong *)(param_1 + 0x340) + 0x10 + (longlong)(int)uVar4 * 0x18) =
                 cVar2 != '\x01';
            FUN_140cc6b20(param_1);
            FUN_140cc6e40(param_1);
            FUN_140cc70d0();
            fVar5 = (float)(longlong)uVar4;
            if ((longlong)uVar4 < 0) {
              fVar5 = fVar5 + 1.8446744e+19;
            }
            fVar5 = _guard_xfg_dispatch_icall_nop(2.0,fVar5);
            if (cVar2 == '\x01') {
              lVar3 = 0;
              if ((9.223372e+18 <= fVar5) && (fVar5 = fVar5 - 9.223372e+18, fVar5 < 9.223372e+18)) {
                lVar3 = -0x8000000000000000;
              }
              uVar4 = 0x7fffffffffffffffU - ((longlong)fVar5 + lVar3) &
                      *(ulonglong *)(param_1 + 0x380);
            }
            else {
              lVar3 = 0;
              if ((9.223372e+18 <= fVar5) && (fVar5 = fVar5 - 9.223372e+18, fVar5 < 9.223372e+18)) {
                lVar3 = -0x8000000000000000;
              }
              uVar4 = (longlong)fVar5 + lVar3 | *(ulonglong *)(param_1 + 0x380);
            }
            *(ulonglong *)(param_1 + 0x380) = uVar4;
            FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)(longlong)*(int *)(param_1 + 0x348));
      }
    }
  }
  return;
}



// FUNCTION 140cc0ab0 FUN_140cc0ab0 body=173 status=ok
// SIG undefined FUN_140cc0ab0(void)

void FUN_140cc0ab0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x3a8) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3a8) + 0x2f8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x288))(plVar1,2);
  }
  if (param_2 != 0) {
    lVar3 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar1 = *(longlong **)(param_2 + 0x2f8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1,0);
      }
      *(longlong *)(param_1 + 0x3a8) = param_2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  return;
}



// FUNCTION 140cc0b60 FUN_140cc0b60 body=430 status=ok
// SIG undefined FUN_140cc0b60(void)

void FUN_140cc0b60(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  if (param_2 != 0) {
    lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_2 + 0x2e8) == 0) {
        cVar2 = '\x02';
        lVar4 = 0;
      }
      else {
        cVar2 = UCheckBox::GetCheckedState();
        lVar4 = *(longlong *)(param_2 + 0x2e8);
      }
      if (lVar4 != 0) {
        UCheckBox::SetCheckedState(lVar4,cVar2 != '\x01');
      }
      uVar5 = 0;
      if (0 < *(int *)(param_1 + 0x378)) {
        lVar4 = *(longlong *)(param_1 + 0x370);
        uVar7 = uVar5;
        do {
          if (*(longlong *)(lVar4 + 0x40) == param_2) {
            *(bool *)(lVar4 + 0x48) = cVar2 != '\x01';
            if (*(longlong *)(param_1 + 0x328) != 0) {
              cVar3 = UPanelWidget::HasChild();
              lVar4 = 0x398;
              if (cVar3 != '\0') goto LAB_140cc0c54;
            }
            lVar4 = 0x3a0;
LAB_140cc0c54:
            fVar8 = _guard_xfg_dispatch_icall_nop(2.0,(float)(int)uVar7);
            if (cVar2 == '\x01') {
              lVar6 = 0;
              if ((9.223372e+18 <= fVar8) && (fVar8 = fVar8 - 9.223372e+18, fVar8 < 9.223372e+18)) {
                lVar6 = -0x8000000000000000;
              }
              uVar5 = 0x7fffffffffffffffU - ((longlong)fVar8 + lVar6) &
                      *(ulonglong *)(param_1 + lVar4);
            }
            else {
              lVar6 = 0;
              if ((9.223372e+18 <= fVar8) && (fVar8 = fVar8 - 9.223372e+18, fVar8 < 9.223372e+18)) {
                lVar6 = -0x8000000000000000;
              }
              uVar5 = (longlong)fVar8 + lVar6 | *(ulonglong *)(param_1 + lVar4);
            }
            *(ulonglong *)(param_1 + lVar4) = uVar5;
            FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
            return;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x50;
        } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x378));
      }
    }
  }
  return;
}



// FUNCTION 140cc0d10 FUN_140cc0d10 body=55 status=ok
// SIG undefined FUN_140cc0d10(void)

void FUN_140cc0d10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142efd340();
  if (*(char *)(param_1 + 0x5e0) == '\0') {
    *(undefined8 *)(param_1 + 0x5d8) = param_3;
    *(undefined1 *)(param_1 + 0x5e0) = 1;
  }
  return;
}



// FUNCTION 140cc0da0 FUN_140cc0da0 body=167 status=ok
// SIG undefined FUN_140cc0da0(void)

void FUN_140cc0da0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x630) != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x630) + 0x990);
  }
  if (plVar5 != (longlong *)0x0) {
    uVar2 = AGFireballProjectile::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
    if (lVar3 != 0) {
      lVar3 = FUN_1409ab3b0(lVar3,param_2);
      if (lVar3 != 0) {
        lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
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
          FUN_140cc69f0(param_1,lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cc0e50 FUN_140cc0e50 body=72 status=ok
// SIG undefined FUN_140cc0e50(void)

void FUN_140cc0e50(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)ROUND(param_2 + param_2 + 0.5) >> 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x3b4);
  if (((int)(uint)*(ushort *)(param_1 + 0x3b4) <= (int)uVar2) &&
     (uVar1 = (uint)*(ushort *)(param_1 + 0x3b6),
     (int)uVar2 < (int)(uint)*(ushort *)(param_1 + 0x3b6))) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x3b0) = uVar1;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1421366c0();
    return;
  }
  return;
}



// FUNCTION 140cc0ea0 FUN_140cc0ea0 body=162 status=ok
// SIG undefined FUN_140cc0ea0(void)

void FUN_140cc0ea0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa00);
  puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0xa08) * 5;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 5) {
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x978) != 0)) {
      FUN_142d9e0d0(*(longlong *)(param_2 + 0x978),*puVar2,1,puVar2[2],*(undefined4 *)(puVar2 + 3),4
                    ,1,1,puVar2[4],0,0,1,0);
    }
  }
  return;
}



// FUNCTION 140cc0f50 FUN_140cc0f50 body=262 status=ok
// SIG undefined FUN_140cc0f50(void)

void FUN_140cc0f50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  
  cVar7 = FUN_140c6c890();
  if (cVar7 != '\0') {
    iVar4 = *(int *)(param_1 + 0x198);
    while (7 < iVar4) {
      TArray<FOnlineLeaderboardsInterfaceEOS::FDeferredQueryLeaderboardRanksRequest,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(param_1 + 400,iVar4 + -1,1,1);
      iVar4 = *(int *)(param_1 + 0x198);
    }
    puVar3 = (undefined8 *)(param_1 + 400);
    iVar4 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar4 + 1;
    if (*(int *)(param_1 + 0x19c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (puVar3,iVar4);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*puVar3 + 0x18),(void *)*puVar3,(longlong)iVar4 * 0x18);
    puVar3 = (undefined8 *)*puVar3;
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    lVar5 = param_2[2];
    puVar3[2] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    FUN_140cd8b10(param_1);
  }
  plVar6 = (longlong *)param_2[2];
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
  return;
}



// FUNCTION 140cc1060 FUN_140cc1060 body=313 status=ok
// SIG undefined FUN_140cc1060(void)

void FUN_140cc1060(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_18;
  int local_10;
  
  if ((*(char *)((longlong)param_1 + 0x702) == '\0') ||
     (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 == 0)) {
    return;
  }
  UWorld::GetPlayerControllerIterator(lVar3,&local_18);
  do {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    plVar4 = (longlong *)FWeakObjectPtr::Get();
    if (plVar4 != (longlong *)0x0) {
      lVar3 = FUN_14145f370();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0')) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686d788) &&
           (_Init_thread_header(&DAT_14686d788), DAT_14686d788 == -1)) {
          FUN_142fde340(&DAT_14686d730);
          atexit((_func_5014 *)&LAB_143e511d0);
          _Init_thread_footer(&DAT_14686d788);
        }
        FUN_142fe4c80(&DAT_14686d730,plVar4);
        return;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}



// FUNCTION 140cc11a0 FUN_140cc11a0 body=38 status=ok
// SIG undefined FUN_140cc11a0(void)

void FUN_140cc11a0(longlong param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x5f8);
  uStack_14 = *(undefined4 *)(param_1 + 0x5fc);
  uStack_10 = *(undefined4 *)(param_1 + 0x600);
  uStack_c = *(undefined4 *)(param_1 + 0x604);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x5b8,&local_18);
  return;
}



// FUNCTION 140cc11d0 FUN_140cc11d0 body=163 status=ok
// SIG undefined FUN_140cc11d0(void)

void FUN_140cc11d0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x470);
  puVar1 = puVar5 + *(int *)(param_1 + 0x478);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    lVar3 = (**(code **)(*(longlong *)*puVar5 + 0x670))();
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
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
        FUN_14145dbe0(lVar3,*(undefined8 *)(param_1 + 0x6f8));
      }
    }
  }
  return;
}



// FUNCTION 140cc1280 FUN_140cc1280 body=151 status=ok
// SIG undefined FUN_140cc1280(void)

void FUN_140cc1280(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x470);
  puVar1 = puVar5 + *(int *)(param_1 + 0x478);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    lVar3 = (**(code **)(*(longlong *)*puVar5 + 0x670))();
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
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
        FUN_140d0cdd0(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140cc1320 FUN_140cc1320 body=200 status=ok
// SIG undefined FUN_140cc1320(void)

void FUN_140cc1320(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  int local_10;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    UWorld::GetPlayerControllerIterator(lVar2,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar2 = FWeakObjectPtr::Get();
      if (lVar2 != 0) {
        lVar3 = FUN_14145f370();
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
          FUN_140d02ee0();
        }
      }
      local_10 = local_10 + 1;
    }
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
            (param_1 + 0xcb,(int)param_1[0xdb]);
  return;
}



// FUNCTION 140cc13f0 FUN_140cc13f0 body=99 status=ok
// SIG undefined FUN_140cc13f0(void)

void FUN_140cc13f0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = FUN_1422312c0(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bce120(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140cc1460 FUN_140cc1460 body=71 status=ok
// SIG undefined FUN_140cc1460(void)

void FUN_140cc1460(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x145,0);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::PopulateStreamingLevelsToConsider(uVar2);
    return;
  }
  return;
}



// FUNCTION 140cc14b0 FUN_140cc14b0 body=351 status=ok
// SIG undefined FUN_140cc14b0(void)

void FUN_140cc14b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [4];
  undefined4 local_resc;
  
  lVar1 = param_1 + 0x670;
  uVar7 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar1);
  uVar5 = FUN_1407c3030(lVar1);
  bVar4 = false;
  *(int *)(param_1 + 0x6ac) = *(int *)(param_1 + 0x6ac) + 1;
  iVar8 = *(int *)(param_1 + 0x6ac);
  iVar9 = *(int *)(param_1 + 0x6a0) + -1;
  lVar11 = (longlong)iVar9;
  if (-1 < iVar9) {
    lVar10 = lVar11 << 4;
    bVar4 = false;
    do {
      lVar2 = *(longlong *)(param_1 + 0x698);
      if ((*(int *)(lVar10 + 8 + lVar2) == 0) ||
         (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_140cc1534:
        bVar4 = true;
      }
      else {
        cVar6 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar5,uVar7);
        if (cVar6 == '\0') goto LAB_140cc1534;
      }
      lVar10 = lVar10 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    iVar8 = *(int *)(param_1 + 0x6ac);
  }
  *(int *)(param_1 + 0x6ac) = iVar8 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x698),0);
  }
  uVar7 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar1);
  cVar6 = FUN_1407c3030(lVar1);
  local_res8[0] = cVar6 != '\0';
  local_resc = uVar7;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x6b0,local_res8);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    lVar11 = FUN_1422312c0(param_1);
    if (lVar11 != 0) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar7 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar1);
        uVar5 = FUN_1407c3030(lVar1);
        FUN_140bd67c0(lVar11,uVar5,uVar7);
      }
    }
  }
  return;
}



// FUNCTION 140cc1610 FUN_140cc1610 body=190 status=ok
// SIG undefined FUN_140cc1610(void)

void FUN_140cc1610(longlong *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  int local_10;
  
  if ((param_2 != *(int *)((longlong)param_1 + 0xa44)) &&
     (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar2,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar2 = FWeakObjectPtr::Get();
      if (lVar2 != 0) {
        lVar3 = FUN_14145f370();
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
          FUN_140d18c40();
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140cc16e0 FUN_140cc16e0 body=108 status=ok
// SIG undefined FUN_140cc16e0(void)

void FUN_140cc16e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x638) != '\0') && (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
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
      FUN_140bdc1c0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140cc1750 FUN_140cc1750 body=128 status=ok
// SIG undefined FUN_140cc1750(void)

void FUN_140cc1750(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x700) != '\0') && (lVar3 = FUN_1422312c0(), lVar3 != 0)) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_1411d52a0(lVar3 + 0x7a0), cVar2 != '\0')) {
      FUN_1411db940(lVar3 + 0x7a0);
      return;
    }
  }
  return;
}



// FUNCTION 140cc17f0 FUN_140cc17f0 body=49 status=ok
// SIG undefined FUN_140cc17f0(void)

void FUN_140cc17f0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_142dd8dc0(*(longlong *)(param_1 + 0x540),*(undefined8 *)(param_1 + 0x548));
    return;
  }
  return;
}



// FUNCTION 140cc1830 FUN_140cc1830 body=77 status=ok
// SIG undefined FUN_140cc1830(void)

void FUN_140cc1830(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UGameUserSettings::SetFullscreenMode(param_1,param_4);
  UGameUserSettings::SetScreenResolution(param_1,CONCAT44(param_3,param_2));
  FUN_142471ee0(param_1,1);
  return;
}



// FUNCTION 140cc1880 FUN_140cc1880 body=372 status=ok
// SIG undefined FUN_140cc1880(void)

void FUN_140cc1880(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0x630) == 0) {
    return;
  }
  lVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x630) + 0x980) + 0x10))();
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_1414d9130();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (*(longlong *)(lVar5 + 0xf48) == 0) {
    return;
  }
  FText::FText(local_38);
  if (param_2 == '\x01') {
    lVar6 = lVar5 + 0xb90;
  }
  else if (param_2 == '\x02') {
    lVar6 = lVar5 + 0xba8;
  }
  else if (param_2 == '\x03') {
    lVar6 = lVar5 + 0xbd8;
  }
  else if (param_2 == '\x04') {
    lVar6 = lVar5 + 0xbf0;
  }
  else {
    if (param_2 != '\x05') goto LAB_140cc1965;
    lVar6 = lVar5 + 0xbc0;
  }
  FText::operator=(local_38,lVar6);
LAB_140cc1965:
  lVar6 = *(longlong *)(lVar5 + 0xf48);
  uVar7 = FText::FText(local_20,local_38);
  FUN_140c70250(param_1,*(undefined8 *)(lVar5 + 0xf48),uVar7,*(undefined4 *)(lVar6 + 0x48),0,0);
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
  return;
}



// FUNCTION 140cc1a00 FUN_140cc1a00 body=70 status=ok
// SIG undefined FUN_140cc1a00(void)

void FUN_140cc1a00(void)

{
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *in_stack_00000028;
  local_10 = *(undefined4 *)(in_stack_00000028 + 1);
  FUN_140cdc770(0x42c80000,0x455ac00042c80000,&local_18,in_stack_00000030);
  return;
}



// FUNCTION 140cc1a50 FUN_140cc1a50 body=522 status=ok
// SIG undefined FUN_140cc1a50(void)

void FUN_140cc1a50(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 local_res10;
  longlong local_res18 [2];
  int local_38;
  int local_34;
  longlong local_30;
  
  if (param_3 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakCharacterAnimInstance::OnWeaponModeChanged_Native",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_3 + 0x510,param_1,local_res10);
  }
  FUN_141405c30(param_1,param_2,param_3);
  if (param_2 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakCharacterAnimInstance::OnWeaponModeChanged_Native",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(local_res18,pwVar3 + 2,1);
    plVar9 = (longlong *)(param_2 + 0x510);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res18[0];
    local_res10 = 0;
    if ((local_res18[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    piVar7 = (int *)*plVar9;
    iVar1 = *(int *)(param_2 + 0x518);
    for (piVar8 = piVar7; piVar8 != piVar7 + (longlong)iVar1 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar8), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_30)) {
        if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_140cc1c2d;
        break;
      }
    }
    iVar1 = *(int *)(param_2 + 0x518);
    *(int *)(param_2 + 0x518) = iVar1 + 1;
    if (*(int *)(param_2 + 0x51c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    piVar7 = (int *)((longlong)iVar1 * 0x10 + *plVar9);
    *piVar7 = local_38;
    piVar7[1] = local_34;
    *(longlong *)(piVar7 + 2) = local_30;
LAB_140cc1c2d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    *(undefined8 *)(param_1 + 0x63c) = 0;
    *(undefined8 *)(param_1 + 0x634) = 0;
    *(undefined1 *)(param_1 + 0x645) = 1;
  }
  return;
}



// FUNCTION 140cc1c60 thunk_FUN_141405c80 body=5 status=ok
// SIG undefined thunk_FUN_141405c80(void)

void thunk_FUN_141405c80(void)

{
  FUN_141405c80();
  return;
}



// FUNCTION 140cc1c70 FUN_140cc1c70 body=221 status=ok
// SIG undefined FUN_140cc1c70(void)

undefined8 FUN_140cc1c70(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x50))) && (0 < param_3))
  {
    iVar3 = *(int *)(param_1 + 0x50);
    plVar1 = (longlong *)(param_1 + 0x48);
    if (param_2 < iVar3) {
      iVar5 = param_2 + 1;
      bVar2 = *(byte *)((longlong)param_2 + *plVar1);
      if (5 < bVar2) {
        if (bVar2 < 8) {
          if (((-1 < iVar5) && (iVar5 < iVar3)) && ((-1 < param_2 + 4 && (param_2 + 4 < iVar3)))) {
            *(int *)((longlong)iVar5 + *plVar1) = param_3;
          }
          return 1;
        }
        if ((bVar2 == 0x4e) && (uVar4 = FUN_140cb62c0(plVar1,param_2), 7 < uVar4)) {
          if (param_2 < *(int *)(param_1 + 0x50)) {
            *(undefined1 *)((longlong)param_2 + *plVar1) = 6;
            param_2 = iVar5;
          }
          if (param_2 < 0) {
            return 1;
          }
          if (*(int *)(param_1 + 0x50) <= param_2) {
            return 1;
          }
          if (param_2 + 3 < 0) {
            return 1;
          }
          if (*(int *)(param_1 + 0x50) <= param_2 + 3) {
            return 1;
          }
          *(int *)((longlong)param_2 + *plVar1) = param_3;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140cc1d50 FUN_140cc1d50 body=350 status=ok
// SIG undefined FUN_140cc1d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140cc1d50(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  ulonglong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = local_58 & 0xffffffff00000000;
  uVar4 = local_38;
  if ((((param_1 == 0) || (param_3 < 0)) || (*(int *)(param_1 + 0x50) <= param_3)) ||
     (*(int *)(param_1 + 0x50) <= param_3)) goto LAB_140cc1e95;
  lVar2 = *(longlong *)(param_1 + 0x48);
  iVar8 = param_3 + 1;
  uVar4 = (ulonglong)param_3;
  if (*(char *)(uVar4 + lVar2) != '\x1b') goto LAB_140cc1e95;
  uVar4 = 0;
  local_48 = 0;
  local_40 = 0;
  bVar10 = false;
  if ((iVar8 < 0) || (bVar10 = false, *(int *)(param_1 + 0x50) <= iVar8)) {
LAB_140cc1e36:
    bVar3 = false;
  }
  else {
    lVar5 = (longlong)iVar8;
    iVar8 = param_3 + 0xd;
    local_58 = CONCAT44(*(undefined4 *)(lVar5 + 8 + lVar2),(int)*(undefined8 *)(lVar5 + lVar2));
    local_48 = local_58;
    local_40 = 1;
    uVar6 = FName::ToString(&local_48,&local_58);
    bVar10 = true;
    local_68 = 0xffffffff;
    uVar4 = FUN_141592950(uVar6,L"ExecuteUbergraph",1,0);
    if ((int)uVar4 == -1) goto LAB_140cc1e36;
    bVar3 = true;
  }
  if ((bVar10) && (local_58 != 0)) {
    uVar4 = FMemory::Free();
  }
  if (((bVar3) && (-1 < iVar8)) && (iVar1 = *(int *)(param_1 + 0x50), iVar8 < iVar1)) {
    uVar4 = (ulonglong)iVar8;
    iVar9 = iVar8 + 1;
    if (*(char *)(*(longlong *)(param_1 + 0x48) + uVar4) == '\x1d') {
      uVar4 = (ulonglong)(uint7)(int7)(int3)((uint)iVar8 >> 8) << 8;
      if (iVar9 < 0) {
        return uVar4;
      }
      if (iVar1 <= iVar9) {
        return uVar4;
      }
      if (iVar8 + 4 < 0) {
        return uVar4;
      }
      if (iVar1 <= iVar8 + 4) {
        return uVar4;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 + *(longlong *)(param_1 + 0x48));
      *puVar7 = param_2;
      return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
    }
  }
LAB_140cc1e95:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140cc1eb0 FUN_140cc1eb0 body=472 status=ok
// SIG undefined FUN_140cc1eb0(void)

ulonglong FUN_140cc1eb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = param_5;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    uVar5 = (ulonglong)param_6;
    if ((-1 < param_6) && (param_6 < *(int *)(param_1 + 0x50))) {
      iVar3 = *(int *)(param_1 + 0x50);
      if (param_6 < iVar3) {
        lVar4 = *(longlong *)(param_1 + 0x48);
        iVar6 = param_6 + 1;
        if (((*(char *)(uVar5 + lVar4) == '\x19') && (-1 < iVar6)) && (iVar6 < iVar3)) {
          uVar5 = (ulonglong)iVar6;
          iVar6 = param_6 + 2;
          if ((((*(char *)(lVar4 + uVar5) == ' ') && (-1 < iVar6)) && (iVar6 < iVar3)) &&
             ((iVar1 = param_6 + 9, -1 < iVar1 && (iVar1 < iVar3)))) {
            iVar7 = param_6 + 10;
            if ((*(longlong *)(lVar4 + iVar6) == param_2) && (-1 < iVar7)) {
              if (iVar7 < iVar3) {
                uVar2 = param_6 + 0xd;
                uVar5 = (ulonglong)uVar2;
                if ((-1 < (int)uVar2) && ((int)uVar2 < iVar3)) {
                  iVar7 = param_6 + 0xe;
                }
              }
              if (-1 < iVar7) {
                if (iVar7 < iVar3) {
                  uVar2 = iVar7 + 7;
                  uVar5 = (ulonglong)uVar2;
                  if ((-1 < (int)uVar2) && ((int)uVar2 < iVar3)) {
                    iVar7 = iVar7 + 8;
                  }
                }
                if ((-1 < iVar7) && (iVar7 < iVar3)) {
                  uVar5 = (ulonglong)iVar7;
                  iVar8 = iVar7 + 1;
                  if ((*(char *)(lVar4 + uVar5) == '\x1c') && ((-1 < iVar8 && (iVar8 < iVar3)))) {
                    uVar2 = iVar7 + 8;
                    uVar5 = (ulonglong)uVar2;
                    if ((-1 < (int)uVar2) && ((int)uVar2 < iVar3)) {
                      if (((*(longlong *)(lVar4 + iVar8) == param_3) && (iVar6 != -1)) &&
                         (iVar8 != -1)) {
                        if ((-1 < iVar1) && (iVar1 < iVar3)) {
                          *(longlong *)(iVar6 + lVar4) = param_4;
                        }
                        if (((iVar8 < *(int *)(param_1 + 0x50)) && (-1 < (int)uVar2)) &&
                           ((int)uVar2 < *(int *)(param_1 + 0x50))) {
                          uVar5 = *(ulonglong *)(param_1 + 0x48);
                          *(ulonglong *)((longlong)iVar8 + uVar5) = param_5;
                        }
                        return CONCAT71((int7)(uVar5 >> 8),1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return uVar5 & 0xffffffffffffff00;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 140cc2090 FUN_140cc2090 body=493 status=ok
// SIG undefined FUN_140cc2090(void)

ulonglong FUN_140cc2090(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *in_RAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != 0) {
    in_RAX = (longlong *)(longlong)param_6;
    if (((((-1 < param_6) && (param_6 < *(int *)(param_1 + 0x50))) && (param_2 != 0)) &&
        ((param_3 != 0 && (param_4 != 0)))) && (param_5 != 0)) {
      iVar1 = *(int *)(param_1 + 0x50);
      iVar7 = -1;
      if (param_6 < iVar1) {
        lVar2 = *(longlong *)(param_1 + 0x48);
        iVar4 = param_6 + 1;
        if (((*(char *)((longlong)in_RAX + lVar2) == '\x19') && (-1 < iVar4)) && (iVar4 < iVar1)) {
          in_RAX = (longlong *)(longlong)iVar4;
          iVar4 = param_6 + 2;
          if (*(char *)(lVar2 + (longlong)in_RAX) == ' ') {
            if ((-1 < iVar4) && (iVar4 < iVar1)) {
              uVar3 = param_6 + 9;
              in_RAX = (longlong *)(ulonglong)uVar3;
              if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
                iVar5 = param_6 + 10;
                in_RAX = *(longlong **)(iVar4 + lVar2);
                if ((in_RAX[3] == param_2) && (-1 < iVar5)) {
                  if (iVar5 < iVar1) {
                    uVar3 = param_6 + 0xd;
                    in_RAX = (longlong *)(ulonglong)uVar3;
                    if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
                      iVar5 = param_6 + 0xe;
                    }
                  }
                  if (-1 < iVar5) {
                    if (iVar5 < iVar1) {
                      uVar3 = iVar5 + 7;
                      in_RAX = (longlong *)(ulonglong)uVar3;
                      if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
                        iVar5 = iVar5 + 8;
                      }
                    }
                    if ((-1 < iVar5) && (iVar5 < iVar1)) {
                      in_RAX = (longlong *)(longlong)iVar5;
                      iVar6 = iVar5 + 1;
                      if (*(char *)(lVar2 + (longlong)in_RAX) == '\x1c') {
                        if ((iVar6 < 0) || (iVar1 <= iVar6)) goto LAB_140cc2268;
                        uVar3 = iVar5 + 8;
                        in_RAX = (longlong *)(ulonglong)uVar3;
                        if (((int)uVar3 < 0) || (iVar1 <= (int)uVar3)) goto LAB_140cc2268;
                        in_RAX = *(longlong **)(iVar6 + lVar2);
                        iVar7 = iVar6;
                        if (in_RAX[3] != param_3) goto LAB_140cc2268;
                      }
                    }
                  }
                }
              }
            }
            if ((iVar4 != -1) && (iVar7 != -1)) {
              if ((-1 < iVar4) && (iVar4 < iVar1)) {
                uVar3 = param_6 + 9;
                in_RAX = (longlong *)(ulonglong)uVar3;
                if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
                  in_RAX = (longlong *)(lVar2 + iVar4);
                  *in_RAX = param_4;
                }
              }
              if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x50))) {
                uVar3 = iVar7 + 7;
                in_RAX = (longlong *)(ulonglong)uVar3;
                if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x50))) {
                  in_RAX = (longlong *)((longlong)iVar7 + *(longlong *)(param_1 + 0x48));
                  *in_RAX = param_5;
                }
              }
              return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
          }
        }
      }
LAB_140cc2268:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140cc2280 FUN_140cc2280 body=864 status=ok
// SIG undefined FUN_140cc2280(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140cc2280(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  longlong local_res20;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong local_d0 [2];
  undefined1 local_c0 [8];
  longlong *local_b8;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  plVar10 = (longlong *)0x0;
  FName::FName(&local_d8,L"D3D12",1);
  FName::FName(local_d0,L"Vulkan",1);
  if (DAT_146ab6358 != (longlong *)0x0) {
    uVar7 = (**(code **)(*DAT_146ab6358 + 0x20))();
    FName::FName(&local_res20,uVar7,1);
    if ((local_res20 == local_d8) || (local_res20 == local_d0[0])) {
      local_a8 = -1;
      lStack_a0 = -1;
      local_98 = -1;
      uStack_90 = 0xffffffffffffffff;
      local_58 = 0;
      uStack_50 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      if (DAT_146ab6358 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&local_a8);
      if (local_a8 < 0) {
        return;
      }
      if (lStack_a0 < 0) {
        return;
      }
      if (local_98 < 0) {
        return;
      }
      local_d0[1] = 0;
      fVar12 = (float)local_a8 * 9.536743e-07;
      plVar8 = (longlong *)FUN_1404b0000(local_d0 + 1);
      bVar11 = plVar8 != (longlong *)0x0;
      if (bVar11) {
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x48))(plVar8,local_c0);
        plVar10 = (longlong *)*puVar9;
      }
      else {
        puVar9 = &local_e8;
        local_e8 = 0;
        plStack_e0 = (longlong *)0x0;
      }
      plVar8 = (longlong *)puVar9[1];
      puVar9[1] = 0;
      *puVar9 = 0;
      if ((bVar11) && (local_b8 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_b8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar2 = (int *)((longlong)local_b8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      plVar1 = plStack_e0;
      if ((!bVar11) && (plStack_e0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = plStack_e0 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
          }
        }
      }
      if ((plVar10 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar10 + 0xd0))(plVar10), cVar6 != '\0')) {
        fVar12 = fVar12 * 0.66666;
      }
      if (fVar12 < 8192.0) {
        if (fVar12 < 4096.0) {
          *(char *)((longlong)param_1 + 0x184) = (3072.0 <= fVar12) + '\x01';
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x184) = 3;
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x184) = 4;
      }
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar8 + 1;
        lVar5 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
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
      goto LAB_140cc25a2;
    }
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,10,0x3f800000,0x3f800000);
  cVar6 = FUN_140cba6c0(param_1);
  if (cVar6 == '\0') {
    return;
  }
  fVar12 = *(float *)(param_1 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x184) = 1;
  if (fVar12 < 450.0) {
    if (fVar12 < 300.0) {
      if (175.0 <= fVar12) {
        *(undefined1 *)((longlong)param_1 + 0x184) = 2;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x184) = 3;
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x184) = 4;
  }
LAB_140cc25a2:
  if (param_2 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x183) = *(undefined1 *)((longlong)param_1 + 0x184);
    FUN_140cccea0(param_1);
    FUN_140c69c40(param_1);
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  return;
}



// FUNCTION 140cc25e0 FUN_140cc25e0 body=8 status=ok
// SIG undefined FUN_140cc25e0(void)

undefined8 FUN_140cc25e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



// FUNCTION 140cc25f0 FUN_140cc25f0 body=52 status=ok
// SIG undefined FUN_140cc25f0(void)

void FUN_140cc25f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined8 *)(param_1 + 0x600) = param_2;
  *(undefined1 *)(param_1 + 0x5f8) = param_3;
  local_18 = *(undefined4 *)(param_1 + 0x5f8);
  uStack_14 = *(undefined4 *)(param_1 + 0x5fc);
  uStack_10 = *(undefined4 *)(param_1 + 0x600);
  uStack_c = *(undefined4 *)(param_1 + 0x604);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x5b8,&local_18);
  return;
}



// FUNCTION 140cc2630 FUN_140cc2630 body=740 status=ok
// SIG undefined FUN_140cc2630(void)

void FUN_140cc2630(longlong param_1,undefined1 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_3 != '\0') {
    FUN_140cd8a70();
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x718);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c60ae0();
    FWeakObjectPtr::operator=(param_1 + 0x718,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x718);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x718);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c60980();
    FWeakObjectPtr::operator=(param_1 + 0x720,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x720);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x728);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c60b90();
    FWeakObjectPtr::operator=(param_1 + 0x728,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x728);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x728);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x738);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c608d0();
    FWeakObjectPtr::operator=(param_1 + 0x738,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x738);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x738);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x740);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c60cf0();
    FWeakObjectPtr::operator=(param_1 + 0x740,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x740);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x740);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x748);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c60c40();
    FWeakObjectPtr::operator=(param_1 + 0x748,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x748);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x748);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x750);
  if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    uVar1 = FUN_140c60a30();
    FWeakObjectPtr::operator=(param_1 + 0x750,uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x750);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x750);
    (**(code **)(*plVar3 + 0x598))(plVar3,param_2,param_3);
  }
  return;
}



// FUNCTION 140cc2920 FUN_140cc2920 body=294 status=ok
// SIG undefined FUN_140cc2920(void)

void FUN_140cc2920(longlong *param_1,char param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res18 [2];
  longlong local_18;
  int local_10;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar3 = param_1[0x101];
    local_res18[0] = param_3;
    if (param_2 == '\0') {
      FUN_142dbb5d0(param_1 + 0x102,local_res18);
      uVar2 = FUN_1407c3030(param_1 + 0x102);
      *(undefined1 *)(param_1 + 0x101) = uVar2;
    }
    else {
      *(undefined1 *)(param_1 + 0x101) = 1;
      FUN_142dafbc0(param_1 + 0x102);
    }
    if (((char)lVar3 != (char)param_1[0x101]) &&
       (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar4 = FUN_14145f370();
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
            FUN_140d04f00(lVar3,(char)param_1[0x101]);
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140cc2a50 FUN_140cc2a50 body=355 status=ok
// SIG undefined FUN_140cc2a50(void)

void FUN_140cc2a50(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (iVar7 = 0, 0 < *(int *)(lVar3 + 0x478))) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
        if (plVar1 != (longlong *)0x0) {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 != 0)) {
            lVar6 = FUN_14145f370();
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
              FUN_14145dc20(lVar5);
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 140cc2bc0 FUN_140cc2bc0 body=131 status=ok
// SIG undefined FUN_140cc2bc0(void)

void FUN_140cc2bc0(longlong param_1,undefined2 *param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_140cdc670();
  *param_2 = *(undefined2 *)(param_1 + 0x9f8);
  if ((param_3 != 0) && (*(char *)(param_3 + 0x128) == '\x03')) {
    cVar1 = APlayerController::IsPrimaryPlayer(param_3);
    if (cVar1 != '\0') {
      cVar1 = FUN_1407c3030(param_1 + 0x670);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(param_1 + 0x670);
      }
      *(undefined4 *)(param_2 + 2) = uVar2;
      uVar2 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(param_1 + 0x670);
      *(undefined4 *)(param_2 + 4) = uVar2;
    }
  }
  return;
}



// FUNCTION 140cc2c50 BeginPlay body=61 status=ok
// SIG undefined BeginPlay(void)

void AFGCentralStorageContainer::BeginPlay(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1424882e0();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_140c413b0(uVar1);
  if (lVar2 != 0) {
    FUN_140c4d300(lVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 140cc2c90 FUN_140cc2c90 body=1005 status=ok
// SIG undefined FUN_140cc2c90(void)

void FUN_140cc2c90(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_98;
  int local_94;
  longlong local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  ulonglong uStack_60;
  code *local_58;
  ulonglong uStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_1424feef0();
  pwVar5 = (wchar_t *)FUN_1408c70a0(param_1);
  pwVar12 = (wchar_t *)0x0;
  if (pwVar5 != (wchar_t *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140cc2cff;
  }
  pwVar5 = pwVar12;
LAB_140cc2cff:
  *(wchar_t **)(param_1 + 0x630) = pwVar5;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnPawnChanged",L"::");
    pwVar5 = pwVar12;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x630);
    plVar11 = (longlong *)(lVar6 + 0xb38);
    FWeakObjectPtr::operator=(&local_98,0);
    local_90 = 0;
    FWeakObjectPtr::operator=(&local_98,param_1);
    local_90 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_98), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_90);
    }
    piVar9 = (int *)*plVar11;
    iVar1 = *(int *)(lVar6 + 0xb40);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
      if (((*piVar10 == local_98) && (piVar10[1] == local_94)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_98), cVar4 == '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (*(longlong *)(piVar10 + 2) == local_90)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140cc2e6a;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 0xb40);
    *(int *)(lVar6 + 0xb40) = iVar1 + 1;
    if (*(int *)(lVar6 + 0xb44) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
    *piVar9 = local_98;
    piVar9[1] = local_94;
    *(longlong *)(piVar9 + 2) = local_90;
LAB_140cc2e6a:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    plVar11 = *(longlong **)(param_1 + 0x630);
    local_res20 = UEnvQueryTest_Random::StaticClass();
    lVar6 = (**(code **)(*plVar11 + 0x628))(plVar11,local_res20);
    if (lVar6 != 0) {
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = FUN_140cbefa0;
      local_68 = FUN_140cbefa0;
      uStack_60 = uStack_80;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAreaDiscovered",L"::");
      pwVar5 = pwVar12;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar5 = pwVar3;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_1407260e0(lVar6 + 0x1a0,param_1,&local_68,local_res8);
      uStack_80 = uStack_80 & 0xffffffff00000000;
      local_88 = FUN_140cbf0c0;
      local_58 = FUN_140cbf0c0;
      uStack_50 = uStack_80;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAreaEntered",L"::");
      while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar12 = pwVar7;
      }
      FName::FName(&local_res18,pwVar12 + 2,1);
      FUN_1407260e0(lVar6 + 0x1b0,param_1,&local_58,local_res18);
    }
  }
  local_88 = (code *)0x0;
  uStack_80 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"RequestAsyncLoad SingleDelegate",0x40);
  local_78 = 0;
  local_70 = 0;
  lVar6 = FUN_1422ca050();
  FStreamableManager::RequestAsyncLoad
            (lVar6 + 0x178,local_48,param_1 + 0x6e8,&local_78,0,1,0,&local_88);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar9 = (int *)((longlong)local_40 + 0xc);
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140cc3080 FUN_140cc3080 body=161 status=ok
// SIG undefined FUN_140cc3080(void)

void FUN_140cc3080(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  UObject::PostLoad();
  plVar6 = (longlong *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6);
  }
  plVar3 = (longlong *)FUN_141424bc0();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  iVar2 = FUN_142480900(lVar5);
  iVar1 = *(int *)(param_1 + 0xc0);
  iVar4 = iVar1 + iVar2;
  *(int *)(param_1 + 0xc0) = iVar4;
  if (*(int *)(param_1 + 0xc4) < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar6 + (longlong)iVar1 * 8),0,(longlong)iVar2 << 3);
  return;
}



// FUNCTION 140cc3130 FUN_140cc3130 body=253 status=ok
// SIG undefined FUN_140cc3130(void)

void FUN_140cc3130(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  FUN_1424ff710();
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140ceeea0(lVar1);
      if (((cVar3 != '\0') && (*(longlong *)(param_1 + 0x4a8) != 0)) &&
         (*(char *)(param_1 + 0x708) != '\0')) {
        if (*(longlong *)(param_1 + 0x700) == 0) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          if (*(longlong *)(DAT_146b33f38 + 0xe8) != 0) {
            uVar5 = FUN_140cb8c10(*(longlong *)(DAT_146b33f38 + 0xe8),local_res8);
            uVar5 = FWeakObjectPtr::Get(uVar5);
            *(undefined8 *)(param_1 + 0x700) = uVar5;
          }
        }
        FUN_140ea7cb0(param_1 + 0x708,*(undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 0x260),
                      *(undefined8 *)(param_1 + 0x700),*(undefined8 *)(DAT_1469f4590 + 0x18));
      }
    }
  }
  return;
}



// FUNCTION 140cc3230 FUN_140cc3230 body=1601 status=ok
// SIG undefined FUN_140cc3230(void)

void FUN_140cc3230(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar5 = FUN_1405c6c00();
  if (lVar5 != 0) {
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges.WwiseBank_Crew_Challenges"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc331b;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc331b:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Hunt.WwiseBank_Crew_Challenges_Hunt"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc33da;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc33da:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Kill.WwiseBank_Crew_Challenges_Kill"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc349a;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc349a:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Sabotage.WwiseBank_Crew_Challenges_Sabotage"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc355a;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc355a:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Salvage.WwiseBank_Crew_Challenges_Salvage"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc361a;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc361a:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Typhon.WwiseBank_Crew_Challenges_Typhon"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc36da;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc36da:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Vehicle.WwiseBank_Crew_Challenges_Vehicle"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_140cc379a;
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
LAB_140cc379a:
    uVar6 = FUN_1405b5d80();
    lVar7 = FUN_141799c90(uVar6,0,
                          L"/Game/Audio/SoundBanks/VO/Crew_Challenges/WwiseBank_Crew_Challenges_Writings.WwiseBank_Crew_Challenges_Writings"
                          ,0,0,0,1);
    if (lVar7 != 0) {
      lVar8 = FUN_1405b5d80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar1 = (longlong *)(lVar5 + 0x90);
        plVar3 = (longlong *)*plVar1;
        iVar2 = *(int *)(lVar5 + 0x98);
        for (plVar9 = plVar3; plVar9 != plVar3 + iVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar7) {
            if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) {
              return;
            }
            break;
          }
        }
        *(int *)(lVar5 + 0x98) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      }
    }
  }
  return;
}



// FUNCTION 140cc3880 FUN_140cc3880 body=324 status=ok
// SIG undefined FUN_140cc3880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cc3880(longlong param_1)

{
  undefined1 *_Dst;
  void *_Src;
  longlong lVar1;
  undefined1 auStack_458 [32];
  undefined1 *local_438;
  undefined1 *local_430;
  undefined1 local_428 [1024];
  undefined1 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  if (0 < *(int *)(param_1 + 0x1630)) {
    _Src = *(void **)(param_1 + 0x1628);
    local_20 = *(int *)(param_1 + 0x1630);
    lVar1 = (longlong)local_20;
    local_28 = (undefined1 *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      FUN_140ccb040(local_428,local_20,0);
      if (_Src == (void *)0x0) {
        _Src = (void *)(param_1 + 0x1228);
      }
      _Dst = local_428;
      if (local_28 != (undefined1 *)0x0) {
        _Dst = local_28;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,lVar1 << 3);
    }
    *(undefined4 *)(param_1 + 0x1630) = 0;
    if (*(int *)(param_1 + 0x1634) != 0) {
      TArray<void_*,TInlineAllocator<128,TSizedDefaultAllocator<32>_>_>::ResizeTo
                ((void *)(param_1 + 0x1228),0);
    }
    local_438 = local_428;
    if (local_28 != (undefined1 *)0x0) {
      local_438 = local_28;
    }
    local_430 = local_438 + (longlong)local_20 * 8;
    FUN_142d8de00(&local_438);
    if (local_28 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cc39d0 FUN_140cc39d0 body=123 status=ok
// SIG undefined FUN_140cc39d0(void)

void FUN_140cc39d0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FWeakObjectPtr::IsValid();
  if (cVar3 != '\0') {
    iVar2 = *(int *)(param_1 + 0x1630);
    *(int *)(param_1 + 0x1630) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1634) < iVar2 + 1) {
      TArray<void_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x1228,iVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x1628);
    if (*(longlong *)(param_1 + 0x1628) == 0) {
      lVar4 = param_1 + 0x1228;
    }
    puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 8);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  return;
}



// FUNCTION 140cc3a50 FUN_140cc3a50 body=12184 status=ok
// SIG undefined FUN_140cc3a50(void)

void FUN_140cc3a50(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined1 *local_fe8 [2];
  undefined1 local_fd8 [32];
  undefined8 local_fb8;
  undefined4 local_fa8;
  longlong local_f98 [4];
  undefined1 local_f78 [80];
  undefined1 local_f28 [80];
  undefined1 local_ed8 [80];
  undefined1 local_e88 [80];
  undefined1 local_e38 [80];
  undefined1 local_de8 [80];
  undefined1 local_d98 [80];
  undefined1 local_d48 [80];
  undefined1 local_cf8 [80];
  undefined1 local_ca8 [80];
  undefined1 local_c58 [80];
  undefined1 local_c08 [80];
  undefined1 local_bb8 [80];
  undefined1 local_b68 [80];
  undefined1 local_b18 [80];
  undefined1 local_ac8 [80];
  undefined1 local_a78 [80];
  undefined1 local_a28 [80];
  undefined1 local_9d8 [80];
  undefined1 local_988 [80];
  undefined1 local_938 [80];
  undefined1 local_8e8 [80];
  undefined1 local_898 [80];
  undefined1 local_848 [80];
  undefined1 local_7f8 [80];
  undefined1 local_7a8 [80];
  undefined1 local_758 [80];
  undefined1 local_708 [80];
  undefined1 local_6b8 [80];
  undefined1 local_668 [80];
  undefined1 local_618 [80];
  undefined1 local_5c8 [80];
  undefined1 local_578 [80];
  undefined1 local_528 [80];
  undefined1 local_4d8 [80];
  undefined1 local_488 [80];
  undefined1 local_438 [80];
  undefined1 local_3e8 [80];
  undefined1 local_398 [80];
  undefined1 local_348 [80];
  undefined1 local_2f8 [80];
  undefined1 local_2a8 [80];
  undefined1 local_258 [80];
  undefined1 local_208 [80];
  undefined1 local_1b8 [80];
  undefined1 local_168 [80];
  undefined1 local_118 [80];
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/ChildrenOfTheVault/_Shared/_Design/_Unique/Sawbar/LightProjectile_Sawbar.Default__LightProjectile_Sawbar_C,Lifetime,8,4.000000,3.0000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/_Legendary/Garcia/Parts/Part_SG_JAK_Barrel_Garcia.Part_SG_JAK_Barrel_Garcia:AspectList_WeaponAttributeEffectsAspectData,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[2].ModifierValue.BaseValueConstant,8,3.000000,4.30000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/_Legendary/Garcia/Parts/Part_SG_JAK_Barrel_Garcia.Part_SG_JAK_Barrel_Garcia,InventoryAttributeEffects.InventoryAttributeEffects[2].ModifierValue.BaseValueConstant,8,6.000000,9.000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/_Legendary/Garcia/Parts/Part_SG_JAK_Barrel_Garcia.Part_SG_JAK_Barrel_Garcia:AspectList_WeaponAttributeEffectsAspectData,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].UseModeBitmask,1,1,2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/_Legendary/Garcia/Parts/Part_SG_JAK_Barrel_Garcia.Part_SG_JAK_Barrel_Garcia:AspectList_WeaponUseModeAspectData.WeaponUseComponent_BPWeaponFireProjectileComponent_JAK,FireRate,20,(BaseValue=2.000000),(BaseValue=4.3)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Torgue/_Shared/_Design/_Unique/RoisensThorns/Parts/Part_PS_TOR_Barrel_RoisensThorns.Part_PS_TOR_Barrel_RoisensThorns:WeaponUseModeAspectData_0.WeaponUseComponent_BPWeaponFireProjectileComponent_Torgue_RoisensThorns,DamageFormula.BaseValueScale,8,1.000000,1.533333"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Torgue/_Shared/_Design/_Unique/RoisensThorns/Parts/Part_PS_TOR_Barrel_RoisensThorns.Part_PS_TOR_Barrel_RoisensThorns,InventoryAttributeEffects,386,((AttributeToModify=GbxAttributeData\'\"/Game/Gear/Weapons/_Shared/_Design/WeaponAttributes/Att_BarrelType.Att_BarrelType\"\',ModifierType=OverrideBaseValue,ModifierValue=(BaseValueConstant=1.000000)),(AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_RecoilHeightScale.Att_Weapon_RecoilHeightScale\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=0.500000))),((AttributeToModify=GbxAttributeData\'\"/Game/Gear/Weapons/_Shared/_Design/WeaponAttributes/Att_BarrelType.Att_BarrelType\"\',ModifierType=OverrideBaseValue,ModifierValue=(BaseValueConstant=1.000000)),(AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_RecoilHeightScale.Att_Weapon_RecoilHeightScale\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=0.500000)),(AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_Damage.Att_Weapon_Damage\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=2.000000)))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Sickle/Parts/Part_AR_VLA_BoomSickle.Part_AR_VLA_BoomSickle,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0],242,(UseMode=(INVALID),UseModeBitmask=3,AttributeEffects=((AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_DamageRadius.Att_Weapon_DamageRadius\"\',ModifierType=OverrideBaseValue,ModifierValue=(BaseValueConstant=150.000000)))),(UseMode=(INVALID),UseModeBitmask=3,AttributeEffects=((AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_DamageRadius.Att_Weapon_DamageRadius\"\',ModifierType=OverrideBaseValue,ModifierValue=(BaseValueConstant=150.000000)),(AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_Damage.Att_Weapon_Damage\"\',ModifierType=ScaleSimple,ModifierValue=(DataTableValue=(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/GameplayAttributes/_Unique/DataTable_WeaponBalance_Unique_VLA.DataTable_WeaponBalance_Unique_VLA\"\',RowName=\"AR_Sickle\",ValueName=\"DamageScale_2_4F6EF14648BA8F2AE9217DAFEA60EE53\")))))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Shields/_Design/PartSets/Part_Augment/Charges/HealthCharge/HealthChargePickup/InvData_HealthCharge.InvData_HealthCharge,PickupSound,4,None,WwiseEvent\'/Game/Audio/Events/UX/HUD/Character_Global/Health/WE_HUD_Global_Health_Acquired.WE_HUD_Global_Health_Acquired\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/ClassMods/_Design/PartSets/Part_ClassMod/Gunner/_Unique/Unique_02/ClassMod_Part_Gunner_Unique_02_ColdBlooded.ClassMod_Part_Gunner_Unique_02_ColdBlooded,InstigatorAttributeEffects,0,,((AttributeToModify=GbxAttributeData\'\"/Game/GameData/Attributes/Shield/Att_ShieldOnIdleRegenerationDelay.Att_ShieldOnIdleRegenerationDelay\"\',ModifierValue=(BaseValueConstant=1.500000)),(AttributeToModify=GbxAttributeData\'\"/Game/GameData/Attributes/Shield/Att_ShieldOnIdleRegenerationRate.Att_ShieldOnIdleRegenerationRate\"\',ModifierValue=(BaseValueConstant=-1.000000)))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Jakobs/_Shared/_Design/_Unique/MelsCompanion/Balance/Balance_PS_JAK_MelsCompanion.Balance_PS_JAK_MelsCompanion,RarityData,100,OakInventoryRarityData\'/Game/GameData/Loot/RarityData/RarityData_04_VeryRare.RarityData_04_VeryRare\',OakInventoryRarityData\'/Game/GameData/Loot/RarityData/RarityData_05_Legendary.RarityData_05_Legendary\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/TheWave/Balance/Balance_SG_JAK_Unique_Wave.Balance_SG_JAK_Unique_Wave,RarityData,92,OakInventoryRarityData\'/Game/GameData/Loot/RarityData/RarityData_03_Rare.RarityData_03_Rare\',OakInventoryRarityData\'/Game/GameData/Loot/RarityData/RarityData_05_Legendary.RarityData_05_Legendary\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Maliwan/_Shared/Effects/Charge/PS_MAL_SG_Charge_B02B_Cryo.PS_MAL_SG_Charge_B02B_Cryo:ParticleModuleRequired_16,SubImages_Horizontal,1,8,4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Maliwan/_Shared/Effects/Charge/PS_MAL_SG_Charge_B02B_Cryo.PS_MAL_SG_Charge_B02B_Cryo:ParticleModuleRequired_16,SubImages_Vertical,1,8,4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/_Manufacturers/_ETech/_Design/Shotgun/Tediore/Part_SG_TED_Barrel_ETECH.Part_SG_TED_Barrel_ETECH:AspectList_WeaponBonusAspectData,AspectList.AspectList[3].Object..DataTableBonuses.DataTableBonuses[0].RowName,16,MAL_Barrel_ETech,TED_Barrel_ETech"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Torgue/_Shared/_Design/Parts/Mag/Part_PS_TOR_Mag_01.Part_PS_TOR_Mag_01,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue,158,(BaseValueConstant=0.250000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.070000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Torgue/_Shared/_Design/Parts/Mag/Part_PS_TOR_Mag_02.Part_PS_TOR_Mag_02,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue,158,(BaseValueConstant=0.300000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.100000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Torgue/_Shared/_Design/Parts/Mag/Part_PS_TOR_Mag_03.Part_PS_TOR_Mag_03,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue,158,(BaseValueConstant=0.350000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.125000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/Parts/Mag/Part_SG_Torgue_Magazine_01.Part_SG_Torgue_Magazine_01,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue,158,(BaseValueConstant=0.100000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.030000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/Parts/Mag/Part_SG_Torgue_Magazine_02.Part_SG_Torgue_Magazine_02,InventoryAttributeEffects.InventoryAttributeEffects[2].ModifierValue,158,(BaseValueConstant=0.300000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.050000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/Parts/Mag/Part_SG_Torgue_Magazine_03.Part_SG_Torgue_Magazine_03,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue,158,(BaseValueConstant=0.065000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.020000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/Parts/Mag/Part_SG_Torgue_Magazine_04.Part_SG_Torgue_Magazine_04,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue,158,(BaseValueConstant=0.180000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=0.040000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/Torgue/_Shared/_Design/_ForAI/LightProjectile_TOR_HW_Rocket_AI_UseONLY.Default__LightProjectile_TOR_HW_Rocket_AI_UseONLY_C,ExplosionData,82,ExplosionData\'/Game/GameData/Explosions/DA_Explosion_Default.DA_Explosion_Default\',ExplosionData\'/Game/GameData/Explosions/FastPop/DA_FastPop_Explosion_Default.DA_FastPop_Explosion_Default\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/Vladof/_Shared/_Design/_ForAI/LightProjectile_HW_VLA_Shells_Barrel_03_ForAI.Default__LightProjectile_HW_VLA_Shells_Barrel_03_ForAI_C,ExplosionData,82,ExplosionData\'/Game/GameData/Explosions/DA_Explosion_Default.DA_Explosion_Default\',ExplosionData\'/Game/GameData/Explosions/FastPop/DA_FastPop_Explosion_Default.DA_FastPop_Explosion_Default\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/Vladof/_Shared/_Design/_ForAI/LightProjectile_HW_VLA_ForAI.Default__LightProjectile_HW_VLA_ForAI_C,ExplosionData,82,ExplosionData\'/Game/GameData/Explosions/DA_Explosion_Default.DA_Explosion_Default\',ExplosionData\'/Game/GameData/Explosions/FastPop/DA_FastPop_Explosion_Default.DA_FastPop_Explosion_Default\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/ChildrenOfTheVault/_Shared/_Design/_ForAI/LightProjectile_HW_COV_SplatBall_AI.Default__LightProjectile_HW_COV_SplatBall_AI_C,ExplosionData,82,ExplosionData\'/Game/GameData/Explosions/DA_Explosion_Default.DA_Explosion_Default\',ExplosionData\'/Game/GameData/Explosions/FastPop/DA_FastPop_Explosion_Default.DA_FastPop_Explosion_Default\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/ChildrenOfTheVault/_Shared/_Design/_ForAI/LightProjectile_HW_COV_SawBlade_AI.Default__LightProjectile_HW_COV_SawBlade_AI_C,ExplosionData,82,ExplosionData\'/Game/GameData/Explosions/DA_Explosion_Default.DA_Explosion_Default\',ExplosionData\'/Game/GameData/Explosions/FastPop/DA_FastPop_Explosion_Default.DA_FastPop_Explosion_Default\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/ChildrenOfTheVault/_Shared/_Design/_ForAI/LightProjectile_HW_COV_Flakshot_AI.Default__LightProjectile_HW_COV_Flakshot_AI_C,ExplosionData,82,ExplosionData\'/Game/GameData/Explosions/DA_Explosion_Default.DA_Explosion_Default\',ExplosionData\'/Game/GameData/Explosions/FastPop/DA_FastPop_Explosion_Default.DA_FastPop_Explosion_Default\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Jakobs/_Shared/_Design/_Unique/RowansCall/Parts/Part_AR_JAK_Barrel_RowansCall.Part_AR_JAK_Barrel_RowansCall:WeaponUseModeAspectData_0.WeaponUseComponent_BPWeaponFireProjectileComponent_JAK,AspectList.AspectList[0].Object..WeaponUseComponent.Object...RefundAmmoCount,1,1,2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Jakobs/_Shared/_Design/_Unique/RowansCall/Parts/Part_AR_JAK_Barrel_RowansCall.Part_AR_JAK_Barrel_RowansCall,InventoryAttributeEffects.InventoryAttributeEffects[2].ModifierValue.BaseValueConstant,8,1.250000,0.5"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Hyperion/_Shared/_Design/_Unique/Crossroad/Parts/Part_SM_HYP_Barrel_Crossroad.Part_SM_HYP_Barrel_Crossroad,InventoryAttributeEffects.InventoryAttributeEffects[0].ModifierValue.BaseValueConstant,8,1.150000,0.150000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Hyperion/_Shared/_Design/_Unique/Crossroad/Parts/Part_SM_HYP_Barrel_Crossroad.Part_SM_HYP_Barrel_Crossroad,InventoryAttributeEffects.InventoryAttributeEffects[4].ModifierValue.BaseValueConstant,8,1.700000,2.5"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Hyperion/_Shared/_Design/_Unique/Crossroad/Parts/Part_SM_HYP_Barrel_Crossroad.Part_SM_HYP_Barrel_Crossroad,InventoryAttributeEffects.InventoryAttributeEffects[2].ModifierValue.BaseValueConstant,8,4.000000,3.00000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/_Unique/Flakker/Parts/Part_SG_Torgue_Barrel_Flakker.Part_SG_Torgue_Barrel_Flakker,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[0].ModifierValue,158,(BaseValueConstant=5.000000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=1.000000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/SniperRifles/Vladof/_Shared/_Design/_Unique/Lyuda/LightProjectile_SR_Lyuda.LightProjectile_SR_Lyuda_C,0,1,Babies,1,116,1:3,1:2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/GrenadeMods/_Design/PartSets/Part_Behavior/Lingering/LightBeam_Grenade_Lingering_Shock.Default__LightBeam_Grenade_Lingering_Shock_C,DamageInterval,8,0.400000,0.80000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/GrenadeMods/_Design/_Unique/EchoV2/Balance/InvBalD_GM_EchoV2.InvBalD_GM_EchoV2,InventoryData,83,BPInv_GrenadeModData_C\'/Game/Gear/GrenadeMods/_Design/A_Data/GM_Default.GM_Default\',BPInv_GrenadeModData_C\'/Game/PatchDLC/Ixora2/Gear/GrenadeMods/_Unique/Echo/Data/GM_EchoGrenade.GM_EchoGrenade\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/GrenadeMods/_Design/_Unique/HipHop/LightProjectile_GM_HipHop.Default__LightProjectile_GM_HipHop_C,GravityScale,8,2.000000,3.5"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/GrenadeMods/_Design/_Unique/HipHop/LightProjectile_GM_HipHop.Default__LightProjectile_GM_HipHop_C,Speed,11,1500.000000,1000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/Shotguns/Tediore/_Shared/_Design/_Unique/Horizon/BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C,0,1,K2_OnComboTargetTriggered,1,1430,11:1200.000000,11:1600.000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/_Unique/SleepingGiant/Ability/Ability_SleepingGiant.Ability_SleepingGiant_C,0,1,ExecuteUbergraph_Ability_SleepingGiant,1,1778,8:0.200000,8:0.330000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/_Unique/SleepingGiant/Ability/Ability_SleepingGiant.Ability_SleepingGiant_C,0,1,ExecuteUbergraph_Ability_SleepingGiant,1,1817,8:0.200000,8:1.000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/_Unique/SleepingGiant/Ability/Ability_SleepingGiant.Ability_SleepingGiant_C,0,1,ExecuteUbergraph_Ability_SleepingGiant,1,609,8:1.200000,8:1.600000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Tediore/_Shared/_Design/_Unique/Horizon/BP_TEDBehavior_Horizon.Default__BP_TEDBehavior_Horizon_C,Singularity,8,1.250000,2.5"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,&DAT_144471d00,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Craps/Parts/Part_PS_TOR_Barrel_Craps.Part_PS_TOR_Barrel_Craps,InventoryAttributeEffects,197,((AttributeToModify=GbxAttributeData\'\"/Game/Gear/Weapons/_Shared/_Design/WeaponAttributes/Att_BarrelType.Att_BarrelType\"\',ModifierType=OverrideBaseValue,ModifierValue=(BaseValueConstant=2.000000))),((AttributeToModify=GbxAttributeData\'\"/Game/Gear/Weapons/_Shared/_Design/WeaponAttributes/Att_BarrelType.Att_BarrelType\"\',ModifierType=OverrideBaseValue,ModifierValue=(BaseValueConstant=2.000000)),(AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_Damage.Att_Weapon_Damage\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=2.200000)))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Skullmasher/Parts/Part_SR_JAK_Bolt_Skullmasher.Part_SR_JAK_Bolt_Skullmasher,InventoryAttributeEffects.InventoryAttributeEffects[6].ModifierValue.BaseValueConstant,8,2.250000,1.25"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/_Unique/SleepingGiant/Ability/StatusEffect_SleepingGiant_Effects_DA.StatusEffect_SleepingGiant_Effects_DA,GameplayTags,15,(GameplayTags=),(GameplayTags=((TagName=\"StatusEffect.NonTransient\")))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/LuciansCall/Parts/Part_AR_VLA_Barrel_LuciansCall.Part_AR_VLA_Barrel_LuciansCall,InventoryAttributeEffects.InventoryAttributeEffects[2].ModifierValue.BaseValueConstant,8,0.600000,0.45"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/LuciansCall/Parts/Part_AR_VLA_Barrel_LuciansCall.Part_AR_VLA_Barrel_LuciansCall,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueConstant,8,0.600000,2.500000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Torgue/_Shared/_Design/_Unique/Bearcat/Parts/Part_AR_TOR_Barrel_Bearcat.Part_AR_TOR_Barrel_Bearcat,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[1].ModifierValue.BaseValueConstant,8,4.000000,2.0"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/Shotguns/Hyperion/_Shared/_Design/_Unique/Redistributor/LightProjectile_HYP_SG_Redistributor.LightProjectile_HYP_SG_Redistributor_C,0,1,OnDamage,1,242,8:0.200000,8:0.300000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Reflux/LightProjectile_HYP_SG_Reflux.LightProjectile_HYP_SG_Reflux_C,0,1,OnDamage,1,242,8:0.200000,8:0.300000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Hyperion/_Shared/_Design/Parts/Scope/Scope_01/Part_SR_HYP_Scope_01.Part_SR_HYP_Scope_01:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.140000,0.2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Hyperion/_Shared/_Design/Parts/Scope/Scope_02/Part_SR_HYP_Scope_02.Part_SR_HYP_Scope_02:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.125000,0.225"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Hyperion/_Shared/_Design/Parts/Scope/Scope_03/Part_SR_HYP_Scope_03.Part_SR_HYP_Scope_03:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.168000,0.195"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/Parts/Scope/Scope_01/Part_SR_DAL_Scope_01.Part_SR_DAL_Scope_01:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.135000,0.26"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/Parts/Scope/Scope_01/Part_SR_DAL_Scope_01.Part_SR_DAL_Scope_01:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ModeFOVScale,8,0.450000,0.9"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/Parts/Scope/Scope_02/Part_SR_DAL_Scope_02.Part_SR_DAL_Scope_02:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.168000,0.22"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/Parts/Scope/Scope_02/Part_SR_DAL_Scope_02.Part_SR_DAL_Scope_02:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ModeFOVScale,8,0.325000,0.9"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/Parts/Scope/Scope_03/Part_SR_DAL_Scope_03.Part_SR_DAL_Scope_03:AspectList_WeaponUseModeSecondaryAspectData_0.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.130000,0.19"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Vladof/_Shared/_Design/Parts/Scope/Scope_01/Part_SR_VLA_Scope_01.Part_SR_VLA_Scope_01:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.130000,0.2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Vladof/_Shared/_Design/Parts/Scope/Scope_02/Part_SR_VLA_Scope_02.Part_SR_VLA_Scope_02:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.200000,0.225"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Vladof/_Shared/_Design/Parts/Scope/Scope_03/Part_SR_VLA_Scope_03.Part_SR_VLA_Scope_03:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.148000,0.27"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/Parts/Scopes/Scope_01/Part_MAL_SR_Scope_01.Part_MAL_SR_Scope_01:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.160000,0.25"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/Parts/Scopes/Scope_02/Part_MAL_SR_Scope_02.Part_MAL_SR_Scope_02:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.140000,0.2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/Parts/Scopes/Scope_03/Part_MAL_SR_Scope_03.Part_MAL_SR_Scope_03:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_ExtraLong,ZoomLevels.ZoomLevels[0].FOVScale,8,0.130000,0.185"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Jakobs/_Shared/_Design/Parts/Scope/Scope_01/Part_SR_JAK_Scope_01.Part_SR_JAK_Scope_01:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Long,ZoomLevels.ZoomLevels[0].FOVScale,8,0.125000,0.175"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Jakobs/_Shared/_Design/Parts/Scope/Scope_02/Part_SR_JAK_Scope_02.Part_SR_JAK_Scope_02:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.145000,0.19"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Jakobs/_Shared/_Design/Parts/Scope/Scope_03/Part_SR_JAK_Scope_03.Part_SR_JAK_Scope_03:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeapon_Scope_Medium,ZoomLevels.ZoomLevels[0].FOVScale,8,0.185000,0.21"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Jakobs/_Shared/_Design/Parts/Scope/Part_AR_JAK_Scope_03.Part_AR_JAK_Scope_03:WeaponUseModeSecondaryAspectData_0.BPWeapon_Scope_Long_C_0,ZoomLevels.ZoomLevels[0].FOVScale,8,0.155000,0.22"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/ChildrenOfTheVault/_Shared/_Design/Parts/Scope/Part_AR_COV_Scope_02.Part_AR_COV_Scope_02:WeaponUseModeSecondaryAspectData_0.BPWeapon_Scope_Long_C_0,ZoomLevels.ZoomLevels[0].FOVScale,8,0.185000,0.24"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Dahl/_Shared/_Design/Parts/Scope/Part_DAL_AR_Scope_03.Part_DAL_AR_Scope_03:WeaponUseModeSecondaryAspectData_0.BPWeapon_Scope_Long_C_0,ZoomLevels.ZoomLevels[0].FOVScale,8,0.155000,0.22"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Jakobs/_Shared/_Design/_Unique/GodMother/Parts/Part_PS_JAK_Barrel_GodMother.Part_PS_JAK_Barrel_GodMother:WeaponUseModeAspectData_0.WeaponUseComponent_BPWeaponFireProjectileComponent_JAK,AspectList.AspectList[0].Object..WeaponUseComponent.Object..FireRate,21,(BaseValue=10.000000),(BaseValue=3.0)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Shields/_Design/_Uniques/Ward/Balance/PartSet_Shield_Ward.PartSet_Shield_Ward,ActorPartLists.ActorPartLists[3].MultiplePartSelectionRange,13,(Min=3,Max=3),(Min=1,Max=3)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_Storm.Part_MAL_SR_Barrel_Storm:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeaponChargeComponent_MAL,AspectList.AspectList[1].Object..Component.Object..ChargeTime,20,(BaseValue=2.000000),(BaseValue=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_FireStorm.Part_MAL_SR_Barrel_FireStorm:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeaponChargeComponent_MAL,AspectList.AspectList[1].Object..Component.Object..ChargeTime,20,(BaseValue=1.750000),(BaseValue=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/BSM/EQS_Beastmaster_CM_Raid1.EQS_Beastmaster_CM_Raid1:EnvQueryGenerator_TargetableActors_0,TargetCondition,189,Condition_IsEnemy_C\'/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/BSM/EQS_Beastmaster_CM_Raid1.EQS_Beastmaster_CM_Raid1:EnvQueryGenerator_TargetableActors_0.TargetCondition_Condition_IsEnemy\',Condition_IsEnemyAndAlive_C\'/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/BSM/EQS_Beastmaster_CM_Raid1.EQS_Beastmaster_CM_Raid1:EnvQueryGenerator_TargetableActors_0.TargetCondition_Condition_IsEnemyAndAlive\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/SRN/SE_Siren_CM_Raid1.SE_Siren_CM_Raid1,AttributeEffects.AttributeEffects[0].AttributeData,102,GbxAttributeData\'/Game/GameData/Attributes/Damage/Att_DamageDealtMultiplier.Att_DamageDealtMultiplier\',GbxAttributeData\'/Game/GameData/Weapons/Att_Weapon_Damage.Att_Weapon_Damage\'"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Sickle/Parts/Part_AR_VLA_BoomSickle.Part_AR_VLA_BoomSickle,bAvailableForPartInspection,4,True,False"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Sickle/Parts/Part_AR_VLA_Underbarrel_Sickle.Part_AR_VLA_Underbarrel_Sickle:WeaponUseModeAspectData_0.WeaponFireProjectileComponent_0,FireRate,20,(BaseValue=1.500000),(BaseValue=3.500000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/_Unique/MalaksBane/Parts/Part_SR_DAL_Barrel_ETech_MalaksBane.Part_SR_DAL_Barrel_ETech_MalaksBane,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[2].AttributeEffects.AttributeEffects[1].ModifierValue,158,(BaseValueConstant=4.000000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000),(BaseValueConstant=2.000000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Dahl/_Shared/_Design/_Unique/MalaksBane/Parts/Part_SR_DAL_Barrel_ETech_MalaksBane.Part_SR_DAL_Barrel_ETech_MalaksBane:AspectList_WeaponUseModeAspectData.WeaponUseComponent_WeaponFireProjectileComponent,ProjectileSpeedScale,20,(BaseValue=1.000000),(BaseValue=1.500000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/ATL/_Shared/_Design/_Unique/RubysWrath/Parts/Part_ATL_Marker_RubysWrath.Part_ATL_Marker_RubysWrath:AspectList_WeaponUseModeSecondaryAspectData.Component_WeaponAmmoPoolComponent,ConsumeAmmoRegenDelay,9,18.000000,9.000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Atlas/_Shared/_Design/_Unique/RebellYell/Parts/Part_AR_ATL_Barrel_RebelYell.Part_AR_ATL_Barrel_RebelYell,InventoryAttributeEffects.InventoryAttributeEffects[0].ModifierValue.BaseValueConstant,8,0.700000,1.7"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Dahl/_Shared/_Design/_Unique/Hornet/Parts/Part_Dal_PS_Barrel_Hornet.Part_Dal_PS_Barrel_Hornet,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[2].ModifierValue.BaseValueConstant,9,85.000000,100"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/IonLaser/BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C,0,1,ExecuteUbergraph_BPWepFireBeam_IonLaser,2,665,1249,1:6,1:8"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Dahl/_Shared/_Design/_Unique/BOTD/LightProjectile_BOTD.Default__LightProjectile_BOTD_C,ProxyRadius,9,35.000000,100"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Dahl/_Shared/_Design/_Unique/BOTD/Parts/Part_DAL_AR_BOTD.Part_DAL_AR_BOTD,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[0].ModifierValue.DataTableValue.RowName,11,DAL_AR_BOTD,AR_BOTD"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Dahl/_Shared/_Design/Parts/Barrel/Barrel_01/Part_DAL_AR_Barrel_01.Part_DAL_AR_Barrel_01,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.550000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Dahl/_Shared/_Design/Parts/Barrel/Barrel_02/Part_DAL_AR_Barrel_02.Part_DAL_AR_Barrel_02,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.550000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Dahl/_Shared/_Design/Parts/Barrel/Barrel_03/Part_DAL_AR_Barrel_03.Part_DAL_AR_Barrel_03,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.550000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/ChildrenOfTheVault/_Shared/_Design/_Unique/PsychoStabber/Parts/Part_PS_COV_Barrel_PsychoStabber.Part_PS_COV_Barrel_PsychoStabber,InstigatorAttributeEffects,0,,((AttributeToModify=GbxAttributeData\'\"/Game/GameData/Attributes/DamageMultipliers/Att_DamageSourceInstigatorMultiplier_Melee.Att_DamageSourceInstigatorMultiplier_Melee\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=2.000000)))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Dahl/_Shared/_Design/Parts/Barrel/Barrel_01/Part_Dal_PS_Barrel_01.Part_Dal_PS_Barrel_01,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.650000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Dahl/_Shared/_Design/Parts/Barrel/Barrel_02/Part_Dal_PS_Barrel_02.Part_Dal_PS_Barrel_02,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.650000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Dahl/_Shared/_Design/Parts/Barrel/Barrel_03/Part_Dal_PS_Barrel_03.Part_Dal_PS_Barrel_03,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.650000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Hyperion/_Shared/_Design/_Unique/ConferenceCall/LightProjectile_HYP_SG_ConferenceCallSPlit.Default__LightProjectile_HYP_SG_ConferenceCallSPlit_C,CollideWithSourceDelay,8,0.0200000,0"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/Parts/Barrel/Barrel_01/Part_SM_DAL_Barrel_01.Part_SM_DAL_Barrel_01,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.500000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/Parts/Barrel/Barrel_02/Part_SM_DAL_Barrel_02.Part_SM_DAL_Barrel_02,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.500000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/Parts/Barrel/Barrel_03/Part_SM_DAL_Barrel_03.Part_SM_DAL_Barrel_03,InventoryAttributeEffects.InventoryAttributeEffects[1].ModifierValue.BaseValueScale,8,1.500000,2.4"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Faisor/Parts/Part_AR_VLA_Underbarrel_Faisor.Part_AR_VLA_Underbarrel_Faisor,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[3].ModifierValue.BaseValueConstant,8,1.700000,6"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Faisor/Parts/Part_AR_VLA_Underbarrel_Faisor.Part_AR_VLA_Underbarrel_Faisor:WeaponUseModeAspectData_0.WeaponFireProjectileComponent_0,ProjectilesPerShot,13,(BaseValue=6),(BaseValue=8)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Faisor/Parts/Part_AR_VLA_Underbarrel_Faisor.Part_AR_VLA_Underbarrel_Faisor:WeaponUseModeSecondaryAspectData_1.WeaponAmmoPoolComponent_0,AmmoRegenRate,8,0.500000,1.000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Faisor/Parts/Part_AR_VLA_Underbarrel_Faisor.Part_AR_VLA_Underbarrel_Faisor:WeaponUseModeSecondaryAspectData_1.WeaponAmmoPoolComponent_0,ConsumeAmmoRegenDelay,8,5.000000,1.00000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/Torgue/_Shared/_Design/_Unique/RYNO/Parts/Part_HW_TOR_Barrel_RYNO.Part_HW_TOR_Barrel_RYNO,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[3].ModifierValue.BaseValueConstant,8,1.400000,.8"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Maliwan/_Shared/_Design/_Unique/Hellshock/Parts/Part_PS_MAL_Barrel_HellShock.Part_PS_MAL_Barrel_HellShock:WeaponUseModeAspectData_1.WeaponFireProjectileComponent_0,ProjectilesPerShot,13,(BaseValue=1),(BaseValue=2)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Tediore/Shared/_Design/_Unique/BabyMaker/Parts/Part_PS_TED_Barrel_BabyMaker.Part_PS_TED_Barrel_BabyMaker:WeaponUseModeAspectData_1.WeaponFireProjectileComponent_0,FireRate,20,(BaseValue=3.400000),(BaseValue=6.0)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Hydrafrost/Ability_Hydrafrost.Ability_Hydrafrost_C,0,1,ExecuteUbergraph_Ability_Hydrafrost,1,222,8:0.500000,8:0.000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/TheWave/Parts/Part_SG_JAK_Barrel_TKWave.Part_SG_JAK_Barrel_TKWave,InstigatorAttributeEffects.InstigatorAttributeEffects[0],418,(AttributeToModifyContextSource=ThisInventoryActorWithInstigatorFallback,ModifierValueContext=Instigator,AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_CriticalHitDamageBonus.Att_CriticalHitDamageBonus\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=1.450000,DataTableValue=(DataTable=None,RowName=\"\",ValueName=\"\"),BaseValueAttribute=None,AttributeInitializer=None,BaseValueScale=1.000000)),((AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_CriticalHitDamageBonus.Att_CriticalHitDamageBonus\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=1.450000)),(ModifierValueContext=ThisInventoryActor,AttributeToModify=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_Spread.Att_Weapon_Spread\"\',ModifierType=ScaleSimple,ModifierValue=(BaseValueConstant=0.400000)))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/TheWave/Parts/Part_SG_JAK_Barrel_TKWave.Part_SG_JAK_Barrel_TKWave,InventoryAttributeEffects.InventoryAttributeEffects[2].ModifierValue.BaseValueConstant,8,1.500000,5"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Jakobs/_Shared/_Design/_Unique/TheWave/Parts/Part_SG_JAK_Barrel_TKWave.Part_SG_JAK_Barrel_TKWave:AspectList_WeaponUseModeAspectData.WeaponUseComponent_WeaponFireProjectileComponent,ProjectileSpeedScale,20,(BaseValue=1.000000),(BaseValue=2.000000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Maliwan/_Shared/_Design/_Unique/Recursion/LightProjectile_MAL_SG_Recursion.Default__LightProjectile_MAL_SG_Recursion_C,NumRecursions,1,3,7"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/ASMD/Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C:GbxProjectileMovement_GEN_VARIABLE,InitialSpeed,11,1200.000000,800"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Dahl/_Shared/_Design/_Unique/Vanquisher/StatusEffect_Vanquisher.StatusEffect_Vanquisher,AttributeEffects,425,((AttributeData=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_FireRate.Att_Weapon_FireRate\"\',ModifierType=ScaleSimple,BaseModifierValue=(BaseValueConstant=2.000000,DataTableValue=(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/GameplayAttributes/_Unique/DataTable_WeaponBalance_Unique_DAL.DataTable_WeaponBalance_Unique_DAL\"\',RowName=\"SM_Vanquisher\",ValueName=\"Custom_B_11_6D4E8C1140CC269ED614BC958ECB0E22\")))),((AttributeData=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_FireRate.Att_Weapon_FireRate\"\',ModifierType=ScaleSimple,BaseModifierValue=(BaseValueConstant=2.000000,DataTableValue=(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/GameplayAttributes/_Unique/DataTable_WeaponBalance_Unique_DAL.DataTable_WeaponBalance_Unique_DAL\"\',RowName=\"SM_Vanquisher\",ValueName=\"Custom_B_11_6D4E8C1140CC269ED614BC958ECB0E22\"))),(AttributeData=GbxAttributeData\'\"/Game/GameData/Weapons/Att_Weapon_Damage.Att_Weapon_Damage\"\',ModifierType=ScaleSimple,BaseModifierValue=(DataTableValue=(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/GameplayAttributes/_Unique/DataTable_WeaponBalance_Unique_DAL.DataTable_WeaponBalance_Unique_DAL\"\',RowName=\"SM_Vanquisher\",ValueName=\"Custom_B_11_6D4E8C1140CC269ED614BC958ECB0E22\"),BaseValueScale=1.600000)))"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  ppuVar5 = local_fe8;
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SMGs/Maliwan/_Shared/_Design/_Unique/Crit/Ability_CritFail.Default__Ability_CritFail_C,DropChance,8,0.125000,.05"
                ,0,1,ppuVar5,0);
  local_f98[0] = 0;
  local_f98[1] = 0x9a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f98,0);
  FGenericPlatformString::Memcpy
            (local_f98[0],
             L"/Game/Gear/Weapons/_Shared/_Design/EndGameParts/_Generic/SkillEnd_UniqueEnemyDamage/CDM_All_SkillEnd_UniqueEnemyDamage.CDM_All_SkillEnd_UniqueEnemyDamage"
             ,0x134);
  puVar1 = (undefined8 *)FName::FName(local_res10,L"CDM_All_SkillEnd_UniqueEnemyDamage",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142e05930();
  uVar6 = (ulonglong)ppuVar5 & 0xffffffff00000000;
  lVar3 = StaticFindObjectFastExplicit(uVar2,uVar4,local_f98,0,uVar6);
  if (local_f98[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    local_f98[2] = 0;
    local_f98[3] = 0x42;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f98 + 2,0);
    FGenericPlatformString::Memcpy
              (local_f98[2],L"/Game/GameData/DamageTypes/Impact/DmgType_Normal.DmgType_Normal_C",
               0x84);
    puVar1 = (undefined8 *)FName::FName(local_res18,L"DmgType_Normal_C",1);
    uVar4 = *puVar1;
    uVar2 = FUN_14171bfe0();
    uVar4 = StaticFindObjectFastExplicit(uVar2,uVar4,local_f98 + 2,0,uVar6 & 0xffffffff00000000);
    *(undefined8 *)(lVar3 + 0x138) = uVar4;
    if (local_f98[2] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(lVar3 + 0x158) = 0;
  }
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver,ConditionalValues.ConditionalValues[1].ValueIfAllConditionsAreTrue.DataTableValue,185,(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/DataTable_EndGame_DropChance.DataTable_EndGame_DropChance\"\',RowName=\"NoneChance_Mayhem_01\",ValueName=\"\"),(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/DataTable_EndGame_DropChance.DataTable_EndGame_DropChance\"\',RowName=\"NoneChance_Mayhem_03\",ValueName=\"\")"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver,ConditionalValues.ConditionalValues[3].ValueIfAllConditionsAreTrue.DataTableValue,185,(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/DataTable_EndGame_DropChance.DataTable_EndGame_DropChance\"\',RowName=\"NoneChance_Mayhem_03\",ValueName=\"\"),(DataTable=DataTable\'\"/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/DataTable_EndGame_DropChance.DataTable_EndGame_DropChance\"\',RowName=\"NoneChance_Mayhem_01\",ValueName=\"\")"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver.Conditions_GbxCondition_Comparison,OperandB.BaseValueConstant,8,1.000000,8.0"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver.Conditions_GbxCondition_Comparison,Operator,7,EqualTo,GreaterThanOrEqual"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver.Conditions_GbxCondition_Comparison_0,OperandB.BaseValueConstant,8,2.000000,5.0"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver.Conditions_GbxCondition_Comparison_0,Operator,7,EqualTo,GreaterThanOrEqual"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver.Conditions_GbxCondition_Comparison_1,OperandB.BaseValueConstant,8,3.000000,1.0"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/_Shared/_Design/EndGameParts/DropWeight/Att_EndGame_NoneChanceShields.Att_EndGame_NoneChanceShields:ValueResolver_ConditionalAttributeValueResolver.Conditions_GbxCondition_Comparison_1,Operator,7,EqualTo,GreaterThanOrEqual"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/_Unique/TheLob/Proj_Weapon_TOR_SG_TheLob.Default__Proj_Weapon_TOR_SG_TheLob_C,Dot_DamageScale,8,0.200000,1.2"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/_Unique/TheLob/Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C:GbxProjectileMovement_GEN_VARIABLE,ProjectileAcceleration,11,-125.000000,-200.0000000"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/_Unique/TheLob/Parts/Part_SG_Torgue_Barrel_ETech_TheLob.Part_SG_Torgue_Barrel_ETech_TheLob:AspectList_WeaponUseModeAspectData.WeaponUseComponent_BPWeaponFireProjectileComponent_Torgue,FireRate,20,(BaseValue=0.750000),(BaseValue=1.650000)"
                ,0,1,local_fe8,0);
  local_fb8 = 0;
  local_fa8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_fd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_fe8[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_FireStorm.Part_MAL_SR_Barrel_FireStorm,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[0].ModifierValue.BaseValueConstant,8,0.700000,2.25"
                ,0,1,local_fe8,0);
  uVar4 = FUN_140c5e9b0(local_f78,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_FireStorm.Part_MAL_SR_Barrel_FireStorm:AspectList_WeaponUseModeAspectData.WeaponUseComponent_WeaponFireProjectileComponent,LightProjectileData,4,None,BlueprintGeneratedClass\'/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/LightProjectile_MAL_SR_Storm.LightProjectile_MAL_SR_Storm_v2_C\'"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_f28,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_FireStorm.Part_MAL_SR_Barrel_FireStorm:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeaponChargeComponent_MAL,ChargeTime,20,(BaseValue=1.000000),(BaseValue=0.500000)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_ed8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_Storm.Part_MAL_SR_Barrel_Storm,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[0].ModifierValue.BaseValueConstant,8,0.600000,3.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_e88,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_Storm.Part_MAL_SR_Barrel_Storm:AspectList_WeaponUseModeAspectData.WeaponUseComponent_WeaponFireProjectileComponent,LightProjectileData,4,None,BlueprintGeneratedClass\'/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/LightProjectile_MAL_SR_Storm.LightProjectile_MAL_SR_Storm_v2_C\'"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_e38,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/SniperRifles/Maliwan/Shared/_Design/_Unique/_Legendary/Storm/Parts/Part_MAL_SR_Barrel_Storm.Part_MAL_SR_Barrel_Storm:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeaponChargeComponent_MAL,ChargeTime,20,(BaseValue=1.000000),(BaseValue=0.500000)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_de8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Geranium/Gear/Weapon/_Unique/Decoupler/Parts/Part_PS_MAL_Barrel_Decoupler.Part_PS_MAL_Barrel_Decoupler:WeaponUseModeAspectData_1.WeaponFireProjectileComponent_0,FireRate,20,(BaseValue=4.000000),(BaseValue=6.500000)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_d98,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Geranium/Gear/Weapon/_Unique/Narp/StatusEffect_Narp.StatusEffect_Narp,GameplayTags,15,(GameplayTags=),(GameplayTags=((TagName=\"StatusEffect.NonTransient\")))"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_d48,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Anarchy/StatusEffect_Anarchy.StatusEffect_Anarchy,GameplayTags,15,(GameplayTags=),(GameplayTags=((TagName=\"StatusEffect.NonTransient\")))"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_cf8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Geranium/Gear/Weapon/_Unique/ImaginaryNumber/Parts/Part_MAL_SR_Barrel_ImaginaryNumber.Part_MAL_SR_Barrel_ImaginaryNumber:AspectList_WeaponUseModeSecondaryAspectData.Component_BPWeaponChargeComponent_MAL,ChargeTime,20,(BaseValue=1.000000),(BaseValue=0.700000)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_ca8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/Weapons/HandCannon/Parts/Part_PS_TOR_Barrel_HandCannon.Part_PS_TOR_Barrel_HandCannon:AspectList_WeaponUseModeAspectData.WeaponUseComponent_BPWeaponFireProjectileComponent_Torgue,FireRate,20,(BaseValue=1.600000),(BaseValue=2.000000)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_c58,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Takedown2/Gear/Weapons/Globetrotter/Parts/Part_HW_COV_Barrel_Globetrotter.Part_HW_COV_Barrel_Globetrotter:AspectList_WeaponUseModeSecondaryAspectData.Component_BPHeatComponent_CoV,MaxShotsToBreak,1,8,12"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_c08,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Alisma/Gear/Weapon/_Unique/PAT_Mk3/AI/BPChar_Turret_PatMk3.Default__BPChar_Turret_PatMk3_C,bCanBeDamaged,4,True,False"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_bb8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Alisma/Gear/Weapon/_Unique/BanditLauncher/Parts/Part_HW_COV_Barrel_BanditoLauncher.Part_HW_COV_Barrel_BanditoLauncher,InventoryAttributeEffects.InventoryAttributeEffects[5].ModifierValue.BaseValueConstant,8,0.750000,0.33"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_b68,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Alisma/Gear/Weapon/_Unique/PAT_Mk3/AI/BPChar_Turret_PatMk3.Default__BPChar_Turret_PatMk3_C:TargetableComponent,bIsTargetable,4,True,False"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_b18,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/Weapons/EndGameParts/Character/Siren/Grasp_TerrorSkulls/Att_Calc_Grasp_TerrorSkulls.Att_Calc_Grasp_TerrorSkulls:ValueResolver_SimpleMathValueResolver,ValueB.BaseValueScale,8,1.000000,2.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_ac8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/_Design/_GearExtension/GParts/GPartExpansion_Weapons_BloodyHarvest.GPartExpansion_Weapons_BloodyHarvest,GenericParts.Parts.Parts[13].Weight.BaseValueScale,8,1.000000,0"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_a78,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/_Design/_GearExtension/GParts/Att_EndGame_GenericPartTerrorChance.Att_EndGame_GenericPartTerrorChance:ValueResolver_SimpleMathValueResolver,ValueA.BaseValueScale,8,1.000000,1.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_a28,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/_Design/_GearExtension/GParts/Att_EndGame_Siren_PartTerrorChance.Att_EndGame_Siren_PartTerrorChance:ValueResolver_SimpleMathValueResolver,ValueA.BaseValueScale,8,1.000000,1.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_9d8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/_Design/_GearExtension/GParts/Att_EndGame_Operative_PartTerrorChance.Att_EndGame_Operative_PartTerrorChance:ValueResolver_SimpleMathValueResolver,ValueA.BaseValueScale,8,1.000000,1.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_988,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/_Design/_GearExtension/GParts/Att_EndGame_Beastmaster_PartTerrorChance.Att_EndGame_Beastmaster_PartTerrorChance:ValueResolver_SimpleMathValueResolver,ValueA.BaseValueScale,8,1.000000,1.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_938,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/BloodyHarvest/Gear/_Design/_GearExtension/GParts/Att_EndGame_Gunner_PartTerrorChance.Att_EndGame_Gunner_PartTerrorChance:ValueResolver_SimpleMathValueResolver,ValueA.BaseValueScale,8,1.000000,1.5"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_8e8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Scoville/Parts/Part_PS_TOR_Barrel_Scoville.Part_PS_TOR_Barrel_Scoville,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[2].ModifierValue.BaseValueConstant,8,3.000000,1"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_898,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Soulrender/LightProjectile_Soulrender.Default__LightProjectile_Soulrender_C,ImpactedActorDamageScale.BaseValueConstant,8,1.000000,8"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_848,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/EmbersPurge/Att_Calc_Damage_EmbersPurge.Att_Calc_Damage_EmbersPurge:ValueResolver_SimpleMathValueResolver,ValueB.BaseValueConstant,8,1.250000,6"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_7f8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/DNA/Firing/Proj_MAL_SM_DNA.Proj_MAL_SM_DNA_C:GbxProjectileMovement_GEN_VARIABLE,InitialSpeed,10,500.000000,1500"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_7a8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/DNA/Firing/Proj_MAL_SM_DNA.Proj_MAL_SM_DNA_C:GbxProjectileMovement_GEN_VARIABLE,MaxSpeed,11,1000.000000,1500"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_758,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/DNA/Parts/Part_SM_MAL_Barrel_DNA.Part_SM_MAL_Barrel_DNA:WeaponUseModeAspectData_0.WeaponUseComponent_BPWeaponFireProjectile_MAL_SMG,FireRate,20,(BaseValue=3.600000),(BaseValue=5.0)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_708,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Mutant/Parts/Part_AR_JAK_Barrel_Mutant.Part_AR_JAK_Barrel_Mutant,InstigatorAttributeEffects.InstigatorAttributeEffects[0].ModifierValue.BaseValueConstant,8,0.100000,.35"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_6b8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Anarchy/UIStat_Desc_Anarchy.UIStat_Desc_Anarchy,SectionName,9,Secondary,ManufacturerBottom"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_668,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Anarchy/UIStat_RedText_Anarchy.UIStat_RedText_Anarchy,SectionName,18,ManufacturerBottom,Secondary"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_618,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/GameData/Weapons/WeaponShield/Attributes/Att_WeaponShield_Base.Att_WeaponShield_Base:ValueResolver_SimpleMathValueResolver,ValueB.BaseValueConstant,8,0.600000,0.900000"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_5c8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/ClassMods/_Design/SRN/StatusEffect_SIR_CM_Hib.StatusEffect_SIR_CM_Hib,AttributeEffects.AttributeEffects[0].BaseModifierValue.BaseValueScale,8,1.000000,-1.000000"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_578,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/SparkyBoom/Parts/Part_AR_COV_Barrel_SparkyBoom.Part_AR_COV_Barrel_SparkyBoom:AspectList_InventoryAbilityAspectData,Abilities.Abilities[0].Ability,4,None,BlueprintGeneratedClass\'/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/SparkyBoom/Ability_SparkyBoom.Ability_SparkyBoom_v2_C\'"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_528,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Event2/Gear/Weapon/_Unique/OPQ/Parts/Part_AR_ATL_Tracker_OPQ.Part_AR_ATL_Tracker_OPQ:AspectList_WeaponUseModeAspectData.WeaponUseComponent_WeaponFireProjectileComponent,FireRate,20,(BaseValue=5.500000),(BaseValue=0.600000)"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_4d8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/Anointed/WhileSliding/FireRate/Ability_EG_TriggerWhileSliding_FireRate.Default__Ability_EG_TriggerWhileSliding_FireRate_C,AbilityEffects.AbilityEffects[0].StatusEffectData,144,StatusEffectData\'/Game/PatchDLC/Raid1/Gear/Anointed/WhileAirborn/FireRate/StatusEffect_WhileAirborn_FireRate.StatusEffect_WhileAirborn_FireRate\',StatusEffectData\'/Game/PatchDLC/Raid1/Gear/Anointed/WhileSliding/FireRate/StatusEffect_WhileSliding_FireRate.StatusEffect_WhileSliding_FireRate\'"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_488,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/Anointed/WhileSliding/FireRate/StatusEffect_WhileSliding_FireRate.StatusEffect_WhileSliding_FireRate,AttributeEffects.AttributeEffects[0].BaseModifierValue.DataTableValue,191,(DataTable=DataTable\'\"/Game/PatchDLC/Raid1/Gear/Anointed/DataTable_Raid1_Endgame.DataTable_Raid1_Endgame\"\',RowName=\"Airborn_FireRate\",ValueName=\"Custom_A_21_F62C55A14374986C5D004E94DD277B3D\"),(DataTable=DataTable\'\"/Game/PatchDLC/Raid1/Gear/Anointed/DataTable_Raid1_Endgame.DataTable_Raid1_Endgame\"\',RowName=\"Sliding_FireRate\",ValueName=\"Custom_A_21_F62C55A14374986C5D004E94DD277B3D\")"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_438,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/Anointed/WhileAirborn/FireRate/StatusEffect_WhileAirborn_FireRate.StatusEffect_WhileAirborn_FireRate,AttributeEffects.AttributeEffects[0].BaseModifierValue.DataTableValue,191,(DataTable=DataTable\'\"/Game/PatchDLC/Raid1/Gear/Anointed/DataTable_Raid1_Endgame.DataTable_Raid1_Endgame\"\',RowName=\"Sliding_FireRate\",ValueName=\"Custom_A_21_F62C55A14374986C5D004E94DD277B3D\"),(DataTable=DataTable\'\"/Game/PatchDLC/Raid1/Gear/Anointed/DataTable_Raid1_Endgame.DataTable_Raid1_Endgame\"\',RowName=\"Airborn_FireRate\",ValueName=\"Custom_A_21_F62C55A14374986C5D004E94DD277B3D\")"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_3e8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Event2/Gear/Weapon/_Unique/YellowCake/Parts/Part_HW_COV_Barrel_ETech_YellowCake.Part_HW_COV_Barrel_ETech_YellowCake,InventoryAttributeEffects.InventoryAttributeEffects[3].ModifierType,5,Scale,ScaleSimple"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_398,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Lucky7/Firing/StatusEffect_Lucky7_7.StatusEffect_Lucky7_7,GameplayTags,15,(GameplayTags=),(GameplayTags=((TagName=\"StatusEffect.NonTransient\")))"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_348,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Lucky7/Firing/StatusEffect_Lucky7_FullAuto.StatusEffect_Lucky7_FullAuto,GameplayTags,15,(GameplayTags=),(GameplayTags=((TagName=\"StatusEffect.NonTransient\")))"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_2f8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Lucky7/Firing/StatusEffect_Lucky7_Torgue.StatusEffect_Lucky7_Torgue,GameplayTags,15,(GameplayTags=),(GameplayTags=((TagName=\"StatusEffect.NonTransient\")))"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_2a8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Event2/Gear/Weapon/EndGameParts/_Generic/Passive_All_CritStatusEffects/GPart_Passive_All_CritStatusEffect.GPart_Passive_All_CritStatusEffect,UIStats.UIStats[1].UIStat,130,UIStatData_Attribute\'/Game/Gear/Weapons/_Shared/_Design/EndGameParts/UIStat/UIStat_Gunner_WeaponFoiler.UIStat_Gunner_WeaponFoiler\',UIStatData_Attribute\'/Game/Gear/Weapons/_Shared/_Design/EndGameParts/UIStat/UIStat_Generic_WeaponFoiler.UIStat_Generic_WeaponFoiler\'"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_258,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/EventVDay/Gear/Weapon/WeaponTrinkets/_Shared/Trinket_League_VDay_2.Trinket_League_VDay_2,PreviewImage,0,,/Game/PatchDLC/EventVDay/UI/_Shared/CustomIconsTrinkets/CustomTrinket_VDay_Heart_02.CustomTrinket_VDay_Heart_02"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_208,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/Gear/Weapons/Shotguns/Hyperion/_Shared/_Design/_Unique/TheButcher/Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C,0,1,ExecuteUbergraph_Ability_ButcherAmmoRegen,1,479,8:0.300000,8:0.660000"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_1b8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/Pistols/Torgue/_Shared/_Design/_Unique/Foursum/Parts/Part_PS_TOR_Barrel_4SUM.Part_PS_TOR_Barrel_4SUM,WeaponUseModeAttributeEffects.WeaponUseModeAttributeEffects[0].AttributeEffects.AttributeEffects[0].ModifierValue.BaseValueConstant,10,200.000000,400"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_168,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/Anointed/Generic/ConsecutiveHits_DmgStack/StackingStrategy_ConsecutiveHitsDmgStack.StackingStrategy_ConsecutiveHitsDmgStack,MaxCount,3,200,100"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_118,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/Raid1/Gear/Anointed/Generic/KillStack_ReloadDamage/StatusEffect_Generic_KillStackReloadDamage.StatusEffect_Generic_KillStackReloadDamage,StackingStrategy,126,StatusEffectStackingStrategyData_Capped\'/Game/GameData/StackingStrategy/StackingStrategy_Capped_99.StackingStrategy_Capped_99\',StackingStrategy_Capped_10"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_c8,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/Gear/Weapons/HeavyWeapons/Torgue/_Shared/_Design/_Unique/Hive/LightProjectile_TOR_HW_HiveBee.Default__LightProjectile_TOR_HW_HiveBee_C,Speed,10,500.000000,1000"
                ,0,1,uVar4,0);
  uVar4 = FUN_140c5e9b0(local_78,AK::MemoryMgr::StartProfileThreadUsage);
  FUN_142d8ae80(0,
                L"(1,1,0,),/Game/PatchDLC/VaultCard2/Gear/Artifacts/Unique/Shlooter/PresStatusEffect_Shlooter.PresStatusEffect_Shlooter,AttributeEffects.AttributeEffects[0].BaseModifierValue.BaseValueConstant,11,2000.000000,10.000000"
                ,0,1,uVar4,0);
  return;
}



// FUNCTION 140cc69f0 FUN_140cc69f0 body=290 status=ok
// SIG undefined FUN_140cc69f0(void)

void FUN_140cc69f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    if ((*(char *)(param_2 + 0xf8) == '\0') || (lVar2 = FUN_1409a7f40(param_2), lVar2 != 0)) {
      plVar3 = *(longlong **)(param_1 + 0x640);
      plVar1 = plVar3 + *(int *)(param_1 + 0x648);
      for (plVar4 = plVar3; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x760) == param_2)) {
          if (lVar2 != 0) {
            return;
          }
          break;
        }
      }
      if (plVar3 != plVar1) {
        while ((lVar2 = *plVar3, lVar2 == 0 || (*(longlong *)(lVar2 + 0x760) != 0))) {
          plVar3 = plVar3 + 1;
          if (plVar3 == plVar1) {
            return;
          }
        }
        if (lVar2 != 0) {
          FUN_140f0b5d0(lVar2,param_2);
        }
      }
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x640);
      plVar1 = plVar3 + *(int *)(param_1 + 0x648);
      if (plVar3 != plVar1) {
        while ((lVar2 = *plVar3, lVar2 == 0 || (*(longlong *)(lVar2 + 0x760) != param_2))) {
          plVar3 = plVar3 + 1;
          if (plVar3 == plVar1) {
            return;
          }
        }
        if (lVar2 != 0) {
          FUN_140f0b5d0(lVar2,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140cc6b20 FUN_140cc6b20 body=791 status=ok
// SIG undefined FUN_140cc6b20(void)

void FUN_140cc6b20(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  byte local_res10;
  longlong local_68;
  undefined8 local_60;
  
  local_res10 = 1;
  lVar9 = *(longlong *)(param_1 + 0x340);
  lVar12 = lVar9 + (longlong)*(int *)(param_1 + 0x348) * 0x18;
  for (; (lVar9 != lVar12 && (local_res10 = *(byte *)(lVar9 + 0x10), local_res10 != 0));
      lVar9 = lVar9 + 0x18) {
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x358)) {
    lVar12 = 0;
    do {
      plVar11 = *(longlong **)(param_1 + 0x340);
      lVar9 = *(longlong *)(param_1 + 0x350);
      plVar6 = plVar11 + (longlong)*(int *)(param_1 + 0x348) * 3;
      bVar10 = local_res10;
      for (; plVar11 != plVar6; plVar11 = plVar11 + 3) {
        if ((char)plVar11[2] != '\0') {
          plVar8 = *(longlong **)(param_1 + 0x360);
          plVar1 = plVar8 + (longlong)*(int *)(param_1 + 0x368) * 3;
          for (; plVar8 != plVar1; plVar8 = plVar8 + 3) {
            lVar5 = *plVar11;
            if ((lVar5 != 0) && (*plVar8 != 0)) {
              local_68 = 0;
              local_60 = 0;
              FUN_142ff6b30(*plVar8,0,*(undefined4 *)(param_1 + 0x3b0),&local_68);
              for (lVar4 = local_68; lVar4 != (longlong)(int)local_60 * 0x20 + local_68;
                  lVar4 = lVar4 + 0x20) {
                if (*(longlong *)(lVar4 + 8) == lVar5) {
                  if (local_68 != 0) {
                    FMemory::Free(local_68);
                  }
                  cVar3 = FUN_140c70c50(param_1,*(undefined8 *)(lVar12 + lVar9),*plVar8);
                  if (cVar3 == '\0') goto LAB_140cc6cb6;
                  bVar2 = 1;
                  goto LAB_140cc6cc1;
                }
              }
              if (local_68 != 0) {
                FMemory::Free();
              }
            }
LAB_140cc6cb6:
          }
        }
        bVar2 = 0;
LAB_140cc6cc1:
        bVar10 = bVar10 | bVar2;
      }
      plVar6 = *(longlong **)(lVar12 + 8 + lVar9);
      *(byte *)(lVar12 + 0x10 + lVar9) = bVar10;
      *(byte *)(lVar12 + 0x11 + lVar9) = bVar10;
      if (plVar6 != (longlong *)0x0) {
        fVar13 = _guard_xfg_dispatch_icall_nop(2.0,(float)iVar7);
        lVar5 = 0;
        if ((9.223372e+18 <= fVar13) && (fVar13 = fVar13 - 9.223372e+18, fVar13 < 9.223372e+18)) {
          lVar5 = -0x8000000000000000;
        }
        *(bool *)(lVar12 + 0x10 + lVar9) =
             (*(ulonglong *)(param_1 + 0x388) & (longlong)fVar13 + lVar5) != 0;
        if (plVar6[0x5d] != 0) {
          UCheckBox::SetCheckedState();
          plVar6 = *(longlong **)(lVar12 + 8 + lVar9);
        }
        (**(code **)(*plVar6 + 0x298))(plVar6);
      }
      iVar7 = iVar7 + 1;
      lVar12 = lVar12 + 0x18;
    } while (iVar7 < *(int *)(param_1 + 0x358));
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x350);
    lVar12 = lVar9 + (longlong)*(int *)(param_1 + 0x358) * 0x18;
    for (; lVar9 != lVar12; lVar9 = lVar9 + 0x18) {
      if ((*(char *)(lVar9 + 0x11) != '\0') &&
         (cVar3 = UPanelWidget::HasChild
                            (*(undefined8 *)(param_1 + 0x318),*(undefined8 *)(lVar9 + 8)),
         cVar3 == '\0')) {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x318) + 0x860);
        (**(code **)(*plVar6 + 0x28))(plVar6,*(undefined8 *)(lVar9 + 8));
      }
    }
  }
  return;
}



// FUNCTION 140cc6e40 FUN_140cc6e40 body=650 status=ok
// SIG undefined FUN_140cc6e40(void)

void FUN_140cc6e40(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  float fVar14;
  longlong local_58;
  undefined8 local_50;
  
  uVar7 = 0;
  uVar12 = uVar7;
  if (*(int *)(param_1 + 0x368) < 1) {
LAB_140cc6fb5:
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x360);
      lVar2 = lVar8 + (longlong)*(int *)(param_1 + 0x368) * 0x18;
      for (; lVar8 != lVar2; lVar8 = lVar8 + 0x18) {
        if ((*(char *)(lVar8 + 0x11) != '\0') &&
           (cVar3 = UPanelWidget::HasChild
                              (*(undefined8 *)(param_1 + 800),*(undefined8 *)(lVar8 + 8)),
           cVar3 == '\0')) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 800) + 0x860);
          (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined8 *)(lVar8 + 8));
        }
      }
    }
    return;
  }
LAB_140cc6e90:
  lVar2 = *(longlong *)(param_1 + 0x360);
  if (*(longlong *)(uVar12 + lVar2) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x340);
    uVar13 = 0;
    plVar5 = plVar10 + (longlong)*(int *)(param_1 + 0x348) * 3;
    for (; plVar10 != plVar5; plVar10 = plVar10 + 3) {
      if ((((char)plVar10[2] != '\0') && (lVar8 = *plVar10, lVar8 != 0)) &&
         (*(longlong *)(uVar12 + lVar2) != 0)) {
        local_58 = 0;
        local_50 = 0;
        FUN_142ff6b30(*(longlong *)(uVar12 + lVar2),0,*(undefined4 *)(param_1 + 0x3b0),&local_58);
        for (lVar4 = local_58; lVar4 != (longlong)(int)local_50 * 0x20 + local_58;
            lVar4 = lVar4 + 0x20) {
          if (*(longlong *)(lVar4 + 8) == lVar8) {
            if (local_58 != 0) {
              FMemory::Free();
            }
            puVar9 = *(undefined8 **)(param_1 + 0x350);
            puVar1 = puVar9 + (longlong)*(int *)(param_1 + 0x358) * 3;
            if (puVar9 != puVar1) goto LAB_140cc7050;
            goto LAB_140cc707a;
          }
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
    }
    goto LAB_140cc6f39;
  }
  goto LAB_140cc6f7d;
  while( true ) {
    uVar13 = 0;
    puVar9 = puVar9 + 3;
    if (puVar9 == puVar1) break;
LAB_140cc7050:
    if ((*(char *)(puVar9 + 2) != '\0') &&
       (cVar3 = FUN_140c70c50(param_1,*puVar9,*(undefined8 *)(uVar12 + lVar2)), cVar3 != '\0'))
    goto LAB_140cc707a;
  }
LAB_140cc6f39:
  uVar6 = 0;
LAB_140cc6f3b:
  *(undefined1 *)(uVar12 + 0x10 + lVar2) = uVar6;
  *(undefined1 *)(uVar12 + 0x11 + lVar2) = uVar13;
  if ((*(longlong *)(param_1 + 800) != 0) &&
     (plVar5 = *(longlong **)(uVar12 + 8 + lVar2), plVar5 != (longlong *)0x0)) {
    if (plVar5[0x5d] != 0) {
      UCheckBox::SetCheckedState(plVar5[0x5d]);
      plVar5 = *(longlong **)(uVar12 + 8 + lVar2);
    }
    (**(code **)(*plVar5 + 0x298))();
  }
LAB_140cc6f7d:
  uVar11 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar11;
  uVar12 = uVar12 + 0x18;
  if (*(int *)(param_1 + 0x368) <= (int)uVar11) goto LAB_140cc6fb5;
  goto LAB_140cc6e90;
LAB_140cc707a:
  uVar13 = 1;
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,(float)(int)uVar7);
  lVar8 = 0;
  if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
    lVar8 = -0x8000000000000000;
  }
  if ((*(ulonglong *)(param_1 + 0x390) & (longlong)fVar14 + lVar8) != 0) {
    uVar6 = 1;
    uVar13 = 1;
    goto LAB_140cc6f3b;
  }
  goto LAB_140cc6f39;
}



// FUNCTION 140cc70d0 FUN_140cc70d0 body=2557 status=ok
// SIG undefined FUN_140cc70d0(void)

void FUN_140cc70d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined4 *puVar4;
  char cVar5;
  bool bVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  void *_Src;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  char *pcVar23;
  ulonglong uVar24;
  longlong *plVar25;
  int iVar26;
  longlong *plVar27;
  float fVar28;
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  ulonglong *local_198;
  void *local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  ulonglong *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 uStack_100;
  char cStack_ff;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [24];
  undefined1 local_90 [80];
  ulonglong uVar22;
  
  uVar22 = 0;
  if (*(int *)(param_1 + 0x368) < 1) {
LAB_140cc7a2e:
    plVar20 = *(longlong **)(param_1 + 0x328);
    if ((plVar20 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x330) != 0)) {
      (**(code **)(*plVar20 + 0x288))(plVar20,2);
      FUN_1420e74a0(*(undefined8 *)(param_1 + 0x328));
      (**(code **)(**(longlong **)(param_1 + 0x330) + 0x288))(*(longlong **)(param_1 + 0x330),2);
      FUN_1420e74a0(*(undefined8 *)(param_1 + 0x330));
      plVar20 = (longlong *)(*(longlong *)(param_1 + 0x328) + 0x868);
      (**(code **)(*plVar20 + 0x38))(plVar20,0);
      plVar20 = (longlong *)(*(longlong *)(param_1 + 0x330) + 0x868);
      (**(code **)(*plVar20 + 0x38))(plVar20,0);
      *(undefined4 *)(param_1 + 0x378) = 0;
      if (*(int *)(param_1 + 0x37c) != 0) {
        TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x370,0);
        return;
      }
    }
    return;
  }
  pcVar23 = (char *)(*(longlong *)(param_1 + 0x360) + 0x10);
  uVar11 = uVar22;
  uVar24 = uVar22;
  do {
    cVar5 = *pcVar23;
    pcVar23 = pcVar23 + 0x18;
    iVar26 = (int)uVar22;
    if (cVar5 == '\0') {
      iVar26 = (int)uVar24;
    }
    uVar24 = (ulonglong)iVar26;
    uVar12 = (ulonglong)((int)uVar11 + 1);
    if (cVar5 == '\0') {
      uVar12 = uVar11;
    }
    uVar21 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar21;
    uVar11 = uVar12;
  } while ((int)uVar21 < *(int *)(param_1 + 0x368));
  if ((int)uVar12 != 1) goto LAB_140cc7a2e;
  puVar3 = (ulonglong *)(param_1 + 0x3a0);
  if ((*(longlong *)(param_1 + 0x398) == 0) || (*puVar3 == 0)) {
    *(longlong *)(param_1 + 0x398) = 0x7fffffffffffffff;
    *puVar3 = 0x7fffffffffffffff;
  }
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x360) + uVar24 * 0x18);
  local_198 = puVar3;
  if (lVar17 != 0) {
    local_res10 = *(longlong *)(lVar17 + 0x38);
    if (local_res10 != 0) goto LAB_140cc71da;
    if (*(longlong *)(lVar17 + 0x30) != 0) {
      local_res10 = FUN_140cb9700();
      goto LAB_140cc71da;
    }
  }
  local_res10 = 0;
LAB_140cc71da:
  lVar18 = local_res10;
  if (lVar17 == 0) {
    return;
  }
  if (local_res10 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x328) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x330) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x338) == 0) {
    return;
  }
  lVar13 = UUGStartScreenUW::GetPrivateStaticClass();
  lVar17 = *(longlong *)(param_1 + 0x338);
  while( true ) {
    if (lVar17 == 0) {
      return;
    }
    if (lVar17 == lVar13) break;
    lVar17 = *(longlong *)(lVar17 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x338) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x328) + 0x288))(*(longlong **)(param_1 + 0x328),0);
  FUN_1420e74a0(*(undefined8 *)(param_1 + 0x328));
  (**(code **)(**(longlong **)(param_1 + 0x330) + 0x288))(*(longlong **)(param_1 + 0x330),0);
  FUN_1420e74a0(*(undefined8 *)(param_1 + 0x330));
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x370,0);
  }
  plVar20 = (longlong *)(*(longlong *)(param_1 + 0x328) + 0x868);
  (**(code **)(*plVar20 + 0x38))(plVar20,1);
  plVar20 = (longlong *)(*(longlong *)(param_1 + 0x330) + 0x868);
  (**(code **)(*plVar20 + 0x38))(plVar20,1);
  plVar20 = *(longlong **)(lVar18 + 0x48);
  local_res20 = *(longlong *)(param_1 + 0x330);
  local_1a0 = 0;
  local_150 = plVar20 + (longlong)*(int *)(lVar18 + 0x50) * 5;
  if (plVar20 == local_150) {
    return;
  }
  local_1c8 = 0;
  plVar20 = plVar20 + 3;
  local_168 = puVar3;
  do {
    lVar17 = *(longlong *)(param_1 + 0x330);
    if (local_res20 == lVar17) {
      lVar17 = *(longlong *)(param_1 + 0x328);
      local_168 = (ulonglong *)(param_1 + 0x398);
    }
    local_res18 = plVar20;
    local_res20 = lVar17;
    if (*(longlong *)(param_1 + 0x338) != 0) {
      lVar14 = UUGStartScreenUW::GetPrivateStaticClass();
      lVar13 = *(longlong *)(param_1 + 0x338);
      for (lVar19 = lVar13; lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 0x30)) {
        if (lVar19 == lVar14) goto LAB_140cc73aa;
      }
    }
    lVar13 = 0;
LAB_140cc73aa:
    lVar13 = CreateWidget<UUserWidget,UMainPlayerWidget>
                       (*(undefined8 *)(param_1 + 0x2c8),lVar13,local_1c8);
    plVar27 = plVar20;
    if (((lVar13 != 0) && (*(longlong *)(lVar18 + 0x38) != 0)) && (lVar17 != 0)) {
      (**(code **)(*(longlong *)(lVar17 + 0x860) + 0x28))((longlong *)(lVar17 + 0x860),lVar13);
      FUN_1420f6bf0(lVar13);
      (**(code **)(*(longlong *)(lVar13 + 0x208) + 0x38))((longlong *)(lVar13 + 0x208),1);
      local_res9 = 0xc018;
      local_res8 = 0xc0;
      local_resb = 0xff;
      uVar15 = (**(code **)(**(longlong **)(lVar18 + 0x38) + 0x288))
                         (*(longlong **)(lVar18 + 0x38),local_c0,(char)plVar20[-2]);
      uVar15 = FText::ToString(uVar15);
      if (*(longlong *)(lVar13 + 0x2f0) != 0) {
        plVar25 = *(longlong **)(lVar13 + 0x2f0);
        lVar17 = *plVar25;
        uVar15 = FText::FromString(local_a8,uVar15);
        (**(code **)(lVar17 + 0x2d0))(plVar25,uVar15);
        FLinearColor::FLinearColor(&local_f8,&local_res8);
        local_d8 = 0;
        local_e8 = local_f8;
        uStack_e4 = uStack_f4;
        uStack_e0 = uStack_f0;
        uStack_dc = uStack_ec;
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_142130380(*(undefined8 *)(lVar13 + 0x2f0),&local_e8);
      }
      plVar25 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b8 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar25 + 0xc);
          iVar26 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar26 == 1) {
            (**(code **)(*plVar25 + 8))(plVar25,1);
          }
        }
      }
      if (*(longlong **)(lVar13 + 0x2e8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar13 + 0x2e8) + 0x298))();
      }
      pwVar16 = _guard_xfg_dispatch_icall_nop
                          (L"&UOakDebugWeaponBuilderMenu::OnOptionListItemFocused",L"::");
      pwVar8 = (wchar_t *)0x0;
      while (pwVar7 = pwVar16, pwVar7 != (wchar_t *)0x0) {
        pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_180,pwVar8 + 2,1);
      lVar17 = local_180;
      FWeakObjectPtr::operator=(lVar13 + 0x270,param_1);
      *(longlong *)(lVar13 + 0x278) = lVar17;
      local_1c0 = 0;
      if ((lVar17 != 0) && (lVar17 = FWeakObjectPtr::Get(lVar13 + 0x270), lVar17 != 0)) {
        UObject::FindFunction(lVar17,*(undefined8 *)(lVar13 + 0x278));
      }
      plVar25 = (longlong *)*plVar20;
      local_158 = plVar25 + (longlong)(int)plVar20[1] * 8;
      lVar18 = local_res10;
      if (plVar25 != local_158) {
        do {
          lVar17 = *plVar25;
          if (lVar17 == 0) {
LAB_140cc762e:
            lVar17 = 0;
            lVar18 = lVar17;
          }
          else {
            lVar18 = FUN_14302b1c0();
            if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_140cc762e;
            local_1b8 = 0;
            lVar18 = 0;
            if (*(longlong *)(param_1 + 0x338) != 0) {
              lVar19 = UUGStartScreenUW::GetPrivateStaticClass();
              for (lVar13 = *(longlong *)(param_1 + 0x338);
                  (lVar18 = 0, lVar13 != 0 &&
                  (lVar18 = *(longlong *)(param_1 + 0x338), lVar13 != lVar19));
                  lVar13 = *(longlong *)(lVar13 + 0x30)) {
              }
            }
            lVar18 = CreateWidget<UUserWidget,UMainPlayerWidget>
                               (*(undefined8 *)(param_1 + 0x2c8),lVar18,local_1b8);
          }
          if (lVar18 != 0) {
            (**(code **)(*(longlong *)(local_res20 + 0x860) + 0x28))
                      ((longlong *)(local_res20 + 0x860),lVar18);
            pwVar16 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakDebugWeaponBuilderMenu::OnOptionListItemFocused",L"::");
            pwVar8 = (wchar_t *)0x0;
            while (pwVar7 = pwVar16, pwVar7 != (wchar_t *)0x0) {
              pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
              pwVar8 = pwVar7;
            }
            FName::FName(&local_178,pwVar8 + 2,1);
            lVar13 = local_178;
            FWeakObjectPtr::operator=(lVar18 + 0x270,param_1);
            *(longlong *)(lVar18 + 0x278) = lVar13;
            local_1b0 = 0;
            if ((lVar13 != 0) && (lVar13 = FWeakObjectPtr::Get(lVar18 + 0x270), lVar13 != 0)) {
              UObject::FindFunction(lVar13,*(undefined8 *)(lVar18 + 0x278));
            }
            pwVar16 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakDebugWeaponBuilderMenu::OnPartSelectedChanged",L"::");
            pwVar8 = (wchar_t *)0x0;
            while (pwVar7 = pwVar16, pwVar7 != (wchar_t *)0x0) {
              pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
              pwVar8 = pwVar7;
            }
            FName::FName(&local_170,pwVar8 + 2,1);
            lVar13 = local_170;
            FWeakObjectPtr::operator=(lVar18 + 0x260,param_1);
            *(longlong *)(lVar18 + 0x268) = lVar13;
            local_1a8 = 0;
            if ((lVar13 != 0) && (lVar13 = FWeakObjectPtr::Get(lVar18 + 0x260), lVar13 != 0)) {
              UObject::FindFunction(lVar13,*(undefined8 *)(lVar18 + 0x268));
            }
            FUN_1420f6bf0();
            local_138 = plVar25[2];
            lStack_130 = plVar25[3];
            uStack_fe = 0;
            uStack_fc = 0;
            local_148 = *plVar25;
            lStack_140 = plVar25[1];
            cStack_ff = *(char *)((longlong)local_res18 + -4);
            local_118 = plVar25[6];
            uStack_110 = plVar25[7];
            uStack_fa = 0;
            local_128 = plVar25[4];
            lStack_120 = plVar25[5];
            fVar28 = (float)local_1a0;
            if (local_1a0 < 0) {
              fVar28 = fVar28 + 1.8446744e+19;
            }
            local_1a0 = local_1a0 + 1;
            local_108 = lVar18;
            fVar28 = _guard_xfg_dispatch_icall_nop(2.0,fVar28);
            lVar13 = 0;
            if ((9.223372e+18 <= fVar28) && (fVar28 = fVar28 - 9.223372e+18, fVar28 < 9.223372e+18))
            {
              lVar13 = -0x8000000000000000;
            }
            uStack_100 = (*local_168 & (longlong)fVar28 + lVar13) != 0;
            if (*(longlong *)(lVar18 + 0x2e8) != 0) {
              UCheckBox::SetCheckedState();
            }
            local_160 = *(undefined8 *)(lVar17 + 0x18);
            local_1d8 = 0;
            local_1d0 = 0;
            FName::ToString(&local_160,&local_1d8);
            if (cStack_ff == '\0') {
              local_190 = (void *)0x0;
              local_188 = 0xb;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
              _Src = local_190;
              FGenericPlatformString::Memcpy(local_190,L"(DISABLED)",0x16);
              uVar22 = local_1d0;
              if (((int)local_188 != 0) && (iVar26 = (int)local_188 + -1, iVar26 != 0)) {
                iVar9 = (int)local_1d0;
                lVar17 = (longlong)(int)local_1d0;
                iVar10 = (uint)((int)local_1d0 == 0) + iVar26 + (int)local_1d0;
                local_1d0 = CONCAT44(local_1d0._4_4_,iVar10);
                if (local_1d0._4_4_ < iVar10) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,uVar22 & 0xffffffff);
                }
                _Dst = (void *)(local_1d8 + (lVar17 - (ulonglong)(iVar9 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar26 * 2);
                *(undefined2 *)((longlong)iVar26 * 2 + (longlong)_Dst) = 0;
              }
              if (_Src != (void *)0x0) {
                FMemory::Free(_Src);
              }
            }
            plVar20 = (longlong *)(param_1 + 0x370);
            if (*(longlong *)(lVar18 + 0x2f0) != 0) {
              plVar27 = *(longlong **)(lVar18 + 0x2f0);
              lVar17 = *plVar27;
              uVar15 = FText::FromString(local_90,&local_1d8);
              (**(code **)(lVar17 + 0x2d0))(plVar27,uVar15);
            }
            iVar26 = FUN_140c73f40(plVar20,&local_148);
            if (iVar26 == -1) {
              iVar26 = *(int *)(param_1 + 0x378);
              lVar17 = (longlong)iVar26;
              *(int *)(param_1 + 0x378) = iVar26 + 1;
              if (*(int *)(param_1 + 0x37c) < iVar26 + 1) {
                TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar20,iVar26);
              }
              lVar18 = *plVar20;
              plVar20 = (longlong *)(lVar18 + lVar17 * 0x50);
              *plVar20 = local_148;
              plVar20[1] = lStack_140;
              plVar20 = (longlong *)(lVar18 + 0x10 + lVar17 * 0x50);
              *plVar20 = local_138;
              plVar20[1] = lStack_130;
              plVar20 = (longlong *)(lVar18 + 0x20 + lVar17 * 0x50);
              *plVar20 = local_128;
              plVar20[1] = lStack_120;
              puVar4 = (undefined4 *)(lVar18 + 0x30 + lVar17 * 0x50);
              *puVar4 = (undefined4)local_118;
              puVar4[1] = local_118._4_4_;
              puVar4[2] = (undefined4)uStack_110;
              puVar4[3] = uStack_110._4_4_;
              puVar4 = (undefined4 *)(lVar18 + 0x40 + lVar17 * 0x50);
              *puVar4 = (undefined4)local_108;
              puVar4[1] = local_108._4_4_;
              puVar4[2] = CONCAT22(uStack_fe,CONCAT11(cStack_ff,uStack_100));
              puVar4[3] = CONCAT22(uStack_fa,uStack_fc);
            }
            if (local_1d8 != 0) {
              FMemory::Free();
            }
          }
          plVar25 = plVar25 + 8;
          lVar18 = local_res10;
          plVar27 = local_res18;
        } while (plVar25 != local_158);
      }
    }
    plVar20 = plVar27 + 5;
    local_168 = local_198;
    if (plVar27 + 2 == local_150) {
      return;
    }
  } while( true );
}



// FUNCTION 140cc7ad0 FUN_140cc7ad0 body=232 status=ok
// SIG undefined FUN_140cc7ad0(void)

void FUN_140cc7ad0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    iVar1 = *(int *)(param_1 + 0x744);
    iVar2 = *(int *)(param_1 + 0x740);
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0x654) = *(int *)(param_1 + 0x654) + 1;
      iVar8 = *(int *)(param_1 + 0x654);
      bVar5 = false;
      iVar7 = *(int *)(param_1 + 0x648) + -1;
      lVar10 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar9 = lVar10 << 4;
        bVar5 = false;
        do {
          lVar3 = *(longlong *)(param_1 + 0x640);
          if (((*(int *)(lVar9 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar9 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,iVar1,iVar2), cVar6 == '\0')) {
            bVar5 = true;
          }
          lVar9 = lVar9 + -0x10;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
        iVar8 = *(int *)(param_1 + 0x654);
      }
      *(int *)(param_1 + 0x654) = iVar8 + -1;
      if (bVar5) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x640),0);
      }
    }
    *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x740);
  }
  return;
}



// FUNCTION 140cc7bc0 FUN_140cc7bc0 body=468 status=ok
// SIG undefined FUN_140cc7bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cc7bc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x128) == '\x03') {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0xa44) = 0;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x100) != 0) {
      local_58 = 0;
      local_50 = 0;
      FUN_140c60da0(*(longlong *)(DAT_146b33f38 + 0x100),L"OakGameState",&local_58);
      lVar2 = local_58;
      iVar3 = 0x20;
      if ((int)local_50 < 0x21) {
        iVar3 = (int)local_50;
      }
      if (0 < iVar3) {
        uVar5 = uVar4;
        do {
          plVar1 = *(longlong **)(lVar2 + uVar4 * 8);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1,&local_58,param_1);
            fVar6 = (float)FUN_142cc4350(&local_58,0);
            *(uint *)(param_1 + 0xa44) =
                 *(uint *)(param_1 + 0xa44) | (uint)(fVar6 != 0.0) << ((byte)uVar5 & 0x1f);
            switch(local_50 & 0xff) {
            case 0:
              if ((char)local_50 == '\0') {
                local_50 = CONCAT71(local_50._1_7_,0xff);
              }
              break;
            case 1:
              if ((char)local_50 == '\x01') {
                local_50 = CONCAT71(local_50._1_7_,0xff);
              }
              break;
            case 2:
              if ((char)local_50 == '\x02') {
                local_50 = CONCAT71(local_50._1_7_,0xff);
              }
              break;
            case 3:
            case 4:
              if ((char)local_50 == '\x03') {
                local_50 = CONCAT71(local_50._1_7_,0xff);
              }
              break;
            case 5:
              if ((char)local_50 == '\x03') {
                local_50._0_1_ = -1;
              }
            }
          }
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < (longlong)iVar3);
      }
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140cc7db0 FUN_140cc7db0 body=171 status=ok
// SIG undefined FUN_140cc7db0(void)

undefined8
FUN_140cc7db0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  if (param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x148))(param_3);
    if (lVar2 != 0) {
      lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
      if ((lVar2 != 0) && (lVar2 = lVar2 + ((ulonglong)bVar1 * 3 + 0x1c1) * 4, lVar2 != 0)) {
        FUN_14248a390(lVar2,param_2,param_4,param_5,param_6,param_7);
        return param_2;
      }
    }
  }
  FUN_14246da50(param_2,0);
  return param_2;
}



// FUNCTION 140cc7e60 FUN_140cc7e60 body=226 status=ok
// SIG undefined FUN_140cc7e60(void)

void FUN_140cc7e60(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    iVar1 = *(int *)(param_1 + 0x6cc);
    iVar3 = 1;
    if (*(char *)(param_1 + 0x6ec) == '\0') {
      if (*(char *)(param_1 + 0x6f4) == '\0') {
        if (*(longlong **)(param_1 + 0x460) == (longlong *)0x0) {
          iVar2 = 1;
        }
        else {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x760))();
        }
        *(undefined4 *)(param_1 + 0x6d0) = 2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x6f0);
        *(undefined4 *)(param_1 + 0x6d0) = 1;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x6e8);
      *(undefined4 *)(param_1 + 0x6d0) = 0;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x6cc) = iVar2;
    if (iVar1 != iVar2) {
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x5c8,iVar2)
      ;
    }
    iVar1 = *(int *)(param_1 + 0x6d4);
    if (*(longlong **)(param_1 + 0x460) != (longlong *)0x0) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x760))();
    }
    *(int *)(param_1 + 0x6d4) = iVar3;
    if (iVar1 != iVar3) {
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x5e0,iVar3)
      ;
    }
  }
  return;
}



// FUNCTION 140cc7f50 FUN_140cc7f50 body=2698 status=ok
// SIG undefined FUN_140cc7f50(void)

void FUN_140cc7f50(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  void *_Src;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar18 = *(longlong **)(param_1 + 0x5d8);
  pwVar17 = (wchar_t *)0x0;
  if (plVar18 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnWeaponChanged",L"::");
      pwVar16 = pwVar17;
      while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
        pwVar16 = pwVar9;
      }
      FName::FName(&local_res8,pwVar16 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar18 + 0x20a,param_1,local_res8);
      uVar8 = FUN_141312e30();
      lVar6 = (**(code **)(*plVar18 + 0x628))(plVar18,uVar8);
      if (lVar6 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnFFYLStopped",L"::");
        pwVar16 = pwVar17;
        while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar16 = pwVar9;
        }
        FName::FName(&local_res8,pwVar16 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x1180,param_1,local_res8);
      }
      uVar8 = AGFireballProjectile::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar18 + 0x628))(plVar18,uVar8);
      if (lVar6 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnPlayerAbilitySlotChanged",L"::");
        pwVar16 = pwVar17;
        while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar16 = pwVar9;
        }
        FName::FName(&local_res8,pwVar16 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x2a8,param_1,local_res8);
        FUN_140483870(lVar6 + 0x178,param_1);
        FUN_140483870(lVar6 + 400,param_1);
        plVar18 = *(longlong **)(param_1 + 0x640);
        pwVar16 = (wchar_t *)((longlong)*(int *)(param_1 + 0x648) & 0x1fffffffffffffff);
        if (plVar18 + *(int *)(param_1 + 0x648) < plVar18) {
          pwVar16 = pwVar17;
        }
        pwVar7 = pwVar17;
        if (pwVar16 != (wchar_t *)0x0) {
          do {
            if (*plVar18 != 0) {
              FUN_140f0b5d0(*plVar18,0);
            }
            plVar18 = plVar18 + 1;
            pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
          } while (pwVar7 != pwVar16);
        }
      }
    }
    else {
      plVar18 = *(longlong **)(param_1 + 0x5d8);
      uVar8 = FUN_1412d7930();
      lVar6 = (**(code **)(*plVar18 + 0x628))(plVar18,uVar8);
      if (lVar6 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnWeaponChanged",L"::");
        pwVar16 = pwVar17;
        while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar16 = pwVar9;
        }
        FName::FName(&local_res8,pwVar16 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x1c8,param_1,local_res8);
      }
    }
    if (0 < *(int *)(param_1 + 0x6d0)) {
      plVar18 = (longlong *)**(longlong **)(param_1 + 0x6c8);
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x548))(plVar18,0);
      }
      *(undefined4 *)(param_1 + 0x6d0) = 0;
      if (*(int *)(param_1 + 0x6d4) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x6c8,0);
      }
    }
  }
  pwVar16 = pwVar17;
  if (*(longlong *)(param_1 + 0x630) != 0) {
    pwVar16 = *(wchar_t **)(*(longlong *)(param_1 + 0x630) + 0x488);
  }
  if (pwVar16 != (wchar_t *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar16 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar16 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      uStack_40 = uStack_40 & 0xffffffff00000000;
      local_48 = AK::MemoryMgr::StartProfileThreadUsage;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnWeaponChanged",L"::");
      pwVar7 = pwVar17;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar7 = pwVar4;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_1407260e0(pwVar16 + 0x828,param_1,&local_48,local_res8);
      uVar8 = FUN_141312e30();
      lVar6 = (**(code **)(*(longlong *)pwVar16 + 0x628))(pwVar16,uVar8);
      if (lVar6 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnFFYLStopped",L"::");
        while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar17 = pwVar9;
        }
        FName::FName(&local_res10,pwVar17 + 2,1);
        uVar19 = local_res10;
        plVar18 = (longlong *)(lVar6 + 0x1180);
        FWeakObjectPtr::operator=(&local_48,0);
        uStack_40 = 0;
        FWeakObjectPtr::operator=(&local_48,param_1);
        uStack_40 = uVar19;
        local_res8 = 0;
        if ((uVar19 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_48), lVar10 != 0)) {
          UObject::FindFunction(lVar10,uStack_40);
        }
        piVar2 = (int *)*plVar18;
        iVar12 = *(int *)(lVar6 + 0x1188);
        for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)iVar12 * 4; piVar13 = piVar13 + 4) {
          if (((*piVar13 == (int)local_48) &&
              (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
              bVar21 = piVar13[1] == local_48._4_4_, bVar21)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((bVar21) && (*(ulonglong *)(piVar13 + 2) == uStack_40)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if (bVar21) {
            if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140cc8489;
            break;
          }
        }
        iVar12 = *(int *)(lVar6 + 0x1188);
        lVar10 = (longlong)iVar12;
        *(int *)(lVar6 + 0x1188) = iVar12 + 1;
        if (*(int *)(lVar6 + 0x118c) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar12);
        }
        lVar6 = *plVar18;
        *(int *)(lVar6 + lVar10 * 0x10) = (int)local_48;
        *(int *)(lVar6 + 4 + lVar10 * 0x10) = local_48._4_4_;
        *(ulonglong *)(lVar6 + 8 + lVar10 * 0x10) = uStack_40;
LAB_140cc8489:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar18);
      }
      uVar8 = AGFireballProjectile::GetPrivateStaticClass();
      lVar6 = (**(code **)(*(longlong *)pwVar16 + 0x628))(pwVar16,uVar8);
      if (lVar6 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnPlayerAbilitySlotChanged",L"::");
        pwVar17 = (wchar_t *)0x0;
        while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar17 = pwVar9;
        }
        FName::FName(&local_res10,pwVar17 + 2,1);
        uVar19 = local_res10;
        plVar18 = (longlong *)(lVar6 + 0x2a8);
        FWeakObjectPtr::operator=(&local_48,0);
        uStack_40 = 0;
        FWeakObjectPtr::operator=(&local_48,param_1);
        uStack_40 = uVar19;
        local_res8 = 0;
        if ((uVar19 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_48), lVar10 != 0)) {
          UObject::FindFunction(lVar10,uStack_40);
        }
        piVar2 = (int *)*plVar18;
        iVar12 = *(int *)(lVar6 + 0x2b0);
        for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)iVar12 * 4; piVar13 = piVar13 + 4) {
          if (((*piVar13 == (int)local_48) &&
              (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
              bVar21 = piVar13[1] == local_48._4_4_, bVar21)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((bVar21) && (*(ulonglong *)(piVar13 + 2) == uStack_40)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if (bVar21) {
            if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140cc85f9;
            break;
          }
        }
        iVar12 = *(int *)(lVar6 + 0x2b0);
        lVar10 = (longlong)iVar12;
        *(int *)(lVar6 + 0x2b0) = iVar12 + 1;
        if (*(int *)(lVar6 + 0x2b4) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar12);
        }
        lVar3 = *plVar18;
        *(int *)(lVar3 + lVar10 * 0x10) = (int)local_48;
        *(int *)(lVar3 + 4 + lVar10 * 0x10) = local_48._4_4_;
        *(ulonglong *)(lVar3 + 8 + lVar10 * 0x10) = uStack_40;
LAB_140cc85f9:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar18);
        uStack_40._4_4_ = (uint)(uStack_40 >> 0x20);
        local_48 = FUN_140cbecc0;
        uStack_40._0_4_ = 0;
        FUN_140c5ed80(lVar6 + 0x178,&local_res8,param_1,&local_48);
        local_48 = FUN_140cbed30;
        uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
        FUN_140c5ed80(lVar6 + 400,&local_res8,param_1,&local_48);
        local_48 = (code *)0x0;
        uStack_40 = uStack_40 & 0xffffffff;
        puVar20 = (undefined8 *)0x0;
        iVar12 = 0;
        if (&local_48 != (undefined8 *)(lVar6 + 0x550)) {
          uVar1 = *(uint *)(lVar6 + 0x558);
          _Src = *(void **)(lVar6 + 0x550);
          uStack_40 = (ulonglong)uVar1;
          puVar20 = (undefined8 *)0x0;
          iVar12 = 0;
          if (uVar1 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,uVar1,0)
            ;
            puVar20 = (undefined8 *)local_48;
            _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)(int)uVar1 << 3);
            iVar12 = (int)uStack_40;
          }
        }
        uVar14 = 0;
        uVar19 = (ulonglong)((longlong)(puVar20 + iVar12) + (7 - (longlong)puVar20)) >> 3;
        if (puVar20 + iVar12 < puVar20) {
          uVar19 = uVar14;
        }
        puVar15 = puVar20;
        if (uVar19 != 0) {
          do {
            FUN_140cc69f0(param_1,*puVar15);
            uVar14 = uVar14 + 1;
            puVar15 = puVar15 + 1;
          } while (uVar14 != uVar19);
        }
        if (puVar20 != (undefined8 *)0x0) {
          FMemory::Free(puVar20);
        }
      }
    }
    else {
      uVar8 = FUN_1412d7930();
      lVar6 = (**(code **)(*(longlong *)pwVar16 + 0x628))(pwVar16,uVar8);
      if (lVar6 != 0) {
        uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
        local_48 = AK::MemoryMgr::StartProfileThreadUsage;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnWeaponChanged",L"::");
        while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar17 = pwVar9;
        }
        FName::FName(&local_res8,pwVar17 + 2,1);
        FUN_1407260e0(lVar6 + 0x1c8,param_1,&local_48,local_res8);
      }
    }
  }
  uStack_40 = *(undefined8 *)(param_1 + 0x5d8);
  local_48 = (code *)pwVar16;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x820,&local_48);
  lVar6 = *(longlong *)(param_1 + 0x5d8);
  if (lVar6 != 0) {
    lVar10 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      FUN_1407665e0(lVar6 + 0x24d8,param_1);
    }
  }
  if (pwVar16 != (wchar_t *)0x0) {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(pwVar16 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar16 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakHUD::OnVaultRewardReceived",L"::");
      pwVar17 = (wchar_t *)0x0;
      while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
        pwVar17 = pwVar9;
      }
      FName::FName(&local_res10,pwVar17 + 2,1);
      pwVar17 = pwVar16 + 0x126c;
      FWeakObjectPtr::operator=(&local_48,0);
      uStack_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_res8 = 0;
      uStack_40 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
        UObject::FindFunction(lVar6,uStack_40);
      }
      piVar2 = *(int **)pwVar17;
      iVar12 = *(int *)(pwVar16 + 0x1270);
      pwVar7 = (wchar_t *)local_48;
      for (piVar13 = piVar2; local_48 = (code *)pwVar7, piVar13 != piVar2 + (longlong)iVar12 * 4;
          piVar13 = piVar13 + 4) {
        local_48._0_4_ = (int)pwVar7;
        if (((*piVar13 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)pwVar7 >> 0x20),
            bVar21 = piVar13[1] == local_48._4_4_, bVar21)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar21 = true;
        }
        else {
          bVar21 = false;
        }
        if ((bVar21) && (*(ulonglong *)(piVar13 + 2) == uStack_40)) {
          bVar21 = true;
        }
        else {
          bVar21 = false;
        }
        if (bVar21) {
          if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140cc89ad;
          break;
        }
        pwVar7 = (wchar_t *)local_48;
      }
      iVar12 = *(int *)(pwVar16 + 0x1270);
      *(int *)(pwVar16 + 0x1270) = iVar12 + 1;
      if (*(int *)(pwVar16 + 0x1272) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar17,iVar12);
      }
      puVar11 = (undefined4 *)((longlong)iVar12 * 0x10 + *(longlong *)pwVar17);
      *puVar11 = (int)local_48;
      puVar11[1] = local_48._4_4_;
      *(ulonglong *)(puVar11 + 2) = uStack_40;
LAB_140cc89ad:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar17);
    }
  }
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  return;
}



// FUNCTION 140cc89e0 FUN_140cc89e0 body=436 status=ok
// SIG undefined FUN_140cc89e0(void)

void FUN_140cc89e0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_18;
  int local_10;
  
  plVar1 = param_1 + 0xeb;
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (*(int *)((longlong)param_1 + 0x764) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      lVar4 = FWeakObjectPtr::Get();
      if (lVar4 == 0) {
LAB_140cc8aad:
        lVar4 = 0;
      }
      else {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140cc8aad;
        lVar4 = *(longlong *)(lVar4 + 0x990);
      }
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x908);
      }
      if (lVar4 != 0) {
        plVar6 = (longlong *)FUN_142dd0650();
        plVar8 = (longlong *)*plVar6;
        plVar6 = plVar8 + (int)plVar6[1];
        for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
          lVar4 = *plVar8;
          lVar5 = *(longlong *)(lVar4 + 0x118);
          if (lVar5 == 0) {
LAB_140cc8b34:
            lVar4 = *(longlong *)(lVar4 + 0x118);
LAB_140cc8b3b:
            iVar2 = (int)param_1[0xec];
            *(int *)(param_1 + 0xec) = iVar2 + 1;
            if (*(int *)((longlong)param_1 + 0x764) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
          }
          else {
            lVar7 = FUN_14291fb80();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140cc8b34;
            lVar4 = *(longlong *)(lVar5 + 0x488);
            if (lVar4 != 0) goto LAB_140cc8b3b;
          }
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140cc8bc0 Register body=147 status=ok
// SIG undefined Register(void)

void FTickableObjectRenderThread::Register(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = DAT_146ac3b48;
  iVar1 = DAT_146ac3b38;
  if (*(char *)(param_1 + 9) != '\0') {
    lVar3 = (longlong)DAT_146ac3b48;
    DAT_146ac3b48 = DAT_146ac3b48 + 1;
    if (DAT_146ac3b4c < DAT_146ac3b48) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ac3b40,iVar2);
    }
    *(longlong *)(DAT_146ac3b40 + lVar3 * 8) = param_1;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  lVar3 = (longlong)DAT_146ac3b38;
  DAT_146ac3b38 = DAT_146ac3b38 + 1;
  if (DAT_146ac3b3c < DAT_146ac3b38) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ac3b30,iVar1);
  }
  *(longlong *)(DAT_146ac3b30 + lVar3 * 8) = param_1;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 140cc8c60 FUN_140cc8c60 body=433 status=ok
// SIG undefined FUN_140cc8c60(void)

void FUN_140cc8c60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_res10;
  longlong *local_28;
  int local_20;
  undefined4 local_1c;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>((longlong *)(param_1 + 0x640),&local_res10);
    plVar9 = (longlong *)0x0;
    plVar7 = plVar9;
    if (*(longlong *)(param_1 + 0x630) != 0) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x630) + 0x990);
    }
    if (plVar7 != (longlong *)0x0) {
      uVar3 = AGFireballProjectile::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar3);
      if (lVar4 != 0) {
        local_28 = (longlong *)0x0;
        local_1c = 0;
        iVar6 = 0;
        if (&local_28 != (longlong **)(lVar4 + 0x550)) {
          local_20 = *(int *)(lVar4 + 0x558);
          lVar8 = (longlong)local_20;
          plVar7 = *(longlong **)(lVar4 + 0x550);
          iVar6 = local_20;
          if (local_20 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_28,local_20,0);
            plVar9 = local_28;
            _guard_xfg_dispatch_icall_nop(local_28,plVar7,lVar8 << 3);
            iVar6 = local_20;
          }
        }
        for (plVar7 = plVar9; plVar7 != plVar9 + iVar6; plVar7 = plVar7 + 1) {
          lVar4 = *plVar7;
          if ((lVar4 != 0) &&
             ((*(char *)(lVar4 + 0xf8) == '\0' ||
              (cVar2 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar4), cVar2 != '\0'))))
          {
            plVar5 = *(longlong **)(param_1 + 0x640);
            plVar1 = plVar5 + *(int *)(param_1 + 0x648);
            for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
              if ((*plVar5 != 0) && (lVar4 == *(longlong *)(*plVar5 + 0x760))) goto LAB_140cc8dbc;
            }
            lVar8 = FUN_1409a7f40(lVar4);
            if ((*(char *)(lVar4 + 0xf8) == '\0') ||
               ((lVar8 != 0 && (*(char *)(lVar8 + 0x7c) == *(char *)(param_2 + 0x730))))) {
              FUN_140f0b5d0(param_2,lVar4);
              if (plVar9 == (longlong *)0x0) {
                return;
              }
              FMemory::Free(plVar9);
              return;
            }
          }
LAB_140cc8dbc:
        }
        if (plVar9 != (longlong *)0x0) {
          FMemory::Free(plVar9);
        }
      }
    }
    FUN_140f0b5d0(param_2,0);
  }
  return;
}



// FUNCTION 140cc8e20 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_RobotKeeper_C__pf218076579::bpf__StartSelectBuild__pf(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x710) = param_2;
  return;
}



// FUNCTION 140cc8e30 FUN_140cc8e30 body=463 status=ok
// SIG undefined FUN_140cc8e30(void)

void FUN_140cc8e30(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_18;
  int local_10;
  
  if (((param_2[4] != 0) && (lVar9 = (**(code **)(*param_1 + 0x148))(), lVar9 != 0)) &&
     (iVar8 = FUN_142235230(param_1), iVar8 != 3)) {
    plVar1 = param_1 + 0x140;
    lVar12 = (longlong)(int)param_1[0x141];
    lVar11 = *plVar1;
    lVar9 = lVar11 + lVar12 * 0x28;
    if (lVar11 != lVar9) {
      do {
        if (*(longlong *)(lVar11 + 0x20) == param_2[4]) {
          return;
        }
        lVar11 = lVar11 + 0x28;
      } while (lVar11 != lVar9);
    }
    iVar8 = (int)param_1[0x141] + 1;
    *(int *)(param_1 + 0x141) = iVar8;
    if (*(int *)((longlong)param_1 + 0xa0c) < iVar8) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    lVar9 = *plVar1;
    uVar10 = param_2[1];
    puVar2 = (undefined8 *)(lVar9 + lVar12 * 0x28);
    *puVar2 = *param_2;
    puVar2[1] = uVar10;
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 3);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar3 = (undefined4 *)(lVar9 + 0x10 + lVar12 * 0x28);
    *puVar3 = *(undefined4 *)(param_2 + 2);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    *(undefined8 *)(lVar9 + 0x20 + lVar12 * 0x28) = param_2[4];
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar10,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) break;
      lVar9 = FWeakObjectPtr::Get();
      if (lVar9 != 0) {
        lVar11 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((bVar7) && (*(longlong *)(lVar9 + 0x978) != 0)) {
          FUN_142d9e0d0(*(longlong *)(lVar9 + 0x978),*param_2,1,param_2[2],
                        *(undefined4 *)(param_2 + 3),4,1,1,param_2[4],0,0,1,0);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140cc9000 FUN_140cc9000 body=86 status=ok
// SIG undefined FUN_140cc9000(void)

void FUN_140cc9000(longlong param_1)

{
  undefined8 *puVar1;
  longlong local_18;
  longlong lStack_10;
  
  if (((*(char *)(param_1 + 0x10) != '\0') && (DAT_14686c501 != '\0')) && (DAT_14686ca90 != 0)) {
    puVar1 = (undefined8 *)GetMoviePlayer();
    local_18 = DAT_14686ca90;
    lStack_10 = DAT_14686ca98;
    if (DAT_14686ca98 != 0) {
      LOCK();
      *(int *)(DAT_14686ca98 + 8) = *(int *)(DAT_14686ca98 + 8) + 1;
      UNLOCK();
    }
    (**(code **)*puVar1)(puVar1,&local_18);
  }
  return;
}



// FUNCTION 140cc9060 FUN_140cc9060 body=631 status=ok
// SIG undefined FUN_140cc9060(void)

void FUN_140cc9060(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_140cc919f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_140cc919f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x78 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x74) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0xe) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140cc92e0 FUN_140cc92e0 body=529 status=ok
// SIG undefined FUN_140cc92e0(void)

void FUN_140cc92e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140cc941f;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140cc941f:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0xa8 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0xa4) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0xa0) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 140cc9500 FUN_140cc9500 body=348 status=ok
// SIG undefined FUN_140cc9500(void)

void FUN_140cc9500(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != (longlong *)0x0) {
    bVar2 = false;
    if ((0 < *(int *)(param_1 + 0x6d0)) && ((longlong *)**(longlong **)(param_1 + 0x6c8) == param_2)
       ) {
      (**(code **)(*param_2 + 0x548))(param_2,0);
      bVar2 = true;
    }
    lVar3 = (longlong)*(int *)(param_1 + 0x6d0);
    if (*(int *)(param_1 + 0x6d0) != 0) {
      iVar8 = 0;
      bVar9 = (longlong *)**(undefined8 **)(param_1 + 0x6c8) != param_2;
      lVar5 = 0;
      iVar6 = 0;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar6 + 1;
        if (lVar5 < lVar3) {
          puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x6c8) + lVar5 * 8);
          do {
            if (bVar9 != ((longlong *)*puVar4 != param_2)) break;
            iVar7 = iVar7 + 1;
            lVar5 = lVar5 + 1;
            puVar4 = puVar4 + 1;
          } while (lVar5 < lVar3);
        }
        if (bVar9 != false) {
          if (iVar8 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar8 * 8),
                       (void *)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar6 * 8),
                       (longlong)(iVar7 - iVar6) << 3);
          }
          iVar8 = iVar8 + (iVar7 - iVar6);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar6 = iVar7;
      } while (lVar5 < lVar3);
      *(int *)(param_1 + 0x6d0) = iVar8;
    }
    if (((bVar2) && (0 < *(int *)(param_1 + 0x6d0))) &&
       (plVar1 = (longlong *)**(longlong **)(param_1 + 0x6c8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x548))(plVar1,1);
    }
  }
  return;
}



// FUNCTION 140cc9660 Remove body=421 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar5 = FCrc::MemCrc_DEPRECATED(param_2,0x10,0);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  uVar11 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar8 + ((longlong)iVar5 & uVar11) * 4);
  if (iVar5 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while( true ) {
    lVar10 = (longlong)iVar5;
    piVar9 = (int *)(lVar10 * 0x1c + lVar3);
    if (((piVar9[1] == param_2[1] && piVar9[2] == param_2[2]) && piVar9[3] == param_2[3]) &&
        *param_2 == *piVar9) break;
    iVar5 = piVar9[5];
    if (iVar5 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar11 = (longlong)*(int *)(lVar10 * 0x1c + 0x18 + lVar3) & uVar11;
    piVar9 = (int *)((longlong)plVar8 + uVar11 * 4);
    iVar2 = *(int *)((longlong)plVar8 + uVar11 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar5) {
        *piVar9 = *(int *)(lVar10 * 0x1c + 0x14 + lVar3);
        break;
      }
      piVar9 = (int *)((longlong)iVar2 * 0x1c + 0x14 + lVar3);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)iVar5 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar5;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)(lVar10 * 0x1c + *param_1);
  *puVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar5;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return 1;
}



// FUNCTION 140cc9810 RemoveAtImpl body=255 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FOnlineLeaderboardsInterfaceEOS::FDeferredQueryLeaderboardRanksRequest,TSizedDefaultAllocator<32>_>
     ::RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x18);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
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
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar5 * 0x18);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140cc9910 FUN_140cc9910 body=224 status=ok
// SIG undefined FUN_140cc9910(void)

void FUN_140cc9910(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(*param_1 + (longlong)param_2 * 0x50);
    iVar3 = param_3;
    do {
      *puVar2 = &PTR_FUN_144278ac0;
      if (puVar2[8] != 0) {
        FMemory::Free();
      }
      *puVar2 = &PTR_FUN_1441d26b8;
      puVar2 = puVar2 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x50),
                 (void *)((longlong)(param_2 + param_3) * 0x50 + *param_1),(longlong)iVar1 * 0x50);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140cc99f0 FUN_140cc99f0 body=225 status=ok
// SIG undefined FUN_140cc99f0(void)

void FUN_140cc99f0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + 0x68 + (longlong)param_2 * 0xf0;
    iVar3 = param_3;
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar2 + 0x68);
      FUN_140bff340(lVar2);
      FUN_140c64420(lVar2 + -0x10);
      if (*(longlong *)(lVar2 + -0x60) != 0) {
        FMemory::Free();
      }
      lVar2 = lVar2 + 0xf0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xf0),
                 (void *)((longlong)(param_2 + param_3) * 0xf0 + *param_1),(longlong)iVar1 * 0xf0);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140cc9ae0 RemoveAtImpl body=255 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FText,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
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
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar5 * 0x18);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140cc9be0 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x1c;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x1c;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cc9c90 FUN_140cc9c90 body=49 status=ok
// SIG undefined FUN_140cc9c90(void)

void FUN_140cc9c90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x2e8) + 0x748,param_1);
  }
  FUN_14212c7b0(param_1);
  return;
}



// FUNCTION 140cc9cd0 FUN_140cc9cd0 body=114 status=ok
// SIG undefined FUN_140cc9cd0(void)

void FUN_140cc9cd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (((byte)param_2 != 0) && (lVar2 = FUN_140cb7010(param_1,param_2,0), lVar2 != 0)) {
    FUN_142dbb5d0(lVar2,param_3);
    cVar1 = FUN_1407c3030(lVar2);
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x8a8) = *(uint *)(param_1 + 0x8a8) & ~(1 << ((byte)param_2 - 1 & 0x1f));
    }
  }
  return;
}



// FUNCTION 140cc9d50 FUN_140cc9d50 body=750 status=ok
// SIG undefined FUN_140cc9d50(void)

void FUN_140cc9d50(longlong param_1,ulonglong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  ulonglong local_78;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  uVar10 = 0;
  uVar14 = 0;
  if (*(longlong *)(param_1 + 0x630) == 0) {
    return;
  }
  lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x630) + 0x980) + 0x10))();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_1414d9130();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  uVar12 = uVar10;
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x5e8) + 0x520);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_50 = 0xffffffff;
    local_4c = 0;
    if (lVar4 == 0) {
      local_40 = 0;
    }
    else {
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_68,lVar4);
      FSoftObjectPath::operator=(&local_40,uVar5);
      FWeakObjectPtr::operator=(&local_50,lVar4);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_4c = CONCAT44(DAT_1464b56f4,(undefined4)local_4c);
    }
    uVar12 = 1;
    cVar2 = FSoftObjectPath::operator==(&local_40,lVar3 + 0x10c8);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_140cc9e70;
    }
  }
  bVar1 = false;
LAB_140cc9e70:
  if ((uVar12 != 0) && (local_38 != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    plVar8 = (longlong *)*param_2;
    local_78 = 0;
    local_6c = 0;
    plVar15 = plVar8 + (longlong)(int)param_2[1] * 4;
    uVar12 = uVar10;
    uVar13 = uVar10;
    if (plVar8 != plVar15) {
LAB_140cc9ec1:
      if (*plVar8 != 0) {
        lVar4 = UGSquadMemberWidget::GetPrivateStaticClass();
        for (lVar3 = *plVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == lVar4) {
            if (*plVar8 != 0) {
              lVar3 = FUN_141352bb0();
              if (*plVar8 == 0) goto LAB_140cca01e;
              lVar6 = UGSquadMemberWidget::GetPrivateStaticClass();
              lVar7 = *plVar8;
              lVar4 = lVar7;
              goto joined_r0x000140cca009;
            }
            break;
          }
        }
      }
LAB_140cc9ee9:
      bVar1 = false;
      goto LAB_140cc9eeb;
    }
LAB_140cc9f40:
    if (param_2 != &local_78) {
      iVar11 = (int)param_2[1];
      uVar12 = *param_2;
      if (iVar11 != 0) {
        plVar8 = (longlong *)(uVar12 + 8);
        do {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar12 = *param_2;
      }
      if (uVar12 != 0) {
        FMemory::Free();
      }
      *param_2 = uVar13;
      uVar13 = 0;
      *(int *)(param_2 + 1) = (int)uVar10;
      uVar10 = 0;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar14;
    }
    if ((int)uVar10 != 0) {
      plVar8 = (longlong *)(uVar13 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 4;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 != 0);
    }
    if (uVar13 != 0) {
      FMemory::Free(uVar13);
    }
  }
  return;
joined_r0x000140cca009:
  if (lVar4 == 0) goto LAB_140cca01e;
  if (lVar4 == lVar6) goto joined_r0x000140cca023;
  lVar4 = *(longlong *)(lVar4 + 0x30);
  goto joined_r0x000140cca009;
LAB_140cca01e:
  lVar7 = 0;
joined_r0x000140cca023:
  do {
    if (lVar7 == 0) break;
    if (lVar7 == lVar3) goto LAB_140cc9ee9;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  } while( true );
  bVar1 = true;
LAB_140cc9eeb:
  if (bVar1) {
    iVar11 = (int)uVar10;
    local_70 = iVar11 + 1;
    if ((int)uVar12 < (int)local_70) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(&local_78,uVar10);
      uVar12 = (ulonglong)local_6c;
      uVar13 = local_78;
    }
    uVar10 = (ulonglong)local_70;
    lVar3 = (longlong)iVar11 * 0x20;
    *(longlong *)(lVar3 + uVar13) = *plVar8;
    FString::FString(uVar13 + 8 + lVar3,plVar8 + 1);
    *(char *)(lVar3 + 0x18 + uVar13) = (char)plVar8[3];
  }
  uVar14 = (undefined4)uVar12;
  plVar8 = plVar8 + 4;
  if (plVar8 == plVar15) goto LAB_140cc9f40;
  goto LAB_140cc9ec1;
}



// FUNCTION 140cca040 FUN_140cca040 body=106 status=ok
// SIG undefined FUN_140cca040(void)

ulonglong FUN_140cca040(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    in_RAX = 0;
    if (lVar2 != 0) {
      in_RAX = UWorld::GetGameState<APVPGameState>(lVar2);
      if ((in_RAX != 0) && (lVar2 = in_RAX + ((ulonglong)bVar1 * 3 + 0x1c1) * 4, lVar2 != 0)) {
        uVar3 = FUN_14248ba60(lVar2,param_3);
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140cca0b0 FUN_140cca0b0 body=280 status=ok
// SIG undefined FUN_140cca0b0(void)

void FUN_140cca0b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x9e0);
    lVar2 = (longlong)iVar1;
    iVar7 = 0;
    if (iVar1 != 0) {
      iVar7 = 0;
      bVar8 = **(longlong **)(param_1 + 0x9d8) != param_2;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x9d8) + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != param_2)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x9d8) + (longlong)iVar7 * 8),
                       (void *)(*(longlong *)(param_1 + 0x9d8) + (longlong)iVar5 * 8),
                       (longlong)(iVar6 - iVar5) << 3);
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(param_1 + 0x9e0) = iVar7;
    }
    if (iVar1 != iVar7) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xa18,0)
      ;
    }
  }
  return;
}



// FUNCTION 140cca1d0 FUN_140cca1d0 body=164 status=ok
// SIG undefined FUN_140cca1d0(void)

void FUN_140cca1d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x85c);
  iVar5 = *(int *)(param_1 + 0x850) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x848);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140cca230:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140cca230;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x85c);
  }
  *(int *)(param_1 + 0x85c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x848),0);
    return;
  }
  return;
}



// FUNCTION 140cca280 FUN_140cca280 body=164 status=ok
// SIG undefined FUN_140cca280(void)

void FUN_140cca280(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_14248bdb0();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = *(longlong *)(lVar2 + 400);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bce120(lVar2);
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_140c413b0(uVar4);
  if (lVar2 != 0) {
    FUN_140c4df60(lVar2,param_2);
  }
  return;
}



// FUNCTION 140cca330 FUN_140cca330 body=257 status=ok
// SIG undefined FUN_140cca330(void)

void FUN_140cca330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if ((param_2 != 0) &&
     (lVar2 = (longlong)*(int *)(param_1 + 0x9f0), *(int *)(param_1 + 0x9f0) != 0)) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x9e8) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x9e8) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x9e8) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x9e8) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x9f0) = iVar6;
  }
  return;
}



// FUNCTION 140cca460 FUN_140cca460 body=1171 status=ok
// SIG undefined FUN_140cca460(void)

void FUN_140cca460(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  undefined8 local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined1 local_b8 [20];
  undefined4 local_a4;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((char)plVar1[9] == '\0') {
    (**(code **)(plVar1[4] + 0x28))(plVar1 + 4);
  }
  if (DAT_14686caa0 != 0) {
    *(undefined1 *)(DAT_14686caa0 + 0x14) = 1;
    FUN_140c6b600(DAT_14686caa0);
    FUN_140cb9a00(DAT_14686caa0,&local_res8);
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar9 + 0x38) < DAT_14686da30) &&
       (_Init_thread_header(&DAT_14686da30), DAT_14686da30 == -1)) {
      uVar10 = FCommandLine::Get();
      DAT_14686da2c = FParse::Param(uVar10,L"OakLoadPresentCopy");
      _Init_thread_footer(&DAT_14686da30);
    }
    if ((*(int *)(lVar9 + 0x38) < DAT_14686da38) &&
       (_Init_thread_header(&DAT_14686da38), DAT_14686da38 == -1)) {
      uVar10 = FCommandLine::Get();
      DAT_14686da34 = FParse::Param(uVar10,L"OakLoadPresentCanvas");
      _Init_thread_footer(&DAT_14686da38);
    }
    if ((DAT_146ab632a == '\0') || (cVar4 = FUN_141ee41d0(), cVar4 == '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((DAT_14686da2c == '\0') && ((DAT_14686da34 != '\0' || (bVar3)))) {
      if ((((DAT_14686caa0 == 0) || (*(char *)(DAT_14686caa0 + 0x10) == '\0')) ||
          (*(longlong *)(DAT_14686caa0 + 0x50) == 0)) ||
         ((lVar9 = *(longlong *)(*(longlong *)(DAT_14686caa0 + 0x50) + 0x458), lVar9 == 0 ||
          (lVar9 = *(longlong *)(lVar9 + 0x3d0), lVar9 == 0)))) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x60);
      }
      if ((local_res8 != (longlong *)0x0) && (lVar9 != 0)) {
        plVar2 = *(longlong **)(DAT_14686caa0 + 0x30);
        local_c0 = plVar1[1];
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        lVar7 = (**(code **)(*plVar2 + 0x108))(plVar2,&local_c0,0,0);
        if (lVar7 != 0) {
          iVar5 = (**(code **)(*plVar1 + 8))(plVar1);
          local_res10 = 0x3f800000;
          local_res14 = 0x3f800000;
          local_res18 = 0;
          iVar6 = (**(code **)*plVar1)(plVar1);
          local_res24 = (float)iVar5;
          local_108 = 0;
          local_res20 = (float)iVar6;
          FCanvasTileItem::FCanvasTileItem
                    (local_b8,&local_108,lVar9,&local_res20,&local_res18,&local_res10,&DAT_1464aa6c0
                    );
          local_50 = 0;
          local_f8 = 0;
          local_44 = (undefined4)DAT_1468b5d88;
          local_40 = DAT_1468b5d88._4_4_;
          local_48 = 0;
          local_a4 = FCanvas::BlendToSimpleElementBlend(0);
          FCanvas::DrawItem(lVar7,local_b8);
          FUN_1428aaa90(lVar7,&DAT_146ab6e78,0);
          puVar8 = *(undefined8 **)(lVar7 + 0x58);
          FUN_14289d030(lVar7);
          FMemory::Free(lVar7);
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
    }
    else {
      lVar9 = plVar1[1];
      local_f0 = 0xffffffff00000000;
      uStack_e8 = 0xffffffffffffffff;
      local_d0 = 0xffffffff;
      uStack_c8 = 0;
      local_e0 = 0xffffffffffffffff;
      uStack_d8 = 0xffffffffffffffff;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar11 + 10;
      local_100 = lVar9;
      if (DAT_146ab6eb0 < puVar8) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x58);
        puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 10;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar8;
      *DAT_146ab6e80 = puVar11;
      DAT_146ab6e80 = puVar11 + 1;
      *DAT_146ab6e80 = 0;
      *puVar11 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar11 + 2) = (undefined4)local_f0;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_f0._4_4_;
      *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_e8;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_e8._4_4_;
      *(undefined4 *)(puVar11 + 4) = (undefined4)local_e0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = local_e0._4_4_;
      *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_d8;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_d8._4_4_;
      *(undefined4 *)(puVar11 + 6) = (undefined4)local_d0;
      *(undefined4 *)((longlong)puVar11 + 0x34) = local_d0._4_4_;
      *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_c8;
      *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_c8._4_4_;
      puVar11[8] = local_res8;
      puVar11[9] = lVar9;
      lVar9 = (**(code **)(*local_res8 + 8))();
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar11[8] + 0x20))();
      }
      lVar9 = (**(code **)(*(longlong *)puVar11[9] + 8))();
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar11[9] + 0x20))();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_100);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    return;
  }
  return;
}



// FUNCTION 140cca900 FUN_140cca900 body=396 status=ok
// SIG undefined FUN_140cca900(void)

void FUN_140cca900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [8];
  longlong local_30 [3];
  
  lVar7 = 0;
  lVar8 = lVar7;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = FUN_14171c5d0();
    lVar6 = FUN_141799410(uVar2,0,param_4,1);
  }
  else {
    FString::PrintfImpl(local_30,L"%s.%s",param_3,param_2);
    uVar2 = FUN_14171bfe0();
    puVar3 = (undefined8 *)FName::FName(local_res10,param_2,1);
    lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_30,0,0);
    lVar6 = lVar7;
    if (lVar4 != 0) {
      lVar5 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        puVar3 = (undefined8 *)FName::FName(local_38,param_4,1);
        lVar6 = FUN_141719c60(lVar4,*puVar3,1);
        lVar8 = lVar4;
      }
    }
    if (local_30[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_6 == '\0') {
    uVar2 = FUN_14171c5d0();
    lVar7 = FUN_141799410(uVar2,0,param_5,1);
  }
  else if (lVar8 != 0) {
    puVar3 = (undefined8 *)FName::FName(local_38,param_5,1);
    lVar7 = FUN_141719c60(lVar8,*puVar3,1);
  }
  if ((lVar6 != 0) && (lVar7 != 0)) {
    *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)(lVar7 + 0xb0);
  }
  return;
}



// FUNCTION 140ccaa90 FUN_140ccaa90 body=688 status=ok
// SIG undefined FUN_140ccaa90(void)

undefined8 FUN_140ccaa90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  void *_Src;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 local_res10;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar11 = *(longlong **)(param_1 + 0x6b8);
  plVar13 = *(longlong **)(param_2 + 0x10);
  plVar7 = plVar11 + *(int *)(param_1 + 0x6c0);
  if (plVar11 == plVar7) {
    return 0;
  }
  plVar12 = (longlong *)0x0;
  while( true ) {
    plVar9 = plVar12;
    if (*plVar11 != 0) {
      plVar6 = (longlong *)UGSquadMemberWidget::GetPrivateStaticClass();
      for (plVar1 = (longlong *)*plVar11;
          (plVar9 = plVar12, plVar1 != (longlong *)0x0 &&
          (plVar9 = (longlong *)*plVar11, plVar1 != plVar6)); plVar1 = (longlong *)plVar1[6]) {
      }
    }
    if (plVar9 == plVar13) break;
    plVar11 = plVar11 + 1;
    if (plVar11 == plVar7) {
      return 0;
    }
  }
  iVar5 = *(int *)(param_1 + 0x6d0);
  iVar10 = iVar5 + -1;
  if (-1 < iVar10) {
    lVar14 = (longlong)iVar10 * 8;
    lVar15 = (longlong)iVar5 << 3;
    lVar16 = lVar14;
    do {
      lVar2 = *(longlong *)(param_1 + 0x6c8);
      if (*(longlong *)(lVar2 + lVar14) == 0) {
LAB_140ccabb8:
        iVar5 = *(int *)(param_1 + 0x6d0);
        iVar4 = (iVar5 - iVar10) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + lVar16),(void *)(lVar2 + lVar15),(longlong)iVar4 << 3);
          iVar5 = *(int *)(param_1 + 0x6d0);
        }
        *(int *)(param_1 + 0x6d0) = iVar5 + -1;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(lVar2 + lVar14) + 0xc);
        plVar7 = plVar12;
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar8 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar8 = uVar8 - 0x10000;
          }
          plVar7 = (longlong *)
                   (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                   (longlong)(int)uVar8 * 0x18);
        }
        if ((*(uint *)(plVar7 + 1) >> 0x1d & 1) != 0) goto LAB_140ccabb8;
      }
      lVar15 = lVar15 + -8;
      lVar16 = lVar16 + -8;
      lVar14 = lVar14 + -8;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    iVar5 = *(int *)(param_1 + 0x6d0);
  }
  plVar7 = plVar12;
  if (0 < iVar5) {
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x6c8);
  }
  local_res10 = *(undefined8 *)(param_2 + 0x10);
  iVar10 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                     (param_1 + 0x6b8,&local_res10);
  if (-1 < iVar10) {
    plVar11 = (longlong *)(param_1 + 0x6c8);
    plVar9 = (longlong *)*plVar11;
    plVar13 = plVar9 + *(int *)(param_1 + 0x6d0);
    for (; plVar9 != plVar13; plVar9 = plVar9 + 1) {
      if (*plVar9 == param_2) goto LAB_140ccacc9;
    }
    plVar13 = plVar12;
    if (0 < *(int *)(param_1 + 0x6d0)) {
      do {
        iVar5 = (int)plVar13;
        if (*(longlong *)((longlong)plVar12 + *plVar11) != 0) {
          local_res10 = *(undefined8 *)(*(longlong *)((longlong)plVar12 + *plVar11) + 0x10);
          iVar4 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                            (param_1 + 0x6b8,&local_res10);
          if (iVar10 < iVar4) {
            iVar10 = *(int *)(param_1 + 0x6d0);
            *(int *)(param_1 + 0x6d0) = iVar10 + 1;
            if (*(int *)(param_1 + 0x6d4) < iVar10 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar10);
            }
            _Src = (void *)(*plVar11 + (longlong)iVar5 * 8);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar10 - iVar5) << 3);
            *(longlong *)(*plVar11 + (longlong)iVar5 * 8) = param_2;
            goto LAB_140ccacc9;
          }
        }
        plVar12 = plVar12 + 1;
        plVar13 = (longlong *)(ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0x6d0));
    }
    iVar10 = *(int *)(param_1 + 0x6d0);
    *(int *)(param_1 + 0x6d0) = iVar10 + 1;
    if (*(int *)(param_1 + 0x6d4) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar10);
    }
    *(longlong *)(*plVar11 + (longlong)iVar10 * 8) = param_2;
LAB_140ccacc9:
    if (0 < *(int *)(param_1 + 0x6d0)) {
      if ((plVar7 != (longlong *)0x0) && (*(longlong **)*plVar11 != plVar7)) {
        (**(code **)(*plVar7 + 0x548))(plVar7,0);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ccad40 FUN_140ccad40 body=192 status=ok
// SIG undefined FUN_140ccad40(void)

void FUN_140ccad40(longlong param_1,char param_2)

{
  if (param_2 == '\x02') {
    if ((*(longlong *)(param_1 + 0x630) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x630) + 0x1952) == '\0')) {
      FUN_140cc2630(param_1,2,1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x630) + 0x1952) = 1;
    }
  }
  else if (param_2 == '\x03') {
    if ((*(longlong *)(param_1 + 0x630) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x630) + 0x1953) == '\0')) {
      FUN_140cc2630(param_1,3,1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x630) + 0x1953) = 1;
      return;
    }
  }
  else if (((param_2 == '\x05') && (*(longlong *)(param_1 + 0x630) != 0)) &&
          (*(char *)(*(longlong *)(param_1 + 0x630) + 0x1954) == '\0')) {
    FUN_140cc2630(param_1,5,1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x630) + 0x1954) = 1;
    return;
  }
  return;
}



// FUNCTION 140ccae30 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
               (longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140ccaee0 FUN_140ccaee0 body=21 status=ok
// SIG undefined FUN_140ccaee0(void)

void FUN_140ccaee0(longlong param_1)

{
  if (*(char *)(param_1 + 0x6ec) != '\0') {
    *(undefined1 *)(param_1 + 0x6ec) = 0;
  }
  FUN_140cc7e60();
  return;
}



// FUNCTION 140ccaf00 FUN_140ccaf00 body=164 status=ok
// SIG undefined FUN_140ccaf00(void)

void FUN_140ccaf00(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x400);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x400);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x400) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x400) = uVar2;
  return;
}



// FUNCTION 140ccafb0 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FAnimLegIKData,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xb0,0);
    iVar3 = (int)(uVar1 / 0xb0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xb0,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140ccb040 FUN_140ccb040 body=118 status=ok
// SIG undefined FUN_140ccb040(void)

void FUN_140ccb040(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    FUN_140ccaf00(param_1,0,iVar1,8);
  }
  *(int *)(param_1 + 0x40c) = iVar1;
  return;
}



// FUNCTION 140ccb0c0 FUN_140ccb0c0 body=240 status=ok
// SIG undefined FUN_140ccb0c0(void)

void FUN_140ccb0c0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x40);
  if (uVar1 < 8) {
    uVar2 = 7;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x44) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x44) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x38);
  if (uVar2 < 8) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x38);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x38) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar5;
  return;
}



// FUNCTION 140ccb1b0 ResizeGrow body=136 status=ok
// SIG undefined ResizeGrow(void)

void TArray<void_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  iVar2 = 0x80;
  if (0x80 < uVar1) {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x40c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x40c) = iVar2;
  FUN_140ccaf00(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 140ccb240 ResizeTo body=113 status=ok
// SIG undefined ResizeTo(void)

void TArray<void_*,TInlineAllocator<128,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x40c)) {
    *(int *)(param_1 + 0x40c) = iVar1;
    FUN_140ccaf00(param_1,*(undefined4 *)(param_1 + 0x408),iVar1,8);
  }
  return;
}



// FUNCTION 140ccb2c0 FUN_140ccb2c0 body=73 status=ok
// SIG undefined FUN_140ccb2c0(void)

void FUN_140ccb2c0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  if ((char)param_1[0x25] == '\x03') {
    local_res10[0] = param_2;
    FUN_142dafbc0(param_1 + 0xee,local_res10);
    if ((char)param_1[0xed] == '\0') {
      *(undefined1 *)(param_1 + 0xed) = 1;
      (**(code **)(*param_1 + 0x600))(param_1);
    }
  }
  return;
}



// FUNCTION 140ccb310 FUN_140ccb310 body=22 status=ok
// SIG undefined FUN_140ccb310(void)

void FUN_140ccb310(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_142dafbc0(param_1 + 0x900);
    return;
  }
  return;
}



// FUNCTION 140ccb330 FUN_140ccb330 body=89 status=ok
// SIG undefined FUN_140ccb330(void)

void FUN_140ccb330(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if ((char)param_1[0x25] == '\x03') {
    local_res10[0] = param_2;
    FUN_142dbb5d0(param_1 + 0xee,local_res10);
    cVar1 = FUN_1407c3030(param_1 + 0xee);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xed) = 0;
      (**(code **)(*param_1 + 0x600))(param_1);
    }
  }
  return;
}



// FUNCTION 140ccb390 FUN_140ccb390 body=22 status=ok
// SIG undefined FUN_140ccb390(void)

void FUN_140ccb390(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_142dbb5d0(param_1 + 0x900);
    return;
  }
  return;
}



// FUNCTION 140ccb3b0 FUN_140ccb3b0 body=63 status=ok
// SIG undefined FUN_140ccb3b0(void)

void FUN_140ccb3b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x308) != 0) {
    uVar1 = FUN_1420fe5f0();
    *(undefined4 *)(param_1 + 0x2f4) = uVar1;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ccb3f0 FUN_140ccb3f0 body=123 status=ok
// SIG undefined FUN_140ccb3f0(void)

void FUN_140ccb3f0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if ((DAT_146b19a68 != 0) && (lVar1 = *(longlong *)(DAT_146b19a68 + 400), lVar1 != 0)) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = FUN_140bca9e0(lVar1), cVar3 == '\0')) {
      UGameUserSettings::SaveSettings(param_1);
    }
  }
  return;
}



// FUNCTION 140ccb470 FUN_140ccb470 body=794 status=ok
// SIG undefined FUN_140ccb470(void)

void FUN_140ccb470(longlong *param_1,char param_2)

{
  void *_Src;
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_28;
  int local_20;
  
  FUN_14248d380();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((char)param_1[0x142] != '\0') && ((char)param_1[0x25] == '\x03')) {
    *(undefined1 *)(param_1 + 0x142) = 0;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar4,&local_28);
      while( true ) {
        if ((local_20 < 0) || ((int)local_28[1] <= local_20)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0x848), lVar3 != 0)) {
            lVar5 = FUN_1413ffe00();
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
              FUN_140e36ff0(lVar3,0);
            }
          }
        }
        local_20 = local_20 + 1;
      }
    }
  }
  UWorld::GetPlayerControllerIterator(lVar2,&local_28);
  plVar8 = (longlong *)0x0;
  do {
    while( true ) {
      if ((local_20 < 0) || ((int)local_28[1] <= local_20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        local_20 = (int)param_1[0x141];
        lVar3 = (longlong)local_20;
        _Src = (void *)param_1[0x140];
        local_28 = (longlong *)0x0;
        if (local_20 != 0) {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
                    (&local_28,local_20,0);
          plVar8 = local_28;
          _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar3 * 0x28);
        }
        lVar3 = (longlong)local_20;
        for (plVar6 = plVar8; plVar6 != plVar8 + lVar3 * 5; plVar6 = plVar6 + 5) {
          FUN_140cda760(param_1,plVar6[4],1);
        }
        if (plVar8 != (longlong *)0x0) {
          FMemory::Free(plVar8);
        }
        if (((param_2 != '\0') && ((char)param_1[0x25] == '\x03')) &&
           (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
          lVar3 = FUN_14141f270();
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
            FUN_140bd48b0(lVar2,param_1);
          }
        }
        return;
      }
      lVar3 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
      plVar6 = plVar8;
      if (lVar3 != 0) {
        lVar5 = FUN_14145f370();
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
          plVar6 = *(longlong **)(lVar3 + 0x990);
        }
      }
      plVar7 = plVar8;
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)plVar6[0x1cd];
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_140ccb680:
      local_20 = local_20 + 1;
    }
    if (param_2 == '\0') {
      (**(code **)(*plVar7 + 0x7a8))();
      goto LAB_140ccb680;
    }
    (**(code **)(*plVar7 + 0x5a0))(plVar7,0);
    local_20 = local_20 + 1;
  } while( true );
}



// FUNCTION 140ccb790 FUN_140ccb790 body=129 status=ok
// SIG undefined FUN_140ccb790(void)

void FUN_140ccb790(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14234e7d0();
  if (((*(byte *)(param_2 + 0x28) & 3) != 0) &&
     ((*(ulonglong *)(param_2 + 0x30) & 0x2000000000001000) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x178);
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x180) * 0x18;
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      FUN_141764720(param_2,lVar2 + 0x10,*(undefined8 *)(param_1 + 0x188));
    }
  }
  return;
}



// FUNCTION 140ccb820 FUN_140ccb820 body=92 status=ok
// SIG undefined FUN_140ccb820(void)

void FUN_140ccb820(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if ((((*(byte *)(param_2 + 0x28) & 3) != 0) &&
      ((*(ulonglong *)(param_2 + 0x30) & 0x2000000000001000) == 0)) &&
     (7 < *(int *)(param_2 + 0x44))) {
    FUN_141764720(param_2,param_1 + 0x2d,*(undefined8 *)(param_1 + 0x30));
    FUN_141764720(param_2,param_1 + 0x2e,*(undefined8 *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 140ccb880 FUN_140ccb880 body=5185 status=ok
// SIG undefined FUN_140ccb880(void)

undefined1 FUN_140ccb880(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_38;
  
  puVar10 = *(undefined1 **)param_3[1];
  if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar10 + 1) {
    (**(code **)(*param_3 + 0x50))
              (param_3,(undefined1 *)((longlong)*param_2 + *(longlong *)*param_1),1);
  }
  else {
    *(undefined1 *)((longlong)*param_2 + *(longlong *)*param_1) = *puVar10;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
  }
  iVar9 = *param_2;
  lVar6 = (longlong)iVar9;
  iVar8 = iVar9 + 1;
  *param_2 = iVar8;
  lVar14 = *(longlong *)*param_1;
  uVar1 = *(undefined1 *)(lVar6 + lVar14);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 0x20:
  case 0x48:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
LAB_140ccbe9d:
    *param_2 = *param_2 + 8;
    break;
  case 3:
  case 5:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2d:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x37:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4d:
  case 0x53:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x66:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
    break;
  case 4:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x5d:
  case 0x67:
    goto switchD_140ccb911_caseD_4;
  case 6:
  case 0x1d:
  case 0x1e:
  case 0x4c:
  case 0x5b:
    puVar15 = (undefined4 *)(iVar8 + lVar14);
    puVar13 = *(undefined4 **)param_3[1];
    if (puVar13 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      *param_2 = *param_2 + 4;
      break;
    }
    (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,puVar15,4);
      *param_2 = *param_2 + 4;
      break;
    }
    goto LAB_140ccc28b;
  case 7:
    puVar15 = (undefined4 *)(iVar8 + lVar14);
    puVar13 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,4);
      }
    }
    else {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    FUN_140ccb880(param_1,param_2,param_3);
    break;
  case 9:
    puVar16 = (undefined2 *)(iVar8 + lVar14);
    puVar5 = *(undefined2 **)param_3[1];
    if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar16,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar16,2);
      }
    }
    else {
      *puVar16 = *puVar5;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 2;
    puVar10 = (undefined1 *)((longlong)iVar9 + *(longlong *)*param_1 + 2);
    goto LAB_140ccc8ce;
  case 0xf:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    *param_2 = *param_2 + 8;
  case 0x14:
  case 0x43:
  case 0x44:
  case 0x5c:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 0x6b:
switchD_140ccb911_caseD_14:
    FUN_140ccb880(param_1,param_2,param_3);
    FUN_140ccb880(param_1,param_2,param_3);
    break;
  case 0x12:
  case 0x19:
  case 0x1a:
    FUN_140ccb880(param_1,param_2,param_3);
    puVar13 = *(undefined4 **)param_3[1];
    puVar15 = (undefined4 *)((longlong)*param_2 + *(longlong *)*param_1);
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,4);
      }
    }
    else {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    local_res8 = 0;
    *param_2 = iVar9 + 4;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)((longlong)(iVar9 + 4) + *(longlong *)*param_1);
      local_res10 = local_res8;
    }
    goto LAB_140ccc7bd;
  case 0x13:
  case 0x2e:
  case 0x42:
  case 0x52:
  case 0x54:
  case 0x55:
  case 100:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
LAB_140ccc7bd:
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    *param_2 = *param_2 + 8;
    FUN_140ccb880(param_1,param_2,param_3);
    break;
  case 0x18:
    puVar15 = (undefined4 *)(iVar8 + lVar14);
    puVar13 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,4);
      }
    }
    else {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    FUN_140ccb880(param_1,param_2,param_3);
    break;
  case 0x1b:
    local_res8._0_4_ = 0;
    local_res8._4_4_ = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8._4_4_ = *(undefined4 *)((longlong)iVar8 + 8 + lVar14);
      local_38._0_4_ = (undefined4)*(undefined8 *)(iVar8 + lVar14);
      local_res8._0_4_ = (undefined4)local_38;
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      iVar9 = *param_2;
      local_38 = CONCAT44((undefined4)local_res8,(undefined4)local_res8);
      lVar14 = *(longlong *)*param_1;
      *(undefined8 *)(iVar9 + lVar14) = local_38;
      *(undefined4 *)((undefined8 *)(iVar9 + lVar14) + 1) = local_res8._4_4_;
    }
    *param_2 = *param_2 + 0xc;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x16);
    break;
  case 0x1c:
  case 0x68:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    *param_2 = *param_2 + 8;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x16);
    break;
  case 0x1f:
    do {
      puVar10 = *(undefined1 **)param_3[1];
      if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar10 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,(undefined1 *)(iVar8 + lVar14),1);
      }
      else {
        *(undefined1 *)(iVar8 + lVar14) = *puVar10;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
      }
      iVar9 = *param_2;
      iVar8 = iVar9 + 1;
      *param_2 = iVar8;
      lVar14 = *(longlong *)*param_1;
    } while (*(char *)(iVar9 + lVar14) != '\0');
    break;
  case 0x21:
  case 0x4b:
    local_res8._0_4_ = 0;
    local_res8._4_4_ = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8._4_4_ = *(undefined4 *)((longlong)iVar8 + 8 + lVar14);
      local_38._0_4_ = (undefined4)*(undefined8 *)(iVar8 + lVar14);
      local_res8._0_4_ = (undefined4)local_38;
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      iVar9 = *param_2;
      local_38 = CONCAT44((undefined4)local_res8,(undefined4)local_res8);
      lVar14 = *(longlong *)*param_1;
      *(undefined8 *)(iVar9 + lVar14) = local_38;
      *(undefined4 *)((undefined8 *)(iVar9 + lVar14) + 1) = local_res8._4_4_;
    }
    *param_2 = *param_2 + 0xc;
    break;
  case 0x22:
  case 0x23:
    puVar13 = (undefined4 *)(iVar8 + lVar14);
    puVar15 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar15 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar13,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
LAB_140ccc1be:
        FArchive::ByteSwap(param_3,puVar13,4);
      }
    }
    else {
      *puVar13 = *puVar15;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    goto LAB_140ccc1cc;
  case 0x24:
  case 0x2c:
    puVar11 = (undefined1 *)(lVar14 + 1 + lVar6);
    puVar10 = *(undefined1 **)param_3[1];
    if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar10 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar11,1);
      *param_2 = *param_2 + 1;
    }
    else {
      *puVar11 = *puVar10;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
      *param_2 = *param_2 + 1;
    }
    break;
  case 0x29:
    puVar10 = *(undefined1 **)param_3[1];
    if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar10 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,(undefined1 *)(iVar8 + lVar14),1);
    }
    else {
      *(undefined1 *)(iVar8 + lVar14) = *puVar10;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
    }
    iVar9 = *param_2;
    iVar8 = iVar9 + 1;
    *param_2 = iVar8;
    cVar2 = *(char *)((longlong)iVar9 + *(longlong *)*param_1);
    if (cVar2 == '\x01') {
      FUN_140ccb880(param_1,param_2,param_3);
      FUN_140ccb880(param_1,param_2,param_3);
      FUN_140ccb880(param_1,param_2,param_3);
    }
    else {
      if ((cVar2 == '\x02') || (cVar2 == '\x03')) goto switchD_140ccb911_caseD_4;
      if (cVar2 == '\x04') {
        local_res8 = 0;
        if ((*(byte *)(param_3 + 5) & 1) == 0) {
          local_res8 = *(undefined8 *)((longlong)iVar8 + *(longlong *)*param_1);
          local_res10 = local_res8;
        }
        (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
        if ((*(byte *)(param_3 + 5) & 2) == 0) {
          local_res10 = local_res8;
          *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
        }
        *param_2 = *param_2 + 8;
        FUN_140ccb880(param_1,param_2,param_3);
        FUN_140ccb880(param_1,param_2,param_3);
      }
    }
    break;
  case 0x2b:
    puVar15 = (undefined4 *)(iVar8 + lVar14);
    puVar13 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,4);
      }
    }
    else {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        puVar13 = (undefined4 *)(lVar14 + 4);
        goto LAB_140ccc1be;
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
LAB_140ccc1cc:
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 4;
    lVar14 = *(longlong *)*param_1 + (longlong)iVar9;
    puVar13 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 4,4);
      }
LAB_140ccc28b:
      *param_2 = *param_2 + 4;
    }
    else {
      *(undefined4 *)(lVar14 + 4) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      *param_2 = *param_2 + 4;
    }
    break;
  case 0x2f:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 8;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 8) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x30);
    break;
  case 0x31:
    FUN_140ccb880(param_1,param_2,param_3);
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x32);
    break;
  case 0x34:
    do {
      puVar16 = (undefined2 *)(iVar8 + lVar14);
      puVar5 = *(undefined2 **)param_3[1];
      if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,puVar16,2);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,puVar16,2);
        }
      }
      else {
        *puVar16 = *puVar5;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
      }
      iVar9 = *param_2;
      iVar8 = iVar9 + 2;
      *param_2 = iVar8;
      lVar14 = *(longlong *)*param_1;
    } while ((*(char *)((longlong)iVar9 + 1 + lVar14) != '\0') ||
            (*(char *)((longlong)iVar8 + -2 + lVar14) != '\0'));
    break;
  case 0x35:
    FUN_1404c11e0(param_3,iVar8 + lVar14);
    *param_2 = *param_2 + 8;
    break;
  case 0x36:
    puVar12 = (undefined8 *)(iVar8 + lVar14);
    puVar4 = *(undefined8 **)param_3[1];
    if ((undefined8 *)((longlong *)param_3[1])[1] < puVar4 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar12,8);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_140ccbe9d;
      FArchive::ByteSwap(param_3,puVar12,8);
      *param_2 = *param_2 + 8;
    }
    else {
      *puVar12 = *puVar4;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
      *param_2 = *param_2 + 8;
    }
    break;
  case 0x38:
    puVar10 = (undefined1 *)(iVar8 + lVar14);
LAB_140ccc8ce:
    puVar11 = *(undefined1 **)param_3[1];
    if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar11 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar10,1);
    }
    else {
      *puVar10 = *puVar11;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
    }
    *param_2 = *param_2 + 1;
    FUN_140ccb880(param_1,param_2,param_3);
    break;
  case 0x39:
    FUN_140ccb880(param_1,param_2,param_3);
    puVar13 = *(undefined4 **)param_3[1];
    puVar15 = (undefined4 *)((longlong)*param_2 + *(longlong *)*param_1);
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,4);
      }
    }
    else {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x3a);
    break;
  case 0x3b:
    FUN_140ccb880(param_1,param_2,param_3);
    puVar13 = *(undefined4 **)param_3[1];
    puVar15 = (undefined4 *)((longlong)*param_2 + *(longlong *)*param_1);
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,4);
      }
    }
    else {
      *puVar15 = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x3c);
    break;
  case 0x3d:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 8;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 8) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x3e);
    break;
  case 0x3f:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    iVar9 = *param_2;
    local_res8 = 0;
    *param_2 = iVar9 + 8;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)((longlong)(iVar9 + 8) + *(longlong *)*param_1);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 8;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 8) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x40);
    break;
  case 0x50:
    if ((*(byte *)(param_3 + 5) & 1) != 0) {
      *(undefined1 *)(lVar14 + lVar6) = 0x5e;
    }
    break;
  case 0x61:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_38._0_4_ = (undefined4)*(undefined8 *)(iVar8 + lVar14);
      local_res8 = CONCAT44(*(undefined4 *)((longlong)iVar8 + 8 + lVar14),(undefined4)local_38);
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      iVar9 = *param_2;
      lVar14 = *(longlong *)*param_1;
      *(undefined8 *)(iVar9 + lVar14) = CONCAT44((undefined4)local_res8,(undefined4)local_res8);
      *(undefined4 *)((undefined8 *)(iVar9 + lVar14) + 1) = local_res8._4_4_;
    }
    *param_2 = *param_2 + 0xc;
    goto switchD_140ccb911_caseD_14;
  case 99:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    *param_2 = *param_2 + 8;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x16);
    break;
  case 0x65:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar8 + lVar14);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1) = local_res8;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 8;
    puVar13 = *(undefined4 **)param_3[1];
    lVar14 = (longlong)iVar9 + *(longlong *)*param_1;
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 8) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar9 = FUN_140ccb880(param_1,param_2,param_3);
    } while (iVar9 != 0x66);
    break;
  case 0x69:
    puVar16 = (undefined2 *)(iVar8 + lVar14);
    puVar5 = *(undefined2 **)param_3[1];
    if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar16,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar16,2);
      }
    }
    else {
      *puVar16 = *puVar5;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
    }
    iVar9 = *param_2;
    *param_2 = iVar9 + 2;
    uVar3 = *(ushort *)((longlong)iVar9 + *(longlong *)*param_1);
    lVar14 = *(longlong *)*param_1 + (longlong)iVar9;
    puVar13 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar14 + 2,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar14 + 2,4);
      }
    }
    else {
      *(undefined4 *)(lVar14 + 2) = *puVar13;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    FUN_140ccb880(param_1,param_2,param_3);
    if (uVar3 != 0) {
      uVar17 = (ulonglong)uVar3;
      do {
        FUN_140ccb880(param_1,param_2,param_3);
        puVar13 = *(undefined4 **)param_3[1];
        puVar15 = (undefined4 *)((longlong)*param_2 + *(longlong *)*param_1);
        if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar13 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,puVar15,4);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,puVar15,4);
          }
        }
        else {
          *puVar15 = *puVar13;
          *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
        }
        *param_2 = *param_2 + 4;
        FUN_140ccb880(param_1,param_2,param_3);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
switchD_140ccb911_caseD_4:
    FUN_140ccb880(param_1,param_2,param_3);
    break;
  case 0x6a:
    if (*(char *)(iVar8 + lVar14) == '\x04') {
      iVar8 = iVar9 + 0xd;
    }
    *param_2 = iVar8 + 1;
    break;
  case 0xc0:
    puVar16 = (undefined2 *)(iVar8 + lVar14);
    puVar5 = *(undefined2 **)param_3[1];
    if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar16,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar16,2);
      }
    }
    else {
      *puVar16 = *puVar5;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
    }
    *param_2 = *param_2 + 2;
    iVar9 = *param_2;
    plVar7 = (longlong *)*param_1;
    do {
      puVar16 = (undefined2 *)((longlong)iVar9 + *plVar7);
      puVar5 = *(undefined2 **)param_3[1];
      if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,puVar16,2);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,puVar16,2);
        }
      }
      else {
        *puVar16 = *puVar5;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
      }
      iVar8 = *param_2;
      iVar9 = iVar8 + 2;
      *param_2 = iVar9;
      plVar7 = (longlong *)*param_1;
    } while ((*(char *)((longlong)iVar8 + 1 + *plVar7) != '\0') ||
            (*(char *)((longlong)iVar9 + -2 + *plVar7) != '\0'));
    break;
  default:
    goto switchD_140ccb911_default;
  }
switchD_140ccb911_default:
  return uVar1;
}



// FUNCTION 140ccce40 FUN_140ccce40 body=61 status=ok
// SIG undefined FUN_140ccce40(void)

void FUN_140ccce40(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_142340f30();
  if (iVar1 == 3) {
    FUN_14141c7f0();
    return;
  }
  lVar2 = FUN_140cb9640(param_1);
  if (lVar2 != 0) {
    FUN_1414617d0(lVar2);
    return;
  }
  return;
}



// FUNCTION 140ccce80 FUN_140ccce80 body=14 status=ok
// SIG undefined FUN_140ccce80(void)

void FUN_140ccce80(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x702) = param_2;
  *(undefined1 *)(param_1 + 0x703) = param_3;
  return;
}



// FUNCTION 140ccce90 FUN_140ccce90 body=11 status=ok
// SIG undefined FUN_140ccce90(void)

void FUN_140ccce90(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x740) = param_2;
  FUN_140cc7ad0();
  return;
}



// FUNCTION 140cccea0 FUN_140cccea0 body=608 status=ok
// SIG undefined FUN_140cccea0(void)

void FUN_140cccea0(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x183);
  *(bool *)(param_1 + 0x182) = 2 < bVar1;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  else if ((bVar1 < 3) || (5 < bVar1)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  *(bool *)(param_1 + 0x180) = 3 < bVar1;
  *(bool *)(param_1 + 0x181) = 3 < bVar1;
  switch(bVar1) {
  case 0:
  case 1:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x195) = uVar2;
  switch(bVar1) {
  case 0:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x18d) = uVar2;
  switch(bVar1) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  default:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x185) = uVar2;
  switch(bVar1) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  default:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
  case 5:
    uVar2 = 4;
  }
  *(undefined1 *)(param_1 + 0x18c) = uVar2;
  switch(bVar1) {
  case 0:
  case 1:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x196) = uVar2;
  switch(bVar1) {
  case 0:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x197) = uVar2;
  switch(bVar1) {
  case 0:
  case 1:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x198) = uVar2;
  switch(bVar1) {
  case 0:
  case 1:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x19c) = uVar2;
  switch(bVar1) {
  case 0:
  case 1:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
  case 4:
    uVar2 = 2;
    break;
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x199) = uVar2;
  switch(bVar1) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  default:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
  case 5:
    uVar2 = 4;
  }
  *(undefined1 *)(param_1 + 0x19d) = uVar2;
  switch(bVar1) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  default:
    uVar2 = 2;
    break;
  case 4:
  case 5:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x186) = uVar2;
  switch(bVar1) {
  case 0:
  case 1:
    *(undefined1 *)(param_1 + 0x19a) = 0;
    return;
  default:
    *(undefined1 *)(param_1 + 0x19a) = 1;
    return;
  case 3:
  case 4:
    *(undefined1 *)(param_1 + 0x19a) = 2;
    return;
  case 5:
    *(undefined1 *)(param_1 + 0x19a) = 3;
    return;
  }
}



// FUNCTION 140ccd220 FUN_140ccd220 body=301 status=ok
// SIG undefined FUN_140ccd220(void)

void FUN_140ccd220(longlong param_1,char param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  int local_10;
  
  *(char *)(param_1 + 0x19d) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AmbientOcclusion.Enable");
  if (plVar2 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2 != '\0');
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x19d);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.AmbientOcclusion.ComputeAOQualityLevel");
  if (plVar2 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccd350 FUN_140ccd350 body=198 status=ok
// SIG undefined FUN_140ccd350(void)

void FUN_140ccd350(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *local_18;
  int local_10;
  
  *(char *)(param_1 + 0x18c) = param_2;
  uVar3 = 1;
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      uVar3 = 2;
    }
    else if (param_2 == '\x02') {
      uVar3 = 4;
    }
    else if (param_2 == '\x03') {
      uVar3 = 8;
    }
    else if (param_2 == '\x04') {
      uVar3 = 0x10;
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar3);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccd420 FUN_140ccd420 body=176 status=ok
// SIG undefined FUN_140ccd420(void)

void FUN_140ccd420(uint param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  int local_10;
  
  if ((-1 < (int)param_1) && (param_1 < 3)) {
    uVar1 = *(undefined4 *)(&DAT_146299610 + (longlong)(int)param_1 * 4);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultFeature.AntiAliasing");
    if (plVar2 != (longlong *)0x0) {
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar1);
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140ccd4d0 FUN_140ccd4d0 body=13 status=ok
// SIG undefined FUN_140ccd4d0(void)

void FUN_140ccd4d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x188) = param_2;
  FUN_140ccd420(param_2);
  return;
}



// FUNCTION 140ccd4e0 FUN_140ccd4e0 body=7 status=ok
// SIG undefined FUN_140ccd4e0(void)

void FUN_140ccd4e0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1a4) = param_2;
  return;
}



// FUNCTION 140ccd4f0 FUN_140ccd4f0 body=166 status=ok
// SIG undefined FUN_140ccd4f0(void)

void FUN_140ccd4f0(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_28;
  int local_20;
  
  *(float *)(param_1 + 0x1b4) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.OverrideToe");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)(param_2 * -0.01));
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccd5a0 FUN_140ccd5a0 body=24 status=ok
// SIG undefined FUN_140ccd5a0(void)

void FUN_140ccd5a0(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0x1b0) = param_2;
  FUN_140f4dc80(param_2 * 0.01);
  return;
}



// FUNCTION 140ccd5c0 FUN_140ccd5c0 body=64 status=ok
// SIG undefined FUN_140ccd5c0(void)

void FUN_140ccd5c0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  *(longlong *)(param_1 + 0x650) = param_2;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x658) != 0)) {
    uVar1 = FUN_1410875d0();
    FUN_140f081a0(*(undefined8 *)(param_1 + 0x650),uVar1);
    return;
  }
  return;
}



// FUNCTION 140ccd600 FUN_140ccd600 body=17 status=ok
// SIG undefined FUN_140ccd600(void)

void FUN_140ccd600(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x650);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (param_2 != (char)plVar1[0xf0]) {
    *(char *)(plVar1 + 0xf0) = param_2;
    if (param_2 == '\0') {
      if (0 < (int)plVar1[0xef]) {
                    /* WARNING: Could not recover jumptable at 0x000140f081ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x578))(plVar1,0);
        return;
      }
    }
    else if ((int)plVar1[0xcb] == 0) {
      FUN_140eecd70();
      return;
    }
  }
  return;
}



// FUNCTION 140ccd620 FUN_140ccd620 body=315 status=ok
// SIG undefined FUN_140ccd620(void)

void FUN_140ccd620(longlong param_1,byte param_2)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *local_28;
  int local_20;
  
  *(byte *)(param_1 + 0x19c) = param_2;
  fVar1 = *(float *)(&DAT_146299680 + (ulonglong)param_2 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.SkeletalMeshLODRadiusScale.Character");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)fVar1);
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar2 = *(char *)(param_1 + 0x19c);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"oak.CorpseCleanup.ShouldUseLowGraphics");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,cVar2 == '\0');
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccd760 FUN_140ccd760 body=28 status=ok
// SIG undefined FUN_140ccd760(void)

void FUN_140ccd760(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0xf;
  if (0xe < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x17c) = iVar1;
  FUN_140ccf440(param_1,*(undefined1 *)(param_1 + 0x179));
  return;
}



// FUNCTION 140ccd780 FUN_140ccd780 body=297 status=ok
// SIG undefined FUN_140ccd780(void)

void FUN_140ccd780(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_30;
  int local_28;
  longlong local_20;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_14289aca0(local_78,0,puVar3,0);
  puVar3 = &DAT_143f3eda8;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  plVar1 = (longlong *)FPackageName::GetShortName(local_88,puVar3);
  plVar2 = (longlong *)(param_1 + 200);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xd0) = (int)plVar1[1];
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  plVar1 = local_30;
  if (local_20 != 0) {
    FMemory::Free();
    plVar1 = local_30;
  }
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ccd8b0 FUN_140ccd8b0 body=146 status=ok
// SIG undefined FUN_140ccd8b0(void)

void FUN_140ccd8b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  *(undefined4 *)(param_1 + 400) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxCoreStat.ShowStats");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccd950 FUN_140ccd950 body=159 status=ok
// SIG undefined FUN_140ccd950(void)

void FUN_140ccd950(byte param_1)

{
  float fVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  
  fVar1 = *(float *)(&DAT_146299620 + (ulonglong)param_1 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ViewDistanceScale");
  if (plVar2 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)fVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccd9f0 FUN_140ccd9f0 body=14 status=ok
// SIG undefined FUN_140ccd9f0(void)

void FUN_140ccd9f0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x195) = param_2;
  FUN_140ccd950(param_2);
  return;
}



// FUNCTION 140ccda00 FUN_140ccda00 body=159 status=ok
// SIG undefined FUN_140ccda00(void)

void FUN_140ccda00(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_28;
  int local_20;
  
  *(float *)(param_1 + 0x1a0) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.EdgeDetection.TexelOffsetOverride");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccdaa0 FUN_140ccdaa0 body=148 status=ok
// SIG undefined FUN_140ccdaa0(void)

void FUN_140ccdaa0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  *(undefined1 *)(param_1 + 0x182) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.CAS.Enable");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccdb40 FUN_140ccdb40 body=11 status=ok
// SIG undefined FUN_140ccdb40(void)

void FUN_140ccdb40(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x180) = param_2;
  FUN_140c69920();
  return;
}



// FUNCTION 140ccdb50 FUN_140ccdb50 body=11 status=ok
// SIG undefined FUN_140ccdb50(void)

void FUN_140ccdb50(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x181) = param_2;
  FUN_140c69920();
  return;
}



// FUNCTION 140ccdb60 FUN_140ccdb60 body=87 status=ok
// SIG undefined FUN_140ccdb60(void)

void FUN_140ccdb60(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_1428cc8c0(param_1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FName::FName(local_res18,puVar2,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FUN_140ccdbc0(local_res18,param_2);
  return;
}



// FUNCTION 140ccdbc0 FUN_140ccdbc0 body=5621 status=ok
// SIG undefined FUN_140ccdbc0(void)

void FUN_140ccdbc0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  wchar_t *pwVar5;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar1 = *param_1;
  if (DAT_14686cbb8 == lVar1) {
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (param_2 != '\0') {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSkag.ItemPool_TrialBossSkag,BalancedItems,0,,((InventoryBalanceData=/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/_Unique/TheLob/Balance/Balance_SG_Torgue_ETech_TheLob.Balance_SG_Torgue_ETech_TheLob,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/Gear/Weapons/Shotguns/Torgue/_Shared/_Design/_Unique/TheLob/Balance/Balance_SG_Torgue_ETech_TheLob.Balance_SG_Torgue_ETech_TheLob\"\'),(InventoryBalanceData=/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Lucky7/Balance/Balance_PS_JAK_Lucky7.Balance_PS_JAK_Lucky7,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Dandelion/Gear/Weapon/_Unique/Lucky7/Balance/Balance_PS_JAK_Lucky7.Balance_PS_JAK_Lucky7\"\'))"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSkag.ItemPool_TrialBossSkag,Quantity.BaseValueConstant,8,1.000000,2"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,),/Game/Enemies/Skag/_Shared/_Design/Balance/Table_Skag_Balance_Unique.Table_Skag_Balance_Unique,TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator6,NewEnumerator7"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,),/Game/Enemies/Skag/_Shared/_Design/Balance/Table_Skag_Balance_Unique.Table_Skag_Balance_Unique,TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,9,20.000000,800"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      ppuVar4 = local_68;
      pwVar5 = 
      L"(1,2,0,),/Game/Enemies/Skag/_Shared/_Design/Balance/Table_Skag_Balance_Unique.Table_Skag_Balance_Unique,TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,0.500000,2"
      ;
      local_68[0] = &LAB_140c6b520;
      goto LAB_140ccdd6b;
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444d9d08;
      puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    local_68[0] = &LAB_140c6b520;
    FUN_142d8ae80(0,
                  L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSkag.ItemPool_TrialBossSkag,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Gunner/InvBalD_ClassMod_Gunner_BloodLetter.InvBalD_ClassMod_Gunner_BloodLetter,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Gunner/InvBalD_ClassMod_Gunner_BloodLetter.InvBalD_ClassMod_Gunner_BloodLetter\"\'),(InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Breaker.InvBalD_ClassMod_Siren_Breaker,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Breaker.InvBalD_ClassMod_Siren_Breaker\"\'))"
                  ,0,1,local_68,0);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444d9d08;
      puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    local_68[0] = &LAB_140c6b520;
    FUN_142d8ae80(0,
                  L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSkag.ItemPool_TrialBossSkag,Quantity.BaseValueConstant,8,2.000000,1"
                  ,0,1,local_68,0);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444d9d08;
      puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    local_68[0] = &LAB_140c6b520;
    FUN_142d8ae80(0,
                  L"(1,2,0,),/Game/Enemies/Skag/_Shared/_Design/Balance/Table_Skag_Balance_Unique.Table_Skag_Balance_Unique,TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator7,NewEnumerator6"
                  ,0,1,local_68,0);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444d9d08;
      puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    local_68[0] = &LAB_140c6b520;
    FUN_142d8ae80(0,
                  L"(1,2,0,),/Game/Enemies/Skag/_Shared/_Design/Balance/Table_Skag_Balance_Unique.Table_Skag_Balance_Unique,TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,10,800.000000,20"
                  ,0,1,local_68,0);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444d9d08;
      puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    ppuVar4 = local_68;
    pwVar5 = 
    L"(1,2,0,),/Game/Enemies/Skag/_Shared/_Design/Balance/Table_Skag_Balance_Unique.Table_Skag_Balance_Unique,TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,2.000000,0.5"
    ;
    local_68[0] = &LAB_140c6b520;
LAB_140cce31f:
    FUN_142d8ae80(0,pwVar5,0,1,ppuVar4,0);
  }
  else {
    if (DAT_14686cbc0 == lVar1) {
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (param_2 == '\0') {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_1444d9d08;
          puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        local_68[0] = &LAB_140c6b520;
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGoon.ItemPool_TrialBossGoon,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Operative/InvBalD_ClassMod_Operative_FireBrand.InvBalD_ClassMod_Operative_FireBrand,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Operative/InvBalD_ClassMod_Operative_FireBrand.InvBalD_ClassMod_Operative_FireBrand\"\'),(InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Phasezerker.InvBalD_ClassMod_Siren_Phasezerker,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Phasezerker.InvBalD_ClassMod_Siren_Phasezerker\"\'))"
                      ,0,1,local_68,0);
        local_38 = 0;
        local_28 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_1444d9d08;
          puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        local_68[0] = &LAB_140c6b520;
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGoon.ItemPool_TrialBossGoon,Quantity.BaseValueConstant,8,2.000000,1"
                      ,0,1,local_68,0);
        local_38 = 0;
        local_28 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_1444d9d08;
          puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        local_68[0] = &LAB_140c6b520;
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Goon_TrialBoss),/Game/Enemies/Goon/_Shared/_Design/Balance/Table_Balance_Goon_Unique.Table_Balance_Goon_Unique,Goon_BossTrial,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator7,NewEnumerator6"
                      ,0,1,local_68,0);
        local_38 = 0;
        local_28 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_1444d9d08;
          puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        local_68[0] = &LAB_140c6b520;
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Goon_TrialBoss),/Game/Enemies/Goon/_Shared/_Design/Balance/Table_Balance_Goon_Unique.Table_Balance_Goon_Unique,Goon_BossTrial,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,10,800.000000,15.0"
                      ,0,1,local_68,0);
        local_38 = 0;
        local_28 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_1444d9d08;
          puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        ppuVar4 = local_68;
        pwVar5 = 
        L"(1,2,0,BPChar_Goon_TrialBoss),/Game/Enemies/Goon/_Shared/_Design/Balance/Table_Balance_Goon_Unique.Table_Balance_Goon_Unique,Goon_BossTrial,HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49,11,2000.000000,15.0"
        ;
        local_68[0] = &LAB_140c6b520;
        goto LAB_140cce31f;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGoon.ItemPool_TrialBossGoon,BalancedItems,0,,((InventoryBalanceData=/Game/Gear/Weapons/Pistols/Jakobs/_Shared/_Design/_Unique/Maggie/Balance/Balance_PS_JAK_Maggie.Balance_PS_JAK_Maggie,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/Gear/Weapons/Pistols/Jakobs/_Shared/_Design/_Unique/Maggie/Balance/Balance_PS_JAK_Maggie.Balance_PS_JAK_Maggie\"\'),(InventoryBalanceData=/Game/PatchDLC/Alisma/Gear/Weapon/_Unique/Convergence/Balance/Balance_SG_HYP_Convergence.Balance_SG_HYP_Convergence,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Alisma/Gear/Weapon/_Unique/Convergence/Balance/Balance_SG_HYP_Convergence.Balance_SG_HYP_Convergence\"\'))"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGoon.ItemPool_TrialBossGoon,Quantity.BaseValueConstant,8,1.000000,2"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,BPChar_Goon_TrialBoss),/Game/Enemies/Goon/_Shared/_Design/Balance/Table_Balance_Goon_Unique.Table_Balance_Goon_Unique,Goon_BossTrial,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator6,NewEnumerator7"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,BPChar_Goon_TrialBoss),/Game/Enemies/Goon/_Shared/_Design/Balance/Table_Balance_Goon_Unique.Table_Balance_Goon_Unique,Goon_BossTrial,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,9,15.000000,800.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      ppuVar4 = local_68;
      pwVar5 = 
      L"(1,2,0,BPChar_Goon_TrialBoss),/Game/Enemies/Goon/_Shared/_Design/Balance/Table_Balance_Goon_Unique.Table_Balance_Goon_Unique,Goon_BossTrial,HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49,9,15.000000,2000.0"
      ;
      local_68[0] = &LAB_140c6b520;
LAB_140ccdd6b:
      FUN_142d8ae80(0,pwVar5,0,1,ppuVar4,0);
    }
    else {
      if (DAT_14686cbc8 == lVar1) {
        if (param_2 == '\0') {
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossTink.ItemPool_TrialBossTink,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Dragon.InvBalD_ClassMod_Siren_Dragon,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Dragon.InvBalD_ClassMod_Siren_Dragon\"\'),(InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/BSM/InvBalD_CM_Beastmaster_Raid1.InvBalD_CM_Beastmaster_Raid1,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/BSM/InvBalD_CM_Beastmaster_Raid1.InvBalD_CM_Beastmaster_Raid1\"\',Weight=(BaseValueAttribute=GbxAttributeData\'\"/Game/PatchDLC/Raid1/GameData/Loot/ItemPoolExpansions/Mayhem4/Att_CharacterWeight_Beastmaster_M4.Att_CharacterWeight_Beastmaster_M4\"\')))"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossTink.ItemPool_TrialBossTink,Quantity.BaseValueConstant,8,2.000000,1"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Tink_TrialBoss),/Game/Enemies/Tink/_Shared/_Design/Balance/Table_Balance_Tink_Unique.Table_Balance_Tink_Unique,Tink_TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator7,NewEnumerator6"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Tink_TrialBoss),/Game/Enemies/Tink/_Shared/_Design/Balance/Table_Balance_Tink_Unique.Table_Balance_Tink_Unique,Tink_TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,10,800.000000,20.0"
                        ,0,1,uVar3,0);
          ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          pwVar5 = 
          L"(1,2,0,BPChar_Tink_TrialBoss),/Game/Enemies/Tink/_Shared/_Design/Balance/Table_Balance_Tink_Unique.Table_Balance_Tink_Unique,Tink_TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,2.200000,1.100000"
          ;
          goto LAB_140cce31f;
        }
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossTink.ItemPool_TrialBossTink,BalancedItems,0,,((InventoryBalanceData=/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Sickle/Balance/Balance_AR_VLA_Sickle.Balance_AR_VLA_Sickle,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/Gear/Weapons/AssaultRifles/Vladof/_Shared/_Design/_Unique/Sickle/Balance/Balance_AR_VLA_Sickle.Balance_AR_VLA_Sickle\"\'),(InventoryBalanceData=/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Skullmasher/Balance/Balance_SR_JAK_Skullmasher.Balance_SR_JAK_Skullmasher,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Hibiscus/Gear/Weapon/_Unique/Skullmasher/Balance/Balance_SR_JAK_Skullmasher.Balance_SR_JAK_Skullmasher\"\'))"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossTink.ItemPool_TrialBossTink,Quantity.BaseValueConstant,8,1.000000,2"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Tink_TrialBoss),/Game/Enemies/Tink/_Shared/_Design/Balance/Table_Balance_Tink_Unique.Table_Balance_Tink_Unique,Tink_TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator6,NewEnumerator7"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Tink_TrialBoss),/Game/Enemies/Tink/_Shared/_Design/Balance/Table_Balance_Tink_Unique.Table_Balance_Tink_Unique,Tink_TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,9,20.000000,800"
                      ,0,1,uVar3,0);
        ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        pwVar5 = 
        L"(1,2,0,BPChar_Tink_TrialBoss),/Game/Enemies/Tink/_Shared/_Design/Balance/Table_Balance_Tink_Unique.Table_Balance_Tink_Unique,Tink_TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,1.100000,2.200000"
        ;
        goto LAB_140ccdd6b;
      }
      if (DAT_14686cbd0 == lVar1) {
        if (param_2 == '\0') {
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGuardian.ItemPool_TrialBossGuardian,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Nimbus.InvBalD_ClassMod_Siren_Nimbus,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Nimbus.InvBalD_ClassMod_Siren_Nimbus\"\'),(InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Elementalist.InvBalD_ClassMod_Siren_Elementalist,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/Siren/InvBalD_ClassMod_Siren_Elementalist.InvBalD_ClassMod_Siren_Elementalist\"\'))"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGuardian.ItemPool_TrialBossGuardian,Quantity.BaseValueConstant,8,2.000000,1.000000"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Guardian_TrialBoss),/Game/Enemies/Guardian/_Shared/_Design/Balance/Table_Balance_Guardian_Unique.Table_Balance_Guardian_Unique,Guardian_Trial_Boss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator7,NewEnumerator6"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Guardian_TrialBoss),/Game/Enemies/Guardian/_Shared/_Design/Balance/Table_Balance_Guardian_Unique.Table_Balance_Guardian_Unique,Guardian_Trial_Boss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,10,800.000000,800.000000"
                        ,0,1,uVar3,0);
          ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          pwVar5 = 
          L"(1,2,0,BPChar_Guardian_TrialBoss),/Game/Enemies/Guardian/_Shared/_Design/Balance/Table_Balance_Guardian_Unique.Table_Balance_Guardian_Unique,Guardian_Trial_Boss,HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49,9,50.000000,0.500000"
          ;
          goto LAB_140cce31f;
        }
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGuardian.ItemPool_TrialBossGuardian,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Monarch/Balance/Balance_AR_VLA_Monarch.Balance_AR_VLA_Monarch,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Monarch/Balance/Balance_AR_VLA_Monarch.Balance_AR_VLA_Monarch\"\'),(InventoryBalanceData=/Game/PatchDLC/Ixora2/Gear/Weapons/_Unique/Replay/Balance/Balance_PS_ATL_Replay.Balance_PS_ATL_Replay,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Ixora2/Gear/Weapons/_Unique/Replay/Balance/Balance_PS_ATL_Replay.Balance_PS_ATL_Replay\"\'))"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossGuardian.ItemPool_TrialBossGuardian,Quantity.BaseValueConstant,8,1.000000,2.000000"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Guardian_TrialBoss),/Game/Enemies/Guardian/_Shared/_Design/Balance/Table_Balance_Guardian_Unique.Table_Balance_Guardian_Unique,Guardian_Trial_Boss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator6,NewEnumerator7"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Guardian_TrialBoss),/Game/Enemies/Guardian/_Shared/_Design/Balance/Table_Balance_Guardian_Unique.Table_Balance_Guardian_Unique,Guardian_Trial_Boss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,9,24.000000,800.000000"
                      ,0,1,uVar3,0);
        ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        pwVar5 = 
        L"(1,2,0,BPChar_Guardian_TrialBoss),/Game/Enemies/Guardian/_Shared/_Design/Balance/Table_Balance_Guardian_Unique.Table_Balance_Guardian_Unique,Guardian_Trial_Boss,HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49,8,0.500000,50.000000"
        ;
        goto LAB_140ccdd6b;
      }
      if (DAT_14686cbd8 == lVar1) {
        if (param_2 == '\0') {
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossMech.ItemPool_TrialBossMech,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/BeastMaster/InvBalD_ClassMod_Beastmaster_FriendBot.InvBalD_ClassMod_Beastmaster_FriendBot,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/BeastMaster/InvBalD_ClassMod_Beastmaster_FriendBot.InvBalD_ClassMod_Beastmaster_FriendBot\"\'),(InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/OPE/InvBalD_CM_Operative_Raid1.InvBalD_CM_Operative_Raid1,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/CM/_D/PartSets/_U/OPE/InvBalD_CM_Operative_Raid1.InvBalD_CM_Operative_Raid1\"\',Weight=(BaseValueAttribute=GbxAttributeData\'\"/Game/PatchDLC/Raid1/GameData/Loot/ItemPoolExpansions/Mayhem4/Att_CharacterWeight_Operative_M4.Att_CharacterWeight_Operative_M4\"\')))"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossMech.ItemPool_TrialBossMech,Quantity.BaseValueConstant,8,2.000000,1"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator7,NewEnumerator6"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,10,800.000000,30.000000"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49,10,500.000000,500.000000"
                        ,0,1,uVar3,0);
          ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          pwVar5 = 
          L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,2.300000,1.15"
          ;
          goto LAB_140cce31f;
        }
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossMech.ItemPool_TrialBossMech,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Geranium/Gear/Weapon/_Unique/Flipper/Balance/Balance_SM_MAL_Flipper.Balance_SM_MAL_Flipper,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Geranium/Gear/Weapon/_Unique/Flipper/Balance/Balance_SM_MAL_Flipper.Balance_SM_MAL_Flipper\"\'),(InventoryBalanceData=/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Kaoson/Balance/Balance_SM_DAHL_Kaoson.Balance_SM_DAHL_Kaoson,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Kaoson/Balance/Balance_SM_DAHL_Kaoson.Balance_SM_DAHL_Kaoson\"\'))"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossMech.ItemPool_TrialBossMech,Quantity.BaseValueConstant,8,1.000000,2"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator6,NewEnumerator7"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,9,30.000000,800.000000"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49,8,5.000000,500.000000"
                      ,0,1,uVar3,0);
        ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        pwVar5 = 
        L"(1,2,0,BPChar_Mech_TrialBoss),/Game/Enemies/Mech/_Shared/_Design/Balance/Table_Balance_Mech_Unique.Table_Balance_Mech_Unique,Mech_TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,1.150000,2.3"
        ;
        goto LAB_140ccdd6b;
      }
      if (DAT_14686cbe0 == lVar1) {
        if (param_2 == '\0') {
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSaurian.ItemPool_TrialBossSaurian,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/BeastMaster/InvBalD_ClassMod_Beastmaster_CosmicStalker.InvBalD_ClassMod_Beastmaster_CosmicStalker,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/BeastMaster/InvBalD_ClassMod_Beastmaster_CosmicStalker.InvBalD_ClassMod_Beastmaster_CosmicStalker\"\'),(InventoryBalanceData=/Game/PatchDLC/Raid1/Gear/ClassMods/BeastMaster/InvBalD_ClassMod_Beastmaster_RedFang.InvBalD_ClassMod_Beastmaster_RedFang,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Raid1/Gear/ClassMods/BeastMaster/InvBalD_ClassMod_Beastmaster_RedFang.InvBalD_ClassMod_Beastmaster_RedFang\"\'))"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSaurian.ItemPool_TrialBossSaurian,Quantity.BaseValueConstant,8,2.000000,1"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Saurian_TrialBoss),/Game/Enemies/Saurian/_Shared/_Design/Balance/Table_Balance_Saurian_Unique.Table_Balance_Saurian_Unique,Saurian_TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator7,NewEnumerator6"
                        ,0,1,uVar3,0);
          uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          FUN_142d8ae80(0,
                        L"(1,2,0,BPChar_Saurian_TrialBoss),/Game/Enemies/Saurian/_Shared/_Design/Balance/Table_Balance_Saurian_Unique.Table_Balance_Saurian_Unique,Saurian_TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,10,800.000000,800.000000"
                        ,0,1,uVar3,0);
          ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
          pwVar5 = 
          L"(1,2,0,BPChar_Saurian_TrialBoss),/Game/Enemies/Saurian/_Shared/_Design/Balance/Table_Balance_Saurian_Unique.Table_Balance_Saurian_Unique,Saurian_TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,4.000000,2"
          ;
          goto LAB_140cce31f;
        }
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSaurian.ItemPool_TrialBossSaurian,BalancedItems,0,,((InventoryBalanceData=/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Backburner/Balance/Balance_HW_VLA_ETech_BackBurner.Balance_HW_VLA_ETech_BackBurner,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Mayhem2/Gear/Weapon/_Shared/_Unique/Backburner/Balance/Balance_HW_VLA_ETech_BackBurner.Balance_HW_VLA_ETech_BackBurner\"\'),(InventoryBalanceData=/Game/PatchDLC/Ixora/Gear/Weapons/_Unique/Tizzy/Balance/Balance_PS_COV_Tizzy.Balance_PS_COV_Tizzy,ResolvedInventoryBalanceData=InventoryBalanceData\'\"/Game/PatchDLC/Ixora/Gear/Weapons/_Unique/Tizzy/Balance/Balance_PS_COV_Tizzy.Balance_PS_COV_Tizzy\"\'))"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,1,0,),/Game/PatchDLC/Raid1/GameData/Loot/ItemPools/ItemPool_TrialBossSaurian.ItemPool_TrialBossSaurian,Quantity.BaseValueConstant,8,1.000000,2"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Saurian_TrialBoss),/Game/Enemies/Saurian/_Shared/_Design/Balance/Table_Balance_Saurian_Unique.Table_Balance_Saurian_Unique,Saurian_TrialBoss,ExperienceType_8_73D53DF14EC1787599308F9A13A91D97,14,NewEnumerator6,NewEnumerator7"
                      ,0,1,uVar3,0);
        uVar3 = FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        FUN_142d8ae80(0,
                      L"(1,2,0,BPChar_Saurian_TrialBoss),/Game/Enemies/Saurian/_Shared/_Design/Balance/Table_Balance_Saurian_Unique.Table_Balance_Saurian_Unique,Saurian_TrialBoss,HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12,9,35.000000,800.000000"
                      ,0,1,uVar3,0);
        ppuVar4 = (undefined1 **)FUN_140c5e9b0(local_68,AK::MemoryMgr::StartProfileThreadUsage);
        pwVar5 = 
        L"(1,2,0,BPChar_Saurian_TrialBoss),/Game/Enemies/Saurian/_Shared/_Design/Balance/Table_Balance_Saurian_Unique.Table_Balance_Saurian_Unique,Saurian_TrialBoss,DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF,8,2.000000,4"
        ;
        goto LAB_140ccdd6b;
      }
    }
    if (param_2 != '\0') {
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      local_68[0] = &LAB_140c6b520;
      FUN_142d8ae80(0,
                    L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,0.0"
                    ,0,1,local_68,0);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444d9d08;
        puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      pwVar5 = 
      L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,0.0"
      ;
      goto LAB_140cce777;
    }
  }
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,1.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,75.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,125.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestNoGem,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,500.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,1.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,75.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,500.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestOneGem,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,1000"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,1.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,50.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,2000.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestTwoGems,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,3000.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC,0,,1.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5,0,,100.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58,0,,9000.0"
                ,0,1,local_68,0);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9d08;
    puVar2[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  pwVar5 = 
  L"(1,2,0,MatchAll),/Game/GameData/Loot/RarityWeighting/DataTable_Lootable_BalanceData.DataTable_Lootable_BalanceData,TrialsChestThreeGems,VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA,0,,30000.0"
  ;
LAB_140cce777:
  local_68[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,pwVar5,0,1,local_68,0);
  return;
}



// FUNCTION 140ccf1c0 FUN_140ccf1c0 body=470 status=ok
// SIG undefined FUN_140ccf1c0(void)

void FUN_140ccf1c0(longlong param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined2 *local_38;
  int local_30;
  
  *(byte *)(param_1 + 0x196) = param_2;
  bVar4 = 2;
  if (param_2 < 2) {
    bVar4 = param_2;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DetailMode");
  if (plVar2 != (longlong *)0x0) {
    FString::PrintfImpl(&local_38,&DAT_143f3edc0,bVar4);
    puVar3 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar3 = local_38;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  iVar1 = 1 << (*(byte *)(param_1 + 0x196) & 0x1f);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StaticMeshLODDistanceScale");
  if (plVar2 != (longlong *)0x0) {
    FString::PrintfImpl(&local_38,&DAT_144050d74,(double)(1.0 / (float)iVar1));
    puVar3 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar3 = local_38;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SkeletalMeshLODRadiusScale");
  if (plVar2 != (longlong *)0x0) {
    FString::PrintfImpl(&local_38,&DAT_144050d74,(double)iVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar3 = local_38;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x2000000);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccf3a0 FUN_140ccf3a0 body=147 status=ok
// SIG undefined FUN_140ccf3a0(void)

void FUN_140ccf3a0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  *(undefined1 *)(param_1 + 0x198) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"sg.FoliageQuality");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccf440 FUN_140ccf440 body=213 status=ok
// SIG undefined FUN_140ccf440(void)

void FUN_140ccf440(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  float fVar3;
  undefined2 *local_18;
  int local_10;
  
  *(undefined1 *)((longlong)param_1 + 0x179) = param_2;
  fVar3 = (float)(**(code **)(*param_1 + 0x310))();
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"t.MaxFPS");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,(int)fVar3);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_146b17150 != 0) {
    *(uint *)(DAT_146b17150 + 0x7e0) =
         -(uint)(*(char *)((longlong)param_1 + 0x179) != '\0') & 0x10 |
         *(uint *)(DAT_146b17150 + 0x7e0) & 0xffffffef;
  }
  return;
}



// FUNCTION 140ccf520 FUN_140ccf520 body=81 status=ok
// SIG undefined FUN_140ccf520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ccf520(longlong param_1,int param_2)

{
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if (param_2 < 1) {
    if (*(char *)(param_1 + 0x6ec) != '\0') {
      *(undefined1 *)(param_1 + 0x6ec) = 0;
    }
  }
  else if (local_18 != (int *)(param_1 + 0x6e8)) {
    *(int *)(param_1 + 0x6e8) = param_2;
    *(undefined1 *)(param_1 + 0x6ec) = 1;
  }
  FUN_140cc7e60();
  return;
}



// FUNCTION 140ccf580 FUN_140ccf580 body=52 status=ok
// SIG undefined FUN_140ccf580(void)

void FUN_140ccf580(longlong param_1,char param_2,char param_3)

{
  if ((*(char *)(param_1 + 0x183) == param_2) && (param_3 == '\0')) {
    return;
  }
  *(char *)(param_1 + 0x183) = param_2;
  FUN_140cccea0();
  FUN_140c69c40(param_1);
  return;
}



// FUNCTION 140ccf5c0 FUN_140ccf5c0 body=18 status=ok
// SIG undefined FUN_140ccf5c0(void)

void FUN_140ccf5c0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x90c) = param_2;
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x808);
  return;
}



// FUNCTION 140ccf5e0 FUN_140ccf5e0 body=159 status=ok
// SIG undefined FUN_140ccf5e0(void)

void FUN_140ccf5e0(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_28;
  int local_20;
  
  *(float *)(param_1 + 0x1ac) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccf680 FUN_140ccf680 body=45 status=ok
// SIG undefined FUN_140ccf680(void)

void FUN_140ccf680(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  if ((param_1 != 0) && (plVar1 = (longlong *)FUN_140cff1b0(), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140ccf6b0 FUN_140ccf6b0 body=14 status=ok
// SIG undefined FUN_140ccf6b0(void)

void FUN_140ccf6b0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x96a) = param_2;
  *(undefined1 *)(param_1 + 0x96b) = param_3;
  return;
}



// FUNCTION 140ccf6c0 FUN_140ccf6c0 body=159 status=ok
// SIG undefined FUN_140ccf6c0(void)

void FUN_140ccf6c0(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_28;
  int local_20;
  
  *(float *)(param_1 + 0x1b8) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UI.Level");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccf760 SetFXSystem body=5 status=ok
// SIG undefined SetFXSystem(void)

void FNULLSceneInterface::SetFXSystem(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 140ccf780 FUN_140ccf780 body=104 status=ok
// SIG undefined FUN_140ccf780(void)

void FUN_140ccf780(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*param_2 != (char)param_1[0x13f]) || (param_2[1] != *(char *)((longlong)param_1 + 0x9f9))) {
    *(undefined2 *)(param_1 + 0x13f) = *(undefined2 *)param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x145,0);
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::PopulateStreamingLevelsToConsider(uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140ccf7f0 FUN_140ccf7f0 body=332 status=ok
// SIG undefined FUN_140ccf7f0(void)

void FUN_140ccf7f0(longlong *param_1,char param_2,char param_3,undefined4 param_4,longlong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 local_res8;
  
  if (((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
     (plVar2 = (longlong *)UWorld::GetGameState<APVPGameState>(lVar1), plVar2 != (longlong *)0x0)) {
    local_res8 = CONCAT11(param_3,param_2);
    if ((param_2 != (char)plVar2[0x13f]) || (param_3 != *(char *)((longlong)plVar2 + 0x9f9))) {
      *(undefined2 *)(plVar2 + 0x13f) = local_res8;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar2 + 0x145,0);
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if (lVar3 != 0) {
        uVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
        UWorld::PopulateStreamingLevelsToConsider(uVar4);
      }
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar3 = lVar1 + 0x400;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    lVar5 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar3,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4),
                       &local_res8);
    if (lVar5 == 0) {
      lVar5 = FMemory::Malloc(0x30,0);
      uVar4 = 0;
      if (lVar5 != 0) {
        uVar4 = FUN_140e9a7c0(lVar5,param_2,param_3,param_4,param_5,lVar1);
      }
      FUN_142514cf0(lVar3,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4),uVar4);
    }
  }
  return;
}



// FUNCTION 140ccf940 FUN_140ccf940 body=861 status=ok
// SIG undefined FUN_140ccf940(void)

void FUN_140ccf940(longlong param_1,char param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  short *psVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  undefined2 *puVar14;
  short *psVar15;
  undefined4 local_res8;
  undefined4 local_res10;
  short *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  
  psVar13 = (short *)0x0;
  iVar11 = 0;
  *(char *)(param_1 + 0x186) = param_2;
  lVar10 = DAT_14686c9b8;
  iVar12 = 0;
  local_res8 = 3;
  local_res10 = 0x40;
  if (param_2 == '\0') {
    local_res10 = 0x20;
  }
  else if (param_2 == '\x01') {
    local_res10 = 0x30;
    iVar11 = 2;
  }
  else if (param_2 == '\x02') {
    local_res8 = 4;
    iVar11 = 1;
  }
  else {
    iVar11 = 2;
    if (param_2 == '\x03') {
      local_res10 = 0x80;
      local_res8 = 4;
      iVar11 = 2;
    }
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), psVar6 = (short *)&DAT_00000004, DVar5 == DAT_1468c21c0)) {
    psVar6 = psVar13;
  }
  puVar8 = local_48;
  psVar15 = local_58;
  if ((*(int *)((longlong)psVar6 + lVar10) != 0) && (DAT_146ab6358 != (longlong *)0x0)) {
    local_48 = (undefined2 *)0x0;
    local_40 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"D3D12",0xc);
    psVar6 = (short *)(**(code **)(*DAT_146ab6358 + 0x20))();
    local_58 = (short *)0x0;
    local_4c = 0;
    psVar15 = psVar13;
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar6[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
      local_50 = iVar9;
      if (0 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      iVar12 = local_50;
      psVar15 = local_58;
      FGenericPlatformString::Memcpy(local_58,psVar6,(longlong)iVar9 * 2);
    }
    puVar14 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar14 = puVar8;
    }
    psVar13 = (short *)0x3;
    psVar6 = &DAT_143f3eda8;
    if (iVar12 != 0) {
      psVar6 = psVar15;
    }
    lVar10 = (longlong)puVar14 - (longlong)psVar6;
    do {
      sVar1 = *psVar6;
      sVar2 = *(short *)((longlong)psVar6 + lVar10);
      if (sVar1 != sVar2) break;
      psVar6 = psVar6 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      bVar3 = true;
      goto LAB_140ccfaf9;
    }
  }
  bVar3 = false;
LAB_140ccfaf9:
  if ((((ulonglong)psVar13 & 2) != 0) &&
     (psVar13 = (short *)(ulonglong)((uint)psVar13 & 0xfffffffd), psVar15 != (short *)0x0)) {
    FMemory::Free(psVar15);
  }
  if ((((ulonglong)psVar13 & 1) != 0) && (puVar8 != (undefined2 *)0x0)) {
    FMemory::Free(puVar8);
  }
  if ((bVar3) && (iVar11 == 0)) {
    iVar11 = 2;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaterialQualityLevel")
  ;
  if (plVar7 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_143f3edc0,iVar11);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar8 = local_48;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,puVar8,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar7 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TranslucencyLightingVolumeDim");
  if (plVar7 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_143f3edc0,local_res10);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar8 = local_48;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,puVar8,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SceneColorFormat");
  if (plVar7 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_143f3edc0,local_res8);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar8 = local_48;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,puVar8,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccfca0 FUN_140ccfca0 body=368 status=ok
// SIG undefined FUN_140ccfca0(void)

void FUN_140ccfca0(longlong param_1,undefined8 param_2,byte param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  wchar_t *pwVar6;
  byte bVar7;
  int local_res8 [2];
  byte local_res18 [16];
  undefined8 local_38;
  byte *local_30;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x880);
  local_res18[0] = param_3;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x668,local_res8,param_2);
  pbVar3 = (byte *)0x0;
  if (local_res8[0] != -1) {
    pbVar3 = (byte *)((longlong)local_res8[0] * 0x1c + *(longlong *)(param_1 + 0x668));
  }
  pbVar5 = pbVar3 + 0x10;
  if (pbVar3 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
  }
  if (pbVar5 == (byte *)0x0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *pbVar5;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar7 != local_res18[0]) {
    TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x668,param_2);
    local_30 = local_res18;
    local_38 = param_2;
    FUN_140c60150(param_1 + 0x668,local_res8,&local_38,0);
    if ((*(longlong **)(param_1 + 0x5e8) != (longlong *)0x0) && (1 < local_res18[0])) {
      if (local_res18[0] < 4) {
        if ((bVar7 != 1) && (bVar7 != 4)) goto LAB_140ccfdf6;
        pwVar6 = L"Waypoint_To_Map";
      }
      else {
        if ((local_res18[0] != 4) || (2 < (byte)(bVar7 - 1))) goto LAB_140ccfdf6;
        pwVar6 = L"Map_To_Waypoint";
      }
      local_38 = 0;
      local_30 = (byte *)0x0;
      lVar1 = **(longlong **)(param_1 + 0x5e8);
      puVar4 = (undefined8 *)FName::FName(local_res8,pwVar6,1);
      (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(param_1 + 0x5e8),*puVar4,&local_38);
    }
  }
LAB_140ccfdf6:
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140ccfe10 FUN_140ccfe10 body=216 status=ok
// SIG undefined FUN_140ccfe10(void)

void FUN_140ccfe10(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *local_18;
  int local_10;
  
  uVar3 = 100;
  *(undefined1 *)(param_1 + 0x178) = param_2;
  switch(param_2) {
  case 0:
    uVar3 = 0x32;
    break;
  case 1:
    uVar3 = 0x4b;
    break;
  case 3:
    uVar3 = 0x7d;
    break;
  case 4:
    uVar3 = 0x96;
    break;
  case 5:
    uVar3 = 0xaf;
    break;
  case 6:
    uVar3 = 200;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ScreenPercentage");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar3);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ccff10 FUN_140ccff10 body=472 status=ok
// SIG undefined FUN_140ccff10(void)

void FUN_140ccff10(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined2 *local_28;
  int local_20;
  
  uVar3 = 2;
  fVar4 = 50.0;
  *(char *)(param_1 + 0x19a) = param_2;
  if (param_2 == '\0') {
    uVar3 = 0;
  }
  else if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      fVar4 = 75.0;
      uVar3 = 3;
    }
    else if (param_2 == '\x03') {
      fVar4 = 100.0;
      uVar3 = 3;
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSR.Intensity");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,0x4059000000000000);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSR.OverrideQuality");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)fVar4);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSR.Quality");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,uVar3);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cd00f0 FUN_140cd00f0 body=137 status=ok
// SIG undefined FUN_140cd00f0(void)

void FUN_140cd00f0(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(char *)(param_1 + 0x700) != param_2) &&
      (*(char *)(param_1 + 0x700) = param_2, param_2 != '\0')) &&
     (lVar3 = FUN_1422312c0(), lVar3 != 0)) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_1411d52a0(lVar3 + 0x7a0), cVar2 != '\0')) {
      FUN_1411db940(lVar3 + 0x7a0);
      return;
    }
  }
  return;
}



// FUNCTION 140cd0180 FUN_140cd0180 body=147 status=ok
// SIG undefined FUN_140cd0180(void)

void FUN_140cd0180(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  *(undefined1 *)(param_1 + 0x18d) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"sg.ShadowQuality");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cd0230 FUN_140cd0230 body=27 status=ok
// SIG undefined FUN_140cd0230(void)

void FUN_140cd0230(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x61c) != param_2) {
    *(int *)(param_1 + 0x61c) = param_2;
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x620);
    return;
  }
  return;
}



// FUNCTION 140cd0250 FUN_140cd0250 body=452 status=ok
// SIG undefined FUN_140cd0250(void)

void FUN_140cd0250(longlong param_1,byte param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 *local_28;
  int local_20;
  
  *(byte *)(param_1 + 0x197) = param_2;
  uVar5 = (ulonglong)param_2;
  fVar1 = *(float *)(&DAT_146299630 + uVar5 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LandscapeLOD0DistributionScale");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)fVar1);
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  fVar1 = *(float *)(&DAT_146299630 + uVar5 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LandscapeLODDistributionScale");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_144050d74,(double)fVar1);
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar2 = *(undefined4 *)(&DAT_146299640 + uVar5 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LandscapeLODBias");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,uVar2);
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cd0420 FUN_140cd0420 body=1103 status=ok
// SIG undefined FUN_140cd0420(void)

void FUN_140cd0420(longlong param_1,char param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined2 *local_58;
  int local_50;
  
  *(char *)(param_1 + 0x185) = param_2;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  *(undefined1 *)(param_1 + 0x194) = 4;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"sg.TextureQuality");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,param_2);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MipMapLODBias.Character");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,param_2 == '\0');
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MipMapLODBias.Environment");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,param_2 == '\0');
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Streaming.LimitPoolSizeToVRAM");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,0);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar2 = *(char *)(param_1 + 0x185);
  iVar6 = 1000;
  fVar7 = 1.0;
  if (cVar2 == '\0') {
    fVar7 = 0.0;
    iVar6 = 800;
  }
  else if (cVar2 == '\x01') {
    fVar7 = 0.25;
    iVar6 = 0x4b0;
  }
  else if (cVar2 == '\x02') {
    fVar7 = 0.5;
    iVar6 = 2000;
  }
  else if (cVar2 == '\x03') {
    fVar7 = 0.75;
    iVar6 = 3000;
  }
  fVar1 = *(float *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  fVar8 = 0.0;
  if ((0.0 <= fVar1) && (fVar8 = fVar1, 10.0 <= fVar1)) {
    fVar8 = 10.0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Streaming.ViewBoostScale");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar8);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  fVar1 = *(float *)(param_1 + 0x218);
  *(float *)(param_1 + 0x214) = fVar7;
  if ((0.0 <= fVar1) && (fVar7 = fVar1, 10.0 <= fVar1)) {
    fVar7 = 10.0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Streaming.AdaptiveBoostScale");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar7);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  iVar3 = *(int *)(param_1 + 0x220);
  *(int *)(param_1 + 0x21c) = iVar6;
  if (((-1 < iVar3) && (iVar6 = 500, 499 < iVar3)) && (iVar6 = 10000, iVar3 < 10000)) {
    iVar6 = iVar3;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Streaming.PoolSize");
  if (plVar4 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,iVar6);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cd0870 FUN_140cd0870 body=151 status=ok
// SIG undefined FUN_140cd0870(void)

void FUN_140cd0870(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_14248f360();
  *(undefined2 *)(param_1 + 0x178) = 0x402;
  *(undefined4 *)(param_1 + 0x17c) = 0x90;
  cVar1 = FUN_140cba6c0(param_1);
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x184);
  }
  *(undefined1 *)(param_1 + 0x183) = uVar2;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0xbf800000;
  FUN_140cccea0(param_1);
  *(undefined1 *)(param_1 + 0x1a4) = 2;
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f733333;
  *(undefined4 *)(param_1 + 0x1ac) = 0x43c80000;
  *(undefined8 *)(param_1 + 0x1b0) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1b8) = 0x40800000;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  return;
}



// FUNCTION 140cd0910 SetPhysicsAsset body=8 status=ok
// SIG undefined SetPhysicsAsset(void)

void USkinnedMeshComponent::SetPhysicsAsset(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x658) = param_2;
  return;
}



// FUNCTION 140cd0920 FUN_140cd0920 body=120 status=ok
// SIG undefined FUN_140cd0920(void)

void FUN_140cd0920(longlong param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(char *)(param_1 + 0x1bc) = *param_2;
  plVar2 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      return;
    }
  }
  cVar1 = *param_2;
  *(char *)(lVar3 + 0x69) = cVar1;
  if (cVar1 == '\x01') {
    if (*(char *)(lVar3 + 0x6a) == '\0') {
      *(undefined1 *)(lVar3 + 0x6a) = 2;
    }
    else if (*(char *)(lVar3 + 0x6a) == '\x01') {
      *(undefined1 *)(lVar3 + 0x6a) = 4;
      return;
    }
  }
  return;
}



// FUNCTION 140cd09a0 FUN_140cd09a0 body=59 status=ok
// SIG undefined FUN_140cd09a0(void)

void FUN_140cd09a0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_2 != '\0')) {
    *(char *)(param_1 + 0x6c5) = param_2;
    *(undefined1 *)(param_1 + 0x6c6) = 1;
    if (param_2 == '\x01') {
      *(undefined2 *)(param_1 + 0x6c2) = 0x101;
    }
    else if (param_2 == '\x02') {
      *(undefined2 *)(param_1 + 0x6c2) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 140cd09e0 FUN_140cd09e0 body=54 status=ok
// SIG undefined FUN_140cd09e0(void)

void FUN_140cd09e0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  lVar1 = thunk_FUN_142039c70();
  if (lVar1 != 0) {
    FUN_142054cb0(lVar1,*(undefined4 *)(param_1 + 0x1a8));
    return;
  }
  return;
}



// FUNCTION 140cd0a20 FUN_140cd0a20 body=585 status=ok
// SIG undefined FUN_140cd0a20(void)

void FUN_140cd0a20(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *local_18;
  int local_10;
  
  *(char *)(param_1 + 0x199) = param_2;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VolumetricFog");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2 != '\0');
    puVar4 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar4 = local_18;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*(byte *)(param_1 + 0x199) != 0) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x199) * 4;
    uVar2 = *(undefined4 *)(&DAT_146299650 + lVar1);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VolumetricFog.GridPixelSize");
    if (plVar3 != (longlong *)0x0) {
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar2);
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar2 = *(undefined4 *)(&DAT_146299660 + lVar1);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VolumetricFog.GridSizeZ");
    if (plVar3 != (longlong *)0x0) {
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar2);
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar2 = *(undefined4 *)(&DAT_146299670 + lVar1);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.VolumetricFog.HistoryMissSupersampleCount");
    if (plVar3 != (longlong *)0x0) {
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar2);
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x2000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140cd0c70 FUN_140cd0c70 body=132 status=ok
// SIG undefined FUN_140cd0c70(void)

void FUN_140cd0c70(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x630) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x630) + 0x488), lVar1 != 0)) {
    uVar3 = FUN_1430a8880();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    if ((plVar4 != (longlong *)0x0) &&
       ((-1 < (int)param_2 && (iVar2 = (**(code **)(*plVar4 + 0xe8))(plVar4), (int)param_2 < iVar2))
       )) {
      uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4,param_2 & 0xff);
      FUN_142509330(param_1,uVar3);
    }
  }
  return;
}



// FUNCTION 140cd0d00 FUN_140cd0d00 body=304 status=ok
// SIG undefined FUN_140cd0d00(void)

void FUN_140cd0d00(longlong *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if (((char)param_1[0x142] != param_2) && ((char)param_1[0x25] == '\x03')) {
    *(char *)(param_1 + 0x142) = param_2;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar2 = FWeakObjectPtr::Get();
        if (lVar2 != 0) {
          lVar4 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x848), lVar2 != 0)) {
            lVar4 = FUN_1413ffe00();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140e36ff0(lVar2,param_2);
            }
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140cd0e30 FUN_140cd0e30 body=10008 status=ok
// SIG undefined FUN_140cd0e30(void)

/* WARNING: Removing unreachable block (ram,0x000140cd1c5c) */
/* WARNING: Removing unreachable block (ram,0x000140cd1c65) */

void FUN_140cd0e30(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  short *psVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  bool bVar16;
  undefined4 local_res18 [2];
  longlong local_868 [2];
  undefined2 *local_858;
  undefined8 local_850;
  longlong local_848 [2];
  undefined2 *local_838;
  ulonglong local_830;
  longlong local_828 [2];
  undefined2 *local_818;
  undefined8 local_810;
  longlong local_808 [2];
  undefined2 *local_7f8;
  ulonglong local_7f0;
  longlong local_7e8 [2];
  undefined2 *local_7d8;
  undefined8 local_7d0;
  longlong local_7c8 [2];
  undefined2 *local_7b8;
  ulonglong local_7b0;
  longlong local_7a8 [2];
  undefined2 *local_798;
  undefined8 local_790;
  longlong local_788 [18];
  undefined2 *local_6f8;
  ulonglong local_6f0;
  longlong local_6e8 [2];
  undefined2 *local_6d8;
  undefined8 local_6d0;
  longlong local_6c8 [10];
  undefined2 *local_678;
  ulonglong local_670;
  longlong local_668 [2];
  undefined2 *local_658;
  undefined8 local_650;
  longlong local_648 [2];
  undefined2 *local_638;
  ulonglong local_630;
  undefined2 *local_628;
  undefined8 local_620;
  undefined2 *local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined2 *local_5f8;
  ulonglong local_5f0;
  longlong local_5e8 [2];
  undefined2 *local_5d8;
  undefined8 local_5d0;
  longlong local_5c8 [2];
  undefined2 *local_5b8;
  ulonglong local_5b0;
  longlong local_5a8 [2];
  undefined2 *local_598;
  undefined8 local_590;
  longlong local_588 [2];
  undefined2 *local_578;
  ulonglong local_570;
  longlong local_568 [2];
  undefined2 *local_558;
  undefined8 local_550;
  longlong local_548 [2];
  undefined2 *local_538;
  ulonglong local_530;
  longlong local_528 [4];
  undefined2 *local_508;
  undefined8 local_500;
  longlong local_4f8 [10];
  undefined2 *local_4a8;
  uint local_4a0;
  undefined4 local_49c;
  undefined2 *local_498;
  uint local_490;
  undefined4 local_48c;
  undefined2 *local_488;
  undefined8 local_480;
  undefined2 *local_478;
  uint local_470;
  undefined4 local_46c;
  undefined1 local_468 [4];
  undefined1 local_464 [4];
  undefined1 local_460 [4];
  undefined1 local_45c [4];
  undefined1 local_458 [4];
  undefined1 local_454 [4];
  undefined1 local_450 [4];
  undefined1 local_44c [4];
  undefined1 local_448 [4];
  undefined1 local_444 [4];
  undefined1 local_440 [4];
  undefined1 local_43c [4];
  undefined1 local_438 [4];
  undefined1 local_434 [4];
  undefined1 local_430 [4];
  undefined1 local_42c [4];
  undefined1 local_428 [4];
  undefined1 local_424 [4];
  undefined1 local_420 [4];
  undefined1 local_41c [4];
  undefined1 local_418 [8];
  longlong *local_410;
  longlong *local_408;
  longlong local_400 [2];
  longlong *local_3f0;
  longlong *local_3e8;
  longlong local_3e0 [2];
  longlong *local_3d0;
  longlong *local_3c8;
  longlong local_3c0 [2];
  longlong *local_3b0;
  longlong *local_3a8;
  longlong local_3a0 [2];
  longlong *local_390;
  longlong *local_388;
  longlong local_380 [2];
  longlong *local_370;
  longlong *local_368;
  longlong local_360 [2];
  longlong *local_350;
  longlong *local_348;
  longlong local_340 [2];
  longlong *local_330;
  longlong *local_328;
  longlong local_320 [2];
  longlong *local_310;
  longlong *local_308;
  longlong local_300 [2];
  longlong *local_2f0;
  longlong *local_2e8;
  longlong local_2e0 [2];
  longlong *local_2d0;
  longlong *local_2c8;
  longlong local_2c0 [2];
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0 [2];
  longlong *local_290;
  longlong *local_288;
  longlong local_280 [2];
  longlong *local_270;
  longlong *local_268;
  longlong local_260 [2];
  longlong *local_250;
  longlong *local_248;
  longlong local_240 [2];
  longlong *local_230;
  longlong *local_228;
  longlong local_220 [2];
  longlong *local_210;
  longlong *local_208;
  longlong local_200 [2];
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0 [2];
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0 [2];
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0 [2];
  longlong *local_190;
  longlong *local_188;
  longlong local_180 [2];
  longlong *local_170;
  longlong *local_168;
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  longlong local_130 [2];
  longlong local_120 [2];
  longlong local_110 [2];
  longlong local_100 [2];
  longlong local_f0 [2];
  longlong local_e0 [2];
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  puVar14 = (undefined2 *)0x0;
  uVar11 = 0;
  local_res18[0] = 0;
  if (param_3 != '\0') {
    FUN_14248f810();
  }
  local_788[0xe] = 0;
  local_788[0xf] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 0xe,0);
  FGenericPlatformString::Memcpy(local_788[0xe],L"StatsLevel",0x16);
  FString::PrintfImpl(local_400,&DAT_14435f374,*(undefined4 *)(param_1 + 400));
  local_410 = local_788 + 0xe;
  local_408 = local_400;
  FUN_140497620(param_2,local_res18,&local_410,0);
  if (local_400[0] != 0) {
    FMemory::Free();
  }
  if (local_788[0xe] != 0) {
    FMemory::Free();
  }
  local_6d8 = (undefined2 *)0x0;
  local_6d0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6e8 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_6d8,0x10,"EFrameRateLimit",0x10,0x3f);
  local_6e8[0] = 0;
  local_6e8[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6e8,0);
  FGenericPlatformString::Memcpy(local_6e8[0],L"FPSLimit",0x12);
  uVar3 = *(undefined1 *)(param_1 + 0x179);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_6d0 != 0) {
    puVar15 = local_6d8;
  }
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_788[0x10] = 0;
    local_788[0x11] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 0x10,0);
    lVar5 = local_788[0x10];
    FGenericPlatformString::Convert<char,wchar_t>(local_788[0x10],5,&DAT_14435abe4,5,0x3f);
    plVar6 = local_788 + 0x10;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_150,uVar3);
    lVar5 = local_788[0x10];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_6f8 = (undefined2 *)0x0;
  local_6f0 = 0;
  puVar15 = puVar14;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar9 = (int)lVar12 + 1;
    local_6f0 = (ulonglong)uVar9;
    uVar11 = uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 0x12,0);
      uVar11 = (uint)local_6f0;
    }
    puVar15 = local_6f8;
    FGenericPlatformString::Memcpy(local_6f8,psVar13,(longlong)(int)uVar9 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_150[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar11 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_3e0,&DAT_14435fc14,puVar8);
  local_3f0 = local_6e8;
  local_3e8 = local_3e0;
  FUN_140497620(param_2,local_444,&local_3f0,0);
  if (local_3e0[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_6e8[0] != 0) {
    FMemory::Free();
  }
  if (local_6d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_6c8[0] = 0;
  local_6c8[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8,0);
  FGenericPlatformString::Memcpy(local_6c8[0],L"FPSLimitCustom",0x1e);
  FString::PrintfImpl(local_3c0,&DAT_144360094,*(undefined4 *)(param_1 + 0x17c));
  local_3d0 = local_6c8;
  local_3c8 = local_3c0;
  FUN_140497620(param_2,local_440,&local_3d0,0);
  if (local_3c0[0] != 0) {
    FMemory::Free();
  }
  if (local_6c8[0] != 0) {
    FMemory::Free();
  }
  local_4f8[4] = 0;
  local_4f8[5] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4f8 + 4,0);
  lVar5 = local_4f8[4];
  FGenericPlatformString::Convert<char,wchar_t>(local_4f8[4],0x11,"EGraphicsQuality",0x11,0x3f);
  local_6c8[2] = 0;
  local_6c8[3] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8 + 2,0);
  FGenericPlatformString::Memcpy(local_6c8[2],L"GfxQuality-Override",0x28);
  puVar7 = (undefined8 *)
           EnumToString<enum_EPortNameEnum>
                     (local_140,local_4f8 + 4,*(undefined1 *)(param_1 + 0x208));
  if (*(int *)(puVar7 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar7;
  }
  FString::PrintfImpl(local_3a0,&DAT_144361ff4,puVar15);
  local_3b0 = local_6c8 + 2;
  local_3a8 = local_3a0;
  FUN_140497620(param_2,local_43c,&local_3b0,0);
  if (local_3a0[0] != 0) {
    FMemory::Free();
  }
  if (local_140[0] != 0) {
    FMemory::Free();
  }
  if (local_6c8[2] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  local_4f8[6] = 0;
  local_4f8[7] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4f8 + 6,0);
  lVar5 = local_4f8[6];
  FGenericPlatformString::Convert<char,wchar_t>(local_4f8[6],0x11,"EGraphicsQuality",0x11,0x3f);
  local_6c8[4] = 0;
  local_6c8[5] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8 + 4,0);
  FGenericPlatformString::Memcpy(local_6c8[4],L"GfxQuality-Recommended",0x2e);
  puVar7 = (undefined8 *)
           EnumToString<enum_EPortNameEnum>
                     (local_130,local_4f8 + 6,*(undefined1 *)(param_1 + 0x184));
  if (*(int *)(puVar7 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar7;
  }
  FString::PrintfImpl(local_380,&DAT_1443628f4,puVar15);
  local_390 = local_6c8 + 4;
  local_388 = local_380;
  FUN_140497620(param_2,local_438,&local_390,0);
  if (local_380[0] != 0) {
    FMemory::Free();
  }
  if (local_130[0] != 0) {
    FMemory::Free();
  }
  if (local_6c8[4] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  local_4f8[8] = 0;
  local_4f8[9] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4f8 + 8,0);
  lVar5 = local_4f8[8];
  FGenericPlatformString::Convert<char,wchar_t>(local_4f8[8],0x11,"EGraphicsQuality",0x11,0x3f);
  local_6c8[6] = 0;
  local_6c8[7] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8 + 6,0);
  FGenericPlatformString::Memcpy(local_6c8[6],L"GfxQuality",0x16);
  puVar7 = (undefined8 *)
           EnumToString<enum_EPortNameEnum>
                     (local_120,local_4f8 + 8,*(undefined1 *)(param_1 + 0x183));
  if (*(int *)(puVar7 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar7;
  }
  FString::PrintfImpl(local_360,&DAT_1443631e4,puVar15);
  local_370 = local_6c8 + 6;
  local_368 = local_360;
  FUN_140497620(param_2,local_434,&local_370,0);
  if (local_360[0] != 0) {
    FMemory::Free();
  }
  if (local_120[0] != 0) {
    FMemory::Free();
  }
  if (local_6c8[6] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  local_658 = (undefined2 *)0x0;
  local_650 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_668 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_658,0x19,"ETextureStreamingQuality",0x19,0x3f)
  ;
  local_668[0] = 0;
  local_668[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_668,0);
  FGenericPlatformString::Memcpy(local_668[0],L"TextureStreaming",0x22);
  uVar3 = *(undefined1 *)(param_1 + 0x185);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_650 != 0) {
    puVar15 = local_658;
  }
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_6c8[8] = 0;
    local_6c8[9] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8 + 8,0);
    lVar5 = local_6c8[8];
    FGenericPlatformString::Convert<char,wchar_t>(local_6c8[8],5,&DAT_14435aeb4,5,0x3f);
    plVar6 = local_6c8 + 8;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_110,uVar3);
    lVar5 = local_6c8[8];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_678 = (undefined2 *)0x0;
  local_670 = 0;
  uVar9 = 0;
  puVar15 = puVar14;
  uVar11 = uVar9;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_670 = (ulonglong)uVar10;
    uVar11 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8 + 10,0);
      uVar11 = (uint)local_670;
    }
    puVar15 = local_678;
    FGenericPlatformString::Memcpy(local_678,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_110[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar11 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_340,&DAT_144363914,puVar8);
  local_350 = local_668;
  local_348 = local_340;
  FUN_140497620(param_2,local_430,&local_350,0);
  if (local_340[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_668[0] != 0) {
    FMemory::Free();
  }
  if (local_658 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_618 = (undefined2 *)0x0;
  local_610 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_618,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_618,0x11,"EMaterialQuality",0x11,0x3f);
  local_868[0] = 0;
  local_868[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_868,0);
  FGenericPlatformString::Memcpy(local_868[0],L"MaterialQuality",0x20);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_610 != 0) {
    puVar15 = local_618;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x186);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_648[0] = 0;
    local_648[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_648,0);
    lVar5 = local_648[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_648[0],5,&DAT_14435af04,5,0x3f);
    plVar6 = local_648;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_100,uVar3);
    lVar5 = local_648[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_638 = (undefined2 *)0x0;
  local_630 = 0;
  puVar15 = puVar14;
  uVar11 = uVar9;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_630 = (ulonglong)uVar10;
    uVar11 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_648 + 2,0);
      uVar11 = (uint)local_630;
    }
    puVar15 = local_638;
    FGenericPlatformString::Memcpy(local_638,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_100[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar11 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_320,&DAT_1443647d4,puVar8);
  local_330 = local_868;
  local_328 = local_320;
  FUN_140497620(param_2,local_42c,&local_330,0);
  if (local_320[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_868[0] != 0) {
    FMemory::Free();
  }
  if (local_618 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_5d8 = (undefined2 *)0x0;
  local_5d0 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5e8 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_5d8,0x1a,"EAnisotropicFilteringType",0x1a,0x3f);
  local_5e8[0] = 0;
  local_5e8[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5e8,0);
  FGenericPlatformString::Memcpy(local_5e8[0],L"Aniso",0xc);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_5d0 != 0) {
    puVar15 = local_5d8;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x18c);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  if (lVar5 == 0) {
    local_608 = 0;
    local_600 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_608,5,&DAT_14435b254,5,0x3f);
    puVar7 = &local_608;
  }
  else {
    puVar7 = (undefined8 *)FUN_1417392b0(lVar5,local_f0,uVar3);
  }
  if (*(int *)(puVar7 + 1) == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*puVar7;
  }
  local_5f8 = (undefined2 *)0x0;
  local_5f0 = 0;
  puVar15 = puVar14;
  uVar11 = uVar9;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_5f0 = (ulonglong)uVar10;
    uVar11 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8,0);
      uVar11 = (uint)local_5f0;
    }
    puVar15 = local_5f8;
    FGenericPlatformString::Memcpy(local_5f8,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((lVar5 != 0) && (local_f0[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar11 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_300,&DAT_144364e34,puVar8);
  local_310 = local_5e8;
  local_308 = local_300;
  FUN_140497620(param_2,local_428,&local_310,0);
  if (local_300[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_5e8[0] != 0) {
    FMemory::Free();
  }
  if (local_5d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_598 = (undefined2 *)0x0;
  local_590 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5a8 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_598,0xf,"EShadowQuality",0xf,0x3f);
  local_5a8[0] = 0;
  local_5a8[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5a8,0);
  FGenericPlatformString::Memcpy(local_5a8[0],L"Shadows",0x10);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_590 != 0) {
    puVar15 = local_598;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x18d);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_5c8[0] = 0;
    local_5c8[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5c8,0);
    lVar5 = local_5c8[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_5c8[0],5,&DAT_14435b3c4,5,0x3f);
    plVar6 = local_5c8;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_e0,uVar3);
    lVar5 = local_5c8[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_5b8 = (undefined2 *)0x0;
  local_5b0 = 0;
  puVar15 = puVar14;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar11 = (int)lVar12 + 1;
    local_5b0 = (ulonglong)uVar11;
    uVar9 = uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5c8 + 2,0);
      uVar9 = (uint)local_5b0;
    }
    puVar15 = local_5b8;
    FGenericPlatformString::Memcpy(local_5b8,psVar13,(longlong)(int)uVar11 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_e0[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_2e0,&DAT_1443659b4,puVar8);
  local_2f0 = local_5a8;
  local_2e8 = local_2e0;
  FUN_140497620(param_2,local_424,&local_2f0,0);
  if (local_2e0[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_5a8[0] != 0) {
    FMemory::Free();
  }
  if (local_598 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_558 = (undefined2 *)0x0;
  local_550 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_568 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_558,0xe,"EDrawDistance",0xe,0x3f);
  local_568[0] = 0;
  local_568[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_568,0);
  FGenericPlatformString::Memcpy(local_568[0],L"DrawDistance",0x1a);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_550 != 0) {
    puVar15 = local_558;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x195);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_588[0] = 0;
    local_588[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_588,0);
    lVar5 = local_588[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_588[0],5,&DAT_14435b484,5,0x3f);
    plVar6 = local_588;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_d0,uVar3);
    lVar5 = local_588[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_578 = (undefined2 *)0x0;
  local_570 = 0;
  uVar11 = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_570 = (ulonglong)uVar10;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_588 + 2,0);
      uVar9 = (uint)local_570;
    }
    puVar15 = local_578;
    FGenericPlatformString::Memcpy(local_578,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_d0[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_2c0,&DAT_1443660e4,puVar8);
  local_2d0 = local_568;
  local_2c8 = local_2c0;
  FUN_140497620(param_2,local_420,&local_2d0,0);
  if (local_2c0[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_568[0] != 0) {
    FMemory::Free();
  }
  if (local_558 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_858 = (undefined2 *)0x0;
  local_850 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_868 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_858,0x13,"EEnvironmentDetail",0x13,0x3f);
  local_528[0] = 0;
  local_528[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_528,0);
  FGenericPlatformString::Memcpy(local_528[0],L"EnvironmentDetail",0x24);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_850 != 0) {
    puVar15 = local_858;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x196);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_548[0] = 0;
    local_548[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_548,0);
    lVar5 = local_548[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_548[0],5,&DAT_14435bd64,5,0x3f);
    plVar6 = local_548;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_c0,uVar3);
    lVar5 = local_548[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_538 = (undefined2 *)0x0;
  local_530 = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_530 = (ulonglong)uVar10;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_548 + 2,0);
      uVar9 = (uint)local_530;
    }
    puVar15 = local_538;
    FGenericPlatformString::Memcpy(local_538,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_c0[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_2a0,&DAT_144367404,puVar8);
  local_2b0 = local_528;
  local_2a8 = local_2a0;
  FUN_140497620(param_2,local_41c,&local_2b0,0);
  if (local_2a0[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_528[0] != 0) {
    FMemory::Free();
  }
  if (local_858 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_818 = (undefined2 *)0x0;
  local_810 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_828 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_818,0xd,"ETerrainType",0xd,0x3f);
  local_828[0] = 0;
  local_828[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_828,0);
  FGenericPlatformString::Memcpy(local_828[0],L"Terrain",0x10);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_810 != 0) {
    puVar15 = local_818;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x197);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_848[0] = 0;
    local_848[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_848,0);
    lVar5 = local_848[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_848[0],5,&DAT_14435bf64,5,0x3f);
    plVar6 = local_848;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_b0,uVar3);
    lVar5 = local_848[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_838 = (undefined2 *)0x0;
  local_830 = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_830 = (ulonglong)uVar10;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_848 + 2,0);
      uVar9 = (uint)local_830;
    }
    puVar15 = local_838;
    FGenericPlatformString::Memcpy(local_838,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_b0[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_280,&DAT_144367924,puVar8);
  local_290 = local_828;
  local_288 = local_280;
  FUN_140497620(param_2,local_418,&local_290,0);
  if (local_280[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_828[0] != 0) {
    FMemory::Free();
  }
  if (local_818 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_7d8 = (undefined2 *)0x0;
  local_7d0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_7e8 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_7d8,0x10,"EFoliageDensity",0x10,0x3f);
  local_7e8[0] = 0;
  local_7e8[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_7e8,0);
  FGenericPlatformString::Memcpy(local_7e8[0],L"Foliage",0x10);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_7d0 != 0) {
    puVar15 = local_7d8;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x198);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_808[0] = 0;
    local_808[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808,0);
    lVar5 = local_808[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_808[0],5,&DAT_14435c0f4,5,0x3f);
    plVar6 = local_808;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_a0,uVar3);
    lVar5 = local_808[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_7f8 = (undefined2 *)0x0;
  local_7f0 = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_7f0 = (ulonglong)uVar10;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808 + 2,0);
      uVar9 = (uint)local_7f0;
    }
    puVar15 = local_7f8;
    FGenericPlatformString::Memcpy(local_7f8,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_a0[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_260,&DAT_144368dc4,puVar8);
  local_270 = local_7e8;
  local_268 = local_260;
  FUN_140497620(param_2,local_468,&local_270,0);
  if (local_260[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_7e8[0] != 0) {
    FMemory::Free();
  }
  if (local_7d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_798 = (undefined2 *)0x0;
  local_790 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_7a8 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_798,0x11,"ECharacterDetail",0x11,0x3f);
  local_7a8[0] = 0;
  local_7a8[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_7a8,0);
  FGenericPlatformString::Memcpy(local_7a8[0],L"CharDetail",0x16);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_790 != 0) {
    puVar15 = local_798;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x19c);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_7c8[0] = 0;
    local_7c8[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_7c8,0);
    lVar5 = local_7c8[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_7c8[0],5,&DAT_14435cc74,5,0x3f);
    plVar6 = local_7c8;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_90,uVar3);
    lVar5 = local_7c8[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_7b8 = (undefined2 *)0x0;
  local_7b0 = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_7b0 = (ulonglong)uVar10;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_7c8 + 2,0);
      uVar9 = (uint)local_7b0;
    }
    puVar15 = local_7b8;
    FGenericPlatformString::Memcpy(local_7b8,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_90[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_240,&DAT_144368f54,puVar8);
  local_250 = local_7a8;
  local_248 = local_240;
  FUN_140497620(param_2,local_464,&local_250,0);
  if (local_240[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_7a8[0] != 0) {
    FMemory::Free();
  }
  if (local_798 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_788[0] = 0;
  local_788[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788,0);
  FGenericPlatformString::Memcpy(local_788[0],&DAT_1443cdc58,8);
  FString::PrintfImpl(local_220,&DAT_144369fc4,*(undefined1 *)(param_1 + 0x182));
  local_230 = local_788;
  local_228 = local_220;
  FUN_140497620(param_2,local_460,&local_230,0);
  if (local_220[0] != 0) {
    FMemory::Free();
  }
  if (local_788[0] != 0) {
    FMemory::Free();
  }
  local_788[2] = 0;
  local_788[3] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 2,0);
  FGenericPlatformString::Memcpy(local_788[2],L"CameraBlur",0x16);
  FString::PrintfImpl(local_200,&DAT_14436a474,*(undefined1 *)(param_1 + 0x180));
  local_210 = local_788 + 2;
  local_208 = local_200;
  FUN_140497620(param_2,local_45c,&local_210,0);
  if (local_200[0] != 0) {
    FMemory::Free();
  }
  if (local_788[2] != 0) {
    FMemory::Free();
  }
  local_788[4] = 0;
  local_788[5] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 4,0);
  FGenericPlatformString::Memcpy(local_788[4],L"ObjectBlur",0x16);
  FString::PrintfImpl(local_1e0,&DAT_14436a654,*(undefined1 *)(param_1 + 0x181));
  local_1f0 = local_788 + 4;
  local_1e8 = local_1e0;
  FUN_140497620(param_2,local_458,&local_1f0,0);
  if (local_1e0[0] != 0) {
    FMemory::Free();
  }
  if (local_788[4] != 0) {
    FMemory::Free();
  }
  local_788[6] = 0;
  local_788[7] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 6,0);
  FGenericPlatformString::Memcpy(local_788[6],&DAT_14436b7d4,6);
  uVar4 = FUN_140cb60b0(param_1,local_50,*(undefined4 *)(param_1 + 0x188));
  puVar7 = (undefined8 *)FText::ToString(uVar4);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar7;
  }
  FString::PrintfImpl(local_1c0,&DAT_14436b734,puVar15);
  local_1d0 = local_788 + 6;
  local_1c8 = local_1c0;
  FUN_140497620(param_2,local_454,&local_1d0,0);
  if (local_1c0[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_788[6] != 0) {
    FMemory::Free();
  }
  local_628 = (undefined2 *)0x0;
  local_620 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_628,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_628,0x13,"EVolumetricFogType",0x13,0x3f);
  local_788[0xc] = 0;
  local_788[0xd] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 0xc,0);
  FGenericPlatformString::Memcpy(local_788[0xc],L"VolumetricFog",0x1c);
  uVar3 = *(undefined1 *)(param_1 + 0x199);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_620 != 0) {
    puVar15 = local_628;
  }
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_788[10] = 0;
    local_788[0xb] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 10,0);
    lVar5 = local_788[10];
    FGenericPlatformString::Convert<char,wchar_t>(local_788[10],5,&DAT_14435d464,5,0x3f);
    plVar6 = local_788 + 10;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_80,uVar3);
    lVar5 = local_788[10];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_4a8 = (undefined2 *)0x0;
  local_49c = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_4a0 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4f8 + 10,0);
    }
    uVar9 = local_4a0;
    puVar15 = local_4a8;
    FGenericPlatformString::Memcpy(local_4a8,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_80[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_1a0,&DAT_14436f314,puVar8);
  local_1b0 = local_788 + 0xc;
  local_1a8 = local_1a0;
  FUN_140497620(param_2,local_448,&local_1b0,0);
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_788[0xc] != 0) {
    FMemory::Free();
  }
  if (local_628 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_508 = (undefined2 *)0x0;
  local_500 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_528 + 4,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_508,0x18,"EScreenSpaceReflections",0x18,0x3f);
  local_528[2] = 0;
  local_528[3] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_528 + 2,0);
  FGenericPlatformString::Memcpy(local_528[2],&DAT_1443ceba8,8);
  puVar15 = &DAT_143f3eda8;
  if ((int)local_500 != 0) {
    puVar15 = local_508;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x19a);
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar12 = -1;
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar15,0);
  bVar16 = lVar5 == 0;
  if (bVar16) {
    local_788[8] = 0;
    local_788[9] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_788 + 8,0);
    lVar5 = local_788[8];
    FGenericPlatformString::Convert<char,wchar_t>(local_788[8],5,&DAT_14435d994,5,0x3f);
    plVar6 = local_788 + 8;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar5,local_70,uVar3);
    lVar5 = local_788[8];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_498 = (undefined2 *)0x0;
  local_48c = 0;
  puVar15 = puVar14;
  uVar9 = uVar11;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar13[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_490 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
    }
    uVar9 = local_490;
    puVar15 = local_498;
    FGenericPlatformString::Memcpy(local_498,psVar13,(longlong)(int)uVar10 * 2);
  }
  if ((bVar16) && (lVar5 != 0)) {
    FMemory::Free(lVar5);
  }
  if ((!bVar16) && (local_70[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar8 = puVar15;
  }
  FString::PrintfImpl(local_180,&DAT_14436f6a4,puVar8);
  local_190 = local_528 + 2;
  local_188 = local_180;
  FUN_140497620(param_2,local_450,&local_190,0);
  if (local_180[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_528[2] != 0) {
    FMemory::Free();
  }
  if (local_508 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_488 = (undefined2 *)0x0;
  local_480 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,0);
  puVar15 = local_488;
  FGenericPlatformString::Convert<char,wchar_t>(local_488,0x19,"EAmbientOcclusionQuality",0x19,0x3f)
  ;
  local_4f8[2] = 0;
  local_4f8[3] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4f8 + 2,0);
  FGenericPlatformString::Memcpy(local_4f8[2],&DAT_144373054,6);
  lVar5 = -1;
  puVar8 = &DAT_143f3eda8;
  if ((int)local_480 != 0) {
    puVar8 = puVar15;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x19d);
  lVar12 = FindObject<UEnum>(0xffffffffffffffff,puVar8,0);
  bVar16 = lVar12 == 0;
  if (bVar16) {
    local_4f8[0] = 0;
    local_4f8[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4f8,0);
    lVar12 = local_4f8[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_4f8[0],5,&DAT_14435deb4,5,0x3f);
    plVar6 = local_4f8;
  }
  else {
    plVar6 = (longlong *)FUN_1417392b0(lVar12,local_60,uVar3);
    lVar12 = local_4f8[0];
  }
  if ((int)plVar6[1] == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*plVar6;
  }
  local_478 = (undefined2 *)0x0;
  local_46c = 0;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (psVar13[lVar5] != 0);
    uVar9 = (int)lVar5 + 1;
    local_470 = uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,0);
    }
    uVar11 = local_470;
    puVar14 = local_478;
    FGenericPlatformString::Memcpy(local_478,psVar13,(longlong)(int)uVar9 * 2);
  }
  if ((bVar16) && (lVar12 != 0)) {
    FMemory::Free(lVar12);
  }
  if ((!bVar16) && (local_60[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (uVar11 != 0) {
    puVar8 = puVar14;
  }
  FString::PrintfImpl(local_160,&DAT_14436ff94,puVar8);
  local_170 = local_4f8 + 2;
  local_168 = local_160;
  FUN_140497620(param_2,local_44c,&local_170,0);
  if (local_160[0] != 0) {
    FMemory::Free();
  }
  if (puVar14 != (undefined2 *)0x0) {
    FMemory::Free(puVar14);
  }
  if (local_4f8[2] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  return;
}



// FUNCTION 140cd3550 FUN_140cd3550 body=3378 status=ok
// SIG undefined FUN_140cd3550(void)

void FUN_140cd3550(undefined8 param_1,longlong *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong local_res20;
  longlong *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8 [12];
  longlong local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  uint uStack_18c;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  bVar3 = false;
  bVar2 = false;
  local_2c8[8] = 0;
  local_2c8[9] = 0x47;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8 + 8,0);
  FGenericPlatformString::Memcpy
            (local_2c8[8],L"/Game/Common/_Design/Table_MicropatchSwitches.Table_MicropatchSwitches",
             0x8e);
  puVar6 = (undefined8 *)FName::FName(local_e0,L"Table_MicropatchSwitches",1);
  uVar9 = *puVar6;
  uVar7 = USoundMix::GetPrivateStaticClass();
  local_2e8 = StaticFindObjectFastExplicit(uVar7,uVar9,local_2c8 + 8,0,0);
  if (local_2c8[8] != 0) {
    FMemory::Free();
  }
  local_2c8[6] = 0;
  local_2c8[7] = 0x3e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8 + 6,0);
  FGenericPlatformString::Memcpy
            (local_2c8[6],L"/Game/GameData/Spawning/GlobalSpawnDLCData.GlobalSpawnDLCData",0x7c);
  puVar6 = (undefined8 *)FName::FName(local_e8,L"GlobalSpawnDLCData",1);
  uVar9 = *puVar6;
  uVar7 = FUN_1407e0cf0();
  lVar8 = StaticFindObjectFastExplicit(uVar7,uVar9,local_2c8 + 6,0,0);
  local_268 = lVar8;
  if (local_2c8[6] != 0) {
    FMemory::Free();
  }
  if (lVar8 == 0) goto LAB_140cd4200;
  local_2c8[4] = 0;
  local_2c8[5] = 100;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_2c8[4],
             L"/Game/PatchDLC/BloodyHarvest/GameData/SpawnDLCScripts/SpawnDLC_BloodyHarvest.SpawnDLC_BloodyHarvest"
             ,200);
  puVar6 = (undefined8 *)FName::FName(local_b0,L"SpawnDLC_BloodyHarvest",1);
  uVar9 = *puVar6;
  uVar7 = FUN_1407e0340();
  local_res20 = StaticFindObjectFastExplicit(uVar7,uVar9,local_2c8 + 4,0,0);
  if (local_2c8[4] != 0) {
    FMemory::Free();
  }
  if (local_res20 == 0) {
    uVar9 = FUN_1407e0340();
    local_res20 = FUN_141799c90(uVar9,0,
                                L"/Game/PatchDLC/BloodyHarvest/GameData/SpawnDLCScripts/SpawnDLC_BloodyHarvest.SpawnDLC_BloodyHarvest"
                                ,0,0,0,1);
    if (local_res20 != 0) {
      lVar10 = FUN_1407e0340();
      if ((*(int *)(*(longlong *)(local_res20 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_res20 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140cd378b;
    }
    local_res20 = 0;
  }
LAB_140cd378b:
  local_2c8[2] = 0;
  local_2c8[3] = 0x4e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_2c8[2],
             L"/Game/PatchDLC/EventVDay/GameData/SpawnDLCScripts/SpawnDLC_VDay.SpawnDLC_VDay",0x9c);
  puVar6 = (undefined8 *)FName::FName(local_b8,L"SpawnDLC_VDay",1);
  uVar9 = *puVar6;
  uVar7 = FUN_1407e0340();
  lVar10 = StaticFindObjectFastExplicit(uVar7,uVar9,local_2c8 + 2,0,0);
  local_2f0 = lVar10;
  if (local_2c8[2] != 0) {
    FMemory::Free();
  }
  if (lVar10 == 0) {
    uVar9 = FUN_1407e0340();
    lVar10 = FUN_141799c90(uVar9,0,
                           L"/Game/PatchDLC/EventVDay/GameData/SpawnDLCScripts/SpawnDLC_VDay.SpawnDLC_VDay"
                           ,0,0,0,1);
    if (lVar10 != 0) {
      local_2f0 = lVar10;
      lVar11 = FUN_1407e0340();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140cd387e;
    }
    lVar10 = 0;
    local_2f0 = 0;
  }
LAB_140cd387e:
  local_2c8[0] = 0;
  local_2c8[1] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8,0);
  FGenericPlatformString::Memcpy
            (local_2c8[0],
             L"/Game/PatchDLC/Event2/GameData/SpawnDLCScripts/SpawnDLC_Cartels.SpawnDLC_Cartels",
             0xa2);
  puVar6 = (undefined8 *)FName::FName(local_c0,L"SpawnDLC_Cartels",1);
  uVar9 = *puVar6;
  uVar7 = FUN_1407e0340();
  lVar11 = StaticFindObjectFastExplicit(uVar7,uVar9,local_2c8,0,0);
  if (local_2c8[0] != 0) {
    FMemory::Free();
  }
  if (lVar11 == 0) {
    uVar9 = FUN_1407e0340();
    lVar11 = FUN_141799c90(uVar9,0,
                           L"/Game/PatchDLC/Event2/GameData/SpawnDLCScripts/SpawnDLC_Cartels.SpawnDLC_Cartels"
                           ,0,0,0,1);
    if (lVar11 != 0) {
      lVar12 = FUN_1407e0340();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140cd3969;
    }
    lVar11 = 0;
  }
LAB_140cd3969:
  iVar17 = *(int *)(lVar8 + 0x38) + -1;
  if (-1 < iVar17) {
    plVar14 = (longlong *)(lVar8 + 0x30);
    local_2f8 = 0;
    lVar12 = (longlong)iVar17 * 0x60;
    local_2d0 = (longlong)*(int *)(lVar8 + 0x38) * 0x60;
    do {
      local_1f8 = 0;
      local_1f0 = 0;
      local_210 = 0xffffffff;
      local_20c = 0;
      local_200 = 0;
      if (local_res20 == 0) {
        local_2f8 = 0;
        local_200 = 0;
      }
      else {
        uVar9 = FSoftObjectPath::FSoftObjectPath(local_a0,local_res20);
        FSoftObjectPath::operator=(&local_200,uVar9);
        FWeakObjectPtr::operator=(&local_210,local_res20);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_20c = CONCAT44(DAT_1464b56f4,(undefined4)local_20c);
      }
      cVar4 = FSoftObjectPath::operator==();
      if (cVar4 == '\0') {
        local_238 = 0xffffffff;
        local_220 = 0;
        local_218 = 0;
        local_234 = 0;
        local_2c8[10] = 0;
        local_228 = 0;
        if (lVar10 == 0) {
          local_2c8[0xb] = 0;
          local_228 = 0;
        }
        else {
          uVar9 = FSoftObjectPath::FSoftObjectPath(local_88,lVar10);
          FSoftObjectPath::operator=(&local_228,uVar9);
          FWeakObjectPtr::operator=(&local_238,lVar10);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_234 = CONCAT44(DAT_1464b56f4,(undefined4)local_234);
        }
        bVar3 = true;
        cVar4 = FSoftObjectPath::operator==(*plVar14 + 0x10 + lVar12);
        if (cVar4 != '\0') goto LAB_140cd3b6a;
        local_2e0 = (longlong *)0x0;
        local_250 = 0;
        local_240 = 0;
        local_260 = 0xffffffff;
        local_25c = 0;
        local_248 = 0;
        if (lVar11 == 0) {
          local_2d8 = 0;
          local_250 = 0;
        }
        else {
          uVar9 = FSoftObjectPath::FSoftObjectPath(local_70,lVar11);
          FSoftObjectPath::operator=(&local_250,uVar9);
          FWeakObjectPtr::operator=(&local_260,lVar11);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_25c = CONCAT44(DAT_1464b56f4,(undefined4)local_25c);
        }
        bVar3 = true;
        bVar2 = true;
        cVar4 = FSoftObjectPath::operator==(*plVar14 + 0x10 + lVar12);
        if (cVar4 != '\0') goto LAB_140cd3b6a;
        bVar1 = false;
      }
      else {
LAB_140cd3b6a:
        bVar1 = true;
      }
      if ((bVar2) && (bVar2 = false, local_248 != 0)) {
        FMemory::Free();
      }
      if ((bVar3) && (bVar3 = false, local_220 != 0)) {
        FMemory::Free();
      }
      if (local_1f8 != 0) {
        FMemory::Free();
      }
      if (bVar1) {
        if (*(longlong *)(lVar12 + 0x18 + *plVar14) != 0) {
          FMemory::Free();
        }
        iVar15 = *(int *)(lVar8 + 0x38);
        iVar5 = (iVar15 - iVar17) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar14 + lVar12),(void *)(local_2d0 + *plVar14),
                     (longlong)iVar5 * 0x60);
          iVar15 = *(int *)(lVar8 + 0x38);
        }
        *(int *)(lVar8 + 0x38) = iVar15 + -1;
        TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(plVar14);
      }
      local_2d0 = local_2d0 + -0x60;
      lVar12 = lVar12 + -0x60;
      iVar17 = iVar17 + -1;
      lVar10 = local_2f0;
    } while (-1 < iVar17);
  }
  lVar10 = local_2e8;
  lVar8 = local_2f0;
  local_308 = (longlong *)0x0;
  local_300 = 0;
  if (param_3 == 1) {
    if (local_res20 != 0) {
      local_300 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_308);
      *local_308 = local_res20;
    }
    lVar8 = local_2e8;
    plVar14 = local_308;
    if (local_2e8 != 0) {
      FName::FName(local_1e8,L"Value",1);
      lVar10 = FUN_1423ed4e0(lVar8,local_1e8);
      puVar6 = (undefined8 *)FName::FName(local_c8,L"MainMenuAltBackground",1);
      lVar8 = FUN_140c74740(lVar8,*puVar6,0);
      local_198 = 0x3f800000;
      local_1c8 = 0x40400000;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      if (((lVar8 != 0) && (lVar10 != 0)) &&
         (puVar6 = (undefined8 *)(*(int *)(lVar10 + 0x44) + lVar8), puVar6 != (undefined8 *)0x0)) {
        *puVar6 = CONCAT44(uStack_1c4,0x40400000);
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = CONCAT44(uStack_194,0x3f800000);
      }
    }
  }
  else if (param_3 == 2) {
    if (local_2f0 != 0) {
      local_300 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_308);
      *local_308 = lVar8;
    }
    lVar8 = local_2e8;
    plVar14 = local_308;
    if (local_2e8 != 0) {
      FName::FName(local_1e0,L"Value",1);
      lVar10 = FUN_1423ed4e0(lVar8,local_1e0);
      puVar6 = (undefined8 *)FName::FName(local_a8,L"MainMenuAltBackground",1);
      lVar8 = FUN_140c74740(lVar8,*puVar6,0);
      local_160 = 0x3f800000;
      uStack_188 = 0;
      local_190 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      if (((lVar8 != 0) && (lVar10 != 0)) &&
         (plVar13 = (longlong *)(*(int *)(lVar10 + 0x44) + lVar8), plVar13 != (longlong *)0x0)) {
        *plVar13 = (ulonglong)uStack_18c << 0x20;
        plVar13[1] = 0;
        plVar13[2] = 0;
        plVar13[3] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[6] = CONCAT44(uStack_15c,0x3f800000);
      }
    }
  }
  else {
    if (param_3 != 3) {
      if (local_2e8 != 0) {
        FName::FName(local_1d0,L"Value",1);
        lVar8 = FUN_1423ed4e0(lVar10,local_1d0);
        puVar6 = (undefined8 *)FName::FName(local_d0,L"MainMenuAltBackground",1);
        lVar10 = FUN_140c74740(lVar10,*puVar6,0);
        local_f0 = 0x3f800000;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        if (((lVar10 != 0) && (lVar8 != 0)) &&
           (plVar14 = (longlong *)(*(int *)(lVar8 + 0x44) + lVar10), plVar14 != (longlong *)0x0)) {
          *plVar14 = (ulonglong)uStack_11c << 0x20;
          plVar14[1] = 0;
          plVar14[2] = 0;
          plVar14[3] = 0;
          plVar14[4] = 0;
          plVar14[5] = 0;
          plVar14[6] = CONCAT44(uStack_ec,0x3f800000);
        }
      }
      goto LAB_140cd4200;
    }
    if (lVar11 != 0) {
      local_300 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_308);
      *local_308 = lVar11;
    }
    lVar8 = local_2e8;
    plVar14 = local_308;
    if (local_2e8 != 0) {
      FName::FName(local_1d8,L"Value",1);
      lVar10 = FUN_1423ed4e0(lVar8,local_1d8);
      puVar6 = (undefined8 *)FName::FName(local_d8,L"MainMenuAltBackground",1);
      lVar8 = FUN_140c74740(lVar8,*puVar6,0);
      local_128 = 0x3f800000;
      local_158 = 0x40a00000;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      if (((lVar8 != 0) && (lVar10 != 0)) &&
         (puVar6 = (undefined8 *)(*(int *)(lVar10 + 0x44) + lVar8), puVar6 != (undefined8 *)0x0)) {
        *puVar6 = CONCAT44(uStack_154,0x40a00000);
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = CONCAT44(uStack_124,0x3f800000);
      }
    }
  }
  lVar8 = local_268;
  plVar13 = plVar14;
  if ((0 < (int)local_300) && (local_2e0 = plVar14 + (int)local_300, plVar14 != local_2e0)) {
    do {
      local_2d8 = *plVar14;
      iVar17 = *(int *)(lVar8 + 0x38);
      *(int *)(lVar8 + 0x38) = iVar17 + 1;
      if (*(int *)(lVar8 + 0x3c) < iVar17 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(lVar8 + 0x30);
      }
      lVar11 = *(longlong *)(lVar8 + 0x30);
      lVar12 = (longlong)iVar17 * 0x60;
      lVar10 = lVar11 + lVar12;
      *(undefined8 *)(lVar11 + 0x18 + lVar12) = 0;
      *(undefined4 *)(lVar11 + 0x24 + lVar12) = 0;
      *(undefined4 *)(lVar11 + lVar12) = 0xffffffff;
      *(undefined4 *)(lVar11 + 4 + lVar12) = 0;
      *(undefined8 *)(lVar11 + 0x10 + lVar12) = 0;
      *(undefined4 *)(lVar10 + 0x20) = 0;
      if (0x7fffffff < *(uint *)(lVar10 + 0x24)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar10 + 0x18);
      }
      if (*(undefined2 **)(lVar10 + 0x18) != (undefined2 *)0x0) {
        **(undefined2 **)(lVar10 + 0x18) = 0;
      }
      *(undefined4 *)(lVar11 + 8 + lVar12) = 0;
      *(undefined4 *)(lVar11 + 0x28 + lVar12) = 0;
      *(undefined8 *)(lVar11 + 0x30 + lVar12) = 0;
      *(undefined8 *)(lVar11 + 0x38 + lVar12) = 0;
      *(undefined8 *)(lVar11 + 0x40 + lVar12) = 0;
      *(undefined8 *)(lVar11 + 0x48 + lVar12) = 0;
      *(undefined8 *)(lVar11 + 0x50 + lVar12) = 0;
      *(undefined4 *)(lVar11 + 0x58 + lVar12) = 0x3f800000;
      if ((iVar17 < 0) || (*(int *)(lVar8 + 0x38) <= iVar17)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar16 = (undefined4 *)(*(longlong *)(lVar8 + 0x30) + lVar12);
        if (local_2d8 == 0) {
          *puVar16 = 0xffffffff;
          puVar16[1] = 0;
          *(undefined8 *)(puVar16 + 4) = 0;
          puVar16[8] = 0;
          if (0x7fffffff < (uint)puVar16[9]) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar16 + 6);
          }
          if (*(undefined2 **)(puVar16 + 6) != (undefined2 *)0x0) {
            **(undefined2 **)(puVar16 + 6) = 0;
          }
          puVar16[2] = 0;
        }
        else {
          uVar9 = FSoftObjectPath::FSoftObjectPath(local_58,local_2d8);
          FSoftObjectPath::operator=(puVar16 + 4,uVar9);
          FWeakObjectPtr::operator=(puVar16);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          puVar16[2] = DAT_1464b56f4;
        }
        *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + 0x28 + lVar12) = 0x3f800000;
      }
      plVar14 = plVar14 + 1;
      plVar13 = local_308;
    } while (plVar14 != local_2e0);
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
LAB_140cd4200:
  if (param_2 != (longlong *)0x0) {
    lVar8 = (**(code **)(*param_2 + 0x148))();
    lVar8 = *(longlong *)(lVar8 + 0x140);
    if (lVar8 != 0) {
      lVar10 = AOfflineGameMode::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar8 = FUN_140c13f20(lVar8), lVar8 != 0)) {
        FUN_141163800(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 140cd42a0 FUN_140cd42a0 body=1052 status=ok
// SIG undefined FUN_140cd42a0(void)

void FUN_140cd42a0(longlong *param_1,undefined8 param_2,undefined8 param_3,__uint64 param_4)

{
  longlong lVar1;
  char cVar2;
  AKRESULT AVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ErrorCode EVar9;
  ErrorLevel EVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  ulong uVar14;
  undefined4 local_res8 [2];
  ulong in_stack_ffffffffffffff98;
  undefined1 in_stack_ffffffffffffffa0;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  longlong local_48;
  longlong local_38 [2];
  
  EVar10 = (ErrorLevel)&local_58;
  lVar1 = param_1[0x96];
  local_4c = (float)DAT_1464aa730._3_1_ * 0.003921569;
  local_58 = (float)DAT_1464aa730._2_1_ * 0.003921569;
  local_50 = (float)(byte)DAT_1464aa730 * 0.003921569;
  fStack_54 = (float)DAT_1464aa730._1_1_ * 0.003921569;
  uVar5 = param_3;
  (**(code **)(*(longlong *)(lVar1 + 0x98) + 0x20))(lVar1 + 0x98);
  uVar14 = (ulong)uVar5;
  EVar9 = (ErrorCode)&local_58;
  puVar4 = (undefined8 *)FApp::GetBranchName();
  if (*(int *)(puVar4 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar4;
  }
  uVar5 = FCommandLine::Get();
  uVar6 = FUN_14162b4e0();
  AVar3 = AK::Monitor::PostCode
                    (EVar9,EVar10,uVar14,param_4,in_stack_ffffffffffffff98,
                     (bool)in_stack_ffffffffffffffa0);
  uVar7 = FUN_1415bb3d0(AVar3);
  FString::PrintfImpl(local_38,
                      L"GameVersion Branch: %s, Configuration: %s, Build: %s, CommandLine: %s",
                      puVar12,uVar7,uVar6,uVar5);
  if (CONCAT44(fStack_54,local_58) != 0) {
    FMemory::Free();
  }
  local_res8[0] = 0;
  FUN_1428a6fb0(lVar1 + 0x98,local_38,local_res8);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_14686d978) &&
     (_Init_thread_header(&DAT_14686d978), DAT_14686d978 == -1)) {
    FName::FName(&DAT_14686d970,L"GameState",1);
    _Init_thread_footer(&DAT_14686d978);
  }
  cVar2 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_14686d970);
  plVar11 = (longlong *)0x0;
  if (cVar2 != '\0') {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar13 = plVar11;
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar13 = *(longlong **)(lVar8 + 0x148);
    }
    if (plVar13 != (longlong *)0x0) {
      FDebugDisplayInfo::FDebugDisplayInfo(&local_58,param_1 + 0x91,param_1 + 0x93);
      (**(code **)(*plVar13 + 0x640))(plVar13,param_1[0x96],&local_58,param_2,param_3);
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (CONCAT44(fStack_54,local_58) != 0) {
        FMemory::Free();
      }
    }
  }
  FUN_142f11de0(param_1,param_2,param_3);
  if ((*(int *)(lVar1 + 0x38) < DAT_14686d988) &&
     (_Init_thread_header(&DAT_14686d988), DAT_14686d988 == -1)) {
    FName::FName(&DAT_14686d980,L"LineChecks",1);
    _Init_thread_footer(&DAT_14686d988);
  }
  cVar2 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_14686d980);
  if (cVar2 == '\0') {
    if ((char)param_1[0x120] != '\0') {
      *(undefined1 *)(param_1 + 0x120) = 0;
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar8 != 0) {
        lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar11 = *(longlong **)(lVar8 + 0x148);
      }
      if (plVar11 != (longlong *)0x0) {
        *(undefined1 *)(plVar11 + 0x9e) = 0;
        FUN_14248c4b0(plVar11 + 0x93);
      }
    }
  }
  else {
    if ((char)param_1[0x120] == '\0') {
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    FDebugDisplayInfo::FDebugDisplayInfo(&local_58,param_1 + 0x91,param_1 + 0x93);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140cd46c0(param_1[0x96],uVar5,&local_58,param_2,param_3);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (CONCAT44(fStack_54,local_58) != 0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_14686d998) &&
     (_Init_thread_header(&DAT_14686d998), DAT_14686d998 == -1)) {
    FName::FName(&DAT_14686d990,L"FOVHistory",1);
    _Init_thread_footer(&DAT_14686d998);
  }
  plVar13 = (longlong *)param_1[0x91];
  plVar11 = plVar13 + (int)param_1[0x92];
  do {
    if (plVar13 == plVar11) {
LAB_140cd45cf:
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      return;
    }
    if (*plVar13 == DAT_14686d990) {
      FUN_140c71470(param_1,param_2,param_3);
      goto LAB_140cd45cf;
    }
    plVar13 = plVar13 + 1;
  } while( true );
}



// FUNCTION 140cd46c0 FUN_140cd46c0 body=1107 status=ok
// SIG undefined FUN_140cd46c0(void)

void FUN_140cd46c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  ulonglong uVar7;
  BOOL BVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 local_res8 [2];
  undefined8 local_b8;
  uint *puStack_b0;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_98;
  undefined4 **local_90;
  float *local_88;
  LPCRITICAL_SECTION local_80;
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
  
  if (((param_1 != 0) && (DAT_146b17150 != 0)) && (param_2 != 0)) {
    puVar2 = (undefined4 *)(param_1 + 0x98);
    UEngine::GetSmallFont();
    lVar5 = *(longlong *)(param_2 + 0x148);
    if (lVar5 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x4f8);
      local_80 = lpCriticalSection;
      BVar8 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar8 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      pfVar3 = (float *)(lVar5 + 0x498);
      local_98 = local_res8;
      *(undefined1 *)(lVar5 + 0x4f0) = 1;
      plVar1 = (longlong *)(lVar5 + 0x4a0);
      local_90 = &local_98;
      local_88 = pfVar3;
      if (0 < *(int *)(lVar5 + 0x4a8) - *(int *)(lVar5 + 0x4d4)) {
        TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Compact(plVar1);
        local_b8 = &local_90;
        FUN_140c615d0(*plVar1,(longlong)(*(int *)(lVar5 + 0x4a8) - *(int *)(lVar5 + 0x4d4)),
                      (undefined1)local_res8[0],&local_b8);
      }
      FUN_1404b4e10(plVar1);
      local_98 = puVar2;
      FDisplayDebugManager::SetDrawColor(puVar2,&DAT_1464aa730);
      local_res8[0] = 0;
      FString::PrintfImpl(&local_b8,
                          L"LINE CHECKS (blocking only, excludes async checks) - Elapsed: %.2f sec."
                          ,(double)(*(float *)(param_2 + 0x790) - *pfVar3));
      FUN_1428a6fb0(puVar2,&local_b8,local_res8);
      if (local_b8 != (undefined4 ***)0x0) {
        FMemory::Free();
      }
      uVar9 = FUN_140c672c0(local_res8,pfVar3,DAT_1468c21c0);
      FUN_140c66f80(&local_98,pfVar3,DAT_1468c21c0,uVar9,L"GAME THREAD");
      uVar4 = *(uint *)(lVar5 + 0x4c8);
      puStack_b0 = (uint *)(lVar5 + 0x4b0);
      iVar17 = 0;
      local_b8 = (undefined4 ***)0x100000000;
      uStack_a4 = 0;
      iStack_a0 = 0;
      if (uVar4 != 0) {
        puVar20 = *(uint **)(lVar5 + 0x4c0);
        if (*(uint **)(lVar5 + 0x4c0) == (uint *)0x0) {
          puVar20 = puStack_b0;
        }
        uVar10 = *puVar20;
        iStack_a0 = 0;
        iVar11 = 0;
        while (uVar10 == 0) {
          iStack_a0 = iStack_a0 + 0x20;
          uVar7 = (ulonglong)local_b8 >> 0x20;
          local_b8 = (undefined4 ***)CONCAT44((int)uVar7,iVar11 + 1);
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_140cd48fc;
          uVar10 = puVar20[(longlong)iVar11 + 1];
          iVar11 = iVar11 + 1;
        }
        uVar10 = -uVar10 & uVar10;
        iVar11 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        local_b8 = (undefined4 ***)CONCAT44(uVar10,SUB84(local_b8,0));
        if (uVar10 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_a4 = (iStack_a0 - iVar11) + 0x1f;
        if ((int)uVar4 < (int)uStack_a4) {
LAB_140cd48fc:
          uStack_a4 = uVar4;
        }
      }
      uVar10 = *(uint *)(lVar5 + 0x4c8);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_a4;
      local_58 = CONCAT44(uStack_9c,iStack_a0);
      local_a8 = -1 << ((byte)uVar10 & 0x1f);
      uStack_48 = (undefined2 *)local_b8;
      puVar18 = uStack_48;
      uVar19 = uVar10 & 0xffffffe0;
      uStack_48._0_4_ = SUB84(local_b8,0);
      uStack_48._4_4_ = (uint)((ulonglong)local_b8 >> 0x20);
      uStack_70 = (undefined4)uStack_48;
      uStack_6c = uStack_48._4_4_;
      uStack_a4 = uVar10;
      local_68 = puStack_b0;
      local_50 = plVar1;
      uStack_48 = puVar18;
      puStack_40 = puStack_b0;
      uStack_30 = local_58;
      local_78 = plVar1;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      if (uVar10 != uVar4) {
        puVar20 = *(uint **)(lVar5 + 0x4c0);
        if (*(uint **)(lVar5 + 0x4c0) == (uint *)0x0) {
          puVar20 = puStack_b0;
        }
        uVar15 = puVar20[(int)uVar10 >> 5] & local_a8;
        iVar11 = (int)uVar10 >> 5;
        while (uVar15 == 0) {
          uVar19 = uVar19 + 0x20;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_140cd49d1;
          uVar15 = puVar20[(longlong)iVar11 + 1];
          local_a8 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar15 = -uVar15 & uVar15;
        iVar11 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar15 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_a4 = (uVar19 - iVar11) + 0x1f;
        uVar10 = uStack_a4;
        if ((int)uVar4 < (int)uStack_a4) {
LAB_140cd49d1:
          uStack_a4 = uVar4;
          uVar10 = uVar4;
        }
      }
      while( true ) {
        lVar12 = (longlong)(int)uStack_5c;
        if (((uStack_5c == uVar10) && (local_68 == (uint *)(lVar5 + 0x4b0))) && (local_78 == plVar1)
           ) break;
        lVar6 = *local_78;
        iVar11 = *(int *)(lVar6 + 0xc + lVar12 * 0x18);
        if ((iVar11 != DAT_1468c21c0) && (iVar11 != iVar17)) {
          uVar13 = FUN_1415d8270();
          puVar14 = (undefined8 *)FUN_1415de6b0(uVar13,iVar11);
          puVar18 = (undefined2 *)0x0;
          local_b8 = (undefined4 ***)0x0;
          iVar17 = *(int *)(puVar14 + 1);
          _Src = (void *)*puVar14;
          puStack_b0 = (uint *)CONCAT44(puStack_b0._4_4_,iVar17);
          if (iVar17 == 0) {
            puStack_b0 = (uint *)0x0;
            iVar17 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar17,0);
            puVar18 = (undefined2 *)local_b8;
            _guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)iVar17 * 2);
            iVar17 = (int)puStack_b0;
          }
          uVar9 = FUN_140c672c0(local_res8,local_88,*(undefined4 *)(lVar6 + 0xc + lVar12 * 0x18));
          puVar16 = &DAT_143f3eda8;
          if (iVar17 != 0) {
            puVar16 = puVar18;
          }
          FUN_140c66f80(&local_98,local_88,*(undefined4 *)(lVar6 + 0xc + lVar12 * 0x18),uVar9,
                        puVar16);
          iVar17 = *(int *)(lVar6 + 0xc + lVar12 * 0x18);
          if (puVar18 != (undefined2 *)0x0) {
            FMemory::Free(puVar18);
          }
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      }
      LeaveCriticalSection(local_80);
    }
  }
  return;
}



// FUNCTION 140cd4b20 FUN_140cd4b20 body=44 status=ok
// SIG undefined FUN_140cd4b20(void)

void FUN_140cd4b20(longlong *param_1)

{
  FUN_14250a7c0();
                    /* WARNING: Could not recover jumptable at 0x000140cd4b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7a8))(param_1,*(byte *)(param_1 + 0x8c) >> 1 & 1);
  return;
}



// FUNCTION 140cd4b50 FUN_140cd4b50 body=773 status=ok
// SIG undefined FUN_140cd4b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cd4b50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  pplVar3 = (longlong **)(param_1 + 100);
  if (*pplVar3 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_140c61cf0();
    plVar5 = plVar8 + 2;
    local_168 = plVar5;
    local_160 = plVar8;
    FUN_14044f790(&local_168,plVar5);
    local_1d8 = 0x300;
    SWidget::SetDebugInfo
              (plVar5,"SOakLoadingScreen",
               "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakGameViewportClient.cpp",0x2d);
    lVar9 = STSDRichInlineImage::FArguments::FArguments(local_148);
    local_1c8 = *(undefined4 *)(lVar9 + 0x90);
    local_198 = lVar9 + 0xf8;
    local_1b0 = lVar9 + 0xe8;
    local_1a0 = *(undefined1 *)(lVar9 + 0xf1);
    local_1b8 = lVar9 + 200;
    local_1c0 = lVar9 + 0x98;
    local_1a8 = *(undefined1 *)(lVar9 + 0xf0);
    local_1d0 = lVar9 + 0x78;
    local_1d8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar5,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_140c6e520(plVar5,lVar9);
    if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar6 != '\0'))
    {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_188 = plVar5;
    local_180 = plVar8;
    if (pplVar3 != &local_188) {
      *pplVar3 = plVar5;
      local_188 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x65,&local_180);
    }
    plVar5 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_180 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      LOCK();
      plVar5 = plVar8 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    FUN_140456c70(local_148);
    plVar5 = (longlong *)param_1[0x65];
    local_178 = *pplVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_170 = plVar5;
    (**(code **)(*param_1 + 0x2a0))(param_1,&local_178,0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  return;
}



// FUNCTION 140cd4e60 FUN_140cd4e60 body=1075 status=ok
// SIG undefined FUN_140cd4e60(void)

void FUN_140cd4e60(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar11 = (longlong *)0x0;
  if (DAT_14686ca90 != 0) {
    puVar7 = (undefined8 *)GetMoviePlayer();
    local_30 = 0;
    uStack_28 = 0;
    (**(code **)*puVar7)(puVar7,&local_30);
    local_38 = (longlong *)0x0;
    DAT_14686ca90 = 0;
    local_40 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_14686ca98,&local_38);
    plVar9 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((DAT_14686caa0 != 0) && (*(char *)(DAT_14686caa0 + 0x10) != '\0')) {
    FUN_140483870(&DAT_146531d88,param_1);
    lVar10 = *(longlong *)(DAT_14686caa0 + 0x38);
    if (*(longlong *)(DAT_14686caa0 + 0x40) != 0) {
      FUN_142543860(lVar10,*(longlong *)(DAT_14686caa0 + 0x40),0,1);
    }
    if (*(longlong *)(DAT_14686caa0 + 0x48) != 0) {
      FUN_142543860(lVar10,*(longlong *)(DAT_14686caa0 + 0x48),0,1);
    }
    if (*(longlong *)(DAT_14686caa0 + 0x50) != 0) {
      FUN_140cb5e40(DAT_14686caa0);
      FUN_142543860(lVar10,*(undefined8 *)(DAT_14686caa0 + 0x50),0,1);
    }
    if (param_2 == '\0') {
      iVar13 = *(int *)(lVar10 + 0xc);
      plVar9 = plVar11;
      if (iVar13 < (int)DAT_1469e91c4) {
        uVar12 = iVar13 >> 0x1f & 0xffff;
        uVar5 = iVar13 + uVar12;
        plVar9 = (longlong *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                 (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
      }
      *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) & 0xbfffffff;
      puVar7 = *(undefined8 **)(param_1 + 0x28);
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      *(undefined1 *)(DAT_14686caa0 + 0x10) = 0;
      *(undefined1 *)(DAT_14686caa0 + 0x11) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x28) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x30) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x40) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x48) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x38) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x50) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x80) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x68) = 0;
      FUN_14172d470(0,1);
    }
    else {
      *(undefined1 *)(DAT_14686caa0 + 0x10) = 0;
      *(undefined1 *)(DAT_14686caa0 + 0x11) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x48) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x40) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x50) = 0;
      *(undefined8 *)(DAT_14686caa0 + 0x68) = 0;
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_58);
      FTickableObjectRenderThread::Unregister(param_1);
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_58._0_4_);
    }
    else {
      pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar9 = TlsGetValue(*pDVar8);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)FMemory::Malloc(0x18,0);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar11 = plVar9;
        }
        TlsSetValue(*pDVar8,plVar11);
        plVar9 = plVar11;
      }
      plVar11 = (longlong *)plVar9[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar9;
        if (plVar11 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
          plVar9[1] = lVar10;
          if (lVar10 == 0) {
            puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar9[1] = (longlong)puVar7;
            lVar10 = 0x1f;
            do {
              puVar3 = puVar7 + 0x20;
              *puVar7 = puVar3;
              lVar10 = lVar10 + -1;
              puVar7 = puVar3;
            } while (lVar10 != 0);
            *puVar3 = 0;
          }
          plVar11 = (longlong *)plVar9[1];
          iVar13 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar13 = 0x20;
          plVar9[1] = (longlong)plVar11;
          *(undefined4 *)(plVar9 + 2) = 0x20;
          *plVar9 = 0;
        }
      }
      else {
        iVar13 = (int)plVar9[2];
      }
      plVar9[1] = *plVar11;
      *(int *)(plVar9 + 2) = iVar13 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      local_50 = 0;
      local_48 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_1444d95e8;
      *(undefined1 *)(plVar11 + 3) = 0;
      plVar11[4] = 0;
      plVar11[2] = param_1;
      lVar10 = plVar11[4];
      piVar2 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_res20 = lVar10;
      FUN_140445100(plVar11,0,0xff,1);
      if (lVar10 != 0) {
        LOCK();
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
    }
    FUN_141ee24f0(0);
  }
  return;
}



// FUNCTION 140cd52a0 FUN_140cd52a0 body=945 status=ok
// SIG undefined FUN_140cd52a0(void)

void FUN_140cd52a0(undefined8 param_1,longlong *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float fVar11;
  longlong *local_res20;
  ulonglong in_stack_ffffffffffffff00;
  ulonglong in_stack_ffffffffffffff08;
  longlong local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  longlong local_98 [2];
  longlong *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [12];
  undefined1 local_64 [60];
  
  iVar2 = FUN_142340f30();
  if (iVar2 == 3) {
    FUN_14141c740(param_1,param_2,(ulonglong)param_3);
    return;
  }
  plVar3 = (longlong *)FUN_140cb9640(param_1);
  lVar5 = 0;
  if (plVar3 != (longlong *)0x0) {
    lVar5 = plVar3[0x122];
  }
  local_88 = plVar3;
  if ((lVar5 != 0) && (plVar4 = (longlong *)FUN_142dcd660(lVar5,0), plVar4 != (longlong *)0x0)) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cd53ac;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  plVar4 = (longlong *)plVar3[0x91];
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar5 = FUN_1413ffe00();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
LAB_140cd53ac:
  iVar2 = 1;
  if (((longlong *)plVar4[0x55a] == (longlong *)0x0) ||
     (iVar2 = (**(code **)(*(longlong *)plVar4[0x55a] + 0x400))(), 0 < iVar2)) {
    plVar10 = (longlong *)*param_2;
    local_d8 = 0;
    local_d0 = 0;
    plVar3 = plVar10 + (int)param_2[1];
    local_res20 = plVar3;
    if (plVar10 != plVar3) {
      do {
        lVar5 = *plVar10;
        if ((lVar5 != 0) && (uVar9 = (ulonglong)param_3, 0 < (int)param_3)) {
          do {
            in_stack_ffffffffffffff08 = 0;
            in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
            FUN_143013fe0(&local_d8,lVar5,iVar2,plVar4,0,in_stack_ffffffffffffff00,0,0);
            uVar9 = uVar9 - 1;
            plVar3 = local_res20;
          } while (uVar9 != 0);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar3);
      if (0 < (int)local_d0) {
        (**(code **)(*plVar4 + 0x788))(plVar4,local_80);
        FRotator::Vector(local_80,&local_b8);
        pfVar6 = (float *)(**(code **)(*plVar4 + 0x790))(plVar4,&local_c8);
        local_a0 = local_b0 * 64.0 + pfVar6[2];
        local_a4 = local_b4 * 64.0 + pfVar6[1];
        local_a8 = local_b8 * 64.0 + *pfVar6;
        local_98[0] = 0;
        local_98[1] = 0;
        iVar2 = rand();
        fVar11 = (float)iVar2 * 0.0076296274 + 750.0;
        pfVar6 = (float *)FRotator::Vector(local_80,local_70);
        local_c0 = fVar11 * pfVar6[2];
        local_c4 = fVar11 * pfVar6[1];
        local_c8 = fVar11 * *pfVar6;
        uVar7 = FUN_140c65880(&local_res20,local_64,0x42c80000,0x43160000);
        uVar8 = (**(code **)(*local_88 + 0x148))();
        FUN_143018b40(local_98,&local_d8,uVar8,&local_a8,&local_c8,uVar7,
                      in_stack_ffffffffffffff08 & 0xffffffffffffff00,1,0);
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if ((int)local_d0 != 0) {
      plVar3 = (longlong *)(local_d8 + 0x38);
      iVar2 = (int)local_d0;
      do {
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar3 + -3);
        plVar3 = plVar3 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cd5660 FUN_140cd5660 body=6906 status=ok
// SIG undefined FUN_140cd5660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cd5660(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  void *_Src;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 **ppuVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  uint *puVar22;
  int iVar23;
  wchar_t *pwVar24;
  longlong *plVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *plVar29;
  undefined2 *puVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_588 [32];
  ulonglong local_568;
  longlong local_558;
  int local_550;
  int local_54c;
  undefined1 local_548;
  undefined1 local_547;
  undefined2 *local_540;
  int local_538;
  undefined4 local_534;
  longlong local_530;
  int local_528 [2];
  wchar_t *local_520;
  undefined8 local_518;
  undefined2 *local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined8 local_4f8;
  float local_4f0;
  int local_4e8;
  int local_4e4;
  float local_4e0 [2];
  undefined4 local_4d8 [2];
  int local_4d0;
  int local_4cc;
  int local_4c8 [2];
  float local_4c0 [2];
  int local_4b8 [2];
  wchar_t *local_4b0;
  uint local_4a8;
  uint local_4a4;
  float local_4a0;
  undefined8 local_49c;
  undefined2 *local_490;
  undefined8 local_488;
  int local_480;
  uint uStack_47c;
  uint *puStack_478;
  undefined4 local_470;
  uint uStack_46c;
  int iStack_468;
  undefined4 uStack_464;
  int local_460;
  uint uStack_45c;
  uint *puStack_458;
  undefined4 local_450;
  uint uStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  undefined8 local_440;
  int iStack_438;
  uint uStack_434;
  uint *puStack_430;
  longlong lStack_428;
  undefined8 uStack_420;
  int local_418;
  uint local_414;
  uint *local_410;
  uint local_408;
  uint uStack_404;
  uint local_400;
  int local_3f8;
  uint local_3f4;
  uint *local_3f0;
  uint local_3e8;
  uint uStack_3e4;
  uint local_3e0;
  longlong *local_3d8;
  undefined8 uStack_3d0;
  uint *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  int *local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  undefined1 local_358 [4];
  undefined1 local_354 [4];
  undefined1 local_350 [8];
  longlong local_348;
  float local_340 [2];
  float local_338;
  undefined8 local_328;
  float local_320;
  undefined8 local_318;
  int iStack_310;
  uint uStack_30c;
  uint *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  int *local_2f0;
  float *local_2e8;
  int *local_2e0;
  undefined4 *local_2d8;
  int *local_2d0;
  float *local_2c8;
  longlong local_2c0 [2];
  undefined1 local_2b0 [24];
  undefined4 local_298;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [48];
  undefined1 local_230 [56];
  undefined1 local_1f8 [64];
  float local_1b8;
  char local_1b4;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [32];
  undefined4 local_180;
  int local_17c;
  longlong local_170;
  undefined4 local_168;
  longlong local_158;
  undefined8 local_150;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_588;
  local_547 = *(undefined1 *)(param_1 + 0x11);
  local_548 = *(undefined1 *)(param_1 + 0x14);
  local_530 = param_1;
  FUN_140cd87d0(param_1,0,0);
  uVar19 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_142543860(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x40),0,1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_142543860(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x48),0,1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (((*(longlong *)(param_1 + 0x50) != 0) &&
      (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458), lVar14 != 0)) &&
     (lVar13 = (longlong)*(int *)(lVar14 + 0x310), *(int *)(lVar14 + 0x310) != 0)) {
    bVar31 = **(longlong **)(lVar14 + 0x308) != 0;
    uVar20 = uVar19;
    uVar27 = uVar19;
    do {
      iVar12 = (int)uVar20;
      uVar19 = uVar19 + 1;
      uVar20 = (ulonglong)(iVar12 + 1);
      if ((longlong)uVar19 < lVar13) {
        do {
          if (bVar31 != (*(longlong *)(*(longlong *)(lVar14 + 0x308) + uVar19 * 8) != 0)) break;
          uVar20 = (ulonglong)((int)uVar20 + 1);
          uVar19 = uVar19 + 1;
        } while ((longlong)uVar19 < lVar13);
      }
      iVar23 = (int)uVar20 - iVar12;
      if (bVar31 != false) {
        iVar26 = (int)uVar27;
        if (iVar26 != iVar12) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar14 + 0x308) + (longlong)iVar26 * 8),
                     (void *)(*(longlong *)(lVar14 + 0x308) + (longlong)iVar12 * 8),
                     (longlong)iVar23 << 3);
        }
        uVar27 = (ulonglong)(uint)(iVar26 + iVar23);
      }
      bVar31 = (bool)(bVar31 ^ 1);
    } while ((longlong)uVar19 < lVar13);
    *(int *)(lVar14 + 0x310) = (int)uVar27;
    param_1 = local_530;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar14 = *(longlong *)(DAT_146b33f38 + 0xe8);
  local_440 = (longlong *)CONCAT44(local_440._4_4_,(undefined4)local_440);
  if (lVar14 != 0) {
    FUN_140cb8c10(lVar14,&local_508);
    cVar5 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                      (&local_508,param_1 + 0x58);
    if (cVar5 != '\0') {
      *(undefined4 *)(param_1 + 0x58) = local_508;
      *(undefined4 *)(param_1 + 0x5c) = local_504;
      lVar13 = FWeakObjectPtr::Get(param_1 + 0x58);
      iVar12 = *(int *)(lVar13 + 0xc);
      lVar13 = 0;
      if (iVar12 < (int)DAT_1469e91c4) {
        uVar16 = iVar12 >> 0x1f & 0xffff;
        uVar6 = iVar12 + uVar16;
        lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                 (longlong)(int)((uVar6 & 0xffff) - uVar16) * 0x18;
      }
      *(uint *)(lVar13 + 8) = *(uint *)(lVar13 + 8) | 0x40000000;
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar14 + 0x220);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar14 + 0x224);
    uVar7 = FUN_141433220();
    local_568 = FActorSpawnParameters::FActorSpawnParameters(local_260);
    uVar7 = UWorld::SpawnActor(*(undefined8 *)(param_1 + 0x38),uVar7,0,0);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    lVar13 = FUN_1405ec200(lVar14 + 0x30);
    if (lVar13 == 0) {
LAB_140cd593b:
      lVar13 = 0;
    }
    else {
      lVar8 = UNodeMappingContainer::StaticClass();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar31 = false;
      }
      else {
        bVar31 = true;
      }
      if (!bVar31) goto LAB_140cd593b;
    }
    local_318 = (longlong *)CONCAT44(local_318._4_4_,(undefined4)local_318);
    if (((*(longlong *)(param_1 + 0x40) != 0) &&
        (plVar29 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x458),
        local_318 = (longlong *)CONCAT44(local_318._4_4_,(undefined4)local_318),
        plVar29 != (longlong *)0x0)) &&
       (local_318 = (longlong *)CONCAT44(local_318._4_4_,(undefined4)local_318), lVar13 != 0)) {
      (**(code **)(*plVar29 + 0x928))(plVar29,lVar13);
      FUN_14222da00(*(undefined8 *)(param_1 + 0x40),0,local_340,&local_3b0);
      fVar32 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar14 + 0x84) * 0.008726646);
      fVar33 = _guard_xfg_dispatch_icall_nop(fVar32 * 1.7777778);
      fVar35 = *(float *)(lVar14 + 0x80);
      fVar34 = *(float *)(lVar14 + 0x60);
      fVar36 = *(float *)(lVar14 + 100);
      if (((0.0001 < ABS(local_3b0)) || (0.0001 < ABS(local_3ac))) || (0.0001 < ABS(local_3a8))) {
        bVar31 = false;
      }
      else {
        bVar31 = true;
      }
      if (bVar31) {
        fVar38 = 1.0;
      }
      else {
        fVar38 = SQRT(local_3ac * local_3ac + local_3b0 * local_3b0);
      }
      if (((0.0001 < ABS(local_3b0)) || (0.0001 < ABS(local_3ac))) || (0.0001 < ABS(local_3a8))) {
        bVar31 = false;
      }
      else {
        bVar31 = true;
      }
      if (bVar31) {
        fVar37 = 1.0;
      }
      else {
        fVar37 = ABS(local_3a8);
      }
      fVar33 = _guard_xfg_dispatch_icall_nop(fVar33 * 0.99999994);
      local_4f0 = (fVar36 * fVar35 * fVar32) / fVar37;
      fVar38 = (fVar34 * fVar33 * fVar35) / fVar38;
      if (fVar38 <= local_4f0) {
        local_4f0 = fVar38;
      }
      if (local_4f0 <= 0.0) {
        local_4f0 = 1.0;
      }
      *(float *)(param_1 + 0x70) = local_4f0;
      *(ulonglong *)(param_1 + 0x74) = (ulonglong)(uint)(-local_340[0] * local_4f0);
      *(float *)(param_1 + 0x7c) = local_4f0 * -local_338;
      local_328 = CONCAT44(local_4f0,local_4f0);
      local_320 = local_4f0;
      FUN_142399c30(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x458),&local_328);
      local_568 = local_568 & 0xffffffffffffff00;
      FUN_14223c850(*(undefined8 *)(param_1 + 0x40),param_1 + 0x74,0,0);
      FUN_142398ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x458),1,2);
      FUN_14223f010(*(longlong *)(param_1 + 0x40),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x458));
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x310))(*(longlong **)(param_1 + 0x40),0);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458);
      iVar12 = *(int *)(lVar13 + 0x310);
      *(int *)(lVar13 + 0x310) = iVar12 + 1;
      if (*(int *)(lVar13 + 0x314) < iVar12 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar13 + 0x308,iVar12);
      }
      *(undefined8 *)(*(longlong *)(lVar13 + 0x308) + (longlong)iVar12 * 8) = uVar7;
      uVar7 = FUN_140cb8f20(param_1,local_1f8);
      FUN_140487e30(local_108,uVar7);
      local_568 = local_568 & 0xffffffffffffff00;
      FUN_14223d270(*(undefined8 *)(param_1 + 0x40),local_108,0,0);
      lVar13 = *(longlong *)(param_1 + 0x40);
      plVar29 = (longlong *)(lVar13 + 0x2b0);
      uStack_47c = 1;
      uVar6 = *(uint *)(lVar13 + 0x2d8);
      puVar1 = (uint *)(lVar13 + 0x2c0);
      local_480 = 0;
      uStack_46c = 0;
      iStack_468 = 0;
      if (uVar6 != 0) {
        puVar22 = *(uint **)(lVar13 + 0x2d0);
        if (*(uint **)(lVar13 + 0x2d0) == (uint *)0x0) {
          puVar22 = puVar1;
        }
        uVar16 = *puVar22;
        while (uVar16 == 0) {
          lVar8 = (longlong)local_480;
          iStack_468 = iStack_468 + 0x20;
          iVar12 = local_480 + 1;
          bVar31 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_480;
          local_480 = iVar12;
          if (bVar31) goto LAB_140cd5d04;
          uVar16 = puVar22[lVar8 + 1];
        }
        uStack_47c = uVar16 - 1 & uVar16 ^ uVar16;
        local_368 = 0x1f;
        if (uStack_47c != 0) {
          for (; uStack_47c >> local_368 == 0; local_368 = local_368 + -1) {
          }
        }
        if (uStack_47c == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - local_368;
        }
        uStack_46c = (iStack_468 - iVar12) + 0x1f;
        if ((int)uVar6 < (int)uStack_46c) {
LAB_140cd5d04:
          uStack_46c = uVar6;
        }
      }
      local_470 = 0xffffffff;
      uStack_404 = *(uint *)(lVar13 + 0x2d8);
      uStack_3d0 = CONCAT44(uStack_47c,local_480);
      uStack_3c0 = CONCAT44(uStack_46c,0xffffffff);
      uStack_3b8 = CONCAT44(uStack_464,iStack_468);
      local_408 = -1 << ((byte)uStack_404 & 0x1f);
      local_418 = (int)uStack_404 >> 5;
      local_400 = uStack_404 & 0xffffffe0;
      iStack_310 = local_480;
      uStack_30c = uStack_47c;
      puStack_478 = puVar1;
      local_410 = puVar1;
      local_3d8 = plVar29;
      puStack_3c8 = puVar1;
      local_308 = puVar1;
      uStack_300 = uStack_3c0;
      local_2f8 = uStack_3b8;
      local_318 = plVar29;
      uVar16 = uStack_404;
      if (uStack_404 != uVar6) {
        puVar22 = *(uint **)(lVar13 + 0x2d0);
        if (*(uint **)(lVar13 + 0x2d0) == (uint *)0x0) {
          puVar22 = puVar1;
        }
        uVar16 = puVar22[local_418] & local_408;
        while (uVar16 == 0) {
          lVar13 = (longlong)local_418;
          local_400 = local_400 + 0x20;
          iVar12 = local_418 + 1;
          bVar31 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_418;
          local_418 = iVar12;
          if (bVar31) goto LAB_140cd5e22;
          uVar16 = puVar22[lVar13 + 1];
          local_408 = 0xffffffff;
        }
        local_414 = uVar16 - 1 & uVar16 ^ uVar16;
        local_364 = 0x1f;
        if (local_414 != 0) {
          for (; local_414 >> local_364 == 0; local_364 = local_364 + -1) {
          }
        }
        if (local_414 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - local_364;
        }
        uStack_404 = (local_400 - iVar12) + 0x1f;
        uVar16 = uStack_404;
        if ((int)uVar6 < (int)uStack_404) {
LAB_140cd5e22:
          uStack_404 = uVar6;
          uVar16 = uVar6;
        }
      }
      while( true ) {
        if ((uStack_300._4_4_ == uVar16) && (local_308 == puVar1)) {
          bVar31 = true;
        }
        else {
          bVar31 = false;
        }
        if ((bVar31) && (local_318 == plVar29)) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
        if (!bVar31) break;
        lVar13 = *(longlong *)(*local_318 + (longlong)(int)uStack_300._4_4_ * 0x10);
        FUN_1423511f0(lVar13,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x458));
        FUN_14234cb00(lVar13);
        if (lVar13 != 0) {
          lVar9 = FUN_1429ff160();
          lVar8 = *(longlong *)(lVar13 + 0x10);
          if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
              lVar9 + 0x88)) {
            bVar31 = false;
          }
          else {
            bVar31 = true;
          }
          if (bVar31) {
            FUN_142398ec0(lVar13,CONCAT71((int7)((ulonglong)lVar8 >> 8),1));
          }
        }
        uStack_300 = CONCAT44(uStack_300._4_4_,(uint)uStack_300 & ~uStack_30c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_310);
      }
    }
    uVar7 = FUN_141433220();
    local_568 = FActorSpawnParameters::FActorSpawnParameters(local_230);
    uVar7 = UWorld::SpawnActor(*(undefined8 *)(param_1 + 0x38),uVar7,0,0);
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    lVar13 = FUN_1405ec200(lVar14 + 0x88);
    if (lVar13 == 0) {
LAB_140cd5f8c:
      lVar13 = 0;
    }
    else {
      lVar8 = UNodeMappingContainer::StaticClass();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar31 = false;
      }
      else {
        bVar31 = true;
      }
      if (!bVar31) goto LAB_140cd5f8c;
    }
    local_440 = (longlong *)CONCAT44(local_440._4_4_,(undefined4)local_440);
    if (((*(longlong *)(param_1 + 0x48) != 0) &&
        (plVar29 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x458),
        local_440 = (longlong *)CONCAT44(local_440._4_4_,(undefined4)local_440),
        plVar29 != (longlong *)0x0)) &&
       (local_440 = (longlong *)CONCAT44(local_440._4_4_,(undefined4)local_440), lVar13 != 0)) {
      fVar34 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar14 + 0x84) * 0.008726646);
      fVar35 = *(float *)(lVar14 + 0x1a0);
      fVar34 = _guard_xfg_dispatch_icall_nop(fVar34 * 1.7777778);
      fVar34 = _guard_xfg_dispatch_icall_nop(fVar34 * 0.99999994);
      fVar36 = fVar34 * (fVar35 + *(float *)(lVar14 + 0x80)) * 0.0078125;
      fVar34 = fVar36 * 0.5625;
      (**(code **)(*plVar29 + 0x928))(plVar29,lVar13);
      local_49c = CONCAT44(fVar34,(undefined4)local_49c);
      local_4f8 = CONCAT44(fVar36,0x3f800000);
      local_4f0 = fVar34;
      FUN_142399c30(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x458),&local_4f8);
      local_49c = 0;
      local_568 = local_568 & 0xffffffffffffff00;
      local_4a0 = fVar35;
      FUN_14223c850(*(undefined8 *)(param_1 + 0x48),&local_4a0,0,0);
      FUN_142398ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x458),1,2);
      FUN_14223f010(*(longlong *)(param_1 + 0x48),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x458));
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x310))(*(longlong **)(param_1 + 0x48),0);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458);
      iVar12 = *(int *)(lVar14 + 0x310);
      *(int *)(lVar14 + 0x310) = iVar12 + 1;
      if (*(int *)(lVar14 + 0x314) < iVar12 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar14 + 0x308,iVar12);
      }
      uStack_45c = 1;
      uStack_44c = 0;
      iStack_448 = 0;
      *(undefined8 *)(*(longlong *)(lVar14 + 0x308) + (longlong)iVar12 * 8) = uVar7;
      lVar14 = *(longlong *)(param_1 + 0x48);
      plVar29 = (longlong *)(lVar14 + 0x2b0);
      local_460 = 0;
      uVar6 = *(uint *)(lVar14 + 0x2d8);
      puVar1 = (uint *)(lVar14 + 0x2c0);
      if (uVar6 != 0) {
        puVar22 = *(uint **)(lVar14 + 0x2d0);
        if (*(uint **)(lVar14 + 0x2d0) == (uint *)0x0) {
          puVar22 = puVar1;
        }
        uVar16 = *puVar22;
        iStack_448 = 0;
        local_460 = 0;
        while (uVar16 == 0) {
          lVar13 = (longlong)local_460;
          iStack_448 = iStack_448 + 0x20;
          iVar12 = local_460 + 1;
          bVar31 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_460;
          local_460 = iVar12;
          if (bVar31) goto LAB_140cd61a4;
          uVar16 = puVar22[lVar13 + 1];
        }
        uStack_45c = uVar16 - 1 & uVar16 ^ uVar16;
        local_360 = 0x1f;
        if (uStack_45c != 0) {
          for (; uStack_45c >> local_360 == 0; local_360 = local_360 + -1) {
          }
        }
        if (uStack_45c == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - local_360;
        }
        uStack_44c = (iStack_448 - iVar12) + 0x1f;
        if ((int)uVar6 < (int)uStack_44c) {
LAB_140cd61a4:
          uStack_44c = uVar6;
        }
      }
      local_450 = 0xffffffff;
      uStack_3e4 = *(uint *)(lVar14 + 0x2d8);
      lStack_428 = CONCAT44(uStack_44c,0xffffffff);
      uStack_420 = CONCAT44(uStack_444,iStack_448);
      iStack_438 = local_460;
      uStack_434 = uStack_45c;
      local_3e8 = -1 << ((byte)uStack_3e4 & 0x1f);
      local_3f8 = (int)uStack_3e4 >> 5;
      local_3e0 = uStack_3e4 & 0xffffffe0;
      uStack_3d0 = CONCAT44(uStack_45c,local_460);
      puStack_458 = puVar1;
      puStack_430 = puVar1;
      local_3f0 = puVar1;
      local_3d8 = plVar29;
      puStack_3c8 = puVar1;
      uStack_3c0 = lStack_428;
      uStack_3b8 = uStack_420;
      local_440 = plVar29;
      uVar16 = uStack_3e4;
      if (uStack_3e4 != uVar6) {
        puVar22 = *(uint **)(lVar14 + 0x2d0);
        if (*(uint **)(lVar14 + 0x2d0) == (uint *)0x0) {
          puVar22 = puVar1;
        }
        uVar16 = puVar22[local_3f8] & local_3e8;
        while (uVar16 == 0) {
          lVar14 = (longlong)local_3f8;
          local_3e0 = local_3e0 + 0x20;
          iVar12 = local_3f8 + 1;
          bVar31 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_3f8;
          local_3f8 = iVar12;
          if (bVar31) goto LAB_140cd62c7;
          uVar16 = puVar22[lVar14 + 1];
          local_3e8 = 0xffffffff;
        }
        local_3f4 = uVar16 - 1 & uVar16 ^ uVar16;
        local_35c = 0x1f;
        if (local_3f4 != 0) {
          for (; local_3f4 >> local_35c == 0; local_35c = local_35c + -1) {
          }
        }
        if (local_3f4 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - local_35c;
        }
        uStack_3e4 = (local_3e0 - iVar12) + 0x1f;
        uVar16 = uStack_3e4;
        if ((int)uVar6 < (int)uStack_3e4) {
LAB_140cd62c7:
          uStack_3e4 = uVar6;
          uVar16 = uVar6;
        }
      }
      while( true ) {
        if ((uStack_3c0._4_4_ == uVar16) && (puStack_3c8 == puVar1)) {
          bVar31 = true;
        }
        else {
          bVar31 = false;
        }
        if ((bVar31) && (local_3d8 == plVar29)) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
        if (!bVar31) break;
        lVar14 = *(longlong *)(*local_3d8 + (longlong)(int)uStack_3c0._4_4_ * 0x10);
        FUN_1423511f0(lVar14,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x458));
        FUN_14234cb00(lVar14);
        if (lVar14 != 0) {
          lVar8 = FUN_1429ff160();
          lVar13 = *(longlong *)(lVar14 + 0x10);
          if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar31 = false;
          }
          else {
            bVar31 = true;
          }
          if (bVar31) {
            FUN_142398ec0(lVar14,CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
          }
        }
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(uint)uStack_3c0 & ~uStack_3d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3d0);
      }
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_530 = *(longlong *)(DAT_146b33f38 + 0xe8);
  if (local_530 == 0) goto LAB_140cd70de;
  local_538 = *(int *)(param_1 + 0xd0);
  lVar14 = (longlong)local_538;
  pwVar24 = (wchar_t *)0x0;
  _Src = *(void **)(param_1 + 200);
  local_540 = (undefined2 *)0x0;
  uVar6 = 0;
  if (local_538 == 0) {
    local_534 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_540,local_538,0);
    _guard_xfg_dispatch_icall_nop(local_540,_Src,lVar14 * 2);
  }
  if ((*(int *)(param_1 + 0xd0) < 2) && (lVar14 = *(longlong *)(param_1 + 0x68), lVar14 != 0)) {
    lVar13 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if (bVar31) {
      ppuVar10 = (undefined2 **)FUN_140bb7110(lVar14,local_2c0);
      if (&local_540 != ppuVar10) {
        if (local_540 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_540 = *ppuVar10;
        *ppuVar10 = (undefined2 *)0x0;
        local_538 = *(int *)(ppuVar10 + 1);
        local_534 = *(undefined4 *)((longlong)ppuVar10 + 0xc);
        ppuVar10[1] = (undefined2 *)0x0;
      }
      if (local_2c0[0] != 0) {
        FMemory::Free();
      }
    }
  }
  local_520 = (wchar_t *)0x0;
  local_518 = 0;
  local_490 = (undefined2 *)0x0;
  local_488 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_490,0);
  puVar30 = local_490;
  FGenericPlatformString::Memcpy(local_490,&DAT_144358e6c,4);
  iVar12 = (int)local_488;
  local_568 = CONCAT44(local_568._4_4_,0xffffffff);
  puVar17 = &DAT_143f3eda8;
  if ((int)local_488 != 0) {
    puVar17 = puVar30;
  }
  iVar23 = FUN_141592950(&local_540,puVar17,1);
  if (iVar23 < 0) {
    bVar31 = true;
    uVar16 = uVar6;
  }
  else {
    uVar16 = uVar6;
    if (iVar12 != 0) {
      uVar16 = iVar12 - 1;
    }
    uVar16 = iVar23 + uVar16;
    uVar28 = local_538 - 1;
    uVar3 = uVar16 + 0x7fffffff;
    if (local_538 == 0) {
      uVar28 = 0;
    }
    if (uVar16 < uVar28) {
      uVar28 = uVar16;
    }
    if (local_538 != 0) {
      uVar6 = local_538 - 1;
    }
    uVar16 = uVar28;
    if ((uVar28 <= uVar3) && (uVar16 = uVar6, uVar3 < uVar6)) {
      uVar16 = uVar3;
    }
    local_4b0 = (wchar_t *)0x0;
    local_510 = &DAT_143f3eda8;
    if (local_538 != 0) {
      local_510 = local_540;
    }
    iVar12 = uVar16 - uVar28;
    local_4a4 = 0;
    uVar6 = iVar12 + 1;
    if (iVar12 == 0) {
      uVar6 = 0;
    }
    local_4a8 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0,0);
      uVar6 = local_4a8;
      pwVar24 = local_4b0;
      if (0 < (int)local_4a8) {
        wcsncpy(local_4b0,local_510 + (int)uVar28,(longlong)iVar12);
        pwVar24[iVar12] = L'\0';
      }
    }
    bVar31 = false;
    local_518 = CONCAT44(local_4a4,uVar6);
    puVar30 = local_490;
    uVar16 = local_4a4;
    local_520 = pwVar24;
  }
  if (puVar30 != (undefined2 *)0x0) {
    FMemory::Free(puVar30);
  }
  iVar12 = local_538;
  puVar30 = local_540;
  if (bVar31) {
    local_518 = CONCAT44(local_518._4_4_,local_538);
    if ((local_538 != 0) || (uVar6 = 0, uVar16 != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_520,local_538,uVar16);
      _guard_xfg_dispatch_icall_nop(local_520,puVar30,(longlong)iVar12 * 2);
      uVar6 = (uint)local_518;
    }
  }
  pwVar24 = L"";
  if (uVar6 != 0) {
    pwVar24 = local_520;
  }
  FName::FName(&local_348,pwVar24,1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar14 = *(longlong *)(DAT_146b33f38 + 0x58);
  lVar13 = local_530;
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x458) != 0)) {
    bVar31 = false;
    if ((*(longlong *)(param_1 + 0x50) != 0) &&
       ((lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458), lVar13 != 0 &&
        (plVar29 = *(longlong **)(lVar13 + 0x3d0), plVar29 != (longlong *)0x0)))) {
      fVar35 = (float)(**(code **)(*plVar29 + 0x2b8))();
      bVar31 = 1200.0 < fVar35;
    }
    uVar19 = 0;
    local_128 = 0xffffffff;
    local_158 = 0;
    puStack_430 = (uint *)0x0;
    local_150 = 0;
    local_138 = 0;
    local_130 = 0;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    lStack_428 = 0;
    uStack_420 = 0;
    local_510 = (undefined2 *)0x0;
    local_440._4_4_ = 0;
    iStack_438 = 0;
    local_440._0_4_ = 0xffffffff;
    FSoftObjectPath::Reset(&puStack_430);
    lVar13 = local_530;
    iStack_438 = 0;
    lVar8 = 0x100;
    if (!bVar31) {
      lVar8 = 0xb0;
    }
    TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
    ::operator=(&local_158,lVar8 + local_530);
    lVar8 = 0x178;
    if (!bVar31) {
      lVar8 = 0x150;
    }
    TSoftObjectPtr<UCurveLinearColor>::operator=(&local_440,lVar8 + lVar13);
    if (lVar14 != 0) {
      plVar29 = *(longlong **)(lVar14 + 0x1048);
      uVar20 = (longlong)*(int *)(lVar14 + 0x1050) & 0x1fffffffffffffff;
      if (plVar29 + *(int *)(lVar14 + 0x1050) < plVar29) {
        uVar20 = uVar19;
      }
      if (uVar20 != 0) {
        do {
          if (*plVar29 != 0) {
            lVar13 = 0x80;
            if (!bVar31) {
              lVar13 = 0x30;
            }
            FUN_140c5ee60(&local_158,lVar13 + *plVar29);
          }
          plVar29 = plVar29 + 1;
          uVar19 = uVar19 + 1;
          lVar13 = local_530;
        } while (uVar19 != uVar20);
      }
    }
    local_380 = 0;
    local_378 = 0;
    local_370 = 0;
    local_390 = 0xffffffff;
    local_38c = 0;
    FSoftObjectPath::Reset(&local_380);
    local_388 = 0;
    piVar11 = (int *)TSet<TTuple<FName,TAttributeIndicesArray<FVector2D,FVertexInstanceID>_>,TDefaultMapHashableKeyFuncs<FName,TAttributeIndicesArray<FVector2D,FVertexInstanceID>,0>,FDefaultSetAllocator>
                     ::FindId(&local_158,local_358,local_348);
    if (*piVar11 == -1) {
      puVar18 = &local_440;
    }
    else {
      TSet<TTuple<FName,TAttributeIndicesArray<FVector2D,FVertexInstanceID>_>,TDefaultMapHashableKeyFuncs<FName,TAttributeIndicesArray<FVector2D,FVertexInstanceID>,0>,FDefaultSetAllocator>
      ::FindId(&local_158,&local_4e8,local_348);
      if (local_4e8 == -1) {
        puVar18 = (undefined8 *)&DAT_00000008;
      }
      else {
        puVar18 = (undefined8 *)((longlong)local_4e8 * 0x38 + local_158 + 8);
      }
    }
    TSoftObjectPtr<UCurveLinearColor>::operator=(&local_390,puVar18);
    lVar8 = FUN_1405ec200(&local_390);
    if (lVar8 == 0) {
LAB_140cd68e6:
      uVar7 = 0;
    }
    else {
      cVar5 = FUN_140c61a70(lVar8);
      if (cVar5 == '\0') goto LAB_140cd68e6;
      cVar5 = FUN_140c61a70(lVar8);
      if (cVar5 == '\0') goto LAB_140cd68e6;
      plVar29 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x458);
      (**(code **)(*plVar29 + 0x568))(plVar29,0,lVar8);
      uVar7 = 1;
    }
    FUN_142398ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x458),uVar7,1);
    if (local_378 != 0) {
      FMemory::Free();
    }
    if (lStack_428 != 0) {
      FMemory::Free();
    }
    local_110 = 0;
    if (local_118 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FD3D12Resource_*,CResourceState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_158,0);
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
  }
  FText::operator=(param_1 + 0x88,lVar13 + 0x230);
  lVar8 = *(longlong *)(lVar13 + 0x248);
  local_558 = 0;
  iVar12 = *(int *)(lVar13 + 0x250);
  if (iVar12 == 0) {
    local_54c = 0;
    local_550 = iVar12;
  }
  else {
    local_550 = iVar12;
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_558,iVar12,0);
    lVar9 = local_558 - lVar8;
    do {
      FText::FText(lVar8 + lVar9,lVar8);
      lVar8 = lVar8 + 0x18;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar12 = local_550;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_278,
                     L"There is a local view, a planetary view and a galactic view in your gameplay map. Use those to quickly travel to distant and close locations."
                     ,L"OakLoadingScene",L"TooltipText_Patch_004");
  local_550 = iVar12 + 1;
  if (local_54c < local_550) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_558,iVar12);
  }
  FText::FText(local_558 + (longlong)iVar12 * 0x18,uVar7);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar29 = local_270 + 1;
    lVar8 = *plVar29;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar11 = (int *)((longlong)local_270 + 0xc);
      iVar23 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar23 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_290,
                     L"You can fast travel to your vehicle in the map. Open your map and select your vehicle to instantly teleport to it."
                     ,L"OakLoadingScene",L"TooltipText_Patch_005");
  iVar23 = local_550;
  lVar8 = (longlong)local_550;
  local_550 = local_550 + 1;
  if (local_54c < local_550) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_558,iVar23);
  }
  iVar23 = local_550;
  FText::FText(local_558 + lVar8 * 0x18,uVar7);
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar29 = local_288 + 1;
    lVar8 = *plVar29;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    iVar23 = local_550;
    if ((int)lVar8 == 1) {
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar11 = (int *)((longlong)local_288 + 0xc);
      iVar26 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      iVar23 = local_550;
      if (iVar26 == 1) {
        (**(code **)(*local_288 + 8))(local_288,1);
        iVar23 = local_550;
      }
    }
  }
  local_1b8 = 0.0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b4 = '\0';
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_1a0,0,0);
  local_528[0] = 0;
  local_180 = 0xffffffff;
  local_17c = 0;
  local_170 = 0;
  local_168 = 0;
  if (0 < iVar23) {
    do {
      fVar35 = 1.0;
      if (local_528[0] - 8U < 3) {
        fVar35 = 3.0;
      }
      if (iVar12 <= local_528[0]) {
        fVar35 = 2.0;
      }
      local_4e0[0] = fVar35;
      if ((1e-08 < fVar35) || (local_1b4 != '\0')) {
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        FindId(&local_1b0,&local_4e4,local_528[0]);
        if ((local_4e4 != -1) &&
           ((lVar8 = (longlong)local_4e4 * 0x10 + local_1b0, lVar8 != 0 &&
            (pfVar15 = (float *)(lVar8 + 4), pfVar15 != (float *)0x0)))) {
          local_1b8 = local_1b8 - *pfVar15;
        }
        local_1b8 = local_1b8 + fVar35;
        local_2f0 = local_528;
        local_2e8 = local_4e0;
        FUN_1407b93f0(&local_1b0,local_354,&local_2f0,0);
      }
      local_528[0] = local_528[0] + 1;
    } while (local_528[0] < iVar23);
  }
  if (lVar14 != 0) {
    plVar25 = *(longlong **)(lVar14 + 0x1048);
    plVar29 = plVar25 + *(int *)(lVar14 + 0x1050);
    lVar13 = local_530;
    for (; local_530 = lVar13, plVar25 != plVar29; plVar25 = plVar25 + 1) {
      lVar14 = *plVar25;
      if (lVar14 != 0) {
        lVar13 = *(longlong *)(lVar14 + 0xd0);
        lVar14 = (longlong)*(int *)(lVar14 + 0xd8) * 0x20 + lVar13;
        if (lVar13 != lVar14) {
          local_2e0 = local_4b8;
          local_2d8 = local_4d8;
          iVar12 = iVar23;
          do {
            FText::FText(local_2b0,lVar13);
            local_298 = *(undefined4 *)(lVar13 + 0x18);
            local_550 = iVar12 + 1;
            if (local_54c < local_550) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_558,iVar12);
            }
            iVar23 = local_550;
            FText::FText(local_558 + (longlong)iVar12 * 0x18,local_2b0);
            local_4d8[0] = 0x3f800000;
            local_4b8[0] = iVar12;
            TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
            FindId(&local_1b0,&local_4d0,iVar12);
            if (((local_4d0 != -1) && (lVar8 = (longlong)local_4d0 * 0x10 + local_1b0, lVar8 != 0))
               && (pfVar15 = (float *)(lVar8 + 4), pfVar15 != (float *)0x0)) {
              local_1b8 = local_1b8 - *pfVar15;
            }
            local_1b8 = local_1b8 + 1.0;
            FUN_1407b93f0(&local_1b0,local_350,&local_2e0,0);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2b0);
            lVar13 = lVar13 + 0x20;
            iVar12 = iVar23;
          } while (lVar13 != lVar14);
        }
      }
      lVar13 = local_530;
    }
  }
  cVar5 = FUN_140adac30(param_1 + 200);
  if (cVar5 != '\0') {
    if (*(char *)(lVar13 + 600) == '\0') {
      if (iVar23 != 0) {
        plVar29 = (longlong *)(local_558 + 8);
        do {
          plVar25 = (longlong *)*plVar29;
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar25 + 1;
            lVar14 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar25)(plVar25);
              LOCK();
              piVar11 = (int *)((longlong)plVar25 + 0xc);
              iVar12 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar25 + 8))(plVar25,1);
              }
            }
          }
          plVar29 = plVar29 + 3;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      local_550 = 0;
      if (local_54c != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_558,0);
      }
      iVar23 = local_550;
      local_1b8 = 0.0;
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(&local_1b0,0)
      ;
    }
    lVar8 = *(longlong *)(lVar13 + 0x260);
    fVar35 = *(float *)(lVar13 + 0x25c);
    lVar14 = lVar8 + (longlong)*(int *)(lVar13 + 0x268) * 0x18;
    for (; lVar8 != lVar14; lVar8 = lVar8 + 0x18) {
      local_550 = iVar23 + 1;
      if (local_54c < local_550) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_558,iVar23);
      }
      iVar12 = local_550;
      FText::FText(local_558 + (longlong)iVar23 * 0x18,lVar8);
      local_4c8[0] = iVar23;
      local_4c0[0] = fVar35;
      if ((1e-08 < fVar35) || (local_1b4 != '\0')) {
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        FindId(&local_1b0,&local_4cc,iVar23);
        if ((local_4cc != -1) &&
           ((lVar9 = (longlong)local_4cc * 0x10 + local_1b0, lVar9 != 0 &&
            (pfVar15 = (float *)(lVar9 + 4), pfVar15 != (float *)0x0)))) {
          local_1b8 = local_1b8 - *pfVar15;
        }
        local_1b8 = local_1b8 + fVar35;
        local_2d0 = local_4c8;
        local_2c8 = local_4c0;
        FUN_1407b93f0(&local_1b0,&local_510,&local_2d0,0);
      }
      iVar23 = iVar12;
    }
  }
  plVar29 = (longlong *)(param_1 + 0xa0);
  iVar12 = *(int *)(param_1 + 0xa8);
  if (iVar12 < iVar23) {
    iVar23 = iVar23 - iVar12;
    *(int *)(param_1 + 0xa8) = iVar12 + iVar23;
    if (*(int *)(param_1 + 0xac) < iVar12 + iVar23) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar29,iVar12);
    }
    lVar14 = *plVar29 + (longlong)iVar12 * 0x18;
    for (; iVar23 != 0; iVar23 = iVar23 + -1) {
      FText::FText(lVar14);
      lVar14 = lVar14 + 0x18;
    }
  }
  else if (iVar23 < iVar12) {
    TArray<FText,FDefaultAllocator>::RemoveAtImpl(plVar29,iVar23,iVar12 - iVar23,1);
  }
  iVar12 = 0;
  local_3a0 = (int *)0x0;
  local_398 = 0;
  FUN_1409c0150(&local_1b8,(int)local_1a8 - local_17c,0,&local_3a0);
  piVar11 = local_3a0;
  piVar21 = local_3a0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      FText::operator=(*plVar29 + (longlong)iVar12 * 0x18,local_558 + (longlong)*piVar21 * 0x18);
      iVar12 = iVar12 + 1;
      piVar21 = piVar21 + 1;
    } while (iVar12 < *(int *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  uVar4 = *(undefined4 *)(lVar13 + 0x228);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  if (piVar11 != (int *)0x0) {
    FMemory::Free(piVar11);
  }
  local_168 = 0;
  if (local_170 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_1b0);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_558);
  if (local_520 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_540 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_140cd70de:
  FUN_140cd87d0(param_1,local_547,local_548);
  return;
}



// FUNCTION 140cd7160 FUN_140cd7160 body=382 status=ok
// SIG undefined FUN_140cd7160(void)

void FUN_140cd7160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res20 [8];
  longlong local_48 [2];
  undefined1 local_38 [40];
  undefined1 local_10;
  
  local_48[0] = 0;
  local_48[1] = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"/Engine/BasicShapes/Cube.Cube",0x3c);
  uVar2 = UNodeMappingContainer::StaticClass();
  puVar3 = (undefined8 *)FName::FName(local_res20,L"Cube",1);
  lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_48,0,0);
  if (lVar4 != 0) {
    lVar5 = UNodeMappingContainer::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cd722c;
  }
  lVar4 = 0;
LAB_140cd722c:
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    FActorSpawnParameters::FActorSpawnParameters(local_38);
    local_10 = 1;
    uVar2 = AAfrPlayerState::GetPrivateStaticClass();
    plVar6 = (longlong *)FUN_142550d00(param_2,uVar2,param_3,local_38);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x310))(plVar6,1);
      plVar6 = (longlong *)plVar6[0x8b];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x638))(plVar6,0);
        *(undefined4 *)(plVar6 + 0x89) = 3;
        lVar5 = FUN_142fa3b90();
        plVar6[0x8b] = lVar5;
        *(undefined1 *)((longlong)plVar6 + 0x451) = 3;
        (**(code **)(*plVar6 + 0x928))(plVar6,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140cd72e0 FUN_140cd72e0 body=527 status=ok
// SIG undefined FUN_140cd72e0(void)

void FUN_140cd72e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong local_res10 [3];
  
  if (param_2 == 0) {
    return;
  }
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x9c0,local_res10);
  iVar1 = *(int *)(param_1 + 0x9d0);
  uVar7 = 0;
  bVar8 = false;
  if (iVar1 != 0) goto LAB_140cd7415;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar6 = DAT_146b33f38 + 0x30;
  lVar2 = FWeakObjectPtr::Get(lVar6);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_2 = local_res10[0];
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x38)) &&
       (local_res10[1] = 0, *(longlong *)(lVar3 + 0x40) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x38) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar6);
      param_2 = local_res10[0];
      if (lVar2 != 0) goto LAB_140cd73c2;
    }
LAB_140cd7402:
    iVar1 = *(int *)(param_1 + 0x9d0);
  }
  else {
LAB_140cd73c2:
    lVar3 = FUN_142e0ceb0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_140cd7402;
    lVar3 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_140cd7402;
    iVar1 = *(int *)(lVar2 + 0x828);
    *(int *)(param_1 + 0x9d0) = iVar1;
  }
  bVar8 = iVar1 == 0;
LAB_140cd7415:
  if (!bVar8 && -1 < iVar1) {
    if (*(int *)(param_1 + 0x9c8) == iVar1) {
      plVar4 = *(longlong **)(param_1 + 0x9c0);
      uVar5 = (longlong)*(int *)(param_1 + 0x9c8) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(param_1 + 0x9c8) < plVar4) {
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        do {
          lVar3 = *plVar4;
          plVar4 = plVar4 + 1;
          uVar7 = uVar7 + 1;
          *(undefined1 *)(lVar3 + 0x5d8) = 1;
        } while (uVar7 != uVar5);
        return;
      }
    }
    else if (iVar1 < *(int *)(param_1 + 0x9c8)) {
      *(undefined1 *)(param_2 + 0x5d8) = 1;
    }
  }
  return;
}



// FUNCTION 140cd74f0 FUN_140cd74f0 body=954 status=ok
// SIG undefined FUN_140cd74f0(void)

void FUN_140cd74f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  ulonglong local_res10;
  void *local_res18;
  void *local_res20;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x9a0);
    local_res10 = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar1,&local_res10);
    if ((*(char *)(param_1 + 0x128) == '\x03') &&
       (*(int *)(param_1 + 0x998) < *(int *)(param_1 + 0x9a8))) {
      local_res10 = local_res10 & 0xffffffffffffff00;
      AlgoImpl::
      IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (*plVar1,(longlong)*(int *)(param_1 + 0x9a8),0,&local_res10);
      iVar13 = *(int *)(param_1 + 0x99c);
      iVar15 = 0;
      local_res10 = local_res10 & 0xffffffff00000000;
      if (iVar13 < 1) {
        iVar13 = 0;
      }
      if (iVar13 < *(int *)(param_1 + 0x9a8)) {
        lVar12 = (longlong)iVar13 * 8;
        do {
          bVar6 = FUN_142ffa430(*(undefined8 *)(lVar12 + *plVar1));
          if (bVar6 < 3) break;
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 8;
        } while (iVar13 < *(int *)(param_1 + 0x9a8));
      }
      iVar9 = *(int *)(param_1 + 0x9a8);
      iVar14 = iVar9 - iVar13;
      if (0 < iVar14) {
        iVar8 = *(int *)(param_1 + 0x9b8);
        plVar2 = (longlong *)(param_1 + 0x9b0);
        if (*(int *)(param_1 + 0x9bc) < iVar8 + iVar14) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
          iVar8 = *(int *)(param_1 + 0x9b8);
        }
        iVar11 = *(int *)(param_1 + 0x9b8);
        local_res18 = (void *)(*plVar1 + (longlong)iVar13 * 8);
        local_res20 = (void *)(*plVar2 + (longlong)iVar8 * 8);
        iVar8 = iVar14 + iVar11;
        *(int *)(param_1 + 0x9b8) = iVar8;
        if (*(int *)(param_1 + 0x9bc) < iVar8) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar2 + (longlong)iVar11 * 8),0,(longlong)iVar14 << 3);
        _guard_xfg_dispatch_icall_nop(local_res20,local_res18,(longlong)iVar14 << 3);
        iVar8 = *(int *)(param_1 + 0x9a8);
        iVar11 = (iVar8 - iVar14) - iVar13;
        if (iVar11 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar13 * 8),
                     (void *)(*plVar1 + (longlong)iVar9 * 8),(longlong)iVar11 << 3);
          iVar8 = *(int *)(param_1 + 0x9a8);
        }
        *(int *)(param_1 + 0x9a8) = iVar8 - iVar14;
      }
      iVar13 = *(int *)(param_1 + 0x9a8);
      iVar9 = *(int *)(param_1 + 0x99c);
      if (iVar9 < iVar13) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
          iVar9 = *(int *)(param_1 + 0x99c);
          iVar13 = *(int *)(param_1 + 0x9a8);
        }
        lVar12 = *(longlong *)(DAT_146b33f38 + 0x58);
        if (lVar12 == 0) {
          fVar16 = 0.5;
        }
        else {
          fVar16 = *(float *)(lVar12 + 0x42c);
        }
        if (((int)ROUND((float)(*(int *)(param_1 + 0x998) - iVar9) * (fVar16 + fVar16) - 0.5) >> 1)
            + iVar9 < iVar13) {
          if (lVar12 == 0) {
            fVar16 = 0.5;
          }
          else {
            fVar16 = *(float *)(lVar12 + 0x430);
          }
          plVar2 = (longlong *)(param_1 + 0x9b0);
          iVar14 = (int)ROUND((float)(iVar13 - iVar9) * (fVar16 + fVar16) - 0.5) >> 1;
          local_res18 = (void *)CONCAT44(local_res18._4_4_,iVar14);
          if (*(int *)(param_1 + 0x9bc) < *(int *)(param_1 + 0x9b8) + iVar14) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
            iVar9 = *(int *)(param_1 + 0x99c);
            iVar13 = *(int *)(param_1 + 0x9a8);
            iVar14 = (int)local_res18;
          }
          iVar8 = iVar13 + -1;
          if (iVar9 < iVar8) {
            lVar12 = (longlong)iVar8 * 8;
            do {
              if (iVar14 < iVar15) {
                return;
              }
              lVar3 = *(longlong *)(lVar12 + *plVar1);
              if (lVar3 != 0) {
                cVar7 = FUN_142ffa430(lVar3);
                if (cVar7 == '\x03') {
                  lVar4 = *(longlong *)(lVar3 + 0x568);
                  if (lVar4 == 0) {
                    iVar15 = (int)local_res10;
                    goto LAB_140cd7805;
                  }
                  lVar10 = FUN_141437c50();
                  lVar4 = *(longlong *)(lVar4 + 0x10);
                  if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                      lVar10 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  iVar15 = (int)local_res10;
                  if (!bVar5) goto LAB_140cd7805;
                }
                else {
LAB_140cd7805:
                  local_res10 = CONCAT44(local_res10._4_4_,iVar15 + 1);
                  iVar15 = *(int *)(param_1 + 0x9b8);
                  *(int *)(param_1 + 0x9b8) = iVar15 + 1;
                  if (*(int *)(param_1 + 0x9bc) < iVar15 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar15)
                    ;
                  }
                  *(longlong *)(*plVar2 + (longlong)iVar15 * 8) = lVar3;
                  iVar15 = *(int *)(param_1 + 0x9a8);
                  iVar9 = (iVar15 - iVar8) + -1;
                  if (iVar9 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(*plVar1 + (longlong)iVar8 * 8),
                               (void *)(*plVar1 + (longlong)iVar13 * 8),(longlong)iVar9 << 3);
                    iVar15 = *(int *)(param_1 + 0x9a8);
                  }
                  *(int *)(param_1 + 0x9a8) = iVar15 + -1;
                }
                iVar15 = (int)local_res10;
                iVar14 = (int)local_res18;
              }
              iVar8 = iVar8 + -1;
              iVar13 = iVar13 + -1;
              lVar12 = lVar12 + -8;
            } while (*(int *)(param_1 + 0x99c) < iVar8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140cd78b0 FUN_140cd78b0 body=154 status=ok
// SIG undefined FUN_140cd78b0(void)

void FUN_140cd78b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((param_3 != 0) && (cVar1 = *(char *)(param_3 + 0x38), cVar1 != *(char *)(param_1 + 0x878))) {
    bVar3 = cVar1 != '\x06';
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x630) + 0xfa8))();
    if ((lVar2 != 0) &&
       ((lVar2 = (**(code **)(**(longlong **)(param_1 + 0x630) + 0xfa8))(),
        *(char *)(lVar2 + 0xaf) != '\0' || (*(char *)(lVar2 + 0xb0) != '\0')))) {
      bVar3 = false;
    }
    if ((cVar1 != '\0') && (FUN_140cc2630(param_1,cVar1,bVar3), cVar1 != *(char *)(param_1 + 0x878))
       ) {
      *(char *)(param_1 + 0x878) = cVar1;
    }
  }
  return;
}



// FUNCTION 140cd7950 ReceiveEACMessageFromServer body=40 status=ok
// SIG undefined ReceiveEACMessageFromServer(void)

void UNF_LocalPlayer::ReceiveEACMessageFromServer(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140cc8e30(lVar1,param_2);
  }
  return;
}



// FUNCTION 140cd7980 FUN_140cd7980 body=43 status=ok
// SIG undefined FUN_140cd7980(void)

void FUN_140cd7980(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140cda760(lVar1,param_2,0);
  }
  return;
}



// FUNCTION 140cd79b0 FUN_140cd79b0 body=140 status=ok
// SIG undefined FUN_140cd79b0(void)

void FUN_140cd79b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x9c0);
  iVar5 = *(int *)(param_1 + 0x9c8);
  plVar3 = plVar1;
  if (plVar1 != plVar1 + iVar5) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + iVar5) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
        iVar5 = *(int *)(param_1 + 0x9c8);
      }
      *(int *)(param_1 + 0x9c8) = iVar5 + -1;
    }
  }
  return;
}



// FUNCTION 140cd7a40 FUN_140cd7a40 body=140 status=ok
// SIG undefined FUN_140cd7a40(void)

void FUN_140cd7a40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x9a0);
  iVar5 = *(int *)(param_1 + 0x9a8);
  plVar3 = plVar1;
  if (plVar1 != plVar1 + iVar5) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + iVar5) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
        iVar5 = *(int *)(param_1 + 0x9a8);
      }
      *(int *)(param_1 + 0x9a8) = iVar5 + -1;
    }
  }
  return;
}



// FUNCTION 140cd7ad0 FUN_140cd7ad0 body=198 status=ok
// SIG undefined FUN_140cd7ad0(void)

void FUN_140cd7ad0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140cc7ad0();
    FUN_140cc7e60(param_1);
    if (*(char *)(param_1 + 0x128) == '\x03') {
      plVar3 = (longlong *)FUN_140b823b0(param_1);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x408))(plVar3);
        if ((0 < iVar2) && (*(int *)(param_1 + 0x6d8) != iVar2)) {
          *(int *)(param_1 + 0x6d8) = iVar2;
          TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
                    (param_1 + 0x658,iVar2);
        }
      }
    }
    FUN_140cdbf60(param_1);
    FUN_140cdada0(param_1);
    if (*(int *)(param_1 + 0x9b8) != 0) {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x9b0) + -8 + (longlong)*(int *)(param_1 + 0x9b8) * 8);
      *(int *)(param_1 + 0x9b8) = *(int *)(param_1 + 0x9b8) + -1;
      if (lVar1 != 0) {
        FUN_142227350(lVar1,0,1);
      }
    }
  }
  FUN_140cd85f0(param_1,param_2);
  return;
}



// FUNCTION 140cd7ba0 FUN_140cd7ba0 body=76 status=ok
// SIG undefined FUN_140cd7ba0(void)

void FUN_140cd7ba0(longlong param_1,undefined4 param_2)

{
  FUN_142f12f90();
  FUN_140eaaf80(param_1 + 0x708,param_2);
  FUN_140cd7cf0(param_1,param_2);
  if (*(char *)(param_1 + 0x5e0) != '\0') {
    FUN_140cc7f50(param_1);
  }
  return;
}



// FUNCTION 140cd7bf0 FUN_140cd7bf0 body=202 status=ok
// SIG undefined FUN_140cd7bf0(void)

bool FUN_140cd7bf0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((char)param_1[8] != '\0') {
    cVar2 = (**(code **)(*DAT_146ab6358 + 0x3f8))();
    if (cVar2 == '\0') {
      lVar1 = param_1[6];
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x48) == '\0') {
          (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x28))(lVar1 + 0x20);
        }
        if (DAT_146af29d0 != 0) {
          FUN_1420110e0(param_2,lVar1);
          return false;
        }
        if (DAT_14686caa0 != 0) {
          (**(code **)(*param_1 + 0x58))(param_1);
          return false;
        }
      }
      return true;
    }
  }
  cVar2 = (**(code **)(*DAT_146ab6358 + 0x3f8))();
  return cVar2 == '\0';
}



// FUNCTION 140cd7cf0 FUN_140cd7cf0 body=2302 status=ok
// SIG undefined FUN_140cd7cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cd7cf0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  uint in_stack_ffffffffffffff08;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_14686d9a8) &&
     (_Init_thread_header(&DAT_14686d9a8), DAT_14686d9a8 == -1)) {
    FName::FName(&DAT_14686d9a0,"LowHealthHUD",1);
    _Init_thread_footer(&DAT_14686d9a8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_14686d9b8) &&
     (_Init_thread_header(&DAT_14686d9b8), DAT_14686d9b8 == -1)) {
    FName::FName(&DAT_14686d9b0,"CreepingDeathHUD",1);
    _Init_thread_footer(&DAT_14686d9b8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_14686d9c8) &&
     (_Init_thread_header(&DAT_14686d9c8), DAT_14686d9c8 == -1)) {
    FName::FName(&DAT_14686d9c0,"PercentageHealth",1);
    _Init_thread_footer(&DAT_14686d9c8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_14686d9d8) &&
     (_Init_thread_header(&DAT_14686d9d8), DAT_14686d9d8 == -1)) {
    FName::FName(&DAT_14686d9d0,"DeathTimer",1);
    _Init_thread_footer(&DAT_14686d9d8);
  }
  if (*(longlong *)(param_1 + 0x630) == 0) {
    return;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x630) + 0x990);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = DAT_146b33f38;
  lVar11 = DAT_146b33f38 + 0x30;
  lVar6 = FWeakObjectPtr::Get(lVar11);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x38)) && (*(longlong *)(lVar7 + 0x40) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar11,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x38) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar11);
      if (lVar6 != 0) goto LAB_140cd7e45;
    }
LAB_140cd7eb1:
    lVar6 = 0;
  }
  else {
LAB_140cd7e45:
    lVar7 = FUN_142e0ceb0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140cd7eb1;
    lVar7 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140cd7eb1;
  }
  fVar14 = 0.0;
  if (((((*(byte *)(param_1 + 0x460) & 2) == 0) || (lVar9 == 0)) || (lVar6 == 0)) ||
     ((lVar9 != (*(longlong **)(param_1 + 0x630))[0x109] ||
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x630) + 4000))(), cVar5 != '\0')))) {
    if (*(char *)(param_1 + 0x901) != '\0') {
      in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffff00;
      FUN_142dac4d0(*(undefined8 *)(param_1 + 0x630),0,DAT_14686d9a0,0,in_stack_ffffffffffffff08);
      *(undefined1 *)(param_1 + 0x901) = 0;
    }
    if (*(char *)(param_1 + 0x902) != '\0') {
      FUN_142dac4d0(*(undefined8 *)(param_1 + 0x630),0,DAT_14686d9b0,0,
                    in_stack_ffffffffffffff08 & 0xffffff00);
      *(undefined1 *)(param_1 + 0x902) = 0;
    }
    *(undefined4 *)(param_1 + 0x904) = 0;
    fVar15 = 0.0;
    goto LAB_140cd840b;
  }
  fVar15 = 0.0;
  fVar1 = *(float *)(param_1 + 0x908);
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x630) + 0x990) + 0x10e0);
  fVar2 = *(float *)(param_1 + 0x904);
  if (lVar7 == 0) {
LAB_140cd7ffe:
    if (*(char *)(param_1 + 0x903) != '\0') {
      fVar15 = *(float *)(lVar6 + 0x700);
      lVar7 = *(longlong *)(lVar6 + 0x708);
LAB_140cd8016:
      if (lVar7 != 0) {
        fVar12 = (float)UCurveFloat::GetFloatValue(lVar7,*(undefined4 *)(param_1 + 0x908));
        fVar15 = fVar15 * fVar12;
      }
      fVar15 = (float)FMath::FInterpConstantTo(*(undefined4 *)(param_1 + 0x908),0,param_2,fVar15);
    }
LAB_140cd8046:
    if ((*(int *)(lVar3 + 0x38) < DAT_146866ca8) &&
       (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)) {
      DAT_146866c90 = 0xff;
      _DAT_146866c98 = 0;
      DAT_146866ca0._0_4_ = 0;
      _Init_thread_footer(&DAT_146866ca8);
    }
    lVar7 = *(longlong *)(lVar9 + 0x910);
    if (lVar7 == 0) {
      puVar10 = &DAT_146866c90;
    }
    else {
      if ((*(int *)(lVar3 + 0x38) < DAT_146866c88) &&
         (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
        DAT_146866c70 = 0xff;
        _DAT_146866c78 = 0;
        DAT_146866c80._0_4_ = 0;
        _Init_thread_footer(&DAT_146866c88);
      }
      if (*(int *)(lVar7 + 0x680) < 1) {
        puVar10 = &DAT_146866c70;
      }
      else {
        puVar10 = (undefined *)(*(longlong *)(lVar7 + 0x678) + 0x60);
      }
    }
    cVar5 = FUN_142d52a00(puVar10);
    if ((cVar5 != '\0') && (*(longlong *)(lVar6 + 0x6e0) != 0)) {
      if (*(longlong *)(lVar9 + 0x910) != 0) {
        FUN_142d1bf20(*(longlong *)(lVar9 + 0x910),lVar9 + 0x12d0);
      }
      cVar5 = FUN_142d52a00(lVar9 + 0x12d0);
      if (cVar5 == '\0') {
        fVar12 = 1.0;
      }
      else {
        uVar8 = FUN_142d52a20(lVar9 + 0x12d0);
        uVar8 = FArchive::operator<<(uVar8);
        fVar12 = (float)FUN_142d5fea0(uVar8);
        fVar12 = 1.0 - fVar12;
      }
      uVar8 = FUN_142d52a20(puVar10);
      uVar8 = FArchive::operator<<(uVar8);
      uVar13 = FUN_142d5fea0(uVar8);
      fVar14 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(lVar6 + 0x6e0),uVar13);
      fVar14 = fVar14 * fVar12;
LAB_140cd8135:
      fVar14 = (float)FMath::FInterpConstantTo
                                (*(undefined4 *)(param_1 + 0x904),fVar14,param_2,
                                 *(undefined4 *)(lVar6 + 0x6d8));
    }
  }
  else {
    cVar5 = FUN_140adac80(lVar7);
    if ((cVar5 == '\0') || (cVar5 = FUN_140adaa20(lVar7), cVar5 != '\0')) {
      cVar5 = FUN_140adaa20(lVar7);
      if (cVar5 == '\0') goto LAB_140cd7ffe;
      fVar14 = 0.0;
      goto LAB_140cd8135;
    }
    cVar5 = FUN_140ada8e0(lVar7);
    if (cVar5 != '\0') {
      fVar15 = *(float *)(lVar6 + 0x710);
      lVar7 = *(longlong *)(lVar6 + 0x718);
      goto LAB_140cd8016;
    }
    uVar13 = FUN_140ad4b30(lVar7);
    lVar7 = *(longlong *)(lVar6 + 0x6f0);
    if (lVar7 != 0) {
      fVar14 = (float)UCurveFloat::GetFloatValue(lVar7,uVar13);
    }
    if (*(longlong *)(lVar6 + 0x6f8) != 0) {
      fVar15 = (float)UCurveFloat::GetFloatValue(*(longlong *)(lVar6 + 0x6f8),uVar13);
    }
    if (lVar7 == 0) goto LAB_140cd8046;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x630) + 0x978);
  if (0.0001 <= fVar14) {
    if ((lVar3 != 0) && (lVar9 = *(longlong *)(lVar6 + 0x6e8), lVar9 != 0)) {
      if (*(char *)(param_1 + 0x901) == '\0') {
        FUN_142d9e0d0(lVar3,lVar9,0,0x4110000041800000,0x42c80000,4,1,1,DAT_14686d9a0,0,0,1,0);
        *(undefined1 *)(param_1 + 0x901) = 1;
        lVar9 = *(longlong *)(lVar6 + 0x6e8);
      }
      else if (ABS(fVar2 - fVar14) <= 1e-08) goto LAB_140cd8281;
      FUN_142e72560(lVar3,lVar9,DAT_14686d9a0,DAT_14686d9c0,1.0 - fVar14);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x903) = 0;
    if (*(char *)(param_1 + 0x901) != '\0') {
      if (lVar3 != 0) {
        FUN_142e724b0(lVar3,0,DAT_14686d9a0,0);
      }
      *(undefined1 *)(param_1 + 0x901) = 0;
    }
  }
LAB_140cd8281:
  *(float *)(param_1 + 0x904) = fVar14;
  if (0.0001 <= fVar15) {
    if ((lVar3 != 0) && (lVar9 = *(longlong *)(lVar6 + 0x720), lVar9 != 0)) {
      if (*(char *)(param_1 + 0x902) == '\0') {
        FUN_142d9e0d0(lVar3,lVar9,0,0x4110000041800000,0x42c7fae1,4,1,1,DAT_14686d9b0,0,0,1,0);
        *(undefined1 *)(param_1 + 0x902) = 1;
        lVar9 = *(longlong *)(lVar6 + 0x720);
      }
      else if (ABS(fVar1 - fVar15) <= 1e-08) goto LAB_140cd840b;
      FUN_142e72560(lVar3,lVar9,DAT_14686d9b0,DAT_14686d9d0,fVar15);
    }
  }
  else if (*(char *)(param_1 + 0x902) != '\0') {
    if (lVar3 != 0) {
      FUN_142e724b0(lVar3,0,DAT_14686d9b0,0);
    }
    *(undefined1 *)(param_1 + 0x902) = 0;
  }
LAB_140cd840b:
  *(float *)(param_1 + 0x908) = fVar15;
  FUN_140cdbb60(param_1,fVar14);
  return;
}



// FUNCTION 140cd85f0 FUN_140cd85f0 body=478 status=ok
// SIG undefined FUN_140cd85f0(void)

void FUN_140cd85f0(longlong *param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_28;
  int local_20;
  
  param_2 = *(float *)(param_1 + 0xdc) - param_2;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0xdc) = param_2;
  if ((((char)param_1[0x25] == '\x03') && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0))
     && (*(float *)(param_1 + 0xdc) == 0.0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      UWorld::GetPlayerControllerIterator(lVar2,&local_28);
      while( true ) {
        if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar2 = FWeakObjectPtr::Get();
        if (lVar2 != 0) {
          lVar3 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((bVar1) && (*(longlong *)(lVar2 + 0xc90) != 0)) &&
             (lVar2 = FUN_140e4c7f0(), lVar2 != 0)) {
            return;
          }
        }
        local_20 = local_20 + 1;
      }
    }
    *(int *)((longlong)param_1 + 0x6e4) = *(int *)((longlong)param_1 + 0x6e4) + 1;
    *(int *)(param_1 + 0xdc) = (int)param_1[0xd9];
    if ((char)param_1[0x25] == '\x03') {
      *(int *)((longlong)param_1 + 0x6dc) = (int)param_1[0xd9];
    }
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar4,&local_28);
    while( true ) {
      if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar2 = FWeakObjectPtr::Get();
      if (lVar2 != 0) {
        lVar3 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar2 + 0x848) != 0)) {
          FUN_14145e3d0();
        }
      }
      local_20 = local_20 + 1;
    }
  }
  return;
}



// FUNCTION 140cd87d0 FUN_140cd87d0 body=505 status=ok
// SIG undefined FUN_140cd87d0(void)

void FUN_140cd87d0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  LARGE_INTEGER local_res8 [4];
  
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined1 *)(param_1 + 0x11) = param_2;
  *(undefined1 *)(param_1 + 0x14) = param_3;
  QueryPerformanceCounter(local_res8);
  lVar3 = *(longlong *)(param_1 + 0x50);
  dVar6 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(double *)(param_1 + 0x18) = dVar6 + 16777216.0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x458), lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x388) != 0)) {
      FUN_1423957d0(lVar3,1);
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (lVar3 != 0) {
      lVar2 = FUN_14141f270();
      lVar5 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1411fb150(lVar3 + 0x7a0,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
        return;
      }
    }
  }
  else if ((((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x458), lVar3 != 0)) &&
           (*(char *)(lVar3 + 0x32b) != '\0')) && (*(longlong *)(lVar3 + 0x388) == 0)) {
    lVar3 = FUN_14233fea0();
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_14233fea0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x458));
      (**(code **)(*plVar4 + 0x100))(plVar4,0,0,1);
    }
    QueryPerformanceCounter(local_res8);
    *(double *)(param_1 + 0x20) = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    FUN_142385b60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x458));
    FUN_141ee24f0(0);
    FUN_142385b60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x458));
    FUN_141ee24f0(0);
    FUN_142385b60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x458));
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (lVar3 != 0) {
      lVar5 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1411fb150(lVar3 + 0x7a0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cd89d0 FUN_140cd89d0 body=155 status=ok
// SIG undefined FUN_140cd89d0(void)

void FUN_140cd89d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x6d0) != 0) {
    iVar3 = *(int *)(param_1 + 0x6d0);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    for (plVar4 = plVar1; plVar4 != plVar1 + iVar3; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (cVar2 = FUN_142ebe180(), cVar2 != '\0')) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
        if (iVar3 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x6d0) <= iVar3) {
          return;
        }
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar3 * 8) + 0x560))
                  ();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cd8a70 FUN_140cd8a70 body=149 status=ok
// SIG undefined FUN_140cd8a70(void)

void FUN_140cd8a70(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444da0b0;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
  }
  local_58[0] = &LAB_140c6b550;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140cd8b10 FUN_140cd8b10 body=500 status=ok
// SIG undefined FUN_140cd8b10(void)

void FUN_140cd8b10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 != 0) {
    lVar6 = FUN_14145f370();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      puVar13 = *(undefined8 **)(param_1 + 0x178);
      puVar3 = puVar13 + (longlong)*(int *)(param_1 + 0x180) * 3;
      if (puVar13 != puVar3) {
        plVar9 = (longlong *)(param_1 + 400);
        do {
          iVar5 = *(int *)(puVar13 + 1);
          if (iVar5 != 0) {
            iVar12 = iVar5 + -1;
            if ((iVar12 < 0) || (*(int *)(param_1 + 0x198) <= iVar12)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              iVar11 = 0;
              plVar10 = (longlong *)(*plVar9 + ((longlong)iVar5 + -1) * 0x18);
              plVar7 = (longlong *)*puVar13;
              lVar8 = (longlong)iVar5 + -1;
              if (*plVar10 == *plVar7) {
                do {
                  if (iVar11 == iVar12) {
                    FUN_14141c4b0(param_1,*(undefined1 *)(puVar13 + 2));
                    iVar5 = *(int *)(param_1 + 0x19c);
                    iVar12 = *(int *)(param_1 + 0x198);
                    if (-1 < iVar5) {
                      if (iVar12 != 0) {
                        plVar9 = (longlong *)(*plVar9 + 0x10);
                        do {
                          plVar10 = (longlong *)*plVar9;
                          if (plVar10 != (longlong *)0x0) {
                            LOCK();
                            plVar7 = plVar10 + 1;
                            lVar8 = *plVar7;
                            *(int *)plVar7 = (int)*plVar7 + -1;
                            UNLOCK();
                            if ((int)lVar8 == 1) {
                              (**(code **)*plVar10)(plVar10);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar10 + 0xc);
                              iVar5 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar5 == 1) {
                                (**(code **)(*plVar10 + 8))(plVar10,1);
                              }
                            }
                          }
                          plVar9 = plVar9 + 3;
                          iVar12 = iVar12 + -1;
                        } while (iVar12 != 0);
                      }
                      *(undefined4 *)(param_1 + 0x198) = 0;
                      return;
                    }
                    if (iVar12 != 0) {
                      plVar10 = (longlong *)(*plVar9 + 0x10);
                      do {
                        plVar7 = (longlong *)*plVar10;
                        if (plVar7 != (longlong *)0x0) {
                          LOCK();
                          plVar2 = plVar7 + 1;
                          lVar8 = *plVar2;
                          *(int *)plVar2 = (int)*plVar2 + -1;
                          UNLOCK();
                          if ((int)lVar8 == 1) {
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
                        plVar10 = plVar10 + 3;
                        iVar12 = iVar12 + -1;
                      } while (iVar12 != 0);
                      iVar5 = *(int *)(param_1 + 0x19c);
                    }
                    *(undefined4 *)(param_1 + 0x198) = 0;
                    if (iVar5 == 0) {
                      return;
                    }
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeTo(plVar9,0);
                    return;
                  }
                  plVar10 = plVar10 + -3;
                  iVar11 = iVar11 + 1;
                  plVar7 = plVar7 + 3;
                } while ((0 < lVar8) && (lVar8 = lVar8 + -1, *plVar10 == *plVar7));
              }
            }
          }
          puVar13 = puVar13 + 3;
          if (puVar13 == puVar3) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 140cd8d10 FUN_140cd8d10 body=212 status=ok
// SIG undefined FUN_140cd8d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_140cd8d10(longlong param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x6c1) == '\0') && (*(char *)(param_1 + 0x6c2) != '\0')) {
    iVar1 = (**(code **)(*param_3 + 0x408))(param_3);
    iVar3 = *(int *)(param_1 + 0x6d8);
    if (iVar1 != iVar3) {
      iVar1 = (**(code **)(*param_3 + 0x408))(param_3);
      iVar2 = (**(code **)(*param_4 + 0x408))(param_4);
      iVar1 = (iVar2 - iVar3) + iVar1;
      if (iVar1 < 1) {
        iVar3 = 1;
      }
      else {
        iVar3 = 100;
        if (iVar1 < 100) {
          iVar3 = iVar1;
        }
      }
      if (iVar3 != iVar2) {
        local_38 = iVar3;
      }
      *(undefined1 *)(param_2 + 1) = 0;
      if (iVar3 == iVar2) {
        return param_2;
      }
      *param_2 = local_38;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 140cd8df0 FUN_140cd8df0 body=94 status=ok
// SIG undefined FUN_140cd8df0(void)

int * FUN_140cd8df0(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x6c1) == '\0') && (*(char *)(param_1 + 0x6c2) != '\0')) {
    iVar1 = (**(code **)(*param_3 + 0x408))(param_3);
    if (iVar1 != *(int *)(param_1 + 0x6d8)) {
      *param_2 = *(int *)(param_1 + 0x6d8);
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 140cd8e50 FUN_140cd8e50 body=376 status=ok
// SIG undefined FUN_140cd8e50(void)

void FUN_140cd8e50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_28 = 0;
      local_20 = 0;
      local_18 = -1;
      uVar7 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      FUN_1417a5560(uVar7,&local_28,1,0x10,0);
      uVar9 = local_20 & 0xffffffff;
      do {
        local_18 = local_18 + 1;
        lVar6 = local_28;
        if ((int)local_20 <= local_18) break;
      } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
LAB_140cd8f30:
      if ((local_18 < 0) || ((int)uVar9 <= local_18)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar3 = *(longlong *)(lVar6 + (longlong)local_18 * 8);
        plVar8 = *(longlong **)(lVar5 + 0x118);
        plVar1 = plVar8 + *(int *)(lVar5 + 0x120);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar3) goto LAB_140cd8f88;
        }
        thunk_FUN_14145e850(lVar2,lVar3);
        uVar9 = local_20 & 0xffffffff;
        lVar6 = local_28;
LAB_140cd8f88:
        do {
          local_18 = local_18 + 1;
          if ((int)uVar9 <= local_18) break;
        } while (*(longlong *)(lVar6 + (longlong)local_18 * 8) == 0);
        goto LAB_140cd8f30;
      }
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  return;
}



// FUNCTION 140cd8fd0 FUN_140cd8fd0 body=4979 status=ok
// SIG undefined FUN_140cd8fd0(void)

void FUN_140cd8fd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff38;
  uint uVar9;
  ulonglong uVar8;
  longlong local_a8 [7];
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 *local_38;
  longlong *local_30;
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  if (param_2 == 0) {
    return;
  }
  local_res18 = param_3;
  local_res10 = UWorld::GetFirstPlayerController(param_2);
  if (local_res10 == 0) {
    return;
  }
  lVar3 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(local_res10 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_res10 + 0x10) + 0x88) +
       (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_38 = &local_res18;
  local_30 = &local_res10;
  lVar7 = 0;
  local_a8[4] = 0;
  local_a8[5] = 0x44;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],L"/Game/GameData/FastTravel/FTS_OutskirtsDropPod.FTS_OutskirtsDropPod",0x88
            );
  FName::FName(&local_70,L"FTS_OutskirtsDropPod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x4d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Plot/Mission_Ep05_OvercomeHQBlockade.OBJ_UseDropPod_Objective",0x9a);
  FName::FName(local_a8 + 6,L"OBJ_UseDropPod_Objective",1);
  local_a8[0] = 0;
  local_a8[1] = 0x56;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/Missions/Plot/Mission_Ep05_OvercomeHQBlockade.Mission_Ep05_OvercomeHQBlockade_C"
             ,0xac);
  FName::FName(&local_res20,L"Mission_Ep05_OvercomeHQBlockade_C",1);
  uVar4 = FUN_14171bfe0();
  uVar8 = (ulonglong)uVar9 << 0x20;
  lVar3 = StaticFindObjectFastExplicit(uVar4,local_res20,local_a8,0,uVar8);
  if (lVar3 == 0) {
LAB_140cd9188:
    lVar3 = lVar7;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd9188;
  }
  uVar4 = UForceFeedbackAttenuation::StaticClass();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar4,local_a8[6],local_a8 + 2,0,uVar8);
  if (lVar5 == 0) {
LAB_140cd91e5:
    lVar5 = lVar7;
  }
  else {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd91e5;
  }
  local_60 = 0;
  local_68 = &DAT_1441d2800;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  FUN_142f604c0(&local_68,lVar3,lVar5);
  iVar2 = FUN_142f5de00(local_res18,&local_68,0,local_res18);
  if (iVar2 == 3) {
    uVar4 = FUN_142f477c0();
    uVar8 = uVar8 & 0xffffffff00000000;
    lVar3 = StaticFindObjectFastExplicit(uVar4,local_70,local_a8 + 4,0,uVar8);
    if (lVar3 != 0) {
      lVar5 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(local_res18,local_res10,lVar3,0);
      }
    }
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x44;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],L"/Game/GameData/FastTravel/FTS_MonasteryDropPod.FTS_MonasteryDropPod",0x88
            );
  FName::FName(local_a8 + 6,L"FTS_MonasteryDropPod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x43;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],L"/Game/Missions/Plot/Mission_Ep06_MeetMaya.OBJ_UseDropPod_Objective",0x86)
  ;
  FName::FName(&local_70,L"OBJ_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x42;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],L"/Game/Missions/Plot/Mission_Ep06_MeetMaya.Mission_Ep06_MeetMaya_C",0x84);
  FName::FName(&local_res20,L"Mission_Ep06_MeetMaya_C",1);
  uVar4 = FUN_14171bfe0();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar3 = StaticFindObjectFastExplicit(uVar4,local_res20,local_a8 + 4,0,uVar8);
  if (lVar3 == 0) {
LAB_140cd93ea:
    lVar3 = lVar7;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd93ea;
  }
  uVar4 = UForceFeedbackAttenuation::StaticClass();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar4,local_70,local_a8 + 2,0,uVar8);
  if (lVar5 == 0) {
LAB_140cd9447:
    lVar5 = lVar7;
  }
  else {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd9447;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68 = &DAT_1441d2800;
  local_40 = 0;
  FUN_142f604c0(&local_68,lVar3,lVar5);
  iVar2 = FUN_142f5de00(local_res18,&local_68,0,local_res18);
  if (iVar2 == 3) {
    uVar4 = FUN_142f477c0();
    uVar8 = uVar8 & 0xffffffff00000000;
    lVar3 = StaticFindObjectFastExplicit(uVar4,local_a8[6],local_a8,0,uVar8);
    if (lVar3 != 0) {
      lVar5 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(local_res18,local_res10,lVar3,0);
      }
    }
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x42;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],L"/Game/GameData/FastTravel/FTS_WetlandsDropPod.FTS_WetlandsDropPod",0x84);
  FName::FName(local_a8 + 6,L"FTS_WetlandsDropPod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x46;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],L"/Game/Missions/Plot/Mission_Ep11_PrisonBreak.Obj_UseDropPod_Objective",
             0x8c);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x48;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],L"/Game/Missions/Plot/Mission_Ep11_PrisonBreak.Mission_Ep11_PrisonBreak_C",
             0x90);
  FName::FName(&local_res20,L"Mission_Ep11_PrisonBreak_C",1);
  uVar4 = FUN_14171bfe0();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar3 = StaticFindObjectFastExplicit(uVar4,local_res20,local_a8 + 4,0,uVar8);
  if (lVar3 == 0) {
LAB_140cd9645:
    lVar3 = lVar7;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd9645;
  }
  uVar4 = UForceFeedbackAttenuation::StaticClass();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar4,local_70,local_a8 + 2,0,uVar8);
  if (lVar5 == 0) {
LAB_140cd96a2:
    lVar5 = lVar7;
  }
  else {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd96a2;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68 = &DAT_1441d2800;
  local_40 = 0;
  FUN_142f604c0(&local_68,lVar3,lVar5);
  iVar2 = FUN_142f5de00(local_res18,&local_68,0,local_res18);
  if (iVar2 == 3) {
    uVar4 = FUN_142f477c0();
    uVar8 = uVar8 & 0xffffffff00000000;
    lVar3 = StaticFindObjectFastExplicit(uVar4,local_a8[6],local_a8,0,uVar8);
    if (lVar3 != 0) {
      lVar5 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(local_res18,local_res10,lVar3,0);
      }
    }
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x42;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],L"/Game/GameData/FastTravel/FTS_DesolateDropPod.FTS_DesolateDropPod",0x84);
  FName::FName(local_a8 + 6,L"FTS_DesolateDropPod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x4b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Plot/Mission_Ep20_FirstVaultHunter.OBJ_UseDropPod_Objective",0x96);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x52;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Plot/Mission_Ep20_FirstVaultHunter.Mission_Ep20_FirstVaultHunter_C",
             0xa4);
  FName::FName(&local_res20,L"Mission_Ep20_FirstVaultHunter_C",1);
  uVar4 = FUN_14171bfe0();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar3 = StaticFindObjectFastExplicit(uVar4,local_res20,local_a8 + 4,0,uVar8);
  if (lVar3 == 0) {
LAB_140cd98a0:
    lVar3 = lVar7;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd98a0;
  }
  uVar4 = UForceFeedbackAttenuation::StaticClass();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar4,local_70,local_a8 + 2,0,uVar8);
  if (lVar5 == 0) {
LAB_140cd98fd:
    lVar5 = lVar7;
  }
  else {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd98fd;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68 = &DAT_1441d2800;
  local_40 = 0;
  FUN_142f604c0(&local_68,lVar3,lVar5);
  iVar2 = FUN_142f5de00(local_res18,&local_68,0,local_res18);
  if (iVar2 == 3) {
    uVar4 = FUN_142f477c0();
    uVar8 = uVar8 & 0xffffffff00000000;
    lVar3 = StaticFindObjectFastExplicit(uVar4,local_a8[6],local_a8,0,uVar8);
    if (lVar3 != 0) {
      lVar5 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(local_res18,local_res10,lVar3,0);
      }
    }
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x4c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/GameData/FastTravel/FTS_TechSlaughterDropPod.FTS_TechSlaughterDropPod",0x98);
  FName::FName(local_a8 + 6,L"FTS_TechSlaughterDropPod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x65;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Side/Slaughters/TechSlaughter/Mission_TechSlaughterDiscovery.OBJ_UseDropPod_Objective"
             ,0xca);
  FName::FName(&local_70,L"OBJ_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x6d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Side/Slaughters/TechSlaughter/Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C"
             ,0xda);
  FName::FName(&local_res20,L"Mission_TechSlaughterDiscovery_C",1);
  uVar4 = FUN_14171bfe0();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar3 = StaticFindObjectFastExplicit(uVar4,local_res20,local_a8 + 4,0,uVar8);
  if (lVar3 == 0) {
LAB_140cd9afb:
    lVar3 = lVar7;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd9afb;
  }
  uVar4 = UForceFeedbackAttenuation::StaticClass();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar4,local_70,local_a8 + 2,0,uVar8);
  if (lVar5 == 0) {
LAB_140cd9b58:
    lVar5 = lVar7;
  }
  else {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd9b58;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68 = &DAT_1441d2800;
  local_40 = 0;
  FUN_142f604c0(&local_68,lVar3,lVar5);
  iVar2 = FUN_142f5de00(local_res18,&local_68,0,local_res18);
  if (iVar2 == 3) {
    uVar4 = FUN_142f477c0();
    uVar8 = uVar8 & 0xffffffff00000000;
    lVar3 = StaticFindObjectFastExplicit(uVar4,local_a8[6],local_a8,0,uVar8);
    if (lVar3 != 0) {
      lVar5 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(local_res18,local_res10,lVar3,0);
      }
    }
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x54;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/GameData/FastTravel/FTS_ProvingGrounds01_Droppod.FTS_ProvingGrounds01_Droppod",
             0xa8);
  FName::FName(local_a8 + 6,L"FTS_ProvingGrounds01_Droppod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x76;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds1/Mission_ProvingGroundsDiscovery_Mission01.Obj_UseDropPod_Objective"
             ,0xec);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x89;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds1/Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C"
             ,0x112);
  FName::FName(&local_res20,L"Mission_ProvingGroundsDiscovery_Mission01_C",1);
  uVar4 = FUN_14171bfe0();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar3 = StaticFindObjectFastExplicit(uVar4,local_res20,local_a8 + 4,0,uVar8);
  if (lVar3 == 0) {
LAB_140cd9d56:
    lVar3 = lVar7;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cd9d56;
  }
  uVar4 = UForceFeedbackAttenuation::StaticClass();
  uVar8 = uVar8 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar4,local_70,local_a8 + 2,0,uVar8);
  if (lVar5 != 0) {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cd9db6;
  }
  lVar5 = lVar7;
LAB_140cd9db6:
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68 = &DAT_1441d2800;
  local_40 = 0;
  FUN_142f604c0(&local_68,lVar3,lVar5);
  iVar2 = FUN_142f5de00(local_res18,&local_68,0,local_res18);
  if (iVar2 == 3) {
    uVar4 = FUN_142f477c0();
    lVar3 = StaticFindObjectFastExplicit(uVar4,local_a8[6],local_a8,0,uVar8 & 0xffffffff00000000);
    if (lVar3 != 0) {
      lVar7 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(local_res18,local_res10,lVar3,0);
      }
    }
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x54;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/GameData/FastTravel/FTS_ProvingGrounds04_Droppod.FTS_ProvingGrounds04_Droppod",
             0xa8);
  FName::FName(&local_res20,L"FTS_ProvingGrounds04_Droppod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x76;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds4/Mission_ProvingGroundsDiscovery_Mission04.Obj_UseDropPod_Objective"
             ,0xec);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x89;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds4/Mission_ProvingGroundsDiscovery_Mission04.Mission_ProvingGroundsDiscovery_Mission04_C"
             ,0x112);
  FName::FName(local_a8 + 6,L"Mission_ProvingGroundsDiscovery_Mission04_C",1);
  FUN_140c65bb0(&local_38,local_a8 + 6,local_a8 + 4,&local_70,local_a8 + 2,&local_res20,local_a8);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x54;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/GameData/FastTravel/FTS_ProvingGrounds05_Droppod.FTS_ProvingGrounds05_Droppod",
             0xa8);
  FName::FName(&local_res20,L"FTS_ProvingGrounds05_Droppod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x76;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds5/Mission_ProvingGroundsDiscovery_Mission05.Obj_UseDropPod_Objective"
             ,0xec);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x89;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds5/Mission_ProvingGroundsDiscovery_Mission05.Mission_ProvingGroundsDiscovery_Mission05_C"
             ,0x112);
  FName::FName(local_a8 + 6,L"Mission_ProvingGroundsDiscovery_Mission05_C",1);
  FUN_140c65bb0(&local_38,local_a8 + 6,local_a8 + 4,&local_70,local_a8 + 2,&local_res20,local_a8);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x54;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/GameData/FastTravel/FTS_ProvingGrounds06_Droppod.FTS_ProvingGrounds06_Droppod",
             0xa8);
  FName::FName(&local_res20,L"FTS_ProvingGrounds06_Droppod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x76;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds6/Mission_ProvingGroundsDiscovery_Mission06.Obj_UseDropPod_Objective"
             ,0xec);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x89;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds6/Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C"
             ,0x112);
  FName::FName(local_a8 + 6,L"Mission_ProvingGroundsDiscovery_Mission06_C",1);
  FUN_140c65bb0(&local_38,local_a8 + 6,local_a8 + 4,&local_70,local_a8 + 2,&local_res20,local_a8);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[0] = 0;
  local_a8[1] = 0x54;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/GameData/FastTravel/FTS_ProvingGrounds08_Droppod.FTS_ProvingGrounds08_Droppod",
             0xa8);
  FName::FName(&local_res20,L"FTS_ProvingGrounds08_Droppod",1);
  local_a8[2] = 0;
  local_a8[3] = 0x76;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy
            (local_a8[2],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds8/Mission_ProvingGroundsDiscovery_Mission08.Obj_UseDropPod_Objective"
             ,0xec);
  FName::FName(&local_70,L"Obj_UseDropPod_Objective",1);
  local_a8[4] = 0;
  local_a8[5] = 0x89;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy
            (local_a8[4],
             L"/Game/Missions/Side/ProvingGrounds/ProvingGrounds8/Mission_ProvingGroundsDiscovery_Mission08.Mission_ProvingGroundsDiscovery_Mission08_C"
             ,0x112);
  FName::FName(local_a8 + 6,L"Mission_ProvingGroundsDiscovery_Mission08_C",1);
  FUN_140c65bb0(&local_38,local_a8 + 6,local_a8 + 4,&local_70,local_a8 + 2,&local_res20,local_a8);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140cda350 FUN_140cda350 body=300 status=ok
// SIG undefined FUN_140cda350(void)

void FUN_140cda350(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = 0;
      local_20 = 0;
      local_18 = -1;
      uVar4 = FUN_1414eba50();
      FUN_1417a5560(uVar4,&local_28,1,0x10,0);
      uVar5 = local_20 & 0xffffffff;
      do {
        local_18 = local_18 + 1;
        if ((int)local_20 <= local_18) break;
      } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
LAB_140cda410:
      if ((local_18 < 0) || ((int)uVar5 <= local_18)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        thunk_FUN_14145e8d0(lVar1,*(undefined8 *)(local_28 + (longlong)local_18 * 8));
        uVar5 = local_20 & 0xffffffff;
        do {
          local_18 = local_18 + 1;
          if ((int)local_20 <= local_18) break;
        } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
        goto LAB_140cda410;
      }
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 140cda480 FUN_140cda480 body=300 status=ok
// SIG undefined FUN_140cda480(void)

void FUN_140cda480(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = 0;
      local_20 = 0;
      local_18 = -1;
      uVar4 = FUN_1414ecd30();
      FUN_1417a5560(uVar4,&local_28,1,0x10,0);
      uVar5 = local_20 & 0xffffffff;
      do {
        local_18 = local_18 + 1;
        if ((int)local_20 <= local_18) break;
      } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
LAB_140cda540:
      if ((local_18 < 0) || ((int)uVar5 <= local_18)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        thunk_FUN_14145e8d0(lVar1,*(undefined8 *)(local_28 + (longlong)local_18 * 8));
        uVar5 = local_20 & 0xffffffff;
        do {
          local_18 = local_18 + 1;
          if ((int)local_20 <= local_18) break;
        } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
        goto LAB_140cda540;
      }
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 140cda5b0 Unregister body=166 status=ok
// SIG undefined Unregister(void)

void FTickableObjectRenderThread::Unregister(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    plVar5 = &DAT_146ac3b30;
    if (*(char *)(param_1 + 9) != '\0') {
      plVar5 = &DAT_146ac3b40;
    }
    plVar1 = (longlong *)*plVar5;
    iVar6 = (int)plVar5[1];
    for (plVar3 = plVar1; plVar3 != plVar1 + iVar6; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) {
        iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
        goto LAB_140cda604;
      }
    }
    iVar2 = -1;
LAB_140cda604:
    iVar4 = (iVar6 - iVar2) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar2 + 1),(longlong)iVar4 << 3);
      iVar6 = (int)plVar5[1];
    }
    *(int *)(plVar5 + 1) = iVar6 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar5);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 140cda660 FUN_140cda660 body=241 status=ok
// SIG undefined FUN_140cda660(void)

void FUN_140cda660(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x648);
  if (*(int *)(param_1 + 0x648) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x640) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x640) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x640) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x640) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x648) = iVar6;
  }
  return;
}



// FUNCTION 140cda760 FUN_140cda760 body=518 status=ok
// SIG undefined FUN_140cda760(void)

void FUN_140cda760(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong local_28;
  int local_20;
  
  iVar8 = 0;
  if ((((param_2 != 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) &&
      (iVar3 = FUN_142235230(param_1), iVar3 != 3)) && (0 < (int)param_1[0x141])) {
    plVar1 = param_1 + 0x140;
    puVar9 = (undefined8 *)*plVar1;
    do {
      if (puVar9[4] == param_2) {
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar6,&local_28);
        while( true ) {
          if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) break;
          lVar5 = FWeakObjectPtr::Get();
          if (lVar5 != 0) {
            lVar7 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (((bVar2) && (*(longlong *)(lVar5 + 0x978) != 0)) &&
               (FUN_142e724b0(*(longlong *)(lVar5 + 0x978),*puVar9,puVar9[4],0), param_3 == '\0')) {
              FUN_142d9e0d0(*(undefined8 *)(lVar5 + 0x978),puVar9[1],1,puVar9[2],
                            *(undefined4 *)(puVar9 + 3),4,1,1,puVar9[4],0,0,1,0);
            }
          }
          local_20 = local_20 + 1;
        }
        iVar3 = (int)param_1[0x141];
        iVar4 = (iVar3 - iVar8) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar8 * 0x28),
                     (void *)(*plVar1 + (longlong)(iVar8 + 1) * 0x28),(longlong)iVar4 * 0x28);
          iVar3 = (int)param_1[0x141];
        }
        *(int *)(param_1 + 0x141) = iVar3 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 5;
    } while (iVar8 < (int)param_1[0x141]);
  }
  return;
}



// FUNCTION 140cda970 FUN_140cda970 body=551 status=ok
// SIG undefined FUN_140cda970(void)

void FUN_140cda970(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  bool bVar12;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar11 = (longlong *)0x0;
  local_res18 = local_res18 & 0xffffffff00000000;
  FUN_142491c40();
  if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
     (cVar5 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar5 != '\0')) {
    local_48 = *(undefined8 *)(param_3 + 8);
    local_40 = *(longlong *)(param_3 + 0x10);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FUN_1422312c0(param_1);
    lVar7 = FUN_14244c070(uVar6,&local_48);
    if (lVar7 == 0) {
      puVar8 = (ulonglong *)FName::FName(local_res20,L"SPARK",1);
      local_res18 = *puVar8;
      plVar9 = (longlong *)FUN_1404b0000(&local_res18);
      bVar12 = plVar9 != (longlong *)0x0;
      if (bVar12) {
        puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x40))(plVar9,local_38);
        plVar11 = (longlong *)*puVar10;
      }
      else {
        puVar10 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
      }
      plVar9 = (longlong *)puVar10[1];
      puVar10[1] = 0;
      *puVar10 = 0;
      if ((bVar12) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar1 = plStack_60;
      if ((!bVar12) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        local_58 = *(undefined8 *)(param_3 + 8);
        local_50 = *(longlong **)(param_3 + 0x10);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar11 + 0x48))(plVar11,&local_58);
        plVar11 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar9 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
  }
  return;
}



// FUNCTION 140cdaba0 FUN_140cdaba0 body=501 status=ok
// SIG undefined FUN_140cdaba0(void)

void FUN_140cdaba0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  cVar3 = *(char *)(param_1 + 0x80);
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     (lVar4 = FUN_14244f490(*(longlong *)(param_1 + 0x90),0), lVar4 != 0)) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && ((*(byte *)(lVar4 + 0x640) & 2) != 0)) &&
       ((lVar4 = ATTLCharacterCommon::GetCurrentSupportWeapon(lVar4), lVar4 == 0 ||
        (*(char *)(lVar4 + 0x38) == '\0')))) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      if (cVar3 == '\0') {
        return;
      }
      FUN_1424221b0(0);
      return;
    }
  }
  FUN_142491d40(param_1);
  if (*(char *)(param_1 + 0x80) != cVar3) {
    FUN_1424221b0(*(char *)(param_1 + 0x80));
    puVar6 = (undefined8 *)FName::FName(local_res8,L"GbxShiftOverlay",1);
    plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar6);
    if (plVar7 != (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_1428741a0(DAT_146b17150,&local_28);
      plVar1 = local_28 + (int)local_20;
      for (plVar8 = local_28; plVar8 != plVar1; plVar8 = plVar8 + 1) {
        lVar4 = *plVar8;
        if (lVar4 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = FUN_14270bb10(lVar4), lVar5 != 0)) {
            uVar9 = 0;
            cVar3 = FUN_142dcfc60(lVar4);
            if (cVar3 == '\x01') {
              uVar9 = 1;
            }
            else if (cVar3 == '\x02') {
              uVar9 = 2;
            }
            else if (cVar3 == '\x03') {
              uVar9 = 3;
            }
            (**(code **)(*plVar7 + 0x100))(plVar7,lVar5,uVar9);
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 140cdada0 FUN_140cdada0 body=396 status=ok
// SIG undefined FUN_140cdada0(void)

void FUN_140cdada0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_18;
  int local_10;
  
  uVar7 = 0;
  if ((char)param_1[0x25] == '\x03') {
    *(undefined1 *)((longlong)param_1 + 0xa11) = 0;
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x38), lVar3 != 0)) {
      plVar5 = *(longlong **)(lVar3 + 0x98);
      uVar8 = (longlong)*(int *)(lVar3 + 0xa0) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(lVar3 + 0xa0) < plVar5) {
        uVar8 = uVar7;
      }
      if (uVar8 != 0) {
        bVar6 = *(byte *)((longlong)param_1 + 0xa11);
        do {
          lVar3 = *plVar5;
          plVar5 = plVar5 + 1;
          uVar7 = uVar7 + 1;
          bVar6 = bVar6 | *(int *)(lVar3 + 0x1c0) < 3;
          *(byte *)((longlong)param_1 + 0xa11) = bVar6;
        } while (uVar7 != uVar8);
      }
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar4,&local_18);
  do {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    plVar5 = (longlong *)FWeakObjectPtr::Get();
    if (plVar5 != (longlong *)0x0) {
      lVar3 = FUN_14145f370();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) {
LAB_140cdaedf:
          bVar1 = false;
        }
        else {
          cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5);
          if (cVar2 == '\0') goto LAB_140cdaedf;
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = APlayerController::IsPrimaryPlayer();
          if (cVar2 != '\0') goto LAB_140cdaf0d;
        }
        bVar6 = FUN_1423d94f0(plVar5,0x142);
        *(byte *)((longlong)param_1 + 0xa11) = *(byte *)((longlong)param_1 + 0xa11) | bVar6;
      }
    }
LAB_140cdaf0d:
    local_10 = local_10 + 1;
  } while( true );
}



// FUNCTION 140cdaf30 FUN_140cdaf30 body=387 status=ok
// SIG undefined FUN_140cdaf30(void)

void FUN_140cdaf30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::StateChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    plVar1 = (longlong *)(param_1 + 0x590);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x598);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140cdb096;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0x598);
    *(int *)(param_1 + 0x598) = iVar2 + 1;
    if (*(int *)(param_1 + 0x59c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_140cdb096:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140cdb0c0 FUN_140cdb0c0 body=2712 status=ok
// SIG undefined FUN_140cdb0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cdb0c0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  char cVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar24;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auStack_118 [32];
  float local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x950) == 0) {
    return;
  }
  plVar16 = (longlong *)(*(longlong *)(param_1 + 0x950) + 0xd88);
  lVar14 = (**(code **)(*plVar16 + 0xf0))(plVar16,0);
  lVar17 = 0;
  if ((lVar14 != 0) &&
     (((*(byte *)(lVar14 + 0x7e8) & 0x40) != 0 || ((*(byte *)(lVar14 + 0x80) & 1) != 0)))) {
    lVar14 = 0;
  }
  if (*(longlong **)(param_1 + 0x950) == (longlong *)0x0) {
    cVar12 = '\0';
  }
  else {
    cVar12 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0xc28))();
  }
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  *(undefined1 *)(param_1 + 0x720) = 0;
  *(undefined1 *)(param_1 + 0x760) = 0;
  if ((((lVar14 == 0) && (*(char *)(param_1 + 0x9f8) == '\0')) &&
      (*(char *)(param_1 + 0xa00) == '\0')) &&
     ((cVar12 == '\0' && (*(char *)(param_1 + 0xae4) == '\0')))) {
    *(undefined8 *)(param_1 + 0x63c) = 0;
    *(undefined8 *)(param_1 + 0x634) = 0;
    goto LAB_140cdbaf4;
  }
  cVar13 = *(char *)(param_1 + 0x645);
  if (cVar13 == '\0') {
    fVar33 = (float)FUN_142268750(param_1,DAT_14686c940);
    cVar13 = *(char *)(param_1 + 0x645);
  }
  else {
    fVar33 = 2.0;
  }
  if (cVar13 == '\0') {
    fVar32 = (float)FUN_142268750(param_1,DAT_14686c948);
  }
  else {
    fVar32 = 2.0;
  }
  *(undefined1 *)(param_1 + 0x645) = 0;
  fVar27 = 1.0 - fVar33;
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  *(float *)(param_1 + 0x640) = fVar27;
  fVar27 = 1.0 - fVar32;
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  *(float *)(param_1 + 0x63c) = fVar27;
  fVar33 = 2.0 - fVar33;
  if (0.0 <= fVar33) {
    if (1.0 <= fVar33) {
      fVar33 = 1.0;
    }
  }
  else {
    fVar33 = 0.0;
  }
  fVar32 = 2.0 - fVar32;
  *(float *)(param_1 + 0x638) = fVar33;
  fVar33 = 0.0;
  if ((0.0 <= fVar32) && (fVar33 = fVar32, 1.0 <= fVar32)) {
    fVar33 = 1.0;
  }
  *(float *)(param_1 + 0x634) = fVar33;
  uVar6 = uRam00000001468b5b78;
  *(undefined8 *)(param_1 + 0x650) = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 0x658) = uVar6;
  uVar6 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 0x660) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 0x668) = uVar6;
  uVar6 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
  *(ulonglong *)(param_1 + 0x670) = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
  *(undefined8 *)(param_1 + 0x678) = uVar6;
  uVar6 = uRam00000001468b5b78;
  *(undefined8 *)(param_1 + 0x680) = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 0x688) = uVar6;
  uVar6 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 0x690) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 0x698) = uVar6;
  uVar5 = uRam00000001468b5b9c;
  uVar4 = uRam00000001468b5b98;
  uVar3 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 0x6a0) = _DAT_1468b5b90;
  *(undefined4 *)(param_1 + 0x6a4) = uVar3;
  *(undefined4 *)(param_1 + 0x6a8) = uVar4;
  *(undefined4 *)(param_1 + 0x6ac) = uVar5;
  if (((*(char *)(param_1 + 0xa00) != '\0') &&
      (lVar18 = *(longlong *)(param_1 + 0x9b0), lVar18 != 0)) &&
     (*(longlong *)(lVar18 + 0x588) != 0)) {
    if ((*(byte *)(lVar18 + 0x590) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x634) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x6e0) = 1;
      puVar15 = (undefined8 *)
                (**(code **)(**(longlong **)(lVar18 + 0x588) + 0x420))
                          (*(longlong **)(lVar18 + 0x588),&local_c8,*(undefined8 *)(lVar18 + 0x568),
                           0);
      uVar6 = puVar15[1];
      *(undefined8 *)(param_1 + 0x6b0) = *puVar15;
      *(undefined8 *)(param_1 + 0x6b8) = uVar6;
      uVar6 = puVar15[3];
      *(undefined8 *)(param_1 + 0x6c0) = puVar15[2];
      *(undefined8 *)(param_1 + 0x6c8) = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar4 = *(undefined4 *)(puVar15 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(puVar15 + 4);
      *(undefined4 *)(param_1 + 0x6d4) = uVar3;
      *(undefined4 *)(param_1 + 0x6d8) = uVar4;
      *(undefined4 *)(param_1 + 0x6dc) = uVar5;
      lVar18 = *(longlong *)(param_1 + 0x9b0);
    }
    if ((*(byte *)(lVar18 + 0x590) & 2) != 0) {
      *(undefined4 *)(param_1 + 0x638) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x720) = 1;
      puVar15 = (undefined8 *)
                (**(code **)(**(longlong **)(lVar18 + 0x588) + 0x420))
                          (*(longlong **)(lVar18 + 0x588),&local_c8,*(undefined8 *)(lVar18 + 0x570),
                           0);
      uVar6 = puVar15[1];
      *(undefined8 *)(param_1 + 0x6f0) = *puVar15;
      *(undefined8 *)(param_1 + 0x6f8) = uVar6;
      uVar6 = puVar15[3];
      *(undefined8 *)(param_1 + 0x700) = puVar15[2];
      *(undefined8 *)(param_1 + 0x708) = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar4 = *(undefined4 *)(puVar15 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(puVar15 + 4);
      *(undefined4 *)(param_1 + 0x714) = uVar3;
      *(undefined4 *)(param_1 + 0x718) = uVar4;
      *(undefined4 *)(param_1 + 0x71c) = uVar5;
      lVar18 = *(longlong *)(param_1 + 0x9b0);
    }
    if (((*(byte *)(lVar18 + 0x590) & 4) != 0) && (*(char *)(lVar18 + 0x518) == '\0')) {
      *(undefined1 *)(param_1 + 0x760) = 1;
      (**(code **)(**(longlong **)(lVar18 + 0x588) + 0x420))
                (*(longlong **)(lVar18 + 0x588),&local_c8,*(undefined8 *)(lVar18 + 0x578),0);
      local_e8 = (float)uStack_b0;
      *(float *)(param_1 + 0x730) = (float)local_b8;
      *(float *)(param_1 + 0x734) = local_b8._4_4_;
      local_d8 = local_c8;
      fStack_d4 = fStack_c4;
      fStack_d0 = fStack_c0;
      fStack_cc = fStack_bc;
      *(float *)(param_1 + 0x738) = (float)uStack_b0;
      FQuat::Rotator(&local_d8,&local_f0);
      lVar18 = *(longlong *)(param_1 + 0x9b0);
      *(undefined8 *)(param_1 + 0x73c) = local_f0;
      *(undefined4 *)(param_1 + 0x744) = local_e8;
    }
    if (((*(byte *)(lVar18 + 0x590) & 8) != 0) && (*(char *)(lVar18 + 0x518) == '\0')) {
      *(undefined1 *)(param_1 + 0x760) = 1;
      (**(code **)(**(longlong **)(lVar18 + 0x588) + 0x420))
                (*(longlong **)(lVar18 + 0x588),&local_c8,*(undefined8 *)(lVar18 + 0x580),0);
      local_e8 = (float)uStack_b0;
      *(float *)(param_1 + 0x748) = (float)local_b8;
      *(float *)(param_1 + 0x74c) = local_b8._4_4_;
      local_d8 = local_c8;
      fStack_d4 = fStack_c4;
      fStack_d0 = fStack_c0;
      fStack_cc = fStack_bc;
      *(float *)(param_1 + 0x750) = (float)uStack_b0;
      FQuat::Rotator(&local_d8,&local_f0);
      *(undefined8 *)(param_1 + 0x754) = local_f0;
      *(undefined4 *)(param_1 + 0x75c) = local_e8;
    }
  }
  cVar13 = '\0';
  if (*(longlong *)(param_1 + 0x9b8) != 0) {
    cVar13 = *(char *)(*(longlong *)(param_1 + 0x9b8) + 0x6ee);
  }
  if ((((lVar14 != 0) && (cVar12 == '\0')) &&
      ((*(char *)(param_1 + 0x9f8) == '\0' || (cVar13 != '\0')))) &&
     (*(char *)(param_1 + 0xa00) == '\0')) {
    local_a8 = (float)((uint)_DAT_14686c560 & _DAT_14686c570);
    fStack_a4 = (float)((uint)fRam000000014686c564 & uRam000000014686c574);
    fStack_a0 = (float)((uint)fRam000000014686c568 & uRam000000014686c578);
    fStack_9c = (float)((uint)fRam000000014686c56c & uRam000000014686c57c);
    local_c8 = 0.0;
    fStack_c4 = 0.0;
    fStack_c0 = 0.0;
    fStack_bc = fRam000000014686c56c;
    local_98 = 0.0;
    fStack_94 = 0.0;
    fStack_90 = 0.0;
    fStack_8c = fRam000000014686c56c;
    local_b8 = 0;
    uStack_b0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = local_a8;
    fStack_74 = fStack_a4;
    fStack_70 = fStack_a0;
    fStack_6c = fStack_9c;
    FUN_143078de0(lVar14,&local_c8,&local_98,*(undefined1 *)(param_1 + 0x970));
    if (*(char *)(param_1 + 0x96a) == '\0') {
      *(undefined4 *)(param_1 + 0x634) = 0;
      *(undefined4 *)(param_1 + 0x63c) = 0;
    }
    if (*(char *)(param_1 + 0x96b) == '\0') {
      *(undefined4 *)(param_1 + 0x638) = 0;
      *(undefined4 *)(param_1 + 0x640) = 0;
    }
    fVar11 = fRam000000014686c53c;
    fVar10 = fRam000000014686c538;
    fVar9 = fRam000000014686c534;
    fVar8 = _DAT_14686c530;
    fVar7 = fRam000000014686c52c;
    fVar27 = fRam000000014686c528;
    fVar32 = fRam000000014686c524;
    fVar33 = _DAT_14686c520;
    if (*(char *)(param_1 + 0x970) == '\0') {
      fVar28 = *(float *)(param_1 + 0x634);
      if (1e-05 < fVar28) {
        if (fVar28 < 0.99999) {
          *(float *)(param_1 + 0x660) =
               ((float)local_88 - *(float *)(param_1 + 0x660)) * fVar28 +
               *(float *)(param_1 + 0x660);
          *(float *)(param_1 + 0x664) =
               (local_88._4_4_ - *(float *)(param_1 + 0x664)) * fVar28 + *(float *)(param_1 + 0x664)
          ;
          *(float *)(param_1 + 0x668) =
               ((float)uStack_80 - *(float *)(param_1 + 0x668)) * fVar28 +
               *(float *)(param_1 + 0x668);
          *(float *)(param_1 + 0x66c) =
               (uStack_80._4_4_ - *(float *)(param_1 + 0x66c)) * fVar28 +
               *(float *)(param_1 + 0x66c);
          *(float *)(param_1 + 0x670) =
               (local_78 - *(float *)(param_1 + 0x670)) * fVar28 + *(float *)(param_1 + 0x670);
          *(float *)(param_1 + 0x674) =
               (fStack_74 - *(float *)(param_1 + 0x674)) * fVar28 + *(float *)(param_1 + 0x674);
          *(float *)(param_1 + 0x678) =
               (fStack_70 - *(float *)(param_1 + 0x678)) * fVar28 + *(float *)(param_1 + 0x678);
          *(float *)(param_1 + 0x67c) =
               (fStack_6c - *(float *)(param_1 + 0x67c)) * fVar28 + *(float *)(param_1 + 0x67c);
          fVar29 = *(float *)(param_1 + 0x650);
          fVar30 = *(float *)(param_1 + 0x654);
          fVar31 = *(float *)(param_1 + 0x658);
          fVar19 = *(float *)(param_1 + 0x65c);
          fVar24 = local_98 * fVar29 + fStack_90 * fVar31;
          fVar25 = fStack_94 * fVar30 + fStack_8c * fVar19;
          fVar26 = fStack_90 * fVar31 + local_98 * fVar29;
          fVar34 = fStack_8c * fVar19 + fStack_94 * fVar30;
          fVar35 = (float)(-(uint)(0.0 <= fVar25 + fVar24) & ((uint)(0.0 - fVar29) ^ (uint)fVar29) ^
                          (uint)(0.0 - fVar29)) * (_DAT_14686c560 - fVar28) + local_98 * fVar28;
          fVar36 = (float)(-(uint)(0.0 <= fVar26 + fVar25) & ((uint)(0.0 - fVar30) ^ (uint)fVar30) ^
                          (uint)(0.0 - fVar30)) * (fRam000000014686c564 - fVar28) +
                   fStack_94 * fVar28;
          fVar37 = (float)(-(uint)(0.0 <= fVar34 + fVar26) & ((uint)(0.0 - fVar31) ^ (uint)fVar31) ^
                          (uint)(0.0 - fVar31)) * (fRam000000014686c568 - fVar28) +
                   fStack_90 * fVar28;
          fVar34 = (float)(-(uint)(0.0 <= fVar24 + fVar34) & ((uint)(0.0 - fVar19) ^ (uint)fVar19) ^
                          (uint)(0.0 - fVar19)) * (fRam000000014686c56c - fVar28) +
                   fStack_8c * fVar28;
          auVar21._0_4_ = fVar35 * fVar35 + fVar37 * fVar37;
          auVar21._4_4_ = fVar36 * fVar36 + fVar34 * fVar34;
          auVar21._8_4_ = fVar37 * fVar37 + fVar35 * fVar35;
          auVar21._12_4_ = fVar34 * fVar34 + fVar36 * fVar36;
          fVar19 = auVar21._4_4_ + auVar21._0_4_;
          fVar24 = auVar21._8_4_ + auVar21._4_4_;
          fVar25 = auVar21._12_4_ + auVar21._8_4_;
          fVar26 = auVar21._0_4_ + auVar21._12_4_;
          auVar23._4_4_ = fVar24;
          auVar23._0_4_ = fVar19;
          auVar23._8_4_ = fVar25;
          auVar23._12_4_ = fVar26;
          auVar23 = rsqrtps(auVar21,auVar23);
          fVar28 = auVar23._0_4_;
          fVar29 = auVar23._4_4_;
          fVar30 = auVar23._8_4_;
          fVar31 = auVar23._12_4_;
          fVar28 = (fVar33 - fVar28 * fVar28 * fVar19 * fVar33) * fVar28 + fVar28;
          fVar29 = (fVar32 - fVar29 * fVar29 * fVar24 * fVar32) * fVar29 + fVar29;
          fVar30 = (fVar27 - fVar30 * fVar30 * fVar25 * fVar27) * fVar30 + fVar30;
          fVar31 = (fVar7 - fVar31 * fVar31 * fVar26 * fVar7) * fVar31 + fVar31;
          uVar38 = ((uint)(((fVar32 - fVar29 * fVar29 * fVar24 * fVar32) * fVar29 + fVar29) * fVar36
                          ) ^ uRam000000014686c514) & -(uint)(fVar9 <= fVar24) ^
                   uRam000000014686c514;
          uVar39 = ((uint)(((fVar27 - fVar30 * fVar30 * fVar25 * fVar27) * fVar30 + fVar30) * fVar37
                          ) ^ uRam000000014686c518) & -(uint)(fVar10 <= fVar25) ^
                   uRam000000014686c518;
          uVar40 = ((uint)(((fVar7 - fVar31 * fVar31 * fVar26 * fVar7) * fVar31 + fVar31) * fVar34)
                   ^ uRam000000014686c51c) & -(uint)(fVar11 <= fVar26) ^ uRam000000014686c51c;
          *(uint *)(param_1 + 0x650) =
               ((uint)(((fVar33 - fVar28 * fVar28 * fVar19 * fVar33) * fVar28 + fVar28) * fVar35) ^
               _DAT_14686c510) & -(uint)(fVar8 <= fVar19) ^ _DAT_14686c510;
          *(uint *)(param_1 + 0x654) = uVar38;
          *(uint *)(param_1 + 0x658) = uVar39;
          *(uint *)(param_1 + 0x65c) = uVar40;
        }
        else {
          *(ulonglong *)(param_1 + 0x650) = CONCAT44(fStack_94,local_98);
          *(ulonglong *)(param_1 + 0x658) = CONCAT44(fStack_8c,fStack_90);
          *(ulonglong *)(param_1 + 0x670) = CONCAT44(fStack_74,local_78);
          *(ulonglong *)(param_1 + 0x678) = CONCAT44(fStack_6c,fStack_70);
          *(float *)(param_1 + 0x660) = (float)local_88;
          *(float *)(param_1 + 0x664) = local_88._4_4_;
          *(float *)(param_1 + 0x668) = (float)uStack_80;
          *(float *)(param_1 + 0x66c) = uStack_80._4_4_;
        }
      }
      local_f8 = *(float *)(param_1 + 0x638);
    }
    else {
      fVar28 = *(float *)(param_1 + 0x63c);
      if (1e-05 < fVar28) {
        if (0.99999 <= fVar28) {
          *(ulonglong *)(param_1 + 0x650) = CONCAT44(fStack_94,local_98);
          *(ulonglong *)(param_1 + 0x658) = CONCAT44(fStack_8c,fStack_90);
          *(ulonglong *)(param_1 + 0x670) = CONCAT44(fStack_74,local_78);
          *(ulonglong *)(param_1 + 0x678) = CONCAT44(fStack_6c,fStack_70);
          *(float *)(param_1 + 0x660) = (float)local_88;
          *(float *)(param_1 + 0x664) = local_88._4_4_;
          *(float *)(param_1 + 0x668) = (float)uStack_80;
          *(float *)(param_1 + 0x66c) = uStack_80._4_4_;
          local_f8 = *(float *)(param_1 + 0x640);
          goto LAB_140cdb8ae;
        }
        *(float *)(param_1 + 0x660) =
             ((float)local_88 - *(float *)(param_1 + 0x660)) * fVar28 + *(float *)(param_1 + 0x660);
        *(float *)(param_1 + 0x664) =
             (local_88._4_4_ - *(float *)(param_1 + 0x664)) * fVar28 + *(float *)(param_1 + 0x664);
        *(float *)(param_1 + 0x668) =
             ((float)uStack_80 - *(float *)(param_1 + 0x668)) * fVar28 + *(float *)(param_1 + 0x668)
        ;
        *(float *)(param_1 + 0x66c) =
             (uStack_80._4_4_ - *(float *)(param_1 + 0x66c)) * fVar28 + *(float *)(param_1 + 0x66c);
        *(float *)(param_1 + 0x670) =
             (local_78 - *(float *)(param_1 + 0x670)) * fVar28 + *(float *)(param_1 + 0x670);
        *(float *)(param_1 + 0x674) =
             (fStack_74 - *(float *)(param_1 + 0x674)) * fVar28 + *(float *)(param_1 + 0x674);
        *(float *)(param_1 + 0x678) =
             (fStack_70 - *(float *)(param_1 + 0x678)) * fVar28 + *(float *)(param_1 + 0x678);
        *(float *)(param_1 + 0x67c) =
             (fStack_6c - *(float *)(param_1 + 0x67c)) * fVar28 + *(float *)(param_1 + 0x67c);
        fVar29 = *(float *)(param_1 + 0x650);
        fVar30 = *(float *)(param_1 + 0x654);
        fVar31 = *(float *)(param_1 + 0x658);
        fVar19 = *(float *)(param_1 + 0x65c);
        fVar24 = local_98 * fVar29 + fStack_90 * fVar31;
        fVar25 = fStack_94 * fVar30 + fStack_8c * fVar19;
        fVar26 = fStack_90 * fVar31 + local_98 * fVar29;
        fVar34 = fStack_8c * fVar19 + fStack_94 * fVar30;
        fVar35 = (float)(-(uint)(0.0 <= fVar25 + fVar24) & ((uint)(0.0 - fVar29) ^ (uint)fVar29) ^
                        (uint)(0.0 - fVar29)) * (_DAT_14686c560 - fVar28) + local_98 * fVar28;
        fVar36 = (float)(-(uint)(0.0 <= fVar26 + fVar25) & ((uint)(0.0 - fVar30) ^ (uint)fVar30) ^
                        (uint)(0.0 - fVar30)) * (fRam000000014686c564 - fVar28) + fStack_94 * fVar28
        ;
        fVar37 = (float)(-(uint)(0.0 <= fVar34 + fVar26) & ((uint)(0.0 - fVar31) ^ (uint)fVar31) ^
                        (uint)(0.0 - fVar31)) * (fRam000000014686c568 - fVar28) + fStack_90 * fVar28
        ;
        fVar34 = (float)(-(uint)(0.0 <= fVar24 + fVar34) & ((uint)(0.0 - fVar19) ^ (uint)fVar19) ^
                        (uint)(0.0 - fVar19)) * (fRam000000014686c56c - fVar28) + fStack_8c * fVar28
        ;
        auVar20._0_4_ = fVar35 * fVar35 + fVar37 * fVar37;
        auVar20._4_4_ = fVar36 * fVar36 + fVar34 * fVar34;
        auVar20._8_4_ = fVar37 * fVar37 + fVar35 * fVar35;
        auVar20._12_4_ = fVar34 * fVar34 + fVar36 * fVar36;
        fVar19 = auVar20._4_4_ + auVar20._0_4_;
        fVar24 = auVar20._8_4_ + auVar20._4_4_;
        fVar25 = auVar20._12_4_ + auVar20._8_4_;
        fVar26 = auVar20._0_4_ + auVar20._12_4_;
        auVar2._4_4_ = fVar24;
        auVar2._0_4_ = fVar19;
        auVar2._8_4_ = fVar25;
        auVar2._12_4_ = fVar26;
        auVar23 = rsqrtps(auVar20,auVar2);
        fVar28 = auVar23._0_4_;
        fVar29 = auVar23._4_4_;
        fVar30 = auVar23._8_4_;
        fVar31 = auVar23._12_4_;
        fVar28 = (fVar33 - fVar28 * fVar28 * fVar19 * fVar33) * fVar28 + fVar28;
        fVar29 = (fVar32 - fVar29 * fVar29 * fVar24 * fVar32) * fVar29 + fVar29;
        fVar30 = (fVar27 - fVar30 * fVar30 * fVar25 * fVar27) * fVar30 + fVar30;
        fVar31 = (fVar7 - fVar31 * fVar31 * fVar26 * fVar7) * fVar31 + fVar31;
        uVar38 = ((uint)(((fVar32 - fVar29 * fVar29 * fVar24 * fVar32) * fVar29 + fVar29) * fVar36)
                 ^ uRam000000014686c514) & -(uint)(fVar9 <= fVar24) ^ uRam000000014686c514;
        uVar39 = ((uint)(((fVar27 - fVar30 * fVar30 * fVar25 * fVar27) * fVar30 + fVar30) * fVar37)
                 ^ uRam000000014686c518) & -(uint)(fVar10 <= fVar25) ^ uRam000000014686c518;
        uVar40 = ((uint)(((fVar7 - fVar31 * fVar31 * fVar26 * fVar7) * fVar31 + fVar31) * fVar34) ^
                 uRam000000014686c51c) & -(uint)(fVar11 <= fVar26) ^ uRam000000014686c51c;
        *(uint *)(param_1 + 0x650) =
             ((uint)(((fVar33 - fVar28 * fVar28 * fVar19 * fVar33) * fVar28 + fVar28) * fVar35) ^
             _DAT_14686c510) & -(uint)(fVar8 <= fVar19) ^ _DAT_14686c510;
        *(uint *)(param_1 + 0x654) = uVar38;
        *(uint *)(param_1 + 0x658) = uVar39;
        *(uint *)(param_1 + 0x65c) = uVar40;
      }
      local_f8 = *(float *)(param_1 + 0x640);
    }
LAB_140cdb8ae:
    if (1e-05 < local_f8) {
      if (local_f8 < 0.99999) {
        *(float *)(param_1 + 0x690) =
             ((float)local_b8 - *(float *)(param_1 + 0x690)) * local_f8 +
             *(float *)(param_1 + 0x690);
        *(float *)(param_1 + 0x694) =
             (local_b8._4_4_ - *(float *)(param_1 + 0x694)) * local_f8 + *(float *)(param_1 + 0x694)
        ;
        *(float *)(param_1 + 0x698) =
             ((float)uStack_b0 - *(float *)(param_1 + 0x698)) * local_f8 +
             *(float *)(param_1 + 0x698);
        *(float *)(param_1 + 0x69c) =
             (uStack_b0._4_4_ - *(float *)(param_1 + 0x69c)) * local_f8 +
             *(float *)(param_1 + 0x69c);
        *(float *)(param_1 + 0x6a0) =
             (local_a8 - *(float *)(param_1 + 0x6a0)) * local_f8 + *(float *)(param_1 + 0x6a0);
        *(float *)(param_1 + 0x6a4) =
             (fStack_a4 - *(float *)(param_1 + 0x6a4)) * local_f8 + *(float *)(param_1 + 0x6a4);
        *(float *)(param_1 + 0x6a8) =
             (fStack_a0 - *(float *)(param_1 + 0x6a8)) * local_f8 + *(float *)(param_1 + 0x6a8);
        *(float *)(param_1 + 0x6ac) =
             (fStack_9c - *(float *)(param_1 + 0x6ac)) * local_f8 + *(float *)(param_1 + 0x6ac);
        fVar28 = *(float *)(param_1 + 0x680);
        fVar29 = *(float *)(param_1 + 0x684);
        fVar30 = *(float *)(param_1 + 0x688);
        fVar31 = *(float *)(param_1 + 0x68c);
        fVar19 = local_c8 * fVar28 + fStack_c0 * fVar30;
        fVar24 = fStack_c4 * fVar29 + fStack_bc * fVar31;
        fVar25 = fStack_c0 * fVar30 + local_c8 * fVar28;
        fVar26 = fStack_bc * fVar31 + fStack_c4 * fVar29;
        fVar34 = (float)(-(uint)(0.0 <= fVar24 + fVar19) & ((uint)(0.0 - fVar28) ^ (uint)fVar28) ^
                        (uint)(0.0 - fVar28)) * (_DAT_14686c560 - local_f8) + local_c8 * local_f8;
        fVar35 = (float)(-(uint)(0.0 <= fVar25 + fVar24) & ((uint)(0.0 - fVar29) ^ (uint)fVar29) ^
                        (uint)(0.0 - fVar29)) * (fRam000000014686c564 - local_f8) +
                 fStack_c4 * local_f8;
        fVar36 = (float)(-(uint)(0.0 <= fVar26 + fVar25) & ((uint)(0.0 - fVar30) ^ (uint)fVar30) ^
                        (uint)(0.0 - fVar30)) * (fRam000000014686c568 - local_f8) +
                 fStack_c0 * local_f8;
        fVar37 = (float)(-(uint)(0.0 <= fVar19 + fVar26) & ((uint)(0.0 - fVar31) ^ (uint)fVar31) ^
                        (uint)(0.0 - fVar31)) * (fRam000000014686c56c - local_f8) +
                 fStack_bc * local_f8;
        auVar22._0_4_ = fVar34 * fVar34 + fVar36 * fVar36;
        auVar22._4_4_ = fVar35 * fVar35 + fVar37 * fVar37;
        auVar22._8_4_ = fVar36 * fVar36 + fVar34 * fVar34;
        auVar22._12_4_ = fVar37 * fVar37 + fVar35 * fVar35;
        fVar19 = auVar22._4_4_ + auVar22._0_4_;
        fVar24 = auVar22._8_4_ + auVar22._4_4_;
        fVar25 = auVar22._12_4_ + auVar22._8_4_;
        fVar26 = auVar22._0_4_ + auVar22._12_4_;
        auVar1._4_4_ = fVar24;
        auVar1._0_4_ = fVar19;
        auVar1._8_4_ = fVar25;
        auVar1._12_4_ = fVar26;
        auVar23 = rsqrtps(auVar22,auVar1);
        fVar28 = auVar23._0_4_;
        fVar29 = auVar23._4_4_;
        fVar30 = auVar23._8_4_;
        fVar31 = auVar23._12_4_;
        fVar28 = (fVar33 - fVar28 * fVar28 * fVar19 * fVar33) * fVar28 + fVar28;
        fVar29 = (fVar32 - fVar29 * fVar29 * fVar24 * fVar32) * fVar29 + fVar29;
        fVar30 = (fVar27 - fVar30 * fVar30 * fVar25 * fVar27) * fVar30 + fVar30;
        fVar31 = (fVar7 - fVar31 * fVar31 * fVar26 * fVar7) * fVar31 + fVar31;
        uVar38 = ((uint)(((fVar32 - fVar29 * fVar29 * fVar24 * fVar32) * fVar29 + fVar29) * fVar35)
                 ^ uRam000000014686c514) & -(uint)(fVar9 <= fVar24) ^ uRam000000014686c514;
        uVar39 = ((uint)(((fVar27 - fVar30 * fVar30 * fVar25 * fVar27) * fVar30 + fVar30) * fVar36)
                 ^ uRam000000014686c518) & -(uint)(fVar10 <= fVar25) ^ uRam000000014686c518;
        uVar40 = ((uint)(((fVar7 - fVar31 * fVar31 * fVar26 * fVar7) * fVar31 + fVar31) * fVar37) ^
                 uRam000000014686c51c) & -(uint)(fVar11 <= fVar26) ^ uRam000000014686c51c;
        *(uint *)(param_1 + 0x680) =
             ((uint)(((fVar33 - fVar28 * fVar28 * fVar19 * fVar33) * fVar28 + fVar28) * fVar34) ^
             _DAT_14686c510) & -(uint)(fVar8 <= fVar19) ^ _DAT_14686c510;
        *(uint *)(param_1 + 0x684) = uVar38;
        *(uint *)(param_1 + 0x688) = uVar39;
        *(uint *)(param_1 + 0x68c) = uVar40;
      }
      else {
        *(ulonglong *)(param_1 + 0x680) = CONCAT44(fStack_c4,local_c8);
        *(ulonglong *)(param_1 + 0x688) = CONCAT44(fStack_bc,fStack_c0);
        *(float *)(param_1 + 0x690) = (float)local_b8;
        *(float *)(param_1 + 0x694) = local_b8._4_4_;
        *(float *)(param_1 + 0x698) = (float)uStack_b0;
        *(float *)(param_1 + 0x69c) = uStack_b0._4_4_;
        *(float *)(param_1 + 0x6a0) = local_a8;
        *(float *)(param_1 + 0x6a4) = fStack_a4;
        *(float *)(param_1 + 0x6a8) = fStack_a0;
        *(float *)(param_1 + 0x6ac) = fStack_9c;
      }
    }
  }
  if (((*(char *)(param_1 + 0x6e1) != '\0') || (*(char *)(param_1 + 0x721) != '\0')) &&
     (plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x950) + 0xa18), plVar16 != (longlong *)0x0))
  {
    cVar12 = (**(code **)(*plVar16 + 0x440))(plVar16,*(undefined8 *)(param_1 + 0x6e8));
    if (cVar12 != '\0') {
      *(undefined1 *)(param_1 + 0x6e0) = 1;
      puVar15 = (undefined8 *)
                (**(code **)(*plVar16 + 0x420))
                          (plVar16,&local_c8,*(undefined8 *)(param_1 + 0x6e8),0);
      uVar6 = puVar15[1];
      *(undefined8 *)(param_1 + 0x6b0) = *puVar15;
      *(undefined8 *)(param_1 + 0x6b8) = uVar6;
      uVar6 = puVar15[3];
      *(undefined8 *)(param_1 + 0x6c0) = puVar15[2];
      *(undefined8 *)(param_1 + 0x6c8) = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar4 = *(undefined4 *)(puVar15 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(puVar15 + 4);
      *(undefined4 *)(param_1 + 0x6d4) = uVar3;
      *(undefined4 *)(param_1 + 0x6d8) = uVar4;
      *(undefined4 *)(param_1 + 0x6dc) = uVar5;
    }
    cVar12 = (**(code **)(*plVar16 + 0x440))(plVar16,*(undefined8 *)(param_1 + 0x728));
    if (cVar12 != '\0') {
      *(undefined1 *)(param_1 + 0x720) = 1;
      puVar15 = (undefined8 *)
                (**(code **)(*plVar16 + 0x420))
                          (plVar16,&local_c8,*(undefined8 *)(param_1 + 0x728),0);
      uVar6 = puVar15[1];
      *(undefined8 *)(param_1 + 0x6f0) = *puVar15;
      *(undefined8 *)(param_1 + 0x6f8) = uVar6;
      uVar6 = puVar15[3];
      *(undefined8 *)(param_1 + 0x700) = puVar15[2];
      *(undefined8 *)(param_1 + 0x708) = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar4 = *(undefined4 *)(puVar15 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(puVar15 + 4);
      *(undefined4 *)(param_1 + 0x714) = uVar3;
      *(undefined4 *)(param_1 + 0x718) = uVar4;
      *(undefined4 *)(param_1 + 0x71c) = uVar5;
    }
  }
LAB_140cdbaf4:
  if (*(longlong *)(param_1 + 0x950) != 0) {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x950) + 0xe68);
  }
  if ((*(char *)(param_1 + 0x95c) != '\0') ||
     ((lVar17 != 0 && (cVar12 = FUN_142cf3880(), cVar12 == '\0')))) {
    *(undefined8 *)(param_1 + 0x634) = 0;
  }
  return;
}



// FUNCTION 140cdbb60 FUN_140cdbb60 body=1019 status=ok
// SIG undefined FUN_140cdbb60(void)

void FUN_140cdbb60(longlong *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_98 [24];
  undefined1 local_80 [104];
  
  if (param_2 < 0.0001) {
    plVar6 = param_1 + 0x10c;
    cVar2 = FUN_14059ee90(plVar6);
    if (cVar2 != '\0') {
      FUN_1405ac8f0(plVar6,0,4);
      lVar3 = FUN_140590080(local_98);
      FUN_1405913a0(plVar6,lVar3);
      *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)(lVar3 + 0x10);
      FUN_140591060(local_98);
      return;
    }
  }
  else {
    plVar6 = (longlong *)param_1[0xc6];
    if (plVar6 != (longlong *)0x0) {
      if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar2 = (**(code **)(*plVar6 + 0x768))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_14059ee90(param_1 + 0x10c);
        if (cVar2 == '\0') {
          lVar3 = FUN_14059b7e0(param_1[0xc6],1);
        }
        else {
          lVar3 = *(longlong *)(param_1[0x10c] + 0x2d8);
        }
        if (lVar3 != 0) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          lVar5 = DAT_146b33f38;
          lVar7 = DAT_146b33f38 + 0x30;
          lVar4 = FWeakObjectPtr::Get(lVar7);
          if (lVar4 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if (DAT_1464b56f4 == *(int *)(lVar5 + 0x38)) {
              return;
            }
            if (*(longlong *)(lVar5 + 0x40) == 0) {
              return;
            }
            lVar4 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar7,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar5 + 0x38) = DAT_1464b56f4;
            }
            lVar4 = FWeakObjectPtr::Get(lVar7);
            if (lVar4 == 0) {
              return;
            }
          }
          lVar5 = FUN_142e0ceb0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar5 = FUN_1414150f0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && (*(longlong *)(lVar4 + 0x3a0) != 0)) {
              fVar11 = 0.0;
              if (*(float *)(lVar4 + 0x3c8) <= param_2) {
                fVar8 = *(float *)(lVar4 + 0x3c4);
              }
              else {
                fVar8 = *(float *)(lVar4 + 0x3c0);
              }
              fVar10 = 1.0;
              if (1.0 < fVar8) {
                fVar10 = 60.0 / fVar8;
              }
              lVar5 = FUN_140c44ae0(param_1);
              if (lVar5 != 0) {
                lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
                fVar8 = *(float *)(lVar7 + 0x79c);
                fVar11 = (float)FUN_140c41980(lVar5);
                fVar11 = fVar11 - fVar8;
                if (fVar11 <= 0.0) {
                  fVar11 = 0.0;
                }
                fVar8 = (float)FUN_140c42060(lVar5);
                if ((0.0 < fVar8) &&
                   (fVar9 = (float)((int)ROUND(fVar10 / fVar8 + fVar10 / fVar8 + 0.5) >> 1),
                   0.0 < fVar9)) {
                  fVar10 = fVar9 * fVar8;
                }
              }
              if (*(longlong *)(lVar4 + 0x3b0) != 0) {
                FUN_1405aaad0(lVar3,*(longlong *)(lVar4 + 0x3b0),fVar11,0,4);
              }
              if (*(longlong *)(lVar4 + 0x3a8) != 0) {
                FUN_1405aaad0(lVar3,*(longlong *)(lVar4 + 0x3a8),fVar10,0,4);
              }
              if (*(longlong *)(lVar4 + 0x3b8) != 0) {
                FUN_1405aaad0(lVar3,*(longlong *)(lVar4 + 0x3b8),param_2,0,4);
              }
              cVar2 = FUN_14059ee90(param_1 + 0x10c);
              if (cVar2 == '\0') {
                lVar3 = FUN_1405a3150(lVar3,local_80,*(undefined8 *)(lVar4 + 0x3a0),0);
                FUN_1405913a0(param_1 + 0x10c,lVar3);
                *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)(lVar3 + 0x10);
                FUN_140591060(local_80);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140cdbf60 FUN_140cdbf60 body=933 status=ok
// SIG undefined FUN_140cdbf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cdbf60(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  
  plVar19 = *(longlong **)(param_1 + 0x470);
  plVar3 = plVar19 + *(int *)(param_1 + 0x478);
  for (; plVar19 != plVar3; plVar19 = plVar19 + 1) {
    plVar5 = (longlong *)*plVar19;
    if (plVar5 != (longlong *)0x0) {
      lVar12 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
          lVar12 + 0x88)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) &&
         (plVar13 = (longlong *)(**(code **)(*plVar5 + 0x678))(plVar5), plVar13 != (longlong *)0x0))
      {
        lVar12 = FUN_1413f82e0();
        if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
            != lVar12 + 0x88)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          uVar10 = (**(code **)(plVar13[0x1b3] + 0x30))();
          *(undefined1 *)((longlong)plVar5 + 0x59b) = uVar10;
          lVar12 = plVar13[0x122];
          if (lVar12 != 0) {
            lVar14 = AGFreezeCharacterCue::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              plVar2 = plVar5 + 0xab;
              if (plVar2 != (longlong *)(lVar12 + 0x678)) {
                iVar17 = (int)plVar5[0xac];
                if (iVar17 != 0) {
                  plVar16 = (longlong *)(*plVar2 + 0x10);
                  do {
                    if (*plVar16 != 0) {
                      FMemory::Free();
                    }
                    plVar16 = plVar16 + 0xf;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                iVar17 = *(int *)(lVar12 + 0x680);
                lVar12 = *(longlong *)(lVar12 + 0x678);
                *(int *)(plVar5 + 0xac) = iVar17;
                if ((iVar17 == 0) && (*(int *)((longlong)plVar5 + 0x564) == 0)) {
                  *(undefined4 *)((longlong)plVar5 + 0x564) = 0;
                }
                else {
                  FUN_1409b8040(plVar2,iVar17);
                  puVar15 = (undefined8 *)*plVar2;
                  if (iVar17 != 0) {
                    puVar18 = (undefined8 *)(lVar12 + 8);
                    do {
                      *puVar15 = puVar18[-1];
                      puVar15[1] = *puVar18;
                      puVar15[2] = 0;
                      iVar4 = *(int *)(puVar18 + 2);
                      _Src = (void *)puVar18[1];
                      *(int *)(puVar15 + 3) = iVar4;
                      if (iVar4 == 0) {
                        *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
                      }
                      else {
                        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar15 + 2,iVar4,0);
                        _guard_xfg_dispatch_icall_nop((void *)puVar15[2],_Src,(longlong)iVar4 << 2);
                      }
                      *(byte *)(puVar15 + 4) =
                           *(byte *)(puVar15 + 4) ^
                           (*(byte *)(puVar15 + 4) ^ *(byte *)(puVar18 + 3)) & 1;
                      *(byte *)(puVar15 + 4) =
                           *(byte *)(puVar15 + 4) ^
                           (*(byte *)(puVar15 + 4) ^ *(byte *)(puVar18 + 3)) & 2;
                      uVar8 = puVar18[5];
                      puVar15[5] = puVar18[4];
                      puVar15[6] = uVar8;
                      uVar8 = puVar18[7];
                      puVar15[7] = puVar18[6];
                      puVar15[8] = uVar8;
                      uVar8 = puVar18[9];
                      puVar15[9] = puVar18[8];
                      puVar15[10] = uVar8;
                      puVar15[0xb] = puVar18[10];
                      uVar11 = *(undefined4 *)((longlong)puVar18 + 0x5c);
                      uVar6 = *(undefined4 *)(puVar18 + 0xc);
                      uVar7 = *(undefined4 *)((longlong)puVar18 + 100);
                      *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar18 + 0xb);
                      *(undefined4 *)((longlong)puVar15 + 100) = uVar11;
                      *(undefined4 *)(puVar15 + 0xd) = uVar6;
                      *(undefined4 *)((longlong)puVar15 + 0x6c) = uVar7;
                      puVar1 = puVar18 + 0xd;
                      puVar18 = puVar18 + 0xf;
                      puVar15[0xe] = *puVar1;
                      puVar15 = puVar15 + 0xf;
                      iVar17 = iVar17 + -1;
                    } while (iVar17 != 0);
                  }
                }
              }
            }
          }
          if ((longlong *)plVar13[0x21b] != (longlong *)0x0) {
            uVar11 = (**(code **)(*(longlong *)plVar13[0x21b] + 0x408))();
            FUN_140e652e0(plVar5,uVar11);
          }
          *(char *)((longlong)plVar5 + 0x59a) = (char)plVar13[0x1d8];
          lVar12 = plVar13[0x2d];
          if (lVar12 == 0) {
            local_74 = DAT_1468b5d98;
            puVar15 = &local_7c;
            local_7c = _DAT_1468b5d90;
          }
          else {
            puVar15 = (undefined8 *)&local_88;
            local_88 = *(undefined4 *)(lVar12 + 0x220);
            local_80 = *(undefined4 *)(lVar12 + 0x228);
            uStack_84 = *(undefined4 *)(lVar12 + 0x224);
          }
          local_68 = *puVar15;
          local_60 = *(undefined4 *)(puVar15 + 1);
          FUN_140e65300(plVar5,&local_68);
          puVar15 = (undefined8 *)(**(code **)(*plVar13 + 0x798))(plVar13,local_48);
          local_58 = *puVar15;
          local_50 = *(undefined4 *)(puVar15 + 1);
          FUN_140e65370(plVar5,&local_58);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cdc310 FUN_140cdc310 body=855 status=ok
// SIG undefined FUN_140cdc310(void)

void FUN_140cdc310(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 local_res8 [8];
  undefined1 local_138 [304];
  
  FUN_142cd9c80();
  lVar4 = *(longlong *)(param_1 + 0x950);
  if (lVar4 == 0) {
    return;
  }
  plVar1 = *(longlong **)(lVar4 + 0xe68);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x8e4) != '\0') {
    return;
  }
  *(byte *)(param_1 + 0x959) = (byte)(*(uint *)(plVar1 + 0x558) >> 2) & 1;
  lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xd88) + 0xf0))((longlong *)(lVar4 + 0xd88),0);
  if (lVar4 == 0) {
    *(undefined2 *)(param_1 + 0x961) = 0;
    *(undefined1 *)(param_1 + 0x960) = 0;
  }
  else {
    uVar2 = FUN_14307ee20(lVar4,1);
    *(undefined1 *)(param_1 + 0x962) = uVar2;
    uVar2 = FUN_14307ebb0(lVar4);
    *(undefined1 *)(param_1 + 0x961) = uVar2;
    uVar2 = FUN_14307ecd0(lVar4);
    *(undefined1 *)(param_1 + 0x960) = uVar2;
    uVar9 = FUN_14307da70(lVar4);
    *(undefined4 *)(param_1 + 0x964) = uVar9;
    cVar3 = FUN_14307eaf0(lVar4);
    if ((cVar3 != '\0') || (*(char *)(*(longlong *)(param_1 + 0x950) + 0x1cfc) != '\0')) {
      uVar2 = 1;
      goto LAB_140cdc3f7;
    }
  }
  uVar2 = 0;
LAB_140cdc3f7:
  *(undefined1 *)(param_1 + 0x969) = uVar2;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0xbc0))();
  if ((((cVar3 == '\0') || (*(char *)(param_1 + 0x959) != '\0')) ||
      (*(char *)(param_1 + 0x962) != '\0')) || (*(char *)(param_1 + 0x960) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x968) = uVar2;
  *(undefined1 *)(param_1 + 0x95a) = *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x1122);
  *(int *)(param_1 + 0x5b0) = (int)plVar1[0x51a];
  *(byte *)(param_1 + 0x958) = *(byte *)(plVar1 + 0x32d) & 1;
  if ((((*(byte *)(plVar1 + 0x558) & 0x20) == 0) || ((char)plVar1[0x49] != '\x06')) ||
     ((*(char *)((longlong)plVar1 + 0x249) != '\0' || (plVar1[0x2f] == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x95d) = uVar2;
  if ((((char)plVar1[0x49] == '\x06') && (*(char *)((longlong)plVar1 + 0x249) == '\0')) &&
     (plVar1[0x2f] != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x95c) = uVar2;
  bVar8 = (char)plVar1[0x575] == '\x04';
  if ((bVar8) && (*(char *)(param_1 + 0x95f) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x95e) = uVar2;
  *(bool *)(param_1 + 0x95f) = bVar8;
  uVar2 = (**(code **)(*plVar1 + 0xbf0))(plVar1);
  *(undefined1 *)(param_1 + 0x95b) = uVar2;
  uVar9 = FUN_140c42c20(*(undefined8 *)(param_1 + 0x950),0,0x3e800000,
                        *(undefined8 *)(param_1 + 0x440));
  *(undefined4 *)(param_1 + 0x994) = uVar9;
  lVar4 = plVar1[0x570];
  if (lVar4 != 0) {
    uVar2 = FUN_140738520(lVar4);
    *(undefined1 *)(param_1 + 0x971) = uVar2;
    FUN_140739490(lVar4);
    lVar5 = APlayerState::GetOldPlayerName(lVar4,local_138);
    lVar5 = *(longlong *)(lVar5 + 8);
    *(longlong *)(param_1 + 0x978) = lVar5;
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x980) = uVar6;
    cVar3 = FUN_14073cf40(lVar4);
    if (((cVar3 == '\0') &&
        (piVar7 = (int *)ABBQPlayerState::GetAssignedStarSignPerk(lVar4,local_res8), *piVar7 == 0))
       && (piVar7[1] == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x988) = uVar2;
    cVar3 = FUN_140738520(lVar4);
    *(bool *)(param_1 + 0x989) = cVar3 == '\0';
    *(undefined1 *)(param_1 + 0x98a) = *(undefined1 *)(lVar4 + 0x618);
    cVar3 = FUN_140737740(lVar4);
    *(bool *)(param_1 + 0x98b) = cVar3 == '\x03';
    if ((cVar3 == '\x03') && (*(char *)(param_1 + 0x989) != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0x98c) = uVar2;
  }
  fVar10 = (float)FUN_142268750(param_1,DAT_14686c960);
  *(float *)(param_1 + 0xacc) = 1.0 - fVar10;
  if ((*(char *)(param_1 + 0xac8) == '\0') ||
     (cVar3 = (**(code **)(*plVar1 + 0x558))(plVar1), cVar3 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x5a8) = uVar2;
  cVar3 = (**(code **)(*plVar1 + 0x558))(plVar1);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0xac8) = 0;
  }
  return;
}



// FUNCTION 140cdc670 FUN_140cdc670 body=248 status=ok
// SIG undefined FUN_140cdc670(void)

void FUN_140cdc670(longlong *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 local_res8;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((lVar4 != 0) && (lVar4 = UWorld::GetWorldSettings(lVar4,0,1), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x658), lVar4 != 0)) {
    lVar5 = FUN_141437aa0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (cVar1 = *(char *)(lVar4 + 0x2e), cVar1 != '\0')) &&
       (cVar2 = *(char *)(lVar4 + 0x2d), cVar2 != '\0')) {
      local_res8 = CONCAT11(cVar2,cVar1);
      if ((cVar1 == (char)param_1[0x13f]) && (cVar2 == *(char *)((longlong)param_1 + 0x9f9))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        *(undefined2 *)(param_1 + 0x13f) = local_res8;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x145,0);
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar4 != 0) {
          uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          UWorld::PopulateStreamingLevelsToConsider(uVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cdc770 FUN_140cdc770 body=1166 status=ok
// SIG undefined FUN_140cdc770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cdc770(longlong param_1,undefined8 param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [4];
  float local_9c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78 [4];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x9a8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9a8) + 0x4d0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  local_a8 = param_2;
  fVar9 = (float)(**(code **)(*plVar1 + 0x7f0))();
  fVar9 = 1.0 / fVar9;
  fVar23 = ABS(fVar9 * *param_3);
  if (ABS(fVar9 * *param_3) <= ABS(fVar9 * param_3[1])) {
    fVar23 = ABS(fVar9 * param_3[1]);
  }
  fVar12 = ABS(fVar9 * param_3[2]);
  if (ABS(fVar9 * param_3[2]) <= fVar23) {
    fVar12 = fVar23;
  }
  if (*(longlong *)(param_1 + 0x950) == 0) {
    return;
  }
  if (fVar12 < 100.0) {
    return;
  }
  uVar4 = UAnimInstance::IsPlayingSlotAnimation
                    (param_1,*(undefined8 *)(param_1 + 0xac0),*(undefined8 *)(param_1 + 0xa68));
  if ((char)uVar4 != '\0') {
    return;
  }
  if (1e-08 < ABS(local_a8._4_4_ - (float)local_a8)) {
    fVar23 = (fVar12 - (float)local_a8) / (local_a8._4_4_ - (float)local_a8);
    if (fVar23 < 0.0) {
      fVar23 = 0.0;
      goto LAB_140cdc89a;
    }
  }
  else if (fVar12 < local_a8._4_4_) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = 1.0;
  }
  if (1.0 <= fVar23) {
    fVar23 = 1.0;
  }
LAB_140cdc89a:
  lVar7 = *(longlong *)(param_1 + 0x950);
  *(float *)(param_1 + 0xa38) = fVar23 * 0.39999998 + 0.3;
  lVar8 = *(longlong *)(lVar7 + 0x168);
  if (lVar8 != 0) {
    local_88 = *(float *)(lVar8 + 0x210);
    fStack_84 = *(float *)(lVar8 + 0x214);
    fStack_80 = *(float *)(lVar8 + 0x218);
    fStack_7c = *(float *)(lVar8 + 0x21c);
    auVar11._4_4_ = -(uint)(fStack_84 != *(float *)(lVar8 + 0x254));
    auVar11._0_4_ = -(uint)(local_88 != *(float *)(lVar8 + 0x250));
    auVar11._8_4_ = -(uint)(fStack_80 != *(float *)(lVar8 + 600));
    auVar11._12_4_ = -(uint)(fStack_7c != *(float *)(lVar8 + 0x25c));
    iVar5 = movmskps(uVar4,auVar11);
    if (iVar5 != 0) {
      *(float *)(lVar8 + 0x250) = local_88;
      *(float *)(lVar8 + 0x254) = fStack_84;
      *(float *)(lVar8 + 600) = fStack_80;
      *(float *)(lVar8 + 0x25c) = fStack_7c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_88,&local_b8);
      *(undefined8 *)(lVar8 + 0x260) = *puVar6;
      *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar6 + 1);
      lVar7 = *(longlong *)(param_1 + 0x950);
    }
  }
  lVar7 = *(longlong *)(lVar7 + 0x168);
  if (lVar7 == 0) {
    fVar23 = 0.0;
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar19 = (float)(_DAT_14686c560 & _DAT_14686c570);
    fVar20 = (float)(uRam000000014686c564 & uRam000000014686c574);
    fVar21 = (float)(uRam000000014686c568 & uRam000000014686c578);
    uVar22 = (uint)fRam000000014686c56c & uRam000000014686c57c;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = fRam000000014686c56c;
  }
  else {
    fVar23 = *(float *)(lVar7 + 0x220);
    fVar9 = *(float *)(lVar7 + 0x224);
    fVar12 = *(float *)(lVar7 + 0x228);
    fVar13 = *(float *)(lVar7 + 0x22c);
    fVar19 = *(float *)(lVar7 + 0x230);
    fVar20 = *(float *)(lVar7 + 0x234);
    fVar21 = *(float *)(lVar7 + 0x238);
    uVar22 = *(uint *)(lVar7 + 0x23c);
    fVar24 = *(float *)(lVar7 + 0x210);
    fVar25 = *(float *)(lVar7 + 0x214);
    fVar26 = *(float *)(lVar7 + 0x218);
    fVar27 = *(float *)(lVar7 + 0x21c);
  }
  fVar24 = fVar24 * _DAT_14686c620;
  fVar25 = fVar25 * fRam000000014686c624;
  fVar26 = fVar26 * fRam000000014686c628;
  fVar27 = fVar27 * fRam000000014686c62c;
  fVar16 = (float)((uint)(*(float *)(param_4 + 0x14) - fVar23) & _DAT_14686c570);
  fVar17 = (float)((uint)(*(float *)(param_4 + 0x18) - fVar9) & uRam000000014686c574);
  fVar18 = (float)((uint)(*(float *)(param_4 + 0x1c) - fVar12) & uRam000000014686c578);
  fVar9 = (float)((uint)(0.0 - fVar13) & uRam000000014686c57c);
  fVar23 = fVar18 * fVar25 - fVar17 * fVar26;
  fVar12 = fVar16 * fVar26 - fVar18 * fVar24;
  fVar14 = fVar17 * fVar24 - fVar16 * fVar25;
  fVar9 = fVar9 * fVar27 - fVar9 * fVar27;
  fVar23 = fVar23 + fVar23;
  fVar12 = fVar12 + fVar12;
  fVar14 = fVar14 + fVar14;
  auVar10._0_4_ = fVar12 * fVar26;
  auVar10._4_4_ = fVar14 * fVar24;
  auVar10._8_4_ = fVar23 * fVar25;
  auVar10._12_4_ = (fVar9 + fVar9) * fVar27;
  auVar2._4_4_ = fVar20;
  auVar2._0_4_ = fVar19;
  auVar2._8_4_ = fVar21;
  auVar2._12_4_ = uVar22;
  auVar11 = rcpps(auVar10,auVar2);
  fVar9 = auVar11._0_4_;
  fVar13 = auVar11._4_4_;
  fVar15 = auVar11._8_4_;
  fVar9 = (fVar9 + fVar9) - fVar19 * fVar9 * fVar9;
  fVar13 = (fVar13 + fVar13) - fVar20 * fVar13 * fVar13;
  fVar15 = (fVar15 + fVar15) - fVar21 * fVar15 * fVar15;
  fVar9 = (fVar9 + fVar9) - fVar19 * fVar9 * fVar9;
  fVar13 = (fVar13 + fVar13) - fVar20 * fVar13 * fVar13;
  fVar15 = (fVar15 + fVar15) - fVar21 * fVar15 * fVar15;
  local_b8 = (float)((uint)fVar9 ^
                    -(uint)((float)((uint)fVar19 & _DAT_14686c5f0) <= _DAT_14686c610) & (uint)fVar9)
             * ((fVar14 * fVar25 - auVar10._0_4_) + fVar23 * fVar27 + fVar16);
  local_b4 = (float)((uint)fVar13 ^
                    -(uint)((float)((uint)fVar20 & uRam000000014686c5f4) <= fRam000000014686c614) &
                    (uint)fVar13) * ((fVar23 * fVar26 - auVar10._4_4_) + fVar12 * fVar27 + fVar17);
  local_b0 = (float)((uint)fVar15 ^
                    -(uint)((float)((uint)fVar21 & uRam000000014686c5f8) <= fRam000000014686c618) &
                    (uint)fVar15) * ((fVar12 * fVar24 - auVar10._8_4_) + fVar14 * fVar27 + fVar18);
  FVector::Rotation(&local_b8,local_a0);
  local_78[0] = *(undefined8 *)(param_1 + 0xaa0);
  local_9c = local_9c + 45.0;
  local_78[1] = *(undefined8 *)(param_1 + 0xab8);
  local_78[2] = *(undefined8 *)(param_1 + 0xaa8);
  local_78[3] = *(undefined8 *)(param_1 + 0xab0);
  fVar23 = (float)(int)(local_9c * 0.0027777778) * 360.0;
  if (ABS(local_9c) < ABS(fVar23)) {
    fVar23 = local_9c;
  }
  local_9c = local_9c - fVar23;
  if (local_9c < 0.0) {
    local_9c = local_9c + 360.0;
  }
  lVar7 = FUN_14227ddc0(param_1,local_78 + (int)(local_9c * 0.011111111));
  if (lVar7 != 0) {
    lVar8 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (fVar23 = (float)FUN_14225e8a0(param_1,DAT_14686c978), fVar23 == 0.0)) {
      local_c8 = 0;
      local_d0 = 0xbf800000;
      local_d8 = 1;
      local_e0 = 0x3f800000;
      local_e8 = 0x3e800000;
      *(longlong *)(param_1 + 0xac0) = lVar7;
      FUN_14227a0e0(param_1,lVar7,*(undefined8 *)(param_1 + 0xa68),0);
    }
  }
  return;
}



// FUNCTION 140cdcc00 FUN_140cdcc00 body=114 status=ok
// SIG undefined FUN_140cdcc00(void)

void FUN_140cdcc00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x318) = 0;
      FUN_1412007b0(lVar1 + 0x7a0,2);
    }
  }
  return;
}



// FUNCTION 140cdcc80 FUN_140cdcc80 body=123 status=ok
// SIG undefined FUN_140cdcc80(void)

void FUN_140cdcc80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(param_1 + 0x318) == '\0')) {
      *(undefined1 *)(param_1 + 0x318) = 1;
      FUN_141200a80(lVar1 + 0x7a0,2);
    }
  }
  return;
}



// FUNCTION 140cdcd00 FUN_140cdcd00 body=109 status=ok
// SIG undefined FUN_140cdcd00(void)

ulonglong FUN_140cdcd00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((((char)in_RAX != '\0') && (in_RAX = *(ulonglong *)(lVar2 + 0xd50), in_RAX != 0)) &&
       (*(char *)(in_RAX + 0x5a9) != '\0')) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140cdcd70 FUN_140cdcd70 body=38 status=ok
// SIG undefined FUN_140cdcd70(void)

void FUN_140cdcd70(void)

{
  longlong lVar1;
  
  lVar1 = FMemory::Malloc(0x580,0);
  if (lVar1 != 0) {
    FUN_140a7a800(lVar1);
    return;
  }
  return;
}



// FUNCTION 140cdcdb0 FUN_140cdcdb0 body=122 status=ok
// SIG undefined FUN_140cdcdb0(void)

ulonglong FUN_140cdcdb0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cfae90();
  if ((int)uVar3 == -1) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x18);
    *puVar1 = 0;
    *puVar1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    uVar3 = (ulonglong)uVar2;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return uVar3;
}



// FUNCTION 140cdce30 FUN_140cdce30 body=708 status=ok
// SIG undefined FUN_140cdce30(void)

longlong FUN_140cdce30(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  byte *pbVar8;
  byte local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  local_70 = *param_2;
  plVar6 = (longlong *)param_2[2];
  local_68 = param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_60 = plVar6;
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FKey::IsFloatAxis(&local_70);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  lVar7 = *param_4;
  lVar5 = param_4[1];
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 == (longlong *)0x0) {
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = 0;
    }
  }
  else {
    *plVar6 = (longlong)&PTR_FUN_1444f7eb0;
    FWeakObjectPtr::operator=(plVar6 + 1,param_3);
    plVar6[2] = lVar7;
    plVar6[3] = lVar5;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_1444f7ef8;
    FUN_140cf7730(plVar6,&local_58);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar7 = FMemory::Realloc(plVar6,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  plVar6 = (longlong *)(param_1 + 0x1a8);
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(int *)(param_1 + 0x1b0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x1b4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar6,iVar3);
  }
  pbVar8 = (byte *)((longlong)iVar3 * 0x40 + *plVar6);
  *pbVar8 = local_78 & 0xfd | 1;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  *(undefined8 *)(pbVar8 + 8) = local_70;
  *(undefined8 *)(pbVar8 + 0x10) = local_68;
  *(longlong **)(pbVar8 + 0x18) = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  pbVar8[0x20] = 0;
  pbVar8[0x21] = 0;
  pbVar8[0x22] = 0;
  pbVar8[0x23] = 0;
  pbVar8[0x24] = 0;
  pbVar8[0x25] = 0;
  pbVar8[0x26] = 0;
  pbVar8[0x27] = 0;
  pbVar8[0x28] = 0;
  pbVar8[0x29] = 0;
  pbVar8[0x2a] = 0;
  pbVar8[0x2b] = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(pbVar8 + 0x20,&local_58);
  *(undefined4 *)(pbVar8 + 0x30) = local_48;
  *(undefined4 *)(pbVar8 + 0x34) = local_44;
  *(undefined8 *)(pbVar8 + 0x38) = local_40;
  iVar3 = *(int *)(param_1 + 0x1b0);
  lVar7 = *plVar6;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
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
  plVar6 = (longlong *)param_2[2];
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
  return (longlong)(iVar3 + -1) * 0x40 + lVar7;
}



// FUNCTION 140cdd100 FUN_140cdd100 body=270 status=ok
// SIG undefined FUN_140cdd100(void)

undefined8
FUN_140cdd100(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  uint local_20;
  
  local_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  plVar4 = (longlong *)param_2[2];
  local_38 = *param_2;
  local_30 = param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_20 = local_20 & 0xfffffff0;
  local_28 = plVar4;
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
  uVar6 = FUN_140ae96a0(param_1,&local_38,param_3,param_4,&local_48);
  plVar4 = (longlong *)param_2[2];
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
  return uVar6;
}



// FUNCTION 140cdd210 FUN_140cdd210 body=239 status=ok
// SIG undefined FUN_140cdd210(void)

void FUN_140cdd210(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144012f78;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140cdd300 FUN_140cdd300 body=512 status=ok
// SIG undefined FUN_140cdd300(void)

void FUN_140cdd300(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_res18;
  undefined1 local_50 [24];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  piVar5 = (int *)*param_1;
  if (param_3 != 0) {
    piVar3 = piVar5 + 0x14;
    piVar4 = (int *)(param_2 + 0x18);
    local_res18 = param_3;
    do {
      *piVar5 = piVar4[-6];
      *(char *)(piVar3 + -0x13) = (char)piVar4[-5];
      *(undefined1 *)((longlong)piVar3 + -0x4b) = *(undefined1 *)((longlong)piVar4 + -0x13);
      piVar3[-0x12] = piVar4[-4];
      piVar3[-0x11] = piVar4[-3];
      piVar3[-0x10] = 0;
      piVar3[-0xf] = 0;
      iVar6 = *piVar4;
      lVar1 = *(longlong *)(piVar4 + -2);
      piVar3[-0xe] = iVar6;
      if (iVar6 == 0) {
        piVar3[-0xd] = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(piVar3 + -0x10,iVar6,0);
        lVar2 = *(longlong *)(piVar3 + -0x10);
        do {
          FUN_140e135e0(lVar2,lVar1);
          lVar2 = lVar2 + 0x30;
          lVar1 = lVar1 + 0x30;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      piVar3[-0xc] = 0;
      piVar3[-0xb] = 0;
      iVar6 = piVar4[4];
      _Src = *(void **)(piVar4 + 2);
      piVar3[-10] = iVar6;
      if (iVar6 == 0) {
        piVar3[-9] = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(piVar3 + -0xc,iVar6,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + -0xc),_Src,(longlong)iVar6);
      }
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[-8] = -1;
      piVar3[-7] = 0;
      piVar3[-4] = 0;
      piVar3[-3] = 0;
      *piVar3 = 0;
      if (0x7fffffff < (uint)piVar3[1]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar3 + -2,0);
      }
      if (*(undefined2 **)(piVar3 + -2) != (undefined2 *)0x0) {
        **(undefined2 **)(piVar3 + -2) = 0;
      }
      piVar3[-6] = 0;
      piVar3[-8] = piVar4[6];
      piVar3[-7] = piVar4[7];
      piVar3[-6] = piVar4[8];
      FString::FString(local_50,piVar4 + 0xc);
      FSoftObjectPath::operator=(piVar3 + -4);
      piVar5 = piVar5 + 0x18;
      *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar4 + 0x10);
      piVar4 = piVar4 + 0x18;
      piVar3 = piVar3 + 0x18;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}



// FUNCTION 140cdd500 FUN_140cdd500 body=370 status=ok
// SIG undefined FUN_140cdd500(void)

void FUN_140cdd500(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_140d0d3f0(param_1,param_3 + param_5,param_4);
  puVar4 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 8;
    puVar3 = (undefined8 *)(puVar4 + 0xa8);
    do {
      *puVar4 = *(undefined1 *)(param_2 + -8);
      FText::FText(puVar3 + -0x14,param_2);
      FText::FText(puVar3 + -0x11,param_2 + 0x18);
      FText::FText(puVar3 + -0xe,param_2 + 0x30);
      FString::FString(puVar3 + -0xb,param_2 + 0x48);
      *(undefined4 *)(puVar3 + -9) = *(undefined4 *)(param_2 + 0x58);
      FString::FString(puVar3 + -8,param_2 + 0x60);
      puVar3[-6] = *(undefined8 *)(param_2 + 0x70);
      puVar3[-5] = *(undefined8 *)(param_2 + 0x78);
      puVar3[-4] = &PTR_FUN_143f73d18;
      puVar3[-3] = *(undefined8 *)(param_2 + 0x88);
      lVar2 = *(longlong *)(param_2 + 0x90);
      puVar3[-2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3[-4] = &PTR_FUN_143f740c8;
      puVar4 = puVar4 + 0xb8;
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 0xa8);
      puVar1 = (undefined1 *)(param_2 + 0xa9);
      param_2 = param_2 + 0xb8;
      *(undefined1 *)((longlong)puVar3 + 9) = *puVar1;
      puVar3 = puVar3 + 0x17;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cdd680 CreateUObject<AFlarePlayerController> body=126 status=ok
// SIG undefined CreateUObject<AFlarePlayerController>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(puVar5 + 1,param_2);
    *(undefined4 *)(puVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_143f77bd0;
  }
  return param_1;
}



// FUNCTION 140cdd700 FUN_140cdd700 body=682 status=ok
// SIG undefined FUN_140cdd700(void)

int * FUN_140cdd700(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  void *_Dst;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  bool local_res8;
  
  uVar11 = 0xffffffff;
  iVar10 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar8 = *(int *)((longlong)iVar13 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar14 = (longlong *)((longlong)iVar13 * 0x20 + *param_1);
  uVar2 = param_3[1];
  *plVar14 = *(longlong *)*param_3;
  FString::FString(plVar14 + 1,uVar2);
  *(undefined4 *)(plVar14 + 3) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar13 != 1) {
    lVar3 = *plVar14;
    iVar9 = iVar10;
    if (iVar13 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar3) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar10;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar14,0x18);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar10;
      }
      puVar7 = (undefined4 *)((longlong)iVar10 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar11 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140cdd986;
    }
  }
  cVar5 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar5 == '\0') {
    uVar12 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x1c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_140cdd986:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140cdd9b0 FUN_140cdd9b0 body=161 status=ok
// SIG undefined FUN_140cdd9b0(void)

longlong FUN_140cdd9b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0xb8 + lVar4;
  while( true ) {
    if (lVar4 == lVar5) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return 0;
    }
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    if (*(int *)(lVar4 + 0x70) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(lVar4 + 0x68);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) break;
    lVar4 = lVar4 + 0xb8;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return lVar4;
}



// FUNCTION 140cdda60 FUN_140cdda60 body=478 status=ok
// SIG undefined FUN_140cdda60(void)

/* WARNING: Removing unreachable block (ram,0x000140cddc35) */
/* WARNING: Removing unreachable block (ram,0x000140cddbbe) */

longlong FUN_140cdda60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = FUN_141369570();
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
          lVar6 = FUN_141369570();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = FUN_141369570();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = FUN_141369570();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140cddc40 FUN_140cddc40 body=478 status=ok
// SIG undefined FUN_140cddc40(void)

/* WARNING: Removing unreachable block (ram,0x000140cdde15) */
/* WARNING: Removing unreachable block (ram,0x000140cddd9e) */

longlong FUN_140cddc40(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = AGImpulseWindProjectile::GetPrivateStaticClass();
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
          lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = AGImpulseWindProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140cdde20 FUN_140cdde20 body=478 status=ok
// SIG undefined FUN_140cdde20(void)

/* WARNING: Removing unreachable block (ram,0x000140cddff5) */
/* WARNING: Removing unreachable block (ram,0x000140cddf7e) */

longlong FUN_140cdde20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = FUN_141387d00();
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
          lVar6 = FUN_141387d00();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = FUN_141387d00();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = FUN_141387d00();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140cde000 FUN_140cde000 body=478 status=ok
// SIG undefined FUN_140cde000(void)

/* WARNING: Removing unreachable block (ram,0x000140cde1d5) */
/* WARNING: Removing unreachable block (ram,0x000140cde15e) */

longlong FUN_140cde000(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = UEditableTextBoxWidgetStyle::StaticClass();
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
          lVar6 = UEditableTextBoxWidgetStyle::StaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = UEditableTextBoxWidgetStyle::StaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = UEditableTextBoxWidgetStyle::StaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140cde1e0 GenerateKeyArray<FDefaultAllocator> body=397 status=ok
// SIG undefined GenerateKeyArray<FDefaultAllocator>(void)

void TMapBase<AActor_*,TArray<FHitResult,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,TArray<FHitResult,FDefaultAllocator>,0>_>
     ::GenerateKeyArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  lVar5 = param_1[1];
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != (int)lVar5 - iVar2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar2 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puStack_20;
    }
    uVar3 = *puVar7;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140cde2bb;
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
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_140cde2bb:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar6 = local_48._4_4_;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  bVar4 = local_48._4_4_ < iVar2;
  local_48 = puStack_20;
  local_30 = param_1;
  uStack_40 = 0xffffffff;
  iStack_3c = iVar6;
  if (bVar4) {
    do {
      iVar6 = iStack_3c;
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)((longlong)iVar6 * 0x20 + *param_1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 140cde370 GetDefaultObject<UDamageType> body=43 status=ok
// SIG undefined GetDefaultObject<UDamageType>(void)

longlong UClass::GetDefaultObject<UDamageType>(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1f];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x368))();
    lVar1 = param_1[0x1f];
  }
  return lVar1;
}



// FUNCTION 140cde3a0 GetGameState<APVPGameState> body=89 status=ok
// SIG undefined GetGameState<APVPGameState>(void)

longlong UWorld::GetGameState<APVPGameState>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    lVar3 = FUN_1414bbaa0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
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



// FUNCTION 140cde400 FUN_140cde400 body=1653 status=ok
// SIG undefined FUN_140cde400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cde400(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  
  iVar26 = (param_2 + -2) / 2;
  if (-1 < iVar26) {
    iVar28 = iVar26 * 2 + 1;
    iVar2 = iVar28;
    iVar29 = iVar26;
joined_r0x000140cde446:
    do {
      if (iVar28 < param_2) {
        iVar28 = iVar26 * 2;
        iVar27 = iVar28 + 1;
        if (iVar28 + 2 < param_2) {
          if ((longlong)param_1[(longlong)iVar28 * 0x17 + 0x3d] <
              (longlong)param_1[(longlong)iVar27 * 0x17 + 0xf]) {
            iVar27 = iVar28;
          }
          iVar27 = iVar27 + 1;
        }
        puVar30 = param_1 + (longlong)iVar27 * 0x17;
        puVar31 = param_1 + (longlong)iVar26 * 0x17;
        if ((longlong)puVar31[0xf] < (longlong)puVar30[0xf]) {
          if (puVar31 != puVar30) {
            uVar3 = *puVar31;
            uVar4 = puVar31[1];
            uVar1 = puVar31[0x16];
            uVar5 = puVar31[2];
            uVar6 = puVar31[3];
            uVar7 = puVar31[4];
            uVar8 = puVar31[5];
            uVar9 = puVar31[6];
            uVar10 = puVar31[7];
            uVar11 = puVar31[8];
            uVar12 = puVar31[9];
            uVar13 = puVar31[10];
            uVar14 = puVar31[0xb];
            uVar15 = puVar31[0xc];
            uVar16 = puVar31[0xd];
            uVar17 = puVar31[0xe];
            uVar18 = puVar31[0xf];
            uVar19 = puVar31[0x10];
            uVar20 = puVar31[0x11];
            uVar21 = puVar31[0x12];
            uVar22 = puVar31[0x13];
            uVar23 = puVar31[0x14];
            uVar24 = puVar31[0x15];
            uVar25 = puVar30[1];
            *puVar31 = *puVar30;
            puVar31[1] = uVar25;
            uVar25 = puVar30[3];
            puVar31[2] = puVar30[2];
            puVar31[3] = uVar25;
            uVar25 = puVar30[5];
            puVar31[4] = puVar30[4];
            puVar31[5] = uVar25;
            uVar25 = puVar30[7];
            puVar31[6] = puVar30[6];
            puVar31[7] = uVar25;
            uVar25 = puVar30[9];
            puVar31[8] = puVar30[8];
            puVar31[9] = uVar25;
            uVar25 = puVar30[0xb];
            puVar31[10] = puVar30[10];
            puVar31[0xb] = uVar25;
            uVar25 = puVar30[0xd];
            puVar31[0xc] = puVar30[0xc];
            puVar31[0xd] = uVar25;
            uVar25 = puVar30[0xf];
            puVar31[0xe] = puVar30[0xe];
            puVar31[0xf] = uVar25;
            uVar25 = puVar30[0x11];
            puVar31[0x10] = puVar30[0x10];
            puVar31[0x11] = uVar25;
            uVar25 = puVar30[0x13];
            puVar31[0x12] = puVar30[0x12];
            puVar31[0x13] = uVar25;
            uVar25 = puVar30[0x15];
            puVar31[0x14] = puVar30[0x14];
            puVar31[0x15] = uVar25;
            puVar31[0x16] = puVar30[0x16];
            *puVar30 = uVar3;
            puVar30[1] = uVar4;
            puVar30[2] = uVar5;
            puVar30[3] = uVar6;
            puVar30[4] = uVar7;
            puVar30[5] = uVar8;
            puVar30[6] = uVar9;
            puVar30[7] = uVar10;
            puVar30[8] = uVar11;
            puVar30[9] = uVar12;
            puVar30[10] = uVar13;
            puVar30[0xb] = uVar14;
            puVar30[0xc] = uVar15;
            puVar30[0xd] = uVar16;
            puVar30[0xe] = uVar17;
            puVar30[0xf] = uVar18;
            puVar30[0x10] = uVar19;
            puVar30[0x11] = uVar20;
            puVar30[0x12] = uVar21;
            puVar30[0x13] = uVar22;
            puVar30[0x14] = uVar23;
            puVar30[0x15] = uVar24;
            puVar30[0x16] = uVar1;
          }
          iVar28 = iVar27 * 2 + 1;
          iVar26 = iVar27;
          goto joined_r0x000140cde446;
        }
      }
      iVar28 = iVar2 + -2;
      iVar26 = iVar29 + -1;
      iVar2 = iVar28;
      iVar29 = iVar26;
    } while (-1 < iVar26);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar30 = param_1 + (longlong)param_2 * 0x17;
    do {
      if (param_1 != puVar30) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x16];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = param_1[0x14];
        uVar24 = param_1[0x15];
        uVar25 = puVar30[1];
        *param_1 = *puVar30;
        param_1[1] = uVar25;
        uVar25 = puVar30[3];
        param_1[2] = puVar30[2];
        param_1[3] = uVar25;
        uVar25 = puVar30[5];
        param_1[4] = puVar30[4];
        param_1[5] = uVar25;
        uVar25 = puVar30[7];
        param_1[6] = puVar30[6];
        param_1[7] = uVar25;
        uVar25 = puVar30[9];
        param_1[8] = puVar30[8];
        param_1[9] = uVar25;
        uVar25 = puVar30[0xb];
        param_1[10] = puVar30[10];
        param_1[0xb] = uVar25;
        uVar25 = puVar30[0xd];
        param_1[0xc] = puVar30[0xc];
        param_1[0xd] = uVar25;
        uVar25 = puVar30[0xf];
        param_1[0xe] = puVar30[0xe];
        param_1[0xf] = uVar25;
        uVar25 = puVar30[0x11];
        param_1[0x10] = puVar30[0x10];
        param_1[0x11] = uVar25;
        uVar25 = puVar30[0x13];
        param_1[0x12] = puVar30[0x12];
        param_1[0x13] = uVar25;
        uVar25 = puVar30[0x15];
        param_1[0x14] = puVar30[0x14];
        param_1[0x15] = uVar25;
        param_1[0x16] = puVar30[0x16];
        *puVar30 = uVar3;
        puVar30[1] = uVar4;
        puVar30[2] = uVar5;
        puVar30[3] = uVar6;
        puVar30[4] = uVar7;
        puVar30[5] = uVar8;
        puVar30[6] = uVar9;
        puVar30[7] = uVar10;
        puVar30[8] = uVar11;
        puVar30[9] = uVar12;
        puVar30[10] = uVar13;
        puVar30[0xb] = uVar14;
        puVar30[0xc] = uVar15;
        puVar30[0xd] = uVar16;
        puVar30[0xe] = uVar17;
        puVar30[0xf] = uVar18;
        puVar30[0x10] = uVar19;
        puVar30[0x11] = uVar20;
        puVar30[0x12] = uVar21;
        puVar30[0x13] = uVar22;
        puVar30[0x14] = uVar23;
        puVar30[0x15] = uVar24;
        puVar30[0x16] = uVar1;
      }
      iVar26 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar26 * 2;
          iVar28 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if ((longlong)param_1[(longlong)iVar2 * 0x17 + 0x3d] <
                (longlong)param_1[(longlong)iVar28 * 0x17 + 0xf]) {
              iVar28 = iVar2;
            }
            iVar28 = iVar28 + 1;
          }
          puVar31 = param_1 + (longlong)iVar28 * 0x17;
          puVar32 = param_1 + (longlong)iVar26 * 0x17;
          if ((longlong)puVar31[0xf] <= (longlong)puVar32[0xf]) break;
          if (puVar32 != puVar31) {
            uVar3 = *puVar32;
            uVar4 = puVar32[1];
            uVar1 = puVar32[0x16];
            uVar5 = puVar32[2];
            uVar6 = puVar32[3];
            uVar7 = puVar32[4];
            uVar8 = puVar32[5];
            uVar9 = puVar32[6];
            uVar10 = puVar32[7];
            uVar11 = puVar32[8];
            uVar12 = puVar32[9];
            uVar13 = puVar32[10];
            uVar14 = puVar32[0xb];
            uVar15 = puVar32[0xc];
            uVar16 = puVar32[0xd];
            uVar17 = puVar32[0xe];
            uVar18 = puVar32[0xf];
            uVar19 = puVar32[0x10];
            uVar20 = puVar32[0x11];
            uVar21 = puVar32[0x12];
            uVar22 = puVar32[0x13];
            uVar23 = puVar32[0x14];
            uVar24 = puVar32[0x15];
            uVar25 = puVar31[1];
            *puVar32 = *puVar31;
            puVar32[1] = uVar25;
            uVar25 = puVar31[3];
            puVar32[2] = puVar31[2];
            puVar32[3] = uVar25;
            uVar25 = puVar31[5];
            puVar32[4] = puVar31[4];
            puVar32[5] = uVar25;
            uVar25 = puVar31[7];
            puVar32[6] = puVar31[6];
            puVar32[7] = uVar25;
            uVar25 = puVar31[9];
            puVar32[8] = puVar31[8];
            puVar32[9] = uVar25;
            uVar25 = puVar31[0xb];
            puVar32[10] = puVar31[10];
            puVar32[0xb] = uVar25;
            uVar25 = puVar31[0xd];
            puVar32[0xc] = puVar31[0xc];
            puVar32[0xd] = uVar25;
            uVar25 = puVar31[0xf];
            puVar32[0xe] = puVar31[0xe];
            puVar32[0xf] = uVar25;
            uVar25 = puVar31[0x11];
            puVar32[0x10] = puVar31[0x10];
            puVar32[0x11] = uVar25;
            uVar25 = puVar31[0x13];
            puVar32[0x12] = puVar31[0x12];
            puVar32[0x13] = uVar25;
            uVar25 = puVar31[0x15];
            puVar32[0x14] = puVar31[0x14];
            puVar32[0x15] = uVar25;
            puVar32[0x16] = puVar31[0x16];
            *puVar31 = uVar3;
            puVar31[1] = uVar4;
            puVar31[2] = uVar5;
            puVar31[3] = uVar6;
            puVar31[4] = uVar7;
            puVar31[5] = uVar8;
            puVar31[6] = uVar9;
            puVar31[7] = uVar10;
            puVar31[8] = uVar11;
            puVar31[9] = uVar12;
            puVar31[10] = uVar13;
            puVar31[0xb] = uVar14;
            puVar31[0xc] = uVar15;
            puVar31[0xd] = uVar16;
            puVar31[0xe] = uVar17;
            puVar31[0xf] = uVar18;
            puVar31[0x10] = uVar19;
            puVar31[0x11] = uVar20;
            puVar31[0x12] = uVar21;
            puVar31[0x13] = uVar22;
            puVar31[0x14] = uVar23;
            puVar31[0x15] = uVar24;
            puVar31[0x16] = uVar1;
          }
          iVar26 = iVar28;
        } while (iVar28 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar30 = puVar30 + -0x17;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140cdea80 FUN_140cdea80 body=2372 status=ok
// SIG undefined FUN_140cdea80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cdea80(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_658 [48];
  longlong local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_658;
    fVar14 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xb8 + param_2 * 0xb8;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
    local_328 = (undefined4)(longlong)(fVar14 + fVar14);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar13 = &local_338;
    do {
      puVar12 = (undefined8 *)*plVar13;
      puVar7 = (undefined8 *)plVar13[1];
      lVar1 = plVar13[2];
      local_628._0_4_ = (int)lVar1;
      lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar7 - (longlong)puVar12),8)
              + ((longlong)puVar7 - (longlong)puVar12);
      lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
      puVar11 = puVar12;
      if ((int)local_628 != 0) {
LAB_140cdeb80:
        if (8 < lVar5) {
          puVar12 = puVar11 + (lVar5 / 2) * 0x17;
          if (puVar12 != puVar11) {
            local_620 = *puVar12;
            uStack_618 = puVar12[1];
            local_570 = puVar12[0x16];
            local_610 = puVar12[2];
            uStack_608 = puVar12[3];
            local_600 = puVar12[4];
            uStack_5f8 = puVar12[5];
            local_5f0 = puVar12[6];
            uStack_5e8 = puVar12[7];
            local_5e0 = puVar12[8];
            uStack_5d8 = puVar12[9];
            local_5d0 = puVar12[10];
            uStack_5c8 = puVar12[0xb];
            local_5c0 = puVar12[0xc];
            uStack_5b8 = puVar12[0xd];
            local_5b0 = puVar12[0xe];
            uStack_5a8 = puVar12[0xf];
            local_5a0 = puVar12[0x10];
            uStack_598 = puVar12[0x11];
            local_590 = puVar12[0x12];
            uStack_588 = puVar12[0x13];
            uVar2 = puVar12[0x14];
            uVar3 = puVar12[0x15];
            uVar4 = puVar11[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar4;
            uVar4 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar4;
            uVar4 = puVar11[5];
            puVar12[4] = puVar11[4];
            puVar12[5] = uVar4;
            uVar4 = puVar11[7];
            puVar12[6] = puVar11[6];
            puVar12[7] = uVar4;
            uVar4 = puVar11[9];
            puVar12[8] = puVar11[8];
            puVar12[9] = uVar4;
            uVar4 = puVar11[0xb];
            puVar12[10] = puVar11[10];
            puVar12[0xb] = uVar4;
            uVar4 = puVar11[0xd];
            puVar12[0xc] = puVar11[0xc];
            puVar12[0xd] = uVar4;
            uVar4 = puVar11[0xf];
            puVar12[0xe] = puVar11[0xe];
            puVar12[0xf] = uVar4;
            uVar4 = puVar11[0x11];
            puVar12[0x10] = puVar11[0x10];
            puVar12[0x11] = uVar4;
            uVar4 = puVar11[0x13];
            puVar12[0x12] = puVar11[0x12];
            puVar12[0x13] = uVar4;
            uVar4 = puVar11[0x15];
            puVar12[0x14] = puVar11[0x14];
            puVar12[0x15] = uVar4;
            puVar12[0x16] = puVar11[0x16];
            *puVar11 = local_620;
            puVar11[1] = uStack_618;
            puVar11[2] = local_610;
            puVar11[3] = uStack_608;
            puVar11[4] = local_600;
            puVar11[5] = uStack_5f8;
            puVar11[6] = local_5f0;
            puVar11[7] = uStack_5e8;
            puVar11[8] = local_5e0;
            puVar11[9] = uStack_5d8;
            puVar11[10] = local_5d0;
            puVar11[0xb] = uStack_5c8;
            puVar11[0xc] = local_5c0;
            puVar11[0xd] = uStack_5b8;
            puVar11[0xe] = local_5b0;
            puVar11[0xf] = uStack_5a8;
            puVar11[0x10] = local_5a0;
            puVar11[0x11] = uStack_598;
            local_580._0_4_ = (undefined4)uVar2;
            local_580._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_578._0_4_ = (undefined4)uVar3;
            uStack_578._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar11[0x12] = local_590;
            puVar11[0x13] = uStack_588;
            *(undefined4 *)(puVar11 + 0x14) = (undefined4)local_580;
            *(undefined4 *)((longlong)puVar11 + 0xa4) = local_580._4_4_;
            *(undefined4 *)(puVar11 + 0x15) = (undefined4)uStack_578;
            *(undefined4 *)((longlong)puVar11 + 0xac) = uStack_578._4_4_;
            puVar11[0x16] = local_570;
            local_580 = uVar2;
            uStack_578 = uVar3;
          }
          puVar9 = puVar7 + 0x17;
          puVar12 = puVar11;
LAB_140cded34:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x17;
          if (puVar12 <= puVar7) goto code_r0x000140cded40;
          goto LAB_140cded50;
        }
        for (; puVar9 = puVar11, puVar12 = puVar11, puVar11 < puVar7; puVar7 = puVar7 + -0x17) {
          while (puVar8 = puVar9, puVar12 = puVar12 + 0x17, puVar12 <= puVar7) {
            puVar9 = puVar12;
            if ((longlong)puVar12[0xf] <= (longlong)puVar8[0xf]) {
              puVar9 = puVar8;
            }
          }
          if (puVar8 != puVar7) {
            local_3f8 = *puVar8;
            uStack_3f0 = puVar8[1];
            local_348 = puVar8[0x16];
            local_3e8 = puVar8[2];
            uStack_3e0 = puVar8[3];
            local_3d8 = puVar8[4];
            uStack_3d0 = puVar8[5];
            local_3c8 = puVar8[6];
            uStack_3c0 = puVar8[7];
            local_3b8 = puVar8[8];
            uStack_3b0 = puVar8[9];
            local_3a8 = puVar8[10];
            uStack_3a0 = puVar8[0xb];
            local_398 = puVar8[0xc];
            uStack_390 = puVar8[0xd];
            local_388 = puVar8[0xe];
            uStack_380 = puVar8[0xf];
            local_378 = puVar8[0x10];
            uStack_370 = puVar8[0x11];
            local_368 = puVar8[0x12];
            uStack_360 = puVar8[0x13];
            local_358 = puVar8[0x14];
            uStack_350 = puVar8[0x15];
            uVar2 = puVar7[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            uVar2 = puVar7[3];
            puVar8[2] = puVar7[2];
            puVar8[3] = uVar2;
            uVar2 = puVar7[5];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            uVar2 = puVar7[7];
            puVar8[6] = puVar7[6];
            puVar8[7] = uVar2;
            uVar2 = puVar7[9];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            uVar2 = puVar7[0xb];
            puVar8[10] = puVar7[10];
            puVar8[0xb] = uVar2;
            uVar2 = puVar7[0xd];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            uVar2 = puVar7[0xf];
            puVar8[0xe] = puVar7[0xe];
            puVar8[0xf] = uVar2;
            uVar2 = puVar7[0x11];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            uVar2 = puVar7[0x13];
            puVar8[0x12] = puVar7[0x12];
            puVar8[0x13] = uVar2;
            uVar2 = puVar7[0x15];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = puVar7[0x16];
            *puVar7 = local_3f8;
            puVar7[1] = uStack_3f0;
            puVar7[2] = local_3e8;
            puVar7[3] = uStack_3e0;
            puVar7[4] = local_3d8;
            puVar7[5] = uStack_3d0;
            puVar7[6] = local_3c8;
            puVar7[7] = uStack_3c0;
            puVar7[8] = local_3b8;
            puVar7[9] = uStack_3b0;
            puVar7[10] = local_3a8;
            puVar7[0xb] = uStack_3a0;
            puVar7[0xc] = local_398;
            puVar7[0xd] = uStack_390;
            puVar7[0xe] = local_388;
            puVar7[0xf] = uStack_380;
            puVar7[0x10] = local_378;
            puVar7[0x11] = uStack_370;
            puVar7[0x12] = local_368;
            puVar7[0x13] = uStack_360;
            puVar7[0x14] = local_358;
            puVar7[0x15] = uStack_350;
            puVar7[0x16] = local_348;
          }
        }
        goto LAB_140cdf18e;
      }
LAB_140cdf17f:
      local_628 = lVar1;
      FUN_140cde400(puVar12,lVar5,param_3,param_4);
LAB_140cdf18e:
      plVar13 = plVar13 + -3;
    } while (&local_338 <= plVar13);
  }
  return;
code_r0x000140cded40:
  if ((longlong)puVar8[0x26] <= (longlong)puVar11[0xf]) goto LAB_140cded34;
LAB_140cded50:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -0x17;
    if (puVar9 <= puVar11) break;
  } while ((longlong)puVar11[0xf] <= (longlong)puVar10[-8]);
  if (puVar12 <= puVar9) {
    if (puVar12 != puVar9) {
      local_568 = *puVar12;
      uStack_560 = puVar8[0x18];
      local_4b8 = puVar8[0x2d];
      local_558 = puVar8[0x19];
      uStack_550 = puVar8[0x1a];
      local_548 = puVar8[0x1b];
      uStack_540 = puVar8[0x1c];
      local_538 = puVar8[0x1d];
      uStack_530 = puVar8[0x1e];
      local_528 = puVar8[0x1f];
      uStack_520 = puVar8[0x20];
      local_518 = puVar8[0x21];
      uStack_510 = puVar8[0x22];
      local_508 = puVar8[0x23];
      uStack_500 = puVar8[0x24];
      local_4f8 = puVar8[0x25];
      uStack_4f0 = puVar8[0x26];
      local_4e8 = puVar8[0x27];
      uStack_4e0 = puVar8[0x28];
      local_4d8 = puVar8[0x29];
      uStack_4d0 = puVar8[0x2a];
      uVar2 = puVar8[0x2b];
      uVar3 = puVar8[0x2c];
      uVar4 = puVar10[-0x16];
      *puVar12 = *puVar9;
      puVar8[0x18] = uVar4;
      uVar4 = puVar10[-0x14];
      puVar8[0x19] = puVar10[-0x15];
      puVar8[0x1a] = uVar4;
      uVar4 = puVar10[-0x12];
      puVar8[0x1b] = puVar10[-0x13];
      puVar8[0x1c] = uVar4;
      uVar4 = puVar10[-0x10];
      puVar8[0x1d] = puVar10[-0x11];
      puVar8[0x1e] = uVar4;
      uVar4 = puVar10[-0xe];
      puVar8[0x1f] = puVar10[-0xf];
      puVar8[0x20] = uVar4;
      uVar4 = puVar10[-0xc];
      puVar8[0x21] = puVar10[-0xd];
      puVar8[0x22] = uVar4;
      uVar4 = puVar10[-10];
      puVar8[0x23] = puVar10[-0xb];
      puVar8[0x24] = uVar4;
      uVar4 = puVar10[-8];
      puVar8[0x25] = puVar10[-9];
      puVar8[0x26] = uVar4;
      uVar4 = puVar10[-6];
      puVar8[0x27] = puVar10[-7];
      puVar8[0x28] = uVar4;
      uVar4 = puVar10[-4];
      puVar8[0x29] = puVar10[-5];
      puVar8[0x2a] = uVar4;
      uVar4 = puVar10[-2];
      puVar8[0x2b] = puVar10[-3];
      puVar8[0x2c] = uVar4;
      puVar8[0x2d] = puVar10[-1];
      *puVar9 = local_568;
      puVar10[-0x16] = uStack_560;
      puVar10[-0x15] = local_558;
      puVar10[-0x14] = uStack_550;
      puVar10[-0x13] = local_548;
      puVar10[-0x12] = uStack_540;
      puVar10[-0x11] = local_538;
      puVar10[-0x10] = uStack_530;
      puVar10[-0xf] = local_528;
      puVar10[-0xe] = uStack_520;
      puVar10[-0xd] = local_518;
      puVar10[-0xc] = uStack_510;
      puVar10[-0xb] = local_508;
      puVar10[-10] = uStack_500;
      puVar10[-9] = local_4f8;
      puVar10[-8] = uStack_4f0;
      puVar10[-7] = local_4e8;
      puVar10[-6] = uStack_4e0;
      local_4c8._0_4_ = (undefined4)uVar2;
      local_4c8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_4c0._0_4_ = (undefined4)uVar3;
      uStack_4c0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10[-5] = local_4d8;
      puVar10[-4] = uStack_4d0;
      *(undefined4 *)(puVar10 + -3) = (undefined4)local_4c8;
      *(undefined4 *)((longlong)puVar10 + -0x14) = local_4c8._4_4_;
      *(undefined4 *)(puVar10 + -2) = (undefined4)uStack_4c0;
      *(undefined4 *)((longlong)puVar10 + -0xc) = uStack_4c0._4_4_;
      puVar10[-1] = local_4b8;
      local_4c8 = uVar2;
      uStack_4c0 = uVar3;
    }
    goto LAB_140cded34;
  }
  if (puVar11 != puVar9) {
    local_4b0 = *puVar11;
    uStack_4a8 = puVar11[1];
    local_400 = puVar11[0x16];
    local_4a0 = puVar11[2];
    uStack_498 = puVar11[3];
    local_490 = puVar11[4];
    uStack_488 = puVar11[5];
    local_480 = puVar11[6];
    uStack_478 = puVar11[7];
    local_470 = puVar11[8];
    uStack_468 = puVar11[9];
    local_460 = puVar11[10];
    uStack_458 = puVar11[0xb];
    local_450 = puVar11[0xc];
    uStack_448 = puVar11[0xd];
    local_440 = puVar11[0xe];
    uStack_438 = puVar11[0xf];
    local_430 = puVar11[0x10];
    uStack_428 = puVar11[0x11];
    local_420 = puVar11[0x12];
    uStack_418 = puVar11[0x13];
    uVar2 = puVar11[0x14];
    uVar3 = puVar11[0x15];
    uVar4 = puVar10[-0x16];
    *puVar11 = *puVar9;
    puVar11[1] = uVar4;
    uVar4 = puVar10[-0x14];
    puVar11[2] = puVar10[-0x15];
    puVar11[3] = uVar4;
    uVar4 = puVar10[-0x12];
    puVar11[4] = puVar10[-0x13];
    puVar11[5] = uVar4;
    uVar4 = puVar10[-0x10];
    puVar11[6] = puVar10[-0x11];
    puVar11[7] = uVar4;
    uVar4 = puVar10[-0xe];
    puVar11[8] = puVar10[-0xf];
    puVar11[9] = uVar4;
    uVar4 = puVar10[-0xc];
    puVar11[10] = puVar10[-0xd];
    puVar11[0xb] = uVar4;
    uVar4 = puVar10[-10];
    puVar11[0xc] = puVar10[-0xb];
    puVar11[0xd] = uVar4;
    uVar4 = puVar10[-8];
    puVar11[0xe] = puVar10[-9];
    puVar11[0xf] = uVar4;
    uVar4 = puVar10[-6];
    puVar11[0x10] = puVar10[-7];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[-4];
    puVar11[0x12] = puVar10[-5];
    puVar11[0x13] = uVar4;
    uVar4 = puVar10[-2];
    puVar11[0x14] = puVar10[-3];
    puVar11[0x15] = uVar4;
    puVar11[0x16] = puVar10[-1];
    *puVar9 = local_4b0;
    puVar10[-0x16] = uStack_4a8;
    puVar10[-0x15] = local_4a0;
    puVar10[-0x14] = uStack_498;
    puVar10[-0x13] = local_490;
    puVar10[-0x12] = uStack_488;
    puVar10[-0x11] = local_480;
    puVar10[-0x10] = uStack_478;
    puVar10[-0xf] = local_470;
    puVar10[-0xe] = uStack_468;
    puVar10[-0xd] = local_460;
    puVar10[-0xc] = uStack_458;
    puVar10[-0xb] = local_450;
    puVar10[-10] = uStack_448;
    puVar10[-9] = local_440;
    puVar10[-8] = uStack_438;
    puVar10[-7] = local_430;
    puVar10[-6] = uStack_428;
    local_410._0_4_ = (undefined4)uVar2;
    local_410._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar3;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar10[-5] = local_420;
    puVar10[-4] = uStack_418;
    *(undefined4 *)(puVar10 + -3) = (undefined4)local_410;
    *(undefined4 *)((longlong)puVar10 + -0x14) = local_410._4_4_;
    *(undefined4 *)(puVar10 + -2) = (undefined4)uStack_408;
    *(undefined4 *)((longlong)puVar10 + -0xc) = uStack_408._4_4_;
    puVar10[-1] = local_400;
    local_410 = uVar2;
    uStack_408 = uVar3;
  }
  local_628._0_4_ = (int)local_628 + -1;
  lVar5 = (longlong)puVar9 + (-0xb8 - (longlong)puVar11);
  lVar5 = lVar5 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar5),8);
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  if ((lVar5 >> 7) - (lVar5 >> 0x3f) < (lVar6 >> 7) - (lVar6 >> 0x3f)) {
    if (puVar12 < puVar7) {
      *plVar13 = (longlong)puVar12;
      plVar13[1] = (longlong)puVar7;
      *(int *)(plVar13 + 2) = (int)local_628;
      plVar13 = plVar13 + 3;
    }
    if (puVar9 <= puVar11 + 0x17) goto LAB_140cdf18e;
    puVar7 = puVar10 + -0x2e;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x17 < puVar9) {
      *plVar13 = (longlong)puVar11;
      plVar13[1] = (longlong)(puVar10 + -0x2e);
      *(int *)(plVar13 + 2) = (int)local_628;
      plVar13 = plVar13 + 3;
    }
    if (puVar7 <= puVar12) goto LAB_140cdf18e;
  }
  lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
  puVar11 = puVar12;
  if ((int)local_628 == 0) goto LAB_140cdf17f;
  goto LAB_140cdeb80;
}



// FUNCTION 140cdf3d0 FUN_140cdf3d0 body=69 status=ok
// SIG undefined FUN_140cdf3d0(void)

ulonglong FUN_140cdf3d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142f27b90();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf420 FUN_140cdf420 body=69 status=ok
// SIG undefined FUN_140cdf420(void)

ulonglong FUN_140cdf420(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1413ffe00();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf470 FUN_140cdf470 body=69 status=ok
// SIG undefined FUN_140cdf470(void)

ulonglong FUN_140cdf470(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1430b3b80();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf4c0 FUN_140cdf4c0 body=69 status=ok
// SIG undefined FUN_140cdf4c0(void)

ulonglong FUN_140cdf4c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1413c0f50();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf510 FUN_140cdf510 body=69 status=ok
// SIG undefined FUN_140cdf510(void)

ulonglong FUN_140cdf510(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf560 FUN_140cdf560 body=69 status=ok
// SIG undefined FUN_140cdf560(void)

ulonglong FUN_140cdf560(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf5b0 FUN_140cdf5b0 body=69 status=ok
// SIG undefined FUN_140cdf5b0(void)

ulonglong FUN_140cdf5b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf600 FUN_140cdf600 body=69 status=ok
// SIG undefined FUN_140cdf600(void)

ulonglong FUN_140cdf600(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = APlayArea::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140cdf650 FUN_140cdf650 body=146 status=ok
// SIG undefined FUN_140cdf650(void)

void FUN_140cdf650(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_142956f50();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 140cdf6f0 FUN_140cdf6f0 body=54 status=ok
// SIG undefined FUN_140cdf6f0(void)

void FUN_140cdf6f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414b4770();
  UWorld::SpawnActor(param_1,uVar1,0,0,param_2);
  return;
}



// FUNCTION 140cdf730 FUN_140cdf730 body=212 status=ok
// SIG undefined FUN_140cdf730(void)

undefined8 * FUN_140cdf730(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = UE4Function_Private::
               TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
               Call;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xe] = FUN_1407c3030;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_3 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140cdf810 FUN_140cdf810 body=157 status=ok
// SIG undefined FUN_140cdf810(void)

undefined8 * FUN_140cdf810(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *puVar1 = AK::MemoryMgr::StartProfileThreadUsage;
    uVar2 = FUN_1415ab270(1);
    puVar1[10] = uVar2;
    *(undefined1 *)(puVar1 + 0xb) = 0;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DestroyObject_144145d88;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar1;
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 140cdf8b0 FUN_140cdf8b0 body=5657 status=ok
// SIG undefined FUN_140cdf8b0(void)

undefined8 * FUN_140cdf8b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  code *pcVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  int local_e8;
  int local_e4;
  longlong local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  code *local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  code *local_58;
  ulonglong uStack_50;
  
  local_res8 = DAT_146b34860;
  lVar6 = FName::GetComparisonNameEntry(&local_res8);
  uVar13 = 0;
  if (lVar6 == 0) {
    local_c8 = (code *)0x0;
    uStack_c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar6,&local_c8);
  }
  pcVar12 = (code *)&DAT_143f3eda8;
  if ((int)uStack_c0 != 0) {
    pcVar12 = local_c8;
  }
  FUN_141784790(param_2,pcVar12);
  if (local_c8 != (code *)0x0) {
    FMemory::Free();
  }
  lVar7 = AGTutorialStepVideo::GetPrivateStaticClass();
  lVar6 = local_res8;
  plVar1 = (longlong *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0xa8);
  if (0 < iVar5) {
    plVar17 = *(longlong **)(param_2 + 0xa0);
    uVar19 = uVar13;
    plVar20 = plVar17;
    if (plVar17 == (longlong *)0x0) {
      plVar17 = plVar1;
      plVar20 = plVar1;
    }
    do {
      iVar18 = (int)uVar19;
      if (*plVar17 == local_res8) {
        if (iVar18 != -1) {
          if ((lVar7 != 0) && (plVar20[(longlong)iVar18 * 2 + 1] != 0)) {
            FUN_1417905a0(param_2,local_res8,plVar20[(longlong)iVar18 * 2 + 1],lVar7);
          }
          goto LAB_140cdf9e1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      plVar17 = plVar17 + 2;
      uVar19 = (ulonglong)(iVar18 + 1);
    } while ((longlong)uVar13 < (longlong)iVar5);
  }
  *(int *)(param_2 + 0xa8) = iVar5 + 1;
  if (*(int *)(param_2 + 0xac) < iVar5 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(plVar1,iVar5);
  }
  plVar17 = *(longlong **)(param_2 + 0xa0);
  if (*(longlong **)(param_2 + 0xa0) == (longlong *)0x0) {
    plVar17 = plVar1;
  }
  plVar17 = plVar17 + (longlong)iVar5 * 2;
  if (plVar17 != (longlong *)0x0) {
    *plVar17 = lVar6;
    plVar17[1] = lVar7;
  }
LAB_140cdf9e1:
  FUN_142dc1050(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1444f6608;
  param_1[0x8b] = &PTR_LAB_1444f7d98;
  param_1[0x106] = &PTR_LAB_1444f7df0;
  param_1[0x107] = &PTR_LAB_1444f7e18;
  param_1[0x130] = &PTR_LAB_1444f7e30;
  param_1[0x131] = &PTR_LAB_1444f7e68;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa44) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  *(undefined2 *)(param_1 + 0x14a) = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  *(undefined1 *)(param_1 + 0x153) = 0;
  param_1[0x154] = 0;
  *(undefined1 *)(param_1 + 0x155) = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  param_1[0x15b] = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x15e) = 1;
  *(undefined4 *)((longlong)param_1 + 0xaf4) = 0x3f800000;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  *(undefined4 *)(param_1 + 0x17e) = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 2;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 2;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x196) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcb4) = 0;
  *(undefined1 *)(param_1 + 0x197) = 0;
  FUN_142de2fd0(param_1 + 0x199);
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd44) = 0;
  *(undefined1 *)(param_1 + 0x1ab) = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1c0] = DAT_1469e9da8;
  param_1[0x1c1] = DAT_1469e9db0;
  lVar6 = DAT_1469e9db8;
  param_1[0x1c2] = DAT_1469e9db8;
  if (lVar6 != 0) {
    LOCK();
    piVar14 = (int *)(lVar6 + 8);
    *piVar14 = *piVar14 + 1;
    UNLOCK();
  }
  param_1[0x1c3] = DAT_1469e9d30;
  param_1[0x1c4] = DAT_1469e9d38;
  lVar6 = DAT_1469e9d40;
  param_1[0x1c5] = DAT_1469e9d40;
  if (lVar6 != 0) {
    LOCK();
    piVar14 = (int *)(lVar6 + 8);
    *piVar14 = *piVar14 + 1;
    UNLOCK();
  }
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 2;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  *(undefined1 *)(param_1 + 0x1cd) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe6c) = 0x42700000;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d4] = &PTR_FUN_143f740c8;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 2;
  *(undefined4 *)(param_1 + 0x1dc) = 5;
  *(undefined4 *)((longlong)param_1 + 0xee4) = 0xf;
  param_1[0x1dd] = 0x44610000;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1e1,0);
  param_1[0x1e2] = 0;
  plVar1 = param_1 + 0x22a;
  param_1[0x1e3] = 0;
  param_1[0x1e5] = 0;
  *(undefined1 *)(param_1 + 0x1e6) = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  *(undefined1 *)(param_1 + 0x1f9) = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  *(undefined1 *)(param_1 + 0x20d) = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  *(undefined2 *)(param_1 + 0x229) = 0x101;
  *plVar1 = 0;
  param_1[0x22b] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 2;
  param_1[0x231] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1191) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119c) = 0;
  *(undefined4 *)(param_1 + 0x235) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x11ac) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x11c4) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x239) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x23c) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x11e4) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x242) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x243) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x121c) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x244) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x1224) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x245) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x122c) = 0x41200000;
  param_1[0x246] = 0x3e800000;
  *(undefined4 *)(param_1 + 0x247) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x123c) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x248) = 0x41200000;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  *(undefined1 *)(param_1 + 0x26f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x137c) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 2;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 2;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 2;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 2;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 2;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  param_1[0x287] = 0;
  *(undefined2 *)(param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1444) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144c) = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  *(undefined1 *)(param_1 + 0x28d) = 1;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  *(undefined4 *)(param_1 + 0x291) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x294) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x299) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29b) = 0x3f800000;
  param_1[0x29c] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  *(undefined1 *)(param_1 + 0x2a2) = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  *(undefined1 *)(param_1 + 0x2ac) = 0;
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  *(undefined1 *)(param_1 + 0x2bf) = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  *(undefined1 *)(param_1 + 0x2d2) = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e4] = 0;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x180c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1804) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1814) = 0;
  *(undefined4 *)(param_1 + 0x303) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x181c) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x305) = 1;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x30c] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  param_1[0x310] = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  param_1[0x313] = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  param_1[0x319] = 0;
  param_1[0x31a] = 0;
  *(undefined4 *)(param_1 + 0x31b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18dc) = 0;
  param_1[0x31d] = 0;
  *(undefined4 *)(param_1 + 0x31e) = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1914) = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  *(undefined4 *)(param_1 + 0x32e) = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  *(undefined4 *)(param_1 + 0x332) = 0;
  *(undefined4 *)(param_1 + 0x333) = 0;
  *(undefined1 *)((longlong)param_1 + 0x199c) = 1;
  *(undefined4 *)(param_1 + 0x334) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19a4) = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x338) = 0;
  param_1[0x339] = 0;
  *(undefined4 *)(param_1 + 0x33a) = 0;
  *(undefined4 *)(param_1 + 0x33d) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x19ec) = 0x40400000;
  *(undefined4 *)(param_1 + 0x33e) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x19f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33f) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x19fc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x1a04) = 0;
  param_1[0x341] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a2c) = 0;
  param_1[0x346] = 0;
  param_1[0x347] = 0;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a44) = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  param_1[0x353] = 0;
  param_1[0x354] = 0;
  *(undefined1 *)(param_1 + 0x355) = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  param_1[0x361] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 2;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = 2;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  param_1[0x36a] = 2;
  param_1[0x36b] = 0;
  param_1[0x36c] = 0;
  param_1[0x36d] = 2;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 2;
  param_1[0x371] = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 2;
  param_1[0x374] = 0;
  param_1[0x375] = 0;
  param_1[0x376] = 2;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 2;
  param_1[0x37a] = 0;
  *(undefined4 *)(param_1 + 0x37b) = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  UCheatManagerGunfire::GetAllCheats(param_1 + 0x37e);
  *(undefined8 *)((longlong)param_1 + 0x1c04) = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[0x385] = 0;
  param_1[0x387] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  *(undefined4 *)(param_1 + 0x38e) = 0;
  param_1[0x38f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x41f00000;
  uVar8 = FUN_14140ae40();
  param_1[0xb6] = uVar8;
  *(uint *)((longlong)param_1 + 0xd24) = *(uint *)((longlong)param_1 + 0xd24) | 1;
  *(undefined4 *)(param_1 + 0x1a5) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xd2c) = 0x3d99999a;
  *(undefined4 *)(param_1 + 0x1a6) = 0xbf800000;
  uVar8 = DAT_14686e020;
  uVar9 = AGGatewayActor::GetPrivateStaticClass();
  lVar6 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x18a] = lVar6;
  if ((lVar6 != 0) &&
     (*(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 4, (*(uint *)(param_1 + 1) >> 4 & 1) == 0)
     ) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::OnCurrentUsableChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar6 = param_1[0x18a];
    plVar17 = (longlong *)(lVar6 + 0x178);
    FWeakObjectPtr::operator=(&local_e8,0);
    local_e0 = 0;
    FWeakObjectPtr::operator=(&local_e8,param_1);
    local_e0 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_e8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_e0);
    }
    piVar14 = (int *)*plVar17;
    iVar5 = *(int *)(lVar6 + 0x180);
    for (piVar16 = piVar14; piVar16 != piVar14 + (longlong)iVar5 * 4; piVar16 = piVar16 + 4) {
      if ((((*piVar16 == local_e8) && (piVar16[1] == local_e4)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar16), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_e8), cVar4 == '\0')))) &&
         (*(longlong *)(piVar16 + 2) == local_e0)) {
        if ((int)((longlong)piVar16 - (longlong)piVar14 >> 4) != -1) goto LAB_140ce07c0;
        break;
      }
    }
    iVar5 = *(int *)(lVar6 + 0x180);
    *(int *)(lVar6 + 0x180) = iVar5 + 1;
    if (*(int *)(lVar6 + 0x184) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar5);
    }
    piVar14 = (int *)((longlong)iVar5 * 0x10 + *plVar17);
    *piVar14 = local_e8;
    piVar14[1] = local_e4;
    *(longlong *)(piVar14 + 2) = local_e0;
LAB_140ce07c0:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
    pwVar10 = _guard_xfg_dispatch_icall_nop
                        (L"&AOakPlayerController::OnCurrentUsableImpactDataChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res18,pwVar3 + 2,1);
    lVar6 = param_1[0x18a];
    plVar17 = (longlong *)(lVar6 + 0x188);
    FWeakObjectPtr::operator=(&local_d8,0);
    local_d0 = 0;
    FWeakObjectPtr::operator=(&local_d8,param_1);
    local_d0 = local_res18;
    local_res8 = 0;
    if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_d8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_d0);
    }
    piVar14 = (int *)*plVar17;
    iVar5 = *(int *)(lVar6 + 400);
    for (piVar16 = piVar14; piVar16 != piVar14 + (longlong)iVar5 * 4; piVar16 = piVar16 + 4) {
      if ((((*piVar16 == local_d8) && (piVar16[1] == local_d4)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar16), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_d8), cVar4 == '\0')))) &&
         (*(longlong *)(piVar16 + 2) == local_d0)) {
        if ((int)((longlong)piVar16 - (longlong)piVar14 >> 4) != -1) goto LAB_140ce0904;
        break;
      }
    }
    iVar5 = *(int *)(lVar6 + 400);
    *(int *)(lVar6 + 400) = iVar5 + 1;
    if (*(int *)(lVar6 + 0x194) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar5);
    }
    piVar14 = (int *)((longlong)iVar5 * 0x10 + *plVar17);
    *piVar14 = local_d8;
    piVar14[1] = local_d4;
    *(longlong *)(piVar14 + 2) = local_d0;
LAB_140ce0904:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
    pwVar10 = _guard_xfg_dispatch_icall_nop
                        (L"&AOakPlayerController::OnCurrentUsableUsabilityChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res20,pwVar3 + 2,1);
    lVar6 = param_1[0x18a];
    plVar17 = (longlong *)(lVar6 + 0x198);
    FWeakObjectPtr::operator=(&local_b8,0);
    local_b0 = 0;
    FWeakObjectPtr::operator=(&local_b8,param_1);
    local_b0 = local_res20;
    local_res8 = 0;
    if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_b8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_b0);
    }
    iVar5 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar17,&local_b8);
    if (iVar5 == -1) {
      iVar5 = *(int *)(lVar6 + 0x1a0);
      *(int *)(lVar6 + 0x1a0) = iVar5 + 1;
      if (*(int *)(lVar6 + 0x1a4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar5);
      }
      puVar15 = (undefined4 *)((longlong)iVar5 * 0x10 + *plVar17);
      *puVar15 = local_b8;
      puVar15[1] = local_b4;
      *(longlong *)(puVar15 + 2) = local_b0;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
  }
  uVar8 = FUN_1414594e0();
  param_1[0xa6] = uVar8;
  uVar8 = DAT_14686e028;
  uVar9 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x18b] = uVar8;
  *(undefined4 *)(param_1 + 0x28a) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1454) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x1814) = 0;
  uVar8 = DAT_14686e030;
  uVar9 = FUN_14146c130();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x18c] = uVar8;
  puVar11 = (undefined8 *)FName::FName(local_80,L"RecoilControlComponent",1);
  uVar8 = *puVar11;
  uVar9 = UAnimMontage::GetPrivateStaticClass();
  lVar6 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x191] = lVar6;
  if (lVar6 != 0) {
    UPlayerInfoComponent::SetGender(lVar6,1);
  }
  puVar11 = (undefined8 *)FName::FName(local_78,L"ShopManagerComponent",1);
  uVar8 = *puVar11;
  uVar9 = FUN_1414b02f0();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x192] = uVar8;
  uVar8 = DAT_14686e048;
  uVar9 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  lVar6 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x193] = lVar6;
  if (lVar6 != 0) {
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    local_c8 = FUN_140cef5d0;
    local_58 = FUN_140cef5d0;
    uStack_50 = uStack_c0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::ChallengesRegistered",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_98,pwVar3 + 2,1);
    FUN_1407260e0(param_1[0x193] + 0x178,param_1,&local_58,local_98);
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::OnChallengeCompleted",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_90,pwVar3 + 2,1);
    lVar6 = param_1[0x193];
    FWeakObjectPtr::operator=(local_a8,0);
    local_a0 = 0;
    FWeakObjectPtr::operator=(local_a8,param_1);
    local_a0 = local_90;
    local_res8 = 0;
    if ((local_90 != 0) && (lVar7 = FWeakObjectPtr::Get(local_a8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_a0);
    }
    FUN_1406a5aa0(lVar6 + 0x1a8,local_a8);
  }
  uVar8 = FUN_1413e5500();
  param_1[0x10e] = uVar8;
  puVar11 = (undefined8 *)FName::FName(local_70,L"WwiseListenerEffectComponent",1);
  uVar8 = *puVar11;
  uVar9 = FUN_1405db430();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x195] = uVar8;
  uVar8 = DAT_14686e038;
  uVar9 = UEnvQueryTest_Random::StaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x18d] = uVar8;
  uVar8 = DAT_14686e040;
  uVar9 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[0x18e] = uVar8;
  puVar11 = (undefined8 *)FName::FName(local_68,L"PlayerGuardianRankComponent",1);
  uVar8 = *puVar11;
  uVar9 = FUN_1414b0d60();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[399] = uVar8;
  puVar11 = (undefined8 *)FName::FName(local_60,L"FoDComponent",1);
  uVar8 = *puVar11;
  uVar9 = UAnimMontage::GetPrivateStaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,1,0,0);
  param_1[400] = uVar8;
  *(undefined4 *)(param_1 + 0x2f9) = 0x40400000;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x29d) = 0xcb18967f;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xaac) = 0;
  local_88 = FUN_141387d00();
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x28b,&local_88);
  *(undefined2 *)(param_1 + 6) = 0x400;
  *(byte *)((longlong)param_1 + 0x1844) = *(byte *)((longlong)param_1 + 0x1844) & 4;
  *(undefined4 *)((longlong)param_1 + 0x1aac) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x356) = 0x3f19999a;
  *(undefined4 *)((longlong)param_1 + 0x1ab4) = 0x42340000;
  param_1[0x357] = 0x42c80000;
  *(undefined4 *)(param_1 + 0x358) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1ac4) = 0x3f000000;
  iVar5 = *(int *)(param_1 + 0x22b);
  *(int *)(param_1 + 0x22b) = iVar5 + 2;
  if (*(int *)((longlong)param_1 + 0x115c) < iVar5 + 2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar5);
  }
  puVar11 = (undefined8 *)((longlong)iVar5 * 0x20 + *plVar1);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  return param_1;
}



// FUNCTION 140ce0ed0 FUN_140ce0ed0 body=191 status=ok
// SIG undefined FUN_140ce0ed0(void)

undefined4 * FUN_140ce0ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  if (0x7fffffff < (uint)param_1[0x15]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
  }
  if (*(undefined2 **)(param_1 + 0x12) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x12) = 0;
  }
  param_1[0xe] = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  local_38 = *(undefined8 *)(param_2 + 0x10);
  FString::FString(local_30,param_2 + 0x12);
  FSoftObjectPath::operator=(param_1 + 0x10,&local_38);
  return param_1;
}



// FUNCTION 140ce0f90 FUN_140ce0f90 body=164 status=ok
// SIG undefined FUN_140ce0f90(void)

undefined4 * FUN_140ce0f90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  iVar3 = param_2[6];
  lVar4 = *(longlong *)(param_2 + 4);
  param_1[6] = iVar3;
  if (iVar3 == 0) {
    param_1[7] = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar3,0);
    lVar2 = *(longlong *)(param_1 + 4);
    lVar4 = lVar4 + 0x20;
    do {
      FString::FString(lVar2,lVar4 + -0x20);
      FString::FString(lVar2 + 0x10,lVar4 + -0x10);
      FText::FText(lVar2 + 0x20,lVar4);
      puVar1 = (undefined4 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x40;
      *(undefined4 *)(lVar2 + 0x38) = *puVar1;
      lVar2 = lVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}



// FUNCTION 140ce1040 FUN_140ce1040 body=98 status=ok
// SIG undefined FUN_140ce1040(void)

longlong FUN_140ce1040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_143f73d18;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_143f740c8;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_1;
}



// FUNCTION 140ce10b0 FUN_140ce10b0 body=118 status=ok
// SIG undefined FUN_140ce10b0(void)

undefined8 * FUN_140ce10b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
  }
  FUN_140a4f390(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}



// FUNCTION 140ce1130 FUN_140ce1130 body=236 status=ok
// SIG undefined FUN_140ce1130(void)

longlong FUN_140ce1130(longlong param_1,longlong param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  FUN_140ce10b0();
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xa0,0);
  }
  if (*(undefined2 **)(param_1 + 0xa0) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  local_38 = *(undefined8 *)(param_2 + 0x98);
  FString::FString(local_30,param_2 + 0xa0);
  FSoftObjectPath::operator=((undefined8 *)(param_1 + 0x98),&local_38);
  return param_1;
}



// FUNCTION 140ce1220 FUN_140ce1220 body=235 status=ok
// SIG undefined FUN_140ce1220(void)

undefined1 * FUN_140ce1220(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FText::FText(param_1 + 8,param_2 + 8);
  FText::FText(param_1 + 0x20,param_2 + 0x20);
  FText::FText(param_1 + 0x38,param_2 + 0x38);
  FString::FString(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FString::FString(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_143f73d18;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  lVar1 = *(longlong *)(param_2 + 0x98);
  *(longlong *)(param_1 + 0x98) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_143f740c8;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  return param_1;
}



// FUNCTION 140ce1310 FUN_140ce1310 body=129 status=ok
// SIG undefined FUN_140ce1310(void)

undefined1 * FUN_140ce1310(undefined1 *param_1)

{
  *param_1 = 0;
  FText::FText(param_1 + 8);
  FText::FText(param_1 + 0x20);
  FText::FText();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_143f740c8;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  return param_1;
}



// FUNCTION 140ce13a0 FUN_140ce13a0 body=190 status=ok
// SIG undefined FUN_140ce13a0(void)

undefined4 * FUN_140ce13a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_38 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_30,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_38);
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 140ce1460 FUN_140ce1460 body=182 status=ok
// SIG undefined FUN_140ce1460(void)

undefined4 * FUN_140ce1460(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_38 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_30,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_38);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 140ce1520 ~<lambda_7ae62ba9a5361e85c320c1f6a219266f> body=130 status=ok
// SIG undefined ~<lambda_7ae62ba9a5361e85c320c1f6a219266f>(void)

void <lambda_7ae62ba9a5361e85c320c1f6a219266f>::~<lambda_7ae62ba9a5361e85c320c1f6a219266f>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x20);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140ce15b0 FUN_140ce15b0 body=96 status=ok
// SIG undefined FUN_140ce15b0(void)

void FUN_140ce15b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  FUN_1416f8340(*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 140ce1610 FUN_140ce1610 body=159 status=ok
// SIG undefined FUN_140ce1610(void)

void FUN_140ce1610(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x11;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140ce16b0 FUN_140ce16b0 body=224 status=ok
// SIG undefined FUN_140ce16b0(void)

void FUN_140ce16b0(longlong *param_1)

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
      plVar7 = plVar7 + 10;
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



// FUNCTION 140ce1790 FUN_140ce1790 body=173 status=ok
// SIG undefined FUN_140ce1790(void)

void FUN_140ce1790(undefined8 *param_1)

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
      plVar4 = (longlong *)plVar7[5];
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
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
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



// FUNCTION 140ce1840 FUN_140ce1840 body=95 status=ok
// SIG undefined FUN_140ce1840(void)

void FUN_140ce1840(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
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



// FUNCTION 140ce18a0 FUN_140ce18a0 body=142 status=ok
// SIG undefined FUN_140ce18a0(void)

void FUN_140ce18a0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}


