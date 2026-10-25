// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e94e70 FUN_142e94e70 body=259 status=ok
// SIG undefined FUN_142e94e70(void)

undefined1
FUN_142e94e70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined1 local_10 [8];
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_14217c140(local_10);
  FString::FString(local_48,param_1);
  local_38 = param_1[2];
  uVar1 = FUN_142e94f80(local_48,param_2,&local_30,param_3,param_4,param_5,param_6,param_7);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if ((int)local_28 != 0) {
    lVar2 = local_30 + 8;
    iVar3 = (int)local_28;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142e94f80 FUN_142e94f80 body=434 status=ok
// SIG undefined FUN_142e94f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142e94f80(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined8 local_358;
  longlong local_350;
  longlong local_348;
  undefined1 local_340 [24];
  undefined1 local_328 [736];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  local_348 = param_5;
  local_350 = param_4;
  lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_6,0);
  lVar1 = param_1[2];
  cVar2 = FUN_142190080(lVar1);
  if (cVar2 == '\0') goto LAB_142e95101;
  local_358 = 0xd3;
  if (*(longlong *)(lVar1 + 0x28) != 0xd3) {
    if ((*(int *)(lVar1 + 0x88) == 0) || (*(int *)(lVar1 + 0x88) == 1)) goto LAB_142e95101;
    iVar3 = *(int *)(lVar1 + 0x98) + -1;
    if (*(int *)(lVar1 + 0x98) == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_142e95101;
  }
  iVar3 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = 0;
  }
  if (((iVar3 != 0) && (lVar4 != 0)) &&
     ((param_8 != '\0' || (iVar3 = FUN_1428cf800(lVar4), iVar3 < 3)))) {
    FUN_142e95e70(param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    local_368 = &local_350;
    FUN_142e8a720(local_340,param_7,puVar5,param_1[2]);
    if ((local_350 != 0) && (param_5 != 0)) {
      FUN_142e95e70(param_1);
      FUN_142e8c0e0(local_340,param_1[2],&local_348);
    }
    cVar2 = FUN_14218fca0(local_340);
    if (cVar2 != '\0') {
      TArray<FSessionPropertyKeyPair,TSizedDefaultAllocator<32>_>::operator=(local_328,param_3);
    }
    FUN_14217f3d0(local_340);
    if (*param_1 != 0) {
      FMemory::Free();
    }
    return 1;
  }
LAB_142e95101:
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142e95140 FUN_142e95140 body=138 status=ok
// SIG undefined FUN_142e95140(void)

void FUN_142e95140(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 local_28 [16];
  undefined8 local_18;
  
  FString::FString(local_28,param_2 + 0x10);
  local_18 = *(undefined8 *)(param_2 + 0x20);
  FUN_142e94f80(local_28,param_1,param_2,0,0,param_3,param_4,param_5);
  return;
}



// FUNCTION 142e951d0 FUN_142e951d0 body=445 status=ok
// SIG undefined FUN_142e951d0(void)

void FUN_142e951d0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)(*param_1 + 0x118);
    do {
      iVar6 = puVar4[6];
      lVar3 = *(longlong *)(puVar4 + 4);
      if (iVar6 != 0) {
        plVar7 = (longlong *)(lVar3 + 8);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar3 = *(longlong *)(puVar4 + 4);
      }
      if (lVar3 != 0) {
        FMemory::Free();
      }
      *puVar4 = 0;
      if (*(longlong *)(puVar4 + -2) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(puVar4 + -0x12,0);
      if (*(longlong *)(puVar4 + -10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x12) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x16) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x1a) != 0) {
        FMemory::Free();
      }
      puVar4[-0x1c] = 0;
      if (*(longlong *)(puVar4 + -0x1e) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(puVar4 + -0x2e,0);
      if (*(longlong *)(puVar4 + -0x26) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x2e) != 0) {
        FMemory::Free();
      }
      puVar4[-0x30] = 0;
      if (*(longlong *)(puVar4 + -0x32) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar4 + -0x42);
      plVar7 = *(longlong **)(puVar4 + -0x44);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      puVar4 = puVar4 + 0x4e;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<312,4>_>,FDefaultAllocator>::ResizeTo
            (param_1,param_2);
  return;
}



// FUNCTION 142e95390 FUN_142e95390 body=108 status=ok
// SIG undefined FUN_142e95390(void)

void FUN_142e95390(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x28))(param_3);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x78))(plVar1,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    FOutputDevice::LogfImpl(*(undefined8 *)(param_1 + 8),L"%s = %s",param_2,puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142e95400 FUN_142e95400 body=85 status=ok
// SIG undefined FUN_142e95400(void)

void FUN_142e95400(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  if (lVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 8))(param_3);
    FOutputDevice::LogfImpl(*(undefined8 *)(param_1 + 8),L"%s : %s",param_2,uVar2);
  }
  return;
}



// FUNCTION 142e954d0 FUN_142e954d0 body=75 status=ok
// SIG undefined FUN_142e954d0(void)

void FUN_142e954d0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return;
}



// FUNCTION 142e95520 FUN_142e95520 body=110 status=ok
// SIG undefined FUN_142e95520(void)

undefined8 FUN_142e95520(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x28))(param_3);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x78))(plVar1,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    FOutputDevice::LogfImpl(*(undefined8 *)(param_1 + 8),L"%s = %s",param_2,puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 142e95590 FUN_142e95590 body=87 status=ok
// SIG undefined FUN_142e95590(void)

undefined8 FUN_142e95590(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  if (lVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 8))(param_3);
    FOutputDevice::LogfImpl(*(undefined8 *)(param_1 + 8),L"%s : %s",param_2,uVar2);
  }
  return 1;
}



// FUNCTION 142e95620 FUN_142e95620 body=77 status=ok
// SIG undefined FUN_142e95620(void)

undefined8 FUN_142e95620(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 142e95670 FUN_142e95670 body=223 status=ok
// SIG undefined FUN_142e95670(void)

int * FUN_142e95670(longlong *param_1,int *param_2,undefined8 *param_3)

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
        lVar7 = (longlong)iVar1 * 0x70;
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
        iVar1 = *(int *)(lVar7 + 0x60 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142e95750 FUN_142e95750 body=111 status=ok
// SIG undefined FUN_142e95750(void)

undefined * FUN_142e95750(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b3d700) {
    _Init_thread_header(&DAT_146b3d700);
    if (DAT_146b3d700 == -1) {
      FUN_142e8d640(&DAT_146b3d6c0);
      _Init_thread_footer(&DAT_146b3d700);
      return &DAT_146b3d6c0;
    }
  }
  return &DAT_146b3d6c0;
}



// FUNCTION 142e957c0 FUN_142e957c0 body=282 status=ok
// SIG undefined FUN_142e957c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142e957c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [4];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  uVar3 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar3;
      lVar1 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar1 = param_1 + 0x38;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar1 + uVar2 * 4) = 0xffffffff;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x50,0);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_142e96360(param_1,param_2,param_3,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142e958e0 FUN_142e958e0 body=1108 status=ok
// SIG undefined FUN_142e958e0(void)

void FUN_142e958e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res10 [8];
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
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146b3d790) && (_Init_thread_header(&DAT_146b3d790), DAT_146b3d790 == -1)) {
    FName::FName(&DAT_146b3d788,L"Configuration",1);
    _Init_thread_footer(&DAT_146b3d790);
  }
  if ((*piVar7 < DAT_146b3d7a0) && (_Init_thread_header(&DAT_146b3d7a0), DAT_146b3d7a0 == -1)) {
    FName::FName(&DAT_146b3d798,L"Collector",1);
    _Init_thread_footer(&DAT_146b3d7a0);
  }
  if ((*piVar7 < DAT_146b3d7b0) && (_Init_thread_header(&DAT_146b3d7b0), DAT_146b3d7b0 == -1)) {
    FName::FName(&DAT_146b3d7a8,L"Reporter",1);
    _Init_thread_footer(&DAT_146b3d7b0);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  plVar4 = (longlong *)FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar5,0,1,param_3);
  if (plVar4 != (longlong *)0x0) {
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar9 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar9 = plVar4 + 7;
      }
      iVar2 = *(int *)((longlong)plVar9 +
                      ((longlong)((int)((ulonglong)DAT_146b3d788 >> 0x20) + (int)DAT_146b3d788) &
                      (longlong)(int)plVar4[9] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(*plVar4 + (longlong)iVar2 * 0x30) == DAT_146b3d788) {
            if (iVar2 != -1) {
              iVar2 = (int)plVar4[5];
              puStack_38 = (uint *)(plVar4 + 2);
              local_88 = 0;
              uStack_84 = 1;
              local_78._4_4_ = 0;
              uStack_70 = 0;
              if (iVar2 == 0) goto LAB_142e95b03;
              puVar11 = (uint *)plVar4[4];
              if ((uint *)plVar4[4] == (uint *)0x0) {
                puVar11 = puStack_38;
              }
              uVar8 = *puVar11;
              goto joined_r0x000142e95aa9;
            }
            break;
          }
          iVar2 = *(int *)(*plVar4 + 0x28 + (longlong)iVar2 * 0x30);
        } while (iVar2 != -1);
      }
    }
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      uVar10 = (longlong)(int)plVar4[9] - 1;
      plVar9 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar9 = plVar4 + 7;
      }
      iVar2 = *(int *)((longlong)plVar9 +
                      ((longlong)((int)((ulonglong)DAT_146b3d798 >> 0x20) + (int)DAT_146b3d798) &
                      uVar10) * 4);
      if (iVar2 != -1) {
        lVar6 = *plVar4;
        do {
          if (*(longlong *)(lVar6 + (longlong)iVar2 * 0x30) == DAT_146b3d798) {
            if (iVar2 == -1) {
              return;
            }
            iVar2 = *(int *)((longlong)plVar9 +
                            ((longlong)
                             ((int)((ulonglong)DAT_146b3d7a8 >> 0x20) + (int)DAT_146b3d7a8) & uVar10
                            ) * 4);
            while( true ) {
              if (iVar2 == -1) {
                return;
              }
              if (*(longlong *)(lVar6 + (longlong)iVar2 * 0x30) == DAT_146b3d7a8) break;
              iVar2 = *(int *)(lVar6 + 0x28 + (longlong)iVar2 * 0x30);
            }
            if (iVar2 == -1) {
              return;
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (param_1,local_res10,param_2,0);
            return;
          }
          iVar2 = *(int *)(lVar6 + 0x28 + (longlong)iVar2 * 0x30);
        } while (iVar2 != -1);
      }
    }
  }
  return;
joined_r0x000142e95aa9:
  if (uVar8 != 0) {
    uStack_84 = -uVar8 & uVar8;
    iVar3 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_78._4_4_ = (uStack_70 - iVar3) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_142e95b00:
      local_78._4_4_ = iVar2;
    }
LAB_142e95b03:
    auStack_30._4_4_ = local_78._4_4_;
    auStack_30._0_4_ = 0xffffffff;
    auStack_30._8_4_ = uStack_70;
    auStack_30._12_4_ = iStack_6c;
    uStack_40 = local_88;
    uStack_3c = uStack_84;
    local_50 = 0;
    local_20._0_4_ = SUB84(plVar4,0);
    local_20._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_70 = 0xffffffff;
    iStack_6c = local_78._4_4_;
    uStack_80 = local_88;
    uStack_7c = uStack_84;
    local_68._8_4_ = (undefined4)local_20;
    local_68._0_8_ = auStack_30._8_8_;
    local_68._12_4_ = local_20._4_4_;
    bVar1 = (int)plVar4[5] <= local_78._4_4_;
    local_58 = plVar4;
    local_48 = plVar4;
    local_20 = plVar4;
    local_78 = puStack_38;
    if (bVar1) {
      return;
    }
    do {
      plVar9 = (longlong *)((longlong)iStack_6c * 0x30 + *plVar4);
      if (*plVar9 == DAT_146b3d788) {
        lVar6 = 0x18;
        iVar2 = (int)plVar9[4] + -1;
        if ((int)plVar9[4] == 0) {
          iVar2 = 0;
        }
        if (iVar2 < 1) {
          lVar6 = 8;
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_1,local_res10,lVar6 + (longlong)plVar9,0);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if ((char)local_50 == '\0') {
      return;
    }
    if (local_50._1_1_ == '\0') {
      return;
    }
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    return;
  }
  lVar6 = (longlong)(int)local_88;
  uStack_70 = uStack_70 + 0x20;
  uVar8 = local_88 + 1;
  bVar1 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
  local_88 = uVar8;
  if (bVar1) goto LAB_142e95b00;
  uVar8 = puVar11[lVar6 + 1];
  goto joined_r0x000142e95aa9;
}



// FUNCTION 142e95d40 FUN_142e95d40 body=301 status=ok
// SIG undefined FUN_142e95d40(void)

longlong FUN_142e95d40(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xc0) != param_2) {
    return 0;
  }
  if (*(char *)(param_1 + 0x6b8) == '\0') {
    if (*(int *)(param_1 + 0x6f4) != 0) {
      return 0;
    }
    if (DAT_1468b616c != '\0') {
      return 0;
    }
    if (*(int *)(param_1 + 0x704) == 0) {
      return 0;
    }
    cVar1 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                      (param_2,param_1 + 0x48);
    if (cVar1 != '\0') {
      return param_1 + 0x30;
    }
    cVar1 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                      (param_2,param_1 + 0x378);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x6b8) == '\0') {
        if ((2 < *(int *)(param_2 + 0x708) - 1U) && (*(int *)(param_2 + 0x708) != 7)) {
          return 0;
        }
        lVar2 = UObjectBaseUtility::GetOutermost(param_2);
        local_res10 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_res10,local_18);
        cVar1 = FUN_142e97a80(param_1,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 == '\0') {
          return 0;
        }
      }
      cVar1 = UWorld::IsGameWorld(param_2);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return param_1 + 0x360;
}



// FUNCTION 142e95e70 FUN_142e95e70 body=248 status=ok
// SIG undefined FUN_142e95e70(void)

undefined8 * FUN_142e95e70(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  lVar2 = param_1[2];
  cVar3 = FUN_142190080(lVar2);
  if (cVar3 != '\0') {
    local_res8 = 0xd3;
    if (*(longlong *)(lVar2 + 0x28) == 0xd3) goto LAB_142e95f54;
    if ((*(int *)(lVar2 + 0x88) != 0) && (*(int *)(lVar2 + 0x88) != 1)) {
      iVar6 = *(int *)(lVar2 + 0x98) + -1;
      if (*(int *)(lVar2 + 0x98) == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) goto LAB_142e95f54;
    }
  }
  iVar1 = *(int *)(param_1 + 1);
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    if (iVar1 == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_1;
    }
    puVar4 = (undefined8 *)FName::FName(&local_res8,puVar7,1);
    uVar5 = FUN_14217c900(local_38);
    puVar4 = (undefined8 *)Trace::Private::FLogScope::Enter<0>(local_res10,*puVar4,uVar5);
    param_1[2] = *puVar4;
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
LAB_142e95f54:
  return param_1 + 2;
}



// FUNCTION 142e95f70 FUN_142e95f70 body=566 status=ok
// SIG undefined FUN_142e95f70(void)

void FUN_142e95f70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong *local_38;
  undefined8 local_30;
  
  uVar5 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FConfigCacheIni::GetArray(DAT_1468b6148,L"GbxPerf",param_2,&local_38,param_3);
  plVar4 = local_38;
  iVar3 = (int)local_30;
  if (0 < (int)local_30) {
    uVar7 = uVar5;
    do {
      iVar6 = *(int *)((longlong)plVar4 + uVar5 + 8);
      iVar2 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar2 = 0;
      }
      iVar6 = (int)uVar7;
      if (iVar2 == 0) {
        if (plVar4[(longlong)iVar6 * 2] != 0) {
          FMemory::Free();
          plVar4 = local_38;
          iVar3 = (int)local_30;
        }
        iVar2 = (iVar3 - iVar6) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar4 + (longlong)iVar6 * 2,plVar4 + (longlong)(iVar3 - iVar2) * 2,
                     (longlong)iVar2 << 4);
          iVar3 = (int)local_30;
        }
        local_30 = CONCAT44(local_30._4_4_,iVar3 + -1);
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_38);
        plVar4 = local_38;
        iVar3 = (int)local_30;
      }
      else {
        uVar7 = (ulonglong)(iVar6 + 1);
        uVar5 = uVar5 + 0x10;
      }
    } while ((int)uVar7 < iVar3);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,iVar3);
    plVar4 = local_38;
    iVar3 = (int)local_30;
  }
  plVar8 = plVar4 + (longlong)iVar3 * 2;
  plVar10 = plVar4;
  if (plVar4 != plVar8) {
    do {
      uVar11 = (undefined4)((ulonglong)param_3 >> 0x20);
      FString::ReplaceInline(plVar4,&DAT_14597aecc,&DAT_14597ae4c,0);
      iVar3 = (int)param_1[1];
      lVar9 = (longlong)iVar3;
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
      }
      lVar1 = *param_1;
      param_3 = CONCAT44(uVar11,0xffffffff);
      *(undefined1 *)(lVar1 + lVar9 * 0x18) = 0;
      *(undefined8 *)(lVar1 + 8 + lVar9 * 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x10 + lVar9 * 0x18) = 0;
      lVar9 = *param_1 + lVar9 * 0x18;
      iVar3 = FUN_141592950(plVar4,&DAT_14597af4c,0,0,param_3);
      *(bool *)lVar9 = iVar3 != -1;
      plVar10 = (longlong *)(lVar9 + 8);
      if (plVar10 != plVar4) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        *plVar10 = *plVar4;
        *plVar4 = 0;
        *(int *)(lVar9 + 0x10) = (int)plVar4[1];
        *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar8);
    plVar4 = local_38;
    plVar10 = local_38;
    iVar3 = (int)local_30;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    plVar10 = local_38;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  return;
}



// FUNCTION 142e961b0 FUN_142e961b0 body=429 status=ok
// SIG undefined FUN_142e961b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142e961b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  longlong local_e8 [4];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_b8 = 0xffffffff;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0xffffffff;
  FUN_142e96360(local_e8,param_2,param_3,local_88);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1,local_e8);
  lVar1 = local_a8;
  if (local_a8 == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,local_b0,4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
    lVar1 = local_a8;
  }
  param_1[8] = lVar1;
  *(undefined4 *)(param_1 + 9) = local_a0;
  param_1[10] = local_98;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)local_90;
  *(undefined4 *)((longlong)param_1 + 0x5c) = local_90._4_4_;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_88,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_e8,0);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142e96360 FUN_142e96360 body=1013 status=ok
// SIG undefined FUN_142e96360(void)

void FUN_142e96360(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int *piVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined8 local_res10;
  int local_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar12 < DAT_146b3d770) && (_Init_thread_header(&DAT_146b3d770), DAT_146b3d770 == -1)) {
    FName::FName(&DAT_146b3d768,L"Stat",1);
    _Init_thread_footer(&DAT_146b3d770);
  }
  if ((*piVar12 < DAT_146b3d780) && (_Init_thread_header(&DAT_146b3d780), DAT_146b3d780 == -1)) {
    FName::FName(&DAT_146b3d778,L"Event",1);
    _Init_thread_footer(&DAT_146b3d780);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  plVar5 = (longlong *)FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar11,0,1,param_3);
  if (plVar5 == (longlong *)0x0) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_1,&local_res10,param_2,0);
  }
  else {
    piVar12 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId(param_4);
    if (*piVar12 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_4,&local_res10,param_2,0);
      iVar9 = (int)plVar5[5];
      puStack_58 = (uint *)(plVar5 + 2);
      local_a8 = 0;
      uStack_a4 = 1;
      local_98._4_4_ = 0;
      uStack_90 = 0;
      if (iVar9 != 0) {
        puVar14 = (uint *)plVar5[4];
        if ((uint *)plVar5[4] == (uint *)0x0) {
          puVar14 = puStack_58;
        }
        uVar1 = *puVar14;
        uStack_90 = 0;
        local_a8 = 0;
        while (uVar1 == 0) {
          lVar10 = (longlong)local_a8;
          uStack_90 = uStack_90 + 0x20;
          iVar8 = local_a8 + 1;
          bVar2 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
          local_a8 = iVar8;
          if (bVar2) goto LAB_142e964cf;
          uVar1 = puVar14[lVar10 + 1];
        }
        uStack_a4 = -uVar1 & uVar1;
        iVar8 = 0x1f;
        if (uStack_a4 != 0) {
          for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_a4 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        local_98._4_4_ = (uStack_90 - iVar8) + 0x1f;
        if (iVar9 < local_98._4_4_) {
LAB_142e964cf:
          local_98._4_4_ = iVar9;
        }
      }
      uStack_50 = CONCAT44(local_98._4_4_,0xffffffff);
      auVar3._8_4_ = uStack_90;
      auVar3._0_8_ = uStack_50;
      auVar3._12_4_ = iStack_8c;
      local_40 = SUB84(plVar5,0);
      uStack_3c = (undefined4)((ulonglong)plVar5 >> 0x20);
      iStack_60 = local_a8;
      uStack_5c = uStack_a4;
      local_70 = 0;
      uStack_90 = 0xffffffff;
      iStack_8c = local_98._4_4_;
      iStack_a0 = local_a8;
      uStack_9c = uStack_a4;
      lStack_48 = auVar3._8_8_;
      local_88._8_4_ = local_40;
      local_88._0_8_ = lStack_48;
      local_88._12_4_ = uStack_3c;
      bVar2 = local_98._4_4_ < (int)plVar5[5];
      local_78 = plVar5;
      local_68 = plVar5;
      local_98 = puStack_58;
      if (bVar2) {
        do {
          plVar13 = (longlong *)((longlong)iStack_8c * 0x30 + *plVar5);
          if (*plVar13 == DAT_146b3d768) {
            lVar10 = 0x18;
            iVar9 = (int)plVar13[4] + -1;
            if ((int)plVar13[4] == 0) {
              iVar9 = 0;
            }
            if (iVar9 < 1) {
              lVar10 = 8;
            }
            FUN_142e96360(param_1,lVar10 + (longlong)plVar13,param_3,param_4);
          }
          else if (*plVar13 == DAT_146b3d778) {
            lVar10 = 0x18;
            iVar9 = (int)plVar13[4] + -1;
            if ((int)plVar13[4] == 0) {
              iVar9 = 0;
            }
            if (iVar9 < 1) {
              lVar10 = 8;
            }
            if (*(int *)(lVar10 + 8 + (longlong)plVar13) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = *(undefined2 **)(lVar10 + (longlong)plVar13);
            }
            puVar6 = (undefined8 *)FName::FName(local_38,puVar11,1);
            uVar7 = FUN_14217c900(&local_68);
            Trace::Private::FLogScope::Enter<0>(&local_res10,*puVar6,uVar7);
            if (lStack_48 != 0) {
              FMemory::Free();
            }
            if (puStack_58 != (uint *)0x0) {
              FMemory::Free();
            }
            if (local_68 != (longlong *)0x0) {
              FMemory::Free();
            }
            cVar4 = FUN_142190080(local_res10);
            if (cVar4 != '\0') {
              iVar9 = *(int *)(param_1 + 0x58);
              *(int *)(param_1 + 0x58) = iVar9 + 1;
              if (*(int *)(param_1 + 0x5c) < iVar9 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x50,iVar9);
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar9 * 8) = local_res10;
            }
          }
          uStack_90 = uStack_90 & ~uStack_9c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
        } while (iStack_8c < (int)local_98[6]);
        if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142e96760 FUN_142e96760 body=94 status=ok
// SIG undefined FUN_142e96760(void)

void FUN_142e96760(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_res10;
  
  FName::FName(&local_res10,L"GbxPerfAnalyticsProvider",1);
  if (*param_2 == local_res10) {
    lVar1 = param_3 + -8;
    if (param_3 == 0) {
      lVar1 = 0;
    }
    FUN_142e9a230(param_1,lVar1);
  }
  return;
}



// FUNCTION 142e967c0 FUN_142e967c0 body=132 status=ok
// SIG undefined FUN_142e967c0(void)

void FUN_142e967c0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_res10;
  
  FName::FName(&local_res10,L"GbxPerfAnalyticsProvider",1);
  if (*param_2 == local_res10) {
    lVar1 = param_3 + -8;
    if (param_3 == 0) {
      lVar1 = 0;
    }
    FUN_142e9f250(param_1,lVar1);
    return;
  }
  FName::FName(&local_res10,L"GbxPerfAnalyticsCollector",1);
  return;
}



// FUNCTION 142e96850 FUN_142e96850 body=159 status=ok
// SIG undefined FUN_142e96850(void)

void FUN_142e96850(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_142e95d40();
  if (lVar2 != 0) {
    cVar1 = FUN_14044af00(lVar2 + 0x18,0);
    if (cVar1 == '\0') {
      *(undefined8 *)(lVar2 + 600) = 0;
      FWeakObjectPtr::operator=(lVar2 + 0x18,param_2);
      FUN_142e97be0(param_1,lVar2);
    }
    else {
      FUN_14044af00(lVar2 + 0x20,0);
      FWeakObjectPtr::operator=(lVar2 + 0x20,param_2);
    }
    return;
  }
  FWeakObjectPtr::operator=(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 142e968f0 FUN_142e968f0 body=3964 status=ok
// SIG undefined FUN_142e968f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e968f0(undefined2 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  undefined2 *local_298;
  int local_290;
  int local_28c;
  undefined2 *local_288;
  int local_280;
  int local_27c;
  longlong *local_278;
  int local_270;
  undefined2 *local_268;
  wchar_t *pwStack_260;
  longlong *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  longlong *plStack_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 *local_218;
  longlong *plStack_210;
  longlong local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8 [2];
  longlong local_1d8 [2];
  longlong local_1c8;
  undefined8 local_1c0 [4];
  undefined8 local_1a0 [4];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined2 *local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  longlong local_f8 [2];
  longlong local_e8;
  longlong local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_208 = 0;
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_200 = 0;
  local_248 = param_4;
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d4ec) &&
     (_Init_thread_header(&DAT_146b3d4ec), DAT_146b3d4ec == -1)) {
    uVar9 = FCommandLine::Get();
    cVar4 = FParse::Value(uVar9,L"filehostip",&local_208);
    if (cVar4 == '\0') {
      uVar9 = FCommandLine::Get();
      cVar4 = FParse::Param(uVar9,L"FileOpenLog");
      if (cVar4 != '\0') goto LAB_142e971e2;
      uVar9 = FCommandLine::Get();
      cVar4 = FParse::Param(uVar9,L"RandomizeLoadOrder");
      DAT_146b3d4e8 = '\0';
      if (cVar4 != '\0') goto LAB_142e971e2;
    }
    else {
LAB_142e971e2:
      DAT_146b3d4e8 = '\x01';
    }
    _Init_thread_footer(&DAT_146b3d4ec);
  }
  if (((DAT_146b3d4e8 != '\0') || (cVar4 = FUN_14218ff70(), cVar4 == '\0')) ||
     ((param_5[1] - *param_5 & 0xfffffffffffffff8U) == 0)) goto LAB_142e970db;
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d4f8) &&
     (_Init_thread_header(&DAT_146b3d4f8), DAT_146b3d4f8 == -1)) {
    pwStack_260 = L"GbxPerf.ReportLoadTime";
    local_268 = param_1;
    puVar7 = (undefined8 *)FName::FName(local_160,L"TimingBlock",1);
    uVar9 = FUN_14217c900(local_f8);
    puVar7 = (undefined8 *)Trace::Private::FLogScope::Enter<0>(local_158,*puVar7,uVar9);
    uVar9 = *puVar7;
    local_278 = (longlong *)0x0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_270 = 3;
    local_278 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_GetPoolName_14597e8c8;
      plVar8[1] = (longlong)local_268;
      plVar8[2] = (longlong)pwStack_260;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar10;
    }
    FUN_142184b10(uVar9,&DAT_146b3d4f0,2);
    if (local_270 == 0) {
LAB_142e972fc:
      if (local_278 != (longlong *)0x0) {
        FMemory::Free(local_278);
      }
    }
    else if (local_278 != (longlong *)0x0) {
      (**(code **)(*local_278 + 0x28))(local_278,0);
      if (local_278 != (longlong *)0x0) {
        local_278 = (longlong *)FMemory::Realloc(local_278,0,0);
      }
      local_270 = 0;
      goto LAB_142e972fc;
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146b3d4f8);
    param_4 = local_248;
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d510) &&
     (_Init_thread_header(&DAT_146b3d510), DAT_146b3d510 == -1)) {
    local_238 = 0;
    local_230 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
    FGenericPlatformString::Memcpy(local_238,L"GbxPerf.ReportLoadTime",0x2e);
    lVar10 = FUN_142e961b0(local_c8,&local_238,param_1 + 0xc);
    DAT_146b3d500 = *(undefined8 **)(lVar10 + 0x50);
    *(undefined8 *)(lVar10 + 0x50) = 0;
    DAT_146b3d508 = *(int *)(lVar10 + 0x58);
    _DAT_146b3d50c = *(undefined4 *)(lVar10 + 0x5c);
    *(undefined8 *)(lVar10 + 0x58) = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_c8,0);
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    if (local_238 != 0) {
      FMemory::Free();
    }
    atexit((_func_5014 *)&LAB_143ec14b0);
    _Init_thread_footer(&DAT_146b3d510);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d520) &&
     (_Init_thread_header(&DAT_146b3d520), lVar10 = DAT_146b3d4f0, DAT_146b3d520 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_150,L"Game_LastMapName",1);
    FUN_14218dc00(lVar10,&DAT_146b3d518,*puVar7);
    _Init_thread_footer(&DAT_146b3d520);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d530) &&
     (_Init_thread_header(&DAT_146b3d530), lVar10 = DAT_146b3d4f0, DAT_146b3d530 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_148,L"Scope_Name",1);
    FUN_14218dc00(lVar10,&DAT_146b3d528,*puVar7);
    _Init_thread_footer(&DAT_146b3d530);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d540) &&
     (_Init_thread_header(&DAT_146b3d540), lVar10 = DAT_146b3d4f0, DAT_146b3d540 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_140,L"Scope_Time",1);
    FUN_14218dc00(lVar10,&DAT_146b3d538,*puVar7);
    _Init_thread_footer(&DAT_146b3d540);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d550) &&
     (_Init_thread_header(&DAT_146b3d550), lVar10 = DAT_146b3d4f0, DAT_146b3d550 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_138,L"Scope_ReadTime",1);
    FUN_14218dc00(lVar10,&DAT_146b3d548,*puVar7);
    _Init_thread_footer(&DAT_146b3d550);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d560) &&
     (_Init_thread_header(&DAT_146b3d560), lVar10 = DAT_146b3d4f0, DAT_146b3d560 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_130,L"Scope_IdleTime",1);
    FUN_14218dc00(lVar10,&DAT_146b3d558,*puVar7);
    _Init_thread_footer(&DAT_146b3d560);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d570) &&
     (_Init_thread_header(&DAT_146b3d570), lVar10 = DAT_146b3d4f0, DAT_146b3d570 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_128,L"Scope_MaxIdleTime",1);
    FUN_14218dc00(lVar10,&DAT_146b3d568,*puVar7);
    _Init_thread_footer(&DAT_146b3d570);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d580) &&
     (_Init_thread_header(&DAT_146b3d580), lVar10 = DAT_146b3d4f0, DAT_146b3d580 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_120,L"Scope_Reads",1);
    FUN_14218dc00(lVar10,&DAT_146b3d578,*puVar7);
    _Init_thread_footer(&DAT_146b3d580);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d590) &&
     (_Init_thread_header(&DAT_146b3d590), lVar10 = DAT_146b3d4f0, DAT_146b3d590 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_108,L"Scope_Seeks",1);
    FUN_14218dc00(lVar10,&DAT_146b3d588,*puVar7);
    _Init_thread_footer(&DAT_146b3d590);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d5a0) &&
     (_Init_thread_header(&DAT_146b3d5a0), lVar10 = DAT_146b3d4f0, DAT_146b3d5a0 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_100,L"Scope_FileSeeks",1);
    FUN_14218dc00(lVar10,&DAT_146b3d598,*puVar7);
    _Init_thread_footer(&DAT_146b3d5a0);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d5b0) &&
     (_Init_thread_header(&DAT_146b3d5b0), lVar10 = DAT_146b3d4f0, DAT_146b3d5b0 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_180,L"Scope_ReadKb",1);
    FUN_14218dc00(lVar10,&DAT_146b3d5a8,*puVar7);
    _Init_thread_footer(&DAT_146b3d5b0);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d5c0) &&
     (_Init_thread_header(&DAT_146b3d5c0), lVar10 = DAT_146b3d4f0, DAT_146b3d5c0 == -1)) {
    puVar7 = (undefined8 *)FName::FName(local_178,L"Scope_SeekKb",1);
    FUN_14218dc00(lVar10,&DAT_146b3d5b8,*puVar7);
    _Init_thread_footer(&DAT_146b3d5c0);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146b3d5d0) &&
     (_Init_thread_header(&DAT_146b3d5d0), DAT_146b3d5d0 == -1)) {
    lVar16 = FUN_142e8fbc0(&DAT_146aeaeb0);
    _DAT_146b3d5c8 = *(undefined8 *)(lVar16 + 0x28);
    _Init_thread_footer(&DAT_146b3d5d0);
  }
  FUN_1428d4fe0(local_1d8,param_2);
  FUN_1428d4fe0(local_1e8,param_4);
  local_290 = *(int *)(DAT_146b3d4f0 + 0x38);
  lVar16 = (longlong)local_290;
  pvVar3 = *(void **)(DAT_146b3d4f0 + 0x30);
  local_298 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_298,(2 - (uint)(local_290 != 0)) + local_290,0);
  puVar12 = local_298;
  _guard_xfg_dispatch_icall_nop(local_298,pvVar3,lVar16 * 2);
  iVar5 = local_290;
  lVar16 = (longlong)local_290;
  local_290 = (2 - (uint)(local_290 != 0)) + local_290;
  local_27c = local_28c;
  if (local_28c < local_290) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,iVar5);
    puVar12 = local_298;
    local_27c = local_28c;
  }
  puVar19 = (undefined2 *)0x0;
  lVar16 = lVar16 - (ulonglong)(iVar5 != 0);
  puVar12[lVar16] = 0x3a;
  puVar12[lVar16 + 1] = 0;
  iVar5 = *(int *)(param_3 + 1);
  if (local_290 < 2) {
    pvVar3 = (void *)*param_3;
    local_268 = (undefined2 *)0x0;
    pwStack_260 = (wchar_t *)CONCAT44(pwStack_260._4_4_,iVar5);
    local_118 = puVar12;
    if (iVar5 == 0) {
      puVar20 = puVar19;
      puVar19 = puVar12;
      iVar14 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,iVar5,0);
      puVar20 = local_268;
      _guard_xfg_dispatch_icall_nop(local_268,pvVar3,(longlong)iVar5 * 2);
      puVar19 = puVar12;
      iVar14 = (int)pwStack_260;
    }
  }
  else {
    iVar13 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar13 = 0;
    }
    if ((local_290 != 0) || (iVar5 = 1, iVar13 == 0)) {
      iVar5 = 0;
    }
    iVar5 = iVar5 + iVar13 + local_290;
    local_118 = (undefined2 *)0x0;
    local_288 = puVar12;
    local_280 = local_290;
    if (local_27c < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_288,iVar5);
    }
    iVar5 = local_280;
    pvVar3 = (void *)*param_3;
    puVar20 = local_288;
    iVar14 = local_280;
    if (iVar13 != 0) {
      lVar16 = (longlong)local_280;
      local_280 = iVar13 + (uint)(local_280 == 0) + local_280;
      if (local_27c < local_280) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,iVar5,local_27c,0);
      }
      iVar14 = local_280;
      puVar20 = local_288;
      puVar12 = local_288 + (lVar16 - (ulonglong)(iVar5 != 0));
      _guard_xfg_dispatch_icall_nop(puVar12,pvVar3,(longlong)iVar13 * 2);
      puVar12[iVar13] = 0;
    }
    pwStack_260 = (wchar_t *)CONCAT44(pwStack_260._4_4_,iVar14);
  }
  puVar12 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar12 = puVar20;
  }
  FUN_142190c70(&local_218,DAT_146b3d4f0,puVar12);
  if (puVar20 != (undefined2 *)0x0) {
    FMemory::Free(puVar20);
  }
  if (puVar19 != (undefined2 *)0x0) {
    FMemory::Free(puVar19);
  }
  plVar8 = (longlong *)param_5[1];
  param_5 = (longlong *)*param_5;
  local_250 = local_218;
  puVar7 = local_218;
  local_258 = plVar8;
  if (param_5 != plVar8) {
    do {
      lVar16 = *param_5;
      if (0.0 < *(double *)(lVar16 + 0x10)) {
        puVar11 = (undefined8 *)puVar7[0x18];
        if ((undefined8 *)puVar7[0x18] == (undefined8 *)0x0) {
          puVar11 = puVar7 + 4;
        }
        plVar6 = (longlong *)FUN_140aa2bd0(puVar11);
        FUN_140bfb1d0(plVar6,&DAT_146b3d518,local_1e8);
        FUN_140bfb1d0(plVar6,&DAT_146b3d528,lVar16 + 0x50);
        FUN_140bfaf50(plVar6,&DAT_146b3d538,lVar16 + 0x10);
        FUN_140bfaf50(plVar6,&DAT_146b3d548,lVar16 + 0x18);
        FUN_140bfaf50(plVar6,&DAT_146b3d558,lVar16 + 0x20);
        FUN_140bfaf50(plVar6,&DAT_146b3d568,lVar16 + 0x28);
        FUN_140bfadf0(plVar6,&DAT_146b3d578,lVar16);
        FUN_140bfadf0(plVar6,&DAT_146b3d588,lVar16 + 8);
        FUN_140bfadf0(plVar6,&DAT_146b3d598,lVar16 + 4);
        local_1f8 = *(ulonglong *)(lVar16 + 0x30) >> 10;
        FUN_142e8c8d0(plVar6,&DAT_146b3d5a8,&local_1f8);
        local_1f0 = *(ulonglong *)(lVar16 + 0x38) >> 10;
        FUN_142e8c8d0(plVar6,&DAT_146b3d5b8,&local_1f0);
        FUN_140bfb1d0(plVar6,&DAT_146b3d5c8,local_1d8);
        puVar15 = *(undefined8 **)(lVar16 + 0x40);
        puVar11 = puVar15 + (longlong)*(int *)(lVar16 + 0x48) * 3;
        plVar8 = local_258;
        puVar7 = local_250;
        if (puVar15 != puVar11) {
          local_228 = 0;
          do {
            lVar16 = DAT_146b3d4f0;
            if (*(int *)(puVar15 + 1) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = (undefined2 *)*puVar15;
            }
            puVar7 = (undefined8 *)FName::FName(local_170,puVar12,1);
            plVar8 = (longlong *)FUN_14218dc00(lVar16,&local_168,*puVar7,0);
            if (*(longlong *)*plVar8 != 0) {
              lVar16 = ((longlong *)*plVar8)[1];
              cVar4 = FUN_142190080(lVar16);
              if (cVar4 != '\0') {
                local_248 = (undefined8 *)0xd3;
                if (*(longlong *)(lVar16 + 0x28) == 0xd3) {
LAB_142e96ec0:
                  plVar17 = (longlong *)*plVar6;
                  plVar2 = plVar17 + (longlong)(int)plVar6[1] * 5;
                  plVar18 = (longlong *)0x0;
                  if (plVar17 != plVar2) {
                    do {
                      if ((*(longlong *)*plVar17 == *(longlong *)*plVar8) &&
                         (plVar18 = plVar17,
                         *(longlong *)(((longlong *)*plVar17)[1] + 0x28) ==
                         *(longlong *)(((longlong *)*plVar8)[1] + 0x28))) break;
                      plVar17 = plVar17 + 5;
                      plVar18 = (longlong *)0x0;
                    } while (plVar17 != plVar2);
                  }
                  if (plVar18 == (longlong *)0x0) {
                    local_1c8 = *plVar8;
                    FUN_14217e740(local_1c0);
                    local_2a8 = 1;
                    FUN_142194380(local_1c0,8,0);
                    iVar5 = (int)plVar6[1];
                    local_1c0[0] = puVar15[2];
                    *(int *)(plVar6 + 1) = iVar5 + 1;
                    if (*(int *)((longlong)plVar6 + 0xc) < iVar5 + 1) {
                      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar5);
                    }
                    lVar16 = *plVar6;
                    *(longlong *)(lVar16 + (longlong)iVar5 * 0x28) = local_1c8;
                    FUN_14217e5b0(lVar16 + (longlong)iVar5 * 0x28 + 8,local_1c0);
                    puVar7 = local_1c0;
                  }
                  else {
                    FUN_14217e740(local_1a0);
                    local_2a8 = 1;
                    FUN_142194380(local_1a0,8,0);
                    local_1a0[0] = puVar15[2];
                    FUN_14217f450(plVar18 + 1,local_1a0);
                    puVar7 = local_1a0;
                  }
                  FUN_14217f430(puVar7);
                }
                else if ((*(int *)(lVar16 + 0x88) != 0) && (*(int *)(lVar16 + 0x88) != 1)) {
                  iVar5 = *(int *)(lVar16 + 0x98) + -1;
                  if (*(int *)(lVar16 + 0x98) == 0) {
                    iVar5 = 0;
                  }
                  if (iVar5 != 0) goto LAB_142e96ec0;
                }
              }
            }
            puVar15 = puVar15 + 3;
            plVar8 = local_258;
            puVar7 = local_250;
          } while (puVar15 != puVar11);
        }
      }
      param_5 = param_5 + 1;
    } while (param_5 != plVar8);
  }
  puVar11 = DAT_146b3d500 + DAT_146b3d508;
  for (puVar15 = DAT_146b3d500; puVar15 != puVar11; puVar15 = puVar15 + 1) {
    FUN_1421922e0(*puVar15,puVar7);
    puVar7 = local_250;
  }
  cVar4 = FUN_14218a740(&local_218,1);
  if (cVar4 != '\0') {
    local_248 = local_218;
    plStack_240 = plStack_210;
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_210 + 1) = (int)plStack_210[1] + 1;
      UNLOCK();
    }
    FUN_142194040(&local_248);
    plVar8 = plStack_240;
    if (plStack_240 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_240 + 1;
      lVar16 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plStack_240)(plStack_240);
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
  }
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_210 + 1;
    lVar16 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar1 = (int *)((longlong)plStack_210 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_210 + 8))(plStack_210,1);
      }
    }
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  if (local_1d8[0] != 0) {
    FMemory::Free();
  }
LAB_142e970db:
  if (local_208 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e97870 FUN_142e97870 body=278 status=ok
// SIG undefined FUN_142e97870(void)

void FUN_142e97870(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar1 = FUN_14058c1e0(param_1 + 0x28);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  lVar2 = FUN_142e95d40(param_1,param_2);
  if (lVar2 != 0) {
    cVar1 = FUN_14058c1e0(lVar2 + 0x20,param_2);
    if (cVar1 != '\0') {
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(lVar2 + 0x20) = local_res8;
      *(undefined4 *)(lVar2 + 0x24) = local_resc;
      return;
    }
    cVar1 = FUN_1405dc8f0(lVar2 + 0x18,param_2);
    if (cVar1 == '\0') {
      FUN_142e99210(param_1,lVar2,1);
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(lVar2 + 0x18) = local_res8;
      *(undefined4 *)(lVar2 + 0x1c) = local_resc;
      lVar3 = FWeakObjectPtr::Get(lVar2 + 0x20);
      if (lVar3 != 0) {
        FWeakObjectPtr::operator=(lVar2 + 0x18,lVar3);
      }
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(lVar2 + 0x20) = local_res8;
      *(undefined4 *)(lVar2 + 0x24) = local_resc;
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x18);
      if (cVar1 != '\0') {
        FUN_142e97be0(param_1,lVar2);
      }
    }
  }
  return;
}



// FUNCTION 142e97990 FUN_142e97990 body=180 status=ok
// SIG undefined FUN_142e97990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e97990(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_14217f070();
  }
  if (DAT_146aeaf18 == '\0') {
    puVar1 = (undefined8 *)FUN_14218ce40();
    if (puVar1 != &DAT_146aeaeb0) {
      DAT_146aeaeb0 = *puVar1;
      uRam0000000146aeaeb8 = puVar1[1];
      _DAT_146aeaec0 = puVar1[2];
      uRam0000000146aeaec8 = puVar1[3];
      _DAT_146aeaed0 = puVar1[4];
      DAT_146aeaed8 = puVar1[5];
      _DAT_146aeaee0 = puVar1[6];
      _DAT_146aeaee8 = puVar1[7];
      _DAT_146aeaef0 = puVar1[8];
      _DAT_146aeaef8 = puVar1[9];
      DAT_146aeaf00 = puVar1[10];
      DAT_146aeaf08 = puVar1[0xb];
      DAT_146aeaf10 = puVar1[0xc];
      DAT_146aeaf18 = '\x01';
    }
  }
  FUN_14217bf30(param_1,DAT_146aeaeb0,0x14);
  *param_1 = &PTR_FUN_14597df08;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 142e97a50 FUN_142e97a50 body=36 status=ok
// SIG undefined FUN_142e97a50(void)

void FUN_142e97a50(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x7a8);
  if (lVar1 != 0) {
    FUN_142e8e110(lVar1);
    return;
  }
  return;
}



// FUNCTION 142e97a80 FUN_142e97a80 body=248 status=ok
// SIG undefined FUN_142e97a80(void)

undefined8 FUN_142e97a80(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0x790) == 0) {
    return 1;
  }
  FUN_1416f9e30(local_18);
  pcVar4 = *(char **)(param_1 + 0x798);
  pcVar1 = pcVar4 + (longlong)*(int *)(param_1 + 0x7a0) * 0x18;
  for (; pcVar4 != pcVar1; pcVar4 = pcVar4 + 0x18) {
    plVar3 = local_18;
    if (*pcVar4 != '\0') {
      plVar3 = param_2;
    }
    cVar2 = FUN_141593930(plVar3,pcVar4 + 8,1);
    if (cVar2 != '\0') goto LAB_142e97b4b;
  }
  pcVar4 = *(char **)(param_1 + 0x788);
  pcVar1 = pcVar4 + (longlong)*(int *)(param_1 + 0x790) * 0x18;
  do {
    if (pcVar4 == pcVar1) {
LAB_142e97b4b:
      uVar5 = 1;
LAB_142e97b4d:
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return uVar5;
    }
    plVar3 = local_18;
    if (*pcVar4 != '\0') {
      plVar3 = param_2;
    }
    cVar2 = FUN_141593930(plVar3,pcVar4 + 8,1);
    if (cVar2 != '\0') {
      uVar5 = 0;
      goto LAB_142e97b4d;
    }
    pcVar4 = pcVar4 + 0x18;
  } while( true );
}



// FUNCTION 142e97b80 FUN_142e97b80 body=93 status=ok
// SIG undefined FUN_142e97b80(void)

ulonglong FUN_142e97b80(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = FUN_142190080(lVar2);
  if ((char)uVar3 != '\0') {
    uVar3 = 0;
    if (*(longlong *)(lVar2 + 0x28) == 0xd3) {
LAB_142e97bcd:
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    uVar1 = *(uint *)(lVar2 + 0x88);
    uVar3 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar3 = (ulonglong)(uVar1 - 1), uVar1 - 1 != 0)) {
      uVar1 = *(uint *)(lVar2 + 0x98);
      uVar3 = (ulonglong)uVar1;
      iVar4 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar4 = 0;
      }
      if (iVar4 != 0) goto LAB_142e97bcd;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142e97be0 FUN_142e97be0 body=485 status=ok
// SIG undefined FUN_142e97be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e97be0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar2 = FUN_14044aea0(param_2 + 0x18,0);
  if (cVar2 != '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 2) = 0;
  if (*(char *)(param_2 + 1) != '\0') goto LAB_142e97d8d;
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x18);
  if (((((lVar3 != 0) && (*(char *)(param_1 + 0x6b8) == '\0')) && (*(int *)(param_1 + 0x6f4) == 0))
      && ((DAT_1468b616c == '\0' && (*(int *)(param_1 + 0x704) != 0)))) &&
     ((*(int *)(lVar3 + 0x708) == 1 &&
      ((*(char *)(param_1 + 0x6bb) != '\0' &&
       (plVar1 = *(longlong **)(param_1 + 0x6e8), plVar1 != (longlong *)0x0)))))) {
    (**(code **)(*plVar1 + 0x78))(plVar1,&local_98);
    local_58 = 0xffffffff;
    local_88[0] = 0;
    local_88[1] = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_142e958e0(local_88,&local_98,param_1 + 0x18);
    cVar2 = FUN_142e98360(param_1,param_2,local_88);
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_88,0);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      plVar1 = (longlong *)(param_2 + 8);
      *(undefined1 *)(param_2 + 1) = 1;
      if (plVar1 != &local_98) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = local_98;
        *(undefined4 *)(param_2 + 0x10) = local_90;
        *(undefined4 *)(param_2 + 0x14) = local_8c;
        goto LAB_142e97d87;
      }
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
LAB_142e97d87:
  if (*(char *)(param_2 + 1) == '\0') {
    return;
  }
LAB_142e97d8d:
  uVar4 = FWeakObjectPtr::Get(param_2 + 0x18);
  local_a8 = 0;
  FUN_142e992e0(param_1,param_2,uVar4,1);
  return;
}



// FUNCTION 142e97dd0 FUN_142e97dd0 body=1411 status=ok
// SIG undefined FUN_142e97dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_142e97dd0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  int local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  undefined1 local_118 [16];
  longlong local_108;
  undefined8 local_100;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  void *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_88;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar9 = param_1 + 0x18;
  local_d8 = 0xffffffff;
  local_158 = (longlong *)0x0;
  local_150 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  local_178 = lVar9;
  local_130 = param_3;
  local_128 = param_1;
  FConfigCacheIni::GetArray(DAT_1468b6148,puVar8,L"Collector",&local_158);
  cVar3 = 0 < (int)local_150;
  if (0 < (int)local_150) {
    cVar3 = FUN_142e957c0(&local_108,param_3,lVar9);
  }
  if ((cVar3 != '\0') &&
     (local_120 = local_158 + (longlong)(int)local_150 * 2, local_158 != local_120)) {
    plVar10 = (longlong *)(param_2 + 0x128);
    plVar13 = local_158;
    do {
      plVar12 = (longlong *)*plVar10;
      plVar11 = plVar12 + (longlong)*(int *)(param_2 + 0x130) * 0x27;
      for (; plVar12 != plVar11; plVar12 = plVar12 + 0x27) {
        if ((int)plVar13[1] == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*plVar13;
        }
        if (*(int *)(*plVar12 + 0x18) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(*plVar12 + 0x10);
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
        if (iVar4 == 0) {
          local_168 = 0;
          plStack_160 = (longlong *)0x0;
          goto LAB_142e98035;
        }
      }
      if ((int)plVar13[1] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*plVar13;
      }
      local_178 = lVar9;
      FConfigCacheIni::GetStr(DAT_1468b6148,&local_140,puVar8,L"Class");
      if ((local_138 == 0) || (local_138 == 1)) {
        local_168 = 0;
        plStack_160 = (longlong *)0x0;
        if (local_140 != 0) {
          FMemory::Free();
        }
LAB_142e98035:
        bVar14 = false;
      }
      else {
        puVar6 = (undefined8 *)FName::FName(local_118,local_140,1);
        FUN_142e8b670(&local_168,*puVar6,plVar13,lVar9);
        if (local_140 != 0) {
          FMemory::Free();
        }
        if (local_168 == 0) goto LAB_142e98035;
        lVar2 = *(longlong *)(local_168 + 0x40);
        cVar3 = FUN_142190080(lVar2);
        if (cVar3 == '\0') goto LAB_142e98035;
        local_148 = 0xd3;
        if (*(longlong *)(lVar2 + 0x28) != 0xd3) {
          if ((*(int *)(lVar2 + 0x88) != 0) && (*(int *)(lVar2 + 0x88) != 1)) {
            iVar4 = *(int *)(lVar2 + 0x98) + -1;
            if (*(int *)(lVar2 + 0x98) == 0) {
              iVar4 = 0;
            }
            if (iVar4 != 0) goto LAB_142e98016;
          }
          goto LAB_142e98035;
        }
LAB_142e98016:
        bVar14 = true;
      }
      plVar12 = plStack_160;
      if (!bVar14) {
        cVar3 = '\0';
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_160 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_160 + 8))(plStack_160,1);
            }
          }
        }
        break;
      }
      FUN_142e961b0(&local_a8,plVar13,lVar9);
      if ((local_a0 - local_74) + local_50 == 0) {
        if (((int)local_100 - local_d4) + (int)local_b0 != 0) goto LAB_142e9806e;
        cVar3 = '\0';
      }
      else {
LAB_142e9806e:
        iVar4 = *(int *)(param_2 + 0x130);
        cVar3 = '\x01';
        iVar5 = iVar4 + 1;
        *(int *)(param_2 + 0x130) = iVar5;
        if (*(int *)(param_2 + 0x134) < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<312,4>_>,FDefaultAllocator>::
          ResizeGrow(plVar10);
        }
        lVar9 = (longlong)iVar4 * 0x138;
        _guard_xfg_dispatch_icall_nop((void *)(*plVar10 + lVar9),0,0x138);
        plVar12 = (longlong *)(*plVar10 + lVar9);
        if (plVar12 != &local_168) {
          *plVar12 = local_168;
          local_168 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar12 + 1,&plStack_160);
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (plVar12 + 0xc,&local_108);
        FUN_142e8b140(plVar12 + 0xc,&local_a8);
        iVar4 = (int)local_b0;
        lVar9 = (longlong)(int)local_b0;
        plVar11 = plVar12 + 0x16;
        if ((int)local_b0 != 0) {
          iVar5 = (int)plVar12[0x17];
          if (*(int *)((longlong)plVar12 + 0xbc) < (int)local_b0 + iVar5) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11);
            iVar5 = (int)plVar12[0x17];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + (longlong)iVar5 * 8),local_b8,lVar9 << 3);
          *(int *)(plVar12 + 0x17) = (int)plVar12[0x17] + iVar4;
        }
        iVar4 = local_50;
        lVar9 = (longlong)local_50;
        if (local_50 != 0) {
          iVar5 = (int)plVar12[0x17];
          if (*(int *)((longlong)plVar12 + 0xbc) < local_50 + iVar5) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11);
            iVar5 = (int)plVar12[0x17];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + (longlong)iVar5 * 8),local_58,lVar9 << 3);
          local_50 = 0;
          *(int *)(plVar12 + 0x17) = (int)plVar12[0x17] + iVar4;
        }
        lVar2 = local_128;
        if (*(int *)(local_130 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*local_130;
        }
        lVar9 = local_128 + 0x18;
        FUN_142190560(plVar12 + 0x25,puVar8,lVar9);
        FUN_142e93990(plVar12,lVar2 + 0x6a8);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      local_60 = 0;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_a8,0);
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        FMemory::Free();
      }
      plVar12 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_160 + 1;
        lVar2 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_160 + 8))(plStack_160,1);
          }
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != local_120);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_108,0);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  plVar10 = local_158;
  for (iVar4 = (int)local_150; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  return cVar3;
}



// FUNCTION 142e98360 FUN_142e98360 body=1087 status=ok
// SIG undefined FUN_142e98360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142e98360(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 auStack_138 [32];
  int local_118;
  uint uStack_114;
  uint *puStack_110;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined8 local_f0;
  int iStack_e8;
  uint uStack_e4;
  uint *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  longlong local_98;
  undefined8 local_90;
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_68 = 0xffffffff;
  puVar11 = (uint *)(param_3 + 2);
  local_98 = 0;
  local_90 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar1 = *(uint *)(param_3 + 5);
  local_118 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  iStack_100 = 0;
  if (uVar1 != 0) {
    puVar10 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar10 = puVar11;
    }
    uVar2 = *puVar10;
    iStack_100 = 0;
    local_118 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_118;
      iStack_100 = iStack_100 + 0x20;
      iVar5 = local_118 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar5;
      if (bVar3) goto LAB_142e9846e;
      uVar2 = puVar10[lVar7 + 1];
    }
    uStack_114 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_104 = (iStack_100 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_104) {
LAB_142e9846e:
      uStack_104 = uVar1;
    }
  }
  uVar2 = *(uint *)(param_3 + 5);
  uStack_d8 = 0xffffffff;
  uStack_d4 = uStack_104;
  local_d0 = CONCAT44(uStack_fc,iStack_100);
  uStack_c0 = CONCAT44(uStack_114,local_118);
  local_f8 = -1 << ((byte)uVar2 & 0x1f);
  uVar9 = uVar2 & 0xffffffe0;
  local_c8._0_4_ = SUB84(param_3,0);
  local_c8._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_f0._0_4_ = (undefined4)local_c8;
  local_f0._4_4_ = local_c8._4_4_;
  iStack_e8 = local_118;
  uStack_e4 = uStack_114;
  puStack_110 = puVar11;
  local_108 = local_f8;
  uStack_104 = uVar2;
  local_e0 = puVar11;
  local_c8 = param_3;
  puStack_b8 = puVar11;
  uStack_a8 = local_d0;
  uStack_b0 = uStack_d8;
  uStack_ac = uStack_d4;
  if (uVar2 != uVar1) {
    puVar10 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar10 = puVar11;
    }
    uVar6 = puVar10[(int)uVar2 >> 5] & local_f8;
    iVar5 = (int)uVar2 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142e98541;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      local_108 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_104 = (uVar9 - iVar5) + 0x1f;
    uVar2 = uStack_104;
    if ((int)uVar1 < (int)uStack_104) {
LAB_142e98541:
      uStack_104 = uVar1;
      uVar2 = uVar1;
    }
  }
  while( true ) {
    if (((uStack_d4 == uVar2) && (local_e0 == puVar11)) && (local_f0 == param_3)) break;
    FUN_142e958e0(&local_98,*local_f0 + (longlong)(int)uStack_d4 * 0x18,param_1 + 0x18);
    uStack_d8 = uStack_d8 & ~uStack_e4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e8);
  }
  if ((int)local_90 == local_64) {
    uVar8 = 0;
  }
  else {
    FUN_142e9c900(param_1,param_2);
    uVar1 = (uint)local_70;
    puStack_110 = local_88;
    uStack_114 = 1;
    local_118 = 0;
    uStack_104 = 0;
    iStack_100 = 0;
    if ((uint)local_70 != 0) {
      puVar11 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar11 = local_78;
      }
      uVar2 = *puVar11;
      iStack_100 = 0;
      local_118 = 0;
      while (uVar2 == 0) {
        iStack_100 = iStack_100 + 0x20;
        if ((int)(((uint)local_70 - 1) + ((int)((uint)local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <=
            local_118) {
          uStack_104 = (uint)local_70;
          local_118 = local_118 + 1;
          goto LAB_142e98666;
        }
        uVar2 = puVar11[(longlong)local_118 + 1];
        local_118 = local_118 + 1;
      }
      uStack_114 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_114 != 0) {
        for (; uStack_114 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_114 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_104 = (iStack_100 - iVar5) + 0x1f;
      if ((int)(uint)local_70 < (int)uStack_104) {
        uStack_104 = (uint)local_70;
      }
    }
LAB_142e98666:
    uStack_ac = uStack_104;
    local_d0 = CONCAT44(uStack_fc,iStack_100);
    local_c8 = &local_98;
    uStack_c0 = CONCAT44(uStack_114,local_118);
    local_108 = -1 << ((byte)local_70 & 0x1f);
    uStack_104 = (uint)local_70;
    uStack_b0 = 0xffffffff;
    iStack_e8 = local_118;
    uStack_e4 = uStack_114;
    uStack_d8 = 0xffffffff;
    uStack_d4 = uStack_ac;
    cVar4 = '\x01';
    local_e0 = puStack_110;
    puStack_b8 = puStack_110;
    uStack_a8 = local_d0;
    local_f0 = local_c8;
    while (((uStack_d4 != uVar1 || (local_e0 != local_88)) || (local_f0 != &local_98))) {
      cVar4 = FUN_142e97dd0(param_1,param_2,*local_f0 + (longlong)(int)uStack_d4 * 0x18);
      if (cVar4 == '\0') goto LAB_142e9872a;
      uStack_d8 = uStack_d8 & ~uStack_e4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e8);
    }
    if (cVar4 != '\0') {
      cVar4 = FUN_142e92c50(param_1,param_2);
      if (cVar4 != '\0') {
        uVar8 = 1;
        goto LAB_142e9873c;
      }
    }
LAB_142e9872a:
    uVar8 = 0;
    FUN_142e9c900(param_1,param_2);
  }
LAB_142e9873c:
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_98,0);
  if (local_78 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 142e987a0 FUN_142e987a0 body=1030 status=ok
// SIG undefined FUN_142e987a0(void)

void FUN_142e987a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  int local_e0;
  uint uStack_dc;
  uint *puStack_d8;
  undefined4 local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_b8 = (longlong *)
             FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,L"GbxPerf.VirtualStats",0,1,param_2);
  if (local_b8 != (longlong *)0x0) {
    iVar5 = (int)local_b8[5];
    puStack_d8 = (uint *)(local_b8 + 2);
    local_e0 = 0;
    iStack_c8 = 0;
    uStack_dc = 1;
    iStack_cc = 0;
    if (iVar5 != 0) {
      puVar15 = (uint *)local_b8[4];
      if ((uint *)local_b8[4] == (uint *)0x0) {
        puVar15 = puStack_d8;
      }
      uVar2 = *puVar15;
      iStack_c8 = 0;
      local_e0 = 0;
      while (uVar2 == 0) {
        lVar7 = (longlong)local_e0;
        iStack_c8 = iStack_c8 + 0x20;
        iVar13 = local_e0 + 1;
        bVar3 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_e0;
        local_e0 = iVar13;
        if (bVar3) goto LAB_142e988a2;
        uVar2 = puVar15[lVar7 + 1];
      }
      uStack_dc = -uVar2 & uVar2;
      iVar13 = 0x1f;
      if (uStack_dc != 0) {
        for (; uStack_dc >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_dc == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      iStack_cc = (iStack_c8 - iVar13) + 0x1f;
      if (iVar5 < iStack_cc) {
LAB_142e988a2:
        iStack_cc = iVar5;
      }
    }
    local_d0 = 0xffffffff;
    uStack_a0 = CONCAT44(iStack_cc,0xffffffff);
    auStack_50._8_4_ = iStack_c8;
    auStack_50._0_8_ = uStack_a0;
    auStack_50._12_4_ = uStack_c4;
    uStack_b0 = CONCAT44(uStack_dc,local_e0);
    local_80 = 0;
    local_40._0_4_ = SUB84(local_b8,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
    local_98._8_4_ = (undefined4)local_40;
    local_98._0_8_ = auStack_50._8_8_;
    local_98._12_4_ = local_40._4_4_;
    iVar5 = iStack_cc;
    local_a8 = puStack_d8;
    local_88 = local_b8;
    local_68 = local_b8;
    uStack_60 = uStack_b0;
    puStack_58 = puStack_d8;
    local_40 = local_b8;
    if (iStack_cc < (int)local_b8[5]) {
      do {
        plVar12 = local_b8;
        lVar8 = *local_b8 + (longlong)iVar5 * 0x30;
        local_f8 = (undefined2 *)0x0;
        lVar7 = 0x18;
        iVar13 = *(int *)(lVar8 + 0x20) + -1;
        if (*(int *)(lVar8 + 0x20) == 0) {
          iVar13 = 0;
        }
        if (iVar13 < 1) {
          lVar7 = 8;
        }
        local_f0 = *(int *)(lVar7 + 8 + lVar8);
        lVar11 = (longlong)local_f0;
        _Src = *(void **)(lVar7 + lVar8);
        if (local_f0 == 0) {
          local_ec = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
          _guard_xfg_dispatch_icall_nop(local_f8,_Src,lVar11 * 2);
        }
        local_e8 = *(longlong *)((longlong)iVar5 * 0x30 + *plVar12);
        cVar4 = FString::EndsWith(&local_f8,&DAT_14597afbc,1);
        if (cVar4 != '\0') {
          iVar5 = local_f0 + -1;
          if (local_f0 == 0) {
            iVar5 = 0;
          }
          iVar13 = (local_f0 - (iVar5 + -1)) + -1;
          if (iVar13 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_f8 + (iVar5 + -1),local_f8 + iVar5,(longlong)iVar13 * 2);
          }
          local_f0 = local_f0 + -1;
        }
        plVar12 = (longlong *)*param_1;
        lVar7 = (longlong)(int)param_1[1];
        plVar1 = plVar12 + lVar7 * 0x17;
        for (; plVar12 != plVar1; plVar12 = plVar12 + 0x17) {
          if (*plVar12 == local_e8) goto LAB_142e98acc;
        }
        iVar5 = (int)param_1[1] + 1;
        *(int *)(param_1 + 1) = iVar5;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1);
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar7 * 0xb8 + *param_1),0,0xb8);
        plVar12 = (longlong *)(*param_1 + lVar7 * 0xb8);
        *plVar12 = local_e8;
        plVar6 = (longlong *)FName::ToString(&local_e8,&local_e0);
        plVar1 = plVar12 + 1;
        if (plVar1 != plVar6) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          *plVar1 = *plVar6;
          *plVar6 = 0;
          *(int *)(plVar12 + 2) = (int)plVar6[1];
          *(undefined4 *)((longlong)plVar12 + 0x14) = *(undefined4 *)((longlong)plVar6 + 0xc);
          plVar6[1] = 0;
        }
        if (CONCAT44(uStack_dc,local_e0) != 0) {
          FMemory::Free();
        }
LAB_142e98acc:
        if (cVar4 == '\0') {
          puVar9 = &DAT_143f3eda8;
          if (local_f0 != 0) {
            puVar9 = local_f8;
          }
          FName::FName(local_70,puVar9,1);
          plVar12 = plVar12 + 3;
          puVar14 = local_70;
          puVar10 = local_res20;
        }
        else {
          puVar9 = &DAT_143f3eda8;
          if (local_f0 != 0) {
            puVar9 = local_f8;
          }
          FName::FName(local_78,puVar9,1);
          plVar12 = plVar12 + 0xd;
          puVar14 = local_78;
          puVar10 = local_res18;
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (plVar12,puVar10,puVar14,0);
        if (local_f8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
        iVar5 = uStack_a0._4_4_;
      } while (uStack_a0._4_4_ < (int)local_a8[6]);
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 142e98bb0 FUN_142e98bb0 body=256 status=ok
// SIG undefined FUN_142e98bb0(void)

undefined8 * FUN_142e98bb0(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40 [2];
  longlong local_30;
  longlong local_20;
  
  local_50 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_50;
  _Src = (void *)*param_2;
  local_58 = (void *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    iVar4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar5 * 2);
    iVar4 = *(int *)(param_2 + 1);
  }
  if (iVar4 == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar1 = (undefined8 *)FName::FName(local_res8,puVar3,1);
  uVar2 = FUN_14217c900(local_40);
  Trace::Private::FLogScope::Enter<0>(&local_48,*puVar1,uVar2);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  *param_1 = local_58;
  *(int *)(param_1 + 1) = local_50;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
  param_1[2] = local_48;
  return param_1;
}



// FUNCTION 142e98cb0 FUN_142e98cb0 body=959 status=ok
// SIG undefined FUN_142e98cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_142e98cb0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  char local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = param_3;
  if (*(char *)(param_1 + 0x6b8) == '\0') {
    if (*(char *)(param_1 + 0x361) == '\0') {
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      local_c8 = 0;
      FUN_142e992e0(param_1,param_1 + 0x360,0,0);
      FUN_142e9c900(param_1,param_1 + 0x360);
      *(undefined1 *)(param_1 + 0x361) = 0;
      *(undefined4 *)(param_1 + 0x370) = 0;
      if (*(int *)(param_1 + 0x374) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x368,0);
      }
    }
    *(undefined1 *)(param_1 + 0x6b8) = 1;
  }
  lVar12 = *param_2;
  plVar10 = (longlong *)param_2[1];
  if (lVar12 == 0) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar12 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return '\0';
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x488);
  plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x490) * 0x27;
  for (; plVar8 != plVar11; plVar8 = plVar8 + 0x27) {
    if (*plVar8 == lVar12) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar12 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return '\x01';
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  cVar4 = *(char *)(param_1 + 0x361);
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_b8 = cVar4;
  cVar2 = FUN_142e957c0(&local_a8,param_3,param_1 + 0x18);
  if ((cVar2 == '\0') || (((int)local_a0 - local_74) + (int)local_50 < 1)) {
    if (((int)local_a0 - local_74) + (int)local_50 == 0) {
      cVar3 = '\0';
      goto LAB_142e98fe3;
    }
  }
  else {
    iVar5 = FUN_142e92170(param_1 + 0x488,1);
    plVar10 = (longlong *)((longlong)iVar5 * 0x138 + *(longlong *)(param_1 + 0x488));
    if (plVar10 != param_2) {
      *plVar10 = *param_2;
      *param_2 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar10 + 1,param_2 + 1);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (plVar10 + 0xc,&local_a8);
    iVar5 = (int)local_50;
    lVar12 = (longlong)(int)local_50;
    if ((int)local_50 != 0) {
      iVar6 = (int)plVar10[0x17];
      if (*(int *)((longlong)plVar10 + 0xbc) < iVar6 + (int)local_50) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar10 + 0x16);
        iVar6 = (int)plVar10[0x17];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(plVar10[0x16] + (longlong)iVar6 * 8),local_58,lVar12 << 3);
      *(int *)(plVar10 + 0x17) = (int)plVar10[0x17] + iVar5;
    }
    if (*(int *)(local_b0 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_b0;
    }
    FUN_142190560(plVar10 + 0x25,puVar9,param_1 + 0x18);
    FUN_142e93990(plVar10,param_1 + 0x6a8);
    cVar4 = local_b8;
  }
  cVar3 = '\0';
  if ((((cVar2 != '\0') && (cVar3 = FUN_142e92c50(param_1,param_1 + 0x360), cVar3 != '\0')) &&
      (cVar4 == '\0')) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x378), cVar4 != '\0')) {
    *(undefined1 *)(param_1 + 0x361) = 1;
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x378);
    local_c8 = 0;
    FUN_142e992e0(param_1,param_1 + 0x360,uVar7,0);
  }
LAB_142e98fe3:
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_a8,0);
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return cVar3;
}



// FUNCTION 142e99070 FUN_142e99070 body=317 status=ok
// SIG undefined FUN_142e99070(void)

void FUN_142e99070(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + 0x6b8) == '\0') || (lVar3 = *param_2, lVar3 == 0)) {
    plVar4 = (longlong *)param_2[1];
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
  }
  else {
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x490)) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x488) + lVar6) == lVar3) {
          FUN_142e9a980(param_1 + 0x488,iVar5,1,1);
        }
        else {
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x138;
        }
      } while (iVar5 < *(int *)(param_1 + 0x490));
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
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (*(int *)(param_1 + 0x490) == 0) {
      *(undefined1 *)(param_1 + 0x361) = 0;
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return;
}



// FUNCTION 142e991b0 FUN_142e991b0 body=96 status=ok
// SIG undefined FUN_142e991b0(void)

void FUN_142e991b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x678);
  local_10 = CONCAT31(local_10._1_3_,param_4);
  *(int *)(param_1 + 0x678) = iVar1 + 1;
  if (*(int *)(param_1 + 0x67c) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x670),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x670);
  *(ulonglong *)(lVar2 + (longlong)iVar1 * 0xc) = CONCAT44(param_3,param_2);
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0xc + 8) = local_10;
  return;
}



// FUNCTION 142e99210 FUN_142e99210 body=93 status=ok
// SIG undefined FUN_142e99210(void)

void FUN_142e99210(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  
  if (((param_2 != 0) && (cVar1 = FUN_14044af00(param_2 + 0x18,0), cVar1 != '\0')) &&
     (*(char *)(param_2 + 2) == '\0')) {
    FUN_142e992e0(param_1,param_2,0,1,param_3);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return;
}



// FUNCTION 142e99270 FUN_142e99270 body=98 status=ok
// SIG undefined FUN_142e99270(void)

void FUN_142e99270(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_142e95d40();
  if (lVar2 != 0) {
    cVar1 = FUN_14044af00(lVar2 + 0x18,0);
    if ((cVar1 != '\0') && (*(char *)(lVar2 + 2) == '\0')) {
      FUN_142e992e0(param_1,lVar2,0,1,param_3);
      *(undefined1 *)(lVar2 + 2) = 1;
    }
  }
  return;
}



// FUNCTION 142e992e0 FUN_142e992e0 body=887 status=ok
// SIG undefined FUN_142e992e0(void)

char FUN_142e992e0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  char cVar15;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  cVar15 = '\0';
  if (*(int *)(param_2 + 0x130) < 1) {
    return '\0';
  }
  uVar10 = 0;
  puVar9 = *(undefined8 **)(param_2 + 0x128);
  puVar8 = puVar9 + (longlong)*(int *)(param_2 + 0x130) * 0x27;
  if (puVar9 != puVar8) {
    puVar11 = (uint *)(puVar9 + 4);
    do {
      if ((char)puVar11[0x40] != '\0') {
        uVar1 = puVar11[6];
        local_c8 = 0;
        uStack_c4 = 1;
        uStack_b4 = 0;
        uStack_b0 = 0;
        if (uVar1 != 0) {
          puVar13 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            puVar13 = puVar11;
          }
          uVar2 = *puVar13;
          uVar6 = uVar10;
          uVar12 = uVar10;
          while (uVar2 == 0) {
            iVar4 = (int)uVar6;
            uStack_b0 = (int)uVar12 + 0x20;
            uVar12 = (ulonglong)uStack_b0;
            local_c8 = iVar4 + 1;
            uVar6 = (ulonglong)local_c8;
            if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 <= iVar4)
            goto LAB_142e99410;
            uVar2 = puVar13[(longlong)iVar4 + 1];
          }
          uStack_c4 = -uVar2 & uVar2;
          iVar4 = 0x1f;
          if (uStack_c4 != 0) {
            for (; uStack_c4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          if (uStack_c4 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          uStack_b4 = (uStack_b0 - iVar4) + 0x1f;
          if ((int)uVar1 < (int)uStack_b4) {
LAB_142e99410:
            uStack_b4 = uVar1;
          }
        }
        uStack_60 = CONCAT44(uStack_b4,0xffffffff);
        local_80 = CONCAT44(uStack_ac,uStack_b0);
        puVar13 = puVar11 + -4;
        uStack_70 = CONCAT44(uStack_c4,local_c8);
        uVar2 = puVar11[6];
        uVar5 = uVar1 & 0xffffffe0;
        uStack_68._0_4_ = SUB84(puVar11,0);
        uStack_68._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
        uStack_98 = local_c8;
        uStack_94 = uStack_c4;
        local_90 = (undefined4)uStack_68;
        uStack_8c = uStack_68._4_4_;
        uStack_88 = 0xffffffff;
        uStack_84 = uStack_b4;
        local_78 = puVar13;
        uStack_68 = puVar11;
        uStack_58 = local_80;
        uStack_b4 = uVar1;
        if (uVar1 != uVar2) {
          puVar14 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            puVar14 = puVar11;
          }
          uVar7 = puVar14[(int)uVar1 >> 5] & -1 << ((byte)uVar1 & 0x1f);
          iVar4 = (int)uVar1 >> 5;
          while (uVar7 == 0) {
            uVar5 = uVar5 + 0x20;
            if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar4)
            goto LAB_142e994e5;
            uVar7 = puVar14[(longlong)iVar4 + 1];
            iVar4 = iVar4 + 1;
          }
          uVar7 = -uVar7 & uVar7;
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
          uStack_b4 = (uVar5 - iVar4) + 0x1f;
          if ((int)uVar2 < (int)uStack_b4) {
LAB_142e994e5:
            uStack_b4 = uVar2;
          }
        }
        while ((uStack_84 != uStack_b4 || ((uint *)CONCAT44(uStack_8c,local_90) != puVar11))) {
          (**(code **)(**(longlong **)(*(longlong *)puVar13 + (longlong)(int)uStack_84 * 0x10) +
                      0x38))();
          uStack_88 = uStack_88 & ~uStack_94;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
        }
        (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,0);
        *(undefined1 *)(puVar11 + 0x40) = 0;
      }
      cVar3 = (**(code **)(*(longlong *)*puVar9 + 0x20))();
      if ((cVar3 != '\0') && (param_4 != '\0')) {
        cVar15 = '\x01';
        FUN_142e9eb40(puVar9);
      }
      puVar9 = puVar9 + 0x27;
      puVar11 = puVar11 + 0x4e;
    } while (puVar9 != puVar8);
    if ((cVar15 != '\0') && (param_5 != '\0')) {
      FUN_142e9e470(param_1,0,1,param_2);
    }
  }
  puVar9 = *(undefined8 **)(param_2 + 0x248);
  if (*(undefined8 **)(param_2 + 0x248) == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(param_2 + 0x1c8);
  }
  uVar6 = (longlong)*(int *)(param_2 + 0x250) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_2 + 0x250) < puVar9) {
    uVar6 = uVar10;
  }
  if (uVar6 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar9 + 0x20))((longlong *)*puVar9,param_3);
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar6);
  }
  return cVar15;
}



// FUNCTION 142e99660 FUN_142e99660 body=340 status=ok
// SIG undefined FUN_142e99660(void)

void FUN_142e99660(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong local_38 [2];
  longlong local_28 [2];
  
  lVar1 = param_1 + 0x360;
  puVar7 = (undefined2 *)0x0;
  iVar2 = 0;
  puVar6 = (undefined2 *)0x0;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x378);
  puVar5 = puVar7;
  if (((((lVar3 != 0) && (puVar5 = puVar6, *(char *)(param_1 + 0x6b8) == '\0')) &&
       (*(int *)(param_1 + 0x6f4) == 0)) &&
      ((DAT_1468b616c == '\0' && (*(int *)(param_1 + 0x704) != 0)))) &&
     ((*(int *)(lVar3 + 0x708) == 1 &&
      ((*(char *)(param_1 + 0x6bb) != '\0' &&
       (plVar4 = *(longlong **)(param_1 + 0x6e8), plVar4 != (longlong *)0x0)))))) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x78))(plVar4,local_38);
    if (local_28 != plVar4) {
      puVar7 = (undefined2 *)*plVar4;
      *plVar4 = 0;
      iVar2 = (int)plVar4[1];
      plVar4[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    puVar5 = &DAT_143f3eda8;
    puVar6 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar6 = puVar7;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      puVar5 = *(undefined2 **)(param_1 + 0x368);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
    puVar5 = puVar7;
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x361) != '\0')) {
      FUN_142e99210(param_1,lVar1,1);
    }
  }
  FUN_142e9c900(param_1,lVar1);
  *(undefined1 *)(param_1 + 0x361) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  if (*(int *)(param_1 + 0x374) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x368,0);
  }
  if (lVar3 != 0) {
    FUN_142e97be0(param_1,lVar1);
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 142e997c0 FUN_142e997c0 body=425 status=ok
// SIG undefined FUN_142e997c0(void)

void FUN_142e997c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *local_18;
  int local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  iVar5 = 0;
  if ((param_2 == (longlong *)0x0) || (param_2 == plVar1)) {
    (**(code **)(*plVar1 + 0x78))(plVar1,&local_18);
    iVar3 = local_10 + -1;
    if (local_10 == 0) {
      iVar3 = 0;
    }
    *(bool *)(param_1 + 0x6b9) = 0 < iVar3;
    if (0 < iVar3) {
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      lVar2 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar4,0,1,param_1 + 0x18);
      *(bool *)(param_1 + 0x6b9) = lVar2 != 0;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x6d8);
  if ((param_2 == (longlong *)0x0) || (param_2 == plVar1)) {
    (**(code **)(*plVar1 + 0x78))(plVar1,&local_18);
    iVar3 = local_10 + -1;
    if (local_10 == 0) {
      iVar3 = 0;
    }
    *(bool *)(param_1 + 0x6ba) = 0 < iVar3;
    if (0 < iVar3) {
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      lVar2 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar4,0,1,param_1 + 0x18);
      *(bool *)(param_1 + 0x6ba) = lVar2 != 0;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x6e8);
  if ((param_2 == (longlong *)0x0) || (param_2 == plVar1)) {
    (**(code **)(*plVar1 + 0x78))(plVar1,&local_18);
    if (local_10 != 0) {
      iVar5 = local_10 + -1;
    }
    *(bool *)(param_1 + 0x6bb) = 0 < iVar5;
    if (0 < iVar5) {
      puVar4 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar4 = local_18;
      }
      lVar2 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar4,0,1,param_1 + 0x18);
      *(bool *)(param_1 + 0x6bb) = lVar2 != 0;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142e99970 FUN_142e99970 body=931 status=ok
// SIG undefined FUN_142e99970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e99970(undefined8 param_1,undefined8 param_2,longlong param_3,__uint64 param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  AKRESULT AVar4;
  undefined8 *puVar5;
  short *psVar6;
  ErrorCode EVar7;
  ErrorLevel EVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  undefined8 local_res18 [2];
  uint in_stack_ffffffffffffff48;
  undefined1 in_stack_ffffffffffffff50;
  undefined8 local_a8 [4];
  longlong *local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  
  EVar8 = 0x38;
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (*piVar12 < DAT_146b3d4e0) {
    EVar7 = 0x46b3d4e0;
    lVar11 = param_3;
    _Init_thread_header();
    if (DAT_146b3d4e0 == -1) {
      AVar4 = AK::Monitor::PostCode
                        (EVar7,EVar8,(ulong)lVar11,param_4,in_stack_ffffffffffffff48,
                         (bool)in_stack_ffffffffffffff50);
      psVar6 = (short *)FUN_1415bb3d0(AVar4);
      _DAT_146b3d4d8 = 0;
      DAT_146b3d4d0 = 0;
      if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (psVar6[lVar11] != 0);
        uVar9 = (int)lVar11 + 1;
        _DAT_146b3d4d8 = (ulonglong)uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b3d4d0,0);
        }
        FGenericPlatformString::Memcpy(DAT_146b3d4d0,psVar6,(longlong)(int)uVar9 * 2);
      }
      atexit((_func_5014 *)&LAB_143ec1150);
      _Init_thread_footer(&DAT_146b3d4e0);
    }
  }
  if ((*piVar12 < DAT_146b3d4e4) && (_Init_thread_header(&DAT_146b3d4e4), DAT_146b3d4e4 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14673b308,0);
    in_stack_ffffffffffffff48 = CONCAT22((short)(in_stack_ffffffffffffff48 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (DAT_14673b308,0x10,"WindowsNoEditor",0x10,in_stack_ffffffffffffff48);
    atexit((_func_5014 *)&LAB_143ec1990);
    _Init_thread_footer(&DAT_146b3d4e4);
  }
  if ((DAT_146aeaf18 == '\0') && (puVar5 = (undefined8 *)FUN_14218ce40(), puVar5 != &DAT_146aeaeb0))
  {
    DAT_146aeaeb0 = *puVar5;
    uRam0000000146aeaeb8 = puVar5[1];
    _DAT_146aeaec0 = puVar5[2];
    uRam0000000146aeaec8 = puVar5[3];
    _DAT_146aeaed0 = puVar5[4];
    DAT_146aeaed8 = (longlong *)puVar5[5];
    _DAT_146aeaee0 = puVar5[6];
    _DAT_146aeaee8 = puVar5[7];
    _DAT_146aeaef0 = puVar5[8];
    _DAT_146aeaef8 = puVar5[9];
    DAT_146aeaf00 = puVar5[10];
    DAT_146aeaf08 = puVar5[0xb];
    DAT_146aeaf10 = puVar5[0xc];
    DAT_146aeaf18 = '\x01';
  }
  lVar11 = *(longlong *)(param_3 + 0x10);
  plVar10 = (longlong *)(lVar11 + 0xd0);
  local_res18[0] = FUN_14162b4e0();
  FUN_140bfb0b0(plVar10,&DAT_146aeaef8,local_res18);
  FUN_140bfb1d0(plVar10,&DAT_146aeaef0,&DAT_146b3d4d0);
  FUN_140bfb1d0(plVar10,&DAT_146aeaee8,&DAT_14673b308);
  local_res18[0] = 0;
  if ((*DAT_146aeaed8 != 0) && (cVar3 = FUN_1407ce010(DAT_146aeaed8 + 1), cVar3 != '\0')) {
    plVar13 = (longlong *)*plVar10;
    plVar1 = plVar13 + (longlong)*(int *)(lVar11 + 0xd8) * 5;
    if (plVar13 != plVar1) {
      do {
        if ((*(longlong *)*plVar13 == *DAT_146aeaed8) &&
           (*(longlong *)(((longlong *)*plVar13)[1] + 0x28) ==
            *(longlong *)(DAT_146aeaed8[1] + 0x28))) {
          return;
        }
        plVar13 = plVar13 + 5;
      } while (plVar13 != plVar1);
    }
    FUN_14217e740(local_a8);
    FUN_142194380(local_a8,0x28,0,0,in_stack_ffffffffffffff48 & 0xffffff00);
    local_a8[0] = *(undefined8 *)(param_3 + 8);
    FUN_1421923f0(local_60,DAT_146b3d228,local_a8);
    FUN_1421923f0(local_40,DAT_146b3d208,local_60);
    FUN_14217f430(local_60);
    FUN_14217f430(local_a8);
    local_88 = DAT_146aeaed8;
    FUN_14217e5b0(local_80,local_40);
    iVar2 = *(int *)(lVar11 + 0xd8);
    *(int *)(lVar11 + 0xd8) = iVar2 + 1;
    if (*(int *)(lVar11 + 0xdc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar10,iVar2);
    }
    puVar5 = (undefined8 *)(*plVar10 + (longlong)iVar2 * 0x28);
    *puVar5 = local_88;
    FUN_14217e5b0(puVar5 + 1,local_80);
    FUN_14217f430(local_80);
    FUN_14217f430(local_40);
  }
  return;
}



// FUNCTION 142e99d20 FUN_142e99d20 body=563 status=ok
// SIG undefined FUN_142e99d20(void)

void FUN_142e99d20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  ulonglong local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  FOutputDevice::Log(param_2,L"--- Game Context Status ---");
  FUN_142e90430(&local_28,param_1 + 0x360);
  FOutputDevice::Log(param_2,L"--- Config ---");
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_20 = CONCAT44(local_20._4_4_,2);
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)IDelegateInstance::vftable;
    *plVar2 = (longlong)&PTR_GetPoolName_14597e648;
    plVar2[1] = (longlong)param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_14597e690;
  }
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_28,L"GbxPerf.");
  if ((int)local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_142e99e4b;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_142e99e4b:
  FOutputDevice::LogfImpl(param_2,L"Disable Flag : %d",*(undefined4 *)(param_1 + 0x6f4));
  FOutputDevice::Log(param_2,L"--- Functions ---");
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = CONCAT44(local_20._4_4_,2);
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)IDelegateInstance::vftable;
    *plVar2 = (longlong)&PTR_GetPoolName_14597e6d8;
    plVar2[1] = (longlong)param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_14597e720;
  }
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_28,L"GbxPerf.");
  if ((int)local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142e99f60 FUN_142e99f60 body=381 status=ok
// SIG undefined FUN_142e99f60(void)

undefined8 FUN_142e99f60(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res10 [3];
  longlong local_48 [4];
  longlong local_28 [3];
  short local_10;
  
  local_res10[0] = 0;
  if (*(char *)(param_2 + 0x2f0) != '\0') {
    if (*(longlong **)(param_2 + 0x2e8) == (longlong *)0x0) {
      return 1;
    }
    local_res10[0] = (**(code **)(**(longlong **)(param_2 + 0x2e8) + 0x148))();
  }
  FUN_14217e740(local_48);
  FUN_142194380(local_48,0x28,0,0,0);
  local_48[0] = local_res10[0];
  FUN_1421923f0(local_28,DAT_146b3d228,local_48);
  FUN_14217f430(local_48);
  if (local_10 == 0x28) {
    local_res10[0] = local_28[0];
    if (local_28[0] != 0) {
      lVar3 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(local_28[0] + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_28[0] + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = UWorld::IsPlayInEditor(local_28[0]);
        if (cVar2 == '\0') {
          lVar3 = UObjectBaseUtility::GetOutermost(local_28[0]);
          local_res10[0] = *(longlong *)(lVar3 + 0x18);
          FName::ToString(local_res10,local_48);
          cVar2 = FUN_142e97a80(param_1,local_48);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (cVar2 != '\0') goto LAB_142e9a0d9;
        }
        else if (*(int *)(param_1 + 0x690) != 0) {
LAB_142e9a0d9:
          uVar4 = 1;
          goto LAB_142e9a073;
        }
      }
    }
  }
  uVar4 = 0;
LAB_142e9a073:
  FUN_14217f430(local_28);
  return uVar4;
}



// FUNCTION 142e9a0e0 FUN_142e9a0e0 body=32 status=ok
// SIG undefined FUN_142e9a0e0(void)

void FUN_142e9a0e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_28 [40];
  
  FUN_142e921d0(local_28,param_2,0);
  FUN_14217f430(local_28);
  return;
}



// FUNCTION 142e9a100 FUN_142e9a100 body=293 status=ok
// SIG undefined FUN_142e9a100(void)

void FUN_142e9a100(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int local_48 [2];
  undefined8 *local_40;
  undefined8 *local_38;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_48,*puVar1);
  if ((local_48[0] == -1) ||
     (lVar3 = (longlong)local_48[0] * 0x20 + *(longlong *)(param_1 + 0x10), lVar3 == 0)) {
    local_40 = puVar1;
    FUN_142e8b8a0(param_1 + 0x10,local_48,&local_40,0);
    lVar3 = (longlong)local_48[0] * 0x20 + *(longlong *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x10) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x14) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar3 + 8),iVar2);
  }
  FString::FString((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 8),param_2);
  local_40 = param_2;
  local_38 = (undefined8 *)param_3;
  FUN_142e8bb80(param_1 + 0x60,local_48,&local_40,0);
  local_40 = param_2;
  local_38 = puVar1;
  FUN_14056b620(param_1 + 0xb0,local_48,&local_40,0);
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_3 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e9a230 FUN_142e9a230 body=239 status=ok
// SIG undefined FUN_142e9a230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e9a230(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  longlong local_68 [4];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,0);
  local_38 = 0xffffffff;
  local_68[0] = 0;
  local_68[1] = 0;
  local_48 = 0;
  local_40 = 0;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78[0] = uVar1;
  FUN_142e8b080(param_1 + 0x498,local_78);
  FUN_142e9a320(param_1 + 0x388,uVar1,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_68,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e9a320 FUN_142e9a320 body=174 status=ok
// SIG undefined FUN_142e9a320(void)

void FUN_142e9a320(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 *local_res10;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *puVar1 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x10), lVar2 == 0)) {
    local_res10 = puVar1;
    FUN_142e8b8a0(param_1 + 0x10,local_res8,&local_res10,0);
    lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x10);
  }
  if (*(int *)(lVar2 + 0x14) < 0x20) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar2 + 8,0x20);
  }
  (**(code **)*param_2)(param_2,param_1,param_3);
  *puVar1 = 0;
  return;
}



// FUNCTION 142e9a3d0 FUN_142e9a3d0 body=543 status=ok
// SIG undefined FUN_142e9a3d0(void)

void FUN_142e9a3d0(longlong *param_1)

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
        if (bVar4) goto LAB_142e9a4ff;
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
LAB_142e9a4ff:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x70 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 100) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xc) =
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



// FUNCTION 142e9a5f0 FUN_142e9a5f0 body=449 status=ok
// SIG undefined FUN_142e9a5f0(void)

undefined8 FUN_142e9a5f0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar5 = (longlong)(int)param_1[9] - 1;
  uVar4 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar4 ^ uVar4 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 << 0x10;
  uVar4 = (uVar4 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar4 ^ uVar4 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 << 10;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar6 +
                  (((longlong)(int)((uVar4 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar5)
                  * 4);
  if (iVar9 != -1) {
    lVar1 = *param_1;
    do {
      lVar2 = (longlong)iVar9 * 0x20;
      if (*(ulonglong *)(lVar2 + lVar1) == param_2) {
        lVar2 = (longlong)iVar9 * 0x20;
        uVar5 = (longlong)*(int *)(lVar2 + 0x1c + lVar1) & uVar5;
        piVar3 = (int *)((longlong)plVar6 + uVar5 * 4);
        iVar7 = *(int *)((longlong)plVar6 + uVar5 * 4);
        goto joined_r0x000142e9a712;
      }
      iVar9 = *(int *)(lVar2 + 0x18 + lVar1);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x000142e9a712:
  if (iVar7 == -1) {
LAB_142e9a740:
    lVar2 = *param_1 + lVar2;
    iVar7 = *(int *)(lVar2 + 0x10);
    plVar6 = *(longlong **)(lVar2 + 8);
    if (iVar7 != 0) {
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      plVar6 = *(longlong **)(lVar2 + 8);
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar7 == iVar9) {
    *piVar3 = *(int *)(lVar2 + lVar1 + 0x18);
    goto LAB_142e9a740;
  }
  piVar3 = (int *)(lVar1 + 0x18 + (longlong)iVar7 * 0x20);
  iVar7 = *piVar3;
  goto joined_r0x000142e9a712;
}



// FUNCTION 142e9a7c0 FUN_142e9a7c0 body=436 status=ok
// SIG undefined FUN_142e9a7c0(void)

undefined8 FUN_142e9a7c0(longlong *param_1,undefined8 *param_2)

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
  longlong *plVar12;
  
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
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar12 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar12 + lVar6 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0x70 + *param_1);
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
    iVar3 = *(int *)(puVar9 + 0xc);
    piVar8 = (int *)(puVar9 + 0xc);
  }
  iVar3 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)iVar3 * 0x70;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 100 + lVar6));
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar12 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar12 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar8 = *(int *)(lVar11 + 0x60 + lVar6);
        break;
      }
      piVar8 = (int *)(lVar6 + 0x60 + (longlong)iVar1 * 0x70);
      iVar1 = *piVar8;
    }
  }
  plVar12 = (longlong *)((longlong)iVar3 * 0x70 + *param_1);
  if ((int)plVar12[10] != 0) {
    plVar10 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar10 = plVar12 + 4;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (plVar12[8] != 0) {
    FMemory::Free();
  }
  if (*plVar12 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 142e9a980 FUN_142e9a980 body=519 status=ok
// SIG undefined FUN_142e9a980(void)

void FUN_142e9a980(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(*param_1 + 0x118 + (longlong)param_2 * 0x138);
    iVar5 = param_3;
    do {
      iVar6 = puVar4[6];
      lVar3 = *(longlong *)(puVar4 + 4);
      if (iVar6 != 0) {
        plVar7 = (longlong *)(lVar3 + 8);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar3 = *(longlong *)(puVar4 + 4);
      }
      if (lVar3 != 0) {
        FMemory::Free();
      }
      *puVar4 = 0;
      if (*(longlong *)(puVar4 + -2) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(puVar4 + -0x12,0);
      if (*(longlong *)(puVar4 + -10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x12) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x16) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x1a) != 0) {
        FMemory::Free();
      }
      puVar4[-0x1c] = 0;
      if (*(longlong *)(puVar4 + -0x1e) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(puVar4 + -0x2e,0);
      if (*(longlong *)(puVar4 + -0x26) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x2e) != 0) {
        FMemory::Free();
      }
      puVar4[-0x30] = 0;
      if (*(longlong *)(puVar4 + -0x32) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar4 + -0x42);
      plVar7 = *(longlong **)(puVar4 + -0x44);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      puVar4 = puVar4 + 0x4e;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar6 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar6) {
      iVar6 = param_3;
    }
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x138),
                 (void *)((longlong)(iVar5 - iVar6) * 0x138 + *param_1),(longlong)iVar6 * 0x138);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FXElementalFXDef_ParticleSystem,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142e9ab90 FUN_142e9ab90 body=3460 status=ok
// SIG undefined FUN_142e9ab90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e9ab90(longlong param_1,longlong *param_2,longlong *param_3,longlong **param_4,
                  longlong *param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  AKRESULT AVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ErrorCode EVar10;
  ErrorLevel EVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStackY_348 [32];
  ulong in_stack_fffffffffffffcd8;
  undefined1 in_stack_fffffffffffffce0;
  undefined8 local_318;
  longlong *local_310;
  int local_308;
  longlong *local_300;
  int local_2f8;
  int local_2f0 [2];
  longlong local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  longlong *local_2a8;
  longlong *plStack_2a0;
  longlong *local_298 [2];
  longlong *local_288;
  longlong local_280;
  longlong *local_278;
  longlong *plStack_270;
  longlong local_268;
  longlong local_260;
  longlong local_258 [2];
  longlong local_248 [2];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  longlong local_1c0 [2];
  longlong local_1b0;
  longlong local_1a0;
  longlong local_190 [2];
  longlong local_180;
  longlong local_170;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_348;
  local_2f0[0] = (int)param_4;
  local_2a8 = param_5;
  if (DAT_146b3d5d4 != '\0') {
    return;
  }
  if ((param_2[1] - *param_2 & 0xfffffffffffffffeU) == 0) {
    return;
  }
  if ((param_3[1] - *param_3 & 0xfffffffffffffffeU) == 0) {
    return;
  }
  if (local_2f0[0] == 0) {
    return;
  }
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  iVar16 = 0;
  local_288 = param_3;
  if ((*piVar13 < DAT_146b3d5e0) && (_Init_thread_header(&DAT_146b3d5e0), DAT_146b3d5e0 == -1)) {
    puVar8 = (undefined8 *)FName::FName(local_208,L"CallstackStack",1);
    uVar6 = FUN_14217c900(local_1c0);
    puVar8 = (undefined8 *)Trace::Private::FLogScope::Enter<0>(local_200,*puVar8,uVar6);
    uVar15 = 0;
    local_310 = (longlong *)0x0;
    uVar6 = *puVar8;
    plVar9 = (longlong *)FMemory::Realloc(0,0x20);
    local_308 = 2;
    local_310 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = param_1;
      *plVar9 = (longlong)&PTR_GetPoolName_14597e908;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar9[3] = lVar7;
    }
    param_4 = &local_310;
    param_3 = (longlong *)CONCAT71((int7)((ulonglong)uVar15 >> 8),2);
    FUN_142184b10(uVar6,&DAT_146b3d5d8);
    if (local_308 == 0) {
LAB_142e9b3e8:
      if (local_310 != (longlong *)0x0) {
        FMemory::Free(local_310);
      }
    }
    else if (local_310 != (longlong *)0x0) {
      (**(code **)(*local_310 + 0x28))(local_310,0);
      if (local_310 != (longlong *)0x0) {
        param_3 = (longlong *)0x0;
        local_310 = (longlong *)FMemory::Realloc(local_310,0);
      }
      local_308 = 0;
      goto LAB_142e9b3e8;
    }
    if (local_1a0 != 0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
    if (local_1c0[0] != 0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146b3d5e0);
  }
  uVar14 = (ulong)param_3;
  if ((DAT_146b3d5f0 <= *piVar13) || (_Init_thread_header(&DAT_146b3d5f0), DAT_146b3d5f0 != -1))
  goto LAB_142e9ac5c;
  puVar8 = (undefined8 *)FName::FName(local_1f8,L"CallstackEvent",1);
  uVar6 = FUN_14217c900(local_190);
  puVar8 = (undefined8 *)Trace::Private::FLogScope::Enter<0>(local_1f0,*puVar8,uVar6);
  uVar15 = 0;
  local_300 = (longlong *)0x0;
  uVar6 = *puVar8;
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_2f8 = 2;
  local_300 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    plVar9[1] = param_1;
    *plVar9 = (longlong)&PTR_GetPoolName_14597e908;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar7;
  }
  param_4 = &local_300;
  uVar14 = (ulong)CONCAT71((int7)((ulonglong)uVar15 >> 8),2);
  FUN_142184b10(uVar6,&DAT_146b3d5e8);
  if (local_2f8 == 0) {
LAB_142e9b520:
    if (local_300 != (longlong *)0x0) {
      FMemory::Free(local_300);
    }
  }
  else if (local_300 != (longlong *)0x0) {
    (**(code **)(*local_300 + 0x28))(local_300,0);
    if (local_300 != (longlong *)0x0) {
      uVar14 = 0;
      local_300 = (longlong *)FMemory::Realloc(local_300,0);
    }
    local_2f8 = 0;
    goto LAB_142e9b520;
  }
  if (local_170 != 0) {
    FMemory::Free();
  }
  if (local_180 != 0) {
    FMemory::Free();
  }
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  _Init_thread_footer(&DAT_146b3d5f0);
LAB_142e9ac5c:
  lVar7 = DAT_146b3d5d8;
  cVar4 = FUN_142190080(DAT_146b3d5d8);
  lVar3 = DAT_146b3d5e8;
  if (((cVar4 == '\0') ||
      (((local_318 = 0xd3, *(longlong *)(lVar7 + 0x28) != 0xd3 &&
        ((((*(int *)(lVar7 + 0x88) == 0 || (*(int *)(lVar7 + 0x88) == 1)) ||
          (*(int *)(lVar7 + 0x98) == 0)) || (*(int *)(lVar7 + 0x98) == 1)))) ||
       (cVar4 = FUN_142190080(DAT_146b3d5e8), cVar4 == '\0')))) ||
     ((local_318 = 0xd3, *(longlong *)(lVar3 + 0x28) != 0xd3 &&
      (((*(int *)(lVar3 + 0x88) == 0 || (*(int *)(lVar3 + 0x88) == 1)) ||
       ((*(int *)(lVar3 + 0x98) == 0 || (*(int *)(lVar3 + 0x98) == 1)))))))) {
    DAT_146b3d5d4 = '\x01';
  }
  else {
    cVar4 = FUN_14218ff70();
    if (cVar4 != '\0') {
      if ((*piVar13 < DAT_146b3d600) &&
         (_Init_thread_header(&DAT_146b3d600), lVar7 = DAT_146b3d5d8, DAT_146b3d600 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_1e8,L"Callstack_Depth",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d5f8);
        _Init_thread_footer(&DAT_146b3d600);
      }
      if ((*piVar13 < DAT_146b3d610) &&
         (_Init_thread_header(&DAT_146b3d610), lVar7 = DAT_146b3d5d8, DAT_146b3d610 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_1e0,L"Callstack_Address",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d608);
        _Init_thread_footer(&DAT_146b3d610);
      }
      if ((*piVar13 < DAT_146b3d620) &&
         (_Init_thread_header(&DAT_146b3d620), lVar7 = DAT_146b3d5d8, DAT_146b3d620 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_1d8,L"Callstack_Module",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d618);
        _Init_thread_footer(&DAT_146b3d620);
      }
      if ((*piVar13 < DAT_146b3d630) &&
         (_Init_thread_header(&DAT_146b3d630), lVar7 = DAT_146b3d5d8, DAT_146b3d630 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_1d0,L"Callstack_ModuleOffset",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d628);
        _Init_thread_footer(&DAT_146b3d630);
      }
      if ((*piVar13 < DAT_146b3d640) &&
         (_Init_thread_header(&DAT_146b3d640), lVar7 = DAT_146b3d5d8, DAT_146b3d640 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_1c8,L"Callstack_Function",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d638);
        _Init_thread_footer(&DAT_146b3d640);
      }
      if ((*piVar13 < DAT_146b3d650) &&
         (_Init_thread_header(&DAT_146b3d650), lVar7 = DAT_146b3d5d8, DAT_146b3d650 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_238,L"Callstack_File",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d648);
        _Init_thread_footer(&DAT_146b3d650);
      }
      if ((*piVar13 < DAT_146b3d660) &&
         (_Init_thread_header(&DAT_146b3d660), lVar7 = DAT_146b3d5d8, DAT_146b3d660 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_230,L"Callstack_Line",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d658);
        _Init_thread_footer(&DAT_146b3d660);
      }
      if ((*piVar13 < DAT_146b3d670) &&
         (_Init_thread_header(&DAT_146b3d670), lVar7 = DAT_146b3d5e8, DAT_146b3d670 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_228,L"Callstack_Type",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d668);
        _Init_thread_footer(&DAT_146b3d670);
      }
      if ((*piVar13 < DAT_146b3d680) &&
         (_Init_thread_header(&DAT_146b3d680), lVar7 = DAT_146b3d5e8, DAT_146b3d680 == -1)) {
        puVar8 = (undefined8 *)FName::FName(local_220,L"Callstack_Context",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(lVar7,&DAT_146b3d678);
        _Init_thread_footer(&DAT_146b3d680);
      }
      if ((*piVar13 < DAT_146b3d690) && (_Init_thread_header(&DAT_146b3d690), DAT_146b3d690 == -1))
      {
        puVar8 = (undefined8 *)FUN_142e8fbc0(&DAT_146aeaeb0);
        uVar6 = *puVar8;
        puVar8 = (undefined8 *)FName::FName(local_218,L"Callstack_Index",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(uVar6,&DAT_146b3d688);
        _Init_thread_footer(&DAT_146b3d690);
      }
      if ((*piVar13 < DAT_146b3d6a0) && (_Init_thread_header(&DAT_146b3d6a0), DAT_146b3d6a0 == -1))
      {
        puVar8 = (undefined8 *)FUN_142e8fbc0(&DAT_146aeaeb0);
        uVar6 = *puVar8;
        puVar8 = (undefined8 *)FName::FName(local_210,L"Callstack_Hash",1);
        param_4 = (longlong **)0x0;
        uVar14 = (ulong)*puVar8;
        FUN_14218dc00(uVar6,&DAT_146b3d698);
        _Init_thread_footer(&DAT_146b3d6a0);
      }
      local_268 = *param_2;
      local_260 = param_2[1];
      FUN_14063eb30(local_248,&local_268);
      EVar11 = 0x44042020;
      EVar10 = (ErrorCode)local_158;
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>();
      FUN_14162b4e0();
      AVar5 = AK::Monitor::PostCode
                        (EVar10,EVar11,uVar14,(__uint64)param_4,in_stack_fffffffffffffcd8,
                         (bool)in_stack_fffffffffffffce0);
      uVar6 = FUN_1415bb3d0(AVar5);
      FString::PrintfImpl(local_258,L"%s:%s:%s:0x%08x",local_50,uVar6);
      if (local_58 != 0) {
        FMemory::Free();
      }
      FUN_142190c10(&local_278,DAT_146b3d5e8);
      local_298[0] = local_278;
      lVar7 = *local_2a8;
      lVar3 = local_2a8[1] - lVar7 >> 0x3f;
      if ((local_2a8[1] - lVar7) / 0xc18 + lVar3 != lVar3) {
        local_2b8 = 0;
        do {
          plVar9 = local_2a8;
          pcVar2 = (char *)(local_2b8 + lVar7);
          uVar6 = FUN_140c15a40(local_298[0],DAT_146b3d5d8);
          uVar6 = FUN_140aa2bd0(uVar6);
          local_318 = CONCAT44(local_318._4_4_,(int)((plVar9[1] - *plVar9) / 0xc18) - iVar16);
          FUN_140bfa9d0(uVar6,&DAT_146b3d5f8,&local_318);
          FUN_142e8c8d0(uVar6,&DAT_146b3d608,pcVar2 + 0xc10);
          local_2e0 = 0;
          local_2e8 = 0;
          if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
            lVar7 = -1;
            do {
              lVar3 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (pcVar2[lVar3] != '\0');
            uVar12 = (int)lVar7 + 1;
            local_2e0 = (ulonglong)uVar12;
            if (0 < (int)uVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
            }
            FGenericPlatformString::Convert<char,wchar_t>(local_2e8,uVar12,pcVar2,uVar12);
          }
          FUN_140bfb1d0(uVar6,&DAT_146b3d618,&local_2e8);
          if (local_2e8 != 0) {
            FMemory::Free();
          }
          FUN_142e8c8d0(uVar6,&DAT_146b3d628,pcVar2 + 0xc08);
          pcVar1 = pcVar2 + 0x400;
          local_2d0 = 0;
          local_2d8 = 0;
          if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
            lVar7 = -1;
            do {
              lVar3 = lVar7 + 0x401;
              lVar7 = lVar7 + 1;
            } while (pcVar2[lVar3] != '\0');
            uVar12 = (int)lVar7 + 1;
            local_2d0 = (ulonglong)uVar12;
            if (0 < (int)uVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
            }
            FGenericPlatformString::Convert<char,wchar_t>(local_2d8,uVar12,pcVar1,uVar12);
          }
          FUN_140bfb1d0(uVar6,&DAT_146b3d638,&local_2d8);
          if (local_2d8 != 0) {
            FMemory::Free();
          }
          pcVar1 = pcVar2 + 0x800;
          local_2c0 = 0;
          local_2c8 = 0;
          if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
            lVar7 = -1;
            do {
              lVar3 = lVar7 + 0x801;
              lVar7 = lVar7 + 1;
            } while (pcVar2[lVar3] != '\0');
            uVar12 = (int)lVar7 + 1;
            local_2c0 = (ulonglong)uVar12;
            if (0 < (int)uVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
            }
            FGenericPlatformString::Convert<char,wchar_t>(local_2c8,uVar12,pcVar1,uVar12);
          }
          FUN_140bfb1d0(uVar6,&DAT_146b3d648,&local_2c8);
          if (local_2c8 != 0) {
            FMemory::Free();
          }
          FUN_140bfa9d0(uVar6,&DAT_146b3d658,pcVar2 + 0xc00);
          iVar16 = iVar16 + 1;
          local_2b8 = local_2b8 + 0xc18;
          lVar7 = *local_2a8;
        } while ((ulonglong)(longlong)iVar16 < (ulonglong)((local_2a8[1] - lVar7) / 0xc18));
      }
      plVar9 = local_298[0];
      local_280 = local_288[1];
      local_288 = (longlong *)*local_288;
      FUN_14063eb30(local_298,&local_288);
      plVar17 = (longlong *)plVar9[0x18];
      if ((longlong *)plVar9[0x18] == (longlong *)0x0) {
        plVar17 = plVar9 + 4;
      }
      uVar6 = FUN_140aa2bd0(plVar17);
      FUN_140bfb1d0(uVar6,&DAT_146b3d668,local_248);
      FUN_140bfb1d0(uVar6,&DAT_146b3d678,local_298);
      if (local_298[0] != (longlong *)0x0) {
        FMemory::Free();
      }
      cVar4 = FUN_14218a740(&local_278,1);
      if (cVar4 != '\0') {
        FUN_140bfb1d0(plVar9 + 0x1a,&DAT_146b3d688,local_258);
        FUN_140bfadf0(plVar9 + 0x1a,&DAT_146b3d698,local_2f0);
        local_2a8 = local_278;
        plStack_2a0 = plStack_270;
        if (plStack_270 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
          UNLOCK();
        }
        FUN_142194040(&local_2a8);
        plVar9 = plStack_2a0;
        if (plStack_2a0 != (longlong *)0x0) {
          LOCK();
          plVar17 = plStack_2a0 + 1;
          lVar7 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_2a0)(plStack_2a0);
            LOCK();
            piVar13 = (int *)((longlong)plVar9 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_270 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar13 = (int *)((longlong)plStack_270 + 0xc);
          iVar16 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plStack_270 + 8))(plStack_270,1);
          }
        }
      }
      if (local_258[0] != 0) {
        FMemory::Free();
      }
      if (local_248[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142e9b920 FUN_142e9b920 body=2939 status=ok
// SIG undefined FUN_142e9b920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e9b920(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined1 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined1 local_res10 [8];
  longlong *local_res18;
  int local_res20;
  longlong local_298;
  longlong *plStack_290;
  int local_288;
  uint uStack_284;
  uint *puStack_280;
  undefined4 local_278;
  uint uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 *local_258;
  int *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 *local_228;
  longlong *plStack_220;
  undefined8 *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  int local_208;
  uint local_1f8;
  uint uStack_1f4;
  uint local_1f0;
  int local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 uStack_1c8;
  uint *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 **local_198;
  undefined1 local_190;
  longlong local_188;
  longlong *plStack_180;
  longlong local_178;
  longlong *local_170;
  longlong local_158;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  longlong local_128 [2];
  longlong local_118 [2];
  undefined8 *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined1 local_f0 [32];
  longlong *local_d0;
  undefined8 uStack_c8;
  uint *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [32];
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  
  local_298 = 0;
  plStack_290 = (longlong *)0x0;
  local_res18 = param_3;
  FUN_141729b50(local_res10);
  cVar6 = FWeakObjectPtr::IsValid(param_2 + 0x18);
  if (cVar6 != '\0') {
    puVar7 = (undefined8 *)FWeakObjectPtr::Get(param_2 + 0x18);
    local_1a8 = *param_3;
    local_1a0 = param_3[1];
    if (local_1a0 != 0) {
      LOCK();
      *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
      UNLOCK();
    }
    local_218 = puVar7;
    FUN_142e8eca0(&local_178,puVar7,&local_1a8);
    FUN_142e8c630(&local_178,param_2 + 0x28,param_3 + 0xc);
    FUN_142e925d0(&local_178,param_2,param_3,param_1 + 0x6a8);
    puVar17 = (undefined8 *)param_3[0x16];
    puVar8 = puVar17 + (int)param_3[0x17];
    local_298 = local_178;
    plVar21 = local_170;
    for (; local_170 = plVar21, puVar17 != puVar8; puVar17 = puVar17 + 1) {
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      local_178 = local_298;
      FUN_1421922e0(*puVar17,local_298);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar21 + 1;
        lVar15 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar18 = (int *)((longlong)plVar21 + 0xc);
          iVar12 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
      local_298 = local_178;
      plVar21 = local_170;
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
    }
    local_248 = 0;
    local_240 = plVar21;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_290);
    plVar9 = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_240 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar18 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_240 + 8))();
        }
      }
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar21 + 1;
      lVar15 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar18 = (int *)((longlong)plVar21 + 0xc);
        iVar12 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21);
        }
      }
    }
    if (*(int *)(*param_3 + 0x38) != 0) {
      puVar8 = *(undefined8 **)(local_298 + 0xc0);
      if (*(undefined8 **)(local_298 + 0xc0) == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)(local_298 + 0x20);
      }
      local_228 = puVar8 + (longlong)*(int *)(local_298 + 200) * 5;
      local_258 = puVar8;
      if (puVar8 != local_228) {
        local_250 = (int *)(puVar8 + 4);
        do {
          plVar21 = *(longlong **)(local_250 + -2);
          if (*(longlong **)(local_250 + -2) == (longlong *)0x0) {
            plVar21 = (longlong *)(local_250 + -6);
          }
          local_1d8 = plVar21 + (longlong)*local_250 * 2;
          local_258 = puVar8;
          if (plVar21 != local_1d8) {
            do {
              uVar11 = *puVar8;
              puVar7 = *(undefined8 **)(*param_3 + 0x30);
              local_1e0 = puVar7 + (longlong)*(int *)(*param_3 + 0x38) * 6;
              if (puVar7 != local_1e0) {
                local_268 = 0;
                do {
                  if (*(int *)(puVar7 + 1) == 0) {
                    puVar14 = &DAT_143f3eda8;
                  }
                  else {
                    puVar14 = (undefined2 *)*puVar7;
                  }
                  puVar8 = (undefined8 *)FName::FName(local_140,puVar14,1);
                  plVar9 = (longlong *)FUN_14218dc00(uVar11,local_138,*puVar8,0);
                  if (*(longlong *)*plVar9 != 0) {
                    lVar15 = ((longlong *)*plVar9)[1];
                    cVar6 = FUN_142190080(lVar15);
                    if ((cVar6 != '\0') &&
                       ((local_260 = 0xd3, *(longlong *)(lVar15 + 0x28) == 0xd3 ||
                        ((((*(int *)(lVar15 + 0x88) != 0 && (*(int *)(lVar15 + 0x88) != 1)) &&
                          (*(int *)(lVar15 + 0x98) != 0)) && (*(int *)(lVar15 + 0x98) != 1)))))) {
                      plVar16 = (longlong *)*plVar21;
                      plVar1 = plVar16 + (longlong)(int)plVar21[1] * 5;
                      if (plVar16 != plVar1) {
                        do {
                          if ((*(longlong *)*plVar16 == *(longlong *)*plVar9) &&
                             (*(longlong *)(((longlong *)*plVar16)[1] + 0x28) ==
                              *(longlong *)(((longlong *)*plVar9)[1] + 0x28))) goto LAB_142e9bca5;
                          plVar16 = plVar16 + 5;
                        } while (plVar16 != plVar1);
                      }
                      plVar16 = (longlong *)0x0;
LAB_142e9bca5:
                      if (plVar16 == (longlong *)0x0) {
                        local_f8 = *plVar9;
                        FUN_14217e5e0(local_f0,puVar7 + 2);
                        iVar12 = (int)plVar21[1];
                        *(int *)(plVar21 + 1) = iVar12 + 1;
                        if (*(int *)((longlong)plVar21 + 0xc) < iVar12 + 1) {
                          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar21,iVar12);
                        }
                        lVar4 = *plVar21;
                        lVar15 = (longlong)iVar12 * 5 + 1;
                        *(longlong *)(lVar4 + -8 + lVar15 * 8) = local_f8;
                        FUN_14217e5b0(lVar4 + lVar15 * 8,local_f0);
                        puVar19 = local_f0;
                      }
                      else {
                        uVar10 = FUN_14217e5e0(local_58,puVar7 + 2);
                        FUN_14217f450(plVar16 + 1,uVar10);
                        puVar19 = local_58;
                      }
                      FUN_14217f430(puVar19);
                    }
                  }
                  puVar7 = puVar7 + 6;
                  puVar8 = local_258;
                  param_3 = local_res18;
                } while (puVar7 != local_1e0);
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 != local_1d8);
          }
          puVar8 = puVar8 + 5;
          local_250 = local_250 + 10;
          puVar7 = local_218;
          local_258 = puVar8;
        } while (puVar8 != local_228);
      }
    }
    plStack_220 = plStack_290;
    if (plStack_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_290 + 1) = (int)plStack_290[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_14218a740(&local_228,1);
    plVar21 = plStack_220;
    if (plStack_220 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_220 + 1;
      lVar15 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_220)(plStack_220);
        LOCK();
        piVar18 = (int *)((longlong)plVar21 + 0xc);
        iVar12 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    if (cVar6 == '\0') {
      local_230 = (longlong *)0x0;
      local_298 = 0;
      local_238 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_290,&local_230);
      plVar21 = local_230;
      if (local_230 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_230 + 1;
        lVar15 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_230)(local_230);
          LOCK();
          piVar18 = (int *)((longlong)plVar21 + 0xc);
          iVar12 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_230 + 8))(local_230,1);
          }
        }
      }
    }
    else {
      piVar18 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar18 < DAT_146b3d4b8) && (_Init_thread_header(&DAT_146b3d4b8), DAT_146b3d4b8 == -1))
      {
        if ((DAT_146aeaf18 == '\0') &&
           (puVar8 = (undefined8 *)FUN_14218ce40(), puVar8 != &DAT_146aeaeb0)) {
          DAT_146aeaeb0 = *puVar8;
          uRam0000000146aeaeb8 = puVar8[1];
          _DAT_146aeaec0 = puVar8[2];
          uRam0000000146aeaec8 = puVar8[3];
          _DAT_146aeaed0 = puVar8[4];
          DAT_146aeaed8 = puVar8[5];
          _DAT_146aeaee0 = puVar8[6];
          _DAT_146aeaee8 = puVar8[7];
          _DAT_146aeaef0 = puVar8[8];
          _DAT_146aeaef8 = puVar8[9];
          DAT_146aeaf00 = puVar8[10];
          DAT_146aeaf08 = puVar8[0xb];
          DAT_146aeaf10 = puVar8[0xc];
          DAT_146aeaf18 = '\x01';
        }
        uVar11 = DAT_146aeaeb0;
        puVar8 = (undefined8 *)FName::FName(local_130,L"Collection_Context",1);
        FUN_14218dc00(uVar11,&DAT_146b3d4b0,*puVar8,0);
        _Init_thread_footer(&DAT_146b3d4b8);
      }
      if ((*piVar18 < DAT_146b3d4c8) && (_Init_thread_header(&DAT_146b3d4c8), DAT_146b3d4c8 == -1))
      {
        if ((DAT_146aeaf18 == '\0') &&
           (puVar8 = (undefined8 *)FUN_14218ce40(), puVar8 != &DAT_146aeaeb0)) {
          DAT_146aeaeb0 = *puVar8;
          uRam0000000146aeaeb8 = puVar8[1];
          _DAT_146aeaec0 = puVar8[2];
          uRam0000000146aeaec8 = puVar8[3];
          _DAT_146aeaed0 = puVar8[4];
          DAT_146aeaed8 = puVar8[5];
          _DAT_146aeaee0 = puVar8[6];
          _DAT_146aeaee8 = puVar8[7];
          _DAT_146aeaef0 = puVar8[8];
          _DAT_146aeaef8 = puVar8[9];
          DAT_146aeaf00 = puVar8[10];
          DAT_146aeaf08 = puVar8[0xb];
          DAT_146aeaf10 = puVar8[0xc];
          DAT_146aeaf18 = '\x01';
        }
        DAT_146b3d4c0 = DAT_146aeaed8;
        _Init_thread_footer(&DAT_146b3d4c8);
      }
      local_a8 = DAT_146b3d4b0;
      FUN_14217e610(local_a0,L"Game");
      uVar11 = FUN_1428cc750(puVar7,local_118);
      uVar11 = FUN_1428d4fe0(local_128,uVar11);
      local_80 = DAT_146b3d4c0;
      FUN_14217e740(local_78);
      FUN_140643170(local_78,uVar11);
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      if (local_118[0] != 0) {
        FMemory::Free();
      }
      local_218 = &local_a8;
      local_198 = &local_108;
      local_190 = 0;
      lVar15 = 2;
      uStack_210 = 2;
      uStack_100 = CONCAT44(uStack_20c,2);
      local_108 = local_218;
      FUN_142e8beb0(local_298,&local_198);
      puVar19 = local_50;
      do {
        puVar19 = puVar19 + -0x28;
        FUN_14217f430(puVar19);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    plVar21 = param_3 + 2;
    uStack_284 = 1;
    uVar3 = *(uint *)(param_3 + 7);
    puVar2 = (uint *)(param_3 + 4);
    local_288 = 0;
    uStack_274 = 0;
    iStack_270 = 0;
    if (uVar3 != 0) {
      puVar20 = (uint *)param_3[6];
      if ((uint *)param_3[6] == (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar13 = *puVar20;
      while (uVar13 == 0) {
        lVar15 = (longlong)local_288;
        iStack_270 = iStack_270 + 0x20;
        iVar12 = local_288 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_288;
        local_288 = iVar12;
        if (bVar5) goto LAB_142e9c039;
        uVar13 = puVar20[lVar15 + 1];
      }
      uStack_284 = -uVar13 & uVar13;
      local_res20 = 0x1f;
      if (uStack_284 != 0) {
        for (; uStack_284 >> local_res20 == 0; local_res20 = local_res20 + -1) {
        }
      }
      if (uStack_284 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - local_res20;
      }
      uStack_274 = (iStack_270 - iVar12) + 0x1f;
      if ((int)uVar3 < (int)uStack_274) {
LAB_142e9c039:
        uStack_274 = uVar3;
      }
    }
    local_278 = 0xffffffff;
    uStack_1f4 = *(uint *)(param_3 + 7);
    uStack_1c8 = CONCAT44(uStack_284,local_288);
    uStack_1b8 = CONCAT44(uStack_274,0xffffffff);
    local_1b0 = CONCAT44(uStack_26c,iStack_270);
    local_208 = (int)uStack_1f4 >> 5;
    local_1f8 = -1 << ((byte)uStack_1f4 & 0x1f);
    local_1f0 = uStack_1f4 & 0xffffffe0;
    puStack_280 = puVar2;
    local_1d0 = plVar21;
    local_1c0 = puVar2;
    local_d0 = plVar21;
    uStack_c8 = uStack_1c8;
    puStack_c0 = puVar2;
    uStack_b8 = uStack_1b8;
    uStack_b0 = local_1b0;
    uVar13 = uStack_1f4;
    if (uStack_1f4 != uVar3) {
      puVar20 = (uint *)param_3[6];
      if ((uint *)param_3[6] == (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar13 = puVar20[local_208] & local_1f8;
      while (uVar13 == 0) {
        lVar15 = (longlong)local_208;
        local_1f0 = local_1f0 + 0x20;
        iVar12 = local_208 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_208;
        local_208 = iVar12;
        if (bVar5) goto LAB_142e9c12d;
        uVar13 = puVar20[lVar15 + 1];
        local_1f8 = 0xffffffff;
      }
      uVar13 = -uVar13 & uVar13;
      local_1e8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_1e8 == 0; local_1e8 = local_1e8 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - local_1e8;
      }
      uStack_1f4 = (local_1f0 - iVar12) + 0x1f;
      uVar13 = uStack_1f4;
      if ((int)uVar3 < (int)uStack_1f4) {
LAB_142e9c12d:
        uStack_1f4 = uVar3;
        uVar13 = uVar3;
      }
    }
    while( true ) {
      if (((uStack_1b8._4_4_ == uVar13) && (local_1c0 == puVar2)) && (local_1d0 == plVar21)) break;
      plVar9 = *(longlong **)(*local_1d0 + (longlong)(int)uStack_1b8._4_4_ * 0x10);
      (**(code **)(*plVar9 + 0x38))(plVar9,1);
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8 & ~uStack_1c8._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c8);
    }
    *(undefined1 *)(param_3 + 0x24) = 0;
    (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,1);
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_170 + 1;
      lVar15 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar18 = (int *)((longlong)local_170 + 0xc);
        iVar12 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  FUN_14172a400(local_res10);
  if (local_298 != 0) {
    FUN_142183a90(local_298 + 0xe0,param_3 + 0x25);
    if (plStack_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_290 + 1) = (int)plStack_290[1] + 1;
      UNLOCK();
    }
    local_188 = local_298;
    plStack_180 = plStack_290;
    if (plStack_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_290 + 1) = (int)plStack_290[1] + 1;
      UNLOCK();
    }
    FUN_142194040(&local_188);
    plVar21 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_180 + 1;
      lVar15 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar18 = (int *)((longlong)plVar21 + 0xc);
        iVar12 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    plVar21 = plStack_290;
    if (plStack_290 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar9 = plStack_290 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_290)(plStack_290);
      LOCK();
      piVar18 = (int *)((longlong)plVar21 + 0xc);
      iVar12 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_290 + 8))(plStack_290,1);
      }
    }
  }
  plVar21 = plStack_290;
  if (plStack_290 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_290 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_290)(plStack_290);
      LOCK();
      piVar18 = (int *)((longlong)plVar21 + 0xc);
      iVar12 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_290 + 8))(plStack_290,1);
      }
    }
  }
  return;
}



// FUNCTION 142e9c4a0 FUN_142e9c4a0 body=431 status=ok
// SIG undefined FUN_142e9c4a0(void)

void FUN_142e9c4a0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_142e951d0();
    return;
  }
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)(*param_1 + 0x118);
    do {
      iVar6 = puVar4[6];
      lVar3 = *(longlong *)(puVar4 + 4);
      if (iVar6 != 0) {
        plVar7 = (longlong *)(lVar3 + 8);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar3 = *(longlong *)(puVar4 + 4);
      }
      if (lVar3 != 0) {
        FMemory::Free();
      }
      *puVar4 = 0;
      if (*(longlong *)(puVar4 + -2) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(puVar4 + -0x12,0);
      if (*(longlong *)(puVar4 + -10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x12) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x16) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x1a) != 0) {
        FMemory::Free();
      }
      puVar4[-0x1c] = 0;
      if (*(longlong *)(puVar4 + -0x1e) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(puVar4 + -0x2e,0);
      if (*(longlong *)(puVar4 + -0x26) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar4 + -0x2e) != 0) {
        FMemory::Free();
      }
      puVar4[-0x30] = 0;
      if (*(longlong *)(puVar4 + -0x32) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar4 + -0x42);
      plVar7 = *(longlong **)(puVar4 + -0x44);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      puVar4 = puVar4 + 0x4e;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 142e9c650 FUN_142e9c650 body=342 status=ok
// SIG undefined FUN_142e9c650(void)

void FUN_142e9c650(longlong param_1)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar4 = (longlong)local_1c * 0x20 + *local_38;
      iVar5 = *(int *)(lVar4 + 0x10);
      plVar3 = *(longlong **)(lVar4 + 8);
      if (iVar5 != 0) {
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar3 = *(longlong **)(lVar4 + 8);
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar5 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar1 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(lVar4 + uVar1 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 142e9c7b0 FUN_142e9c7b0 body=336 status=ok
// SIG undefined FUN_142e9c7b0(void)

void FUN_142e9c7b0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar6 = (longlong *)((longlong)local_1c * 0x70 + *local_38);
      if ((int)plVar6[10] != 0) {
        plVar3 = (longlong *)plVar6[8];
        if ((longlong *)plVar6[8] == (longlong *)0x0) {
          plVar3 = plVar6 + 4;
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
        }
      }
      if (plVar6[8] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar5 = 0;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 142e9c900 FUN_142e9c900 body=639 status=ok
// SIG undefined FUN_142e9c900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e9c900(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 *local_a0;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar4 = 0;
  LOCK();
  bVar7 = *(int *)(param_2 + 4) == 0;
  if (bVar7) {
    *(int *)(param_2 + 4) = 0;
  }
  UNLOCK();
  while (!bVar7) {
    FUN_1416b1760(0x3a83126f);
    LOCK();
    bVar7 = *(int *)(param_2 + 4) == 0;
    if (bVar7) {
      *(int *)(param_2 + 4) = 0;
    }
    UNLOCK();
  }
  FUN_142e9c4a0(param_2 + 0x128,0);
  *(undefined4 *)(param_2 + 0x250) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0x254)) {
    FUN_1407418a0(param_2 + 0x1c8,0);
  }
  FUN_142e9c650(param_2 + 0x38);
  FUN_142e9c7b0(param_2 + 0x88);
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
            (param_2 + 0xd8);
  local_98[0] = 0;
  local_98[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x1b8);
  if (*(undefined8 **)(param_2 + 0x1b8) == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(param_2 + 0x138);
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar6 = (longlong)*(int *)(param_2 + 0x1c0) & 0x1fffffffffffffff;
  if (puVar5 + *(int *)(param_2 + 0x1c0) < puVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x30);
    do {
      plVar2 = (longlong *)*puVar5;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      *puVar1 = plVar2;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_2 + 0x38,&local_a8,plVar2);
      if ((local_a8 == -1) ||
         (lVar3 = (longlong)local_a8 * 0x20 + *(longlong *)(param_2 + 0x38), lVar3 == 0)) {
        local_a0 = puVar1;
        FUN_142e8b8a0(param_2 + 0x38,&local_a4,&local_a0,0);
        lVar3 = (longlong)local_a4 * 0x20 + *(longlong *)(param_2 + 0x38);
      }
      if (*(int *)(lVar3 + 0x14) < 0x20) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar3 + 8,0x20);
      }
      (**(code **)*plVar2)(plVar2,param_2 + 0x28,local_98);
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e9cb80 FUN_142e9cb80 body=115 status=ok
// SIG undefined FUN_142e9cb80(void)

void FUN_142e9cb80(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
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
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FGameplayTag>::ResizeAllocation
              (param_1,0,iVar1,8);
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  return;
}



// FUNCTION 142e9cc00 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<312,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x138,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x138,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142e9cca0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xb8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xb8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142e9cd40 ResizeShrink body=171 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FXElementalFXDef_ParticleSystem,FDefaultAllocator>::ResizeShrink
                    (ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x138) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x138,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 8);
      }
      goto LAB_142e9cdba;
    }
    if (iVar5 == 0) goto LAB_142e9cdba;
  }
  iVar5 = iVar6;
LAB_142e9cdba:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x138,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142e9cdf0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<312,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x138,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x138,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142e9ce80 FUN_142e9ce80 body=32 status=ok
// SIG undefined FUN_142e9ce80(void)

undefined8 FUN_142e9ce80(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  FUN_142e8d290(param_1,param_2,local_res18);
  return param_1;
}



// FUNCTION 142e9cea0 FUN_142e9cea0 body=32 status=ok
// SIG undefined FUN_142e9cea0(void)

undefined8 FUN_142e9cea0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  FUN_142e8ca30(param_1,param_2,local_res18);
  return param_1;
}



// FUNCTION 142e9cec0 FUN_142e9cec0 body=33 status=ok
// SIG undefined FUN_142e9cec0(void)

undefined8 FUN_142e9cec0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_142e8cc40(param_1,param_2,local_res18);
  return param_1;
}



// FUNCTION 142e9cef0 FUN_142e9cef0 body=403 status=ok
// SIG undefined FUN_142e9cef0(void)

longlong * FUN_142e9cef0(longlong *param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined4 local_50 [10];
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  local_res18[0] = param_3;
  puVar5 = (undefined8 *)FUN_142e95e70(param_1 + 2);
  uVar3 = *puVar5;
  puVar5 = (undefined8 *)FName::FName(&local_res10,puVar6,1);
  FUN_14218dc00(uVar3,&local_res8,*puVar5,0);
  local_res10 = 0;
  if (*local_res8 != 0) {
    if (param_4 == '\0') {
      FUN_140bfa9d0(param_1,&local_res8,local_res18);
      return param_1;
    }
    local_res10 = 0;
    if ((*local_res8 != 0) && (cVar4 = FUN_1407ce010(local_res8 + 1), cVar4 != '\0')) {
      plVar7 = (longlong *)*param_1;
      plVar1 = plVar7 + (longlong)(int)param_1[1] * 5;
      if (plVar7 != plVar1) {
        do {
          if ((*(longlong *)*plVar7 == *local_res8) &&
             (*(longlong *)(((longlong *)*plVar7)[1] + 0x28) == *(longlong *)(local_res8[1] + 0x28))
             ) {
            return param_1;
          }
          plVar7 = plVar7 + 5;
        } while (plVar7 != plVar1);
      }
      FUN_14217e740(local_50);
      FUN_142194380(local_50,0xe,0,1,0);
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      local_50[0] = param_3;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar5 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x28);
      *puVar5 = local_res8;
      FUN_14217e5b0(puVar5 + 1,local_50);
      FUN_14217f430(local_50);
    }
  }
  return param_1;
}



// FUNCTION 142e9d090 FUN_142e9d090 body=23 status=ok
// SIG undefined FUN_142e9d090(void)

undefined8 FUN_142e9d090(undefined8 param_1)

{
  FUN_142e8ce50();
  return param_1;
}



// FUNCTION 142e9d0b0 FUN_142e9d0b0 body=363 status=ok
// SIG undefined FUN_142e9d0b0(void)

longlong * FUN_142e9d0b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 local_40 [40];
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  puVar5 = (undefined8 *)FUN_142e95e70(param_1 + 2);
  uVar3 = *puVar5;
  puVar5 = (undefined8 *)FName::FName(&local_res10,puVar6,1);
  FUN_14218dc00(uVar3,&local_res8,*puVar5,0);
  local_res10 = 0;
  if (*local_res8 != 0) {
    if (param_4 == '\0') {
      FUN_140bfb1d0(param_1,&local_res8,param_3);
    }
    else {
      local_res10 = 0;
      if ((*local_res8 != 0) && (cVar4 = FUN_1407ce010(local_res8 + 1), cVar4 != '\0')) {
        plVar7 = (longlong *)*param_1;
        plVar1 = plVar7 + (longlong)(int)param_1[1] * 5;
        if (plVar7 != plVar1) {
          do {
            if ((*(longlong *)*plVar7 == *local_res8) &&
               (*(longlong *)(((longlong *)*plVar7)[1] + 0x28) ==
                *(longlong *)(local_res8[1] + 0x28))) {
              return param_1;
            }
            plVar7 = plVar7 + 5;
          } while (plVar7 != plVar1);
        }
        FUN_14217e740(local_40);
        FUN_140643170(local_40,param_3);
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x28);
        *puVar5 = local_res8;
        FUN_14217e5b0(puVar5 + 1,local_40);
        FUN_14217f430(local_40);
      }
    }
  }
  return param_1;
}



// FUNCTION 142e9d220 FUN_142e9d220 body=23 status=ok
// SIG undefined FUN_142e9d220(void)

undefined8 FUN_142e9d220(undefined8 param_1)

{
  FUN_142e8d070();
  return param_1;
}



// FUNCTION 142e9d240 FUN_142e9d240 body=381 status=ok
// SIG undefined FUN_142e9d240(void)

void FUN_142e9d240(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  longlong *local_18;
  int local_10;
  
  plVar3 = (longlong *)FUN_14218dee0();
  uVar6 = 0;
  if (((param_1 != 0) && ((int)plVar3[1] != 0)) &&
     (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    if (((cVar2 != '\0') && ((int)plVar3[1] != 0)) &&
       (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*plVar3 != 0) {
        lVar4 = FMemory::Realloc(*plVar3,0,0);
        *plVar3 = lVar4;
      }
      *(undefined4 *)(plVar3 + 1) = 0;
    }
  }
  FUN_142195460(param_1 + 8);
  FUN_140483870(&DAT_1464af388,param_1);
  FUN_140483870(&DAT_1464af370,param_1);
  FUN_140483870(&DAT_146535730,param_1);
  FUN_140483870(&DAT_1465357a8,param_1);
  plVar3 = (longlong *)FUN_141593110();
  uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_140483870(uVar5,param_1);
  plVar3 = (longlong *)FUN_141593110();
  uVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
  FUN_140483870(uVar5,param_1);
  FName::FName(&local_res8,L"GbxPerfAnalyticsProvider",1);
  uVar5 = FUN_141593110();
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar5,&local_18,local_res8)
  ;
  uVar7 = (ulonglong)((longlong)(local_18 + local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + local_10 < local_18) {
    uVar7 = uVar6;
  }
  plVar3 = local_18;
  if (uVar7 != 0) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
      plVar3 = plVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142e9d3c0 FUN_142e9d3c0 body=1682 status=ok
// SIG undefined FUN_142e9d3c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e9d3c0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  uVar9 = 0;
  local_38 = FUN_142e96760;
  iStack_30 = 0;
  plVar4 = (longlong *)FUN_141593110();
  uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1ab0;
    plVar4[1] = param_1;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(int *)(plVar4 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1af8;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(uVar5,&local_res8,&local_48);
    plVar4 = local_48;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142e9d494;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      plVar4 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142e9d494:
  iStack_30 = 0;
  local_38 = FUN_142e967c0;
  plVar4 = (longlong *)FUN_141593110();
  uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1ab0;
    plVar4[1] = param_1;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(int *)(plVar4 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1af8;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(uVar5,&local_res8,&local_48);
    plVar4 = local_48;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142e9d53a;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      plVar4 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142e9d53a:
  FName::FName(&local_res8,L"GbxPerfAnalyticsProvider",1);
  uVar5 = FUN_141593110();
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar5,&local_38,local_res8)
  ;
  pcVar2 = local_38;
  uVar11 = (ulonglong)(local_38 + (longlong)iStack_30 * 8 + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (longlong)iStack_30 * 8 < local_38) {
    uVar11 = uVar9;
  }
  pcVar10 = local_38;
  if (uVar11 != 0) {
    do {
      FUN_142e9a230(param_1,*(undefined8 *)pcVar10);
      uVar9 = uVar9 + 1;
      pcVar10 = pcVar10 + 8;
    } while (uVar9 != uVar11);
  }
  iStack_30 = 0;
  local_38 = FUN_142e96850;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(int *)(plVar4 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1af8;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146535760,&local_res8,&local_48);
    plVar4 = local_48;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142e9d64f;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      plVar4 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142e9d64f:
  iStack_30 = 0;
  local_38 = FUN_142e97870;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(int *)(plVar4 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77b10;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1465357a8,&local_res8,&local_48);
    plVar4 = local_48;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142e9d6f6;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      plVar4 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142e9d6f6:
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  local_40 = 2;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_14597e768;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_14597e7b0;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464af388,&local_res8,&local_48);
    plVar4 = local_48;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142e9d786;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      plVar4 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142e9d786:
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  local_40 = 2;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_14597e7f8;
    local_48 = plVar4;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_14597e840;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464af370,&local_res8,&local_48);
    plVar4 = local_48;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142e9d816;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      plVar4 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
LAB_142e9d816:
  iStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_142e968f0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_14597e5b8;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(int *)(plVar4 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_14597e600;
  }
  FUN_1415a2bb0(&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_142e9d8c4;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_142e9d8c4:
  if ((DAT_146aeaf18 == '\0') && (puVar7 = (undefined8 *)FUN_14218ce40(), puVar7 != &DAT_146aeaeb0))
  {
    DAT_146aeaeb0 = *puVar7;
    uRam0000000146aeaeb8 = puVar7[1];
    _DAT_146aeaec0 = puVar7[2];
    uRam0000000146aeaec8 = puVar7[3];
    _DAT_146aeaed0 = puVar7[4];
    DAT_146aeaed8 = puVar7[5];
    _DAT_146aeaee0 = puVar7[6];
    _DAT_146aeaee8 = puVar7[7];
    _DAT_146aeaef0 = puVar7[8];
    _DAT_146aeaef8 = puVar7[9];
    DAT_146aeaf00 = puVar7[10];
    DAT_146aeaf08 = puVar7[0xb];
    DAT_146aeaf10 = puVar7[0xc];
    DAT_146aeaf18 = '\x01';
  }
  FUN_142192a90(param_1 + 8,DAT_146aeaeb0,0x14);
  plVar4 = (longlong *)FUN_14218dee0();
  if ((((int)plVar4[1] == 0) || ((longlong *)*plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)*plVar4 + 0x18))(), cVar3 == '\0')) {
    iStack_30 = 0;
    local_38 = FUN_142e99f60;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      plVar8[1] = param_1;
      *plVar8 = (longlong)&PTR_GetPoolName_14597e888;
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
      *(int *)(plVar8 + 3) = iStack_30;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar6;
    }
    if (&local_38 != plVar4) {
      if (plVar8 == (longlong *)0x0) {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar6 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar6;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar8 + 0x30))(plVar8,plVar4);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar6 = FMemory::Realloc(plVar8,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  if (pcVar2 != (code *)0x0) {
    FMemory::Free(pcVar2);
  }
  return;
}



// FUNCTION 142e9da60 FUN_142e9da60 body=203 status=ok
// SIG undefined FUN_142e9da60(void)

void FUN_142e9da60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *local_28;
  int local_20;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x68))();
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + iVar3;
    plVar1 = *(longlong **)(param_1 + 0x710);
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,0);
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar4,0x9000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar2 = FUN_1424a3f80();
  if ((((cVar2 == '\0') || (DAT_146af5674 == 1)) && (*(int *)(param_1 + 0x6f4) == 0)) &&
     (*(int *)(param_1 + 0x6f0) == 0)) {
    FUN_142e9e470(param_1,param_2,0,param_1 + 0x360);
  }
  return;
}



// FUNCTION 142e9db30 FUN_142e9db30 body=2362 status=ok
// SIG undefined FUN_142e9db30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e9db30(undefined4 *param_1,undefined4 *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte bVar24;
  float *pfVar25;
  uint uVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  LARGE_INTEGER local_res8;
  undefined4 *local_res10;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  longlong *local_68;
  int local_60;
  
  local_res10 = param_2;
  cVar10 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>();
  uVar9 = uRam0000000146b3d4a8;
  uVar13 = _DAT_146b3d4a0;
  if (cVar10 != '\0') {
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x30) = uVar13;
    *(undefined8 *)(param_1 + 0x32) = uVar9;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[0x24] = 0;
    if (0x7fffffff < (uint)param_1[0x25]) {
      FUN_140a70170(param_1 + 2,0);
    }
    param_1[0x2e] = 0;
    if (param_1[0x2f] != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x2c,0);
    }
  }
  cVar10 = FWeakObjectPtr::IsValid(param_2);
  if (cVar10 != '\0') {
    pfVar5 = *(float **)(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x2c) = 0;
    iVar2 = param_1[0x2e];
    uVar26 = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    local_res8.s.LowPart._0_1_ = '\0';
    if (param_1[0x24] == 0) {
      uVar13 = FWeakObjectPtr::Get(param_2);
      UWorld::GetPlayerControllerIterator(uVar13,&local_78);
      while( true ) {
        bVar28 = (byte)uVar26;
        bVar8 = true;
        if (((int)local_70 < 0) ||
           ((int)((longlong *)CONCAT44(fStack_74,local_78))[1] <= (int)local_70)) {
          bVar8 = false;
        }
        if (!bVar8) break;
        plVar14 = (longlong *)
                  FWeakObjectPtr::Get(*(longlong *)CONCAT44(fStack_74,local_78) +
                                      (longlong)(int)local_70 * 8);
        cVar10 = (**(code **)(*plVar14 + 0x768))();
        if (cVar10 != '\0') {
          iVar12 = param_1[0x24];
          iVar20 = iVar12 + 1;
          param_1[0x24] = iVar20;
          if ((int)param_1[0x25] < iVar20) {
            TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1 + 2);
          }
          puVar21 = *(undefined4 **)(param_1 + 0x22);
          if (*(undefined4 **)(param_1 + 0x22) == (undefined4 *)0x0) {
            puVar21 = param_1 + 2;
          }
          puVar22 = (undefined8 *)(puVar21 + (longlong)iVar12 * 8);
          *puVar22 = plVar14;
          (**(code **)(*plVar14 + 0x7a8))
                    (plVar14,puVar22 + 1,(undefined4 *)((longlong)puVar22 + 0x14));
          lVar18 = plVar14[0x91];
          if (lVar18 != 0) {
            lVar15 = APostProcessVolume::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (((bVar8) && (*(longlong *)(lVar18 + 0x4c8) != 0)) &&
               ((*(uint *)(*(longlong *)(lVar18 + 0x4c8) + 0x4b4) & 0x400) != 0)) {
              uVar26 = 1;
            }
          }
        }
        local_70 = (float)((int)local_70 + 1);
      }
      uVar27 = param_1[0x24] != 0;
    }
    else {
      uVar13 = FWeakObjectPtr::Get(param_2);
      UWorld::GetPlayerControllerIterator(uVar13,&local_68);
LAB_142e9dd91:
      bVar28 = (byte)uVar26;
      bVar8 = true;
      if ((local_60 < 0) || ((int)local_68[1] <= local_60)) {
        bVar8 = false;
      }
      uVar27 = local_res8.s.LowPart._0_1_;
      if (bVar8) {
        plVar14 = (longlong *)FWeakObjectPtr::Get(*local_68 + (longlong)local_60 * 8);
        cVar10 = (**(code **)(*plVar14 + 0x768))();
        if (cVar10 != '\0') {
          puVar22 = (undefined8 *)(param_1 + 2);
          iVar12 = param_1[0x24];
          puVar23 = *(undefined8 **)(param_1 + 0x22);
          if (*(undefined8 **)(param_1 + 0x22) == (undefined8 *)0x0) {
            puVar23 = puVar22;
          }
          puVar16 = puVar23 + (longlong)iVar12 * 4;
          for (; puVar23 != puVar16; puVar23 = puVar23 + 4) {
            if ((longlong *)*puVar23 == plVar14) {
              uVar11 = (**(code **)(*plVar14 + 0x7a8))(plVar14,&local_88,&local_78);
              lVar18 = plVar14[0x91];
              if (lVar18 != 0) {
                lVar17 = APostProcessVolume::GetPrivateStaticClass();
                iVar12 = *(int *)(lVar17 + 0x90);
                lVar15 = (longlong)iVar12;
                if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < iVar12) ||
                   (lVar15 = *(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88),
                   *(longlong *)(lVar15 + (longlong)iVar12 * 8) != lVar17 + 0x88)) {
                  uVar11 = (uint)lVar15 & 0xffffff00;
                }
                else {
                  uVar11 = 1;
                }
                if ((char)uVar11 != '\0') {
                  uVar11 = 0;
                  if ((*(longlong *)(lVar18 + 0x4c8) != 0) &&
                     (uVar11 = uVar26,
                     (*(uint *)(*(longlong *)(lVar18 + 0x4c8) + 0x4b4) & 0x400) != 0)) {
                    uVar11 = 1;
                    uVar26 = uVar11;
                  }
                }
              }
              if (((8.0 < ABS(*(float *)(puVar23 + 1) - local_88)) ||
                  (8.0 < ABS(*(float *)((longlong)puVar23 + 0xc) - fStack_84))) ||
                 (8.0 < ABS(*(float *)(puVar23 + 2) - local_80))) {
                uVar11 = uVar11 & 0xffffff00;
              }
              else {
                uVar11 = 1;
              }
              if ((char)uVar11 != '\0') {
                fVar32 = *(float *)((longlong)puVar23 + 0x14) - local_78;
                fVar34 = *(float *)((longlong)puVar23 + 0x1c) - local_70;
                fVar3 = (float)DAT_146b3d2a0;
                fVar4 = DAT_146b3d2a0._4_4_;
                fVar6 = DAT_146b3d2a0._8_4_;
                fVar7 = DAT_146b3d2a0._12_4_;
                auVar29._4_4_ = *(float *)(puVar23 + 3) - fStack_74;
                auVar29._0_4_ = fVar32;
                auVar29._8_4_ = fVar34;
                auVar29._12_4_ = 0;
                auVar29 = divps(auVar29,_DAT_146b3d2a0);
                fVar32 = fVar32 - (float)(int)auVar29._0_4_ * fVar3;
                fVar33 = (*(float *)(puVar23 + 3) - fStack_74) - (float)(int)auVar29._4_4_ * fVar4;
                fVar34 = fVar34 - (float)(int)auVar29._8_4_ * fVar6;
                fVar35 = 0.0 - (float)(int)auVar29._12_4_ * fVar7;
                fVar32 = (float)(((uint)(fVar32 + fVar3) ^ (uint)fVar32) & -(uint)(0.0 <= fVar32) ^
                                (uint)(fVar32 + fVar3));
                fVar33 = (float)(((uint)(fVar33 + fVar4) ^ (uint)fVar33) & -(uint)(0.0 <= fVar33) ^
                                (uint)(fVar33 + fVar4));
                fVar34 = (float)(((uint)(fVar34 + fVar6) ^ (uint)fVar34) & -(uint)(0.0 <= fVar34) ^
                                (uint)(fVar34 + fVar6));
                fVar35 = (float)(((uint)(fVar35 + fVar7) ^ (uint)fVar35) & -(uint)(0.0 <= fVar35) ^
                                (uint)(fVar35 + fVar7));
                auVar30._4_4_ =
                     -(uint)(8.0 < (float)((((uint)(fVar33 - fVar4) ^ (uint)fVar33) &
                                            -(uint)(fRam0000000146b3d294 < fVar33) ^ (uint)fVar33) &
                                          uRam0000000146b3d284));
                auVar30._0_4_ =
                     -(uint)(8.0 < (float)((((uint)(fVar32 - fVar3) ^ (uint)fVar32) &
                                            -(uint)(_DAT_146b3d290 < fVar32) ^ (uint)fVar32) &
                                          _DAT_146b3d280));
                auVar30._8_4_ =
                     -(uint)(8.0 < (float)((((uint)(fVar34 - fVar6) ^ (uint)fVar34) &
                                            -(uint)(fRam0000000146b3d298 < fVar34) ^ (uint)fVar34) &
                                          uRam0000000146b3d288));
                auVar30._12_4_ =
                     -(uint)(8.0 < (float)((((uint)(fVar35 - fVar7) ^ (uint)fVar35) &
                                            -(uint)(fRam0000000146b3d29c < fVar35) ^ (uint)fVar35) &
                                          uRam0000000146b3d28c));
                iVar12 = movmskps(uVar11,auVar30);
                if (iVar12 == 0) goto LAB_142e9e070;
              }
              puVar23[1] = CONCAT44(fStack_84,local_88);
              *(float *)(puVar23 + 2) = local_80;
              *(ulonglong *)((longlong)puVar23 + 0x14) = CONCAT44(fStack_74,local_78);
              *(float *)((longlong)puVar23 + 0x1c) = local_70;
              local_60 = local_60 + 1;
              local_res8.s.LowPart._0_1_ = '\x01';
              goto LAB_142e9dd91;
            }
          }
          local_res8.s.LowPart._0_1_ = '\x01';
          param_1[0x24] = iVar12 + 1;
          if ((int)param_1[0x25] < iVar12 + 1) {
            TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar22);
          }
          puVar23 = *(undefined8 **)(param_1 + 0x22);
          if (*(undefined8 **)(param_1 + 0x22) == (undefined8 *)0x0) {
            puVar23 = puVar22;
          }
          puVar23 = puVar23 + (longlong)iVar12 * 4;
          *puVar23 = plVar14;
          (**(code **)(*plVar14 + 0x7a8))
                    (plVar14,puVar23 + 1,(undefined4 *)((longlong)puVar23 + 0x14));
          lVar18 = plVar14[0x91];
          if (lVar18 != 0) {
            lVar15 = APostProcessVolume::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (((bVar8) && (*(longlong *)(lVar18 + 0x4c8) != 0)) &&
               ((*(uint *)(*(longlong *)(lVar18 + 0x4c8) + 0x4b4) & 0x400) != 0)) {
              uVar26 = 1;
            }
          }
        }
LAB_142e9e070:
        local_60 = local_60 + 1;
        goto LAB_142e9dd91;
      }
    }
    puVar21 = local_res10;
    uVar13 = FWeakObjectPtr::Get(local_res10);
    lVar18 = UWorld::GetGameViewport(uVar13);
    if (lVar18 == 0) {
      param_1[0x30] = param_1[0x30] & 0xfffffffb;
    }
    else if ((*(longlong *)(lVar18 + 0xa0) == *(longlong *)(param_1 + 0x28)) &&
            (*(int *)(lVar18 + 0xa8) == param_1[0x2a])) {
      param_1[0x30] = param_1[0x30] & 0xfffffffb;
    }
    else {
      param_1[0x30] = param_1[0x30] | 4;
    }
    if (pfVar5 != pfVar5 + (longlong)iVar2 * 3) {
      pfVar25 = pfVar5 + 1;
      do {
        fVar3 = *pfVar25;
        fVar4 = pfVar25[-1];
        if (fVar3 != 0.0) {
          if (((uint)fVar3 >> 1 & 1) != 0) {
            if (((uint)fVar4 >> 1 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xfffffffd;
            }
            else {
              uVar26 = param_1[0x30] | 2;
            }
            param_1[0x30] = uVar26;
          }
          if (((uint)fVar3 >> 2 & 1) != 0) {
            if (((uint)fVar4 >> 2 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xfffffffb;
            }
            else {
              uVar26 = param_1[0x30] | 4;
            }
            param_1[0x30] = uVar26;
          }
          if (((uint)fVar3 >> 3 & 1) != 0) {
            if (((uint)fVar4 >> 3 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xfffffff7;
            }
            else {
              uVar26 = param_1[0x30] | 8;
            }
            param_1[0x30] = uVar26;
          }
          if (((uint)fVar3 >> 4 & 1) != 0) {
            if (((uint)fVar4 >> 4 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xffffffef;
            }
            else {
              uVar26 = param_1[0x30] | 0x10;
            }
            param_1[0x30] = uVar26;
          }
          if (((uint)fVar3 >> 5 & 1) != 0) {
            if (((uint)fVar4 >> 5 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xffffffdf;
            }
            else {
              uVar26 = param_1[0x30] | 0x20;
            }
            param_1[0x30] = uVar26;
          }
          if (((uint)fVar3 >> 6 & 1) != 0) {
            if (((uint)fVar4 >> 6 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xffffffbf;
            }
            else {
              uVar26 = param_1[0x30] | 0x40;
            }
            param_1[0x30] = uVar26;
          }
          if (((uint)fVar3 >> 7 & 1) != 0) {
            if (((uint)fVar4 >> 7 & 1) == 0) {
              uVar26 = param_1[0x30] & 0xffffff7f;
            }
            else {
              uVar26 = param_1[0x30] | 0x80;
            }
            param_1[0x30] = uVar26;
          }
        }
        if (*(char *)(pfVar25 + 1) != '\0') {
          fStack_74 = *pfVar25;
          iVar12 = param_1[0x2e];
          local_78 = 0.0;
          local_70 = (float)((uint)local_70 & 0xffffff00);
          param_1[0x2e] = iVar12 + 1;
          if ((int)param_1[0x2f] < iVar12 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x2c,iVar12);
          }
          lVar18 = *(longlong *)(param_1 + 0x2c);
          *(ulonglong *)(lVar18 + (longlong)iVar12 * 0xc) = CONCAT44(fStack_74,local_78);
          *(float *)(lVar18 + 8 + (longlong)iVar12 * 0xc) = local_70;
        }
        pfVar1 = pfVar25 + 2;
        pfVar25 = pfVar25 + 3;
        puVar21 = local_res10;
      } while (pfVar1 != pfVar5 + (longlong)iVar2 * 3);
    }
    lVar18 = FWeakObjectPtr::Get(puVar21);
    uVar26 = param_1[0x30] & 0xffffffef;
    if ((*(uint *)(lVar18 + 0x830) >> 7 & 1) != 0) {
      uVar26 = param_1[0x30] | 0x10;
    }
    param_1[0x30] = uVar26;
    if (((uVar26 >> 1 & 1) == 0) || (*DAT_146b3d380 == 0)) {
      bVar24 = 0;
    }
    else {
      bVar24 = 1;
    }
    if (((uVar26 >> 2 & 1) != 0) && (*DAT_146b3d398 != 0)) {
      bVar24 = 1;
    }
    if (((uVar26 >> 3 & 1) != 0) && (*DAT_146b3d3b0 != 0)) {
      bVar24 = 1;
    }
    if (((uVar26 >> 4 & 1) != 0) && (*DAT_146b3d3c8 != 0)) {
      bVar24 = 1;
    }
    if (((uVar26 >> 5 & 1) != 0) && (*DAT_146b3d3e0 != 0)) {
      bVar24 = 1;
    }
    if (((uVar26 >> 6 & 1) == 0) || (*DAT_146b3d3f8 == 0)) {
      bVar19 = 0;
    }
    else {
      bVar19 = 1;
    }
    bVar19 = bVar19 | bVar24 | bVar28;
    if (((uVar26 >> 7 & 1) != 0) && (*DAT_146b3d410 != 0)) {
      bVar19 = 1;
    }
    QueryPerformanceCounter(&local_res8);
    dVar31 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) * DAT_1468b02f8
             + 16777216.0;
    if (bVar19 == 0) {
      if ((uVar27 != '\0') || (((uint)param_1[0x30] >> 1 & 1) != 0)) {
        *(double *)(param_1 + 0x26) = dVar31;
      }
    }
    else {
      *(double *)(param_1 + 0x26) = dVar31 - 100.0;
    }
    *(double *)(param_1 + 0x32) = dVar31 - *(double *)(param_1 + 0x26);
    if ((bVar19 != 0) || ((double)*DAT_146b3d368 <= dVar31 - *(double *)(param_1 + 0x26))) {
      uVar26 = param_1[0x30] | 1;
    }
    else {
      uVar26 = param_1[0x30] & 0xfffffffe;
    }
    uVar11 = uVar26 & 0xfffffffd;
    if (bVar28 != 0) {
      uVar11 = uVar26 | 2;
    }
    param_1[0x30] = uVar11;
    if (pfVar5 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142e9e470 FUN_142e9e470 body=1738 status=ok
// SIG undefined FUN_142e9e470(void)

undefined8 FUN_142e9e470(longlong param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 in_RDX;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  char cVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  bool bVar27;
  int local_148;
  uint uStack_144;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 local_d0;
  int iStack_c8;
  uint uStack_c4;
  uint *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  cVar20 = (char)param_3;
  if (param_4 == (char *)0x0) {
    uVar9 = FUN_142e9e470(param_1,in_RDX,param_3,param_1 + 0x360);
    return uVar9;
  }
  cVar8 = FWeakObjectPtr::IsStale(param_4 + 0x18,0,0);
  if (cVar8 == '\0') {
    LOCK();
    bVar27 = *(int *)(param_4 + 4) == 0;
    if (bVar27) {
      *(int *)(param_4 + 4) = 0;
    }
    UNLOCK();
    if (bVar27) {
      cVar8 = FWeakObjectPtr::IsValid(param_4 + 0x18);
      if ((cVar8 == '\0') || (*(int *)(param_4 + 0x130) < 1)) goto LAB_142e9e4f0;
      FWeakObjectPtr::Get(param_4 + 0x18);
      if ((cVar20 == '\0') && (*param_4 == '\0')) {
        local_120 = *(undefined4 *)(param_4 + 0x18);
        local_11c = *(undefined4 *)(param_4 + 0x1c);
        FUN_142e9db30(param_4 + 0x260,&local_120,param_2);
      }
      if ((*(char *)(param_1 + 0x6b8) != '\0') || (pcVar10 = param_4 + 800, *DAT_146b3d350 != 0)) {
        pcVar10 = &DAT_146b3d4a0;
      }
      local_58 = *(undefined4 *)pcVar10;
      uStack_54 = *(undefined4 *)(pcVar10 + 4);
      uStack_50 = *(undefined4 *)(pcVar10 + 8);
      uStack_4c = *(undefined4 *)(pcVar10 + 0xc);
      puVar11 = *(undefined8 **)(param_4 + 0x128);
      puVar18 = puVar11 + (longlong)*(int *)(param_4 + 0x130) * 0x27;
      for (; puVar11 != puVar18; puVar11 = puVar11 + 0x27) {
        if ((*(char *)(puVar11 + 0x24) == '\0') &&
           (cVar8 = (**(code **)(*(longlong *)*puVar11 + 0x10))
                              ((longlong *)*puVar11,param_2,&local_58), cVar8 != '\0')) {
          FUN_142e9eb40(puVar11);
        }
      }
      uVar19 = 0;
      pcVar10 = *(char **)(param_4 + 0x248);
      if (*(char **)(param_4 + 0x248) == (char *)0x0) {
        pcVar10 = param_4 + 0x1c8;
      }
      uVar17 = (longlong)*(int *)(param_4 + 0x250) & 0x1fffffffffffffff;
      if (pcVar10 + (longlong)*(int *)(param_4 + 0x250) * 8 < pcVar10) {
        uVar17 = uVar19;
      }
      if (uVar17 != 0) {
        do {
          (**(code **)(**(longlong **)pcVar10 + 0x18))(*(longlong **)pcVar10,param_2,&local_58);
          uVar19 = uVar19 + 1;
          pcVar10 = pcVar10 + 8;
        } while (uVar19 != uVar17);
      }
      plVar25 = *(longlong **)(param_4 + 0x128);
      plVar26 = plVar25 + (longlong)*(int *)(param_4 + 0x130) * 0x27;
      if (plVar25 != plVar26) {
        puVar24 = (uint *)(plVar25 + 4);
        do {
          if ((char)puVar24[0x40] == '\0') {
LAB_142e9ea7f:
            uVar19 = 0;
            cVar8 = *(char *)(*plVar25 + 0x4a);
            *(undefined1 *)(*plVar25 + 0x4a) = 0;
            if (cVar8 != '\0') {
              pcVar10 = *(char **)(param_4 + 0x248);
              if (*(char **)(param_4 + 0x248) == (char *)0x0) {
                pcVar10 = param_4 + 0x1c8;
              }
              uVar17 = (longlong)*(int *)(param_4 + 0x250) & 0x1fffffffffffffff;
              if (pcVar10 + (longlong)*(int *)(param_4 + 0x250) * 8 < pcVar10) {
                uVar17 = uVar19;
              }
              if (uVar17 != 0) {
                do {
                  (**(code **)(**(longlong **)pcVar10 + 0x10))();
                  uVar19 = uVar19 + 1;
                  pcVar10 = pcVar10 + 8;
                } while (uVar19 != uVar17);
              }
            }
          }
          else {
            uVar2 = puVar24[6];
            bVar27 = false;
            local_148 = 0;
            uStack_144 = 1;
            uStack_134 = 0;
            iStack_130 = 0;
            if (uVar2 != 0) {
              puVar22 = *(uint **)(puVar24 + 4);
              if (*(uint **)(puVar24 + 4) == (uint *)0x0) {
                puVar22 = puVar24;
              }
              uVar3 = *puVar22;
              while (uVar3 == 0) {
                lVar15 = (longlong)local_148;
                iStack_130 = iStack_130 + 0x20;
                iVar13 = local_148 + 1;
                bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
                local_148 = iVar13;
                if (bVar6) goto LAB_142e9e74a;
                uVar3 = puVar22[lVar15 + 1];
              }
              uStack_144 = -uVar3 & uVar3;
              iVar13 = 0x1f;
              if (uStack_144 != 0) {
                for (; uStack_144 >> iVar13 == 0; iVar13 = iVar13 + -1) {
                }
              }
              if (uStack_144 == 0) {
                iVar13 = 0x20;
              }
              else {
                iVar13 = 0x1f - iVar13;
              }
              uStack_134 = (iStack_130 - iVar13) + 0x1f;
              if ((int)uVar2 < (int)uStack_134) {
LAB_142e9e74a:
                uStack_134 = uVar2;
              }
            }
            uStack_110 = CONCAT44(uStack_144,local_148);
            puVar22 = puVar24 + -4;
            uStack_b8 = CONCAT44(uStack_134,0xffffffff);
            uStack_f8 = CONCAT44(uStack_12c,iStack_130);
            uVar3 = puVar24[6];
            local_118._4_4_ = (undefined4)((ulonglong)puVar22 >> 0x20);
            iVar13 = (int)uVar2 >> 5;
            uVar16 = -1 << ((byte)uVar2 & 0x1f);
            uVar21 = uVar2 & 0xffffffe0;
            local_118 = CONCAT44(local_118._4_4_,iVar13);
            uStack_108 = CONCAT44(uVar2,uVar16);
            uStack_100 = CONCAT44(uStack_134,uVar2) & 0xffffffffffffffe0;
            iStack_c8 = local_148;
            uStack_c4 = uStack_144;
            local_c0 = puVar24;
            local_b0 = uStack_f8;
            local_d0 = puVar22;
            uVar9 = uStack_108;
            if (uVar2 != uVar3) {
              puVar23 = *(uint **)(puVar24 + 4);
              if (*(uint **)(puVar24 + 4) == (uint *)0x0) {
                puVar23 = puVar24;
              }
              uVar16 = puVar23[iVar13] & uVar16;
              while (uVar16 == 0) {
                uVar21 = uVar21 + 0x20;
                uVar19 = uStack_100 >> 0x20;
                uStack_100 = CONCAT44((int)uVar19,uVar21);
                local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
                local_118 = CONCAT44(local_118._4_4_,iVar13 + 1);
                if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
                goto LAB_142e9e845;
                uVar16 = puVar23[(longlong)iVar13 + 1];
                uStack_108 = 0xffffffff;
                iVar13 = iVar13 + 1;
              }
              uVar16 = -uVar16 & uVar16;
              local_f0 = 0x1f;
              if (uVar16 != 0) {
                for (; uVar16 >> local_f0 == 0; local_f0 = local_f0 + -1) {
                }
              }
              if (uVar16 == 0) {
                iVar13 = 0x20;
              }
              else {
                iVar13 = 0x1f - local_f0;
              }
              iVar13 = (uVar21 - iVar13) + 0x1f;
              uStack_108 = CONCAT44(iVar13,(undefined4)uStack_108);
              uVar9 = uStack_108;
              if ((int)uVar3 < iVar13) {
LAB_142e9e845:
                uStack_108 = CONCAT44(uVar3,(undefined4)uStack_108);
                uVar9 = uStack_108;
              }
            }
            while( true ) {
              if (((uStack_b8._4_4_ == (int)((ulonglong)uVar9 >> 0x20)) && (local_c0 == puVar24)) &&
                 (local_d0 == puVar22)) break;
              iVar13 = (**(code **)(**(longlong **)
                                      (*(longlong *)local_d0 + (longlong)uStack_b8._4_4_ * 0x10) +
                                   0x30))();
              bVar27 = (iVar13 + 1U & 0xfffffffd) == 0;
              if ((cVar20 == '\0') && (!bVar27)) goto LAB_142e9ea6f;
              uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)uStack_b8 & ~uStack_c4);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c8);
            }
            if (bVar27) {
              if (cVar20 == '\0') {
                iVar13 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x68))();
                if (iVar13 != 0) {
                  LOCK();
                  *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
                  UNLOCK();
                  local_78 = (longlong *)0x0;
                  local_68 = 0;
                  local_e8 = param_1;
                  uStack_e0 = param_4;
                  local_d8 = plVar25;
                  puVar11 = (undefined8 *)FUN_140438ef0(0x20,local_98);
                  if (puVar11 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar11 + 1) = (undefined4)local_e8;
                    *(undefined4 *)((longlong)puVar11 + 0xc) = local_e8._4_4_;
                    *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_e0;
                    *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_e0._4_4_;
                    *puVar11 = &PTR_FUN_143f4d0b0;
                    puVar11[3] = local_d8;
                  }
                  local_a8 = FUN_142e94090;
                  plVar12 = (longlong *)FUN_140596960(&local_e8,0,0xff);
                  lVar15 = *plVar12;
                  *(undefined8 *)(lVar15 + 0x40) = 0;
                  *(undefined4 *)(lVar15 + 0x50) = 0;
                  if (local_78 == (longlong *)0x0) {
                    _guard_xfg_dispatch_icall_nop((longlong *)(lVar15 + 0x20),local_98,0x20);
                  }
                  if (*(longlong *)(lVar15 + 0x40) != 0) {
                    FMemory::Free();
                  }
                  *(longlong **)(lVar15 + 0x40) = local_78;
                  local_78 = (longlong *)0x0;
                  *(int *)(lVar15 + 0x50) = local_68;
                  local_68 = 0;
                  if (*(int *)(lVar15 + 0x50) == 0) {
LAB_142e9e9e3:
                    *(code **)(lVar15 + 0x10) = AK::MemoryMgr::StartProfileThreadUsage;
                  }
                  else {
                    plVar14 = *(longlong **)(lVar15 + 0x40);
                    if (*(longlong **)(lVar15 + 0x40) == (longlong *)0x0) {
                      plVar14 = (longlong *)(lVar15 + 0x20);
                    }
                    if (plVar14 == (longlong *)0x0) goto LAB_142e9e9e3;
                    (**(code **)(*plVar14 + 8))();
                    *(code **)(lVar15 + 0x10) = local_a8;
                  }
                  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
                  *(undefined4 *)(lVar15 + 0x60) = 0x10ff;
                  lVar15 = *plVar12;
                  lVar7 = plVar12[2];
                  lVar4 = plVar12[1];
                  lVar5 = *(longlong *)(lVar15 + 0x78);
                  if (lVar5 != 0) {
                    LOCK();
                    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
                    UNLOCK();
                  }
                  FUN_1405ab110(lVar15,lVar4,(int)lVar7,1);
                  if (local_68 != 0) {
                    plVar12 = local_98;
                    if (local_78 != (longlong *)0x0) {
                      plVar12 = local_78;
                    }
                    if (plVar12 != (longlong *)0x0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                  if (local_78 != (longlong *)0x0) {
                    FMemory::Free();
                  }
                  if (lVar5 != 0) {
                    LOCK();
                    piVar1 = (int *)(lVar5 + 0x48);
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      FGraphEvent::Recycle(lVar5);
                    }
                  }
                  goto LAB_142e9ea6f;
                }
              }
LAB_142e9e8c1:
              FUN_142e9b920(param_1,param_4,plVar25);
            }
            else if (cVar20 != '\0') goto LAB_142e9e8c1;
LAB_142e9ea6f:
            if ((char)puVar24[0x40] == '\0') goto LAB_142e9ea7f;
          }
          plVar25 = plVar25 + 0x27;
          puVar24 = puVar24 + 0x4e;
        } while (plVar25 != plVar26);
      }
    }
    uVar9 = 1;
  }
  else {
    FWeakObjectPtr::operator=(&local_128,0);
    *(undefined4 *)(param_4 + 0x18) = local_128;
    *(undefined4 *)(param_4 + 0x1c) = local_124;
LAB_142e9e4f0:
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 142e9eb40 FUN_142e9eb40 body=561 status=ok
// SIG undefined FUN_142e9eb40(void)

void FUN_142e9eb40(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
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
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x10);
    puVar2 = (uint *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x120) = 1;
    uVar3 = *(uint *)(param_1 + 0x38);
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar11 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar11 = puVar2;
      }
      uVar4 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar8 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar9 = local_88 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar9;
        if (bVar6) goto LAB_142e9ec2b;
        uVar4 = puVar11[lVar8 + 1];
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
LAB_142e9ec2b:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x38);
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
      puVar11 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar11 = puVar2;
      }
      uVar7 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar7 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_142e9ecf3;
        uVar7 = puVar11[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar9 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_74 = (uVar10 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142e9ecf3:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
      plVar5 = *(longlong **)(*plVar1 + (longlong)(int)uStack_4c * 0x10);
      (**(code **)(*plVar5 + 0x28))(plVar5,param_1 + 0x60);
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return;
}



// FUNCTION 142e9ed80 FUN_142e9ed80 body=1224 status=ok
// SIG undefined FUN_142e9ed80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e9ed80(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58 [3];
  short local_40;
  longlong *local_38;
  longlong *local_30;
  undefined4 local_28;
  
  FUN_142e921d0(local_58,param_2,0);
  if (local_40 != 0x28) goto LAB_142e9f148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3d760) && (_Init_thread_header(&DAT_146b3d760), DAT_146b3d760 == -1))
  {
    if ((DAT_146aeafc8 == '\0') &&
       (puVar7 = (undefined8 *)FUN_14218d320(), puVar7 != &DAT_146aeaf98)) {
      DAT_146aeaf98._0_4_ = *(undefined4 *)puVar7;
      DAT_146aeaf98._4_4_ = *(undefined4 *)((longlong)puVar7 + 4);
      uRam0000000146aeafa0 = *(undefined4 *)(puVar7 + 1);
      uRam0000000146aeafa4 = *(undefined4 *)((longlong)puVar7 + 0xc);
      _DAT_146aeafa8 = *(undefined4 *)(puVar7 + 2);
      uRam0000000146aeafac = *(undefined4 *)((longlong)puVar7 + 0x14);
      uRam0000000146aeafb0 = *(undefined4 *)(puVar7 + 3);
      uRam0000000146aeafb4 = *(undefined4 *)((longlong)puVar7 + 0x1c);
      _DAT_146aeafb8 = *(undefined4 *)(puVar7 + 4);
      uRam0000000146aeafbc = *(undefined4 *)((longlong)puVar7 + 0x24);
      uRam0000000146aeafc0 = *(undefined4 *)(puVar7 + 5);
      uRam0000000146aeafc4 = *(undefined4 *)((longlong)puVar7 + 0x2c);
      DAT_146aeafc8 = '\x01';
    }
    _DAT_146b3d730 = (undefined4)DAT_146aeaf98;
    uRam0000000146b3d734 = DAT_146aeaf98._4_4_;
    _DAT_146b3d738 = uRam0000000146aeafa0;
    uRam0000000146b3d73c = uRam0000000146aeafa4;
    DAT_146b3d740._0_4_ = _DAT_146aeafa8;
    DAT_146b3d740._4_4_ = uRam0000000146aeafac;
    uRam0000000146b3d748 = uRam0000000146aeafb0;
    uRam0000000146b3d74c = uRam0000000146aeafb4;
    DAT_146b3d750._0_4_ = _DAT_146aeafb8;
    DAT_146b3d750._4_4_ = uRam0000000146aeafbc;
    _DAT_146b3d758 = uRam0000000146aeafc0;
    uRam0000000146b3d75c = uRam0000000146aeafc4;
    _Init_thread_footer(&DAT_146b3d760);
  }
  lVar5 = FUN_140c15a40(param_2[2],*(undefined8 *)(*param_2 + 0x90));
  if (*(int *)(lVar5 + 0x20) == 0) {
    plVar11 = (longlong *)FUN_140aa2bd0(lVar5);
  }
  else {
    lVar10 = *(longlong *)(lVar5 + 0x18);
    if (*(longlong *)(lVar5 + 0x18) == 0) {
      lVar10 = lVar5 + 8;
    }
    plVar11 = (longlong *)(lVar10 + (longlong)(*(int *)(lVar5 + 0x20) + -1) * 0x10);
  }
  FUN_1421923f0(&local_38,DAT_146b3d210,local_58);
  FUN_140bfb300(plVar11,&DAT_146b3d738,&local_38);
  FUN_14217f430(&local_38);
  FUN_1421923f0(&local_38,DAT_146b3d1f8,local_58);
  FUN_140bfb300(plVar11,&DAT_146b3d758,&local_38);
  FUN_14217f430(&local_38);
  if ((local_40 != 0x28) || (local_58[0] == (longlong *)0x0)) goto LAB_142e9f148;
  lVar5 = FUN_14291fb80();
  if ((*(int *)(local_58[0][2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(local_58[0][2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_142e9f148;
  (**(code **)(*local_58[0] + 0x7a8))(local_58[0],&local_78,&local_68);
  plVar6 = (longlong *)CONCAT44(DAT_146b3d740._4_4_,(undefined4)DAT_146b3d740);
  if (*plVar6 == 0) {
LAB_142e9ef28:
    bVar3 = false;
  }
  else {
    cVar4 = FUN_1407ce010();
    plVar6 = (longlong *)CONCAT44(DAT_146b3d740._4_4_,(undefined4)DAT_146b3d740);
    if (cVar4 == '\0') goto LAB_142e9ef28;
    bVar3 = true;
  }
  if (bVar3) {
    plVar9 = (longlong *)*plVar11;
    plVar1 = plVar9 + (longlong)(int)plVar11[1] * 5;
    if (plVar9 != plVar1) {
      do {
        if ((*(longlong *)*plVar9 == *plVar6) &&
           (*(longlong *)(((longlong *)*plVar9)[1] + 0x28) == *(longlong *)(plVar6[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          FUN_14217e740(&local_38);
          FUN_142194380(&local_38,0x21,0,0,0);
          local_38 = local_78;
          local_30 = (longlong *)CONCAT44(local_30._4_4_,local_70);
          FUN_14217f450(plVar9 + 1,&local_38);
          pplVar8 = &local_38;
          goto LAB_142e9eff3;
        }
        plVar9 = plVar9 + 5;
      } while (plVar9 != plVar1);
    }
    local_38 = plVar6;
    FUN_14217e740(&local_30);
    FUN_142194380(&local_30,0x21,0,0,0);
    iVar2 = (int)plVar11[1];
    local_28 = local_70;
    local_30 = local_78;
    *(int *)(plVar11 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar11,iVar2);
    }
    puVar7 = (undefined8 *)(*plVar11 + (longlong)iVar2 * 0x28);
    *puVar7 = local_38;
    FUN_14217e5b0(puVar7 + 1,&local_30);
    pplVar8 = &local_30;
LAB_142e9eff3:
    FUN_14217f430(pplVar8);
  }
  plVar6 = (longlong *)CONCAT44(DAT_146b3d750._4_4_,(undefined4)DAT_146b3d750);
  if (*plVar6 == 0) {
LAB_142e9f068:
    bVar3 = false;
  }
  else {
    cVar4 = FUN_1407ce010();
    plVar6 = (longlong *)CONCAT44(DAT_146b3d750._4_4_,(undefined4)DAT_146b3d750);
    if (cVar4 == '\0') goto LAB_142e9f068;
    bVar3 = true;
  }
  if (bVar3) {
    plVar9 = (longlong *)*plVar11;
    plVar1 = plVar9 + (longlong)(int)plVar11[1] * 5;
    if (plVar9 != plVar1) {
      do {
        if ((*(longlong *)*plVar9 == *plVar6) &&
           (*(longlong *)(((longlong *)*plVar9)[1] + 0x28) == *(longlong *)(plVar6[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          FUN_14217e740(&local_38);
          FUN_142194380(&local_38,0x17,0,0,0);
          local_38 = local_68;
          local_30 = (longlong *)CONCAT44(local_30._4_4_,local_60);
          FUN_14217f450(plVar9 + 1,&local_38);
          pplVar8 = &local_38;
          goto LAB_142e9f133;
        }
        plVar9 = plVar9 + 5;
      } while (plVar9 != plVar1);
    }
    local_38 = plVar6;
    FUN_14217e740(&local_30);
    FUN_142194380(&local_30,0x17,0,0,0);
    iVar2 = (int)plVar11[1];
    local_28 = local_60;
    local_30 = local_68;
    *(int *)(plVar11 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar11,iVar2);
    }
    puVar7 = (undefined8 *)(*plVar11 + (longlong)iVar2 * 0x28);
    *puVar7 = local_38;
    FUN_14217e5b0(puVar7 + 1,&local_30);
    pplVar8 = &local_30;
LAB_142e9f133:
    FUN_14217f430(pplVar8);
  }
LAB_142e9f148:
  FUN_14217f430(local_58);
  return;
}



// FUNCTION 142e9f250 FUN_142e9f250 body=474 status=ok
// SIG undefined FUN_142e9f250(void)

void FUN_142e9f250(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  int local_res8 [2];
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2,0);
  plVar4 = (longlong *)(param_1 + 0x398);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_res8,lVar1);
  plVar2 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar4);
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar5 = *plVar3;
    lVar9 = (longlong)(int)plVar3[1] * 0x10 + lVar5;
    for (; lVar5 != lVar9; lVar5 = lVar5 + 0x10) {
      FUN_142e9a7c0(param_1 + 1000,lVar5);
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x438,lVar5);
    }
    FUN_142e9a5f0(plVar4,lVar1);
  }
  uVar6 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x520);
  if (*(int *)(param_1 + 0x520) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x518);
    if (*(longlong **)(param_1 + 0x518) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_1 + 0x498);
    }
    bVar13 = *plVar4 != lVar1;
    uVar10 = uVar6;
    uVar12 = uVar6;
    do {
      iVar8 = (int)uVar10;
      uVar6 = uVar6 + 1;
      uVar10 = (ulonglong)(iVar8 + 1);
      if ((longlong)uVar6 < lVar5) {
        lVar9 = *(longlong *)(param_1 + 0x518);
        if (*(longlong *)(param_1 + 0x518) == 0) {
          lVar9 = param_1 + 0x498;
        }
        plVar4 = (longlong *)(lVar9 + uVar6 * 8);
        do {
          if (bVar13 != (*plVar4 != lVar1)) break;
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar6 = uVar6 + 1;
          plVar4 = plVar4 + 1;
        } while ((longlong)uVar6 < lVar5);
      }
      iVar7 = (int)uVar10 - iVar8;
      if (bVar13 != false) {
        iVar11 = (int)uVar12;
        if (iVar11 != iVar8) {
          lVar9 = *(longlong *)(param_1 + 0x518);
          if (*(longlong *)(param_1 + 0x518) == 0) {
            lVar9 = param_1 + 0x498;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + (longlong)iVar11 * 8),(void *)(lVar9 + (longlong)iVar8 * 8),
                     (longlong)iVar7 << 3);
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar7);
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar6 < lVar5);
    *(int *)(param_1 + 0x520) = (int)uVar12;
  }
  return;
}



// FUNCTION 142e9f430 FUN_142e9f430 body=1405 status=ok
// SIG undefined FUN_142e9f430(void)

void FUN_142e9f430(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  longlong *plVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  int local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  uVar10 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_c4 = 1;
  local_c8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar10 != 0) {
    puVar21 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar21 = puVar1;
    }
    uVar23 = *puVar21;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar23 == 0) {
      lVar13 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar22 = local_c8 + 1;
      bVar6 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar22;
      if (bVar6) goto LAB_142e9f50b;
      uVar23 = puVar21[lVar13 + 1];
    }
    uStack_c4 = -uVar23 & uVar23;
    iVar22 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar22 == 0; iVar22 = iVar22 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar22 = 0x20;
    }
    else {
      iVar22 = 0x1f - iVar22;
    }
    uStack_b4 = (iStack_b0 - iVar22) + 0x1f;
    if ((int)uVar10 < (int)uStack_b4) {
LAB_142e9f50b:
      uStack_b4 = uVar10;
    }
  }
  uVar23 = *(uint *)(param_2 + 5);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,iStack_b0);
  uStack_70 = CONCAT44(uStack_c4,local_c8);
  uVar20 = uVar23 & 0xffffffe0;
  iStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  local_res18 = param_3;
  local_res20 = param_4;
  local_98 = puVar1;
  local_78 = param_2;
  puStack_68 = puVar1;
  uStack_58 = local_88;
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  uStack_b4 = uVar23;
  if (uVar23 != uVar10) {
    puVar21 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar21 = puVar1;
    }
    uVar15 = puVar21[(int)uVar23 >> 5] & -1 << ((byte)uVar23 & 0x1f);
    iVar22 = (int)uVar23 >> 5;
    while (uVar15 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar22)
      goto LAB_142e9f5cf;
      uVar15 = puVar21[(longlong)iVar22 + 1];
      iVar22 = iVar22 + 1;
    }
    uVar15 = -uVar15 & uVar15;
    iVar22 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar22 == 0; iVar22 = iVar22 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar22 = 0x20;
    }
    else {
      iVar22 = 0x1f - iVar22;
    }
    uStack_b4 = (uVar20 - iVar22) + 0x1f;
    if ((int)uVar10 < (int)uStack_b4) {
LAB_142e9f5cf:
      uStack_b4 = uVar10;
    }
  }
  while ((plVar7 = local_res20, uStack_8c != uStack_b4 || (local_98 != puVar1))) {
    puVar2 = (undefined8 *)(*param_2 + (longlong)(int)uStack_8c * 0x18);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb0,local_res10,puVar2);
    if (local_res10[0] == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0xb0);
    }
    lVar19 = lVar13 + 0x10;
    if (lVar13 == 0) {
      lVar19 = 0;
    }
    if (lVar19 == 0) {
      if (*(int *)(puVar2 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar2;
      }
      puVar11 = (undefined8 *)FName::FName(local_50,puVar17,1);
      cVar9 = FUN_142189c10(*puVar11);
      if (cVar9 == '\0') {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (local_res20,local_7c,puVar2,0);
      }
    }
    else {
      FUN_14058cbf0(param_3,local_80);
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  uVar10 = *(uint *)(local_res20 + 5);
  puVar1 = (uint *)(local_res20 + 2);
  local_c8 = 0;
  uStack_c4 = 1;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar10 != 0) {
    puVar21 = (uint *)local_res20[4];
    if ((uint *)local_res20[4] == (uint *)0x0) {
      puVar21 = puVar1;
    }
    uVar23 = *puVar21;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar23 == 0) {
      lVar13 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar22 = local_c8 + 1;
      bVar6 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar22;
      if (bVar6) goto LAB_142e9f759;
      uVar23 = puVar21[lVar13 + 1];
    }
    uStack_c4 = -uVar23 & uVar23;
    iVar22 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar22 == 0; iVar22 = iVar22 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar22 = 0x20;
    }
    else {
      iVar22 = 0x1f - iVar22;
    }
    uStack_b4 = (iStack_b0 - iVar22) + 0x1f;
    if ((int)uVar10 < (int)uStack_b4) {
LAB_142e9f759:
      uStack_b4 = uVar10;
    }
  }
  uVar23 = *(uint *)(local_res20 + 5);
  uStack_70 = CONCAT44(uStack_c4,local_c8);
  local_78 = local_res20;
  uVar20 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,iStack_b0);
  uVar15 = uVar23 & 0xffffffe0;
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_b4;
  iStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  uStack_90 = 0xffffffff;
  plVar12 = local_res20;
  local_98 = puVar1;
  puStack_68 = puVar1;
  uStack_58 = local_88;
  uVar8 = uVar20;
  if (uVar23 != uVar10) {
    puVar21 = (uint *)local_res20[4];
    if ((uint *)local_res20[4] == (uint *)0x0) {
      puVar21 = puVar1;
    }
    uVar16 = puVar21[(int)uVar23 >> 5] & -1 << ((byte)uVar23 & 0x1f);
    iVar22 = (int)uVar23 >> 5;
    while (uVar16 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar22)
      goto LAB_142e9f819;
      uVar16 = puVar21[(longlong)iVar22 + 1];
      iVar22 = iVar22 + 1;
    }
    uVar16 = -uVar16 & uVar16;
    iVar22 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar22 == 0; iVar22 = iVar22 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar22 = 0x20;
    }
    else {
      iVar22 = 0x1f - iVar22;
    }
    uVar23 = (uVar15 - iVar22) + 0x1f;
    if ((int)uVar10 < (int)uVar23) {
LAB_142e9f819:
      uVar23 = uVar10;
      uVar20 = uStack_90;
      uVar8 = uStack_60;
    }
  }
LAB_142e9f820:
  uStack_60 = uVar8;
  uStack_90 = uVar20;
  if (((uStack_8c == uVar23) && (local_98 == puVar1)) && (plVar7 == plVar12)) {
    return;
  }
  puVar2 = (undefined8 *)(*plVar7 + (longlong)(int)uStack_8c * 0x18);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    if (*(int *)(puVar2 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar2;
    }
    uVar10 = FUN_140438070(puVar17);
    lVar13 = (longlong)(int)((int)param_2[9] - 1U & uVar10);
    plVar12 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar12 = param_2 + 7;
    }
    piVar3 = (int *)((longlong)plVar12 + lVar13 * 4);
    iVar22 = *(int *)((longlong)plVar12 + lVar13 * 4);
    while (plVar12 = local_res20, iVar22 != -1) {
      puVar11 = (undefined8 *)(*param_2 + (longlong)iVar22 * 0x18);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar2;
      }
      if (*(int *)(puVar11 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar11;
      }
      iVar22 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar17);
      if (iVar22 == 0) {
        iVar22 = *piVar3;
        lVar13 = (longlong)iVar22;
        if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) goto LAB_142e9f956;
        lVar19 = *param_2;
        lVar18 = (longlong)(int)(*(uint *)(lVar19 + 0x14 + lVar13 * 0x18) & (int)param_2[9] - 1U);
        plVar12 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar12 = param_2 + 7;
        }
        puVar4 = (undefined4 *)((longlong)plVar12 + lVar18 * 4);
        iVar5 = *(int *)((longlong)plVar12 + lVar18 * 4);
        goto joined_r0x000142e9f930;
      }
      piVar3 = (int *)(puVar11 + 2);
      iVar22 = *(int *)(puVar11 + 2);
    }
  }
  goto LAB_142e9f97f;
joined_r0x000142e9f930:
  if (iVar5 == -1) goto LAB_142e9f956;
  if (iVar5 == iVar22) {
    *puVar4 = *(undefined4 *)(lVar19 + lVar13 * 0x18 + 0x10);
    goto LAB_142e9f956;
  }
  lVar18 = (longlong)iVar5 * 3 + 2;
  iVar5 = *(int *)(lVar19 + lVar18 * 8);
  puVar4 = (undefined4 *)(lVar19 + lVar18 * 8);
  goto joined_r0x000142e9f930;
LAB_142e9f956:
  if (*(longlong *)(*param_2 + lVar13 * 0x18) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_2,iVar22,1);
  plVar12 = local_res20;
LAB_142e9f97f:
  uStack_90 = uStack_90 & ~uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  uVar20 = uStack_90;
  uVar8 = uStack_60;
  goto LAB_142e9f820;
}



// FUNCTION 142e9f9b0 FUN_142e9f9b0 body=47 status=ok
// SIG undefined FUN_142e9f9b0(void)

longlong FUN_142e9f9b0(void)

{
  if (DAT_146b3d7c0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b3d7c0,&PTR_s__Script_GbxPerfAnalytics_14597f640);
  }
  return DAT_146b3d7c0;
}



// FUNCTION 142e9f9e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintSetLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b3d860 == 0) {
    FUN_14171ccd0(L"/Script/GbxPerfAnalytics",L"GbxTelemetryBlueprintLibrary",&DAT_146b3d860,
                  StaticRegisterNativesUBlueprintSetLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b3d860;
}



// FUNCTION 142e9fa90 FUN_142e9fa90 body=47 status=ok
// SIG undefined FUN_142e9fa90(void)

longlong FUN_142e9fa90(void)

{
  if (DAT_146b3d858 == 0) {
    FUN_141786440(&DAT_146b3d858,&PTR_GetPrivateStaticClass_14597f3a0);
  }
  return DAT_146b3d858;
}



// FUNCTION 142e9fac0 FUN_142e9fac0 body=47 status=ok
// SIG undefined FUN_142e9fac0(void)

longlong FUN_142e9fac0(void)

{
  if (DAT_146b3d7f8 == 0) {
    FUN_141786a30(&DAT_146b3d7f8,&PTR_FUN_14673b560);
  }
  return DAT_146b3d7f8;
}



// FUNCTION 142e9faf0 FUN_142e9faf0 body=47 status=ok
// SIG undefined FUN_142e9faf0(void)

longlong FUN_142e9faf0(void)

{
  if (DAT_146b3d800 == 0) {
    FUN_141786a30(&DAT_146b3d800,&PTR_FUN_14673b7e0);
  }
  return DAT_146b3d800;
}



// FUNCTION 142e9fb20 FUN_142e9fb20 body=47 status=ok
// SIG undefined FUN_142e9fb20(void)

longlong FUN_142e9fb20(void)

{
  if (DAT_146b3d808 == 0) {
    FUN_141786a30(&DAT_146b3d808,&PTR_FUN_14673b9e0);
  }
  return DAT_146b3d808;
}



// FUNCTION 142e9fb50 FUN_142e9fb50 body=47 status=ok
// SIG undefined FUN_142e9fb50(void)

longlong FUN_142e9fb50(void)

{
  if (DAT_146b3d810 == 0) {
    FUN_141786a30(&DAT_146b3d810,&PTR_FUN_14673bae0);
  }
  return DAT_146b3d810;
}



// FUNCTION 142e9fb80 FUN_142e9fb80 body=47 status=ok
// SIG undefined FUN_142e9fb80(void)

longlong FUN_142e9fb80(void)

{
  if (DAT_146b3d818 == 0) {
    FUN_141786a30(&DAT_146b3d818,&PTR_FUN_14673bb60);
  }
  return DAT_146b3d818;
}



// FUNCTION 142e9fbb0 FUN_142e9fbb0 body=47 status=ok
// SIG undefined FUN_142e9fbb0(void)

longlong FUN_142e9fbb0(void)

{
  if (DAT_146b3d820 == 0) {
    FUN_141786a30(&DAT_146b3d820,&PTR_FUN_14673bd20);
  }
  return DAT_146b3d820;
}



// FUNCTION 142e9fbe0 FUN_142e9fbe0 body=47 status=ok
// SIG undefined FUN_142e9fbe0(void)

longlong FUN_142e9fbe0(void)

{
  if (DAT_146b3d828 == 0) {
    FUN_141786a30(&DAT_146b3d828,&PTR_FUN_14673bea0);
  }
  return DAT_146b3d828;
}



// FUNCTION 142e9fc10 FUN_142e9fc10 body=47 status=ok
// SIG undefined FUN_142e9fc10(void)

longlong FUN_142e9fc10(void)

{
  if (DAT_146b3d830 == 0) {
    FUN_141786a30(&DAT_146b3d830,&PTR_FUN_14673bfe0);
  }
  return DAT_146b3d830;
}



// FUNCTION 142e9fc40 FUN_142e9fc40 body=47 status=ok
// SIG undefined FUN_142e9fc40(void)

longlong FUN_142e9fc40(void)

{
  if (DAT_146b3d838 == 0) {
    FUN_141786a30(&DAT_146b3d838,&PTR_FUN_14673c190);
  }
  return DAT_146b3d838;
}



// FUNCTION 142e9fc70 FUN_142e9fc70 body=47 status=ok
// SIG undefined FUN_142e9fc70(void)

longlong FUN_142e9fc70(void)

{
  if (DAT_146b3d840 == 0) {
    FUN_141786a30(&DAT_146b3d840,&PTR_FUN_14673c380);
  }
  return DAT_146b3d840;
}



// FUNCTION 142e9fca0 FUN_142e9fca0 body=47 status=ok
// SIG undefined FUN_142e9fca0(void)

longlong FUN_142e9fca0(void)

{
  if (DAT_146b3d848 == 0) {
    FUN_141786a30(&DAT_146b3d848,&PTR_FUN_14673c530);
  }
  return DAT_146b3d848;
}



// FUNCTION 142e9fcd0 FUN_142e9fcd0 body=47 status=ok
// SIG undefined FUN_142e9fcd0(void)

longlong FUN_142e9fcd0(void)

{
  if (DAT_146b3d850 == 0) {
    FUN_141786a30(&DAT_146b3d850,&PTR_FUN_14673c6b0);
  }
  return DAT_146b3d850;
}



// FUNCTION 142e9fd00 FUN_142e9fd00 body=53 status=ok
// SIG undefined FUN_142e9fd00(void)

void FUN_142e9fd00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14597f6c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e9fd40 FUN_142e9fd40 body=53 status=ok
// SIG undefined FUN_142e9fd40(void)

void FUN_142e9fd40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14597f7d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e9fda0 FUN_142e9fda0 body=104 status=ok
// SIG undefined FUN_142e9fda0(void)

void FUN_142e9fda0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_14217f430(lVar1);
      lVar1 = lVar1 + 0x28;
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



// FUNCTION 142e9fe10 FUN_142e9fe10 body=115 status=ok
// SIG undefined FUN_142e9fe10(void)

undefined8 * FUN_142e9fe10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 142e9fe90 FUN_142e9fe90 body=203 status=ok
// SIG undefined FUN_142e9fe90(void)

longlong * FUN_142e9fe90(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    iVar4 = (int)param_1[1];
    if (iVar4 != 0) {
      lVar3 = *param_1 + 8;
      do {
        FUN_14217f430(lVar3);
        lVar3 = lVar3 + 0x28;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (int)param_2[1];
    puVar1 = (undefined8 *)*param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      puVar2 = (undefined8 *)*param_1;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar1;
        FUN_14217e5e0(puVar2 + 1,puVar1 + 1);
        puVar2 = puVar2 + 5;
        puVar1 = puVar1 + 5;
      }
    }
  }
  FUN_142e9fe10(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 142e9ffa0 FUN_142e9ffa0 body=256 status=ok
// SIG undefined FUN_142e9ffa0(void)

undefined8 FUN_142e9ffa0(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar4 = (int)param_2[1];
      if (iVar4 != 0) {
        lVar3 = *param_2 + 8;
        do {
          FUN_14217f430(lVar3);
          lVar3 = lVar3 + 0x28;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = (int)param_3[1];
      puVar1 = (undefined8 *)*param_3;
      *(int *)(param_2 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
        puVar2 = (undefined8 *)*param_2;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar2 = *puVar1;
          FUN_14217e5e0(puVar2 + 1,puVar1 + 1);
          puVar2 = puVar2 + 5;
          puVar1 = puVar1 + 5;
        }
      }
    }
    FUN_142e9fe10(param_2 + 2,param_3 + 2);
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 142ea00b0 FUN_142ea00b0 body=85 status=ok
// SIG undefined FUN_142ea00b0(void)

void FUN_142ea00b0(void)

{
  if (DAT_146b3d7b8 == 0) {
    if (DAT_146b3d7c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b3d7c0,&PTR_s__Script_GbxPerfAnalytics_14597f640);
    }
    DAT_146b3d7b8 = GetStaticEnum(FUN_142ea0260,DAT_146b3d7c0,L"ESetTelemetryValue");
  }
  return;
}



// FUNCTION 142ea0110 FUN_142ea0110 body=6 status=ok
// SIG undefined FUN_142ea0110(void)

undefined8 FUN_142ea0110(void)

{
  return 0xbc733b30;
}



// FUNCTION 142ea0120 FUN_142ea0120 body=6 status=ok
// SIG undefined FUN_142ea0120(void)

undefined8 FUN_142ea0120(void)

{
  return 0x3d248c94;
}



// FUNCTION 142ea0130 StaticRegisterNativesUBlueprintSetLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintSetLibrary(void)

void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DefineTelemetryEventRef_14597f8f0,0xc);
  return;
}



// FUNCTION 142ea0160 FUN_142ea0160 body=113 status=ok
// SIG undefined FUN_142ea0160(void)

void FUN_142ea0160(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b3d7e8 == 0) {
    if (DAT_146b3d7c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b3d7c0,&PTR_s__Script_GbxPerfAnalytics_14597f640);
    }
    lVar1 = DAT_146b3d7c0;
    uVar2 = FUN_142ea0110();
    DAT_146b3d7e8 = GetStaticStruct(FUN_142ea0290,lVar1,L"K2EventRef",0x18,uVar2);
  }
  return;
}



// FUNCTION 142ea01e0 FUN_142ea01e0 body=113 status=ok
// SIG undefined FUN_142ea01e0(void)

void FUN_142ea01e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b3d7d8 == 0) {
    if (DAT_146b3d7c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b3d7c0,&PTR_s__Script_GbxPerfAnalytics_14597f640);
    }
    lVar1 = DAT_146b3d7c0;
    uVar2 = FUN_142ea0120();
    DAT_146b3d7d8 = GetStaticStruct(FUN_142ea02c0,lVar1,L"K2TelemetryValues",0x28,uVar2);
  }
  return;
}



// FUNCTION 142ea0260 FUN_142ea0260 body=47 status=ok
// SIG undefined FUN_142ea0260(void)

longlong FUN_142ea0260(void)

{
  if (DAT_146b3d7d0 == 0) {
    FUN_1417866a0(&DAT_146b3d7d0,&PTR_FUN_14673b320);
  }
  return DAT_146b3d7d0;
}



// FUNCTION 142ea0290 FUN_142ea0290 body=47 status=ok
// SIG undefined FUN_142ea0290(void)

longlong FUN_142ea0290(void)

{
  if (DAT_146b3d7f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b3d7f0,&PTR_FUN_14673b430);
  }
  return DAT_146b3d7f0;
}



// FUNCTION 142ea02c0 FUN_142ea02c0 body=47 status=ok
// SIG undefined FUN_142ea02c0(void)

longlong FUN_142ea02c0(void)

{
  if (DAT_146b3d7e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b3d7e0,&PTR_FUN_14673b3b0);
  }
  return DAT_146b3d7e0;
}



// FUNCTION 142ea02f0 FUN_142ea02f0 body=304 status=ok
// SIG undefined FUN_142ea02f0(void)

void FUN_142ea02f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_48 [8];
  
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_142e94d60(local_48 + 4,local_48 + 2,local_48);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  param_3[2] = plVar1[2];
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea0420 FUN_142ea0420 body=639 status=ok
// SIG undefined FUN_142ea0420(void)

void FUN_142ea0420(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FUN_14217c140(&local_48);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_98[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_58;
  bVar3 = local_res10[0] != 0;
  local_68 = (undefined4)local_88;
  uStack_64 = local_88._4_4_;
  uStack_60 = (undefined4)uStack_80;
  uStack_5c = uStack_80._4_4_;
  local_40 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_50;
  local_38 = (int)local_50;
  if ((int)local_50 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar2 * 2);
  }
  local_30 = local_48;
  uVar1 = FUN_142e94e70(&local_40,local_78,local_98[0],local_res20,local_res18,&local_68,bVar3);
  *param_3 = uVar1;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea06a0 FUN_142ea06a0 body=517 status=ok
// SIG undefined FUN_142ea06a0(void)

void FUN_142ea06a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res18 = 0;
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_78 = 0;
  uStack_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e95140(local_68,plVar3,local_res18,&local_58,local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_48 + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea08b0 FUN_142ea08b0 body=172 status=ok
// SIG undefined FUN_142ea08b0(void)

void FUN_142ea08b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14217c140(local_18);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e97b80(plVar2);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea0960 FUN_142ea0960 body=221 status=ok
// SIG undefined FUN_142ea0960(void)

void FUN_142ea0960(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_38 [6];
  
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_142e98bb0(local_38 + 2,local_38);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  param_3[2] = plVar1[2];
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea0a40 FUN_142ea0a40 body=441 status=ok
// SIG undefined FUN_142ea0a40(void)

void FUN_142ea0a40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res10 [16];
  int local_res20 [2];
  longlong local_68 [3];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_68[2] = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14217c140(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  plVar3 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9ce80(plVar3,local_68,bVar5,local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if ((int)local_50 != 0) {
    lVar2 = local_68[2] + 8;
    iVar4 = (int)local_50;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea0c00 FUN_142ea0c00 body=439 status=ok
// SIG undefined FUN_142ea0c00(void)

void FUN_142ea0c00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_58[2] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar3 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9cea0(plVar3,local_58,local_res20[0],local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_58[2] + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea0dc0 FUN_142ea0dc0 body=443 status=ok
// SIG undefined FUN_142ea0dc0(void)

void FUN_142ea0dc0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_58[2] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar3 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9cec0(plVar3,local_58,local_res20[0],local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_58[2] + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea0f80 FUN_142ea0f80 body=437 status=ok
// SIG undefined FUN_142ea0f80(void)

void FUN_142ea0f80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_58[2] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar3 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9cef0(plVar3,local_58,local_res20[0],local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_58[2] + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea1140 FUN_142ea1140 body=463 status=ok
// SIG undefined FUN_142ea1140(void)

void FUN_142ea1140(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  undefined1 local_68 [16];
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_58[2] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar5 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res10[0] = 0;
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9d090(plVar5,local_58,puVar3,local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_58[2] + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea1310 FUN_142ea1310 body=456 status=ok
// SIG undefined FUN_142ea1310(void)

void FUN_142ea1310(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_res10 [8];
  longlong local_68 [5];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_68[4] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  plVar3 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9d0b0(plVar3,local_68 + 2,local_68,local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_68[4] + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea14e0 FUN_142ea14e0 body=463 status=ok
// SIG undefined FUN_142ea14e0(void)

void FUN_142ea14e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  undefined1 local_68 [16];
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_58[2] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14217c140(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar5 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res10[0] = 0;
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142e9d220(plVar5,local_58,puVar3,local_res10[0]);
  FUN_142e9fe90(param_3,uVar1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_40 != 0) {
    lVar2 = local_58[2] + 8;
    iVar4 = (int)local_40;
    do {
      FUN_14217f430(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea16b0 CreateWebSocket body=39 status=ok
// SIG undefined CreateWebSocket(void)

undefined8 FWebSocketsModule::CreateWebSocket(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return param_2;
}



// FUNCTION 142ea16e0 CreateWebSocket body=182 status=ok
// SIG undefined CreateWebSocket(void)

undefined8
FWebSocketsModule::CreateWebSocket
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  FString::FString(local_18,param_4);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),param_2,param_3,&local_18,param_5);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return param_2;
}



// FUNCTION 142ea17a0 StartupModule body=721 status=ok
// SIG undefined StartupModule(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWebSocketsModule::StartupModule(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[2] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)0x0;
  local_88 = 0;
  local_80 = 3;
  DAT_146b3d868 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  lVar7 = 6;
  FGenericPlatformString::Memcpy(local_88,&DAT_14597f9ec,6);
  local_78 = 0;
  local_70 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,&DAT_14597f9f8,8);
  local_68 = 0;
  local_60 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"v10.stomp",0x14);
  local_58 = 0;
  local_50 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"v11.stomp",0x14);
  local_48 = 0;
  local_40 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"v12.stomp",0x14);
  local_38[0] = 0;
  local_38[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"xmpp",10);
  puVar2 = (undefined8 *)operator_new(0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_145982ad8;
    puVar2[4] = 0;
    puVar2[1] = &PTR_IsPromotedBuild_145982af8;
    puVar2[2] = &PTR_LAB_145982b28;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar3 = (undefined8 *)operator_new(0x10);
    puVar4 = puVar5;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    puVar2[0xd] = puVar4;
    puVar2[0xc] = puVar4;
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar5 = puVar4;
    }
    puVar2[0xf] = puVar5;
    puVar2[0xe] = puVar5;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar2[0x15] = 0x3fa1111111111111;
    local_b8 = &DAT_1468e2360;
    FConfigCacheIni::GetDouble
              (DAT_1468b6148,L"WebSockets.LibWebSockets",L"ThreadTargetFrameTimeInSeconds");
    local_b8 = &DAT_1468e2360;
    puVar2[0x16] = 0;
    FConfigCacheIni::GetDouble
              (DAT_1468b6148,L"WebSockets.LibWebSockets",L"ThreadMinimumSleepTimeInSeconds");
    puVar5 = puVar2;
  }
  local_a8 = &local_88;
  *(undefined8 **)(param_1 + 8) = puVar5;
  uStack_a0 = 6;
  uStack_90 = 6;
  uStack_8c = uStack_9c;
  local_98 = local_a8;
  (**(code **)*puVar5)(puVar5,&local_98);
  plVar6 = local_38 + 2;
  do {
    plVar1 = plVar6 + -2;
    plVar6 = plVar6 + -2;
    lVar7 = lVar7 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar7 != 0);
  return;
}



// FUNCTION 142ea1a80 ShutdownModule body=58 status=ok
// SIG undefined ShutdownModule(void)

void FWebSocketsModule::ShutdownModule(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
    DAT_146b3d868 = 0;
    return;
  }
  DAT_146b3d868 = 0;
  return;
}



// FUNCTION 142ea1ac0 FLwsReceiveBufferBinary body=105 status=ok
// SIG undefined FLwsReceiveBufferBinary(void)

longlong *
FLwsReceiveBufferBinary::FLwsReceiveBufferBinary
          (longlong *param_1,void *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 + *param_1),param_2,(longlong)param_3);
  return param_1;
}



// FUNCTION 142ea1b30 FLwsWebSocket body=613 status=ok
// SIG undefined FLwsWebSocket(void)

undefined8 *
FLwsWebSocket::FLwsWebSocket
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145982a80;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
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
  FString::FString(param_1 + 0x20,param_2);
  param_1[0x22] = 0;
  iVar5 = *(int *)(param_3 + 1);
  param_3 = (undefined8 *)*param_3;
  *(int *)(param_1 + 0x23) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x22,iVar5,0);
    puVar3 = (undefined8 *)param_1[0x22];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      param_3 = param_3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FString::FString(param_1 + 0x24,param_4);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar3 = puVar2;
  }
  param_1[0x2b] = puVar3;
  param_1[0x2a] = puVar3;
  puVar2 = (undefined8 *)operator_new(0x10);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar3 = puVar2;
  }
  param_1[0x2d] = puVar3;
  param_1[0x2c] = puVar3;
  puVar3 = (undefined8 *)operator_new(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar4 = puVar3;
  }
  param_1[0x2f] = puVar4;
  param_1[0x2e] = puVar4;
  DAT_146b3d870 = DAT_146b3d870 + 1;
  *(int *)(param_1 + 0x30) = DAT_146b3d870;
  return param_1;
}



// FUNCTION 142ea1da0 ~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1> body=121 status=ok
// SIG undefined ~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>(void)

void TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>::
     ~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>
               (longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 8);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar2,0x18);
      }
      FMemory::operator_delete(lVar1,0x10);
    }
    lVar1 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 142ea1e20 ~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1> body=121 status=ok
// SIG undefined ~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>(void)

void TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>::
     ~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>
               (longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 8);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar2,0x10);
      }
      FMemory::operator_delete(lVar1,0x10);
    }
    lVar1 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 142ea1ea0 FUN_142ea1ea0 body=369 status=ok
// SIG undefined FUN_142ea1ea0(void)

void FUN_142ea1ea0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__145982a80;
  FLwsWebSocket::ClearData();
  lVar2 = param_1[0x2f];
  while (lVar2 != 0) {
    puVar3 = (undefined8 *)param_1[0x2f];
    param_1[0x2f] = *puVar3;
    FMemory::operator_delete(puVar3,0x10);
    lVar2 = param_1[0x2f];
  }
  TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>::
  ~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>
            (param_1 + 0x2c);
  TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>::
  ~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>
            (param_1 + 0x2a);
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x23);
  plVar5 = (longlong *)param_1[0x22];
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = (longlong *)param_1[0x22];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *param_1 = &PTR_FUN_144eec1b8;
  return;
}



// FUNCTION 142ea2030 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLightVPLsCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142ea1ea0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 142ea2070 `scalar_deleting_destructor' body=216 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FLwsWebSocketsManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  while (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *puVar2;
    FMemory::operator_delete(puVar2,0x10);
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  while (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *puVar2;
    FMemory::operator_delete(puVar2,0x10);
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f47c98;
  *(undefined ***)(param_1 + 8) = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142ea2150 ClearData body=454 status=ok
// SIG undefined ClearData(void)

void FLwsWebSocket::ClearData(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res8;
  longlong local_res10;
  
  while (lVar1 = **(longlong **)(param_1 + 0x158), lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    *(longlong *)(param_1 + 0x158) = lVar1;
    plVar5 = (longlong *)(lVar1 + 8);
    if (plVar5 != &local_res8) {
      plVar3 = (longlong *)*plVar5;
      *plVar5 = 0;
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar3,0x18);
      }
    }
    if (lVar2 != 0) {
      plVar5 = *(longlong **)(lVar2 + 8);
      if (plVar5 != (longlong *)0x0) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar5,0x18);
      }
      FMemory::operator_delete(lVar2,0x10);
    }
  }
  while (lVar1 = **(longlong **)(param_1 + 0x168), lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    *(longlong *)(param_1 + 0x168) = lVar1;
    plVar5 = (longlong *)(lVar1 + 8);
    if (plVar5 != &local_res10) {
      plVar3 = (longlong *)*plVar5;
      *plVar5 = 0;
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar3,0x10);
      }
    }
    if (lVar2 != 0) {
      plVar5 = *(longlong **)(lVar2 + 8);
      if (plVar5 != (longlong *)0x0) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar5,0x10);
      }
      FMemory::operator_delete(lVar2,0x10);
    }
  }
  while (lVar1 = **(longlong **)(param_1 + 0x178), lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    *(longlong *)(param_1 + 0x178) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    FMemory::operator_delete(uVar4,0x10);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar2,0x20);
    }
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x138,0);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 142ea2320 Close body=259 status=ok
// SIG undefined Close(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FLwsWebSocket::Close(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  BOOL BVar2;
  char *pcVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  char *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_c8,puVar4);
    pcVar3 = (char *)FMemory::Malloc((longlong)(local_38 + 1),0);
    pcVar5 = pcVar3;
    do {
      cVar1 = *local_40;
      local_40 = local_40 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar3[local_38] = '\0';
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(char **)(param_1 + 0x70) = pcVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ea2430 FUN_142ea2430 body=535 status=ok
// SIG undefined FUN_142ea2430(void)

void FUN_142ea2430(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((char)param_1[0xc] == '\0') {
    lVar6 = FHttpModule::Get();
    cVar4 = FHttpManager::IsDomainAllowed(*(undefined8 *)(lVar6 + 0x10),param_1 + 0x20);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 8) = 6;
      local_28[0] = 0;
      local_28[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"Invalid Domain",0x1e);
      uVar7 = (**(code **)(*param_1 + 0x38))(param_1);
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(uVar7,local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 0xc) = 1;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
      plVar10 = (longlong *)*plVar8;
      plVar8 = plVar10 + (longlong)(int)plVar8[1] * 2;
      for (; plVar10 != plVar8; plVar10 = plVar10 + 2) {
        if (((int)plVar10[1] != 0) && (*plVar10 != 0)) {
          uVar5 = 1;
          goto LAB_142ea251b;
        }
      }
      uVar5 = 0;
LAB_142ea251b:
      *(undefined1 *)(param_1 + 0x26) = uVar5;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
      plVar10 = (longlong *)*plVar8;
      plVar8 = plVar10 + (longlong)(int)plVar8[1] * 2;
      for (; plVar10 != plVar8; plVar10 = plVar10 + 2) {
        if (((int)plVar10[1] != 0) && (*plVar10 != 0)) {
          uVar5 = 1;
          goto LAB_142ea255b;
        }
      }
      uVar5 = 0;
LAB_142ea255b:
      *(undefined1 *)((longlong)param_1 + 0x131) = uVar5;
      FLwsWebSocket::ClearData(param_1);
      lVar6 = *(longlong *)(DAT_146b3d868 + 8);
      puVar9 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_18);
      iVar2 = *(int *)(lVar6 + 0x40);
      *(int *)(lVar6 + 0x40) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x44) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x38,iVar2);
      }
      puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 0x38));
      *puVar11 = *puVar9;
      lVar3 = puVar9[1];
      puVar11[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_10 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
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
      puVar9 = (undefined8 *)operator_new();
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = param_1;
        *puVar9 = 0;
        puVar11 = *(undefined8 **)(lVar6 + 0x60);
        *(undefined8 **)(lVar6 + 0x60) = puVar9;
        *puVar11 = puVar9;
      }
    }
  }
  return;
}



// FUNCTION 142ea2650 FUN_142ea2650 body=1263 status=ok
// SIG undefined FUN_142ea2650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ea2650(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong *plVar10;
  undefined1 auStack_508 [32];
  char **local_4e8;
  longlong local_4d8;
  undefined8 local_4d0;
  undefined1 *local_4c8;
  char *local_4c0;
  undefined4 local_4b8 [2];
  char *local_4b0;
  undefined8 local_4a8 [2];
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined1 *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  longlong local_458;
  undefined1 local_450 [120];
  undefined1 local_3d8 [256];
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  int local_2c8;
  undefined1 local_2b8 [128];
  longlong local_238;
  undefined8 local_230;
  undefined1 local_218 [128];
  longlong local_198;
  undefined8 local_190;
  undefined1 local_178;
  char local_177 [297];
  undefined2 local_4e;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  *(undefined1 *)(param_1 + 0x40) = 2;
  LeaveCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x108) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x100);
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_2b8,puVar5);
  local_4e8 = &local_4b0;
  iVar3 = FUN_143dc6720(local_230,&local_4c0,local_4a8,local_4b8);
  if (iVar3 != 0) {
    local_4d0 = 8;
    local_4d8 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
    lVar6 = local_4d8;
    FGenericPlatformString::Memcpy(local_4d8,L"Bad URL",0x10);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    *(undefined1 *)(param_1 + 0x40) = 6;
    plVar10 = (longlong *)(param_1 + 0x48);
    if (plVar10 != &local_4d8) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      *plVar10 = lVar6;
      *(undefined4 *)(param_1 + 0x50) = (undefined4)local_4d0;
      *(undefined4 *)(param_1 + 0x54) = local_4d0._4_4_;
      lVar6 = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
    if (local_238 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  local_178 = 0x2f;
  strncpy(local_177,local_4b0,0x12a);
  local_4e = 0;
  iVar3 = _stricmp(local_4c0,"wss");
  uVar7 = 0;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  else {
    iVar3 = _stricmp(local_4c0,"wss+insecure");
    if (iVar3 == 0) {
      uVar7 = 2;
    }
    else {
      iVar3 = _stricmp(local_4c0,"ws");
      if (iVar3 != 0) {
        local_2d8 = (undefined1 *)0x0;
        if (local_4c0 == (char *)0x0) {
          local_2d0 = (undefined1 *)0x0;
          local_2c8 = 0;
        }
        else {
          uVar8 = 0xffffffffffffffff;
          do {
            uVar9 = uVar8;
            uVar8 = uVar9 + 1;
          } while (local_4c0[uVar8] != '\0');
          local_4c8 = (undefined1 *)((ulonglong)local_4c8 & 0xffffffff00000000);
          FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_4c8,0x7fffffff,local_4c0,uVar8 & 0xffffffff);
          local_2c8 = (int)local_4c8;
          uVar1 = (int)local_4c8 + 1;
          if (uVar1 < 0x81) {
            if (local_2d8 != (undefined1 *)0x0) {
              lVar6 = 0;
LAB_142ea2a0c:
              local_2d8 = (undefined1 *)FMemory::Realloc(local_2d8,lVar6,0);
            }
          }
          else if ((local_2d8 != (undefined1 *)0x0) || (uVar1 != 0)) {
            lVar6 = (longlong)(int)uVar1 * 2;
            goto LAB_142ea2a0c;
          }
          local_4c8 = local_3d8;
          if (local_2d8 != (undefined1 *)0x0) {
            local_4c8 = local_2d8;
          }
          local_2d0 = local_4c8;
          FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_4c8,uVar1,local_4c0,(int)uVar9 + 2);
        }
        FString::PrintfImpl(&local_4d8,
                            L"Bad protocol \'%s\'. Use either \'ws\', \'wss\', or \'wss+insecure\'",
                            local_2d0);
        if (local_2d8 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        BVar2 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar2 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        *(undefined1 *)(param_1 + 0x40) = 6;
        plVar10 = (longlong *)(param_1 + 0x48);
        if (plVar10 != &local_4d8) {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          *plVar10 = local_4d8;
          *(undefined4 *)(param_1 + 0x50) = (undefined4)local_4d0;
          *(undefined4 *)(param_1 + 0x54) = local_4d0._4_4_;
          local_4d0 = 0;
          local_4d8 = 0;
        }
        LeaveCriticalSection(lpCriticalSection);
        lVar6 = local_4d8;
        goto joined_r0x000142ea2af0;
      }
    }
  }
  FString::Join<TArray<FString,FDefaultAllocator>_>(&local_4d8,param_1 + 0x110,&DAT_14597fab4);
  lVar6 = local_4d8;
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_218);
  local_45c = 0;
  _guard_xfg_dispatch_icall_nop(local_450,0,0x70);
  local_488 = local_4b8[0];
  local_480 = &local_178;
  local_490 = local_4a8[0];
  local_478 = local_4a8[0];
  local_470 = local_4a8[0];
  local_468 = local_190;
  local_460 = 0xffffffff;
  local_498 = param_2;
  local_484 = uVar7;
  local_458 = param_1;
  lVar4 = FUN_143dcb6d0(&local_498);
  if (lVar4 == 0) {
    local_4d8 = 0;
    local_4d0 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
    lVar4 = local_4d8;
    FGenericPlatformString::Memcpy(local_4d8,L"Could not initialize connection",0x40);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    *(undefined1 *)(param_1 + 0x40) = 6;
    plVar10 = (longlong *)(param_1 + 0x48);
    if (plVar10 != &local_4d8) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      *plVar10 = lVar4;
      *(undefined4 *)(param_1 + 0x50) = (undefined4)local_4d0;
      *(undefined4 *)(param_1 + 0x54) = local_4d0._4_4_;
      lVar4 = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
joined_r0x000142ea2af0:
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  if (local_238 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea2b40 FUN_142ea2b40 body=941 status=ok
// SIG undefined FUN_142ea2b40(void)

longlong *
FUN_142ea2b40(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Dst;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  void *_Src;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  uint *puVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  longlong local_e8;
  int local_e0;
  int iStack_dc;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  int local_90;
  int local_8c;
  void *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  
  iVar16 = 0;
  uVar4 = *(uint *)(param_5 + 5);
  puVar1 = (uint *)(param_5 + 2);
  local_e8 = 0;
  local_e0 = 0;
  iStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 1;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar4 != 0) {
    puVar13 = (uint *)param_5[4];
    if ((uint *)param_5[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar8 = local_d8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar8;
      if (bVar6) goto LAB_142ea2c30;
      uVar9 = puVar13[lVar10 + 1];
    }
    uStack_d4 = -uVar9 & uVar9;
    local_90 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> local_90 == 0; local_90 = local_90 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_90;
    }
    uStack_c4 = (iStack_c0 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_c4) {
LAB_142ea2c30:
      uStack_c4 = uVar4;
    }
  }
  local_c8 = 0xffffffff;
  uStack_a4 = *(uint *)(param_5 + 5);
  uStack_b0 = CONCAT44(uStack_d4,local_d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_c4;
  uStack_98 = CONCAT44(uStack_bc,iStack_c0);
  iVar11 = (int)uStack_a4 >> 5;
  local_b8 = (int)param_5;
  uStack_b4 = (undefined4)((ulonglong)param_5 >> 0x20);
  uStack_a8 = -1 << ((byte)uStack_a4 & 0x1f);
  uStack_a0 = uStack_a4 & 0xffffffe0;
  uStack_9c = uStack_c4;
  local_78 = local_b8;
  uStack_74 = uStack_b4;
  iStack_70 = local_d8;
  uStack_6c = uStack_d4;
  puStack_d0 = puVar1;
  local_68 = puVar1;
  local_58 = uStack_98;
  iVar8 = iVar16;
  local_b8 = iVar11;
  uVar9 = uStack_a4;
  if (uStack_a4 != uVar4) {
    puVar13 = (uint *)param_5[4];
    if ((uint *)param_5[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar9 = puVar13[iVar11] & uStack_a8;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_b8;
      uStack_a0 = uStack_a0 + 0x20;
      iVar11 = local_b8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar11;
      if (bVar6) goto LAB_142ea2d0c;
      uVar9 = puVar13[lVar10 + 1];
      uStack_a8 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    local_8c = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> local_8c == 0; local_8c = local_8c + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_8c;
    }
    uStack_a4 = (uStack_a0 - iVar11) + 0x1f;
    uVar9 = uStack_a4;
    if ((int)uVar4 < (int)uStack_a4) {
LAB_142ea2d0c:
      uStack_a4 = uVar4;
      uVar9 = uVar4;
    }
  }
  while( true ) {
    lVar10 = (longlong)(int)uStack_5c;
    if (((uStack_5c == uVar9) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_5)) break;
    lVar5 = *(longlong *)CONCAT44(uStack_74,local_78);
    if (*(int *)(lVar5 + 0x18 + lVar10 * 0x28) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = *(undefined2 **)(lVar5 + 0x10 + lVar10 * 0x28);
    }
    if (*(int *)(lVar5 + 8 + lVar10 * 0x28) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = *(undefined2 **)(lVar5 + lVar10 * 0x28);
    }
    FString::PrintfImpl(&local_88,L"%s: %s\r\n",puVar12,puVar14);
    _Src = local_88;
    if (local_80 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = local_80 + -1;
    }
    iVar15 = iVar8;
    if (iVar11 != 0) {
      local_e0 = iVar8 + (uint)(iVar8 == 0) + iVar11;
      if (iVar16 < local_e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar8);
        iVar16 = iStack_dc;
      }
      iVar15 = local_e0;
      _Dst = (void *)(local_e8 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)_Dst) = 0;
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    iVar8 = iVar15;
  }
  plVar7 = (longlong *)operator_new(0x1a0);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_145982b38;
    FLwsWebSocket::FLwsWebSocket(plVar7 + 2,param_3,param_4,&local_e8);
  }
  plVar2 = plVar7 + 2;
  local_50 = plVar2;
  local_48 = plVar7;
  FUN_14044f790(&local_50,plVar2);
  *param_2 = (longlong)plVar2;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar7 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar16 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ea2ef0 FUN_142ea2ef0 body=9 status=ok
// SIG undefined FUN_142ea2ef0(void)

void FUN_142ea2ef0(longlong param_1)

{
  FUN_142ea1ea0(param_1 + 0x10);
  return;
}



// FUNCTION 142ea2f00 Exit body=171 status=ok
// SIG undefined Exit(void)

void FLwsWebSocketsManager::Exit(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  puVar1 = puVar5 + *(int *)(param_1 + 0x48);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar2 = *puVar5;
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = uVar2;
      puVar3 = *(undefined8 **)(param_1 + 0x68);
      *(undefined8 **)(param_1 + 0x68) = puVar4;
      *puVar3 = puVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x40),0);
    return;
  }
  return;
}



// FUNCTION 142ea2fb0 FUN_142ea2fb0 body=373 status=ok
// SIG undefined FUN_142ea2fb0(void)

void FUN_142ea2fb0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_38;
  longlong local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  local_38 = 0;
  local_30 = 0;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  lVar12 = param_1[8];
  plVar9 = param_1 + 9;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (&local_38 != plVar9) {
    if (local_38 != 0) {
      FMemory::Free();
    }
    local_38 = *plVar9;
    *plVar9 = 0;
    local_30 = param_1[10];
    param_1[10] = 0;
  }
  local_28 = (undefined2)param_1[0xb];
  local_26 = *(undefined1 *)((longlong)param_1 + 0x5a);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar4 = local_26;
  uVar3 = local_28;
  if ((char)lVar12 == '\x06') {
    uVar8 = (**(code **)(*param_1 + 0x38))();
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(uVar8,&local_38);
  }
  else {
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1);
    bVar2 = false;
    *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
    iVar10 = *(int *)((longlong)plVar9 + 0x14);
    iVar7 = (int)plVar9[1] + -1;
    lVar12 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar11 = lVar12 << 4;
      do {
        if ((*(int *)(lVar11 + 8 + *plVar9) == 0) ||
           (plVar1 = *(longlong **)(lVar11 + *plVar9), plVar1 == (longlong *)0x0)) {
LAB_142ea30ce:
          bVar2 = true;
        }
        else {
          cVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar3,&local_38,uVar4);
          if (cVar5 == '\0') goto LAB_142ea30ce;
        }
        lVar11 = lVar11 + -0x10;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
      iVar10 = *(int *)((longlong)plVar9 + 0x14);
    }
    *(int *)((longlong)plVar9 + 0x14) = iVar10 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,0);
    }
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea3130 FUN_142ea3130 body=1028 status=ok
// SIG undefined FUN_142ea3130(void)

void FUN_142ea3130(longlong *param_1)

{
  longlong **pplVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  cVar5 = (char)param_1[8];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((cVar5 != (char)param_1[0xc]) && (*(char *)(param_1 + 0xc) = cVar5, cVar5 == '\x03')) {
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
    bVar2 = false;
    *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
    iVar9 = *(int *)((longlong)plVar8 + 0x14);
    iVar7 = (int)plVar8[1] + -1;
    lVar13 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar10 = lVar13 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar10 + 8 + *plVar8) == 0) ||
            (plVar11 = *(longlong **)(lVar10 + *plVar8), plVar11 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar11 + 0x40))(), cVar5 == '\0')) {
          bVar2 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
      iVar9 = *(int *)((longlong)plVar8 + 0x14);
    }
    *(int *)((longlong)plVar8 + 0x14) = iVar9 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
    }
  }
  if ((int)param_1[0xd] == 0) {
    local_res10 = (longlong *)0x0;
    while (plVar8 = local_res10, lVar13 = *(longlong *)param_1[0x2d], lVar13 != 0) {
      pplVar1 = (longlong **)(lVar13 + 8);
      plVar11 = local_res10;
      if (&local_res10 != pplVar1) {
        plVar11 = *pplVar1;
        *pplVar1 = (longlong *)0x0;
        if (local_res10 != (longlong *)0x0) {
          lVar10 = *local_res10;
          local_res10 = plVar11;
          if (lVar10 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar8);
          plVar11 = local_res10;
        }
      }
      local_res10 = plVar11;
      lVar10 = param_1[0x2d];
      param_1[0x2d] = lVar13;
      if (pplVar1 != &local_res18) {
        plVar8 = *pplVar1;
        *pplVar1 = (longlong *)0x0;
        if (plVar8 != (longlong *)0x0) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar8);
        }
      }
      if (lVar10 != 0) {
        plVar8 = *(longlong **)(lVar10 + 8);
        if (plVar8 != (longlong *)0x0) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar8,0x10);
        }
        FMemory::operator_delete(lVar10);
      }
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
      bVar2 = false;
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      iVar9 = *(int *)((longlong)plVar8 + 0x14);
      iVar7 = (int)plVar8[1] + -1;
      lVar13 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar10 = lVar13 << 4;
        bVar2 = false;
        do {
          if (((*(int *)(lVar10 + 8 + *plVar8) == 0) ||
              (plVar11 = *(longlong **)(lVar10 + *plVar8), plVar11 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar11 + 0x40))(), cVar5 == '\0')) {
            bVar2 = true;
          }
          lVar10 = lVar10 + -0x10;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
        iVar9 = *(int *)((longlong)plVar8 + 0x14);
      }
      *(int *)((longlong)plVar8 + 0x14) = iVar9 + -1;
      if (bVar2) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
      }
    }
    local_res8 = (longlong *)0x0;
    while (plVar8 = local_res8, lVar13 = *(longlong *)param_1[0x2b], lVar13 != 0) {
      pplVar1 = (longlong **)(lVar13 + 8);
      plVar11 = local_res8;
      plVar4 = local_res8;
      if (&local_res8 != pplVar1) {
        plVar11 = *pplVar1;
        *pplVar1 = (longlong *)0x0;
        plVar4 = plVar11;
        if (local_res8 != (longlong *)0x0) {
          lVar10 = *local_res8;
          local_res8 = plVar11;
          if (lVar10 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar8,0x18);
          plVar4 = local_res8;
        }
      }
      local_res8 = plVar4;
      lVar10 = param_1[0x2b];
      param_1[0x2b] = lVar13;
      if (pplVar1 != &local_res20) {
        plVar8 = *pplVar1;
        *pplVar1 = (longlong *)0x0;
        if (plVar8 != (longlong *)0x0) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar8,0x18);
        }
      }
      if (lVar10 != 0) {
        plVar8 = *(longlong **)(lVar10 + 8);
        if (plVar8 != (longlong *)0x0) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar8,0x18);
        }
        FMemory::operator_delete(lVar10,0x10);
      }
      lVar10 = plVar11[1];
      lVar13 = *plVar11;
      lVar3 = plVar11[2];
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
      bVar2 = false;
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      iVar9 = *(int *)((longlong)plVar8 + 0x14);
      iVar7 = (int)plVar8[1] + -1;
      lVar14 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar12 = lVar14 << 4;
        bVar2 = false;
        do {
          if (((*(int *)(lVar12 + 8 + *plVar8) == 0) ||
              (plVar11 = *(longlong **)(lVar12 + *plVar8), plVar11 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar11 + 0x40))
                                (plVar11,lVar13,(longlong)(int)lVar10,(longlong)(int)lVar3),
             cVar5 == '\0')) {
            bVar2 = true;
          }
          lVar12 = lVar12 + -0x10;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
        iVar9 = *(int *)((longlong)plVar8 + 0x14);
      }
      *(int *)((longlong)plVar8 + 0x14) = iVar9 + -1;
      if (bVar2) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      if (*local_res8 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar8,0x18);
    }
    plVar8 = local_res10;
    if (local_res10 != (longlong *)0x0) {
      if (*local_res10 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar8,0x10);
    }
  }
  return;
}



// FUNCTION 142ea3540 FUN_142ea3540 body=406 status=ok
// SIG undefined FUN_142ea3540(void)

undefined8 FUN_142ea3540(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = puVar5 + (longlong)*(int *)(param_1 + 0x40) * 2;
  for (; puVar5 != puVar10; puVar5 = puVar5 + 2) {
    FUN_142ea3130(*puVar5);
  }
  plVar12 = (longlong *)0x0;
  do {
    lVar2 = **(longlong **)(param_1 + 0x78);
    if (lVar2 == 0) {
      return CONCAT71((int7)((ulonglong)*(longlong **)(param_1 + 0x78) >> 8),1);
    }
    lVar3 = *(longlong *)(lVar2 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(longlong *)(param_1 + 0x78) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    FMemory::operator_delete(uVar4,0x10);
    plVar8 = *(longlong **)(lVar3 + 0x10);
    plVar6 = plVar8;
    plVar7 = plVar12;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      iVar9 = (int)plVar8[1];
      bVar13 = iVar9 == 0;
      if (bVar13) {
        *(int *)(plVar8 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar12, !bVar13) {
        LOCK();
        bVar13 = iVar9 == (int)plVar8[1];
        if (bVar13) {
          *(int *)(plVar8 + 1) = iVar9 + 1;
        }
        UNLOCK();
        if (bVar13) {
          plVar6 = plVar8;
          plVar7 = (longlong *)0x0;
          if (plVar8 != (longlong *)0x0) {
            plVar7 = *(longlong **)(lVar3 + 8);
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar8 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plVar6 = plVar8;
            if ((int)lVar2 == 1) {
              (**(code **)*plVar8)(plVar8);
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
          break;
        }
        LOCK();
        iVar9 = (int)plVar8[1];
        bVar13 = iVar9 == 0;
        if (bVar13) {
          *(int *)(plVar8 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
      }
    }
    plVar8 = plVar12;
    plVar11 = plVar12;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        iVar9 = (int)plVar11;
        if (*(longlong **)((longlong)plVar8 + *(longlong *)(param_1 + 0x38)) == plVar7) {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (param_1 + 0x38,plVar11,1,1);
          iVar9 = iVar9 + -1;
          plVar8 = plVar8 + -2;
        }
        plVar8 = plVar8 + 2;
        plVar11 = (longlong *)(ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x40));
    }
    FUN_142ea2fb0(lVar3);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  } while( true );
}



// FUNCTION 142ea36e0 FUN_142ea36e0 body=8 status=ok
// SIG undefined FUN_142ea36e0(void)

undefined8 FUN_142ea36e0(void)

{
  return DAT_146b3d868;
}



// FUNCTION 142ea3710 FUN_142ea3710 body=1393 status=ok
// SIG undefined FUN_142ea3710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ea3710(code *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  code *pcVar15;
  ulonglong uVar16;
  undefined2 *puVar18;
  char *pcVar19;
  code *pcVar20;
  undefined1 auStack_3f8 [32];
  undefined8 *local_3d8;
  char *local_3c8;
  longlong *local_3c0;
  int local_3b8;
  undefined4 local_3b0 [2];
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  char *local_398;
  code *pcStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 *local_360;
  undefined4 local_358 [4];
  longlong local_348;
  undefined8 local_340;
  undefined8 local_308;
  undefined8 local_2fc;
  uint local_2f4;
  undefined8 local_2d8;
  char local_198 [128];
  char *local_118;
  char *local_110;
  int local_108;
  undefined1 local_f8 [128];
  longlong local_78;
  undefined8 local_70;
  char local_60;
  ulonglong local_58;
  ulonglong uVar17;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  iVar4 = *(int *)(param_2 + 1);
  pcVar15 = param_1 + 0x28;
  local_3a8 = param_1;
  if (*(int *)(param_1 + 0x34) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (pcVar15);
  }
  param_2 = (undefined8 *)*param_2;
  puVar10 = param_2 + (longlong)iVar4 * 2;
  pcVar20 = param_1;
  local_360 = puVar10;
  if (param_2 != puVar10) {
    do {
      if (*(int *)(param_2 + 1) == 0) {
        puVar18 = &DAT_143f3eda8;
      }
      else {
        puVar18 = (undefined2 *)*param_2;
      }
      local_118 = (char *)0x0;
      if (puVar18 == (undefined2 *)0x0) {
        local_110 = (char *)0x0;
        local_108 = 0;
      }
      else {
        uVar16 = 0xffffffffffffffff;
        do {
          uVar17 = uVar16;
          uVar16 = uVar17 + 1;
        } while (puVar18[uVar16] != 0);
        local_3c8 = (char *)((ulonglong)local_3c8 & 0xffffffff00000000);
        FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_3c8,(int)uVar16 * 4,puVar18,uVar16 & 0xffffffff);
        local_108 = (int)local_3c8;
        uVar1 = (int)local_3c8 + 1;
        pcVar8 = (char *)0x0;
        if ((0x80 < uVar1) && (uVar1 != 0)) {
          pcVar8 = (char *)FMemory::Realloc(0,(longlong)(int)uVar1,0);
          local_118 = pcVar8;
        }
        local_3c8 = local_198;
        if (pcVar8 != (char *)0x0) {
          local_3c8 = pcVar8;
        }
        local_110 = local_3c8;
        FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_3c8,uVar1,puVar18,(int)uVar17 + 2);
        puVar10 = local_360;
      }
      local_398 = (char *)FMemory::Malloc((longlong)(local_108 + 1),0);
      pcVar8 = local_110;
      pcVar19 = local_398;
      do {
        cVar6 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar19 = cVar6;
        pcVar19 = pcVar19 + 1;
      } while (cVar6 != '\0');
      pcStack_390 = FUN_142ea5080;
      iVar4 = *(int *)(param_1 + 0x30);
      local_368 = 0;
      local_388 = 0;
      iVar7 = iVar4 + 1;
      uStack_380 = 0x10000;
      *(int *)(param_1 + 0x30) = iVar7;
      if (*(int *)(param_1 + 0x34) < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(pcVar15);
      }
      lVar9 = *(longlong *)pcVar15;
      lVar14 = (longlong)iVar4 * 0x38;
      *(undefined8 *)(lVar14 + lVar9) = local_398;
      ((undefined8 *)(lVar14 + lVar9))[1] = pcStack_390;
      puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar9);
      *puVar2 = (undefined4)local_388;
      puVar2[1] = local_388._4_4_;
      puVar2[2] = (undefined4)uStack_380;
      puVar2[3] = uStack_380._4_4_;
      puVar3 = (undefined8 *)(lVar14 + 0x20 + lVar9);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(lVar14 + 0x30 + lVar9) = local_368;
      if (local_118 != (char *)0x0) {
        FMemory::Free();
      }
      param_2 = param_2 + 2;
      pcVar20 = local_3a8;
    } while (param_2 != puVar10);
  }
  iVar4 = *(int *)(param_1 + 0x30);
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  local_398 = (char *)0x0;
  pcStack_390 = (code *)0x0;
  local_388 = 0;
  uStack_380 = 0;
  *(int *)(param_1 + 0x30) = iVar4 + 1;
  if (*(int *)(param_1 + 0x34) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (pcVar15,iVar4);
  }
  lVar9 = *(longlong *)pcVar15;
  lVar14 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar14 + lVar9) = local_398;
  ((undefined8 *)(lVar14 + lVar9))[1] = pcStack_390;
  puVar10 = (undefined8 *)(lVar14 + 0x10 + lVar9);
  *puVar10 = local_388;
  puVar10[1] = uStack_380;
  puVar2 = (undefined4 *)(lVar14 + 0x20 + lVar9);
  *puVar2 = (undefined4)local_378;
  puVar2[1] = local_378._4_4_;
  puVar2[2] = (undefined4)uStack_370;
  puVar2[3] = uStack_370._4_4_;
  *(undefined8 *)(lVar14 + 0x30 + lVar9) = local_368;
  FUN_143dc6aa0(0x7df);
  _guard_xfg_dispatch_icall_nop(local_358,0,0x1c0);
  local_348 = *(longlong *)pcVar15;
  local_2f4 = local_2f4 | 0x10c0;
  local_358[0] = 0xffffffff;
  local_2fc = 0xffffffffffffffff;
  lVar9 = FHttpModule::Get();
  local_60 = 0;
  bVar5 = 1 < *(int *)(lVar9 + 0xa0);
  if (bVar5) {
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_f8,*(undefined8 *)(lVar9 + 0x98));
    local_308 = local_70;
  }
  local_60 = bVar5;
  puVar10 = (undefined8 *)FName::FName(&local_3a8,&DAT_14597fafc,1);
  uVar12 = *puVar10;
  uVar11 = FUN_14168dc80();
  lVar9 = FUN_141690010(uVar11,uVar12);
  plVar13 = *(longlong **)(lVar9 + 0x18);
  cVar6 = (**(code **)(*plVar13 + 8))(plVar13);
  if (cVar6 == '\0') {
    local_2f4 = local_2f4 | 0x1000;
  }
  else {
    local_3c8 = (char *)CONCAT44(local_3c8._4_4_,0x1010400);
    local_2d8 = (**(code **)(*plVar13 + 0x18))(plVar13,&local_3c8);
    local_2f4 = local_2f4 & 0xffffefff;
    *(undefined8 *)(pcVar20 + 0x18) = local_2d8;
  }
  local_340 = 0;
  lVar9 = FUN_143dc9790(local_358);
  *(longlong *)(pcVar20 + 0x20) = lVar9;
  if (lVar9 != 0) {
    local_3d8 = &DAT_1468e2360;
    local_3b0[0] = 0x20000;
    FConfigCacheIni::GetInt(DAT_1468b6148,L"WebSockets.LibWebSockets",L"ThreadStackSize",local_3b0);
    local_3d8 = (undefined8 *)0xffffffffffffffff;
    pcVar15 = pcVar20 + 8;
    if (pcVar20 == (code *)0x0) {
      pcVar15 = (code *)0x0;
    }
    lVar9 = FUN_1415d42a0(pcVar15,L"LibwebsocketsThread",0x20000,0);
    *(longlong *)(pcVar20 + 0x98) = lVar9;
    if (lVar9 == 0) {
      FUN_143dc9390(*(undefined8 *)(pcVar20 + 0x20));
      *(undefined8 *)(pcVar20 + 0x20) = 0;
    }
    else {
      uVar12 = FUN_14164ab60();
      uStack_3a0 = 0;
      local_3c0 = (longlong *)0x0;
      local_3a8 = FUN_142ea3540;
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      local_3b8 = 3;
      local_3c0 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        plVar13[1] = (longlong)pcVar20;
        *plVar13 = (longlong)&PTR_GetPoolName_144042030;
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_3a8;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_3a8._4_4_;
        *(undefined4 *)(plVar13 + 3) = uStack_3a0;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_39c;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar9;
      }
      local_3d8 = (undefined8 *)((ulonglong)local_3d8 & 0xffffffff00000000);
      puVar10 = (undefined8 *)
                FUN_14158f860(uVar12,&local_3a8,&local_3c0,L"FLwsWebSocketsManager_GameThreadTick");
      *(undefined8 *)(pcVar20 + 0x90) = *puVar10;
      if (local_3b8 != 0) {
        if (local_3c0 == (longlong *)0x0) goto LAB_142ea3c28;
        (**(code **)(*local_3c0 + 0x28))(local_3c0,0);
        if (local_3c0 != (longlong *)0x0) {
          local_3c0 = (longlong *)FMemory::Realloc(local_3c0,0,0);
        }
        local_3b8 = 0;
      }
      if (local_3c0 != (longlong *)0x0) {
        FMemory::Free(local_3c0);
      }
    }
  }
LAB_142ea3c28:
  if ((local_60 != '\0') && (local_60 = 0, local_78 != 0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea3c90 FUN_142ea3c90 body=47 status=ok
// SIG undefined FUN_142ea3c90(void)

void FUN_142ea3c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_145982a30;
    return;
  }
  return;
}



// FUNCTION 142ea3cd0 FUN_142ea3cd0 body=3391 status=ok
// SIG undefined FUN_142ea3cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ea3cd0(longlong param_1,undefined8 param_2,undefined4 param_3,ushort *param_4,
                       ulonglong param_5)

{
  undefined8 **ppuVar1;
  ulonglong *puVar2;
  void **ppvVar3;
  LPCRITICAL_SECTION p_Var4;
  void *_Src;
  undefined8 uVar5;
  undefined1 *_Src_00;
  uint uVar6;
  char cVar7;
  undefined2 uVar8;
  BOOL BVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  uint uVar21;
  char *pcVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  wchar_t *pwVar25;
  wchar_t **ppwVar26;
  int iVar27;
  longlong *plVar28;
  void *pvVar29;
  wchar_t *pwVar30;
  ulonglong uVar31;
  int *piVar32;
  undefined1 uVar33;
  bool bVar34;
  undefined1 auStack_4e8 [32];
  undefined2 local_4c8;
  uint local_4b8;
  uint local_4b4;
  undefined8 *local_4b0;
  uint local_4a8;
  int local_4a4;
  ulonglong local_4a0;
  ulonglong local_498;
  undefined8 local_490;
  wchar_t *local_488;
  int local_480;
  undefined4 local_47c;
  void *local_478;
  int local_470;
  undefined4 local_46c;
  longlong *local_468;
  wchar_t *local_460;
  longlong local_458 [2];
  longlong local_448 [32];
  longlong *local_348;
  longlong *local_340;
  uint local_338;
  undefined1 local_328 [256];
  undefined1 *local_228;
  undefined1 *local_220;
  uint local_218;
  wchar_t local_208 [128];
  wchar_t *local_108;
  wchar_t *local_100;
  uint local_f8;
  undefined1 local_e8 [128];
  void *local_68;
  char *local_60;
  int local_58;
  ulonglong local_48;
  
  pvVar29 = ThreadLocalStoragePointer;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  iVar10 = (int)param_5;
  switch(param_3) {
  case 1:
    pwVar25 = (wchar_t *)0x0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    uVar23 = 0;
    local_108 = (wchar_t *)0x0;
    if (param_4 == (ushort *)0x0) {
      local_100 = (wchar_t *)0x0;
      local_f8 = 0;
    }
    else {
      local_4b4 = 0;
      FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_4b4,0x7fffffff,param_4,param_5 & 0xffffffff);
      uVar21 = local_4b4;
      local_f8 = local_4b4;
      pwVar14 = pwVar25;
      if ((0x80 < local_4b4) && (pwVar14 = (wchar_t *)0x0, local_4b4 != 0)) {
        pwVar14 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)local_4b4 * 2,0);
        local_108 = pwVar14;
      }
      local_460 = local_208;
      if (pwVar14 != (wchar_t *)0x0) {
        local_460 = pwVar14;
      }
      local_100 = local_460;
      FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_460,uVar21,param_4,param_5 & 0xffffffff);
    }
    uVar21 = local_f8;
    pwVar14 = local_100;
    local_488 = (wchar_t *)0x0;
    local_47c = 0;
    iVar10 = local_f8 + 1;
    if (local_f8 == 0) {
      iVar10 = 0;
    }
    pwVar30 = pwVar25;
    local_480 = iVar10;
    if ((0 < iVar10) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,0), uVar23 = local_47c,
       iVar10 = local_480, pwVar30 = local_488, 0 < local_480)) {
      wcsncpy(local_488,pwVar14,(longlong)(int)uVar21);
      pwVar30[(int)uVar21] = L'\0';
    }
    p_Var4 = (LPCRITICAL_SECTION)(param_1 + 0x18);
    BVar9 = TryEnterCriticalSection(p_Var4);
    if (BVar9 == 0) {
      EnterCriticalSection(p_Var4);
    }
    if ((byte)(*(char *)(param_1 + 0x40) - 3U) < 2) {
      *(undefined1 *)(param_1 + 0x40) = 5;
      *(undefined2 *)(param_1 + 0x58) = 0x3ee;
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    else if (*(char *)(param_1 + 0x40) != '\x05') {
      *(undefined1 *)(param_1 + 0x40) = 6;
    }
    ppwVar26 = (wchar_t **)(param_1 + 0x48);
    if (ppwVar26 != &local_488) {
      if (*ppwVar26 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar26 = pwVar30;
      *(int *)(param_1 + 0x50) = iVar10;
      *(undefined4 *)(param_1 + 0x54) = uVar23;
      pwVar30 = pwVar25;
    }
    LeaveCriticalSection(p_Var4);
    if (pwVar30 != (wchar_t *)0x0) {
      FMemory::Free(pwVar30);
    }
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    return 0xffffffff;
  case 3:
    BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    *(undefined1 *)(param_1 + 0x40) = 3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0xf8) = param_2;
    lVar16 = **(longlong **)(param_1 + 0x178);
    goto LAB_142ea3d7b;
  case 4:
    cVar7 = *(char *)(param_1 + 0x40);
    if (1 < (byte)(cVar7 - 3U)) {
      return 0;
    }
    uVar17 = (ulonglong)_tls_index;
    local_4b8 = CONCAT31(local_4b8._1_3_,cVar7 == '\x04');
    *(undefined8 *)(param_1 + 0xf8) = 0;
    piVar32 = (int *)(*(longlong *)((longlong)pvVar29 + uVar17 * 8) + 0x38);
    if ((*piVar32 < DAT_146b3d878) && (_Init_thread_header(&DAT_146b3d878), DAT_146b3d878 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14673c718,0);
      FGenericPlatformString::Memcpy
                (DAT_14673c718,L"Successfully closed connection to our peer",0x56);
      atexit((_func_5014 *)&LAB_143ec1a00);
      _Init_thread_footer(&DAT_146b3d878);
    }
    puVar12 = &DAT_14673c728;
    if ((*piVar32 < DAT_146b3d87c) && (_Init_thread_header(&DAT_146b3d87c), DAT_146b3d87c == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14673c728,0);
      FGenericPlatformString::Memcpy(DAT_14673c728,L"Connection closed by peer",0x34);
      atexit((_func_5014 *)&LAB_143ec1a20);
      _Init_thread_footer(&DAT_146b3d87c);
    }
    local_478 = (void *)0x0;
    if (cVar7 == '\x04') {
      puVar12 = &DAT_14673c718;
    }
    local_470 = *(int *)(puVar12 + 1);
    lVar16 = (longlong)local_470;
    _Src = (void *)*puVar12;
    if (local_470 == 0) {
      pvVar29 = (void *)0x0;
      uVar23 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_478,local_470,0);
      pvVar29 = local_478;
      _guard_xfg_dispatch_icall_nop(local_478,_Src,lVar16 * 2);
      uVar23 = local_46c;
    }
    iVar10 = local_470;
    BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    ppvVar3 = (void **)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x40) = 5;
    if (ppvVar3 != &local_478) {
      if (*ppvVar3 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar3 = pvVar29;
      *(int *)(param_1 + 0x50) = iVar10;
      *(undefined4 *)(param_1 + 0x54) = uVar23;
      pvVar29 = (void *)0x0;
    }
    *(undefined2 *)(param_1 + 0x58) = 1000;
    *(undefined1 *)(param_1 + 0x5a) = (undefined1)local_4b8;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    goto joined_r0x000142ea4901;
  case 8:
    local_4a0 = FUN_143dc8210(param_2);
    plVar13 = (longlong *)0x0;
    if (*(char *)(param_1 + 0x130) != '\0') {
      local_348 = (longlong *)0x0;
      if (param_4 == (ushort *)0x0) {
        local_340 = (longlong *)0x0;
        local_338 = 0;
      }
      else {
        local_4b8 = 0;
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_4b8,0x7fffffff,param_4,param_5 & 0xffffffff);
        uVar21 = local_4b8;
        local_338 = local_4b8;
        plVar11 = plVar13;
        if ((0x80 < local_4b8) && (plVar11 = (longlong *)0x0, local_4b8 != 0)) {
          plVar11 = (longlong *)FMemory::Realloc(0,(longlong)(int)local_4b8 * 2,0);
          local_348 = plVar11;
        }
        local_468 = local_448;
        if (plVar11 != (longlong *)0x0) {
          local_468 = plVar11;
        }
        local_340 = local_468;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
                  (&local_468,uVar21,param_4,param_5 & 0xffffffff);
      }
      plVar28 = local_340;
      plVar11 = (longlong *)(param_1 + 0x138);
      local_4b4 = local_338;
      if (local_338 != 0) {
        iVar10 = *(int *)(param_1 + 0x140);
        iVar27 = iVar10 + -1;
        uVar21 = local_338;
        if (iVar10 < 1) {
          iVar27 = 0;
          uVar21 = local_338 + 1;
        }
        *(uint *)(param_1 + 0x140) = uVar21 + iVar10;
        if (*(int *)(param_1 + 0x144) < (int)(uVar21 + iVar10)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar11);
        }
        if (0 < (longlong)(int)local_4b4) {
          plVar18 = plVar13;
          lVar16 = (longlong)iVar27 * 2;
          do {
            lVar15 = (longlong)plVar18 * 2;
            plVar18 = (longlong *)((longlong)plVar18 + 1);
            *(undefined2 *)(lVar16 + *plVar11) = *(undefined2 *)((longlong)plVar28 + lVar15);
            lVar16 = lVar16 + 2;
          } while ((longlong)plVar18 < (longlong)(int)local_4b4);
        }
        *(undefined2 *)(*plVar11 + -2 + (longlong)*(int *)(param_1 + 0x140) * 2) = 0;
      }
      if (local_4a0 == 0) {
        plVar18 = (longlong *)operator_new(0x10);
        plVar28 = plVar13;
        if (plVar18 != (longlong *)0x0) {
          *plVar18 = 0;
          *plVar18 = *plVar11;
          *plVar11 = 0;
          *(undefined4 *)(plVar18 + 1) = *(undefined4 *)(param_1 + 0x140);
          *(undefined4 *)((longlong)plVar18 + 0xc) = *(undefined4 *)(param_1 + 0x144);
          *(undefined8 *)(param_1 + 0x140) = 0;
          plVar28 = plVar18;
        }
        puVar12 = (undefined8 *)operator_new(0x10);
        if (puVar12 == (undefined8 *)0x0) {
          if (plVar28 != (longlong *)0x0) {
            if (*plVar28 != 0) {
              FMemory::Free();
            }
            FMemory::operator_delete(plVar28,0x10);
          }
        }
        else {
          *puVar12 = 0;
          puVar12[1] = plVar28;
          puVar24 = *(undefined8 **)(param_1 + 0x160);
          *(undefined8 **)(param_1 + 0x160) = puVar12;
          *puVar24 = puVar12;
        }
        *(undefined4 *)(param_1 + 0x140) = 0;
        if (*(int *)(param_1 + 0x144) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar11,0);
        }
      }
      if (local_348 != (longlong *)0x0) {
        FMemory::Free(local_348);
      }
    }
    uVar17 = local_4a0;
    if (*(char *)(param_1 + 0x131) != '\0') {
      lVar16 = operator_new(0x18);
      if (lVar16 != 0) {
        plVar13 = (longlong *)
                  FLwsReceiveBufferBinary::FLwsReceiveBufferBinary
                            (lVar16,param_4,param_5 & 0xffffffff,uVar17 & 0xffffffff);
      }
      puVar12 = (undefined8 *)operator_new(0x10);
      if (puVar12 == (undefined8 *)0x0) {
        if (plVar13 != (longlong *)0x0) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar13,0x18);
        }
      }
      else {
        *puVar12 = 0;
        puVar12[1] = plVar13;
        puVar24 = *(undefined8 **)(param_1 + 0x150);
        *(undefined8 **)(param_1 + 0x150) = puVar12;
        *puVar24 = puVar12;
      }
    }
    break;
  case 10:
  case 0xb:
    if (*(char *)(param_1 + 0x40) == '\x04') {
      p_Var4 = (LPCRITICAL_SECTION)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      BVar9 = TryEnterCriticalSection(p_Var4);
      if (BVar9 == 0) {
        EnterCriticalSection(p_Var4);
      }
      uVar23 = *(undefined4 *)(param_1 + 0x68);
      lVar16 = *(longlong *)(param_1 + 0x70);
      LeaveCriticalSection(p_Var4);
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (*(char *)(lVar16 + lVar15) != '\0');
      FUN_143dc81b0(param_2,uVar23,lVar16,(longlong)(int)lVar15);
      return 0xffffffff;
    }
    if (*(char *)(param_1 + 0x40) != '\x03') {
      return 0;
    }
    if (**(longlong **)(param_1 + 0x178) != 0) {
      pcVar22 = *(char **)(**(longlong **)(param_1 + 0x178) + 8);
      if (*(int *)(pcVar22 + 4) < 1) {
        uVar33 = *pcVar22 != '\0';
      }
      else {
        uVar33 = 2;
      }
      iVar10 = *(int *)(pcVar22 + 4) + 0x10;
      iVar10 = FUN_143dcd250(*(undefined8 *)(param_1 + 0xf8),
                             (longlong)iVar10 + *(longlong *)(pcVar22 + 8),
                             (longlong)(*(int *)(pcVar22 + 0x10) - iVar10),uVar33);
      if (0 < iVar10) {
        *(int *)(pcVar22 + 4) = *(int *)(pcVar22 + 4) + iVar10;
      }
      if (((pcVar22[0x18] == '\0') && (*(int *)(pcVar22 + 0x10) + -0x10 <= *(int *)(pcVar22 + 4)))
         || (iVar10 < 0)) {
        lVar16 = **(longlong **)(param_1 + 0x178);
        if (lVar16 != 0) {
          pcVar22 = *(char **)(lVar16 + 8);
          uVar5 = *(undefined8 *)(param_1 + 0x178);
          *(longlong *)(param_1 + 0x178) = lVar16;
          *(undefined8 *)(lVar16 + 8) = 0;
          FMemory::operator_delete(uVar5,0x10);
        }
        if (pcVar22 != (char *)0x0) {
          if (*(longlong *)(pcVar22 + 8) != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(pcVar22,0x20);
        }
      }
    }
    lVar16 = **(longlong **)(param_1 + 0x178);
LAB_142ea3d7b:
    *(bool *)(param_1 + 0x78) = lVar16 == 0;
    if (lVar16 != 0) {
      FUN_143dcdd70(*(undefined8 *)(param_1 + 0xf8));
    }
    break;
  case 0x18:
    if (*(int *)(param_1 + 0x128) < 2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x128) == 0) {
      puVar20 = &DAT_143f3eda8;
    }
    else {
      puVar20 = *(undefined2 **)(param_1 + 0x120);
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar20);
    pcVar22 = *(char **)param_4;
    strncpy(pcVar22,local_60,(longlong)iVar10);
    pcVar22[(longlong)iVar10 - 1] = '\0';
    *(longlong *)param_4 = *(longlong *)param_4 + (longlong)local_58;
    pvVar29 = local_68;
joined_r0x000142ea4901:
    if (pvVar29 != (void *)0x0) {
      FMemory::Free(pvVar29);
    }
    break;
  case 0x1e:
    cVar7 = *(char *)(param_1 + 0x40);
    uVar17 = 0;
    if (cVar7 == '\x02') {
      local_498 = 0;
      local_490 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
      uVar31 = local_498;
      FGenericPlatformString::Memcpy(local_498,L"Connection timed out",0x2a);
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      }
      puVar2 = (ulonglong *)(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x40) = 6;
      if (puVar2 != &local_498) {
        if (*puVar2 != 0) {
          FMemory::Free();
        }
        *puVar2 = uVar31;
        *(undefined4 *)(param_1 + 0x50) = (undefined4)local_490;
        *(undefined4 *)(param_1 + 0x54) = local_490._4_4_;
        uVar31 = uVar17;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      if (uVar31 != 0) {
        FMemory::Free(uVar31);
        *(undefined8 *)(param_1 + 0xf8) = 0;
        return 0;
      }
    }
    else {
      if (cVar7 == '\x03') {
        BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        if (BVar9 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        }
        *(undefined1 *)(param_1 + 0x40) = 5;
        uVar8 = 0x3ee;
        *(undefined1 *)(param_1 + 0x5a) = 0;
      }
      else {
        if (cVar7 != '\x04') goto LAB_142ea4438;
        BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        if (BVar9 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        }
        *(undefined1 *)(param_1 + 0x40) = 5;
        if (*(undefined **)(param_1 + 0x48) != &DAT_145981070) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          if (*(int *)(param_1 + 0x54) != 0x2b) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0x2b);
            uVar17 = (ulonglong)*(uint *)(param_1 + 0x50);
          }
          iVar10 = (int)uVar17 + 0x2b;
          *(int *)(param_1 + 0x50) = iVar10;
          if (*(int *)(param_1 + 0x54) < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
          }
          puVar12 = *(undefined8 **)(param_1 + 0x48);
          *puVar12 = 0x63006300750053;
          puVar12[1] = 0x66007300730065;
          puVar12[2] = 0x79006c006c0075;
          puVar12[3] = 0x6f006c00630020;
          puVar12[4] = 0x20006400650073;
          puVar12[5] = 0x6e006e006f0063;
          puVar12[6] = 0x69007400630065;
          puVar12[7] = 0x740020006e006f;
          *(undefined4 *)(puVar12 + 8) = 0x20006f;
          *(undefined4 *)((longlong)puVar12 + 0x44) = 0x75006f;
          *(undefined4 *)(puVar12 + 9) = 0x200072;
          *(undefined4 *)((longlong)puVar12 + 0x4c) = 0x650070;
          *(undefined4 *)(puVar12 + 10) = 0x720065;
          *(undefined2 *)((longlong)puVar12 + 0x54) = 0;
        }
        uVar8 = 1000;
        *(undefined1 *)(param_1 + 0x5a) = 1;
      }
      *(undefined2 *)(param_1 + 0x58) = uVar8;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
LAB_142ea4438:
    *(undefined8 *)(param_1 + 0xf8) = 0;
    break;
  case 0x26:
    puVar24 = (undefined8 *)0x0;
    uVar21 = 0;
    local_4b0 = (undefined8 *)0x0;
    local_4b8 = CONCAT22(local_4b8._2_2_,*param_4 >> 8 ^ *param_4 << 8);
    local_4a4 = 0;
    puVar12 = puVar24;
    if (2 < param_5) {
      uVar21 = iVar10 - 2;
      local_228 = (undefined1 *)0x0;
      if (param_4 + 1 == (ushort *)0x0) {
        local_220 = (undefined1 *)0x0;
        local_218 = 0;
      }
      else {
        local_218 = uVar21;
        if ((0x80 < uVar21) && (uVar21 != 0)) {
          local_228 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar21 * 2,0);
        }
        local_220 = local_328;
        if (local_228 != (undefined1 *)0x0) {
          local_220 = local_228;
        }
        local_4c8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_220,uVar21,param_4 + 1,uVar21);
      }
      uVar6 = local_218;
      _Src_00 = local_220;
      uVar21 = 0;
      if (local_218 != 0) {
        local_4a8 = local_218 + 1;
        if (0 < (int)local_4a8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0,0);
          puVar12 = local_4b0;
        }
        uVar21 = local_4a8;
        _guard_xfg_dispatch_icall_nop(puVar12,_Src_00,(longlong)(int)uVar6 * 2);
        *(undefined2 *)((longlong)(int)uVar6 * 2 + (longlong)puVar12) = 0;
      }
      if (local_228 != (undefined1 *)0x0) {
        FMemory::Free(local_228);
      }
    }
    if ((byte)(*(char *)(param_1 + 0x40) - 3U) < 2) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      if (((int)uVar21 < 2) && (puVar12 != (undefined8 *)&DAT_145980930)) {
        local_4a8 = 0;
        puVar19 = puVar24;
        if (local_4a4 != 0x39) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4b0,0x39);
          puVar19 = (undefined8 *)(ulonglong)local_4a8;
          puVar12 = local_4b0;
        }
        local_4a8 = (int)puVar19 + 0x39;
        if (local_4a4 < (int)local_4a8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0);
          puVar12 = local_4b0;
        }
        *puVar12 = 0x72006500650050;
        puVar12[1] = 0x64006900640020;
        puVar12[2] = 0x74006f006e0020;
        puVar12[3] = 0x65007000730020;
        puVar12[4] = 0x79006600690063;
        puVar12[5] = 0x72002000610020;
        puVar12[6] = 0x6f007300610065;
        puVar12[7] = 0x6f00660020006e;
        puVar12[8] = 0x6e006900200072;
        puVar12[9] = 0x61006900740069;
        puVar12[10] = 0x67006e00690074;
        puVar12[0xb] = 0x65006800740020;
        puVar12[0xc] = 0x6f006c00630020;
        puVar12[0xd] = 0x67006e00690073;
        *(undefined2 *)(puVar12 + 0xe) = 0;
        uVar21 = local_4a8;
      }
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      }
      ppuVar1 = (undefined8 **)(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x40) = 5;
      if (ppuVar1 != &local_4b0) {
        if (*ppuVar1 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        *ppuVar1 = puVar12;
        *(uint *)(param_1 + 0x50) = uVar21;
        *(int *)(param_1 + 0x54) = local_4a4;
        puVar12 = puVar24;
      }
      *(undefined2 *)(param_1 + 0x58) = (undefined2)local_4b8;
      *(undefined1 *)(param_1 + 0x5a) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    if (puVar12 != (undefined8 *)0x0) {
      FMemory::Free(puVar12);
    }
    return 1;
  case 0x3a:
    bVar34 = false;
    if (iVar10 == 1) {
      FUN_141f29b20(local_458,param_1 + 0x100);
      lVar16 = FSslModule::Get();
      cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x10) + 0x30))
                        (*(longlong **)(lVar16 + 0x10),param_4,local_458);
      bVar34 = cVar7 != '\0';
      if (local_458[0] != 0) {
        FMemory::Free();
      }
    }
    return (ulonglong)!bVar34;
  }
  return 0;
}



// FUNCTION 142ea4a80 LwsLog body=459 status=ok
// SIG undefined LwsLog(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void LwsLog(int param_1,longlong param_2)

{
  char cVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_198 [32];
  short *local_178;
  longlong local_170;
  ulonglong local_168;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar7;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (param_1 - 1U < 2) {
    iVar5 = 0;
    local_58 = (short *)0x0;
    uVar4 = 0xffffffffffffffff;
    uVar6 = uVar4;
    if (param_2 == 0) {
      local_50 = (short *)0x0;
      local_48 = 0;
    }
    else {
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
      } while (*(char *)(param_2 + uVar6) != '\0');
      local_178 = (short *)((ulonglong)local_178 & 0xffffffff00000000);
      FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_178,0x7fffffff,param_2,uVar6 & 0xffffffff);
      local_48 = (int)local_178;
      uVar3 = (int)local_178 + 1;
      psVar2 = (short *)0x0;
      if ((0x80 < uVar3) && (psVar2 = (short *)0x0, uVar3 != 0)) {
        psVar2 = (short *)FMemory::Realloc(0,(longlong)(int)uVar3 * 2,0);
        local_58 = psVar2;
      }
      local_178 = local_158;
      if (psVar2 != (short *)0x0) {
        local_178 = psVar2;
      }
      local_50 = local_178;
      FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_178,uVar3,param_2,(int)uVar7 + 2);
    }
    psVar2 = local_50;
    local_170 = 0;
    local_168 = 0;
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      do {
        uVar4 = uVar4 + 1;
      } while (local_50[uVar4] != 0);
      uVar3 = (int)uVar4 + 1;
      local_168 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
      }
      FGenericPlatformString::Memcpy(local_170,psVar2,(longlong)(int)uVar3 * 2);
    }
    cVar1 = FString::EndsWith(&local_170,&DAT_14597fc74,1);
    if (cVar1 != '\0') {
      if ((int)local_168 != 0) {
        iVar5 = (int)local_168 + -1;
      }
      *(undefined2 *)(local_170 + -2 + (longlong)iVar5 * 2) = 0x20;
    }
    if (local_170 != 0) {
      FMemory::Free();
    }
    if (local_58 != (short *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ea4c50 Run body=185 status=ok
// SIG undefined Run(void)

undefined8 FLwsWebSocketsManager::Run(longlong param_1)

{
  bool bVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  LOCK();
  bVar1 = *(int *)(param_1 + 0x98) == 0;
  if (bVar1) {
    *(int *)(param_1 + 0x98) = 0;
  }
  UNLOCK();
  while (bVar1) {
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
    QueryPerformanceCounter(&local_res10);
    dVar2 = *(double *)(param_1 + 0xa0) - ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2);
    if (dVar2 <= *(double *)(param_1 + 0xa8)) {
      dVar2 = *(double *)(param_1 + 0xa8);
    }
    FUN_1416b1810((float)dVar2);
    LOCK();
    bVar1 = *(int *)(param_1 + 0x98) == 0;
    if (bVar1) {
      *(int *)(param_1 + 0x98) = 0;
    }
    UNLOCK();
  }
  return 0;
}



// FUNCTION 142ea4d10 Send body=129 status=ok
// SIG undefined Send(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FLwsWebSocket::Send(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_b8,puVar1);
  (**(code **)(*param_1 + 0x20))(param_1,local_30,(longlong)local_28,0);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ea4da0 Send body=276 status=ok
// SIG undefined Send(void)

void FLwsWebSocket::Send(longlong param_1,void *param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  puVar4 = (undefined1 *)operator_new();
  puVar6 = (undefined1 *)0x0;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = param_4;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    puVar4[0x18] = 0;
    if (*(int *)(puVar4 + 0x14) < param_3 + 0x10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
    }
    iVar1 = *(int *)(puVar4 + 0x10);
    *(int *)(puVar4 + 0x10) = iVar1 + 0x10;
    if (*(int *)(puVar4 + 0x14) < iVar1 + 0x10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar4 + 8,iVar1);
    }
    lVar2 = *(longlong *)(puVar4 + 8);
    *(undefined8 *)(iVar1 + lVar2) = 0;
    ((undefined8 *)(iVar1 + lVar2))[1] = 0;
    iVar1 = *(int *)(puVar4 + 0x10);
    *(int *)(puVar4 + 0x10) = iVar1 + param_3;
    if (*(int *)(puVar4 + 0x14) < iVar1 + param_3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar4 + 8,iVar1);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(puVar4 + 8)),param_2,(longlong)param_3);
    puVar6 = puVar4;
  }
  puVar5 = (undefined8 *)operator_new(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = puVar6;
    puVar3 = *(undefined8 **)(param_1 + 0x170);
    *(undefined8 **)(param_1 + 0x170) = puVar5;
    *puVar3 = puVar5;
  }
  return;
}



// FUNCTION 142ea4ec0 FUN_142ea4ec0 body=439 status=ok
// SIG undefined FUN_142ea4ec0(void)

void FUN_142ea4ec0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  
  plVar11 = *(longlong **)(param_1 + 0x98);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11,1);
    plVar11 = *(longlong **)(param_1 + 0x98);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11,1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_143dc9390();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  puVar10 = puVar6 + (longlong)*(int *)(param_1 + 0x30) * 7;
  for (; puVar6 != puVar10; puVar6 = puVar6 + 7) {
    FMemory::Free(*puVar6);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x28,0);
  }
  while (lVar8 = **(longlong **)(param_1 + 0x68), lVar8 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(longlong *)(param_1 + 0x68) = lVar8;
    *(undefined8 *)(lVar8 + 8) = 0;
    FMemory::operator_delete(uVar4,0x10);
  }
  while (lVar8 = **(longlong **)(param_1 + 0x78), lVar8 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(longlong *)(param_1 + 0x78) = lVar8;
    *(undefined8 *)(lVar8 + 8) = 0;
    FMemory::operator_delete(uVar4,0x10);
  }
  iVar9 = *(int *)(param_1 + 0x40);
  if (iVar9 != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      plVar5 = (longlong *)*plVar11;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      plVar11 = plVar11 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,&DAT_14597fc2c,1);
  uVar4 = *puVar6;
  uVar7 = FUN_14168dc80();
  lVar8 = FUN_141690010(uVar7,uVar4);
  plVar11 = *(longlong **)(lVar8 + 0x18);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ea5073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x10))(plVar11);
  return;
}



// FUNCTION 142ea5080 FUN_142ea5080 body=243 status=ok
// SIG undefined FUN_142ea5080(void)

undefined8
FUN_142ea5080(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(DAT_146b3d868 + 8);
  switch(param_2) {
  case 1:
  case 3:
  case 4:
  case 8:
  case 10:
  case 0xb:
  case 0x18:
  case 0x26:
    break;
  default:
    return 0;
  case 0x15:
  case 0x16:
    lVar2 = FSslModule::Get();
    (**(code **)(**(longlong **)(lVar2 + 0x10) + 8))(*(longlong **)(lVar2 + 0x10),param_3);
    return 0;
  case 0x1e:
    iVar1 = *(int *)(lVar2 + 0x88);
    *(int *)(lVar2 + 0x88) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x8c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x80,iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x80) + (longlong)iVar1 * 8) = param_3;
    break;
  case 0x3a:
    uVar3 = Curl_multi_pipelining_server_bl(param_1);
    param_4 = param_3;
    param_3 = uVar3;
  }
  uVar3 = FUN_142ea3cd0(param_3,param_1,param_2,param_4,param_5);
  return uVar3;
}



// FUNCTION 142ea51f0 Tick body=663 status=ok
// SIG undefined Tick(void)

void FLwsWebSocketsManager::Tick(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  BOOL BVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  
  while (lVar2 = **(longlong **)(param_1 + 0x58), lVar2 != 0) {
    lVar11 = *(longlong *)(lVar2 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    FMemory::operator_delete(uVar3,0x10);
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (FUN_142ea2650(lVar11), *(char *)(lVar11 + 0x40) != '\x02')) {
      puVar8 = (undefined8 *)operator_new(0x10);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = lVar11;
        puVar4 = *(undefined8 **)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x60) = puVar8;
        *puVar4 = puVar8;
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar9 + 1;
      if (*(int *)(param_1 + 0x44) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar9);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar9 * 8) = lVar11;
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar12 + *(int *)(param_1 + 0x40);
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    lVar2 = *plVar12;
    if (*(char *)(lVar2 + 0x40) == '\x03') {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x18);
      BVar6 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar6 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (*(int *)(lVar2 + 0x68) != 0) {
        *(undefined1 *)(lVar2 + 0x40) = 4;
      }
      LeaveCriticalSection(lpCriticalSection);
      if (*(char *)(lVar2 + 0x40) == '\x04') {
        if (*(char *)(lVar2 + 0x78) != '\0') {
          FUN_143dcdd70(*(undefined8 *)(lVar2 + 0xf8));
        }
      }
      else {
        bVar13 = **(longlong **)(lVar2 + 0x178) == 0;
        if ((*(char *)(lVar2 + 0x78) != '\0') && (!bVar13)) {
          FUN_143dcdd70(*(undefined8 *)(lVar2 + 0xf8));
        }
        *(bool *)(lVar2 + 0x78) = bVar13;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143dcc600(*(longlong *)(param_1 + 0x10),0);
  }
  plVar12 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar12 + *(int *)(param_1 + 0x78);
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    iVar9 = *(int *)(param_1 + 0x40);
    iVar10 = 0;
    lVar2 = *plVar12;
    if (0 < iVar9) {
      lVar11 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(lVar11 + lVar5) == lVar2) {
          iVar7 = (iVar9 - iVar10) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar5 + (longlong)iVar10 * 8),
                       (void *)(lVar5 + (longlong)(iVar9 - iVar7) * 8),(longlong)iVar7 << 3);
            iVar9 = *(int *)(param_1 + 0x40);
          }
          *(int *)(param_1 + 0x40) = iVar9 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
          iVar9 = *(int *)(param_1 + 0x40);
          iVar10 = iVar10 + -1;
          lVar11 = lVar11 + -8;
        }
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (iVar10 < iVar9);
    }
    puVar8 = (undefined8 *)operator_new(0x10);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = lVar2;
      puVar4 = *(undefined8 **)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x60) = puVar8;
      *puVar4 = puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
    return;
  }
  return;
}



// FUNCTION 142ea5490 FUN_142ea5490 body=383 status=ok
// SIG undefined FUN_142ea5490(void)

int FUN_142ea5490(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  bVar10 = *(longlong *)(*param_1 + 8) != *(longlong *)*param_2;
  lVar7 = 0;
  iVar4 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar5 = iVar4 + 1;
    if (lVar7 < lVar8) {
      plVar3 = (longlong *)(*param_1 + 8 + lVar7 * 0x60);
      do {
        if (bVar10 != (*plVar3 != *(longlong *)*param_2)) break;
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 1;
        plVar3 = plVar3 + 0xc;
      } while (lVar7 < lVar8);
    }
    iVar6 = iVar5 - iVar4;
    if (bVar10 == false) {
      if (iVar6 != 0) {
        plVar3 = (longlong *)((longlong)iVar4 * 0x60 + 0x40 + *param_1);
        do {
          if ((int)plVar3[2] != 0) {
            plVar2 = (longlong *)*plVar3;
            if ((longlong *)*plVar3 == (longlong *)0x0) {
              plVar2 = plVar3 + -4;
            }
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x10))(plVar2,0);
            }
          }
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 0xc;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar9 != iVar4) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x60 + *param_1),
                   (void *)((longlong)iVar4 * 0x60 + *param_1),(longlong)iVar6 * 0x60);
      }
      iVar9 = iVar9 + iVar6;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar4 = iVar5;
    if (lVar8 <= lVar7) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}



// FUNCTION 142ea5610 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar1 = (undefined1 *)*param_2;
      goto LAB_142ea56a5;
    }
  }
  puVar1 = &LAB_142ea5860;
LAB_142ea56a5:
  *param_1 = puVar1;
  *param_2 = &LAB_142ea5860;
  return param_1;
}



// FUNCTION 142ea56d0 FUN_142ea56d0 body=392 status=ok
// SIG undefined FUN_142ea56d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142ea56d0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90 = FDelegateHandle::GenerateNewID();
  *param_1 = local_90;
  local_98 = param_3;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,param_2);
  iVar1 = DAT_146b3d898;
  iVar4 = 0;
  for (piVar2 = DAT_146b3d890;
      (piVar2 != DAT_146b3d890 + (longlong)DAT_146b3d898 * 0x18 && (param_3 < *piVar2));
      piVar2 = piVar2 + 0x18) {
    iVar4 = iVar4 + 1;
  }
  DAT_146b3d898 = DAT_146b3d898 + 1;
  if (DAT_146b3d89c < DAT_146b3d898) {
    FUN_140fd56e0(&DAT_146b3d890,iVar1);
  }
  _guard_xfg_dispatch_icall_nop
            (DAT_146b3d890 + (longlong)iVar4 * 0x18 + 0x18,DAT_146b3d890 + (longlong)iVar4 * 0x18,
             (longlong)(iVar1 - iVar4) * 0x60);
  piVar2 = DAT_146b3d890 + (longlong)iVar4 * 0x18;
  *piVar2 = local_98;
  *(undefined8 *)(piVar2 + 2) = local_90;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(piVar2 + 4,local_88);
  if (local_48 != 0) {
    plVar3 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar3 = local_58;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_2 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142ea5880 FUN_142ea5880 body=64 status=ok
// SIG undefined FUN_142ea5880(void)

void FUN_142ea5880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  if (DAT_146b3d880 != (longlong *)0x0) {
    (**(code **)(*DAT_146b3d880 + 0x20))
              (DAT_146b3d880,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 142ea58c0 FUN_142ea58c0 body=20 status=ok
// SIG undefined FUN_142ea58c0(void)

void FUN_142ea58c0(void)

{
  if (DAT_146b3d880 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142ea58cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b3d880 + 0x28))();
    return;
  }
  return;
}



// FUNCTION 142ea58e0 FUN_142ea58e0 body=230 status=ok
// SIG undefined FUN_142ea58e0(void)

longlong * FUN_142ea58e0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_48 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = (longlong)DAT_146b3d898 * 0x60 + DAT_146b3d890;
  if (DAT_146b3d890 == lVar7) {
    return param_1;
  }
  plVar9 = (longlong *)(DAT_146b3d890 + 0x40);
  lVar8 = DAT_146b3d890;
  while( true ) {
    uVar4 = 0;
    if ((int)plVar9[2] != 0) {
      plVar6 = (longlong *)*plVar9;
      if ((longlong *)*plVar9 == (longlong *)0x0) {
        plVar6 = plVar9 + -4;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    puVar5 = (undefined4 *)(*(code *)plVar9[-6])(local_48,uVar4,param_2);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)param_1 = *puVar5;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    param_1[2] = *(longlong *)(puVar5 + 4);
    if (*param_1 != 0) break;
    lVar8 = lVar8 + 0x60;
    plVar9 = plVar9 + 0xc;
    if (lVar8 == lVar7) {
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142ea59d0 FUN_142ea59d0 body=39 status=ok
// SIG undefined FUN_142ea59d0(void)

void FUN_142ea59d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d50d8;
    return;
  }
  return;
}



// FUNCTION 142ea5a00 FUN_142ea5a00 body=46 status=ok
// SIG undefined FUN_142ea5a00(void)

undefined8 FUN_142ea5a00(undefined8 param_1)

{
  char cVar1;
  
  if (DAT_146b3d880 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b3d880 + 8))(DAT_146b3d880,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ea5a30 FUN_142ea5a30 body=57 status=ok
// SIG undefined FUN_142ea5a30(void)

undefined8
FUN_142ea5a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (DAT_146b3d880 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b3d880 + 0x10))(DAT_146b3d880,param_1,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ea5a70 FUN_142ea5a70 body=45 status=ok
// SIG undefined FUN_142ea5a70(void)

undefined8 FUN_142ea5a70(undefined8 param_1)

{
  char cVar1;
  
  if (DAT_146b3d880 != (undefined8 *)0x0) {
    cVar1 = (**(code **)*DAT_146b3d880)(DAT_146b3d880,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ea5aa0 FUN_142ea5aa0 body=642 status=ok
// SIG undefined FUN_142ea5aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142ea5aa0(undefined8 *param_1,longlong *param_2,uint param_3,uint param_4,int param_5,
             short param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  uint local_98 [2];
  uint local_90;
  undefined1 local_88 [64];
  undefined1 *local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar5 = (undefined1 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = *param_2;
  if (param_2[1] - lVar7 >> 1 == 0) {
    return param_1;
  }
  local_40 = 0;
  local_48 = (undefined1 *)0x0;
  local_3c = 0;
  puVar4 = puVar5;
  puVar3 = puVar5;
  puVar10 = puVar5;
  local_98[0] = param_4;
  local_90 = param_3;
  do {
    if (*(short *)(lVar7 + (longlong)puVar10 * 2) == param_6) {
      local_40 = (int)puVar4 + 1;
      if ((int)puVar3 < (int)local_40) {
        TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_88,puVar4);
        puVar5 = local_48;
      }
      puVar3 = local_88;
      if (puVar5 != (undefined1 *)0x0) {
        puVar3 = puVar5;
      }
      *(int *)(puVar3 + (longlong)(int)puVar4 * 4) = (int)puVar10;
      puVar3 = (undefined1 *)(ulonglong)local_3c;
      puVar4 = (undefined1 *)(ulonglong)local_40;
      puVar5 = local_48;
    }
    local_a0 = param_2[1];
    puVar10 = (undefined1 *)(ulonglong)((int)puVar10 + 1);
    lVar7 = *param_2;
  } while (puVar10 < (undefined1 *)(local_a0 - lVar7 >> 1));
  uVar8 = (int)puVar4 + 1;
  local_a8 = lVar7;
  if (1 < (int)uVar8) {
    uVar1 = uVar8;
    if (local_90 <= uVar8) {
      uVar1 = local_90;
    }
    uVar8 = uVar8 - uVar1;
    if (0 < (int)uVar8) {
      uVar11 = uVar8;
      if (local_98[0] <= uVar8) {
        uVar11 = local_98[0];
      }
      iVar9 = uVar8 - uVar11;
      if (iVar9 == 0) {
        if ((param_5 == 0) || (uVar11 < 2)) {
          if (uVar11 == 0) goto LAB_142ea5cbd;
        }
        else {
          uVar11 = uVar11 - 1;
          iVar9 = 1;
        }
      }
      puVar4 = local_88;
      if (puVar5 != (undefined1 *)0x0) {
        puVar4 = puVar5;
      }
      lVar6 = lVar7 + (longlong)*(int *)(puVar4 + (longlong)(int)uVar1 * 4 + -4) * 2;
      local_a0 = lVar6;
      puVar2 = (undefined8 *)FUN_14159d6c0(local_98,&local_a8,1);
      lVar6 = lVar6 + 2;
      *param_1 = *puVar2;
      if (uVar11 != 0) {
        local_a8 = lVar6;
        if (iVar9 == 0) {
          local_a0 = param_2[1];
          puVar2 = (undefined8 *)FUN_14159d6c0(local_98,&local_a8,1);
          param_1[1] = *puVar2;
          goto LAB_142ea5cde;
        }
        puVar5 = local_88;
        if (local_48 != (undefined1 *)0x0) {
          puVar5 = local_48;
        }
        lVar7 = lVar7 + (longlong)*(int *)(puVar5 + (longlong)(int)(uVar11 + uVar1) * 4 + -4) * 2;
        local_a0 = lVar7;
        puVar2 = (undefined8 *)FUN_14159d6c0(local_98,&local_a8,1);
        lVar6 = lVar7 + 2;
        param_1[1] = *puVar2;
      }
      if (iVar9 != 0) {
        local_a0 = param_2[1];
        local_a8 = lVar6;
        puVar2 = (undefined8 *)FUN_14159d6c0(local_98,&local_a8,1);
        param_1[2] = *puVar2;
      }
      goto LAB_142ea5cde;
    }
  }
LAB_142ea5cbd:
  puVar2 = (undefined8 *)FUN_14159d6c0(local_98,&local_a8,1);
  *param_1 = *puVar2;
LAB_142ea5cde:
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142ea5d30 FUN_142ea5d30 body=81 status=ok
// SIG undefined FUN_142ea5d30(void)

undefined8 * FUN_142ea5d30(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((DAT_146b3d880 != (longlong *)0x0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(*DAT_146b3d880 + 0x30))(DAT_146b3d880,local_28,param_2,param_3);
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    param_1[2] = puVar2[2];
  }
  return param_1;
}



// FUNCTION 142ea5d90 FUN_142ea5d90 body=75 status=ok
// SIG undefined FUN_142ea5d90(void)

undefined8 * FUN_142ea5d90(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
  cVar1 = UClass::ImplementsInterface(*(undefined8 *)(param_2 + 0x10),uVar2);
  if (cVar1 != '\0') {
    FUN_142ea5fd0(param_2,param_1);
  }
  return param_1;
}



// FUNCTION 142ea5de0 FUN_142ea5de0 body=41 status=ok
// SIG undefined FUN_142ea5de0(void)

void FUN_142ea5de0(undefined8 param_1)

{
  undefined8 local_res8;
  undefined8 *local_res10 [3];
  
  local_res10[0] = &local_res8;
  local_res8 = param_1;
  FUN_142ea5490(&DAT_146b3d890,local_res10);
  return;
}



// FUNCTION 142ea5e10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b3d8b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxProbesCore",L"GbxProbeInterface",&DAT_146b3d8b8,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  &LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b3d8b8;
}



// FUNCTION 142ea5ec0 FUN_142ea5ec0 body=47 status=ok
// SIG undefined FUN_142ea5ec0(void)

longlong FUN_142ea5ec0(void)

{
  if (DAT_146b3d8b0 == 0) {
    FUN_141786440(&DAT_146b3d8b0,&PTR_GetPrivateStaticClass_145982bc0);
  }
  return DAT_146b3d8b0;
}



// FUNCTION 142ea5ef0 FUN_142ea5ef0 body=47 status=ok
// SIG undefined FUN_142ea5ef0(void)

longlong FUN_142ea5ef0(void)

{
  if (DAT_146b3d8e0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b3d8e0,&PTR_s__Script_GbxProbesCore_145982f38);
  }
  return DAT_146b3d8e0;
}



// FUNCTION 142ea5f20 FUN_142ea5f20 body=47 status=ok
// SIG undefined FUN_142ea5f20(void)

longlong FUN_142ea5f20(void)

{
  if (DAT_146b3d8a8 == 0) {
    FUN_141786a30(&DAT_146b3d8a8,&PTR_FUN_14673c780);
  }
  return DAT_146b3d8a8;
}



// FUNCTION 142ea5f70 FUN_142ea5f70 body=85 status=ok
// SIG undefined FUN_142ea5f70(void)

void FUN_142ea5f70(void)

{
  if (DAT_146b3d8a0 == 0) {
    if (DAT_146b3d8e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b3d8e0,&PTR_s__Script_GbxProbesCore_145982f38);
    }
    DAT_146b3d8a0 = GetStaticEnum(FUN_142ea60b0,DAT_146b3d8e0,L"EGbxProbeResult");
  }
  return;
}



// FUNCTION 142ea5fd0 FUN_142ea5fd0 body=164 status=ok
// SIG undefined FUN_142ea5fd0(void)

void FUN_142ea5fd0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  lVar1 = UObject::FindFunction(param_1,DAT_146b3d8c8);
  if (lVar1 != 0) {
    local_28 = *param_2;
    uStack_20 = param_2[1];
    local_18 = param_2[2];
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_28);
    *param_2 = local_28;
    param_2[1] = uStack_20;
    param_2[2] = local_18;
    return;
  }
  uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_14178e060(param_1,uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,param_2);
  }
  return;
}



// FUNCTION 142ea6080 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetGbxProbeId_145982ec0,1);
  return;
}



// FUNCTION 142ea60b0 FUN_142ea60b0 body=47 status=ok
// SIG undefined FUN_142ea60b0(void)

longlong FUN_142ea60b0(void)

{
  if (DAT_146b3d8d0 == 0) {
    FUN_1417866a0(&DAT_146b3d8d0,&PTR_FUN_14673c8e0);
  }
  return DAT_146b3d8d0;
}



// FUNCTION 142ea60e0 FUN_142ea60e0 body=47 status=ok
// SIG undefined FUN_142ea60e0(void)

longlong FUN_142ea60e0(void)

{
  if (DAT_146b3d8d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b3d8d8,&PTR_FUN_14673c890);
  }
  return DAT_146b3d8d8;
}



// FUNCTION 142ea6110 FUN_142ea6110 body=152 status=ok
// SIG undefined FUN_142ea6110(void)

void FUN_142ea6110(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)*param_1)(param_1,puVar1);
  return;
}



// FUNCTION 142ea61b0 FUN_142ea61b0 body=145 status=ok
// SIG undefined FUN_142ea61b0(void)

undefined8 * FUN_142ea61b0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  FUN_142ea6250(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142ea6250 FUN_142ea6250 body=176 status=ok
// SIG undefined FUN_142ea6250(void)

void FUN_142ea6250(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x30);
    do {
      if (plVar7[1] != 0) {
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
      plVar7 = plVar7 + 0x12;
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



// FUNCTION 142ea6300 FUN_142ea6300 body=2348 status=ok
// SIG undefined FUN_142ea6300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ea6300(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  longlong lVar12;
  short *psVar13;
  int *piVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_208;
  int local_200 [2];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  undefined2 *local_1d8;
  undefined8 local_1d0;
  undefined2 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  int *local_c8;
  undefined8 *local_c0;
  int *local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  iVar22 = (int)param_2[1];
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if (0 < iVar22) {
    TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reserve(&local_98,iVar22);
    iVar22 = (int)param_2[1];
  }
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar18 = (int)param_1[1];
  if (iVar5 < iVar22) {
    if (iVar18 != 0) {
      plVar21 = (longlong *)(*param_1 + 0x30);
      do {
        if (plVar21[1] != 0) {
          FMemory::Free();
        }
        plVar20 = (longlong *)*plVar21;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar20 + 1;
          lVar17 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar14 = (int *)((longlong)plVar20 + 0xc);
            iVar5 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar21 = plVar21 + 0x12;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != iVar22) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar22);
    }
  }
  else {
    if (iVar18 != 0) {
      plVar21 = (longlong *)(*param_1 + 0x30);
      do {
        if (plVar21[1] != 0) {
          FMemory::Free();
        }
        plVar20 = (longlong *)*plVar21;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar20 + 1;
          lVar17 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar14 = (int *)((longlong)plVar20 + 0xc);
            iVar22 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar21 = plVar21 + 0x12;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 2,(int)param_2[1]);
  plVar21 = (longlong *)*param_2;
  plVar20 = plVar21 + (longlong)(int)param_2[1] * 0xb;
  do {
    if (plVar21 == plVar20) {
      lVar17 = *param_1;
      iVar22 = (int)param_1[1];
      lVar19 = (longlong)iVar22 * 0x90 + lVar17;
      if (lVar17 != lVar19) {
        do {
          if (*(char *)(lVar17 + 0x88) == '\0') {
            lVar12 = *(longlong *)(lVar17 + 0x70);
            if ((int)local_90 != local_64) {
              puVar10 = local_60;
              if (local_58 != (undefined1 *)0x0) {
                puVar10 = local_58;
              }
              iVar22 = *(int *)(puVar10 +
                               (longlong)
                               (int)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12 & local_50 - 1U)
                               * 4);
              while (iVar22 != -1) {
                lVar2 = (longlong)iVar22 * 0x18;
                if (*(longlong *)(lVar2 + local_98) == lVar12) {
                  piVar14 = (int *)(local_98 + lVar2);
                  if (iVar22 != -1) goto LAB_142ea6af8;
                  break;
                }
                iVar22 = *(int *)(lVar2 + 0x10 + local_98);
              }
            }
            piVar14 = (int *)0x0;
LAB_142ea6af8:
            piVar11 = piVar14 + 2;
            if (piVar14 == (int *)0x0) {
              piVar11 = (int *)0x0;
            }
            if (piVar11 != (int *)0x0) {
              iVar22 = *piVar11;
              if ((-1 < iVar22) && (iVar22 < (int)param_1[1])) {
                *(undefined8 *)(lVar17 + 0x60) =
                     *(undefined8 *)(*param_1 + 0x58 + (longlong)iVar22 * 0x90);
              }
            }
          }
          lVar17 = lVar17 + 0x90;
        } while (lVar17 != lVar19);
        lVar17 = *param_1;
        iVar22 = (int)param_1[1];
      }
      lVar19 = (longlong)iVar22 * 0x90 + lVar17;
      if (lVar17 != lVar19) {
        do {
          if (*(char *)(lVar17 + 0x88) == '\0') {
            lVar12 = FUN_142ea7080(param_1,lVar17);
            bVar23 = lVar12 != 0;
            while( true ) {
              if ((lVar12 == 0) || (*(char *)(lVar12 + 0x88) != '\0')) goto LAB_142ea6bb1;
              local_208 = 0;
              if (*(longlong *)(lVar12 + 0x60) == 0) break;
              lVar12 = FUN_142ea7080(param_1,lVar12);
            }
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
LAB_142ea6bb1:
          *(bool *)(lVar17 + 0x89) = bVar23;
          lVar17 = lVar17 + 0x90;
        } while (lVar17 != lVar19);
        iVar22 = (int)param_1[1];
      }
      if (*(int *)((longlong)param_1 + 0xc) != iVar22) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1);
      }
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
      return;
    }
    lVar17 = *plVar21;
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
      plVar6 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar6 = param_1 + 9;
      }
      iVar22 = *(int *)((longlong)plVar6 +
                       ((longlong)((int)((ulonglong)lVar17 >> 0x20) + (int)lVar17) &
                       (longlong)(int)param_1[0xb] - 1U) * 4);
      if (iVar22 != -1) {
        do {
          if (*(longlong *)(param_1[2] + (longlong)iVar22 * 0x18) == lVar17) goto LAB_142ea650c;
          iVar22 = *(int *)(param_1[2] + 0x10 + (longlong)iVar22 * 0x18);
        } while (iVar22 != -1);
      }
    }
    iVar22 = -1;
LAB_142ea650c:
    if (iVar22 == -1) {
      FUN_14063dd00(&local_1b8,plVar21);
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      FWeakObjectPtr::operator=(&local_138,0);
      local_160 = local_1b8;
      local_130 = 0;
      local_1f8 = 0;
      puVar7 = (undefined8 *)FName::FName(local_b0,L"GeneratedClass",1);
      local_1e8 = (undefined2 *)0x0;
      local_1e0 = 0;
      cVar4 = FUN_1421b9bc0(plVar21,*puVar7,&local_1e8);
      puVar16 = local_1e8;
      if (cVar4 != '\0') {
        puVar15 = &DAT_143f3eda8;
        if ((int)local_1e0 != 0) {
          puVar15 = local_1e8;
        }
        FName::FName(&local_120,puVar15,1);
        local_1f8 = local_120;
      }
      if (puVar16 != (undefined2 *)0x0) {
        FMemory::Free(puVar16);
      }
      FName::ToString(&local_1f8,param_1 + 0xc);
      FString::ReplaceInline(param_1 + 0xc,&DAT_145982fe4,&DAT_145982f84,1);
      FString::TrimEndInline(param_1 + 0xc);
      if ((int)param_1[0xd] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)param_1[0xc];
      }
      FName::FName(&local_118,puVar16,1);
      local_150 = local_118;
      local_1f0 = 0;
      puVar7 = (undefined8 *)FName::FName(local_a8,L"ParentClass",1);
      local_1d8 = (undefined2 *)0x0;
      local_1d0 = 0;
      cVar4 = FUN_1421b9bc0(plVar21,*puVar7,&local_1d8);
      puVar16 = local_1d8;
      if (cVar4 != '\0') {
        puVar15 = &DAT_143f3eda8;
        if ((int)local_1d0 != 0) {
          puVar15 = local_1d8;
        }
        FName::FName(&local_110,puVar15,1);
        local_1f0 = local_110;
      }
      if (puVar16 != (undefined2 *)0x0) {
        FMemory::Free(puVar16);
      }
      FName::ToString(&local_1f0,param_1 + 0xc);
      FString::ReplaceInline(param_1 + 0xc,&DAT_145982fe4,&DAT_145982f84,1);
      FString::TrimEndInline(param_1 + 0xc);
      if ((int)param_1[0xd] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)param_1[0xc];
      }
      FName::FName(&local_108,puVar16,1);
      local_148 = local_108;
      local_208 = 0;
      puVar7 = (undefined8 *)FName::FName(local_a0,L"NativeParentClass",1);
      local_1c8 = (undefined2 *)0x0;
      local_1c0 = 0;
      cVar4 = FUN_1421b9bc0(plVar21,*puVar7,&local_1c8);
      puVar16 = local_1c8;
      if (cVar4 != '\0') {
        puVar15 = &DAT_143f3eda8;
        if ((int)local_1c0 != 0) {
          puVar15 = local_1c8;
        }
        FName::FName(&local_100,puVar15,1);
        local_208 = local_100;
      }
      if (puVar16 != (undefined2 *)0x0) {
        FMemory::Free(puVar16);
      }
      FName::ToString(&local_208,param_1 + 0xc);
      FString::ReplaceInline(param_1 + 0xc,&DAT_145982fe4,&DAT_145982f84,1);
      FString::TrimEndInline(param_1 + 0xc);
      if ((int)param_1[0xd] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)param_1[0xc];
      }
      FName::FName(&local_f8,puVar16,1);
      local_140 = local_f8;
      local_f0 = local_f8;
      FName::ToString(&local_f0,param_1 + 0xc);
      psVar3 = (short *)param_1[0xc];
      psVar13 = psVar3 + (int)param_1[0xd];
      do {
        if (psVar13 == psVar3) {
          iVar22 = -1;
          goto LAB_142ea6828;
        }
        psVar13 = psVar13 + -1;
      } while (*psVar13 != 0x2e);
      iVar22 = (int)((longlong)psVar13 - (longlong)psVar3 >> 1);
LAB_142ea6828:
      iVar5 = iVar22 + 1;
      if (iVar22 == -1) {
        iVar5 = 0;
      }
      psVar13 = &DAT_143f3eda8;
      if ((int)param_1[0xd] != 0) {
        psVar13 = psVar3;
      }
      FName::FName(&local_e8,psVar13 + iVar5,1);
      uVar9 = local_e8;
      uVar8 = FUN_14171bfe0();
      local_218 = 0;
      local_220 = 0;
      local_228 = 1;
      uVar9 = FUN_141799680(uVar8,0,uVar9,1);
      FWeakObjectPtr::operator=(&local_138,uVar9);
      iVar22 = (int)param_1[1];
      local_130 = CONCAT11(local_130._1_1_,local_148 == local_140);
      local_e0 = local_150;
      local_d8 = local_160;
      *(int *)(param_1 + 1) = iVar22 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar22 + 1) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar22);
      }
      puVar7 = (undefined8 *)((longlong)iVar22 * 0x90 + *param_1);
      *puVar7 = local_1b8;
      puVar7[1] = local_1b0;
      puVar7[2] = local_1a8;
      puVar7[3] = local_1a0;
      puVar7[4] = local_198;
      puVar7[5] = local_190;
      puVar7[6] = local_188;
      local_188 = (longlong *)0x0;
      local_190 = 0;
      puVar7[7] = 0;
      puVar7[7] = local_180;
      local_180 = 0;
      *(undefined4 *)(puVar7 + 8) = (undefined4)local_178;
      *(undefined4 *)((longlong)puVar7 + 0x44) = local_178._4_4_;
      local_178 = 0;
      *(undefined4 *)(puVar7 + 9) = local_170;
      puVar7[10] = local_168;
      puVar7[0xb] = local_160;
      puVar7[0xc] = local_158;
      puVar7[0xd] = local_150;
      puVar7[0xe] = local_148;
      puVar7[0xf] = local_140;
      *(undefined4 *)(puVar7 + 0x10) = local_138;
      *(undefined4 *)((longlong)puVar7 + 0x84) = local_134;
      *(undefined1 *)(puVar7 + 0x11) = (undefined1)local_130;
      *(undefined1 *)((longlong)puVar7 + 0x89) = local_130._1_1_;
      local_d0 = &local_e0;
      local_c8 = local_200;
      local_200[0] = iVar22;
      FUN_1415ec610(&local_98,local_128,&local_d0,0);
      local_c0 = &local_d8;
      local_b8 = local_200;
      FUN_1415ec610(param_1 + 2,local_124,&local_c0,0);
      if (local_180 != 0) {
        FMemory::Free();
      }
      plVar6 = local_188;
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_188 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar14 = (int *)((longlong)plVar6 + 0xc);
          iVar22 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    plVar21 = plVar21 + 0xb;
  } while( true );
}



// FUNCTION 142ea6c30 FUN_142ea6c30 body=589 status=ok
// SIG undefined FUN_142ea6c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ea6c30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  longlong local_118 [7];
  undefined8 local_e0;
  longlong local_d8 [4];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  puVar3 = (undefined8 *)FName::FName(local_128,"AssetRegistry",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
  if (plVar4 != (longlong *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    local_118[5] = 0;
    local_118[6] = 0;
    local_e0 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_a8 = 0xffffffff;
    local_58 = 0xffffffff;
    lVar5 = UBlueprint::GetPrivateStaticClass();
    lVar7 = (longlong)(int)local_e0;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    iVar2 = (int)local_e0 + 1;
    if (local_e0._4_4_ < iVar2) {
      uVar6 = local_e0 & 0xffffffff;
      local_e0._0_4_ = iVar2;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_118 + 6,uVar6);
      iVar2 = (int)local_e0;
    }
    local_e0._0_4_ = iVar2;
    *(undefined8 *)(local_118[6] + lVar7 * 8) = uVar1;
    lVar5 = UPlatformEventsComponent::GetPrivateStaticClass();
    iVar2 = (int)local_e0;
    lVar7 = (longlong)(int)local_e0;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    local_e0._0_4_ = (int)local_e0 + 1;
    if (local_e0._4_4_ < (int)local_e0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_118 + 6,iVar2);
    }
    *(undefined8 *)(local_118[6] + lVar7 * 8) = uVar1;
    lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    iVar2 = (int)local_e0;
    lVar7 = (longlong)(int)local_e0;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    local_e0._0_4_ = (int)local_e0 + 1;
    if (local_e0._4_4_ < (int)local_e0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_118 + 6,iVar2);
    }
    *(undefined8 *)(local_118[6] + lVar7 * 8) = uVar1;
    local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
    (**(code **)(*plVar4 + 0x40))(plVar4,local_118,param_2);
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    local_90 = 0;
    if (local_98 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_d8,0);
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    if (local_118[6] != 0) {
      FMemory::Free();
    }
    if (local_118[4] != 0) {
      FMemory::Free();
    }
    if (local_118[2] != 0) {
      FMemory::Free();
    }
    if (local_118[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ea6e80 FUN_142ea6e80 body=335 status=ok
// SIG undefined FUN_142ea6e80(void)

void FUN_142ea6e80(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_28;
  undefined8 local_20;
  
  if ((char)param_1[0x10] == '\0') {
    local_28 = 0;
    local_20 = 0;
    FUN_142ea6c30(param_1,&local_28);
    FUN_142ea6300(param_1,&local_28);
    *(undefined1 *)(param_1 + 0x10) = 1;
    if ((int)local_20 != 0) {
      plVar9 = (longlong *)(local_28 + 0x30);
      iVar7 = (int)local_20;
      do {
        if (plVar9[1] != 0) {
          FMemory::Free();
        }
        plVar4 = (longlong *)*plVar9;
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
        plVar9 = plVar9 + 0xb;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  lVar6 = *param_1;
  lVar8 = (longlong)(int)param_1[1] * 0x90 + lVar6;
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0x90) {
    cVar5 = FUN_142ea7290(param_1,param_2,lVar6);
    if (cVar5 != '\0') {
      iVar7 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
      }
      FUN_14063dd00((longlong)iVar7 * 0x58 + *param_3,lVar6);
    }
  }
  return;
}



// FUNCTION 142ea6fd0 FUN_142ea6fd0 body=172 status=ok
// SIG undefined FUN_142ea6fd0(void)

void FUN_142ea6fd0(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined8 uVar3;
  short *psVar4;
  int iVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = param_1;
  FName::ToString(&local_res8);
  psVar1 = (short *)*param_2;
  psVar4 = psVar1 + *(int *)(param_2 + 1);
  do {
    if (psVar4 == psVar1) {
      iVar2 = -1;
      goto LAB_142ea7014;
    }
    psVar4 = psVar4 + -1;
  } while (*psVar4 != 0x2e);
  iVar2 = (int)((longlong)psVar4 - (longlong)psVar1 >> 1);
LAB_142ea7014:
  iVar5 = iVar2 + 1;
  if (iVar2 == -1) {
    iVar5 = 0;
  }
  psVar4 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) != 0) {
    psVar4 = psVar1;
  }
  FName::FName(&local_res10,psVar4 + iVar5,1);
  uVar3 = FUN_14171bfe0();
  FUN_141799680(uVar3,0,local_res10,1,1,0,0);
  return;
}



// FUNCTION 142ea7080 FUN_142ea7080 body=175 status=ok
// SIG undefined FUN_142ea7080(void)

longlong FUN_142ea7080(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x60);
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
      plVar3 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar3 = param_1 + 9;
      }
      iVar2 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[0xb] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          piVar5 = (int *)(param_1[2] + (longlong)iVar2 * 0x18);
          if (*(longlong *)(param_1[2] + (longlong)iVar2 * 0x18) == lVar1) {
            if (iVar2 != -1) goto LAB_142ea7103;
            break;
          }
          iVar2 = piVar5[4];
        } while (iVar2 != -1);
      }
    }
    piVar5 = (int *)0x0;
LAB_142ea7103:
    piVar4 = piVar5 + 2;
    if (piVar5 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      if ((-1 < iVar2) && (iVar2 < (int)param_1[1])) {
        return (longlong)iVar2 * 0x90 + *param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 142ea7130 FUN_142ea7130 body=149 status=ok
// SIG undefined FUN_142ea7130(void)

undefined8 * FUN_142ea7130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar1 + 2,0,0x80);
    *puVar1 = &PTR_FUN_145982ff8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ea71d0 FUN_142ea71d0 body=178 status=ok
// SIG undefined FUN_142ea71d0(void)

undefined8 FUN_142ea71d0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 0x68) == param_3) {
    return 1;
  }
  if (param_4 != '\0') {
    for (lVar2 = FUN_142ea7080(); lVar2 != 0; lVar2 = FUN_142ea7080(param_1,lVar2)) {
      if (*(longlong *)(lVar2 + 0x68) == param_3) {
        return 1;
      }
    }
    cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x80);
    if ((cVar1 != '\0') && (lVar2 = FUN_142ea6fd0(param_3,param_1 + 0x60), lVar2 != 0)) {
      for (lVar3 = FWeakObjectPtr::Get(param_2 + 0x80); lVar3 != 0;
          lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142ea7290 FUN_142ea7290 body=736 status=ok
// SIG undefined FUN_142ea7290(void)

undefined8 FUN_142ea7290(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 local_res10;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar10 = *(undefined8 **)(param_2 + 0x10);
  puVar3 = puVar10 + *(int *)(param_2 + 0x18);
  for (; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    local_res10 = *puVar10;
    FName::ToString(param_3 + 0x58,param_1 + 0x60);
    FName::ToString(&local_res10,param_1 + 0x70);
    cVar7 = FString::StartsWith(param_1 + 0x60,param_1 + 0x70,1);
    if (cVar7 != '\0') goto LAB_142ea732c;
  }
  if (*(int *)(param_2 + 0x18) < 1) {
LAB_142ea732c:
    if (*(char *)(param_2 + 0xe1) == '\0') {
LAB_142ea750e:
      puVar10 = *(undefined8 **)(param_2 + 0x30);
      puVar3 = puVar10 + *(int *)(param_2 + 0x38);
      for (; puVar10 != puVar3; puVar10 = puVar10 + 1) {
        cVar7 = FUN_142ea71d0(param_1,param_3,*puVar10,*(undefined1 *)(param_2 + 0xe1));
        if (cVar7 != '\0') {
          return 1;
        }
      }
      if (*(int *)(param_2 + 0x38) < 1) {
        return 1;
      }
    }
    else {
      uStack_94 = 1;
      plVar2 = (longlong *)(param_2 + 0x90);
      uVar4 = *(uint *)(param_2 + 0xb8);
      puVar1 = (uint *)(param_2 + 0xa0);
      local_98 = 0;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar4 != 0) {
        puVar13 = *(uint **)(param_2 + 0xb0);
        if (*(uint **)(param_2 + 0xb0) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar5 = *puVar13;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar5 == 0) {
          lVar9 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar8 = local_98 + 1;
          bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar8;
          if (bVar6) goto LAB_142ea73ec;
          uVar5 = puVar13[lVar9 + 1];
        }
        uStack_94 = -uVar5 & uVar5;
        iVar8 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (iStack_80 - iVar8) + 0x1f;
        if ((int)uVar4 < (int)uStack_84) {
LAB_142ea73ec:
          uStack_84 = uVar4;
        }
      }
      uVar5 = *(uint *)(param_2 + 0xb8);
      uStack_60 = CONCAT44(uStack_84,0xffffffff);
      local_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_48 = CONCAT44(uStack_94,local_98);
      uVar11 = -1 << ((byte)uVar5 & 0x1f);
      local_res10 = CONCAT44(local_res10._4_4_,uVar11);
      uVar12 = uVar5 & 0xffffffe0;
      iStack_70 = local_98;
      uStack_6c = uStack_94;
      local_68 = puVar1;
      local_50 = plVar2;
      puStack_40 = puVar1;
      uStack_38 = uStack_60;
      uStack_30 = local_58;
      uStack_84 = uVar5;
      if (uVar5 != uVar4) {
        puVar13 = *(uint **)(param_2 + 0xb0);
        if (*(uint **)(param_2 + 0xb0) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar11 = puVar13[(int)uVar5 >> 5] & uVar11;
        iVar8 = (int)uVar5 >> 5;
        while (uVar11 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_142ea74b3;
          uVar11 = puVar13[(longlong)iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        uVar11 = -uVar11 & uVar11;
        iVar8 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar11 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (uVar12 - iVar8) + 0x1f;
        if ((int)uVar4 < (int)uStack_84) {
LAB_142ea74b3:
          uStack_84 = uVar4;
        }
      }
      while( true ) {
        if ((uStack_60._4_4_ == uStack_84) && (local_68 == puVar1)) goto LAB_142ea750e;
        cVar7 = FUN_142ea71d0(param_1,param_3,
                              *(undefined8 *)(*plVar2 + (longlong)(int)uStack_60._4_4_ * 0x10),
                              *(undefined1 *)(param_2 + 0xe1));
        if (cVar7 != '\0') break;
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
    }
  }
  return 0;
}



// FUNCTION 142ea7570 FUN_142ea7570 body=986 status=ok
// SIG undefined FUN_142ea7570(void)

longlong FUN_142ea7570(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar8 = 0;
  cVar7 = FUN_142091120(param_1,param_3);
  if (cVar7 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ea761f:
      puVar11 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar13 = *piVar1;
      if (iVar13 == 0) {
        *piVar1 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (iVar13 < 1) goto LAB_142ea761f;
      local_88 = *(longlong **)(param_1 + 0x30);
      bVar6 = true;
      bVar5 = false;
      local_90 = 0;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        uVar2 = *(uint *)(local_88 + 1);
        bVar14 = uVar2 == 0;
        if (bVar14) {
          *(uint *)(local_88 + 1) = 0;
        }
        else {
          uVar8 = (ulonglong)uVar2;
        }
        UNLOCK();
        while (!bVar14) {
          iVar13 = (int)uVar8;
          LOCK();
          bVar14 = iVar13 == (int)local_88[1];
          if (bVar14) {
            *(int *)(local_88 + 1) = iVar13 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar8 = *(ulonglong *)(param_1 + 0x28);
            puVar11 = &local_90;
            local_90 = uVar8;
            goto LAB_142ea7634;
          }
          uVar8 = 0;
          LOCK();
          uVar2 = *(uint *)(local_88 + 1);
          bVar14 = uVar2 == 0;
          if (bVar14) {
            *(uint *)(local_88 + 1) = 0;
          }
          else {
            uVar8 = (ulonglong)uVar2;
          }
          UNLOCK();
        }
        local_88 = (longlong *)0x0;
      }
      uVar8 = 0;
      puVar11 = &local_90;
    }
LAB_142ea7634:
    local_80 = uVar8;
    plVar3 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    plVar4 = plStack_58;
    local_78 = plVar3;
    *puVar11 = 0;
    if ((bVar5) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_58 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar3 = local_88;
    if ((bVar6) && (local_88 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    bVar6 = true;
    bVar5 = false;
    puVar11 = &local_80;
    uVar8 = local_80;
  }
  else {
    puVar11 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  plVar3 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar4 = plStack_48;
  *puVar11 = 0;
  if ((bVar5) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_48 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar4 = local_78;
  if ((bVar6) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_78 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (uVar8 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return 0;
  }
  if (param_4 != 0) {
    lVar9 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar9) goto LAB_142ea77bd;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = FUN_142f206d0();
LAB_142ea77bd:
  plVar4 = *(longlong **)(uVar8 + 0x80);
  local_40 = *(undefined8 *)(uVar8 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  lVar10 = FUN_14202a0e0(local_40,param_4,param_1,param_2,param_3,6,&local_70);
  if (lVar10 != 0) {
    lVar9 = FUN_142f206d0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142ea784a;
  }
  lVar10 = 0;
LAB_142ea784a:
  plVar12 = local_70;
  for (iVar13 = (int)local_68; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar4 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
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
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return lVar10;
}



// FUNCTION 142ea7950 FUN_142ea7950 body=191 status=ok
// SIG undefined FUN_142ea7950(void)

void FUN_142ea7950(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
              (param_1,param_3 + param_5,param_4);
    param_1 = (undefined8 *)*param_1;
    if (param_3 != 0) {
      param_2 = param_2 + 8;
      do {
        *param_1 = *(undefined8 *)(param_2 + -8);
        FText::FText(param_1 + 1,param_2);
        *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x18);
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
        param_1[5] = 0;
        FUN_142ea7950(param_1 + 5,*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),0,
                      0);
        param_2 = param_2 + 0x38;
        param_1 = param_1 + 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



// FUNCTION 142ea7a10 FUN_142ea7a10 body=265 status=ok
// SIG undefined FUN_142ea7a10(void)

longlong * FUN_142ea7a10(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar6 = (longlong *)*param_1;
  plVar7 = plVar6 + (longlong)(int)param_1[1] * 4;
  do {
    if (plVar6 == plVar7) {
      if (param_2[1] != 0) {
        FMemory::Free();
      }
      return (longlong *)0x0;
    }
    if (*param_2 != 0) {
      lVar2 = UGSquadMemberWidget::GetPrivateStaticClass();
      lVar8 = *param_2;
      for (lVar5 = lVar8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar2) goto LAB_142ea7a70;
      }
    }
    lVar8 = 0;
LAB_142ea7a70:
    if (*plVar6 != 0) {
      lVar3 = UGSquadMemberWidget::GetPrivateStaticClass();
      lVar5 = *plVar6;
      for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_142ea7aa0;
      }
    }
    lVar5 = 0;
LAB_142ea7aa0:
    if (lVar8 == lVar5) {
      if ((int)param_2[2] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)param_2[1];
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4);
      if (iVar1 == 0) {
        if (param_2[1] == 0) {
          return plVar6;
        }
        FMemory::Free();
        return plVar6;
      }
    }
    plVar6 = plVar6 + 4;
  } while( true );
}



// FUNCTION 142ea7b20 FUN_142ea7b20 body=224 status=ok
// SIG undefined FUN_142ea7b20(void)

undefined8 FUN_142ea7b20(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = FUN_142f283f0();
  lVar3 = *(longlong *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar3 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_142ea7be3;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_142ea7be3:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar4;
}



// FUNCTION 142ea7c00 FUN_142ea7c00 body=224 status=ok
// SIG undefined FUN_142ea7c00(void)

undefined8 FUN_142ea7c00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = FUN_142f23190();
  lVar3 = *(longlong *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar3 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_142ea7cc3;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_142ea7cc3:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar4;
}



// FUNCTION 142ea7ce0 FUN_142ea7ce0 body=917 status=ok
// SIG undefined FUN_142ea7ce0(void)

longlong FUN_142ea7ce0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ea7d8f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_142ea7d8f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_142ea7da4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_142ea7da4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_142ea7f2d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UXGameInstance::GetPrivateStaticClass();
LAB_142ea7f2d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142ea7faa;
  }
  lVar12 = 0;
LAB_142ea7faa:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
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
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 142ea8080 FUN_142ea8080 body=917 status=ok
// SIG undefined FUN_142ea8080(void)

longlong FUN_142ea8080(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ea812f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_142ea812f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_142ea8144;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_142ea8144:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_142ea82cd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_142f1b8a0();
LAB_142ea82cd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_142f1b8a0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142ea834a;
  }
  lVar12 = 0;
LAB_142ea834a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
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
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 142ea8420 FUN_142ea8420 body=917 status=ok
// SIG undefined FUN_142ea8420(void)

longlong FUN_142ea8420(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ea84cf:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_142ea84cf;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_142ea84e4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_142ea84e4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_142ea866d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = URemnantGameInstance::GetPrivateStaticClass();
LAB_142ea866d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142ea86ea;
  }
  lVar12 = 0;
LAB_142ea86ea:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
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
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 142ea87c0 FUN_142ea87c0 body=917 status=ok
// SIG undefined FUN_142ea87c0(void)

longlong FUN_142ea87c0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ea886f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_142ea886f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_142ea8884;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_142ea8884:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_142ea8a0d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_142ea8a0d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142ea8a8a;
  }
  lVar12 = 0;
LAB_142ea8a8a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
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
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 142ea8b60 FUN_142ea8b60 body=839 status=ok
// SIG undefined FUN_142ea8b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ea8b60(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  float *param_5,float *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong *local_268;
  uint local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong *local_238;
  uint local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [4];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  double local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  double local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  puVar6 = local_e8;
  puVar8 = (undefined8 *)local_1e8;
  uVar11 = 0;
  local_208 = 0xffffffffffffffff;
  uStack_200 = 0xffffffffffffffff;
  local_278 = 0xffffffffffffffff;
  uStack_270 = 0xffffffffffffffff;
  local_1e8[0] = *param_3;
  local_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  local_188 = 0xffffffffffffffff;
  uStack_180 = 0xffffffffffffffff;
  local_1a8 = *param_4;
  local_268 = (longlong *)0x0;
  local_260 = 0;
  local_1f8 = 0;
  local_1f0 = 3;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 3;
  local_198 = 0;
  local_168 = (double)*param_5;
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  local_190 = 0;
  local_178 = 0;
  local_170 = 5;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_128 = (double)*param_6;
  local_108 = 0xffffffffffffffff;
  uStack_100 = 0xffffffffffffffff;
  local_d8 = 0xffffffffffffffff;
  uStack_d0 = 0xffffffffffffffff;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_130 = 5;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  do {
    puVar1 = puVar6 + -4;
    if (puVar1 != puVar8 + -4) {
      if ((*(uint *)(puVar6 + -1) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)puVar6[-2] + 0x10))((longlong *)puVar6[-2],puVar1,*puVar6);
        puVar6[-2] = 0;
      }
      uVar2 = *(uint *)(puVar8 + -1);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      *(uint *)(puVar6 + -1) = uVar2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      if ((uVar2 >> 6 & 1) != 0) {
        plVar5 = (longlong *)puVar8[-2];
        puVar6[-2] = plVar5;
        (**(code **)(*plVar5 + 8))(plVar5,puVar1);
      }
    }
    uVar11 = uVar11 + 1;
    puVar8 = puVar8 + 8;
    puVar6 = puVar6 + 6;
  } while (uVar11 < 4);
  lVar10 = 4;
  if (*param_1 != 0) {
    local_288 = 4;
    FUN_1420458d0(*param_1,param_2,&local_278,&local_108);
  }
  local_220 = local_250;
  local_248 = 0xffffffffffffffff;
  uStack_240 = 0xffffffffffffffff;
  local_238 = (longlong *)0x0;
  local_230 = local_260;
  local_228 = local_258;
  if ((local_260 >> 6 & 1) != 0) {
    local_238 = local_268;
    (**(code **)(*local_268 + 8))(local_268,&local_248);
  }
  local_218 = 0;
  local_210 = 0;
  if ((local_230 >> 6 & 1) != 0) {
    (**(code **)(*local_238 + 0x10))(local_238,&local_248,local_228);
    local_238 = (longlong *)0x0;
  }
  local_230 = 0;
  lVar9 = 4;
  puVar7 = local_48;
  do {
    lVar9 = lVar9 + -1;
    if (((uint)puVar7[-3] >> 6 & 1) != 0) {
      (**(code **)(*(longlong *)puVar7[-4] + 0x10))((longlong *)puVar7[-4],puVar7 + -6,puVar7[-2]);
      puVar7[-4] = 0;
    }
    *(undefined4 *)(puVar7 + -3) = 0;
    puVar7 = puVar7 + -6;
  } while (lVar9 != 0);
  puVar8 = &local_108;
  do {
    lVar10 = lVar10 + -1;
    if (puVar8[-2] != 0) {
      FMemory::Free();
    }
    if ((*(uint *)(puVar8 + -5) >> 6 & 1) != 0) {
      (**(code **)(*(longlong *)puVar8[-6] + 0x10))((longlong *)puVar8[-6],puVar8 + -8,puVar8[-4]);
      puVar8[-6] = 0;
    }
    *(undefined4 *)(puVar8 + -5) = 0;
    puVar8 = puVar8 + -8;
  } while (lVar10 != 0);
  if ((local_260 >> 6 & 1) != 0) {
    (**(code **)(*local_268 + 0x10))(local_268,&local_278,local_258);
  }
  return;
}



// FUNCTION 142ea8eb0 FUN_142ea8eb0 body=670 status=ok
// SIG undefined FUN_142ea8eb0(void)

void FUN_142ea8eb0(longlong *param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  uint local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  uint local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  
  puVar7 = local_68;
  puVar9 = (undefined8 *)local_e8;
  uVar11 = 0;
  local_108 = 0xffffffffffffffff;
  uStack_100 = 0xffffffffffffffff;
  local_178 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_f8 = 0;
  local_f0 = 3;
  local_e8[0] = *param_3;
  local_d8 = 0;
  local_a8 = (double)*param_4;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 5;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  local_40 = 0;
  do {
    puVar1 = puVar7 + -4;
    if (puVar1 != puVar9 + -4) {
      if ((*(uint *)(puVar7 + -1) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)puVar7[-2] + 0x10))((longlong *)puVar7[-2],puVar1,*puVar7);
        puVar7[-2] = 0;
      }
      uVar2 = *(uint *)(puVar9 + -1);
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      *(uint *)(puVar7 + -1) = uVar2;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      if ((uVar2 >> 6 & 1) != 0) {
        plVar5 = (longlong *)puVar9[-2];
        puVar7[-2] = plVar5;
        (**(code **)(*plVar5 + 8))(plVar5,puVar1);
      }
    }
    uVar11 = uVar11 + 1;
    puVar9 = puVar9 + 8;
    puVar7 = puVar7 + 6;
  } while (uVar11 < 2);
  lVar10 = 2;
  if (*param_1 != 0) {
    FUN_1420458d0(*param_1,param_2,&local_178,&local_88,2);
  }
  local_120 = local_150;
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  local_138 = (longlong *)0x0;
  local_130 = local_160;
  local_128 = local_158;
  if ((local_160 >> 6 & 1) != 0) {
    local_138 = local_168;
    (**(code **)(*local_168 + 8))(local_168,&local_148);
  }
  local_118 = 0;
  local_110 = 0;
  if ((local_130 >> 6 & 1) != 0) {
    (**(code **)(*local_138 + 0x10))(local_138,&local_148,local_128);
    local_138 = (longlong *)0x0;
  }
  local_130 = 0;
  lVar8 = 2;
  puVar6 = &stack0xffffffffffffffd8;
  do {
    lVar8 = lVar8 + -1;
    if ((*(uint *)(puVar6 + -0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(puVar6 + -0x20) + 0x10))
                (*(longlong **)(puVar6 + -0x20),puVar6 + -0x30,*(undefined8 *)(puVar6 + -0x10));
      *(undefined8 *)(puVar6 + -0x20) = 0;
    }
    *(undefined4 *)(puVar6 + -0x18) = 0;
    puVar6 = puVar6 + -0x30;
  } while (lVar8 != 0);
  puVar7 = &local_88;
  do {
    lVar10 = lVar10 + -1;
    if (puVar7[-2] != 0) {
      FMemory::Free();
    }
    if ((*(uint *)(puVar7 + -5) >> 6 & 1) != 0) {
      (**(code **)(*(longlong *)puVar7[-6] + 0x10))((longlong *)puVar7[-6],puVar7 + -8,puVar7[-4]);
      puVar7[-6] = 0;
    }
    *(undefined4 *)(puVar7 + -5) = 0;
    puVar7 = puVar7 + -8;
  } while (lVar10 != 0);
  if ((local_160 >> 6 & 1) != 0) {
    (**(code **)(*local_168 + 0x10))(local_168,&local_178,local_158);
  }
  return;
}



// FUNCTION 142ea9150 FUN_142ea9150 body=672 status=ok
// SIG undefined FUN_142ea9150(void)

void FUN_142ea9150(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar9 = 0;
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
      local_b0 = *(longlong **)(param_1 + 0x30);
      local_b8 = 0;
      if (local_b0 == (longlong *)0x0) {
LAB_142ea91ed:
        plVar7 = &local_b8;
        bVar4 = true;
        bVar11 = false;
        lVar10 = local_b8;
      }
      else {
        LOCK();
        iVar6 = (int)local_b0[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(local_b0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar6 == (int)local_b0[1];
          if (bVar11) {
            *(int *)(local_b0 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_b0 != (longlong *)0x0) {
              local_b8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142ea91ed;
          }
          LOCK();
          iVar6 = (int)local_b0[1];
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(local_b0 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_b8;
        local_b0 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_142ea9212;
    }
  }
  plVar7 = &local_a8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_142ea9212:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_a0;
  if ((bVar11) && (plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  plVar7 = local_b0;
  if ((bVar4) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  if (lVar10 != 0) {
    FUN_1420458d0(lVar10,param_2,&local_98,0,0);
    uVar9 = (ulonglong)local_80;
  }
  local_50 = (uint)uVar9;
  local_40 = local_70;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = (longlong *)0x0;
  local_48 = local_78;
  uVar8 = local_50;
  if ((uVar9 >> 6 & 1) != 0) {
    local_58 = local_88;
    (**(code **)(*local_88 + 8))(0xffffffffffffffff,&local_68);
    uVar9 = (ulonglong)local_50;
    uVar8 = local_80;
  }
  local_38 = 0;
  local_30 = 0;
  if ((uVar9 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
    local_58 = (longlong *)0x0;
    uVar8 = local_80;
  }
  local_50 = 0;
  if ((uVar8 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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



// FUNCTION 142ea93f0 FUN_142ea93f0 body=528 status=ok
// SIG undefined FUN_142ea93f0(void)

void FUN_142ea93f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
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
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142ea949d:
        puVar7 = &local_48;
        bVar4 = true;
        bVar8 = false;
        local_38 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar6 == (int)local_40[1];
          if (bVar8) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(undefined8 *)(param_1 + 0x28);
            }
            goto LAB_142ea949d;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar8 = iVar6 == 0;
          if (bVar8) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar8 = false;
        local_38 = 0;
      }
      goto LAB_142ea94c4;
    }
  }
  puVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar8 = true;
  local_38 = 0;
LAB_142ea94c4:
  plVar3 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  local_30 = plVar3;
  *puVar7 = 0;
  plVar3 = plStack_20;
  if ((bVar8) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar3 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  FUN_142ea8b60(&local_38,param_2,param_3,param_4,param_5,param_6);
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142ea9600 FUN_142ea9600 body=496 status=ok
// SIG undefined FUN_142ea9600(void)

void FUN_142ea9600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
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
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142ea96ad:
        puVar7 = &local_48;
        bVar4 = true;
        bVar8 = false;
        local_38 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar6 == (int)local_40[1];
          if (bVar8) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(undefined8 *)(param_1 + 0x28);
            }
            goto LAB_142ea96ad;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar8 = iVar6 == 0;
          if (bVar8) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar8 = false;
        local_38 = 0;
      }
      goto LAB_142ea96d4;
    }
  }
  puVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar8 = true;
  local_38 = 0;
LAB_142ea96d4:
  plVar3 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  local_30 = plVar3;
  *puVar7 = 0;
  plVar3 = plStack_20;
  if ((bVar8) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar3 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  FUN_142ea8eb0(&local_38,param_2,param_3,param_4);
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142ea97f0 NewObject<USaveGame> body=149 status=ok
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



// FUNCTION 142ea9890 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      pcVar1 = (code *)*param_2;
      goto LAB_142ea9925;
    }
  }
  pcVar1 = FUN_142eb07b0;
LAB_142ea9925:
  *param_1 = pcVar1;
  *param_2 = FUN_142eb07b0;
  return param_1;
}



// FUNCTION 142ea9950 FUN_142ea9950 body=212 status=ok
// SIG undefined FUN_142ea9950(void)

undefined8 * FUN_142ea9950(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14598afc8;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_142eb0dc0;
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



// FUNCTION 142ea9a30 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = FUN_142eb07b0;
  return param_1;
}



// FUNCTION 142ea9aa0 FUN_142ea9aa0 body=112 status=ok
// SIG undefined FUN_142ea9aa0(void)

undefined8 * FUN_142ea9aa0(undefined8 *param_1)

{
  FUN_141300770();
  *(undefined1 *)((longlong)param_1 + 0x2ed) = 1;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *param_1 = &PTR_FUN_14598a680;
  param_1[0x20] = &PTR_LAB_14598ab20;
  param_1[0x41] = &PTR_LAB_14598ab48;
  param_1[0x57] = &PTR_LAB_14598ab98;
  *(undefined4 *)(param_1 + 0x5f) = 0x3d4ccccd;
  return param_1;
}



// FUNCTION 142ea9b10 FUN_142ea9b10 body=99 status=ok
// SIG undefined FUN_142ea9b10(void)

void FUN_142ea9b10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_142ea9b10(lVar1 + 0x20);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar1);
      lVar1 = lVar1 + 0x38;
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



// FUNCTION 142ea9b80 FUN_142ea9b80 body=159 status=ok
// SIG undefined FUN_142ea9b80(void)

void FUN_142ea9b80(longlong *param_1)

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
      plVar7 = plVar7 + 5;
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



// FUNCTION 142ea9c20 FUN_142ea9c20 body=126 status=ok
// SIG undefined FUN_142ea9c20(void)

longlong * FUN_142ea9c20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      lVar1 = *param_1 + 8;
      do {
        FUN_142ea9b10(lVar1 + 0x20);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar1);
        lVar1 = lVar1 + 0x38;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_142ea7950(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 142ea9ca0 FUN_142ea9ca0 body=236 status=ok
// SIG undefined FUN_142ea9ca0(void)

longlong * FUN_142ea9ca0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_1 != param_2) {
    iVar7 = (int)param_1[1];
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*param_1 + 8);
      do {
        plVar5 = (longlong *)*plVar8;
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
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar8 = plVar8 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (int)param_2[1];
    lVar6 = *param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
      lVar9 = *param_1;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        FText::FText(lVar9,lVar6);
        puVar3 = (undefined4 *)(lVar6 + 0x18);
        lVar6 = lVar6 + 0x20;
        *(undefined4 *)(lVar9 + 0x18) = *puVar3;
        lVar9 = lVar9 + 0x20;
      }
    }
  }
  return param_1;
}



// FUNCTION 142ea9d90 FUN_142ea9d90 body=527 status=ok
// SIG undefined FUN_142ea9d90(void)

undefined1 * FUN_142ea9d90(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_2 + 4 != param_1 + 4) {
    if (param_1[0xc] != '\0') {
      param_1[0xc] = 0;
    }
    if (param_2[0xc] != '\0') {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      param_1[0xc] = 1;
    }
  }
  if (param_2 + 0x10 != param_1 + 0x10) {
    if (param_1[0x18] != '\0') {
      param_1[0x18] = 0;
    }
    if (param_2[0x18] != '\0') {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      param_1[0x18] = 1;
    }
  }
  if (param_2 + 0x1c != param_1 + 0x1c) {
    if (param_1[0x24] != '\0') {
      param_1[0x24] = 0;
    }
    if (param_2[0x24] != '\0') {
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
      param_1[0x24] = 1;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  if (plVar1 != (longlong *)(param_2 + 0x28)) {
    iVar9 = *(int *)(param_1 + 0x30);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar1 + 0x10);
      do {
        plVar5 = (longlong *)*plVar10;
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
        plVar10 = plVar10 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_2 + 0x30);
    puVar6 = *(undefined1 **)(param_2 + 0x28);
    *(int *)(param_1 + 0x30) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x34) == 0)) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
      puVar7 = (undefined1 *)*plVar1;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = *puVar6;
        FText::FText(puVar7 + 8,puVar6 + 8);
        puVar7 = puVar7 + 0x20;
        puVar6 = puVar6 + 0x20;
      }
    }
  }
  FText::operator=(param_1 + 0x38,param_2 + 0x38);
  FString::operator=(param_1 + 0x50,param_2 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x60);
  if ((longlong *)(param_2 + 0x60) != plVar1) {
    if ((*(int *)(param_2 + 0x68) == 0) ||
       (plVar10 = *(longlong **)(param_2 + 0x60), plVar10 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x68) != 0) &&
         (plVar10 = (longlong *)*plVar1, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*plVar1 != 0) {
          lVar8 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar1);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 142ea9fa0 FUN_142ea9fa0 body=229 status=ok
// SIG undefined FUN_142ea9fa0(void)

void FUN_142ea9fa0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)(*param_1 + 0x2e8) = 0;
  *(undefined4 *)(*param_1 + 0x2ec) = 0;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x330) != 0) {
    lVar2 = 0;
    if (*(longlong *)(lVar1 + 800) == 0) {
      lVar2 = lVar1 + 0x300;
    }
    if (lVar2 != 0 || *(longlong *)(lVar1 + 800) != 0) {
      if (*(int *)(lVar1 + 0x330) != 0) {
        plVar4 = *(longlong **)(lVar1 + 800);
        if (*(longlong **)(lVar1 + 800) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar1 + 0x300);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      (**(code **)(lVar1 + 0x2f0))();
    }
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x330) != 0) {
    plVar4 = *(longlong **)(lVar1 + 800);
    if (*(longlong **)(lVar1 + 800) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar1 + 0x300);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(lVar1 + 800) != 0) {
    uVar3 = FMemory::Realloc(*(longlong *)(lVar1 + 800),0,0);
    *(undefined8 *)(lVar1 + 800) = uVar3;
  }
  *(undefined4 *)(lVar1 + 0x330) = 0;
  *(code **)(lVar1 + 0x2f0) = AK::MemoryMgr::StartProfileThreadUsage;
  return;
}



// FUNCTION 142eaa090 FUN_142eaa090 body=112 status=ok
// SIG undefined FUN_142eaa090(void)

void FUN_142eaa090(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  (**(code **)(*(longlong *)*param_1 + 0x4b8))((longlong *)*param_1,local_res8);
  cVar1 = FUN_142ebd930(*param_1);
  param_1 = (longlong *)*param_1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  else {
    (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
    cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
      FUN_142f001d0(uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142eaa100 FUN_142eaa100 body=467 status=ok
// SIG undefined FUN_142eaa100(void)

ulonglong FUN_142eaa100(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_28;
  longlong *local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar7 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar7 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    uVar7 = 0;
    iVar4 = *(int *)(lVar8 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar10 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar7 + 8) & 0x30000000) == 0) {
      LOCK();
      iVar4 = *(int *)(*param_1 + 0x600);
      *(int *)(*param_1 + 0x600) = 1;
      UNLOCK();
      if (iVar4 == 0) {
        LOCK();
        *(undefined4 *)(*param_1 + 0x604) = 0;
        UNLOCK();
        FUN_140ad4c90(*param_1,&local_28);
        if (local_28 != 0) {
          FUN_142056520(local_28,1);
        }
        plVar5 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
        FUN_142ed4f30(*param_1,1);
        (**(code **)(*(longlong *)*param_1 + 0x298))((longlong *)*param_1,0);
        lVar8 = *param_1;
        if (*(longlong *)(lVar8 + 0x2b8) != 0) {
          LOCK();
          bVar11 = *(int *)(lVar8 + 0x61c) == 0;
          if (bVar11) {
            *(int *)(lVar8 + 0x61c) = 0;
          }
          UNLOCK();
          (**(code **)(**(longlong **)(lVar8 + 0x2b8) + 0x278))
                    (*(longlong **)(lVar8 + 0x2b8),!bVar11);
        }
        lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
        if (lVar8 != 0) {
          if ((char)param_1[2] == '\0') {
            uVar9 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
            FUN_142088910(uVar9,*param_1 + 0x570);
          }
          else if ((char)param_1[2] == '\x01') {
            uVar9 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
            FUN_142088cf0(uVar9,*param_1 + 0x590);
          }
        }
      }
      uVar7 = 1;
      LOCK();
      bVar3 = *(byte *)(*param_1 + 0x4d9);
      if (bVar3 == 1) {
        *(byte *)(*param_1 + 0x4d9) = 0;
      }
      else {
        uVar7 = (ulonglong)bVar3;
      }
      UNLOCK();
    }
  }
  return uVar7;
}



// FUNCTION 142eaa2e0 FUN_142eaa2e0 body=364 status=ok
// SIG undefined FUN_142eaa2e0(void)

void FUN_142eaa2e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *local_28;
  int local_20;
  
  (**(code **)(*(longlong *)*param_1 + 0x2b8))((longlong *)*param_1,0xffffffff,1);
  lVar6 = *param_1;
  plVar2 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  iVar4 = *(int *)(lVar6 + 0x280);
  lVar3 = *(longlong *)(lVar6 + 0x278);
  local_20 = iVar4;
  if (iVar4 != 0) {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_28,iVar4,0);
    plVar2 = local_28;
    lVar3 = lVar3 - (longlong)local_28;
    plVar1 = local_28 + 3;
    do {
      FString::FString(plVar1 + -3,lVar3 + -0x18 + (longlong)plVar1);
      plVar1[-1] = *(longlong *)(lVar3 + -8 + (longlong)plVar1);
      *plVar1 = *(longlong *)(lVar3 + (longlong)plVar1);
      plVar1 = plVar1 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar6 = *param_1;
  }
  iVar5 = local_20;
  plVar1 = *(longlong **)(lVar6 + 0x278);
  for (iVar4 = *(int *)(lVar6 + 0x280); iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 4;
  }
  *(undefined4 *)(lVar6 + 0x280) = 0;
  if (*(int *)(lVar6 + 0x284) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (lVar6 + 0x278,0);
  }
  for (plVar1 = plVar2; plVar1 != plVar2 + (longlong)iVar5 * 4; plVar1 = plVar1 + 4) {
    if (plVar1[3] != 0) {
      FUN_142eb38b0(*param_1,plVar1);
    }
  }
  *(undefined1 *)(*param_1 + 0x2ec) = 1;
  plVar1 = plVar2;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 4;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 142eaa450 FUN_142eaa450 body=547 status=ok
// SIG undefined FUN_142eaa450(void)

ulonglong FUN_142eaa450(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  float fVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  ulonglong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar7 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar7 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    uVar7 = 0;
    iVar4 = *(int *)(lVar8 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar10 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar7 + 8) & 0x30000000) == 0) {
      LOCK();
      iVar4 = *(int *)(*param_1 + 0x600);
      *(int *)(*param_1 + 0x600) = 0;
      UNLOCK();
      if ((iVar4 != 0) || ((char)param_1[2] == '\x01')) {
        lVar8 = *param_1;
        lVar5 = *(longlong *)(lVar8 + 0x2b8);
        if (lVar5 != 0) {
          if ((char)param_1[2] == '\0') {
            FUN_142088910(lVar5,lVar8 + 0x580);
            LOCK();
            *(undefined4 *)(*param_1 + 0x604) = 1;
            UNLOCK();
          }
          else if ((char)param_1[2] == '\x01') {
            FUN_142088cf0(lVar5,lVar8 + 0x5a0);
            (**(code **)(*(longlong *)*param_1 + 0x588))();
          }
        }
        FUN_140ad4c90(*param_1,&local_48);
        if ((local_48 != 0) && (*(longlong *)(local_48 + 0x80) != 0)) {
          plVar9 = (longlong *)FUN_140ad4c90(*param_1,local_38);
          fVar11 = (float)(**(code **)(**(longlong **)(*plVar9 + 0x80) + 0x48))();
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_30 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          if (fVar11 < 1e-08) {
            fVar11 = 30.0;
          }
          *(int *)(*param_1 + 0x568) = (int)(fVar11 * *(float *)(*param_1 + 0x564) + 1.0);
        }
        plVar9 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
      }
      uVar7 = 1;
      LOCK();
      bVar3 = *(byte *)(*param_1 + 0x4d8);
      if (bVar3 == 1) {
        *(byte *)(*param_1 + 0x4d8) = 0;
      }
      else {
        uVar7 = (ulonglong)bVar3;
      }
      UNLOCK();
    }
  }
  return uVar7;
}



// FUNCTION 142eaa680 FUN_142eaa680 body=368 status=ok
// SIG undefined FUN_142eaa680(void)

void FUN_142eaa680(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    uVar12 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    uVar5 = uVar12;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar11;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar11) * 0x18;
    }
    if (((*(uint *)(uVar5 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x210) != 0)) {
      uVar6 = FWeakObjectPtr::Get(param_1 + 1);
      uVar7 = FUN_1416f8720((int)param_1[2]);
      uVar8 = FWeakObjectPtr::Get(param_1 + 1);
      FUN_14208b4d0(*(undefined8 *)(*param_1 + 0x210),uVar8,uVar7,uVar6,1,0);
      if ((DAT_146b17150 != 0) &&
         ((*(longlong *)(*param_1 + 0x430) != 0 &&
          (plVar9 = (longlong *)FUN_142874a50(DAT_146b17150,*(undefined8 *)(DAT_146b17150 + 0x7b0)),
          uVar5 = uVar12, 0 < (int)plVar9[1])))) {
        do {
          lVar4 = *(longlong *)(uVar12 + *plVar9);
          if ((lVar4 != 0) &&
             (lVar10 = FUN_14270bb10(*(undefined8 *)(*param_1 + 0x430)), lVar4 == lVar10)) {
            *(int *)(*param_1 + 0x150) = (int)uVar5;
            return;
          }
          uVar3 = (int)uVar5 + 1;
          uVar12 = uVar12 + 8;
          uVar5 = (ulonglong)uVar3;
        } while ((int)uVar3 < (int)plVar9[1]);
      }
    }
  }
  return;
}



// FUNCTION 142eaa7f0 FUN_142eaa7f0 body=520 status=ok
// SIG undefined FUN_142eaa7f0(void)

undefined8 FUN_142eaa7f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar11 = 0;
  local_res8[0] = 0;
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar7 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar7 != '\0') {
    lVar9 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar9 + 0xc);
    lVar9 = lVar11;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar13 = iVar3 >> 0x1f & 0xffff;
      uVar8 = iVar3 + uVar13;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
              (longlong)(int)((uVar8 & 0xffff) - uVar13) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
      plVar10 = (longlong *)FUN_140ad4c90(*param_1,local_38);
      bVar6 = true;
      bVar5 = false;
      lVar11 = *plVar10;
      goto LAB_142eaa8be;
    }
  }
  plVar10 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_142eaa8be:
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_40;
  if ((bVar5) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar6) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar11 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar4 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    uVar12 = 1;
  }
  else {
    LOCK();
    cVar7 = *(char *)(lVar11 + 0x30);
    if (cVar7 == '\0') {
      *(char *)(lVar11 + 0x30) = '\0';
      cVar7 = '\0';
    }
    UNLOCK();
    if ((cVar7 < '\x05') ||
       (lVar11 = FWeakObjectPtr::Get(param_1 + 1), *(longlong *)(lVar11 + 0x2b8) == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar4 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  return uVar12;
}



// FUNCTION 142eaaa00 FUN_142eaaa00 body=447 status=ok
// SIG undefined FUN_142eaaa00(void)

void FUN_142eaaa00(undefined8 *param_1,longlong param_2,undefined1 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(param_2 + 0x1b0,*param_1);
    *(undefined8 *)(param_2 + 0x1b8) = *param_4;
    *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)param_1[1];
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)param_1[2];
    local_48 = 0;
    local_40 = 0;
    FText::FText(local_38);
    FUN_142eb5c50(*param_1,*param_3,local_38,&local_48);
    plVar3 = *(longlong **)(param_2 + 0x248);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,local_38,1,0);
    }
    local_58 = 0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"icon",10);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    lVar2 = FUN_140ecbdf0(param_2,&local_58,0,6,&local_68);
    plVar3 = local_68;
    for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      FUN_142088910(lVar2,&local_48);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142eaabc0 FUN_142eaabc0 body=514 status=ok
// SIG undefined FUN_142eaabc0(void)

void FUN_142eaabc0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *plStack_58;
  undefined1 local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar7 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar8 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      lVar7 = *param_1;
      *(undefined1 *)(lVar7 + 0x274) = 0;
      *(undefined4 *)(lVar7 + 0x270) = 0;
      *(undefined1 *)(lVar7 + 0x276) = 0;
      FUN_142ed3cf0(lVar7,1);
      FName::FName(local_78,&DAT_143f3eda8,1);
      local_6c = 0;
      local_70 = 0xffffffff;
      FName::FName(local_68,&DAT_143f3eda8,1);
      local_50 = 0;
      local_70 = 0;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      FUN_142eb4390(lVar7 + 0x1f0,lVar7,local_78);
      plVar4 = plStack_58;
      if (plStack_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_58 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_58)(plStack_58);
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
      FName::FName(local_48,&DAT_143f3eda8,1);
      local_40 = 0xffffffff;
      local_3c = 0;
      FName::FName(local_38,&DAT_143f3eda8,1);
      local_30 = 0;
      plStack_28 = (longlong *)0x0;
      local_20 = 0;
      local_40 = 0;
      plVar4 = *(longlong **)(*param_1 + 0x2c8);
      if ((plVar4 != (longlong *)0x0) &&
         ((**(code **)(*plVar4 + 0x310))(plVar4,*param_1,local_48), plVar4 = plStack_28,
         plStack_28 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_28 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 142eaadd0 FUN_142eaadd0 body=868 status=ok
// SIG undefined FUN_142eaadd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eaadd0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined4 *local_b8;
  ulonglong *puStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d4 = (undefined4)param_1[1];
  local_d0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_d8);
  FUN_14172a400(local_d8);
  cVar5 = FWeakObjectPtr::IsValid(&local_d4);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_d4);
    lVar8 = 0;
    iVar3 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar8;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar13 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar13;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (lVar7 = FUN_1416f8720((int)param_1[2]), lVar7 != 0)) {
      lVar7 = FUN_1416f8720((int)param_1[2]);
      iVar3 = *(int *)(lVar7 + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar13 = iVar3 >> 0x1f & 0xffff;
        uVar6 = iVar3 + uVar13;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18;
      }
      if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
        if (*(char *)(*param_1 + 0x3b0) == '\0') {
          *(undefined1 *)(*param_1 + 0x3b0) = 1;
          uVar9 = FUN_1416f8720((int)param_1[2]);
          uVar14 = FUN_142eee5a0(uVar9);
          *(undefined4 *)(*param_1 + 0x3b4) = uVar14;
          if (*(char *)(*param_1 + 0x3b0) == '\0') {
            return;
          }
        }
        uVar9 = FUN_1416f8720((int)param_1[2]);
        FUN_142f10750(uVar9,*(undefined4 *)(*param_1 + 0x3b4));
        plVar10 = (longlong *)FUN_1416f8720((int)param_1[2]);
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_68,*param_1 + 0x330);
        local_58[0] = 0;
        local_b8 = local_58;
        local_30 = '\0';
        puStack_b0 = local_28;
        local_c8 = *puVar11;
        lStack_c0 = puVar11[1];
        local_50 = 0;
        if (lStack_c0 != 0) {
          LOCK();
          *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
          UNLOCK();
        }
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
        uVar9 = FText::Format(local_80,&local_c8,uVar9);
        FText::FText(local_98,uVar9);
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_78 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8);
        if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_40 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        plVar4 = (longlong *)puVar11[1];
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
        (**(code **)(*plVar10 + 0x2b0))(plVar10,local_98,1,*(undefined1 *)(*param_1 + 0x359));
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_90 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        uVar9 = FUN_1416f8720((int)param_1[2]);
        uVar12 = FUN_1416f8720((int)param_1[2]);
        uVar14 = FUN_142eee7f0(uVar9);
        FUN_142f107d0(uVar12,uVar14);
      }
    }
  }
  return;
}



// FUNCTION 142eab140 FUN_142eab140 body=212 status=ok
// SIG undefined FUN_142eab140(void)

void FUN_142eab140(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x240);
      if ((cVar2 == '\0') ||
         ((lVar4 = FWeakObjectPtr::Get(lVar4 + 0x240), *(char *)(lVar4 + 0x5e1) != '\0' &&
          (*(char *)(lVar4 + 0x63c) != '\0')))) {
        (**(code **)(*(longlong *)*param_1 + 0x2d8))();
      }
    }
  }
  return;
}



// FUNCTION 142eab220 FUN_142eab220 body=169 status=ok
// SIG undefined FUN_142eab220(void)

void FUN_142eab220(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (*(char *)(*param_1 + 0x620) = (char)param_1[2], *(char *)((longlong)param_1 + 0x11) != '\0')
       ) {
      *(undefined4 *)(*param_1 + 0x568) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 142eab2d0 FUN_142eab2d0 body=408 status=ok
// SIG undefined FUN_142eab2d0(void)

void FUN_142eab2d0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[4];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x24);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    plVar8 = (longlong *)0x0;
    iVar1 = *(int *)(lVar4 + 0xc);
    plVar5 = plVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      plVar5 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
    }
    if ((*(uint *)(plVar5 + 1) & 0x30000000) == 0) {
      cVar2 = FText::IsEmpty(param_1 + 1);
      if (cVar2 == '\0') {
        lVar4 = FText::ToString(param_1 + 1);
        lVar7 = *param_1;
      }
      else {
        lVar7 = *param_1;
        lVar4 = lVar7 + 0x318;
      }
      FString::operator=(lVar7 + 0x318,lVar4);
      plVar5 = *(longlong **)(lVar7 + 0x248);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x2a8))(plVar5,lVar4,1);
        FUN_142f10ae0(*(undefined8 *)(lVar7 + 0x248),0);
        FUN_142f0de70(*(undefined8 *)(lVar7 + 0x248),PTR_DAT_14673ca48);
      }
      if (((*(int *)(*param_1 + 0x3c0) != 0) &&
          (plVar5 = *(longlong **)(*param_1 + 0x3b8), plVar5 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*plVar5 + 0x18))(), cVar2 != '\0')) {
        cVar2 = FText::IsEmpty(param_1 + 1);
        if (cVar2 == '\0') {
          lVar4 = FText::ToString(param_1 + 1);
          lVar7 = *param_1;
        }
        else {
          lVar7 = *param_1;
          lVar4 = lVar7 + 0x318;
        }
        if (*(int *)(lVar7 + 0x3c0) != 0) {
          plVar8 = *(longlong **)(lVar7 + 0x3b8);
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,lVar7,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 142eab470 FUN_142eab470 body=361 status=ok
// SIG undefined FUN_142eab470(void)

void FUN_142eab470(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x5d8), cVar3 != '\0')) {
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
      lVar5 = *param_1;
      plVar1 = (longlong *)(lVar6 + 0x8e0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar7 + 1,lVar5);
        plVar7[2] = (longlong)&LAB_142eaf294;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar5;
        *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar6 + 0x8e8);
        *(int *)(lVar6 + 0x8e8) = iVar2 + 1;
        if (*(int *)(lVar6 + 0x8ec) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar8 = plVar7;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 142eab5e0 FUN_142eab5e0 body=201 status=ok
// SIG undefined FUN_142eab5e0(void)

void FUN_142eab5e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x310);
      if (cVar3 != '\0') {
        uVar2 = *(undefined8 *)(*param_1 + 800);
        uVar6 = FWeakObjectPtr::Get(*param_1 + 0x310);
        FUN_142ef9920(uVar6,uVar2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142eab6b0 FUN_142eab6b0 body=142 status=ok
// SIG undefined FUN_142eab6b0(void)

void FUN_142eab6b0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*param_1);
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      plVar4 = (longlong *)FUN_1416f8720(*param_1);
      (**(code **)(*plVar4 + 0x518))(plVar4);
      plVar4 = (longlong *)FUN_1416f8720(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000142eab731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x280))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 142eab740 FUN_142eab740 body=675 status=ok
// SIG undefined FUN_142eab740(void)

undefined8 FUN_142eab740(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar12 = 0;
  bVar8 = false;
  local_res8 = 0;
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar9 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar9 == '\0') {
LAB_142eab9c7:
    uVar13 = FUN_1404b03b0();
    FText::FText(param_2,uVar13);
    return param_2;
  }
  lVar11 = FWeakObjectPtr::Get(&local_res18);
  iVar3 = *(int *)(lVar11 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar14 = iVar3 >> 0x1f & 0xffff;
    uVar10 = iVar3 + uVar14;
    lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
             (longlong)(int)((uVar10 & 0xffff) - uVar14) * 0x18;
  }
  if ((*(uint *)(lVar12 + 8) & 0x30000000) != 0) goto LAB_142eab9c7;
  lVar12 = *(longlong *)(*param_1 + 0x248);
  if (lVar12 == 0) {
    plVar16 = (longlong *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lVar11 = *(longlong *)(lVar12 + 0x170);
    plVar16 = *(longlong **)(lVar12 + 0x178);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    if (lVar11 != 0) {
      plVar15 = *(longlong **)(*(longlong *)(*param_1 + 0x248) + 0x178);
      uVar13 = *(undefined8 *)(*(longlong *)(*param_1 + 0x248) + 0x170);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      uVar13 = FUN_14203af90(uVar13,local_68,&DAT_1446b7cec);
      uVar13 = FText::FromString(local_40,uVar13);
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      goto LAB_142eab88d;
    }
  }
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = true;
  uVar13 = FUN_1404b03b0();
  uVar13 = FText::FText(local_58,uVar13);
  plVar15 = (longlong *)CONCAT44(uStackX_c,local_res8);
LAB_142eab88d:
  FText::FText(param_2,uVar13);
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  if ((bVar5) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if ((bVar6) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (plVar15 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if ((bVar8) && (plVar16 != (longlong *)0x0)) {
    LOCK();
    plVar15 = plVar16 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142eab9f0 FUN_142eab9f0 body=212 status=ok
// SIG undefined FUN_142eab9f0(void)

void FUN_142eab9f0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x240);
      if ((cVar2 == '\0') ||
         ((lVar4 = FWeakObjectPtr::Get(lVar4 + 0x240), *(char *)(lVar4 + 0x5e1) != '\0' &&
          (*(char *)(lVar4 + 0x63c) != '\0')))) {
        (**(code **)(*(longlong *)*param_1 + 0x2e8))();
      }
    }
  }
  return;
}



// FUNCTION 142eabad0 FUN_142eabad0 body=123 status=ok
// SIG undefined FUN_142eabad0(void)

void FUN_142eabad0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  (**(code **)(*(longlong *)*param_1 + 0x4b8))((longlong *)*param_1,local_res8);
  cVar1 = FUN_142eb7010(*param_1 + 0x4d8);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x2a8))((longlong *)*param_1,0,0,0xffffffff,0xffffffff);
    return;
  }
  if (cVar1 == '\x01') {
    uVar2 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    FUN_142ed56a0(*param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 142eabb50 FUN_142eabb50 body=1044 status=ok
// SIG undefined FUN_142eabb50(void)

void FUN_142eabb50(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res8 [2];
  int local_res10;
  undefined4 local_res14;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  
  local_res10 = (int)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar10 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar10;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = FUN_1416f8720((int)param_1[2]), lVar5 != 0)) {
      lVar5 = FUN_1416f8720((int)param_1[2]);
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar9;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(lVar10 + 8) & 0x30000000) == 0) {
        FUN_142eb8d60(*param_1,&local_res18);
        FUN_142eb7270(*param_1,&local_res20);
        lVar10 = *param_1;
        fVar15 = *(float *)(lVar10 + 0x1ec) / local_res18;
        fVar18 = *(float *)(lVar10 + 0x2c8);
        fVar19 = *(float *)(lVar10 + 0x2cc);
        fVar16 = *(float *)(lVar10 + 0x1f0) / local_res1c;
        if ((*(longlong *)(lVar10 + 0x430) != 0) &&
           ((cVar3 = FUN_142dcfc60(), cVar3 == '\x02' || (cVar3 == '\x03')))) {
          plVar2 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0);
          puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
          uVar8 = *puVar6;
          fVar12 = (float)DAT_1468b5d88;
          fVar17 = DAT_1468b5d88._4_4_;
          if (*(longlong *)(*param_1 + 0x430) != 0) {
            FUN_142dcfa20(*(longlong *)(*param_1 + 0x430),local_res8,&local_res10);
            fVar12 = (float)local_res8[0];
            fVar17 = (float)local_res10;
          }
          fVar11 = 1.0 / (float)(int)uVar8;
          fVar13 = 1.0 - fVar16;
          fVar14 = 1.0 / (float)(int)((ulonglong)uVar8 >> 0x20);
          fVar18 = fVar18 + (1.0 - fVar15) * 0.5 * fVar11 * local_res18 * local_res20 *
                            ((local_res18 * 0.5 + fVar12) * fVar11 - 0.5) * 4.0;
          fVar15 = 1.0 - (1.0 - fVar15) * 1.5;
          fVar16 = 1.0 - fVar13 * 1.5;
          fVar19 = fVar19 + fVar13 * 0.5 * fVar14 * local_res1c * local_res24 *
                            ((local_res1c * 0.5 + fVar17) * fVar14 - 0.5) * 4.0;
        }
        pfVar7 = (float *)(**(code **)(*(longlong *)*param_1 + 0x4f8))
                                    ((longlong *)*param_1,local_res8);
        local_b8 = fVar15 * 100.0;
        local_b4 = fVar16 * 100.0;
        local_b0 = 0x42c80000;
        fVar12 = *pfVar7;
        fVar17 = pfVar7[1];
        uVar8 = FUN_1416f8720((int)param_1[2]);
        FUN_142f0f050(uVar8,&local_b8);
        local_b0 = 0;
        local_b8 = (local_res20 - fVar15 * local_res20) * 0.5 + fVar18 + fVar12;
        local_b4 = (local_res24 - local_res24 * fVar16) * 0.5 + fVar19 + fVar17;
        uVar8 = FUN_1416f8720((int)param_1[2]);
        FUN_142f0ec10(uVar8,&local_b8);
      }
    }
  }
  return;
}



// FUNCTION 142eabf70 FUN_142eabf70 body=157 status=ok
// SIG undefined FUN_142eabf70(void)

void FUN_142eabf70(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_142f0ad20(*param_1,*(undefined8 *)(*param_1 + 0x3f0));
      return;
    }
  }
  return;
}



// FUNCTION 142eac010 FUN_142eac010 body=268 status=ok
// SIG undefined FUN_142eac010(void)

void FUN_142eac010(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  (**(code **)(*(longlong *)*param_1 + 0x2b8))((longlong *)*param_1,0xffffffff,1);
  plVar3 = (longlong *)*param_1;
  iVar6 = (int)plVar3[0x50];
  while (0 < iVar6) {
    plVar1 = plVar3 + 0x4f;
    iVar6 = (int)plVar3[0x50];
    lVar4 = *plVar1;
    lVar7 = *(longlong *)((longlong)iVar6 * 0x20 + -8 + lVar4);
    if (lVar7 == 0) {
      iVar2 = (int)plVar3[0x50];
      lVar7 = (longlong)iVar2 * 0x20 + -0x20;
      if (*(longlong *)(lVar7 + lVar4) != 0) {
        FMemory::Free();
        iVar6 = (int)plVar3[0x50];
      }
      iVar5 = (iVar6 - (iVar2 + -1)) + -1;
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar7),(void *)((longlong)iVar2 * 0x20 + *plVar1),
                   (longlong)iVar5 << 5);
        iVar6 = (int)plVar3[0x50];
      }
      *(int *)(plVar3 + 0x50) = iVar6 + -1;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    else {
      FUN_142ed0bb0(plVar3,lVar7,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
    }
    plVar3 = (longlong *)*param_1;
    iVar6 = (int)plVar3[0x50];
  }
                    /* WARNING: Could not recover jumptable at 0x000142eac115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x300))();
  return;
}



// FUNCTION 142eac120 FUN_142eac120 body=302 status=ok
// SIG undefined FUN_142eac120(void)

void FUN_142eac120(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar6 = 0;
  uVar5 = uVar6;
  if (*(int *)(param_1 + 10) != 0) {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 4;
    }
    if (plVar7 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 8))();
    }
  }
  uVar5 = (*(code *)param_1[2])(local_20,uVar5);
  FText::FText(local_38,uVar5);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_18 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  puVar3 = *(undefined8 **)*param_1;
  FText::operator=(puVar3 + 0xc,local_38);
  *(undefined1 *)(puVar3 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar3[10] + 0x10))();
  if (*(int *)(puVar3 + 8) != 0) {
    plVar7 = (longlong *)puVar3[6];
    if ((longlong *)puVar3[6] == (longlong *)0x0) {
      plVar7 = puVar3 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      if (plVar7 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar7 + 8))();
      }
      (*(code *)*puVar3)(uVar6);
    }
  }
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



// FUNCTION 142eac250 FUN_142eac250 body=266 status=ok
// SIG undefined FUN_142eac250(void)

void FUN_142eac250(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [4];
  undefined1 local_res1c [4];
  
  lVar3 = *(longlong *)(*param_1 + 0x38);
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x2b8), lVar1 != 0)) {
    FUN_142eb7270(lVar3,local_res18);
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 0x170) != 0) {
      FUN_142ea9150(*(longlong *)(lVar3 + 0x170),"clear");
      local_res10[0] = 0xff0000;
      local_res8[0] = 0;
      FUN_142ea9600(*(undefined8 *)(*param_1 + 0x170),"beginFill",local_res10,local_res8);
      local_res8[0] = 0;
      local_res10[0] = 0;
      FUN_142ea93f0(*(undefined8 *)(*param_1 + 0x170),"drawRect",local_res10,local_res8,local_res18,
                    local_res1c);
      FUN_142ea9150(*(undefined8 *)(*param_1 + 0x170),"endFill");
      lVar3 = *param_1;
    }
    if (*(char *)(lVar3 + 0x178) != '\0') {
      iVar2 = FUN_142eed730(lVar1);
      FUN_142f0bc30(lVar1,*param_1,iVar2 + -1);
    }
  }
  return;
}



// FUNCTION 142eac360 FUN_142eac360 body=254 status=ok
// SIG undefined FUN_142eac360(void)

void FUN_142eac360(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)*param_1 + 0x4b8))((longlong *)*param_1,local_res8);
  cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x59c);
  if (cVar1 == '\0') goto LAB_142eac435;
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x59c);
  if (*(char *)(lVar2 + 0xb8) != '\x02') goto LAB_142eac435;
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x59c);
  lVar2 = FWeakObjectPtr::Get(lVar2 + 0x38);
  if (lVar2 != 0) {
    if (*(longlong *)(*param_1 + 0x430) == 0) {
LAB_142eac3f7:
      uVar5 = 0xffffffff;
    }
    else {
      lVar3 = FUN_14270bb10();
      if (lVar3 == 0) goto LAB_142eac3f7;
      uVar5 = *(undefined4 *)(lVar3 + 0x108);
    }
    FUN_142ef0ef0(lVar2,(float)(double)param_1[1],(float)(double)param_1[2],uVar5);
  }
  uVar4 = FWeakObjectPtr::Get(*param_1 + 0x59c);
  FUN_142f0e0a0(uVar4,1);
LAB_142eac435:
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x5e2) != '\0') {
    *(undefined1 *)(lVar2 + 0x5e1) = 1;
    return;
  }
  *(undefined1 *)(lVar2 + 0x5e2) = 1;
  return;
}



// FUNCTION 142eac460 FUN_142eac460 body=305 status=ok
// SIG undefined FUN_142eac460(void)

void FUN_142eac460(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  plVar4 = *(longlong **)(*param_1 + 0xd8);
  lVar5 = *(longlong *)(*param_1 + 0xd0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    puVar8 = (undefined8 *)FUN_142071690(local_res10);
    fVar9 = (float)(int)*puVar8;
    fVar10 = (float)(int)((ulonglong)*puVar8 >> 0x20);
    FUN_14203d720(lVar5,&local_res8,
                  CONCAT44(fVar10 * *(float *)((longlong)param_1 + 0x24) +
                           fVar9 * *(float *)(param_1 + 4) + *(float *)((longlong)param_1 + 0x2c),
                           fVar10 * *(float *)((longlong)param_1 + 0x14) +
                           fVar9 * *(float *)(param_1 + 2) + *(float *)((longlong)param_1 + 0x1c)));
    FUN_142053150(*param_1,local_res8);
    plVar6 = *(longlong **)(*param_1 + 0x80);
    uVar7 = *(undefined8 *)(*param_1 + 0x78);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    FUN_142033230(uVar7);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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



// FUNCTION 142eac5a0 FUN_142eac5a0 body=301 status=ok
// SIG undefined FUN_142eac5a0(void)

void FUN_142eac5a0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    plVar7 = (longlong *)0x0;
    iVar1 = *(int *)(lVar4 + 0xc);
    plVar5 = plVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      plVar5 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
    }
    if ((*(uint *)(plVar5 + 1) & 0x30000000) == 0) {
      if ((((*(int *)(*param_1 + 0x300) != 0) &&
           (plVar5 = *(longlong **)(*param_1 + 0x2f8), plVar5 != (longlong *)0x0)) &&
          (cVar2 = (**(code **)(*plVar5 + 0x18))(), cVar2 != '\0')) &&
         (((lVar4 = *param_1, *(int *)(lVar4 + 0x300) != 0 &&
           (*(longlong **)(lVar4 + 0x2f8) != (longlong *)0x0)) &&
          (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x2f8) + 0x18))(), cVar2 != '\0')))) {
        if (*(int *)(lVar4 + 0x300) != 0) {
          plVar7 = *(longlong **)(lVar4 + 0x2f8);
        }
        (**(code **)(*plVar7 + 0x40))(plVar7,lVar4);
      }
      FUN_142eb90d0(*param_1,param_1 + 2);
      plVar7 = *(longlong **)(*param_1 + 0x2c8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x308))(plVar7,*param_1,param_1 + 2);
      }
    }
  }
  return;
}



// FUNCTION 142eac6d0 FUN_142eac6d0 body=554 status=ok
// SIG undefined FUN_142eac6d0(void)

void FUN_142eac6d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [48];
  
  lVar7 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x488));
  LOCK();
  piVar1 = (int *)(lVar7 + 0x494);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  plVar2 = (longlong *)*param_1;
  plVar9 = (longlong *)0x0;
  lVar7 = param_1[1];
  if ((int)plVar2[0x88] != *(int *)((longlong)plVar2 + 0x46c)) {
    plVar4 = (longlong *)plVar2[0x8f];
    if ((longlong *)plVar2[0x8f] == (longlong *)0x0) {
      plVar4 = plVar2 + 0x8e;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                    (longlong)(int)plVar2[0x90] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(plVar2[0x87] + (longlong)iVar3 * 0x18);
        if (*(longlong *)(plVar2[0x87] + (longlong)iVar3 * 0x18) == lVar7) {
          if (iVar3 != -1) goto LAB_142eac783;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  plVar4 = plVar9;
LAB_142eac783:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar9;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar7 = *plVar5;
    FUN_140590080(local_68);
    if (lVar7 != 0) {
      if (plVar2[0x86] != 0) {
        plVar9 = *(longlong **)(plVar2[0x86] + 0x848);
      }
      if (plVar9 == (longlong *)0x0) {
        local_80 = 0;
        local_88 = 0;
        local_70 = 0;
        local_78 = 0;
        uVar8 = (**(code **)(*plVar2 + 0x148))(plVar2);
        lVar7 = FUN_1405a1e30(local_38,uVar8,lVar7,&local_78,0,&local_88);
        FUN_1405913a0(local_68,lVar7);
        local_58 = *(undefined4 *)(lVar7 + 0x10);
        FUN_140591060(local_38);
      }
      else {
        lVar6 = FUN_14059b7e0(plVar9,1);
        if (lVar6 != 0) {
          lVar7 = FUN_1405a3150(lVar6,local_50,lVar7,0);
          FUN_1405913a0(local_68,lVar7);
          local_58 = *(undefined4 *)(lVar7 + 0x10);
          FUN_140591060(local_50);
        }
      }
    }
    FUN_140591060(local_68);
  }
  lVar7 = *param_1;
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x488));
  LOCK();
  piVar1 = (int *)(lVar7 + 0x494);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return;
}



// FUNCTION 142eac900 FUN_142eac900 body=377 status=ok
// SIG undefined FUN_142eac900(void)

void FUN_142eac900(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[4];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x24);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    plVar8 = (longlong *)0x0;
    iVar1 = *(int *)(lVar4 + 0xc);
    plVar5 = plVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      plVar5 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
    }
    if (((((*(uint *)(plVar5 + 1) & 0x30000000) == 0) && (*(int *)(*param_1 + 0x3e0) != 0)) &&
        (plVar5 = *(longlong **)(*param_1 + 0x3d8), plVar5 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar5 + 0x18))(), cVar2 != '\0')) {
      lVar4 = *param_1;
      FString::operator=(lVar4 + 0x318,lVar4 + 0x318);
      plVar5 = *(longlong **)(lVar4 + 0x248);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x2a8))(plVar5,lVar4 + 0x318,1);
        FUN_142f10ae0(*(undefined8 *)(lVar4 + 0x248),0);
        FUN_142f0de70(*(undefined8 *)(lVar4 + 0x248),PTR_DAT_14673ca48);
      }
      cVar2 = FText::IsEmpty(param_1 + 1);
      if (cVar2 == '\0') {
        lVar4 = FText::ToString(param_1 + 1);
        lVar7 = *param_1;
      }
      else {
        lVar7 = *param_1;
        lVar4 = lVar7 + 0x318;
      }
      if (*(int *)(lVar7 + 0x3e0) != 0) {
        plVar8 = *(longlong **)(lVar7 + 0x3d8);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,lVar7,lVar4);
    }
  }
  return;
}



// FUNCTION 142eaca80 FUN_142eaca80 body=236 status=ok
// SIG undefined FUN_142eaca80(void)

void FUN_142eaca80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  
  puVar1 = param_1 + 6;
  cVar6 = FWeakObjectPtr::IsValid(puVar1);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(puVar1);
    iVar2 = *(int *)(lVar8 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar7 = iVar2 + uVar10;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      FWeakObjectPtr::Get(puVar1);
      lVar8 = FWeakObjectPtr::Get(puVar1);
      *(undefined1 *)(lVar8 + 0x21a) = 1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      *(undefined4 *)(lVar8 + 0x21c) = *param_1;
      *(undefined4 *)(lVar8 + 0x220) = uVar3;
      *(undefined4 *)(lVar8 + 0x224) = uVar4;
      *(undefined4 *)(lVar8 + 0x228) = uVar5;
      *(undefined8 *)(lVar8 + 0x22c) = *(undefined8 *)(param_1 + 4);
      FUN_142ecf3f0(lVar8);
      plVar9 = (longlong *)FWeakObjectPtr::Get(puVar1);
      (**(code **)(*plVar9 + 0x5b8))(plVar9,(longlong)plVar9 + 0x21c);
      *(undefined1 *)((longlong)plVar9 + 0x21a) = 1;
      FUN_142ecf3f0(plVar9);
      plVar9 = (longlong *)FWeakObjectPtr::Get(puVar1);
      (**(code **)(*plVar9 + 0x530))(plVar9);
    }
  }
  return;
}



// FUNCTION 142eacb70 FUN_142eacb70 body=117 status=ok
// SIG undefined FUN_142eacb70(void)

void FUN_142eacb70(longlong *param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)*param_1;
  if (plVar1[0xb6] != 0) {
    FUN_142ee3e70(plVar1[0xb6]);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1[0xb5] != 0) {
    FUN_142f0d400(plVar1[0xb5],0,0);
    FUN_142ee8600(*(undefined8 *)(*param_1 + 0x5a8));
    plVar1 = (longlong *)*param_1;
  }
  (**(code **)(*plVar1 + 0x4c0))(plVar1,local_res8);
  if (param_1[1] != 0) {
    FUN_142057920();
    return;
  }
  return;
}



// FUNCTION 142eacbf0 FUN_142eacbf0 body=123 status=ok
// SIG undefined FUN_142eacbf0(void)

void FUN_142eacbf0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x370) != 0) {
    FUN_142f06340(*(longlong *)(lVar1 + 0x370),lVar1 + 0x380);
    FUN_142f06340(*(undefined8 *)(*param_1 + 0x370),*param_1 + 0x388);
    lVar1 = *param_1;
  }
  if (*(longlong *)(lVar1 + 0x378) != 0) {
    FUN_142f06340(*(longlong *)(lVar1 + 0x378),lVar1 + 0x390);
    lVar1 = *param_1;
  }
  *(undefined8 *)(lVar1 + 0x380) = 0;
  *(undefined8 *)(*param_1 + 0x388) = 0;
  *(undefined8 *)(*param_1 + 0x390) = 0;
  return;
}



// FUNCTION 142eacc70 FUN_142eacc70 body=212 status=ok
// SIG undefined FUN_142eacc70(void)

void FUN_142eacc70(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x240);
      if ((cVar2 == '\0') ||
         ((lVar4 = FWeakObjectPtr::Get(lVar4 + 0x240), *(char *)(lVar4 + 0x5e1) != '\0' &&
          (*(char *)(lVar4 + 0x63c) != '\0')))) {
        (**(code **)(*(longlong *)*param_1 + 0x2f0))();
      }
    }
  }
  return;
}



// FUNCTION 142eacd50 FUN_142eacd50 body=366 status=ok
// SIG undefined FUN_142eacd50(void)

void FUN_142eacd50(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 local_res8 [2];
  
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    local_res8[0] = 0xffffffff;
    uVar4 = FUN_1416f8720(*param_1);
    FUN_14170c210(local_res8,uVar4);
    lVar3 = FUN_1416f8720(local_res8[0]);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x598);
    if (cVar2 != '\0') {
      lVar3 = FUN_1416f8720(local_res8[0]);
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x598);
      lVar3 = *(longlong *)(lVar3 + 0x508);
      if (lVar3 != 0) {
        lVar5 = ULocalPlayer::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && ((*(uint *)(lVar3 + 8) >> 4 & 1) == 0)) &&
           (*(longlong *)(lVar3 + 0x20) != 0)) {
          lVar5 = FUN_1416f8720(local_res8[0]);
          plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x598);
          if ((*(uint *)(lVar3 + 8) >> 4 & 1) == 0) {
            uVar4 = *(undefined8 *)(lVar3 + 0x20);
          }
          else {
            uVar4 = 0;
          }
          uVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
          plVar8 = (longlong *)FUN_1428749e0(uVar4,uVar7);
          plVar6 = (longlong *)*plVar8;
          for (plVar10 = plVar6; plVar10 != plVar6 + (int)plVar8[1]; plVar10 = plVar10 + 1) {
            if (*plVar10 == lVar3) {
              iVar9 = (int)((longlong)plVar10 - (longlong)plVar6 >> 3);
              goto LAB_142eace83;
            }
          }
        }
      }
    }
    iVar9 = -1;
LAB_142eace83:
    FUN_1416f8340(local_res8[0]);
    if (iVar9 == -1) {
      uVar4 = FUN_1416f8720(*param_1);
      FUN_142eb3570(uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 142eacec0 FUN_142eacec0 body=157 status=ok
// SIG undefined FUN_142eacec0(void)

void FUN_142eacec0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_142f0ad20(*param_1,*(undefined8 *)(*param_1 + 1000));
      return;
    }
  }
  return;
}



// FUNCTION 142eacf60 FUN_142eacf60 body=157 status=ok
// SIG undefined FUN_142eacf60(void)

void FUN_142eacf60(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_142f0ad20(*param_1,*(undefined8 *)(*param_1 + 0x3f8));
      return;
    }
  }
  return;
}



// FUNCTION 142ead000 FUN_142ead000 body=535 status=ok
// SIG undefined FUN_142ead000(void)

void FUN_142ead000(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  local_res10 = (undefined4)param_1[1];
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar7 + 0xc);
    pwVar8 = (wchar_t *)0x0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar11;
      pwVar8 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18);
    }
    if (((*(uint *)(pwVar8 + 4) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x698) != 0)) {
      lVar7 = FUN_142eb6240();
      cVar5 = FText::IsEmpty(lVar7 + 0x38);
      uVar6 = (uint)(cVar5 == '\0');
      if (*(char *)(*param_1 + 0x6a8) != '\x01') {
        uVar6 = (*(int *)(*(longlong *)(*param_1 + 0x698) + 0x280) - (uint)(cVar5 == '\0')) - 1;
      }
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGbxGFxContextualMenu::OnSelectionChanged",L"::");
      pwVar8 = (wchar_t *)0x0;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar8 = pwVar4;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      lVar7 = *param_1;
      lVar3 = CONCAT44(uStackX_14,local_res10);
      lVar2 = *(longlong *)(lVar7 + 0x698);
      plVar12 = (longlong *)(lVar2 + 0x180);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,lVar7);
      local_res8 = 0;
      local_30 = lVar3;
      if ((lVar3 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_30);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      iVar1 = *(int *)(lVar2 + 0x188);
      *(int *)(lVar2 + 0x188) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar12);
      *puVar10 = local_38;
      puVar10[1] = local_34;
      *(longlong *)(puVar10 + 2) = local_30;
      (**(code **)(**(longlong **)(*param_1 + 0x698) + 0x2b8))
                (*(longlong **)(*param_1 + 0x698),uVar6,0,0);
    }
  }
  return;
}



// FUNCTION 142ead220 FUN_142ead220 body=342 status=ok
// SIG undefined FUN_142ead220(void)

void FUN_142ead220(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(&local_res10);
  iVar1 = *(int *)(lVar4 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar6;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) & 0x30000000) != 0) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)(*param_1 + 0x170) + 0x40))();
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x2c4) == '\x01') {
    *(bool *)(lVar4 + 0x2c6) = *(char *)(lVar4 + 0x2c6) != '\x01';
  }
  else {
    if (*(char *)(lVar4 + 0x2c4) != '\x02') goto LAB_142ead2f4;
    *(undefined1 *)(lVar4 + 0x2c6) = 1;
  }
  FUN_142ecf920(lVar4,0);
LAB_142ead2f4:
  lVar4 = *param_1;
  if ((*(int *)(lVar4 + 0x1a8) != 0) || (*(int *)(lVar4 + 0x1ac) != 0)) {
    FUN_142f0ad20(lVar4,*(undefined8 *)(lVar4 + 0x1a8));
    lVar4 = *param_1;
  }
  if (*(char *)(lVar4 + 0x275) != '\0') {
    return;
  }
  if (*(char *)(lVar4 + 0x276) == '\0') {
    if ((*(char *)((longlong)param_1 + 0x1c) != '\0') ||
       (lVar5 = lVar4 + 0x1c0, DAT_146b3d9b0 != param_1[2])) {
      lVar5 = lVar4 + 0x1b0;
    }
    FUN_142eb4390(lVar5,lVar4);
    return;
  }
  *(undefined1 *)(lVar4 + 0x276) = 0;
  return;
}



// FUNCTION 142ead380 FUN_142ead380 body=212 status=ok
// SIG undefined FUN_142ead380(void)

void FUN_142ead380(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x240);
      if ((cVar2 == '\0') ||
         ((lVar4 = FWeakObjectPtr::Get(lVar4 + 0x240), *(char *)(lVar4 + 0x5e1) != '\0' &&
          (*(char *)(lVar4 + 0x63c) != '\0')))) {
        (**(code **)(*(longlong *)*param_1 + 0x2e0))();
      }
    }
  }
  return;
}


