// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143004da0 FUN_143004da0 body=423 status=ok
// SIG undefined FUN_143004da0(void)

undefined4 * FUN_143004da0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res20 [2];
  
  iVar2 = FUN_142ffe220(param_1,param_3);
  uVar9 = 0xffffffff;
  if ((iVar2 != -1) && (0 < *(int *)(param_1 + 0x230))) {
    uVar6 = iVar2 + 1;
    lVar4 = (longlong)(int)uVar6 << 6;
    do {
      if (*(int *)(param_1 + 0x230) <= (int)uVar6) break;
      lVar1 = *(longlong *)(lVar4 + 0x10 + *(longlong *)(param_1 + 0x228));
      if ((lVar1 != 0) && (lVar1 == param_3)) {
        uVar9 = (ulonglong)uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x40;
    } while ((int)uVar9 == -1);
    uVar10 = 0;
    iVar8 = (int)uVar9;
    uVar5 = uVar10;
    uVar7 = uVar10;
    uVar11 = uVar10;
    while (iVar8 == -1) {
      if ((longlong)iVar2 <= (longlong)uVar5) {
        iVar8 = (int)uVar9;
        if ((int)uVar9 == -1) goto LAB_143004f03;
        break;
      }
      lVar4 = *(longlong *)(uVar7 + 0x10 + *(longlong *)(param_1 + 0x228));
      if ((lVar4 != 0) && (lVar4 == param_3)) {
        uVar9 = uVar11;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 0x40;
      iVar8 = (int)uVar9;
    }
    iVar2 = iVar8;
    piVar3 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x248,local_res20,param_3);
    if (*piVar3 != -1) {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x248,local_res20,param_3);
      uVar9 = uVar10;
      if (local_res20[0] != -1) {
        uVar9 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x248);
      }
      *(int *)(uVar9 + 8) = iVar2;
      lVar4 = *(longlong *)(param_1 + 0x228);
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x248,local_res20,param_3);
      if (local_res20[0] != -1) {
        uVar10 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x248);
      }
      *(undefined4 *)(uVar10 + 0x10) = *(undefined4 *)((longlong)iVar2 * 0x40 + 0xc + lVar4);
    }
LAB_143004f03:
    if (iVar2 != -1) {
      *param_2 = *(undefined4 *)((longlong)iVar2 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 143004f50 FUN_143004f50 body=141 status=ok
// SIG undefined FUN_143004f50(void)

void FUN_143004f50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  thunk_FUN_1428e0030();
  if (((char)param_1[0x25] == '\x03') && ((*(byte *)(param_1 + 0xb5) & 0x20) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x740))(param_1);
    if (cVar1 != '\x01') {
      uVar2 = FUN_142dccd00(param_2);
      cVar1 = (**(code **)(*param_1 + 0x748))(param_1,uVar2);
      if (cVar1 != '\0') {
        cVar1 = FUN_142fe9a90(param_1,uVar2,0,0,0);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x780))(param_1,uVar2,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 143004fe0 FUN_143004fe0 body=64 status=ok
// SIG undefined FUN_143004fe0(void)

void FUN_143004fe0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && ((int)param_1[0x56] == 0)) {
    (**(code **)(*param_1 + 0x4b8))(param_1,param_2,1);
  }
  return;
}



// FUNCTION 143005020 FUN_143005020 body=382 status=ok
// SIG undefined FUN_143005020(void)

void FUN_143005020(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  iVar2 = FUN_14233f450();
  uVar7 = 0;
  if (iVar2 == 3) {
    if ((int)param_1[0x56] == 0) {
      (**(code **)(*param_1 + 0x4b8))(param_1,param_2,1);
    }
    plVar10 = (longlong *)param_1[0x59];
    plVar1 = plVar10 + (int)param_1[0x5a];
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x38);
        plVar8 = plVar5 + (longlong)*(int *)(lVar4 + 0x40) * 2;
        for (; plVar5 != plVar8; plVar5 = plVar5 + 2) {
          if (*plVar5 != 0) {
            uVar9 = uVar7;
            if ((char)plVar5[1] != '\0') {
              uVar9 = param_1[0x23];
            }
            if (*(char *)((longlong)plVar5 + 9) == '\x01') {
              uVar3 = FUN_142e0a580();
              lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
            }
            else {
              if (*(char *)((longlong)plVar5 + 9) != '\x02') goto LAB_143005113;
              uVar3 = UScrollBox::GetPrivateStaticClass();
              lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
            }
            if (lVar4 != 0) {
              FUN_142d26450(lVar4,*plVar5,uVar9);
            }
          }
LAB_143005113:
        }
      }
    }
  }
  puVar6 = (undefined8 *)param_1[0x50];
  uVar9 = (longlong)(int)param_1[0x51] & 0x1fffffffffffffff;
  if (puVar6 + (int)param_1[0x51] < puVar6) {
    uVar9 = uVar7;
  }
  if (uVar9 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x2b8))((longlong *)*puVar6,param_1[0x23],param_2);
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != uVar9);
  }
  return;
}



// FUNCTION 1430051a0 FUN_1430051a0 body=489 status=ok
// SIG undefined FUN_1430051a0(void)

void FUN_1430051a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x5bc);
  if (cVar7 != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x5c0);
    uVar5 = *(undefined4 *)(param_1 + 0x5bc);
    local_res8 = uVar5;
    uStackX_c = uVar4;
    FUN_142fffff0(param_1 + 0x428,&local_38,&local_res8);
    if ((*(char *)(param_1 + 0x613) != '\0') && (local_38 != (longlong *)0x0)) {
      *(undefined4 *)(param_1 + 0x598) = uVar5;
      *(undefined4 *)(param_1 + 0x59c) = uVar4;
      puVar8 = (undefined8 *)(**(code **)(*local_38 + 0x50))(local_38,local_28);
      local_48 = *puVar8;
      local_40 = (longlong *)puVar8[1];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_1419b4220(param_1,*(undefined4 *)(param_1 + 0x5b8),&local_48,0);
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
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
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_20 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    *(undefined1 *)(param_1 + 0x613) = 0;
    if (((*(int *)(param_1 + 0x540) != 0) && (*(longlong **)(param_1 + 0x538) != (longlong *)0x0))
       && (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x18))(), cVar7 != '\0')) {
      if (*(int *)(param_1 + 0x540) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x538);
      }
      local_res10 = CONCAT44(uStackX_c,local_res8);
      (**(code **)(*plVar9 + 0x40))(plVar9,&local_res10,&local_38);
    }
    *(undefined4 *)(param_1 + 0x5bc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c0) = 0;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 143005390 FUN_143005390 body=325 status=ok
// SIG undefined FUN_143005390(void)

void FUN_143005390(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    if (*(int *)(param_1 + 0x2b0) != 0) {
      FUN_142ca9970(param_1 + 0x2a8,1);
    }
    plVar9 = *(longlong **)(param_1 + 0x2c8);
    plVar1 = plVar9 + *(int *)(param_1 + 0x2d0);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar4 = *plVar9;
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x38);
        plVar7 = plVar5 + (longlong)*(int *)(lVar4 + 0x40) * 2;
        for (; plVar5 != plVar7; plVar5 = plVar5 + 2) {
          if (*plVar5 != 0) {
            if (*(char *)((longlong)plVar5 + 9) == '\x01') {
              uVar3 = FUN_142e0a580();
            }
            else {
              if (*(char *)((longlong)plVar5 + 9) != '\x02') goto LAB_14300544e;
              uVar3 = UScrollBox::GetPrivateStaticClass();
            }
            lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
            if (lVar4 != 0) {
              FUN_142d2b620(lVar4,*plVar5);
            }
          }
LAB_14300544e:
        }
      }
    }
  }
  uVar8 = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x280);
  uVar10 = (longlong)*(int *)(param_1 + 0x288) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0x288) < puVar6) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x2c0))
                ((longlong *)*puVar6,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}



// FUNCTION 1430054e0 FUN_1430054e0 body=291 status=ok
// SIG undefined FUN_1430054e0(void)

void FUN_1430054e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x208) != 0) &&
     (((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x1d8), lVar4 == 0 ||
       (*(char *)(lVar4 + 0x38) != '\0')) && (iVar6 = FUN_14233f450(), iVar6 == 3)))) {
    plVar7 = (longlong *)(param_1 + 0x2a8);
    FUN_142cb6da0(*(longlong *)(param_1 + 0x208) + 0xa8,plVar7,*(undefined8 *)(param_1 + 0x118),
                  param_2,0,local_res8);
    if (*(char *)(param_1 + 0x340) != '\0') {
      if (-1 < *(int *)(param_1 + 0x2b4)) {
        iVar6 = *(int *)(param_1 + 0x2b0);
        if (iVar6 != 0) {
          plVar7 = (longlong *)(*plVar7 + 8);
          do {
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
            plVar7 = plVar7 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        *(undefined4 *)(param_1 + 0x2b0) = 0;
        return;
      }
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar7,0);
    }
  }
  return;
}



// FUNCTION 143005610 FUN_143005610 body=297 status=ok
// SIG undefined FUN_143005610(void)

void FUN_143005610(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res10 [8];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    piVar1 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x248,local_res10,*(undefined8 *)(param_2 + 0x10));
    if (*piVar1 == -1) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x230)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x228) + 0xc);
        do {
          if (((*(byte *)((longlong)piVar1 + 0x1d) & 4) == 0) &&
             (*(int *)(param_2 + 0xc) == *piVar1)) break;
          iVar4 = iVar4 + 1;
          piVar1 = piVar1 + 0x10;
        } while (iVar4 < *(int *)(param_1 + 0x230));
      }
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (lVar3 != 0) {
      uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
      lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
      if (lVar3 != 0) {
        local_40 = *(undefined8 *)(param_2 + 0x10);
        local_38 = *(undefined8 *)(param_2 + 0x20);
        local_30 = *(undefined4 *)(param_2 + 0xc);
        local_48 = param_1;
        local_2c = param_3;
        local_28 = param_4;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x338,&local_48);
      }
    }
  }
  iVar4 = FUN_14233f450(param_1);
  if ((iVar4 != 3) && ((*(byte *)(param_1 + 0xb8) & 8) != 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x368) = 1;
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2c0);
  return;
}



// FUNCTION 143005750 FUN_143005750 body=30 status=ok
// SIG undefined FUN_143005750(void)

void FUN_143005750(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x488) == 0) && (*(longlong *)(param_1 + 0x480) == 0)) {
    return;
  }
  FUN_143017540();
  return;
}



// FUNCTION 143005770 FUN_143005770 body=138 status=ok
// SIG undefined FUN_143005770(void)

void FUN_143005770(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x614) & 2) == 0) {
    *(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) | 2;
    FUN_142fea280();
    if (((param_1[0x8f] == 0) && ((*(byte *)(param_1 + 0xb5) & 0x20) == 0)) &&
       ((char)param_1[0x25] == '\x03')) {
      cVar1 = (**(code **)(*param_1 + 0x770))(param_1);
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 0x20;
        (**(code **)(*param_1 + 0x778))(param_1);
      }
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x614) & 1) != 0) && ((*(byte *)(param_1 + 0xb5) & 1) == 0)) {
    FUN_14223e980(param_1,2);
    return;
  }
  return;
}



// FUNCTION 143005800 FUN_143005800 body=516 status=ok
// SIG undefined FUN_143005800(void)

undefined8 FUN_143005800(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_48;
  undefined8 local_40 [5];
  
  puVar7 = *(undefined8 **)(param_2 + 0x88);
  if (*(undefined8 **)(param_2 + 0x88) == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(param_2 + 8);
  }
  if (((*(int *)(param_2 + 0x90) != 2) || (*(short *)(puVar7 + 3) != 0x13)) ||
     (*(short *)(puVar7 + 7) != 0x28)) {
    return 0;
  }
  uVar4 = *puVar7;
  cVar6 = FUN_1407ce070(param_2);
  if (cVar6 != '\0') {
    plVar1 = (longlong *)(param_2 + 0xa8);
    if (**(longlong **)(param_1 + 0x18) != 0) {
      cVar6 = FUN_1407ce010(*(longlong **)(param_1 + 0x18) + 1);
      if (cVar6 != '\0') {
        plVar8 = (longlong *)*plVar1;
        plVar2 = plVar8 + (longlong)*(int *)(param_2 + 0xb0) * 5;
        if (plVar8 != plVar2) {
          do {
            if ((*(longlong *)*plVar8 == **(longlong **)(param_1 + 0x18)) &&
               (*(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
                *(longlong *)((*(longlong **)(param_1 + 0x18))[1] + 0x28))) goto LAB_14300596e;
            plVar8 = plVar8 + 5;
          } while (plVar8 != plVar2);
        }
        local_48 = *(undefined8 *)(param_1 + 0x18);
        FUN_14217e740(local_40);
        FUN_142194380(local_40,0x13,0,0,0);
        iVar5 = *(int *)(param_2 + 0xb0);
        *(int *)(param_2 + 0xb0) = iVar5 + 1;
        local_40[0] = uVar4;
        if (*(int *)(param_2 + 0xb4) < iVar5 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
        }
        puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x28);
        *puVar3 = local_48;
        FUN_14217e5b0(puVar3 + 1,local_40);
        FUN_14217f430(local_40);
      }
    }
LAB_14300596e:
    FUN_1421957f0(param_2);
  }
  FUN_1421923f0(&local_48,DAT_146b45868,puVar7 + 4);
  FUN_140bfa350(param_2,param_1 + 8,&local_48);
  FUN_14217f430(&local_48);
  FUN_1421923f0(&local_48,DAT_146b45870,puVar7 + 4);
  FUN_140bfa350(param_2,param_1 + 0x10,&local_48);
  FUN_14217f430(&local_48);
  return 1;
}



// FUNCTION 143005a10 FUN_143005a10 body=744 status=ok
// SIG undefined FUN_143005a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143005a10(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + 0x3b8) == 0) || (*(longlong **)(param_1 + 0x3b0) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x18))(), cVar4 == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  else {
    fVar11 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                   *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
    fVar13 = *(float *)(param_3 + 0x1c) * fVar11;
    fVar11 = -(*(float *)(param_3 + 0x20) * fVar11);
    fVar12 = *(float *)(param_3 + 4) * 0.25;
    fVar13 = fVar13 * *(float *)(param_4 + 0x1c) + fVar11 * *(float *)(param_4 + 0x18) +
             (-(fVar11 * *(float *)(param_3 + 0x2c)) - fVar13 * *(float *)(param_3 + 0x30));
    fVar11 = 3.0;
    if ((3.0 <= fVar12) && (fVar11 = fVar12, 10.0 <= fVar12)) {
      fVar11 = 10.0;
    }
    plVar7 = (longlong *)0x0;
    if (fVar11 <= fVar13) {
      local_58 = (*(float *)(param_3 + 4) - fVar11 < fVar13) + 1;
    }
    else {
      local_58 = 0;
    }
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar8 = plVar2;
    plVar9 = plVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar7, !bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar8 = plVar2;
          plVar9 = (longlong *)0x0;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = *(longlong **)(param_1 + 0x388);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    puVar6 = (undefined4 *)(**(code **)(*plVar9 + 0x38))(plVar9,param_1 + -8);
    local_50 = *puVar6;
    local_4c = puVar6[1];
    if (*(int *)(param_1 + 0x3b8) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x3b0);
    }
    local_68 = &local_50;
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_44,param_4,local_58);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (&local_44 != (undefined4 *)(param_1 + 0x3d0)) {
      if (*(char *)(param_1 + 0x3d4) != '\0') {
        *(undefined1 *)(param_1 + 0x3d4) = 0;
      }
      if (local_40 != '\0') {
        *(undefined4 *)(param_1 + 0x3d0) = local_44;
        *(undefined1 *)(param_1 + 0x3d4) = 1;
      }
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 143005d00 FUN_143005d00 body=211 status=ok
// SIG undefined FUN_143005d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143005d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = param_1 + -8;
  local_100 = param_3;
  local_f8 = param_4;
  FUN_142fe06f0(&local_108,local_e8);
  if (((local_e8[0] == '\0') && (*(int *)(param_1 + 0x410) != 0)) &&
     (*(longlong **)(param_1 + 0x408) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x408) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x410) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_4);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x408) + 0x38))
                  (*(longlong **)(param_1 + 0x408),param_2,param_4);
      }
      goto LAB_143005dab;
    }
  }
  FUN_140438260(param_2,local_e8);
LAB_143005dab:
  FUN_140438c20(local_e8);
  return param_2;
}



// FUNCTION 143005de0 FUN_143005de0 body=118 status=ok
// SIG undefined FUN_143005de0(void)

void FUN_143005de0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  (**(code **)(*param_1 + 0x4d0))();
  local_28[0] = *(undefined4 *)(param_2 + 0xc);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_14 = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 99,local_28)
  ;
  iVar1 = FUN_14233f450(param_1);
  if ((iVar1 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x58);
  }
  return;
}



// FUNCTION 143005e60 FUN_143005e60 body=548 status=ok
// SIG undefined FUN_143005e60(void)

void FUN_143005e60(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 *local_50;
  
  local_78 = *param_2;
  local_74 = param_2[1];
  local_res18 = param_3;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,local_res8,&local_78);
  lVar9 = 0;
  if (local_res8[0] != -1) {
    lVar9 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 8);
  }
  lVar8 = lVar9 + 8;
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  if (lVar8 == 0) {
    local_68 = param_2;
    local_60 = param_3;
    FUN_141e10400(param_1 + 8,local_res10,&local_68,0);
    local_70 = *param_3;
    local_58 = &local_70;
    local_50 = param_2;
    FUN_142fd8200(param_1 + 0x58,local_res20,&local_58,0);
    (*(code *)**(undefined8 **)*param_3)();
  }
  iVar4 = *(int *)(param_1 + 200);
  if (iVar4 != 0) {
    iVar11 = 0;
    cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(param_1 + 0xc0),param_2);
    bVar12 = cVar7 == '\0';
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      do {
        iVar6 = iVar6 + 1;
        if (iVar4 <= iVar6) break;
        cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0xc0) + (longlong)iVar6 * 8,param_2);
      } while (bVar12 == (cVar7 == '\0'));
      if (bVar12 != false) {
        if (iVar11 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar11 * 8),
                     (void *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar10 * 8),
                     (longlong)(iVar6 - iVar10) << 3);
        }
        iVar11 = iVar11 + (iVar6 - iVar10);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar6;
    } while (iVar6 < iVar4);
    *(int *)(param_1 + 200) = iVar11;
    param_3 = local_res18;
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar4 + 1;
  if (*(int *)(param_1 + 0xb4) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0xa8),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 8);
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return;
}



// FUNCTION 143006090 FUN_143006090 body=363 status=ok
// SIG undefined FUN_143006090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_143006090(undefined8 param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  bVar9 = false;
  local_128 = 0;
  FUN_143006200();
  if (*param_2 == '\0') {
    local_120 = *(longlong *)(param_4 + 0x18);
    local_118 = *(undefined8 *)(param_4 + 0x20);
    local_110 = *(longlong **)(param_4 + 0x28);
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    cVar7 = FKey::IsValid(&local_120);
    if ((cVar7 == '\0') ||
       ((((local_120 != DAT_1469ea588 && (local_120 != DAT_1469ea5a0)) &&
         (local_120 != DAT_1469e99e8)) && (local_120 != DAT_1469e9a18)))) {
      bVar4 = true;
      bVar9 = true;
      goto LAB_143006142;
    }
    bVar9 = true;
  }
  bVar4 = false;
LAB_143006142:
  plVar6 = local_110;
  if ((bVar9) && (local_110 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_110)(local_110);
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
  if (bVar4) {
    uVar8 = FUN_1417c9760(param_1,local_108,param_3,param_4);
    FUN_140439160(param_2,uVar8);
    FUN_140438c20(local_108);
  }
  return param_2;
}



// FUNCTION 143006200 FUN_143006200 body=1745 status=ok
// SIG undefined FUN_143006200(void)

undefined1 *
FUN_143006200(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  char local_res8;
  undefined7 uStackX_9;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  plVar4 = (longlong *)param_1[0xb5];
  if (((int)plVar4[1] < 1) || ((*(byte *)(param_4 + 8) & 0x30) != 0)) {
LAB_1430068a1:
    FUN_1419b52f0(param_1,param_2,param_3,param_4);
  }
  else {
    local_res8 = '\0';
    FWeakObjectPtr::operator=(&local_90,0);
    plVar13 = *(longlong **)(param_4 + 0x28);
    lVar11 = *(longlong *)(param_4 + 0x18);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    bVar15 = lVar11 == DAT_1469e99d0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar10 = (int *)((longlong)plVar13 + 0xc);
        iVar14 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    if (bVar15) {
      local_90 = *(undefined4 *)*plVar4;
      uStack_8c = ((undefined4 *)*plVar4)[1];
LAB_1430064f0:
      local_res8 = '\x01';
    }
    else {
      plVar13 = *(longlong **)(param_4 + 0x28);
      lVar11 = *(longlong *)(param_4 + 0x18);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      bVar15 = lVar11 == DAT_1469e99b8;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (bVar15) {
        local_90 = *(undefined4 *)(*plVar4 + -8 + (longlong)(int)plVar4[1] * 8);
        uStack_8c = *(undefined4 *)(*plVar4 + -4 + (longlong)(int)plVar4[1] * 8);
        goto LAB_1430064f0;
      }
      plVar13 = *(longlong **)(param_4 + 0x28);
      lVar11 = *(longlong *)(param_4 + 0x18);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      bVar15 = lVar11 == DAT_1469e9988;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (bVar15) {
        iVar14 = 0;
        cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xb3);
        if (cVar7 != '\0') {
          local_80 = (undefined4)param_1[0xb3];
          local_7c = *(undefined4 *)((longlong)param_1 + 0x59c);
          iVar14 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                             (plVar4,&local_80);
        }
        fVar16 = (float)(**(code **)(*param_1 + 0x228))(param_1);
        iVar8 = (**(code **)(*param_1 + 0x230))(param_1);
        iVar8 = (int)fVar16 - (int)fVar16 % iVar8;
        puVar5 = (undefined4 *)*plVar4;
        if (iVar14 < iVar8) {
          local_90 = *puVar5;
          uStack_8c = puVar5[1];
        }
        else {
          lVar11 = (longlong)(iVar14 - iVar8);
          local_90 = puVar5[lVar11 * 2];
          uStack_8c = puVar5[lVar11 * 2 + 1];
        }
        goto LAB_1430064f0;
      }
      plVar13 = *(longlong **)(param_4 + 0x28);
      lVar11 = *(longlong *)(param_4 + 0x18);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      bVar15 = lVar11 == DAT_1469e99a0;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (bVar15) {
        iVar14 = 0;
        cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xb3);
        if (cVar7 != '\0') {
          local_78 = (undefined4)param_1[0xb3];
          local_74 = *(undefined4 *)((longlong)param_1 + 0x59c);
          iVar14 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                             (plVar4,&local_78);
        }
        fVar16 = (float)(**(code **)(*param_1 + 0x228))(param_1);
        iVar9 = (**(code **)(*param_1 + 0x230))(param_1);
        iVar8 = (int)plVar4[1];
        iVar9 = (int)fVar16 - (int)fVar16 % iVar9;
        lVar11 = *plVar4;
        if (iVar14 < iVar8 - iVar9) {
          lVar12 = (longlong)(iVar9 + iVar14);
          local_90 = *(undefined4 *)(lVar11 + lVar12 * 8);
          uStack_8c = *(undefined4 *)(lVar11 + 4 + lVar12 * 8);
        }
        else {
          local_90 = *(undefined4 *)(lVar11 + -8 + (longlong)iVar8 * 8);
          uStack_8c = *(undefined4 *)(lVar11 + -4 + (longlong)iVar8 * 8);
        }
        goto LAB_1430064f0;
      }
    }
    cVar7 = FWeakObjectPtr::IsValid(&local_90);
    if (cVar7 == '\0') {
      cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xb3);
      if (cVar7 == '\0') {
        plVar13 = (longlong *)CONCAT71(uStackX_9,local_res8);
        bVar15 = false;
LAB_1430065f6:
        bVar6 = false;
      }
      else {
        plVar13 = *(longlong **)(param_4 + 0x28);
        lVar11 = *(longlong *)(param_4 + 0x18);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        bVar15 = true;
        if (lVar11 != DAT_1469e9970) goto LAB_1430065f6;
        bVar6 = true;
      }
      if ((bVar15) && (plVar13 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      bVar15 = false;
      if (bVar6) {
        local_88 = (undefined4)param_1[0xb3];
        uStack_84 = *(undefined4 *)((longlong)param_1 + 0x59c);
        if (((*(byte *)(param_4 + 8) & 0xc) == 0) &&
           (piVar10 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x77),
           *piVar10 != 2)) {
          plVar4 = param_1 + 0x84;
          cVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_88);
          if (cVar7 == '\0') {
            local_50 = CONCAT44(uStack_84,local_88);
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,1);
            (**(code **)(*plVar4 + 0x30))(plVar4,0);
            goto LAB_1430066ff;
          }
          local_res8 = '\0';
        }
        else {
          local_48[0] = CONCAT44(uStack_84,local_88);
          lVar11 = param_1[0x84];
          cVar7 = (**(code **)(lVar11 + 0x10))(param_1 + 0x84,&local_88);
          (**(code **)(lVar11 + 0x18))(param_1 + 0x84,local_48,cVar7 == '\0',1);
          (**(code **)(param_1[0x84] + 0x30))(param_1 + 0x84,0);
LAB_1430066ff:
          local_res8 = '\x01';
        }
        *(int *)(param_1 + 0xb4) = (int)param_1[0xb3];
        *(undefined4 *)((longlong)param_1 + 0x5a4) = *(undefined4 *)((longlong)param_1 + 0x59c);
        FUN_142fffff0(param_1 + 0x85,&local_68,&local_88);
        if (local_68 == 0) {
          uVar3 = *(undefined4 *)(param_4 + 0xc);
          *(undefined4 *)(param_1 + 0xb6) = local_88;
          *(undefined4 *)((longlong)param_1 + 0x5b4) = uStack_84;
          *(undefined4 *)(param_1 + 0xb7) = uVar3;
          FUN_1419bb590(param_1);
        }
        plVar4 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_60 + 1;
          lVar11 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar10 = (int *)((longlong)plVar4 + 0xc);
            iVar14 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        goto LAB_143006523;
      }
      uVar2 = *(ushort *)(param_4 + 8);
      if ((((uVar2 & 3) == 0) && ((uVar2 & 0x30) == 0)) && ((uVar2 & 0xc) != 0)) {
        plVar13 = *(longlong **)(param_4 + 0x28);
        bVar15 = true;
        lVar11 = *(longlong *)(param_4 + 0x18);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        if ((lVar11 != DAT_1469e9b68) ||
           (piVar10 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x77),
           *piVar10 != 3)) goto LAB_1430067ef;
        bVar6 = true;
      }
      else {
        plVar13 = (longlong *)CONCAT71(uStackX_9,local_res8);
LAB_1430067ef:
        bVar6 = false;
      }
      if ((bVar15) && (plVar13 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (!bVar6) goto LAB_143006523;
      param_1 = param_1 + 0x84;
      (**(code **)(*param_1 + 0x20))(param_1);
      iVar14 = 0;
      if (0 < (int)plVar4[1]) {
        lVar11 = 0;
        do {
          local_70 = *(undefined4 *)(lVar11 + *plVar4);
          local_6c = *(undefined4 *)(lVar11 + 4 + *plVar4);
          (**(code **)(*param_1 + 0x18))(param_1,&local_70,1,0);
          iVar14 = iVar14 + 1;
          lVar11 = lVar11 + 8;
        } while (iVar14 < (int)plVar4[1]);
      }
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    else {
      local_58 = CONCAT44(uStack_8c,local_90);
      (**(code **)(*param_1 + 0x278))(param_1,&local_58,param_4);
LAB_143006523:
      if (local_res8 == '\0') goto LAB_1430068a1;
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 1430068e0 FUN_1430068e0 body=606 status=ok
// SIG undefined FUN_1430068e0(void)

undefined1 * FUN_1430068e0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  local_f8 = *(longlong *)(param_4 + 0x18);
  local_f0 = *(undefined8 *)(param_4 + 0x20);
  local_e8 = *(longlong **)(param_4 + 0x28);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  bVar7 = false;
  cVar6 = FUN_142103f00();
  if (cVar6 != '\0') {
    cVar6 = FKey::IsValid(&local_f8);
    if ((cVar6 == '\0') ||
       (((local_f8 != DAT_1469e98e0 && (local_f8 != DAT_1469e9d90)) && (local_f8 != DAT_1469ea528)))
       ) {
      cVar6 = FKey::IsValid(&local_f8);
      if (((cVar6 == '\0') ||
          (((local_f8 != DAT_1469e9910 && (local_f8 != DAT_1469e9b68)) &&
           ((local_f8 != DAT_1469e9da8 &&
            ((local_f8 != DAT_1469ea4f8 && (local_f8 != DAT_1469ea540)))))))) &&
         ((cVar6 = FKey::IsValid(&local_f8), cVar6 == '\0' ||
          ((((local_f8 != DAT_1469ea588 && (local_f8 != DAT_1469ea5a0)) &&
            (local_f8 != DAT_1469e99e8)) && (local_f8 != DAT_1469e9a18)))))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    else {
      bVar7 = *(char *)(param_1 + 0x108) != '\0';
    }
  }
  plVar5 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_e8)(local_e8);
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
  if (bVar7) {
    local_24 = local_24 & 0xffffff00;
    local_d8[0] = 1;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_58 = 0;
    local_50 = 0;
    local_28 = 0x20702;
    FUN_140439160(param_2,local_d8);
    FUN_140438c20(local_d8);
  }
  return param_2;
}



// FUNCTION 143006b40 FUN_143006b40 body=1458 status=ok
// SIG undefined FUN_143006b40(void)

undefined1 * FUN_143006b40(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 local_res10;
  uint uStackX_14;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  local_148 = *(longlong *)(param_4 + 0x18);
  local_140 = *(undefined8 *)(param_4 + 0x20);
  local_138 = *(longlong **)(param_4 + 0x28);
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
  }
  bVar10 = false;
  cVar7 = FUN_142103f00();
  if (cVar7 != '\0') {
    cVar7 = FKey::IsValid(&local_148);
    if ((cVar7 == '\0') ||
       (((local_148 != DAT_1469e98e0 && (local_148 != DAT_1469e9d90)) &&
        (local_148 != DAT_1469ea528)))) {
      cVar7 = FKey::IsValid(&local_148);
      if (((cVar7 == '\0') ||
          (((local_148 != DAT_1469e9910 && (local_148 != DAT_1469e9b68)) &&
           ((local_148 != DAT_1469e9da8 &&
            ((local_148 != DAT_1469ea4f8 && (local_148 != DAT_1469ea540)))))))) &&
         ((cVar7 = FKey::IsValid(&local_148), cVar7 == '\0' ||
          ((((local_148 != DAT_1469ea588 && (local_148 != DAT_1469ea5a0)) &&
            (local_148 != DAT_1469e99e8)) && (local_148 != DAT_1469e9a18)))))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
    }
    else {
      bVar10 = *(char *)(param_1 + 0x108) != '\0';
    }
  }
  plVar4 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_138 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_138)(local_138);
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
  if (!bVar10) {
    return param_2;
  }
  local_130 = *(longlong *)(param_4 + 0x18);
  local_128 = *(undefined8 *)(param_4 + 0x20);
  local_120 = *(longlong **)(param_4 + 0x28);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  cVar7 = FKey::IsValid(&local_130);
  plVar4 = local_120;
  if ((cVar7 == '\0') ||
     (((local_130 != DAT_1469e9910 && (local_130 != DAT_1469e9b68)) &&
      ((local_130 != DAT_1469e9da8 && ((local_130 != DAT_1469ea4f8 && (local_130 != DAT_1469ea540)))
       ))))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_120 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_120)(local_120);
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
  if (bVar10) {
    FUN_14300a310(param_1);
    goto LAB_143007064;
  }
  local_118 = *(longlong *)(param_4 + 0x18);
  local_110 = *(undefined8 *)(param_4 + 0x20);
  local_108 = *(longlong **)(param_4 + 0x28);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  cVar7 = FKey::IsValid(&local_118);
  plVar4 = local_108;
  if ((cVar7 == '\0') ||
     (((local_118 != DAT_1469e98e0 && (local_118 != DAT_1469e9d90)) && (local_118 != DAT_1469ea528))
     )) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_108 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_108)(local_108);
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
  if (bVar10) {
    FUN_14300b960(param_1);
    goto LAB_143007064;
  }
  if (*(char *)(param_1 + 0x108) != '\0') goto LAB_143007064;
  iVar3 = *(int *)(param_1 + 0x128);
  plVar4 = *(longlong **)(param_4 + 0x28);
  lVar6 = *(longlong *)(param_4 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar10 = false;
  if (lVar6 == DAT_1469e9a18) {
    plVar9 = (longlong *)((ulonglong)uStackX_14 << 0x20);
LAB_143006ed5:
    local_res10 = 1;
  }
  else {
    plVar9 = *(longlong **)(param_4 + 0x28);
    lVar6 = *(longlong *)(param_4 + 0x18);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
    if (lVar6 == DAT_1469ea5a0) goto LAB_143006ed5;
    local_res10 = 0;
  }
  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if ((char)local_res10 == '\0') {
    plVar4 = *(longlong **)(param_4 + 0x28);
    bVar10 = false;
    lVar6 = *(longlong *)(param_4 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar6 == DAT_1469e99e8) {
      plVar9 = (longlong *)CONCAT44(uStackX_14,local_res10);
LAB_143006fbd:
      bVar5 = true;
    }
    else {
      plVar9 = *(longlong **)(param_4 + 0x28);
      bVar10 = true;
      lVar6 = *(longlong *)(param_4 + 0x18);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (lVar6 == DAT_1469ea588) goto LAB_143006fbd;
      bVar5 = false;
    }
    if ((bVar10) && (plVar9 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (bVar5) {
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
      iVar8 = *(int *)(param_1 + 0x128);
      if (iVar8 < 1) {
        iVar8 = 100;
      }
      *(int *)(param_1 + 0x128) = iVar8;
    }
  }
  else {
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    if (100 < *(int *)(param_1 + 0x128)) {
      *(undefined4 *)(param_1 + 0x128) = 1;
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x128)) {
    FUN_14301c1c0(param_1);
  }
LAB_143007064:
  local_44 = local_44 & 0xffffff00;
  local_f8[0] = 1;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0x20702;
  FUN_140439160(param_2,local_f8);
  FUN_140438c20(local_f8);
  return param_2;
}



// FUNCTION 143007100 FUN_143007100 body=621 status=ok
// SIG undefined FUN_143007100(void)

undefined1 * FUN_143007100(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar3 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (bVar9) {
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar7 = plVar2;
    plVar8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x388);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar2 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = plVar2;
            if ((int)lVar3 == 1) {
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1 + -8);
    local_28 = *puVar6;
    local_24 = puVar6[1];
    cVar4 = (**(code **)(*plVar8 + 0x90))(plVar8,&local_28);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  else {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 143007370 FUN_143007370 body=470 status=ok
// SIG undefined FUN_143007370(void)

undefined1 * FUN_143007370(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x610) == '\0') {
LAB_143007426:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar8;
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar5;
    }
    if (*(int *)(param_1 + 0x3b8) == 0) goto LAB_143007426;
    plVar7 = *(longlong **)(param_4 + 0x48);
    lVar2 = *(longlong *)(param_4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    if (((lVar2 == DAT_1469e9868) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) &&
       ((*(ushort *)(param_4 + 8) & 3) == 0)) {
      bVar3 = true;
      goto LAB_14300742e;
    }
  }
  bVar3 = false;
LAB_14300742e:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (bVar3) {
    plVar8 = (longlong *)(param_1 + 0x420);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (0 < iVar6) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8,2);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else {
    FUN_1419b57c0(param_1,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 143007550 FUN_143007550 body=1429 status=ok
// SIG undefined FUN_143007550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143007550(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_1c8 [32];
  char local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [24];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar2 = *(longlong **)(param_1 + 0x390);
  plVar10 = plVar2;
  plVar12 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar13 = iVar4 == 0;
    if (bVar13) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar12 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar4 == (int)plVar2[1];
      if (bVar13) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = *(longlong **)(param_1 + 0x388);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 0x430) = 0;
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar11 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_1a8 = lVar11 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (local_1a8 != '\0') {
    iVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar4);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)(**(code **)(*plVar12 + 0x38))(plVar12,param_1 + -8);
      local_1a8 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar5);
      if ((int)local_1a0 == 3) {
        if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
          if ((*(ushort *)(param_4 + 8) & 3) == 0) goto LAB_1430076d3;
          local_188 = *puVar5;
          local_184 = puVar5[1];
          (**(code **)(*plVar12 + 0x28))(plVar12,&local_188);
        }
        else {
          local_190 = *puVar5;
          local_18c = puVar5[1];
          (**(code **)(*plVar12 + 0x18))(plVar12,&local_190,local_1a8 == '\0',1);
        }
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
LAB_1430076d3:
      if ((local_1a8 == '\0') && (*(char *)(param_1 + 0x430) == '\0')) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
        local_180 = *puVar5;
        local_17c = puVar5[1];
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_180,1);
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
      local_198 = (longlong *)(param_1 + 8);
      plVar6 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_198,local_140)
      ;
      plVar2 = (longlong *)plVar6[1];
      lVar11 = *plVar6 + -8;
      if (*plVar6 == 0) {
        lVar11 = 0;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_138 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      local_178 = 0;
      if (lVar11 != 0) {
        local_178 = lVar11 + 8;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_170 = plVar2;
      plVar7 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_198,local_130)
      ;
      plVar6 = (longlong *)plVar7[1];
      local_1a0 = *plVar7 + -8;
      if (*plVar7 == 0) {
        local_1a0 = 0;
      }
      local_198 = plVar6 + 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)local_198 = (int)*local_198 + 1;
        UNLOCK();
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_128 + 1;
        lVar11 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      local_168 = local_1a0 + 8;
      if (local_1a0 == 0) {
        local_168 = 0;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_158 = DAT_1469e9868;
      local_150 = DAT_1469e9870;
      local_148 = DAT_1469e9878;
      if (DAT_1469e9878 != 0) {
        LOCK();
        *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
        UNLOCK();
      }
      local_54 = local_54 & 0xffffff00;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_108[0] = 1;
      local_58 = 0x20702;
      local_160 = plVar6;
      uVar8 = (**(code **)(*plVar12 + 0xa8))(plVar12,local_120);
      uVar9 = FUN_140466100(local_108,&local_178,&local_158);
      uVar8 = FUN_14185b9a0(uVar9,uVar8,0,0);
      uVar8 = FUN_140693ff0(uVar8,&local_168);
      FUN_140438260(param_2,uVar8);
      FUN_140438c20(local_108);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar11 = *local_198;
        *(int *)local_198 = (int)*local_198 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar2 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        LOCK();
        plVar12 = plVar2 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (plVar10 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar2 = plVar10 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return param_2;
      }
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*plVar10 + 8))(plVar10,1);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_2;
}



// FUNCTION 143007af0 FUN_143007af0 body=342 status=ok
// SIG undefined FUN_143007af0(void)

undefined8 FUN_143007af0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x610) == '\0') {
LAB_143007baa:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar8;
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar5;
    }
    if (*(int *)(param_1 + 0x3b8) == 0) goto LAB_143007baa;
    plVar7 = *(longlong **)(param_4 + 0x48);
    lVar2 = *(longlong *)(param_4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    if (((lVar2 == DAT_1469e9880) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) &&
       (((*(ushort *)(param_4 + 8) & 3) == 0 && (cVar4 = FUN_1419b3dd0(param_1), cVar4 == '\0')))) {
      bVar3 = true;
      goto LAB_143007bb2;
    }
  }
  bVar3 = false;
LAB_143007bb2:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (bVar3) {
    plVar8 = (longlong *)(param_1 + 0x420);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (0 < iVar6) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8,2);
    }
  }
  FUN_1419b5c60(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 143007c50 FUN_143007c50 body=2310 status=ok
// SIG undefined FUN_143007c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143007c50(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_538 [32];
  char local_518;
  longlong *local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float *local_4d0;
  undefined1 local_4c8 [8];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  uint local_414;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3e8;
  undefined8 local_3e0;
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
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  uint local_354;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_294;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  plVar10 = *(longlong **)(param_1 + 0x390);
  plVar9 = plVar10;
  plVar11 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar10[1];
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(plVar10 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar9 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar12) {
      LOCK();
      bVar12 = iVar6 == (int)plVar10[1];
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar10;
        if ((plVar10 != (longlong *)0x0) &&
           (plVar11 = *(longlong **)(param_1 + 0x388), plVar11 != (longlong *)0x0)) {
          local_510 = plVar11 + -0x84;
          goto LAB_143007ccf;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(plVar10 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  local_510 = (longlong *)0x0;
  plVar10 = plVar9;
LAB_143007ccf:
  local_4d0 = param_3;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar10 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar9 = plVar10 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_518 = lVar3 == DAT_1469e9868;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_518 != '\0') {
    local_414 = local_414 & 0xffffff00;
    local_4c8[0] = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0;
    local_440 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_418 = 0x20702;
    uVar7 = FUN_1406a1ac0(local_4c8);
    FUN_140438260(local_108,uVar7);
    FUN_140438c20(local_4c8);
    if (*(char *)(param_1 + 0x430) != '\0') {
      local_354 = local_354 & 0xffffff00;
      local_408[0] = 1;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_400 = 0;
      local_3f8 = 0;
      local_3e8 = 0;
      local_3e0 = 0;
      local_388 = 0;
      local_380 = 0;
      local_358 = 0x20702;
      uVar7 = FUN_1406a1ac0(local_408);
      FUN_140459130(local_108,uVar7);
      FUN_140438c20(local_408);
    }
    local_4e0 = *local_4d0 * local_4d0[7];
    local_4d8 = local_4d0[1] * local_4d0[9];
    local_4d4 = local_4d0[1] * local_4d0[10];
    local_4dc = *local_4d0 * local_4d0[8];
    local_4e8 = local_4d0[0xb];
    local_4e4 = local_4d0[0xc];
    cVar4 = FSlateRotatedRect::IsUnderLocation(&local_4e8,param_4 + 0x18);
    cVar5 = FUN_141846080(param_1);
    if (cVar5 != '\0') {
      if (cVar4 != '\0') {
        iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
        if (iVar6 == 2) {
          if (*(char *)(param_1 + 0x430) == '\0') {
            (**(code **)(*plVar11 + 0x20))(plVar11);
            (**(code **)(*plVar11 + 0x30))(plVar11,2);
          }
          local_1d4 = local_1d4 & 0xffffff00;
          local_288[0] = 1;
          local_280 = 0;
          local_278 = 0;
          local_268 = 0;
          local_260 = 0;
          local_258 = 0;
          uStack_250 = 0;
          local_248 = 0;
          uStack_240 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = 0x20702;
          uVar7 = FUN_1406a1ac0(local_288);
          FUN_140459130(local_108,uVar7);
          FUN_140438c20(local_288);
        }
        else if ((((iVar6 == 3) && (*(char *)(param_1 + 0x430) == '\0')) &&
                 ((*(ushort *)(param_4 + 8) & 0xc) == 0)) && ((*(ushort *)(param_4 + 8) & 3) == 0))
        {
          puVar8 = (undefined4 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
          cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
          if ((cVar4 != '\0') && (iVar6 = (**(code **)(*plVar11 + 0x60))(plVar11), 1 < iVar6)) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
            local_508 = *puVar8;
            local_504 = puVar8[1];
            (**(code **)(*plVar11 + 0x18))(plVar11,&local_508,1);
            (**(code **)(*plVar11 + 0x30))(plVar11,2);
            local_294 = local_294 & 0xffffff00;
            local_348[0] = 1;
            local_340 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_308 = 0;
            uStack_300 = 0;
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_2e8 = 0;
            uStack_2e0 = 0;
            local_2d8 = 0;
            uStack_2d0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_338 = 0;
            local_328 = 0;
            local_320 = 0;
            local_2c8 = 0;
            local_2c0 = 0;
            local_298 = 0x20702;
            uVar7 = FUN_1406a1ac0(local_348);
            FUN_140459130(local_108,uVar7);
            FUN_140438c20(local_348);
          }
        }
      }
      puVar8 = (undefined4 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
      if (puVar8 != (undefined4 *)0x0) {
        local_500 = *puVar8;
        local_4fc = puVar8[1];
        cVar4 = (**(code **)(*plVar11 + 0x88))(plVar11,&local_500);
        if (cVar4 != '\0') {
          local_114 = local_114 & 0xffffff00;
          local_1c8[0] = 1;
          local_198 = 0;
          uStack_190 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_148 = 0;
          local_140 = 0;
          local_118 = 0x20702;
          uVar7 = FUN_1406a1ac0(local_1c8);
          FUN_140459130(local_108,uVar7);
          FUN_140438c20(local_1c8);
        }
      }
      if (*(char *)(param_1 + 0x430) != '\0') {
        (**(code **)(*plVar11 + 0x30))(plVar11,2);
      }
      FReply::FReply(param_2,local_108);
      FUN_140438c20(local_108);
      goto LAB_1430084e9;
    }
    FUN_140438c20(local_108);
    goto LAB_1430082d0;
  }
  plVar9 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (lVar3 == DAT_1469e9880) {
    cVar4 = FUN_1419b3dd0(local_510);
    local_518 = '\x01';
    if (cVar4 != '\0') goto LAB_143008408;
  }
  else {
LAB_143008408:
    local_518 = '\0';
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if ((local_518 != '\0') &&
     (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8), iVar6 - 1U < 3)) {
    puVar8 = (undefined4 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
    cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
    if (cVar4 == '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      local_4f8 = *puVar8;
      local_4f4 = puVar8[1];
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_4f8,1);
      (**(code **)(*plVar11 + 0x30))(plVar11,2);
    }
    local_4f0 = *puVar8;
    local_4ec = puVar8[1];
    (**(code **)(*plVar11 + 0x80))(plVar11,&local_4f0,param_4);
    FReply::Handled(param_2);
LAB_1430084e9:
    if (plVar10 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return param_2;
    }
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return param_2;
    }
    (**(code **)(*plVar10 + 8))(plVar10,1);
    return param_2;
  }
LAB_1430082d0:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 143008560 FUN_143008560 body=330 status=ok
// SIG undefined FUN_143008560(void)

undefined8 FUN_143008560(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar1 = (longlong *)param_1[0xb5];
  if (((plVar1 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x612) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x611) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    iVar5 = (**(code **)(*param_1 + 0x230))();
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb3);
    if (cVar4 == '\0') {
      iVar6 = 0;
    }
    else {
      local_res8 = (undefined4)param_1[0xb3];
      local_resc = *(undefined4 *)((longlong)param_1 + 0x59c);
      lVar3 = plVar1[1];
      lVar2 = *plVar1;
      for (lVar7 = lVar2; lVar7 != lVar2 + (longlong)(int)lVar3 * 8; lVar7 = lVar7 + 8) {
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res8);
        if (cVar4 != '\0') {
          iVar6 = (int)(lVar7 - lVar2 >> 3);
          goto LAB_14300862c;
        }
      }
      iVar6 = -1;
    }
LAB_14300862c:
    if (*(char *)(param_4 + 0x18) == '\x02') {
      iVar5 = -iVar5;
    }
    else if (*(char *)(param_4 + 0x18) != '\x03') goto LAB_143008687;
    iVar6 = iVar6 + iVar5;
    if ((-1 < iVar6) && (iVar6 < (int)plVar1[1])) {
      (**(code **)(*param_1 + 0x278))(param_1,*plVar1 + (longlong)iVar6 * 8,param_4);
      local_48 = 0;
      uStack_40 = 0;
      FUN_1418f84e0(param_2,&local_48);
      return param_2;
    }
  }
LAB_143008687:
  FUN_1417ca320(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1430086b0 FUN_1430086b0 body=72 status=ok
// SIG undefined FUN_1430086b0(void)

void FUN_1430086b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (longlong *)param_1[0x91];
  if (plVar1 == (longlong *)0x0) {
    bVar3 = param_2 == (longlong *)param_1[0x90];
  }
  else {
    if (param_2 != plVar1) {
      return;
    }
    cVar2 = (**(code **)(*plVar1 + 0x828))();
    bVar3 = cVar2 == '\0';
  }
  if (!bVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001430086eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x828))(param_1);
  return;
}



// FUNCTION 143008700 FUN_143008700 body=10 status=ok
// SIG undefined FUN_143008700(void)

void FUN_143008700(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143008703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))();
  return;
}



// FUNCTION 143008730 FUN_143008730 body=540 status=ok
// SIG undefined FUN_143008730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143008730(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_stack_00000028;
  longlong in_stack_00000030;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined1 local_e0;
  longlong local_d8 [5];
  undefined1 local_b0;
  byte local_af;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar2 != 0) && (param_1[0xa7] != 0)) &&
      (lVar1 = *(longlong *)(param_1[0xa7] + 0x148), lVar1 != 0)) &&
     ((*(float *)(param_1 + 0xcb) < 0.0 ||
      (fVar5 = *in_stack_00000028 * *in_stack_00000028 + in_stack_00000028[1] * in_stack_00000028[1]
               + in_stack_00000028[2] * in_stack_00000028[2],
      *(float *)((longlong)param_1 + 0x5f4) <= fVar5 &&
      fVar5 != *(float *)((longlong)param_1 + 0x5f4))))) {
    fVar6 = *(float *)(in_stack_00000030 + 0x18) - *(float *)(param_1 + 0xca);
    fVar4 = *(float *)(in_stack_00000030 + 0x14) - *(float *)((longlong)param_1 + 0x64c);
    fVar5 = *(float *)(in_stack_00000030 + 0x1c) - *(float *)((longlong)param_1 + 0x654);
    fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
    if ((*(float *)((longlong)param_1 + 0x5ec) <= fVar5 &&
         fVar5 != *(float *)((longlong)param_1 + 0x5ec)) &&
       (fVar5 = *(float *)(lVar2 + 0x790) - *(float *)(param_1 + 0xcb),
       *(float *)(param_1 + 0xbe) <= fVar5 && fVar5 != *(float *)(param_1 + 0xbe))) {
      local_af = local_af & 0xfe;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_e8 = local_d8;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0x3f800000;
      local_e0 = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_d8[4] = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0x3f800000;
      local_b0 = 0x40;
      FUN_142d68ea0(lVar1,param_1,in_stack_00000030,0);
      *(undefined8 *)((longlong)param_1 + 0x64c) = *(undefined8 *)(in_stack_00000030 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x654) = *(undefined4 *)(in_stack_00000030 + 0x1c);
      *(undefined4 *)(param_1 + 0xcb) = *(undefined4 *)(lVar2 + 0x790);
      if (local_68 != 0) {
        plVar3 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar3 = local_78;
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_d8[2] != 0) {
        FMemory::Free();
      }
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 143008950 FUN_143008950 body=68 status=ok
// SIG undefined FUN_143008950(void)

void FUN_143008950(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar1 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar1);
  }
  *(longlong *)(param_1 + 0x238) = param_1;
  return;
}



// FUNCTION 1430089a0 FUN_1430089a0 body=147 status=ok
// SIG undefined FUN_1430089a0(void)

void FUN_1430089a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    uVar1 = UUserObjectListEntry::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar1);
    if (lVar2 != 0) {
      local_28 = *(undefined8 *)(param_2 + 0x10);
      local_20 = *(undefined8 *)(param_2 + 0x20);
      local_18 = *(undefined4 *)(param_2 + 0xc);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x358,&local_28);
    }
  }
  local_res8[0] = *(undefined4 *)(param_2 + 0xc);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2e8,local_res8);
  FUN_143011fc0(param_1,param_2 + 0xc);
  return;
}



// FUNCTION 143008a40 FUN_143008a40 body=41 status=ok
// SIG undefined FUN_143008a40(void)

void FUN_143008a40(longlong *param_1)

{
  if (param_1[0x1b] != 0) {
    (**(code **)(*param_1 + 0x820))();
  }
  FUN_142237790(param_1);
  return;
}



// FUNCTION 143008ae0 FUN_143008ae0 body=193 status=ok
// SIG undefined FUN_143008ae0(void)

void FUN_143008ae0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x5a8) & 2) != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x4d8,0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x4c8,0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x4e8,0);
    lVar2 = FUN_14222e2a0(param_1);
    if ((((lVar2 == 0) && ((*(byte *)(param_1 + 0x4a4) & 0x20) == 0)) &&
        ((plVar3 = *(longlong **)(param_1 + 0x488), plVar3 != (longlong *)0x0 ||
         (plVar3 = *(longlong **)(param_1 + 0x480), plVar3 != (longlong *)0x0)))) &&
       (cVar1 = (**(code **)(*plVar3 + 0x7a8))(plVar3), cVar1 == '\0')) {
      (**(code **)(*plVar3 + 0x7a0))(plVar3,1);
    }
  }
  if ((*(longlong *)(param_1 + 0x488) == 0) && (*(longlong *)(param_1 + 0x480) == 0)) {
    return;
  }
  FUN_143017540(param_1);
  return;
}



// FUNCTION 143008bc0 FUN_143008bc0 body=64 status=ok
// SIG undefined FUN_143008bc0(void)

void FUN_143008bc0(longlong *param_1)

{
  if (param_1[0xae] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143008bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6f8))();
    return;
  }
  (**(code **)(*param_1 + 0x808))();
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  return;
}



// FUNCTION 143008c00 FUN_143008c00 body=766 status=ok
// SIG undefined FUN_143008c00(void)

void FUN_143008c00(longlong *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  if (((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) && (param_1[0xad] == 0)) {
    uVar11 = 0;
    if ((char)param_1[0xaf] == '\0') {
      if ((int)param_1[0xb1] < 1) {
        return;
      }
      _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
      if (0 < (int)param_1[0xb1]) {
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_a0);
        if (0 < (int)local_98) {
          uVar11 = 2;
        }
        local_a8[0] = uVar11;
        FUN_143001780(local_88,local_a8);
        if (local_a0 != 0) {
          FMemory::Free();
        }
        lVar5 = param_1[0xb3];
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar5 = FUN_143019ed0(uVar4,local_88,(int)lVar5 == 0,1);
        if (lVar5 != 0) {
          (**(code **)(*param_1 + 0x6f8))(param_1,lVar5);
        }
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
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    else {
      lVar5 = (**(code **)(*param_1 + 0x6f0))();
      if ((lVar5 != 0) && ((**(code **)(*param_1 + 0x6f8))(param_1,lVar5), param_1[0xac] != 0)) {
        FUN_143016850(param_1);
      }
    }
    plVar6 = (longlong *)param_1[0xad];
    if (plVar6 != (longlong *)0x0) {
      uVar4 = FUN_14301f8f0();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
      if (plVar6 != (longlong *)0x0) {
        *(int *)((longlong)plVar6 + 0x1fc) = (int)param_1[0xb4];
        *(undefined4 *)((longlong)plVar6 + 0x204) = *(undefined4 *)((longlong)param_1 + 0x5a4);
        if ((int)param_1[0xb3] != 0) {
          *(byte *)(plVar6 + 99) = *(byte *)(plVar6 + 99) | 1;
          plVar2 = plVar6 + 0x61;
          if (plVar2 != param_1 + 0xb2) {
            plVar7 = (longlong *)*plVar2;
            for (iVar9 = (int)plVar6[0x62]; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              plVar7 = plVar7 + 3;
            }
            iVar9 = (int)param_1[0xb3];
            lVar5 = param_1[0xb2];
            *(int *)(plVar6 + 0x62) = iVar9;
            if ((iVar9 == 0) && (*(int *)((longlong)plVar6 + 0x314) == 0)) {
              *(undefined4 *)((longlong)plVar6 + 0x314) = 0;
            }
            else {
              TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar2,iVar9);
              puVar8 = (undefined8 *)*plVar2;
              if (iVar9 != 0) {
                puVar10 = (undefined4 *)(lVar5 + 0x10);
                do {
                  *puVar8 = 0;
                  iVar3 = puVar10[-2];
                  _Src = *(void **)(puVar10 + -4);
                  *(int *)(puVar8 + 1) = iVar3;
                  if (iVar3 == 0) {
                    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                  }
                  else {
                    TArray<int,FDefaultAllocator>::ResizeForCopy(puVar8,iVar3,0);
                    _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar3 << 2);
                  }
                  *(undefined4 *)(puVar8 + 2) = *puVar10;
                  *(undefined1 *)((longlong)puVar8 + 0x14) = *(undefined1 *)(puVar10 + 1);
                  puVar1 = (undefined1 *)((longlong)puVar10 + 5);
                  puVar10 = puVar10 + 6;
                  *(undefined1 *)((longlong)puVar8 + 0x15) = *puVar1;
                  puVar8 = puVar8 + 3;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
            }
          }
          (**(code **)(*plVar6 + 0x508))(plVar6,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 143008f30 FUN_143008f30 body=61 status=ok
// SIG undefined FUN_143008f30(void)

void FUN_143008f30(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0x41] != 0) {
    cVar1 = FAssetBundleData::ExportTextItem(param_1 + 0x5f);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143008f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x508))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 143008f80 FUN_143008f80 body=154 status=ok
// SIG undefined FUN_143008f80(void)

undefined1 * FUN_143008f80(longlong param_1,undefined1 *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14300a310();
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 143009020 FUN_143009020 body=240 status=ok
// SIG undefined FUN_143009020(void)

void FUN_143009020(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar4 = lVar3 + 8;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x10)) && (*(longlong *)(lVar3 + 0x18) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x10) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1430090b0;
    }
  }
  else {
LAB_1430090b0:
    lVar3 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1430090e9;
  }
  lVar2 = 0;
LAB_1430090e9:
  FUN_1425a28b0(*(undefined8 *)(param_1 + 0x30),**(undefined8 **)(param_1 + 0x28),lVar2);
  return;
}



// FUNCTION 143009110 FUN_143009110 body=992 status=ok
// SIG undefined FUN_143009110(void)

undefined1 * FUN_143009110(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268 [8];
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (*(char *)(param_1 + 0x431) == '\0') {
    return param_2;
  }
  *(undefined1 *)(param_1 + 0x431) = 0;
  plVar2 = *(longlong **)(param_1 + 0x390);
  plVar8 = plVar2;
  plVar9 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x388);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = (longlong *)(param_1 + -8);
  puVar6 = (undefined4 *)(**(code **)(*plVar9 + 0x38))(plVar9,plVar2);
  if (puVar6 == (undefined4 *)0x0) goto LAB_14300947f;
  iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2);
  if (iVar5 != 0) {
    cVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
    if (cVar4 == '\0') {
      if (iVar5 != 3) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_res10 = *puVar6;
      local_res14 = puVar6[1];
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_res10,1);
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      local_1b4 = local_1b4 & 0xffffff00;
      local_268[0] = 1;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_260 = 0;
      local_258 = 0;
      local_248 = 0;
      local_240 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1b8 = 0x20702;
      FUN_140439160(param_2,local_268);
      puVar7 = local_268;
    }
    else {
      if (1 < iVar5 - 2U) goto LAB_1430093b9;
      local_278 = *puVar6;
      local_274 = puVar6[1];
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_278,1);
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      local_f4 = local_f4 & 0xffffff00;
      local_1a8[0] = 1;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_188 = 0;
      local_180 = 0;
      local_128 = 0;
      local_120 = 0;
      local_f8 = 0x20702;
      FUN_140439160(param_2,local_1a8);
      puVar7 = local_1a8;
    }
    FUN_140438c20(puVar7);
  }
LAB_1430093b9:
  local_270 = *puVar6;
  local_26c = puVar6[1];
  cVar4 = (**(code **)(*plVar9 + 0x88))(plVar9,&local_270);
  if (cVar4 != '\0') {
    local_34 = local_34 & 0xffffff00;
    local_e8[0] = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0x20702;
    FUN_140439160(param_2,local_e8);
    FUN_140438c20(local_e8);
  }
LAB_14300947f:
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1430094f0 FUN_1430094f0 body=124 status=ok
// SIG undefined FUN_1430094f0(void)

void FUN_1430094f0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    uVar2 = FUN_142dccd00();
    cVar1 = FUN_142fe9a90(param_1,uVar2,1,*(undefined1 *)((longlong)param_2 + 0x11),0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014300954e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x780))(param_1,uVar2,*(undefined1 *)((longlong)param_2 + 0x11));
      return;
    }
    (**(code **)(*param_1 + 0x7e0))(param_1,uVar2);
  }
  return;
}



// FUNCTION 143009570 FUN_143009570 body=80 status=ok
// SIG undefined FUN_143009570(void)

void FUN_143009570(longlong param_1,undefined8 param_2)

{
  if (((*(char *)(param_1 + 0x5a8) < '\0') && (*(longlong *)(param_1 + 0x168) != 0)) &&
     ((*(byte *)(param_1 + 0x614) & 2) != 0)) {
    *(byte *)(param_1 + 0x614) = *(byte *)(param_1 + 0x614) & 0xfd;
    FUN_142fea280();
  }
  FUN_1430095c0(param_1,param_2);
  return;
}



// FUNCTION 1430095c0 FUN_1430095c0 body=580 status=ok
// SIG undefined FUN_1430095c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430095c0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_14222e2a0();
  if (((lVar2 == 0) && ((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) == 0)) &&
     ((char)param_1[0xb5] < '\0')) {
    (**(code **)(*param_1 + 0x600))(param_1);
    puVar3 = (undefined8 *)UKismetMathLibrary::RandomUnitVector(local_a8);
    uVar1 = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)((longlong)param_1 + 0x5ac) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x5b4) = uVar1;
    (**(code **)(*param_1 + 0x7d8))(param_1);
    *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0x7f;
    plVar4 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
    lVar2 = plVar4[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar2 = plVar4[0x1f];
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x40);
    uVar5 = AActor::GetWorldTimerManager(param_1);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)&LAB_143011fb0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar2;
      *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0xb8,&local_98,uVar1);
    if (local_38 != 0) {
      plVar6 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar6 = local_48;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar2 = FMemory::Realloc(plVar4,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 143009810 FUN_143009810 body=263 status=ok
// SIG undefined FUN_143009810(void)

void FUN_143009810(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong *plVar2;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  if ((*(byte *)((longlong)param_1 + 0x614) & 2) != 0) {
    *(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) & 0xfd;
    FUN_142fea280();
  }
  plVar2 = (longlong *)param_1[0x91];
  if ((plVar2 != (longlong *)0x0) || (plVar2 = (longlong *)param_1[0x90], plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*param_1 + 0x708))(param_1,plVar2);
    local_20 = *(float *)((longlong)param_1 + 0x46c);
    local_28 = 0;
    local_10 = local_20;
    (**(code **)(*plVar2 + 0x620))(plVar2,&local_28,0);
    fVar1 = *(float *)(param_1 + 0x8e);
    local_20 = fVar1 * param_2[2] * 0.017453292;
    local_28 = CONCAT44(fVar1 * param_2[1] * 0.017453292,fVar1 * *param_2 * 0.017453292);
    local_10 = local_20;
    FUN_142717f90(plVar2,&local_28,0,0);
  }
  return;
}



// FUNCTION 143009920 FUN_143009920 body=236 status=ok
// SIG undefined FUN_143009920(void)

void FUN_143009920(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong *plVar2;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  plVar2 = (longlong *)param_1[0x91];
  if ((plVar2 != (longlong *)0x0) || (plVar2 = (longlong *)param_1[0x90], plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*param_1 + 0x708))(param_1,plVar2);
    local_20 = *(float *)((longlong)param_1 + 0x46c);
    local_28 = 0;
    local_10 = local_20;
    (**(code **)(*plVar2 + 0x620))(plVar2,&local_28,0);
    fVar1 = *(float *)(param_1 + 0x8e);
    local_20 = fVar1 * param_2[2] * 0.017453292;
    local_28 = CONCAT44(fVar1 * param_2[1] * 0.017453292,fVar1 * *param_2 * 0.017453292);
    local_10 = local_20;
    FUN_142717f90(plVar2,&local_28,0,0);
  }
  return;
}



// FUNCTION 143009a20 FUN_143009a20 body=195 status=ok
// SIG undefined FUN_143009a20(void)

int FUN_143009a20(char *param_1,int param_2,int param_3)

{
  undefined4 local_res8 [2];
  int local_res20 [2];
  
  FUN_142ff0430();
  if (*param_1 == '\x02') {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    *param_1 = '\x03';
    FUN_140ab8370(param_1,local_res20,7);
    if ((param_2 <= local_res20[0]) && (local_res20[0] <= param_3)) {
      local_res8[0] = 0;
      FUN_140ab8370(param_1,local_res8,1);
      FUN_140ab8370(param_1,local_res8,0x20);
      FUN_140ab8370(param_1,local_res8,0x10);
      return local_res20[0];
    }
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    if (*(int *)(param_1 + 0x14) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    *param_1 = '\0';
  }
  return -1;
}



// FUNCTION 143009af0 FUN_143009af0 body=77 status=ok
// SIG undefined FUN_143009af0(void)

undefined1 FUN_143009af0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_14270bb10();
    if (lVar1 != 0) {
      lVar1 = FUN_14270bb10(*(undefined8 *)(param_1 + 0x10));
      if (*(int *)(lVar1 + 0x108) == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143009b40 FUN_143009b40 body=500 status=ok
// SIG undefined FUN_143009b40(void)

undefined8
FUN_143009b40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,wchar_t **param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined2 *puVar11;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar8 = *(int *)(param_2 + 1);
  pwVar9 = (wchar_t *)*param_2;
  pwVar7 = pwVar9;
  while( true ) {
    if (pwVar7 == pwVar9 + iVar8) {
      return 0;
    }
    if (*pwVar7 == L',') break;
    pwVar7 = pwVar7 + 1;
  }
  iVar5 = (int)((longlong)pwVar7 - (longlong)pwVar9 >> 1);
  if (iVar5 < 0) {
    return 0;
  }
  iVar10 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar10 = 0;
  }
  if (iVar10 <= iVar5) {
    return 0;
  }
  local_38 = (wchar_t *)0x0;
  puVar11 = &DAT_143f3eda8;
  local_2c = 0;
  pwVar7 = L"";
  if (iVar8 != 0) {
    pwVar7 = pwVar9;
  }
  if (iVar5 < iVar10) {
    iVar10 = iVar5;
  }
  local_30 = iVar10 + 1;
  if (iVar10 == 0) {
    local_30 = 0;
  }
  if ((0 < local_30) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), pwVar9 = local_38, 0 < local_30))
  {
    wcsncpy(local_38,pwVar7,(longlong)iVar10);
    pwVar9[iVar10] = L'\0';
  }
  pwVar9 = (wchar_t *)0x0;
  cVar2 = FUN_141678c50(&local_38,param_3);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    return 0;
  }
  iVar8 = *(int *)(param_2 + 1);
  uVar1 = iVar5 + 0x80000000;
  uVar6 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar6 = 0xffffffff;
  }
  if (iVar8 == 0) {
    uVar6 = 0;
  }
  if (iVar5 + 1U < uVar6) {
    uVar6 = iVar5 + 1U;
  }
  uVar3 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar6;
  if ((uVar6 <= uVar1) && (uVar4 = uVar3, uVar1 < uVar3)) {
    uVar4 = uVar1;
  }
  if (iVar8 != 0) {
    puVar11 = (undefined2 *)*param_2;
  }
  iVar5 = uVar4 - uVar6;
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  iVar8 = iVar5 + 1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  local_30 = iVar8;
  if ((0 < iVar8) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar8 = local_30,
     pwVar9 = local_38, 0 < local_30)) {
    wcsncpy(local_38,puVar11 + (int)uVar6,(longlong)iVar5);
    pwVar9[iVar5] = L'\0';
  }
  if (param_4 == &local_38) {
    if (pwVar9 != (wchar_t *)0x0) {
      FMemory::Free(pwVar9);
    }
    return 1;
  }
  if (*param_4 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  *param_4 = pwVar9;
  *(undefined4 *)((longlong)param_4 + 0xc) = local_2c;
  *(int *)(param_4 + 1) = iVar8;
  return 1;
}



// FUNCTION 143009d40 FUN_143009d40 body=497 status=ok
// SIG undefined FUN_143009d40(void)

undefined8 FUN_143009d40(undefined8 param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  wchar_t *_Str;
  int iVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  bool bVar12;
  wchar_t *local_38;
  uint local_30;
  undefined4 local_2c;
  
  pwVar6 = (wchar_t *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  pwVar8 = pwVar6;
  while( true ) {
    if (pwVar8 == pwVar6 + iVar2) {
      return 0;
    }
    if (*pwVar8 == L',') break;
    pwVar8 = pwVar8 + 1;
  }
  iVar3 = (int)((longlong)pwVar8 - (longlong)pwVar6 >> 1);
  if (iVar3 < 0) {
    return 0;
  }
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  if (iVar7 <= iVar3) {
    return 0;
  }
  pwVar8 = L"";
  if (iVar2 != 0) {
    pwVar8 = pwVar6;
  }
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  if (iVar3 < iVar7) {
    iVar7 = iVar3;
  }
  uVar10 = iVar7 + 1;
  if (iVar7 == 0) {
    uVar10 = 0;
  }
  pwVar6 = local_38;
  local_30 = uVar10;
  if ((0 < (int)uVar10) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), uVar10 = local_30,
     pwVar6 = local_38, 0 < (int)local_30)) {
    wcsncpy(local_38,pwVar8,(longlong)iVar7);
    pwVar6[iVar7] = L'\0';
  }
  pwVar8 = (wchar_t *)0x0;
  _Str = L"";
  if (uVar10 != 0) {
    _Str = pwVar6;
  }
  iVar2 = _wtoi(_Str);
  *param_3 = iVar2;
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  iVar2 = *(int *)(param_2 + 1);
  uVar1 = iVar3 + 0x80000000;
  uVar10 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar10 = 0xffffffff;
  }
  uVar9 = 0;
  if (iVar2 == 0) {
    uVar10 = uVar9;
  }
  if (iVar3 + 1U < uVar10) {
    uVar10 = iVar3 + 1U;
  }
  uVar4 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = uVar9;
  }
  uVar5 = uVar10;
  if ((uVar10 <= uVar1) && (uVar5 = uVar4, uVar1 < uVar4)) {
    uVar5 = uVar1;
  }
  if (iVar2 == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  iVar2 = uVar5 - uVar10;
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  local_30 = iVar2 + 1;
  if (iVar2 == 0) {
    local_30 = uVar9;
  }
  bVar12 = local_30 == 0;
  if (0 < (int)local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar1 = local_30;
    pwVar8 = local_38;
    bVar12 = local_30 == 0;
    if (0 < (int)local_30) {
      wcsncpy(local_38,puVar11 + (int)uVar10,(longlong)iVar2);
      bVar12 = uVar1 == 0;
      pwVar8[iVar2] = L'\0';
    }
  }
  pwVar6 = L"";
  if (!bVar12) {
    pwVar6 = pwVar8;
  }
  iVar2 = _wtoi(pwVar6);
  *param_4 = iVar2;
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  return 1;
}



// FUNCTION 143009f40 FUN_143009f40 body=518 status=ok
// SIG undefined FUN_143009f40(void)

undefined8 FUN_143009f40(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  wint_t *pwVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  undefined2 *puVar11;
  wchar_t *_Str;
  bool bVar12;
  undefined2 *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  pwVar9 = (wchar_t *)0x0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  cVar1 = FParse::Line(param_2,&local_38,0);
  if ((cVar1 != '\0') && (cVar1 = FParse::Line(param_2,&local_58,0), cVar1 != '\0')) {
    pwVar7 = &DAT_145a2c7f8;
    puVar11 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar11 = local_38;
    }
    do {
      wVar2 = *(wint_t *)((longlong)(puVar11 + -0xa2d163fc) + (longlong)pwVar7);
      if ((wVar2 == 0) && (*pwVar7 == 0)) goto LAB_14300a002;
      if (wVar2 != *pwVar7) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_143009ff4;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_14300a0fe:
  uVar8 = 0;
LAB_14300a100:
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar8;
LAB_143009ff4:
  if (wVar2 == wVar3) {
LAB_14300a002:
    cVar1 = FString::StartsWith(&local_58,L"FileVersion=",1);
    if (cVar1 != '\0') {
      uVar10 = (int)local_50 - 1;
      if ((int)local_50 == 0) {
        uVar10 = 0;
      }
      if (0xc < uVar10) {
        uVar10 = 0xc;
      }
      uVar4 = (int)local_50 - 1;
      if ((int)local_50 == 0) {
        uVar4 = 0;
      }
      uVar5 = uVar10;
      if ((uVar10 < 0x8000000c) && (uVar5 = uVar4, 0x8000000b < uVar4)) {
        uVar5 = 0x8000000b;
      }
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      puVar11 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar11 = local_58;
      }
      iVar6 = uVar5 - uVar10;
      local_40 = iVar6 + 1;
      if (iVar6 == 0) {
        local_40 = 0;
      }
      bVar12 = local_40 == 0;
      if (0 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar4 = local_40;
        pwVar9 = local_48;
        bVar12 = local_40 == 0;
        if (0 < (int)local_40) {
          wcsncpy(local_48,puVar11 + (int)uVar10,(longlong)iVar6);
          bVar12 = uVar4 == 0;
          pwVar9[iVar6] = L'\0';
        }
      }
      _Str = L"";
      if (!bVar12) {
        _Str = pwVar9;
      }
      iVar6 = _wtoi(_Str);
      *param_3 = iVar6;
      if (pwVar9 != (wchar_t *)0x0) {
        FMemory::Free(pwVar9);
      }
      if (*param_3 == 1) {
        uVar8 = 1;
        goto LAB_14300a100;
      }
    }
  }
  goto LAB_14300a0fe;
}



// FUNCTION 14300a150 FUN_14300a150 body=22 status=ok
// SIG undefined FUN_14300a150(void)

void FUN_14300a150(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_142d88150((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 8),param_3);
  return;
}



// FUNCTION 14300a170 FUN_14300a170 body=215 status=ok
// SIG undefined FUN_14300a170(void)

void FUN_14300a170(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 8,iVar1);
  }
  lVar3 = (longlong)param_2 * 0x40;
  _Src = (void *)(*(longlong *)(param_1 + 8) + lVar3);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x40),_Src,(longlong)(iVar1 - param_2) << 6);
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar2) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar2) = 0;
  *(undefined8 *)(lVar3 + 0x30 + lVar2) = 0;
  *(undefined4 *)(lVar3 + 0x38 + lVar2) = 0x3f800000;
  *(undefined4 *)(lVar3 + 8 + lVar2) = 0x3f800000;
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  lVar3 = *(longlong *)(param_1 + 8) + lVar3;
  FUN_142d88150(lVar3,param_3);
  FUN_142d88160(lVar3,param_4);
  return;
}



// FUNCTION 14300a250 FUN_14300a250 body=182 status=ok
// SIG undefined FUN_14300a250(void)

void FUN_14300a250(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  longlong local_res8;
  
  if ((((*(char *)(param_1 + 0x128) == '\x03') && (*(float *)(param_1 + 0x618) == 0.0)) &&
      (0.0 < *(float *)(param_1 + 0xcc))) &&
     (local_res8 = *(longlong *)(param_1 + 0x180), local_res8 != 0)) {
    uVar1 = AActor::GetWorldTimerManager();
    uVar2 = FTimerManager::FindTimer(uVar1,&local_res8,0);
    fVar3 = (float)FTimerManager::InternalGetTimerRemaining(uVar1,uVar2);
    *(float *)(param_1 + 0x618) = fVar3;
    if (0.0 < fVar3) {
      uVar1 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar1,param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
  }
  return;
}



// FUNCTION 14300a310 FUN_14300a310 body=5702 status=ok
// SIG undefined FUN_14300a310(void)

void FUN_14300a310(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  wchar_t *pwVar29;
  ulonglong uVar30;
  undefined8 local_res8;
  wchar_t *local_res10;
  wchar_t *local_res18;
  wchar_t *local_res20;
  wchar_t *local_188;
  undefined8 local_180;
  wchar_t *local_178;
  int local_170;
  int local_16c;
  wchar_t *local_168;
  int local_160;
  int local_15c;
  undefined2 *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  longlong *local_58;
  
  uVar17 = 0;
  iVar5 = 0;
  iVar24 = 0;
  iVar20 = 0;
  uVar11 = 0;
  uVar22 = 0;
  uVar28 = 0;
  cVar4 = *(char *)(param_1 + 0x108);
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  puVar6 = local_148;
  uVar19 = uVar11;
  uVar23 = uVar22;
  uVar30 = uVar28;
  if (cVar4 == '\0') {
    if ((*(longlong *)(param_1 + 0x1b8) != 0) &&
       (iVar5 = FUN_142ffe4c0(*(longlong *)(param_1 + 0x1b8),&local_128), uVar19 = local_128,
       puVar6 = local_148, 0 < iVar5)) {
      uVar8 = FWeakObjectPtr::Get(local_128);
      *(undefined8 *)(param_1 + 0x140) = uVar8;
      *(undefined1 *)(param_1 + 0x108) = 1;
      puVar6 = local_148;
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        plVar15 = (longlong *)(param_1 + 0x1e8);
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        if (*(int *)(param_1 + 500) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
        }
        FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(param_1 + 0x140));
        iVar5 = *(int *)(param_1 + 0x128);
        lVar13 = FUN_142ff6320();
        lVar12 = *(longlong *)(lVar13 + 0x18);
        lVar13 = (longlong)*(int *)(lVar13 + 0x20) * 0x30 + lVar12;
        if (lVar12 != lVar13) {
LAB_14300b7b0:
          cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar12,&local_res8);
          if (cVar4 == '\0') goto code_r0x00014300b7c3;
          puVar18 = *(undefined4 **)(lVar12 + 8);
          puVar25 = puVar18 + (longlong)*(int *)(lVar12 + 0x10) * 0xc;
          for (; puVar18 != puVar25; puVar18 = puVar18 + 0xc) {
            if (((((int)puVar18[10] <= iVar5) && (iVar5 <= (int)puVar18[0xb])) &&
                (cVar4 = FWeakObjectPtr::IsValid(puVar18), cVar4 != '\0')) &&
               (iVar24 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::
                         Find(plVar15,puVar18), iVar24 == -1)) {
              iVar24 = *(int *)(param_1 + 0x1f0);
              *(int *)(param_1 + 0x1f0) = iVar24 + 1;
              if (*(int *)(param_1 + 500) < iVar24 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar24);
              }
              puVar1 = (undefined4 *)(*plVar15 + (longlong)iVar24 * 8);
              *puVar1 = *puVar18;
              puVar1[1] = puVar18[1];
            }
          }
        }
LAB_14300b843:
        local_res8 = (wchar_t *)((ulonglong)local_res8 & 0xffffffffffffff00);
        AlgoImpl::
        IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                  (*plVar15,(longlong)*(int *)(param_1 + 0x1f0),0,&local_res8);
        (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x210))();
        lVar12 = *(longlong *)(param_1 + 0x1d8);
        TArray<FName,FDefaultAllocator>::operator=(lVar12 + 0x4e8,lVar12 + 0x4d0);
        *(undefined4 *)(lVar12 + 0x4d8) = 0;
        if (*(int *)(lVar12 + 0x4dc) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar12 + 0x4d0,0);
        }
        FUN_14300d460(lVar12 + 0x428);
        FUN_14300d830(lVar12,&local_78,lVar12 + 0x36c);
        uVar19 = local_128;
        uVar23 = local_118;
        puVar6 = local_148;
        uVar30 = local_a8;
      }
    }
    goto LAB_14300b8e0;
  }
  iVar10 = 0;
  if (cVar4 == '\x01') {
    if ((*(longlong *)(param_1 + 0x1d8) != 0) &&
       (iVar5 = FUN_142ffe4c0(*(longlong *)(param_1 + 0x1d8),&local_118), uVar23 = local_118,
       puVar6 = local_148, 0 < iVar5)) {
      uVar8 = FWeakObjectPtr::Get(local_118);
      *(undefined8 *)(param_1 + 0x130) = uVar8;
      *(undefined1 *)(param_1 + 0x108) = 2;
      puVar6 = local_148;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        plVar15 = (longlong *)(param_1 + 0x208);
        *(undefined4 *)(param_1 + 0x210) = 0;
        if (*(int *)(param_1 + 0x214) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
        }
        FWeakObjectPtr::operator=(&local_res10,*(undefined8 *)(param_1 + 0x130));
        FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(param_1 + 0x140));
        iVar5 = *(int *)(param_1 + 0x128);
        lVar13 = FUN_142ff6320();
        lVar12 = *(longlong *)(lVar13 + 0x18);
        lVar13 = (longlong)*(int *)(lVar13 + 0x20) * 0x30 + lVar12;
        for (; lVar12 != lVar13; lVar12 = lVar12 + 0x30) {
          cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar12,&local_res8);
          if (cVar4 != '\0') {
            lVar13 = *(longlong *)(lVar12 + 8);
            lVar12 = (longlong)*(int *)(lVar12 + 0x10) * 0x30 + lVar13;
            if (lVar13 != lVar12) goto LAB_14300b5f0;
            break;
          }
        }
LAB_14300b67f:
        local_res8 = (wchar_t *)((ulonglong)local_res8 & 0xffffffffffffff00);
        AlgoImpl::
        IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                  (*plVar15,(longlong)*(int *)(param_1 + 0x210),0,&local_res8);
        (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x210))();
        lVar12 = *(longlong *)(param_1 + 0x1f8);
        TArray<FName,FDefaultAllocator>::operator=(lVar12 + 0x4e8,lVar12 + 0x4d0);
        *(undefined4 *)(lVar12 + 0x4d8) = 0;
        if (*(int *)(lVar12 + 0x4dc) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar12 + 0x4d0,0);
        }
        FUN_14300d460(lVar12 + 0x428);
        FUN_14300d830(lVar12,&local_78,lVar12 + 0x36c);
        uVar19 = local_128;
        uVar23 = local_118;
        puVar6 = local_148;
        uVar30 = local_a8;
      }
    }
    goto LAB_14300b8e0;
  }
  if (cVar4 != '\x02') {
    if (cVar4 == '\x03') {
      if ((*(longlong *)(param_1 + 0x218) != 0) &&
         (iVar5 = FUN_142ffe4c0(*(longlong *)(param_1 + 0x218),&local_148), puVar6 = local_148,
         uVar19 = uVar17, uVar23 = uVar17, uVar30 = uVar17, 0 < iVar5)) {
        local_res8 = (wchar_t *)*local_148;
        lVar12 = FWeakObjectPtr::Get(&local_res8);
        uVar8 = FUN_14302b1c0();
        lVar13 = UClass::GetDefaultObject<UDamageType>(uVar8);
        if (lVar12 == lVar13) {
          FWeakObjectPtr::operator=(&local_res10,0);
          local_res8 = local_res10;
        }
        else {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x38);
          if (lVar12 == 0) {
            if (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x30) != 0) {
              iVar24 = FUN_140b824e0();
            }
          }
          else {
            lVar12 = *(longlong *)(lVar12 + 0x38);
            if (lVar12 != 0) {
              iVar24 = *(int *)(lVar12 + 0x48) + -1;
            }
          }
          bVar2 = *(byte *)(param_1 + 0x109);
          uVar8 = FWeakObjectPtr::Get(&local_res8);
          if ((int)(uint)bVar2 < iVar24) {
            iVar5 = *(int *)(param_1 + 0x150);
            *(int *)(param_1 + 0x150) = iVar5 + 1;
            if (*(int *)(param_1 + 0x154) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x148,iVar5);
            }
            lVar12 = *(longlong *)(param_1 + 0x148);
          }
          else {
            iVar5 = *(int *)(param_1 + 0x160);
            *(int *)(param_1 + 0x160) = iVar5 + 1;
            if (*(int *)(param_1 + 0x164) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x158,iVar5);
            }
            lVar12 = *(longlong *)(param_1 + 0x158);
          }
          *(undefined8 *)(lVar12 + (longlong)iVar5 * 8) = uVar8;
        }
        plVar15 = (longlong *)
                  ((ulonglong)*(byte *)(param_1 + 0x109) * 0x10 + *(longlong *)(param_1 + 0x118));
        iVar5 = (int)plVar15[1];
        *(int *)(plVar15 + 1) = iVar5 + 1;
        if (*(int *)((longlong)plVar15 + 0xc) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar5);
        }
        puVar18 = (undefined4 *)(*plVar15 + (longlong)iVar5 * 8);
        *puVar18 = (int)local_res8;
        puVar18[1] = local_res8._4_4_;
        cVar4 = FUN_14044aea0(&local_res8,0);
        if ((cVar4 != '\0') ||
           (*(int *)(*(longlong *)(param_1 + 0x118) + 8 +
                    (ulonglong)*(byte *)(param_1 + 0x109) * 0x10) == *(int *)(param_1 + 0x110))) {
          *(char *)(param_1 + 0x109) = *(char *)(param_1 + 0x109) + '\x01';
        }
        FUN_14301c320(param_1);
        uVar19 = local_128;
        uVar23 = local_118;
        uVar30 = uVar28;
      }
      goto LAB_14300b8e0;
    }
    uVar19 = uVar17;
    uVar23 = uVar17;
    uVar30 = uVar17;
    if ((cVar4 != '\x04') ||
       (local_58 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 0x2c8), uVar19 = uVar11,
       uVar23 = uVar22, uVar30 = uVar28, local_58 == (longlong *)0x0)) goto LAB_14300b8e0;
    local_res18 = (wchar_t *)0x8;
    local_138 = (undefined2 *)0x0;
    local_res8 = (wchar_t *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_130 = 0;
    if (*(int *)(param_1 + 0x150) != 0) {
      if (**(longlong **)(param_1 + 0x148) == 0) {
        local_188 = (wchar_t *)0x0;
        local_180 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
        FGenericPlatformString::Memcpy(local_188,&DAT_143f3edc8,10);
      }
      else {
        UObjectBaseUtility::GetPathName(**(longlong **)(param_1 + 0x148),&local_188,0);
      }
      pwVar14 = L"";
      if ((int)local_180 != 0) {
        pwVar14 = local_188;
      }
      uVar19 = uVar17;
      if (pwVar14 != (wchar_t *)0x0) {
        iVar5 = iVar20;
        if (*pwVar14 != L'\0') {
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (pwVar14[lVar12] != L'\0');
          iVar5 = (int)lVar12 + 1;
        }
        if (iVar5 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,iVar5);
          uVar19 = local_130 & 0xffffffff;
        }
        uVar26 = (int)uVar19 + iVar5;
        local_res8 = (wchar_t *)CONCAT44(local_res8._4_4_,uVar26);
        local_130 = CONCAT44(local_130._4_4_,uVar26);
        if (local_130._4_4_ < (int)uVar26) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar19);
          local_res8 = (wchar_t *)CONCAT44(local_res8._4_4_,(uint)local_130);
          uVar26 = (uint)local_130;
        }
        uVar19 = (ulonglong)uVar26;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop(local_138,pwVar14,(longlong)iVar5 * 2);
        }
      }
      iVar24 = 1;
      iVar5 = (int)uVar19;
      if (local_188 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (1 < *(int *)(param_1 + 0x150)) {
        local_res8 = (wchar_t *)0x8;
        do {
          lVar12 = (longlong)local_res8;
          iVar5 = (int)uVar19;
          uVar26 = (2 - (uint)(iVar5 != 0)) + iVar5;
          local_130 = CONCAT44(local_130._4_4_,uVar26);
          if (local_130._4_4_ < (int)uVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar19);
            uVar26 = (uint)local_130;
          }
          uVar19 = (ulonglong)uVar26;
          local_138[(longlong)iVar5 - (ulonglong)(iVar5 != 0)] = 0x2c;
          (local_138 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)))[1] = 0;
          lVar13 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x148));
          if (lVar13 == 0) {
            local_188 = (wchar_t *)0x0;
            local_180 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
            FGenericPlatformString::Memcpy(local_188);
          }
          else {
            UObjectBaseUtility::GetPathName(lVar13,&local_188,0);
          }
          lVar13 = -1;
          pwVar14 = L"";
          if ((int)local_180 != 0) {
            pwVar14 = local_188;
          }
          do {
            lVar13 = lVar13 + 1;
          } while (pwVar14[lVar13] != L'\0');
          iVar5 = (int)lVar13;
          if (iVar5 != 0) {
            uVar27 = iVar5 + (uint)(uVar26 == 0) + uVar26;
            local_130 = CONCAT44(local_130._4_4_,uVar27);
            if (local_130._4_4_ < (int)uVar27) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar19);
              uVar27 = (uint)local_130;
            }
            uVar19 = (ulonglong)uVar27;
            puVar7 = local_138 + ((longlong)(int)uVar26 - (ulonglong)(uVar26 != 0));
            _guard_xfg_dispatch_icall_nop(puVar7,pwVar14,(longlong)iVar5 * 2);
            puVar7[iVar5] = 0;
            lVar12 = (longlong)local_res8;
          }
          iVar5 = (int)uVar19;
          if (local_188 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_res8 = (wchar_t *)(lVar12 + 8);
          iVar24 = iVar24 + 1;
        } while (iVar24 < *(int *)(param_1 + 0x150));
        local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
        local_res8 = (wchar_t *)CONCAT44(local_res8._4_4_,iVar5);
      }
    }
    lVar12 = 8;
    local_158 = (undefined2 *)0x0;
    local_150 = 0;
    if (*(int *)(param_1 + 0x160) == 0) {
LAB_14300a900:
      puVar7 = &DAT_143f3eda8;
    }
    else {
      if (**(longlong **)(param_1 + 0x158) == 0) {
        local_188 = (wchar_t *)0x0;
        local_180 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
        FGenericPlatformString::Memcpy(local_188,&DAT_143f3edc8,10);
      }
      else {
        UObjectBaseUtility::GetPathName(**(longlong **)(param_1 + 0x158),&local_188,0);
      }
      pwVar14 = L"";
      if ((int)local_180 != 0) {
        pwVar14 = local_188;
      }
      if (pwVar14 != (wchar_t *)0x0) {
        iVar24 = iVar20;
        if (*pwVar14 != L'\0') {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (pwVar14[lVar13] != L'\0');
          iVar24 = (int)lVar13 + 1;
        }
        if (iVar24 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158,iVar24);
          uVar17 = local_150 & 0xffffffff;
        }
        uVar26 = (int)uVar17 + iVar24;
        local_150 = CONCAT44(local_150._4_4_,uVar26);
        if (local_150._4_4_ < (int)uVar26) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,uVar17);
          uVar26 = (uint)local_150;
        }
        uVar17 = (ulonglong)uVar26;
        if (iVar24 != 0) {
          _guard_xfg_dispatch_icall_nop(local_158,pwVar14,(longlong)iVar24 * 2);
        }
      }
      iVar24 = (int)uVar17;
      if (local_188 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      iVar21 = 1;
      local_res10 = (wchar_t *)CONCAT44(local_res10._4_4_,1);
      puVar7 = local_158;
      if (1 < *(int *)(param_1 + 0x160)) {
        do {
          iVar5 = (int)uVar17;
          uVar26 = (2 - (uint)(iVar5 != 0)) + iVar5;
          local_150 = CONCAT44(local_150._4_4_,uVar26);
          if (local_150._4_4_ < (int)uVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,uVar17);
            puVar7 = local_158;
            uVar26 = (uint)local_150;
          }
          uVar17 = (ulonglong)uVar26;
          lVar13 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
          puVar7[lVar13] = 0x2c;
          puVar7[lVar13 + 1] = 0;
          lVar12 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x158));
          if (lVar12 == 0) {
            local_188 = (wchar_t *)0x0;
            local_180 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
            FGenericPlatformString::Memcpy(local_188);
          }
          else {
            UObjectBaseUtility::GetPathName(lVar12,&local_188,0);
          }
          lVar12 = -1;
          pwVar14 = L"";
          if ((int)local_180 != 0) {
            pwVar14 = local_188;
          }
          do {
            lVar12 = lVar12 + 1;
          } while (pwVar14[lVar12] != L'\0');
          iVar5 = (int)lVar12;
          if (iVar5 != 0) {
            uVar27 = uVar26 + (uVar26 == 0) + iVar5;
            local_150 = CONCAT44(local_150._4_4_,uVar27);
            if (local_150._4_4_ < (int)uVar27) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,uVar17);
              puVar7 = local_158;
              uVar27 = (uint)local_150;
            }
            uVar17 = (ulonglong)uVar27;
            _guard_xfg_dispatch_icall_nop
                      (puVar7 + ((longlong)(int)uVar26 - (ulonglong)(uVar26 != 0)),pwVar14,
                       (longlong)iVar5 * 2);
            (puVar7 + ((longlong)(int)uVar26 - (ulonglong)(uVar26 != 0)))[iVar5] = 0;
            iVar21 = (int)local_res10;
          }
          iVar24 = (int)uVar17;
          if (local_188 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          iVar21 = iVar21 + 1;
          lVar12 = (longlong)local_res18 + 8;
          local_res10 = (wchar_t *)CONCAT44(local_res10._4_4_,iVar21);
          local_res18 = (wchar_t *)lVar12;
        } while (iVar21 < *(int *)(param_1 + 0x160));
        iVar5 = (int)local_res8;
      }
      puVar7 = local_158;
      if (iVar24 == 0) goto LAB_14300a900;
    }
    FString::PrintfImpl(&local_188,L"GenericParts=%ls ",puVar7);
    puVar7 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      puVar7 = local_138;
    }
    FString::PrintfImpl(&local_c8,L"Parts=%ls ",puVar7);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      local_108 = (undefined2 *)0x0;
      local_100 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      FGenericPlatformString::Memcpy(local_108,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x140),&local_108,0);
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_100 != 0) {
      puVar7 = local_108;
    }
    FString::PrintfImpl(&local_d8,L"ManufacturerData=%ls ",puVar7);
    if (*(longlong *)(param_1 + 0x138) == 0) {
      local_88 = (undefined2 *)0x0;
      local_80 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x138),&local_88,0);
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar7 = local_88;
    }
    FString::PrintfImpl(&local_e8,L"InventoryBalanceData=%ls ",puVar7);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      local_98 = (undefined2 *)0x0;
      local_90 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x130),&local_98,0);
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_90 != 0) {
      puVar7 = local_98;
    }
    FString::PrintfImpl(&local_f8,L"InventoryData=%ls ",puVar7);
    FString::PrintfImpl(&local_78,L"GameStage=%d ",*(undefined4 *)(param_1 + 0x128));
    iVar5 = local_70 + -1;
    if (local_70 == 0) {
      iVar5 = iVar20;
    }
    local_170 = iVar5 + 0xb;
    local_res20 = (wchar_t *)0x0;
    local_178 = (wchar_t *)0x0;
    local_16c = 0;
    if (0 < local_170) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    }
    iVar21 = local_16c;
    iVar24 = local_170;
    pwVar14 = local_178;
    builtin_wcsncpy(local_178,L"BuildGear ",10);
    local_res20 = local_178;
    _guard_xfg_dispatch_icall_nop(local_178 + 10,local_78,(longlong)iVar5 * 2);
    pwVar14[(longlong)iVar5 + 10] = L'\0';
    iVar5 = (int)local_f0;
    if (iVar24 < 2) {
      iVar21 = local_f0._4_4_;
      local_res8 = local_f8;
      local_f8 = (wchar_t *)0x0;
      local_f0 = 0;
    }
    else {
      iVar9 = iVar20;
      if ((int)local_f0 != 0) {
        iVar9 = (int)local_f0 + -1;
      }
      if ((iVar24 != 0) || (iVar5 = 1, iVar9 == 0)) {
        iVar5 = iVar20;
      }
      local_res20 = (wchar_t *)0x0;
      local_168 = pwVar14;
      local_160 = iVar24;
      local_15c = iVar21;
      if (iVar21 < iVar24 + iVar5 + iVar9) {
        local_res8 = pwVar14;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_168);
      }
      pwVar14 = local_f8;
      iVar24 = local_160;
      iVar21 = local_15c;
      local_res8 = local_168;
      iVar5 = local_160;
      if (iVar9 != 0) {
        lVar12 = (longlong)local_160;
        local_160 = local_160 + (uint)(local_160 == 0) + iVar9;
        if (local_15c < local_160) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar24);
        }
        iVar21 = local_15c;
        iVar5 = local_160;
        pwVar29 = local_168 + (lVar12 - (ulonglong)(iVar24 != 0));
        local_res8 = local_168;
        _guard_xfg_dispatch_icall_nop(pwVar29,pwVar14,(longlong)iVar9 * 2);
        pwVar29[iVar9] = L'\0';
      }
    }
    pwVar14 = local_e8;
    local_res18 = local_res8;
    iVar24 = (int)local_e0;
    if (iVar5 < 2) {
      iVar21 = local_e0._4_4_;
      local_res18 = local_e8;
      local_e8 = (wchar_t *)0x0;
      local_e0 = 0;
    }
    else {
      iVar9 = iVar20;
      if ((int)local_e0 != 0) {
        iVar9 = (int)local_e0 + -1;
      }
      if ((iVar5 != 0) || (iVar24 = 1, iVar9 == 0)) {
        iVar24 = iVar10;
      }
      local_res8 = (wchar_t *)0x0;
      local_168 = local_res18;
      local_160 = iVar5;
      local_15c = iVar21;
      if (iVar21 < iVar24 + iVar9 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_168);
      }
      iVar5 = local_160;
      local_res10 = local_e8;
      pwVar14 = local_168;
      iVar21 = local_15c;
      local_res18 = local_168;
      iVar24 = local_160;
      if (iVar9 != 0) {
        lVar12 = (longlong)local_160;
        local_160 = iVar9 + (uint)(local_160 == 0) + local_160;
        if (local_15c < local_160) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar5);
        }
        iVar21 = local_15c;
        iVar24 = local_160;
        pwVar14 = local_168;
        pwVar29 = local_168 + (lVar12 - (ulonglong)(iVar5 != 0));
        local_res18 = local_168;
        _guard_xfg_dispatch_icall_nop(pwVar29,local_res10,(longlong)iVar9 * 2);
        pwVar29[iVar9] = L'\0';
      }
    }
    pwVar29 = local_d8;
    iVar5 = (int)local_d0;
    if (iVar24 < 2) {
      iVar21 = local_d0._4_4_;
      local_res10 = local_d8;
      local_d8 = (wchar_t *)0x0;
      local_d0 = 0;
    }
    else {
      iVar9 = iVar10;
      if ((int)local_d0 != 0) {
        iVar9 = (int)local_d0 + -1;
      }
      if ((iVar24 != 0) || (iVar5 = 1, iVar9 == 0)) {
        iVar5 = iVar20;
      }
      local_res18 = (wchar_t *)0x0;
      local_178 = pwVar14;
      local_170 = iVar24;
      local_16c = iVar21;
      if (iVar21 < iVar9 + iVar24 + iVar5) {
        local_res10 = pwVar14;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178);
      }
      iVar24 = local_170;
      local_168 = local_d8;
      pwVar29 = local_178;
      iVar21 = local_16c;
      local_res10 = local_178;
      iVar5 = local_170;
      if (iVar9 != 0) {
        lVar12 = (longlong)local_170;
        local_170 = iVar9 + (uint)(local_170 == 0) + local_170;
        if (local_16c < local_170) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,iVar24);
        }
        iVar21 = local_16c;
        iVar5 = local_170;
        pwVar29 = local_178;
        pwVar14 = local_178 + (lVar12 - (ulonglong)(iVar24 != 0));
        local_res10 = local_178;
        _guard_xfg_dispatch_icall_nop(pwVar14,local_168,(longlong)iVar9 * 2);
        pwVar14[iVar9] = L'\0';
      }
    }
    pwVar14 = local_c8;
    iVar24 = (int)local_c0;
    if (iVar5 < 2) {
      local_c8 = (wchar_t *)0x0;
      local_15c = local_c0._4_4_;
      local_c0 = 0;
      iVar21 = local_15c;
    }
    else {
      if ((int)local_c0 != 0) {
        iVar10 = (int)local_c0 + -1;
      }
      if ((iVar5 != 0) || (iVar24 = 1, iVar10 == 0)) {
        iVar24 = iVar20;
      }
      local_res10 = (wchar_t *)0x0;
      local_178 = pwVar29;
      local_170 = iVar5;
      local_16c = iVar21;
      if (iVar21 < iVar10 + iVar24 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178);
      }
      iVar5 = local_170;
      local_168 = local_c8;
      pwVar14 = local_178;
      iVar24 = local_170;
      iVar21 = local_16c;
      if (iVar10 != 0) {
        lVar12 = (longlong)local_170;
        local_170 = iVar10 + (uint)(local_170 == 0) + local_170;
        if (local_16c < local_170) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,iVar5);
        }
        iVar21 = local_16c;
        iVar24 = local_170;
        pwVar14 = local_178;
        pwVar29 = local_178 + (lVar12 - (ulonglong)(iVar5 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar29,local_168,(longlong)iVar10 * 2);
        pwVar29[iVar10] = L'\0';
      }
    }
    local_15c = iVar21;
    local_168 = pwVar14;
    local_160 = iVar24;
    if (iVar24 < 2) {
      local_b8 = local_188;
      local_b0 = (int)local_180;
      local_ac = local_180._4_4_;
      local_180 = 0;
      local_188 = (wchar_t *)0x0;
    }
    else {
      iVar5 = iVar20;
      if ((int)local_180 != 0) {
        iVar5 = (int)local_180 + -1;
      }
      if ((iVar24 != 0) || (iVar24 = 1, iVar5 == 0)) {
        iVar24 = iVar20;
      }
      TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                (&local_178,&local_168,iVar5 + iVar24);
      iVar24 = local_170;
      pwVar14 = local_188;
      local_b8 = local_178;
      if (iVar5 != 0) {
        lVar12 = (longlong)local_170;
        local_170 = (uint)(local_170 == 0) + iVar5 + local_170;
        if (local_16c < local_170) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,iVar24);
        }
        pwVar3 = local_178;
        pwVar29 = local_178 + (lVar12 - (ulonglong)(iVar24 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar29,pwVar14,(longlong)iVar5 * 2);
        pwVar29[iVar5] = L'\0';
        local_b8 = pwVar3;
      }
      local_b0 = local_170;
      local_ac = local_16c;
    }
    if (local_168 != (wchar_t *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_res10 != (wchar_t *)0x0) {
      FMemory::Free(local_res10);
    }
    if (local_res18 != (wchar_t *)0x0) {
      FMemory::Free(local_res18);
    }
    if (local_res8 != (wchar_t *)0x0) {
      FMemory::Free(local_res8);
    }
    if (local_res20 != (wchar_t *)0x0) {
      FMemory::Free(local_res20);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_f8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_e8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_d8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_108 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_188 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (DAT_1468b6148 != 0) {
      pwVar14 = L"";
      if (local_b0 != 0) {
        pwVar14 = local_b8;
      }
      local_res10 = *(wchar_t **)(*(longlong *)(param_1 + 0x140) + 0x18);
      FName::ToString(&local_res10,&local_78);
      puVar6 = (undefined8 *)FUN_142fe23d0(&local_res8,&local_108,&local_78);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar6;
      }
      FConfigCacheIni::SetString(DAT_1468b6148,L"LastGearBuild",puVar7,pwVar14,&DAT_1468e2420);
      if (local_108 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free();
      }
    }
    (**(code **)(*local_58 + 0xd28))(local_58,&local_78,&local_b8,1);
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_b8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_158 != (undefined2 *)0x0) {
      FMemory::Free(local_158);
    }
    uVar19 = local_128;
    uVar23 = local_118;
    puVar6 = local_148;
    uVar30 = local_a8;
    if (local_138 != (undefined2 *)0x0) {
      FMemory::Free(local_138);
      uVar19 = local_128;
      uVar23 = local_118;
      puVar6 = local_148;
      uVar30 = local_a8;
    }
    goto LAB_14300b8e0;
  }
  if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
     (iVar5 = FUN_142ffe4c0(), uVar30 = local_a8, puVar6 = local_148, iVar5 < 1))
  goto LAB_14300b8e0;
  uVar8 = FWeakObjectPtr::Get(local_a8);
  *(undefined8 *)(param_1 + 0x138) = uVar8;
  FUN_142d85250(uVar8);
  lVar12 = *(longlong *)(param_1 + 0x138);
  if (*(longlong *)(lVar12 + 0x38) == 0) {
    if (*(longlong *)(lVar12 + 0x30) != 0) {
      iVar5 = FUN_140b824e0();
      goto LAB_14300b3ef;
    }
LAB_14300b3f3:
    if (*(int *)(lVar12 + 0xe0) == 0) {
      *(undefined1 *)(param_1 + 0x108) = 4;
      uVar19 = local_128;
      uVar23 = uVar17;
      puVar6 = local_148;
      goto LAB_14300b8e0;
    }
  }
  else {
    lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + 0x38);
    if (lVar13 == 0) goto LAB_14300b3f3;
    iVar5 = *(int *)(lVar13 + 0x48) + -1;
LAB_14300b3ef:
    if (iVar5 == 0) goto LAB_14300b3f3;
  }
  *(undefined2 *)(param_1 + 0x108) = 3;
  if (*(longlong *)(lVar12 + 0x38) == 0) {
    if (*(longlong *)(lVar12 + 0x30) != 0) {
      iVar10 = FUN_140b824e0();
    }
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + 0x38);
    if (lVar12 != 0) {
      iVar10 = *(int *)(lVar12 + 0x48) + -1;
    }
  }
  plVar15 = (longlong *)(param_1 + 0x118);
  plVar16 = (longlong *)*plVar15;
  for (iVar5 = *(int *)(param_1 + 0x120); iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != iVar10 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar15);
    uVar17 = (ulonglong)*(uint *)(param_1 + 0x120);
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x38);
  if (lVar12 == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x30) != 0) {
      iVar24 = FUN_140b824e0();
    }
  }
  else {
    lVar12 = *(longlong *)(lVar12 + 0x38);
    if (lVar12 != 0) {
      iVar24 = *(int *)(lVar12 + 0x48) + -1;
    }
  }
  iVar5 = iVar24 + 1 + (int)uVar17;
  *(int *)(param_1 + 0x120) = iVar5;
  if (*(int *)(param_1 + 0x124) < iVar5) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)uVar17 * 0x10 + *plVar15),0,(longlong)(iVar24 + 1) << 4);
  FUN_14301c320(param_1);
  uVar19 = local_128;
  uVar23 = local_118;
  puVar6 = local_148;
LAB_14300b8e0:
  FUN_14301cfb0(param_1);
  if (puVar6 != (undefined8 *)0x0) {
    FMemory::Free(puVar6);
  }
  if (uVar30 != 0) {
    FMemory::Free(uVar30);
  }
  if (uVar23 != 0) {
    FMemory::Free(uVar23);
  }
  if (uVar19 != 0) {
    FMemory::Free(uVar19);
  }
  return;
code_r0x00014300b7c3:
  lVar12 = lVar12 + 0x30;
  if (lVar12 == lVar13) goto LAB_14300b843;
  goto LAB_14300b7b0;
LAB_14300b5f0:
  cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar13,&local_res10);
  if (cVar4 == '\0') goto code_r0x00014300b603;
  puVar18 = *(undefined4 **)(lVar13 + 8);
  puVar25 = puVar18 + (longlong)*(int *)(lVar13 + 0x10) * 4;
  for (; puVar18 != puVar25; puVar18 = puVar18 + 4) {
    if ((((int)puVar18[2] <= iVar5) && (iVar5 <= (int)puVar18[3])) &&
       ((cVar4 = FWeakObjectPtr::IsValid(puVar18), cVar4 != '\0' &&
        (iVar24 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                            (plVar15,puVar18), iVar24 == -1)))) {
      iVar24 = *(int *)(param_1 + 0x210);
      *(int *)(param_1 + 0x210) = iVar24 + 1;
      if (*(int *)(param_1 + 0x214) < iVar24 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar24);
      }
      puVar1 = (undefined4 *)(*plVar15 + (longlong)iVar24 * 8);
      *puVar1 = *puVar18;
      puVar1[1] = puVar18[1];
    }
  }
  goto LAB_14300b67f;
code_r0x00014300b603:
  lVar13 = lVar13 + 0x30;
  if (lVar13 == lVar12) goto LAB_14300b67f;
  goto LAB_14300b5f0;
}



// FUNCTION 14300b960 FUN_14300b960 body=500 status=ok
// SIG undefined FUN_14300b960(void)

void FUN_14300b960(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong local_res8;
  
  cVar4 = *(char *)(param_1 + 0x108);
  local_res8 = param_1;
  do {
    if (cVar4 == '\x01') {
      *(undefined1 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    else if (cVar4 == '\x02') {
      *(undefined1 *)(param_1 + 0x108) = 1;
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    else if (cVar4 == '\x03') {
      bVar1 = *(byte *)(param_1 + 0x109);
      if (*(int *)(*(longlong *)(param_1 + 0x118) + 8 + (ulonglong)bVar1 * 0x10) == 0) {
        if (bVar1 == 0) {
          *(undefined1 *)(param_1 + 0x108) = 2;
          *(undefined8 *)(param_1 + 0x138) = 0;
          *(undefined4 *)(param_1 + 0x150) = 0;
          if (*(int *)(param_1 + 0x154) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x148,0);
          }
          *(undefined4 *)(param_1 + 0x160) = 0;
          if (*(int *)(param_1 + 0x164) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x158,0);
          }
        }
        else {
          *(byte *)(param_1 + 0x109) = bVar1 - 1;
          FUN_142fe1e50(&local_res8);
        }
        goto LAB_14300bb1c;
      }
LAB_14300ba82:
      FUN_142fe1e50(&local_res8);
    }
    else {
      if (cVar4 != '\x04') goto LAB_14300bb1c;
      lVar2 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          iVar6 = FUN_140b824e0();
          goto LAB_14300b9d5;
        }
LAB_14300b9d9:
        if (*(int *)(lVar2 + 0xe0) == 0) {
          *(undefined1 *)(param_1 + 0x108) = 2;
          *(undefined8 *)(param_1 + 0x138) = 0;
          *(undefined4 *)(param_1 + 0x150) = 0;
          if (*(int *)(param_1 + 0x154) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x148,0);
          }
          *(undefined4 *)(param_1 + 0x160) = 0;
          if (*(int *)(param_1 + 0x164) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x158,0);
          }
          goto LAB_14300bb1c;
        }
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x38);
        if (lVar3 == 0) goto LAB_14300b9d9;
        iVar6 = *(int *)(lVar3 + 0x48) + -1;
LAB_14300b9d5:
        if (iVar6 == 0) goto LAB_14300b9d9;
      }
      *(undefined1 *)(param_1 + 0x108) = 3;
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        if (*(longlong *)(lVar2 + 0x30) == 0) goto LAB_14300ba7a;
        uVar5 = FUN_140b824e0();
        *(undefined1 *)(param_1 + 0x109) = uVar5;
        FUN_142fe1e50(&local_res8);
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x38);
        if (lVar2 == 0) {
LAB_14300ba7a:
          *(undefined1 *)(param_1 + 0x109) = 0;
          goto LAB_14300ba82;
        }
        *(char *)(param_1 + 0x109) = (char)*(undefined4 *)(lVar2 + 0x48) + -1;
        FUN_142fe1e50(&local_res8);
      }
    }
LAB_14300bb1c:
    FUN_14301cfb0(param_1);
    if ((*(char *)(param_1 + 0x108) != '\x03') ||
       ((*(int *)(param_1 + 0x230) != 0 && (*(int *)(param_1 + 0x10c) != 0)))) {
      return;
    }
    cVar4 = '\x03';
  } while( true );
}



// FUNCTION 14300bb60 FUN_14300bb60 body=148 status=ok
// SIG undefined FUN_14300bb60(void)

undefined8 FUN_14300bb60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((char)param_1[0x25] == '\x03') && ((*(byte *)(param_1 + 0xb5) & 0x20) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x740))();
    if (cVar1 != '\x01') {
      uVar2 = FUN_142dccd00(param_2);
      cVar1 = (**(code **)(*param_1 + 0x748))(param_1,uVar2);
      if (cVar1 != '\0') {
        cVar1 = FUN_142fe9a90(param_1,uVar2,0,0,0);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x780))(param_1,uVar2,0);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14300bc00 FUN_14300bc00 body=115 status=ok
// SIG undefined FUN_14300bc00(void)

void FUN_14300bc00(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  uVar1 = FUN_142e80f20();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x290))(plVar2,0,0);
  }
  (**(code **)(*param_1 + 0x7b0))(param_1);
  FUN_143025810(param_1,param_1[0x8f]);
  local_res8[0] = param_1[0x8f];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x9f,local_res8);
  return;
}



// FUNCTION 14300bc80 FUN_14300bc80 body=79 status=ok
// SIG undefined FUN_14300bc80(void)

void FUN_14300bc80(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if ((param_3 != 0) && (cVar1 = FUN_14218ff80(*(undefined8 *)(*param_1 + 0x30)), cVar1 != '\0')) {
    FUN_1430011b0(param_1,param_2,param_1[6],param_3);
  }
  return;
}



// FUNCTION 14300bcd0 thunk_FUN_142ff0a90 body=5 status=ok
// SIG undefined thunk_FUN_142ff0a90(void)

void thunk_FUN_142ff0a90(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  plVar3 = (longlong *)param_1[0x91];
  if ((plVar3 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar3 + 0x400))(plVar3,0), cVar1 != '\0')) {
    FUN_142ff0bb0(param_1,param_1[0x91]);
    (**(code **)(*(longlong *)param_1[0x91] + 0x5b8))((longlong *)param_1[0x91],0);
    plVar3 = *(longlong **)(param_1[0x91] + 0xbf0);
    uVar2 = (ulonglong)*(int *)(param_1[0x91] + 0xbf8);
    uVar5 = uVar2 & 0x1fffffffffffffff;
    if (plVar3 + uVar2 < plVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        if (*plVar3 != 0) {
          FUN_1426a9140(*plVar3,0,0);
        }
        plVar3 = plVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  plVar3 = (longlong *)param_1[0x90];
  if ((plVar3 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar3 + 0x400))(plVar3,0), cVar1 != '\0')) {
    FUN_142ff0bb0(param_1,param_1[0x90]);
    (**(code **)(*(longlong *)param_1[0x90] + 0x5b8))((longlong *)param_1[0x90],0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142ff0ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x828))(param_1);
  return;
}



// FUNCTION 14300bce0 FUN_14300bce0 body=91 status=ok
// SIG undefined FUN_14300bce0(void)

void FUN_14300bce0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x208) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x158) != 0)) {
      FUN_140adfcd0(param_1);
    }
  }
  return;
}



// FUNCTION 14300bd40 FUN_14300bd40 body=91 status=ok
// SIG undefined FUN_14300bd40(void)

void FUN_14300bd40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x208) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x150) != 0)) {
      FUN_140adfcd0(param_1);
    }
  }
  return;
}



// FUNCTION 14300bda0 FUN_14300bda0 body=550 status=ok
// SIG undefined FUN_14300bda0(void)

void FUN_14300bda0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined1 local_187;
  undefined4 local_184;
  byte local_180;
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined4 local_a4;
  byte local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (param_2 != 0) {
    lVar4 = FUN_142e20fc0();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar4) {
        if (*(longlong *)(param_1 + 0x460) == 0) {
          uVar5 = FUN_140f57ec0(param_1);
          *(undefined8 *)(param_1 + 0x460) = uVar5;
          FUN_14234b150(uVar5);
        }
        FUN_142c62180(local_d8);
        local_1b8 = &PTR_FUN_143ff6170;
        local_1b0 = local_d0;
        local_1a8 = local_c8;
        local_1a0 = local_c0;
        local_a7 = 2;
        local_198 = (void *)0x0;
        local_190 = local_b0;
        if (local_b0 == 0) {
          local_18c = 0;
        }
        else {
          TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_198,local_b0,0);
          _guard_xfg_dispatch_icall_nop(local_198,local_b8,(longlong)local_b0 * 0x38);
        }
        local_188 = local_a8;
        local_184 = local_a4;
        local_180 = local_180 ^ (local_180 ^ local_a0) & 7;
        local_187 = local_a7;
        FUN_1405e0d90(local_178,local_98);
        FUN_1405e0d90(local_160,local_80);
        FUN_1405e0d90(local_148,local_68);
        FUN_1405e0d90(local_130,local_50);
        local_118 = local_38;
        local_114 = local_34;
        local_110 = local_30;
        local_108 = local_28;
        local_100 = local_20;
        local_10c = local_2c;
        local_f8 = local_18;
        if (local_18 != 0) {
          LOCK();
          *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
          UNLOCK();
        }
        FUN_142c7bb40(*(undefined8 *)(param_1 + 0x460),local_f0,param_2,&local_1b8,0);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)local_e8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        FUN_142c63c50(local_d8);
        return;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14300bfd0 FUN_14300bfd0 body=102 status=ok
// SIG undefined FUN_14300bfd0(void)

void FUN_14300bfd0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    if ((*(byte *)(param_1 + 99) & 1) == 0) goto LAB_14300c017;
    uVar3 = 1;
  }
  else {
    if ((int)param_1[0x62] == 0) goto LAB_14300c017;
    cVar1 = FAssetBundleData::ExportTextItem(param_1 + 0x5f);
    if (cVar1 == '\0') goto LAB_14300c017;
    uVar3 = 0;
  }
  (**(code **)(*param_1 + 0x508))(param_1,uVar3);
LAB_14300c017:
  FUN_142c96100(param_1 + 0x66);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x66,0);
  return;
}



// FUNCTION 14300c0c0 FUN_14300c0c0 body=231 status=ok
// SIG undefined FUN_14300c0c0(void)

void FUN_14300c0c0(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_142238430();
  FUN_1430176c0(param_1);
  uVar1 = FUN_142e80f20();
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (param_1[0xa6] != 0) {
    *(undefined4 *)(param_1[0xa6] + 0x710) = *(undefined4 *)((longlong)param_1 + 0x524);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x648))((longlong *)param_1[0xa6],0xe);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x638))((longlong *)param_1[0xa6],0);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x838))((longlong *)param_1[0xa6],0);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x830))((longlong *)param_1[0xa6],2,1);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x500))((longlong *)param_1[0xa6],2);
    *(byte *)(param_1[0xa6] + 0x24c) = *(byte *)(param_1[0xa6] + 0x24c) | 8;
  }
  if ((param_1[0x91] == 0) && (param_1[0x90] == 0)) {
    return;
  }
  FUN_143017540(param_1);
  return;
}



// FUNCTION 14300c1b0 FUN_14300c1b0 body=509 status=ok
// SIG undefined FUN_14300c1b0(void)

void FUN_14300c1b0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  UObject::PostLoad();
  lVar4 = param_1;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1417510e0();
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  plVar11 = (longlong *)(lVar4 + 0x48);
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x40);
  if (puVar5 != puVar5 + (longlong)iVar2 * 10) {
    puVar12 = puVar5 + 1;
    do {
      local_50 = puVar12[-1];
      local_4c = *puVar12;
      local_48 = puVar12[1];
      local_68 = *(undefined8 *)(puVar12 + 3);
      local_38 = 0;
      local_30 = 0;
      local_40 = 0;
      FString::FString(local_60,puVar12 + 5);
      FSoftObjectPath::operator=(&local_40,&local_68);
      lVar8 = FWeakObjectPtr::Get(&local_50);
      if (lVar8 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_48) && (local_40 != 0)) {
          lVar8 = FUN_141796df0(&local_40);
          FWeakObjectPtr::operator=(&local_50,lVar8);
          if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_48 = DAT_1464b56f4;
          }
          lVar8 = FWeakObjectPtr::Get(&local_50);
          if (lVar8 != 0) goto LAB_14300c2df;
        }
      }
      else {
LAB_14300c2df:
        lVar9 = FUN_14301f840();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          plVar6 = (longlong *)*plVar11;
          iVar3 = *(int *)(lVar4 + 0x50);
          for (plVar10 = plVar6; plVar10 != plVar6 + iVar3; plVar10 = plVar10 + 1) {
            if (*plVar10 == lVar8) {
              if ((int)((longlong)plVar10 - (longlong)plVar6 >> 3) != -1) goto LAB_14300c36a;
              break;
            }
          }
          *(int *)(lVar4 + 0x50) = iVar3 + 1;
          if (*(int *)(lVar4 + 0x54) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
          }
          *(longlong *)(*plVar11 + (longlong)iVar3 * 8) = lVar8;
        }
      }
LAB_14300c36a:
      if (local_38 != 0) {
        FMemory::Free();
      }
      puVar1 = puVar12 + 9;
      puVar12 = puVar12 + 10;
    } while (puVar1 != puVar5 + (longlong)iVar2 * 10);
  }
  return;
}



// FUNCTION 14300c3b0 FUN_14300c3b0 body=96 status=ok
// SIG undefined FUN_14300c3b0(void)

void FUN_14300c3b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x110) == '\0') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  FUN_142d88980();
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1417510e0();
    return;
  }
  return;
}



// FUNCTION 14300c410 FUN_14300c410 body=314 status=ok
// SIG undefined FUN_14300c410(void)

void FUN_14300c410(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 ***local_res18;
  undefined8 ***local_res20;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1417510e0();
    FWeakObjectPtr::operator=(&local_res10,param_1);
    FWeakObjectPtr::operator=(&local_res18,*(undefined8 *)(param_1 + 0x38));
    plVar5 = (longlong *)FUN_142ff63e0();
    local_res20 = local_res18;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,&local_res20);
    if ((local_res8[0] == -1) || (lVar6 = (longlong)local_res8[0] * 0x20 + *plVar5, lVar6 == 0)) {
      local_res20 = &local_res18;
      FUN_142fd79b0(plVar5,local_res8,&local_res20,0);
      lVar6 = (longlong)local_res8[0] * 0x20 + *plVar5;
    }
    lVar3 = *(longlong *)(lVar6 + 8);
    iVar2 = *(int *)(lVar6 + 0x10);
    for (lVar7 = lVar3; lVar7 != lVar3 + (longlong)iVar2 * 8; lVar7 = lVar7 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res10);
      if (cVar4 != '\0') {
        if ((int)(lVar7 - lVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x10) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x14) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar6 + 8),iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 14300c550 FUN_14300c550 body=198 status=ok
// SIG undefined FUN_14300c550(void)

void FUN_14300c550(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong local_res8;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1417510e0();
    iVar7 = 0;
    lVar1 = *(longlong *)(param_1 + 0x30);
    plVar5 = (longlong *)(lVar1 + 0xa8);
    iVar3 = *(int *)(lVar1 + 0xb0);
    local_res8 = param_1;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        lVar2 = *plVar5;
        if (*(longlong *)(lVar6 + lVar2) == 0) {
          iVar4 = (iVar3 - iVar7) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar7 * 8),
                       (void *)(lVar2 + (longlong)(iVar3 - iVar4) * 8),(longlong)iVar4 << 3);
            iVar3 = *(int *)(lVar1 + 0xb0);
          }
          *(int *)(lVar1 + 0xb0) = iVar3 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar5);
          iVar3 = *(int *)(lVar1 + 0xb0);
        }
        else {
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 8;
        }
      } while (iVar7 < iVar3);
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar5,&local_res8);
  }
  return;
}



// FUNCTION 14300c620 FUN_14300c620 body=47 status=ok
// SIG undefined FUN_14300c620(void)

void FUN_14300c620(undefined8 param_1)

{
  UObject::PostLoad();
  if (DAT_146af4bf0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014300c645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146af4bf0 + 0x28))(DAT_146af4bf0,param_1);
    return;
  }
  return;
}



// FUNCTION 14300c650 FUN_14300c650 body=178 status=ok
// SIG undefined FUN_14300c650(void)

void FUN_14300c650(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = FUN_14302b270();
    lVar5 = *(longlong *)(param_1 + 0x30);
    for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_14300c6ce;
          plVar4 = (longlong *)FUN_14302b270();
          plVar7 = *(longlong **)(param_1 + 0x30);
          plVar6 = plVar7;
          if (plVar7 == (longlong *)0x0) goto LAB_14300c6ce;
          goto LAB_14300c6c0;
        }
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
  while (plVar1 = plVar6 + 6, plVar6 = (longlong *)*plVar1, (longlong *)*plVar1 != (longlong *)0x0)
  {
LAB_14300c6c0:
    if (plVar6 == plVar4) goto LAB_14300c6d0;
  }
LAB_14300c6ce:
  plVar7 = (longlong *)0x0;
LAB_14300c6d0:
  lVar5 = plVar7[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar5 = plVar7[0x1f];
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar5 + 0x38);
  return;
}



// FUNCTION 14300c710 FUN_14300c710 body=620 status=ok
// SIG undefined FUN_14300c710(void)

void FUN_14300c710(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((param_1[0x41] == 0) && (0 < (int)param_1[0x3c])) {
    _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
    lVar3 = 0;
    if (0 < (int)param_1[0x3c]) {
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_a0);
      local_a8[0] = 0;
      if (0 < (int)local_98) {
        local_a8[0] = 2;
      }
      FUN_143001780(local_88,local_a8);
      if (local_a0 != 0) {
        FMemory::Free();
      }
    }
    plVar1 = param_1 + 0x44;
    param_1[0x41] = local_80;
    param_1[0x42] = local_78;
    param_1[0x43] = local_70;
    lVar6 = local_68;
    if (plVar1 != &local_68) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_68;
      *(undefined4 *)(param_1 + 0x45) = local_60;
      *(undefined4 *)((longlong)param_1 + 0x22c) = local_5c;
      lVar6 = lVar3;
    }
    plVar1 = param_1 + 0x46;
    lVar5 = local_58;
    if (plVar1 != &local_58) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_58;
      *(undefined4 *)(param_1 + 0x47) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x23c) = local_4c;
      lVar5 = lVar3;
    }
    plVar1 = param_1 + 0x48;
    lVar4 = local_48;
    if (plVar1 != &local_48) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_48;
      *(undefined4 *)(param_1 + 0x49) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24c) = local_3c;
      lVar4 = lVar3;
    }
    plVar1 = param_1 + 0x4a;
    if (plVar1 == &local_38) {
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_38;
      *(undefined4 *)(param_1 + 0x4b) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x25c) = local_2c;
    }
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  if (param_1[0x41] != 0) {
    (**(code **)(*param_1 + 0x488))(param_1);
    (**(code **)(*param_1 + 0x490))(param_1);
    *(undefined1 *)(param_1 + 0x34) = 1;
    (**(code **)(*param_1 + 0x498))(param_1);
    (**(code **)(*param_1 + 0x4c0))(param_1);
    if (((*(byte *)(param_1 + 99) & 4) != 0) &&
       (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)) {
      iVar2 = FUN_14233f450(param_1);
      if (iVar2 == 3) {
        (**(code **)(*plVar1 + 0x310))(plVar1,1);
      }
      FUN_14223c460(plVar1,0);
    }
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x7fffffff;
  }
  return;
}



// FUNCTION 14300c980 FUN_14300c980 body=182 status=ok
// SIG undefined FUN_14300c980(void)

void FUN_14300c980(longlong param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  if ((*(longlong *)(param_2 + 0xc0) != 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 2;
    (**(code **)(**(longlong **)(param_2 + 0xc0) + 0x490))
              (*(longlong **)(param_2 + 0xc0),param_1,0,0);
    if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
      FUN_1430174d0(*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
    local_res10[0] = *(undefined4 *)(param_1 + 0xc);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_2 + 0xc0) + 0x2d8,local_res10);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(undefined1 *)(*(longlong *)(param_2 + 0xc0) + 0x368) = 1;
      TBaseMulticastDelegate<void>::Broadcast(*(longlong *)(param_2 + 0xc0) + 0x2c0);
    }
  }
  return;
}



// FUNCTION 14300ca40 FUN_14300ca40 body=175 status=ok
// SIG undefined FUN_14300ca40(void)

void FUN_14300ca40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res10 [6];
  
  if ((*(longlong *)(param_2 + 0xc0) != 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      FUN_14300c980();
    }
    plVar1 = *(longlong **)(param_2 + 0xc0);
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x18)) {
      (**(code **)(*plVar1 + 0x4a0))(plVar1,param_1);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
      local_res10[0] = *(undefined4 *)(param_1 + 0xc);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_2 + 0xc0) + 0x2f8,local_res10);
      TBaseMulticastDelegate<void>::Broadcast(*(longlong *)(param_2 + 0xc0) + 0x2c0);
      return;
    }
    local_res10[0] = *(undefined4 *)(param_1 + 0xc);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (plVar1 + 0x5f,local_res10);
  }
  return;
}



// FUNCTION 14300caf0 FUN_14300caf0 body=130 status=ok
// SIG undefined FUN_14300caf0(void)

void FUN_14300caf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 4;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe;
  plVar1 = *(longlong **)(param_2 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x498))(plVar1,param_1);
    local_res8[0] = *(undefined4 *)(param_1 + 0xc);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_2 + 0xc0) + 0x2e8,local_res8);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(undefined1 *)(*(longlong *)(param_2 + 0xc0) + 0x368) = 1;
      TBaseMulticastDelegate<void>::Broadcast(*(longlong *)(param_2 + 0xc0) + 0x2c0);
    }
  }
  return;
}



// FUNCTION 14300cb80 FUN_14300cb80 body=37 status=ok
// SIG undefined FUN_14300cb80(void)

void FUN_14300cb80(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  return;
}



// FUNCTION 14300cbb0 FUN_14300cbb0 body=429 status=ok
// SIG undefined FUN_14300cbb0(void)

undefined4 * FUN_14300cbb0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_res20 [2];
  
  iVar2 = FUN_142ffe220(param_1,param_3);
  iVar7 = -1;
  if ((iVar2 != -1) && (0 < *(int *)(param_1 + 0x230))) {
    iVar4 = iVar2 + -1;
    lVar5 = (longlong)iVar4 << 6;
    do {
      if (iVar4 < 0) break;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x10 + lVar5);
      if ((lVar6 != 0) && (lVar6 == param_3)) {
        iVar7 = iVar4;
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -0x40;
    } while (iVar7 == -1);
    iVar4 = *(int *)(param_1 + 0x230) + -1;
    if (iVar7 == -1) {
      lVar5 = (longlong)iVar4;
      lVar6 = lVar5 << 6;
      do {
        if (lVar5 <= iVar2) {
          if (iVar7 == -1) goto LAB_14300cd1e;
          break;
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x10 + lVar6);
        if ((lVar1 != 0) && (lVar1 == param_3)) {
          iVar7 = iVar4;
        }
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -1;
        lVar6 = lVar6 + -0x40;
      } while (iVar7 == -1);
    }
    iVar2 = iVar7;
    piVar3 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x248,local_res20,param_3);
    if (*piVar3 != -1) {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x248,local_res20,param_3);
      lVar6 = 0;
      lVar5 = lVar6;
      if (local_res20[0] != -1) {
        lVar5 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x248);
      }
      *(int *)(lVar5 + 8) = iVar2;
      lVar5 = *(longlong *)(param_1 + 0x228);
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x248,local_res20,param_3);
      if (local_res20[0] != -1) {
        lVar6 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x248);
      }
      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)iVar2 * 0x40 + 0xc + lVar5);
    }
LAB_14300cd1e:
    if (iVar2 != -1) {
      *param_2 = *(undefined4 *)((longlong)iVar2 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 14300cd60 Private_ClearSelection body=37 status=ok
// SIG undefined Private_ClearSelection(void)

void SListView<TSharedPtr<FString,0>_>::Private_ClearSelection(longlong param_1)

{
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x128,0);
  FInertialScrollManager::ClearScrollVelocity(param_1 + -0x40);
  return;
}



// FUNCTION 14300cda0 FUN_14300cda0 body=90 status=ok
// SIG undefined FUN_14300cda0(void)

undefined8 FUN_14300cda0(longlong param_1,undefined4 *param_2)

{
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *param_2;
  local_res14 = param_2[1];
  TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x128),local_res8,&local_res10);
  if (local_res8[0] != -1) {
    return CONCAT71((int7)(int3)((uint)local_res8[0] >> 8),
                    (longlong)local_res8[0] * 0x10 + *(longlong *)(param_1 + 0x128) != 0);
  }
  return 0xffffffffffffff00;
}



// FUNCTION 14300ce00 FUN_14300ce00 body=225 status=ok
// SIG undefined FUN_14300ce00(void)

void FUN_14300ce00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,*(undefined4 *)(param_1 + 0x3a0));
  if (cVar4 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    local_res10 = *puVar6;
    uStackX_14 = puVar6[1];
    cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_res10);
    local_res18[0] = CONCAT44(uStackX_14,local_res10);
    (**(code **)(*plVar8 + 0x48))(plVar8,local_res18,cVar4 == '\0');
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014300ced5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14300cef0 FUN_14300cef0 body=133 status=ok
// SIG undefined FUN_14300cef0(void)

undefined8 FUN_14300cef0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((*(int *)(param_1 + 0x1c0) != 0) && (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x1c0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x1b8);
      }
      local_res8 = uVar1;
      local_resc = uVar2;
      cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_res8);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14300cf80 FUN_14300cf80 body=133 status=ok
// SIG undefined FUN_14300cf80(void)

undefined8 FUN_14300cf80(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((*(int *)(param_1 + 0x1d0) != 0) && (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x1d0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x1c8);
      }
      local_res8 = uVar1;
      local_resc = uVar2;
      cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_res8);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14300d030 FUN_14300d030 body=394 status=ok
// SIG undefined FUN_14300d030(void)

void FUN_14300d030(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar6 = (longlong *)0x0;
  iVar9 = 0;
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + -0x58) != 0) {
      plVar6 = *(longlong **)(param_1 + -0x60);
    }
    uVar4 = (**(code **)(*plVar6 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar4;
  }
  if (*(int *)(param_1 + -0x68) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x188);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x180);
    if (cVar3 != '\0') {
      local_res8 = *(undefined4 *)(param_1 + 0x180);
      lVar8 = *plVar6;
      local_resc = *(undefined4 *)(param_1 + 0x184);
      lVar2 = plVar6[1];
      for (lVar7 = lVar8; lVar7 != lVar8 + (longlong)(int)lVar2 * 8; lVar7 = lVar7 + 8) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res8);
        if (cVar3 != '\0') {
          iVar9 = (int)(lVar7 - lVar8 >> 3);
          goto LAB_14300d0f1;
        }
      }
      iVar9 = -1;
    }
LAB_14300d0f1:
    lVar8 = *plVar6;
    lVar2 = plVar6[1];
    for (lVar7 = lVar8; lVar7 != lVar8 + (longlong)(int)lVar2 * 8; lVar7 = lVar7 + 8) {
      cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,param_2);
      if (cVar3 != '\0') {
        iVar10 = (int)(lVar7 - lVar8 >> 3);
        goto LAB_14300d121;
      }
    }
    iVar10 = -1;
LAB_14300d121:
    iVar1 = (int)plVar6[1];
    if (iVar9 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar1;
      if (iVar9 < iVar1) {
        iVar5 = iVar9;
      }
    }
    iVar9 = 0;
    if ((-1 < iVar10) && (iVar9 = iVar1, iVar10 < iVar1)) {
      iVar9 = iVar10;
    }
    iVar10 = iVar9;
    if (iVar5 <= iVar9) {
      iVar10 = iVar5;
      iVar5 = iVar9;
    }
    if (iVar10 <= iVar5) {
      lVar8 = (longlong)iVar10 << 3;
      uVar11 = (ulonglong)((iVar5 - iVar10) + 1);
      do {
        FUN_1425d6f50(param_1 + 0x128,&local_res8,*plVar6 + lVar8,0);
        lVar8 = lVar8 + 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + -0x40);
  }
  return;
}



// FUNCTION 14300d1c0 FUN_14300d1c0 body=210 status=ok
// SIG undefined FUN_14300d1c0(void)

void FUN_14300d1c0(longlong param_1,undefined4 *param_2,char param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x58) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x60);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + -0x68) = uVar2;
    }
  }
  if (*(int *)(param_1 + -0x68) != 0) {
    if (param_3 == '\0') {
      local_res8 = *param_2;
      local_resc = param_2[1];
      TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x128,&local_res8);
    }
    else {
      FUN_1425d6f50(param_1 + 0x128,&local_res8,param_2,0);
    }
    if (param_4 != '\0') {
      *(undefined4 *)(param_1 + 0x178) = *param_2;
      *(undefined4 *)(param_1 + 0x17c) = param_2[1];
      *(undefined4 *)(param_1 + 0x180) = *param_2;
      *(undefined4 *)(param_1 + 0x184) = param_2[1];
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + -0x40);
  }
  return;
}



// FUNCTION 14300d2a0 FUN_14300d2a0 body=440 status=ok
// SIG undefined FUN_14300d2a0(void)

void FUN_14300d2a0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint *puVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  int iStack_24;
  longlong *plVar10;
  
  plVar8 = (longlong *)0x0;
  uVar9 = 0;
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar2 != '\0')) {
    plVar6 = plVar8;
    if (*(int *)(param_1 + -0x58) != 0) {
      plVar6 = *(longlong **)(param_1 + -0x60);
    }
    uVar3 = (**(code **)(*plVar6 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar3;
  }
  if (((*(int *)(param_1 + -0x68) != 0) && (*(int *)(param_1 + 0x1b0) != 0)) &&
     ((*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0 &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x18))(), cVar2 != '\0')))) {
    if (*(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c) < 1) {
      FWeakObjectPtr::operator=(&local_res8,0);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x150);
      iStack_24 = 0;
      if (iVar1 != 0) {
        puVar11 = *(uint **)(param_1 + 0x148);
        if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 0x138);
        }
        uVar4 = *puVar11;
        plVar6 = plVar8;
        plVar10 = plVar8;
        while (uVar4 == 0) {
          iVar5 = (int)plVar6;
          uVar9 = (int)plVar10 + 0x20;
          plVar10 = (longlong *)(ulonglong)uVar9;
          plVar6 = (longlong *)(ulonglong)(iVar5 + 1);
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14300d3c8;
          uVar4 = puVar11[(longlong)iVar5 + 1];
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
        iStack_24 = (uVar9 - iVar5) + 0x1f;
        if (iVar1 < iStack_24) {
LAB_14300d3c8:
          iStack_24 = iVar1;
        }
      }
      puVar7 = (undefined4 *)((longlong)iStack_24 * 0x10 + *(longlong *)(param_1 + 0x128));
      local_resc = puVar7[1];
      local_res8 = *puVar7;
    }
    if (((*(int *)(param_1 + 0x1b0) != 0) && (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x1b0) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x1a8);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_res8,param_2);
    }
  }
  return;
}



// FUNCTION 14300d460 FUN_14300d460 body=454 status=ok
// SIG undefined FUN_14300d460(void)

void FUN_14300d460(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong *local_48;
  longlong *local_40;
  
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  plVar12 = plVar11;
  if (0 < (int)param_1[0x19]) {
    do {
      uVar3 = *(undefined4 *)((longlong)plVar12 + param_1[0x18]);
      uVar4 = *(undefined4 *)((longlong)plVar12 + param_1[0x18] + 4);
      local_res10 = uVar3;
      local_res14 = uVar4;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 1,local_res8,&local_res10);
      plVar7 = plVar11;
      if (local_res8[0] != -1) {
        plVar7 = (longlong *)((longlong)local_res8[0] * 0x20 + param_1[1]);
      }
      plVar8 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar8 = plVar11;
      }
      if (plVar8 != (longlong *)0x0) {
        local_48 = (longlong *)*plVar8;
        local_40 = (longlong *)plVar8[1];
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_res18 = uVar3;
        local_res1c = uVar4;
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 1,&local_res18);
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0xb,local_48);
        if (*param_1 != 0) {
          (**(code **)(*local_48 + 8))();
          lVar5 = *param_1;
          if (((*(int *)(lVar5 + 0x530) != 0) && (*(longlong **)(lVar5 + 0x528) != (longlong *)0x0))
             && (cVar6 = (**(code **)(**(longlong **)(lVar5 + 0x528) + 0x18))(), cVar6 != '\0')) {
            plVar7 = plVar11;
            if (*(int *)(lVar5 + 0x530) != 0) {
              plVar7 = *(longlong **)(lVar5 + 0x528);
            }
            (**(code **)(*plVar7 + 0x40))(plVar7,&local_48);
          }
        }
        plVar7 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_40 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      uVar9 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar9;
      plVar12 = plVar12 + 1;
    } while ((int)uVar9 < (int)param_1[0x19]);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(uint *)((longlong)param_1 + 0xcc) < 0x80000000) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  return;
}



// FUNCTION 14300d630 FUN_14300d630 body=512 status=ok
// SIG undefined FUN_14300d630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14300d630(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8[0] = param_2;
  if ((param_1[0x24] == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    (**(code **)(*param_1 + 0x4a0))(param_1,(longlong)param_2 * 0x40 + param_1[0x45]);
    return;
  }
  if ((int)param_1[0x57] == 0) {
    FWeakObjectPtr::operator=(&local_a0,param_1);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145a3c060;
      *(undefined4 *)(plVar2 + 1) = local_a0;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_9c;
      plVar2[2] = (longlong)param_1;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar1;
      *plVar2 = (longlong)&PTR_GetPoolName_145a3c0a8;
    }
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    FUN_142880af0(uVar3,&local_98);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
            (param_1 + 0x56,local_a8);
  return;
}



// FUNCTION 14300d830 FUN_14300d830 body=883 status=ok
// SIG undefined FUN_14300d830(void)

double * FUN_14300d830(longlong param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  FUN_1419aad30();
  lVar1 = param_1 + 0x428;
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x4e8,param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  if (*(int *)(param_1 + 0x4dc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4d0,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x5a8);
  if ((plVar4 == (longlong *)0x0) || (iVar8 = (int)plVar4[1], iVar8 < 1)) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_14300d460(lVar1);
    FUN_14301d5a0(lVar1);
  }
  else {
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    iVar6 = (int)ROUND(((float)*(double *)(param_1 + 0x330) + (float)*(double *)(param_1 + 0x330)) -
                       0.5) >> 1;
    iVar7 = 0;
    if ((-1 < iVar6) && (iVar7 = iVar8 + -1, iVar6 < iVar8 + -1)) {
      iVar7 = iVar6;
    }
    uVar2 = *(undefined4 *)(param_3 + 8);
    fVar16 = 0.0;
    cVar9 = '\0';
    iVar6 = iVar7;
    do {
      if (iVar8 <= iVar6) break;
      fVar10 = (float)FUN_142ff5e40(param_1,*plVar4 + (longlong)iVar6 * 8,iVar6,iVar7,uVar2);
      fVar3 = *(float *)(param_3 + 4);
      if (iVar6 == iVar7) {
        fVar11 = (float)*(double *)(param_1 + 0x330) - (float)(int)*(double *)(param_1 + 0x330);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar11 = 1.0 - fVar11;
        fVar12 = fVar3 / (fVar11 * fVar10);
        fVar16 = fVar10;
        if (fVar11 <= fVar12) {
          fVar12 = fVar11;
        }
      }
      else if (fVar10 + fVar13 <= fVar3) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = (fVar3 - fVar13) / fVar10;
      }
      fVar15 = fVar12 + fVar15;
      fVar14 = fVar14 + fVar10;
      if (iVar6 == iVar7) {
        fVar10 = fVar15 * fVar10;
      }
      iVar8 = (int)plVar4[1];
      fVar13 = fVar13 + fVar10;
      if (iVar8 + -1 <= iVar6) {
        cVar9 = '\x01';
      }
      iVar6 = iVar6 + 1;
    } while (fVar13 <= fVar3);
    if ((cVar9 == '\0') || (fVar3 = *(float *)(param_3 + 4), fVar3 <= fVar13)) {
      *param_2 = *(double *)(param_1 + 0x330);
      param_2[1] = (double)fVar14;
      param_2[2] = (double)fVar15;
    }
    else {
      fVar15 = (fVar14 - fVar3) / fVar16 + (float)iVar7;
      iVar8 = iVar7;
      if (fVar14 < fVar3) {
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) break;
          fVar16 = (float)FUN_142ff5e40(param_1,*plVar4 + (longlong)iVar8 * 8,iVar8,iVar7,uVar2);
          fVar13 = *(float *)(param_3 + 4);
          fVar14 = fVar16 + fVar14;
          if (fVar13 < fVar14) {
            fVar15 = (fVar14 - fVar13) / fVar16 + (float)iVar8;
          }
        } while (fVar14 < fVar13);
      }
      lVar5 = *(longlong *)(param_1 + 0x5a8);
      *param_2 = (double)fVar15;
      iVar8 = *(int *)(lVar5 + 8);
      param_2[1] = (double)fVar14;
      param_2[2] = (double)((float)iVar8 - fVar15);
    }
    *(char *)(param_2 + 3) = cVar9;
    FUN_14300d460(lVar1);
    FUN_14301d5a0(lVar1);
  }
  return param_2;
}



// FUNCTION 14300dbb0 FUN_14300dbb0 body=357 status=ok
// SIG undefined FUN_14300dbb0(void)

undefined8 FUN_14300dbb0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int local_res20 [2];
  
  local_res20[0] = 0;
  cVar3 = FUN_140ab8370(param_1,local_res20,4);
  iVar2 = local_res20[0];
  if (cVar3 == '\0') {
LAB_14300dcfa:
    uVar6 = 0;
  }
  else {
    lVar10 = (longlong)local_res20[0];
    iVar11 = 0;
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar9 != local_res20[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar9 = *(int *)((longlong)param_2 + 0xc);
      iVar11 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar11 + iVar2;
    if (iVar9 < iVar11 + iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)iVar11 * 8),0,lVar10 << 3);
    plVar12 = (longlong *)*param_2;
    plVar1 = plVar12 + (int)param_2[1];
    for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      uVar6 = ULevelStreaming::GetPrivateStaticClass();
      local_res20[0] = 0;
      uVar7 = FUN_142ff6920();
      uVar5 = FUN_142ff71d0(uVar7,uVar6,param_3);
      cVar3 = FUN_140ab8370(param_1,local_res20,uVar5);
      if (cVar3 == '\0') goto LAB_14300dcfa;
      uVar7 = FUN_142ff6920();
      lVar10 = FUN_142ff6ea0(uVar7,uVar6,local_res20[0]);
      if (lVar10 == 0) goto LAB_14300dcfa;
      if (lVar10 == 0) {
LAB_14300dcde:
        lVar10 = 0;
      }
      else {
        lVar8 = ULevelStreaming::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14300dcde;
      }
      *plVar12 = lVar10;
      if (lVar10 == 0) goto LAB_14300dcfa;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14300dd20 FUN_14300dd20 body=357 status=ok
// SIG undefined FUN_14300dd20(void)

undefined8 FUN_14300dd20(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int local_res20 [2];
  
  local_res20[0] = 0;
  cVar3 = FUN_140ab8370(param_1,local_res20,4);
  iVar2 = local_res20[0];
  if (cVar3 == '\0') {
LAB_14300de6a:
    uVar6 = 0;
  }
  else {
    lVar10 = (longlong)local_res20[0];
    iVar11 = 0;
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar9 != local_res20[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar9 = *(int *)((longlong)param_2 + 0xc);
      iVar11 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar11 + iVar2;
    if (iVar9 < iVar11 + iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)iVar11 * 8),0,lVar10 << 3);
    plVar12 = (longlong *)*param_2;
    plVar1 = plVar12 + (int)param_2[1];
    for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      uVar6 = FUN_143025520();
      local_res20[0] = 0;
      uVar7 = FUN_142ff6920();
      uVar5 = FUN_142ff71d0(uVar7,uVar6,param_3);
      cVar3 = FUN_140ab8370(param_1,local_res20,uVar5);
      if (cVar3 == '\0') goto LAB_14300de6a;
      uVar7 = FUN_142ff6920();
      lVar10 = FUN_142ff6ea0(uVar7,uVar6,local_res20[0]);
      if (lVar10 == 0) goto LAB_14300de6a;
      if (lVar10 == 0) {
LAB_14300de4e:
        lVar10 = 0;
      }
      else {
        lVar8 = FUN_143025520();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14300de4e;
      }
      *plVar12 = lVar10;
      if (lVar10 == 0) goto LAB_14300de6a;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14300de90 FUN_14300de90 body=369 status=ok
// SIG undefined FUN_14300de90(void)

undefined8 FUN_14300de90(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int local_28 [4];
  
  local_28[0] = 0;
  cVar3 = FUN_140ab8370(param_1,local_28,6);
  iVar2 = local_28[0];
  if (cVar3 == '\0') {
LAB_14300dfe0:
    uVar6 = 0;
  }
  else {
    lVar9 = (longlong)local_28[0];
    iVar10 = 0;
    iVar8 = *(int *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar8 != local_28[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
      iVar8 = *(int *)((longlong)param_3 + 0xc);
      iVar10 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar10 + iVar2;
    if (iVar8 < iVar10 + iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_3 + (longlong)iVar10 * 8),0,lVar9 << 3);
    plVar11 = (longlong *)*param_3;
    plVar1 = plVar11 + (int)param_3[1];
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      local_28[0] = 0;
      uVar6 = FUN_142ff6920();
      uVar5 = FUN_142ff71d0(uVar6,param_2,param_4);
      cVar3 = FUN_140ab8370(param_1,local_28,uVar5);
      if (cVar3 == '\0') goto LAB_14300dfe0;
      uVar6 = FUN_142ff6920();
      lVar9 = FUN_142ff6ea0(uVar6,param_2,local_28[0]);
      if (lVar9 == 0) goto LAB_14300dfe0;
      if (lVar9 == 0) {
LAB_14300dfc4:
        lVar9 = 0;
      }
      else {
        lVar7 = FUN_14302b1c0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14300dfc4;
      }
      *plVar11 = lVar9;
      if (lVar9 == 0) goto LAB_14300dfe0;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14300e010 FUN_14300e010 body=113 status=ok
// SIG undefined FUN_14300e010(void)

void FUN_14300e010(longlong *param_1)

{
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x9d,param_1 + 0x9a);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (*(int *)((longlong)param_1 + 0x4dc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9a,0);
  }
  FUN_14300d460(param_1 + 0x85);
                    /* WARNING: Could not recover jumptable at 0x00014300e07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1);
  return;
}



// FUNCTION 14300e090 FUN_14300e090 body=10257 status=ok
// SIG undefined FUN_14300e090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14300e090(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong **pplVar19;
  undefined1 auStack_21d8 [32];
  longlong local_21b8;
  longlong local_21b0;
  undefined4 local_21a8;
  longlong local_21a0;
  longlong local_2198;
  longlong local_2190;
  undefined1 local_2188;
  undefined1 local_2180;
  longlong local_2178;
  longlong *local_2168;
  undefined1 local_2160;
  undefined1 local_215f;
  undefined1 local_215e;
  undefined1 local_215d;
  undefined1 local_215c;
  undefined1 local_215b;
  undefined1 local_215a;
  undefined1 local_2159;
  undefined1 local_2158 [8];
  longlong *local_2150;
  longlong *local_2148;
  longlong *local_2140;
  longlong *local_2138;
  longlong *local_2130;
  longlong *local_2128;
  longlong *local_2120;
  longlong *local_2118;
  longlong *local_2110;
  longlong *local_2108;
  longlong *local_2100;
  longlong *local_20f8;
  longlong *local_20f0;
  longlong *local_20e8;
  longlong *local_20e0;
  longlong *local_20d8;
  longlong *local_20d0;
  longlong *local_20c8;
  longlong local_20c0;
  longlong *local_20b8;
  longlong *local_20b0;
  longlong local_20a8 [5];
  longlong *local_2080;
  undefined8 local_2078;
  longlong *local_2070;
  undefined8 local_2068;
  longlong *local_2060;
  undefined4 local_2058;
  undefined1 local_2054;
  undefined8 local_2050;
  undefined4 local_2048;
  longlong *local_2040;
  undefined1 local_2038 [8];
  longlong *local_2030;
  longlong local_2028;
  longlong local_2020;
  undefined1 *local_2018;
  undefined4 local_2010;
  undefined1 local_200c;
  longlong local_2008;
  undefined4 local_2000;
  undefined4 local_1ff8;
  undefined1 local_1ff4;
  longlong local_1ff0;
  undefined4 local_1fe8;
  undefined4 local_1fe0;
  undefined1 local_1fdc;
  longlong local_1fd8;
  undefined4 local_1fd0;
  undefined4 local_1fc8;
  undefined1 local_1fc4;
  longlong local_1fc0;
  undefined4 local_1fb8;
  longlong *local_1fb0;
  longlong *local_1fa8;
  undefined1 *local_1fa0;
  longlong local_1f98;
  longlong local_1f90;
  undefined1 *local_1f88;
  undefined4 local_1f80;
  undefined1 local_1f7c;
  undefined8 local_1f78;
  undefined4 local_1f70;
  longlong local_1f68;
  longlong local_1f60;
  undefined1 *local_1f58;
  undefined4 local_1f50;
  undefined1 local_1f4c;
  undefined8 local_1f48;
  undefined4 local_1f40;
  longlong local_1f38;
  longlong local_1f30;
  undefined1 *local_1f28;
  longlong *local_1f20;
  longlong *local_1f18;
  undefined1 *local_1f10;
  longlong *local_1f08;
  longlong *local_1f00;
  undefined1 *local_1ef8;
  longlong *local_1ef0;
  longlong *local_1ee8;
  undefined1 *local_1ee0;
  longlong *local_1ed8;
  longlong *local_1ed0;
  undefined1 *local_1ec8;
  longlong *local_1ec0;
  longlong *local_1eb8;
  longlong *local_1eb0;
  longlong *local_1ea8;
  undefined8 local_1ea0;
  longlong local_1e98;
  longlong local_1e90;
  longlong local_1e88;
  longlong *local_1e80;
  longlong *local_1e78;
  longlong local_1e70;
  longlong local_1e68;
  undefined1 local_1e60 [24];
  undefined1 local_1e48;
  undefined8 local_1e40;
  undefined4 local_1e38;
  undefined1 local_1e30 [24];
  undefined1 local_1e18;
  undefined8 local_1e10;
  undefined4 local_1e08;
  undefined8 local_1e00;
  undefined8 uStack_1df8;
  undefined1 local_1df0;
  undefined8 local_1de8;
  undefined4 local_1de0;
  undefined8 local_1dd8;
  undefined8 uStack_1dd0;
  undefined1 local_1dc8;
  undefined8 local_1dc0;
  undefined4 local_1db8;
  undefined8 local_1db0;
  undefined8 uStack_1da8;
  undefined1 local_1da0;
  undefined8 local_1d98;
  undefined4 local_1d90;
  undefined1 local_1d88 [8];
  longlong *local_1d80;
  undefined1 local_1d78 [8];
  longlong *local_1d70;
  undefined8 local_1d68;
  undefined8 local_1d60;
  undefined1 local_1d58 [8];
  longlong *local_1d50;
  longlong *local_1d48;
  longlong *local_1d38;
  longlong *local_1d30;
  longlong *local_1d20;
  longlong *local_1d18;
  undefined1 local_1d08 [8];
  longlong *local_1d00;
  longlong *local_1cf8;
  longlong *local_1cf0;
  undefined1 local_1ce0 [8];
  longlong *local_1cd8;
  undefined1 local_1cd0 [8];
  longlong *local_1cc8;
  undefined1 local_1cb8 [8];
  longlong *local_1cb0;
  undefined1 local_1ca0 [16];
  undefined1 local_1c90 [16];
  undefined1 local_1c80 [16];
  undefined1 local_1c70 [16];
  undefined1 local_1c60 [16];
  undefined1 local_1c50 [16];
  undefined1 local_1c40 [16];
  undefined1 local_1c30 [16];
  undefined1 local_1c20 [16];
  undefined1 local_1c10 [16];
  undefined1 local_1c00 [16];
  undefined1 local_1bf0 [16];
  undefined1 local_1be0 [24];
  undefined1 local_1bc8 [8];
  undefined1 local_1bc0 [472];
  undefined1 local_19e8 [264];
  undefined1 local_18e0 [16];
  undefined1 local_18d0 [16];
  undefined1 local_18c0 [16];
  undefined1 local_18b0 [32];
  undefined1 local_1890 [16];
  undefined1 local_1880 [16];
  undefined1 local_1870 [16];
  undefined1 local_1860 [16];
  undefined1 local_1850 [24];
  undefined1 local_1838 [24];
  longlong *local_1820;
  longlong *local_1808;
  undefined1 local_17f8 [40];
  undefined1 local_17d0 [16];
  undefined1 local_17c0 [16];
  undefined1 local_17b0 [24];
  undefined1 local_1798 [264];
  undefined1 local_1690 [16];
  undefined1 local_1680 [16];
  undefined1 local_1670 [16];
  undefined1 local_1660 [32];
  undefined1 local_1640 [16];
  undefined1 local_1630 [16];
  undefined1 local_1620 [16];
  undefined1 local_1610 [16];
  undefined1 local_1600 [24];
  undefined1 local_15e8 [24];
  longlong *local_15d0;
  longlong *local_15b8;
  undefined1 local_15a8 [40];
  undefined1 local_1580 [16];
  undefined1 local_1570 [16];
  undefined1 local_1560 [24];
  undefined1 local_1548 [264];
  undefined1 local_1440 [16];
  undefined1 local_1430 [16];
  undefined1 local_1420 [16];
  undefined1 local_1410 [32];
  undefined1 local_13f0 [16];
  undefined1 local_13e0 [16];
  undefined1 local_13d0 [16];
  undefined1 local_13c0 [16];
  undefined1 local_13b0 [24];
  undefined1 local_1398 [24];
  longlong *local_1380;
  longlong *local_1368;
  undefined1 local_1358 [40];
  undefined1 local_1330 [16];
  undefined1 local_1320 [16];
  undefined1 local_1310 [24];
  undefined1 local_12f8 [264];
  undefined1 local_11f0 [16];
  undefined1 local_11e0 [16];
  undefined1 local_11d0 [16];
  undefined1 local_11c0 [32];
  undefined1 local_11a0 [16];
  undefined1 local_1190 [16];
  undefined1 local_1180 [16];
  undefined1 local_1170 [16];
  undefined1 local_1160 [24];
  undefined1 local_1148 [24];
  longlong *local_1130;
  longlong *local_1118;
  undefined1 local_1108 [40];
  undefined1 local_10e0 [16];
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [24];
  undefined1 local_10a8 [296];
  undefined1 local_f80 [16];
  undefined1 local_f70 [24];
  undefined1 local_f58 [24];
  undefined1 local_f40 [24];
  undefined1 local_f28 [24];
  undefined1 local_f10 [24];
  undefined1 local_ef8 [24];
  undefined1 local_ee0 [24];
  undefined1 local_ec8 [16];
  undefined1 local_eb8 [264];
  longlong local_db0;
  undefined1 local_d80 [16];
  undefined1 local_d70 [24];
  undefined1 local_d58 [264];
  longlong local_c50;
  undefined1 local_c20 [16];
  undefined1 local_c10 [24];
  undefined1 local_bf8 [264];
  longlong local_af0;
  undefined1 local_ad8 [272];
  undefined1 local_9c8 [288];
  undefined1 local_8a8 [688];
  undefined1 local_5f8 [688];
  undefined1 local_348 [760];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_21d8;
  plVar18 = (longlong *)0x0;
  pplVar19 = (longlong **)(param_1 + 0x278);
  local_20c0 = param_1;
  local_2040 = param_2;
  if (*pplVar19 != (longlong *)0x0) goto LAB_14300e245;
  plVar7 = (longlong *)operator_new(0x18);
  plVar13 = plVar18;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = param_1;
    plVar13 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144d50368;
    plVar7[2] = (longlong)plVar13;
    plVar18 = plVar7;
  }
  local_20b8 = plVar13;
  local_20b0 = plVar18;
  if (plVar13 != (longlong *)0x0) {
    if ((*plVar13 != 0) && (plVar13[1] != 0)) {
      piVar1 = (int *)(plVar13[1] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_14300e1ea;
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    *plVar13 = (longlong)plVar13;
    plVar7 = (longlong *)plVar13[1];
    if (plVar18 != plVar7) {
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar13[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar13[1] = (longlong)plVar18;
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar18 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
  }
LAB_14300e1ea:
  if (pplVar19 != &local_20b8) {
    *pplVar19 = plVar13;
    local_20b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x280,&local_20b0);
  }
  plVar18 = local_20b0;
  if (local_20b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_20b0 + 1;
    lVar8 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20b0)(local_20b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20b0 + 8))(local_20b0,1);
      }
    }
  }
LAB_14300e245:
  plVar13 = *pplVar19;
  local_1fc8 = 1;
  local_1fc4 = 1;
  local_1fc0 = 0;
  local_1fb8 = 0;
  local_2168 = plVar13;
  lVar8 = FUN_14068eb10(local_1798);
  *(longlong *)(lVar8 + 0x148) = param_1 + 0x1c8;
  plVar18 = (longlong *)(lVar8 + 0x1b0);
  *(undefined4 *)(lVar8 + 0x1a8) = 1;
  *(undefined1 *)(lVar8 + 0x1ac) = 1;
  if (((&local_1fc0 != plVar18) && (*(int *)(lVar8 + 0x1b8) != 0)) &&
     (plVar7 = (longlong *)*plVar18, plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    if (*plVar18 != 0) {
      lVar9 = FMemory::Realloc(*plVar18,0,0);
      *plVar18 = lVar9;
    }
    *(undefined4 *)(lVar8 + 0x1b8) = 0;
  }
  plVar7 = (longlong *)FUN_142fda1f0();
  plVar18 = plVar7 + 2;
  local_1d20 = plVar18;
  local_1d18 = plVar7;
  FUN_14044f790(&local_1d20,plVar18);
  local_21b8 = 0x618;
  SWidget::SetDebugInfo
            (plVar18,"SGearBuilderManufacturerList",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x96);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_2130 = plVar18;
  local_2128 = plVar7;
  if ((longlong **)(param_1 + 0x1b8) != &local_2130) {
    *(longlong **)(param_1 + 0x1b8) = plVar18;
    local_2130 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c0,&local_2128);
  }
  plVar16 = local_2128;
  if (local_2128 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2128 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2128)(local_2128);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2128 + 8))(local_2128,1);
      }
    }
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar13,local_1c80);
  uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c90);
  uVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c70);
  uVar12 = FUN_142fda690(lVar8,uVar12,FUN_142fdc9c0);
  uVar11 = FUN_142fda830(uVar12,uVar11,&LAB_142fdaed0);
  lVar8 = FUN_142fda9e0(uVar11,uVar10,&LAB_142fdd360);
  local_2178 = lVar8 + 0xf8;
  local_2180 = *(undefined1 *)(lVar8 + 0xf1);
  local_2190 = lVar8 + 0xe8;
  local_21a8 = *(undefined4 *)(lVar8 + 0x90);
  local_2198 = lVar8 + 200;
  local_21a0 = lVar8 + 0x98;
  local_2188 = *(undefined1 *)(lVar8 + 0xf0);
  local_21b0 = lVar8 + 0x78;
  local_21b8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_142feb820(plVar18,lVar8);
  if (((char)plVar7[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar7 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar18 = plVar7 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1560);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1570);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1580);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_15a8);
  if (local_15b8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_15b8 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_15b8)(local_15b8);
      LOCK();
      piVar1 = (int *)((longlong)local_15b8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_15b8 + 8))(local_15b8,1);
      }
    }
  }
  if (local_15d0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_15d0 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_15d0)(local_15d0);
      LOCK();
      piVar1 = (int *)((longlong)local_15d0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_15d0 + 8))(local_15d0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_15e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1600);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1610);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1620);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1630);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1640);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1660);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1670);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1680);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1690);
  FUN_140456c70(local_1798);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1fc0);
  uVar10 = *(undefined8 *)(param_1 + 0x278);
  local_1fd8 = 0;
  local_1fd0 = 0;
  local_1fe0 = 1;
  local_1fdc = 1;
  local_2168 = (longlong *)uVar10;
  lVar8 = FUN_14068eb10(local_19e8);
  *(longlong *)(lVar8 + 0x148) = param_1 + 0x1e8;
  plVar18 = (longlong *)(lVar8 + 0x1b0);
  *(undefined4 *)(lVar8 + 0x1a8) = 1;
  *(undefined1 *)(lVar8 + 0x1ac) = 1;
  if (((&local_1fd8 != plVar18) && (*(int *)(lVar8 + 0x1b8) != 0)) &&
     (plVar13 = (longlong *)*plVar18, plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    if (*plVar18 != 0) {
      lVar9 = FMemory::Realloc(*plVar18,0,0);
      *plVar18 = lVar9;
    }
    *(undefined4 *)(lVar8 + 0x1b8) = 0;
  }
  plVar13 = (longlong *)FUN_142fda0b0();
  plVar18 = plVar13 + 2;
  local_1cf8 = plVar18;
  local_1cf0 = plVar13;
  FUN_14044f790(&local_1cf8,plVar18);
  local_21b8 = 0x618;
  SWidget::SetDebugInfo
            (plVar18,"SGearBuilderTypeList",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x9d);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_2120 = plVar18;
  local_2118 = plVar13;
  if ((longlong **)(param_1 + 0x1d8) != &local_2120) {
    *(longlong **)(param_1 + 0x1d8) = plVar18;
    local_2120 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e0,&local_2118);
  }
  plVar7 = local_2118;
  if (local_2118 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2118 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2118)(local_2118);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2118 + 8))(local_2118,1);
      }
    }
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(uVar10,local_1c10);
  uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c20);
  uVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c30);
  uVar12 = FUN_142fda690(lVar8,uVar12,FUN_142fdb790);
  uVar11 = FUN_142fda830(uVar12,uVar11,&LAB_142fdaed0);
  lVar8 = FUN_142fda9e0(uVar11,uVar10,&LAB_142fdd360);
  local_2178 = lVar8 + 0xf8;
  local_2180 = *(undefined1 *)(lVar8 + 0xf1);
  local_2190 = lVar8 + 0xe8;
  local_21a8 = *(undefined4 *)(lVar8 + 0x90);
  local_2198 = lVar8 + 200;
  local_21a0 = lVar8 + 0x98;
  local_2188 = *(undefined1 *)(lVar8 + 0xf0);
  local_21b0 = lVar8 + 0x78;
  local_21b8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_142feb820(plVar18,lVar8);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_17b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_17c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_17d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_17f8);
  if (local_1808 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1808 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1808)(local_1808);
      LOCK();
      piVar1 = (int *)((longlong)local_1808 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1808 + 8))(local_1808,1);
      }
    }
  }
  if (local_1820 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1820 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1820)(local_1820);
      LOCK();
      piVar1 = (int *)((longlong)local_1820 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1820 + 8))(local_1820,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1838);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1850);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1860);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1870);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1880);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1890);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_18b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_18c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_18d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_18e0);
  FUN_140456c70(local_19e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1fd8);
  uVar10 = *(undefined8 *)(param_1 + 0x278);
  local_1ff0 = 0;
  local_1fe8 = 0;
  local_1ff8 = 1;
  local_1ff4 = 1;
  local_2168 = (longlong *)uVar10;
  lVar8 = FUN_14068eb10(local_1548);
  *(longlong *)(lVar8 + 0x148) = param_1 + 0x208;
  plVar18 = (longlong *)(lVar8 + 0x1b0);
  *(undefined4 *)(lVar8 + 0x1a8) = 1;
  *(undefined1 *)(lVar8 + 0x1ac) = 1;
  if (((&local_1ff0 != plVar18) && (*(int *)(lVar8 + 0x1b8) != 0)) &&
     (plVar13 = (longlong *)*plVar18, plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    if (*plVar18 != 0) {
      lVar9 = FMemory::Realloc(*plVar18,0,0);
      *plVar18 = lVar9;
    }
    *(undefined4 *)(lVar8 + 0x1b8) = 0;
  }
  plVar13 = (longlong *)FUN_142fda010();
  plVar18 = plVar13 + 2;
  local_1d38 = plVar18;
  local_1d30 = plVar13;
  FUN_14044f790(&local_1d38,plVar18);
  local_21b8 = 0x618;
  SWidget::SetDebugInfo
            (plVar18,"SGearBuilderBalanceList",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xa4);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_2110 = plVar18;
  local_2108 = plVar13;
  if ((longlong **)(param_1 + 0x1f8) != &local_2110) {
    *(longlong **)(param_1 + 0x1f8) = plVar18;
    local_2110 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x200,&local_2108);
  }
  plVar7 = local_2108;
  if (local_2108 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2108 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2108)(local_2108);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2108 + 8))(local_2108,1);
      }
    }
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(uVar10,local_1ca0);
  uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c00);
  uVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c60);
  uVar12 = FUN_142fda690(lVar8,uVar12,FUN_142fdaee0);
  uVar11 = FUN_142fda830(uVar12,uVar11,&LAB_142fdaed0);
  lVar8 = FUN_142fda9e0(uVar11,uVar10,&LAB_142fdd360);
  local_2178 = lVar8 + 0xf8;
  local_2180 = *(undefined1 *)(lVar8 + 0xf1);
  local_2190 = lVar8 + 0xe8;
  local_21a8 = *(undefined4 *)(lVar8 + 0x90);
  local_2198 = lVar8 + 200;
  local_21a0 = lVar8 + 0x98;
  local_2188 = *(undefined1 *)(lVar8 + 0xf0);
  local_21b0 = lVar8 + 0x78;
  local_21b8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_142feb820(plVar18,lVar8);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1320);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1330);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1358);
  if (local_1368 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1368 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1368)(local_1368);
      LOCK();
      piVar1 = (int *)((longlong)local_1368 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1368 + 8))(local_1368,1);
      }
    }
  }
  if (local_1380 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1380 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1380)(local_1380);
      LOCK();
      piVar1 = (int *)((longlong)local_1380 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1380 + 8))(local_1380,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1398);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_13b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_13c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_13d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_13e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_13f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1440);
  FUN_140456c70(local_1548);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1ff0);
  uVar10 = *(undefined8 *)(param_1 + 0x278);
  local_2008 = 0;
  local_2000 = 0;
  local_2010 = 1;
  local_200c = 1;
  local_2168 = (longlong *)uVar10;
  lVar8 = FUN_14068eb10(local_12f8);
  *(longlong *)(lVar8 + 0x148) = param_1 + 0x228;
  plVar18 = (longlong *)(lVar8 + 0x1b0);
  *(undefined4 *)(lVar8 + 0x1a8) = 1;
  *(undefined1 *)(lVar8 + 0x1ac) = 1;
  if (((&local_2008 != plVar18) && (*(int *)(lVar8 + 0x1b8) != 0)) &&
     (plVar13 = (longlong *)*plVar18, plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    if (*plVar18 != 0) {
      lVar9 = FMemory::Realloc(*plVar18,0,0);
      *plVar18 = lVar9;
    }
    *(undefined4 *)(lVar8 + 0x1b8) = 0;
  }
  plVar13 = (longlong *)FUN_142fda150();
  plVar18 = plVar13 + 2;
  local_1d50 = plVar18;
  local_1d48 = plVar13;
  FUN_14044f790(&local_1d50,plVar18);
  local_21b8 = 0x618;
  SWidget::SetDebugInfo
            (plVar18,"SGearBuilderPartList",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xab);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_2100 = plVar18;
  local_20f8 = plVar13;
  if ((longlong **)(param_1 + 0x218) != &local_2100) {
    *(longlong **)(param_1 + 0x218) = plVar18;
    local_2100 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x220,&local_20f8);
  }
  plVar7 = local_20f8;
  if (local_20f8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_20f8 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_20f8)(local_20f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20f8 + 8))(local_20f8,1);
      }
    }
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(uVar10,local_1bf0);
  uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1be0);
  uVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_2168,local_1c50);
  uVar12 = FUN_142fda690(lVar8,uVar12,FUN_142fdc040);
  uVar11 = FUN_142fda830(uVar12,uVar11,&LAB_142fdaed0);
  lVar8 = FUN_142fda9e0(uVar11,uVar10,&LAB_142fdd360);
  local_2178 = lVar8 + 0xf8;
  local_2180 = *(undefined1 *)(lVar8 + 0xf1);
  local_2190 = lVar8 + 0xe8;
  local_21a8 = *(undefined4 *)(lVar8 + 0x90);
  local_2198 = lVar8 + 200;
  local_21a0 = lVar8 + 0x98;
  local_2188 = *(undefined1 *)(lVar8 + 0xf0);
  local_21b0 = lVar8 + 0x78;
  local_21b8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_142feb820(plVar18,lVar8);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_10c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_10d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_10e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1108);
  if (local_1118 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1118 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1118)(local_1118);
      LOCK();
      piVar1 = (int *)((longlong)local_1118 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1118 + 8))(local_1118,1);
      }
    }
  }
  if (local_1130 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1130 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1130)(local_1130);
      LOCK();
      piVar1 = (int *)((longlong)local_1130 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1130 + 8))(local_1130,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1180);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1190);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_11a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_11c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_11d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_11e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_11f0);
  FUN_140456c70(local_12f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2008);
  local_20a8[3] = 0xc;
  local_20a8[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_20a8 + 2,0);
  FGenericPlatformString::Memcpy(local_20a8[2],L"Spawn Gear!",0x18);
  uVar10 = FText::FromString(local_1cb8,local_20a8 + 2);
  FText::FText(local_1e30,uVar10);
  local_1e18 = 1;
  local_1e10 = 0;
  local_1e08 = 0;
  local_20a8[0] = 0;
  local_20a8[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_20a8,0);
  FGenericPlatformString::Memcpy(local_20a8[0],L"Spawn Gear!",0x18);
  uVar10 = FText::FromString(local_1cd0,local_20a8);
  FText::FText(local_1e60,uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x278);
  local_1e40 = 0;
  local_1e38 = 0;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1e48 = 1;
  if ((*(int *)(lVar8 + 0x38) < DAT_146b45c60) &&
     (_Init_thread_header(&DAT_146b45c60), DAT_146b45c60 == -1)) {
    if ((*(int *)(lVar8 + 0x38) < DAT_146b45a70) &&
       (_Init_thread_header(&DAT_146b45a70), DAT_146b45a70 == -1)) {
      FUN_142fef030(&DAT_146b45a20,L"LargeFont");
      atexit(FUN_143ec2910);
      _Init_thread_footer(&DAT_146b45a70);
    }
    plVar18 = DAT_1469eb140;
    puVar14 = (undefined8 *)FName::FName(local_1d58,"NormalText",1);
    local_1d68 = *puVar14;
    local_1d60 = local_1d68;
    lVar8 = (**(code **)(*plVar18 + 0x80))(plVar18,DAT_1469eb158);
    if (lVar8 == 0) {
      lVar8 = FUN_141835350();
    }
    FTextBlockStyle::FTextBlockStyle(local_1bc8,lVar8);
    FUN_1417f9360(local_1bc0,&DAT_146b45a20);
    FTextBlockStyle::FTextBlockStyle(&DAT_146b45a80,local_1bc8);
    FUN_140691580(local_1bc8);
    atexit((_func_5014 *)&LAB_143ec2a80);
    _Init_thread_footer(&DAT_146b45c60);
  }
  lVar8 = FUN_14068f3e0(local_348);
  *(undefined4 *)(lVar8 + 0x128) = 2;
  *(undefined4 *)(lVar8 + 300) = 2;
  *(undefined **)(lVar8 + 0x120) = &DAT_146b45a80;
  FText::operator=(lVar8 + 0x158,local_1e60);
  *(undefined1 *)(lVar8 + 0x170) = local_1e48;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x178,&local_1e40);
  FText::operator=(lVar8,local_1e30);
  *(undefined1 *)(lVar8 + 0x18) = local_1e18;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x20,&local_1e10);
  plVar13 = (longlong *)FUN_141880af0();
  plVar18 = plVar13 + 2;
  local_1f20 = plVar18;
  local_1f18 = plVar13;
  FUN_14044f790(&local_1f20,plVar18);
  local_1f10 = &local_215c;
  local_21b8 = 0x488;
  SWidget::SetDebugInfo
            (plVar18,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xb3);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_20f0 = plVar18;
  local_20e8 = plVar13;
  if ((longlong **)(param_1 + 0x238) != &local_20f0) {
    *(longlong **)(param_1 + 0x238) = plVar18;
    local_20f0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x240,&local_20e8);
  }
  plVar7 = local_20e8;
  if (local_20e8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_20e8 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_20e8)(local_20e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20e8 + 8))(local_20e8,1);
      }
    }
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(uVar10,local_1c40);
  lVar8 = FUN_142fda4f0(lVar8,uVar10,FUN_143008f80);
  local_2178 = lVar8 + 0xf8;
  local_2180 = *(undefined1 *)(lVar8 + 0xf1);
  local_2190 = lVar8 + 0xe8;
  local_21a8 = *(undefined4 *)(lVar8 + 0x90);
  local_2198 = lVar8 + 200;
  local_21a0 = lVar8 + 0x98;
  local_2188 = *(undefined1 *)(lVar8 + 0xf0);
  local_21b0 = lVar8 + 0x78;
  local_21b8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_14192dae0(plVar18,lVar8);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar13 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f20);
  FUN_140690f70(local_348);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e40);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1e60);
  if (local_1cc8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1cc8 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1cc8)(local_1cc8);
      LOCK();
      piVar1 = (int *)((longlong)local_1cc8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1cc8 + 8))(local_1cc8,1);
      }
    }
  }
  if (local_20a8[0] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e10);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1e30);
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1cb0 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1cb0)(local_1cb0);
      LOCK();
      piVar1 = (int *)((longlong)local_1cb0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1cb0 + 8))(local_1cb0,1);
      }
    }
  }
  if (local_20a8[2] != 0) {
    FMemory::Free();
  }
  lVar9 = SReflectorToolTipWidget::FArguments::FArguments(local_9c8);
  *(longlong *)(lVar9 + 0x110) = param_1 + 0x128;
  *(longlong *)(lVar9 + 0x108) = param_1 + 400;
  plVar13 = (longlong *)FUN_142fda3a0();
  plVar18 = plVar13 + 2;
  local_1ed8 = plVar18;
  local_1ed0 = plVar13;
  FUN_14044f790(&local_1ed8,plVar18);
  local_1ec8 = &local_2160;
  local_21b8 = 0x300;
  SWidget::SetDebugInfo
            (plVar18,"SGearBuilderDetails",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xe6);
  lVar8 = local_20c0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_20e0 = plVar18;
  local_20d8 = plVar13;
  if ((longlong **)(local_20c0 + 600) != &local_20e0) {
    *(longlong **)(local_20c0 + 600) = plVar18;
    local_20e0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_20c0 + 0x260,&local_20d8);
  }
  plVar7 = local_20d8;
  if (local_20d8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_20d8 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_20d8)(local_20d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20d8 + 8))(local_20d8,1);
      }
    }
  }
  local_21a8 = *(undefined4 *)(lVar9 + 0x90);
  local_2178 = lVar9 + 0xf8;
  local_2190 = lVar9 + 0xe8;
  local_2180 = *(undefined1 *)(lVar9 + 0xf1);
  local_2198 = lVar9 + 200;
  local_21a0 = lVar9 + 0x98;
  local_2188 = *(undefined1 *)(lVar9 + 0xf0);
  local_21b0 = lVar9 + 0x78;
  local_21b8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_142fec130(plVar18,lVar9);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_2058 = 0x3f19999a;
  local_2050 = 0;
  local_2048 = 0;
  local_1e00 = 0x4080000040800000;
  uStack_1df8 = 0x4080000040800000;
  local_1de8 = 0;
  local_1de0 = 0;
  local_2054 = 1;
  local_1df0 = 1;
  local_1ec0 = plVar18;
  local_1eb8 = plVar13;
  lVar9 = FUN_14068f180(local_10a8);
  *(undefined8 *)(lVar9 + 0x108) = 0;
  *(undefined8 *)(lVar9 + 0x110) = 0x4080000040800000;
  *(undefined8 *)(lVar9 + 0x118) = 0x4080000040800000;
  *(undefined1 *)(lVar9 + 0x120) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_1de8);
  plVar7 = (longlong *)FUN_1418cc2a0();
  plVar18 = plVar7 + 2;
  local_1ef0 = plVar18;
  local_1ee8 = plVar7;
  FUN_14044f790(&local_1ef0,plVar18);
  local_1ee0 = &local_215f;
  local_21b8 = 0x310;
  SWidget::SetDebugInfo
            (plVar18,&DAT_145a2b0a4,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xd1);
  pplVar19 = (longlong **)(lVar8 + 0x1a8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_20d0 = plVar18;
  local_20c8 = plVar7;
  if (pplVar19 != &local_20d0) {
    *pplVar19 = plVar18;
    local_20d0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x1b0,&local_20c8);
  }
  plVar16 = local_20c8;
  if (local_20c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20c8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20c8)(local_20c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20c8 + 8))(local_20c8,1);
      }
    }
  }
  local_21a8 = *(undefined4 *)(lVar9 + 0x90);
  local_2178 = lVar9 + 0xf8;
  local_2190 = lVar9 + 0xe8;
  local_2180 = *(undefined1 *)(lVar9 + 0xf1);
  local_2198 = lVar9 + 200;
  local_21a0 = lVar9 + 0x98;
  local_2188 = *(undefined1 *)(lVar9 + 0xf0);
  local_21b0 = lVar9 + 0x78;
  local_21b8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141972160(plVar18,lVar9);
  if (((char)plVar7[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_1da0 = 1;
  local_1db0 = 0x4080000040800000;
  uStack_1da8 = 0x4080000040800000;
  local_1d98 = 0;
  local_1d90 = 0;
  local_1e80 = plVar18;
  local_1e78 = plVar7;
  lVar8 = FUN_141886d30(local_5f8);
  *(undefined1 *)(lVar8 + 0x130) = 1;
  *(undefined8 *)(lVar8 + 0x120) = 0x4080000040800000;
  *(undefined8 *)(lVar8 + 0x128) = 0x4080000040800000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x138,&local_1d98);
  local_1e68 = lVar8 + 0x108;
  local_1e70 = lVar8;
  local_1f90 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  lVar8 = local_1f90 + 0x10;
  local_1f98 = lVar8;
  FUN_14044f790(&local_1f98,lVar8);
  local_1f88 = &local_215e;
  local_21b8 = 0x388;
  SWidget::SetDebugInfo
            (lVar8,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xcd);
  uVar10 = FUN_1418d3c80(&local_1e70,&local_1e80);
  puVar14 = (undefined8 *)FUN_1418d3ed0(&local_1f98,local_1d08,uVar10);
  local_2068 = *puVar14;
  local_2060 = (longlong *)puVar14[1];
  if (local_2060 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2060 + 1) = (int)local_2060[1] + 1;
    UNLOCK();
  }
  local_1f80 = 0x3f19999a;
  local_1f7c = 1;
  local_1f78 = 0;
  local_1f70 = 0;
  lVar9 = SSplitter::Slot();
  *(undefined4 *)(lVar9 + 0x38) = 0x3f19999a;
  *(undefined1 *)(lVar9 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x40,&local_1f78);
  lVar15 = SSplitter::FArguments::FArguments(local_eb8);
  *(undefined4 *)(lVar15 + 0x120) = 1;
  local_1f60 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar8 = local_1f60 + 0x10;
  local_1f68 = lVar8;
  FUN_14044f790(&local_1f68,lVar8);
  local_1f58 = &local_215d;
  local_21b8 = 0x278;
  SWidget::SetDebugInfo
            (lVar8,"SSplitter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,200);
  uVar10 = FUN_140801a00(lVar9,&local_2068);
  uVar10 = SOverlay::FArguments::operator+(lVar15,uVar10);
  puVar14 = (undefined8 *)FUN_1418d47f0(&local_1f68,local_1d88,uVar10);
  local_2078 = *puVar14;
  local_2070 = (longlong *)puVar14[1];
  if (local_2070 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2070 + 1) = (int)local_2070[1] + 1;
    UNLOCK();
  }
  local_1f50 = 0x3e99999a;
  local_1f4c = 1;
  local_1f48 = 0;
  local_1f40 = 0;
  lVar9 = SFlareShipStatus::FArguments::FArguments(local_ad8);
  lVar8 = local_20c0;
  *(longlong *)(lVar9 + 0x108) = local_20c0;
  plVar16 = (longlong *)FUN_142fda420();
  plVar18 = plVar16 + 2;
  local_2168 = plVar16;
  local_1f08 = plVar18;
  local_1f00 = plVar16;
  FUN_14044f790(&local_1f08,plVar18);
  local_1ef8 = local_2158;
  local_21b8 = 0x2f8;
  SWidget::SetDebugInfo
            (plVar18,"SGearBuilderHintBar",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xee);
  pplVar19 = (longlong **)(lVar8 + 0x268);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_2150 = plVar18;
  local_2148 = plVar16;
  if (pplVar19 != &local_2150) {
    *pplVar19 = plVar18;
    local_2150 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x270,&local_2148);
  }
  plVar2 = local_2148;
  if (local_2148 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2148 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2148)(local_2148);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2148 + 8))(local_2148,1);
      }
    }
  }
  local_21a8 = *(undefined4 *)(lVar9 + 0x90);
  local_2178 = lVar9 + 0xf8;
  local_2190 = lVar9 + 0xe8;
  local_2180 = *(undefined1 *)(lVar9 + 0xf1);
  local_2198 = lVar9 + 200;
  local_21a0 = lVar9 + 0x98;
  local_2188 = *(undefined1 *)(lVar9 + 0xf0);
  local_21b0 = lVar9 + 0x78;
  local_21b8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar18,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_142fedbe0(plVar18,lVar9);
  if (((char)plVar16[5] < '\0') || (cVar4 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar5;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1eb0 = plVar18;
  local_1ea8 = plVar16;
  lVar9 = SSplitter::Slot();
  *(undefined4 *)(lVar9 + 0x38) = 0x3f19999a;
  *(undefined1 *)(lVar9 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x40,&local_2050);
  lVar15 = SSplitter::Slot();
  *(undefined4 *)(lVar15 + 0x38) = 0x3e99999a;
  *(undefined1 *)(lVar15 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar15 + 0x40,&local_1f48);
  lVar17 = SSplitter::FArguments::FArguments(local_d58);
  *(undefined4 *)(lVar17 + 0x120) = 0;
  local_1f30 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar8 = local_1f30 + 0x10;
  local_1f38 = lVar8;
  FUN_14044f790(&local_1f38,lVar8);
  local_1f28 = &local_215b;
  local_21b8 = 0x278;
  SWidget::SetDebugInfo
            (lVar8,"SSplitter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xc3);
  uVar10 = FUN_140801a00(lVar9,&local_1ec0);
  uVar11 = FUN_140801a00(lVar15,&local_2078);
  uVar11 = SOverlay::FArguments::operator+(lVar17,uVar11);
  uVar10 = SOverlay::FArguments::operator+(uVar11,uVar10);
  puVar14 = (undefined8 *)FUN_1418d47f0(&local_1f38,local_1ce0,uVar10);
  local_1ea0 = *puVar14;
  local_1e98 = puVar14[1];
  if (local_1e98 != 0) {
    LOCK();
    *(int *)(local_1e98 + 8) = *(int *)(local_1e98 + 8) + 1;
    UNLOCK();
  }
  local_2020 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar8 = local_2020 + 0x10;
  local_2028 = lVar8;
  FUN_14044f790(&local_2028,lVar8);
  local_2018 = &local_215a;
  local_21b8 = 0x238;
  SWidget::SetDebugInfo
            (lVar8,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xc0);
  uVar10 = FUN_1418c41f0();
  uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
  uVar10 = FUN_1417f9c30(uVar10,&local_1eb0);
  uVar11 = FUN_1418c41f0();
  uVar11 = FUN_1417f9c30(uVar11,&local_1ea0);
  uVar12 = SCanvas::FArguments::FArguments(local_bf8);
  uVar11 = SOverlay::FArguments::operator+(uVar12,uVar11);
  uVar10 = SOverlay::FArguments::operator+(uVar11,uVar10);
  puVar14 = (undefined8 *)FUN_1417fd340(&local_2028,local_1d78,uVar10);
  local_20a8[4] = *puVar14;
  local_2080 = (longlong *)puVar14[1];
  if (local_2080 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2080 + 1) = (int)local_2080[1] + 1;
    UNLOCK();
  }
  local_1dc8 = 1;
  local_1dd8 = 0x4080000040800000;
  uStack_1dd0 = 0x4080000040800000;
  local_1dc0 = 0;
  local_1db8 = 0;
  lVar8 = FUN_141886d30(local_8a8);
  *(undefined1 *)(lVar8 + 0x130) = 1;
  *(undefined8 *)(lVar8 + 0x120) = 0x4080000040800000;
  *(undefined8 *)(lVar8 + 0x128) = 0x4080000040800000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x138,&local_1dc0);
  local_1e88 = lVar8 + 0x108;
  local_1e90 = lVar8;
  plVar16 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  plVar18 = plVar16 + 2;
  local_1fb0 = plVar18;
  local_1fa8 = plVar16;
  FUN_14044f790(&local_1fb0,plVar18);
  local_1fa0 = &local_2159;
  local_21b8 = 0x388;
  SWidget::SetDebugInfo
            (plVar18,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0xbc);
  lVar8 = local_20c0;
  pplVar19 = (longlong **)(local_20c0 + 0x198);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_2140 = plVar18;
  local_2138 = plVar16;
  if (pplVar19 != &local_2140) {
    *pplVar19 = plVar18;
    local_2140 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_20c0 + 0x1a0,&local_2138);
  }
  plVar18 = local_2138;
  if (local_2138 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2138 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2138)(local_2138);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2138 + 8))(local_2138,1);
      }
    }
  }
  uVar10 = FUN_1418d3c80(&local_1e90,local_20a8 + 4);
  FUN_1418d3ed0(&local_1fb0,local_2038,uVar10);
  plVar18 = local_2030;
  if (local_2030 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2030 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2030)(local_2030);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2030 + 8))(local_2030,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1fb0);
  FUN_14188af70(local_8a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1dc0);
  plVar18 = local_2080;
  if (local_2080 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2080 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2080)(local_2080);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2080 + 8))(local_2080,1);
      }
    }
  }
  if (local_1d70 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1d70 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1d70)(local_1d70);
      LOCK();
      piVar1 = (int *)((longlong)local_1d70 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1d70 + 8))(local_1d70,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2028);
  if (local_af0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_bf8);
  if (local_1cd8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1cd8 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1cd8)(local_1cd8);
      LOCK();
      piVar1 = (int *)((longlong)local_1cd8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1cd8 + 8))(local_1cd8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c20);
  if (local_c50 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_d58);
  plVar18 = local_2168;
  if (local_2168 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2168 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2168)(local_2168);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f08);
  FUN_140456c70(local_ad8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f48);
  plVar18 = local_2070;
  if (local_2070 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2070 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2070)(local_2070);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2070 + 8))(local_2070,1);
      }
    }
  }
  if (local_1d80 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1d80 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1d80)(local_1d80);
      LOCK();
      piVar1 = (int *)((longlong)local_1d80 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1d80 + 8))(local_1d80,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d80);
  if (local_db0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_eb8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f78);
  plVar18 = local_2060;
  if (local_2060 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2060 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2060)(local_2060);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2060 + 8))(local_2060,1);
      }
    }
  }
  if (local_1d00 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1d00 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1d00)(local_1d00);
      LOCK();
      piVar1 = (int *)((longlong)local_1d00 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1d00 + 8))(local_1d00,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f98);
  FUN_14188af70(local_5f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d98);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar7 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar18 = plVar7 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1ef0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_ec8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_ee0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_ef8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f58);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_f70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f80);
  FUN_140456c70(local_10a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1de8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2050);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar18 = plVar13 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1ed8);
  FUN_140456c70(local_9c8);
  FUN_14301cfb0(lVar8);
  *local_2040 = (longlong)*pplVar19;
  lVar8 = *(longlong *)(lVar8 + 0x1a0);
  local_2040[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1430108b0 FUN_1430108b0 body=358 status=ok
// SIG undefined FUN_1430108b0(void)

void FUN_1430108b0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  plVar7 = *(longlong **)(param_2 + 0xc0);
  plVar6 = plVar7 + (longlong)*(int *)(param_2 + 200) * 0x10;
  do {
    if (plVar7 == plVar6) {
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x30 + lVar5;
      for (; lVar5 != lVar4; lVar5 = lVar5 + 0x30) {
        cVar2 = FUN_14058c1e0(lVar5,lVar3);
        if (cVar2 != '\0') goto LAB_143010996;
      }
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar3;
      iVar1 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar1 + 1;
      if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
      }
      FUN_142fde980(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0x30,lVar3);
      lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0x30;
LAB_143010996:
      lVar3 = *(longlong *)(param_2 + 0xb0);
      if ((lVar3 != 0) ||
         ((*(longlong *)(param_2 + 0x30) != 0 && (lVar3 = FUN_140eac160(), lVar3 != 0)))) {
        fVar8 = (float)FUN_142c98860(plVar7 + 8,0);
        fVar9 = (float)FUN_142c98860(plVar7 + 1,0);
        FUN_143010b60(lVar5,lVar3,param_2,(int)fVar9,(int)fVar8);
      }
    }
    plVar7 = plVar7 + 0x10;
  } while( true );
}



// FUNCTION 143010a20 FUN_143010a20 body=308 status=ok
// SIG undefined FUN_143010a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143010a20(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined8 local_res10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong local_88 [2];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_res10 = param_2;
  cVar1 = FUN_1407ce070(param_1 + 0x1c);
  if ((cVar1 != '\0') && (param_1[0x1b] != 0)) {
    FUN_14217bd20(local_98);
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_88);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::FName(local_90,L"Count",1);
    uVar3 = FUN_142186cb0(*param_1,local_78,local_98,puVar4);
    FUN_1421837f0(uVar3,*puVar2,0);
    FUN_14217f320(local_78);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    FUN_141288240(param_1[0x1b] + 8,local_90,local_98,0);
    FUN_141288240(param_1 + 0xf,local_90,local_98,0);
  }
  return;
}



// FUNCTION 143010b60 FUN_143010b60 body=470 status=ok
// SIG undefined FUN_143010b60(void)

void FUN_143010b60(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  lVar5 = (longlong)*(int *)(param_1 + 0x10) * 0x30 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
    cVar4 = FUN_14058c1e0(lVar6,param_2);
    if (cVar4 != '\0') goto LAB_143010c4a;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x20),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 8) = param_2;
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar6 = *plVar1 + (longlong)iVar2 * 0x30;
  FWeakObjectPtr::operator=(lVar6,param_2);
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined4 *)(lVar6 + 0x28) = 1000000;
  *(undefined4 *)(lVar6 + 0x2c) = 0xffffffff;
  lVar6 = *plVar1 + (longlong)iVar2 * 0x30;
LAB_143010c4a:
  lVar5 = *(longlong *)(lVar6 + 8);
  lVar7 = (longlong)*(int *)(lVar6 + 0x10) * 0x10 + lVar5;
  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x10) {
    cVar4 = FUN_14058c1e0(lVar5,param_3);
    if (cVar4 != '\0') goto LAB_143010ce2;
  }
  iVar2 = *(int *)(lVar6 + 0x20);
  *(int *)(lVar6 + 0x20) = iVar2 + 1;
  if (*(int *)(lVar6 + 0x24) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar6 + 0x18,iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar2 * 8) = param_3;
  iVar2 = *(int *)(lVar6 + 0x10);
  *(int *)(lVar6 + 0x10) = iVar2 + 1;
  if (*(int *)(lVar6 + 0x14) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 8,iVar2);
  }
  lVar5 = *(longlong *)(lVar6 + 8) + (longlong)iVar2 * 0x10;
  FWeakObjectPtr::operator=(lVar5,param_3);
  *(undefined4 *)(lVar5 + 8) = 1000000;
  *(undefined4 *)(lVar5 + 0xc) = 0xffffffff;
  lVar5 = *(longlong *)(lVar6 + 8) + (longlong)iVar2 * 0x10;
LAB_143010ce2:
  iVar2 = param_4;
  if (*(int *)(lVar5 + 8) <= param_4) {
    iVar2 = *(int *)(lVar5 + 8);
  }
  iVar3 = param_5;
  if (param_5 <= *(int *)(lVar5 + 0xc)) {
    iVar3 = *(int *)(lVar5 + 0xc);
  }
  *(int *)(lVar5 + 0xc) = iVar3;
  *(int *)(lVar5 + 8) = iVar2;
  if (*(int *)(lVar6 + 0x28) <= param_4) {
    param_4 = *(int *)(lVar6 + 0x28);
  }
  *(int *)(lVar6 + 0x28) = param_4;
  if (param_5 <= *(int *)(lVar6 + 0x2c)) {
    param_5 = *(int *)(lVar6 + 0x2c);
  }
  *(int *)(lVar6 + 0x2c) = param_5;
  return;
}



// FUNCTION 143010d40 Rehash body=532 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_143010e6f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_143010e6f:
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
        lVar6 = (longlong)iStack_2c * 0x30 + *param_1;
        uVar5 = FUN_142fffec0(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
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



// FUNCTION 143010f60 FUN_143010f60 body=658 status=ok
// SIG undefined FUN_143010f60(void)

void FUN_143010f60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong *puVar16;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar9 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar6 = (longlong)(int)*plVar2 - 1U & uVar9;
        uVar9 = uVar9 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar6 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_48 = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_48;
      }
      uVar10 = *puVar15;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar7 = local_78 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar7;
        if (bVar4) goto LAB_14301108f;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_74 = -uVar10 & uVar10;
      iVar7 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_64 = (iStack_60 - iVar7) + 0x1f;
      if (iVar3 < iStack_64) {
LAB_14301108f:
        iStack_64 = iVar3;
      }
    }
    local_50 = local_78;
    uStack_4c = uStack_74;
    local_40 = 0xffffffff;
    iStack_3c = iStack_64;
    iStack_38 = iStack_60;
    if (iStack_64 < iVar3) {
      do {
        iVar3 = iStack_3c;
        puVar16 = (ulonglong *)((longlong)iStack_3c * 0x38 + *param_1);
        iVar7 = (int)(*puVar16 >> 4);
        uVar11 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
        uVar10 = -(uVar11 + iVar7) ^ uVar11 >> 0xd;
        uVar13 = (iVar7 - uVar11) - uVar10 ^ uVar10 >> 0xc;
        uVar12 = (uVar11 - uVar13) - uVar10 ^ uVar13 << 0x10;
        uVar11 = (uVar10 - uVar12) - uVar13 ^ uVar12 >> 5;
        uVar13 = (uVar13 - uVar12) - uVar11 ^ uVar11 >> 3;
        uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 << 10;
        uVar10 = FUN_142fffec0(puVar16 + 1);
        uVar10 = (uVar10 ^ (uVar11 - uVar12) - uVar13 ^ uVar12 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar16 + 0x34) = uVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar16 + 6) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iVar3;
        local_40 = local_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (iStack_3c < (int)puStack_48[6]);
    }
  }
  return;
}



// FUNCTION 143011200 FUN_143011200 body=972 status=ok
// SIG undefined FUN_143011200(void)

void FUN_143011200(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_90 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x198) != &local_98) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a0,&local_90);
    plVar5 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  local_80 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1a8) != &local_88) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b0,&local_80);
    plVar5 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  local_70 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1b8) != &local_78) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c0,&local_70);
    plVar5 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  local_60 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1d8) != &local_68) {
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e0,&local_60);
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
  }
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1f8) != &local_58) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x200,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x218) != &local_48) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x220,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x248) != &local_38) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x250,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
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
  if ((undefined8 *)(param_1 + 600) != &local_28) {
    *(undefined8 *)(param_1 + 600) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x260,&local_20);
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
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x268) != &local_18) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x270,&local_10);
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
  return;
}



// FUNCTION 1430115d0 FUN_1430115d0 body=421 status=ok
// SIG undefined FUN_1430115d0(void)

undefined8 FUN_1430115d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar10 = (int)(param_2 >> 4);
  uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
  uVar8 = (longlong)(int)param_1[9] - 1;
  uVar7 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
  uVar11 = (iVar10 - uVar9) - uVar7 ^ uVar7 >> 0xc;
  uVar9 = (uVar9 - uVar11) - uVar7 ^ uVar11 << 0x10;
  uVar7 = (uVar7 - uVar9) - uVar11 ^ uVar9 >> 5;
  uVar11 = (uVar11 - uVar9) - uVar7 ^ uVar7 >> 3;
  uVar9 = (uVar9 - uVar11) - uVar7 ^ uVar11 << 10;
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar12 +
                   (((longlong)(int)((uVar7 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) & uVar8)
                   * 4);
  if (iVar10 != -1) {
    lVar1 = *param_1;
    do {
      lVar5 = (longlong)iVar10 * 0x20;
      if (*(ulonglong *)(lVar5 + lVar1) == param_2) {
        lVar5 = (longlong)iVar10 * 0x20;
        uVar8 = (longlong)*(int *)(lVar5 + 0x1c + lVar1) & uVar8;
        piVar6 = (int *)((longlong)plVar12 + uVar8 * 4);
        iVar4 = *(int *)((longlong)plVar12 + uVar8 * 4);
        goto joined_r0x0001430116e7;
      }
      iVar10 = *(int *)(lVar5 + 0x18 + lVar1);
    } while (iVar10 != -1);
  }
  return 0;
joined_r0x0001430116e7:
  if (iVar4 == -1) {
LAB_143011710:
    lVar1 = *param_1;
    iVar4 = *(int *)(lVar1 + 0x10 + lVar5);
    lVar3 = *(longlong *)(lVar1 + 8 + lVar5);
    if (iVar4 != 0) {
      pcVar2 = (char *)(lVar3 + 0xc);
      do {
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
        }
        pcVar2 = pcVar2 + 0x18;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar3 = *(longlong *)(lVar1 + 8 + lVar5);
    }
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar10,1);
    return 1;
  }
  if (iVar4 == iVar10) {
    *piVar6 = *(int *)(lVar5 + lVar1 + 0x18);
    goto LAB_143011710;
  }
  piVar6 = (int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
  iVar4 = *piVar6;
  goto joined_r0x0001430116e7;
}



// FUNCTION 143011780 FUN_143011780 body=301 status=ok
// SIG undefined FUN_143011780(void)

void FUN_143011780(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar6 = param_1;
    }
    plVar7 = (longlong *)(lVar6 + 8 + (longlong)param_2 * 0x10);
    iVar5 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar7 = plVar7 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x108);
    iVar4 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    if (iVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(iVar5 - iVar4) * 0x10 + lVar6),(longlong)iVar4 << 4);
      iVar5 = *(int *)(param_1 + 0x108);
    }
    *(int *)(param_1 + 0x108) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1430118b0 FUN_1430118b0 body=557 status=ok
// SIG undefined FUN_1430118b0(void)

void FUN_1430118b0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res10;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38 [4];
  
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     ((iVar2 = FUN_14233f450(), iVar2 == 3 || ((*(byte *)(param_1 + 0xb8) & 8) == 0)))) {
    lVar8 = *(longlong *)(param_1 + 0x228);
    lVar3 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar8;
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x40) {
      plVar6 = *(longlong **)(lVar8 + 0x20);
      if (plVar6 == param_2) {
        uVar4 = FUN_14301f8f0();
        lVar3 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
        if (lVar3 == 0) {
          return;
        }
        local_res10 = param_3;
        iVar2 = FUN_14233f450(lVar3);
        if (iVar2 != 3) {
          return;
        }
        plVar7 = *(longlong **)(lVar3 + 0x250);
        plVar6 = plVar7 + *(int *)(lVar3 + 600);
        while( true ) {
          if (plVar7 == plVar6) {
            return;
          }
          if (*plVar7 == param_3) break;
          plVar7 = plVar7 + 1;
        }
        _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
        FUN_142ff3000(lVar3,local_88);
        TArray<FName,FDefaultAllocator>::Remove(local_38,&local_res10);
        cVar1 = FUN_143003610(local_88);
        if (cVar1 != '\0') {
          lVar5 = *(longlong *)(lVar3 + 0x120);
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(lVar3);
          }
          plVar6 = (longlong *)FUN_143019ed0(lVar5,local_88,1,0);
          if (plVar6 != (longlong *)0x0) {
            uVar4 = FUN_14301f8f0();
            lVar3 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
            if (lVar3 != 0) {
              if (local_38[0] != 0) {
                FMemory::Free();
              }
              if (local_48 != 0) {
                FMemory::Free();
              }
              if (local_58 != 0) {
                FMemory::Free();
              }
              if (local_68 != 0) {
                FMemory::Free();
              }
              if (*(longlong *)(lVar3 + 0x118) == 0) {
                return;
              }
              FUN_142feb6c0(param_1,lVar8);
              return;
            }
          }
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        if (local_68 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143011ae0 FUN_143011ae0 body=271 status=ok
// SIG undefined FUN_143011ae0(void)

void FUN_143011ae0(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  
  iVar3 = FUN_14233f450();
  if ((((iVar3 == 3) || ((*(byte *)(param_1 + 0xb8) & 8) == 0)) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x230))) {
    FUN_143003f20(param_1);
    plVar1 = (longlong *)(param_1 + 0x228);
    lVar2 = *plVar1;
    lVar6 = (longlong)param_2 * 0x40;
    if ((*(byte *)(lVar6 + 0x29 + lVar2) & 8) == 0) {
      cVar5 = *(char *)(lVar6 + 0x34 + lVar2);
    }
    else {
      cVar5 = '\0';
    }
    if ((param_3 != '\0') && (lVar2 = *(longlong *)(lVar6 + 0x20 + lVar2), lVar2 != 0)) {
      FUN_142227350(lVar2,0,1);
    }
    iVar3 = *(int *)(param_1 + 0x230);
    iVar4 = (iVar3 - param_2) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + *plVar1),(void *)((longlong)(param_2 + 1) * 0x40 + *plVar1),
                 (longlong)iVar4 << 6);
      iVar3 = *(int *)(param_1 + 0x230);
    }
    *(int *)(param_1 + 0x230) = iVar3 + -1;
    TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
    *(undefined1 *)(param_1 + 0x368) = 1;
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2c0);
    if (cVar5 != '\0') {
      FUN_142fe9980(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143011bf0 FUN_143011bf0 body=367 status=ok
// SIG undefined FUN_143011bf0(void)

void FUN_143011bf0(longlong *param_1,int *param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 local_28 [4];
  
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) && (*param_2 != -1)) {
    iVar2 = 0;
    while ((-1 < iVar2 && (iVar2 < (int)param_1[0x46]))) {
      lVar1 = param_1[0x45];
      lVar5 = (longlong)iVar2 * 0x40;
      if (*(int *)(lVar5 + 0xc + lVar1) == *param_2) {
        if (param_4 != '\0') {
LAB_143011d20:
          (**(code **)(*param_1 + 0x498))(param_1,lVar5 + lVar1);
          FUN_143011ae0(param_1,iVar2,param_4);
          goto LAB_143011d3a;
        }
        iVar3 = *(int *)(lVar5 + 0x18 + lVar1);
        if (iVar3 < param_3 + 1) goto LAB_143011d20;
        iVar3 = iVar3 - param_3;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        *(int *)(lVar5 + lVar1 + 0x18) = iVar3;
        local_28[0] = *(undefined4 *)(param_1[0x45] + 0xc + lVar5);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x5f,local_28);
        (**(code **)(*param_1 + 0x260))(param_1);
        piVar4 = (int *)(param_1[0x45] + lVar5);
        if (*piVar4 == -1) {
          *(int *)(param_1 + 0x39) = (int)param_1[0x39] + 1;
          *piVar4 = (int)param_1[0x39];
          iVar3 = (int)param_1[0x39];
          if (iVar3 == -1) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x39) = iVar3;
        }
        piVar4[1] = piVar4[1] + 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1 + 0x2f);
        *(int *)((longlong)param_1 + 0x1cc) = *(int *)((longlong)param_1 + 0x1cc) + 1;
        if (*(int *)((longlong)param_1 + 0x1cc) == -1) {
          *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
        }
        param_1[0x44] = -1;
        iVar2 = iVar2 + 1;
      }
      else {
LAB_143011d3a:
        iVar2 = iVar2 + 1;
      }
    }
  }
  return;
}



// FUNCTION 143011d60 FUN_143011d60 body=342 status=ok
// SIG undefined FUN_143011d60(void)

void FUN_143011d60(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0xc);
    uVar7 = 0;
    uVar6 = uVar7;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar8;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    if ((((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) && (iVar4 = FUN_14233f450(param_1), iVar4 == 3))
       && (0 < *(int *)(param_1 + 0x1f8))) {
      lVar2 = *(longlong *)(param_1 + 0x1f0);
      uVar6 = uVar7;
      do {
        iVar4 = (int)uVar6;
        if (*(longlong *)(lVar2 + uVar7 * 8) == param_2) {
          iVar1 = *(int *)(param_1 + 0x1f8);
          iVar5 = (iVar1 - iVar4) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar4 * 8),
                       (void *)(lVar2 + (longlong)(iVar4 + 1) * 8),(longlong)iVar5 << 3);
            iVar1 = *(int *)(param_1 + 0x1f8);
          }
          *(int *)(param_1 + 0x1f8) = iVar1 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x1f0);
          local_10 = *(undefined8 *)(param_2 + 0x478);
          local_18 = param_2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x188,&local_18);
          if (*(int *)(param_1 + 0x1f8) != 0) {
            return;
          }
          local_10 = *(undefined8 *)(param_2 + 0x478);
          local_18 = param_2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x198,&local_18);
          return;
        }
        uVar6 = (ulonglong)(iVar4 + 1);
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x1f8));
    }
  }
  return;
}



// FUNCTION 143011ec0 FUN_143011ec0 body=239 status=ok
// SIG undefined FUN_143011ec0(void)

void FUN_143011ec0(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res20 [2];
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) {
    iVar1 = FUN_142ffe220(param_1,param_3);
    if ((-1 < iVar1) && (iVar1 < (int)param_1[0x46])) {
      lVar3 = (longlong)iVar1 * 0x40;
      iVar2 = *(int *)(param_1[0x45] + lVar3 + 0x18);
      if (iVar2 < param_2 + 1) {
        (**(code **)(*param_1 + 0x498))(param_1);
        FUN_143011ae0(param_1,iVar1,0);
      }
      else {
        iVar2 = iVar2 - param_2;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        *(int *)(param_1[0x45] + lVar3 + 0x18) = iVar2;
        local_res20[0] = *(undefined4 *)(param_1[0x45] + 0xc + lVar3);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x5f,local_res20);
        (**(code **)(*param_1 + 0x260))(param_1);
        FFastArraySerializer::MarkItemDirty(param_1 + 0x2f,param_1[0x45] + lVar3);
      }
    }
  }
  return;
}



// FUNCTION 143011fc0 FUN_143011fc0 body=745 status=ok
// SIG undefined FUN_143011fc0(void)

void FUN_143011fc0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x248);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x270);
  puStack_38 = (uint *)(param_1 + 600);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)(param_1 + 0x268);
    if (*(uint **)(param_1 + 0x268) == (uint *)0x0) {
      puVar14 = puStack_38;
    }
    uVar10 = *puVar14;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar10 == 0) {
      lVar7 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar10 = local_88 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar10;
      if (bVar3) goto LAB_143012091;
      uVar10 = puVar14[lVar7 + 1];
    }
    uStack_84 = -uVar10 & uVar10;
    iVar4 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_143012091:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x270);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar3) {
    do {
      lVar7 = -1;
      lVar6 = 0;
      lVar15 = -1;
      lVar13 = -1;
      if (0 < (int)*(uint *)(param_1 + 0x230)) {
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x230);
        piVar11 = (int *)(*(longlong *)(param_1 + 0x228) + 0xc);
        lVar12 = lVar7;
        do {
          lVar7 = lVar12;
          if ((((*(longlong *)(piVar11 + 1) != 0) &&
               (plVar8 = (longlong *)((longlong)iStack_6c * 0x20 + *plVar1),
               *(longlong *)(piVar11 + 1) == *plVar8)) &&
              (lVar7 = lVar6, (int)plVar8[2] != *piVar11)) &&
             (lVar7 = lVar12, (*(byte *)((longlong)piVar11 + 0x1d) & 4) == 0)) {
            if (lVar12 == -1) {
              if (lVar15 == -1) {
                lVar15 = lVar6;
              }
            }
            else if (lVar13 == -1) {
              lVar13 = lVar6;
            }
          }
          lVar6 = lVar6 + 1;
          piVar11 = piVar11 + 0x10;
          uVar9 = uVar9 - 1;
          lVar12 = lVar7;
        } while (uVar9 != 0);
      }
      if (*param_2 == -1) {
LAB_1430121ef:
        lVar6 = (longlong)iStack_6c * 0x20;
        if (lVar7 == -1) {
          if (lVar15 == -1) {
            *(undefined4 *)(*plVar1 + 0x10 + lVar6) = 0xffffffff;
            goto LAB_143012236;
          }
          uVar5 = *(undefined4 *)(lVar15 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
        }
        else {
          uVar5 = *(undefined4 *)(lVar7 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
        }
        *(undefined4 *)(*plVar1 + 0x10 + lVar6) = uVar5;
      }
      else {
        lVar6 = (longlong)iStack_6c * 0x20;
        lVar12 = *plVar1 + lVar6;
        if (*(int *)(lVar12 + 0x10) != *param_2) goto LAB_1430121ef;
        if (lVar13 == -1) {
          if (lVar15 == -1) {
            *(undefined4 *)(lVar12 + 0x10) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar12 + 0x10) =
                 *(undefined4 *)(lVar15 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
          }
        }
        else {
          *(undefined4 *)(lVar12 + 0x10) =
               *(undefined4 *)(lVar13 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
        }
      }
LAB_143012236:
      *(undefined4 *)(*plVar1 + 8 + lVar6) = 0xffffffff;
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1430122b0 FUN_1430122b0 body=245 status=ok
// SIG undefined FUN_1430122b0(void)

void FUN_1430122b0(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      uVar2 = 0x40;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 6,0);
      uVar2 = (uint)(uVar3 >> 6);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 == *(uint *)((longlong)param_1 + 0x100c)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x1008);
  *(uint *)((longlong)param_1 + 0x100c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x1000);
  if (uVar2 < 0x41) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)iVar1 << 6);
    pvVar4 = *(void **)((longlong)param_1 + 0x1000);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 6,0);
        *(void **)((longlong)param_1 + 0x1000) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)iVar1 << 6);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 6;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x1000) = uVar5;
  return;
}



// FUNCTION 1430123b0 FUN_1430123b0 body=514 status=ok
// SIG undefined FUN_1430123b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430123b0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  int local_f0 [2];
  float local_e8 [2];
  undefined1 local_e0 [8];
  longlong **local_d8;
  float *local_d0;
  float local_c8;
  char local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  *param_4 = *param_2;
  *param_5 = param_2[1];
  if (0 < (int)param_2[10]) {
    local_c8 = 0.0;
    local_c0 = 0;
    local_b8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_c4 = '\0';
    local_90 = 0xffffffff;
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(&local_c0);
    plVar4 = (longlong *)param_2[9];
    plVar1 = plVar4 + (longlong)(int)param_2[10] * 9;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 9) {
      local_f8 = plVar4;
      fVar5 = (float)FUN_142c98860(plVar4 + 2,param_3);
      local_e8[0] = fVar5;
      if ((1e-08 < fVar5) || (local_c4 != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_c0,local_f0,local_f8);
        pfVar3 = (float *)0x0;
        if (local_f0[0] != -1) {
          pfVar3 = (float *)(local_c0 + (longlong)local_f0[0] * 0x18);
        }
        pfVar2 = pfVar3 + 2;
        if (pfVar3 == (float *)0x0) {
          pfVar2 = (float *)0x0;
        }
        if (pfVar2 != (float *)0x0) {
          local_c8 = local_c8 - *pfVar2;
        }
        local_c8 = local_c8 + fVar5;
        local_d8 = &local_f8;
        local_d0 = local_e8;
        TSet<TTuple<FFlareResourceDescription_*,float>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,float,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,float_const_&>_>
                  (&local_c0,local_e0,&local_d8,0);
      }
    }
    local_f8 = (longlong *)0x0;
    FUN_1407436b0(&local_c8,&local_f8,0xbf800000);
    if (local_f8 != (longlong *)0x0) {
      if (*local_f8 != 0) {
        *param_4 = *local_f8;
      }
      plVar1 = local_f8 + 1;
      local_f8 = (longlong *)0x0;
      if (*plVar1 != 0) {
        *param_5 = *plVar1;
      }
    }
    local_78 = 0;
    if (local_80 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c0);
  }
  return;
}



// FUNCTION 1430125c0 FUN_1430125c0 body=1441 status=ok
// SIG undefined FUN_1430125c0(void)

void FUN_1430125c0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 local_res20;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  void *local_c0;
  int local_b8;
  int local_b4;
  longlong local_b0 [2];
  undefined2 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_78;
  
  if (param_2 == 0) {
    return;
  }
  iVar6 = FUN_14233f450();
  if (iVar6 < 3) {
    return;
  }
  plVar8 = *(longlong **)(param_1 + 0x208);
  if ((plVar8 == (longlong *)0x0) || (plVar15 = plVar8, *(char *)(param_1 + 0x210) != '\0')) {
    plVar15 = *(longlong **)(param_1 + 0x118);
  }
  local_108 = plVar15;
  if (plVar8 != (longlong *)0x0) {
    FUN_142dfdf30();
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))();
    if (plVar8 != (longlong *)0x0) {
      local_res20 = (**(code **)(*plVar8 + 0x400))();
      goto LAB_1430126b3;
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 != (longlong *)0x0) {
    FUN_142dfdf30();
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))();
    if (plVar8 != (longlong *)0x0) {
      local_res20 = (**(code **)(*plVar8 + 0x400))();
      goto LAB_1430126b3;
    }
  }
  local_res20 = 1;
LAB_1430126b3:
  lVar14 = *(longlong *)(param_2 + 0x48);
  iVar6 = 0;
  local_120._4_4_ = 0;
  local_128 = (undefined8 *)0x0;
  local_78 = (longlong)*(int *)(param_2 + 0x50) * 0x58 + lVar14;
  local_120 = 0;
  if (lVar14 == local_78) {
LAB_143012aef:
    if (iVar6 != 0) {
      plVar8 = local_128 + 7;
      do {
        if (plVar8[2] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar8 + -3);
        plVar8 = plVar8 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_128 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    return;
  }
  do {
    if (local_120._4_4_ < 0) {
      iVar11 = local_120._4_4_;
      if (iVar6 != 0) {
        plVar8 = local_128 + 7;
        do {
          if (plVar8[2] != 0) {
            FMemory::Free();
          }
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar8 + -3);
          plVar8 = plVar8 + 0xc;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar11 = local_120._4_4_;
      }
      local_120 = local_120 & 0xffffffff00000000;
      if (iVar11 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(&local_128,0);
      }
    }
    else {
      if (iVar6 != 0) {
        plVar8 = local_128 + 7;
        do {
          if (plVar8[2] != 0) {
            FMemory::Free();
          }
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar8 + -3);
          plVar8 = plVar8 + 0xc;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_120 = local_120 & 0xffffffff00000000;
    }
    cVar5 = FUN_143012ee0(lVar14,plVar15);
    if (cVar5 == '\0') {
LAB_143012aba:
      iVar6 = (int)local_120;
    }
    else {
      local_110 = 0;
      local_118 = 0;
      FUN_1430123b0(param_1,lVar14,plVar15,&local_110,&local_118);
      if (*(longlong *)(param_2 + 8) != 0) {
        lVar9 = UAnimNotifyState::GetPrivateStaticClass();
        lVar13 = *(longlong *)(param_2 + 8);
        for (lVar2 = lVar13; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar9) {
            if (lVar13 != 0) goto LAB_14301282d;
            break;
          }
        }
      }
      lVar13 = 0;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x50);
      }
LAB_14301282d:
      uVar10 = FUN_142cc0880();
      uVar7 = FUN_142cc1350(uVar10);
      plVar8 = plVar15;
      FUN_1430141a0(&local_128,local_110,local_res20,uVar7,plVar15,lVar13,0x3f800000,0,0);
      iVar6 = (int)local_120;
      if (0 < (int)local_120) {
        _guard_xfg_dispatch_icall_nop(&local_f8,0,0x60);
        puVar4 = local_128;
        local_a0 = 1;
        local_98 = 0;
        local_90 = 0;
        local_f8 = *local_128;
        plVar15 = local_128 + 4;
        local_f0 = local_128[1];
        local_e8 = local_128[2];
        local_e0 = *(undefined4 *)(local_128 + 3);
        local_88 = 0;
        if (&local_d8 != plVar15) {
          if (local_d0 != 0) {
            plVar12 = (longlong *)(local_d8 + 8);
            iVar6 = local_d0;
            do {
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              plVar12 = plVar12 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          FUN_140a9c490(&local_d8,*plVar15,*(undefined4 *)(puVar4 + 5),local_cc,
                        (ulonglong)plVar8 & 0xffffffff00000000);
        }
        local_c8 = *(undefined1 *)(puVar4 + 6);
        if (&local_c0 != (void **)(puVar4 + 7)) {
          local_b8 = *(int *)(puVar4 + 8);
          lVar13 = (longlong)local_b8;
          _Src = (void *)puVar4[7];
          if ((local_b8 == 0) && (local_b4 == 0)) {
            local_b4 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_c0,local_b8);
            _guard_xfg_dispatch_icall_nop(local_c0,_Src,lVar13 << 3);
          }
        }
        TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(local_b0,puVar4 + 9);
        uVar10 = local_118;
        local_a0 = *(undefined2 *)(puVar4 + 0xb);
        local_98 = local_118;
        if (*(longlong *)(param_1 + 0x118) == 0) {
          local_90 = 0;
        }
        else {
          local_90 = FUN_14222b250(*(longlong *)(param_1 + 0x118),local_118,0);
        }
        lVar13 = local_90;
        uVar1 = *(undefined1 *)(param_1 + 0x1b4);
        local_88 = uVar1;
        if (local_90 != 0) {
          lVar9 = FUN_142a0cc80();
          lVar2 = *(longlong *)(lVar13 + 0x10);
          if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
              lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (lVar13 = FUN_1423b0a60(lVar13,uVar10), lVar13 != 0)) {
            if ((0.0001 < ABS(*(float *)(lVar13 + 0x60))) ||
               ((0.0001 < ABS(*(float *)(lVar13 + 100)) || (0.0001 < ABS(*(float *)(lVar13 + 0x68)))
                ))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            local_88 = uVar1;
            if (!bVar3) {
              local_88 = 2;
            }
          }
        }
        iVar6 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
          TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                    (param_3,iVar6);
        }
        lVar13 = (longlong)iVar6 * 0x78 + *param_3;
        FUN_1409f3dd0(lVar13,&local_f8);
        *(undefined8 *)(lVar13 + 0x60) = local_98;
        *(longlong *)(lVar13 + 0x68) = local_90;
        *(undefined1 *)(lVar13 + 0x70) = local_88;
        if (local_b0[0] != 0) {
          FMemory::Free();
        }
        if (local_c0 != (void *)0x0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (&local_d8);
        plVar15 = local_108;
        goto LAB_143012aba;
      }
    }
    lVar14 = lVar14 + 0x58;
    if (lVar14 == local_78) goto LAB_143012aef;
  } while( true );
}



// FUNCTION 143012b70 FUN_143012b70 body=747 status=ok
// SIG undefined FUN_143012b70(void)

void FUN_143012b70(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = FUN_14233f450();
  if (iVar4 < 3) {
    return;
  }
  plVar7 = *(longlong **)(param_1 + 0x208);
  if ((plVar7 == (longlong *)0x0) || (plVar13 = plVar7, *(char *)(param_1 + 0x210) != '\0')) {
    plVar13 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_142dfdf30();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))();
    if (plVar7 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x400))();
      goto LAB_143012c53;
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x118);
  if (plVar7 != (longlong *)0x0) {
    FUN_142dfdf30();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))();
    if (plVar7 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x400))();
      goto LAB_143012c53;
    }
  }
  uVar5 = 1;
LAB_143012c53:
  puVar10 = *(undefined8 **)(param_2 + 0x48);
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_48 = 0;
  puVar12 = puVar10 + (longlong)*(int *)(param_2 + 0x50) * 0xb;
  local_40 = 0;
  if (puVar10 == puVar12) {
LAB_143012de2:
    if ((int)local_40 != 0) {
      plVar7 = (longlong *)(local_48 + 0x38);
      iVar4 = (int)local_40;
      do {
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar7 + -3);
        plVar7 = plVar7 + 0xc;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    return;
  }
  do {
    if (local_40._4_4_ < 0) {
      iVar4 = local_40._4_4_;
      if ((int)local_40 != 0) {
        plVar7 = (longlong *)(local_48 + 0x38);
        iVar4 = (int)local_40;
        do {
          if (plVar7[2] != 0) {
            FMemory::Free();
          }
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar7 + -3);
          plVar7 = plVar7 + 0xc;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = local_40._4_4_;
      }
      local_40 = local_40 & 0xffffffff00000000;
      if (iVar4 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(&local_48,0);
      }
    }
    else {
      if ((int)local_40 != 0) {
        plVar7 = (longlong *)(local_48 + 0x38);
        iVar4 = (int)local_40;
        do {
          if (plVar7[2] != 0) {
            FMemory::Free();
          }
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar7 + -3);
          plVar7 = plVar7 + 0xc;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_40 = local_40 & 0xffffffff00000000;
    }
    cVar3 = FUN_143012ee0(puVar10,plVar13);
    if (cVar3 != '\0') {
      if (*(longlong *)(param_2 + 8) != 0) {
        lVar8 = UAnimNotifyState::GetPrivateStaticClass();
        lVar11 = *(longlong *)(param_2 + 8);
        for (lVar1 = lVar11; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar8) {
            if (lVar11 != 0) goto LAB_143012d6f;
            break;
          }
        }
      }
      lVar11 = 0;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x50);
      }
LAB_143012d6f:
      uVar2 = *puVar10;
      uVar9 = FUN_142cc0880();
      uVar6 = FUN_142cc1350(uVar9);
      FUN_1430141a0(&local_48,uVar2,uVar5,uVar6,plVar13,lVar11,0x3f800000,0,0);
      FUN_140b47c00(param_3,&local_48);
    }
    puVar10 = puVar10 + 0xb;
    if (puVar10 == puVar12) goto LAB_143012de2;
  } while( true );
}



// FUNCTION 143012e60 FUN_143012e60 body=127 status=ok
// SIG undefined FUN_143012e60(void)

void FUN_143012e60(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((0.0 < *(float *)(param_1 + 0xc3)) && ((*(byte *)((longlong)param_1 + 0x94) & 2) == 0)) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      (**(code **)(*param_1 + 0x3a0))(param_1);
      *(undefined4 *)(param_1 + 0xc3) = 0;
    }
  }
  return;
}



// FUNCTION 143012ee0 FUN_143012ee0 body=146 status=ok
// SIG undefined FUN_143012ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143012ee0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar1 = rand();
  uVar2 = FUN_142caac20(param_1 + 0x10,local_48,param_2);
  FUN_142cc4350(uVar2,0);
  if ((extraout_XMM0_Da <= 0.0) || (extraout_XMM0_Da < (float)iVar1 * 3.051851e-05)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143012f80 FUN_143012f80 body=199 status=ok
// SIG undefined FUN_143012f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143012f80(uint param_1,void *param_2,uint param_3)

{
  ulonglong _Size;
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *_Dst;
  ulonglong _Size_00;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  puVar2 = auStack_48;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_28;
  _Size = (ulonglong)param_1 % (ulonglong)param_3;
  _Size_00 = (ulonglong)(param_3 - (int)_Size);
  if (param_3 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    uVar1 = (ulonglong)(param_3 + 0xf) + 0xf;
    if (uVar1 <= param_3 + 0xf) {
      uVar1 = 0xffffffffffffff0;
    }
    puVar2 = auStack_48 + -(uVar1 & 0xfffffffffffffff0);
    _Dst = auStack_20 + -(uVar1 & 0xfffffffffffffff0);
  }
  *(undefined8 *)(puVar2 + -8) = 0x143013008;
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)(_Size_00 + (longlong)param_2),_Size);
  *(undefined8 *)(puVar2 + -8) = 0x143013017;
  _guard_xfg_dispatch_icall_nop(_Dst + _Size,param_2,_Size_00);
  *(undefined8 *)(puVar2 + -8) = 0x143013025;
  _guard_xfg_dispatch_icall_nop(param_2,_Dst,(ulonglong)param_3);
  *(undefined8 *)(puVar2 + -8) = 0x143013031;
  return;
}



// FUNCTION 143013050 FUN_143013050 body=195 status=ok
// SIG undefined FUN_143013050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143013050(uint param_1,void *param_2,uint param_3)

{
  ulonglong _Size;
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *_Dst;
  ulonglong _Size_00;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  puVar2 = auStack_48;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_28;
  _Size = (ulonglong)param_1 % (ulonglong)param_3;
  _Size_00 = (ulonglong)(param_3 - (int)_Size);
  if (param_3 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    uVar1 = (ulonglong)(param_3 + 0xf) + 0xf;
    if (uVar1 <= param_3 + 0xf) {
      uVar1 = 0xffffffffffffff0;
    }
    puVar2 = auStack_48 + -(uVar1 & 0xfffffffffffffff0);
    _Dst = auStack_20 + -(uVar1 & 0xfffffffffffffff0);
  }
  *(undefined8 *)(puVar2 + -8) = 0x1430130d4;
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)(_Size + (longlong)param_2),_Size_00);
  *(undefined8 *)(puVar2 + -8) = 0x1430130e3;
  _guard_xfg_dispatch_icall_nop(_Dst + _Size_00,param_2,_Size);
  *(undefined8 *)(puVar2 + -8) = 0x1430130f1;
  _guard_xfg_dispatch_icall_nop(param_2,_Dst,(ulonglong)param_3);
  *(undefined8 *)(puVar2 + -8) = 0x1430130fd;
  return;
}



// FUNCTION 143013120 FUN_143013120 body=351 status=ok
// SIG undefined FUN_143013120(void)

void FUN_143013120(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_1[0xbb] != 0) {
    lVar5 = FUN_142e20fc0();
    for (lVar7 = param_1[0xbb]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if ((param_1[0xbb] != 0) && ((char)param_1[0x25] == '\x03')) {
          (**(code **)(*param_1 + 0x600))(param_1);
          param_1[0xbc] = param_1[0xbb];
        }
        break;
      }
    }
  }
  uVar6 = FUN_142e27720();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  if (lVar7 == 0) {
    lVar7 = FUN_140f57ec0(param_1);
    if (lVar7 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x630))(param_1,lVar7);
    FUN_14234b150(lVar7);
  }
  if (param_1[0xbb] != 0) {
    lVar8 = FUN_142e20fc0();
    lVar5 = param_1[0xbb];
    lVar9 = lVar5;
    if (lVar5 != 0) {
      while (lVar9 != lVar8) {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        if (lVar9 == 0) {
          return;
        }
      }
      if (((lVar5 != 0) && (cVar4 = (**(code **)(*param_1 + 0x720))(param_1), cVar4 != '\0')) &&
         (FUN_142c7bc00(lVar7,local_18,param_1[0xbb],2), local_10 != (longlong *)0x0)) {
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
    }
  }
  return;
}



// FUNCTION 143013280 FUN_143013280 body=1706 status=ok
// SIG undefined FUN_143013280(void)

void FUN_143013280(longlong *param_1,longlong param_2,float param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  longlong *local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  longlong local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [4];
  float local_114;
  undefined1 local_110 [4];
  float local_10c;
  undefined1 local_108 [8];
  longlong *local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  
  if ((param_4 != '\x01') ||
     (((9.999999747378752e-05 < (double)param_1[0x66] ||
        (double)param_1[0x66] == 9.999999747378752e-05 || (0.0 <= param_3)) &&
      (((char)param_1[0x6d] == '\0' || (param_3 <= 0.0)))))) {
    dVar14 = (double)param_1[0x66];
    fVar15 = ABS(param_3);
    iVar12 = (int)dVar14;
    if ((dVar14 == 0.0) && ((char)param_1[0x6d] != '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((param_4 == '\0') &&
       (cVar6 = FOverscroll::ShouldApplyOverscroll
                          ((longlong)param_1 + 0x414,dVar14 == 0.0,(char)param_1[0x6d],param_3),
       cVar6 != '\0')) {
      if (param_3 <= 0.0) {
        if (0.0 <= param_3) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = -fVar15;
        }
      }
      fVar15 = (float)FOverscroll::ScrollBy((longlong)param_1 + 0x414,param_2,fVar15);
      if (fVar15 != 0.0) {
        FUN_1419bb590(param_1);
      }
    }
    else if (!bVar4) {
      plVar3 = (longlong *)param_1[0xb5];
      if (((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[1])) &&
         (uVar2 = *(undefined4 *)(param_2 + 8), param_3 != 0.0)) {
        local_140 = (longlong)iVar12 * 8;
        do {
          if (((int)plVar3[1] <= iVar12) || (iVar12 < 0)) break;
          local_148 = *(undefined4 *)(local_140 + *plVar3);
          uStack_144 = *(undefined4 *)(local_140 + 4 + *plVar3);
          FUN_142fffff0(param_1 + 0x85,&local_158,&local_148);
          plVar10 = plStack_150;
          plVar11 = local_158;
          if (local_158 == (longlong *)0x0) {
            local_128 = CONCAT44(uStack_144,local_148);
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_108,&local_128);
            local_130 = (longlong *)puVar7[1];
            local_158 = (longlong *)*puVar7;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_130 + 1) = (int)local_130[1] + 1;
              UNLOCK();
            }
            local_138 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_150,&local_130);
            plVar10 = local_130;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_130 + 1;
              lVar8 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_130 + 8))(local_130,1);
                }
              }
            }
            plVar10 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_100 + 1;
              lVar8 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
            plVar11 = local_158;
            (**(code **)(*local_158 + 0x10))(local_158,iVar12);
            plVar10 = plStack_150;
            local_f8 = local_158;
            plStack_f0 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
              UNLOCK();
              plVar11 = local_158;
            }
            local_120 = CONCAT44(uStack_144,local_148);
            FUN_143005e60(param_1 + 0x85,&local_120,&local_f8);
            puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_e8);
            FUN_14185c5d0(*puVar7,uVar2);
            plVar5 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_e0 + 1;
              lVar8 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              plVar10 = plStack_150;
              plVar11 = local_158;
              if ((int)lVar8 == 1) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar10 = plStack_150;
                plVar11 = local_158;
                if (iVar9 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                  plVar10 = plStack_150;
                  plVar11 = local_158;
                }
              }
            }
          }
          if (param_3 <= 0.0) {
            puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_c8);
            SWidget::GetDesiredSize(*puVar7,local_110);
            plVar11 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_c0 + 1;
              lVar8 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              plVar10 = plStack_150;
              if ((int)lVar8 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar10 = plStack_150;
                if (iVar9 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                  plVar10 = plStack_150;
                }
              }
            }
            fVar13 = (float)dVar14 - (float)(int)dVar14;
            if (fVar13 == 0.0) {
              fVar13 = 1.0;
              dVar14 = dVar14 + -1.0;
            }
            fVar13 = local_10c * fVar13;
            if (fVar15 <= fVar13) {
              if (fVar15 == fVar13) {
                dVar14 = dVar14 + (double)-((float)dVar14 - (float)(int)dVar14);
              }
              else {
                dVar14 = (double)((fVar13 - fVar15) / local_10c + (float)(int)dVar14);
              }
            }
            else {
              if (iVar12 != 0) {
                iVar9 = -1;
                lVar8 = -8;
                dVar14 = dVar14 + (double)-((float)dVar14 - (float)(int)dVar14);
                goto LAB_14301378b;
              }
              dVar14 = 0.0;
            }
LAB_143013878:
            plVar3 = plStack_150;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar10 + 1;
              lVar8 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_150 + 8))(plStack_150,1);
                }
              }
            }
            break;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
          SWidget::GetDesiredSize(*puVar7,local_118);
          plVar11 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_d0 + 1;
            lVar8 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            plVar10 = plStack_150;
            if ((int)lVar8 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar10 = plStack_150;
              if (iVar9 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
                plVar10 = plStack_150;
              }
            }
          }
          fVar13 = (1.0 - ((float)dVar14 - (float)(int)dVar14)) * local_114;
          if (fVar15 <= fVar13) {
            if (fVar15 == fVar13) {
              dVar14 = (double)((float)(int)dVar14 + 1.0);
            }
            else {
              dVar14 = (double)((1.0 - (fVar13 - fVar15) / local_114) + (float)(int)dVar14);
            }
            goto LAB_143013878;
          }
          if (iVar12 == (int)plVar3[1]) {
            dVar14 = (double)(int)plVar3[1];
            goto LAB_143013878;
          }
          lVar8 = 8;
          iVar9 = 1;
          dVar14 = (double)((float)(int)dVar14 + 1.0);
LAB_14301378b:
          plVar11 = plStack_150;
          fVar15 = fVar15 - fVar13;
          iVar12 = iVar12 + iVar9;
          local_140 = local_140 + lVar8;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar10 + 1;
            lVar8 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_150)(plStack_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plStack_150 + 8))(plStack_150,1);
              }
            }
          }
        } while (fVar15 != 0.0);
      }
      (**(code **)(*param_1 + 0x220))(param_1,(float)dVar14);
    }
  }
  return;
}



// FUNCTION 143013930 FUN_143013930 body=402 status=ok
// SIG undefined FUN_143013930(void)

undefined8 FUN_143013930(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar1 = param_1 + 0xb6;
  cVar6 = FWeakObjectPtr::IsValid(plVar1);
  if ((cVar6 != '\0') && (plVar2 = (longlong *)param_1[0xb5], plVar2 != (longlong *)0x0)) {
    local_res8 = (undefined4)*plVar1;
    local_resc = *(undefined4 *)((longlong)param_1 + 0x5b4);
    lVar3 = *plVar2;
    lVar5 = plVar2[1];
    for (lVar8 = lVar3; lVar8 != lVar3 + (longlong)(int)lVar5 * 8; lVar8 = lVar8 + 8) {
      cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar8,&local_res8);
      if (cVar6 != '\0') {
        iVar7 = (int)(lVar8 - lVar3 >> 3);
        if (iVar7 != -1) {
          fVar9 = (float)(**(code **)(*param_1 + 0x228))(param_1);
          dVar4 = (double)fVar9;
          if (((dVar4 == 0.0) && (cVar6 = FUN_1419b3db0(param_1), cVar6 != '\0')) &&
             (dVar4 = (double)param_1[0x6b], dVar4 == 0.0)) {
            return 1;
          }
          ARacingGameState::GetMeanAbsError(param_1);
          if (((double)iVar7 < (double)param_1[0x66]) ||
             ((double)param_1[0x66] + dVar4 < (double)(iVar7 + 1))) {
            dVar11 = (double)iVar7 - dVar4 * 0.5;
            dVar10 = (double)(iVar7 + 1) - (dVar11 + dVar4);
            dVar4 = 0.0;
            if ((0.0 <= dVar10) && (dVar4 = dVar10, 3.4028234663852886e+38 <= dVar10)) {
              dVar4 = 3.4028234663852886e+38;
            }
            STableViewBase::SetScrollOffset(param_1,(float)(dVar4 + dVar11));
          }
          FUN_1419bb590(param_1);
          *(int *)((longlong)param_1 + 0x5bc) = (int)*plVar1;
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((longlong)param_1 + 0x5b4);
        }
        break;
      }
    }
    *(undefined4 *)plVar1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
  }
  return 0;
}



// FUNCTION 143013ad0 FUN_143013ad0 body=114 status=ok
// SIG undefined FUN_143013ad0(void)

void FUN_143013ad0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142cc0880();
  if (param_6 == '\0') {
    FUN_142cc1350(uVar1);
  }
  else {
    FUN_142cc2730();
  }
  FUN_143013b50(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143013b50 FUN_143013b50 body=1168 status=ok
// SIG undefined FUN_143013b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143013b50(longlong *param_1,longlong param_2,uint param_3,int param_4,int param_5,
                       undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  float *pfStack_190;
  int local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178 [2];
  float local_170 [2];
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [8];
  ulonglong local_150;
  longlong *local_148;
  undefined8 uStack_140;
  float *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong lStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  longlong lStack_f8;
  float *pfStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float local_d8;
  char local_d4;
  longlong local_d0 [2];
  float local_c0 [4];
  float *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_90;
  undefined4 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_150 = param_7;
  uVar13 = (ulonglong)param_3;
  if (param_2 == 0) {
    param_7 = param_7 & 0xffffffffffffff00;
  }
  else {
    local_d8 = 0.0;
    local_d4 = '\0';
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_b0 = (float *)0x0;
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_9c = 0;
    local_90 = 0;
    local_88 = 0;
    local_168 = 0;
    local_160 = 0;
    if (param_5 < 1) {
      uVar7 = FUN_142cc0880();
      param_5 = FUN_142cc1350(uVar7);
    }
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    iVar4 = FUN_142ff6b30(param_2,param_6,param_5,&local_168);
    lVar15 = local_168;
    if (0 < iVar4) {
      lVar14 = (longlong)(int)local_160 * 0x20 + local_168;
      if (local_168 != lVar14) {
        fVar16 = 1.0 / (float)iVar4;
        lVar12 = local_168;
        do {
          local_170[0] = fVar16;
          if ((1e-08 < fVar16) || (local_d4 != '\0')) {
            FUN_142ff3230(local_d0,local_178,lVar12);
            pfVar8 = (float *)0x0;
            if (local_178[0] != -1) {
              pfVar8 = (float *)((longlong)local_178[0] * 0x30 + local_d0[0]);
            }
            pfVar9 = pfVar8 + 8;
            if (pfVar8 == (float *)0x0) {
              pfVar9 = (float *)0x0;
            }
            if (pfVar9 != (float *)0x0) {
              local_d8 = local_d8 - *pfVar9;
            }
            local_d8 = local_d8 + fVar16;
            pfStack_190 = local_170;
            local_198 = lVar12;
            FUN_142fd8a00(local_d0,local_158,&local_198,0);
          }
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != lVar14);
      }
    }
    uVar3 = local_150;
    param_7 = 1;
    if (0 < (int)param_3) {
      do {
        iVar5 = rand();
        fVar16 = 0.0;
        iVar4 = (int)local_a8;
        pfStack_190 = local_c0;
        local_198 = 0x100000000;
        iStack_184 = 0;
        iStack_180 = 0;
        fVar17 = local_d8 * (float)iVar5 * 3.051851e-05;
        if ((int)local_a8 != 0) {
          pfVar8 = local_c0;
          if (local_b0 != (float *)0x0) {
            pfVar8 = local_b0;
          }
          fVar1 = *pfVar8;
          iVar5 = 0;
          while (fVar1 == 0.0) {
            iStack_180 = iStack_180 + 0x20;
            uVar2 = (ulonglong)local_198 >> 0x20;
            local_198 = CONCAT44((int)uVar2,iVar5 + 1);
            if ((int)(((int)local_a8 + -1 >> 0x1f & 0x1fU) + (int)local_a8 + -1) >> 5 <= iVar5) {
              iStack_184 = (int)local_a8;
              goto LAB_143013dfe;
            }
            fVar1 = pfVar8[(longlong)iVar5 + 1];
            iVar5 = iVar5 + 1;
          }
          uVar6 = -(int)fVar1 & (uint)fVar1;
          iVar5 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          local_198 = CONCAT44(uVar6,(undefined4)local_198);
          if (uVar6 == 0) {
            iVar5 = 0x20;
          }
          else {
            iVar5 = 0x1f - iVar5;
          }
          iStack_184 = (iStack_180 - iVar5) + 0x1f;
          if ((int)local_a8 < iStack_184) {
            iStack_184 = (int)local_a8;
          }
        }
LAB_143013dfe:
        uStack_130 = CONCAT44(iStack_184,0xffffffff);
        local_128 = CONCAT44(uStack_17c,iStack_180);
        local_148 = local_d0;
        iStack_184 = (int)local_a8;
        lStack_f8 = local_198;
        local_188 = -1 << ((byte)local_a8 & 0x1f);
        uStack_140 = local_198;
        local_138 = pfStack_190;
        local_100 = local_148;
        pfStack_f0 = pfStack_190;
        uStack_e8 = uStack_130;
        uStack_e0 = local_128;
        while( true ) {
          if (((uStack_130._4_4_ == iVar4) && (local_138 == local_c0)) && (local_148 == local_d0))
          goto LAB_143013f54;
          puVar10 = (undefined8 *)((longlong)uStack_130._4_4_ * 0x30 + *local_148);
          if ((fVar16 <= fVar17) && (fVar17 <= fVar16 + *(float *)(puVar10 + 4))) break;
          fVar16 = fVar16 + *(float *)(puVar10 + 4);
          uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uStack_130 & ~uStack_140._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_140);
        }
        local_120 = *puVar10;
        lStack_118 = puVar10[1];
        lVar15 = *(longlong *)(param_2 + 0xb0);
        local_110 = *(undefined4 *)(puVar10 + 2);
        uStack_10c = *(undefined4 *)((longlong)puVar10 + 0x14);
        uStack_108 = *(undefined4 *)(puVar10 + 3);
        uStack_104 = *(undefined4 *)((longlong)puVar10 + 0x1c);
        if (lVar15 == 0) {
LAB_143013f54:
          param_7 = 0;
        }
        else {
          iVar4 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
          }
          plVar11 = (longlong *)((longlong)iVar4 * 0x60 + *param_1);
          plVar11[2] = lStack_118;
          *(undefined4 *)(plVar11 + 3) = local_110;
          *plVar11 = lVar15;
          plVar11[1] = param_2;
          plVar11[4] = 0;
          plVar11[5] = 0;
          *(undefined1 *)(plVar11 + 6) = 0;
          plVar11[7] = 0;
          plVar11[8] = 0;
          plVar11[9] = 0;
          plVar11[10] = 0;
          *(undefined2 *)(plVar11 + 0xb) = 1;
          if ((uVar3 != 0) || (CONCAT44(uStack_104,uStack_108) != 0)) {
            FUN_143002a50(uVar3,CONCAT44(uStack_104,uStack_108),
                          (longlong)((int)param_1[1] + -1) * 0x60 + *param_1);
          }
        }
        uVar13 = uVar13 - 1;
        lVar15 = local_168;
      } while (uVar13 != 0);
    }
    if (lVar15 != 0) {
      FMemory::Free(lVar15);
    }
    local_88 = 0;
    if (local_90 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_d0);
  }
  return param_7;
}



// FUNCTION 143013fe0 FUN_143013fe0 body=157 status=ok
// SIG undefined FUN_143013fe0(void)

void FUN_143013fe0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_142cc0880();
  if (param_6 == '\0') {
    uVar1 = FUN_142cc1350(uVar2);
  }
  else {
    uVar1 = FUN_142cc2730();
  }
  FUN_1430141a0(param_1,param_2,param_3,uVar1,param_4,param_5,0x3f800000,param_7,param_8);
  return;
}



// FUNCTION 143014080 FUN_143014080 body=287 status=ok
// SIG undefined FUN_143014080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143014080(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    local_78 = param_3;
    local_70 = param_1;
    local_58 = uVar3;
    uVar4 = FUN_142caac20(param_2 + 8,local_68,param_4);
    uVar3 = FUN_142cc45a0(uVar4,0);
    uVar7 = uVar3 & 0xffffffff;
    if (0 < (int)uVar3) {
      bVar5 = 1;
      do {
        local_88 = param_2 + 0xf;
        if ((int)param_2[0x10] == 0) {
          local_88 = (longlong *)0x0;
        }
        local_80 = param_7;
        local_90 = param_6;
        local_98 = param_5;
        bVar2 = FUN_143013fe0(local_70,lVar1,local_78,param_4);
        bVar5 = bVar5 | bVar2;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
      } while (0 < (int)uVar6);
      return (ulonglong)bVar5;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1430141a0 FUN_1430141a0 body=3007 status=ok
// SIG undefined FUN_1430141a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1430141a0(longlong *param_1,longlong param_2,int param_3,int param_4,
                       longlong **param_5,longlong param_6,float param_7,float **param_8,
                       char param_9)

{
  longlong **pplVar1;
  float fVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong **pplVar18;
  float **ppfVar19;
  longlong *plVar20;
  longlong **pplVar21;
  longlong lVar22;
  float *pfVar23;
  longlong *plVar24;
  float *pfVar25;
  int iVar26;
  longlong **pplVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_278 [32];
  longlong **local_258;
  longlong local_250;
  float local_248;
  float **local_240;
  char local_238;
  int local_228;
  int local_224;
  float *local_220;
  undefined8 local_218;
  uint local_210;
  int local_20c;
  float local_208 [2];
  longlong **local_200;
  float **local_1f8;
  longlong **local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined8 local_1b8;
  float *pfStack_1b0;
  int local_1a8;
  int iStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_188;
  ulonglong uStack_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  ulonglong local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 uStack_148;
  float *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong *local_128;
  longlong **pplStack_120;
  float *pfStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float local_f8;
  char local_f4;
  longlong local_f0;
  undefined8 local_e8;
  float local_e0 [4];
  float *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  uVar7 = 0;
  local_1f8 = param_8;
  local_200 = param_5;
  if (param_2 != 0) {
    local_228 = param_4;
    local_224 = param_3;
    local_170 = param_2;
    local_168 = param_1;
    fVar29 = (float)FUN_142c98860(param_2 + 0x60,param_5);
    local_1c0 = (int)fVar29;
    if (*(longlong *)(param_2 + 0x98) == 0) {
      local_1c8 = 0;
    }
    else {
      local_1e8 = param_5;
      uStack_1e0 = 0;
      local_1b8 = param_5;
      pfStack_1b0 = (float *)0x0;
      fVar29 = (float)FUN_142ca2f00(*(longlong *)(param_2 + 0x98),&local_1b8,0);
      local_1c8 = (int)fVar29;
    }
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      local_1c4 = 100;
    }
    else {
      local_1e8 = param_5;
      uStack_1e0 = 0;
      local_1b8 = param_5;
      pfStack_1b0 = (float *)0x0;
      fVar29 = (float)FUN_142ca2f00(*(longlong *)(param_2 + 0xa0),&local_1b8,0);
      local_1c4 = (int)fVar29;
    }
    uVar7 = FUN_143003450(param_2,param_3,param_4,param_5);
    if ((char)uVar7 != '\0') {
      local_1d8 = (longlong *)0x0;
      local_1d0 = 0;
      FUN_142fe2980(&local_1d8,param_2 + 0x48);
      plVar24 = *(longlong **)(param_2 + 0xa8);
      plVar15 = plVar24 + *(int *)(param_2 + 0xb0);
      uVar17 = (uint)local_1d0;
      for (; plVar24 != plVar15; plVar24 = plVar24 + 1) {
        lVar11 = *plVar24;
        iVar6 = *(int *)(lVar11 + 0x40);
        if (iVar6 != 0) {
          local_1d0._4_4_ = (int)((ulonglong)local_1d0 >> 0x20);
          bVar3 = local_1d0._4_4_ < (int)(iVar6 + uVar17);
          if (bVar3) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
            ResizeTo(&local_1d8);
            uVar17 = (uint)local_1d0;
          }
          plVar16 = local_1d8 + (longlong)(int)uVar17 * 0xe;
          plVar20 = *(longlong **)(lVar11 + 0x38);
          iVar26 = iVar6;
          do {
            *plVar16 = *plVar20;
            TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(plVar16 + 1,plVar20 + 1);
            plVar16[6] = plVar20[6];
            lVar11 = plVar20[8];
            plVar16[7] = plVar20[7];
            plVar16[8] = lVar11;
            lVar11 = plVar20[10];
            plVar16[9] = plVar20[9];
            plVar16[10] = lVar11;
            lVar11 = plVar20[0xc];
            plVar16[0xb] = plVar20[0xb];
            plVar16[0xc] = lVar11;
            plVar16[0xd] = plVar20[0xd];
            iVar26 = iVar26 + -1;
            plVar16 = plVar16 + 0xe;
            plVar20 = plVar20 + 0xe;
          } while (iVar26 != 0);
          uVar17 = uVar17 + iVar6;
          local_1d0 = CONCAT44(local_1d0._4_4_,uVar17);
        }
        param_2 = local_170;
        param_4 = local_228;
      }
      pfVar25 = (float *)0x0;
      local_f8 = 0.0;
      uVar7 = (ulonglong)uVar17;
      local_f0 = 0;
      local_e8 = 0;
      local_d0 = (float *)0x0;
      local_c8 = 0;
      local_bc = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_f4 = '\0';
      local_c0 = 0xffffffff;
      FUN_142ff1b40(&local_f0);
      if ((*(char *)(param_2 + 0x58) != '\0') && (param_6 != 0)) {
        lVar8 = UAnimNotifyState::GetPrivateStaticClass();
        lVar11 = param_6;
        do {
          if (lVar11 == lVar8) {
            uVar9 = FUN_142cc0880();
            iVar6 = FUN_142cc2730(uVar9);
            uVar7 = (ulonglong)(local_224 < iVar6);
            goto LAB_143014415;
          }
          lVar11 = *(longlong *)(lVar11 + 0x30);
        } while (lVar11 != 0);
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
LAB_143014415:
      local_210 = (uint)uVar7;
      if (0 < (int)uVar17) {
        local_160 = (ulonglong)uVar17;
        plVar15 = local_1d8;
        do {
          pplVar18 = local_200;
          lVar11 = *plVar15;
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x50) == 0)) {
            lVar11 = plVar15[6];
            param_4 = local_228;
            if ((lVar11 != 0) &&
               ((param_9 == '\0' ||
                (((*(longlong *)(lVar11 + 0xb0) != 0 &&
                  (lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0xb0) + 0x1d8), lVar8 != 0)) &&
                 (*(char *)(lVar8 + 0x38) == '\0')))))) {
              iVar6 = local_224;
              if ((char)uVar7 != '\0') {
                fVar29 = (float)FUN_142c988a0(param_6,local_200);
                iVar6 = (int)fVar29 + local_224;
                if (local_224 < 1) {
                  iVar26 = 0;
                  if (-1 < iVar6) {
                    iVar26 = iVar6;
                  }
                }
                else {
                  iVar26 = 1;
                  if (0 < iVar6) {
                    iVar26 = iVar6;
                  }
                }
                iVar28 = iVar26;
                if ((0 < local_1c8) && (iVar28 = local_1c8, local_1c8 <= iVar26)) {
                  iVar28 = iVar26;
                }
                iVar6 = iVar28;
                if ((0 < local_1c4) && (iVar6 = local_1c4, iVar28 <= local_1c4)) {
                  iVar6 = iVar28;
                }
              }
              iVar26 = local_228;
              if (local_228 < 1) {
                uVar9 = FUN_142cc0880();
                iVar26 = FUN_142cc1350(uVar9);
              }
              local_1e8 = (longlong **)0x0;
              uStack_1e0 = 0;
              if (iVar6 <= iVar26) {
                iVar26 = iVar6;
              }
              iVar28 = FUN_142ff6b30(lVar11,local_200,iVar26,&local_1e8);
              iVar6 = local_224;
              pplVar18 = local_200;
              if (iVar28 == 0) {
                pplVar27 = local_1e8;
                if (iVar26 != local_224) {
                  iVar26 = local_228;
                  if (local_228 < 1) {
                    uVar9 = FUN_142cc0880();
                    iVar26 = FUN_142cc1350(uVar9);
                  }
                  pplVar18 = local_200;
                  if (iVar6 <= iVar26) {
                    iVar26 = iVar6;
                  }
                  iVar28 = FUN_142ff6b30(lVar11,local_200,iVar26,&local_1e8);
                  goto LAB_1430145f7;
                }
              }
              else {
LAB_1430145f7:
                pplVar27 = local_1e8;
                if (0 < iVar28) {
                  fVar29 = (float)FUN_142c98860(plVar15 + 7,pplVar18);
                  pplVar27 = local_1e8;
                  pplVar18 = local_1e8 + (longlong)(int)uStack_1e0 * 4;
                  if (local_1e8 != pplVar18) {
                    fVar29 = fVar29 / (float)iVar28;
                    pplVar21 = local_1e8 + 2;
                    do {
                      plStack_190 = pplVar21[-2];
                      local_188 = pplVar21[-1];
                      local_178 = pplVar21[1];
                      uStack_180 = CONCAT44(uStack_180._4_4_,*(undefined4 *)pplVar21);
                      local_208[0] = fVar29;
                      if ((1e-08 < fVar29) || (local_198 = plVar15, local_f4 != '\0')) {
                        local_198 = plVar15;
                        FUN_142ff3310(&local_f0,&local_20c,&local_198);
                        pfVar10 = pfVar25;
                        if (local_20c != -1) {
                          pfVar10 = (float *)((longlong)local_20c * 0x38 + local_f0);
                        }
                        pfVar12 = pfVar10 + 10;
                        if (pfVar10 == (float *)0x0) {
                          pfVar12 = pfVar25;
                        }
                        if (pfVar12 != (float *)0x0) {
                          local_f8 = local_f8 - *pfVar12;
                        }
                        local_f8 = local_f8 + fVar29;
                        local_1b8 = &local_198;
                        pfStack_1b0 = local_208;
                        FUN_142fd8cc0(&local_f0,local_158,&local_1b8,0);
                      }
                      pplVar1 = pplVar21 + 2;
                      pplVar21 = pplVar21 + 4;
                    } while (pplVar1 != pplVar18);
                  }
                }
              }
              param_4 = local_228;
              if (pplVar27 != (longlong **)0x0) {
                FMemory::Free(pplVar27);
                param_4 = local_228;
              }
            }
          }
          else {
            cVar5 = FUN_143003450(lVar11,local_224,param_4,local_200);
            if (cVar5 != '\0') {
              FUN_142c98860(plVar15 + 7,pplVar18);
              plStack_190 = (longlong *)0x0;
              local_188 = (longlong *)0x0;
              uStack_180 = uStack_180 & 0xffffffff00000000;
              local_178 = (longlong *)0x0;
              local_198 = plVar15;
              FUN_142fe4050(&local_f8);
            }
          }
          uVar7 = (ulonglong)local_210;
          plVar15 = plVar15 + 0xe;
          local_160 = local_160 - 1;
        } while (local_160 != 0);
        local_160 = 0;
        param_2 = local_170;
      }
      ppfVar19 = local_1f8;
      local_220 = (float *)0x0;
      local_218 = 0;
      pfVar10 = pfVar25;
      if (0 < *(int *)(param_2 + 0x38)) {
        if ((local_1f8 == (float **)0x0) || (iVar6 = *(int *)(local_1f8 + 1), iVar6 == 0)) {
          local_1f8 = (float **)(param_2 + 0x30);
        }
        else {
          local_218._0_4_ = 0;
          if (0 < iVar6 + *(int *)(param_2 + 0x38)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_220);
            iVar6 = *(int *)(ppfVar19 + 1);
          }
          iVar26 = (int)local_218;
          if (iVar6 != 0) {
            if (local_218._4_4_ < (int)local_218 + iVar6) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_220);
              iVar26 = (int)local_218;
            }
            _guard_xfg_dispatch_icall_nop
                      (local_220 + (longlong)iVar26 * 2,*ppfVar19,(longlong)iVar6 << 3);
            iVar26 = (int)local_218 + iVar6;
            local_218 = CONCAT44(local_218._4_4_,iVar26);
          }
          lVar11 = local_170;
          plVar15 = *(longlong **)(param_2 + 0x30);
          iVar6 = *(int *)(param_2 + 0x38);
          if (((plVar15 != plVar15 + iVar6) && (*plVar15 == 0)) &&
             (plVar24 = plVar15 + iVar6, plVar15 != plVar24)) {
            do {
              plVar15 = plVar15 + 1;
              if (plVar15 == plVar24) break;
            } while (*plVar15 == 0);
          }
          lVar8 = *(longlong *)(param_2 + 0x30);
          pfVar10 = local_220;
joined_r0x00014301480d:
          if (plVar15 != (longlong *)(lVar8 + (longlong)iVar6 * 8)) {
            lVar22 = *plVar15;
            for (pfVar12 = pfVar10; pfVar12 != pfVar10 + (longlong)iVar26 * 2; pfVar12 = pfVar12 + 2
                ) {
              if (*(longlong *)pfVar12 == lVar22) {
                if ((int)((longlong)pfVar12 - (longlong)pfVar10 >> 3) != -1) goto LAB_14301487f;
                break;
              }
            }
            local_218._4_4_ = (int)((ulonglong)local_218 >> 0x20);
            local_218 = CONCAT44(local_218._4_4_,iVar26 + 1);
            if (local_218._4_4_ < iVar26 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_220,iVar26);
              pfVar10 = local_220;
            }
            *(longlong *)(pfVar10 + (longlong)iVar26 * 2) = lVar22;
            pfVar10 = local_220;
            iVar26 = (int)local_218;
LAB_14301487f:
            plVar24 = (longlong *)
                      (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8);
            if (plVar15 != plVar24) {
              do {
                plVar15 = plVar15 + 1;
                if (plVar15 == plVar24) break;
              } while (*plVar15 == 0);
            }
            goto joined_r0x00014301480d;
          }
          local_1f8 = &local_220;
        }
      }
      uVar7 = 1;
      ppfVar19 = local_1f8;
      pfVar12 = pfVar25;
      if (0 < local_1c0) {
        do {
          iVar28 = (int)pfVar12;
          iVar26 = rand();
          iVar6 = (int)local_c8;
          fVar29 = 0.0;
          local_140 = local_e0;
          local_1b8 = (longlong **)0x100000000;
          pfStack_1b0 = local_140;
          local_1a8 = 0xffffffff;
          iStack_1a4 = 0;
          uStack_1a0 = 0;
          fVar30 = local_f8 * (float)iVar26 * 3.051851e-05;
          if ((int)local_c8 != 0) {
            pfVar10 = local_e0;
            if (local_d0 != (float *)0x0) {
              pfVar10 = local_d0;
            }
            fVar2 = *pfVar10;
            pfVar12 = pfVar25;
            pfVar23 = pfVar25;
            while (fVar2 == 0.0) {
              iVar26 = (int)pfVar12;
              uStack_1a0 = (int)pfVar23 + 0x20;
              pfVar23 = (float *)(ulonglong)uStack_1a0;
              pfVar12 = (float *)(ulonglong)(iVar26 + 1U);
              uVar4 = (ulonglong)local_1b8 >> 0x20;
              local_1b8 = (longlong **)CONCAT44((int)uVar4,iVar26 + 1U);
              if ((int)((int)local_c8 + -1 + ((int)local_c8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar26) {
                iStack_1a4 = (int)local_c8;
                goto LAB_1430149d7;
              }
              fVar2 = pfVar10[(longlong)iVar26 + 1];
              local_1a8 = 0xffffffff;
            }
            uVar17 = -(int)fVar2 & (uint)fVar2;
            iVar26 = 0x1f;
            if (uVar17 != 0) {
              for (; uVar17 >> iVar26 == 0; iVar26 = iVar26 + -1) {
              }
            }
            local_1b8 = (longlong **)CONCAT44(uVar17,SUB84(local_1b8,0));
            if (uVar17 == 0) {
              iVar26 = 0x20;
            }
            else {
              iVar26 = 0x1f - iVar26;
            }
            iStack_1a4 = (uStack_1a0 - iVar26) + 0x1f;
            if ((int)local_c8 < iStack_1a4) {
              iStack_1a4 = (int)local_c8;
            }
          }
LAB_1430149d7:
          uStack_138 = CONCAT44(iStack_1a4,0xffffffff);
          local_130 = CONCAT44(uStack_19c,uStack_1a0);
          local_150 = &local_f0;
          iStack_1a4 = (int)local_c8;
          pplStack_120 = local_1b8;
          local_1a8 = -1 << ((byte)local_c8 & 0x1f);
          uStack_148 = local_1b8;
          local_128 = local_150;
          pfStack_118 = local_140;
          uStack_110 = uStack_138;
          uStack_108 = local_130;
          while( true ) {
            if (((uStack_138._4_4_ == iVar6) && (local_140 == local_e0)) && (local_150 == &local_f0)
               ) goto LAB_143014c26;
            puVar14 = (undefined8 *)((longlong)uStack_138._4_4_ * 0x38 + *local_150);
            if ((fVar29 <= fVar30) && (fVar30 <= fVar29 + *(float *)(puVar14 + 5))) break;
            fVar29 = fVar29 + *(float *)(puVar14 + 5);
            uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_148._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
          }
          local_198 = (longlong *)*puVar14;
          plStack_190 = (longlong *)puVar14[1];
          local_188 = (longlong *)puVar14[2];
          uStack_180 = puVar14[3];
          local_178 = (longlong *)puVar14[4];
          FUN_142ff3310(&local_f0,local_208,&local_198);
          plVar15 = local_168;
          if ((local_208[0] == -NAN) ||
             (lVar11 = (longlong)(int)local_208[0] * 0x38 + local_f0, lVar11 == 0)) {
            fVar29 = 0.0;
          }
          else {
            fVar29 = *(float *)(lVar11 + 0x28);
          }
          if (*local_198 == 0) {
            lVar11 = local_198[6];
            lVar8 = *(longlong *)(lVar11 + 0xb0);
            if (((lVar8 != 0) ||
                ((ppfVar19 = local_1f8, *(longlong *)(lVar11 + 0x30) != 0 &&
                 (lVar8 = FUN_140eac160(), ppfVar19 = local_1f8, lVar8 != 0)))) &&
               (lVar22 = *(longlong *)(lVar8 + 0x90), ppfVar19 = local_1f8, lVar22 != 0)) {
              lVar13 = FUN_1428dfc70();
              do {
                if (lVar22 == lVar13) {
                  iVar6 = (int)local_168[1];
                  *(int *)(local_168 + 1) = iVar6 + 1;
                  if (*(int *)((longlong)local_168 + 0xc) < iVar6 + 1) {
                    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(local_168,iVar6)
                    ;
                  }
                  ppfVar19 = local_1f8;
                  plVar15 = (longlong *)((longlong)iVar6 * 0x60 + *local_168);
                  plVar15[2] = (longlong)local_188;
                  *plVar15 = lVar8;
                  *(undefined4 *)(plVar15 + 3) = (undefined4)uStack_180;
                  plVar15[1] = lVar11;
                  plVar15[4] = 0;
                  plVar15[5] = 0;
                  *(undefined1 *)(plVar15 + 6) = 0;
                  plVar15[7] = 0;
                  plVar15[8] = 0;
                  plVar15[9] = 0;
                  plVar15[10] = 0;
                  *(undefined2 *)(plVar15 + 0xb) = 1;
                  if (((local_1f8 != (float **)0x0) && (0 < *(int *)(local_1f8 + 1))) ||
                     (local_178 != (longlong *)0x0)) {
                    FUN_143002a50(local_1f8,local_178,
                                  (longlong)((int)local_168[1] + -1) * 0x60 + *local_168);
                  }
                  uVar7 = (ulonglong)((char)uVar7 != '\0');
                  goto LAB_143014c29;
                }
                lVar22 = *(longlong *)(lVar22 + 0x30);
                ppfVar19 = local_1f8;
              } while (lVar22 != 0);
            }
LAB_143014c26:
            uVar7 = 0;
          }
          else {
            local_238 = param_9;
            lVar11 = local_168[1];
            local_250 = param_6;
            local_258 = local_200;
            local_248 = (fVar29 * param_7) / local_f8;
            local_240 = ppfVar19;
            cVar5 = FUN_1430141a0(local_168,*local_198,local_224,local_228);
            if ((cVar5 == '\0') && ((int)lVar11 == (int)plVar15[1])) {
              FUN_142ff3310(&local_f0,&local_20c,&local_198);
              lVar11 = local_f0;
              pfVar10 = pfVar25;
              if (local_20c != -1) {
                pfVar10 = (float *)((longlong)local_20c * 0x38 + local_f0);
              }
              pfVar12 = pfVar10 + 10;
              if (pfVar10 == (float *)0x0) {
                pfVar12 = pfVar25;
              }
              if (pfVar12 != (float *)0x0) {
                FUN_142ff3310(&local_f0,&local_210,&local_198);
                fVar29 = *(float *)((longlong)(int)local_210 * 0x38 + 0x28 + lVar11);
                TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
                ::Remove(&local_f0);
                local_f8 = local_f8 - fVar29;
              }
              iVar28 = iVar28 + -1;
            }
          }
LAB_143014c29:
          pfVar10 = local_220;
          pfVar12 = (float *)(ulonglong)(iVar28 + 1U);
        } while ((int)(iVar28 + 1U) < local_1c0);
      }
      if (pfVar10 != (float *)0x0) {
        FMemory::Free(pfVar10);
      }
      local_a8 = 0;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      FUN_14106ecc0(&local_f0);
      FUN_141439310(&local_1d8);
    }
  }
  return uVar7;
}



// FUNCTION 143014d70 FUN_143014d70 body=646 status=ok
// SIG undefined FUN_143014d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143014d70(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  float local_e0 [2];
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  float *local_c0;
  float local_b8;
  char local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar2 = FUN_14233f450();
  if (iVar2 < 3) {
    local_d8 = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x208);
    if ((lVar10 == 0) || (*(char *)(param_1 + 0x210) != '\0')) {
      lVar10 = *(longlong *)(param_1 + 0x118);
    }
    local_b4 = '\0';
    local_b0 = 0;
    local_b8 = 0.0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_80 = 0xffffffff;
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(&local_b0,*(undefined4 *)(param_1 + 0x1e8));
    uVar3 = FUN_142ff8b70(param_1);
    lVar7 = *(longlong *)(param_1 + 0x1e0);
    lVar9 = (longlong)*(int *)(param_1 + 0x1e8) * 0x58 + lVar7;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x58) {
      if (0 < *(int *)(lVar7 + 0x50)) {
        plVar6 = *(longlong **)(lVar7 + 0x48);
        plVar8 = plVar6 + (longlong)*(int *)(lVar7 + 0x50) * 0xb;
        for (; plVar6 != plVar8; plVar6 = plVar6 + 0xb) {
          if (((*plVar6 == 0) && ((int)plVar6[10] == 0)) ||
             (cVar1 = FUN_143003450(*plVar6,uVar3,100,lVar10), cVar1 == '\0')) goto LAB_143014f5b;
        }
        local_d0 = lVar7;
        fVar11 = (float)FUN_142c98860(lVar7 + 0x10,lVar10);
        local_e0[0] = fVar11;
        if ((1e-08 < fVar11) || (local_b4 != '\0')) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(&local_b0,local_e8,lVar7);
          pfVar5 = (float *)0x0;
          if (local_e8[0] != -1) {
            pfVar5 = (float *)(local_b0 + (longlong)local_e8[0] * 0x18);
          }
          pfVar4 = pfVar5 + 2;
          if (pfVar5 == (float *)0x0) {
            pfVar4 = (float *)0x0;
          }
          if (pfVar4 != (float *)0x0) {
            local_b8 = local_b8 - *pfVar4;
          }
          local_b8 = local_b8 + fVar11;
          local_c8 = &local_d0;
          local_c0 = local_e0;
          TSet<TTuple<FFlareResourceDescription_*,float>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,float,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,float_const_&>_>
                    (&local_b0,&local_d8,&local_c8,0);
        }
      }
LAB_143014f5b:
    }
    local_d8 = 0;
    FUN_1407436b0(&local_b8,&local_d8,0xbf800000);
    local_68 = 0;
    if (local_70 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b0);
  }
  return local_d8;
}



// FUNCTION 143015000 FUN_143015000 body=117 status=ok
// SIG undefined FUN_143015000(void)

undefined8 FUN_143015000(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 == 10) {
    lVar1 = FFileManifestData::StaticStruct();
    if (param_2[3] == *(longlong *)(lVar1 + 0x18)) {
      uVar2 = FFileManifestData::StaticStruct();
      FUN_141725e50(uVar2,param_3,param_1 + 0x10,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143015080 FUN_143015080 body=51 status=ok
// SIG undefined FUN_143015080(void)

void FUN_143015080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142fffe20();
  if (lVar1 != 0) {
    FUN_142fe3b30(param_1,lVar1,param_3);
  }
  return;
}



// FUNCTION 1430150c0 FUN_1430150c0 body=207 status=ok
// SIG undefined FUN_1430150c0(void)

void FUN_1430150c0(longlong param_1,int *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20;
  byte local_1f;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  undefined4 local_10;
  byte local_c;
  
  local_1f = local_1f & 0xf0;
  local_c = local_c & 0xfc;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  lVar2 = *(longlong *)(param_1 + 0x228);
  lVar1 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar2;
  local_48 = 0xffffffffffffffff;
  local_40 = 0xffffffffffffffff;
  local_30 = 1;
  local_10 = 1;
  if (lVar2 != lVar1) {
    while (*(int *)(lVar2 + 0xc) != *param_2) {
      lVar2 = lVar2 + 0x40;
      if (lVar2 == lVar1) {
        return;
      }
    }
    FUN_1411cb440(&local_48);
    if (param_3 <= local_30) {
      FUN_143011bf0(param_1,param_2,param_3,0);
    }
  }
  return;
}



// FUNCTION 1430151a0 FUN_1430151a0 body=51 status=ok
// SIG undefined FUN_1430151a0(void)

void FUN_1430151a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142fffe20();
  if (lVar1 != 0) {
    FUN_1430118b0(param_1,lVar1,param_3);
  }
  return;
}



// FUNCTION 1430151e0 FUN_1430151e0 body=126 status=ok
// SIG undefined FUN_1430151e0(void)

void FUN_1430151e0(longlong *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (((iVar1 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) && (*param_2 != -1)) {
    for (iVar1 = 0; (-1 < iVar1 && (iVar1 < (int)param_1[0x46])); iVar1 = iVar1 + 1) {
      if (*(int *)((longlong)iVar1 * 0x40 + param_1[0x45] + 0xc) == *param_2) {
        (**(code **)(*param_1 + 0x498))(param_1);
        FUN_143011ae0(param_1,iVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 143015260 FUN_143015260 body=223 status=ok
// SIG undefined FUN_143015260(void)

void FUN_143015260(longlong *param_1,int *param_2,byte param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  
  piVar4 = (int *)param_1[0x45];
  piVar3 = piVar4 + (longlong)(int)param_1[0x46] * 0x10;
  if (piVar4 != piVar3) {
    while (local_res8[0] = piVar4[3], local_res8[0] != *param_2) {
      piVar4 = piVar4 + 0x10;
      if (piVar4 == piVar3) {
        return;
      }
    }
    bVar1 = *(byte *)(piVar4 + 0xc);
    param_3 = ~param_4 & bVar1 | param_3;
    *(byte *)(piVar4 + 0xc) = param_3;
    if (param_3 != bVar1) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x5f,local_res8);
      if (*piVar4 == -1) {
        *(int *)(param_1 + 0x39) = (int)param_1[0x39] + 1;
        *piVar4 = (int)param_1[0x39];
        iVar2 = (int)param_1[0x39];
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        *(int *)(param_1 + 0x39) = iVar2;
      }
      piVar4[1] = piVar4[1] + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1 + 0x2f);
      *(int *)((longlong)param_1 + 0x1cc) = *(int *)((longlong)param_1 + 0x1cc) + 1;
      if (*(int *)((longlong)param_1 + 0x1cc) == -1) {
        *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
      }
      param_1[0x44] = -1;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  return;
}



// FUNCTION 143015340 FUN_143015340 body=265 status=ok
// SIG undefined FUN_143015340(void)

void FUN_143015340(longlong *param_1,longlong param_2,byte param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_res8 [2];
  
  piVar4 = (int *)param_1[0x45];
  piVar5 = piVar4 + (longlong)(int)param_1[0x46] * 0x10;
  for (; piVar4 != piVar5; piVar4 = piVar4 + 0x10) {
    if (((param_2 == 0) || (*(longlong *)(piVar4 + 4) == param_2)) &&
       (bVar1 = *(byte *)(piVar4 + 0xc), bVar2 = ~param_4 & bVar1 | param_3,
       *(byte *)(piVar4 + 0xc) = bVar2, bVar2 != bVar1)) {
      local_res8[0] = piVar4[3];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x5f,local_res8);
      if (*piVar4 == -1) {
        *(int *)(param_1 + 0x39) = (int)param_1[0x39] + 1;
        *piVar4 = (int)param_1[0x39];
        iVar3 = (int)param_1[0x39];
        if (iVar3 == -1) {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0x39) = iVar3;
      }
      piVar4[1] = piVar4[1] + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1 + 0x2f);
      *(int *)((longlong)param_1 + 0x1cc) = *(int *)((longlong)param_1 + 0x1cc) + 1;
      if (*(int *)((longlong)param_1 + 0x1cc) == -1) {
        *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
      }
      param_1[0x44] = -1;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  return;
}



// FUNCTION 143015450 GetArchetypeFromRequiredInfo body=19 status=ok
// SIG undefined GetArchetypeFromRequiredInfo(void)

void UObject::GetArchetypeFromRequiredInfo(void)

{
  FUN_14301bc70();
  return;
}



// FUNCTION 143015470 FUN_143015470 body=15 status=ok
// SIG undefined FUN_143015470(void)

void FUN_143015470(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x208) = param_2;
  *(undefined1 *)(param_1 + 0x210) = param_3;
  return;
}



// FUNCTION 143015480 FUN_143015480 body=58 status=ok
// SIG undefined FUN_143015480(void)

void FUN_143015480(longlong *param_1,char param_2,longlong param_3)

{
  if ((char)param_1[0x25] == '\x03') {
    if (param_2 == '\0') {
      *(byte *)((longlong)param_1 + 0x4a4) = *(byte *)((longlong)param_1 + 0x4a4) & 0xfe;
                    /* WARNING: Could not recover jumptable at 0x0001430154b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x448))(param_1,0);
      return;
    }
    if (param_3 != 0) {
      *(byte *)((longlong)param_1 + 0x4a4) = *(byte *)((longlong)param_1 + 0x4a4) | 1;
                    /* WARNING: Could not recover jumptable at 0x00014301549f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x448))(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1430154c0 FUN_1430154c0 body=131 status=ok
// SIG undefined FUN_1430154c0(void)

void FUN_1430154c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x5a8) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x63c) = *param_2;
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_2 + 1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x488);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x718) != 0)) {
    UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(lVar1,param_2,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x480);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x728) != 0)) {
    UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(lVar1,param_2,0);
  }
  return;
}



// FUNCTION 143015550 FUN_143015550 body=444 status=ok
// SIG undefined FUN_143015550(void)

void FUN_143015550(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((*(byte *)(param_1 + 0x5a8) & 1) == 0) {
    if (param_2 <= 0.0) {
      local_60 = DAT_1468b5d98;
      local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x168);
      if (lVar1 == 0) {
        uVar6 = (undefined4)DAT_1468b5da0;
        uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_50 = (float)DAT_1468b5da8;
      }
      else {
        local_28 = *(float *)(lVar1 + 0x210);
        fStack_24 = *(float *)(lVar1 + 0x214);
        fStack_20 = *(float *)(lVar1 + 0x218);
        fStack_1c = *(float *)(lVar1 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
        auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
        auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
        auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
        iVar4 = movmskps(in_EAX,auVar3);
        if (iVar4 != 0) {
          *(float *)(lVar1 + 0x250) = local_28;
          *(float *)(lVar1 + 0x254) = fStack_24;
          *(float *)(lVar1 + 600) = fStack_20;
          *(float *)(lVar1 + 0x25c) = fStack_1c;
          puVar5 = (undefined8 *)FQuat::Rotator(&local_28,local_48);
          *(undefined8 *)(lVar1 + 0x260) = *puVar5;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
        }
        uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_50 = (float)*(undefined4 *)(lVar1 + 0x268);
      }
      local_58 = CONCAT44(uVar7,uVar6);
      puVar5 = (undefined8 *)FRotator::Vector(&local_58,local_3c);
      local_60 = *(float *)(puVar5 + 1) * param_2;
      local_68._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
      local_68 = CONCAT44(local_68._4_4_ * param_2,(float)*puVar5 * param_2);
    }
    plVar2 = *(longlong **)(param_1 + 0x488);
    if ((plVar2 != (longlong *)0x0) && (plVar2[0xe3] != 0)) {
      local_58 = local_68;
      local_50 = local_60;
      (**(code **)(*plVar2 + 0x620))(plVar2,&local_58,0);
    }
    plVar2 = *(longlong **)(param_1 + 0x480);
    if ((plVar2 != (longlong *)0x0) && (plVar2[0xe5] != 0)) {
      local_58 = local_68;
      local_50 = local_60;
      (**(code **)(*plVar2 + 0x620))(plVar2,&local_58,0);
    }
  }
  else {
    *(float *)(param_1 + 0x638) = param_2;
  }
  return;
}



// FUNCTION 143015710 FUN_143015710 body=77 status=ok
// SIG undefined FUN_143015710(void)

void FUN_143015710(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 0x5fc) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x604) = uVar1;
    FUN_1430154c0(param_1,param_2);
  }
  return;
}



// FUNCTION 143015760 FUN_143015760 body=23 status=ok
// SIG undefined FUN_143015760(void)

void FUN_143015760(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined4 *)(param_1 + 0x5f8) = param_2;
    FUN_143015550();
    return;
  }
  return;
}



// FUNCTION 143015780 FUN_143015780 body=53 status=ok
// SIG undefined FUN_143015780(void)

void FUN_143015780(longlong param_1,int *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x228);
  lVar2 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
    if (*(int *)(lVar1 + 0xc) == *param_2) {
      *(undefined1 *)(lVar1 + 0x28) = param_3;
    }
  }
  return;
}



// FUNCTION 1430157c0 FUN_1430157c0 body=226 status=ok
// SIG undefined FUN_1430157c0(void)

void FUN_1430157c0(longlong *param_1,int *param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[0x45];
  lVar4 = (longlong)(int)param_1[0x46] * 0x40 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x40) {
    if ((*(int *)(lVar5 + 0xc) == *param_2) && ((*(byte *)(lVar5 + 0x29) >> 3 & 1) != param_3)) {
      *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) & 0xf7 | param_3 << 3;
      (**(code **)(*param_1 + 0x260))();
      *(undefined4 *)(param_1 + 0x48) = 0;
      lVar1 = param_1[0x45];
      lVar3 = (longlong)(int)param_1[0x46] * 0x40 + lVar1;
      for (; lVar1 != lVar3; lVar1 = lVar1 + 0x40) {
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          if ((*(byte *)(lVar1 + 0x29) & 8) == 0) {
            bVar2 = *(byte *)(lVar1 + 0x34);
          }
          else {
            bVar2 = 0;
          }
          *(uint *)(param_1 + 0x48) = (int)param_1[0x48] + (uint)bVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 1430158b0 FUN_1430158b0 body=98 status=ok
// SIG undefined FUN_1430158b0(void)

void FUN_1430158b0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
    plVar1 = (longlong *)param_1[0x91];
    if ((plVar1 != (longlong *)0x0) ||
       (plVar1 = (longlong *)param_1[0x90], plVar1 != (longlong *)0x0)) {
      *(undefined4 *)(param_1 + 0xc1) = param_2;
      *(undefined4 *)(param_1 + 0xc9) = param_2;
      (**(code **)(*plVar1 + 0x7e0))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 143015920 FUN_143015920 body=199 status=ok
// SIG undefined FUN_143015920(void)

void FUN_143015920(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (cVar2 != '\0') {
      if ((*(byte *)(param_1 + 0x5a8) & 1) == 0) {
        if ((int)param_2[1] == 0) {
          param_2 = (longlong *)0x0;
        }
        else {
          param_2 = (longlong *)*param_2;
        }
        (**(code **)(*param_2 + 0x38))(param_2,param_1);
      }
      else {
        plVar4 = (longlong *)(param_1 + 0x628);
        if (param_2 != plVar4) {
          if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)
             ) {
                    /* WARNING: Could not recover jumptable at 0x000143015987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x30))(param_2,plVar4);
            return;
          }
          if ((*(int *)(param_1 + 0x630) != 0) &&
             (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar4 != 0) {
              lVar3 = FMemory::Realloc(*plVar4,0,0);
              *plVar4 = lVar3;
            }
            *(undefined4 *)(param_1 + 0x630) = 0;
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1430159f0 FUN_1430159f0 body=44 status=ok
// SIG undefined FUN_1430159f0(void)

void FUN_1430159f0(longlong param_1,undefined8 param_2,byte param_3)

{
  FText::operator=(param_1 + 0x40);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | (uint)param_3;
  return;
}



// FUNCTION 143015a20 FUN_143015a20 body=181 status=ok
// SIG undefined FUN_143015a20(void)

void FUN_143015a20(longlong *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  
  (**(code **)(*param_1 + 0x600))();
  bVar1 = *(byte *)(param_1 + 0xb5);
  if (((bVar1 & 2) == 0) && (param_2 != '\0')) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9d,0);
    bVar1 = *(byte *)(param_1 + 0xb5);
  }
  bVar1 = bVar1 & 0xfd | param_2 * '\x02';
  *(byte *)(param_1 + 0xb5) = bVar1;
  if (((((param_2 * '\x02' & 2U) != 0) && (param_1[0x8f] == 0)) && ((bVar1 & 0x20) == 0)) &&
     ((char)param_1[0x25] == '\x03')) {
    cVar2 = (**(code **)(*param_1 + 0x770))(param_1);
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 0x20;
      (**(code **)(*param_1 + 0x778))(param_1);
    }
  }
  if ((param_1[0x91] != 0) || (param_1[0x90] != 0)) {
    FUN_143017540(param_1);
  }
  return;
}



// FUNCTION 143015ae0 FUN_143015ae0 body=47 status=ok
// SIG undefined FUN_143015ae0(void)

void FUN_143015ae0(undefined8 param_1,undefined8 param_2,byte param_3,char param_4)

{
  char cVar1;
  
  cVar1 = '\x01' << (param_3 & 0x1f);
  if (param_4 == '\0') {
    cVar1 = '\0';
  }
  FUN_1430259f0(param_1,param_2,cVar1,'\x01' << (param_3 & 0x1f));
  return;
}



// FUNCTION 143015b10 thunk_FUN_1430259f0 body=5 status=ok
// SIG undefined thunk_FUN_1430259f0(void)

void thunk_FUN_1430259f0(longlong *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4
                        )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uStackX_8;
  undefined1 uStackX_c;
  undefined1 uStackX_d;
  
  uStackX_8 = *param_2;
  lVar1 = *param_1;
  uStackX_c = param_3;
  uStackX_d = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146b46668);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 143015b20 FUN_143015b20 body=47 status=ok
// SIG undefined FUN_143015b20(void)

void FUN_143015b20(undefined8 param_1,undefined8 param_2,byte param_3,char param_4)

{
  char cVar1;
  
  cVar1 = '\x01' << (param_3 & 0x1f);
  if (param_4 == '\0') {
    cVar1 = '\0';
  }
  FUN_143025a40(param_1,param_2,cVar1,'\x01' << (param_3 & 0x1f));
  return;
}



// FUNCTION 143015b50 FUN_143015b50 body=21 status=ok
// SIG undefined FUN_143015b50(void)

void FUN_143015b50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_18 [8];
  longlong *plStack_10;
  
  param_1[0xbb] = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  if (param_1[0xbb] != 0) {
    lVar5 = FUN_142e20fc0();
    for (lVar7 = param_1[0xbb]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if ((param_1[0xbb] != 0) && ((char)param_1[0x25] == '\x03')) {
          (**(code **)(*param_1 + 0x600))(param_1);
          param_1[0xbc] = param_1[0xbb];
        }
        break;
      }
    }
  }
  uVar6 = FUN_142e27720();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  if (lVar7 == 0) {
    lVar7 = FUN_140f57ec0(param_1);
    if (lVar7 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x630))(param_1,lVar7);
    FUN_14234b150(lVar7);
  }
  if (param_1[0xbb] != 0) {
    lVar8 = FUN_142e20fc0();
    lVar5 = param_1[0xbb];
    lVar9 = lVar5;
    if (lVar5 != 0) {
      while (lVar9 != lVar8) {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        if (lVar9 == 0) {
          return;
        }
      }
      if (((lVar5 != 0) && (cVar4 = (**(code **)(*param_1 + 0x720))(param_1), cVar4 != '\0')) &&
         (FUN_142c7bc00(lVar7,auStack_18,param_1[0xbb],2), plStack_10 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar2 = (int *)((longlong)plStack_10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_10 + 8))(plStack_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143015b70 FUN_143015b70 body=114 status=ok
// SIG undefined FUN_143015b70(void)

void FUN_143015b70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  if (puVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 200) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0xcc) == 0)) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
      return;
    }
    TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 7);
  }
  return;
}



// FUNCTION 143015bf0 FUN_143015bf0 body=9 status=ok
// SIG undefined FUN_143015bf0(void)

void FUN_143015bf0(longlong param_1)

{
  FText::operator=(param_1 + 0x30);
  return;
}



// FUNCTION 143015c00 FUN_143015c00 body=638 status=ok
// SIG undefined FUN_143015c00(void)

void FUN_143015c00(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_res18 [2];
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_143015e80();
  if (*(longlong *)(param_1 + 0x568) != 0) {
    if ((*(byte *)(param_1 + 0x4a4) & 0x20) != 0) {
      FUN_142ff0a90(param_1);
    }
    if (((*(longlong *)(param_1 + 0x538) != 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x148) != 0)) &&
       ((plVar13 = *(longlong **)(param_1 + 0x488), plVar13 != (longlong *)0x0 ||
        (plVar13 = *(longlong **)(param_1 + 0x480), plVar13 != (longlong *)0x0)))) {
      lVar6 = FUN_142a07000();
      lVar9 = plVar13[2];
      if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1427e53c0();
      }
      else {
        (**(code **)(*plVar13 + 0x630))(plVar13,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
      }
      iVar1 = *(int *)(param_1 + 0xc);
      pwVar7 = (wchar_t *)0x0;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar10 = iVar1 >> 0x1f & 0xffff;
        uVar5 = iVar1 + uVar10;
        pwVar7 = (wchar_t *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                 (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18);
      }
      if ((*(uint *)(pwVar7 + 4) >> 0x1d & 1) == 0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ADroppedInventoryItemPickup::OnPickupHit",L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar7 = pwVar3;
        }
        FName::FName(local_res18,pwVar7 + 2,1);
        plVar14 = plVar13 + 0xac;
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(&local_28,param_1);
        local_20 = local_res18[0];
        if ((local_res18[0] != 0) && (lVar9 = FWeakObjectPtr::Get(&local_28), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_20);
        }
        piVar11 = (int *)*plVar14;
        lVar9 = plVar13[0xad];
        for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)(int)lVar9 * 4; piVar12 = piVar12 + 4
            ) {
          if (((*piVar12 == local_28) && (piVar12[1] == local_24)) ||
             ((cVar4 = FWeakObjectPtr::IsValid(piVar12), cVar4 == '\0' &&
              (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_20)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_143015e61;
            break;
          }
        }
        iVar1 = (int)plVar13[0xad];
        *(int *)(plVar13 + 0xad) = iVar1 + 1;
        if (*(int *)((longlong)plVar13 + 0x56c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
        }
        piVar11 = (int *)((longlong)iVar1 * 0x10 + *plVar14);
        *piVar11 = local_28;
        piVar11[1] = local_24;
        *(longlong *)(piVar11 + 2) = local_20;
LAB_143015e61:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
      }
    }
  }
  return;
}



// FUNCTION 143015e80 FUN_143015e80 body=533 status=ok
// SIG undefined FUN_143015e80(void)

void FUN_143015e80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  (**(code **)(*param_1 + 0x600))();
  param_1[0xad] = (longlong)param_2;
  if (param_2 == (longlong *)0x0) {
    if ((char)param_1[0x25] == '\x03') {
      param_1[0xae] = 0;
    }
    param_1[0xac] = 0;
    return;
  }
  uVar3 = FUN_14301f8f0();
  lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
  plVar1 = (longlong *)param_1[0xad];
  param_1[0xac] = lVar4;
  if (plVar1 != (longlong *)0x0) {
    uVar3 = FUN_14301f8f0();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      param_1[0xa7] = *(longlong *)(lVar4 + 0x208);
    }
  }
  if (param_1[0xac] != 0) {
    *(byte *)(param_1 + 0xb5) =
         *(byte *)(param_1 + 0xb5) ^
         (*(char *)(param_1[0xac] + 0x340) << 4 ^ *(byte *)(param_1 + 0xb5)) & 0x10;
  }
  cVar2 = (**(code **)(*param_1 + 0x760))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)param_1[0xad] + 0x448))((longlong *)param_1[0xad],param_1);
    *(byte *)(param_1[0xad] + 0x91) = *(byte *)(param_1[0xad] + 0x91) | 1;
  }
  (**(code **)(*param_1 + 0x718))(param_1);
  if ((char)param_1[0x25] != '\x03') {
    (**(code **)(*param_1 + 0x428))(param_1);
  }
  FUN_142fefdb0(param_1);
  if (param_1[0xac] == 0) {
    plVar1 = (longlong *)param_1[0xad];
    uVar3 = FUN_14301f8f0();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    param_1[0xac] = lVar4;
  }
  if ((char)param_1[0x25] != '\x03') {
    if ((param_1[0xac] != 0) && ((**(code **)(*param_1 + 0x7f0))(param_1), param_1[0xbb] != 0)) {
      lVar5 = FUN_142e20fc0();
      for (lVar4 = param_1[0xbb]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar5) {
          if (param_1[0xbb] != 0) {
            FUN_143013120(param_1);
          }
          break;
        }
      }
    }
    if ((char)param_1[0x25] != '\x03') {
      return;
    }
  }
  if (param_1[0xa7] != 0) {
    *(byte *)((longlong)param_1 + 0x4a4) =
         *(byte *)((longlong)param_1 + 0x4a4) ^
         (*(char *)(param_1[0xa7] + 0x168) << 4 ^ *(byte *)((longlong)param_1 + 0x4a4)) & 0x10;
  }
  if ((*(byte *)((longlong)param_1 + 0x4a4) & 0x10) == 0) {
    FUN_14223ef90(param_1[0xad],0);
                    /* WARNING: Could not recover jumptable at 0x00014301606a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x810))(param_1);
    return;
  }
  param_1[0xae] = param_1[0xad];
  return;
}



// FUNCTION 1430160a0 FUN_1430160a0 body=42 status=ok
// SIG undefined FUN_1430160a0(void)

void FUN_1430160a0(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x614) >> 1 & 1) != param_2) {
    *(byte *)(param_1 + 0x614) = *(byte *)(param_1 + 0x614) & 0xfd | param_2 * '\x02';
    FUN_142fea280();
    return;
  }
  return;
}



// FUNCTION 1430160d0 FUN_1430160d0 body=8 status=ok
// SIG undefined FUN_1430160d0(void)

void FUN_1430160d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  return;
}



// FUNCTION 1430160e0 FUN_1430160e0 body=326 status=ok
// SIG undefined FUN_1430160e0(void)

undefined8 FUN_1430160e0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int local_res18 [4];
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x228);
    lVar8 = lVar2 + (longlong)*(int *)(param_1 + 0x230) * 0x40;
    for (; lVar2 != lVar8; lVar2 = lVar2 + 0x40) {
      if (((*(byte *)(lVar2 + 0x29) & 4) == 0) && (*(longlong *)(lVar2 + 0x20) == param_3)) {
        iVar1 = *(int *)(lVar2 + 0xc);
        if (iVar1 == -1) {
          return 0;
        }
        uVar7 = 0;
        if (0 < *(int *)(param_1 + 0x230)) {
          piVar3 = (int *)(*(longlong *)(param_1 + 0x228) + 0xc);
          uVar4 = uVar7;
          uVar6 = uVar7;
          do {
            if ((*(byte *)((longlong)piVar3 + 0x1d) & 4) == 0) {
              if (((*piVar3 == iVar1) && (*(longlong *)(piVar3 + 1) != 0)) &&
                 (*(longlong *)(piVar3 + 1) == param_2)) {
                plVar5 = (longlong *)(param_1 + 0x248);
                piVar3 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                                ::FindId(plVar5,local_res18,param_2);
                if (*piVar3 != -1) {
                  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(plVar5,local_res18,param_2);
                  uVar4 = uVar7;
                  if (local_res18[0] != -1) {
                    uVar4 = (longlong)local_res18[0] * 0x20 + *plVar5;
                  }
                  *(int *)(uVar4 + 8) = (int)uVar6;
                  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(plVar5,local_res18,param_2);
                  if (local_res18[0] != -1) {
                    uVar7 = (longlong)local_res18[0] * 0x20 + *plVar5;
                  }
                  *(int *)(uVar7 + 0x10) = iVar1;
                }
                return 1;
              }
              uVar6 = (ulonglong)((int)uVar6 + 1);
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 0x10;
            if ((longlong)*(int *)(param_1 + 0x230) <= (longlong)uVar4) {
              return 1;
            }
          } while( true );
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143016230 FUN_143016230 body=251 status=ok
// SIG undefined FUN_143016230(void)

undefined8 FUN_143016230(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x228) + 0xc);
    uVar4 = uVar3;
    uVar5 = uVar3;
    do {
      if ((*(byte *)((longlong)piVar2 + 0x1d) & 4) == 0) {
        if (((*piVar2 == *param_3) && (*(longlong *)(piVar2 + 1) != 0)) &&
           (*(longlong *)(piVar2 + 1) == param_2)) {
          plVar1 = (longlong *)(param_1 + 0x248);
          piVar2 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                          ::FindId(plVar1,local_res8,param_2);
          if (*piVar2 != -1) {
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(plVar1,local_res8,param_2);
            uVar5 = uVar3;
            if (local_res8[0] != -1) {
              uVar5 = (longlong)local_res8[0] * 0x20 + *plVar1;
            }
            *(int *)(uVar5 + 8) = (int)uVar4;
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(plVar1,local_res8,param_2);
            if (local_res8[0] != -1) {
              uVar3 = (longlong)local_res8[0] * 0x20 + *plVar1;
            }
            *(int *)(uVar3 + 0x10) = *param_3;
          }
          return 1;
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 0x10;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x230));
  }
  return 0;
}



// FUNCTION 143016330 FUN_143016330 body=190 status=ok
// SIG undefined FUN_143016330(void)

void FUN_143016330(longlong param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x548,0);
  if ((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3c8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x3b8) != 0) {
    local_res8 = *param_2;
    local_resc = param_2[1];
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x18))(param_1 + 0x420,&local_res8,1,param_3 != 3)
    ;
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))(param_1 + 0x420,param_3);
  }
  return;
}



// FUNCTION 1430163f0 SetBoundaryMax body=13 status=ok
// SIG undefined SetBoundaryMax(void)

void USplineMeshComponent::SetBoundaryMax(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x610) = param_2;
  FUN_142fea280();
  return;
}



// FUNCTION 143016400 FUN_143016400 body=23 status=ok
// SIG undefined FUN_143016400(void)

void FUN_143016400(longlong param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(byte *)(param_1 + 0x5a8) = *(byte *)(param_1 + 0x5a8) & 0xfe;
    *(byte *)(param_1 + 0x5a8) = *(byte *)(param_1 + 0x5a8) | param_2;
  }
  return;
}



// FUNCTION 143016420 FUN_143016420 body=12 status=ok
// SIG undefined FUN_143016420(void)

void FUN_143016420(longlong param_1)

{
  *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) | 0x20;
  FUN_142ff0a90();
  return;
}



// FUNCTION 143016430 FUN_143016430 body=104 status=ok
// SIG undefined FUN_143016430(void)

void FUN_143016430(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x68,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1430164a0 FUN_1430164a0 body=124 status=ok
// SIG undefined FUN_1430164a0(void)

void FUN_1430164a0(longlong param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) || ((*(byte *)(param_1 + 0xb8) & 8) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x228);
    lVar3 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar2;
    if (lVar2 != lVar3) {
      while (*(int *)(lVar2 + 0xc) != *param_2) {
        lVar2 = lVar2 + 0x40;
        if (lVar2 == lVar3) {
          return;
        }
      }
      *(undefined8 *)(lVar2 + 0x2c) = *param_3;
    }
  }
  return;
}



// FUNCTION 143016520 FUN_143016520 body=807 status=ok
// SIG undefined FUN_143016520(void)

void FUN_143016520(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int local_98 [2];
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  longlong local_58 [2];
  longlong *local_48;
  int local_40;
  undefined1 local_38;
  
  plVar1 = *(longlong **)(param_1 + 0x560);
  if (plVar1 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x4a8) != 0) {
      lVar7 = FUN_1428dfc70();
      for (lVar10 = *(longlong *)(param_1 + 0x4a8); lVar10 != 0;
          lVar10 = *(longlong *)(lVar10 + 0x30)) {
        if (lVar10 == lVar7) {
          if (*(longlong *)(param_1 + 0x4a8) != 0) goto LAB_14301680a;
          break;
        }
      }
    }
    *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) | 0x10;
    *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x568);
    goto LAB_14301680a;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
  local_98[0] = (**(code **)(*plVar1 + 0x400))(plVar1);
  local_90 = (longlong *)plVar1[0x41];
  local_88 = (longlong *)plVar1[0x42];
  local_80 = plVar1[0x43];
  TArray<FName,FDefaultAllocator>::operator=(&local_78,plVar1 + 0x44);
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(&local_68,plVar1 + 0x46);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_58,plVar1 + 0x48);
  TArray<FName,FDefaultAllocator>::operator=();
  plVar11 = local_48;
  plVar12 = local_68;
  plVar13 = local_78;
  plVar3 = local_88;
  plVar2 = local_90;
  local_38 = (undefined1)plVar1[0x4c];
  if (((local_98[0] < 1) || (local_88 == (longlong *)0x0)) || (local_80 == 0)) {
LAB_1430166aa:
    if (plVar2 != (longlong *)0x0) {
      lVar10 = plVar2[0x12];
      if (lVar10 != 0) {
        lVar5 = FUN_1428dfc70();
        lVar7 = lVar10;
        do {
          if (lVar7 == lVar5) goto LAB_1430166d7;
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
      lVar10 = 0;
LAB_1430166d7:
      if (*(longlong *)(param_1 + 0x4a8) != 0) {
        lVar6 = FUN_1428dfc70();
        lVar7 = *(longlong *)(param_1 + 0x4a8);
        for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar6) goto LAB_143016705;
        }
      }
      lVar7 = 0;
LAB_143016705:
      bVar8 = 0;
      if (lVar10 == lVar7) goto LAB_14301670c;
    }
LAB_143016751:
    *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) | 0x10;
    *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x568);
  }
  else {
    if (local_90 == (longlong *)0x0) goto LAB_143016751;
    for (plVar9 = local_78; plVar9 != local_78 + local_70; plVar9 = plVar9 + 1) {
      if (*plVar9 == 0) goto LAB_1430166aa;
    }
    for (plVar9 = local_68; plVar9 != local_68 + local_60; plVar9 = plVar9 + 1) {
      if (*plVar9 == 0) goto LAB_1430166aa;
    }
    for (plVar9 = local_48; plVar9 != local_48 + local_40; plVar9 = plVar9 + 1) {
      if (*plVar9 == 0) goto LAB_1430166aa;
    }
    cVar4 = (**(code **)(*local_90 + 0x1c8))();
    if ((cVar4 == '\0') || (cVar4 = (**(code **)(*plVar3 + 0x1c8))(), cVar4 == '\0'))
    goto LAB_1430166aa;
    bVar8 = 1;
LAB_14301670c:
    *(byte *)(param_1 + 0x578) = bVar8 ^ 1;
    if (bVar8 != 0) {
      FUN_143001c50(param_1 + 0x580,local_98);
      plVar11 = local_48;
      plVar12 = local_68;
      plVar13 = local_78;
    }
    *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)((longlong)plVar1 + 0x1fc);
    *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)((longlong)plVar1 + 0x204);
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
LAB_14301680a:
  lVar10 = *(longlong *)(param_1 + 0x570);
  if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x92) & 0x40) == 0)) {
    FUN_14223ef90(lVar10,1);
  }
  return;
}



// FUNCTION 143016850 FUN_143016850 body=183 status=ok
// SIG undefined FUN_143016850(void)

void FUN_143016850(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  if (((char)param_1[0x25] == '\x03') && (lVar1 = *(longlong *)(param_2 + 0x208), lVar1 != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x1d8);
    (**(code **)(*param_1 + 0x600))();
    param_1[0x98] = lVar2;
    if ((*(longlong *)(lVar1 + 0x1d8) != 0) &&
       (*(char *)(*(longlong *)(lVar1 + 0x1d8) + 0x3d) != '\0')) {
      *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 0x40;
      cVar3 = (**(code **)(*param_1 + 0x758))(param_1);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x700))(param_1,0);
      }
    }
    if (*(longlong *)(lVar1 + 0x1d8) != 0) {
      *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(*(longlong *)(lVar1 + 0x1d8) + 0x38);
      return;
    }
    *(undefined1 *)(param_1 + 0xa4) = 1;
  }
  return;
}



// FUNCTION 143016910 FUN_143016910 body=2306 status=ok
// SIG undefined FUN_143016910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143016910(longlong *param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_138 [32];
  longlong *local_118;
  char local_108;
  int local_100;
  uint uStack_fc;
  uint *puStack_f8;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  longlong local_b0 [2];
  undefined2 local_a0;
  byte local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  ulonglong local_68 [4];
  ulonglong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar19 = (longlong *)param_1[0x91];
  if (plVar19 != (longlong *)0x0) {
    if (((longlong *)param_1[0x2d] == plVar19) || (plVar19[0x32] != 0)) {
      (**(code **)(*plVar19 + 0x3b0))(plVar19,1);
    }
    param_1[0x91] = 0;
  }
  plVar19 = (longlong *)param_1[0x90];
  if (plVar19 != (longlong *)0x0) {
    if (((longlong *)param_1[0x2d] == plVar19) || (plVar19[0x32] != 0)) {
      (**(code **)(*plVar19 + 0x3b0))(plVar19,1);
    }
    param_1[0x90] = 0;
  }
  plVar19 = (longlong *)param_1[0xac];
  local_e0 = param_1[0x2d];
  local_108 = '\0';
  local_48 = (ulonglong *)0x0;
  local_40 = 0;
  local_98 = param_1;
  if ((plVar19 != (longlong *)0x0) && ((char)param_1[0xab] == '\0')) {
    local_118 = local_b0;
    local_9c = (undefined4)param_1[0x96];
    local_9e = *(byte *)((longlong)param_1 + 0x4a4) >> 1 & 1;
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_9d = 1;
    local_a0 = 0x101;
    (**(code **)(*plVar19 + 0x4e8))(plVar19,param_1,0,1);
    plVar19 = param_1 + 0x56;
    local_100 = 0;
    puVar2 = (uint *)(param_1 + 0x58);
    uStack_ec = 0;
    iStack_e8 = 0;
    uStack_fc = 1;
    uVar3 = *(uint *)(param_1 + 0x5b);
    if (uVar3 != 0) {
      puVar17 = (uint *)param_1[0x5a];
      if ((uint *)param_1[0x5a] == (uint *)0x0) {
        puVar17 = puVar2;
      }
      uVar4 = *puVar17;
      iStack_e8 = 0;
      local_100 = 0;
      while (uVar4 == 0) {
        lVar13 = (longlong)local_100;
        iStack_e8 = iStack_e8 + 0x20;
        iVar10 = local_100 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_100;
        local_100 = iVar10;
        if (bVar6) goto LAB_143016ae1;
        uVar4 = puVar17[lVar13 + 1];
      }
      uStack_fc = uVar4 - 1 & uVar4 ^ uVar4;
      iVar10 = 0x1f;
      if (uStack_fc != 0) {
        for (; uStack_fc >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_fc == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_ec = (iStack_e8 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_ec) {
LAB_143016ae1:
        uStack_ec = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x5b);
    uStack_c0 = 0xffffffff;
    uStack_bc = uStack_ec;
    local_b8 = CONCAT44(uStack_e4,iStack_e8);
    uStack_88 = CONCAT44(uStack_fc,local_100);
    local_f0 = -1 << ((byte)uVar4 & 0x1f);
    uVar16 = uVar4 & 0xffffffe0;
    iStack_d0 = local_100;
    uStack_cc = uStack_fc;
    puStack_f8 = puVar2;
    uStack_ec = uVar4;
    local_c8 = puVar2;
    local_90 = plVar19;
    puStack_80 = puVar2;
    uStack_70 = local_b8;
    local_d8 = plVar19;
    uStack_78 = uStack_c0;
    uStack_74 = uStack_bc;
    if (uVar4 != uVar3) {
      puVar17 = (uint *)param_1[0x5a];
      if ((uint *)param_1[0x5a] == (uint *)0x0) {
        puVar17 = puVar2;
      }
      uVar12 = puVar17[(int)uVar4 >> 5] & local_f0;
      iVar10 = (int)uVar4 >> 5;
      while (uVar12 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_143016bba;
        uVar12 = puVar17[(longlong)iVar10 + 1];
        local_f0 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
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
      uStack_ec = (uVar16 - iVar10) + 0x1f;
      uVar4 = uStack_ec;
      if ((int)uVar3 < (int)uStack_ec) {
LAB_143016bba:
        uStack_ec = uVar3;
        uVar4 = uVar3;
      }
    }
    while( true ) {
      uVar21 = local_e0;
      if ((uStack_bc == uVar4) && (local_c8 == puVar2)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (local_d8 == plVar19)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) break;
      uVar21 = *(ulonglong *)(*local_d8 + (longlong)(int)uStack_bc * 0x10);
      if (uVar21 != 0) {
        lVar13 = FUN_1429bed90();
        uVar9 = local_40;
        if ((*(int *)(*(longlong *)(uVar21 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar21 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((((bVar6) && ((*(byte *)(uVar21 + 0x2f0) & 0x40) == 0)) &&
            ((*(byte *)(uVar21 + 0x398) & 1) == 0)) &&
           (((*(byte *)(uVar21 + 0x24c) & 0x40) == 0 && ((*(byte *)(uVar21 + 200) & 4) == 0)))) {
          lVar13 = (longlong)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (local_40._4_4_ < iVar10) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_68,uVar9 & 0xffffffff);
          }
          puVar11 = local_68;
          if (local_48 != (ulonglong *)0x0) {
            puVar11 = local_48;
          }
          puVar11[lVar13] = uVar21;
        }
      }
      uStack_c0 = uStack_c0 & ~uStack_cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    }
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    if ((int)local_40 != 0) {
      cVar7 = '\0';
      goto LAB_143016f74;
    }
  }
  lVar13 = param_1[0xad];
  plVar19 = (longlong *)(lVar13 + 0x2b0);
  local_100 = 0;
  uVar3 = *(uint *)(lVar13 + 0x2d8);
  puVar2 = (uint *)(lVar13 + 0x2c0);
  uStack_fc = 1;
  uStack_ec = 0;
  iStack_e8 = 0;
  if (uVar3 != 0) {
    puVar17 = *(uint **)(lVar13 + 0x2d0);
    if (*(uint **)(lVar13 + 0x2d0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar4 = *puVar17;
    while (uVar4 == 0) {
      lVar14 = (longlong)local_100;
      iStack_e8 = iStack_e8 + 0x20;
      iVar10 = local_100 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_100;
      local_100 = iVar10;
      if (bVar6) goto LAB_143016da2;
      uVar4 = puVar17[lVar14 + 1];
    }
    uStack_fc = uVar4 - 1 & uVar4 ^ uVar4;
    iVar10 = 0x1f;
    if (uStack_fc != 0) {
      for (; uStack_fc >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_fc == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_ec = (iStack_e8 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_ec) {
LAB_143016da2:
      uStack_ec = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar13 + 0x2d8);
  uStack_c0 = 0xffffffff;
  uStack_bc = uStack_ec;
  local_b8 = CONCAT44(uStack_e4,iStack_e8);
  uStack_88 = CONCAT44(uStack_fc,local_100);
  local_f0 = -1 << ((byte)uVar4 & 0x1f);
  uVar16 = uVar4 & 0xffffffe0;
  iStack_d0 = local_100;
  uStack_cc = uStack_fc;
  puStack_f8 = puVar2;
  uStack_ec = uVar4;
  local_c8 = puVar2;
  local_90 = plVar19;
  puStack_80 = puVar2;
  uStack_70 = local_b8;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  local_d8 = plVar19;
  if (uVar4 != uVar3) {
    puVar17 = *(uint **)(lVar13 + 0x2d0);
    if (*(uint **)(lVar13 + 0x2d0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar12 = puVar17[(int)uVar4 >> 5] & local_f0;
    iVar10 = (int)uVar4 >> 5;
    while (uVar12 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_143016e79;
      uVar12 = puVar17[(longlong)iVar10 + 1];
      local_f0 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
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
    uStack_ec = (uVar16 - iVar10) + 0x1f;
    uVar4 = uStack_ec;
    if ((int)uVar3 < (int)uStack_ec) {
LAB_143016e79:
      uStack_ec = uVar3;
      uVar4 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_bc == uVar4) && (local_c8 == puVar2)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((bVar6) && (local_d8 == plVar19)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    uVar21 = *(ulonglong *)(*local_d8 + (longlong)(int)uStack_bc * 0x10);
    if (uVar21 != 0) {
      lVar13 = FUN_1429bed90();
      uVar9 = local_40;
      if ((*(int *)(*(longlong *)(uVar21 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar21 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(uVar21 + 0x2f0) & 0x40) == 0)) &&
         ((*(byte *)(uVar21 + 0x398) & 1) == 0)) {
        lVar13 = (longlong)(int)local_40;
        iVar10 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        if (local_40._4_4_ < iVar10) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_68,uVar9 & 0xffffffff);
        }
        puVar11 = local_68;
        if (local_48 != (ulonglong *)0x0) {
          puVar11 = local_48;
        }
        puVar11[lVar13] = uVar21;
      }
    }
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  }
  cVar7 = '\x01';
  local_108 = '\x01';
  uVar21 = local_e0;
LAB_143016f74:
  puVar11 = local_68;
  if (local_48 != (ulonglong *)0x0) {
    puVar11 = local_48;
  }
  puVar1 = puVar11 + (int)local_40;
  uVar9 = 0;
  if (puVar11 != puVar1) {
    do {
      uVar5 = *puVar11;
      uVar8 = uVar5;
      if (cVar7 != '\0') {
        uVar8 = FUN_142fe2030(&local_98,uVar5);
      }
      uVar20 = uVar9;
      if (uVar8 != 0) {
        *(byte *)(uVar8 + 0x2f0) = *(byte *)(uVar8 + 0x2f0) & 0xf7;
        if (uVar9 == 0) {
          lVar13 = FUN_142a07000();
          if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          uVar9 = uVar8;
          if (!bVar6) {
            uVar9 = 0;
          }
          param_1[0x91] = uVar9;
          lVar13 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          uVar9 = uVar8;
          if (!bVar6) {
            uVar9 = 0;
          }
          param_1[0x90] = uVar9;
          *(byte *)(uVar8 + 0x24c) = *(byte *)(uVar8 + 0x24c) | 0x10;
          FUN_14223f010(param_1,uVar8);
          uVar20 = uVar8;
          if (((uVar21 == 0) || (uVar21 == uVar8)) || (*(longlong *)(uVar21 + 400) == 0))
          goto LAB_143017125;
          *(undefined8 *)(uVar8 + 0x1ec) = *(undefined8 *)(uVar21 + 0x1ec);
          *(undefined4 *)(uVar8 + 500) = *(undefined4 *)(uVar21 + 500);
          *(undefined8 *)(uVar8 + 0x1f8) = *(undefined8 *)(uVar21 + 0x1f8);
          *(undefined4 *)(uVar8 + 0x200) = *(undefined4 *)(uVar21 + 0x200);
          if ((char)param_1[0x25] != '\x03') {
            *(undefined8 *)(uVar8 + 0x204) = *(undefined8 *)(uVar21 + 0x204);
            *(undefined4 *)(uVar8 + 0x20c) = *(undefined4 *)(uVar21 + 0x20c);
          }
          uVar18 = *(undefined8 *)(uVar21 + 0x198);
          puVar15 = &DAT_146af29ec;
          uVar9 = *(ulonglong *)(uVar21 + 400);
        }
        else {
          uVar18 = *(undefined8 *)(uVar5 + 0x198);
          puVar15 = (undefined4 *)&DAT_146532188;
        }
        FUN_142382f60(uVar8,uVar9,puVar15,uVar18);
      }
LAB_143017125:
      puVar11 = puVar11 + 1;
      uVar9 = uVar20;
      cVar7 = local_108;
    } while (puVar11 != puVar1);
    if (uVar20 != 0) {
      plVar19 = (longlong *)param_1[0xa6];
      if (plVar19 != (longlong *)0x0) {
        local_e0 = 0;
        cVar7 = (**(code **)(*plVar19 + 0x400))(plVar19,0);
        if (cVar7 != '\0') {
          (**(code **)(*(longlong *)param_1[0xa6] + 0x5b8))((longlong *)param_1[0xa6],0);
        }
        local_e0 = 0;
        FUN_142382f60(param_1[0xa6],uVar20,&DAT_146532184,0);
      }
      (**(code **)(*param_1 + 0x708))(param_1,uVar20);
      FUN_143017540(param_1,uVar20);
    }
  }
  plVar19 = (longlong *)param_1[0xad];
  if (((char)plVar19[0x25] == '\x03') || ((*(byte *)(plVar19 + 0x80) & 1) == 0)) {
    (**(code **)(*plVar19 + 0x310))(plVar19,1);
  }
  if (local_48 != (ulonglong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143017220 FUN_143017220 body=686 status=ok
// SIG undefined FUN_143017220(void)

void FUN_143017220(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  pwVar9 = (wchar_t *)0x0;
  pwVar7 = pwVar9;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar8 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar8;
    pwVar7 = (wchar_t *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18);
  }
  if (((*(uint *)(pwVar7 + 4) >> 0x1d & 1) == 0) &&
     ((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) == 0)) {
    bVar2 = true;
    if (((char)param_1[0x25] == '\x03') || (param_1[0x1b] == 0)) {
      (**(code **)(*param_2 + 0x8d0))(param_2,1);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ADroppedInventoryItemPickup::OnPhysicsWake",L"::");
      pwVar7 = pwVar9;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar7 = pwVar3;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_14074ba20(param_2 + 0xb2,param_1,FUN_143008700,local_res8);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ADroppedInventoryItemPickup::OnPhysicsSleep",L"::");
      while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar9 = pwVar6;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      FUN_14074ba20(param_2 + 0xb4,param_1,FUN_1430086b0,local_res8);
      (**(code **)(*param_2 + 0x5b8))(param_2,1);
    }
    else {
      bVar2 = false;
      (**(code **)(*param_1 + 0x2a8))(param_1);
      (**(code **)(*param_1 + 0x828))(param_1);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b458e0) &&
       (_Init_thread_header(&DAT_146b458e0), DAT_146b458e0 == -1)) {
      FName::FName(&DAT_146b458d8,L"Pickup",1);
      _Init_thread_footer(&DAT_146b458e0);
    }
    *(undefined1 *)((longlong)param_2 + 0x303) = 0;
    (**(code **)(*param_2 + 0x640))(param_2,DAT_146b458d8);
    (**(code **)(*param_2 + 0x7b0))(param_2,(int)param_1[0xbd]);
    (**(code **)(*param_2 + 0x7c0))(param_2,0x3f800000);
    (**(code **)(*param_2 + 0x630))(param_2,1);
    FUN_142236cd0(param_1);
    cVar4 = (**(code **)(*param_1 + 0x740))(param_1);
    if (cVar4 != '\x01') {
      FUN_1423974f0(param_2,1);
    }
    if ((bVar2) && ((*(byte *)(param_1 + 0xb5) & 1) != 0)) {
      (**(code **)(*param_2 + 0x820))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014301747c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x7a0))(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1430174d0 FUN_1430174d0 body=110 status=ok
// SIG undefined FUN_1430174d0(void)

void FUN_1430174d0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    if ((char)param_2[0x25] == '\x03') {
      FUN_14223ef90(param_2,*(byte *)(param_1 + 0x17) >> 3 & 1);
      FUN_14223ec50(param_2,1);
    }
    cVar1 = (**(code **)(*param_1 + 0x4b0))(param_1,param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x448))(param_2,param_1[0x23]);
    }
  }
  return;
}



// FUNCTION 143017540 FUN_143017540 body=379 status=ok
// SIG undefined FUN_143017540(void)

void FUN_143017540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  int *local_20;
  undefined8 *local_18;
  
  lVar2 = *(longlong *)(param_1 + 0x560);
  local_38._0_4_ = DAT_1464aa6c0;
  local_38._4_4_ = DAT_1464aa6c4;
  uStack_30._0_4_ = DAT_1464aa6c8;
  uStack_30._4_4_ = DAT_1464aa6cc;
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x210) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x210) + 0xb8), lVar4 != 0)) {
    local_38._0_4_ = (undefined4)*(undefined8 *)(lVar4 + 0x40);
    local_38._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x40) >> 0x20);
    uStack_30._0_4_ = (undefined4)*(undefined8 *)(lVar4 + 0x48);
    uStack_30._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x48) >> 0x20);
  }
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x210) == 0)) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x210) + 0xb8), lVar4 == 0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(lVar4 + 0x54);
  }
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x210) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x210) + 0xb8), lVar2 == 0)) {
    local_res8[0] = 0;
  }
  else {
    local_res8[0] = *(int *)(lVar2 + 0x50);
  }
  if ((cVar5 != '\0') && (-1 < local_res8[0])) {
    local_20 = local_res8;
    local_18 = &local_38;
    local_28 = param_1;
    FUN_142fe0d50(&local_28,param_2);
    plVar6 = *(longlong **)(param_2 + 0x1a0);
    plVar1 = plVar6 + *(int *)(param_2 + 0x1a8);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        lVar4 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_142fe0d50(&local_28,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430176c0 FUN_1430176c0 body=1196 status=ok
// SIG undefined FUN_1430176c0(void)

void FUN_1430176c0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  wchar_t *pwVar14;
  longlong local_res20;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  int local_40;
  
  uVar7 = FUN_142e80f20();
  AActor::GetComponentsByClass(param_1,&local_48,uVar7);
  iVar13 = 0;
  if (0 < local_40) {
    local_res20 = 0;
    do {
      pwVar14 = (wchar_t *)0x0;
      plVar3 = *(longlong **)(local_48 + local_res20);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = FUN_142e80f20();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          cVar6 = (**(code **)(*param_1 + 0x740))(param_1);
          if (cVar6 == '\x02') {
            (**(code **)(*plVar3 + 0x290))(plVar3,0,0);
            pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AInventoryItemPickup::OnUsedBy",L"::");
            pwVar9 = pwVar14;
            while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
              pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
              pwVar9 = pwVar5;
            }
            FName::FName(&local_78,pwVar9 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar3 + 99,param_1,local_78);
            pwVar9 = _guard_xfg_dispatch_icall_nop
                               (L"&AInventoryItemPickup::OnLookedAtByPlayer",L"::");
            while (pwVar10 = pwVar9, pwVar10 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
              pwVar14 = pwVar10;
            }
            FName::FName(&local_70,pwVar14 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar3 + 0x6d,param_1,local_70);
          }
          else {
            (**(code **)(*plVar3 + 0x290))(plVar3,1);
            pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AInventoryItemPickup::OnUsedBy",L"::");
            while (pwVar10 = pwVar9, pwVar10 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
              pwVar14 = pwVar10;
            }
            FName::FName(&local_88,pwVar14 + 2,1);
            lVar8 = local_88;
            plVar1 = plVar3 + 99;
            FWeakObjectPtr::operator=(&local_68,0);
            local_60 = 0;
            FWeakObjectPtr::operator=(&local_68,param_1);
            local_60 = lVar8;
            if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_68), lVar8 != 0)) {
              UObject::FindFunction(lVar8,local_60);
            }
            piVar11 = (int *)*plVar1;
            lVar8 = plVar3[100];
            for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)(int)lVar8 * 4;
                piVar12 = piVar12 + 4) {
              if (((*piVar12 == local_68) && (piVar12[1] == local_64)) ||
                 ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
                  (cVar6 = FWeakObjectPtr::IsValid(&local_68), cVar6 == '\0')))) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar4) && (*(longlong *)(piVar12 + 2) == local_60)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if (bVar4) {
                if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_1430178ea;
                break;
              }
            }
            iVar2 = (int)plVar3[100];
            *(int *)(plVar3 + 100) = iVar2 + 1;
            if (*(int *)((longlong)plVar3 + 0x324) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
            }
            piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
            *piVar11 = local_68;
            piVar11[1] = local_64;
            *(longlong *)(piVar11 + 2) = local_60;
LAB_1430178ea:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
            pwVar9 = _guard_xfg_dispatch_icall_nop
                               (L"&AInventoryItemPickup::OnLookedAtByPlayer",L"::");
            pwVar14 = (wchar_t *)0x0;
            while (pwVar10 = pwVar9, pwVar10 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
              pwVar14 = pwVar10;
            }
            FName::FName(&local_80,pwVar14 + 2,1);
            lVar8 = local_80;
            plVar1 = plVar3 + 0x6d;
            FWeakObjectPtr::operator=(&local_58,0);
            local_50 = 0;
            FWeakObjectPtr::operator=(&local_58,param_1);
            local_50 = lVar8;
            if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
              UObject::FindFunction(lVar8,local_50);
            }
            piVar11 = (int *)*plVar1;
            lVar8 = plVar3[0x6e];
            for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)(int)lVar8 * 4;
                piVar12 = piVar12 + 4) {
              if (((*piVar12 == local_58) && (piVar12[1] == local_54)) ||
                 ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
                  (cVar6 = FWeakObjectPtr::IsValid(&local_58), cVar6 == '\0')))) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar4) && (*(longlong *)(piVar12 + 2) == local_50)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if (bVar4) {
                if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_143017a33;
                break;
              }
            }
            iVar2 = (int)plVar3[0x6e];
            *(int *)(plVar3 + 0x6e) = iVar2 + 1;
            if (*(int *)((longlong)plVar3 + 0x374) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
            }
            piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
            *piVar11 = local_58;
            piVar11[1] = local_54;
            *(longlong *)(piVar11 + 2) = local_50;
LAB_143017a33:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
          }
        }
      }
      local_res20 = local_res20 + 8;
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_40);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143017ba0 FUN_143017ba0 body=612 status=ok
// SIG undefined FUN_143017ba0(void)

bool FUN_143017ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
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
  
  bVar9 = false;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x520) == '\0')) {
    plVar3 = *(longlong **)(param_2 + 0x568);
    if (plVar3 != (longlong *)0x0) {
      uVar5 = FUN_14301f8f0();
      lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
      if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x208) != 0)) {
        return (bool)*(undefined1 *)(*(longlong *)(lVar6 + 0x208) + 0x1e1);
      }
    }
    if (*(longlong *)(param_2 + 0x4c0) != 0) {
      plVar3 = (longlong *)(param_1 + 0x248);
      iVar1 = *(int *)(param_1 + 0x270);
      puStack_38 = (uint *)(param_1 + 600);
      local_88 = 0;
      uStack_84 = 1;
      local_78._4_4_ = 0;
      uStack_70 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x268);
        if (*(uint **)(param_1 + 0x268) == (uint *)0x0) {
          puVar8 = puStack_38;
        }
        uVar2 = *puVar8;
        uStack_70 = 0;
        local_88 = 0;
        while (uVar2 == 0) {
          lVar6 = (longlong)local_88;
          uStack_70 = uStack_70 + 0x20;
          iVar7 = local_88 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar7;
          if (bVar4) goto LAB_143017cdf;
          uVar2 = puVar8[lVar6 + 1];
        }
        uStack_84 = -uVar2 & uVar2;
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
        local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
        if (iVar1 < local_78._4_4_) {
LAB_143017cdf:
          local_78._4_4_ = iVar1;
        }
      }
      auStack_30._4_4_ = local_78._4_4_;
      auStack_30._0_4_ = 0xffffffff;
      auStack_30._8_4_ = uStack_70;
      auStack_30._12_4_ = iStack_6c;
      iStack_40 = local_88;
      uStack_3c = uStack_84;
      local_50 = 0;
      local_20._0_4_ = SUB84(plVar3,0);
      local_20._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
      uStack_70 = 0xffffffff;
      iStack_6c = local_78._4_4_;
      iStack_80 = local_88;
      uStack_7c = uStack_84;
      local_68._8_4_ = (undefined4)local_20;
      local_68._0_8_ = auStack_30._8_8_;
      local_68._12_4_ = local_20._4_4_;
      bVar4 = local_78._4_4_ < *(int *)(param_1 + 0x270);
      local_58 = plVar3;
      local_48 = plVar3;
      local_20 = plVar3;
      local_78 = puStack_38;
      if (bVar4) {
        do {
          if (*(longlong *)(param_2 + 0x4c0) == *(longlong *)((longlong)iStack_6c * 0x20 + *plVar3))
          {
            lVar6 = (longlong)iStack_6c * 0x20 + *plVar3;
            iVar1 = *(int *)(lVar6 + 8);
            if ((iVar1 < 0) || (*(int *)(param_1 + 0x230) <= iVar1)) {
              if (*(char *)(lVar6 + 0xc) == '\0') {
                bVar9 = true;
              }
            }
            else {
              bVar9 = *(longlong *)((longlong)iVar1 * 0x40 + 0x20 + *(longlong *)(param_1 + 0x228))
                      != 0;
            }
            break;
          }
          uStack_70 = uStack_70 & ~uStack_7c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
        } while (iStack_6c < (int)local_78[6]);
        if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
        }
      }
    }
  }
  return bVar9;
}



// FUNCTION 143017e10 FUN_143017e10 body=94 status=ok
// SIG undefined FUN_143017e10(void)

void FUN_143017e10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_2 = 0;
  if ((param_1[0x24] == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  puVar2 = (undefined8 *)FUN_143014d70(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *param_2 = *puVar2;
    (**(code **)(*param_1 + 0x400))(param_1,puVar2);
  }
  return;
}



// FUNCTION 143017e70 FUN_143017e70 body=71 status=ok
// SIG undefined FUN_143017e70(void)

void FUN_143017e70(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1[0x24] == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = FUN_143014d70(param_1);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143017eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))(param_1,lVar1);
  return;
}



// FUNCTION 143017ec0 FUN_143017ec0 body=539 status=ok
// SIG undefined FUN_143017ec0(void)

void FUN_143017ec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong *local_40;
  ulonglong local_38;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x1f8) < 1)) {
    local_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_1430125c0(param_1,param_2,&local_40);
    plVar1 = local_40;
    iVar2 = (int)local_38;
    uVar8 = (ulonglong)(int)local_38;
    plVar6 = local_40 + uVar8 * 0xf;
    if (local_40 != plVar6) {
      plVar5 = local_40 + 2;
      do {
        if ((((plVar5[-2] != 0) && (plVar5[-1] != 0)) && (*plVar5 != 0)) &&
           ((0 < (int)plVar5[1] && (plVar5[0xb] != 0)))) {
          lVar3 = *(longlong *)(param_1 + 0x120);
          local_58 = 0;
          local_50 = 0;
          local_4c = 0;
          local_44 = 0;
          local_40 = (longlong *)0x0;
          local_38 = local_38 & 0xffffffff00000000;
          if (lVar3 == 0) {
            lVar3 = FUN_1423407b0(param_1);
          }
          plVar4 = (longlong *)FUN_143018960(plVar5 + -2,lVar3,&local_40,&local_4c,&local_58,0,0);
          if (plVar4 != (longlong *)0x0) {
            if ((0 < *(int *)(param_1 + 0x1c0)) &&
               (plVar4[0xbb] = **(longlong **)(param_1 + 0x1b8), (*(byte *)(plVar4 + 0x10) & 1) == 0
               )) {
              FUN_143013120(plVar4);
            }
            (**(code **)(*plVar4 + 0x818))(plVar4,plVar5[0xb],plVar5[10],(char)plVar5[0xc]);
            if (*(char *)(param_1 + 0x1c8) != '\0') {
              (**(code **)(*plVar4 + 0x3a0))(plVar4,0);
            }
          }
        }
        plVar4 = plVar5 + 0xd;
        plVar5 = plVar5 + 0xf;
      } while (plVar4 != plVar6);
    }
    if (iVar2 != 0) {
      plVar6 = plVar1 + 7;
      do {
        if (plVar6[2] != 0) {
          FMemory::Free();
        }
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar6 + -3);
        plVar6 = plVar6 + 0xf;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
  return;
}



// FUNCTION 1430180e0 FUN_1430180e0 body=94 status=ok
// SIG undefined FUN_1430180e0(void)

void FUN_1430180e0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_2 = 0;
  if ((param_1[0x24] == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  puVar2 = (undefined8 *)FUN_143014d70(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *param_2 = *puVar2;
    (**(code **)(*param_1 + 0x408))(param_1,puVar2);
  }
  return;
}



// FUNCTION 143018140 FUN_143018140 body=71 status=ok
// SIG undefined FUN_143018140(void)

void FUN_143018140(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1[0x24] == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = FUN_143014d70(param_1);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014301817a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))(param_1,lVar1);
  return;
}



// FUNCTION 143018190 FUN_143018190 body=914 status=ok
// SIG undefined FUN_143018190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143018190(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong local_res10;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_ac;
  undefined4 local_a4;
  longlong *local_a0;
  int local_98;
  int local_94;
  longlong *local_90;
  undefined4 local_88;
  longlong local_80;
  ulonglong local_78;
  
  if ((param_2 != 0) && (iVar3 = FUN_14233f450(), 2 < iVar3)) {
    iVar3 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_143012b70(param_1,param_2,&local_80);
    iVar14 = 0;
    if (*(longlong *)(param_1 + 0x118) == 0) {
      local_b8 = (longlong *)0x0;
      pplVar5 = &local_b8;
      local_b0 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar8 == 0) {
        local_a4 = DAT_1468b5d98;
        pplVar4 = &local_ac;
        local_ac = _DAT_1468b5d90;
      }
      else {
        pplVar4 = &local_b8;
        local_b0 = *(undefined4 *)(lVar8 + 0x228);
        local_b8 = *(longlong **)(lVar8 + 0x220);
      }
      local_98 = *(int *)(pplVar4 + 1);
      pplVar5 = &local_a0;
      local_a0 = *pplVar4;
    }
    local_90 = *pplVar5;
    local_88 = *(undefined4 *)(pplVar5 + 1);
    local_res10 = *(longlong *)(param_1 + 0x120);
    local_a0 = (longlong *)0x0;
    local_94 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_ac = (longlong *)0x0;
    local_a4 = 0;
    if (local_res10 == 0) {
      local_res10 = FUN_1423407b0(param_1);
    }
    uVar17 = (ulonglong)(int)local_78;
    lVar11 = uVar17 * 0x60 + local_80;
    lVar8 = local_80;
    plVar9 = local_a0;
    iVar12 = iVar3;
    if (local_80 != lVar11) {
      do {
        lVar6 = FUN_143018960(lVar8,local_res10,&local_90,&local_ac,&local_b8,0,0);
        iVar14 = iVar3;
        if (lVar6 != 0) {
          local_98 = iVar3 + 1;
          if (iVar12 < local_98) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a0,iVar3);
            plVar9 = local_a0;
            iVar12 = local_94;
          }
          plVar9[iVar3] = lVar6;
          iVar14 = local_98;
        }
        lVar8 = lVar8 + 0x60;
        iVar3 = iVar14;
      } while (lVar8 != lVar11);
      uVar17 = local_78 & 0xffffffff;
    }
    plVar9 = local_a0;
    uVar15 = 0;
    uVar13 = (ulonglong)((longlong)(local_a0 + iVar14) + (7 - (longlong)local_a0)) >> 3;
    if (local_a0 + iVar14 < local_a0) {
      uVar13 = uVar15;
    }
    plVar10 = local_a0;
    if (uVar13 != 0) {
      do {
        plVar2 = (longlong *)*plVar10;
        if (plVar2 != (longlong *)0x0) {
          if (*(int *)(param_1 + 0x1c0) < 1) {
            if (1.001 < *(float *)(param_1 + 0x1b0)) goto LAB_143018402;
          }
          else {
            plVar2[0xbb] = **(longlong **)(param_1 + 0x1b8);
            if ((*(byte *)(plVar2 + 0x10) & 1) == 0) {
              FUN_143013120(plVar2);
            }
LAB_143018402:
            uVar1 = *(undefined4 *)(param_1 + 0x1b0);
            if ((char)plVar2[0x25] == '\x03') {
              (**(code **)(*plVar2 + 0x600))(plVar2);
              plVar7 = (longlong *)plVar2[0x91];
              if ((plVar7 != (longlong *)0x0) ||
                 (plVar7 = (longlong *)plVar2[0x90], plVar7 != (longlong *)0x0)) {
                *(undefined4 *)(plVar2 + 0xc1) = uVar1;
                *(undefined4 *)(plVar2 + 0xc9) = uVar1;
                (**(code **)(*plVar7 + 0x7e0))(plVar7,uVar1);
              }
            }
          }
          if (*(char *)(param_1 + 0x1c8) != '\0') {
            (**(code **)(*plVar2 + 0x3a0))(plVar2,0);
          }
        }
        uVar15 = uVar15 + 1;
        plVar10 = plVar10 + 1;
      } while (uVar15 != uVar13);
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
    if ((int)uVar17 != 0) {
      plVar9 = (longlong *)(local_80 + 0x38);
      do {
        if (plVar9[2] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar9 + -3);
        plVar9 = plVar9 + 0xc;
        uVar16 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar16;
      } while (uVar16 != 0);
    }
    if (local_80 != 0) {
      FMemory::Free(local_80);
    }
  }
  return;
}



// FUNCTION 143018530 FUN_143018530 body=578 status=ok
// SIG undefined FUN_143018530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143018530(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
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
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar1 != 0) &&
       (((param_1[0xad] == 0 || ((char)param_1[0xab] != '\0')) &&
        (lVar2 = (**(code **)(*param_1 + 0x6f0))(param_1), lVar2 != 0)))) {
      *(undefined1 *)(param_1 + 0xaf) = 1;
      (**(code **)(*param_1 + 0x6f8))(param_1,lVar2);
      if (param_1[0xac] == 0) {
        *(undefined1 *)(param_1 + 0xa4) = 1;
        *(undefined4 *)(param_1 + 0xba) = *(undefined4 *)(lVar1 + 0x790);
        uVar3 = AActor::GetWorldTimerManager(param_1);
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          plVar4[2] = (longlong)FUN_14301d8f0;
          lVar1 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar1;
          *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_90 = 0xbf800000;
        local_98 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar3,param_1 + 0xb9,&local_88,0x3e4ccccd);
        if (local_28 != 0) {
          plVar5 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar5 = local_38;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar1 = FMemory::Realloc(plVar4,0,0);
          if (lVar1 != 0) {
            FMemory::Free(lVar1);
          }
        }
      }
      else {
        FUN_143016850();
      }
    }
  }
  return;
}



// FUNCTION 143018780 FUN_143018780 body=467 status=ok
// SIG undefined FUN_143018780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143018780(longlong *param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54 [12];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [40];
  undefined1 local_10;
  undefined4 local_c;
  
  if (param_1[0x95] != 0) {
    lVar5 = FUN_1428dfc70();
    for (lVar6 = param_1[0x95]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar5) {
        if (param_1[0x95] == 0) {
          return 0;
        }
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar6 == 0) {
          return 0;
        }
        uVar3 = FActorSpawnParameters::FActorSpawnParameters(local_38);
        lVar5 = param_1[0x2d];
        local_10 = 1;
        local_c = 0x40;
        if (lVar5 == 0) {
          uVar3 = (undefined4)DAT_1468b5da0;
          uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_64 = DAT_1468b5da8;
        }
        else {
          local_48 = *(float *)(lVar5 + 0x210);
          fStack_44 = *(float *)(lVar5 + 0x214);
          fStack_40 = *(float *)(lVar5 + 0x218);
          fStack_3c = *(float *)(lVar5 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_44);
          auVar2._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_48);
          auVar2._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_40);
          auVar2._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_3c);
          iVar4 = movmskps(uVar3,auVar2);
          lVar10 = lVar5;
          if (iVar4 != 0) {
            *(float *)(lVar5 + 0x250) = local_48;
            *(float *)(lVar5 + 0x254) = fStack_44;
            *(float *)(lVar5 + 600) = fStack_40;
            *(float *)(lVar5 + 0x25c) = fStack_3c;
            puVar7 = (undefined8 *)FQuat::Rotator(&local_48,local_54);
            *(undefined8 *)(lVar5 + 0x260) = *puVar7;
            *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar7 + 1);
            lVar10 = param_1[0x2d];
          }
          uVar3 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
          uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
          puVar1 = (undefined4 *)(lVar5 + 0x268);
          lVar5 = lVar10;
          local_64 = *puVar1;
        }
        local_6c = CONCAT44(uVar11,uVar3);
        if (lVar5 == 0) {
          local_78 = _DAT_1468b5d90;
          local_70 = DAT_1468b5d98;
        }
        else {
          local_78 = *(undefined8 *)(lVar5 + 0x220);
          local_70 = *(undefined4 *)(lVar5 + 0x228);
        }
        local_60 = local_78;
        local_58 = local_70;
        if (param_1[0x95] == 0) goto LAB_14301891f;
        lVar8 = FUN_1428dfc70();
        lVar5 = param_1[0x95];
        lVar10 = lVar5;
        goto joined_r0x00014301890f;
      }
    }
  }
  return 0;
joined_r0x00014301890f:
  if (lVar10 == 0) {
LAB_14301891f:
    lVar5 = 0;
LAB_143018921:
    uVar9 = UWorld::SpawnActor(lVar6,lVar5,&local_60,&local_6c,local_38);
    return uVar9;
  }
  if (lVar10 == lVar8) goto LAB_143018921;
  lVar10 = *(longlong *)(lVar10 + 0x30);
  goto joined_r0x00014301890f;
}



// FUNCTION 143018960 FUN_143018960 body=470 status=ok
// SIG undefined FUN_143018960(void)

undefined8
FUN_143018960(longlong *param_1,longlong param_2,undefined8 param_3,float *param_4,
             undefined8 param_5,char param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined1 local_48 [48];
  
  if (((param_2 == 0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    return 0;
  }
  plVar5 = (longlong *)FUN_14301a0d0(param_2,param_1,1);
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_14301f8f0();
    lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    if (lVar7 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x208);
      if (lVar7 == 0) {
        return 0;
      }
      if ((param_6 == '\0') || (param_7 <= 0.0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      fVar1 = param_4[1];
      fVar2 = *param_4;
      fVar3 = param_4[2];
      if (*(longlong *)(lVar7 + 0x160) != 0) {
        lVar8 = FUN_143025260();
        lVar9 = *(longlong *)(lVar7 + 0x160);
        for (lVar4 = lVar9; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar8) goto LAB_143018a90;
        }
      }
      lVar9 = 0;
LAB_143018a90:
      uVar6 = FVector::Rotation(param_4,local_48);
      uVar6 = FUN_142ff1380(param_2,lVar9,1,plVar5,*(undefined8 *)(lVar7 + 0x1d8),
                            SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3),param_5,param_3,
                            uVar6,uVar10,param_7);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 143018b40 FUN_143018b40 body=349 status=ok
// SIG undefined FUN_143018b40(void)

void FUN_143018b40(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,char param_8,
                  float param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar3 = *param_2;
  fVar5 = 0.0;
  lVar4 = (longlong)(int)param_2[1] * 0x60 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x60) {
    if ((0.0 < param_9) && (fVar5 = param_9, param_8 != '\0')) {
      iVar1 = rand();
      fVar5 = (float)iVar1 * 3.051851e-05 * param_9;
    }
    lVar2 = FUN_143018960(lVar3,param_3,param_4,param_5,param_6,param_7,fVar5);
    if (lVar2 != 0) {
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 143018ca0 FUN_143018ca0 body=787 status=ok
// SIG undefined FUN_143018ca0(void)

void FUN_143018ca0(longlong *param_1,ulonglong *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,float param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  undefined8 local_res8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  uint local_64;
  longlong *local_60;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) {
    plVar7 = (longlong *)*param_2;
    plVar8 = (longlong *)0x0;
    local_80 = (longlong *)0x0;
    local_78 = 0;
    plVar10 = (longlong *)((longlong)(int)param_2[1] & 0x1fffffffffffffff);
    if (plVar7 + (int)param_2[1] < plVar7) {
      plVar10 = plVar8;
    }
    plVar9 = plVar8;
    if (plVar10 != (longlong *)0x0) {
      do {
        plVar1 = (longlong *)*plVar7;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x280))(plVar1,&local_80);
        }
        plVar7 = plVar7 + 1;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
      } while (plVar9 != plVar10);
    }
    FUN_142fd7680(&local_80,param_3);
    local_70 = &local_90;
    local_90 = 0;
    plVar10 = local_80 + (longlong)(int)local_78 * 0x11;
    local_88 = 0;
    local_60 = param_1;
    local_68 = param_4;
    for (plVar7 = local_80; plVar7 != plVar10; plVar7 = plVar7 + 0x11) {
      if (*plVar7 != 0) {
        iVar2 = rand();
        fVar12 = (float)FUN_142c98860(plVar7 + 1,param_1);
        if ((0.0 < fVar12) && ((float)iVar2 * 3.051851e-05 <= fVar12)) {
          thunk_FUN_142fe1c60(&local_70,plVar7);
        }
      }
    }
    pfVar4 = (float *)FRotator::Vector(param_6,local_a0);
    local_70 = (longlong *)0x0;
    local_a8 = param_7 * pfVar4[2];
    local_ac = param_7 * pfVar4[1];
    local_64 = 0;
    local_b0 = param_7 * *pfVar4;
    local_res8 = FUN_140c65880(&local_res8,local_a0,0x42c80000,0x43160000);
    lVar11 = (longlong)(int)local_88 * 0x60 + local_90;
    lVar6 = local_90;
    plVar7 = plVar8;
    plVar10 = plVar8;
    if (local_90 != lVar11) {
      do {
        lVar5 = FUN_143018960(lVar6,lVar3,param_5,&local_b0,local_res8,0,0);
        if (lVar5 != 0) {
          iVar2 = (int)plVar7;
          local_68 = iVar2 + 1;
          if ((int)plVar10 < (int)local_68) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70,plVar7);
            plVar10 = (longlong *)(ulonglong)local_64;
            plVar8 = local_70;
          }
          plVar7 = (longlong *)(ulonglong)local_68;
          plVar8[iVar2] = lVar5;
        }
        lVar6 = lVar6 + 0x60;
      } while (lVar6 != lVar11);
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
    }
    if ((int)local_88 != 0) {
      plVar7 = (longlong *)(local_90 + 0x38);
      iVar2 = (int)local_88;
      do {
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar7 + -3);
        plVar7 = plVar7 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_90 != 0) {
      FMemory::Free(local_90);
    }
    if ((int)local_78 != 0) {
      plVar7 = local_80 + 0xf;
      iVar2 = (int)local_78;
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 0x11;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 143018fc0 FUN_143018fc0 body=35 status=ok
// SIG undefined FUN_143018fc0(void)

undefined8 FUN_143018fc0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != 0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    uVar1 = FUN_14301a0d0(param_2,param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143018ff0 FUN_143018ff0 body=177 status=ok
// SIG undefined FUN_143018ff0(void)

void FUN_143018ff0(longlong *param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 0xc;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 0xc) {
    if ((((param_2 != 0) && (*plVar3 != 0)) && (plVar3[1] != 0)) &&
       (lVar2 = FUN_14301a0d0(param_2,plVar3,param_4), lVar2 != 0)) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 1430190b0 FUN_1430190b0 body=288 status=ok
// SIG undefined FUN_1430190b0(void)

ulonglong FUN_1430190b0(longlong param_1,longlong param_2)

{
  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Buf2;
  size_t sVar4;
  void *_Buf1;
  void *local_18;
  int local_10;
  
  uVar3 = FUN_142ff0430();
  if ((char)uVar3 == '\0') {
LAB_1430191c2:
    return uVar3 & 0xffffffffffffff00;
  }
  uVar3 = FUN_142ff0430(param_2);
  if ((char)uVar3 == '\0') goto LAB_1430191c2;
  _Buf2 = (void *)0x0;
  local_10 = *(int *)(param_1 + 0x10);
  sVar4 = (size_t)local_10;
  pvVar1 = *(void **)(param_1 + 8);
  local_18 = (void *)0x0;
  _Buf1 = _Buf2;
  iVar2 = local_10;
  if (local_10 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Buf1 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,pvVar1,sVar4);
    iVar2 = local_10;
  }
  local_10 = *(int *)(param_2 + 0x10);
  sVar4 = (size_t)local_10;
  pvVar1 = *(void **)(param_2 + 8);
  local_18 = (void *)0x0;
  if (local_10 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Buf2 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,pvVar1,sVar4);
  }
  *(undefined4 *)((longlong)_Buf1 + 1) = 0;
  *(undefined4 *)((longlong)_Buf2 + 1) = 0;
  if (iVar2 == local_10) {
    iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,(longlong)iVar2);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_143019193;
    }
  }
  uVar3 = 0;
LAB_143019193:
  FMemory::Free(_Buf2);
  FMemory::Free(_Buf1);
  return uVar3;
}



// FUNCTION 1430191d0 FUN_1430191d0 body=856 status=ok
// SIG undefined FUN_1430191d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430191d0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *local_38;
  longlong *local_30;
  
  FUN_1422279d0(param_1,&DAT_146532190);
  (**(code **)(*param_1 + 0x310))(param_1,0);
  ppuVar2 = (undefined8 **)(param_1 + 0x8f);
  if (((char *)*ppuVar2 == (char *)0x0) || (*(char *)*ppuVar2 == '\0')) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = FUN_142ff67b0(uVar6);
    if (lVar7 != 0) {
      plVar9 = (longlong *)0x0;
      if (*ppuVar2 == (undefined8 *)0x0) {
        local_38 = DAT_146b457e0;
        if (DAT_146b457e0 == (undefined8 *)0x0) {
          local_38 = (undefined8 *)FMemory::Malloc(0x500,0);
          *local_38 = local_38 + 10;
          local_38[10] = local_38 + 0x14;
          local_38[0x14] = local_38 + 0x1e;
          local_38[0x1e] = local_38 + 0x28;
          local_38[0x28] = local_38 + 0x32;
          local_38[0x32] = local_38 + 0x3c;
          local_38[0x3c] = local_38 + 0x46;
          local_38[0x46] = local_38 + 0x50;
          local_38[0x50] = local_38 + 0x5a;
          local_38[0x5a] = local_38 + 100;
          local_38[100] = local_38 + 0x6e;
          local_38[0x6e] = local_38 + 0x78;
          local_38[0x78] = local_38 + 0x82;
          local_38[0x82] = local_38 + 0x8c;
          local_38[0x8c] = local_38 + 0x96;
          local_38[0x96] = DAT_146b457e0;
          _DAT_146b457e8 = _DAT_146b457e8 + 0x10;
        }
        DAT_146b457e0 = (undefined8 *)*local_38;
        _DAT_146b457ec = _DAT_146b457ec + 1;
        *(undefined1 *)local_38 = 0;
        *(undefined8 *)((longlong)local_38 + 4) = 0;
        *(undefined8 *)((longlong)local_38 + 0xc) = 0;
        *(undefined4 *)((longlong)local_38 + 0x14) = 0;
        local_38[3] = DAT_1468b5da0;
        *(undefined4 *)(local_38 + 4) = DAT_1468b5da8;
        *(undefined8 *)((longlong)local_38 + 0x24) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)local_38 + 0x2c) = DAT_1468b5d98;
        local_38[6] = 0;
        *(undefined4 *)(local_38 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)local_38 + 0x3c) = 0;
        *(undefined4 *)(local_38 + 8) = 0xffffffff;
        *(undefined4 *)((longlong)local_38 + 0x44) = 0;
        *(undefined4 *)(local_38 + 9) = 0xffffffff;
        *(undefined4 *)((longlong)local_38 + 0x4c) = 0;
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          *plVar8 = (longlong)&PTR_FUN_145a3c0f0;
          *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
          plVar8[2] = (longlong)local_38;
          plVar9 = plVar8;
        }
        local_30 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
        if (ppuVar2 != &local_38) {
          *ppuVar2 = local_38;
          local_38 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x90,&local_30);
        }
        plVar9 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_30 + 1;
          lVar10 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_30)(local_30);
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
      }
      *(undefined8 *)((longlong)param_1 + 0x46c) = *(undefined8 *)((longlong)param_3 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x474) = *(undefined4 *)((longlong)param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(param_3 + 1);
      (*ppuVar2)[6] = *param_3;
      plVar9 = (longlong *)param_1[0x90];
      puVar4 = *ppuVar2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_143019530(puVar4,param_2,param_1,param_3[3]);
      if (cVar5 != '\0') {
        iVar3 = *(int *)(lVar7 + 0x528);
        *(int *)(lVar7 + 0x528) = iVar3 + 1;
        if (*(int *)(lVar7 + 0x52c) < iVar3 + 1) {
          TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
          ResizeGrow(lVar7 + 0x420,iVar3);
        }
        lVar10 = *(longlong *)(lVar7 + 0x520);
        if (*(longlong *)(lVar7 + 0x520) == 0) {
          lVar10 = lVar7 + 0x420;
        }
        *(undefined8 **)(lVar10 + (longlong)iVar3 * 0x10) = puVar4;
        *(longlong **)(lVar10 + 8 + (longlong)iVar3 * 0x10) = plVar9;
        if (plVar9 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
  }
  return;
}



// FUNCTION 143019530 FUN_143019530 body=1616 status=ok
// SIG undefined FUN_143019530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143019530(char *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [12];
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  float local_220;
  int local_218;
  float local_214;
  longlong *local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float local_188;
  undefined8 local_178 [24];
  undefined8 *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (*param_1 == '\0') {
    FWeakObjectPtr::operator=(param_1 + 0x38);
    FWeakObjectPtr::operator=(param_1 + 0x40,param_3);
    FWeakObjectPtr::operator=(param_1 + 0x48,param_4);
    plVar12 = (longlong *)0x0;
    plVar9 = plVar12;
    if (param_3 != 0) {
      uVar8 = FUN_14302cca0();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    }
    if ((((param_2 != (longlong *)0x0) && (param_3 != 0)) && (plVar9 != (longlong *)0x0)) &&
       (param_4 != 0)) {
      local_1e8 = DAT_1468b5da0;
      local_218 = 0;
      local_1e0 = DAT_1468b5da8;
      local_210 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x10))(DAT_1468b5da0,&local_218,&local_1e8,&local_210);
      uVar8 = FUN_14302cee0();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar8);
      *param_1 = '\x01';
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 0x30);
      fVar14 = *(float *)(param_4 + 0x54);
      if ((*(byte *)(param_4 + 0x38) & 2) != 0) {
        fVar16 = *(float *)(param_4 + 0x58);
        iVar5 = rand();
        fVar14 = (float)iVar5 * 3.051851e-05 * (fVar16 - fVar14) + fVar14;
      }
      fVar16 = fVar14;
      if ((0.0 < *(float *)(param_4 + 0x5c)) &&
         (fVar16 = *(float *)(param_4 + 0x60), fVar14 <= *(float *)(param_4 + 0x60))) {
        fVar16 = fVar14;
      }
      *(float *)(param_1 + 8) = fVar16;
      if (local_218 == 1) {
        fVar14 = *(float *)(param_4 + 100);
        if ((*(byte *)(param_4 + 0x38) & 4) != 0) {
          fVar16 = *(float *)(param_4 + 0x68);
          iVar5 = rand();
          fVar14 = (float)iVar5 * 3.051851e-05 * (fVar16 - fVar14) + fVar14;
        }
        uVar8 = CONCAT44(fVar14,fVar14);
        local_220 = fVar14;
      }
      else {
        uVar8 = *(undefined8 *)(param_4 + 0x3c);
        fVar14 = *(float *)(param_4 + 0x44);
        local_228 = uVar8;
        if ((*(byte *)(param_4 + 0x38) & 1) != 0) {
          fVar16 = *(float *)(param_4 + 0x48);
          fVar15 = *(float *)(param_4 + 0x3c);
          iVar5 = rand();
          fVar1 = *(float *)(param_4 + 0x4c);
          fVar2 = *(float *)(param_4 + 0x40);
          iVar6 = rand();
          fVar3 = *(float *)(param_4 + 0x50);
          fVar14 = *(float *)(param_4 + 0x44);
          iVar7 = rand();
          fVar14 = (float)iVar7 * 3.051851e-05 * (fVar3 - fVar14) + fVar14;
          uVar8 = CONCAT44((float)iVar6 * 3.051851e-05 * (fVar1 - fVar2) + fVar2,
                           (float)iVar5 * 3.051851e-05 * (fVar16 - fVar15) + fVar15);
          local_228 = uVar8;
          local_220 = fVar14;
        }
      }
      fVar16 = 1.0;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(float *)(param_1 + 0x20) = fVar14;
      local_214 = *(float *)(param_4 + 0x34);
      if (plVar9 == (longlong *)0x0) {
        (**(code **)(*param_2 + 0x610))(param_2,&local_208,&local_1d8);
      }
      else {
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_1a8,*(undefined8 *)(param_1 + 0x30),&local_214);
        local_208 = local_198;
        local_204 = fStack_194;
        local_1c8 = local_1a8;
        uStack_1c0 = uStack_1a0;
        local_200 = fStack_190;
        FQuat::Rotator(&local_1c8,&local_228);
        local_1d8 = local_228;
        local_1d0 = local_220;
        fVar16 = local_188;
      }
      lVar4 = *(longlong *)(param_3 + 0x168);
      if (lVar4 == 0) {
        local_228 = _DAT_1468b5d90;
        local_220 = DAT_1468b5d98;
      }
      else {
        local_228 = *(undefined8 *)(lVar4 + 0x220);
        local_220 = *(float *)(lVar4 + 0x228);
      }
      local_1f8 = local_208 - (float)local_228;
      local_1f4 = local_204 - (float)((ulonglong)local_228 >> 0x20);
      local_1f0 = local_200 - local_220;
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      fVar14 = SQRT(local_1f4 * local_1f4 + local_1f8 * local_1f8 + local_1f0 * local_1f0);
      if (((fVar16 < 1.0) && (*(longlong *)(param_4 + 0x70) != 0)) &&
         (0.0 < *(float *)(param_4 + 0x78))) {
        fVar16 = fVar14 - local_214;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_4 + 0x70),fVar16);
        *(float *)(param_1 + 0x14) = fVar16 / *(float *)(param_4 + 0x78);
      }
      if (*(longlong *)(param_4 + 0x80) != 0) {
        pauVar10 = (undefined1 (*) [12])FVector::Rotation(&local_1f8,&local_228);
        local_220 = *(float *)(*pauVar10 + 8);
        auVar13._12_4_ = 0;
        auVar13._0_12_ = *pauVar10;
        divps(auVar13,_DAT_146b453a0);
        fVar16 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_4 + 0x80));
        *(float *)(param_1 + 0xc) = fVar16;
        if (fVar16 != 0.0) {
          if (*(float *)(param_4 + 0x5c) <= 0.0) {
            fVar14 = fVar14 / *(float *)(param_1 + 8);
          }
          else {
            fVar15 = 1.0 / *(float *)(param_4 + 0x5c);
            fVar14 = SQRT((fVar14 + fVar14) * fVar15) - fVar15 * *(float *)(param_1 + 8);
          }
          fVar14 = fVar14 * *(float *)(param_4 + 0x88);
          if (fVar14 <= 0.0) {
            param_1[0xc] = '\0';
            param_1[0xd] = '\0';
            param_1[0xe] = '\0';
            param_1[0xf] = '\0';
          }
          else {
            *(float *)(param_1 + 0x10) = ABS(fVar16 / fVar14);
          }
        }
      }
      if (local_210 != (longlong *)0x0) {
        puVar11 = (undefined8 *)
                  (**(code **)(*local_210 + 0x4a8))(local_210,&local_1c8,&DAT_1468b5b70);
        *(undefined8 *)(param_1 + 0x24) = *puVar11;
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar11 + 1);
        (**(code **)(*local_210 + 0x500))(local_210,2);
        (**(code **)(*local_210 + 0x5b8))(local_210,0);
      }
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_140725150(param_3,local_178,0);
      puVar11 = local_178;
      if (local_b8 != (undefined8 *)0x0) {
        puVar11 = local_b8;
      }
      plVar9 = (longlong *)((longlong)(int)local_b0 & 0x1fffffffffffffff);
      if (puVar11 + (int)local_b0 < puVar11) {
        plVar9 = plVar12;
      }
      if (plVar9 != (longlong *)0x0) {
        do {
          (**(code **)(*(longlong *)*puVar11 + 0x838))((longlong *)*puVar11,0);
          plVar12 = (longlong *)((longlong)plVar12 + 1);
          puVar11 = puVar11 + 1;
        } while (plVar12 != plVar9);
      }
      if (local_b8 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143019b80 FUN_143019b80 body=284 status=ok
// SIG undefined FUN_143019b80(void)

undefined8
FUN_143019b80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  cVar5 = FUN_143019530(*param_2,param_3,param_4,param_5);
  if (cVar5 == '\0') {
    plVar4 = (longlong *)param_2[1];
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x528);
  *(int *)(param_1 + 0x528) = iVar3 + 1;
  if (*(int *)(param_1 + 0x52c) < iVar3 + 1) {
    TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
    ResizeGrow(param_1 + 0x420,iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x520);
  if (*(longlong *)(param_1 + 0x520) == 0) {
    lVar6 = param_1 + 0x420;
  }
  puVar7 = (undefined8 *)(lVar6 + (longlong)iVar3 * 0x10);
  *puVar7 = *param_2;
  lVar6 = param_2[1];
  puVar7[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return 1;
}



// FUNCTION 143019ca0 FUN_143019ca0 body=546 status=ok
// SIG undefined FUN_143019ca0(void)

void FUN_143019ca0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_48;
  undefined8 local_40;
  
  uVar2 = *(undefined4 *)(param_3 + 3);
  *param_4 = uVar2;
  puVar10 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  *(undefined8 *)(param_4 + 2) = *param_3;
  *(undefined8 *)(param_4 + 4) = param_3[1];
  *(undefined8 *)(param_4 + 6) = param_3[2];
  *(undefined1 *)((longlong)param_4 + 0x61) = *(undefined1 *)((longlong)param_3 + 0x59);
  local_40 = 0;
  puVar8 = puVar10;
  if (*(int *)(param_3 + 5) != 0) {
    puVar8 = param_3 + 4;
  }
  FUN_142d7dfb0(param_3[1],param_1,uVar2,&local_48,puVar8);
  puVar8 = (undefined8 *)
           ((ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3);
  if (local_48 + (int)local_40 < local_48) {
    puVar8 = puVar10;
  }
  puVar12 = local_48;
  puVar13 = puVar10;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      iVar3 = param_4[10];
      uVar4 = *puVar12;
      param_4[10] = iVar3 + 1;
      if ((int)param_4[0xb] < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4 + 8,iVar3);
      }
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
      *(undefined8 *)(*(longlong *)(param_4 + 8) + (longlong)iVar3 * 8) = uVar4;
      puVar12 = puVar12 + 1;
    } while (puVar13 != puVar8);
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if ((*(char *)(param_3 + 6) == '\x01') || (0 < *(int *)(param_3 + 8))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  plVar1 = (longlong *)(param_4 + 0xc);
  puVar8 = param_3 + 6;
  if (!bVar7) {
    puVar8 = puVar10;
  }
  FUN_142fe9400(param_3[1],param_1,*param_4,plVar1,puVar8);
  if (0 < *(int *)(param_3 + 10)) {
    plVar11 = (longlong *)param_3[9];
    puVar8 = (undefined8 *)((longlong)*(int *)(param_3 + 10) & 0x1fffffffffffffff);
    if (plVar11 + *(int *)(param_3 + 10) < plVar11) {
      puVar8 = puVar10;
    }
    if (puVar8 != (undefined8 *)0x0) {
      do {
        lVar5 = *plVar11;
        if (lVar5 != 0) {
          plVar6 = (longlong *)*plVar1;
          iVar3 = param_4[0xe];
          for (plVar9 = plVar6; plVar9 != plVar6 + iVar3; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar5) {
              if ((int)((longlong)plVar9 - (longlong)plVar6 >> 3) != -1) goto LAB_143019e7d;
              break;
            }
          }
          param_4[0xe] = iVar3 + 1;
          if ((int)param_4[0xf] < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
          }
          *(longlong *)((longlong)iVar3 * 8 + *plVar1) = lVar5;
        }
LAB_143019e7d:
        plVar11 = plVar11 + 1;
        puVar10 = (undefined8 *)((longlong)puVar10 + 1);
      } while (puVar10 != puVar8);
    }
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x460))(param_2,param_4);
  }
  return;
}



// FUNCTION 143019ed0 FUN_143019ed0 body=499 status=ok
// SIG undefined FUN_143019ed0(void)

longlong FUN_143019ed0(undefined8 param_1,undefined4 *param_2,undefined1 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  
  cVar2 = FUN_143003610(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  lVar5 = 0;
  uVar9 = 0xffffffff;
  lVar3 = lVar5;
  if ((((param_4 != '\0') && (lVar3 = 0, *(char *)(*(longlong *)(param_2 + 2) + 0x169) != '\0')) &&
      ((lVar1 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x1d8), lVar1 == 0 ||
       (*(char *)(lVar1 + 0x38) != '\0')))) && (lVar3 = FUN_142d624e0(param_1), lVar3 != 0)) {
    uVar10 = uVar9;
    if (*(char *)(*(longlong *)(param_2 + 2) + 0x16a) != '\0') {
      uVar10 = *param_2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
    lVar8 = lVar5;
    if (lVar1 != 0) {
      lVar4 = FUN_1428dfc70();
      lVar7 = lVar1;
      do {
        lVar8 = lVar1;
        if (lVar7 == lVar4) break;
        lVar7 = *(longlong *)(lVar7 + 0x30);
        lVar8 = lVar5;
      } while (lVar7 != 0);
    }
    lVar5 = FUN_142d62550(lVar3,lVar8,uVar10);
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  lVar5 = 0;
  local_88 = *(undefined8 *)(param_2 + 2);
  local_80 = *(undefined8 *)(param_2 + 4);
  local_78 = *(undefined8 *)(param_2 + 6);
  local_70 = *param_2;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 1;
  plVar6 = (longlong *)FUN_14301a2a0(param_1,&local_88,&DAT_1468b5b70,0);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_68);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = plVar6[0x23];
    (**(code **)(*plVar6 + 0x468))(plVar6,param_2,0,param_3);
    UGameplayStatics::FinishSpawningActor(lVar5,&DAT_1468b5b70);
    if ((lVar5 != 0) && (lVar3 != 0)) {
      *(undefined1 *)(plVar6 + 0x68) = 1;
      if (*(char *)(*(longlong *)(param_2 + 2) + 0x16a) != '\0') {
        uVar9 = *param_2;
      }
      FUN_142d55a80(lVar3,lVar5,uVar9);
    }
  }
  return lVar5;
}



// FUNCTION 14301a0d0 FUN_14301a0d0 body=455 status=ok
// SIG undefined FUN_14301a0d0(void)

longlong FUN_14301a0d0(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  lVar5 = 0;
  uVar9 = 0xffffffff;
  lVar2 = lVar5;
  if ((((param_3 != '\0') && (lVar2 = 0, *(char *)(*param_2 + 0x169) != '\0')) &&
      ((lVar1 = *(longlong *)(*param_2 + 0x1d8), lVar1 == 0 || (*(char *)(lVar1 + 0x38) != '\0'))))
     && (lVar2 = FUN_142d624e0(), lVar2 != 0)) {
    uVar8 = uVar9;
    if (*(char *)(*param_2 + 0x16a) != '\0') {
      uVar8 = (int)param_2[3];
    }
    lVar1 = *(longlong *)(*param_2 + 0x90);
    lVar7 = lVar5;
    if (lVar1 != 0) {
      lVar3 = FUN_1428dfc70();
      lVar4 = lVar1;
      do {
        lVar7 = lVar1;
        if (lVar4 == lVar3) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar7 = lVar5;
      } while (lVar4 != 0);
    }
    lVar5 = FUN_142d62550(lVar2,lVar7,uVar8);
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  lVar5 = 0;
  plVar6 = (longlong *)FUN_14301a2a0(param_1,param_2,&DAT_1468b5b70,0);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = plVar6[0x23];
    _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
    FUN_143019ca0(lVar5,plVar6,param_2,local_88);
    (**(code **)(*plVar6 + 0x468))(plVar6,local_88,0,(char)param_2[0xb]);
    UGameplayStatics::FinishSpawningActor(lVar5,&DAT_1468b5b70);
    if ((lVar5 != 0) && (lVar2 != 0)) {
      *(undefined1 *)(plVar6 + 0x68) = 1;
      if (*(char *)(*param_2 + 0x16a) != '\0') {
        uVar9 = (undefined4)param_2[3];
      }
      FUN_142d55a80(lVar2,lVar5,uVar9);
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
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return lVar5;
}



// FUNCTION 14301a2a0 FUN_14301a2a0 body=462 status=ok
// SIG undefined FUN_14301a2a0(void)

undefined8 FUN_14301a2a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_10;
  ushort local_e;
  
  lVar3 = *(longlong *)(*param_2 + 0x90);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = FUN_1428dfc70();
  lVar4 = lVar3;
  while (lVar4 != lVar2) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return 0;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_e = local_e | 4;
  local_10 = 1;
  local_30 = param_4;
  lVar2 = FUN_1428dfc70();
  lVar4 = lVar3;
  do {
    if (lVar4 == lVar2) goto LAB_14301a340;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  } while (lVar4 != 0);
  lVar3 = 0;
LAB_14301a340:
  lVar3 = FUN_142550d00(param_1,lVar3,param_3,local_38);
  if (lVar3 != 0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = param_2[1];
      if (*(longlong *)(lVar4 + 0xa0) != 0) {
        lVar5 = FUN_14301f8f0();
        lVar4 = *(longlong *)(lVar4 + 0xa0);
        for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar5) {
            if (lVar4 != 0) {
              lVar4 = param_2[1];
              if (*(longlong *)(lVar4 + 0xa0) == 0) goto LAB_14301a445;
              plVar8 = (longlong *)FUN_14301f8f0();
              plVar6 = *(longlong **)(lVar4 + 0xa0);
              plVar10 = plVar6;
              goto joined_r0x00014301a435;
            }
            break;
          }
        }
      }
      plVar6 = (longlong *)FUN_14301f8f0();
LAB_14301a3c9:
      plVar10 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_14301f8f0();
        plVar8 = plVar6;
        do {
          if (plVar8 == plVar7) goto LAB_14301a3e6;
          plVar8 = (longlong *)plVar8[6];
        } while (plVar8 != (longlong *)0x0);
      }
      goto LAB_14301a3e4;
    }
  }
  return 0;
joined_r0x00014301a435:
  if (plVar10 == (longlong *)0x0) goto LAB_14301a445;
  if (plVar10 == plVar8) goto LAB_14301a3c9;
  plVar10 = (longlong *)plVar10[6];
  goto joined_r0x00014301a435;
LAB_14301a445:
  plVar10 = (longlong *)0x0;
LAB_14301a3e4:
  plVar6 = (longlong *)0x0;
LAB_14301a3e6:
  lVar4 = plVar6[3];
  if (plVar10 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar10[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar2 = plVar10[0x1f];
    }
  }
  uVar9 = FUN_142227070(lVar3,lVar2,lVar4);
  FUN_14234b150(uVar9);
  return uVar9;
}



// FUNCTION 14301a470 FUN_14301a470 body=98 status=ok
// SIG undefined FUN_14301a470(void)

undefined1 FUN_14301a470(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x608) != 0) {
    if (*(longlong **)(param_1 + 0x600) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x600) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x608) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x600);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x5f8) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x5f8);
  }
  return *(undefined1 *)(param_1 + 0x5f8);
}



// FUNCTION 14301a4e0 FUN_14301a4e0 body=1575 status=ok
// SIG undefined FUN_14301a4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14301a4e0(longlong param_1)

{
  longlong *plVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  char cVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined8 local_158;
  float local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined1 local_90 [16];
  float local_80 [18];
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    plVar1 = (longlong *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x40);
    puStack_140 = (uint *)(param_1 + 0x28);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    iStack_130 = 0;
    if (uVar3 != 0) {
      puVar21 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar21 = puStack_140;
      }
      uVar4 = *puVar21;
      iStack_130 = 0;
      local_148 = 0;
      while (uVar4 == 0) {
        lVar15 = (longlong)local_148;
        iStack_130 = iStack_130 + 0x20;
        iVar14 = local_148 + 1;
        bVar23 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
        local_148 = iVar14;
        if (bVar23) goto LAB_14301a5e2;
        uVar4 = puVar21[lVar15 + 1];
      }
      uStack_144 = -uVar4 & uVar4;
      iVar14 = 0x1f;
      if (uStack_144 != 0) {
        for (; uStack_144 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_144 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_134 = (iStack_130 - iVar14) + 0x1f;
      if ((int)uVar3 < (int)uStack_134) {
LAB_14301a5e2:
        uStack_134 = uVar3;
      }
    }
    local_138 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0x40);
    uStack_120 = CONCAT44(uStack_144,local_148);
    uStack_a0 = 0xffffffff;
    uStack_9c = uStack_134;
    uStack_108 = CONCAT44(uStack_12c,iStack_130);
    uVar18 = -1 << ((byte)uVar4 & 0x1f);
    uVar20 = uVar4 & 0xffffffe0;
    uStack_118 = CONCAT44(uVar4,uVar18);
    iStack_b0 = local_148;
    uStack_ac = uStack_144;
    if (uVar4 != uVar3) {
      puVar21 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar21 = puStack_140;
      }
      uVar18 = puVar21[(int)uVar4 >> 5] & uVar18;
      iVar14 = (int)uVar4 >> 5;
      while (uVar18 == 0) {
        uVar20 = uVar20 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_14301a6b4;
        uVar18 = puVar21[(longlong)iVar14 + 1];
        uStack_118 = 0xffffffff;
        iVar14 = iVar14 + 1;
      }
      uVar18 = -uVar18 & uVar18;
      iVar14 = 0x1f;
      if (uVar18 != 0) {
        for (; uVar18 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uVar18 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      iVar14 = (uVar20 - iVar14) + 0x1f;
      uStack_118 = CONCAT44(iVar14,(undefined4)uStack_118);
      if ((int)uVar3 < iVar14) {
LAB_14301a6b4:
        uStack_118 = CONCAT44(uVar3,(undefined4)uStack_118);
      }
    }
    local_e8 = uStack_118 >> 0x20;
    local_128 = plVar1;
    local_a8 = puStack_140;
    local_98 = uStack_108;
    local_b8 = plVar1;
    uStack_110 = uStack_a0;
    uStack_10c = uStack_9c;
    while( true ) {
      iVar14 = 0;
      if (((uStack_9c == (uint)local_e8) && (local_a8 == puStack_140)) && (local_b8 == plVar1))
      break;
      puVar22 = (undefined8 *)((longlong)(int)uStack_9c * 0x20 + *local_b8);
      iVar5 = *(int *)(puVar22 + 2);
      if (iVar5 != 0) {
        cVar10 = FWeakObjectPtr::IsValid(puVar22[1] + 0x10);
        bVar23 = cVar10 != '\0';
        iVar16 = 0;
        do {
          iVar8 = iVar16;
          do {
            iVar8 = iVar8 + 1;
            if (iVar5 <= iVar8) break;
            cVar10 = FWeakObjectPtr::IsValid(puVar22[1] + (longlong)iVar8 * 0x18 + 0x10);
          } while (bVar23 == (cVar10 != '\0'));
          iVar19 = iVar8 - iVar16;
          if (bVar23 == false) {
            if (iVar19 != 0) {
              pcVar11 = (char *)(puVar22[1] + (longlong)iVar16 * 0x18 + 0xc);
              do {
                if (*pcVar11 != '\0') {
                  *pcVar11 = '\0';
                }
                pcVar11 = pcVar11 + 0x18;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
          }
          else {
            if (iVar14 != iVar16) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(puVar22[1] + (longlong)iVar14 * 0x18),
                         (void *)(puVar22[1] + (longlong)iVar16 * 0x18),(longlong)iVar19 * 0x18);
            }
            iVar14 = iVar14 + iVar19;
          }
          bVar23 = (bool)(bVar23 ^ 1);
          iVar16 = iVar8;
        } while (iVar8 < iVar5);
        *(int *)(puVar22 + 2) = iVar14;
      }
      if (*(int *)(puVar22 + 2) != 0) {
        if (DAT_146b458d0 == '\0') {
          FUN_143001bd0(&DAT_146b458c8);
        }
        plVar9 = DAT_146b458c8;
        UWorld::GetPlayerControllerIterator(*puVar22,&local_128);
        iVar14 = (int)uStack_120;
        while ((-1 < iVar14 && (iVar14 < (int)local_128[1]))) {
          cVar10 = FUN_14044af00(*local_128 + (longlong)iVar14 * 8,0);
          if (cVar10 != '\0') {
            plVar12 = (longlong *)FWeakObjectPtr::Get(*local_128 + (longlong)(int)uStack_120 * 8);
            local_158 = 0;
            local_150 = 0.0;
            if (plVar12[0x91] == 0) {
              (**(code **)(*plVar12 + 0x7a8))(plVar12,&local_158,local_90);
            }
            else {
              lVar15 = *(longlong *)(plVar12[0x91] + 0x168);
              if (lVar15 == 0) {
                local_d8 = DAT_1468b5d98;
                puVar13 = &local_e0;
                local_e0 = _DAT_1468b5d90;
              }
              else {
                puVar13 = (undefined8 *)&local_100;
                local_100 = *(undefined4 *)(lVar15 + 0x220);
                local_f8 = *(undefined4 *)(lVar15 + 0x228);
                uStack_fc = *(undefined4 *)(lVar15 + 0x224);
              }
              local_158 = *puVar13;
              local_150 = *(float *)(puVar13 + 1);
              local_cc = local_150;
            }
            pfVar17 = (float *)puVar22[1];
            pfVar2 = pfVar17 + (longlong)*(int *)(puVar22 + 2) * 6;
            for (; pfVar17 != pfVar2; pfVar17 = pfVar17 + 6) {
              if (*(char *)(pfVar17 + 3) == '\0') {
                lVar15 = FWeakObjectPtr::Get(pfVar17 + 4);
                lVar15 = *(longlong *)(lVar15 + 0x168);
                if (lVar15 == 0) {
                  local_c0 = DAT_1468b5d98;
                  puVar13 = &local_c8;
                  local_c8 = _DAT_1468b5d90;
                }
                else {
                  puVar13 = (undefined8 *)&local_f4;
                  local_f4 = *(undefined4 *)(lVar15 + 0x220);
                  local_ec = *(undefined4 *)(lVar15 + 0x228);
                  uStack_f0 = *(undefined4 *)(lVar15 + 0x224);
                }
                if (local_80 != pfVar17) {
                  fVar6 = *(float *)(puVar13 + 1);
                  *(undefined8 *)pfVar17 = *puVar13;
                  pfVar17[2] = fVar6;
                  *(undefined1 *)(pfVar17 + 3) = 1;
                }
              }
              if ((-300.0 <= local_150 - pfVar17[2]) && (local_150 - pfVar17[2] < 300.0)) {
                if ((pfVar17[1] - local_158._4_4_) * (pfVar17[1] - local_158._4_4_) +
                    (*pfVar17 - (float)local_158) * (*pfVar17 - (float)local_158) < 90000.0) {
                  lVar15 = FWeakObjectPtr::Get(pfVar17 + 4);
                  if (lVar15 != 0) {
                    lVar7 = *(longlong *)(*plVar9 + 0x30);
                    cVar10 = FUN_142190080(lVar7);
                    if (cVar10 != '\0') {
                      if (*(longlong *)(lVar7 + 0x28) == 0xd3) {
LAB_14301aa49:
                        FUN_1430011b0(plVar9,*(undefined8 *)(lVar15 + 0x560),plVar9[8],plVar12);
                      }
                      else if ((*(int *)(lVar7 + 0x88) != 0) && (*(int *)(lVar7 + 0x88) != 1)) {
                        iVar14 = *(int *)(lVar7 + 0x98) + -1;
                        if (*(int *)(lVar7 + 0x98) == 0) {
                          iVar14 = 0;
                        }
                        if (iVar14 != 0) goto LAB_14301aa49;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar14 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,iVar14);
        }
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
    }
  }
  return 1;
}



// FUNCTION 14301ab10 FUN_14301ab10 body=598 status=ok
// SIG undefined FUN_14301ab10(void)

void FUN_14301ab10(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar1 == '\0') {
    plVar7 = DAT_146b45810;
    if (DAT_146b45810 == (longlong *)0x0) {
      plVar7 = (longlong *)&DAT_146b457f0;
    }
    for (plVar3 = plVar7; plVar3 != plVar7 + DAT_146b45818; plVar3 = plVar3 + 1) {
      if ((longlong *)*plVar3 == param_1) {
        iVar5 = (int)((longlong)plVar3 - (longlong)plVar7 >> 3);
        if (iVar5 != -1) {
          iVar2 = (DAT_146b45818 - iVar5) + -1;
          if (0 < iVar2) {
            iVar2 = 1;
          }
          if (iVar2 != 0) {
            plVar7 = DAT_146b45810;
            if (DAT_146b45810 == (longlong *)0x0) {
              plVar7 = (longlong *)&DAT_146b457f0;
            }
            _guard_xfg_dispatch_icall_nop
                      (plVar7 + iVar5,plVar7 + (DAT_146b45818 - iVar2),(longlong)iVar2 << 3);
          }
          DAT_146b45818 = DAT_146b45818 + -1;
        }
        break;
      }
    }
    if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014301abf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,1);
      return;
    }
  }
  else {
    if (((int)param_1[0x83] != 0) && (iVar5 = (int)param_1[0x83] + -1, -1 < iVar5)) {
      plVar7 = param_1 + 2;
      lVar6 = (longlong)iVar5 << 3;
      do {
        plVar3 = (longlong *)param_1[0x82];
        if ((longlong *)param_1[0x82] == (longlong *)0x0) {
          plVar3 = plVar7;
        }
        cVar1 = FWeakObjectPtr::IsValid((longlong)plVar3 + lVar6);
        if (cVar1 == '\0') {
          iVar2 = (int)param_1[0x83];
          iVar4 = (iVar2 - iVar5) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            plVar3 = (longlong *)param_1[0x82];
            if ((longlong *)param_1[0x82] == (longlong *)0x0) {
              plVar3 = plVar7;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar3 + lVar6),plVar3 + (iVar2 - iVar4),
                       (longlong)iVar4 << 3);
            iVar2 = (int)param_1[0x83];
          }
          *(int *)(param_1 + 0x83) = iVar2 + -1;
        }
        else {
          plVar3 = (longlong *)param_1[0x82];
          if ((longlong *)param_1[0x82] == (longlong *)0x0) {
            plVar3 = plVar7;
          }
          plVar3 = (longlong *)FWeakObjectPtr::Get((longlong)plVar3 + lVar6);
          (**(code **)(*plVar3 + 0x738))(plVar3,param_2);
        }
        lVar6 = lVar6 + -8;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    if (((int)param_1[0xa5] != 0) && (iVar5 = (int)param_1[0xa5] + -1, -1 < iVar5)) {
      lVar6 = (longlong)iVar5 << 4;
      do {
        plVar7 = (longlong *)param_1[0xa4];
        if ((longlong *)param_1[0xa4] == (longlong *)0x0) {
          plVar7 = param_1 + 0x84;
        }
        cVar1 = FUN_14301ad70(*(undefined8 *)((longlong)plVar7 + lVar6),param_2);
        if (cVar1 == '\0') {
          FUN_143011780(param_1 + 0x84,iVar5,1,0);
        }
        lVar6 = lVar6 + -0x10;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}



// FUNCTION 14301ad70 FUN_14301ad70 body=3058 status=ok
// SIG undefined FUN_14301ad70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14301ad70(char *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [12];
  float *pfVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190 [2];
  undefined8 local_188;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_158 [2];
  longlong *local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (*param_1 == '\0') {
    return 0;
  }
  local_1b8 = param_2;
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x40);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x48);
  if (lVar5 == 0) {
    return 0;
  }
  uVar7 = FUN_14302cca0();
  plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar7);
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  local_148 = (float)DAT_1468b5da0;
  local_140 = DAT_1468b5da8;
  local_144 = DAT_1468b5da0._4_4_;
  local_158[0] = 0;
  local_150 = (longlong *)0x0;
  (**(code **)(*plVar8 + 0x10))(plVar8,local_158,&local_148,&local_150);
  if ((((lVar6 == 0) || (plVar4 == (longlong *)0x0)) ||
      (cVar3 = FUN_1407cd900(plVar4), cVar3 != '\0')) ||
     ((local_150 == (longlong *)0x0 || (*(float *)(param_1 + 4) <= 0.0)))) {
    *param_1 = '\0';
    (**(code **)(*plVar8 + 0x18))(plVar8);
    return 0;
  }
  if (0.0 < *(float *)(lVar6 + 0x5c)) {
    fVar14 = *(float *)(lVar6 + 0x5c) * param_2 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 8) = fVar14;
    fVar15 = *(float *)(lVar6 + 0x60);
    if (fVar14 <= *(float *)(lVar6 + 0x60)) {
      fVar15 = fVar14;
    }
    *(float *)(param_1 + 8) = fVar15;
  }
  uVar7 = FUN_14302cee0();
  plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar7);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - param_2;
  local_118 = *(float *)(local_150 + 0x42);
  fStack_114 = *(float *)((longlong)local_150 + 0x214);
  fStack_110 = *(float *)(local_150 + 0x43);
  fStack_10c = *(float *)((longlong)local_150 + 0x21c);
  fVar14 = *(float *)(local_150 + 0x46);
  fVar29 = fVar14 * *(float *)(param_1 + 0x2c);
  fVar15 = fVar14 * *(float *)(param_1 + 0x24);
  fVar23 = fVar14 * *(float *)(param_1 + 0x28);
  fVar21 = fStack_114 * fVar29 - fStack_110 * fVar23;
  fVar20 = fStack_110 * fVar15 - local_118 * fVar29;
  fVar21 = fVar21 + fVar21;
  fVar18 = local_118 * fVar23 - fStack_114 * fVar15;
  fVar20 = fVar20 + fVar20;
  fVar18 = fVar18 + fVar18;
  local_128 = 0x3f800000;
  uStack_120 = 0;
  fVar31 = (fStack_114 * fVar18 - fStack_110 * fVar20) + fStack_10c * fVar21 + fVar15 +
           *(float *)(local_150 + 0x44);
  fVar23 = (fStack_110 * fVar21 - local_118 * fVar18) + fStack_10c * fVar20 + fVar23 +
           *(float *)((longlong)local_150 + 0x224);
  local_190[0] = *(float *)(lVar6 + 0x34);
  fVar15 = (local_118 * fVar20 - fStack_114 * fVar21) + fStack_10c * fVar18 + fVar29 +
           *(float *)(local_150 + 0x45);
  local_188 = CONCAT44(fVar23,fVar31);
  local_168 = CONCAT44(fStack_110,fVar23);
  uStack_160 = CONCAT44(fStack_110,fStack_110);
  local_180 = fVar15;
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x610))(plVar4,&local_1b0,&local_178);
  }
  else {
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_108,*(undefined8 *)(param_1 + 0x30),local_190);
    local_1b0 = local_f8;
    local_1ac = fStack_f4;
    local_128 = local_108;
    uStack_120 = uStack_100;
    local_1a8 = fStack_f0;
    FQuat::Rotator(&local_128,&local_1c8);
    local_178 = (float)local_1c8;
    local_170 = local_1c0;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_174 = local_1c8._4_4_;
  }
  fVar18 = local_1b8;
  if (*(float *)(param_1 + 0xc) != 0.0) {
    fVar20 = (float)FMath::FInterpConstantTo();
    *(float *)(param_1 + 0xc) = fVar20;
    if (fVar20 != 0.0) {
      local_1a0 = local_1b0 - fVar31;
      local_19c = local_1ac - fVar23;
      local_198 = local_1a8 - fVar15;
      fVar20 = local_19c * local_19c + local_1a0 * local_1a0 + local_198 * local_198;
      if (fVar20 != 1.0) {
        if (1e-08 <= fVar20) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          local_1b8 = auVar13._0_4_;
          local_1b8 = local_1b8 + local_1b8 * (0.5 - fVar20 * 0.5 * local_1b8 * local_1b8);
          local_1b8 = local_1b8 + local_1b8 * (0.5 - fVar20 * 0.5 * local_1b8 * local_1b8);
          local_1a0 = local_1a0 * local_1b8;
          local_19c = local_19c * local_1b8;
          local_198 = local_198 * local_1b8;
        }
        else {
          local_1a0 = DAT_1468b5d90;
          local_198 = DAT_1468b5d98;
          local_19c = DAT_1468b5d94;
        }
      }
      pauVar10 = (undefined1 (*) [12])FVector::Rotation(&local_1a0,local_138);
      fVar21 = (float)DAT_146b453a0;
      fVar23 = DAT_146b453a0._4_4_;
      fVar29 = DAT_146b453a0._8_4_;
      fVar20 = *(float *)(param_1 + 8);
      local_1c8._4_4_ = (float)((ulonglong)*(undefined8 *)*pauVar10 >> 0x20);
      local_1c8._0_4_ = (float)*(undefined8 *)*pauVar10;
      auVar13._12_4_ = 0;
      auVar13._0_12_ = *pauVar10;
      auVar13 = divps(auVar13,_DAT_146b453a0);
      local_1c8._0_4_ = (float)local_1c8 - (float)(int)auVar13._0_4_ * fVar21;
      local_1c8._4_4_ = local_1c8._4_4_ - (float)(int)auVar13._4_4_ * fVar23;
      fVar19 = *(float *)(*pauVar10 + 8) - (float)(int)auVar13._8_4_ * fVar29;
      fVar31 = (float)(((uint)((float)local_1c8 + fVar21) ^ (uint)(float)local_1c8) &
                       -(uint)(0.0 <= (float)local_1c8) ^ (uint)((float)local_1c8 + fVar21));
      fVar17 = (float)(((uint)(local_1c8._4_4_ + fVar23) ^ (uint)local_1c8._4_4_) &
                       -(uint)(0.0 <= local_1c8._4_4_) ^ (uint)(local_1c8._4_4_ + fVar23));
      local_1c0 = (float)(((uint)(fVar19 + fVar29) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                         (uint)(fVar19 + fVar29));
      local_1c0 = (float)(((uint)(local_1c0 - fVar29) ^ (uint)local_1c0) &
                          -(uint)(fRam0000000146b45398 < local_1c0) ^ (uint)local_1c0);
      local_1c8 = CONCAT44(((uint)(fVar17 - fVar23) ^ (uint)fVar17) &
                           -(uint)(fRam0000000146b45394 < fVar17) ^ (uint)fVar17,
                           (float)(((uint)(fVar31 - fVar21) ^ (uint)fVar31) &
                                   -(uint)(_DAT_146b45390 < fVar31) ^ (uint)fVar31) +
                           *(float *)(param_1 + 0xc));
      pfVar11 = (float *)FRotator::Vector(&local_1c8,local_138);
      fVar31 = fVar20 * pfVar11[1] * fVar18 + (float)local_168;
      fVar29 = fVar20 * *pfVar11 * fVar18 + (float)local_188;
      fVar15 = fVar20 * pfVar11[2] * fVar18 + fVar15;
      fVar19 = local_1ac - fVar31;
      fVar28 = local_1b0 - fVar29;
      fVar30 = local_1a8 - fVar15;
      fVar17 = fVar19 * fVar19 + fVar28 * fVar28 + fVar30 * fVar30;
      fVar20 = fVar19;
      fVar21 = fVar28;
      fVar23 = fVar30;
      if ((fVar17 != 1.0) &&
         (fVar20 = DAT_1468b5d94, fVar21 = DAT_1468b5d90, fVar23 = DAT_1468b5d98, 1e-08 <= fVar17))
      {
        auVar22._8_8_ = 0;
        auVar22._0_8_ = CONCAT44(0,fVar17);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = CONCAT44(0,fVar17);
        auVar13 = rsqrtss(auVar22,auVar1);
        local_1b8 = auVar13._0_4_;
        local_1b8 = local_1b8 + local_1b8 * (0.5 - fVar17 * 0.5 * local_1b8 * local_1b8);
        local_1b8 = local_1b8 + local_1b8 * (0.5 - fVar17 * 0.5 * local_1b8 * local_1b8);
        fVar20 = fVar19 * local_1b8;
        fVar21 = fVar28 * local_1b8;
        fVar23 = fVar30 * local_1b8;
      }
      if (fVar20 * local_19c + fVar21 * local_1a0 + fVar23 * local_198 <= 0.0) {
        fVar29 = local_1b0;
        fVar31 = local_1ac;
        fVar15 = local_1a8;
      }
      goto LAB_14301b4cc;
    }
  }
  local_1c8 = local_188;
  local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 8));
  local_1c0 = local_180;
  puVar12 = (undefined8 *)FMath::VInterpConstantTo(local_138,&local_1c8,&local_1b0,fVar18);
  local_188 = *puVar12;
  fVar15 = *(float *)(puVar12 + 1);
  fVar31 = (float)((ulonglong)local_188 >> 0x20);
  fVar29 = (float)local_188;
  local_180 = fVar15;
LAB_14301b4cc:
  if (local_190[0] <
      SQRT((fVar31 - local_1ac) * (fVar31 - local_1ac) + (fVar29 - local_1b0) * (fVar29 - local_1b0)
           + (fVar15 - local_1a8) * (fVar15 - local_1a8))) {
    local_178 = local_178 + local_148;
    local_174 = local_174 + local_144;
    local_170 = local_170 + local_140;
    if (local_158[0] == 0) {
      local_1c0 = fVar18 * *(float *)(param_1 + 0x20);
      local_1c8 = CONCAT44(fVar18 * *(float *)(param_1 + 0x1c),fVar18 * *(float *)(param_1 + 0x18));
      pfVar11 = (float *)FRotator::Quaternion(&local_1c8,local_138);
      fVar18 = *pfVar11;
      fVar20 = pfVar11[1];
      fVar21 = pfVar11[2];
      fVar23 = pfVar11[3];
      local_1b8 = 1e-08;
      fVar24 = fVar23 * local_118 * _DAT_146b45410 + fStack_10c * fVar18 +
               fVar21 * fStack_114 * _DAT_146b45400 + fVar20 * fStack_110 * _DAT_146b453f0;
      fVar25 = fVar21 * local_118 * fRam0000000146b45414 + fStack_10c * fVar20 +
               fVar23 * fStack_114 * fRam0000000146b45404 +
               fVar18 * fStack_110 * fRam0000000146b453f4;
      fVar26 = fVar20 * local_118 * fRam0000000146b45418 + fStack_10c * fVar21 +
               fVar18 * fStack_114 * fRam0000000146b45408 +
               fVar23 * fStack_110 * fRam0000000146b453f8;
      fVar27 = fVar18 * local_118 * fRam0000000146b4541c + fStack_10c * fVar23 +
               fVar20 * fStack_114 * fRam0000000146b4540c +
               fVar21 * fStack_110 * fRam0000000146b453fc;
      auVar16._0_4_ = fVar24 * fVar24 + fVar26 * fVar26;
      auVar16._4_4_ = fVar25 * fVar25 + fVar27 * fVar27;
      auVar16._8_4_ = fVar26 * fVar26 + fVar24 * fVar24;
      auVar16._12_4_ = fVar27 * fVar27 + fVar25 * fVar25;
      fVar17 = auVar16._4_4_ + auVar16._0_4_;
      fVar19 = auVar16._8_4_ + auVar16._4_4_;
      fVar28 = auVar16._12_4_ + auVar16._8_4_;
      fVar30 = auVar16._0_4_ + auVar16._12_4_;
      auVar2._4_4_ = fVar19;
      auVar2._0_4_ = fVar17;
      auVar2._8_4_ = fVar28;
      auVar2._12_4_ = fVar30;
      auVar13 = rsqrtps(auVar16,auVar2);
      fVar18 = auVar13._0_4_;
      fVar20 = auVar13._4_4_;
      fVar21 = auVar13._8_4_;
      fVar23 = auVar13._12_4_;
      fVar18 = (_DAT_146b453c0 - fVar18 * fVar18 * fVar17 * _DAT_146b453c0) * fVar18 + fVar18;
      fVar20 = (fRam0000000146b453c4 - fVar20 * fVar20 * fVar19 * fRam0000000146b453c4) * fVar20 +
               fVar20;
      fVar21 = (fRam0000000146b453c8 - fVar21 * fVar21 * fVar28 * fRam0000000146b453c8) * fVar21 +
               fVar21;
      fVar23 = (fRam0000000146b453cc - fVar23 * fVar23 * fVar30 * fRam0000000146b453cc) * fVar23 +
               fVar23;
      local_168 = CONCAT44(((uint)(((fRam0000000146b453c4 -
                                    fVar20 * fVar20 * fVar19 * fRam0000000146b453c4) * fVar20 +
                                   fVar20) * fVar25) ^ uRam0000000146b453b4) &
                           -(uint)(1e-08 <= fVar19) ^ uRam0000000146b453b4,
                           ((uint)(((_DAT_146b453c0 - fVar18 * fVar18 * fVar17 * _DAT_146b453c0) *
                                    fVar18 + fVar18) * fVar24) ^ _DAT_146b453b0) &
                           -(uint)(1e-08 <= fVar17) ^ _DAT_146b453b0);
      uStack_160 = CONCAT44(((uint)(((fRam0000000146b453cc -
                                     fVar23 * fVar23 * fVar30 * fRam0000000146b453cc) * fVar23 +
                                    fVar23) * fVar27) ^ uRam0000000146b453bc) &
                            -(uint)(1e-08 <= fVar30) ^ uRam0000000146b453bc,
                            ((uint)(((fRam0000000146b453c8 -
                                     fVar21 * fVar21 * fVar28 * fRam0000000146b453c8) * fVar21 +
                                    fVar21) * fVar26) ^ uRam0000000146b453b8) &
                            -(uint)(1e-08 <= fVar28) ^ uRam0000000146b453b8);
    }
    else if (local_158[0] == 1) {
      uVar7 = FQuat::Rotator(&local_118,local_138);
      local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x1c));
      FMath::RInterpTo(&local_1c8,uVar7,&local_178,fVar18);
      puVar12 = (undefined8 *)FRotator::Quaternion(&local_1c8,local_138);
      local_168 = *puVar12;
      uStack_160 = puVar12[1];
    }
    if ((*(longlong *)(lVar6 + 0x70) != 0) && (fVar18 = (float)local_128, (float)local_128 < 1.0)) {
      fVar21 = (float)UCurveFloat::GetFloatValue();
      fVar20 = *(float *)(param_1 + 0x14);
      fVar21 = fVar21 * (fVar18 - 1.0);
      fVar18 = fVar21 + 1.0;
      if ((0.0 < fVar20) &&
         (fVar23 = *(float *)(lVar6 + 0x30) - *(float *)(param_1 + 4), fVar23 < fVar20)) {
        fVar18 = (fVar23 / fVar20) * fVar21 + 1.0;
      }
      if (fVar18 < fVar14) {
        local_1c8 = CONCAT44(fVar18,fVar18);
        local_1c0 = fVar18;
        local_198 = fVar18;
        (**(code **)(*local_150 + 0x3f8))(local_150,&local_1c8);
        fVar14 = fVar18;
      }
    }
    fVar18 = fVar14 * *(float *)(param_1 + 0x24);
    local_1d0 = 0;
    local_1d8 = 0;
    fVar17 = fVar14 * *(float *)(param_1 + 0x2c);
    fVar14 = fVar14 * *(float *)(param_1 + 0x28);
    fVar21 = local_168._4_4_ * fVar17 - (float)uStack_160 * fVar14;
    fVar23 = (float)uStack_160 * fVar18 - (float)local_168 * fVar17;
    fVar21 = fVar21 + fVar21;
    fVar20 = (float)local_168 * fVar14 - local_168._4_4_ * fVar18;
    fVar23 = fVar23 + fVar23;
    fVar20 = fVar20 + fVar20;
    local_1c0 = fVar15 - ((fVar23 * (float)local_168 - fVar21 * local_168._4_4_) +
                         fVar20 * uStack_160._4_4_ + fVar17);
    local_1c8 = CONCAT44(fVar31 - ((fVar21 * (float)uStack_160 - fVar20 * (float)local_168) +
                                  fVar23 * uStack_160._4_4_ + fVar14),
                         fVar29 - ((fVar20 * local_168._4_4_ - fVar23 * (float)uStack_160) +
                                  fVar21 * uStack_160._4_4_ + fVar18));
    local_180 = local_1c0;
    FUN_142399390(local_150,&local_1c8,&local_168,0);
    return 1;
  }
  *param_1 = '\0';
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9,*(undefined8 *)(param_1 + 0x30));
  }
  (**(code **)(*plVar8 + 0x18))(plVar8);
  return 0;
}



// FUNCTION 14301b970 FUN_14301b970 body=461 status=ok
// SIG undefined FUN_14301b970(void)

void FUN_14301b970(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [8];
  float local_20;
  
  fVar4 = *(float *)(param_1 + 0x610);
  if (0.0 < fVar4) {
    fVar3 = param_2 + *(float *)(param_1 + 0x61c);
    *(float *)(param_1 + 0x61c) = fVar3;
    if (fVar3 < fVar4) {
      plVar2 = *(longlong **)(param_1 + 0x488);
      if ((plVar2 != (longlong *)0x0) ||
         (plVar2 = *(longlong **)(param_1 + 0x480), plVar2 != (longlong *)0x0)) {
        local_30 = 1.0 - fVar3 / fVar4;
        local_38 = CONCAT44(local_30,local_30);
        local_20 = local_30;
        (**(code **)(*plVar2 + 0x3f8))(local_30,&local_38);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x610) = 0;
      FUN_142227350(fVar3,0,1);
    }
  }
  if ((((*(byte *)(param_1 + 0x614) & 2) == 0) && ((*(byte *)(param_1 + 0x4a4) & 0x20) == 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x488), plVar2 != (longlong *)0x0 ||
      (plVar2 = *(longlong **)(param_1 + 0x480), plVar2 != (longlong *)0x0)))) {
    if (1.001 < *(float *)(param_1 + 0x648)) {
      fVar4 = *(float *)(param_1 + 0x648) -
              (*(float *)(param_1 + 0x608) + *(float *)(param_1 + 0x608)) * param_2;
      *(float *)(param_1 + 0x648) = fVar4;
      if (fVar4 <= 1.0) {
        fVar4 = 1.0;
      }
      (**(code **)(*plVar2 + 0x7e0))(plVar2,fVar4);
    }
    pfVar1 = (float *)UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(plVar2,local_28,0);
    *(float *)(param_1 + 0x5f8) =
         SQRT(*pfVar1 * *pfVar1 + pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2]);
    pfVar1 = (float *)UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(plVar2,local_28,0);
    fVar4 = pfVar1[2];
    *(ulonglong *)(param_1 + 0x5fc) = CONCAT44(pfVar1[1] * 57.295776,*pfVar1 * 57.295776);
    *(float *)(param_1 + 0x604) = fVar4 * 57.295776;
  }
  return;
}



// FUNCTION 14301bb40 FUN_14301bb40 body=53 status=ok
// SIG undefined FUN_14301bb40(void)

undefined8 * FUN_14301bb40(char *param_1,undefined8 *param_2)

{
  if (*param_1 != '\x04') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FUN_142ff1dc0(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 14301bb80 FUN_14301bb80 body=225 status=ok
// SIG undefined FUN_14301bb80(void)

void FUN_14301bb80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,*(undefined4 *)(param_1 + 0x3a0));
  if (cVar4 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    local_res10 = *puVar6;
    uStackX_14 = puVar6[1];
    cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_res10);
    local_res18[0] = CONCAT44(uStackX_14,local_res10);
    (**(code **)(*plVar8 + 0x40))(plVar8,local_res18,cVar4 == '\0');
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014301bc55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14301bc70 FUN_14301bc70 body=420 status=ok
// SIG undefined FUN_14301bc70(void)

undefined8
FUN_14301bc70(longlong *param_1,int *param_2,longlong *param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res18 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_30;
  byte local_2f;
  undefined4 local_2c;
  undefined1 local_28;
  byte local_24;
  undefined4 local_20;
  byte local_1c;
  
  if (param_3 != (longlong *)0x0) {
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
      goto LAB_14301bcd0;
    }
  }
  uVar2 = FUN_1430255d0();
  lVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
LAB_14301bcd0:
  if (lVar4 != 0) {
    lVar6 = param_1[0x45];
    local_2f = local_2f & 0xf0;
    local_1c = local_1c & 0xfc;
    lVar5 = (longlong)(int)param_1[0x46] * 0x40 + lVar6;
    local_58 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    local_48 = 0;
    local_40 = 1;
    local_38 = 0;
    local_30 = 0;
    uVar7 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 1;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x40) {
      if (*(int *)(lVar6 + 0xc) == *param_2) {
        FUN_1411cb440(&local_58);
        cVar1 = (**(code **)(*param_1 + 0x478))(param_1,&local_58);
        if (cVar1 == '\0') {
          return 0;
        }
        if (((param_5 == '\0') && (DAT_146b45384 == '\0')) && (0 < *(int *)(lVar4 + 0x2a8))) {
          if ((local_2f & 8) == 0) {
            uVar7 = (uint)local_24;
          }
          if (*(int *)(lVar4 + 0x2a8) < (int)(uVar7 + *(int *)(lVar4 + 0x240))) {
            return 0;
          }
        }
        (**(code **)(*param_1 + 0x4c0))(param_1,local_38);
        FUN_143011bf0(param_1,param_2,param_4,0);
        FUN_142fe3dd0(lVar4,local_res18,local_48,local_38,param_4,0,0,0,0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14301be20 FUN_14301be20 body=81 status=ok
// SIG undefined FUN_14301be20(void)

void FUN_14301be20(longlong *param_1)

{
  char cVar1;
  
  if (((param_1[0x8f] == 0) && ((*(byte *)(param_1 + 0xb5) & 0x20) == 0)) &&
     ((char)param_1[0x25] == '\x03')) {
    cVar1 = (**(code **)(*param_1 + 0x770))();
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 0x20;
                    /* WARNING: Could not recover jumptable at 0x00014301be64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x778))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14301be80 FUN_14301be80 body=819 status=ok
// SIG undefined FUN_14301be80(void)

undefined4 * FUN_14301be80(longlong *param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  iVar4 = FUN_14233f450();
  if (((iVar4 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) && (param_3 != 0)) {
    uVar13 = 0;
    plVar1 = param_1 + 0x49;
    iVar4 = (int)param_1[0x4e];
    puStack_48 = (uint *)(param_1 + 0x4b);
    local_98 = 0;
    uStack_94 = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar4 != 0) {
      puVar10 = (uint *)param_1[0x4d];
      if ((uint *)param_1[0x4d] == (uint *)0x0) {
        puVar10 = puStack_48;
      }
      uVar6 = *puVar10;
      uVar7 = uVar13;
      uVar9 = uVar13;
      while (uVar6 == 0) {
        iVar5 = (int)uVar7;
        uStack_80 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_80;
        local_98 = iVar5 + 1;
        uVar7 = (ulonglong)local_98;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14301bf7f;
        uVar6 = puVar10[(longlong)iVar5 + 1];
      }
      uStack_94 = -uVar6 & uVar6;
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
      local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
      if (iVar4 < local_88._4_4_) {
LAB_14301bf7f:
        local_88._4_4_ = iVar4;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50 = local_98;
    uStack_4c = uStack_94;
    local_60 = 0;
    local_30._0_4_ = SUB84(plVar1,0);
    local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    uStack_90 = local_98;
    uStack_8c = uStack_94;
    local_78._8_4_ = (undefined4)local_30;
    local_78._0_8_ = auStack_40._8_8_;
    local_78._12_4_ = local_30._4_4_;
    bVar3 = local_88._4_4_ < (int)param_1[0x4e];
    local_68 = plVar1;
    local_58 = plVar1;
    local_30 = plVar1;
    local_88 = puStack_48;
    if (bVar3) {
      do {
        lVar12 = (longlong)iStack_7c * 0x20;
        lVar2 = *plVar1;
        if ((param_3 == *(longlong *)(lVar12 + lVar2)) && (*(char *)(lVar12 + 0xc + lVar2) != '\0'))
        {
          iVar4 = *(int *)(lVar12 + 8 + lVar2);
          if (((iVar4 < 0) || (iVar5 = (int)param_1[0x46], iVar5 <= iVar4)) &&
             (iVar5 = (int)param_1[0x46], uVar7 = uVar13, uVar9 = uVar13, uVar11 = uVar13, 0 < iVar5
             )) {
            do {
              if ((*(byte *)(param_1[0x45] + 0x29 + uVar11) & 4) == 0) {
                lVar2 = *(longlong *)(param_1[0x45] + 0x10 + uVar11);
                if ((lVar2 != 0) && (lVar2 == *(longlong *)(lVar12 + *plVar1))) {
                  *(int *)(lVar12 + 8 + *plVar1) = (int)uVar9;
                  iVar4 = (int)uVar7;
                }
                uVar9 = (ulonglong)((int)uVar9 + 1);
              }
              iVar5 = (int)param_1[0x46];
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
              uVar11 = uVar11 + 0x40;
            } while ((int)uVar6 < iVar5);
          }
          if (((-1 < iVar4) && (iVar4 < iVar5)) &&
             (*(longlong *)(param_1[0x45] + 0x20 + (longlong)iVar4 * 0x40) == 0)) {
            (**(code **)(*param_1 + 0x260))(param_1);
            lVar2 = param_1[0x45];
            lVar12 = (longlong)iVar4 * 0x40;
            piVar8 = (int *)(lVar12 + 0x18 + lVar2);
            *piVar8 = *piVar8 + param_4;
            if (*piVar8 < 0) {
              *(undefined4 *)(lVar12 + 0x18 + lVar2) = 0;
            }
            piVar8 = (int *)(param_1[0x45] + lVar12);
            if (*piVar8 == -1) {
              *(int *)(param_1 + 0x39) = (int)param_1[0x39] + 1;
              *piVar8 = (int)param_1[0x39];
              iVar5 = (int)param_1[0x39];
              if ((int)param_1[0x39] == -1) {
                iVar5 = 0;
              }
              *(int *)(param_1 + 0x39) = iVar5;
            }
            piVar8[1] = piVar8[1] + 1;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                      (param_1 + 0x2f);
            iVar5 = *(int *)((longlong)param_1 + 0x1cc) + 1;
            *(int *)((longlong)param_1 + 0x1cc) = iVar5;
            if (iVar5 == -1) {
              *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
            }
            param_1[0x44] = -1;
            FUN_14300d630(param_1,iVar4);
            *param_2 = *(undefined4 *)(param_1[0x45] + 0xc + lVar12);
            if ((char)local_60 == '\0') {
              return param_2;
            }
            if (local_60._1_1_ == '\0') {
              return param_2;
            }
            TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
            return param_2;
          }
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 14301c1c0 FUN_14301c1c0 body=352 status=ok
// SIG undefined FUN_14301c1c0(void)

void FUN_14301c1c0(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_38 [32];
  
  plVar1 = (longlong *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x1d4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar3 = *(int *)(param_1 + 0x128);
  lVar6 = FUN_142ff6320();
  puVar7 = *(undefined4 **)(lVar6 + 0x18);
  puVar8 = puVar7 + (longlong)*(int *)(lVar6 + 0x20) * 0xc;
  for (; puVar7 != puVar8; puVar7 = puVar7 + 0xc) {
    if (((((int)puVar7[6] <= iVar3) && (iVar3 <= (int)puVar7[7])) &&
        (cVar4 = FWeakObjectPtr::IsValid(puVar7), cVar4 != '\0')) &&
       (iVar5 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                          (plVar1,puVar7), iVar5 == -1)) {
      iVar5 = *(int *)(param_1 + 0x1d0);
      *(int *)(param_1 + 0x1d0) = iVar5 + 1;
      if (*(int *)(param_1 + 0x1d4) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
      }
      puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 8);
      *puVar2 = *puVar7;
      puVar2[1] = puVar7[1];
    }
  }
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x1d0),0,local_res8);
  if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x210))();
    lVar6 = *(longlong *)(param_1 + 0x1b8);
    TArray<FName,FDefaultAllocator>::operator=(lVar6 + 0x4e8,lVar6 + 0x4d0);
    *(undefined4 *)(lVar6 + 0x4d8) = 0;
    if (*(int *)(lVar6 + 0x4dc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar6 + 0x4d0,0);
    }
    FUN_14300d460(lVar6 + 0x428);
    FUN_14300d830(lVar6,local_38,lVar6 + 0x36c);
  }
  return;
}



// FUNCTION 14301c320 FUN_14301c320 body=178 status=ok
// SIG undefined FUN_14301c320(void)

void FUN_14301c320(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((int)(uint)*(byte *)(param_1 + 0x109) < *(int *)(param_1 + 0x120)) {
    do {
      FUN_14301c3e0(param_1);
      if ((*(int *)(param_1 + 0x230) != 0) && (*(int *)(param_1 + 0x110) != 0)) {
        return;
      }
      FWeakObjectPtr::operator=(&local_res8,0);
      plVar3 = (longlong *)
               ((ulonglong)*(byte *)(param_1 + 0x109) * 0x10 + *(longlong *)(param_1 + 0x118));
      iVar2 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
      }
      puVar1 = (undefined4 *)(*plVar3 + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      *(char *)(param_1 + 0x109) = *(char *)(param_1 + 0x109) + '\x01';
    } while ((int)(uint)*(byte *)(param_1 + 0x109) < *(int *)(param_1 + 0x120));
  }
  *(undefined1 *)(param_1 + 0x108) = 4;
  return;
}



// FUNCTION 14301c3e0 FUN_14301c3e0 body=2214 status=ok
// SIG undefined FUN_14301c3e0(void)

void FUN_14301c3e0(ulonglong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong local_res8;
  uint local_res10;
  uint local_res14;
  uint local_res18;
  uint local_res1c;
  undefined8 local_res20;
  uint *local_e8;
  int local_e0;
  int local_dc;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined2 local_50;
  
  lVar6 = *(longlong *)(param_1 + 0x138);
  puVar15 = (uint *)0x0;
  iVar19 = 0;
  local_e8 = (uint *)0x0;
  local_dc = 0;
  lVar5 = *(longlong *)(lVar6 + 0x38);
  local_res8 = param_1;
  if (lVar5 == 0) {
    if (*(longlong *)(lVar6 + 0x30) != 0) {
      iVar3 = FUN_140b824e0();
      goto LAB_14301c43d;
    }
LAB_14301c441:
    if (*(int *)(lVar6 + 0xe0) == 0) goto LAB_14301caf9;
  }
  else {
    if (*(longlong *)(lVar5 + 0x38) == 0) goto LAB_14301c441;
    iVar3 = *(int *)(*(longlong *)(lVar5 + 0x38) + 0x48) + -1;
LAB_14301c43d:
    if (iVar3 < 1) goto LAB_14301c441;
  }
  local_res10 = local_res10 & 0xffffff00;
  if (lVar5 == 0) {
    if (*(longlong *)(lVar6 + 0x30) == 0) goto LAB_14301c479;
    iVar3 = FUN_140b824e0();
  }
  else if (*(longlong *)(lVar5 + 0x38) == 0) {
LAB_14301c479:
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(lVar5 + 0x38) + 0x48) + -1;
  }
  if ((int)(uint)*(byte *)(param_1 + 0x109) < iVar3) {
    FUN_142d85250(lVar6,0);
    lVar5 = *(longlong *)(lVar6 + 0x58);
    uVar9 = (ulonglong)*(byte *)(param_1 + 0x109);
    iVar17 = *(int *)(lVar5 + uVar9 * 8);
    if (iVar17 == -1) {
      iVar3 = 0;
LAB_14301c4cf:
      plVar14 = (longlong *)0x0;
    }
    else {
      iVar3 = *(int *)(lVar5 + 4 + uVar9 * 8);
      if (*(int *)(lVar5 + 4 + uVar9 * 8) < 1) goto LAB_14301c4cf;
      plVar14 = (longlong *)((longlong)iVar17 * 0x40 + *(longlong *)(lVar6 + 0x68));
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x38);
    if ((lVar5 != 0) ||
       ((*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x30) != 0 &&
        (lVar5 = FUN_140cb9700(), lVar5 != 0)))) {
      if (*(char *)(*(longlong *)(lVar5 + 0x48) + 9 + uVar9 * 0x28) != '\0') {
        *(undefined4 *)(param_1 + 0x10c) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x48) + 0xc + uVar9 * 0x28);
        local_res10 = CONCAT31(local_res10._1_3_,1);
        lVar6 = 0x148;
        *(undefined4 *)(param_1 + 0x110) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x48) + 0x10 + uVar9 * 0x28);
        goto LAB_14301c5fe;
      }
      *(undefined4 *)(param_1 + 0x110) = 1;
      *(undefined4 *)(param_1 + 0x10c) = 1;
    }
    lVar6 = 0x148;
  }
  else {
    iVar3 = *(int *)(lVar6 + 0xe0);
    plVar14 = *(longlong **)(lVar6 + 0xd8);
    if ((lVar5 != 0) ||
       ((*(longlong *)(lVar6 + 0x30) != 0 && (lVar5 = FUN_140cb9700(), lVar5 != 0)))) {
      lVar6 = FUN_14302b270();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(char *)(lVar5 + 0x81) == '\0') {
          *(undefined4 *)(param_1 + 0x110) = 1;
          *(undefined4 *)(param_1 + 0x10c) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(lVar5 + 0x84);
          *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar5 + 0x88);
          local_res10 = CONCAT31(local_res10._1_3_,1);
        }
      }
    }
    lVar6 = 0x158;
  }
LAB_14301c5fe:
  uVar9 = local_res8;
  lVar5 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      lVar12 = *plVar14;
      plVar7 = (longlong *)FUN_14302b1c0();
      if (lVar12 == 0) {
        lVar12 = plVar7[0x1f];
        if (lVar12 == 0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          lVar12 = plVar7[0x1f];
        }
        FWeakObjectPtr::operator=(&local_res18,lVar12);
        local_e0 = iVar19 + 1;
        if (local_dc < local_e0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,iVar19);
          puVar15 = local_e8;
        }
        puVar15[(longlong)iVar19 * 2] = local_res18;
        uVar4 = local_res1c;
LAB_14301c72b:
        puVar15[(longlong)iVar19 * 2 + 1] = uVar4;
        iVar19 = local_e0;
      }
      else {
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < (int)plVar7[0x12]) ||
           (*(longlong **)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)(int)plVar7[0x12] * 8)
            != plVar7 + 0x11)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (cVar2 = FUN_142d7e440(lVar12,*(undefined8 *)(*(longlong *)(uVar9 + 0x100) + 0x2c8),
                                  *(undefined4 *)(uVar9 + 0x128),param_1 + lVar6,0), cVar2 != '\0'))
        {
          FWeakObjectPtr::operator=(&local_res20,lVar12);
          local_e0 = iVar19 + 1;
          if (local_dc < local_e0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,iVar19);
            puVar15 = local_e8;
          }
          puVar15[(longlong)iVar19 * 2] = (uint)local_res20;
          uVar4 = local_res20._4_4_;
          goto LAB_14301c72b;
        }
      }
      plVar14 = plVar14 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  param_1 = local_res8;
  local_d8 = 0;
  local_d0 = 0;
  FUN_142ff6b30(*(undefined8 *)(local_res8 + 0x138),0,*(undefined4 *)(local_res8 + 0x128),&local_d8)
  ;
  lVar6 = local_d8;
  lVar5 = (longlong)(int)local_d0 * 0x20 + local_d8;
  if (local_d8 != lVar5) {
    lVar12 = *(longlong *)(param_1 + 0x140);
    lVar8 = local_d8;
LAB_14301c790:
    if (*(longlong *)(lVar8 + 8) != lVar12) goto code_r0x00014301c796;
    lVar5 = *(longlong *)(lVar8 + 0x18);
    if (lVar5 != 0) {
      local_a8 = *(undefined8 *)(param_1 + 0x130);
      local_a0 = *(longlong *)(param_1 + 0x138);
      local_90 = *(undefined4 *)(param_1 + 0x128);
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_88 = 0;
      uVar9 = *(ulonglong *)(local_a0 + 0x38);
      local_98 = lVar12;
      if ((uVar9 != 0) ||
         ((lVar12 = 0, iVar3 = 0, *(longlong *)(local_a0 + 0x30) != 0 &&
          (uVar9 = FUN_140cb9700(), uVar9 != 0)))) {
        local_c8 = &local_a8;
        local_c0 = uVar9;
        FUN_142fe13d0(&local_c8,lVar5);
        lVar12 = local_88;
        iVar3 = (int)local_80;
      }
      uVar9 = (ulonglong)*(byte *)(param_1 + 0x109);
      if ((int)(uint)*(byte *)(param_1 + 0x109) < iVar3) {
        if ((*(char *)(lVar12 + uVar9 * 0x18) == '\x01') ||
           (0 < *(int *)(lVar12 + 0x10 + uVar9 * 0x18))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) goto LAB_14301c86b;
        bVar1 = true;
      }
      else {
LAB_14301c86b:
        bVar1 = false;
      }
      if (bVar1) {
        puVar11 = (undefined8 *)0x0;
        iVar3 = 0;
        local_c8 = (undefined8 *)0x0;
        local_c0 = local_c0 & 0xffffffff;
        lVar12 = lVar12 + uVar9 * 0x18;
        iVar17 = 0;
        puVar10 = puVar15 + (longlong)iVar19 * 2;
        param_1 = local_res8;
        lVar6 = local_d8;
        local_res20 = lVar12;
        if (puVar15 != puVar10) {
          do {
            local_res18 = *puVar15;
            local_res1c = puVar15[1];
            lVar6 = FWeakObjectPtr::Get(&local_res18);
            plVar7 = *(longlong **)(lVar12 + 8);
            plVar14 = plVar7 + *(int *)(lVar12 + 0x10);
            for (; plVar7 != plVar14; plVar7 = plVar7 + 1) {
              if (*plVar7 == lVar6) {
                lVar6 = (longlong)iVar17;
                iVar18 = iVar17 + 1;
                local_c0 = CONCAT44(local_c0._4_4_,iVar18);
                if (iVar3 < iVar18) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_c8,iVar17);
                  puVar11 = local_c8;
                  iVar3 = local_c0._4_4_;
                  iVar18 = (int)local_c0;
                }
                iVar17 = iVar18;
                *(uint *)(puVar11 + lVar6) = local_res18;
                *(uint *)((longlong)(puVar11 + lVar6) + 4) = local_res1c;
                lVar12 = local_res20;
                break;
              }
            }
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar10);
          puVar15 = local_e8;
          if ((0 < iVar17) && (iVar17 != iVar19)) {
            local_e0 = iVar17;
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_e8,iVar17,local_dc);
            puVar15 = local_e8;
            _guard_xfg_dispatch_icall_nop(local_e8,puVar11,(longlong)iVar17 << 3);
            iVar19 = local_e0;
          }
          param_1 = local_res8;
          lVar6 = local_d8;
          if (puVar11 != (undefined8 *)0x0) {
            FMemory::Free(puVar11);
            param_1 = local_res8;
            lVar6 = local_d8;
          }
        }
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (&local_88);
    }
  }
LAB_14301c99d:
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  if ((char)local_res10 != '\0') {
    if ((1 < *(int *)(param_1 + 0x110)) &&
       (*(int *)(param_1 + 0x10c) <=
        *(int *)(*(longlong *)(param_1 + 0x118) + 8 + (ulonglong)*(byte *)(param_1 + 0x109) * 0x10))
       ) {
      plVar14 = (longlong *)FUN_14302b1c0();
      lVar6 = plVar14[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar14 + 0x368))(plVar14);
        lVar6 = plVar14[0x1f];
      }
      FWeakObjectPtr::operator=(&local_res10,lVar6);
      local_e0 = iVar19 + 1;
      if (local_dc < local_e0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,iVar19);
        puVar15 = local_e8;
      }
      puVar15[(longlong)iVar19 * 2] = local_res10;
      puVar15[(longlong)iVar19 * 2 + 1] = local_res14;
      iVar19 = local_e0;
    }
    puVar11 = (undefined8 *)
              ((ulonglong)*(byte *)(param_1 + 0x109) * 0x10 + *(longlong *)(param_1 + 0x118));
    puVar16 = (uint *)*puVar11;
    puVar10 = puVar16 + (longlong)*(int *)(puVar11 + 1) * 2;
    for (; puVar16 != puVar10; puVar16 = puVar16 + 2) {
      local_res10 = *puVar16;
      local_res14 = puVar16[1];
      for (puVar13 = puVar15; puVar13 != puVar15 + (longlong)iVar19 * 2; puVar13 = puVar13 + 2) {
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(puVar13,&local_res10);
        if (cVar2 != '\0') {
          iVar3 = (int)((longlong)puVar13 - (longlong)puVar15 >> 3);
          if (iVar3 != -1) {
            _guard_xfg_dispatch_icall_nop
                      (puVar15 + (longlong)iVar3 * 2,puVar15 + (longlong)iVar3 * 2 + 2,
                       (longlong)((iVar19 - iVar3) + -1) << 3);
            iVar19 = iVar19 + -1;
          }
          break;
        }
      }
    }
  }
LAB_14301caf9:
  plVar14 = (longlong *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(int *)(param_1 + 0x234) != iVar19) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14,iVar19);
  }
  puVar10 = puVar15;
  do {
    if (puVar10 == puVar15 + (longlong)iVar19 * 2) {
      local_res10 = local_res10 & 0xffffff00;
      AlgoImpl::
      IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (*plVar14,(longlong)*(int *)(param_1 + 0x230),local_res8 & 0xff,&local_res10);
      uVar9 = local_res8;
      (**(code **)(**(longlong **)(local_res8 + 0x218) + 0x210))();
      lVar6 = *(longlong *)(uVar9 + 0x218);
      TArray<FName,FDefaultAllocator>::operator=(lVar6 + 0x4e8,lVar6 + 0x4d0);
      *(undefined4 *)(lVar6 + 0x4d8) = 0;
      if (*(int *)(lVar6 + 0x4dc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar6 + 0x4d0,0);
      }
      FUN_14300d460(lVar6 + 0x428);
      FUN_14300d830(lVar6,&local_c8,lVar6 + 0x36c);
      if (0 < *(int *)(uVar9 + 0x230)) {
        local_res8 = *(ulonglong *)*plVar14;
        FUN_143016330(*(undefined8 *)(uVar9 + 0x218),&local_res8,1);
      }
      if (puVar15 != (uint *)0x0) {
        FMemory::Free(puVar15);
      }
      return;
    }
    lVar6 = *plVar14;
    local_res10 = *puVar10;
    local_res14 = puVar10[1];
    iVar3 = *(int *)(param_1 + 0x230);
    for (lVar5 = lVar6; lVar5 != lVar6 + (longlong)iVar3 * 8; lVar5 = lVar5 + 8) {
      cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res10);
      if (cVar2 != '\0') {
        if ((int)(lVar5 - lVar6 >> 3) != -1) goto LAB_14301cba2;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x230);
    *(int *)(param_1 + 0x230) = iVar3 + 1;
    if (*(int *)(param_1 + 0x234) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar3);
    }
    puVar16 = (uint *)(*plVar14 + (longlong)iVar3 * 8);
    *puVar16 = local_res10;
    puVar16[1] = local_res14;
LAB_14301cba2:
    puVar10 = puVar10 + 2;
  } while( true );
code_r0x00014301c796:
  lVar8 = lVar8 + 0x20;
  if (lVar8 == lVar5) goto LAB_14301c99d;
  goto LAB_14301c790;
}



// FUNCTION 14301cc90 FUN_14301cc90 body=796 status=ok
// SIG undefined FUN_14301cc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14301cc90(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  uint uStack_120;
  int iStack_11c;
  uint local_118;
  int iStack_114;
  int local_110;
  undefined1 local_10c [4];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  int iStack_cc;
  longlong local_c8;
  undefined8 local_c0;
  uint local_b8 [4];
  uint *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  int local_70;
  int local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(int *)(param_1 + 0x2f8) != 2) {
    plVar4 = *(longlong **)(param_1 + 0x5a8);
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x20))();
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x548);
      uVar5 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_a8 = (uint *)0x0;
      local_a0 = 0;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_98 = 0xffffffff;
      uVar7 = uVar5;
      uVar8 = uVar5;
      if (0 < (int)plVar4[1]) {
        do {
          local_108 = *(undefined4 *)(uVar8 + *plVar4);
          local_104 = *(undefined4 *)(uVar8 + 4 + *plVar4);
          local_100 = local_108;
          local_fc = local_104;
          TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindId(plVar1,&local_110,&local_108);
          if ((local_110 != -1) && ((longlong)local_110 * 0x10 + *plVar1 != 0)) {
            FUN_1425d6f50(&local_c8,local_10c,&local_100,0);
          }
          plVar4 = *(longlong **)(param_1 + 0x5a8);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar8 = uVar8 + 8;
        } while ((int)uVar6 < (int)plVar4[1]);
      }
      FUN_142ff08f0(plVar1,local_78,&local_c8);
      local_128 = (uint *)CONCAT44(local_128._4_4_,(undefined4)local_128);
      if (plVar1 != &local_c8) {
        TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Empty(plVar1,(int)local_c0 - local_94);
        puStack_e0 = local_b8;
        local_138 = (longlong *)0x100000000;
        local_128._4_4_ = 0;
        uStack_120 = 0;
        if ((int)local_a0 != 0) {
          puVar9 = local_b8;
          if (local_a8 != (uint *)0x0) {
            puVar9 = local_a8;
          }
          uVar6 = *puVar9;
          uVar7 = uVar5;
          while (uVar6 == 0) {
            iVar3 = (int)uVar5;
            uStack_120 = (int)uVar7 + 0x20;
            uVar7 = (ulonglong)uStack_120;
            uVar5 = (ulonglong)(iVar3 + 1U);
            uVar8 = (ulonglong)local_138 >> 0x20;
            local_138 = (longlong *)CONCAT44((int)uVar8,iVar3 + 1U);
            if ((int)((int)local_a0 + -1 + ((int)local_a0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) {
              local_128._4_4_ = (int)local_a0;
              goto LAB_14301ce9d;
            }
            uVar6 = puVar9[(longlong)iVar3 + 1];
          }
          uVar6 = -uVar6 & uVar6;
          iVar3 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          local_138 = (longlong *)CONCAT44(uVar6,SUB84(local_138,0));
          if (uVar6 == 0) {
            iVar3 = 0x20;
          }
          else {
            iVar3 = 0x1f - iVar3;
          }
          local_128._4_4_ = (uStack_120 - iVar3) + 0x1f;
          if ((int)local_a0 < local_128._4_4_) {
            local_128._4_4_ = (int)local_a0;
          }
        }
LAB_14301ce9d:
        local_f0 = &local_c8;
        uStack_e8 = local_138;
        uStack_d8 = 0xffffffff;
        iStack_d4 = local_128._4_4_;
        uStack_d0 = uStack_120;
        iStack_cc = iStack_11c;
        uStack_130 = local_138;
        local_118 = uStack_120;
        iStack_114 = iStack_11c;
        uStack_120 = 0xffffffff;
        iStack_11c = local_128._4_4_;
        bVar2 = local_128._4_4_ < (int)local_a0;
        local_138 = local_f0;
        local_128 = puStack_e0;
        if (bVar2) {
          do {
            FUN_1425d6f50(plVar1,local_10c,(longlong)iStack_11c * 0x10 + *local_138,0);
            uStack_120 = uStack_120 & ~uStack_130._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
          } while (iStack_11c < (int)local_128[6]);
        }
      }
      local_30 = 0;
      if (local_38 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_78);
      local_80 = 0;
      if (local_88 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_c8);
      if (local_70 - local_44 < 1) {
        return;
      }
    }
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))((longlong *)(param_1 + 0x420),3);
  }
  return;
}



// FUNCTION 14301cfb0 FUN_14301cfb0 body=1507 status=ok
// SIG undefined FUN_14301cfb0(void)

void FUN_14301cfb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    if (((*(longlong *)(param_1 + 0x100) == 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x2c8) == 0)) ||
       (lVar8 = FUN_14270bb10(), lVar8 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_14189f8d0(DAT_1469f4590,*(undefined4 *)(lVar8 + 0x108));
    }
    cVar5 = *(char *)(param_1 + 0x108);
    if (cVar5 == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                        (*(longlong *)(param_1 + 0x1b8) + 8,local_38);
      SBox::SetContent(uVar6,uVar9);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_88 = *(undefined8 *)(param_1 + 0x1b8);
      local_80 = *(longlong **)(param_1 + 0x1c0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(DAT_1469f4590,uVar7,&local_88,2);
      plVar1 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_80)(local_80);
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
      lVar8 = *(longlong *)(param_1 + 0x1b8);
      if ((*(int *)(lVar8 + 0x550) == *(int *)(lVar8 + 0x57c)) && (0 < *(int *)(param_1 + 0x1d0))) {
        local_res20 = **(undefined4 **)(param_1 + 0x1c8);
        local_res24 = (*(undefined4 **)(param_1 + 0x1c8))[1];
        FUN_143016330(lVar8,&local_res20,1);
      }
    }
    else if (cVar5 == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                        (*(longlong *)(param_1 + 0x1d8) + 8,local_48);
      SBox::SetContent(uVar6,uVar9);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_98 = *(undefined8 *)(param_1 + 0x1d8);
      local_90 = *(longlong **)(param_1 + 0x1e0);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(DAT_1469f4590,uVar7,&local_98,2);
      plVar1 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_90)(local_90);
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
      lVar8 = *(longlong *)(param_1 + 0x1d8);
      if ((*(int *)(lVar8 + 0x550) == *(int *)(lVar8 + 0x57c)) && (0 < *(int *)(param_1 + 0x1f0))) {
        local_res18 = **(undefined4 **)(param_1 + 0x1e8);
        local_res1c = (*(undefined4 **)(param_1 + 0x1e8))[1];
        FUN_143016330(lVar8,&local_res18,1);
      }
    }
    else if (cVar5 == '\x02') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                        (*(longlong *)(param_1 + 0x1f8) + 8,local_58);
      SBox::SetContent(uVar6,uVar9);
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      local_a8 = *(undefined8 *)(param_1 + 0x1f8);
      local_a0 = *(longlong **)(param_1 + 0x200);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(DAT_1469f4590,uVar7,&local_a8,2);
      plVar1 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_a0)(local_a0);
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
      lVar8 = *(longlong *)(param_1 + 0x1f8);
      if ((*(int *)(lVar8 + 0x550) == *(int *)(lVar8 + 0x57c)) && (0 < *(int *)(param_1 + 0x210))) {
        local_res10 = **(undefined4 **)(param_1 + 0x208);
        local_res14 = (*(undefined4 **)(param_1 + 0x208))[1];
        FUN_143016330(lVar8,&local_res10,1);
      }
    }
    else if (cVar5 == '\x03') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                        (*(longlong *)(param_1 + 0x218) + 8,local_68);
      SBox::SetContent(uVar6,uVar9);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      local_b8 = *(undefined8 *)(param_1 + 0x218);
      local_b0 = *(longlong **)(param_1 + 0x220);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(DAT_1469f4590,uVar7,&local_b8,2);
      plVar1 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b0 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
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
      lVar8 = *(longlong *)(param_1 + 0x218);
      if ((*(int *)(lVar8 + 0x550) == *(int *)(lVar8 + 0x57c)) && (0 < *(int *)(param_1 + 0x230))) {
        local_res8 = **(undefined4 **)(param_1 + 0x228);
        local_resc = (*(undefined4 **)(param_1 + 0x228))[1];
        FUN_143016330(lVar8,&local_res8,1);
      }
    }
    else if (cVar5 == '\x04') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                        (*(longlong *)(param_1 + 0x238) + 8,local_78);
      SBox::SetContent(uVar6,uVar9);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_c8 = *(undefined8 *)(param_1 + 0x238);
      local_c0 = *(longlong **)(param_1 + 0x240);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(DAT_1469f4590,uVar7,&local_c8,2);
      plVar1 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_c0 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c0)(local_c0);
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
    }
  }
  return;
}



// FUNCTION 14301d5a0 FUN_14301d5a0 body=848 status=ok
// SIG undefined FUN_14301d5a0(void)

void FUN_14301d5a0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_84;
  uint uStack_80;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  uint local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    plVar8 = (longlong *)0x0;
    if ((*(int *)(*param_1 + 0x510) != 0) &&
       ((plVar7 = *(longlong **)(*param_1 + 0x508), plVar7 != (longlong *)0x0 &&
        (cVar4 = (**(code **)(*plVar7 + 0x18))(), cVar4 != '\0')))) {
      iVar6 = (int)param_1[6];
      local_68 = (uint *)(param_1 + 3);
      uStack_b4 = 1;
      local_b8 = 0;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar2 = *puVar10;
        plVar7 = plVar8;
        plVar9 = plVar8;
        while (uVar2 == 0) {
          iVar5 = (int)plVar7;
          uStack_a0 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_a0;
          local_b8 = iVar5 + 1;
          plVar7 = (longlong *)(ulonglong)local_b8;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14301d6c0;
          uVar2 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_b4 = -uVar2 & uVar2;
        iVar5 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_a4 = (uStack_a0 - iVar5) + 0x1f;
        if (iVar6 < iStack_a4) {
LAB_14301d6c0:
          iStack_a4 = iVar6;
        }
      }
      uStack_70 = CONCAT44(uStack_b4,local_b8);
      uStack_38._0_4_ = 0xffffffff;
      uStack_38._4_4_ = iStack_a4;
      uStack_30 = uStack_a0;
      local_58 = uStack_a0;
      uStack_60._0_4_ = 0xffffffff;
      uStack_60._4_4_ = iStack_a4;
      local_50 = param_1 + 1;
      uStack_48 = uStack_70;
      puStack_40 = local_68;
      if (iStack_a4 < iVar6) {
        do {
          plVar7 = *(longlong **)((longlong)uStack_60._4_4_ * 0x20 + 8 + param_1[1]);
          (**(code **)(*plVar7 + 0x50))(plVar7,local_28);
          plVar7 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_20 + 1;
            lVar3 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_20)(local_20);
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
          uStack_60._0_4_ = (uint)uStack_60 & ~uStack_70._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
        } while (uStack_60._4_4_ < (int)local_68[6]);
      }
      local_50 = param_1 + 0xb;
      uStack_94 = 1;
      iVar6 = (int)param_1[0x10];
      local_68 = (uint *)(param_1 + 0xd);
      local_98 = 0;
      iStack_84 = 0;
      uStack_80 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)param_1[0xf];
        if ((uint *)param_1[0xf] == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar2 = *puVar10;
        plVar7 = plVar8;
        plVar9 = plVar8;
        while (uVar2 == 0) {
          iVar5 = (int)plVar7;
          uStack_80 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_80;
          local_98 = iVar5 + 1;
          plVar7 = (longlong *)(ulonglong)local_98;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14301d82c;
          uVar2 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_94 = -uVar2 & uVar2;
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
        iStack_84 = (uStack_80 - iVar5) + 0x1f;
        if (iVar6 < iStack_84) {
LAB_14301d82c:
          iStack_84 = iVar6;
        }
      }
      uStack_70 = CONCAT44(uStack_94,local_98);
      uStack_60 = CONCAT44(iStack_84,0xffffffff);
      local_58 = uStack_80;
      uStack_30 = uStack_80;
      uStack_38 = uStack_60;
      uStack_48 = uStack_70;
      puStack_40 = local_68;
      if (iStack_84 < iVar6) {
        do {
          uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_48._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
        } while (uStack_38._4_4_ < (int)puStack_40[6]);
      }
    }
    lVar3 = *param_1;
    if (((*(int *)(lVar3 + 0x520) != 0) && (*(longlong **)(lVar3 + 0x518) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x518) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(lVar3 + 0x520) != 0) {
        plVar8 = *(longlong **)(lVar3 + 0x518);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8);
    }
  }
  return;
}



// FUNCTION 14301d8f0 FUN_14301d8f0 body=564 status=ok
// SIG undefined FUN_14301d8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14301d8f0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
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
  if (param_1[0xac] == 0) {
    plVar3 = (longlong *)param_1[0xad];
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_14301f8f0();
      lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
      param_1[0xac] = lVar2;
      if (lVar2 != 0) goto LAB_14301d94e;
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1,0);
    if ((lVar2 != 0) && (*(float *)(lVar2 + 0x790) - *(float *)(param_1 + 0xba) <= 3.0)) {
      uVar1 = AActor::GetWorldTimerManager(param_1);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)FUN_14301d8f0;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar2;
        *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_90 = 0xbf800000;
      local_98 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar1,param_1 + 0xb9,&local_88,0x3e4ccccd);
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
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  else {
LAB_14301d94e:
    FUN_143016850(param_1);
    param_1[0xa7] = *(longlong *)(param_1[0xac] + 0x208);
  }
  return;
}



// FUNCTION 14301db30 FUN_14301db30 body=159 status=ok
// SIG undefined FUN_14301db30(void)

void FUN_14301db30(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if (((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) == 0) &&
     (((char)param_1[0x25] == '\x03' || (param_1[0x1b] == 0)))) {
    if ((*(byte *)((longlong)param_1 + 0x614) & 2) != 0) {
      *(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) & 0xfd;
      FUN_142fea280();
    }
    (**(code **)(*param_1 + 0x600))(param_1);
    cVar1 = (**(code **)(*param_2 + 0x400))(param_2,0);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x5b8))(param_2,1);
    }
    (**(code **)(*param_2 + 0x798))(param_2);
    (**(code **)(*param_2 + 0x7a0))(param_2,1);
  }
  return;
}



// FUNCTION 14301dbd0 FUN_14301dbd0 body=534 status=ok
// SIG undefined FUN_14301dbd0(void)

ulonglong FUN_14301dbd0(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  uVar6 = FUN_140ac35b0(param_1,*(undefined4 *)(param_2 + 1),8);
  if ((char)uVar6 == '\0') {
LAB_14301ddd3:
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    pbVar7 = (byte *)*param_2;
    pbVar8 = pbVar7 + *(int *)(param_2 + 1);
    for (; pbVar7 != pbVar8; pbVar7 = pbVar7 + 1) {
      bVar3 = *pbVar7;
      uVar6 = 0;
      if (*param_1 != '\x01') goto LAB_14301ddd3;
      plVar1 = (longlong *)(param_1 + 8);
      uVar13 = *(uint *)(param_1 + 0x18) >> 3;
      iVar9 = *(uint *)(param_1 + 0x18) + uVar13 * -8;
      iVar14 = uVar13 + 1;
      uVar5 = 8 - iVar9;
      uVar12 = uVar5;
      if (7 < uVar5) {
        uVar12 = 8;
      }
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 < iVar14) {
        *(int *)(param_1 + 0x10) = iVar14;
        if (*(int *)(param_1 + 0x14) < iVar14) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar4 + *plVar1),0,(longlong)(iVar14 - iVar4));
      }
      else if ((iVar14 < iVar4) && (iVar14 != iVar4)) {
        *(int *)(param_1 + 0x10) = iVar14;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      pbVar2 = (byte *)(*plVar1 + (ulonglong)uVar13);
      *pbVar2 = *pbVar2 & (byte)(0xff >> ((byte)uVar5 & 0x1f));
      uVar10 = 8 - uVar12;
      pbVar2 = (byte *)(*plVar1 + (ulonglong)uVar13);
      *pbVar2 = *pbVar2 | ((byte)(0xffffffff >> (0x20U - (char)uVar12 & 0x1f)) & bVar3) <<
                          ((byte)iVar9 & 0x1f);
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar12;
      uVar5 = 8;
      if (uVar10 < 9) {
        uVar5 = uVar10;
      }
      if (uVar10 != 0) {
        iVar9 = uVar13 + 2;
        do {
          iVar4 = *(int *)(param_1 + 0x10);
          if (iVar4 < iVar9) {
            *(int *)(param_1 + 0x10) = iVar9;
            if (*(int *)(param_1 + 0x14) < iVar9) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar4 + *plVar1),0,(longlong)(iVar9 - iVar4));
          }
          else if ((iVar9 < iVar4) && (iVar9 != iVar4)) {
            *(int *)(param_1 + 0x10) = iVar9;
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
          }
          uVar10 = uVar10 - uVar5;
          pbVar2 = (byte *)(*plVar1 + (longlong)iVar14);
          *pbVar2 = *pbVar2 & -1 << ((byte)uVar5 & 0x1f);
          bVar11 = (byte)uVar12;
          uVar12 = uVar12 + uVar5;
          pbVar2 = (byte *)(*plVar1 + (longlong)iVar14);
          *pbVar2 = *pbVar2 | (byte)(0xffffffff >> (0x20 - (byte)uVar5 & 0x1f)) &
                              (byte)((int)(uint)bVar3 >> (bVar11 & 0x1f));
          *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar5;
          uVar5 = 8;
          if (uVar10 < 9) {
            uVar5 = uVar10;
          }
          iVar14 = iVar14 + 1;
          iVar9 = iVar9 + 1;
        } while (uVar10 != 0);
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
  }
  return uVar6;
}



// FUNCTION 14301ddf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_146b462f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"GearBuilderDebugMenu",&DAT_146b462f8,FUN_140447710,0x300
                  ,0x10000000,0,L"Engine",&LAB_14301eeb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_146b462f8;
}



// FUNCTION 14301ded0 FUN_14301ded0 body=47 status=ok
// SIG undefined FUN_14301ded0(void)

longlong FUN_14301ded0(void)

{
  if (DAT_146b46328 == 0) {
    FUN_141786440(&DAT_146b46328,&PTR_thunk_FUN_14301f6e0_145a3ca10);
  }
  return DAT_146b46328;
}



// FUNCTION 14301df00 FUN_14301df00 body=47 status=ok
// SIG undefined FUN_14301df00(void)

longlong FUN_14301df00(void)

{
  if (DAT_146b46308 == 0) {
    FUN_141786a30(&DAT_146b46308,&PTR_FUN_14677c5a0);
  }
  return DAT_146b46308;
}



// FUNCTION 14301df30 FUN_14301df30 body=47 status=ok
// SIG undefined FUN_14301df30(void)

longlong FUN_14301df30(void)

{
  if (DAT_146b46310 == 0) {
    FUN_141786a30(&DAT_146b46310,&PTR_FUN_14677c620);
  }
  return DAT_146b46310;
}



// FUNCTION 14301df60 FUN_14301df60 body=47 status=ok
// SIG undefined FUN_14301df60(void)

longlong FUN_14301df60(void)

{
  if (DAT_146b46318 == 0) {
    FUN_141786a30(&DAT_146b46318,&PTR_FUN_14677c6e0);
  }
  return DAT_146b46318;
}



// FUNCTION 14301df90 FUN_14301df90 body=47 status=ok
// SIG undefined FUN_14301df90(void)

longlong FUN_14301df90(void)

{
  if (DAT_146b46320 == 0) {
    FUN_141786a30(&DAT_146b46320,&PTR_FUN_14677c7a0);
  }
  return DAT_146b46320;
}



// FUNCTION 14301dfc0 FUN_14301dfc0 body=47 status=ok
// SIG undefined FUN_14301dfc0(void)

longlong FUN_14301dfc0(void)

{
  if (DAT_146b46298 == 0) {
    FUN_141786440(&DAT_146b46298,&PTR_StaticClass_145a3cd00);
  }
  return DAT_146b46298;
}



// FUNCTION 14301dff0 FUN_14301dff0 body=47 status=ok
// SIG undefined FUN_14301dff0(void)

longlong FUN_14301dff0(void)

{
  if (DAT_146b46268 == 0) {
    FUN_141786a30(&DAT_146b46268,&PTR_FUN_14677bbf0);
  }
  return DAT_146b46268;
}



// FUNCTION 14301e020 FUN_14301e020 body=47 status=ok
// SIG undefined FUN_14301e020(void)

longlong FUN_14301e020(void)

{
  if (DAT_146b46270 == 0) {
    FUN_141786a30(&DAT_146b46270,&PTR_FUN_14677bcb0);
  }
  return DAT_146b46270;
}



// FUNCTION 14301e050 FUN_14301e050 body=47 status=ok
// SIG undefined FUN_14301e050(void)

longlong FUN_14301e050(void)

{
  if (DAT_146b46278 == 0) {
    FUN_141786a30(&DAT_146b46278,&PTR_FUN_14677be30);
  }
  return DAT_146b46278;
}



// FUNCTION 14301e080 FUN_14301e080 body=47 status=ok
// SIG undefined FUN_14301e080(void)

longlong FUN_14301e080(void)

{
  if (DAT_146b46280 == 0) {
    FUN_141786a30(&DAT_146b46280,&PTR_FUN_14677be70);
  }
  return DAT_146b46280;
}



// FUNCTION 14301e0b0 FUN_14301e0b0 body=47 status=ok
// SIG undefined FUN_14301e0b0(void)

longlong FUN_14301e0b0(void)

{
  if (DAT_146b46288 == 0) {
    FUN_141786a30(&DAT_146b46288,&PTR_FUN_14677beb0);
  }
  return DAT_146b46288;
}



// FUNCTION 14301e0e0 FUN_14301e0e0 body=47 status=ok
// SIG undefined FUN_14301e0e0(void)

longlong FUN_14301e0e0(void)

{
  if (DAT_146b46290 == 0) {
    FUN_141786a30(&DAT_146b46290,&PTR_FUN_14677bef0);
  }
  return DAT_146b46290;
}



// FUNCTION 14301e140 FUN_14301e140 body=162 status=ok
// SIG undefined FUN_14301e140(void)

longlong FUN_14301e140(void)

{
  if (DAT_146b46350 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryBalanceCollectionData",&DAT_146b46350,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",&LAB_14301ef70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46350;
}



// FUNCTION 14301e200 FUN_14301e200 body=47 status=ok
// SIG undefined FUN_14301e200(void)

longlong FUN_14301e200(void)

{
  if (DAT_146b46378 == 0) {
    FUN_141786440(&DAT_146b46378,&PTR_thunk_FUN_14301f840_145a3d6b0);
  }
  return DAT_146b46378;
}



// FUNCTION 14301e230 FUN_14301e230 body=53 status=ok
// SIG undefined FUN_14301e230(void)

void FUN_14301e230(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a40e80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14301e270 FUN_14301e270 body=53 status=ok
// SIG undefined FUN_14301e270(void)

void FUN_14301e270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_145a40f98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14301e2c0 FUN_14301e2c0 body=162 status=ok
// SIG undefined FUN_14301e2c0(void)

longlong FUN_14301e2c0(void)

{
  if (DAT_146b46390 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryBalanceData_Generated",&DAT_146b46390,
                  FUN_140447710,0x128,0x10000000,0,L"Engine",InternalConstructor<USabotageTraceTest>
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f840,&LAB_140447700,0);
  }
  return DAT_146b46390;
}



// FUNCTION 14301e380 FUN_14301e380 body=162 status=ok
// SIG undefined FUN_14301e380(void)

longlong FUN_14301e380(void)

{
  if (DAT_146b462b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"GbxCondition_InventoryRarityComparison",&DAT_146b462b0,
                  FUN_140447710,0x98,0x10000000,0,L"Engine",FUN_14301ee50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b462b0;
}



// FUNCTION 14301e440 FUN_14301e440 body=162 status=ok
// SIG undefined FUN_14301e440(void)

longlong FUN_14301e440(void)

{
  if (DAT_146b462d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"GearBuilderCategoryData",&DAT_146b462d8,FUN_140447710,
                  0x38,0x10000000,0,L"Engine",InternalConstructor<UAIDataProvider_QueryParams>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b462d8;
}



// FUNCTION 14301e4f0 FUN_14301e4f0 body=47 status=ok
// SIG undefined FUN_14301e4f0(void)

longlong FUN_14301e4f0(void)

{
  if (DAT_146b464b0 == 0) {
    FUN_141786440(&DAT_146b464b0,&PTR_LAB_145a3f880);
  }
  return DAT_146b464b0;
}



// FUNCTION 14301e520 FUN_14301e520 body=47 status=ok
// SIG undefined FUN_14301e520(void)

longlong FUN_14301e520(void)

{
  if (DAT_146b463c0 == 0) {
    FUN_141786a30(&DAT_146b463c0,&PTR_FUN_14677d4a0);
  }
  return DAT_146b463c0;
}



// FUNCTION 14301e550 FUN_14301e550 body=47 status=ok
// SIG undefined FUN_14301e550(void)

longlong FUN_14301e550(void)

{
  if (DAT_146b463c8 == 0) {
    FUN_141786a30(&DAT_146b463c8,&PTR_FUN_14677d560);
  }
  return DAT_146b463c8;
}



// FUNCTION 14301e580 FUN_14301e580 body=47 status=ok
// SIG undefined FUN_14301e580(void)

longlong FUN_14301e580(void)

{
  if (DAT_146b463d0 == 0) {
    FUN_141786a30(&DAT_146b463d0,&PTR_FUN_14677d5f0);
  }
  return DAT_146b463d0;
}



// FUNCTION 14301e5b0 FUN_14301e5b0 body=47 status=ok
// SIG undefined FUN_14301e5b0(void)

longlong FUN_14301e5b0(void)

{
  if (DAT_146b463d8 == 0) {
    FUN_141786a30(&DAT_146b463d8,&PTR_FUN_14677d670);
  }
  return DAT_146b463d8;
}



// FUNCTION 14301e5e0 FUN_14301e5e0 body=47 status=ok
// SIG undefined FUN_14301e5e0(void)

longlong FUN_14301e5e0(void)

{
  if (DAT_146b463e0 == 0) {
    FUN_141786a30(&DAT_146b463e0,&PTR_FUN_14677d730);
  }
  return DAT_146b463e0;
}



// FUNCTION 14301e610 FUN_14301e610 body=47 status=ok
// SIG undefined FUN_14301e610(void)

longlong FUN_14301e610(void)

{
  if (DAT_146b463e8 == 0) {
    FUN_141786a30(&DAT_146b463e8,&PTR_FUN_14677d7b0);
  }
  return DAT_146b463e8;
}



// FUNCTION 14301e640 FUN_14301e640 body=47 status=ok
// SIG undefined FUN_14301e640(void)

longlong FUN_14301e640(void)

{
  if (DAT_146b463f0 == 0) {
    FUN_141786a30(&DAT_146b463f0,&PTR_FUN_14677d830);
  }
  return DAT_146b463f0;
}



// FUNCTION 14301e670 FUN_14301e670 body=47 status=ok
// SIG undefined FUN_14301e670(void)

longlong FUN_14301e670(void)

{
  if (DAT_146b463f8 == 0) {
    FUN_141786a30(&DAT_146b463f8,&PTR_FUN_14677d8c0);
  }
  return DAT_146b463f8;
}



// FUNCTION 14301e6a0 FUN_14301e6a0 body=47 status=ok
// SIG undefined FUN_14301e6a0(void)

longlong FUN_14301e6a0(void)

{
  if (DAT_146b46400 == 0) {
    FUN_141786a30(&DAT_146b46400,&PTR_FUN_14677d940);
  }
  return DAT_146b46400;
}



// FUNCTION 14301e6d0 FUN_14301e6d0 body=47 status=ok
// SIG undefined FUN_14301e6d0(void)

longlong FUN_14301e6d0(void)

{
  if (DAT_146b46408 == 0) {
    FUN_141786a30(&DAT_146b46408,&PTR_FUN_14677d9c0);
  }
  return DAT_146b46408;
}



// FUNCTION 14301e700 FUN_14301e700 body=47 status=ok
// SIG undefined FUN_14301e700(void)

longlong FUN_14301e700(void)

{
  if (DAT_146b46410 == 0) {
    FUN_141786a30(&DAT_146b46410,&PTR_FUN_14677da40);
  }
  return DAT_146b46410;
}



// FUNCTION 14301e730 FUN_14301e730 body=47 status=ok
// SIG undefined FUN_14301e730(void)

longlong FUN_14301e730(void)

{
  if (DAT_146b46418 == 0) {
    FUN_141786a30(&DAT_146b46418,&PTR_FUN_14677dac0);
  }
  return DAT_146b46418;
}



// FUNCTION 14301e760 FUN_14301e760 body=47 status=ok
// SIG undefined FUN_14301e760(void)

longlong FUN_14301e760(void)

{
  if (DAT_146b46420 == 0) {
    FUN_141786a30(&DAT_146b46420,&PTR_FUN_14677db40);
  }
  return DAT_146b46420;
}



// FUNCTION 14301e790 FUN_14301e790 body=47 status=ok
// SIG undefined FUN_14301e790(void)

longlong FUN_14301e790(void)

{
  if (DAT_146b46428 == 0) {
    FUN_141786a30(&DAT_146b46428,&PTR_FUN_14677dbc0);
  }
  return DAT_146b46428;
}



// FUNCTION 14301e7c0 FUN_14301e7c0 body=47 status=ok
// SIG undefined FUN_14301e7c0(void)

longlong FUN_14301e7c0(void)

{
  if (DAT_146b46430 == 0) {
    FUN_141786a30(&DAT_146b46430,&PTR_FUN_14677dc80);
  }
  return DAT_146b46430;
}



// FUNCTION 14301e7f0 FUN_14301e7f0 body=47 status=ok
// SIG undefined FUN_14301e7f0(void)

longlong FUN_14301e7f0(void)

{
  if (DAT_146b46438 == 0) {
    FUN_141786a30(&DAT_146b46438,&PTR_FUN_14677dd00);
  }
  return DAT_146b46438;
}



// FUNCTION 14301e820 FUN_14301e820 body=47 status=ok
// SIG undefined FUN_14301e820(void)

longlong FUN_14301e820(void)

{
  if (DAT_146b46440 == 0) {
    FUN_141786a30(&DAT_146b46440,&PTR_FUN_14677dd80);
  }
  return DAT_146b46440;
}



// FUNCTION 14301e850 FUN_14301e850 body=47 status=ok
// SIG undefined FUN_14301e850(void)

longlong FUN_14301e850(void)

{
  if (DAT_146b46448 == 0) {
    FUN_141786a30(&DAT_146b46448,&PTR_FUN_14677de00);
  }
  return DAT_146b46448;
}



// FUNCTION 14301e880 FUN_14301e880 body=47 status=ok
// SIG undefined FUN_14301e880(void)

longlong FUN_14301e880(void)

{
  if (DAT_146b46450 == 0) {
    FUN_141786a30(&DAT_146b46450,&PTR_FUN_14677de80);
  }
  return DAT_146b46450;
}



// FUNCTION 14301e8b0 FUN_14301e8b0 body=47 status=ok
// SIG undefined FUN_14301e8b0(void)

longlong FUN_14301e8b0(void)

{
  if (DAT_146b46458 == 0) {
    FUN_141786a30(&DAT_146b46458,&PTR_FUN_14677df00);
  }
  return DAT_146b46458;
}



// FUNCTION 14301e8e0 FUN_14301e8e0 body=47 status=ok
// SIG undefined FUN_14301e8e0(void)

longlong FUN_14301e8e0(void)

{
  if (DAT_146b46460 == 0) {
    FUN_141786a30(&DAT_146b46460,&PTR_FUN_14677df80);
  }
  return DAT_146b46460;
}



// FUNCTION 14301e910 FUN_14301e910 body=47 status=ok
// SIG undefined FUN_14301e910(void)

longlong FUN_14301e910(void)

{
  if (DAT_146b46468 == 0) {
    FUN_141786a30(&DAT_146b46468,&PTR_FUN_14677e040);
  }
  return DAT_146b46468;
}


